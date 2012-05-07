#include <iostream>
#include <stdlib.h>
#define I 9
#define V 16
#define B 54
using namespace std;
int M[I][I];
int M2[V][B];
int i,j,num,c,f,a,x,y,z,g,b,op;
char resp;
void nueve();
void fila();
void columna();
void rmatriz ();
void rfila();

//FUNCIONES

void uno(){

            M[1-1][3-1]=6;M[1-1][6-1]=4;M[1-1][8-1]=7;M[2-1][1-1]=1;M[2-1][2-1]=3;
            M[2-1][3-1]=5;M[2-1][5-1]=8;M[2-1][6-1]=6;M[2-1][7-1]=9;M[2-1][8-1]=4;
            M[2-1][9-1]=2;M[3-1][4-1]=2;M[3-1][6-1]=5;M[3-1][9-1]=6;M[4-1][6-1]=2;
            M[5-1][4-1]=6;M[5-1][5-1]=7;M[5-1][6-1]=9;M[5-1][7-1]=1;M[5-1][8-1]=3;
            M[5-1][9-1]=8;M[6-1][2-1]=7;M[6-1][4-1]=5;M[6-1][5-1]=3;M[6-1][7-1]=6;
            M[6-1][8-1]=2;M[6-1][9-1]=4;M[7-1][1-1]=5;M[7-1][3-1]=3;M[7-1][6-1]=8;
            M[7-1][9-1]=7;M[8-1][1-1]=8;M[8-1][5-1]=6;M[8-1][6-1]=3;M[8-1][9-1]=5;
            M[9-1][4-1]=4;M[9-1][6-1]=7;M[9-1][8-1]=8;M[9-1][9-1]=3;
          }
            
void dos(){
            
            M[1-1][2-1]=4;M[1-1][4-1]=1;M[1-1][9-1]=5;M[2-1][1-1]=6;M[2-1][4-1]=4;
            M[2-1][6-1]=9;M[3-1][2-1]=7;M[3-1][6-1]=3;M[3-1][8-1]=4;M[3-1][9-1]=8;
            M[4-1][4-1]=2;M[4-1][5-1]=8;M[4-1][7-1]=3;M[5-1][4-1]=7;M[5-1][6-1]=5;
            M[5-1][7-1]=6;M[5-1][8-1]=2;M[6-1][1-1]=7;M[6-1][5-1]=3;M[6-1][6-1]=6;
            M[6-1][7-1]=4;M[6-1][8-1]=8;M[7-1][1-1]=4;M[7-1][4-1]=8;M[7-1][5-1]=6;
            M[7-1][7-1]=7;M[7-1][8-1]=3;M[8-1][1-1]=2;M[8-1][2-1]=8;M[9-1][5-1]=4;
            
          }
       
void tres(){
            
            M[1-1][3-1]=2;M[1-1][4-1]=7;M[2-1][1-1]=6;M[2-1][5-1]=9;M[2-1][6-1]=1;
            M[2-1][7-1]=7;M[2-1][8-1]=8;M[3-1][5-1]=4;M[3-1][6-1]=8;M[3-1][8-1]=9;
            M[4-1][8-1]=5;M[5-1][1-1]=7;M[5-1][3-1]=3;M[5-1][6-1]=5;M[5-1][8-1]=4;
            M[5-1][9-1]=9;M[7-1][3-1]=4;M[6-1][7-1]=3;M[8-1][2-1]=2;M[8-1][3-1]=1;
            M[8-1][5-1]=5;M[8-1][6-1]=4;M[9-1][1-1]=8;M[9-1][4-1]=1;M[9-1][6-1]=2;
            M[9-1][7-1]=4;
            
          }

void nueve(){
    cin >>num;
    while((num<1)||(num>9)){
           cout <<"\n'''''''El rango esta del 1 al 9 y tu numero no esta dentro'''''''\n";
           cout <<"Intentalo de nuevo\n";
           cin >>num;
                           }
            }
                   
