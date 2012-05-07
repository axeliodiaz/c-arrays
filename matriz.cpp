#include <iostream>
#define CANT 5
using namespace std;
int main(){
    char Resp;
    int n,i,j;
    int matriz[CANT][CANT];
    
    srand((int)time(NULL));
    do{
         
         
         for(i=0;i<CANT;i++){
                             for(j=0;j<CANT;j++){
                                                 cout<<1 + rand() % 10<<"\t";
                                                 }
                             cout<<endl;
                             }
         
         
         
         cout<<"\nDesea repetir el programa? (S/N)";
         cin>>Resp;
         system("cls");
         }while(Resp=='s'||Resp=='S');
         cout<<"Presione una tecla para finalizar el programa...";
    cin.get();cin.get();
    return 0;}
