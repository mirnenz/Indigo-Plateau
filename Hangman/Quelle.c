#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "Hangman.h"


int main() {

    //4 Buchstaben   
    char str_einfach[][16] = { "S,e,i,l", "Ente", "Hexe","Erde", "Eile", "Fass"};
    //Test zum Ausgeben des Wortes
    printf("%c\n", str_einfach[2]);
    //6 Buchstaben   
    char str_mittel[][16] = {"Wertig", "Effekt", "Eigelb", "Safari", "Demenz","Center"};
    printf("%s\n", str_mittel[2]);
    //8 Buchstaben
    char str_schwer[][16] = {"Rucksack", "Sandsack", "Internet", "Ewigkeit"};
    printf("%s\n", str_schwer[2]);

    int i = 0, Wert = getchar();
    char* Auswahl = "Start";
    unsigned char Input;

    /*
    //Hauptmenü

    StartROT();

    while (1)
    {

        Input = _getch();

        //80 gleich Pfeil unten
        //72 gleich Pfeil oben


        if (Input == 80 & Auswahl == "Start") {
            system("cls");
            OptionenROT();
            Auswahl = "Optionen";
        }
        else if (Input == 72 & Auswahl == "Start") {
            system("cls");
            OptionenROT();
            Auswahl = "Optionen";
        }
        else if (Input == 72 & Auswahl == "Optionen") {
            system("cls");
            StartROT();
            Auswahl = "Start";
        }
        else if (Input == 80 & Auswahl == "Optionen") {
            system("cls");
            StartROT();
            Auswahl = "Start";

        }
    }
}
*/