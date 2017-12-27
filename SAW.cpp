#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;


class atm{
  public:
   atm();
   int login();
   int display();
         
  private:
   int coba = 0,pilih,no;
   char pass[100],yes;
   float s,saldo,Transfer,ambil;
 };
 atm::atm(){
  cout<<"===============================================================\n"<<endl;
  cout<<"  Selamat Datang di ATM BNI\n"<<endl;
  cout<<"==============================================================="<<endl;
 }
 int atm::login(){
  
 do{
  cout << "  Silahkan Masukkan Pin Anda : ";
    cin >> pass;
  if (strcmp(pass, "151097") != 0)
 {  
   
   cout<<"  Pin Anda Salah"<<endl;
   cout<<"---------------------------------------------------------------"<<endl;
   coba++;
  }
  
  else
  {
   cout << "  Anda berhasil Login" << endl;
   
   break;
  }
  
  if (coba == 3)
  {   cout<<"==============================================================="<<endl;
   cout << "  Kartu Anda diblokir" << endl;
   cout<<"  Mohon maaf tolong segera hubungi Teler anda!"<<endl;
   cout<<"==============================================================="<<endl;
   break;
   
   
         
  }
  
  } while (strcmp(pass, "15101997") != 0);
     
      return coba;

 }
 
 
 int atm::display(){
  
  if(coba==1){
   cout<<"==============================================================="<<endl; 
   cout<<"  Terima Kasih"<<endl;
   cout<<"==============================================================="<<endl; 
  }
