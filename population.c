#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start_size;
    do
    {
      start_size = get_int("START SIZE(Positive Integer: ");
  }
  while (start_size < 1);
    // TODO: Prompt for end size

      int end_size;
      do
      {
         end_size = get_int("Positive Integer: ");
      }
      while (end_size < 1);

    // TODO: Calculate number of years until we reach threshold
    //
    // s(1 + r)**t = end
    //
    // log(1+RATE)**TIME)= log(END_VALUE/START_VALUE)
    //
    // TIME*log(1+RATE) = log(END_VALUE/START_VALUE)
    double log(double x);
    double rate = 0.083;
    //
    double years;
    years= log(end_size/start_size)/log(1+rate);





    // TODO: Print number of years

    printf("%lf\n", years);

    //int yrs = (int) round (years);
    //print("%d\n", yrs);
}
