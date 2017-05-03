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