void fila(){
    cin >>f;
    while((f<1)||(f>9)){
           cout <<"\n'''''''El rango esta del 1 al 9 y tu numero no esta dentro'''''''\n";
           cout <<"Intentalo de nuevo\n";
           cin >>f;
                       }
           }
   
void columna(){
    cin >>c;
    while((c<1)||(c>9)){
           cout <<"\n'''''''El rango esta del 1 al 9 y tu numero no esta dentro'''''''\n";
           cout <<"Intentalo de nuevo\n";
           cin >>c;
                       }
              }

void rmatriz (){
     for(i=0;i<I;i++){
          for(j=0;j<I;j++){
                           if((i%3==0)&&(j%3==0)){
                                            do{
                                               for(x=0;x<3;x++){
                                                    for(y=0;y<3;y++){
                                                                     
                                                          if(M[x][y]==num){
                                                                           b=1;
                                                                           a--;
                                                                           cout<<"Ya esta ese numero en la subcuadricula.\n";
                                                                           cout<<"Quedan "<<a<<" chances";
                                                                           cout<<"\nIntroduzca el numero de nuevo ";
                                                                           cin>>num;
                                                                           
                                                                           while(num<1||num>9){
                                                                                               cout <<"\n'''''''El rango esta del 1 al 9 y tu numero no esta dentro'''''''\n";
                                                                                               cout <<"Intentalo de nuevo\n";
                                                                                               cin>>num;
                                                                                               }        
                                                                           
                                                                          }else{
                                                                                b=0;
                                                                                M[x][y]==num;
                                                                                }
                                                                     }
                                                                 }
                                               }while(b>1||a>0);
                                           }
                          }
                     }
     }
               
               
void rfila(){
//Comparador de filas 
             do{
             g=0;
             

             for(j=0;j<I;j++){
                      if(M[f-1][j]==num){
                                         a--;
                                         cout<<"Ya esta ese numero en la fila.\n";
                                         cout<<"Quedan "<<a<<" chances...";
                                         cout<<"\nIntroduzca el numero de nuevo ";
                                         cin>>num;
                                         g++;
                                         }else{
                                               g=0;
                                               }
                      }
                             
             }while(g>0||a>0);
             }
             
void rcolumna(){
//Comparador de filas 
             do{
             g=0;
             
             for(i=0;i<I;i++){
                      if(M[i][c-1]==num){
                                         a--;
                                       cout<<"Ya esta ese numero en la columna\n";
                                       cout<<"Quedan "<<a<<" chances...";
                                       cout<<"\nIntroduzca el numero de nuevo ";
                                       cin>>num;
                                       g++;
                                       }else{
                                             g=0;
                                             }
                             }
             }while(g>0||a>0);
             }
                          
