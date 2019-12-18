#include<stdio.h>
#include<stdlib.h>



int main() {

	FILE* fPtr1,*fPtr2;
	fPtr1 = fopen("../TXTFile/Data1.txt", "r");	
	fPtr2 = fopen("../TXTFile/OP.txt", "w");

	char ch;


	if (fPtr1 == NULL || fPtr2 == NULL) {
		printf("Can't find the file!!!\n");
	}
	else {
		
		while ((ch = getc(fPtr1)) != EOF) 
			putc(ch, fPtr2);

		fclose(fPtr1);
		fclose(fPtr2);

		printf("\nCopy Complete!!!\n");

	}

	system("pause");
	return 0;

}

