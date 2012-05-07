#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    char Resp;
    int num, numero;
       srand((int)time(NULL));
       
    do{
      cout<<"El juego consiste en adivinar el numero \n";
      num=1 + rand() % 100;
      do{ 
          
//       cout <<time(NULL);
         cout<<"Por favor introduzca un numero ";
         cin>>numero;
         
       
           if(numero>num){
                          cout<<"\nEl numero es muy alto\n";
                          }else if(numero<num){
                                               cout<<"\nEl numero es muy bajo\n";
                                               }else{
                                                     cout<<"\n\n\nHas acertado!! Felicitaciones! ganaste!";
                                                     }
       }while(numero!=num);
       cout<<"\nDesea repetir el juego? (S/N)\n";
       cin>>Resp;
       system("cls");
       }while(Resp=='s'||Resp=='S');
    
    cin.get();cin.get();
    return 0;
    }
