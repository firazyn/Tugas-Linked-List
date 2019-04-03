#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
using namespace std;

struct TNode{
	int data;
	TNode *next;
};

TNode *head, *tail;

void init(){
	head = NULL;
	tail = NULL;
}

int isEmpty(){
	if(tail == NULL) 
		return 1;
	else 
		return 0;
}

void hapusKhusus(int n){
	TNode *bantu,*hapus;
	int d,f=0;
	bantu = head;
		if (head->data == n){
			hapus=head;
			d=hapus->data;
			head=head->next;
			delete hapus;
			cout<<endl<<d<<" terhapus\n";
		}
		else{
			while((bantu->next)->data != n){
				bantu=bantu->next;
				if(bantu == tail){
					f=1;
					break;
				}
			}
			if(f==1)
				cout<<"\nTidak ada nilai "<<n<<" pada list\n";
			else{
				hapus=bantu->next;
				d=hapus->data;
				bantu->next=hapus->next;
				if (hapus == tail)
					tail=bantu;
				delete hapus;
				cout<<endl<<d<<" terhapus\n";
			}
		}
}

void menu(){
    char pilih1, pilih2, ulang;
    int data,x;

    do{
      	system("cls");
      	cout<<"SINGLE LINKED LIST CIRCULAR\n---------------------------\n\n";
      	cetak();
      	cout<<"\nMenu : \n1. Input data\n2. Hapus data\n3. Keluar\n>>";
      	cin>>pilih1;
        
        switch(pilih1){
      		case '1' :
      			cout<<"\nInput : \n1. Depan\n2. Belakang\n3. Khusus\n>>";
      			cin>>pilih2;
      		
      			switch(pilih2){
      				case '1' :
      					cout<<"\nMasukkan data : ";
            			cin>>data;
            			isiDepan(data);
            			break;
            		case '2' :
            			cout<<"\nMasukkan data : ";
            			cin>>data;
            			isiBelakang(data);
            			break;
            		case '3' :
            			if (isEmpty() == 1){
            				cout<<"\n(List masih kosong)\n";
      						break;
						}
            			cout<<"\nMasukkan data : ";
            			cin>>data;
            			cout<<"Sebelum nilai : ";
            			cin>>x;
            			isiKhusus(data,x);
            			break;
            		default :
            			cout<<"\nPilih ulang"<<endl;
				}
				break;

      		case '2' :
      			if (isEmpty() == 1){
				  	cout<<"\n(List masih kosong)\n";
      				break;
      			}
            		cout<<"\nHapus : \n1. Depan\n2. Belakang\n3. Khusus\n>>";
            		cin>>pilih2;
				
            		switch(pilih2){
      				case '1' :
      					hapusDepan();
            				break;
            			case '2' :
            				hapusBelakang();
            				break;
            			case '3' :
            				cout<<"\nMasukkan nilai : ";
            				cin>>data;
            				hapusKhusus(data);
            				break;
            			default :
            				cout<<"\nPilih ulang"<<endl;
					}
				break;
