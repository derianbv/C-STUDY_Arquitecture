#include <stdio.h>
#include <stdlib.h>


int main(){

int** ptrAptr =  malloc(sizeof(int*)); //malloc es memoria en el heap
//a dentro de ptrAptr se guarda la direccion de heap que se guardo con malloc.

/* stack para variables de funciones (es limitada de pocos MB y la puedo rebasar creando un stack overflow)
se acaba la funcion y se borran dichas variables, para malloc se asigna en heap que es como toda la RAM
(sirve para estructuras gigantes). El stack es casi instantaneo entonces se accede a las variables rapidamente
(sumando o restando al stack pointer O(1), en cambio el heap se demora más ya que el sistema debe encontrar
un espacio lo suficientemente grande para guardar el dato.

STACK: Automatico del compilador
HEAP: Manual por el programador

*/
printf("%p\n",ptrAptr);


int a = 44;
int * ptr = &a;
*ptrAptr = ptr;

printf(" %d \n",**ptrAptr);
free(ptrAptr);
ptrAptr = NULL;

return 0;
}
