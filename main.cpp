#include "stdafx.h"
#include "fantasytracker.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FantasyTracker w;
	w.show();
	return a.exec();
}
