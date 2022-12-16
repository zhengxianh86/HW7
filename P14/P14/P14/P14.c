#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fPtr;
	char ch;
	int count = 0;

	fPtr = fopen("welcome.txt", "r");
	if (fPtr != NULL)
	{
		while ((ch = getc(fPtr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fPtr);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}