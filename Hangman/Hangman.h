//DEFINITIONEN
//Definitionen Pfeiltasten
#define UP_ARROW    72
#define LEFT_ARROW  75
#define DOWN_ARROW  80
#define RIGHT_ARROW 77

//Definitionen Farben
#define ANSI_RED "\x1b[31m" 
#define ANSI_GREEN "\x1b[32m" 
#define ANSI_YELLOW "\x1b[33m" 
#define ANSI_BLUE "\x1b[34m" 
#define ANSI_MAGENTA "\x1b[35m" 
#define ANSI_CYAN "\x1b[36m" 
#define ANSI_RESET "\x1b[0m"

//FUNKTIONEN
//Hauptmenü Funktionen
void StartROT() {
    printf("\n\n\n");
    printf(ANSI_RED);
    printf("\t\tStart\n");
    printf(ANSI_RESET);
    printf("\t\tOptionen\n");
}

void OptionenROT() {
    printf("\n\n\n");
    printf("\t\tStart\n");
    printf(ANSI_RED);
    printf("\t\tOptionen\n");
    printf(ANSI_RESET);
}



void Galgen() {
    printf("_________\n");
    printf("| /      \n");
    printf("|/       \n");
    printf("|        \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenSeil() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/       \n");
    printf("|        \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenKopf() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|        \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenBrust() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|      | \n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenArmR() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|      |\\\n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenArmRL() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|     /|\\\n");
    printf("|        \n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenBeinR() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|     /|\\\n");
    printf("|       \\\n");
    printf("|        \n");
    printf("|________\n");
}
void GalgenBeinRL() {
    printf("_________\n");
    printf("| /    | \n");
    printf("|/     O \n");
    printf("|     /|\\\n");
    printf("|     / \\\n");
    printf("|        \n");
    printf("|________\n");
}
void Verloren() {
    printf("######################################################\n");
    printf("#   #   # #### ###  #       ##    ###  #### ##  #   #\n");
    printf("#   #   # #    #  # #     ##  ##  #  # #    # # #   #\n");
    printf("#   #   # #### ###  #    ##    ## ###  #### #  ##   #\n");
    printf("#    # #  #    # #  #     ##  ##  # #  #    #  ##   #\n");
    printf("#     #   #### #  # ####    ##    #  # #### #   #   #\n");
    printf("######################################################\n");
}