int main(){
    int k,opcion,q,v,b;
    char wanda,cosmo,timmy,vicky,trixie,chester;
    
    /*
    wanda,cosmo,timmy,vicky,trixie, y chester son codigos ASCII
    i,j filas y columnas 
    k contador de indice y de ceros
    c es columna del usuario
    f es fila del usuario
    num es numero del usuario
    */
    
    //CODIGO ASCII
    wanda=179;
    cosmo=197;
    timmy=196;
    vicky=6;
    trixie=2;
    chester=37;
    
    
    cout<<"\t\t\tBienvenido al juego de SUDOKU...\n\n";
    cout<<"El Sudoku es un rompecabezas matematico de colocacion que se popularizo en Japon en 1986 y se dio a conocer en el ambito internacional en 2005.\n";
    cout<<"El objetivo es rellenar una cuadricula de 9x9 celdas dividida en subcuadriculas de 3x3 con las cifras del 1 al 9 partiendo de algunos numeros ya dispuestos en algunas de las celdas.\n";
    cout<<"No se debe repetir ninguna cifra en una misma fila, columna o subcuadricula.\n";
    cout<<" Si se repiten, se tomara como una falta. Y cuenta con un maximo de 10 oportunidades...";
    cout<<"\n\n";
    
       cout<<"Por favor seleccione el nivel de dificultad\n";
       cout<<"1. Principiante\n";
       cout<<"2. Medio\n";
       cout<<"3. Dificil\n\n";
       cin>>op;
          
    while(op>3||op<1){
                      cout<<"\nOpcion invalida, por favor vuelva a elegir la opcion\n";
                      cin>>op;
                      }
      if(op==1){
            cout<<"\nHa elegido el nivel de Principiante";
            }else if(op==2){
                            cout<<"\nHa elegido el nivel Medio";
                            }else if(op==3){
                                            cout<<"\nHa elegido el nivel Dificil";
                                            }
    cout<<"\n\n\n\t\tSuerte!!\n\n";
    system("pause");
    system("cls");
    
    do{
             
    q=0;
    a=10;
    
    //LLENADO DE LA MATRIZ
    for(i=0; i<I; i++){
             for(j=0; j<I; j++){                                       
                      M[i][j]=0;
                               }                                       
                      }                  
//OPCIONES DE CARGAR JUEGO---------------------------------------  
  if(op==1){
            uno();
            }else if(op==2){
                            dos();
                            }else if(op==3){
                                            tres();
                                            }
//OPCIONES DE CARGAR JUEGO--------------------------------------- 
    
    do{                
    cout <<"\n\n\n\n\n\n";
    
    cout <<"\t";
    k=1;
    for(j=0; j<I; j++){
             cout <<" " <<k++;
                      } 
             cout <<"\n";
    
    cout <<"\t";
    for(j=0; j<I; j++){
             cout <<vicky <<vicky;
                      } 
             cout <<vicky;
             cout <<"\n"; 
             
    cout <<"\t";
    for(j=0; j<I; j++){
             cout <<cosmo <<timmy;
                      } 
             cout <<cosmo;
             cout <<"\n"; 
            
    k=1;
    for(i=0; i<I; i++){
             
             cout <<"\t";
             for(j=0; j<I; j++){                                       
                      if(M[i][j]==0){
                             cout <<wanda <<" ";
                                    }else{
                                          cout <<wanda <<M[i][j];
                                         }
                               }          
                               
             cout <<wanda <<k++;
             cout <<"\n";  
                       
             cout <<"\t";   
             for(j=0; j<I; j++){
                      cout <<cosmo<<timmy;
                               }
                               
             cout <<cosmo;
             cout <<"\n";
                      }
    
    cout <<"\t";
    for(j=0; j<I; j++){
             cout <<vicky <<vicky;
                      } 
    cout <<vicky;        
    cout <<"\n\n\n\n";
    
    cout <<"\tMENU DE OPCIONES:\n\n";
    cout <<"     1. Ingresar un Numero\n";
    cout <<"     2. Sustituir\n";
    cout <<"     3. Eliminar\n";
    cout <<"     4. Salir\n";
    cin >>opcion;
    
    switch(opcion){
    
    //INGRESAR NUMERO
              case 1:
                   cout <<"\nEn que columna? ";
                   columna();
                   cout <<"Cual numero de fila? ";
                   fila();
                   cout <<"Y que numero? ";
                   nueve();
                   
                   rmatriz();
                   rfila();
                   rcolumna();
                   
                   if(M[f-1][c-1]==0){
                       M[f-1][c-1]=num;
                                     }else{
                                          cout <<"\a\n'''''''En esta casilla ya existe un numero, quisiera reemplazarlo (s/n)?'''''''\n";
                                          cin >>resp;
                                          if((resp=='s')||(resp=='S')){
                                                M[f-1][c-1]=num;
                                                                      }
                                          }
              break;
              
    //SUSTITUIR
              case 2:
                   cout <<"\nDiga en que columna ";
                   columna();
                   cout <<"Que fila quiere? ";
                   fila();
                   cout <<"Por cual numero desea reemplazar? ";
                   nueve();
                   
                   rmatriz();
                   rfila();
                   rcolumna();
                   
                   if(M[f-1][c-1]==0){
                      cout <<"\a\n'''''''Esta casilla esta vacia, de todos modos quiere insartar el numero (s/n)?'''''''\n";
                      cin >>resp;
                      if((resp=='s')||(resp=='S')){
                          M[f-1][c-1]=num;        
                                                  }
                                     }else{
                                           M[f-1][c-1]=num;
                                          }
              break;
                  
    //ELIMINAR
              case 3:
                   cout <<"\nDiga en que columna ";
                   columna();
                   cout <<"\nQue fila quiere? ";
                   fila();
                   cout <<"\a\n'''''''Eliminara el numero en la columna " <<c;  
                   cout <<" y en la fila " <<f;
                   cout <<". Esta seguro (s/n)?'''''''\n";                  
                   cin >>resp;
                   if((resp=='s')||(resp=='S')){
                          M[f-1][c-1]=0;
                                               }                
              break;
    
    //SALIR
              case 4:
                   q=0;
                   cout<< "A continuacion saldra del juego.\n";
                   cout<< "Presione Enter para continuar . . .";
                   cin.get();cin.get();
                   q++;                
              break;
                  
              default:
                   cout<< "Opcion invalida...\n";
                   system("pause");                
              break;
                  }

                  
    system("cls");
    k=0;
    for(i=0; i<I; i++){
              for(j=0; j<I; j++){
                       if(M[i][j]==0){
                            k++;
                                     }
                                } 
                      }
                      
    if(k==0){

//LLENADO DE LA MATRIZ PARA "HAS GANADO"
    for(v=0; v<V; v++){
              for(b=0; b<B; b++){                                       
                       M2[v][b]=1;
                                }                                       
                      }                  
                 
//M[i-1][j-1]=0;
M2[4-1][6-1]=0;M2[6-1][6-1]=0;M2[7-1][6-1]=0;M2[8-1][6-1]=0;M2[9-1][6-1]=0;M2[10-1][6-1]=0;M2[11-1][6-1]=0;
M2[6-1][8-1]=0;M2[7-1][8-1]=0;M2[8-1][8-1]=0;M2[9-1][8-1]=0;M2[10-1][8-1]=0;M2[11-1][8-1]=0;M2[8-1][9-1]=0;
M2[9-1][9-1]=0;M2[6-1][10-1]=0;M2[7-1][10-1]=0;M2[8-1][10-1]=0;M2[9-1][10-1]=0;M2[10-1][10-1]=0;
M2[11-1][10-1]=0; M2[6-1][12-1]=0;M2[7-1][12-1]=0;M2[8-1][12-1]=0;M2[9-1][12-1]=0;M2[10-1][12-1]=0;
M2[11-1][12-1]=0;M2[6-1][13-1]=0;M2[9-1][13-1]=0;M2[6-1][14-1]=0;M2[7-1][14-1]=0;M2[8-1][14-1]=0;
M2[9-1][14-1]=0;M2[10-1][14-1]=0;M2[11-1][14-1]=0;M2[6-1][16-1]=0;M2[7-1][16-1]=0; M2[8-1][16-1]=0;
M2[9-1][16-1]=0;M2[11-1][16-1]=0;M2[6-1][17-1]=0;M2[9-1][17-1]=0;M2[11-1][17-1]=0;M2[6-1][18-1]=0;
M2[7-1][18-1]=0;M2[9-1][18-1]=0;M2[10-1][18-1]=0;M2[11-1][18-1]=0;M2[6-1][22-1]=0;M2[7-1][22-1]=0;
M2[8-1][22-1]=0;M2[9-1][22-1]=0;M2[10-1][22-1]=0;M2[11-1][22-1]=0;M2[6-1][23-1]=0;M2[11-1][23-1]=0;
M2[6-1][24-1]=0;M2[9-1][24-1]=0; M2[11-1][24-1]=0;M2[6-1][25-1]=0;M2[7-1][25-1]=0;M2[9-1][25-1]=0;
M2[10-1][25-1]=0;M2[11-1][25-1]=0;M2[6-1][27-1]=0;M2[7-1][27-1]=0;M2[8-1][27-1]=0;M2[9-1][27-1]=0;
M2[10-1][27-1]=0;M2[11-1][27-1]=0;M2[6-1][28-1]=0;M2[9-1][28-1]=0;M2[6-1][29-1]=0;M2[7-1][29-1]=0;
M2[8-1][29-1]=0;M2[9-1][29-1]=0;M2[10-1][29-1]=0;M2[11-1][29-1]=0;M2[6-1][31-1]=0;M2[7-1][31-1]=0;
M2[8-1][31-1]=0;M2[9-1][31-1]=0;M2[10-1][31-1]=0;M2[11-1][31-1]=0;M2[6-1][32-1]=0;M2[7-1][32-1]=0;
M2[8-1][32-1]=0;M2[9-1][33-1]=0;M2[10-1][33-1]=0;M2[6-1][34-1]=0; M2[7-1][34-1]=0;M2[8-1][34-1]=0;
M2[9-1][34-1]=0;M2[10-1][34-1]=0;M2[11-1][34-1]=0;M2[6-1][36-1]=0;M2[7-1][36-1]=0;M2[8-1][36-1]=0;
M2[9-1][36-1]=0;M2[10-1][36-1]=0;M2[11-1][36-1]=0;M2[6-1][37-1]=0;M2[9-1][37-1]=0;M2[6-1][38-1]=0;
M2[7-1][38-1]=0;M2[8-1][38-1]=0;M2[9-1][38-1]=0; M2[10-1][38-1]=0;M2[11-1][38-1]=0;M2[6-1][40-1]=0;
M2[7-1][40-1]=0;M2[8-1][40-1]=0;M2[9-1][40-1]=0;M2[10-1][40-1]=0;M2[11-1][40-1]=0;M2[6-1][41-1]=0;
M2[11-1][41-1]=0;M2[6-1][42-1]=0;M2[7-1][42-1]=0;M2[8-1][42-1]=0;M2[9-1][42-1]=0;M2[10-1][42-1]=0;
M2[11-1][42-1]=0;M2[6-1][43-1]=0;M2[7-1][43-1]=0;M2[8-1][43-1]=0;M2[9-1][43-1]=0;M2[10-1][43-1]=0;
M2[11-1][43-1]=0;M2[6-1][45-1]=0;M2[7-1][45-1]=0;M2[8-1][45-1]=0;M2[9-1][45-1]=0;M2[10-1][45-1]=0;
M2[11-1][45-1]=0;M2[6-1][46-1]=0;M2[11-1][46-1]=0;M2[6-1][47-1]=0;M2[7-1][47-1]=0;M2[8-1][47-1]=0;
M2[9-1][47-1]=0;M2[10-1][47-1]=0;M2[11-1][47-1]=0;M2[6-1][49-1]=0;M2[7-1][49-1]=0;M2[8-1][49-1]=0;
M2[9-1][49-1]=0;M2[10-1][49-1]=0;M2[11-1][49-1]=0;M2[13-1][49-1]=0;
    
 
cout <<"\n\n\n\n\n\n";   
for(v=0; v<V; v++){

    cout<<"\t";
    for(b=0; b<B; b++){                                       
             if(M2[v][b]==1){
             cout <<chester;
                      }else{
                           cout << " ";
                           
                           } 
                           
                      }  
                      cout<<"\n";
                 }
            } 
                                              
    }while((k>0&&q==0)||(a==0));
    
    if(a==0){
            cout<<"Lo siento, ha perdido el juego...";
            }
    
    if(q==0||a==0){
             cout <<"\n\n\n\n\n\n";  
             cout <<trixie <<" QUIERE JUGAR DE NUEVO (s/n)? " <<trixie <<" ";
             cin >>resp;
             system("cls");
            }
    }while((resp=='s')||(resp=='S'));
    if(q==0){
             cout <<"\nPresione enter para finalizar el juego";
             cin.get();cin.get();
             }
return 0;
}
