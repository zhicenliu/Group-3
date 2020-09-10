#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

bool checkString(char [],int );

int main(void) 
{
  char number[] = "123.456";

  printf("%d\n",(int)number[0]);

  int c, n, d; 
 
if(checkString(number,sizeof(number)))
{
    double floatNumber = atof(number) ;

  c = (int)floatNumber;

  float Mantissa = floatNumber - c;

  d = 1;

  while(Mantissa != (int)Mantissa)
  {
    d *= 10;

    Mantissa *= 10;
  }

  n = Mantissa;

    printf("c=%d n=%d d=%d \n",c,n,d);
}
else
{
    printf("Please check your input !");
}
 
}

bool checkString(char number[],int size)
{
    
  for(int index = 0; index !='\0'; )
  {
    int tmp = (int)number[index];
    
    if((tmp >= 48 && tmp <= 57 )|| tmp == 46)
    {
      index++;
    }
    else
    {
      return false;
    }

  }
  return true;
}
