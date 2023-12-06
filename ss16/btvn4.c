#include<stdio.h>

int main(){
	FILE *file;
	char content[100];
	file = fopen("bt03.txt","r");
	fread(content,sizeof(char),sizeof(content),file);
	printf("%s",content);
	fclose(file);
	return 0;
}
