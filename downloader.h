#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkreply.h>
#include <QtNetwork/qnetworkrequest.h>
#include <qmessagebox.h>

class Downloader : public QObject
{
	Q_OBJECT

public:
	Downloader(QObject *parent=nullptr);

	~Downloader();

	void download(const QUrl &url);

public slots:
	void sslErrors(const QList<QSslError> &errors);

signals:

private:
	QNetworkAccessManager naManager;
	QNetworkReply *reply = nullptr;


private slots:
	void downloadFinished();
	QString downloadReadyRead();
	
};

#endif // DOWNLOADER_H
