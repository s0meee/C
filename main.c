//3-2.증감연산자
#include <stdio.h>
int main()
{
	int x = 10, y = 20;

	printf("x = %d\n", x++); //10
  //먼저 출력을 하고 증가됨
  //10 -> 메모리 11
  printf("x = %d\n", ++x); //12
  //먼저 증가하고 출력됨
	printf("y = %d\n", y--); //20
  //먼저 출력하고 감소됨
  //20 -> 메모리 19
  printf("x = %d\n", --y); //18
  //먼저 감소하고 출력됨
  
	return 0;
}