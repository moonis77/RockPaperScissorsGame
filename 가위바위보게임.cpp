#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define GAWI 1
#define BAWI 2
#define BOW 3
void result(int sel);
int main() {
	int user, com;
	int select; 
	
	srand(time(NULL));
	
	while (1) {
		while (1) {
			printf("1.가위 2.바위 3.보 :");
			scanf("%d", &user);	
			
			if ( (user >= 1) && (user <= 3)) break;
			else printf("값을 잘못입력하셨습니다.\n");
		}
		
		
		com = rand() %3 + 1;
		
		
		printf("사용자 : ");
		result(user);
		
		printf("컴퓨터 : ");
		result(com);
		
		if (user == com) printf("무승부");
		else if ( (user - com == -2) || (user - com == 1) ) printf("사용자승리");
		else printf("컴퓨터승리");
		
		printf("게임을 계속 하겠습니까? y : 1 x : 2");
		scanf("%d", &select);
		
		if (select == 2) break;
		
	}
		
	return 0;	 
}

void result(int sel) {
	if(sel==GAWI) printf("가위\n");
	else if(sel==BAWI) printf("바위\n");
	else printf("보\n");
}

