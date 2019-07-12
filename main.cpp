// Mission X RPG
// Copyright (C) 2019 H6899

#include <iostream>

using namespace std;

int main()
{
	int playerHealth;
	int enemyHealth;
	int playerDamage;
	int enemyDamage;
	int money;
	int xp;
	int battleXp;
	int enemyXp;
	//int amount;
	int effect;
	int shopMoney;
	int smallPotion;
	int largePotion;
	int hasName;
	//int rng;
	char choice;
	string menu;
	string player;
	string enemy;

	menu = "\nChoose a number: ";

	mainMenu:
		system("clear");
		
		cout << "\033[32;1m      ___  __  __ ___  _               _   _   __ " << endl;
		cout << " │╲╱│  │  (_  (_   │  ╱ ╲ │╲ │   ╲╱   │_) │_) ╱__ " << endl;
		cout << " │  │ _│_ __) __) _│_ ╲_╱ │ ╲│   ╱╲   │ ╲ │   ╲_│ \n\n";

		cout << "\033[37;0m[1] Continue" << endl;
		cout << "[2] New Game" << endl;
		cout << "[3] Exit" << endl;
		//cout << "[4] Debug" << endl;
		cout << menu;
		cin >> choice;

		if( choice == '1' ) {
			goto continueGame;

		} else if( choice == '2' ) {
			goto newGame;

		} else if( choice == '3' ) {
			return 0;
			
		//} else if( choice == '4' ) {
		//	goto debug;

		} else {
			goto mainMenu;
		}

	continueGame:
		if ( hasName == 1 ) {
			goto home;
			
		} else {
			goto mainMenu;
		}
	

	newGame:
		system("clear");
		cout << "Do you want to start a new game?" << endl;
		cout << "[1] Yes" << endl;
		cout << "[2] No" << endl;
		cout << menu;
		cin >> choice;

		if( choice == '1' ) {
			playerHealth = 100;
			enemyDamage = 21;
			money = 40;
			xp = 0;
			battleXp = 0;
			smallPotion = 0;
			largePotion = 0;
			hasName = 1;
			goto name;

		} else if( choice == '2' ) {
			goto mainMenu;

		} else {
			goto newGame;
		}

	name:
		system("clear");
		cout << "What is your name?" << endl;
		cout << "Name: ";
		cin >> player;
		goto nameCorrect;
		//goto home;
		
	nameCorrect:
		system("clear");
		cout << "Is your name " << player << "?\n" << endl;
		cout << "[1] Yes" << endl;
		cout << "[2] No" << endl;
		cout << menu;
		cin >> choice;
		
		if ( choice == '1' ) {
			goto home;
			
		} else if( choice == '2' ) {
			goto name;
			
		} else {
			goto nameCorrect;
		}

	home:
		system("clear");
		battleXp = 0;
		//cout << enemyHealth << endl;
		cout << "Welcome back " << player << "!\n\n";
		
		cout << "HP: " << playerHealth << endl;
		cout << "XP: " << xp << endl;
		cout << "Money: " << money << "$" << endl;
		
		cout << "\n[1] Map" << endl;
		cout << "[2] Shop" << endl;
		cout << "[3] Back to menu" << endl;
		cout << menu;
		cin >> choice;

		if ( choice == '1' ) {
			goto map;
			
		} else if( choice == '2' ) {
			goto shop;
			
		} else if( choice == '3' ) {
			goto mainMenu;
			
		} else {
			goto home;
		}

	map:
		system("clear");
		cout << "XP: " << xp << endl;
		cout << "\nMap" << endl;
		cout << "[1] battleTest1    [Requires at least 0 XP]" << endl;
		cout << "[2] battleTest2    [Requires at least 100 XP]" << endl;
		cout << "[3] Back" << endl;
		cout << menu;
		cin >> choice;

		if( choice == '1' ) {
			goto battleTest1;

		} else if( choice == '2' ) {
			goto battleTest2;

		} else if( choice == '3' ) {
			goto home;

		} else {
			goto map;
		}

	battleTest1:
		enemy = "battleTest1";
		//playerDamage = 11;
		enemyHealth = 100;
		//enemyXp = 4;
		effect = 40;
		goto battle;
		
	battleTest2:
		if ( xp < 100 ) {
			cout << "You need at least " << 100-xp << " more XP to fight against " << enemy << "." << endl;
			cin >> choice;
			goto map;
		} else {
		enemy = "battleTest2";
		playerDamage = 36;
		enemyHealth = 200;
		enemyXp = 6;
		effect = 80;
		goto battle;
		}

	battle:
		system("clear");
		
		//if ( rng == 50 ) {
		//	goto poison;
		//	
		//	} else {
		//rng = rand() % 100 + 1;
		
		playerDamage = rand() % 10 + 12;
		enemyDamage = rand() % 14 + 16;
		enemyXp = rand() % 3 + 5;
		cout << "\033[44m";
		cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
		cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
		cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
		cout << "██████████████████████████████████████████████" << endl;
		cout << "\033[0;32m";
		cout << "██████████████████████████████████████████████" << endl;
		cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
		cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
		cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
		cout << "\n\033[34;0m" << player << " - " << playerHealth << " HP\033[33;1;5m   VS   \033[0;31m" << enemy << " - " << enemyHealth << " HP\n" << endl;
		cout << "\033[0m";
		cout << "╭──────────────────────╮" << endl;
		cout << "│ [1] Fight  [2] Items │" << endl;
		cout << "│ [3] Run              │" << endl;
		cout << "╰──────────────────────╯" << endl;
		
		cout << menu;
		cin >> choice;

		if( choice == '1' ) {
			goto attackChoice;

		} else if( choice == '2' ) {
			goto items;
			
		} else if( choice == '3' ) {
			goto map;

		} else {
			goto battle;
		}

	attackChoice:
		system("clear");
		cout << "\033[44m";
		cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
		cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
		cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
		cout << "██████████████████████████████████████████████" << endl;
		cout << "\033[0;32m";
		cout << "██████████████████████████████████████████████" << endl;
		cout << "▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓" << endl;
		cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒" << endl;
		cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░" << endl;
		cout << "\n\033[34;0m" << player << " - " << playerHealth << " HP\033[33;1;5m   VS   \033[0;31m" << enemy << " - " << enemyHealth << " HP\n" << endl;
		cout << "\033[0m";
		cout << "╭────────────────────────╮" << endl;
		cout << "│ [1] Attack  [2] Charge │" << endl;
		cout << "│ [3] Back               │" << endl;
		cout << "╰────────────────────────╯" << endl;
	
		cout << menu;
		cin >> choice;
		
		if( choice == '1' ) {
			cout << "\n" << player << " used Attack 1\n" << endl;
			cout << player << " -" << playerDamage << " HP" << endl;
			cout << enemy << " -" << enemyDamage << " HP" << endl;
			cin >> choice;
			goto attack;

		} else if( choice == '2' ) {
			enemyDamage = enemyDamage + 10;
			playerHealth = playerHealth - playerDamage;
			cout << "\n" << player << " used Attack 2." << endl;
			cout << "It makes your attack stronger!\n" << endl;
			cout << player << " -" << playerDamage << " HP" << endl;
			cin >> choice;
			goto battle;
			
		} else if( choice == '3' ) {
			goto battle;

		} else {
			goto attackChoice;
		}

	items:
		system("clear");
		cout << "Items " << endl;
		cout << "HP: " << playerHealth << endl;
		cout << "\n[1] " << smallPotion << " x Small potion" << endl;
		cout << "[2] " << largePotion << " x Large potion" << endl;
		cout << "[3] Back" << endl;
		cout << menu;
		cin >> choice;
		
		if( choice == '1' ) {
			goto useSmallPotion;

		} else if( choice == '2' ) {
			goto useLargePotion;
			
		} else if( choice == '3' ) {
			goto battle;

		} else {
			goto items;
		}
		
	useSmallPotion:
		if( smallPotion < 1 ) {
			goto items;
		} else {
			playerHealth = playerHealth + 60;
			smallPotion = smallPotion - 1;
			goto items;
		}

		useLargePotion:
		if( largePotion < 1 ) {
			goto items;
		} else {
			playerHealth = playerHealth + 300;
			largePotion = largePotion - 1;
			goto items;
		}

	attack:
		system("clear");
		enemyHealth = enemyHealth - enemyDamage;
		playerHealth = playerHealth - playerDamage;
		battleXp = battleXp + enemyXp;
		
		if( enemyHealth < 1 ) {
			xp = xp + battleXp;
			money = money + effect;
			playerHealth = playerHealth + 20;
			cout << player << " gained " << battleXp << " XP. Points!" << endl;
			cin >> choice;
			
			system("clear");
			cout << player << " Defeated " << enemy << "!\n" << endl;
			cout << "+" << effect << " $" << endl;
			cout << "+20 HP" << endl;
			cin >> choice;
			goto home;
			
		} else if( playerHealth < 1 ) {
			cout << "\033[41mGame Over\033[0m" << endl;
			playerHealth = 100;
			//enemyDamage = 2;
			money = 40;
			xp = 0;
			smallPotion = 0;
			largePotion = 0;
			cin >> choice;
			goto mainMenu;

		} else {
			goto battle;
		}
		
	shop:
		system("clear");
		cout << "\033[33m ||_  What do you want to buy?" << endl;
		cout << "(||   Money: " << money << "$" << endl;
		cout << "_||) " << endl;
		cout << " ||  \033[37m\n" << endl;
		cout << "[1] Small Health Potion 60$" << endl;
		cout << "[2] Large Health Potion 200$" << endl;
		cout << "[3] Back" << endl;
		cout << menu;
		cin >> choice;

		if ( choice == '1' ) {
			//effect = 30;
			shopMoney = 60;
			goto checkOut;
			
		} else if ( choice == '2' ) {
			//effect = 150;
			shopMoney = 200;
			goto checkOut;
			
		} else if ( choice == '3' ) {
			goto home;
			
		} else {
			goto shop;
		}
		
	checkOut:
		//cout << "How many potions do you want?: ";
		//cin >> amount;
		
		if ( money < shopMoney) {
			cout << "I'm sorry, " << player << " but i'm afraid you can't afford that." << endl;
			cin >> choice;
			goto shop;
		} else {
			money = money - shopMoney;
			goto checkOut2;
		}
		
	checkOut2:
		if ( choice == '1' ) {
			goto smallPotion;
			
		} else if ( choice == '2' ) {
			goto largePotion;
			
		} else {
			goto shop;
		}
			
	smallPotion:
		smallPotion = smallPotion + 1;
		goto shop;
	
	largePotion:
		largePotion = largePotion + 1;
		goto shop;
		
	//poison:
		cout << "Test" << endl;
		cin >> choice;
		goto largePotion;
}
