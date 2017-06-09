#include <stdio.h>
#include <stdio.h>
int main(void)
{
	int m_a,n_a,s_a;
	int m_b,n_b,s_b;
	int m_c,n_c,s_c;
	int tmp;
	int max_space;
	printf("한 운동장의 가로, 세로 길이를 순서대로 입력해 주세요.\n");
	scanf("%d %d",&m_a,&n_a);
	s_a=m_a*n_a;
	printf("이 운동장의 면적은 %d입니다.\n\n",s_a);
	printf("두 번째 운동장의 가로, 세로 길이를 순서대로 입력해 주세요.\n");
	scanf("%d %d",&m_b,&n_b);
	s_b=m_b*n_b;
	printf("이 운동장의 면적은 %d입니다.\n\n",s_b);
	printf("세 번째 운동장의 가로, 세로 길이를 순서대로 입력해 주세요.\n");
	scanf("%d %d",&m_c,&n_c);
	s_c=m_c*n_c;
	printf("이 운동장의 면적은 %d입니다.\n\n",s_c);	
	if (s_a>s_b) tmp=s_a;
	else tmp=s_b;
	if (tmp>s_c)
	{
		max_space=tmp;
	}
	else
	{
        max_space=s_c;	
	}
	printf("가장 큰 운동장의 면적은 %d입니다.",max_space);
}
