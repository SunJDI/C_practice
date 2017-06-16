#include <stdio.h>
int main(void)
{
	printf("I love sohye");
}

#include <stdio.h>
int main(void)
{
	int a;
	int b;
	printf("수입력");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d-%d=%d",a,b,a-b);
}

#include <stdio.h>
int main(void)
{
	int a;
	int b;
	printf("수입력");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d*%d=%d",a,b,a*b);
}

#include <stdio.h>
int main(void)
{
	int a;
	int b;
	printf("수입력");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
}

#include <stdio.h>
#include <windows.h>

void deco()             //데코레이션
{
  int i;
  for(i=0;i<4;i++)
  { 
    printf("\n======================================================================"); 
  }
}



void weather(char wea,int a) //계산함수
{ 
  if(wea== 'R')        //비  
  {
    if(a<100)
    {
      printf("1분 만큼 늦습니다.");  
    }else if(a<200){
      printf("2분 만큼 늦습니다.");
    }else if(a<300){
      printf("3분 만큼 늦습니다.");
    }else if(a<400){
      printf("4분 만큼 늦습니다.");
    } 
  }else if(wea== 'S')       //눈
    {
    if(a<100)
    {
      printf("5분 만큼 늦습니다.");  
    }else if(a<200){
      printf("6분 만큼 늦습니다.");
    }else if(a<300){
      printf("7분 만큼 늦습니다.");  
    }
  }
}




int main(void) //메인함수
{ 
  int i; 
  char ch;
  int num;
  printf("기후\t\t비:R\t눈:S\n"); 
  scanf("%c",&ch);
  printf("\n\n강수량\n"); 
  scanf("%d",&num); 
  system("cls");
  deco();
  printf("\n"); 
  weather(ch,num); 
  deco();
}




#include <stdio.h>
int fanta(){ int a,b;    
	    printf("당신의 한국나이와 만 나이를 계산합니다\n"); 
	    printf("당신은 몇년생입니까?\n"); 
	    scanf("%d",&a); 
	    printf("올해 생일이 지났습니까? 예:1 아니오:0"); 
	    scanf("%d",&b);
	    if(b<1){   
		    printf("한국나이 2018-%d=%d\n",a,2018-a); 
		    printf("만 나이 2016-%d=%d\n",a,2016-a);
	    } 
	    if(b>0){ 
		    printf("한국나이 2018-%d=%d\n",a,2018-a); 
		    printf("만 나이 2017-%d=%d\n",a,2017-a); 
	    } 
	   }

























