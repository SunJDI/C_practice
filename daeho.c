#include<stdio.h>
int main(void)
{
int a;
int b;
int c;
printf("두 수 입력");
scanf("%d",&a);
scanf("%d",&b);
printf("부호선택\n 1.+\t2.-\t3.*\t4./\n");
scanf("%d",&c);
if(c == 1) 
{  
printf("%d+%d=%d",a,b,a+b); 
}else if(c == 2){
printf("%d-%d=%d",a,b,a-b); 
}else if(c == 3){
printf("%d*%d=%d",a,b,a*b); 
}else if(c ==4){
printf("%d/%d=%d",a,b,a/b); 
}else{  
printf("오류"); 
}
}  






#include<stdio.h>
/*int cc(void)
{
int a;
int b;
int re;
char c;
while(re==1) {
printf("두 수를 띄어쓰기로 입력");
scanf("%d",&a);
scanf("%d",&b);
fflush;
printf("사칙연산 선택(+ - * /)");
scanf("%c",&c); 
switch(c) 
{
case '+' : printf("%d+%d=%d",a,b,a+b); 
break;  
case '-' : printf("%d-%d=%d",a,b,a-b);  
break;  
case '*' : printf("%d*%d=%d",a,b,a*b);
break;
case '/' : printf("%d/%d=%d",a,b,a/b); 
} 
printf("다시 하기:1  끝내기:2") }
}*/


int main(void){
int a; 
int b; 
int re=1; 
char c;
/* printf("두 수를 띄어쓰기로 입력");  
scanf("%d",&a);
scanf("%d",&b);
fflush; 
printf("사칙연산 선택(+ - * /)");
scanf("%c",&c); 
switch(c) {
case '+' : printf("%d+%d=%d",a,b,a+b); 
break; 
case '-' : printf("%d-%d=%d",a,b,a-b);  
break; 
case '*' : printf("%d*%d=%d",a,b,a*b);  
break; 
case '/' : printf("%d/%d=%d",a,b,a/b); 
}   
/*printf("다시 하기:1  끝내기:2");  
scanf("%d",&re);*/ 
while(re==1) 
{  
printf("\n두 수를 띄어쓰기로 입력"); 
scanf("%d",&a);
scanf("%d",&b);
fflush;
printf("사칙연산 선택(+ - * /)"); 
scanf("%c",&c); 
switch(c) {
case '+' : printf("%d+%d=%d",a,b,a+b); 
break;  
case '-' : printf("%d-%d=%d",a,b,a-b); 
break;
case '*' : printf("%d*%d=%d",a,b,a*b);
break;
case '/' : printf("%d/%d=%d",a,b,a/b);  
break;
}
printf("다시 하기:1  끝내기:2"); 
}
}





#include<stdio.h>
#include<windows.h> 
int main(void)   
{
  int a;  
  int b; 
  int re=1; 
  char c;
  while(re==1)
  {
    system("cls");
    printf("\n두 수를 띄어쓰기로 입력\n"); 
    scanf("%d",&a);    
    scanf("%d",&b);      
    fflush(stdin);  
    printf("사칙연산 선택(+ - * /)\n"); 
    scanf("%c",&c);    
    switch(c)
    {
      case '+' : printf("=============================\n%d+%d=%d\n=============================",a,b,a+b);  
        break;  
      case '-' : printf("=============================\n%d-%d=%d\n=============================",a,b,a-b);   
        break; 
      case '*' : printf("=============================\n%d*%d=%d\n=============================",a,b,a*b);  
        break;  
      case '/' : printf("=============================\n%d/%d=%d\n=============================",a,b,a/b); 
        break;
      default : printf("오류"); 
    }
    printf("\n다시하기:1 끝내기:2\n"); 
  }
}
