#include <stdio.h>


/*  NOTAS:
        REVISAR caso de testing "3 4" (posibles problemas por omision de espacios).
*/




typedef struct casoDeTest{
    char expresion[60];
    int retornoEsperado;
} casoDeTest;


int main(void){

    const cantidadDeTests = 10;

    casoDeTest tests[cantidadDeTests] =         {{"(10+3)*55+4",                                1}
                                            ,   {"()((",                                        0}
                                            ,   {"(8*88*88*9)+7",                               1}
                                            ,   {"8",                                           1}
                                            ,   {")(4*4)",                                      0}
                                            ,   {"4/4/4/4/4-4+3-4",                             1}
                                            ,   {"/",                                           0}
                                            ,   {"(1 + 2 * (3 - (8 / 2)) - 1 ) + ((12))",       1}
                                            ,   {"3 4",                                         0}      // REVISAR: Si el programa omite los espacios primero esto es una expresion   
                                                                                                        // valida, pero en realidad C no la considera valida.
                                            ,   {"10+1+5/6",                                    1}};    



    

    for (int i = 0; i < cantidadDeTests; i++){
        testearSintacticamenteCorrecta(tests[i].expresion, tests[i].retornoEsperado);
    }
    
    return 0;
}




void testearSintacticamenteCorrecta(char expresion[], int retornoEsperado){
    if (sintacticamenteCorrecta(expresion) == retornoEsperado){
        if (retornoEsperado == 0){
            printf("\nCorrecto: %s no es sintacticamente correcta.", expresion);
        } 
        else{
            printf("\nCorrecto: %s es sintacticamente correcta.", expresion);
        }
    } 
    else{
        if (retornoEsperado == 0){
            printf("\n ---- FALLO: %s NO ES sintacticamente correcta.", expresion);
        }
        else{
            printf("\n ---- FALLO: %s ES sintacticamente correcta.", expresion);
        }
    }
}