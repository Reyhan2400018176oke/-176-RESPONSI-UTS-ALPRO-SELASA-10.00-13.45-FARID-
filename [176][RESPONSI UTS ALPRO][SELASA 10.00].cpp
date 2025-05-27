#include<iostream>
using namespace std;

int main(){
    string username;
    string username1="admin";
    string username2="mhs";
    string password;
    string password1="1994";
    string password2="1994";
    string data[100][100];
    string jadwal[100][100];
    int jumlahjadwal;
    int ruang;
    char program;
    do{
    	cout<<"Jika Data Kosong Maka Admin Belum Mengisi Data, Silahkan Menanyakan Kepada Admin!"<<endl;
    	cout<<"Masukan Username : ";
    cin>>username;
    cout<<"Masukkan Password : ";
    cin>>password;
    if(username==username1&&password==password1){
    
    cout<<"Masukkan Berapa Data Ruang : ";
    cin>>ruang;
    
    for(int i=1;i<=ruang;i++){
            cout<<"Ruang "<<i<<endl;
            cout<<"Masukkan Kapasitas : ";
            cin>>data[i][0];
            cout<<"Masukkan Lokasi : ";
            cin>>data[i][1];
            cout<<"Masukkan Fasilitas : ";
            cin>>data[i][2];
            system("cls");
            }
    for(int i=1;i<=ruang;i++){
    	cout<<"Ruang "<<i<<endl;
            cout<<"Kapasitas : "<<data[i][0]<<endl;
            cout<<"Lokasi : "<<data[i][1]<<endl;
            cout<<"Fasilitas : "<<data[i][2]<<endl;
	}
	char lagi;
	do{
		char editruang;
		cout<<"Edit Data Ruang (y/n) : ";
		cin>>editruang;
		if(editruang=='y'){
			int pilihedit;
			cout<<"Pilih ruang yang akan di edit : ";
			cin>>pilihedit;
			cout<<"Ruang "<<pilihedit<<endl;
            cout<<"Masukkan Kapasitas : ";
            cin>>data[pilihedit][0];
            cout<<"Masukkan Lokasi : ";
            cin>>data[pilihedit][1];
            cout<<"Masukkan Fasilitas : ";
            cin>>data[pilihedit][2];
            system("cls");
		}
		else{
			
	}
		cout<<"Edit lagi (y/n) :";
		cin>>lagi;
	}while(lagi!='n');
	for(int i=1;i<=ruang;i++){
    		cout<<"Ruang "<<i<<endl;
            cout<<"Kapasitas : "<<data[i][0]<<endl;
            cout<<"Lokasi : "<<data[i][1]<<endl;
            cout<<"Fasilitas : "<<data[i][2]<<endl;
		}
	system("pause");
	system("cls");
	
	cout<<"Masukkan Berapa Data Jadwal : ";
    cin>>jumlahjadwal;
    
    for(int i=1;i<=jumlahjadwal;i++){
            cout<<"Jadwal "<<i<<endl;
            cout<<"Masukkan Mata Kuliah : ";
            cin>>jadwal[i][0];
            cout<<"Masukkan Dosen : ";
            cin>>jadwal[i][1];
            cout<<"Masukkan Waktu : ";
            cin>>jadwal[i][2];
            cout<<"Masukkan Kebutuhan Ruang : ";
            cin>>jadwal[i][3];
            system("cls");
            }
    for(int i=1;i<=jumlahjadwal;i++){
    	cout<<"Jadwal "<<i<<endl;
            cout<<"Mata Kuliah : "<<jadwal[i][0]<<endl;
            cout<<"Dosen : "<<jadwal[i][1]<<endl;
            cout<<"Waktu : "<<jadwal[i][2]<<endl;
            cout<<"Ruang : "<<jadwal[i][3]<<endl;
	}
	do{
		char editjadwal;
		cout<<"Edit Data Jadwal (y/n) : ";
		cin>>editjadwal;
		if(editjadwal=='y'){
			int pilihedit;
			cout<<"Pilih jadwal yang akan di edit : ";
			cin>>pilihedit;
			cout<<"Jadwal "<<pilihedit<<endl;
            cout<<"Masukkan Mata Kuliah : ";
            cin>>jadwal[pilihedit][0];
            cout<<"Masukkan Dosen : ";
            cin>>jadwal[pilihedit][1];
            cout<<"Masukkan Waktu : ";
            cin>>jadwal[pilihedit][2];
            cout<<"Masukkan Ruang : ";
            cin>>jadwal[pilihedit][3];
            system("cls");
            
		}
		else{
			
	}
	cout<<"Edit lagi (y/n) :";
		cin>>lagi;
}while(lagi!='n');
for(int i=1;i<=jumlahjadwal;i++){
    		cout<<"Jadwal "<<i<<endl;
            cout<<"Mata Kuliah : "<<jadwal[i][0]<<endl;
            cout<<"Dosen : "<<jadwal[i][1]<<endl;
            cout<<"Waktu : "<<jadwal[i][2]<<endl;
            cout<<"Ruang : "<<jadwal[i][3]<<endl;
	}
	system("pause");
	}
	else if(username==username2&&password==password2){
		char lagi;
		do{
			int pilih;
		cout<<"Pilihan : "<<endl;
		cout<<"1. Data Ruangan"<<endl;
		cout<<"2. Data Jadwal"<<endl;
		cout<<"Pilih Yang Akan Ditampilkan : ";
		cin>>pilih;
		if(pilih==1){
			for(int i=1;i<=ruang;i++){
    		cout<<"Ruang "<<i<<endl;
            cout<<"Kapasitas : "<<data[i][0]<<endl;
            cout<<"Lokasi : "<<data[i][1]<<endl;
            cout<<"Fasilitas : "<<data[i][2]<<endl;
			}system("pause");
			system("cls");
		}else if(pilih==2){
			for(int i=1;i<=jumlahjadwal;i++){
    		cout<<"Jadwal "<<i<<endl;
            cout<<"Mata Kuliah : "<<jadwal[i][0]<<endl;
            cout<<"Dosen : "<<jadwal[i][1]<<endl;
            cout<<"Waktu : "<<jadwal[i][2]<<endl;
            cout<<"Ruang : "<<jadwal[i][3]<<endl;
            
			}
			system("pause");
			system("cls");
		}else {
			cout<<"Pilihan Tidak Ada";
	
	
		cout<<"Apakah Ada Lagi (y/n) : ";
		cin>>lagi;
		}
		
	}while(lagi!='n');
	}else{
		cout<<"Username atau password yang anda masukkan salah....."<<endl;
	}
	system("pause");
			system("cls");
    	cout<<"Gunakan Program Lagi? (y/n)";
    	cin>>program;
	}while(program!='n');
	
		
}
    
    

