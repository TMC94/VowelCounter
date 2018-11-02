#include <stdio.h>v
#include <stdlib.h>

int main()
{
  int i = 0, countA = 0, countE = 0, countI = 0, countO = 0, countU= 0;
  char y[100];

  printf("Enter a string of text: \n");
  gets(y);

  while (y[i] != '\0')
    {
    if ( y[i] == 'A' || y[i] == 'a')
    {
        countA = countA + 1;
    }
    if ( y[i] == 'E' || y[i] == 'e')
    {
        countE = countE + 1;
    }
    if ( y[i] == 'I' || y[i] == 'i')
    {
        countI = countI + 1;
    }
    if ( y[i] == 'O' || y[i] == 'o')
    {
        countO = countO + 1;
    }
    if ( y[i] == 'U' || y[i] == 'u')
    {
        countU = countU + 1;
    }
    i++;

    }

    printf("Aa: %d\nEe: %d\nIi: %d\nOo: %d\nUu: %d", countA, countE, countI, countO, countU);


  return 0;

    //(y[i] == 'I' || y[i] == 'i' || y[i] =='O' || y[i]=='o' || y[i] == 'U' || y[i] == 'u')
}
