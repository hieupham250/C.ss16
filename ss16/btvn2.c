#include<stdio.h>

int main(){
	FILE *file;
	char str[100];
	file = fopen("bt01.txt","r");
	if(file==NULL){
		printf("Khong the mo file!");
		return 1;
	}
	fread(str,sizeof(char),sizeof(str),file);
	printf("Noi dung trong file: %s",str);
	fclose(file);
	return 0;
}
