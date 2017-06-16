#include <stdio.h>

int factorial(int input)
{
	//int input;
	int tmp1;
	int out=1;
	printf("숫자를 입력하세요\n");
	scanf("%d",&input);
	for (tmp1=1; tmp1<=input; tmp1++)
	{
		out*=tmp1;
	}
	printf("%d",out);
}

void combinatorics()
{
	int n;
	int r;
	int output;
	factorial(n);
	printf("%d",output);
	
}
int main(void)
{
	return 0;
}
