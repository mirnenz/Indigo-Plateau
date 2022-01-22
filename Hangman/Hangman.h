#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <conio.h>


//DEFINITIONEN
//Definitionen Pfeiltasten
#define UP_ARROW    72
#define LEFT_ARROW  75
#define DOWN_ARROW  80
#define RIGHT_ARROW 77
#define ENTER       13
#define ESC         27

//Definitionen Farben
#define ANSI_RED "\x1b[31m" 
#define ANSI_GREEN "\x1b[32m" 
#define ANSI_YELLOW "\x1b[33m" 
#define ANSI_BLUE "\x1b[34m" 
#define ANSI_MAGENTA "\x1b[35m" 
#define ANSI_CYAN "\x1b[36m" 
#define ANSI_RESET "\x1b[0m"
#define ANSI_BOLD "\033[1m"
#define ANSI_BOLD_RESET "\033[0m"


//Hier werden allgemeine Variablen definiert
int i = 0;
char* Auswahl = "Spiel_starten";
char Input;
int str_Verarbeitung_Laenge = 20;
char str_Verarbeitung[20];
char EingabeBuchstabe;
int Fehler = 0;
int Aenderung = 0;
char delimiter[] = " ";
char* Pointer = "0";
int x = 0;
int z = 0;


//FUNKTIONEN
//Prüfung Betriebssystem (Ob Windows oder Linux)
void PrüfungBetr() {
    #ifdef _WIN32
    #define CLEAR "cls"
    #else 
    #define CLEAR "clear"
    #endif
}

//Hier wird eine Zufallszahl zwischen 0 und 5 errechnet
int Zufallszahl() {
    int random;
    time_t zeit = time(NULL);
    srand(zeit);

    random = rand() % 5;
    return(random);
}


//In den folgenden Funktionen werden der Startscreen, das Hauptmenü und die Unterpunkte der Schwierigkeitsauswahl geprinted
void Startscreen() {
    printf("\n\n\n");
    printf("\t\tMit Pfeiltasten, Enter und ESC kann im Spiel navigiert und bestaetigt werden\n");
    printf("\t\tDie aktuelle Auswahl oder Highlights werden");
    printf(ANSI_RED);
    printf(" ROT ");
    printf(ANSI_RESET);
    printf("gefaerbt\n");
    printf("\n\n\t\t...Bitte beliebige Taste druecken um fortzufahren...\n");

    char Weiter = _getch();
    system(CLEAR);
}

void Spiel_startenROT() {
    Input = '0';
    
    printf("\t\t\t\t\t\t_________\n");
    printf("  #  #    #   ##  #  ### ##   ##    #   ##  #  \t| /    | \n");
    printf("  #  #  #   # # # # #    # # # #  #   # # # #  \t|/     ");
    printf(ANSI_RED); 
    printf("O \n");
    printf(ANSI_RESET);
    printf("  ####  ##### # # # # ## # # # #  ##### # # #  \t|     ");
    printf(ANSI_RED);
    printf("/|\\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #  ## #  # # # # #  #   # #  ##  \t|     ");
    printf(ANSI_RED);
    printf("/ \\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #   #  ### #  #  #  #   # #   #  \t|        \n");
    printf("\t\t\t\t\t\t|________\n");

    printf(ANSI_BOLD);
    printf("\n----------------HAUPTMENUE-------------------------------");
    printf(ANSI_BOLD_RESET);


    printf("\n\n");
    printf(ANSI_RED);
    printf("\t\tSpiel starten\n");
    printf(ANSI_RESET);
    printf("\t\tRegeln\n");
    printf("\t\tSpiel beenden\n\n");

    printf("---------------------------------------------------------");
}

void RegelnROT() {
    Input = '0';

    printf("\t\t\t\t\t\t_________\n");
    printf("  #  #    #   ##  #  ### ##   ##    #   ##  #  \t| /    | \n");
    printf("  #  #  #   # # # # #    # # # #  #   # # # #  \t|/     ");
    printf(ANSI_RED);
    printf("O \n");
    printf(ANSI_RESET);
    printf("  ####  ##### # # # # ## # # # #  ##### # # #  \t|     ");
    printf(ANSI_RED);
    printf("/|\\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #  ## #  # # # # #  #   # #  ##  \t|     ");
    printf(ANSI_RED);
    printf("/ \\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #   #  ### #  #  #  #   # #   #  \t|        \n");
    printf("\t\t\t\t\t\t|________\n");

    printf(ANSI_BOLD);
    printf("\n----------------HAUPTMENUE-------------------------------");
    printf(ANSI_BOLD_RESET);

    printf("\n\n");
    printf("\t\tSpiel starten\n");
    printf(ANSI_RED);
    printf("\t\tRegeln\n");
    printf(ANSI_RESET);
    printf("\t\tSpiel beenden\n\n");

    printf("---------------------------------------------------------");
}

