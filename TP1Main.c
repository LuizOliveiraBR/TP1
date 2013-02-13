/* 
 * File:   TP1Main.c
 * Author: Lj and Alexandra
 *
 * Created on 13 de Fevereiro de 2013, 11:51
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TP1.h"

/*
 * 
 */
int main(int argc, char** argv) {
    TFila FA, FAE_P3_1, FAE_P3_2, FAE_P2_1, FAE_P2_2, FAE_P1_1, FAE_P1_2;
    TFila FD, FP1, FP2, FP3, FVIP;
    FFVazia(&FA);
    FFVazia(&FAE_P1_1);
    FFVazia(&FAE_P1_2);
    FFVazia(&FAE_P2_1);
    FFVazia(&FAE_P2_2);
    FFVazia(&FAE_P3_1);
    FFVazia(&FAE_P3_2);
    FFVazia(&FD);
    FFVazia(&FP1);
    FFVazia(&FP2);
    FFVazia(&FP3);
    FFVazia(&FVIP);
    TItem Item;
    int opcao, i, aviao = 0;
    printf("\nDigite: \n1 - Incluir aeronave(s) na fila de espera para aterrissagem;"
            "\n2 - Incluir aeronave(s) na fila de espera para decolagem;"
            "\n3 - Incluir aterrisagem realizada;"
            "\n4 - Incluir decolagem realizada;"
            "\n5 - Sair do programa.");
    scanf("%d", &opcao);
    while(opcao != 5){
        if(opcao > 5){
           printf("\nNumero invalido! Digitar novamente.");
        }
        else{
           while(FA->Tras >= 20 || FD->Tras >= 20){
              if(opcao != 3 || opcao != 4){ 
                 printf("\nFila de aterrissagem com excesso de avioes. Nao serao "
                      "permitidas inclusoes de avioes ate a liberacao das filas!");
              }  
              else{
                 if(opcao == 3){
                    if(FA->Item) 
                     
                   Desenfileira(&)  
                 
                  
              
              
              
              
              
              
              
              
              
              
              
              
              
              if(opcao == 1){
                        srand(time(NULL));
                        aviao = rand()%3;
                        if(aviao == 1){
                            if(FA.Tras % 2 == 0){
                                Item.ID = (FA.Tras) + 1;
                                srand(time(NULL));
                                Item.Fuel = rand()%20;
                                Item.Wait = (FA.Tras) - (FA.Frente);
                                if(Item.Fuel < Item.Wait){
                                    FVIP.Tras++;
                                    FVIP.Item[FVIP.Tras].ID = Item.ID;
                                    FVIP.Item[FVIP.Tras].Fuel = Item.Fuel;
                                    FVIP.Item[FVIP.Tras].Wait = Item.Wait;
                                }
                                else{
                                    FAE_P1_1.Tras++;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].ID = Item.ID;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Fuel = Item.Fuel;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Wait = Item.Wait;
                                    FA.Tras++;
                                    FA.Item[FA.Tras].ID = Item.ID;
                                    FA.Item[FA.Tras].Fuel = Item.Fuel;
                                    FA.Item[FA.Tras].Wait = Item.Wait;
                                }
                            }
                            else{
                                Item.ID = (FA.Tras) + 2;
                                srand(time(NULL));
                                Item.Fuel = rand()%20;
                                Item.Wait = (FA.Tras) - (FA.Frente);
                                if(Item.Fuel < Item.Wait){
                                    FVIP.Tras++;
                                    FVIP.Item[FVIP.Tras].ID = Item.ID;
                                    FVIP.Item[FVIP.Tras].Fuel = Item.Fuel;
                                    FVIP.Item[FVIP.Tras].Wait = Item.Wait;
                                }
                                else{
                                    FAE_P1_1.Tras++;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].ID = Item.ID;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Fuel = Item.Fuel;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Wait = Item.Wait;
                                    FA.Tras++;
                                    FA.Item[FA.Tras].ID = Item.ID;
                                    FA.Item[FA.Tras].Fuel = Item.Fuel;
                                    FA.Item[FA.Tras].Wait = Item.Wait;
                                }
                            }
                            
                        }
                        if(aviao == 2){
                            if(FA.Tras % 2 == 0){
                                Item.ID = (FA.Tras) + 1;
                                srand(time(NULL));
                                Item.Fuel = rand()%20;
                                Item.Wait = (FA.Tras) - (FA.Frente);
                                if(Item.Fuel < Item.Wait){
                                    FVIP.Tras++;
                                    FVIP.Item[FVIP.Tras].ID = Item.ID;
                                    FVIP.Item[FVIP.Tras].Fuel = Item.Fuel;
                                    FVIP.Item[FVIP.Tras].Wait = Item.Wait;
                                }
                                else{
                                    FAE_P1_1.Tras++;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].ID = Item.ID;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Fuel = Item.Fuel;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Wait = Item.Wait;
                                    FA.Tras++;
                                    FA.Item[FA.Tras].ID = Item.ID;
                                    FA.Item[FA.Tras].Fuel = Item.Fuel;
                                    FA.Item[FA.Tras].Wait = Item.Wait;
                                }
                            }
                            else{
                                Item.ID = (FA.Tras) + 2;
                                srand(time(NULL));
                                Item.Fuel = rand()%20;
                                Item.Wait = (FA.Tras) - (FA.Frente);
                                if(Item.Fuel < Item.Wait){
                                    FVIP.Tras++;
                                    FVIP.Item[FVIP.Tras].ID = Item.ID;
                                    FVIP.Item[FVIP.Tras].Fuel = Item.Fuel;
                                    FVIP.Item[FVIP.Tras].Wait = Item.Wait;
                                }
                                else{
                                    FAE_P1_1.Tras++;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].ID = Item.ID;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Fuel = Item.Fuel;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Wait = Item.Wait;
                                    FA.Tras++;
                                    FA.Item[FA.Tras].ID = Item.ID;
                                    FA.Item[FA.Tras].Fuel = Item.Fuel;
                                    FA.Item[FA.Tras].Wait = Item.Wait;
                                }
                            }
                            
                        }
                        if(aviao == 3){
                            if(FA.Tras % 2 == 0){
                                Item.ID = (FA.Tras) + 1;
                                srand(time(NULL));
                                Item.Fuel = rand()%20;
                                Item.Wait = (FA.Tras) - (FA.Frente);
                                if(Item.Fuel < Item.Wait){
                                    FVIP.Tras++;
                                    FVIP.Item[FVIP.Tras].ID = Item.ID;
                                    FVIP.Item[FVIP.Tras].Fuel = Item.Fuel;
                                    FVIP.Item[FVIP.Tras].Wait = Item.Wait;
                                }
                                else{
                                    FAE_P1_1.Tras++;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].ID = Item.ID;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Fuel = Item.Fuel;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Wait = Item.Wait;
                                    FA.Tras++;
                                    FA.Item[FA.Tras].ID = Item.ID;
                                    FA.Item[FA.Tras].Fuel = Item.Fuel;
                                    FA.Item[FA.Tras].Wait = Item.Wait;
                                }
                            }
                            else{
                                Item.ID = (FA.Tras) + 2;
                                srand(time(NULL));
                                Item.Fuel = rand()%20;
                                Item.Wait = (FA.Tras) - (FA.Frente);
                                if(Item.Fuel < Item.Wait){
                                    FVIP.Tras++;
                                    FVIP.Item[FVIP.Tras].ID = Item.ID;
                                    FVIP.Item[FVIP.Tras].Fuel = Item.Fuel;
                                    FVIP.Item[FVIP.Tras].Wait = Item.Wait;
                                }
                                else{
                                    FAE_P1_1.Tras++;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].ID = Item.ID;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Fuel = Item.Fuel;
                                    FAE_P1_1.Item[FAE_P1_1.Tras].Wait = Item.Wait;
                                    FA.Tras++;
                                    FA.Item[FA.Tras].ID = Item.ID;
                                    FA.Item[FA.Tras].Fuel = Item.Fuel;
                                    FA.Item[FA.Tras].Wait = Item.Wait;
                                }
                            }
                            
                        }
                    }
                
                }
            }
          }
            
        }
    }
    return (EXIT_SUCCESS);
}

