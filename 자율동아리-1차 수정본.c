#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int substitution();

int factorial(int n);

int combinatorics(int n,int r);

int last_ac();




int main(int last)
{
  int n,r;
  while(1)
  {
  	  fn:
	  printf("조합에 사용할 두 수를 입력해 주세요\n"); 
	  n=substitution();
	  r=substitution();
	  printf("%dC%d=%d\n",n,r,combinatorics(n,r));
	  last_ac();
	  
  }
  
  
} 

int substitution(void)
{
  int n;
  scanf("%d",&n);
  return n;
}

int factorial(int n)
{
  int tmp1;
  int out=1;
  for (tmp1=1; tmp1<=n; tmp1++)
  {
    out*=tmp1;
  }
  n=out;
}

int combinatorics(int n, int r){
  return(factorial(n)/(factorial(n-r)*factorial(r)));
}

int last_ac(){
	int last;
	int c=1;
	system("pause");
	system("cls");
	printf("다시하려면 1, 종료하시려면 2번을 눌러주세요\n");
	while(1){
	scanf("%d",&last);
	if(last==1){
		printf("재시작");
		system("cls");	
		break;
	}else if(last==2){
		printf("종료합니다.");
		exit(0);
	}else{
		printf("잘못된 입력입니다. 다시 입력해 주세요\n ");
		continue;
	}
}	
}
