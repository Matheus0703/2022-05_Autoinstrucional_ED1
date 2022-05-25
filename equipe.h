#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void cadastramento_Equipe();
void exibir_Equipe();
void excluir_Equipe();
void editar_Equipe();


struct Equipe {
	char nome[51];
	char nacionalidade[21]; // Quantidade de membros
	int qtddMembros; 
	int qtddTitulosConstrutores; // Tï¿½tulos dos construtores
	int qtddTitulosCondutores; //Tï¿½tulos dos condutores
	int poliPositions; //Pole positions
	int qtddVoltasMaisRap; //Voltas mais rï¿½pidas
	float valorMercado; //Valor de mercado
	float taxaIncricaoTemp; // Taxa de inscriï¿½ï¿½o da temporada
	char coresEquipe[31]; // Cores da equipe
	char chefeEquipe[21]; // Chefe de equipe
	char diretorComercial[21]; // Diretor comercial
	char diretorTecnico[21]; // Diretor tï¿½cnico
	char aeroDinamicChefe[21]; //Aerodinamicista-chefe
	char projetistaChefe[21]; //Projetista-chefe
	char ChefePesqEhDev[21]; //Chefe de Pesquisa e Desenvolvimento (R&D)
	char ChefeMecanico[21]; //Chefe dos mecï¿½nicos
	char tecnicoPneus[21]; //Tï¿½cnico de pneus
	char tecnicoComponentes[21]; // Tï¿½cnico de componentes
	char tecnicoTransmissao[21]; // Tï¿½cnico de transmissï¿½o
	char tecnicoCombustivel[21]; // Tï¿½cnico de combustï¿½vel
	char mecanicosPitStop[21][21]; //Mecï¿½nicos do pitstop (atï¿½ 21 profissionais)
	
};

// Funções:
	/* Cadastramento da Equipe: */
		
			
void cadastramento_Equipe(){
           // Definindo a estrutura a ser utilizada e seu apelido:
				struct Equipe p;
				
			// Limpando o buffer do teclado:
			    fflush(stdin);
				
			// Impressão de qual tarefa será realizada:
			printf("\n\t\t ======================== CADASTRAMENTO DE EQUIPES ========================\n");      
            
			printf("\n\t\tNome: ");
			fgets(p.nome, 51 , stdin);
			
			printf("\n\t\tNacionalidade: ");
            fgets(p.nacionalidade, 21, stdin);

            printf("\n\t\tQuantidade de membros: ");
            scanf("%i", &p.qtddTitulosConstrutores);

            printf("\n\t\tQuantidade de titulos contrutores: ");
            scanf("%i", &p.qtddTitulosCondutores);

            printf("\n\t\tPoli positions: ");
            scanf("%i", &p.poliPositions);

            printf("\n\t\tQuantidade de voltas mais rapidas: ");
            scanf("%i", &p.qtddVoltasMaisRap);

            printf("\n\t\tValor do mercado: ");
            scanf("%f", &p.valorMercado);

            printf("\n\t\tValor da taxa de inscrição: ");
            scanf("%f", &p.taxaIncricaoTemp);

            printf("\n\t\tCores de equipe : ");
            fgets(p.coresEquipe, 31 , stdin);

            printf("\n\t\tChefe de equipe: ");
            fgets(p.chefeEquipe, 21, stdin);
			
			printf("\n\t\tDiretor Comercial: ");
			fgets(p.diretorComercial, 21, stdin);
			
			printf("\n\t\tDiretor Tecnico: ");
			fgets(p.diretorTecnico, 21, stdin);
			
			printf("\n\t\tChefe dinamico: ");
			fgets(p.aeroDinamicChefe, 21, stdin);
			
			printf("\n\t\tProjetista Chefe: ");
			fgets(p.projetistaChefe, 21, stdin);
			
			printf("\n\t\tChefe de Pesquisa e Desenvolvimento: ");
			fgets(p.ChefePesqEhDev, 21, stdin);
			
			printf("\n\t\tChefe Mecanico: ");
			fgets(p.ChefeMecanico, 21, stdin);
			
			printf("\n\t\tTecnico de Pneus: ");
			fgets(p.tecnicoPneus, 21, stdin);
			
			printf("\n\t\tTecnicos de Componentes: ");
			fgets(p.tecnicoComponentes, 21, stdin);
			
			printf("\n\t\tTecnico de Transmissao: ");
			fgets(p.tecnicoTransmissao, 21, stdin);
			
			printf("\n\t\tTecnico de Combustiveis: ");
			fgets(p.tecnicoCombustivel, 21, stdin);
			
			for(int i = 0; i<21; i++){
			    printf("\n\t\tMecanico Pit Stop: ");
				fgets(p.mecanicosPitStop[i], 21, stdin);
			}
  
}

//Edição de dados

void exibir_Equipe(void) {
	// Definindo a estrutura a ser utilizada e seu apelido:
	  struct piloto p;
			
			
	// Limpando o buffer do teclado:
	  fflush(stdin);
            
			printf("\n\t\tNome: %s", &p.nome);
			
			printf("\n\t\tNacionalidade: %s", &p.nacionalidade);
        
            printf("\n\t\tQuantidade de membros: %s ", &p.qtddTitulosConstrutores);
           
            printf("\n\t\tQuantidade de titulos contrutores: %s", &p.qtddTitulosCondutores);
        
            printf("\n\t\tPoli positions: %i ", &p.poliPositions);
 
            printf("\n\t\tQuantidade de voltas mais rapidas: %i", &p.qtddVoltasMaisRap);

            printf("\n\t\tValor do mercado: %f", &p.valorMercado);

            printf("\n\t\tValor da taxa de inscrição: %f", &p.taxaIncricaoTemp);

            printf("\n\t\tCores de equipe : %s ", &p.coresEquipe);

            printf("\n\t\tChefe de equipe: %s ", &p.chefeEquipe);

			printf("\n\t\tDiretor Comercial: %s", &p.diretorComercial);

			printf("\n\t\tDiretor Tecnico: %s", &p.diretorTecnico);

			printf("\n\t\tChefe dinamico: %s ", &p.aeroDinamicChefe);

			printf("\n\t\tProjetista Chefe: %s", &p.projetistaChefe);

			printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s ", &p.ChefePesqEhDev);

			printf("\n\t\tChefe Mecanico: %s ", &p.ChefeMecanico);

			printf("\n\t\tTecnico de Pneus: %s ", &p.tecnicoPneus);

			printf("\n\t\tTecnicos de Componentes: %s ", &p.tecnicoComponentes);

			printf("\n\t\tTecnico de Transmissao: %s ", &p.tecnicoTransmissao);

			printf("\n\t\tTecnico de Combustiveis: %s ", &p.tecnicoCombustivel);
			
			for(int i = 0; i<21; i++){
			   printf("\n\t\tMecanico Pit Stop: %s ", &p.mecanicosPitStop[i]);
			}
}

void sair_equipe() {
	printf("\n\t\t Bye-bye :)");
	//system("exit");
	exit(0);
}
