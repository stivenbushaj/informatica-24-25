/*  Scrivi un programma in C che:
    1. Chiede all'utente quanti numeri interi vuole inserire;
    2. Alloca dinamicamente un array di quella dimensione con malloc();
    3. Permette all'utente di inserire i numeri;
    4. Chiede all'utente se vuole aumentare la dimensione dell'array;
        - se sì, richiede la nuova dimensione e usa realloc() per ridimensionarlo;
        - permette quindi di iserire i nuovi valori negli spazi aggiunti;
    5. Infine, stampa tutti gli elementi dell'array.
*/

#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){
    
   int *_vettore=(int*)malloc(_n *sizeof(int));
   if(_vettore==NULL){
        printf("Errore di allocazione!\n");
        return NULL;
   }
   return _vettore;

int* inserisciValori(int *_vettore, int _n){

    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;


void stampaVett(int *_vettore, int _n){
    printf("Hai inserito i seguenti elementi: ");
    for(int i=0; i<_n; i++){
        printf("%d\t", _vettore[i] );
    }
    printf("\n");
}


int main(){
    int *_vettore=NULL;


    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);

    vettore = creaVettore(_n);
    vettore = inserisciValore(_vettore, n);


}
-