#include<stdio.h>
#include<stdlib.h>

struct Student{
	char fullName[50];
	int age;
	char phone[15];
	char email[50];
}; 

int main(){
	int i;
	int numStudents;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&numStudents);
	struct Student students[numStudents];
	for(i=0;i<numStudents;i++){
		printf("\nNhap thong tin sinh vien thu %d:\n",i+1);
		printf("Ho va ten: ");
		scanf("%s",students[i].fullName);
		printf("Tuoi: ");
		scanf("%d",&students[i].age);
		printf("So dien thoai: ");
		scanf("%s",students[i].phone);
		printf("Email: ");
		scanf("%s",students[i].email);
	}
	FILE *file = fopen("students.txt","w+");
	if (file == NULL) {
        printf("Không the mo file de ghi.\n");
        return 1;
    } 
    for(i=0;i<numStudents;i++){
    	fprintf(file,"%s %d %s %s",students[i].fullName,students[i].age,students[i].phone,students[i].email);
	}
	fclose(file);
	printf("da ghi thong tin sinh vien vao file students.txt");
}