void Spiel_beendenROT() {
    Input = '0';

    printf("\t\t\t\t\t\t_________\n");
    printf("  #  #    #   ##  #  ### ##   ##    #   ##  #  \t| /    | \n");
    printf("  #  #  #   # # # # #    # # # #  #   # # # #  \t|/     ");
    printf(ANSI_RED);
    printf("O \n");
    printf(ANSI_RESET);
    printf("  ####  ##### # # # # ## # # # #  ##### # # #  \t|     ");
    printf(ANSI_RED);
    printf("/|\\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #  ## #  # # # # #  #   # #  ##  \t|     ");
    printf(ANSI_RED);
    printf("/ \\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #   #  ### #  #  #  #   # #   #  \t|        \n");
    printf("\t\t\t\t\t\t|________\n");

    printf(ANSI_BOLD);
    printf("\n----------------HAUPTMENUE-------------------------------");
    printf(ANSI_BOLD_RESET);

    printf("\n\n");
    printf("\t\tSpiel starten\n");
    printf(ANSI_RESET);
    printf("\t\tRegeln\n");
    printf(ANSI_RED);
    printf("\t\tSpiel beenden\n\n");
    printf(ANSI_RESET);

    printf("---------------------------------------------------------");
}


void Anfänger() {
    Input = '0';

    printf("\t\t\t\t\t\t_________\n");
    printf("  #  #    #   ##  #  ### ##   ##    #   ##  #  \t| /    | \n");
    printf("  #  #  #   # # # # #    # # # #  #   # # # #  \t|/     ");
    printf(ANSI_RED);
    printf("O \n");
    printf(ANSI_RESET);
    printf("  ####  ##### # # # # ## # # # #  ##### # # #  \t|     ");
    printf(ANSI_RED);
    printf("/|\\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #  ## #  # # # # #  #   # #  ##  \t|     ");
    printf(ANSI_RED);
    printf("/ \\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #   #  ### #  #  #  #   # #   #  \t|        \n");
    printf("\t\t\t\t\t\t|________\n");

    printf(ANSI_BOLD);
    printf("\n----------------SCHWIERIGKEITSAUSWAHL--------------------");
    printf(ANSI_BOLD_RESET);

    printf("\n\n");
    printf(ANSI_RED);
    printf("\t\tAnfaenger\n");
    printf(ANSI_RESET);
    printf("\t\tFortgeschritten\n");
    printf("\t\tExperte\n\n");

    printf("---------------------------------------------------------");
}

void Fortgeschritten() {
    Input = '0';

    printf("\t\t\t\t\t\t_________\n");
    printf("  #  #    #   ##  #  ### ##   ##    #   ##  #  \t| /    | \n");
    printf("  #  #  #   # # # # #    # # # #  #   # # # #  \t|/     ");
    printf(ANSI_RED);
    printf("O \n");
    printf(ANSI_RESET);
    printf("  ####  ##### # # # # ## # # # #  ##### # # #  \t|     ");
    printf(ANSI_RED);
    printf("/|\\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #  ## #  # # # # #  #   # #  ##  \t|     ");
    printf(ANSI_RED);
    printf("/ \\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #   #  ### #  #  #  #   # #   #  \t|        \n");
    printf("\t\t\t\t\t\t|________\n");

    printf(ANSI_BOLD);
    printf("\n----------------SCHWIERIGKEITSAUSWAHL--------------------");
    printf(ANSI_BOLD_RESET);

    printf("\n\n");
    printf("\t\tAnfaenger\n");
    printf(ANSI_RED);
    printf("\t\tFortgeschritten\n");
    printf(ANSI_RESET);
    printf("\t\tExperte\n\n");

    printf("---------------------------------------------------------");
}

