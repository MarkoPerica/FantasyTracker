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
};

#endif // SETTINGS_H
