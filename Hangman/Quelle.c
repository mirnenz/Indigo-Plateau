#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>
#include "Hangman.h"

// TO-DO:
// pr�fen dass kein wort eingegeben wurde
// bei einfach random = 1 rausnehmen
// easter eggs einbauen


int x = 0;
int z = 0;


int main() {

    //4 Buchstaben   
    char str_einfach[10][16] = { "seil", "ente", "hexe","erde", "eile", "fass"};
    //Test zum Ausgeben des Wortes
     //printf("%s\n", str_einfach[2]);
    //6 Buchstaben   
    char str_mittel[10][16] = {"wertig", "effekt", "eigelb", "safari", "demenz", "center"};
    //printf("%s\n", str_mittel[2]);
    //8 Buchstaben
    char str_schwer[10][16] = {"rucksack", "sandsack", "internet", "ewigkeit"};
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
            Auswahl = "Anf�ngerSchw";
            int Random = Zufallszahl();
            Random = 1;
            i = 0;
            x = 0;
            int L�nge = strlen(str_einfach[Random]);
            int str_Verarbeitung_Index = 0;
            int Versuche = 0;
            bool Gewonnen = false;
            bool Verloren = false;
            bool Abaenderung = false;
            int Richtige = 0;
            char FalscheBuchstaben[10];
            int FalscheBuchstabenIndex = 0;

            
            for (; i < 10;) {
                FalscheBuchstaben[i] = ' ';

                i++;
            }
            i = 0;

            FalscheBuchstaben[9] = '\0';


            for (;i < str_Verarbeitung_Laenge;) {
                str_Verarbeitung[i] = '_';

                i++;
            }
            i = 0;


            for (;Gewonnen != true && Verloren != true;) {

                system(CLEAR);

                printf("\n\tAktuelle Fehler: %d\n", Fehler);

                printf("\n\tFalsch eingegebene Buchstaben: %s\n\t", FalscheBuchstaben);

                x = 0;
                for (; x < L�nge;) {

                    printf("%c ", str_Verarbeitung[x]);

                    x++;
                }
                x = 0;
                
                printf("\n");
                
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
                    Verloren = true;
                }

                
                printf("\n\tBitte einen");
                printf(ANSI_RED);
                printf(" Buchstaben ");
                printf(ANSI_RESET);
                printf("eingeben:\n");
                scanf("\t%c", &EingabeBuchstabe);


                if (EingabeBuchstabe == '\n') {
                    continue;
                }
                //pr�fen dass kein wort eingegeben wurde

                


                for (; x < L�nge;) {

                    if (EingabeBuchstabe == str_einfach[Random][x]) {
                        str_Verarbeitung[x] = str_einfach[Random][x];
                        Abaenderung = true;
                        
                    }


                    x++;
                }
                x = 0;


                if (Abaenderung == false) {
                    FalscheBuchstaben[FalscheBuchstabenIndex] = EingabeBuchstabe;
                    FalscheBuchstabenIndex++;
                    Fehler++;

                }

                Abaenderung = false;

                for (; x < L�nge;) {

                    if (str_Verarbeitung[x] == str_einfach[Random][x]) {
                        Richtige++;
                    }

                    if (Richtige == L�nge) {
                        Gewonnen = true;
                    }

                    x++;
                }
                Richtige = 0;


            }

               
            system(CLEAR);

            if (Gewonnen == true) {
                printf("\n");
                GewonnenPrint();
                printf("\n\n\tDie Fehleranzahl war: %d", Fehler);
                printf("\n\tDas Wort war: ");

                x = 0;
                for (; x < L�nge;) {
                    
                    printf("%c", str_Verarbeitung[x]);

                    x++;
                }
                
                printf("\n\n\tBitte die");
                printf(ANSI_RED); 
                printf(" Entertaste ");
                printf(ANSI_RESET);
                printf("druecken um fortzufahren!");

                _getch();
            }
            else if (Verloren == true) {
                printf("\n");
                VerlorenPrint();

                printf("\n\n\tDie Fehleranzahl war: %d", Fehler);
                printf("\n\tDas Wort war: ");

                x = 0;
                for (; x < L�nge;) {

                    printf("%c", str_einfach[Random][x]);

                    x++;
                }


                printf("\n\n\tBitte die");
                printf(ANSI_RED);
                printf(" Entertaste ");
                printf(ANSI_RESET);
                printf("druecken um fortzufahren!");
                _getch();
            }



            Fehler = 0;
            z = 0;
            x = 0;
            str_Verarbeitung_Index = 0;
            Versuche = 0;
            FalscheBuchstabenIndex = 0;
            Abaenderung = false;
            Verloren = false;
            Gewonnen = false;
            
            system(CLEAR);
            Auswahl = "Anf�nger";
            Anf�nger();
            
            
            
        }
        else if (Input == ENTER & Auswahl == "Fortgeschritten") {
            system(CLEAR);
            Auswahl = "Anf�ngerSchw";
            int Random = Zufallszahl();
            i = 0;
            x = 0;
            int L�nge = strlen(str_mittel[Random]);
            int str_Verarbeitung_Index = 0;
            int Versuche = 0;
            bool Gewonnen = false;
            bool Verloren = false;
            bool Abaenderung = false;
            int Richtige = 0;
            char FalscheBuchstaben[10];
            int FalscheBuchstabenIndex = 0;


            for (; i < 10;) {
                FalscheBuchstaben[i] = ' ';

                i++;
            }
            i = 0;

            FalscheBuchstaben[9] = '\0';


            for (; i < str_Verarbeitung_Laenge;) {
                str_Verarbeitung[i] = '_';

                i++;
            }
            i = 0;


            for (; Gewonnen != true && Verloren != true;) {

                system(CLEAR);

                printf("\n\tAktuelle Fehler: %d\n", Fehler);

                printf("\n\tFalsch eingegebene Buchstaben: %s\n\t", FalscheBuchstaben);

                x = 0;
                for (; x < L�nge;) {

                    printf("%c ", str_Verarbeitung[x]);

                    x++;
                }
                x = 0;

                printf("\n");

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
                    Verloren = true;
                }


                printf("\n\tBitte einen");
                printf(ANSI_RED);
                printf(" Buchstaben ");
                printf(ANSI_RESET);
                printf("eingeben:\n");
                scanf("\t%c", &EingabeBuchstabe);


                if (EingabeBuchstabe == '\n') {
                    continue;
                }
                //pr�fen dass kein wort eingegeben wurde




                for (; x < L�nge;) {

                    if (EingabeBuchstabe == str_mittel[Random][x]) {
                        str_Verarbeitung[x] = str_mittel[Random][x];
                        Abaenderung = true;

                    }

                    
                    x++;
                }
                x = 0;


                if (Abaenderung == false) {
                    FalscheBuchstaben[FalscheBuchstabenIndex] = EingabeBuchstabe;
                    FalscheBuchstabenIndex++;
                    Fehler++;

                }

                Abaenderung = false;

                for (; x < L�nge;) {

                    if (str_Verarbeitung[x] == str_mittel[Random][x]) {
                        Richtige++;
                    }

                    if (Richtige == L�nge) {
                        Gewonnen = true;
                    }

                    x++;
                }
                Richtige = 0;


            }


            system(CLEAR);

            if (Gewonnen == true) {
                printf("\n");
                GewonnenPrint();
                printf("\n\n\tDie Fehleranzahl war: %d", Fehler);
                printf("\n\tDas Wort war: ");

                x = 0;
                for (; x < L�nge;) {

                    printf("%c", str_Verarbeitung[x]);

                    x++;
                }

                printf("\n\n\tBitte die");
                printf(ANSI_RED);
                printf(" Entertaste ");
                printf(ANSI_RESET);
                printf("druecken um fortzufahren!");

                _getch();
            }
            else if (Verloren == true) {
                printf("\n");
                VerlorenPrint();

                printf("\n\n\tDie Fehleranzahl war: %d", Fehler);
                printf("\n\tDas Wort war: ");

                x = 0;
                for (; x < L�nge;) {

                    printf("%c", str_mittel[Random][x]);

                    x++;
                }


                printf("\n\n\tBitte die");
                printf(ANSI_RED);
                printf(" Entertaste ");
                printf(ANSI_RESET);
                printf("druecken um fortzufahren!");
                _getch();
            }



            Fehler = 0;
            z = 0;
            x = 0;
            str_Verarbeitung_Index = 0;
            Versuche = 0;
            FalscheBuchstabenIndex = 0;
            Abaenderung = false;
            Verloren = false;
            Gewonnen = false;

            system(CLEAR);
            Auswahl = "Anf�nger";
            Anf�nger();



        
        }
        else if (Input == ENTER & Auswahl == "Experte") {
            system(CLEAR);
            Auswahl = "Anf�ngerSchw";
            int Random = Zufallszahl();
            i = 0;
            x = 0;
            int L�nge = strlen(str_schwer[Random]);
            int str_Verarbeitung_Index = 0;
            int Versuche = 0;
            bool Gewonnen = false;
            bool Verloren = false;
            bool Abaenderung = false;
            int Richtige = 0;
            char FalscheBuchstaben[10];
            int FalscheBuchstabenIndex = 0;


            for (; i < 10;) {
                FalscheBuchstaben[i] = ' ';

                i++;
            }
            i = 0;

            FalscheBuchstaben[9] = '\0';


            for (; i < str_Verarbeitung_Laenge;) {
                str_Verarbeitung[i] = '_';

                i++;
            }
            i = 0;


            for (; Gewonnen != true && Verloren != true;) {

                system(CLEAR);

                printf("\n\tAktuelle Fehler: %d\n", Fehler);

                printf("\n\tFalsch eingegebene Buchstaben: %s\n\t", FalscheBuchstaben);

                x = 0;
                for (; x < L�nge;) {

                    printf("%c ", str_Verarbeitung[x]);

                    x++;
                }
                x = 0;

                printf("\n");

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
                    Verloren = true;
                }


                printf("\n\tBitte einen");
                printf(ANSI_RED);
                printf(" Buchstaben ");
                printf(ANSI_RESET);
                printf("eingeben:\n");
                scanf("\t%c", &EingabeBuchstabe);


                if (EingabeBuchstabe == '\n') {
                    continue;
                }
                //pr�fen dass kein wort eingegeben wurde




                for (; x < L�nge;) {

                    if (EingabeBuchstabe == str_schwer[Random][x]) {
                        str_Verarbeitung[x] = str_schwer[Random][x];
                        Abaenderung = true;

                    }


                    x++;
                }
                x = 0;


                if (Abaenderung == false) {
                    FalscheBuchstaben[FalscheBuchstabenIndex] = EingabeBuchstabe;
                    FalscheBuchstabenIndex++;
                    Fehler++;

                }

                Abaenderung = false;

                for (; x < L�nge;) {

                    if (str_Verarbeitung[x] == str_schwer[Random][x]) {
                        Richtige++;
                    }

                    if (Richtige == L�nge) {
                        Gewonnen = true;
                    }

                    x++;
                }
                Richtige = 0;


            }


            system(CLEAR);

            if (Gewonnen == true) {
                printf("\n");
                GewonnenPrint();
                printf("\n\n\tDie Fehleranzahl war: %d", Fehler);
                printf("\n\tDas Wort war: ");

                x = 0;
                for (; x < L�nge;) {

                    printf("%c", str_Verarbeitung[x]);

                    x++;
                }

                printf("\n\n\tBitte die");
                printf(ANSI_RED);
                printf(" Entertaste ");
                printf(ANSI_RESET);
                printf("druecken um fortzufahren!");

                _getch();
            }
            else if (Verloren == true) {
                printf("\n");
                VerlorenPrint();

                printf("\n\n\tDie Fehleranzahl war: %d", Fehler);
                printf("\n\tDas Wort war: ");

                x = 0;
                for (; x < L�nge;) {

                    printf("%c", str_schwer[Random][x]);

                    x++;
                }


                printf("\n\n\tBitte die");
                printf(ANSI_RED);
                printf(" Entertaste ");
                printf(ANSI_RESET);
                printf("druecken um fortzufahren!");
                _getch();
            }



            Fehler = 0;
            z = 0;
            x = 0;
            str_Verarbeitung_Index = 0;
            Versuche = 0;
            FalscheBuchstabenIndex = 0;
            Abaenderung = false;
            Verloren = false;
            Gewonnen = false;

            system(CLEAR);
            Auswahl = "Anf�nger";
            Anf�nger();




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