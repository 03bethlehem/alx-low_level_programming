  1 #include "main.h"
  2 /**
  3  * reverse_array - reverse the content of an array of integers
  4  * @a: an array of integers
  5  * @n: number of elements of the array
  6  * Return: Always 0 (success)
  7  */
  8
  9 void reverse_array(int *a, int n)
 10
 11 {
 12 int x, y;
 13
 14 for (x = 0; x < (n / 2); x++)
 15 {
 16 y = a[x];
 17 a[x] = a[n - x - 1];
 18 a[n - x - 1] = y;
 19 }
 20 }
