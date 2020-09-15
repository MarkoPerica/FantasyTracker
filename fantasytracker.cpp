#include "stdafx.h"
#include "fantasytracker.h"
#include "settings.h";

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
