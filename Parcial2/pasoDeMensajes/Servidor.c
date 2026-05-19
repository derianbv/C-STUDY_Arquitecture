#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/socket.h> //socket 
#include <netinet/in.h> //sockaddr_in, htons()
#include <arpa/inet.h>
#include <strings.h>
#include <unistd.h>

//Comunicación por red. 


#define PORT 3535
#define BACKLOG 8

//1. ------------- se crean los enteros 
int sockfd; 
int sockfdc1; 
int r; 

//2. se crean las estructuras que van a guardar las direcciones IP de servidor y Cliente. 
struct sockaddr_in servidor;
struct sockaddr_in cliente; 

//3. socketlen_t // crear el largo de los sockets  (podría ser Int pero por portabilidad es socketlen_t) 
socklen_t addresLenServidor;
socklen addressLenCliente; 
double pi; 
