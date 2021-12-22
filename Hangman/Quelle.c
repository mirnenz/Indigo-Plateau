#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "Hangman.h"


int main() {

    int i = 0;
    char* Auswahl = "Spiel_starten";
    char Input;

    //Menü

    PrüfungBetr();

    Startscreen();
    Spiel_startenROT();

    while (1)
    {

        Input = _getch();


        //Hauptmenü Screen

        if (Input == DOWN_ARROW & Auswahl == "Spiel_starten") {
            system(CLEAR);
            RegelnROT();
            Auswahl = "Regeln";
        }
        else if (Input == UP_ARROW & Auswahl == "Spiel_starten") {
            system(CLEAR);
            Spiel_beendenROT();
            Auswahl = "Spiel_beenden";
        }
        else if (Input == UP_ARROW & Auswahl == "Regeln") {
            system(CLEAR);
            Spiel_startenROT();
            Auswahl = "Spiel_starten";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Regeln") {
            system(CLEAR);
            Spiel_beendenROT();
            Auswahl = "Spiel_beenden";
        }
        else if (Input == UP_ARROW & Auswahl == "Spiel_beenden") {
            system(CLEAR);
            RegelnROT();
            Auswahl = "Regeln";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Spiel_beenden") {
            system(CLEAR);
            Spiel_startenROT();
            Auswahl = "Spiel_starten";
        }
       

        //Spiel starten (Schwierigkeitsauswahl)
        if (Input == ENTER & Auswahl == "Spiel_starten") {
            system(CLEAR);
            Anfänger();
            Auswahl = "Anfänger";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Anfänger") {
            system(CLEAR);
            Fortgeschritten();
            Auswahl = "Fortgeschritten";
        }
        else if (Input == UP_ARROW & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            Anfänger();
            Auswahl = "Anfänger";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            Experte();
            Auswahl = "Experte";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Experte") {
            system(CLEAR);
            Anfänger();
            Auswahl = "Anfänger";
        }
        else if (Input == UP_ARROW & Auswahl == "Experte") {
            system(CLEAR);
            Fortgeschritten();
            Auswahl = "Fortgeschritten";
        }
        else if (Input == UP_ARROW & Auswahl == "Anfänger") {
            system(CLEAR);
            Experte();
            Auswahl = "Experte";
        }
        else if (Input == ESC & Auswahl == "Anfänger") {
            system(CLEAR);
            Spiel_startenROT();
            Auswahl = "Spiel_starten";
        }
        else if (Input == ESC & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            Spiel_startenROT();
            Auswahl = "Spiel_starten";
        }
        else if (Input == ESC & Auswahl == "Experte") {
            system(CLEAR);
            Spiel_startenROT();
            Auswahl = "Spiel_starten";
        }

        //Spiel starten (auswahl anfänger experte ....)
        
        //Regeln
        if (Input == ENTER & Auswahl == "Regeln") {
            system(CLEAR);
            Regeln();
            Auswahl = "Regeln";
        }
        else if (Input == ESC & Auswahl == "Regeln") {
            system(CLEAR);
            Spiel_startenROT();
            Auswahl = "Spiel_starten";
        }

        //Spiel beenden
        if (Input == ENTER & Auswahl == "Spiel_beenden") {
            exit(0);
            //eventuell zum trollen shutdown
        }

    
    }
    
}