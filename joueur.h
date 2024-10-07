#ifndef JOUEUR_H
#define JOUEUR_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int joueur(char zero, char un, char deux , char trois, char quatre, char cinq, char six, char sept, char huit, int p, int scan, char choix) {

printf("Choisissez entre O et X pour jouer.");
scanf("%c", &choix);

if (choix=='O') {

printf("Entrez un numéro de case:");
scanf("%d", &scan);

if (scan==1) {
if (zero==' ') {
zero='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==2) {
if (un==' ') {
un='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==3) {
if (deux==' ') {
deux='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==4) {
if (trois==' ') {
trois='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==5) {
if (quatre==' ') {
quatre='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==6) {
if (cinq==' ') {
cinq='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==7) {
if (six==' ') {
six='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==8) {
if (sept==' ') {
sept='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==9) {
if (huit==' ') {
huit='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

else {
printf("Rentrer un emplacement valide");}

}

else if (choix=='X') {

if (scan==1) {
if (zero==' ') {
zero='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==2) {
if (un==' ') {
un='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==3) {
if (deux==' ') {
deux='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==4) {
if (trois==' ') {
trois='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==5) {
if (quatre==' ') {
quatre='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==6) {
if (cinq==' ') {
cinq='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==7) {
if (six==' ') {
six='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==8) {
if (sept==' ') {
sept='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}

if (scan==9) {
if (huit==' ') {
huit='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
printf("Veuillez choisir un emplacement non pris.");
p=0;
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
}}
}

else {
printf("Veuillez choisir un caractère valide.");
p=0;}

return 0;
}
#endif
