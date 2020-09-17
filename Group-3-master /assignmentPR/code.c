// not final version, ;

#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

bool checkString(char [],int );

int main(void) 
{
  char number[] = "123.456";

  int c, n, d; 
 
/*
  use atof() function to get float-number;
 */
    if(checkString(number,sizeof(number)))
  {
      double floatNumber = atof(number) ;
  
      // get integer number;
      c = (int)floatNumber;

      // get mantissa;
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

/*
      I try to check if the string is legal, but it still exist some problem;
      
*/

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

