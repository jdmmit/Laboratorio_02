#include <iostream>
#include <string>

using namespace std;

// ====== Prototipos ======
void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

void ejercicio01()
{
    cout << "Ejercicio 01" << endl;
    cout << " Codifica el programa que se muestra a continuacion: Con ayuda del debugger, examina la representacion en memoria del arreglo array y responde las siguientes preguntas. " << endl;
    cout << "● ¿Cual es su direccion en memoria?" << endl;
    cout << "● ¿Cuantos bytes se dedican para almacenar cada elemento de array?" << endl;
    cout << "● ¿Cual es la direccion y el contenido en memoria del elemento array[3]?" << endl;
    cout << "● Describe el efecto que tiene la funcion fun_b, sobre el arreglo array." << endl;

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Imprimir la direccion en memoria del arreglo
    cout << "Direccion en memoria del arreglo: " << &array << endl;

    // Imprimir el tamano en bytes de cada elemento de array
    cout << "Tamano en bytes de cada elemento de array: " << sizeof(array[0]) << endl;

    // Imprimir la direccion y el contenido en memoria del elemento array[3]
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

// Funcion para calcular el promedio y la suma de los elementos de un arreglo

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
    cout << "La funcion que se ilustra a continuacion calcula el promedio de los elementos de un arreglo de tamano n. Promedio y suma apuntan a variables que la funcion modifica por referencia. Desafortunadamente, la funcion contiene errores; encuentralos y corrigelos, de tal manera que su operacion sea correcta." << endl;

    // Declaramos un arreglo de 5 elementos

    double array[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    int n = 5; // Tamano del arreglo

    double promedio, suma;

    // Llamamos a la funcion fun_c pasando el arreglo, su tamano y las direcciones de promedio y suma

    fun_c(array, n, &promedio, &suma);

    // Imprimimos la suma y el promedio de los elementos del arreglo

    cout << "Suma de los elementos: " << suma << endl;
    cout << "Promedio de los elementos: " << promedio << endl;
}
void ejercicio03()
{
    cout << "Ejercicio 03" << endl;
    cout << "Se tiene la siguiente declaracion e inicializacion para el arreglo b: " << endl;
    cout << "unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}}; " << endl;
    cout << "La figura 1, que se presenta a continuacion, ilustra la representacion del arreglo b en memoria. Completa la " << endl;
    cout << "numeracion de las direcciones de memoria, en notacion hexadecimal, para cada elemento del arreglo b. " << endl;
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

    // Evaluacion de las expresiones

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

    // Expresion *b++ es incorrecta y se ha removido
    // Los punteros a matrices no se pueden incrementar asi directamente

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
    Serial.begin(9600); // Inicializamos la comunicacion serial

    // Declaracion e inicializacion del arreglo
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

    // Evaluacion de las expresiones

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
    // El loop se ejecuta continuamente, pero no necesitamos nada aqui
}
    */
}
void ejercicio04()
{
    cout << "Ejercicio 04" << endl;
    cout << "Realiza un circuito en Tinkercad donde la intensidad de iluminacion de un LED se pueda variar con un potenciometro. Debes agregar en Tinkercad una Breadboard Small, un Potenciometer, un Resistor de 220Ω, un LED, y un Arduino. Conecta todos los elementos del circuito de una manera apropiada y programa el Arduino para la tarea pedida." << endl;

    /*
        Codigo en el simulador Tinkercad
        https://www.tinkercad.com/things/eZKblQIyBQS/editel?returnTo=%2Fdashboard
    */
    /*
        ******** Codigo ********
        const int potPin = A0; // Pin analogico donde esta conectado el potenciometro
        const int ledPin = 9;  // Pin PWM donde esta conectado el LED

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
    cout << "Realiza un circuito en Tinkercad para escribir mensajes en un Liquid-Crystal Display (LCD) con la ayuda de Arduino. Cambia de Basic a All en la opcion components de Tinkercad. Debe agregar un LCD 16 × 2, y un Arduino. Conecta todos los elementos del circuito de una manera apropiada y programa el Arduino para la tarea pedida." << endl;

    /*
        Codigo en el simulador Tinkercad
        https://www.tinkercad.com/things/eZKblQIyBQS/editel?returnTo=%2Fdashboard
    */
    /*
        ******** Codigo ********
        #include <LiquidCrystal.h>
        LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Configuracion de pines
        void setup() {
            lcd.begin(16, 2); // Inicializa el LCD con 16 columnas y 2 filas
            lcd.print("Hola, Mundo!"); // Imprime un mensaje en la primera fila
            lcd.setCursor(0, 1); // Mueve el cursor a la segunda fila
            lcd.print("LCD con Arduino"); // Imprime otro mensaje en la segunda fila
        }
        void loop() {
            // No se necesita codigo en el loop para este ejemplo
        }
    */
}
void problema01()
{
    cout << "Problema 01" << endl;
    cout << "Se necesita un programa que permita determinar la minima combinacion de billetes y monedas para una cantidad de dinero determinada. Los billetes en circulacion son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50. Haz un programa que entregue el numero de billetes y monedas de cada denominacion para completar la cantidad deseada. Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema debera decir lo que resta para lograrla. Usa arreglos y ciclos para realizar el programa. Universidad de Antioquia - Facultad de Ingenieria - Ude@ Educacion Virtual Universidad de Antioquia - Facultad de Ingenieria - Ude@ Educacion Virtual disponibles no se puede lograr la cantidad deseada, el sistema debera decir lo que resta para lograrla. Usa arreglos y ciclos para realizar el programa. " << endl;

    // Programa para determinar la minima combinacion de billetes y monedas

    long long amount;

    // Leer el monto de entrada
    if (!(cin >> amount))
    {
    }

    // Denominaciones disponibles
    const int denominations[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    const int numDenom = sizeof(denominations) / sizeof(denominations[0]);

    // Calcular y mostrar la cantidad de billetes o monedas por denominacion
    for (int i = 0; i < numDenom; ++i)
    {
        int count = amount / denominations[i];
        cout << denominations[i] << ": " << count << "\n";
        amount %= denominations[i];
    }

    // Mostrar el faltante, si lo hay
    cout << "Faltante: " << amount << "\n";
    cout << "Realiza una version en Arduino de este programa (en un Arduino fisico o Tinkercad), la cantidad de dinero debe ser ingresada con la ayuda del serial. Usa el monitor serial de Arduino o Tinkercad para ingresar los valores necesarios e imprimir. " << endl;

    // Codigo para Arduino
    /*
    void setup() {
        Serial.begin(9600);
    }

    void loop() {
        if (Serial.available() > 0) {
            long long amount = Serial.parseInt();
            // Logica del programa aqui (similar a la del programa en C++)
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
    cout << "Elabora un programa que genere un arreglo de 200 letras mayusculas aleatorias, imprime este arreglo y luego imprime cuantas veces se repita cada letra en el mismo." << endl;

    const int N = 200;
    const int ALPHABET_SIZE = 26;

    // Arreglo para almacenar letras
    char letters[N];

    // Arreglo de conteo
    int counts[ALPHABET_SIZE] = {0};

    // Generar letras "pseudoaleatorias" (simuladas mediante formula)
    for (int i = 0; i < N; ++i)
    {
        char letter = 'A' + (i * 17 + 3) % ALPHABET_SIZE; // simple formula para variar letras
        letters[i] = letter;
        counts[letter - 'A']++;
    }

    // Imprimir las letras generadas
    for (int i = 0; i < N; ++i)
    {
        cout << letters[i];
        if ((i + 1) % 50 == 0)
            cout << "\n"; // Salto de linea cada 50 letras
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
    cout << "Haz una funcion que compare 2 cadenas de caracteres y retorne un valor logico verdadero si son iguales, y falso en caso contrario, no olvides tambien tener en cuenta la longitud de las cadenas. Escribe un programa de prueba. " << endl;

    cin.ignore();

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
    cout << "Haz una funcion que reciba una cadena de caracteres numericos, la convierta a un numero entero y retorne dicho numero. Escribe un programa de prueba. " << endl;

    string s;
    cin >> s;

    int signo = 1;
    int i = 0;
    if (s.size() > 0 && s[0] == '-')
    {
        signo = -1;
        i = 1;
    }

    long long valor = 0;
    for (; i < (int)s.size(); i++)
    {
        char c = s[i];
        if (c >= '0' && c <= '9')
        {
            valor = valor * 10 + (c - '0');
        }
        else
        {
            break;
        }
    }
    int numero = (int)(signo * valor);
    cout << "Numero: " << numero << endl;
}

void problema05()
{
    cout << "Problema 05" << endl;
    cout << "Haz una funcion que reciba un numero entero (int) y lo convierta a cadena de caracteres. Usa parametros por referencia para retornar la cadena. Escribe un programa de prueba.  " << endl;

    int n;
    cin >> n;

    string s;
    int x = n;
    if (x == 0)
    {
        s = "0";
    }
    else
    {
        bool neg = false;
        if (x < 0)
        {
            neg = true;
            x = -x;
        }
        char temp[20];
        int k = 0;
        while (x > 0)
        {
            int d = x % 10;
            temp[k++] = char('0' + d);
            x /= 10;
        }
        if (neg)
            temp[k++] = '-';
        for (int j = k - 1; j >= 0; j--)
            s.push_back(temp[j]);
    }

    cout << "Cadena: " << s << endl;
}
void problema06()
{
    cout << "Problema 06" << endl;
    cout << "Escribe un programa que reciba una cadena de caracteres y cambie las letras inusculas por mayusculas, los demas caracteres no deben ser alterados." << endl;

    cin.ignore();
    string s;
    getline(cin, s);
    string original = s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        char c = s[i];
        if (c >= 'a' && c <= 'z')
            s[i] = char(c - 'a' + 'A');
    }

    cout << "Original: " << original << endl;
    cout << "En mayuscula: " << s << endl;
}
void problema07()
{
    cout << "Problema 07" << endl;
    cout << "Escribe un programa que reciba una cadena de caracteres y elimina los caracteres repetidos." << endl;

    cin.ignore();
    string s;
    getline(cin, s);
    string original = s;

    string sinRep;
    for (int i = 0; i < (int)s.size(); i++)
    {
        bool visto = false;
        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                visto = true;
                break;
            }
        }
        if (!visto)
            sinRep.push_back(s[i]);
    }

    cout << "Original: " << original << endl;
    cout << "Sin repetidos: " << sinRep << endl;
}
void problema08()
{
    cout << "Problema 08" << endl;
    cout << "Escribe un programa que reciba una cadena de caracteres y separe los numeros del resto de caracteres, generando una cadena que no tiene numeros y otra con los numeros que habia en la cadena original." << endl;

    cin.ignore();
    string s;
    getline(cin, s);

    string texto, numero;
    for (int i = 0; i < (int)s.size(); i++)
    {
        char c = s[i];
        if (c >= '0' && c <= '9')
            numero.push_back(c);
        else
            texto.push_back(c);
    }

    cout << "Original: " << s << endl;
    cout << "Texto: " << texto << endl;
    cout << "Numero: " << numero << endl;
}
void problema09()
{
    cout << "Problema 09" << endl;
    cout << "Escribe un programa que reciba un numero n y lea una cadena de caracteres numericos, el programa debe separar la cadena de caracteres en numeros de n cifras, sumarlos e imprimir el resultado. En caso de no poderse dividir exactamente en numeros de n cifras se colocan ceros a la izquierda del primer numero." << endl;

    int n;
    string s;
    cin >> n;
    cin >> s;

    string original = s;
    int r = (int)s.size() % n;
    if (r != 0)
    {
        int faltan = n - r;
        string ceros = "";
        for (int i = 0; i < faltan; i++)
            ceros.push_back('0');
        s = ceros + s;
    }

    long long suma = 0;
    for (int i = 0; i < (int)s.size(); i += n)
    {
        long long val = 0;
        for (int j = 0; j < n; j++)
        {
            val = val * 10 + (s[i + j] - '0');
        }
        suma += val;
    }

    cout << "Original: " << original << endl;
    cout << "Suma: " << suma << endl;
}
void problema10()
{
    cout << "Problema 10" << endl;
    cout << "Escribe un programa que permita convertir un numero en el sistema romano al sistema arabigo usado actualmente. A continuacion, se encuentran los caracteres usados en el sistema romano y su equivalente arabigo." << endl;

    string s;
    cin >> s;

    auto valor = [](char c) -> int
    {
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    };

    int total = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        int v = valor(s[i]);
        int sig = (i + 1 < (int)s.size()) ? valor(s[i + 1]) : 0;
        if (sig > v)
            total -= v;
        else
            total += v;
    }

    cout << "El numero ingresado fue: " << s << endl;
    cout << "Que corresponde a: " << total << endl;
}
void problema11()
{
    cout << "Problema 11" << endl;
    cout << "Manejo de reservas en una sala de cine (15 filas x 20 asientos)." << endl;

    const int FILAS = 15;
    const int ASIENTOS = 20;
    char sala[FILAS][ASIENTOS];
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < ASIENTOS; j++)
            sala[i][j] = '-';

    int opcion = 0;
    while (true)
    {
        cout << "1. Mostrar sala" << endl;
        cout << "2. Reservar" << endl;
        cout << "3. Cancelar" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;

        if (opcion == 1)
        {
            for (int i = 0; i < FILAS; i++)
            {
                for (int j = 0; j < ASIENTOS; j++)
                {
                    cout << sala[i][j] << ' ';
                }
                cout << endl;
            }
        }
        else if (opcion == 2 || opcion == 3)
        {
            char filaLetra;
            int asientoNum;
            cout << "Fila (A-O): ";
            cin >> filaLetra;
            cout << "Asiento (1-20): ";
            cin >> asientoNum;

            int f = (filaLetra >= 'A' && filaLetra <= 'O') ? (filaLetra - 'A') : (filaLetra >= 'a' && filaLetra <= 'o') ? (filaLetra - 'a')
                                                                                                                        : -1;
            int a = asientoNum - 1;

            if (f >= 0 && f < FILAS && a >= 0 && a < ASIENTOS)
            {
                if (opcion == 2)
                {
                    if (sala[f][a] == '-')
                        sala[f][a] = '+';
                    else
                        cout << "Ya estaba reservado." << endl;
                }
                else
                {
                    if (sala[f][a] == '+')
                        sala[f][a] = '-';
                    else
                        cout << "Ya estaba disponible." << endl;
                }
            }
            else
            {
                cout << "Entrada invalida." << endl;
            }
        }
        else if (opcion == 4)
        {
            break;
        }
        else
        {
            cout << "Opcion invalida." << endl;
        }
    }
}
void problema12()
{
    cout << "Problema 12" << endl;
    cout << "Verifica si una matriz es un cuadrado magico." << endl;

    int n;
    cin >> n;
    if (n <= 0 || n > 20)
        return;

    int a[20][20];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << (j + 1 == n ? '\n' : ' ');
    }

    int sumaRef = 0;
    for (int j = 0; j < n; j++)
        sumaRef += a[0][j];

    bool ok = true;

    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < n; j++)
            s += a[i][j];
        if (s != sumaRef)
            ok = false;
    }

    for (int j = 0; j < n; j++)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
            s += a[i][j];
        if (s != sumaRef)
            ok = false;
    }

    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }
    if (d1 != sumaRef || d2 != sumaRef)
        ok = false;

    if (ok)
        cout << "Es cuadrado magico." << endl;
    else
        cout << "No es cuadrado magico." << endl;
}
void problema13()
{
    cout << "Problema 13" << endl;
    cout << "Conteo de estrellas en matriz (ignorando bordes)." << endl;

    const int R = 6;
    const int C = 8;
    int m[R][C] = {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8, 0}};

    int estrellas = 0;
    for (int i = 1; i < R - 1; i++)
    {
        for (int j = 1; j < C - 1; j++)
        {
            int suma = m[i][j] + m[i][j - 1] + m[i][j + 1] + m[i - 1][j] + m[i + 1][j];
            if (suma > 30)
                estrellas++;
        }
    }

    cout << "Numero de estrellas: " << estrellas << endl;
}
void problema14()
{
    cout << "Problema 14" << endl;
    cout << "Matriz 5x5 rotaciones." << endl;

    const int N = 5;
    int a[N][N];
    int v = 1;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = v++;

    auto imprimir = [&](int m[N][N])
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << m[i][j] << (j + 1 == N ? '\n' : ' ');
            }
        }
    };

    cout << "Original:" << endl;
    imprimir(a);

    int r90[N][N], r180[N][N], r270[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            r90[i][j] = a[N - 1 - j][i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            r180[i][j] = r90[N - 1 - j][i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            r270[i][j] = r180[N - 1 - j][i];

    cout << "Rotada 90:" << endl;
    imprimir(r90);
    cout << "Rotada 180:" << endl;
    imprimir(r180);
    cout << "Rotada 270:" << endl;
    imprimir(r270);
}
void problema15()
{
    cout << "Problema 15" << endl;
    cout << "Interseccion de rectangulos." << endl;

    int A[4], B[4];
    for (int i = 0; i < 4; i++)
        cin >> A[i];
    for (int i = 0; i < 4; i++)
        cin >> B[i];

    int ax1 = A[0], ay1 = A[1], aw = A[2], ah = A[3];
    int bx1 = B[0], by1 = B[1], bw = B[2], bh = B[3];

    int ax2 = ax1 + aw, ay2 = ay1 + ah;
    int bx2 = bx1 + bw, by2 = by1 + bh;

    int cx1 = (ax1 > bx1) ? ax1 : bx1;
    int cy1 = (ay1 > by1) ? ay1 : by1;
    int cx2 = (ax2 < bx2) ? ax2 : bx2;
    int cy2 = (ay2 < by2) ? ay2 : by2;

    int cw = cx2 - cx1;
    int ch = cy2 - cy1;
    if (cw < 0)
        cw = 0;
    if (ch < 0)
        ch = 0;

    int C[4] = {cx1, cy1, cw, ch};
    cout << C[0] << " " << C[1] << " " << C[2] << " " << C[3] << endl;
}
void problema16()
{
    cout << "Problema 16" << endl;
    cout << "Escribe un programa que reciba un numero n y calcula el numero de caminos posibles en una cuadricula de nxn." << endl;

    int n;
    cin >> n;

    if (n < 0 || n > 20)
        return;

    long long dp[21][21];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
        dp[0][i] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

    cout << "Para una malla de " << n << "x" << n << " puntos hay " << dp[n][n] << " caminos." << endl;
}
void problema17()
{
    cout << "Problema 17" << endl;
    cout << "Suma de numeros amigables menores a N." << endl;

    int N;
    cin >> N;

    auto sumaDiv = [](int x) -> int
    {
        int s = 1;
        if (x == 1)
            return 0;
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                s += i;
        }
        return s;
    };

    long long suma = 0;
    for (int a = 2; a < N; a++)
    {
        int b = sumaDiv(a);
        if (b != a && b > 0)
        {
            int sb = sumaDiv(b);
            if (sb == a)
            {
                suma += a;
            }
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;
}
void problema18()
{
    cout << "Problema 18" << endl;
    cout << "Enesima permutacion lexicografica de 0..9." << endl;

    long long n;
    cin >> n;

    long long fact[11];
    fact[0] = 1;
    for (int i = 1; i <= 10; i++)
        fact[i] = fact[i - 1] * i;

    if (n < 1 || n > fact[10])
    {
        cout << "Fuera de rango" << endl;
        return;
    }

    char dig[10];
    for (int i = 0; i < 10; i++)
        dig[i] = char('0' + i);
    int len = 10;

    string res = "";
    long long k = n - 1;
    for (int pos = 10; pos >= 1; pos--)
    {
        long long f = fact[pos - 1];
        int idx = (int)(k / f);
        k = k % f;

        res.push_back(dig[idx]);

        for (int j = idx; j < len - 1; j++)
            dig[j] = dig[j + 1];
        len--;
    }

    cout << "La permutacion numero " << n << " es: " << res << endl;
}

int main()
{
    cout << " Ejercicios Basicos de C++  " << endl;
    cout << "******************************" << endl;

    int opciones = 0;

    while (opciones != 24)
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
            break;
        case 24:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
        cout << "****************" << endl;
        cout << endl;
    }
}
