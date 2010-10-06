#include <stdio.h>

main ()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;

  printf("temp fahr\n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * 9/5 + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}  
