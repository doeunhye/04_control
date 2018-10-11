#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char c;
	
	printf("Input a char : ");
	scanf("%c", &c);
	
	if ('A'<=c && c<='Z')
	{
		printf("대문자입니다.");
	 } 
    else if ('a'<=c && c<='z')
	{
		printf("소문자입니다.");
	}
	else if ('0'<=c && c<='9')
	{
		printf("숫자입니다.");
	}
	else
	{
		printf("기타글자 입니다.");
	}
	
	return 0;
}
