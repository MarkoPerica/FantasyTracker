#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "ui_settings.h"

class settings : public QDialog, public Ui::settings
{
	Q_OBJECT

public:
	settings(QWidget *parent = 0);
	~settings();
private:
	QLineEdit* fGMBox;
	QLineEdit* fGPBox;
	QLineEdit* tPMBox;
	QLineEdit* tPPBox;
	QLineEdit* fTMBox;
	QLineEdit* FTABox;
	QLineEdit* oRBox;
	QLineEdit* dRBox;
	QLineEdit* reboundsBox;
	QLineEdit* assistsBox;
	QLineEdit* stealsBox;
	QLineEdit* blocksBox;
	QLineEdit* pointsBox;
	QLineEdit* turnoversBox;
};

#endif // SETTINGS_H
