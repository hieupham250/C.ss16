#include<stdio.h>
#include<string.h>

int main(){
	FILE *file;
	char str[100];
	file = fopen("bt01.txt","w+");
	if(file==NULL){
		printf("Khong the mo file!");
		return 1;
	}
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	fprintf(file,"%s",str);
	fclose(file);
	printf("Chuoi da duoc ghi vao file bt01.txt.\n");
	return 0;
}
