#include <iostream>
#include <iomanip>
using namespace std;

struct Menu {
	int ayam_goreng = 17000;
	int ayam_bakar = 21000;
	
};

void line() {
	cout<<"\n--------------------------------------\n";
}

int main() {
	int pil, porsi, pil2 = 0, porsi2 = 0;
	cout<<"===== Kedai Ayam =====\n";
	cout<<"1. Ayam Goreng\t17k\n";
	cout<<"2. Ayam Bakar\t21k\n";
	cout<<"======================\n";
	
	char n;
	cout<<"Pilihan: ";
	cin>>pil;
	if(pil == 1) {
		cout<<"Porsi: ";
		cin>>porsi;
	} else if(pil == 2) {
		cout<<"Porsi: ";
		cin>>porsi;
	} else {
		cout<<"Pilihan Tidak Tersedia";
		return 0;
	}
	cout<<"Tambah Menu (y/n): ";
	cin>>n;
		
	if(n == 'y')
	{
		cout<<"Pilihan: ";
		cin>>pil2;
		cout<<"Porsi: ";
		cin>>porsi2;
	} else {
		cout<<"Silakan Tunggu..\n";
	}	
	system("CLS");
	
	int total1 = 0, total2 = 0, subtotal, total, diskon, tunai;
	Menu menu;
	string p1 = "Ayam Goreng";
	string p2 = "Ayam Bakar";
	
	cout<<endl;
	cout<<"KEDAI AYAM\n";
	cout<<"Jalan Angsa - 11225\n";
	cout<<"Telp: +62 812 2778 8945\n";
	line();
	cout<<"18/03/2025\t14:25:06\n\n\n";
	cout<<left<<setw(5)<<"Qty"<<setw(15)<<"Item"<<"\t\t"<<"Amt";
	line();
	
	if(pil == 1)
	{
		total1 = menu.ayam_goreng * porsi; 
		cout<<left<<setw(5)<<porsi<<setw(15)<<p1<<"\t\t"<<total1;
		cout<<endl;
	} else if(pil == 2) {
		total2 = menu.ayam_bakar * porsi;	
		cout<<left<<setw(5)<<porsi<<setw(15)<<p2<<"\t\t"<<total2;
		cout<<endl;
	}
	
	if(pil2 == 1)
	{
		total1 += menu.ayam_goreng * porsi2; 
		cout<<left<<setw(5)<<porsi2<<setw(15)<<p1<<"\t\t"<<total1;
		cout<<endl;
	} else if(pil2 == 2) {
		total2 += menu.ayam_bakar * porsi2;	
		cout<<left<<setw(5)<<porsi2<<setw(15)<<p2<<"\t\t"<<total2;
		cout<<endl;
	}	
	
	line();
	
	subtotal = total1 + total2;	
	if (subtotal > 45000)
	{
		cout<<"Sub Total\t\t\t"<<subtotal<<endl;
		cout<<"Diskon\t\t\t\t"<<"10%\n";
		cout<<"Total\t\t\t\t"<<total<<endl;
		cout<<"Anda Hemat\t\t\t"<<diskon<<endl;
		cout<<"Tunai\t\t\t\t";
		cin>>tunai;
		cout<<"Kembali\t\t\t\t"<<tunai - total<<endl;
	} else {
		cout<<"Total\t\t\t\t"<<subtotal<<endl;
		cout<<"Tunai\t\t\t\t";
		cin>>tunai;
		cout<<"Kembali\t\t\t\t"<<tunai - subtotal<<endl;
	}
	
	line();
	cout<<"Terimakasih\n";
	cout<<"Kami Tunggu Kedatangan Anda Kembali";
	cout<<endl;
	
	return 0;
}
