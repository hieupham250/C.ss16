#include<stdio.h>

int main(){
	FILE *taptin = NULL;
	int kytuhientai = 0;
	taptin = fopen("test.txt","r");
	if(taptin != NULL){
		do{
			kytuhientai = fgetc(taptin);
			printf("%c",kytuhientai);
		} while(kytuhientai != NULL);
		fclose(taptin);
	}
	return 0;
}
