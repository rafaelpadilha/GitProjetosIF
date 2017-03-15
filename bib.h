
/*
** Cabecalhos das funcoes implementadas no modulo bibcalculadora.c ,
** que servem para realizar diversos calculos matematicos
*/

/*
** Retorna o valor da soma de dois numeros recebidos
*/
float soma(float x, float y);
/*
** Retorna o valor da diferenca de dois numeros recebidos
*/
float subtracao(float x, float y);
/*
** Retorna o produto de dois numeros
*/
float produto(float x, float y);
/*
** Retorna o resultado da divisao do numero x pelo y,
** exceto quando y for 0
*/
float divisao(float x, float y);
/*
** Retorna o quadrado de um numero
*/
float quadrado(float x);
/*
** Retorna o cubo de um numero
*/
float cubo(float x);
/*
** Resto da divisao do numero x pelo y
*/
int restoDivisao(int x, int y);
/*
** Retorna 1 se o numero recebido for par, e 0 caso contrario
*/
int par(int x);
/*
** Retorna 1 caso x seja multiplo de y e 0 caso contrario
*/
int multiplo(int x, int y);
/*
** Retorna 1 caso x seja um numero primo e 0 caso contrario
*/
int primo(int x);
/*
** Retorna um vetor com todos os divisores do numero x
*/
int* divisores(int x);
