#include <iostream>

using namespace std;

int jumlah(){
	int hasil, angka1, angka2;
	cout<<"Silakan Masukan Angka Ke-1 : ";
	cin>>angka1;
	cout<<"Silakan Masukan Angka Ke-2 : ";
	cin>>angka2;
	hasil=angka1+angka2;
	cout<<"Hasil Penjumlahan : "<<hasil<<endl;
}

double kurang(){
	int hasil, angka1, angka2;
	cout<<"Silakan Masukan Angka Ke-1 : ";
	cin>>angka1;
	cout<<"Silakan Masukan Angka Ke-2 : ";
	cin>>angka2;
	hasil=angka1-angka2;
	cout<<"Hasil Pengurangan : "<<hasil<<endl;
}

int kali(){
	int hasil, angka1, angka2;
	cout<<"Silakan Masukan Angka Ke-1 : ";
	cin>>angka1;
	cout<<"Silakan Masukan Angka Ke-2 : ";
	cin>>angka2;
	hasil=angka1*angka2;
	cout<<"Hasil Perkalian : "<<hasil<<endl;
}

double bagi(){
	int hasil, angka1, angka2;
	cout<<"Silakan Masukan Angka Ke-1 : ";
	cin>>angka1;
	cout<<"Silakan Masukan Angka Ke-2 : ";
	cin>>angka2;
	hasil=angka1/angka2;
	cout<<"Hasil Pembagian : "<<hasil<<endl;
}
void keluar(){
	cout<<"===================================="<<endl;
	cout<<" ===========TERIMAKASIH==========="<<endl;
	cout<<"===================================="<<endl;
	cout<<endl;
	cout<<"===================================="<<endl;
	cout<<endl;
};

int main(){
	
	menu:
	int pilih;
	
	cout<<"===================================="<<endl;
	cout<<"====Program Kalkulator Sederhana===="<<endl;
	cout<<"===================================="<<endl;
	cout<<endl;
	cout<<"===================================="<<endl;
	cout<<endl;
	
	cout<<"================MENU================"<<endl;
	cout<<" 1. Penjumlahan "<<endl;
	cout<<" 2. Pengurangan "<<endl;
	cout<<" 3. Perkalian "<<endl;
	cout<<" 4. Pembagian "<<endl;
	cout<<" 5. Exit "<<endl;
	
	cout<<"Silakan Masukan Pilihan Menu (1/2/3/4/5) : ";
	cin>>pilih;
	
	switch(pilih){
		case 1:
			system ("cls");
			jumlah();
			goto menu;
			break;
			
		case 2:
			system ("cls");
			kurang();
			goto menu;
			break;
			
		case 3:
			system ("cls");
			kali();
			goto menu;
			break;
			
		case 4:
			system ("cls");
			bagi();
			goto menu;
			break;
		case 5:
			system ("cls");
			keluar();
			break;
			
	}
}
