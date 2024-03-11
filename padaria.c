#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>

/*O Sistema Bakery Helper foi desenvolvido para auxiliar os processos contábeis da produção, 
venda e lucro do Pão Francês e da Broa de Fuba.*/
int main()
{
	/*Define a localidade para o padrão, que é a página de código ANSI padrão
	 do usuário obtida do sistema operacional.*/
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração e Inicialização das principais variáveis.	
	double valorPaoFrances = 0.75;
	double valorBroaFuba = 4.50;
	double totalGeral, totalPaoFrances, totalBroaFuba, lucro;
	int qtdPaoFrancesVendidos = 0;
	int qtdBroaFubaVendidas = 0;
	
	//Bloco de interatividade com o usuário: (Apresentação e Leitura de dados).
	printf("\n*** BEM VINDO AO BAKERY HELPER ***\n\n");
	printf("Informe o número de pães vendidos hoje: ");
	scanf("%d", &qtdPaoFrancesVendidos);
	printf("Informe o número de broas vendidas hoje: ");
	scanf("%d", &qtdBroaFubaVendidas);
	
	//Bloco responsável pelas operações matemáticas.
	totalPaoFrances = qtdPaoFrancesVendidos * valorPaoFrances;
	totalBroaFuba = qtdBroaFubaVendidas * valorBroaFuba;
	totalGeral = totalPaoFrances + totalBroaFuba;
	lucro = (totalGeral * 0.12);
	
	/*Bloco de Saída, onde o sistema retorna para o usuário todo o detalhamento
	 de vendas dos produtos e lucro.*/
	printf("\n");
	printf("RELATÓRIO DE VENDAS:\n\n");
	printf("Quantidade de Pães Vendidos: %d unidade(s):\n", qtdPaoFrancesVendidos);
	printf("Valor unitário do Pão Francês: R$ %.2f.\n", valorPaoFrances);
	printf("Valor Arrecadado: R$: %.2lf\n", totalPaoFrances);
	printf("\n");
	
	printf("Quantidade de Broas Vendidas: %d unidade(s):\n", qtdBroaFubaVendidas);
	printf("Valor unitário da Broa de Fuba: R$ %.2f.\n", valorBroaFuba);
	printf("Valor Arrecadado: R$: %.2lf\n", totalBroaFuba);
	printf("\n");
	
	printf("Total: R$ %.2lf.\n", totalGeral);
	printf("Lucro: R$ %.2lf\n", lucro);
	printf("\n\n");
	printf("Obrigado pela sua preferência!");
	
	return 0;
	
}
