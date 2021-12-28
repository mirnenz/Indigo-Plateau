#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "Hangman.h"


int main() {
    //4 Buchstaben   
    char str_einfach[][16] = { "s e i l", "e n t e", "h e x e","e r d e", "e i l e", "f a s s"};
    //Test zum Ausgeben des Wortes
     //printf("%s\n", str_einfach[2]);
    //6 Buchstaben   
    char str_mittel[][16] = {"w e r t i g", "e f f e k t", "e i g e l b", "s a f a r i", "d e m e n z", "c e n t e r"};
    //printf("%s\n", str_mittel[2]);
    //8 Buchstaben
    char str_schwer[][16] = {"r u c k s a c k", "s a n d s a c k", "i n t e r n e t", "e w i g k e i t"};
    //printf("%s\n", str_schwer[2]);

    
    int x = 0;

    for (; x = 1;) {


        AnfängerSchw();

        if (Fehler == 0) {
            Galgen();
        }
        else if (Fehler == 1) {
            GalgenSeil();
        }
        else if (Fehler == 2) {
            GalgenKopf();
        }
        else if (Fehler == 3) {
            GalgenBrust();
        }
        else if (Fehler == 4) {
            GalgenArmR();
        }
        else if (Fehler == 5) {
            GalgenArmRL();
        }
        else if (Fehler == 6) {
            GalgenBeinR();
        }
        else if (Fehler == 7) {
            GalgenBeinRL();
        }
        else if (Fehler == 8) {
            Verloren();
        }


        scanf_s("%c", &EingabeBuchstabe);


        char delimiter[] = " ";

        char* Pointer = strtok(str_einfach[4], delimiter);


        int i = 1;

        while (Pointer != NULL)
        {


            if (i == 1) {
                Buchstabe1Char = Pointer[0];
            }
            else if (i == 2) {
                Buchstabe2Char = Pointer[0];
            }
            else if (i == 3) {
                Buchstabe3Char = Pointer[0];
            }
            else if (i == 4) {
                Buchstabe4Char = Pointer[0];
            }
            Pointer = strtok(NULL, delimiter);
            i++;
        }

        int y = 0;

        Aenderung = false;

        for (;y < 1;) {

            if (Buchstabe1Char == EingabeBuchstabe)
            {
                Buchstabe1 = Buchstabe1Char;
                Aenderung = true;
            }
            if (Buchstabe2Char == EingabeBuchstabe)
            {
                Buchstabe2 = Buchstabe2Char;
                Aenderung = true;
            }
            if (Buchstabe3Char == EingabeBuchstabe)
            {
                Buchstabe3 = Buchstabe3Char;
                Aenderung = true;
            }
            if (Buchstabe4Char == EingabeBuchstabe)
            {
                Buchstabe4 = Buchstabe4Char;
                Aenderung = true;
            }
            if (Aenderung == false)
            {
                Fehler += 1;
                printf("tt");

            }
            y += 1;

        }

        
        
        
        system(CLEAR);
    }


    /*

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
       

        //Spiel starten
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

        //Schwierigkeitsauswahl
        if (Input == ENTER & Auswahl == "Anfänger") {
            system(CLEAR);
            Auswahl = "AnfängerSchw";

            

            


            




            
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
        else if (Input == ESC & Auswahl == "AnfängerSchw") {
            system(CLEAR);
            Anfänger();
            Auswahl = "Anfänger";
        }
        else if (Input == ESC & Auswahl == "FortgeschrittenSchw") {
            system(CLEAR);
            Anfänger();
            Auswahl = "Anfänger";
        }
        else if (Input == ESC & Auswahl == "ExperteSchw") {
            system(CLEAR);
            Anfänger();
            Auswahl = "Anfänger";
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
    */
}