#include <stdio.h>

int main()
{
	int a[50], b[50], inputnum; //배열 및 변수 선언
	
	printf("숫자(배수의 자리를 0으로 설정)를 입력하세요:");//입력값 받기
	scanf_s("%d", &inputnum);

	while (inputnum <= 0)//입력값 범위 검사
	{
		printf("양수인 정수를 입력해주세요:");
		scanf_s("%d", &inputnum);
	}

	for (int i = 0; i < 50; i++) //배열 a,b 초기화
	{
		a[i] = i + 1; //배열 a 초기화

		if ((i + 1) % inputnum == 0) //배열 b 초기화
			b[i] = 0;
		else
			b[i] = a[i];
	}

	printf("배열a:\n"); //배열 a 출력
	for (int i = 0; i < 50; i++)
	{
		printf("%2d", a[i]);
		if(i!=50)
			printf("  ");
		if ((i + 1) % 10 == 0)
			printf("\n");
	}

	printf("\n\n\n배열b:\n"); //배열 b 출력
	for (int i = 0; i < 50; i++)
	{
		printf("%2d", b[i]);
		if (i != 49)
			printf("  ");
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	
}