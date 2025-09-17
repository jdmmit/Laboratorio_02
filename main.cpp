#include <iostream>

using namespace std;

// ====== Prototipos ======
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

void ejercicio01()
{
    cout << "Ejercicio 01" << endl;

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Imprimir la dirección en memoria del arreglo
    cout << "Direccion en memoria del arreglo: " << &array << endl;

    // Imprimir el tamaño en bytes de cada elemento de array
    cout << "Tamano en bytes de cada elemento de array: " << sizeof(array[0]) << endl;

    // Imprimir la dirección y el contenido en memoria del elemento array[3]
    cout << "Direccion en memoria del elemento array[3]: " << &array[3] << endl;
    cout << "Contenido en memoria del elemento array[3]: " << array[3] << endl;

    // Imprimir el contenido del arreglo antes de llamar a fun_b
    cout << "Contenido del arreglo antes de llamar a fun_b: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    fun_b(array, 10);

    // Imprimir el contenido del arreglo despues de llamar a fun_b
    cout << "Contenido del arreglo despues de llamar a fun_b: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Intercambia dos elementos
void fun_a(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

// Invierte el arreglo
void fun_b(int a[], int tam)
{
    int f, l;
    for (f = 0, l = tam - 1; f < l; f++, l--)
    {
        fun_a(&a[f], &a[l]);
    }
}

// Función para calcular el promedio y la suma de los elementos de un arreglo

void fun_c(double *a, int n, double *promedio, double *suma)
{
    int i;

    *suma = 0.0; // Inicializa la suma a 0.0

    for (i = 0; i < n; i++)
    {
        *suma += a[i]; // Suma el valor del elemento al puntero suma
    }

    *promedio = *suma / n; // Calcula el promedio
}

void ejercicio02()
{
    cout << "Ejercicio 02" << endl;

    // Declaramos un arreglo de 5 elementos

    double array[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    int n = 5; // Tamaño del arreglo

    double promedio, suma;

    // Llamamos a la función fun_c pasando el arreglo, su tamaño y las direcciones de promedio y suma

    fun_c(array, n, &promedio, &suma);

    // Imprimimos la suma y el promedio de los elementos del arreglo

    cout << "Suma de los elementos: " << suma << endl;
    cout << "Promedio de los elementos: " << promedio << endl;
}
void ejercicio03()
{
    cout << "Ejercicio 03" << endl;

    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

    // Evaluación de las expresiones

    // b
    cout << "b: " << (void *)b << endl;

    // b + 2
    cout << "b + 2: " << (void *)(b + 2) << endl;

    // *(b + 2)
    cout << "*(b + 2): " << *(b + 2) << endl;

    // *(b + 2) + 1
    cout << "*(b + 2) + 1: " << *(b + 2) + 1 << endl;

    // *(*(b + 2) + 1)
    cout << "*(*(b + 2) + 1): " << *(*(b + 2) + 1) << endl;

    // b[3][1]
    cout << "b[3][1]: " << b[3][1] << endl;

    // Expresión *b++ es incorrecta y se ha removido
    // Los punteros a matrices no se pueden incrementar así directamente

    // Verificamos el contenido de &b[0][0]
    unsigned short *ptr_b_0_0 = &b[0][0]; // Apuntador al primer elemento
    cout << "*ptr_b_0_0: " << *ptr_b_0_0 << endl;

    // Verificamos el contenido de ptr_b_0_0 + 1
    cout << "*(ptr_b_0_0 + 1): " << *(ptr_b_0_0 + 1) << endl;

    /*
        Codigo en el simulador Tinkercad
        https://www.tinkercad.com/things/eZKblQIyBQS/editel?returnTo=%2Fdashboard
*/
    /*
        ******** Codigo ********
        void setup() {
    Serial.begin(9600); // Inicializamos la comunicación serial

    // Declaración e inicialización del arreglo
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

    // Evaluación de las expresiones

    // b
    Serial.print("b: ");
    Serial.println((unsigned long)&b); // Cast a unsigned long para compatibilidad con Serial.println

    // b + 2
    Serial.print("b + 2: ");
    Serial.println((unsigned long)(b + 2));

    // *(b + 2)
    Serial.print("*(b + 2): ");
    Serial.println(*(b + 2)[0]); // Accedemos al primer elemento del subarreglo

    // *(b + 2) + 1
    Serial.print("*(b + 2) + 1: ");
    Serial.println((*(b + 2)[0]) + 1); // Sumamos 1 al primer elemento del subarreglo

    // *(*(b + 2) + 1)
    Serial.print("*(*(b + 2) + 1): ");
    Serial.println((*(b + 2))[1]); // Accedemos al segundo elemento del subarreglo

    // b[3][1]
    Serial.print("b[3][1]: ");
    Serial.println(b[3][1]);

    // Verificamos el contenido de &b[0][0]
    unsigned short *ptr_b_0_0 = &b[0][0]; // Apuntador al primer elemento
    Serial.print("*ptr_b_0_0: ");
    Serial.println(*ptr_b_0_0);

    // Verificamos el contenido de ptr_b_0_0 + 1
    Serial.print("*(ptr_b_0_0 + 1): ");
    Serial.println(*(ptr_b_0_0 + 1));
}

void loop() {
    // El loop se ejecuta continuamente, pero no necesitamos nada aquí
}
    */
}
void ejercicio04()
{
    cout << "Ejercicio 04" << endl;
}
void ejercicio05()
{
    cout << "Ejercicio 05" << endl;
}
void problema01()
{
    cout << "Problema 01" << endl;
}
void problema02()
{
    cout << "Problema 02" << endl;
}
void problema03()
{
    cout << "Problema 03" << endl;
}
void problema04()
{
    cout << "Problema 04" << endl;
}
void problema05()
{
    cout << "Problema 05" << endl;
}
void problema06()
{
    cout << "Problema 06" << endl;
}
void problema07()
{
    cout << "Problema 07" << endl;
}
void problema08()
{
    cout << "Problema 08" << endl;
}
void problema09()
{
    cout << "Problema 09" << endl;
}
void problema10()
{
    cout << "Problema 10" << endl;
}
void problema11()
{
    cout << "Problema 11" << endl;
}
void problema12()
{
    cout << "Problema 12" << endl;
}
void problema13()
{
    cout << "Problema 13" << endl;
}
void problema14()
{
    cout << "Problema 14" << endl;
}
void problema15()
{
    cout << "Problema 15" << endl;
}
void problema16()
{
    cout << "Problema 16" << endl;
}
void problema17()
{
    cout << "Problema 17" << endl;
}
void problema18()
{
    cout << "Problema 18" << endl;
}

int main()
{
    cout << " 10 Ejercicios Básicos de C++  " << endl;
    cout << "******************************" << endl;

    int opciones = 0;

    while (opciones != 11)
    {
        cout << "1. Ejercicio 01" << endl;
        cout << "2. Ejercicio 02" << endl;
        cout << "3. Ejercicio 03" << endl;
        cout << "4. Ejercicio 04" << endl;
        cout << "5. Ejercicio 05" << endl;
        cout << "6. Problema 01" << endl;
        cout << "7. Problema 02" << endl;
        cout << "8. Problema 03" << endl;
        cout << "9. Problema 04" << endl;
        cout << "10. Problema 05" << endl;
        cout << "11. Problema 06" << endl;
        cout << "12. Problema 07" << endl;
        cout << "13. Problema 08" << endl;
        cout << "14. Problema 09" << endl;
        cout << "15. Problema 10" << endl;
        cout << "16. Problema 11" << endl;
        cout << "17. Problema 12" << endl;
        cout << "18. Problema 13" << endl;
        cout << "19. Problema 14" << endl;
        cout << "20. Problema 15" << endl;
        cout << "21. Problema 16" << endl;
        cout << "22. Problema 17" << endl;
        cout << "23. Problema 18" << endl;
        cout << "****************" << endl;
        cout << "24. Salir" << endl;
        cout << "Ingresa una opcion" << endl;

        cin >> opciones;

        switch (opciones)
        {
        case 1:
            ejercicio01();
            break;
        case 2:
            ejercicio02();
            break;
        case 3:
            ejercicio03();
            break;
        case 4:
            ejercicio04();
            break;
        case 5:
            ejercicio05();
            break;
        case 6:
            problema01();
            break;
        case 7:
            problema02();
            break;
        case 8:
            problema03();
            break;
        case 9:
            problema04();
            break;
        case 10:
            problema05();
            break;
        case 11:
            problema06();
            break;
        case 12:
            problema07();
            break;
        case 13:
            problema08();
            break;
        case 14:
            problema09();
            break;
        case 15:
            problema10();
            break;
        case 16:
            problema11();
            break;
        case 17:
            problema12();
            break;
        case 18:
            problema13();
            break;
        case 19:
            problema14();
            break;
        case 20:
            problema15();
            break;
        case 21:
            problema16();
            break;
        case 22:
            problema17();
            break;
        case 23:
            problema18();
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << "****************" << endl;
        cout << endl;
    }
}
