#include <iostream>
using namespace std;

int main(){
    char letra;   
    int i,c,e,a;
    char vec1[5]={'m','a','r','i','a'};
    char Resp;
    
    
    do{
    cout<<"Por favor introduzca una letra...\n";
    cin>>letra;
    c=0;
    e=0;
    a=0;
    //while(c<=5 || e<=3){
    for(i=0;i<5;i++){
                     if(letra==vec1[i]){
                                        cout<<"Es correcto, la letra esta en la posicion "<<i+1;
                                        cout<<endl;
                                        c++;
                                        }else{
                                        e++;
                                        a++;
                                        if(a==5){
                                                 cout<<"Lo siento, no se encontro tu letra en la palabra, intente de nuevo";
                                                 }
                                        }
                     }
    /*if(e==3){
            cout<<"Lo siento, usted ha perdido.";
            }
    if(c==5){
            cout<<"Felicidades, ha adivinado la palabra!";
            }*/
    
            //}
    cout<<"\nDesea repetir el programa? (S/N)";
    cin>>Resp;
    }while(Resp=='S'||Resp=='s');
    system("cls");
    cout<<"Presione Enter para finalizar el programa. . .";
    cin.get();cin.get();
    
    return 0;
    }
