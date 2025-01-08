#pragma once
#include <iostream>
#include <string>
using namespace std;
 
const int MAX_WAGGONS = 13;

struct  Waggon {
	int sitzPlaetze;
	double laenge;
	string farbe;
};

struct Zug {
	string name;
	Waggon waggons[MAX_WAGGONS];
};

void printZug(const Zug zug);
void printWaggon(const Waggon waggon);
void printAll(const Zug zug);
int anzahlPlaetze(const Zug zug);
void addWaggons(Zug& zug);