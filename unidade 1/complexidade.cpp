1 - o(1)
2 - o(1)
3 - o(1)
4 - o(1)
5 - o(1)
6 - o(1)
7 - o(1)
8 - o(1)
9 - o(n)
10 - o(n)
11 - o(n²)
12 - o(n)
13 - o(n)
14 - o(n)
15 - o(log(n))
16 - o(n²)

---------------------------------------------------------------------------------------------------------------------------------------------------


Questão 1
int x = 0; //1
x = x + 1; // 1
printf("%d", resultado);// 1
    

Questão 2
int numero;// 1
scanf("%d", &numero); // 1
if(numero % 2 == 0)// 1
numero = numero + 1; // 1
else
numero = numero - 1;// 1
printf("%d", numero);// 1


Questão 3
int max = 0; // 1
int i = 0; // 1
while(i < max) // 1
i++; // 1


Questao 4
int max = 10; // 1
int i = 0; // 1
while(i < max) // 1
i++

    
Questao 5
int max = 10; // 1
int i = 0; // 1
while(i < max) // 1
printf("%d", i++); // 1


Questão 6
int max = 0; //1
for(int i = 0; i < max; i++) //1 + 1 + 0
printf("%d", i)// nao atribui pq é falso 0

    
Questao 7
int max = 10;// 1
for(int i = 0; i < max; i++)//1 + 10 + (1 falha) + 10
printf("%d", i);// 10


Questão 8
int max = 100;// 1
int a = 0;// 1
for(int i = 0; i < max; i++){// 1 + 100 + 1(falha) + 100
    a = a + i;// 100 
    printf("%d", a); //100
}


Questão 9
int n;// 1
scanf("%d", &n);// 1 + n + 1 +n
for(int i = 0; i < n; i++){ // n
printf("%d", i); //n


Questao 10
int a = 0;// 1
for(int i = 1; i < n; i++){// 1 + n -1 + 1 + n - 1
a++;// n - 1
printf("%d", i);//n - 1
}
printf("%d", a);//n - 1


Questao 11
for(int i = 0; i < n; i++)// 1 + n + 1 + n 
for(int j = 0; j < n; j++)// 1 + n + 1 + n
printf("%d", j);// n


Questao 12
int n = 10;// 1
int num[n] = {1,2,3,4,5,6,7,8,9,10};// 1
for(int i = 0; i < n; i++)// 1 + n + 1 + n
if(num[i] % 2 == 0)// n
printf("%d", num[i]);// n / 2


Questao 13
int n = 5;// 1
int num[n] = {2,4,6,8,10};// 1
for(int i = 0; i < n; i++)// 1 + n + 1 + n
if(num[i] % 2 == 0)// n
printf("%d", num[i]);// n


Questao 14
int n = 5;// 1
int num[n] = {1,3,5,7,9};// 1
for(int i = 0; i < n; i++)// 1 + n + 1 + n
if(num[i] % 2 == 0)// n 
printf("%d", num[i]);// 0


Questao 15 // busca binaria é o(log(n))
int busca_binaria(int c, int n, int v[]){
int esq=0, dir=n-1, meio; 
while(esq < dir){ 
meio = (esq + dir) / 2;
if(c > v[meio])
esq = meio + 1;
else
dir = meio;
}
if(v[esq] == c)
return esq;
else
return -1;
}


Questao 16
void ordenacao_bolha(int n, int v[]){// n
int k, j, aux; // 1
for(k = 1; k < n; k++) // 1 + (n - 1 + 1) + n - 1
for(j = 0; j < n - 1; j++) // 1 + (n - 1 + 1) + n - 1
if(v[j] > v[j+1]){ // n- 1
aux = v[j];// n - 1
v[j] = v[j+1];// n - 1
v[j+1] = aux;// n - 1
}}


