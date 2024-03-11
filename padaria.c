#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

/*O Sistema Bakery Helper foi desenvolvido para auxiliar os processos cont�beis da produ��o, 
venda e lucro do P�o Franc�s e da Broa de Fuba.*/
int main()
{
	/*Define a localidade para o padr�o, que � a p�gina de c�digo ANSI padr�o
	 do usu�rio obtida do sistema operacional.*/
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o e Inicializa��o das principais vari�veis.	
	double valorPaoFrances = 0.75;
	double valorBroaFuba = 4.50;
	double totalGeral, totalPaoFrances, totalBroaFuba, lucro;
	int qtdPaoFrancesVendidos = 0;
	int qtdBroaFubaVendidas = 0;
	
	//Bloco de interatividade com o usu�rio: (Apresenta��o e Leitura de dados).
	printf("\n*** BEM VINDO AO BAKERY HELPER ***\n\n");
	printf("Informe o n�mero de p�es vendidos hoje: ");
	scanf("%d", &qtdPaoFrancesVendidos);
	printf("Informe o n�mero de broas vendidas hoje: ");
	scanf("%d", &qtdBroaFubaVendidas);
	
	//Bloco respons�vel pelas opera��es matem�ticas.
	totalPaoFrances = qtdPaoFrancesVendidos * valorPaoFrances;
	totalBroaFuba = qtdBroaFubaVendidas * valorBroaFuba;
	totalGeral = totalPaoFrances + totalBroaFuba;
	lucro = (totalGeral * 0.12);
	
	/*Bloco de Sa�da, onde o sistema retorna para o usu�rio todo o detalhamento
	 de vendas dos produtos e lucro.*/
	printf("\n");
	printf("RELAT�RIO DE VENDAS:\n\n");
	printf("Quantidade de P�es Vendidos: %d unidade(s):\n", qtdPaoFrancesVendidos);
	printf("Valor unit�rio do P�o Franc�s: R$ %.2f.\n", valorPaoFrances);
	printf("Valor Arrecadado: R$: %.2lf\n", totalPaoFrances);
	printf("\n");
	
	printf("Quantidade de Broas Vendidas: %d unidade(s):\n", qtdBroaFubaVendidas);
	printf("Valor unit�rio da Broa de Fuba: R$ %.2f.\n", valorBroaFuba);
	printf("Valor Arrecadado: R$: %.2lf\n", totalBroaFuba);
	printf("\n");
	
	printf("Total: R$ %.2lf.\n", totalGeral);
	printf("Lucro: R$ %.2lf\n", lucro);
	printf("\n\n");
	printf("Obrigado pela sua prefer�ncia!");
	
	return 0;
	
}
