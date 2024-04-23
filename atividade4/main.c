#include "lista.h"
#include <stdio.h>

int main() {
    No *lista = lista_criar();
    lista_inserir(&lista, 'a');
    lista_inserir(&lista, 'b');
    lista_inserir(&lista, 'c');
    lista_inserir(&lista, 'a');

    printf("Lista atual: ");
    lista_imprimir(lista);
    
    printf("Existencia de 'a': %d\n", lista_verificar_existencia(lista, 'a'));
    printf("Ocorrencias de 'a': %d\n", lista_verificar_ocorrencias(lista, 'a'));

    printf("Lista inversa: ");
    lista_imprimir_inversa(lista);

    lista_inserir_no_i(&lista, 'x', 2);
    printf("Apos insercao no indice 2: ");
    lista_imprimir(lista);

    lista_remover_no_i(&lista, 3);
    printf("Apos remover o indice 3: ");
    lista_imprimir(lista);

    lista_remover_no(&lista, 'a');
    printf("Apos remover todos os 'a': ");
    lista_imprimir(lista);

    lista_destruir(lista);
    return 0;
}
