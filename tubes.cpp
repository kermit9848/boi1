//1.sequence * *
//2.selection * *
//3.repetation * *
//4.rekursif * *
//5.array * *
//6.function * *
//7.string * *
//8.sort * *
// yg sudah diberi tanda (*)
/**------------------------------------
NAMA 	: WISNU ADHITYA LATIEF
NPM 	: 4518210048
---------------------------------------**/
#include <iostream>
#include <string.h>
using namespace std;


void Wisnu1()
{
	//HEADER
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"|                  DEALER NON RESMI HONDA CIVIC SERIES                  |"<<endl;
	cout<<"|                CABANG KOTA DEPOK, JAWA BARAT, INDONESIA               |"<<endl;
	cout<<"|                              4518210048                               |"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"|                            CIVIC ALL TYPE                             |"<<endl;
	cout<<"|                *2018 ONLY! AND ONLY ONCE TRANSACTION!*                |"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
}

void Wisnu2()
{
	int p;
	p=5;
	for(int q = p; q >= 1; --q)
	{
		for(int r = 0; r < p-q; ++r)
		cout << "  ";

		for(int s = q; s <= 2*q-1; ++s)
        cout << "* ";

		for(int s = 0; s < q-1; ++s)
        cout << "* ";

		cout << endl;
	}
}

int main()
{
	char WCustomer[100],WAddress[100], WTelp[13];
	int A[1][10] = {4,5,1,8,2,1,0,0,4,8};
	int WOrder, w, i, p;
	signed long long int WTotal, WHarga, WBayar, WKembali, WJumlah;
	char WMenu;
	int k,m,n,o,l=10;
	int I[l]={4,2,1,7,3,5,9,6,8,10};
 	long int x, z=3, y=1;	
	
	m=0;
	Wisnu1();
	cout<<endl;
	cout<<"Jumlah Server yg aktif......"<<endl;
	cout<<endl;
		for (x=1; x<=z; x++)
			y=y*z;
			cout<<y<<endl;
	cout<<endl;
	cout<<"mengurutkan jumlah user saat ini......"<<endl;
	//Sebelum Berurutan
	for(k=0; k<=l-1; k++)
		cout<<I[k]<<" ";
		cout<<endl;
	//step by step
	while(m<l-2)
	{
		o=m;
		k=m+1;
		while(k<=l-1)
		{
			if(I[k]<I[o])
				o=k;
				cout<<I[k]<<" ";
			k++;		
		}	
		cout<<endl;
		n=I[o];
		I[o]=I[m];
		I[m]=n;
		m++;	
	}
	cout<<endl;
	//Sesudah diurutkan
	cout<<endl;
	for(k=0; k<l; k++)
		cout<<I[k]<<" ";
	cout<<endl;
	system("cls");	
	//inputan
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"| Masukan Nama Pelanggan       : " ; gets (WCustomer);
	cout<<"| Masukan Alamat Pelanggan     : " ; gets (WAddress);
	cout<<"| Masukan Telephone Pelanggan  : "; gets (WTelp);
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<endl;
	cout<<endl;
    strupr(WCustomer);
	strupr(WAddress);
	cout<<endl;
	//inputan opsi 2
	cout <<"A. Menu   "<<endl;
	cout <<"B. Keluar  "<<endl;
	cout <<"Masukkan pilihan anda	: "; cin>>WMenu;
	cout <<endl;
	//dengan IF
	if (WMenu=='A')
	{
		cout <<" Tipe Model BMW M Series dan harga		    "<<endl;
		cout <<" 1. CIVIC HATCHBACK LX							---- "<<"Rp 309.000.000,-"<<endl;
		cout <<" 2. CIVIC HATCHBACK	SPORT						---- "<<"Rp 321.000.000,-"<<endl;
		cout <<" 3. CIVIC HATCHBACK	EX						---- "<<"Rp 343.000.000,-"<<endl;
		cout <<" 4. CIVIC HATCHBACK	EX-L NAVI					---- "<<"Rp 379.000.000,-"<<endl;
		cout <<" 5. CIVIC HATCHBACK	SPORT TOURING					---- "<<"Rp 415.000.000,-"<<endl;
		cout <<"----------------------------------------------------------"<<endl;
		cout <<"Order [1/2/3/4/5]	: "; cin>>WOrder;
		cout <<"----------------------------------------------------------"<<endl;
		cout <<endl;
		switch (WOrder)
			{
				case 1:
					cout <<"CIVIC HATCHBACK LX			"<<endl;
					WHarga = 309000000;
					cout <<"Jumlah unit yang ingin di pesan: "; cin>>WJumlah;
					WTotal = WJumlah*WHarga;
					break;
				case 2:
					cout <<"CIVIC HATCHBACK	SPORT			"<<endl;
					WHarga = 321000000;
					cout <<"Jumlah unit yang ingin di pesan: "; cin>>WJumlah;
					WTotal = WJumlah*WHarga;
					break;
				case 3:
					cout <<"CIVIC HATCHBACK	EX			"<<endl;
					WHarga = 343000000;
					cout <<"Jumlah unit yang ingin di pesan: "; cin>>WJumlah;
					WTotal = WJumlah*WHarga;
					break;
				case 4:
					cout <<"CIVIC HATCHBACK	EX-L NAVI			"<<endl;
					WHarga = 379000000;
					cout <<"Jumlah unit yang ingin di pesan: "; cin>>WJumlah;
					WTotal = WJumlah*WHarga;
					break;
				case 5:
					cout <<"CIVIC HATCHBACK	SPORT TOURING			"<<endl;
					WHarga = 415000000;
					cout <<"Jumlah unit yang ingin di pesan: "; cin>>WJumlah;
					WTotal = WJumlah*WHarga;
					break;
				default:
					cout<<"Inputan Anda Salah"<<endl;
				break;	
			}
		cout <<endl;
		cout <<"Total Harga yang di Pesan		:	Rp " << WTotal << ",-"<<endl;
		cout <<"Nominal Pembayaran			:	Rp ";cin>>WBayar;
		WKembali = WBayar - WTotal;
	}	
	if (WMenu=='B')
	{
		cout <<"Thank you for visit our online dealer!"<<endl;
		cout <<"  "<<endl;
	}
	Wisnu2();
	system("cls");
	Wisnu1();
	//Kartu
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "                        STRUK PEMBELIAN UNIT MOBIL                       " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nama Pelanggan       : " << WCustomer << endl;
	cout << "Alamat Pelanggan     : " << WAddress << endl;
	cout << "Telephone Pelanggan  : " << WTelp << endl;
	cout << "Kode Dealer          : "; for(w=0;w<1;w++) {
											for(i=0;i<10;i++)
											cout<<A[w][i]<<"";
											cout<<endl; }
	cout << endl;
	cout << "Barang Yang Dibeli   :" << endl;
	//data
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "|  Kode Order   |      HARGA        |   QUANTITY    |       Total        |" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "|       "<<WOrder<<"       |   Rp "<<WHarga<<",-  |      " << WJumlah << "        |   Rp " << WTotal << ",-  |" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "|                     TOTAL                                             |" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout <<"|Uang Yang Dibayarkan      = Rp "<<WBayar<<",-"<<endl;
	cout <<"|Kembali                   = Rp "<<WKembali<<",-"<<endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
cin.get();	
}	
	

