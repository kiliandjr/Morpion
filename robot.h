#ifndef ROBOT_H
#define ROBOT_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "joueur.h"
int robot(char zero, char un, char deux , char trois, char quatre, char cinq, char six, char sept, char huit, int p, int scan, char choix) {

if (choix=='O') {
srand(time(NULL));
int random_number = rand() % 9 + 1;

if (random_number==1) {
if (zero==' ') {
zero='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==2) {
if (un==' ') {
un='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==3) {
if (deux==' ') {
deux='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==4) {
if (trois==' ') {
trois='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==5) {
if (quatre==' ') {
quatre='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==6) {
if (cinq==' ') {
cinq='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==7) {
if (six==' ') {
six='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==8) {
if (sept==' ') {
sept='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==9) {
if (huit==' ') {
huit='X';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}
}

else if (choix=='X') {
srand(time(NULL));
int random_number = rand() % 9 + 1;

if (random_number==1) {
if (zero==' ') {
zero='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==2) {
if (un==' ') {
un='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==3) {
if (deux==' ') {
deux='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==4) {
if (trois==' ') {
trois='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==5) {
if (quatre==' ') {
quatre='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==6) {
if (cinq==' ') {
cinq='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==7) {
if (six==' ') {
six='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==8) {
if (sept==' ') {
sept='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}

if (random_number==9) {
if (huit==' ') {
huit='O';
printf(" %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n", zero, un, deux, trois, quatre, cinq, six, sept, huit);
p=1;}
else {
p=0;}}
}

else {
p=0;}
return 0;
}
#endif
