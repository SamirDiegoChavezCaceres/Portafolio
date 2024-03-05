#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s;    // Declara semaforo
int *array; // Declara el arreglo compartido entre los hilos
void mergeParalelo(int izq, int mid, int der);

typedef struct
{
    int izq;
    int der;
    int size;
} data;

void *split(void *arg) // Division
{

    int izq = ((data *)arg)->izq;
    int der = ((data *)arg)->der;
    int size = ((data *)arg)->size;

    // Caso recursivo
    if (izq < der)
    {
        int mid = izq + ((der - izq) / 2);

        // Carga de datos
        data *dataIzq = (data *)malloc(sizeof(data));
        dataIzq->izq = izq;
        dataIzq->der = mid;
        dataIzq->size = size;

        data *dataDer = (data *)malloc(sizeof(data));
        dataDer->izq = mid + 1;
        dataDer->der = der;
        dataDer->size = size;

        // Creacion de hilos
        pthread_t hilo1, hilo2;
        pthread_create(&hilo1, NULL, split, (void *)dataIzq);
        pthread_create(&hilo2, NULL, split, (void *)dataDer);

        // Espera a los hilos
        pthread_join(hilo1, NULL);
        pthread_join(hilo2, NULL);

        // Llamado a mergeParalelo
        mergeParalelo(izq, mid, der);

        pthread_exit(NULL);
    }
    // Caso base
    else
    {
        pthread_exit(NULL);
    }
}

void mergeSortParalelo(int *arr1, int size)
{
    // Inicializacion del semaforo
    sem_init(&s, 0, 1);

    array = arr1; // carga de la variable global

    // Carga de datos
    int mid = size / 2;

    data *dataIzq = (data *)malloc(sizeof(data));
    dataIzq->izq = 0;
    dataIzq->der = mid;
    dataIzq->size = size;

    data *dataDer = (data *)malloc(sizeof(data));
    dataDer->izq = mid + 1;
    dataDer->der = size;
    dataDer->size = size;

    // Creacion de hilos
    pthread_t hilo1, hilo2;
    pthread_create(&hilo1, NULL, split, (void *)dataIzq);
    pthread_create(&hilo2, NULL, split, (void *)dataDer);

    // Espera a los hilos
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    // Llamada a mergeParalelo
    mergeParalelo(0, mid, size);
}

void mergeParalelo(int izq, int mid, int der)
{
    // Definicion de la variables
    int i, j, k;

    //Obtencion de los tamaños de subconjuntos generados
    int n1 = mid - izq + 1;
    int n2 = der - mid;

    //Inicializacion de los arreglos
    int L[n1], R[n2];

    //Copia del arreglo
    for (i = 0; i < n1; i++)
        L[i] = array[izq + i];
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];

    // Asignacion de las variables
    i = 0;
    j = 0;
    k = izq;

    sem_wait(&s);           //SECCION CRITICA
    
    //Algoritmo de ordenamiento
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
    sem_post(&s); 
}

void mergeRecursivo(int arr[], int izq, int m, int der)
{
    // Definicion de la variables
    int i, j, k;
    
    //Obtencion de los tamaños de subconjuntos generados
    int n1 = m - izq + 1;
    int n2 = der - m;

    //Inicializacion de los arreglos
    int L[n1], R[n2];

    //Copia del arreglo
    for (i = 0; i < n1; i++)
        L[i] = arr[izq + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Asignacion de las variables
    i = 0;
    j = 0;
    k = izq;
    
    //Algoritmo de ordenamiento
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSortRecursivo(int arr[], int i, int d)
{
    if (i < d)
    {
        int m = i + ((d - i) / 2);

        mergeSortRecursivo(arr, i, m);
        mergeSortRecursivo(arr, m + 1, d);
        mergeRecursivo(arr, i, m, d);
    }
}