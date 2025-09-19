#include <iostream>

using namespace std;

// ====== Prototipos ======
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

void ejercicio01()
{
    cout << "Ejercicio 01" << endl;
    cout << " Codifica el programa que se muestra a continuación: Con ayuda del debugger, examina la representación en memoria del arreglo array y responde las siguientes preguntas. " << endl;
    cout << "● ¿Cuál es su dirección en memoria?" << endl;
    cout << "● ¿Cuántos bytes se dedican para almacenar cada elemento de array?" << endl;
    cout << "● ¿Cuál es la dirección y el contenido en memoria del elemento array[3]?" << endl;
    cout << "● Describe el efecto que tiene la función fun_b, sobre el arreglo array." << endl;

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
    cout << "La función que se ilustra a continuación calcula el promedio de los elementos de un arreglo de tamaño n. Promedio y suma apuntan a variables que la función modifica por referencia. Desafortunadamente, la función contiene errores; encuéntralos y corrígelos, de tal manera que su operación sea correcta." << endl;

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
    cout << "Se tiene la siguiente declaración e inicialización para el arreglo b: " << endl;
    cout << "unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}}; " << endl;
    cout << "La figura 1, que se presenta a continuación, ilustra la representación del arreglo b en memoria. Completa la " << endl;
    cout << "numeración de las direcciones de memoria, en notación hexadecimal, para cada elemento del arreglo b. " << endl;
    cout << "Figura 1. Elementos del arreglo b " << endl;
    cout << "Determina, de acuerdo a lo ilustrado en la figura 1, el valor correspondiente de las siguientes expresiones: " << endl;
    cout << "● b: " << "(void *) b" << endl;
    cout << "● b+2: " << "(void *)(b + 2)" << endl;
    cout << "● *(b+2): " << "(void *) *(b + 2)" << endl;
    cout << "● *(b+2)+1: " << "(void *) *(b + 2) + 1" << endl;
    cout << "● *(*(b+2)+1): " << "(void *) *(*(b + 2) + 1)" << endl;
    cout << "● b[3][1]: " << "(void *) b[3][1]" << endl;
    cout << "● *b++: " << "(void *) *b++" << endl;

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
    cout << "Realiza un circuito en Tinkercad donde la intensidad de iluminación de un LED se pueda variar con un potenciómetro. Debes agregar en Tinkercad una Breadboard Small, un Potenciometer, un Resistor de 220Ω, un LED, y un Arduino. Conecta todos los elementos del circuito de una manera apropiada y programa el Arduino para la tarea pedida." << endl;

    /*
        Codigo en el simulador Tinkercad
        https://www.tinkercad.com/things/eZKblQIyBQS/editel?returnTo=%2Fdashboard
    */
    /*
        ******** Codigo ********
        const int potPin = A0; // Pin analógico donde está conectado el potenciómetro
        const int ledPin = 9;  // Pin PWM donde está conectado el LED

        void setup() {
            pinMode(ledPin, OUTPUT);
        }

        void loop() {
            int potValue = analogRead(potPin);
            int ledValue = map(potValue, 0, 1023, 0, 255);
            analogWrite(ledPin, ledValue);
        }
    */
}
void ejercicio05()
{
    cout << "Ejercicio 05" << endl;
    cout << "Realiza un circuito en Tinkercad para escribir mensajes en un Liquid-Crystal Display (LCD) con la ayuda de Arduino. Cambia de Basic a All en la opción components de Tinkercad. Debe agregar un LCD 16 × 2, y un Arduino. Conecta todos los elementos del circuito de una manera apropiada y programa el Arduino para la tarea pedida." << endl;

    /*
        Codigo en el simulador Tinkercad
        https://www.tinkercad.com/things/eZKblQIyBQS/editel?returnTo=%2Fdashboard
    */
    /*
        ******** Codigo ********
        #include <LiquidCrystal.h>
        LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Configuración de pines
        void setup() {
            lcd.begin(16, 2); // Inicializa el LCD con 16 columnas y 2 filas
            lcd.print("Hola, Mundo!"); // Imprime un mensaje en la primera fila
            lcd.setCursor(0, 1); // Mueve el cursor a la segunda fila
            lcd.print("LCD con Arduino"); // Imprime otro mensaje en la segunda fila
        }
        void loop() {
            // No se necesita código en el loop para este ejemplo
        }
    */
}
void problema01()
{
    cout << "Problema 01" << endl;
    cout << "Se necesita un programa que permita determinar la minima combinación de billetes y monedas para una cantidad de dinero determinada. Los billetes en circulacion son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50. Haz un programa que entregue el numero de billetes y monedas de cada denominacion para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Usa arreglos y ciclos para realizar el programa. Universidad de Antioquia · Facultad de Ingenieria · Ude@ Educacion Virtual Universidad de Antioquia · Facultad de Ingenieria · Ude@ Educacion Virtual disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. Usa arreglos y ciclos para realizar el programa. " << endl;

    // Programa para determinar la mínima combinación de billetes y monedas

    long long amount;

    // Leer el monto de entrada
    if (!(cin >> amount))
    {
    }

    // Denominaciones disponibles
    const int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    const int numDenom = sizeof(denominations) / sizeof(denominations[0]);

    // Calcular y mostrar la cantidad de billetes o monedas por denominación
    for (int i = 0; i < numDenom; ++i)
    {
        int count = amount / denominations[i];
        cout << denominations[i] << ": " << count << "\n";
        amount %= denominations[i];
    }

    // Mostrar el faltante, si lo hay
    cout << "Faltante: " << amount << "\n";
    cout << "Realiza una versión en Arduino de este programa (en un Arduino físico o Tinkercad), la cantidad de dinero debe ser ingresada con la ayuda del serial. Usa el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios e imprimir. " << endl;

    // Código para Arduino
    /*
    void setup() {
        Serial.begin(9600);
    }

    void loop() {
        if (Serial.available() > 0) {
            long long amount = Serial.parseInt();
            // Lógica del programa aquí (similar a la del programa en C++)
            const int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
            const int numDenom = sizeof(denominations) / sizeof(denominations[0]);
            for (int i = 0; i < numDenom; ++i) {
                int count = amount / denominations[i];
                Serial.print(denominations[i]);
                Serial.print(": ");
                Serial.println(count);
                amount %= denominations[i];
            }
            Serial.print("Faltante: ");
            Serial.println(amount);

        }
    }
    */
}
void problema02()
{
    cout << "Problema 02" << endl;
    cout << "Elabora un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprime este arreglo y luego imprime cuantas veces se repita cada letra en el mismo." << endl;

    const int N = 200;
    const int ALPHABET_SIZE = 26;

    // Arreglo para almacenar letras
    char letters[N];

    // Arreglo de conteo
    int counts[ALPHABET_SIZE] = {0};

    // Generar letras "pseudoaleatorias" (simuladas mediante fórmula)
    for (int i = 0; i < N; ++i)
    {
        char letter = 'A' + (i * 17 + 3) % ALPHABET_SIZE; // simple fórmula para variar letras
        letters[i] = letter;
        counts[letter - 'A']++;
    }

    // Imprimir las letras generadas
    for (int i = 0; i < N; ++i)
    {
        cout << letters[i];
        if ((i + 1) % 50 == 0)
            cout << "\n"; // Salto de línea cada 50 letras
    }
    cout << "\n";

    // Imprimir la frecuencia de cada letra
    for (int i = 0; i < ALPHABET_SIZE; ++i)
    {
        if (counts[i] > 0)
        {
            cout << char('A' + i) << ": " << counts[i] << "\n";
        }
    }
}
bool iguales(string a, string b)
{
    return a == b;
}
void problema03()
{
    cout << "Problema 03" << endl;
    cout << "Haz una función que compare 2 cadenas de caracteres y retorne un valor lógico verdadero si son iguales, y falso en caso contrario, no olvides también tener en cuenta la longitud de las cadenas. Escribe un programa de prueba. " << endl;

    string x, y;
    getline(cin, x);
    getline(cin, y);

    if (iguales(x, y))
        cout << "Iguales\n";
    else
        cout << "Distintas\n";
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
