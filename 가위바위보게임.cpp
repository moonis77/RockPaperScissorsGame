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
			printf("1.���� 2.���� 3.�� :");
			scanf("%d", &user);	
			
			if ( (user >= 1) && (user <= 3)) break;
			else printf("���� �߸��Է��ϼ̽��ϴ�.\n");
		}
		
		
		com = rand() %3 + 1;
		
		
		printf("����� : ");
		result(user);
		
		printf("��ǻ�� : ");
		result(com);
		
		if (user == com) printf("���º�");
		else if ( (user - com == -2) || (user - com == 1) ) printf("����ڽ¸�");
		else printf("��ǻ�ͽ¸�");
		
		printf("������ ��� �ϰڽ��ϱ�? y : 1 x : 2");
		scanf("%d", &select);
		
		if (select == 2) break;
		
	}
		
	return 0;	 
}

void result(int sel) {
	if(sel==GAWI) printf("����\n");
	else if(sel==BAWI) printf("����\n");
	else printf("��\n");
}

