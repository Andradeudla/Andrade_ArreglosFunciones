#include <stdio.h> // Biblioteca estándar de entrada y salida

void crearmatrix(int m, int f, int c, int matriz[f][c])
{ // definimos la funcion para crear la matriz tridimensional y usamos void para que no de retorno//

    for (int i = 1; i < m; i++)
    {                              // se pone el primer for para la matriz
        printf("\n Matriz %d", i); // inprime el numero de la matriz actual
        for (int j = 0; j < f; j++)
        {                 // se pone el segundo for para las filas de la matriz
            printf("\n"); // se inprime la matriz de forma espaciada
            for (int k = 0; k < c; k++)
            {                                  // se pone el tercer for para las columnas
                matriz[j][k] = 0;              // Asignamos el valor 0 a cada elemento
                printf("%d \t", matriz[j][k]); // Imprimimos el valor del elemento actual
            }
        }
    }

    printf("\n Matriz %d", m); // Imprimimos la última matriz
    for (int j = 0; j < f; j++)
    { // ponemos el for para fila de la matriz de la matriz de unos
        printf("\n");

        for (int k = 0; k < c; k++)
        {                                  // ponemos el for para la matriz columnas
            matriz[j][k] = 1;              // Asignamos el valor 1 a cada elemento
            printf("%d \t", matriz[j][k]); // Imprimimos el valor del elemento actual
        }
    }
}

int main()
{

    int m, f, c;
    printf("Ingrese el numero de matrices que desea ingresar: "); // Solicitamos al usuario el número de matrices, filas y columnas
    scanf("%d", &m);
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &c);
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &f);

    int matriz[f][c]; // Declaramos la matriz con el tamaño especificado por el usuario

    crearmatrix(m, f, c, matriz); // Llamamos a la función para crear las matrices

    return 0;
}