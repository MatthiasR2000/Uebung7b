#include <iostream>
#include <string>
#include "Uebung7b.h"

int main() {
	Zug zug1{"DBSystel"};
	Waggon waggon1{40,5.0,"Rot-weiss"};
	Waggon waggon2{ 40,5.0,"Schwarz" };
	Waggon waggon3{ 40,5.0,"Unsichtbar" };

	zug1.waggons[0] = waggon1;
	zug1.waggons[1] = waggon2;
	zug1.waggons[2] = waggon3;

	cout << "Anzahl Sitzplaetze: " << anzahlPlaetze(zug1) << endl;

	addWaggons(zug1);
	printAll(zug1);//Funktioniert nur weil bei addWaggons eine Referenz ist "&" siehe Uebung7.cpp/Uebung7.h
	return 0;
}