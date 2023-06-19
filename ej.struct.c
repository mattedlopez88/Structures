#include <stdio.h>

struct alumno{
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;

    } a[5];

int main(){
    int n;
    printf("Ingresa cantidad de estudiantes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("\nEstudiante %d\n", i+1);
        printf("Nombre: ");
        scanf("%s", a[i].nombre);
        printf("Direccion: ");
        scanf("%s", a[i].direccion);
        printf("Carrera: ");
        scanf("%s", a[i].carrera);
        printf("Edad: ");
        scanf("%d", &a[i].edad);
        printf("Promedio: ");
        scanf("%f", &a[i].promedio);
    }
    for (int i = 0; i < n; i++){
        printf("\nEstudiante %d\n", i+1);
        printf("Nombre: %s\n", a[i].nombre);
        printf("direccion: %s\n", a[i].direccion);
        printf("carrera: %s\n", a[i].carrera);
        printf("edad: %d\n", a[i].edad);
        printf("promedio: %f\n", a[i].promedio);
        printf("\n");
    }
    
    
    

    return 0;
}