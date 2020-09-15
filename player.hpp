#pragma once
#include <QObject>

class Player : public QObject {
	Q_OBJECT

public:
	Player(QObject * parent = Q_NULLPTR);
	~Player();

	void read(const QJsonArray &json);

private:
	int playerId;
	QString name;
	QString team;
	QString position;
	int gP;
	double fGM;
	double fGP;
	double tPM;
	double tPP;
	double fTM;
	double FTA;
	double oR;
	double dR;
	double rebounds;
	double assists;
	double steals;
	double blocks;
	double points;
	double turnovers;
		
};
