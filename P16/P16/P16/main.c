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
	printf("�п�J�r��A��ENTER�䵲����J�G\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fPtr);
	fwrite(str, sizeof(char), i, fPtr);
	fclose(fPtr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}