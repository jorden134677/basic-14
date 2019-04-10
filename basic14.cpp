#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	printf("請輸入三邊長:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b )
	printf("是三角形\n");
	else
	printf("不是三角形\n");
	system("pause");
	return 0;
}
