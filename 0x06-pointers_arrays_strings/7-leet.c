  1#include "main.h"
  2 /**
  3  * leet - translates string to 1337
  4  * @string: pointer to string
  5  * Return: returns translated string
  6  */
  7
  8 char *leet(char *string)
  9 {
 10 int a;
 11 int b;
 12
 13 char lower[] = "aeotl";
 14 char upper[] = "AEOTL";
 15 char numbers[] = "43071";
 16
 17 for (a = 0; string[a] != '\0'; a++)
 18 {
 19 for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
 20 {
 21 if (string[a] == lower[b] || string[a] == upper[b])
 22 {
 23 string[a] = numbers[b];
 24 break;
 25 }
 26 }
 27 }
 28 return (string);
 29 }
