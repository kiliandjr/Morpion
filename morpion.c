#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "joueur.h"
#include "robot.h"
#include "condition.h"

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
int scan;
char choix;
int victoire=0;

printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);


printf("Vous commencez.\n");

while (victoire==0) {
while (p==1) {
joueur(zero, un, deux , trois, quatre, cinq, six, sept, huit, p, scan, choix);
condition(zero, un, deux , trois, quatre, cinq, six, sept, huit, choix, victoire);
}
while (p==1) {
robot(zero, un, deux , trois, quatre, cinq, six, sept, huit, p, scan, choix);
condition(zero, un, deux , trois, quatre, cinq, six, sept, huit, choix, victoire);}
}

exit(0);
}
