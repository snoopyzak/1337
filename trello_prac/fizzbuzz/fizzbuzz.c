#include <unistd.h>

void  writenb(int n)
{
  if(n>9)
    writenb(n/10);
  write (1, &"0123456789"[n % 10], 1);
}

int main()
{
  int n = 1;
 while(n<=100){
  if (n%3 == 0 && n%5 == 0)
    write(1, "FizzBuzz", 8);
  else if(n%3 == 0){
    write(1, "Fizz", 4);
  }
  else if(n%5 == 0){
    write(1, "Buzz", 4);
  }
  else
	  writenb(n);
  n++;
  write(1, "\n", 1);
}
return 0;
}
