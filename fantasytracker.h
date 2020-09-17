#ifndef FANTASYTRACKER_H
#define FANTASYTRACKER_H

#include <QtWidgets/QMainWindow>
#include "ui_fantasytracker.h"
#include "ui_Settings.h"
#include "settings.h"
#include <QtNetwork\qnetworkaccessmanager.h>
#include <QtNetwork\qnetworkreply.h>
#include <QtNetwork\qnetworkrequest.h>


class FantasyTracker : public QMainWindow
{
	Q_OBJECT

public:
	FantasyTracker(QWidget *parent = 0);
	~FantasyTracker();


private slots:
	void on_actionSettings_triggered();
	void on_actionConnect_triggered();
	void downloadFinished(QNetworkReply*);

private:
	Ui::FantasyTrackerClass ui;

	QMenu* menuOptions;
	QMenu* menuHelp;
	QAction* actionSettings;
	QString myURL = "https://api.sportsdata.io/v3/nba/stats/json/PlayerSeasonStats/2020?key=c48d9ff96d5b41708b8dca7a0b9c9667";

};


#endif // FANTASYTRACKER_H
