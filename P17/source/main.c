#include<stdio.h>
#include<stdlib.h>
#define MAX 80


int main() {

	FILE* fPtr1;
	fPtr1 = fopen("../TXTFile/Data1.txt", "r");		

	char str[MAX];
	int bytes;

	while (!feof(fPtr1)) {	//�p�G�SŪ���ɧ�

		bytes = fread(str, sizeof(char), MAX - 1, fPtr1);
		//printf("\n\n%d\n\n", bytes);
		//bytes��Ū���ƪ��`�q
		str[bytes] = '\0';
		printf("%s\n",str);

	}
	

	fclose(fPtr1);
	system("pause");
	return 0;

}

