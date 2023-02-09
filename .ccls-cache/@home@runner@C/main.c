//1.정수형 연산
#include <stdio.h>
int main()
{
	int x, y, result; //변수 3개 선언
	printf("두개의 정수를 입력하시오: "); //어떤값을 입력 받을지 안내문 
	scanf("%d %d", &x, &y); //두개의 정수 차례대로 입력 받을 것 

	result = x + y; // 더하기 연산자, 피 연산자 X와 y 두개 더한값 result에 저장
	printf("%d + %d = %d\n", x, y, result); //x+y=result 

  result = x - y; // 빼기 연산자, 피 연산자 X와 y 두개 뺀값 result에 저장
	printf("%d - %d = %d\n", x, y, result); //x-y=result 

  result = x * y; // 곱하기 연산자, 피 연산자 X와 y 두개 곱한값 result에 저장
	printf("%d * %d = %d\n", x, y, result); //x*y=result 

  result = x / y;  
  //정수/정수=정수 나누기 연산자, 피 연산자 X와 y 두개 나눈값 result에 저장
	printf("%d / %d = %d\n", x, y, result); //x/y=result 

  result = x % y;  //나머지
	printf("%d % %d = %d\n", x, y, result); //x%y=result 

	return 0;

}