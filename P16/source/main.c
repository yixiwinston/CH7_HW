#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80


int main() {

	FILE* fPtr1;
	fPtr1 = fopen("../TXTFile/Data1.txt", "a");		//�᭱��'a'�����O����g�����U�h�A���|�D�ʧR���C
	
	char ch;
	char str[MAX];
	int i = 0;

	printf("   Please enter string\n   Press Button Enter to end the input:\n");

	if (fPtr1 == NULL ) {
		printf("Can't find the file!!!\n");
	}
	else {

		while ((ch = getche()) != ENTER && i < MAX)
			str[i++] = ch;

		putc('\n', fPtr1);
		fwrite(str, sizeof(char), i, fPtr1);	//fwrite(�g�i�h����,�g�J����ƺ�����e�Τj�p,��ƪ��q,�g�i�h����)

		fclose(fPtr1);
		printf("\n�ɮת��[����\n");
	}

	system("pause");
	return 0;

}

