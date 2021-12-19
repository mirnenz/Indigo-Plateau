#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "Hangman.h"


int main() {

    int i = 0, Wert = getchar();
    char* Auswahl = "Start";
    unsigned char Input;


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