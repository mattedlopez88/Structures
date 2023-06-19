#include <stdio.h>

int main(){
    struct alumno{
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;

    } a1 = {"Juan", "Quito", "Software", 20, 9.1};
    
    printf("Datos:\n");
    printf("%s\n", a1.nombre);
    printf("%s\n", a1.direccion);
    printf("%s\n", a1.carrera);
    printf("%d\n", a1.edad);
    printf("%.2f\n", a1.promedio);

    return 0;
}