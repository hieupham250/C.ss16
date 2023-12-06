#include<stdio.h>

int main(){
	FILE *file_bt01,*file_bt03,*file_bt05;
	char c;
	file_bt01 = fopen("bt01.txt","r");
	if(file_bt01==NULL){
		printf("Khong the mo file bt01.txt!\n");
		return 1;
	}
	file_bt03 = fopen("bt03.txt","r");
	if(file_bt03==NULL){
		printf("Khong the mo file bt03.txt!\n");
		fclose(file_bt01);
		return 1;
	}
	file_bt05 = fopen("bt05.txt","w+");
	if(file_bt05==NULL){
		printf("Khong the mo file bt05.txt!\n");
		fclose(file_bt01);
		fclose(file_bt03);
		return 1;
	}
	while((c = fgetc(file_bt01)) != EOF){
		fputc(c,file_bt05);
	}
	fprintf(file_bt05,"\n");
	while((c = fgetc(file_bt03)) != EOF){
		fputc(c,file_bt05);
	}
	fclose(file_bt01);
	fclose(file_bt03);
	fclose(file_bt05);
	printf("Sao chep thanh cong sang file bt05!");
	return 0;
} 
