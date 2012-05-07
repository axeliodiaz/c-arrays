// juego la vieja

#include <iostream>
using namespace std;



int main(){
    char Resp, letra;
    int nl=5, i, e=0,opc=0;
   
    char pal2[5]={'m','a','r','i','a'};
    do{
        cout<<"Estas son instrucciones para quien escribe la palabra.\n";
        system("pause");
        system("clear");
        do{
           cout<<"Por favor introduzca cuantas letras tendra su palabra "<<endl;
           cin>>nl;
           system("cls");
            char pal[nl];
//introduccion de letras

           for(i=0;i<nl;i++){
                                cout<<"Por favor introduzca letra a letra su palabra\n";
                                cin>>letra;
                                system("cls");
                                pal[i]=letra;
                                } 
                                cout<<"Ha escrito: ";
//usted ha escrito....                                
           cout<<"\nHa escrito: "<<endl;
                                    
           for(i=0;i<nl;i++){
                              cout<<pal[i];
                              }  
                              cout<<endl;
           for(i=0;i<nl;i++){
                            
                            if(pal2[i]==pal[i]){
                                                opc++;
                                                
                                             }else{
                                                    opc=0;
                                                          
                                                          }
                            
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
 
                         /*cout<<"Por favor introduzca la letra numero "<<i+1;
                         cout<<endl;
                         cin>>letra;
                         pal2[i]=letra;*/
                         if(opc==5){
                                             Resp='n';
                                             cout<<"\nHa Ganado!!!\n";
                                                cout<<"Ha acertado!!! Ahora la siguiente letra...\n";
                                                }else{
                                                      
                                                          e++;
                                                          cout<<"No es la Palabra. Ya lleva su error numero "<<e<<endl;
                                                          cout<<"\nDesea continuar intentandolo? (S/N)"<<endl;
                                                          cin>>Resp;
                                                          cout<<"\nVuelva a introducir una letra por favor\n";
                                                          cin>>letra;
                                                          pal2[i]=letra;
                                                          
                                                          }
                         
                         
                         
                         
                         
                         
                         //NO SE COMO HACER QUE SE REPITA EL ERROR SI LAS LETRAS NO SON IGUALES, LUEGO REVISAS...


                         
           
    
    }while(Resp=='s');
cout<<"Fin de juego"<<endl;
cout<<"Sus errores fueron: "<<e<<endl;
system("pause");
    return 0;

    }
