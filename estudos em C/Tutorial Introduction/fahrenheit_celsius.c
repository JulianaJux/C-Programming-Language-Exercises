#include    <stdio.h>

/* descreve uma tabela Fahrenheit-Celsius
para fahr = 0, 20,...,300, aqui a diferença é o uso do float e um output mais detalhado*/
int main ()
{
    float fahr;
    float celsius;
    int lower;
    int upper;
    int step;

    lower = 0; /*menor limite da tabela de temperatura*/
    upper = 150; /* maior limite*/
    step = 10; /* de quanto a quanto, irá mostrar a tabela*/

    /*ínicio do looping com a fórmula de conversão de Fahrenheit para Celsius: 32 °F − 32) × 5/9 = 0 °C*/
    celsius = lower;
    printf("tabela de conversão celsius em fahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%6.1f\t%3f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
