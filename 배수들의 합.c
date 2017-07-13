#include <stdio.h>

int main(void) {
	int k=0;
	int sum=0;
	int mul;
	printf("어떤 수의 배수를 걸러내고 싶나요?\n");
	scanf("%d", &mul);
	while (k<=1000) {
		k++;
		if(k%mul==0) {
		sum=sum+k;			
		}
	}
	printf("%d", sum);
}
