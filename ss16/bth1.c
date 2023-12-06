#include<stdio.h>


int main(){
	FILE* taptin = NULL;
	int tuoi;
	taptin = fopen("test.txt","w");
	if(taptin != NULL){
		fputc('A',taptin);
		fputs("xin chao anh chang dep traiban co khoe khong ?",taptin);
		printf("ban bao nhieu tuoi ?");
		scanf("%d",&tuoi);
		fprintf(taptin,"nguoi dang su dung may tinh nay %d tuoi",tuoi);
		fclose(taptin);
	}
	return 0;
}



