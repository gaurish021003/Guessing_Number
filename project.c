#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    printf("Enter the number in range 1 to 100\n");

     srand(time(0)); // refresh for every time ,number will be change and set clock 0.
    int num;
     num = rand() % 100 + 1;   // for generate random number b/w 1-100 inclusive.
     int attempt=0;
       
    while (1)
    {
        int n;
      scanf("%d",&n);
      attempt+=1;
      if(n<num)
      printf("enter higher number\n");
     else if(n>num)
      printf("enter lower number\n");
      else {
      printf("congratulation  \nyou got it  \natttempt: %d",attempt);
      break;
      }
      
    }
    
  

    return 0;
 }
 