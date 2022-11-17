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

Lista* remover(Lista* l, Lista *k) {
  if (l == NULL || k == NULL) return l;

  Lista* temp = l;

  if (temp == k) {
    return temp->prox;
  }
  
  while (temp != NULL) {
    if (temp->prox == k) {
      temp->prox = k->prox;
    }

    temp = temp->prox;
  }

  return l;
}
  
Lista* ordenar(Lista* lista) {
    Lista* atual = lista;
    Lista* ordenado = NULL;
  
    while (atual != NULL) {
        Lista* prox = atual->prox;
      if (ordenado == NULL || ordenado->info >= atual->info) {
        atual->prox = ordenado;
        ordenado = atual;
    } else {
        Lista* p = ordenado;
      
        while (p->prox != NULL && p->prox->info < atual->info) {
            p = p->prox;
        }
      
        atual->prox = p->prox;
        p->prox = atual;
    }
      
        atual = prox;
    }
  
    return ordenado;
}

int main() {
  

  Lista* l;

  l = inicializa_lista();
  l = inserir_lista(l, 20);
  l = inserir_lista(l, 40);
  l = inserir_lista(l, 30);
  l = inserir_lista(l, 10);
  l = inserir_lista(l, 3);
  l = inserir_lista(l, 27);
   
  printf("\nLISTA ORDENADA:\n");
  imprime_lista(ordenar(l));
  printf("\n");

  return 0;
}