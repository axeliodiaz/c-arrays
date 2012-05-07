#include <iostream>
using namespace std;

int main(){
    char Resp;
    int a=0, b=1, c, num, i;
    int fibo[num];
    
    do{
    cout<<"Por favor introduzca cuantas series de fibonacci quiere ";
    cin>>num;
    cout<<" numeros.\n";
    cout<<"1\n";
    for(i=0;i<num;i++){
    fibo[i]=a+b;
    a=b;
    b=fibo[i];
    }
    
    for(i=0;i<num-1;i++){
    cout<<fibo[i]<<"\n";
    }
    cout<<"\nDesea repetir el programa? (S/N)\n";
    cin>>Resp;
    system("cls");
    }while(Resp=='s'||Resp=='S');
    cout<<"Por favor presione Enter para finalizar el programa...";
    
    /*0+1=1
    1+1=2
    1+2=3
    2+3=5
    5+3=8
    */
    
    cin.get();cin.get();
    return 0;
    }
