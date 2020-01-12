#include <stdio.h>
#include <stdlib.h>

int compare (void* a, void *b) {
	return (*(int*)a - *(int*)b);
}

int main () { 
	
	int qtdTeclados = 0;	
	scanf("%d", &qtdTeclados);
	
	int id_teclados[qtdTeclados];
	
	int i = 0;
	for (i = 0; i < qtdTeclados; i++) {
		scanf("%d", &id_teclados[i]);
	}
	
	qsort(id_teclados, qtdTeclados, sizeof(int), compare);
	
	//for (i = 0; i < qtdTeclados; i++)printf("%d ", id_teclados[i]);
	//printf("\n");
	
	int id_inicial = id_teclados[0];
	//printf("%d\n", id_inicial);
	
	int teclados_roubados = 0;
	for (i = 0; i < qtdTeclados; i++) {
		if (id_teclados[i] != id_inicial) {
			//printf("%d roubado!\n", id_inicial);
			teclados_roubados++;
			id_inicial = id_teclados[i];
		}
		
		//printf("%d - %d\n", id_teclados[i], id_inicial);
		id_inicial++;
	}
	
	printf("%d\n", teclados_roubados);

	return (0);
}
