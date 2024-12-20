#include<stdio.h>


int main(){
	struct Sinhvien{
		char id[100];
		char name[50];
		int age;
		char phone[25];
	};
	struct Sinhvien ptit;
		printf("Moi ban nhap id sinh vien:");
		fgets(ptit.id,sizeof(ptit.id),stdin);
		printf("Moi ban nhap ho ten :");
		fgets(ptit.name,sizeof(ptit.name),stdin);
		printf("Moi ban nhap tuoi :");
		scanf("%d", &ptit.age);
		printf("Moi ban nhap so dien thoai :");
		fflush(stdin);
		fgets(ptit.phone,sizeof(ptit.phone),stdin);
		printf("\n\n\n\n");
		printf("%s", ptit.id);
		printf("%s", ptit.name);
		printf("%d\n", ptit.age);
		printf("%s", ptit.phone);
	return 0;
}
