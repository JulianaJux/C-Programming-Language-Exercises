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
    upper = 300; /* maior limite*/
    step = 20; /* de quanto a quanto, irá mostrar a tabela*/

    /*ínicio do looping com a fórmula de conversão de Fahrenheit para Celsius: 32 °F − 32) × 5/9 = 0 °C*/
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
