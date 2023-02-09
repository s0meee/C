//3-3.증감연산자
#include <stdio.h>
int main()
{
	int a = 5, b = 10;

  a++; //a=6
  --b; //b=9
  a = b % a; //9%6 나머지 3을 a에 저장
  //a=3
  b = --a + ++b;
  //a가 2가 됨
  //b가 10이 됨
  //2+10 = 12
  // 12를 b에 저장

  printf("a = %d, b = %d\n", a, b);
  //a=2, b=12
  
	return 0;
}