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
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("\nEstudiante %d\n", i+1);
        puts("Nombre: ");
        fgets(a[i].nombre, 20, stdin);
        puts("direccion: ");
        fgets(a[i].direccion, 20, stdin);
        puts("carrera: ");
        fgets(a[i].carrera, 20, stdin);
        puts("edad: ");
        scanf("%d", &a[i].edad);
        puts("promedio: ");
        scanf("%f", &a[i].promedio);
    }
    for (int i = 0; i < n; i++){
        printf("\n\nEstudiante %d\n", i+1);
        printf("Nombre: %s", a[i].nombre);
        printf("direccion: %s", a[i].direccion);
        printf("carrera: %s", a[i].carrera);
        printf("edad: %d", a[i].edad);
        printf("promedio: %f", a[i].promedio);
        
    }
    
    
    

    return 0;
}