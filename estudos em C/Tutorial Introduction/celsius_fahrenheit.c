#include    <stdio.h>

/* descreve uma tabela Fahrenheit-Celsius
para fahr = 0, 20,...,300*/
int main ()
{
    int fahr;
    int celsius;
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
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
