#include<stdio.h>

int main(){
	FILE *file;
	char str[100];
	file = fopen("bt01.txt","r");
	fread(str,sizeof(char),sizeof(str),file);
	printf("Noi dung trong file: %s",str);
	fclose(file);
	return 0;
}
