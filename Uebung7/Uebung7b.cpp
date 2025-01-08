#include "Uebung7b.h"

void printZug(const Zug zug) {
	cout << "Zugname: " << zug.name << endl;
}

void printWaggon(const Waggon waggon) {
	cout << "\nSitzplaetze: " << waggon.sitzPlaetze
		<< " Waagenlaenge: " << waggon.laenge
		<< " Waagenfarbe: " << waggon.farbe << endl;
}


void printAll(const Zug zug) {
	for (int i = 0; i < MAX_WAGGONS; i++) {
		printZug(zug);
		printWaggon(zug.waggons[i]);
	}
}

int anzahlPlaetze(const Zug zug) {
	int summePlaetze = 0;
	for (int i = 0; i < MAX_WAGGONS; i++) {
		summePlaetze += zug.waggons[i].sitzPlaetze;
	}
	return summePlaetze;
}


void addWaggons(Zug& zug) {
	int sitzPlaetze;
	double laenge;
	std::string farbe;
	int counter = 1;
	for (int i = 0; i < 2; i++) {
		std::cout << "Zug " << counter << std::endl;
		std::cout << "Geben Sie die Sitzplätze des Waggons an: ";
		std::cin >> sitzPlaetze;
		if (sitzPlaetze < 150) {
			cout << "Unzulaessige Anzahl der Sitzplaetze, wird auf 150 gesetzt" << endl;
			sitzPlaetze = 150;
		}
		std::cout << "Geben Sie die Länge des Waggons an: ";
		std::cin >> laenge;
		std::cout << "Geben Sie die Farbe des Waggons an: ";
		std::cin >> farbe;
		Waggon newWaggon{sitzPlaetze, laenge, farbe};
		for (int j = 0; j < MAX_WAGGONS; j++) {
			if (zug.waggons[j].sitzPlaetze == 0) {  // Prüfen, ob der Platz frei ist
				zug.waggons[j] = newWaggon;  // Neuer Waggon hinzufügen
				break;
			}
		}
		counter++;//Nur damit dem User angezeigt wird wie viele Züge er schon hinzugefügt hat
	}

	//printAll(zug); Muss man aufpassen, dass oben Zug als referenz makiert ist weil ohne würde das printAll in der main nichts wissen
}
