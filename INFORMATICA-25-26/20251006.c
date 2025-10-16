/* Scrivi un programma in C che gestisca un insieme di numeri interi 
   usano un array dinamico.
   Il programma deve permettere, tramite menù:
   1. Aggiungere un numero (espandendo l'array con realloc) cioè una nuova dimensione;
   2. Visulizzare tutti i numeri;
   3. Cercare un numero specifico;
   4. Ordinare i numeri in ordine crescente;
   5. Eliminare un numero scelto;
   6. Uscire;*/


   #include <stdio.h>
   #include <stdlib.h>

   int* creaVett(int _n){
    
   int *_vettore=(int*)malloc(_n *sizeof(int));
        if(_vettore==NULL){
            printf("Errore di allocazione!\n");
            return NULL;
        }
        return _vettore;
   }
   
   int* inserisciValori(int *_vettore, int _n){

        for(int i=0; i<_n; i++){
            printf("Inserisci l'elemento: ");
            scanf("%d", &_vettore[i]);
        }
        return _vettore;
   }


   int main(){
        int *vettore=NULL;
   }