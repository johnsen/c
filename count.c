#include <stdio.h>

//count blanks tabs and newlines etc

main()
{
  int c, nl, nb, nt;

  nl = 0;
  nb = 0;
  nt = 0;

  while ((c = getchar()) != EOF)
    if ( c == '\n')
      ++nl;
    if ( c == '')
      ++nb;
    if ( c == '\t')
      ++nt;
  printf("%d\n", nl);
  printf("%d\n", nb);
  printf("%d\n", nt);
}


