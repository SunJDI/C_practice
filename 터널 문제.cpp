#include <stdio.h>
int main(void){
	int h_a,h_b,h_c;
	int car=170;
	printf("�� �ͳ��� ���̸� ���ʴ�� �Է��ϼ���.\n\n");
	scanf("%d %d %d", &h_a,&h_b,&h_c);
	if(h_a>car){
		printf("a�ͳ� ���� ���\n");
	}
	else {
		printf("a�ͳο��� �浹.\n");
		printf("*�浹�� a�ͳ��� ���̴� %d�Դϴ�.*\n",h_a);		
	}
	
	if(h_b>car){
		printf("b�ͳ� ���� ���\n");
	}
	else {
		printf("b�ͳο��� �浹.\n");
		printf("*�浹�� b�ͳ��� ���̴� %d�Դϴ�.*\n",h_b);		
	}
	
	if(h_c>car){
		printf("c�ͳ� ���� ���\n\n");
	}
    else {
		printf("c�ͳο��� �浹.\n");
		printf("*�浹�� c�ͳ��� ���̴� %d�Դϴ�.*\n",h_c); 
	}	
}
