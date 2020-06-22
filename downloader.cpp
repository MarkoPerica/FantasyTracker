#include "stdafx.h"
#include "downloader.h"

Downloader::Downloader(QObject *parent)
	: QObject(parent)
{
	nam = new QNetworkAccessManager(this);
	connect(nam, &QNetworkAccessManager::finished, this, &Downloader::onDownloadFinished);
}

Downloader::~Downloader()
{

}

void Downloader::onDownloadFinished(QNetworkReply *reply) {
	if (reply->error() != QNetworkReply::NoError) {
		emit errorString(reply->errorString());
	}
	else {
		saveToDisk(reply);
	}
	reply->deleteLater();
	emit available(true);
	emit running(false);
}

void Downloader::saveToDisk(QNetworkReply *reply) {
	QFile f(saveFile);
	f.open(QIODevice::WriteOnly | QIODevice::Truncate);
	f.write(reply->readAll());
	f.close();
}

void Downloader::download(const QUrl &url, const QString &file) {
	saveFile = file;
	QNetworkRequest req(url);
	QNetworkReply *reply = nam->get(req);
	connect(reply, &QNetworkReply::downloadProgress, this, &Downloader::downloadProgress);
	emit available(false);
	emit running(true);
}
