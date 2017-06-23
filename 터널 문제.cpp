#include <stdio.h>
int main(void){
	int h_a,h_b,h_c;
	int car=170;
	printf("세 터널의 높이를 차례대로 입력하세요.\n\n");
	scanf("%d %d %d", &h_a,&h_b,&h_c);
	if(h_a>car){
		printf("a터널 무사 통과\n");
	}
	else {
		printf("a터널에서 충돌.\n");
		printf("*충돌한 a터널의 높이는 %d입니다.*\n",h_a);		
	}
	
	if(h_b>car){
		printf("b터널 무사 통과\n");
	}
	else {
		printf("b터널에서 충돌.\n");
		printf("*충돌한 b터널의 높이는 %d입니다.*\n",h_b);		
	}
	
	if(h_c>car){
		printf("c터널 무사 통과\n\n");
	}
    else {
		printf("c터널에서 충돌.\n");
		printf("*충돌한 c터널의 높이는 %d입니다.*\n",h_c); 
	}	
}
