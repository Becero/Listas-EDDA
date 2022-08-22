#include<stdio.h>
#include<math.h>
void Ex1(){
    /*1. Faça um programa em C que seja capaz de calcular o salário de um programador. Considere como
        entrada o valor pago por hora trabalhada, o número de horas por semana e o percentual de
        desconto a ser retido para INSS. Apresente o salário líquido mensal do programador considerando
        que em média, tem-se 4,5 semanas a cada mês. */
    float vh,pd,sb,sl,td;
    int ht;

    printf("Insira o valor por hora trabalhada:\n");
    scanf("%f",&vh);
    printf("Insira quantas horas foram trabalhadas na semana:\n");
    scanf("%d",&ht);
    printf("Insira o percentual de desconto do inss:\n");
    scanf("%f",&pd);

    sb = (vh*ht)*4.5;
    td= (pd/100)*sb;
    sl = sb - td;
    /*
     %5.2f
     O primeiro número se refere a quantidade total de números
     e o segundo é referente à precisão, casas depois da vírgula
    */
    printf("Salario total ..........: %5.2f\n", sb);
    printf("Desconto ...............: %2.2f\n", td);
    printf("Salario Liquido ........: %5.2f\n", sl);

    return 0;
}
void Ex2(){
    /* 2.Faça um programa em C que receba 5 números ponto flutuante e 1 peso associado a cada um dos
        números previamente informados. O programa deverá apresentar como saída a média aritmética
        dos respectivos números e pesos. */

    float md1,md2,md3,md4,md5,md;
    int p1,p2,p3,p4,p5,sp;

    printf("Insira o valor para a primeira nota:\n");
    scanf("%f",&md1);
    printf("Insira o peso da nota:\n");
    scanf("%d",&p1);

    printf("Insira o valor para a segunda nota:\n");
    scanf("%f",&md2);
    printf("Insira o peso da nota:\n");
    scanf("%d",&p2);

    printf("Insira o valor para a terceira nota:\n");
    scanf("%f",&md3);
    printf("Insira o peso da nota:\n");
    scanf("%d",&p3);

    printf("Insira o valor para a quarta nota:\n");
    scanf("%f",&md4);
    printf("Insira o peso da nota:\n");
    scanf("%d",&p4);

    printf("Insira o valor para a quinta nota:\n");
    scanf("%f",&md5);
    printf("Insira o peso da nota:\n");
    scanf("%d",&p5);

    sp = p1+p2+p3+p4+p5;
    md = ((md1*p1) + (md2*p2) + (md3*p3)+ (md4*p4) + (md5*p5))/sp;

    printf("A media geral foi %2.2f, a media dos pesos e %d",md,sp);

   return 0;
}
void Ex3(){
 /*3.Faça um programa em C que ao ler um número inteiro identifique se ele negativo, zero ou positivo.
    Se negativo, apresente o número ao quadrado, se positivo apresente a raiz quadrado dele e, caso
    seja zero, apresente uma mensagem ao usuário dizendo que o número digitado é zero. */

 int n,x;

 printf("Insira um valor:");
 scanf("%d",&n);
 if(n<0){
   x= pow(n,2);
   //ou x = n*n;
   printf("O numero ao quadrado e: %d",x);
  }
 else if (n>0){
   x = sqrt(n);
   printf("O valor da raiz quadrada e :%d",x);
  }
 else if (n==0)
   printf("o valor digitado e igual a 0");
return 0;
}
void Ex4(){

    /*4.Faça um programa em C que seja capaz de calcular e apresentar a distância total percorrida por um
        veículo que rodou por X minutos a uma velocidade média igual a V km/h. X e V devem ser
        informados pelo usuário (considere-os como inteiros).*/
    int x,v,total;

    //v = Km/h sendo assim 1km/h = 1000 mt em 60 minutos
    //y = v * 1000;
    //r = x * y
    //60 minutos = 1h.
    //converter minutos em horas e mais facil, divide por 60.

    printf ("Entre quantos minutos a viagem teve:\n");
    scanf("%d",&x);
    printf ("Indique qual foi a velocidade media em km/h:\n");
    scanf("%d",&v);

    total= (x/60)*v;
    printf("A distanta total percorrida foi de :%d km",total);
    return 0;
}
void Ex5(){

    /* 5. Faça um programa em C que, dado um número inteiro informado pelo usuário, diga se ele é divisível
    por 4, por 5 ou por ambos os números. */

    int num;

    //%(divisao por inteiro)
    printf("Insira um numero qualquer:\n");
    scanf("%d",&num);
     //teste com 20,16,25 e 7
    if(num % 4 == 0 && num % 5 == 0)//a verificaçao de todos tem que ser no começo, pq se nao ele nunca vai apresentar
        printf("Divisivel por 4 ou 5.\n");
    else if(num % 4 == 0)
        printf("Divisivel por 4");
    else if(num % 5 ==0)
        printf("Divisivel por 5.\n");
    /*else if(num % 4 == 0 && num % 5 == 0) coloquei no começo pq nao estava aparecendo
        printf("Divisivel por 4 ou 5.\n");*/
    else
        printf("Nao e Divisivel por 4 ou 5");

    return 0;
}
void Ex6(){
 /* 6. Faça um programa capaz de determinar e apresentar as raízes de uma equação de 2º grau. O usuário
    deverá fornecer os valores referentes à A, B e C (coeficientes numéricos).

         A equação de 2º grau e representada por ax²+bx+c=0,
         em que os coeficientes a, b e c são números reais, com a ≠ 0.

         https://www.youtube.com/watch?v=Xv2QrQK9I7E&ab_channel=DicasdematSandroCuri%C3%B3 (material para entender) */

    int a,b,c; //a,b,c sao reais ou inteiros?
    float delta, x1,x2;

    printf("Entre com o valor de A:\n");
    scanf("%d",&a);
    printf("Entre com o valor de B:\n");
    scanf("%d",&b);
    printf("Entre com o valor de C:\n");
    scanf("%d",&c);

    delta = b*b - (4*a*c);

    if (delta >= 0) {
        x1 = (-b + sqrt(delta))/(2.*a);
        x2 = (-b - sqrt(delta))/(2.*a);
        printf("As raizes reais sao: X1= %2.3f e X2= %2.3f\n", x1, x2);
    }
    else {
        printf("Nao existem raizes reais");
    }
 return 0 ;
}

void Ex7(){
    /*7. [DESAFIO] Faça um programa em C que dado um caracter informado pelo usuário, imprime seu
    código decimal e hexadecimal correspondentes (Ver tabela ASCII).

    https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm (TABELA ASCII)

        %d  : inteiro (decimal)
        %e  : notação científica
        %f  : float (ponto flutuante)
        %o  : octal
        %u  : decimal sem sinal
        %x  : hexadecimal
        %lf : double
        %c  : caractere simples
        %s  : string (cadeia de caracteres)
        %p  : ponteiro
    */
    char n;
    printf("Insira um Caracter:\n");
    scanf("%c",&n);
    printf("\nO Caracter digitado e: %c\nCodigo ASCII(decimal): %d\nHexadecimal: %x\n", n, n, n);
    return 0;
}

int main()
{
    //Principal Fonte https://saulo.arisa.com.br/wiki/index.php/Linguagem_C:_Entrada_e_Sa%C3%ADda_de_Dados

    //Ex1();
    //Ex2();
    //Ex3();
    //Ex4();
    //Ex5();
    //Ex6();
    Ex7();
}
