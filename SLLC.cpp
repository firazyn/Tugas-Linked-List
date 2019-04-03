#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
using namespace std;

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
