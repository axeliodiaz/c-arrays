#include<iostream>
using namespace std;
int main(){
    char vec[5]={'m','a','r','i','a'};
    char Resp, letra,letra2='á';
    int i,e=0,a=0,g=0,f=0;
    do{
       cout<<"Estas son las instrucciones del juego:\n";
       cout<<"\tIntroducira letras para adivinar una palabra de 5 letras\n";
       cout<<"\tNo tome en cuenta los acentos\n";
       cout<<"\tCuenta con 3 oportunidades para adivinar la palabra\n\n";
           do{
              cout<<"Por favor introduzca una letra...\n";
              
              
              cin>>letra;
              
              for(i=0;i<5;i++){
                               if(letra==vec[i]){
                                                 cout<<"Felicidades, tu letra esta en la posicion "<<i+1;
                                                 cout<<"\n";
                                                 g++;
                                                 
                                                 }else{
                                                       e++;
                                                       }
                                }
              if((g<i)&&(letra=!letra2)){
                                     f++;
                                     }
                                     letra2=letra;
              
               if(f==5){
                        cout<<"Felicitaciones!! Ha ganado! =D";
                        }
               if(e==5){
                        a++;
                        cout<<"Lo siento, su letra no esta en la palabra\n";
                        if(a==1){
                                 cout<<"Ya lleva "<<a<<" error\n";
                                 }else{
                                       cout<<"Ya lleva "<<a<<" errores\n";
                                       }
                        if(a<3){cout<<"Vuelva a intentarlo...\n";}
                        }
                        
                        if(a==3){cout<<"Ha perdido...\n";}
           }while(a<3&&f<5);
           
           
           
           
           
           
           
           
           
           
           
           cout<<"\nDesea repetir el programa? (S/N)";cin>>Resp;system("cls");}while(Resp=='s'||Resp=='S');
           cout<<"Pulse enter para finalizar el programa";
           cin.get();cin.get();
    return 0;
    }
