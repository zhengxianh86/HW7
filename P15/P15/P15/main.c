#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fPtr1, *fPtr2;
	char ch;
	fPtr1 = fopen("welcome.txt","r");
	fPtr2 = fopen("output.txt", "w");
	if((fPtr1!=NULL)&& (fPtr2 != NULL))
	{
		while ((ch = getc(fPtr1)) != EOF)
			putc(ch, fPtr2);
		fclose(fPtr1);
		fclose(fPtr2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}