#include <stdio.h>                        //기본헤더파일
#include <windows.h>            	  //Dos명령어사용헤더파일              		
#include <stdlib.h>    			  //window및함수헤더파일                       		

int substitution();		          //substitution함수를선언

int factorial(int n);	                  //factorial함수를선언하고n값을대입 	

int combinatorics(int n,int r);           //combinatorics함수를선언하고n과r값을대입

int last_ac();	                          //main함수를반복하기위한함수
 



int main(int last)                       //last를끌어다씀
{
  int n,r;
  while(1)
  {
  	  fn:
	  printf("조합에 사용할 두 수를 입력해 주세요\n"); 
	  n=substitution();                                    //n에substitution을실행시켜나온값을대입
	  r=substitution();                                    //r에substitution을실행시켜나온값을대입
	  printf("%dC%d=%d\n",n,r,combinatorics(n,r));         //combinatorics에n,r값을대입시켜나온값을넣는다
	  last_ac();
	  
  }
  
  
} 

int substitution(void)                                        //치환하여쓰기위한함수
{
  int n;
  scanf("%d",&n);
  return n;                                                    //n값을돌려받음
}

int factorial(int n)                                          //factorial함수에n값대입
{
  int tmp1;
  int out=1;
  for (tmp1=1; tmp1<=n; tmp1++)
  {
    out*=tmp1;
  }
  n=out;
}

int combinatorics(int n, int r){                              //combinatorics값에n,r대입
  return(factorial(n)/(factorial(n-r)*factorial(r)));         //factorial에n을넣은값을factorial에n-r값을넣은값과r을넚은값을서롭곱한값으로나눈다
}

int last_ac(){                                                //main
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
