/*TODO:
* Eliminar linea 43 ingreso matri luego de agregar loginvet
* 
* 
* 
*
*
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cstring>
#include <ctype.h>
#include <wchar.h>
// #include<string.h>
// #include<time.h>
// #include<cmath>

//Librerias Locales
#include "libreria.h"
#include "menus.h"

int main()
{
    setlocale(LC_ALL, "");
    system("color 5F");
    int opcion, N = 0;
    veterinario vet;
    char apnom[60];

    do
    {
        opcion = menuVet();
        switch (opcion)
        {
        case 1:
            // loginvet(vet); //pendiente agregar loginvet
            getch();
            break;
        case 2:
            printf("Ingrese la matricula: "); //Eliminar luego
            scanf("%d", &vet.matri);

            listurn(vet.matri, apnom);
            // printf("Apellido y Nombre de la mascota: %s",apnom);
            getch();
            break;
        case 3:
            evolucion(apnom);
            getch();
            break;
        case 4:
            system("CLS");
            printf("\nF i n   d e l   P r o g r a m a");
            printf("\n");
            system("pause");
            break;
        default:
            system("CLS");
            printf("Ha ingresado una opcion no valida");
            printf("\n");
            system("pause");
            break;
        } //Fin del switch().

    } while (opcion != 4); //Fin del Ciclo Do

    printf("\n");
    getch();
}