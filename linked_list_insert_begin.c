# include <stdio.h>
# include <stdlib.h>

typedef struct nodo
  {
    int dato;
    struct nodo *link;

  }nodo;

nodo* IncertaInicio(nodo **head, int dato);
void ImprimeLista(nodo *inicio);

int main()
{

nodo *head = NULL;
head = malloc(sizeof(nodo));
head->dato = 1;
head->link = NULL;

nodo *ptr = NULL;
IncertaInicio(&head, 0);
IncertaInicio(&head, -1);
IncertaInicio(&head, -2);

ImprimeLista(head);

}


nodo* IncertaInicio(nodo **head, int dato)
{
  nodo *ptr = malloc(sizeof(nodo));
  ptr->dato = dato;
  ptr->link = NULL;

  ptr->link = *head;
  *head = ptr;



}

void ImprimeLista(nodo *inicio)
{
  	if (inicio == NULL)
      printf("La lista esta vacia");
    nodo * ptr = inicio;
    while(ptr != NULL)
    {
      printf("%d\n", ptr->dato );
      ptr = ptr->link;
    }
}
