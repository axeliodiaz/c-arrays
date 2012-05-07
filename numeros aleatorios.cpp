#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    char Resp;
       srand((int)time(NULL));
    do{

       cout<<"\n"<<1 + rand() % 100<<"\n"<<endl;
       cout <<time(NULL);
       
       cout<<"\nDesea repetir el juego? (S/N)\n";
       cin>>Resp;
       }while(Resp=='s'||Resp=='S');
    
    cin.get();cin.get();
    return 0;
    }
