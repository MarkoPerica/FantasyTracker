#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtNetwork/qnetworkreply.h>
#include <QtNetwork/qnetworkrequest.h>

class Downloader : public QObject
{
	Q_OBJECT

public:
	Downloader(QObject *parent);
	~Downloader();

public slots:
	void download(const QUrl &url, const QString &file);

signals:
	void errorString(const QString &);
	void available(bool);
	void running(bool);
	void downloadProgress(qint64, qint64);

private:
	QNetworkAccessManager *nam;
	QString saveFile;

	void saveToDisk(QNetworkReply *);

private slots:
	void onDownloadFinished(QNetworkReply *);
	
};

#endif // DOWNLOADER_H
