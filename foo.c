#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("%s\n", "Hallo Welt!");

    //Aufgabe 1: Weinachtskekse

    int number_biscuits = 0;
    printf("Gib die Anzahl der Kekse ein:\n");
    scanf("%d", &number_biscuits);

    int diameter_biscuit = 0;
    printf("Gib den Durchmesser der Kekse ein:\n");
    scanf("%d", &diameter_biscuit);

    int area_biscuits = (diameter_biscuit*diameter_biscuit*3.1415/4)*number_biscuits;

    printf("Für die Glasur von %d Keksen wird Schokolade für %dcm² benötigt\n\n", number_biscuits, area_biscuits);

    //Christbaumschmuck
    
    

}
