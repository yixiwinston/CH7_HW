#include<stdio.h>
#include<stdlib.h>



int main() {

	FILE* fPtr;
	fPtr = fopen("../TXTFile/Data1.txt", "r");		//要用 '/'檔案深度間
	
	char ch;
	int cnt = 0;

	if (fPtr == NULL) {
		printf("Can't find the file!!!\n");
	}
	else {
		while ((ch = getc(fPtr)) != EOF) {

			printf("%c", ch);
			cnt++;

		}

		fclose(fPtr);
		printf("\n總共有%d個字元\n", cnt);

	}

	system("pause");
	return 0;

}

