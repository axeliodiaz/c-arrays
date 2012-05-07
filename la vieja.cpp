// juego la vieja

#include <iostream>
using namespace std;



int main(){
    char Resp, letra;
    int nl, i, e=0;
    
    do{
        cout<<"Estas son instrucciones para quien escribe la palabra.\n";
        system("pause");
        system("cls");
        //do{
           cout<<"Por favor introduzca cuantas letras tendra su palabra ";
           cin>>nl;
           system("cls");
           char pal[nl];
//introduccion de letras
           for(i=0;i<=nl-1;i++){
                                cout<<"Por favor introduzca letra a letra su palabra\n";
                                cin>>letra;
                                system("cls");
                                pal[i]=letra;
                                } 
                                cout<<"Ha escrito: ";
//usted ha escrito....                                
                             
           for(i=0;i<=nl;i++){
                              cout<<pal[i];
                              }            
//esta es su palabra?
           /*cout<<"\nEsta es su palabra? (S/N) ";
           cin>>Resp;
           system("cls");
           }while(Resp=='n'||Resp=='N');
    */
//INSTRUCCIONES PARA EL ADIVINADOR    
    cout<<"\nEstas son instrucciones para quien adivina la palabra.\n";
    system("pause");
    system("cls");
    char pal2[i];
    for(i=0;i<=nl-1;i++){
                         cout<<"Por favor introduzca la letra numero "<<i+1;
                         cout<<endl;
                         cin>>letra;
                         pal2[i]=letra;
                         if(pal2[i]==pal[i]){
                                                cout<<"Ha acertado!!! Ahora la siguiente letra...\n";
                                                }else{
                                                      do{
                                                          e++;
                                                          cout<<"No es la letra. Ya lleva su error "<<e;
                                                          cout<<"\nVuelva a introducir una letra por favor\n";
                                                          cin>>letra;
                                                          pal2[i]=letra;
                                                          }while (pal2[i]=!pal[i]);
                                                          }
                         
                         
                         
                         
                         
                         
                         //NO SE COMO HACER QUE SE REPITA EL ERROR SI LAS LETRAS NO SON IGUALES, LUEGO REVISAS...

                         }
           
    cout<<"\nDesea repetir el programa? (S/N) ";
    cin>>Resp;
    }while(Resp=='s'||Resp=='s');
    return 0;
    }
