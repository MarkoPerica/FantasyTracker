#include "stdafx.h"
#include "downloader.h"

Downloader::Downloader(QObject *parent)
	: QObject(parent)
{
}

Downloader::~Downloader()
{
}


void Downloader::download(const QUrl &url) {
	QNetworkRequest request(url);
	reply = naManager.get(request);
#if QT_CONFIG(ssl)
	connect(reply, &QNetworkReply::sslErrors, this, &Downloader::sslErrors);
#endif
	connect(reply, &QNetworkReply::finished, this, &Downloader::downloadFinished);
	connect(reply, &QNetworkReply::readyRead, this, &Downloader::downloadReadyRead);
}

void Downloader::downloadFinished() {
	if (reply->error()) { QMessageBox::critical(0, "Error", "Download failed\n"); }

	reply->deleteLater();
}

QString Downloader::downloadReadyRead() {
	QString ReplyText = reply->readAll();

	return ReplyText;
}
 

void Downloader::sslErrors(const QList<QSslError> &sslErrors) {
#if QT_CONFIG(ssl)
	for (const QSslError &error : sslErrors) { QMessageBox::critical(0, "Error", "SSL error\n"); }
#else
	Q_UNUSED(sslErrors);
#endif
}

