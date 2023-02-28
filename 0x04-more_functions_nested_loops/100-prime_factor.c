#include <math.h>
#include <stdio.h>

/**
 * A function to print all prime factors of a given number n
 */
void primeFactors(long n)
{

  int i;
  
  while (n % 2 == 0) {
    n = n / 2;
  }

  for (i = 3; i <= sqrt(n); i = i + 2) {
    while (n % i == 0) {
      n = n / i;
    }
  }
  if (n > 2)
    printf("%ld\n", n);
}

/**
 *Driver program to test above function 
*/
int main()
{
	long n = 612852475143;
	primeFactors(n);
	return 0;
}                                        
