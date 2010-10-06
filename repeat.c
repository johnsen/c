#include <stdio.h>

void main ()
{
    int
      ch;

    while ( (ch = getchar ()) != EOF )
      putchar (ch);

    printf ("\nEnd of file. \n");
}
