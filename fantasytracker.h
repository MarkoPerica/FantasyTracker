#ifndef FANTASYTRACKER_H
#define FANTASYTRACKER_H

#include <QtWidgets/QMainWindow>
#include "ui_fantasytracker.h"

class FantasyTracker : public QMainWindow
{
	Q_OBJECT

public:
	FantasyTracker(QWidget *parent = 0);
	~FantasyTracker();

private:
	Ui::FantasyTrackerClass ui;
};

#endif // FANTASYTRACKER_H
