#include "stdafx.h"
#include "fantasytracker.h"
#include "settings.h"

void FantasyTracker::downloadFinished(QNetworkReply *reply) {
	QByteArray bytes = reply->readAll();
	QString str = QString::fromUtf8(bytes.data(), bytes.size());
	int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
	qDebug() << QVariant(statusCode).toString();

	if (reply->error() == QNetworkReply::NoError) {
		QStringList propertyKeys;
		QStringList propertyValues;

		QString strReply = (QString)reply->readAll();

		QMessageBox::critical(0, "Error", "Download failed\n");

		QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());


	}
	else
		QMessageBox::critical(0, "Error", "Download failed\n");

	reply->deleteLater();
}

FantasyTracker::FantasyTracker(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

FantasyTracker::~FantasyTracker()
{

}

void FantasyTracker::on_actionSettings_triggered() {
	
	settings settings;
	settings.setModal(true);
	settings.setFixedSize(650,350);
	settings.exec();	
}

void FantasyTracker::on_actionConnect_triggered() {
	QNetworkAccessManager *nAM = new QNetworkAccessManager(this);
	connect(nAM, &QNetworkAccessManager::finished, this, &FantasyTracker::downloadFinished);
	const QUrl url = QUrl(myURL);
	QNetworkRequest request(url);
	nAM->get(request);
}


