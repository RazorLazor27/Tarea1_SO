#ifndef ALGORITMO_H
#define ALGORITMO_H

typedef struct {
    int cant_lineas;
    int cant_letras;
    char nombre[100];
    char tipo[15];
} InfoLinea;

InfoLinea contador_general(const char *nombre_archivo);

void horizontal();

#endif
