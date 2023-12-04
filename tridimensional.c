#include <stdio.h>

void crearmatrix(int m, int f, int c, int matriz[f][c]); // definimos la funcion para crear la matriz tridimensional y usamos void para que no de retorno//

for (int i = 0; i < m; i++) // se pone el primer for para la matriz
{
    printf("\n Matriz %d", i);  // inprime el numero de la matriz actual
    for (int j = 0; j < f; j++) // se pone el segundo for para las filas de la matriz
    {
        printf("\n");               // se inprime la matriz de forma espaciada
        for (int k = 0; k < c; k++) // se pone el tercer for para las columnas
        {
            matriz[j][k] = 0;              // Asignamos el valor 0 a cada elemento
            printf("%d \t", matriz[j][k]); // Imprimimos el valor del elemento actual
        }
    }
}

printf("\n Matriz %d", m); // Imprimimos la última matriz//
for (int j = 0; j < f; j++)
{
    printf("\n");
    for (int k = 0; k < c; k++)
    {
        matriz[j][k] = 1;              // Asignamos el valor 1 a cada elemento
        printf("%d \t", matriz[j][k]); // Imprimimos el valor del elemento actual
    }
}

    return 0;
}