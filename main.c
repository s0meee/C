//1.실수형 연산자
#include <stdio.h>
int main()
{
	double x, y, result;

	printf("두개의 실수를 입력하시오: ");
	scanf("%lf %lf", &x, &y); // double형은 %lf

	result = x + y;
	printf("%.2f + %.2f = %.2f\n", x, y, result);
	result = x - y;
	printf("%.2f - %.2f = %.2f\n", x, y, result);
	result = x * y;
	printf("%.2f * %.2f = %.2f\n", x, y, result);
	result = x / y;
	printf("%.2f / %.2f = %.2f\n", x, y, result); 
  //실수형 나머지 연산은 %연산자 사용불가
	return 0;
}