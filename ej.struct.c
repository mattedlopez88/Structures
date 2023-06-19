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
    puts("Ingresa cantidad de estudiantes: ");
    n = getchar();
    for (int i = 0; i < n; i++){
        printf("Estudiante %d\n", i+1);
        puts("Nombre: ");
        gets(a[i].nombre);
        puts("direccion: ");
        gets(a[i].direccion);
        puts("carrera: ");
        gets(a[i].carrera);
        puts("edad: ");
        scanf("%d", &a[i].edad);
        puts("promedio: ");
        scanf("%f", &a[i].promedio);
    }
    
    
    

    return 0;
}