// SkynetAerialDrone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seeds the randon number generator
	
	char again = 'y';

	cout << "Generating random enemy location on 8x8 Grid for HK to hunt...\n" ;

	do
	{
		int Hostile = rand() % 64 + 1; // Chooses a randon number between 1 and 64
		int HK_Tries = 0;
		int SearchHighNumber = 64;
		int SearchLowNumber = 1;
		int HK_Guess = ((SearchHighNumber - SearchLowNumber) / 2) + SearchLowNumber;

		cout << "The enemy is located at sector " << Hostile << " on an 8x8 grid with 1-64 sectors.\n";
		cout << "Skynet HK-Aerial Initializing software.....\n";
		cout << "======================================================================================";
		while (HK_Tries != Hostile)
		{
			cout << "Skynet HK-Aerial Radar sending out Ping #" << HK_Tries <<".";
			if (HK_Guess > Hostile)
			{
				SearchLowNumber = HK_Guess;
				cout << "The target location Prediction of " << HK_Guess << " Was higher than the actual enemy location of " << Hostile;
				cout << "The HK will now search between sectors " << SearchLowNumber << "-" << SearchHighNumber << ".\n";
				cout << "=================================================================================";

			}
		}
	}
	 

    return 0;
}

