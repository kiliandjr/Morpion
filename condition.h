#ifndef CONDITION_H
#define CONDITION_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int condition(char zero, char un, char deux , char trois, char quatre, char cinq, char six, char sept, char huit, char choix, int victoire) {


if (choix=='O') {
if (zero==un==deux=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (zero==trois==six=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (trois==quatre==cinq=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (six==sept==huit=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (un==quatre==sept=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (deux==cinq==huit=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (zero==quatre==huit=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (deux==quatre==six=='O'){
victoire=1;
printf("Vous avez gagné!!!\n");}


if (zero==un==deux=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

if (zero==trois==six=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

if (trois==quatre==cinq=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

if (six==sept==huit=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

if (un==quatre==sept=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

if (deux==cinq==huit=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

if (zero==quatre==huit=='X'){
victoire=1;
printf("Vous avez perdu\n");}

if (deux==quatre==six=='X'){
victoire=1;
printf("Vous avez perdu...\n");}

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
victoire=1;
}}}}}}}}}}

}



if (choix=='X'){
if (zero==un==deux=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (zero==trois==six=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (trois==quatre==cinq=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (six==sept==huit=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (un==quatre==sept=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (deux==cinq==huit=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (zero==quatre==huit=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (deux==quatre==six=='X'){
victoire=1;
printf("Vous avez gagné!!!\n");}

if (zero==un==deux=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

if (zero==trois==six=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

if (trois==quatre==cinq=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

if (six==sept==huit=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

if (un==quatre==sept=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

if (deux==cinq==huit=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

if (zero==quatre==huit=='O'){
victoire=1;
printf("Vous avez perdu\n");}

if (deux==quatre==six=='O'){
victoire=1;
printf("Vous avez perdu...\n");}

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
victoire=1;
}}}}}}}}}}
}
return 0; 
}

#endif



