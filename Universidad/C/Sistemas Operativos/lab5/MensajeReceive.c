#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/shm.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#define CLAVE_MSG 2000
#define OK 0
#define ERROR -1
#define INFO 150
#define TIPO 7

typedef struct { //1
    int numero;
    char* nombre;
    float sueldo;
} EMPLOYEE;

typedef struct { //7
    long tipo;
    EMPLOYEE* info;
} MENSAJE;

int main() {
    int qid, opcion;
    MENSAJE msg, msg2;
    int lector = 0;
    //
    qid = msgget(CLAVE_MSG, IPC_CREAT | IPC_EXCL | SHM_R | SHM_W);
    if (qid == ERROR) {
        if (errno == EEXIST) {
            printf("Ya existe una cola de mensajes, accediendo...\n");
            qid = msgget(CLAVE_MSG, SHM_R | SHM_W);
            if (qid == ERROR) {
                perror("msgget:");
                exit(errno);
            }
        }
    }
    //msgctl(qid, IPC_RMID, NULL);
    /*printf("Leyendo el primer mensaje de la cola...\n");
    if (msgrcv(qid, &msg2, sizeof(MENSAJE) + sizeof(char*)*4 - sizeof(long), 0, 0) == ERROR) {
        perror("msgrcv:");
        exit(errno);
    }
    printf("Mensaje recibido de tipo = %ld con info.numero = %d, info.nombre = %s, info.sueldo = %f\n", msg2.tipo,
    0,msg2.info->nombre,0.0);*/
    lector = 1;

    //Procesos de comunicacion finalizado
    if (lector == 1) {
        if (msgctl(qid, IPC_RMID, NULL) == ERROR) {
            perror("msgctl:");
            exit(errno);
        }
        printf("Cola de mensajes eliminada\n");
    }
    exit(OK);
}