#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
  int dato;
  struct nodo *link;
}nodo;
void IncertaFinal(nodo *inicio, int dato);
void IncertaPosicion(nodo *head, int posicion, int dato);
void ImprimeLista(nodo *inicio);

int main()
{
nodo *head = malloc(sizeof(nodo));
head->dato = 10;
head->link = NULL;

IncertaFinal(head, 45 );
IncertaFinal(head, 59 );
IncertaFinal(head, 38);
ImprimeLista(head);
IncertaPosicion(head, 1, 37);
ImprimeLista(head);
}



//---------------------o------------------------------------o---------------------------
void IncertaFinal(nodo *inicio, int dato)
{
  nodo *ptr, *temp;
  ptr=inicio;
  while(ptr->link != NULL)
  {
    ptr = ptr->link;
  }
  temp = malloc(sizeof(nodo));
  temp->dato = dato;
  temp->link = NULL;
  ptr->link = temp;

}

void IncertaPosicion(nodo *head, int posicion, int dato)
{

nodo *ptr = NULL;
ptr = head;

nodo *ptr2 = malloc(sizeof(nodo));
ptr2-> dato = dato;
ptr2-> link = NULL;
posicion--;
while(posicion != 1){
  ptr= ptr->link;
  posicion--;
}
ptr2->link = ptr->link;
ptr->link = ptr2;

}

void ImprimeLista(nodo *inicio)
{
  	if (inicio == NULL)
      printf("La lista esta vacia");
    nodo * ptr = inicio;
    printf("[");
    while(ptr != NULL)
    {
      printf("%d,", ptr->dato );
      ptr = ptr->link;
    }
    printf("]\n");

}
