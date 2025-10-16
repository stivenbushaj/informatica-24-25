

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *numeri=NULL; //array dinamico
    int dimensione=0;        //quanti elementi ci sono
    int scelta, n, i, j, trovato;

    do{
        printf("\n----MENU----\n");
        printf("1. Aggiungere un numero (espandendo l'array con realloc)\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero specifico\n");
        printf("4. Ordinare i numeri in ordine cresecnte\n");
        printf("5. Eliminare un numero scelto\n");
        printf("6. Uscire");
        printf("esegui una scelta: ");
        scanf("%d", &scelta);
    
    
    switch(scelta){
        case 1;
            printf("numero da inserire: ");
            scanf("%d". &n);
            numeri=(int*)realloc(numeri, (dimensione+1)*sizeoff(int));
            if(numeri=NULL){
                printf("errore di allocazione\n");
                return 1;
            }
            numeri[dimensione]=n;
            dimensione++;
            printf("numero aggiunto\n");

        break;

        case 2;
            printf("contenuto dell'array: ");
            if(dimensione==0)
                printf("array vuoto");
            else
                for(i=0; i<dimensione; i++){
                    printf("%d", numeri[i]);
                }
        break;  

        case 3;
            printf("numero da cercare: ");
            scanf("%d", &n);
            for(i=0; i<dimensione; i++){
                if(numeri[i]==n){
                    trovato=1;
                    printf("numero trovato in posizione %d\n", i);
                }
            }
        break;

        case 4;
    
    }
    
    }while(scelta != 6);








}