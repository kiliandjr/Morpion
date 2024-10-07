#ifndef LECTEUR_H
#define LECTEUR_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>

/* proto du condition*/

int condition(char zero, char un, char deux , char trois, char quatre, char cinq, char six, char sept, char huit, char choix, int *victoire); 

/* proto de robot*/

int robot(char *zero, char *un, char *deux , char *trois, char *quatre, char *cinq, char *six, char *sept, char *huit, char *choix); 

/* proto de joueur*/

int joueur(char *zero, char *un, char *deux , char *trois, char *quatre, char *cinq, char *six, char *sept, char *huit, char *choix); 




#endif 


