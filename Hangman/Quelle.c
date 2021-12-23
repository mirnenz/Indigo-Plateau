#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "Hangman.h"


int main() {
    //4 Buchstaben   
    char str_einfach[][16] = { "Seil", "Ente", "Hexe","Erde", "Eile", "Fass"};
    //Test zum Ausgeben des Wortes
     //printf("%s\n", str_einfach[2]);
    //6 Buchstaben   
    char str_mittel[][16] = {"Wertig", "Effekt", "Eigelb", "Safari", "Demenz","Center"};
    //printf("%s\n", str_mittel[2]);
    //8 Buchstaben
    char str_schwer[][16] = {"Rucksack", "Sandsack", "Internet", "Ewigkeit"};
    //printf("%s\n", str_schwer[2]);



    //Men�

    Pr�fungBetr();

    Startscreen();
    Spiel_startenROT();

    while (1)
    {
        Input = _getch();

        //Hauptmen� Screen

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
       

        //Spiel starten
        if (Input == ENTER & Auswahl == "Spiel_starten") {
            system(CLEAR);
            Anf�nger();
            Auswahl = "Anf�nger";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Anf�nger") {
            system(CLEAR);
            Fortgeschritten();
            Auswahl = "Fortgeschritten";
        }
        else if (Input == UP_ARROW & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            Anf�nger();
            Auswahl = "Anf�nger";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            Experte();
            Auswahl = "Experte";
        }
        else if (Input == DOWN_ARROW & Auswahl == "Experte") {
            system(CLEAR);
            Anf�nger();
            Auswahl = "Anf�nger";
        }
        else if (Input == UP_ARROW & Auswahl == "Experte") {
            system(CLEAR);
            Fortgeschritten();
            Auswahl = "Fortgeschritten";
        }
        else if (Input == UP_ARROW & Auswahl == "Anf�nger") {
            system(CLEAR);
            Experte();
            Auswahl = "Experte";
        }
        else if (Input == ESC & Auswahl == "Anf�nger") {
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

        //Schwierigkeitsauswahl
        if (Input == ENTER & Auswahl == "Anf�nger") {
            system(CLEAR);
            Anf�ngerSchw();
            Auswahl = "Anf�ngerSchw";
        }
        else if (Input == ENTER & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            FortgeschrittenSchw();
            Auswahl = "FortgeschrittenSchw";
        }
        else if (Input == ENTER & Auswahl == "Experte") {
            system(CLEAR);
            ExperteSchw();
            Auswahl = "ExperteSchw";
        }
        else if (Input == ESC & Auswahl == "Anf�ngerSchw") {
            system(CLEAR);
            Anf�nger();
            Auswahl = "Anf�nger";
        }
        else if (Input == ESC & Auswahl == "FortgeschrittenSchw") {
            system(CLEAR);
            Anf�nger();
            Auswahl = "Anf�nger";
        }
        else if (Input == ESC & Auswahl == "ExperteSchw") {
            system(CLEAR);
            Anf�nger();
            Auswahl = "Anf�nger";
        }
        

        
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