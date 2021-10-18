Todas las definiciones y expresiones regulares usadas en este TP son derivadas de la [ultima revision de C99 (ISO/IEC 9899:1999)](http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1256.pdf).

# Consideraciones Importantes
El trabajo práctico cuenta con una gramática de bison capaz de reconocer **`sintacticamente`** correctamente toda la gramática de C (hasta donde alcanzaron nuestras pruebas), a excepción de los siguientes casos:
* **`Typedefs`**: Por como funcionan bison y flex, y por como la BNF de C plantea el uso de typedefs, debiamos optar por una solucion rebuscada, o cortar por lo sano e ignorarlos. fuimos por la segunda.

El programa genera un reporte por pantalla con todas las declaraciones de variables y funciones, sentencias encontradas y errores lexicos y sintacticos.

Lo unico que nos faltó agregar fue el listado de tipos de parametros dentro de cada declaración de funcion, habiendo dejado como placeholder un **`"()"`**

# Como funciona el ejecutable
Para funcionar, el TP4 necesita un archivo de entrada, que debe ser pasado como argumento al ejecutar el programa desde una terminal.
Se lo puede probar con el archivo de prueba.

# Modulos y bibliotecas usadas
En cuanto a **contenido externo**, optamos por hacer uso de dos modulos de las commons de sistemas operativos, los cuales redujimos a una biblioteca estatica.
* **`lists`**: Provee la "infraestructura" para todo lo relacionado a listas enlazadas.
* **`string`**: Cuenta con algunas funciones de utilidad para trabajar con strings.

# Que hay en el TP?
Un vistazo al directorio del TP.
```
.
├── archivoDePrueba.c
├── TP4.exe
└── TP4
    ├── so-commons-library
    |   ├── include
    |   └── lib
    ├── include
    ├── lex
    ├── obj
    ├── src
    ├── exec.sh
    └── makefile
```
* **`archivoDePrueba.c`**: Codigo C para probar sobre el ejecutable del TP.
* **`TP4.exe`**: El ejecutable final del TP.
* **`/TP3`**
    * **`/so-commons-library`**: Directorio que contiene la biblioteca estática y headers de las commons.
    * **`/include`**: Directorio con el header `*.h` generado por bison.
    * **`/lex`**: Directorio con el archivo de flex `lexer.l` desarrollado.
    * **`/bison`**: Directorio con el archivo de bison `parser.y` desarrollado.
    * **`/obj`**: Directorio con los archivos objeto `*.o` usados en la compilacion del ejecutable final.
    * **`/src`**: Directorio con todo el codigo fuente `*.c` generado por bison y flex.
    * **`makefile`**: Para la compilacion del TP.
