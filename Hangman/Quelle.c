//Hier wird die Hangman.h inkludiert
#include "Hangman.h"


int main() {

    //Hier werden die die Arrays f�r das Spiel definiert und bef�llt
    //4 Buchstaben   
    char str_einfach[10][16] = { "seil", "happy", "hexe","erde", "eile", "fass"};
    //Test zum Ausgeben des Wortes

    //6 Buchstaben   
    char str_mittel[10][16] = {"wertig", "effekt", "eigelb", "safari", "demenz", "center"};

    //8 Buchstaben
    char str_schwer[10][16] = {"rucksack", "sandsack", "internet", "ewigkeit"};

    char happy[] = { "happy" };
  
 
    //Hier wird das Hauptmen� geprinted
    Pr�fungBetr();

    Startscreen();
    Spiel_startenROT();

    while (1)
    {
        Input = _getch();

        //In den folgenden IF-Anweisungen wird jeweils gepr�ft auf welchem Auswahlfeld sich der User befindet.
        //Anhand dessen werden dann die unterschiedlichen Screens geprinted

        //Hauptmen�
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

        //Ab hier kommt der Code f�r das eigentliche Spiel an sich
        //Hier wird Ingame Anf�nger berechnet und geprinted
        if (Input == ENTER & Auswahl == "Anf�nger") {
            system(CLEAR);
            Auswahl = "Anf�ngerSchw";
            int Random = Zufallszahl();
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
            bool happygewonnen = false;
            bool happyverloren = false;


            
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


                if (Fehler < 7) {
                    printf("\n\tBitte einen");
                    printf(ANSI_RED);
                    printf(" Buchstaben ");
                    printf(ANSI_RESET);
                    printf("eingeben:\n"); 
                    EingabeBuchstabe = _getch();
                }
                else if (Fehler == 7) {
                    printf("\n\tBitte die");
                    printf(ANSI_RED);
                    printf(" Entertaste ");
                    printf(ANSI_RESET);
                    printf("druecken um fortzufahren!");
                    _getch();
                }

                
                
                if (EingabeBuchstabe == '\n' || EingabeBuchstabe == 'q' || EingabeBuchstabe == 'w' || EingabeBuchstabe == 'e' || EingabeBuchstabe == 'r' ||
                    EingabeBuchstabe == 't' || EingabeBuchstabe == 'z' || EingabeBuchstabe == 'u' || EingabeBuchstabe == 'i' || EingabeBuchstabe == 'o' ||
                    EingabeBuchstabe == 'p' || EingabeBuchstabe == '�' || EingabeBuchstabe == 'a' || EingabeBuchstabe == 's' || EingabeBuchstabe == 'd' ||
                    EingabeBuchstabe == 'f' || EingabeBuchstabe == 'g' || EingabeBuchstabe == 'h' || EingabeBuchstabe == 'j' || EingabeBuchstabe == 'k' ||
                    EingabeBuchstabe == 'l' || EingabeBuchstabe == '�' || EingabeBuchstabe == '�' || EingabeBuchstabe == 'y' || EingabeBuchstabe == 'x' ||
                    EingabeBuchstabe == 'c' || EingabeBuchstabe == 'v' || EingabeBuchstabe == 'b' || EingabeBuchstabe == 'n' || EingabeBuchstabe == 'm') {
                }
                else {
                    continue;
                }
              

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

            if (Fehler == 8) {
                Fehler--;
            }

            x = 0;
            i = 0;

            for (;x < L�nge;) {
                if (happy[x] == str_einfach[Random][x]) {
                    i++;
                }
                
                x++;
            }
            x = 0;

            if (i == L�nge && Gewonnen == true) {
                happygewonnen = true;
            }
            i = 0;

            for (;x < L�nge;) {
                if (happy[x] == str_einfach[Random][x]) {
                    i++;
                }
                x++;
            }
            x = 0;

            if (i == L�nge && Verloren == true) {
                happyverloren = true;
            }
            i = 0;            
            

            if (Gewonnen == true && happygewonnen == true) {
                
                printf("\n\t     .-\"\"\"\"\"\"-.\n");
                printf("\t   .'          '.\n");
                printf("\t  /   O      O   \\\n");
                printf("\t :                :\n");
                printf("\t |                |\n");
                printf("\t : ',          ,' :\n");
                printf("\t  \\  '-......-'  /\n");
                printf("\t   '.          .'\n");
                printf("\t     '-......-'\n");

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

            if (Gewonnen == true && happygewonnen != true) {
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
            else if (Verloren == true && happyverloren == true) {

                printf("\n\t     .-\"\"\"\"\"\"-.\n");
                printf("\t   .'  \\\\  //  '.\n");
                printf("\t  /   O      O   \\\n");
                printf("\t :                :\n");
                printf("\t |                |\n");
                printf("\t :       __       :\n");
                printf("\t  \\  .-\"\`  `\"-.  \/ \n");
                printf("\t   '.          .'\n");
                printf("\t     '-......-'\n");



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
            else if (Verloren == true && i < 7) {
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
            happygewonnen = false;
            
            system(CLEAR);
            Auswahl = "Anf�nger";
            Anf�nger();
            
            
            
        }

        //Hier wird Ingame Fortgeschritten berechnet und geprinted
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


                if (Fehler < 7) {
                    printf("\n\tBitte einen");
                    printf(ANSI_RED);
                    printf(" Buchstaben ");
                    printf(ANSI_RESET);
                    printf("eingeben:\n");
                    EingabeBuchstabe = _getch();
                }
                else if (Fehler == 7) {
                    printf("\n\tBitte die");
                    printf(ANSI_RED);
                    printf(" Entertaste ");
                    printf(ANSI_RESET);
                    printf("druecken um fortzufahren!");
                    _getch();
                }


                if (EingabeBuchstabe == '\n') {
                    continue;
                }
                

                if (EingabeBuchstabe == '\n' || EingabeBuchstabe == 'q' || EingabeBuchstabe == 'w' || EingabeBuchstabe == 'e' || EingabeBuchstabe == 'r' ||
                    EingabeBuchstabe == 't' || EingabeBuchstabe == 'z' || EingabeBuchstabe == 'u' || EingabeBuchstabe == 'i' || EingabeBuchstabe == 'o' ||
                    EingabeBuchstabe == 'p' || EingabeBuchstabe == '�' || EingabeBuchstabe == 'a' || EingabeBuchstabe == 's' || EingabeBuchstabe == 'd' ||
                    EingabeBuchstabe == 'f' || EingabeBuchstabe == 'g' || EingabeBuchstabe == 'h' || EingabeBuchstabe == 'j' || EingabeBuchstabe == 'k' ||
                    EingabeBuchstabe == 'l' || EingabeBuchstabe == '�' || EingabeBuchstabe == '�' || EingabeBuchstabe == 'y' || EingabeBuchstabe == 'x' ||
                    EingabeBuchstabe == 'c' || EingabeBuchstabe == 'v' || EingabeBuchstabe == 'b' || EingabeBuchstabe == 'n' || EingabeBuchstabe == 'm') {
                }
                else {
                    continue;
                }



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

            if (Fehler == 8) {
                Fehler--;
            }

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

        //Hier wird Ingame Experte berechnet und geprinted
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

                if (Fehler < 7) {
                    printf("\n\tBitte einen");
                    printf(ANSI_RED);
                    printf(" Buchstaben ");
                    printf(ANSI_RESET);
                    printf("eingeben:\n");
                    EingabeBuchstabe = _getch();
                }
                else if (Fehler == 7) {
                    printf("\n\tBitte die");
                    printf(ANSI_RED);
                    printf(" Entertaste ");
                    printf(ANSI_RESET);
                    printf("druecken um fortzufahren!");
                    _getch();
                }


                if (EingabeBuchstabe == '\n') {
                    continue;
                }
                if (EingabeBuchstabe == '\n' || EingabeBuchstabe == 'q' || EingabeBuchstabe == 'w' || EingabeBuchstabe == 'e' || EingabeBuchstabe == 'r' ||
                    EingabeBuchstabe == 't' || EingabeBuchstabe == 'z' || EingabeBuchstabe == 'u' || EingabeBuchstabe == 'i' || EingabeBuchstabe == 'o' ||
                    EingabeBuchstabe == 'p' || EingabeBuchstabe == '�' || EingabeBuchstabe == 'a' || EingabeBuchstabe == 's' || EingabeBuchstabe == 'd' ||
                    EingabeBuchstabe == 'f' || EingabeBuchstabe == 'g' || EingabeBuchstabe == 'h' || EingabeBuchstabe == 'j' || EingabeBuchstabe == 'k' ||
                    EingabeBuchstabe == 'l' || EingabeBuchstabe == '�' || EingabeBuchstabe == '�' || EingabeBuchstabe == 'y' || EingabeBuchstabe == 'x' ||
                    EingabeBuchstabe == 'c' || EingabeBuchstabe == 'v' || EingabeBuchstabe == 'b' || EingabeBuchstabe == 'n' || EingabeBuchstabe == 'm') {
                }
                else {
                    continue;
                }


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

            if (Fehler == 8) {
                Fehler--;
            }

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
        if ( Auswahl == "Spiel_beenden" && Input == ENTER) {
            exit(0);
        }

    }
    
}