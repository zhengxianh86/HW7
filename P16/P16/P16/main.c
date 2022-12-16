#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define MAX 80

int main()
{
	FILE* fPtr;
	char str[MAX], ch;
	int i=0;
	fPtr = fopen("output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入：\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fPtr);
	fwrite(str, sizeof(char), i, fPtr);
	fclose(fPtr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
}