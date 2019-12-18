#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80


int main() {

	FILE* fPtr1;
	fPtr1 = fopen("../TXTFile/Data1.txt", "a");		//後面的'a'指的是持續寫紀錄下去，不會主動刪掉。
	
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
		fwrite(str, sizeof(char), i, fPtr1);	//fwrite(寫進去什麼,寫入的資料種類其占用大小,資料的量,寫進去哪裡)

		fclose(fPtr1);
		printf("\n檔案附加完成\n");
	}

	system("pause");
	return 0;

}

