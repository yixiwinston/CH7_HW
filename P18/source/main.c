#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE* in;
	FILE* out;
	in = fopen("../TXTFile/in.txt", "r");
	out = fopen("../TXTFile/out.txt", "w");

	int cnt;
	char str[100];

 		while (!feof(in)) {

			cnt = fscanf(in, "%s", str);

			if (cnt > 0)
				fprintf(out, "%s\n", str);

		}


	fclose(in);
	fclose(out);

	system("pause");
	return 0;

}

