//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int temp[10];
//	int inputnum;
//
//	printf("이동을 원하는 숫자를 입력하세요:");
//	scanf_s("%d", &inputnum);
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (inputnum < 0)
//		{
//			if (i < -inputnum)
//			{
//				temp[i] = a[i];
//				a[i] = 0;
//			}
//			else if (i + inputnum < -inputnum)
//				a[i] = temp[i + inputnum];
//			else
//				a[i] = a[i + inputnum];
//		}
//		else if (inputnum + i >= 10)
//			a[i] = 0;
//		else
//			a[i] = a[i + inputnum];
//	}
//	for (int i = 0; i < 10; i++) 
//	{
//		printf("%d", a[i]);
//		if (a != 9)
//			printf(" ");
//	}
//}//내가 짠 코드 지저분해보임

#include <stdio.h>

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp[10];
	int inputnum;

	printf("이동을 원하는 숫자를 입력하세요: ");
	scanf_s("%d", &inputnum);

	// 1) temp에 기존 a 복사
	for (int i = 0; i < 10; i++)
		temp[i] = a[i];

	// 2) 이동 처리
	for (int i = 0; i < 10; i++) {
		int new_index = i + inputnum;

		if (new_index < 0 || new_index >= 10)
			a[i] = 0;          // 벗어나면 0
		else
			a[i] = temp[new_index];  // temp의 값을 읽어와서 넣기
	}

	// 3) 출력
	for (int i = 0; i < 10; i++) {
		printf("%d", a[i]);
		if (i != 9) printf(" ");
	}
}
//지피티가 짠 코드 깨끗하고 단결함