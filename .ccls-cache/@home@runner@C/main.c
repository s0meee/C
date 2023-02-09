//3.증감연산자
#include <stdio.h>
int main()
{
	int x = 10, y = 10;

	printf("x = %d\n", x); //10
  printf("++x의 값 = %d\n", ++x); //11
  //선 먼저 증가하고 출력 
  printf("x = %d\n", x); //11

  printf("y = %d\n", y); //10
  printf("y++의 값 = %d\n", y++); //10 ->메모리 11
  //후에 증가하고 출력
  printf("y = %d\n", y); //11
  
	return 0;
}