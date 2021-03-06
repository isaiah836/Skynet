// SkynetAerialDrone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seeds the randon number generator
	
	char again = 'y'; //Variable that controls the loop

	cout << "Generating random enemy location on 8x8 Grid for HK to hunt...\n" ;
	 
	while (again != 'n')
	{
		int Hostile = rand() % 64 + 1; // Chooses a randon number between 1 and 64
		int HK_Tries = 1;
		int SearchHighNumber = 64;
		int SearchLowNumber = 1;
		int HK_Guess = ((SearchHighNumber - SearchLowNumber) / 2) + SearchLowNumber;

		cout << "The enemy is located at sector " << Hostile << " on an 8x8 grid with 1-64 sectors.\n";
		cout << "Skynet HK-Aerial Initializing software.....\n";
		cout << "======================================================================================\n";
		do
		{
			HK_Guess = ((SearchHighNumber - SearchLowNumber) / 2) + SearchLowNumber; //This makes the hk guess again everytime it loops
			cout << "Skynet HK-Aerial Radar sending out Ping #" << HK_Tries <<".\n";
			if (HK_Guess > Hostile)
			{
				SearchHighNumber = HK_Guess;
				cout << "The target location Prediction of " << HK_Guess << " Was higher than the actual enemy location of " << Hostile << ".\n";
				cout << "The HK will now search between sectors " << SearchLowNumber << "-" << SearchHighNumber << ".\n";
				cout << "=================================================================================\n";
				HK_Tries++;

			}
			else if (HK_Guess < Hostile)
			{
				SearchLowNumber = HK_Guess;
				cout << "The target location prediction of " << HK_Guess << " was higher than the actual enemy location of " << Hostile << ".\n";
				cout << "The HK will now search between sectors " << SearchLowNumber << "-" << SearchHighNumber << ".\n";
				cout << "=================================================================================\n";
				HK_Tries++;
			}
			else if (HK_Guess == Hostile)
			{
				cout << "Enemy was hiding at location #" << Hostile << "\n";
				cout << "Target was found at location #" << HK_Guess << "\n";
				cout << "Skynet HK-Aerial software took " << HK_Tries << " predictions to find the enemy locationon a grid size of 8x8 (64)\n\n";
				cout << " Would you like to play again?";
				cin >> again;
				system("cls");
			}
		} while (HK_Guess != Hostile);
	}
	cout << "Goodbye.\n";

    return 0;
}

