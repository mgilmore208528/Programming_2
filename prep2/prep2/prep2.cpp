// prep2.cpp : hitting average calculator
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double highestAverage = -100;
	string recordHolder = "";
	bool clear = true;
	while (clear)
	{
		string teams[5] = { "Red sox", "Cubs", "Mets", "Cardinals", "White sox" };
		int teamChoice = NULL;
		string playerName = "";
		double singles = 5;
		double doubles = 2;
		double triples = 7;
		double homeruns = 0;
		double batTimes = 0;
		double batAverage = 0;
		double slugAverage = 0;
		char choice = ' ';

		cout << "What is the name of the batter?: ";
		cin >> playerName;
		for (int i = 0; i < 5; i++)
		{
			cout << endl << (i + 1) << " - " << teams[i];
		}

		cout << endl << "Which team is he a part of?(1-5): ";
		cin >> teamChoice;
		teamChoice--;
		cout << endl << "how many singles?: ";
		cin >> singles;
		cout << endl << "how many doubles?: ";
		cin >> doubles;
		cout << endl << "how many tripples?: ";
		cin >> triples;
		cout << endl << "how many homeruns?: ";
		cin >> homeruns;
		cout << endl << "how many times did he bat?: ";
		cin >> batTimes;

		batAverage = ((singles + doubles + triples + homeruns) / batTimes);
		slugAverage = (singles + (doubles * 2) + (triples * 3) + (homeruns * 4)) / batTimes;


		cout << playerName << " from the " << teams[teamChoice] << " hit: " << endl;
		cout << "Singles: " << singles << endl << "Doubles: " << doubles << endl << "Triples: " << triples << endl << "Homeruns: " << homeruns << endl;
		cout << "his batting average is " << batAverage << endl;
		cout << "and his slugging average is " << slugAverage << endl << endl;

		if (batAverage > highestAverage)
		{
			highestAverage = batAverage;
			recordHolder = playerName;
		}

		cout << "The current highest batting average on record is " << highestAverage << endl;
		cout << "held by " << recordHolder;

		cout << endl << endl << "would you like to clear and calculate again?(y/n): ";
		cin >> choice;
		if (tolower(choice) != 'y')
		{
			clear = false;
		}
	}
	cout << endl << endl << "press <Enter> to exit";
	cin.ignore();
	cin.ignore();
	return 0;
}

