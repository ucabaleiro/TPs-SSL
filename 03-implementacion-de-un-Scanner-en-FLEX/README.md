Todas las definiciones y expresiones regulares usadas en este TP son derivadas de la [ultima revision de C99 (ISO/IEC 9899:1999)](http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1256.pdf).

# Como funciona el ejecutable
A partir de un archivo de entrada dado, El programa imprime por pantalla el informe solicitado acorde a la consigna del TP, y además lo guarda en **`analisis_lexico.txt`**.

Adicionalmente genera un archivo **`yyout.txt`** con todos los simbolos que el analizador lexico no matcheo. Normalmente **`yyout.txt`** queda vacio, pero lo preservamos en caso de errores.

El archivo de entrada puede ser pasado como argumento al ejecutar el programa desde una terminal. De no ser asi, el programa busca el archivo **`archivo.c`** en su mismo directorio.

# Modulos y bibliotecas usadas
En cuanto a **contenido externo**, optamos por hacer uso de dos modulos de las commons de sistemas operativos, los cuales redujimos a una biblioteca estatica.
* **`lists`**: Provee la "infraestructura" para todo lo relacionado a listas enlazadas.
* **`string`**: Cuenta con algunas funciones de utilidad para trabajar con strings.

Por otro lado, desarrollamos los siguientes modulos para delegar algunas responsabilidades del TP.
* **`lexeme_lists`**: Nuestra implementacion de una lista enlazada de lexemas, y las funciones para gestionarla.
* **`writers`**: Provee los metodos para imprimir una lista de lexemas a un archivo.

# Que hay en el TP?
Un vistazo al directorio del TP.
```
.
├── so-commons-library
|   ├── include
|   └── lib
└── TP3
    ├── include
    ├── lex
    ├── obj
    ├── src
    ├── exec.sh
    ├── makefile
    └── TP3.exe
```
* **`/so-commons-library`**: Directorio que contiene la biblioteca estática y headers de las commons.
* **`/TP3`**
    * **`/include`**: Directorio con los headers `*.h` de los modulos desarrollados.
    * **`/lex`**: Directorio con el archivo de flex `TP3.l` desarrollado.
    * **`/obj`**: Directorio con los archivos objeto `*.o` usados en la compilacion del ejecutable final.
    * **`/src`**: Directorio con todo el codigo fuente `*.c` de los modulos desarrollados.
    * **`makefile`** y **`exec.sh`**: Archivos para la compilacion y ejecucion del TP.
    * **`TP3.exe`**: El ejecutable final del TP.
