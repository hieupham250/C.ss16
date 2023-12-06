#include<stdio.h>
#include<stdlib.h>

struct book {
	int code;
	char title[50];
	char author[50];
	float price;
	char category[50];
};

void inputBooks(struct book books[],int *numOfBooks){
	printf("Nhap so luong sach(toi da 100): ");
	scanf("%d",numOfBooks);
	if(*numOfBooks>100){
		printf("So luong sach vuot gioi han!");
	}
	int i;
	for(i=0;i<*numOfBooks;i++){
		printf("Nhap thong tin sach %d:\n", i + 1);
        printf("Ma sach: ");
        scanf("%d",&books[i].code);
		fflush(stdin);
        printf("Ten sach: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);

        printf("Tac gia: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        printf("Gia tien: ");
        scanf("%f", &books[i].price);
        fflush(stdin);
        printf("The loai: ");
        fgets(books[i].category, sizeof(books[i].category), stdin);
	}
}

void saveFile(struct book books[], int numOfBooks){
	FILE *file =fopen("Books.txt","w+");
	if(file==NULL){
		printf("Khong the mo file de luu tru!");
		return;
	}
	int i;
	for(i=0;i<numOfBooks;i++){
		fprintf(file, "Ma sach: %s", books[i].code);
        fprintf(file, "Ten sach: %s", books[i].title);
        fprintf(file, "Tac gia: %s", books[i].author);
        fprintf(file, "Gia tien: %.2f\n", books[i].price);
        fprintf(file, "The loai: %s", books[i].category);
        fprintf(file, "------------------------\n");
	}
	fclose(file);
	printf("Thong tin da duoc luu vao file Books.\n");
}

void displayBooksFile(){
	char content[1000];
	FILE *file = fopen("Books.txt","r");
	if(file==NULL){
		printf("Khong the mo file de doc!");
		return;
	}
	fread(content,sizeof(char),sizeof(content),file);
	printf("Thong tin sach tu file:\n");
	printf("%s",content);
	fclose(file);
}

int main(){
	struct book books[100];
	int numOfBooks=0;
	do{
		printf("****************MENU****************\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Luu thong tin sach vao file\n");
        printf("3. Hien thi thong tin sach tu file\n");
        printf("4. Thoat\n");
        int choice;
        printf("Chon chuc nang: ");
        scanf("%d",&choice);
        switch(choice){
        	case 1:
        		inputBooks(books,&numOfBooks);
        		break;
        	case 2:
        		saveFile(books,numOfBooks);
        		break;
        	case 3:
        		displayBooksFile();
        		break;
        	case 4:
        		exit(0);
        		break;
        	default:
        	 printf("Chuc nang khong hop le. Vui long chon lai!\n");
		}
	} while(1==1);
}
