#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	printf("�п�J�T���:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b )
	printf("�O�T����\n");
	else
	printf("���O�T����\n");
	system("pause");
	return 0;
}
