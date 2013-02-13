#define Inicio = 1;
#define MaxTam = 1000;

typedef struct{        
    int ID;
    int Wait;
    int Fuel;
    int NumFila;
}TItem;

typedef struct{
        TItem Item[1001];
        int Frente, Tras;
}TFila;

void FFVazia(TFila *Fila);

int FEhVazia(TFila *Fila);

int FEnfileira(TFila *Fila, TItem Item);

int FDesenfileira(TFila *Fila);

int FFura(TFila *Fila, TItem Item);