void Experte() {
    Input = '0';

    printf("\t\t\t\t\t\t_________\n");
    printf("  #  #    #   ##  #  ### ##   ##    #   ##  #  \t| /    | \n");
    printf("  #  #  #   # # # # #    # # # #  #   # # # #  \t|/     ");
    printf(ANSI_RED);
    printf("O \n");
    printf(ANSI_RESET);
    printf("  ####  ##### # # # # ## # # # #  ##### # # #  \t|     ");
    printf(ANSI_RED);
    printf("/|\\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #  ## #  # # # # #  #   # #  ##  \t|     ");
    printf(ANSI_RED);
    printf("/ \\\n");
    printf(ANSI_RESET);
    printf("  #  #  #   # #   #  ### #  #  #  #   # #   #  \t|        \n");
    printf("\t\t\t\t\t\t|________\n");

    printf(ANSI_BOLD);
    printf("\n----------------SCHWIERIGKEITSAUSWAHL--------------------");
    printf(ANSI_BOLD_RESET);

    printf("\n\n");
    printf("\t\tAnfaenger\n");
    printf(ANSI_RESET);
    printf("\t\tFortgeschritten\n");
    printf(ANSI_RED);
    printf("\t\tExperte\n\n");
    printf(ANSI_RESET);

    printf("---------------------------------------------------------");
}

//In dieser Funktion werden die Regeln geprinted
void Regeln() {
    printf("\n\n\n");
    printf(ANSI_RED);
    printf("\t\tErklaerung:\n");
    printf(ANSI_RESET);
    printf("\t\tHangman ist ein Spiel, in welchem Woerter zufaellig ausgewaehlt werden.\n");
    printf("\t\tDer Benutzer versucht hierbei diese zu erraten, indem er Buchstaben eingibt,\n");
    printf("\t\tbei welchen er sich denkt, dass diese in dem Wort vorkommen koennten.\n");
    printf("\t\tFalls der eingegebene Buchstabe nicht in dem Wort vorkommt, wird der Konstruktion\n");
    printf("\t\tein weiteres Bauteil hinzugefuegt.\n");
    printf("\t\tSind alle Versuche aufgebraucht und die Konstruktion ist vollstaendig aufgebaut,\n");
    printf("\t\tso hat der Spieler verloren.\n");
    printf(ANSI_RED);
    printf("\n\t\tSchwierigkeitsgrade:\n");
    printf(ANSI_RESET);
    printf("\t\tAnfaenger:\n");
    printf("\t\t\t- Hier werden zufaellig Woerter mit 4 Buchstaben ausgewaehlt\n\n");
    printf("\t\tFortgeschritten:\n");
    printf("\t\t\t- Hier werden zufaellig Woerter mit 6 Buchstaben ausgewaehlt\n\n");
    printf("\t\tExperte:\n");
    printf("\t\t\t- Hier werden zufaellig Woerter mit 8 Buchstaben ausgewaehlt\n\n");
}

//Hier liegen die Funtkionen, in welchen die Galgen in den unterschiedlichen Stati geprinted werden
//Außerdem liegen hier auch die Funktionen Gewonnenprint und Verlorenprint. In diesen wird ein Gewonnen oder ein Verloren "Schild" geprinted
void Galgen() {
    printf("\t_________\n");
    printf("\t| /      \n");
    printf("\t|/       \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenSeil() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/       \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenKopf() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/     O \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenBrust() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/     O \n");
    printf("\t|      | \n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenArmR() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/     O \n");
    printf("\t|      |\\\n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenArmRL() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/     O \n");
    printf("\t|     /|\\\n");
    printf("\t|        \n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenBeinR() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/     O \n");
    printf("\t|     /|\\\n");
    printf("\t|       \\\n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void GalgenBeinRL() {
    printf("\t_________\n");
    printf("\t| /    | \n");
    printf("\t|/     O \n");
    printf("\t|     /|\\\n");
    printf("\t|     / \\\n");
    printf("\t|        \n");
    printf("\t|________\n");
}

void VerlorenPrint() {
    printf("\t######################################################\n");
    printf("\t#   #   # #### ###  #       ##    ###  #### ##  #   #\n");
    printf("\t#   #   # #    #  # #     ##  ##  #  # #    # # #   #\n");
    printf("\t#   #   # #### ###  #    ##    ## ###  #### #  ##   #\n");
    printf("\t#    # #  #    # #  #     ##  ##  # #  #    #  ##   #\n");
    printf("\t#     #   #### #  # ####    ##    #  # #### #   #   #\n");
    printf("\t######################################################\n");
}

void GewonnenPrint() {
    printf("\t##############################################################\n");
    printf("\t#   #### ##### #       #   ##   ##   #  ##   # ##### ##   #  #\n");
    printf("\t#  #     #     #   #   #  #  #  # #  #  # #  # #     # #  #  #\n");
    printf("\t#  #  ## #####  # # # #  #    # #  # #  #  # # ##### #  # #  #\n");
    printf("\t#  #   # #      # # # #   #  #  #  # #  #  # # #     #  # #  #\n");
    printf("\t#   #### #####   #   #     ##   #    #  #    # ##### #    #  #\n");
    printf("\t##############################################################\n");
}