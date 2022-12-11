#include <iostream>
using namespace std;

main(){
	int x[100],nilai[100],a,b,total;
	string nama[100],nim[100];
	float rata;
	
	cout<<"Masukkan jumlah mahasiswa: ";
	cin>>b;
	
	//input
	for(int a=1;a<=b;a++){
	cout<<"Input mahasiswa ke: ";
	cin>>x[a];
	cout<<"Nim: ";
	cin>>nim[a];
	cout<<"Nama: ";
	cin>>nama[a];
	cout<<"Nilai: ";
	cin>>nilai[a];
	cout<<"========================"<<endl;
}
	//cetak
	for(int a=1;a<=b;a++){
	cout<<"========================"<<endl;
	cout<<"Tampil mahasiswa ke: "<<x[a]<<endl;
	cout<<"Nim: "<<nim[a]<<endl;
	cout<<"Nama: "<<nama[a]<<endl;
	if(nilai[a] >=80){
		cout<<"Nilai anda adalah = A"<<endl;
		cout<<"Keterangan = LULUS"<<endl;
	}else if (nilai[a] >=70){
		cout<<"Nilai anda adalah = B"<<endl;
		cout<<"Keterangan = LULUS"<<endl;
	}else if (nilai[a] >=60){
		cout<<"Nilai anda adalah = C"<<endl;
		cout<<"Keterangan = LULUS"<<endl;
	}else if (nilai[a] >=55){
		cout<<"Nilai anda adalah = D"<<endl;
		cout<<"Keterangan = TIDAK LULUS"<<endl;
	}else{
		cout<<"Nilai anda adalah = E"<<endl;
		cout<<"Keterangan = TIDAK LULUS"<<endl;
	} total = total+nilai[a];
	}
	
	//
	rata = total/b;
	cout<<"========================"<<endl;
	cout<<"Rata rata nilai mahasiswa: "<<rata;
}
