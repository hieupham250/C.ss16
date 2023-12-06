#include<stdio.h>

int main(){
	FILE *file;
	char content[1000];
	int numOfLines;
	int i;
	file = fopen("bt03.txt","w+");
	if(file == NULL){
		printf("Khong the mo file!");
		return 1;
	}
	printf("Nhap so dong: ");
	scanf("%d",&numOfLines);
	for(i=0;i<numOfLines;i++){
		printf("Nhap noi dung dong %d: ",i+1);
		fflush(stdin);
		fgets(content,sizeof(content),stdin);
		fprintf(file,"%s",content);
	}
	fclose(file);
	printf("Chuoi da duoc ghi vao file!");
}
