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
    
    int candles = 0;
    printf("Gib die Anzahl der Kerzen ein: \n");
    scanf("%d", &candles);
    float price_candles = candles * 1.50;

    int balls = 0;
    printf("Gib die Anzahl der Kugeln ein: \n");
    scanf("%d", &balls);
    float price_balls = balls * 4.90;

    float price = price_balls + price_balls;

    printf("Die Gesamtkosten des Christbaumschmucks beträgt %f€\n");
    
    if {(candles<10);
    printf("Auf den Baum befinden sich weniger als 10 Kerzen.\n");}
    else {printf("Auf dem Baum befinden sich mehr als 10 Kerzen.\n");}

    if { (candles%2 == 0);
    printf("Es befindet sich eine gerade Anzahö an Kerzen am Baum.\n");}
    else { printf("es befindet sich eine ungerade Anzahl an Kerzen am bAum.\n");}

}
