int main(void) 
{
    double a, b, c, perimetro, trapezio;
    scanf ("%lf %lf %lf", &a, &b, &c);
    if ( a < (b+c) && b < (a+c) && c < (a+b) )
    {
        perimetro = a + b + c;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else
    {
        trapezio = (( (a+b) * c) /2);
        printf("Area = %.1f\n", trapezio);
    }
    return 0;
}
