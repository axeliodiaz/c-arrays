//introducir 10 numeros en un vector y muestre éste.

#include <iostream>
using namespace std;


int main(){
    int n,i;
    int num[10];
    char Resp;
    
    do{
       cout<<"A continuacion introducira 10 numeros";
       
       for(i=0; i< 10; i++){
                              cout<<"\nPor favor introduzca un valor ";
                              cin>>n,
                              num[i]=n;
                              }
                              
       for(i=0; i< 10; i++){
                            cout<<" "<<num[i];
                            }
                               
                            
    cout<<"\nDesea repetir el programa? (S/N)";
    cin>>Resp;
    }while(Resp=='s'||Resp=='s');
    
    return 0;
    }
