#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "lecteur.h"

int main()
{

char zero=' ';
char un=' ';
char deux=' ';
char trois=' ';
char quatre=' ';
char cinq=' ';
char six=' ';
char sept=' ';
char huit=' ';
int p=0;
char choix;
int victoire=0;

printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);


printf("Vous commencez.\n");

printf("Choisissez entre O et X pour jouer.");
scanf("%c", &choix);

while (victoire==0) {

joueur(&zero, &un, &deux , &trois, &quatre, &cinq, &six, &sept, &huit, &choix); 
condition(zero, un, deux , trois, quatre, cinq, six, sept, huit, choix, &victoire);

system("clear"); 
robot(&zero, &un, &deux , &trois, &quatre, &cinq, &six, &sept, &huit,&choix);
condition(zero, un, deux , trois, quatre, cinq, six, sept, huit, choix, &victoire);

}
exit(0);
}