#include <stdio.h>
#include <string.h>

int main(){
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
		printf ("Sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("Ten :%s\n",user[i].fullname);
		printf ("Tuoi:%d\n",user[i].age);
		printf ("Sdt:%s\n",user[i].phonenumber);
	}
	int length=5;
		printf ("Moi ban nhap ten phan tu moi:");
		fflush(stdin);
		fgets(user[length].fullname,100,stdin);
		user[length].fullname[strcspn(user[length].fullname,"\n")]='\0';
		printf ("Moi nhap tuoi:");
		scanf ("%d",&user[length].age);
		printf ("Moi nhap so dien thoai:");
		fflush(stdin);
		fgets(user[length].phonenumber,100,stdin);
		user[length].phonenumber[strcspn(user[length].phonenumber,"\n")]='\0';
		length++;
	for (int i=0; i<length; i++){
		printf ("Sinh vien thu %d:\n",i+1);
		printf ("id :%d\n",i+1); 
		printf ("Ten :%s\n",user[i].fullname);
		printf ("Tuoi:%d\n",user[i].age);
		printf ("Sdt:%s\n",user[i].phonenumber);
	}
	return 0;
}
