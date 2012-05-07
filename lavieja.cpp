#include<iostream>
using namespace std;

int main(){
    char Resp, letra;
    int nl,i,e=0;
    char vect1[nl], vect2[nl];
    
    do{
         do{
             //instrucciones para el usuario 1
             cout<<"Estas son instrucciones para quien escribe la palabra.\n";
             cout<<"Por favor diga cuantas letras tiene su palabra \n";
             cin>>nl;
             cout<<"A continuacion debera introducir letra a letra su palabra\n";
             system("pause");
             system("cls");
             for(i=0;i<nl;i++){
                               cout<<"Inserte la letra de su palabra\n";
                               cin>>letra;
                               vect1[i]=letra;
                               system("cls");
                               }
             cout<<"Ha escrito ";
             for(i=0;i<nl;i++){
                               cout<<vect1[i];
                               }
             cout<<"\nEs esta su palabra?";
             cin>>Resp;
             system("cls");
             }while(Resp=='n'||Resp=='N');
             
             //instrucciones para el usuario 1
             cout<<"Estas son instrucciones para el que adivina la palabra";
             cout<<"Es una palabra de "<<nl<<" letras. ";
             cout<<"Intenta adivinar letra a letra la palabra... ";
             system("pause");
             system("cls");
             for(i=0;i<nl;i++){
                               cout<<"Inserte la letra de su palabra\n";
                               cin>>letra;
                               vect2[i]=letra;
                               system("cls");
                               if(vect2[i]==vect1[i]){
                                                      cout<<"Has acertado la palabra!! intenta con la siguiente!!";
                                                      }else{
                                                            do{
                                                               e++;
                                                               cout<<"Te equivocaste, ya llevas tu error "<<e;
                                                               }while(vect2[i]=!vect1[i]);
                                                            }
                               }
             
    cout<<"\nDesea volver a jugar? (S/N)";
    cin>>Resp;
    system("cls");
    }while(Resp=='s'||Resp=='S');
    
    cout<<"Por favor presione Enter para finalizar el programa . . .";
    cin.get();cin.get();
    return 0;
    }
