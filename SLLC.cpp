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
