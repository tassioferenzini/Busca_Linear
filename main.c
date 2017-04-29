/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tassio
 *
 * Created on 27 de Março de 2017, 16:25
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[10], v, i;

void buscar(int *a, int v) {

    for (i = 1; i < 11; i++) {
        if (a[i] == v) {
            printf("\n Existe o valor na posição %d", i);
        }
    }
}

int main(int argc, char** argv) {

    srand(time(NULL));
    for (int t = 1; t <= 10; t++) {
        a[t] = rand() % 10;
    }

    printf("Entrada = ");
    for (int t = 1; t <= 10; t++) {
        printf("%d ", a[t]);
    }

    v = 2;

    buscar(a, v);

    return (EXIT_SUCCESS);
}
