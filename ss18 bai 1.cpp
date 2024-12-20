#include<stdio.h>
#include<string.h> 
int main(){
	
	struct student{
		int id ;
		char fullname[100];
		int age;
		char phone[20];
	};
	
	// khai bao bien 
	struct student user01={1,"Vu Thu Trang",18,"123456789"	};
	struct student user02;
	// truy xuat 
	printf("In thong tin sinh vien \n");
	printf("%d\n",user01.id);
	printf("%s\n",user01.fullname);
	printf("%d\n",user01.age);
	printf("%s\n",user01.phone);
	//cap nhat gia tri
	printf("Sau khi cap nhap tuoi:\n");
	user01.age=81;
	printf("%d\n",user01.age);
	printf("sau khi cap nhap sdt: \n");
	//su dung strcpy(str1,str2)
	user01.phone="616123868";//ko gan dc
	strcpy(user01.phone,"616123868");
	printf("%s\n",user01.phone);
	
	return 0;
}
