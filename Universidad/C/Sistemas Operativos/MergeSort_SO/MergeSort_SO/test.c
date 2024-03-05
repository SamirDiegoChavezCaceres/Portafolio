#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100  //Tamaño del arreglo
#define GET_US(X) (X.tv_sec * 1000000 + X.tv_usec)  //Calculo tiempo

int arr[SIZE]; // Definicion del arreglo

void mergeSortRecursivo(int arr[], int i, int d);
void mergeSortParalelo(int *arr1, int size);

// Print
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Inicializacion de arreglos
int *generateRandomArray(int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    return arr;
}

int main()
{
    int *arr = generateRandomArray(SIZE); //Generacion de datos para paralelo
    
    //Print arreglo desordenado
    //printArray(arr, SIZE);

    struct timeval start, end;
    double diferencia;

    gettimeofday(&start, NULL);
    mergeSortParalelo(arr, SIZE - 1); // size -1, utilizamos indices
    gettimeofday(&end, NULL);

    diferencia = GET_US(end) - GET_US(start);
    printf("Tiempo Paralelo = %f\n", diferencia / 1000000.0);

    //Print arreglo ordenado
    //printArray(arr, SIZE);

    // Recursivo

    arr = generateRandomArray(SIZE); //Generacion de datos para recursivo

    //Print arreglo desordenado
    //printArray(arr, SIZE);

    gettimeofday(&start, NULL);
    mergeSortRecursivo(arr, 0, SIZE-1);
    gettimeofday(&end, NULL);

    //Calculo de tiempo
    diferencia = GET_US(end) - GET_US(start);
    printf("Tiempo Recursivo = %f\n", diferencia / 1000000.0);

    //Print arreglo ordenado
    //printArray(arr, SIZE);

    return 0;
}
