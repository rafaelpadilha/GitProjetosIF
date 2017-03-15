/*
ABI 2016 
Aluno: Rafael Padilha
Matricula: 161057600055 
*/

float soma(float x, float y)
{
    return x+y;
}
float subtracao(float x, float y)
{
    return x-y;
}
float produto(float x, float y)
{
    return x*y;
}
float divisao(float x, float y)
{
    return x/y;
}
float quadrado(float x)
{
    return x*x;
}
float cubo(float x)
{
    return x*x*x;
}
int restoDivisao(int x, int y)
{
    return x%y;
}
int par(int x)
{
    int i=0;
    if(x%2==0)
        i=1;

    return (i==1)? 1:0;
}
int multiplo(int x, int y)
{
    return restoDivisao(x,y)==0 ? 1:0;
}
 int primo(int x)
{
        int i,div=0;
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
            div++;
    }
    return div==2? 1:0;
}
