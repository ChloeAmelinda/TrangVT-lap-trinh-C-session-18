#include<stdio.h>
#include<string.h>
#include<math.h>  
void displaymenu();
struct dish{
		int id;
		char name[50];
		int price;
	};
struct dish menu[100]={{1, "com",20},
{2,"xoi",25},
{3,"chao",15},
{4,"banh",10},
{5,"nuoc",5},
};


int main(){
	int choice;
	int count =5;
	int temp, mon, found;
	int i,j;
	char monmoi[50];
	char newprice;
	do{
		displaymenu();
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				for(int i=0; i<count; i++){
					printf("thu tu mon an thu %d :%d\n",i+1,menu[i].id);
					printf("Ten mon an :%s\n",menu[i].name);
					printf("Gia tien :%dk\n",menu[i].price); 
				}
				break;
			case 2://them 
			if(count <=5){
				menu[count].id=count +1;
				printf("Them mon an:");
				fflush(stdin);
				fgets(menu[count].name, sizeof(menu[count].name) , stdin);
				printf("Nhap gia tien:");
				scanf("%d", &menu[count].price);
				count++;
			}
				// in menu sau khi add
				for(int i=0; i<count; i++){
					printf("thu tu mon an thu %d:%d\n",i+1,menu[i].id);
					printf("Ten mon an :%s\n",menu[i].name);
					printf("Gia tien :%d\n",menu[i].price); 
				}
				break;
			case 3:// sua
				printf("Sua phan tu cuoi cung \n");
	            printf("Nhap ten mon moi: ");
	            fflush(stdin); 
	            fgets( monmoi, sizeof(monmoi), stdin);
	            strcmp( menu[count].name, monmoi);
	            fgets( menu[count].name, sizeof(menu[count].name), stdin);
	            
	            printf("nhap gia tien moi:");
	            fflush(stdin);
	            scanf("%d",&newprice);
	            menu[count].price= newprice;
	            
				// in menu sau khi sua
				for(int i=0; i<count; i++){
					printf("thu tu mon an thu %d:%d\n",i+1,menu[i].id);
					printf("Ten mon an :%s\n",menu[i].name);
					printf("Gia tien :%dk\n",menu[i].price); 
				}
				break;
			case 4://xoa
			if(count <=5){
				menu[count].id=count -1;
				printf("xoa mon an:");
				fflush(stdin);
				fgets(menu[count].name, sizeof(menu[count].name) , stdin);
				printf("xoa gia tien:");
				scanf("%d", &menu[count].price);
				count--;
			}
				// in menu sau khi add
				for(int i=0; i<count; i++){
					printf("thu tu mon an thu %d:%d\n",i+1,menu[i].id);
					printf("Ten mon an :%s\n",menu[i].name);
					printf("Gia tien :%dk\n",menu[i].price); 
				}
				break;
			case 5:// sap xep tang dan 
				for(i=0; i<count; i++){
					for(j=i+1; j<count; j++){
						if(menu[i].price >menu[j].price){
							dish temp= menu[i];
							menu[i] =menu[j];
							menu[j]= temp;
						}
					}
				} 
				
				//in 
			   for ( int i = 0; i < count; i++) {
			      printf("thu tu mon an thu %d :%d\n",i+1,menu[i].id);
					printf("Ten mon an :%s\n",menu[i].name);
					printf("Gia tien :%dk\n",menu[i].price); 
			   }
				break;
			case 6:
				// tim kiem  
				printf("nhap id mon an can tim: ");
				getchar();
				scanf("%d", &mon);
				
			    for(int i = 0; i < count; i++){
			        if(menu[i].id == mon){
			            printf("Ten mon an :%s\n",menu[i].name);
						printf("Gia tien :%dk\n",menu[i].price); 
			            found = 1; 
			            break;
			        }
			    }
			    if(found == 0){
			        printf("Khong tim thay mon an  %s\n", mon);
			    }
				break;
			case 7:
				printf("Thoat \n");
				break;
			default:
				printf("Nhap sai roi .Nhap lai\n");
		} 
		
	}while(choice !=7);
	return 0;
}

void displaymenu(){
	printf("-----Menu-----\n");
	printf("1.In cac mon an trong menu \n");
	printf("2.Them 1 phan tu vao vi tri \n");
	printf("3.Sua 1 phan tu vao vi tri \n");
	printf("4.Xoa 1 phan tu o vi tri \n");
	printf("5.Sap xep phan tu tang dan \n");
	printf("6.Tim kiem phan tu theo ten nhap vao \n");
	printf("Thoat \n");
}


