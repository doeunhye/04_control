#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
  int i=0;
  int answer=59;
  int num=1;
  
  do
  {
  	 printf("Guess the number : ");
  	 scanf ("%d\n", &i);
  	 
  	 if (i>answer)
    {
    	printf("low!\n");
    	num++;
	}
	  else if (i<answer)
	  {
	  	printf("hight!\n");
	  	num++;
	  }
	  else
	  {
	  	printf("Á¤´ä!!\n");
	  }
  }
  while(i != answer);
  
  printf("trial : %i\n", num);
  
	return 0;
}
