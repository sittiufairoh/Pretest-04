/*
Nama Program	: Pretest-04
Nama			: SITTI UFAIROH AZZAHRA
NPM				: 140810180002
Tanggal			: 27 Maret 2019
*/

#include <iostream>
using namespace std;

struct ElementList{
	char npm[14];
	char nama[40];
	float ipk;
	ElementList* next;
};

ElementList* A;
typedef ElementList* pointer;
typedef pointer list;

void createList(list& first){
	first = NULL;
}

void createElmt(pointer& pBaru){
	pBaru=new ElementList;
	cout <<"Nama	: "; cin.ignore();cin.getline(pBaru->nama,40);
	cout <<"NPM	: "; cin>>pBaru->npm;
	cout <<"IPK	: "; cin>>pBaru->ipk;
	pBaru->next = NULL;
}

/*
void insertSortNama(list& first,pointer pBaru){
	pointer pBantu;
	List& tempList = NULL;
 	List& tempFirst = First;
 	List& tempNext = First->next;
	
	while(tempNext != NULL){
  		if(tempFirst->nama > tempNext->nama ) {
  			tempList = tempFirst;
   			tempFirst = tempNext;
   			tempList->next = tempList->next->next;
   			tempFirst->next = tempList;
   			tempNext = tempFirst->next;
   			print_list(tempFirst);
	}
  	else{
   		tempFirst = tempFirst->next;
   		tempNext = tempNext->next;
 	 	}
	}
  return First;
 }
}*/

void traversal(list first){
	pointer pBantu;
	int i = 1;
	
	if(first==NULL){
		cout << "List Kosong" << endl;
	}
	else {
		pBantu=first;
		while(pBantu!=NULL){
			cout << pBantu->npm<<"    "<<pBantu->nama<<"     "<<pBantu->ipk<<endl;
            pBantu = pBantu->next;
		}
	}
}

void insertLast(list& first, pointer pBaru){
	pointer last;
	
	if(first==NULL)
		first=pBaru;
	else{
		last=first;
		while(last->next != NULL){
			last = last->next;
		}
		last->next = pBaru;
	}
}

int main (){
	pointer p;
	list first;
	int n,menu;
	createList(first);
	do{
		system("cls");
        cout<<"Masukkan Banyak Mahasiswa : "; cin>>n;
        for(int i=0;i<n;i++){
            cout<<"\nData ke- "<<i+1<<": "<<endl;
            createElmt(p);
            insertLast(first,p); 
            /*insertSortNama(first,pBaru);*/
        }
        traversal(first);
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Keluar"<<endl;
        cout<<"Pilih : "; cin>>menu;
    }
	while(menu==1);
}


//sortingnya di command soalny gajalan jdny masih gagal:(((
