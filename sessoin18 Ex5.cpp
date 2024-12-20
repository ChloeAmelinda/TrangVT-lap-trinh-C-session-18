#include <stdio.h>
#include <string.h>

int main(){
	int id;
	struct sinhvien {
		char fullname[100];
		int age;
		char phonenumber[30];
	};
	struct sinhvien user[50]= {
		{ "Vu Thu Trang", 18, "0123456"},
		{ "Pham Thai Son", 18, "0123458"}, 
		{ "Vu Hong Anh", 18, "0123456"}, 
		{ "Nguyen Tien Minh", 18, "0123456"}, 
		{ "Do Trung Hieu", 18, "0123456"}
	};
	for (int i=0; i<5; i++){
		printf ("sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("Ten :%s\n",user[i].fullname);
		printf ("Tuoi:%d\n",user[i].age);
		printf ("Sdt:%s\n",user[i].phonenumber);
	} 
	printf ("Moi ban nhap id tim kiem:");
	scanf ("%d",&id);
	for (int i=0; i<5; i++){
		if (id==i+1){
			printf ("Moi nhap ten moi :");
			fflush(stdin);
			fgets(user[i].fullname,100,stdin);
			user[i].fullname[strcspn(user[i].fullname,"\n")]='\0';
			printf("Moi nhap tuoi moi :");
			scanf ("%d",&user[i].age); 
		}
	}
	printf ("cac gia tri sau khi sua:\n");
	for (int i=0; i<5; i++){
		printf ("sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("Ten :%s\n",user[i].fullname);
		printf ("Tuoi :%d\n",user[i].age);
		printf ("Sdt :%s\n",user[i].phonenumber);
	} 
		return 0;
}
