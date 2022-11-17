#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct lista {
   int info;
   struct lista* prox;
} Lista;


Lista* inicializa_lista (){
 return NULL;
};


Lista* inserir_lista (Lista* l, int i){
  Lista* novo = (Lista*) malloc(sizeof(Lista));
  novo -> info = i;
  novo -> prox = l;
  return novo;
};

void imprime_lista (Lista* l) {
  Lista* p; 
  for (p = l; p != NULL; p = p -> prox)
    printf("%d  ", p->info);
}

Lista* concatena (Lista* l, Lista* l2){
  Lista* p;
  Lista* q;  

  if (l == NULL) return l2;

  p = l;   
  do { 
    q = p; 
    p = p -> prox;
  } while(p != NULL);

  q -> prox = l2;

  return l;
}


 int main() {
   
   Lista* l;
   
   l = inicializa_lista();
   l = inserir_lista(l, 10);
   l = inserir_lista(l, 20);
   l = inserir_lista(l, 30);
   l = inserir_lista(l, 40);
   
   printf("\nPRIMEIRA LISTA (L1):\n");
   imprime_lista(l);
   printf("\n");
   printf("\n");

   Lista* l2;
   
   l2 = inicializa_lista();
   l2 = inserir_lista(l2, 60);
   l2 = inserir_lista(l2, 70);
   l2 = inserir_lista(l2, 100);
   
  printf("\nSEGUNDA LISTA (L2): \n");
  imprime_lista(l2);
  printf("\n");
  printf("\n");
  
   
  printf("\nRESULTADO DA CONCATENACAO DE (L1 e L2): \n");
  imprime_lista(concatena(l,l2));
  printf("\n");
  printf("\n");
  
  return 0;

}