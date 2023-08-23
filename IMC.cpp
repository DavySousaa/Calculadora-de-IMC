#include <iostream>

int main(int argc, char const *argv[])
{
    float peso, altura, imc;
    
    printf ("Qual o seu peso(kg)? \n" );
    scanf ("%f", &peso);

    printf ("Qual a sua altura(m) \n");
    scanf ("%f", &altura);

    altura = altura * altura;

    imc = peso / altura;

    if ( imc <= 18.5)
    {
        printf("Abaixo do peso.");
    }
    else
    if ( imc >=18.6 && imc <= 24.9)
    {
        printf("Peso ideal");
    }
     else
    if ( imc >=25.0 && imc <= 29.9)
    {
        printf("Levemente acima do peso");
    }
     else
    if ( imc >=30.0 && imc <= 34.9)
    {
        printf("Obesidade grau 1");
    }
     else
    if ( imc >=35.0 && imc <= 39.9)
    {
        printf("Obesidade grau 2(severa)");
    }
     else
    if ( imc >=40.0)
    {
        printf("Obesidade grau 3(mórbida)");
    }

    return 0;
}
