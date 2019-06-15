#include<stdio.h>
main()
{
double amount;
int intAmount, nota, coins, counter;
int note[] = {100, 50, 20, 10, 5, 2};
double coin[]={1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

scanf("%lf",&amount);

intAmount=amount;
amount=amount-intAmount;
printf("NOTAS:\n");

for(counter=0;counter < 6; counter++)
{
nota=intAmount/note[counter];
printf("%d nota(s) de R$ %d.00\n",nota, note[counter]);
intAmount=intAmount%note[counter];
}

printf("MOEDAS:\n");
nota=intAmount/coin[0];
printf("%d moeda(s) de R$ %.2lf\n",nota, coin[0]);

for(counter=1; counter < 6; counter++)
{
coins=amount/coin[counter];
printf("%d moeda(s) de R$ %.2lf\n",coins,coin[counter]);
amount=amount-(coins*coin[counter]);
}

return 0;
}
