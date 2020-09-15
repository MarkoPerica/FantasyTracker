#ifndef FANTASYTRACKER_H
#define FANTASYTRACKER_H

#include <QtWidgets/QMainWindow>
#include "ui_fantasytracker.h"
#include "ui_Settings.h"
#include "settings.h"

class FantasyTracker : public QMainWindow
{
	Q_OBJECT

public:
	FantasyTracker(QWidget *parent = 0);
	~FantasyTracker();


private slots:
	void on_actionSettings_triggered();

private:
	Ui::FantasyTrackerClass ui;

	QMenu* menuOptions;
	QMenu* menuHelp;
	QAction* actionSettings;

};


#endif // FANTASYTRACKER_H
