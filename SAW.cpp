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
 
