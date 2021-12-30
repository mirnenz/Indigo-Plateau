//DEFINITIONEN
//Definitionen Pfeiltasten
#define UP_ARROW    72
#define LEFT_ARROW  75
#define DOWN_ARROW  80
#define RIGHT_ARROW 77
#define ENTER       13
#define ESC         27

int i = 0;
char* Auswahl = "Spiel_starten";
char Input;
char Buchstabe1 = '_', Buchstabe2 = '_', Buchstabe3 = '_', Buchstabe4 = '_', Buchstabe5 = '_', Buchstabe6 = '_', Buchstabe7 = '_', Buchstabe8 = '_';
char Buchstabe1Char, Buchstabe2Char, Buchstabe3Char, Buchstabe4Char, Buchstabe5Char, Buchstabe6Char, Buchstabe7Char, Buchstabe8Char;
char EingabeBuchstabe;
int Fehler = 0;
int Aenderung = 0;
char delimiter[] = " ";
char* Pointer = "0";



//Definitionen Farben
#define ANSI_RED "\x1b[31m" 
#define ANSI_GREEN "\x1b[32m" 
#define ANSI_YELLOW "\x1b[33m" 
#define ANSI_BLUE "\x1b[34m" 
#define ANSI_MAGENTA "\x1b[35m" 
#define ANSI_CYAN "\x1b[36m" 
#define ANSI_RESET "\x1b[0m"
#define ANSI_BOLD "\033[1m"

//Prüfung Betriebssystem
void PrüfungBetr() {
    #ifdef _WIN32
    #define CLEAR "cls"
    #else 
    #define CLEAR "clear"
    #endif
}

int Zufallszahl() {
    int random;
    time_t zeit = time(NULL);
    srand(zeit);

    random = rand() % 5;
    return(random);
}

void ResetBuchstaben() {
    Buchstabe1 = '_';
    Buchstabe2 = '_';
    Buchstabe3 = '_';
    Buchstabe4 = '_';
    Buchstabe5 = '_';
    Buchstabe6 = '_';
    Buchstabe7 = '_';
    Buchstabe8 = '_';

    Buchstabe1Char = 0;
    Buchstabe2Char = 0;
    Buchstabe3Char = 0;
    Buchstabe4Char = 0;
    Buchstabe5Char = 0;
    Buchstabe6Char = 0;
    Buchstabe7Char = 0;
    Buchstabe8Char = 0;
}


//FUNKTIONEN
//Hauptmenü Funktionen
void Startscreen() {
    printf("\n\n\n");
    printf("\t\tMit Pfeiltasten, Enter und ESC kann im Spiel navigiert und bestaetigt werden\n");
    printf("\t\tDie aktuelle Auswahl wird");
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
    printf("\n\n\n");
    printf(ANSI_RED);
    printf("\t\tSpiel starten\n");
    printf(ANSI_RESET);
    printf("\t\tRegeln\n");
    printf("\t\tSpiel beenden\n");
}

void RegelnROT() {
    Input = '0';
    printf("\n\n\n");
    printf("\t\tSpiel starten\n");
    printf(ANSI_RED);
    printf("\t\tRegeln\n");
    printf(ANSI_RESET);
    printf("\t\tSpiel beenden\n");
}

void Spiel_beendenROT() {
    Input = '0';
    printf("\n\n\n");
    printf("\t\tSpiel starten\n");
    printf(ANSI_RESET);
    printf("\t\tRegeln\n");
    printf(ANSI_RED);
    printf("\t\tSpiel beenden\n");
    printf(ANSI_RESET);
}

//Spiel starten Funktionen (Schwierigkeitsauswahl)
void Anfänger() {
    Input = '0';
    printf("\n\n\n");
    printf(ANSI_RED);
    printf("\t\tAnfaenger\n");
    printf(ANSI_RESET);
    printf("\t\tFortgeschritten\n");
    printf("\t\tExperte\n");
}

void Fortgeschritten() {
    Input = '0';
    printf("\n\n\n");
    printf("\t\tAnfaenger\n");
    printf(ANSI_RED);
    printf("\t\tFortgeschritten\n");
    printf(ANSI_RESET);
    printf("\t\tExperte\n");
}

void Experte() {
    Input = '0';
    printf("\n\n\n");
    printf("\t\tAnfaenger\n");
    printf(ANSI_RESET);
    printf("\t\tFortgeschritten\n");
    printf(ANSI_RED);
    printf("\t\tExperte\n");
    printf(ANSI_RESET);
}

//Schwierigkeitsauswahl (Anfänger, Fortgeschritten, Experte)
void AnfängerSchw() {
    Input = '0';
    printf("\n\t");
    printf("%c ", Buchstabe1);
    printf("%c ", Buchstabe2);
    printf("%c ", Buchstabe3);
    printf("%c", Buchstabe4);
    printf("\n");
}

void FortgeschrittenSchw() {
    Input = '0';
    printf("\n\t");
    printf("%c ", Buchstabe1);
    printf("%c ", Buchstabe2);
    printf("%c ", Buchstabe3);
    printf("%c ", Buchstabe4);
    printf("%c ", Buchstabe5);
    printf("%c", Buchstabe6);
    printf("\n");
}

void ExperteSchw() {
    Input = '0';
    printf("\n\t");
    printf("%c ", Buchstabe1);
    printf("%c ", Buchstabe2);
    printf("%c ", Buchstabe3);
    printf("%c ", Buchstabe4);
    printf("%c ", Buchstabe5);
    printf("%c ", Buchstabe6);
    printf("%c ", Buchstabe7);
    printf("%c", Buchstabe8);
    printf("\n");
}

//Regeln
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


//Galgen Funktionen
void Galgen() {
    printf("_________\n");
    printf("| /      \n");
    printf("|/       \n");
    printf("|        \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 1.Fehler
void GalgenSeil() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/       \n");
    printf("|        \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 2.Fehler
void GalgenKopf() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|        \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 3.Fehler
void GalgenBrust() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|      | \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 4.Fehler
void GalgenArmR() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|      |\\\n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 5.Fehler
void GalgenArmRL() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|     /|\\\n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 6.Fehler
void GalgenBeinR() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|     /|\\\n");
    printf("|       \\\n");
    printf("|        \n");
    printf("|________\n");
}
// Galgen Bild nach 7.Fehler
void GalgenBeinRL() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|     /|\\\n");
    printf("|     / \\\n");
    printf("|        \n");
    printf("|________\n");
}
// Bild nach Verloren
void Verloren() {
    printf("######################################################\n");
    printf("#   #   # #### ###  #       ##    ###  #### ##  #   #\n");
    printf("#   #   # #    #  # #     ##  ##  #  # #    # # #   #\n");
    printf("#   #   # #### ###  #    ##    ## ###  #### #  ##   #\n");
    printf("#    # #  #    # #  #     ##  ##  # #  #    #  ##   #\n");
    printf("#     #   #### #  # ####    ##    #  # #### #   #   #\n");
    printf("######################################################\n");
}