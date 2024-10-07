
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "lecteur.h"

int condition(char zero, char un, char deux , char trois, char quatre, char cinq, char six, char sept, char huit, char choix, int *victoire) {


if (choix=='O') {
if (zero=='O' && un=='O' && deux=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (zero=='O' && trois=='O' && six=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (trois=='O' && quatre=='O' && cinq=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (six=='O' && sept=='O' && huit=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (un=='O' && quatre=='O' && sept=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (deux=='O' && cinq=='O' && huit=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (zero=='O' && quatre=='O' && huit=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (deux=='O' && quatre=='O' && six=='O'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}


if (zero=='O' && un=='O' && deux=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (zero=='X' && trois=='X' && six=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (trois=='X' && quatre=='X' && cinq=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (six=='X' && sept=='X' && huit=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (un=='X' && quatre=='X' && sept=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (deux=='X' && cinq=='X' && huit=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (zero=='X' && quatre=='X' && huit=='X'){
*victoire=1;
printf("Vous avez perdu\n");
return 0;}

if (deux=='X' && quatre=='X' && six=='X'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

else {
if (zero!=' '){
if (un!=' '){
if (deux!=' '){
if (trois!=' '){
if (quatre!=' '){
if (cinq!=' '){
if (six!=' '){
if (sept!=' '){
if (huit!=' '){
printf("EGALITE\n");
*victoire=1;
return 0;
}}}}}}}}}}

}



if (choix=='X'){
if (zero=='X' && un=='X' && deux=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (zero=='X' && trois=='X' && six=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (trois=='X' && quatre=='X' && cinq=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (six=='X' && sept=='X' && huit=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (un=='X' && quatre=='X' && sept=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (deux=='X' && cinq=='X' && huit=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (zero=='X' && quatre=='X' && huit=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (deux=='X' && quatre=='X' && six=='X'){
*victoire=1;
printf("Vous avez gagné!!!\n");
return 0;}

if (zero=='X' && un=='X' && deux=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (zero=='O' && trois=='O' && six=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (trois=='O' && quatre=='O' && cinq=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (six=='O' && sept=='O' && huit=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (un=='O' && quatre=='O' && sept=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (deux=='O' && cinq=='O' && huit=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

if (zero=='O' && quatre=='O' && huit=='O'){
*victoire=1;
printf("Vous avez perdu\n");
return 0;}

if (deux=='O' && quatre=='O' && six=='O'){
*victoire=1;
printf("Vous avez perdu...\n");
return 0;}

else {
if (zero!=' '){
if (un!=' '){
if (deux!=' '){
if (trois!=' '){
if (quatre!=' '){
if (cinq!=' '){
if (six!=' '){
if (sept!=' '){
if (huit!=' '){
printf("EGALITE\n");
*victoire=1;
return 0;}}}}}}}}}}
}
return 0; 
}




