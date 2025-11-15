#pragma once

#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;

class Interface {
public:
	void header();
	void loadingScreen();
};

void Interface::header() {
	cout << "+--------------------+" << endl;
	cout << "| Markov Crime Model |" << endl;
	cout << "+--------------------+" << endl << endl;
}

void Interface::loadingScreen() {
	cout << "\033[2J\033[1;1H";
	header();
	cout << "Loading." << endl;
	Sleep(1000);
	cout << "\033[2J\033[1;1H";
	header();
	cout << "Loading.." << endl;
	Sleep(1000);
	cout << "\033[2J\033[1;1H";
	header();
	cout << "Loading..." << endl;
	Sleep(1000);
	cout << "\033[2J\033[1;1H";
	header();
}