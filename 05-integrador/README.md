Todas las expresiones regulares, definiciones de la gramática y restricciones semánticas usadas en este TP son derivadas de la [ultima revision de C99 (ISO/IEC 9899:1999)](http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1256.pdf).

# Trabajo práctico integrador - Sintaxis y semántica de los lenguajes
[-> consigna](https://docs.google.com/document/d/1S_5rrKMlY7Z3wVOe5flJpni-puS334VU8gewQyIrzfk/edit)

El programa genera, a partir de un codigo fuente, un reporte por pantalla, en orden de linea, de todos los errores lexicos, sintacticos y semanticos reconocidos. Luego imprime por pantalla dos listados, uno para las variables declaradas, y otro para las funciones. A grosso modo, cumple un rol similar a lo que hace un [Linter](https://en.wikipedia.org/wiki/Lint_(software)).

# Consideraciones Importantes - ¿Qué no hace?
El trabajo práctico cuenta con una gramática de bison capaz de reconocer **`sintacticamente`** de manera correcta toda la gramática de C (hasta donde alcanzaron nuestras pruebas), a excepción de:
* **`Typedefs`**: Por como funcionan bison y flex, y por como la BNF de C plantea el uso de typedefs, debiamos optar por una solucion rebuscada, o cortar por lo sano e ignorarlos. Fuimos por la segunda.

Por otro lado, a nivel **`semántico`** ciertos elementos del lenguaje fueron ignorados, pues consideramos estaban muy por fuera del alcance del TP. Es decir, sus reglas en la gramática existen para no modificar mucho la BNF original, pero no tienen accion semántica alguna, no aportan significado a las validaciones, a saber:
1. **Sobre Tipos de Datos en general:**
    1. **Especificadores de declaración:** Solamente se consideran los tipos de dato base char, int, float, double, y void. Cualquier otro especificador de declaración (cualificadores, especificadores de almacenamiento, etc.) eleva un error silencioso que es practicamente ignorado.
    2. **Structs, Unions, Enums y Typedefs:** Justamente por lo mencionado en el item anterior, no consideramos a estos tipos de dato, y por consecuencia todas las reglas en la gramática relacionadas a sus construcciones están semánticamente vacías.
    3. **Arrays:** Consideramos a los arrays, pero no controlamos de ningun modo su tamaño.
    4. **Funciones:** No consideramos los parámetros de las funciones declaradas o definidas con el [estilo K&R](https://jameshfisher.com/2016/11/27/c-k-and-r/). Tampoco consideramos la semantica de las funciones variadicas, se ignora el "...".
2. **Sobre las declaraciones:** No realizamos chequeos semanticos en las inicializaciones al declarar. Ya lo hacemos con las expresiones de asignación que cumplen prácticamente la misma función.
3. **Sobre las definiciones de funciones:** No realizamos controles de tipos entre el retorno de la funcion y el valor realmente retornado por el 'return'. 
4. **Sobre expresiones:**
    1. **lvalues:** Ya que las validaciones de expresiones se realizan puramente sobre "tipos de datos" no entienden la noción de lvalue. aquellas que sean sobre si algo es efectivamente un lvalue, o un lvalue modificable son ignoradas.
    2. **Operador &:** Ignoramos la validacion semantica del operador de dirección porque era necesario llevar registro de más información sobre la expresión. De haber implementado las validaciones de expresiones con un AST podríamos haberlo realizado.
    3. **Operadores . y ->:** Como no tratamos con tipos de dato struct o union, tampoco validamos semanticamente estos operadores de acceso.

# Como funciona el ejecutable
Para funcionar, el TPI necesita un archivo de entrada, que debe ser pasado como argumento al ejecutar el programa desde una terminal.
Se lo puede probar sin pasar ningun parametro con el [`archivo default de prueba`](https://github.com/utn-frba-ssl/21-002-01/blob/main/05-integrador/tests.c).

# Modulos y bibliotecas usadas
En cuanto a **contenido externo**, optamos por hacer uso de dos modulos de las commons de sistemas operativos, los cuales redujimos a una biblioteca estatica.
* **`lists`**: Provee la "infraestructura" para todo lo relacionado a listas enlazadas.
* **`string`**: Cuenta con algunas funciones de utilidad para trabajar con strings.

Por otro lado, desarrollamos los siguientes modulos para delegar algunas responsabilidades del TP.
* **`symtable`**: Nuestra implementacion de una tabla de simbolos y las representaciones de los tipos de datos para esos simbolos, junto con toda la funcionalidad necesaria: Creación, administración, controles de declaraciones, impresión por pantalla, etc. 
* **`operationCheck`**: Provee los metodos para realizar los controles semanticos sobre los tipos de las expresiones. 

# Que hay en el TP?
Un vistazo al directorio del TP.
```
.
├── tests.c
├── TPI.exe
└── TPI
    ├── so-commons-library
    |   ├── include
    |   └── lib
    ├── bison
    ├── include
    ├── lex
    ├── obj
    ├── src
    └── makefile
```
* [**`tests.c`**](https://github.com/utn-frba-ssl/21-002-01/blob/main/05-integrador/tests.c): Codigo C para probar sobre el ejecutable del TP.
* **`TPI.exe`**: El ejecutable final del TP.
* **`/TPI`**
    * **`/so-commons-library`**: Directorio que contiene la biblioteca estática y headers de las commons.
    * **`/include`**: Directorio con el header `*.h` generado por bison, y los encabezados de nuestros modulos.
    * **`/lex`**: Directorio con el archivo de flex [`lexer.l`](https://github.com/utn-frba-ssl/21-002-01/blob/main/05-integrador/TPI/lex/lexer.l) desarrollado.
    * **`/bison`**: Directorio con el archivo de bison [`parser.y`](https://github.com/utn-frba-ssl/21-002-01/blob/main/05-integrador/TPI/bison/parser.y) desarrollado.
    * **`/obj`**: Directorio con los archivos objeto `*.o` usados en la compilacion del ejecutable final.
    * **`/src`**: Directorio con todo el codigo fuente `*.c` generado por bison y flex, y de nuestros propios modulos.
    * [**`makefile`**](https://github.com/utn-frba-ssl/21-002-01/blob/main/05-integrador/TPI/makefile): Para la compilacion del TP.
