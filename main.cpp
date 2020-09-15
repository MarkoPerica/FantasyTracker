#include "stdafx.h"
#include "fantasytracker.h"
#include <QtWidgets/QApplication>
#include "downloader.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FantasyTracker w;
	w.show();
	Downloader players;
	Downloader games;
	QUrl uPlayers("https://api.sportsdata.io/v3/nba/stats/json/PlayerSeasonStats/2020?key=c48d9ff96d5b41708b8dca7a0b9c9667");
	QUrl uGames("https://api.sportsdata.io/v3/nba/scores/json/Games/2020?key=c48d9ff96d5b41708b8dca7a0b9c9667");
	players.download(uPlayers);
	games.download(uGames);
	return a.exec();
}
