#include <stdio.h>
#include <windows.h>

void deco()             //데코레이션
{
int i;
for(i=0;i<4;i++)
{ 
printf("\n======================================================================"); 
}
}



void weather(char wea,int a) //계산함수
{ 
if(wea== 'R')        //비  
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
