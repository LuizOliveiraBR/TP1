#include<stdio.h>
#include<stdlib.h>
#include "TP1.h"

void FFVazia(TFila *Fila){
     Fila->Frente = 1;
     Fila->Tras = Fila->Frente;
}

int FEhVazia(TFila *Fila){
    return(Fila->Tras == Fila->Frente);
}

int FEnfileira(TFila *Fila, TItem Item){
    int Aux;
    if((Fila->Tras % 1000) + 1 == Fila->Frente % 1000){
       printf("\nFila cheia!!!");
       return 0;
    }
    else{
       if((Fila->Tras % 1000 == 999) && (Fila->Frente % 1000 == 1)){
          printf("\nFila cheia!!!");
          return 0;
       }
       else{
           if(Fila->Tras % 1000 == 999){
               Fila->Item[0] = Item;
               Fila->Tras = Fila->Tras++;
           }
           else{
               Fila->Tras++;               
               Fila->Item[Fila->Tras] = Item;
           }
       }
    }
    return 1;
}      

int FDesenfileira(TFila *Fila){
    TItem Recept;
    if(FEhVazia(Fila)){
       printf("\nFila vazia!!!");
       return 0;
    }
    else{
       Recept = Fila->Item[Fila->Frente];
       Fila->Frente++;
    }
    return 1;
}

int FFura(TFila *Fila, TItem Item){
    if((Fila->Tras % 1000) + 1 == Fila->Frente % 1000){
       printf("\nFila cheia!!!");
       return 0;
    }
    else{
       if((Fila->Tras % 1000 == 999) && (Fila->Frente % 1000 == 1)){
          printf("\nFila cheia!!!");
          return 0;
       }
       else{
           if(Fila->Tras % 1000 == 999){
               Fila->Frente--;
               Fila->Item[Fila->Frente] = Item;
           }
           else{
               if(Fila->Frente == 0){
                   Fila->Frente = 999;
                   Fila->Item[Fila->Frente] = Item;                   
               }
               else{
                   Fila->Frente--;
                   Fila->Item[Fila->Frente] = Item;
               }
           }
       }
    }
    return 1;
}
