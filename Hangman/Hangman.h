#include <stdio.h>
#include <stdbool.h>

// Galgen Bild
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