#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadastramento_Equipe();
void imprimir_equipe();
void excluir_equipe();
void editar_equipe();
void sair_equipe();
void abrir();
void criar();
void fechar();


struct Equipe {
	char nome[51];
	char nacionalidade[21]; 
	int qtddMembros; 
	int qtddTitulosConstrutores; 
	int qtddTitulosCondutores; 
	int poliPositions; 
	int qtddVoltasMaisRap; 
	float valorMercado;
	float taxaIncricaoTemp; 
	char coresEquipe[31];
	char chefeEquipe[21]; 
	char diretorComercial[21]; 
	char diretorTecnico[21];
	char aeroDinamicChefe[21];
	char projetistaChefe[21]; 
	char ChefePesqEhDev[21]; 
	char ChefeMecanico[21]; 
	char tecnicoPneus[21];
	char tecnicoComponentes[21];
	char tecnicoTransmissao[21];
	char tecnicoCombustivel[21]; 
	char mecanicosPitStop[21][21]; 
	
};

	FILE *filePointer;
	struct Equipe *equipePointer;
	int tam;
	
void abrir() {
	filePointer = fopen("arquivo_equipe.txt", "r+");
			
	if(filePointer == NULL) {
		criar();
		fechar();
		abrir();          
	}
}
		
void criar() {
	filePointer = fopen("arquivo_equipe.txt", "w");

	if(filePointer == NULL) {
		printf("Erro ao criar o arquivo!");   
			exit(1);             
	}
}

void fechar() {
	fclose(filePointer);
}

// Funções:
	/* Cadastramento da Equipe: */
		
			
void cadastramento_Equipe(){
	    
	    //variavel para o for
	    int i;
	    
	    printf("\n\t\t Insira o numero de equipes que voce deseja cadastrar: ");
		scanf("%i", &tam);
		
		// Definindo a estrutura a ser utilizada e seu apelido:
		//struct Equipe p[tam];
		

		struct Equipe* p = malloc(tam * sizeof * p);
		
	    // Definindo um ponteiro para p[]:
		equipePointer = p;
			
		// Criando/Abrindo o Arquivo TXT:
		abrir();
				
		// Setando o ponteiro ao final do arquivo:
		fseek(filePointer, 0, SEEK_END);
			
		
		// Impressão de qual tarefa será realizada:



		printf("\n\t\t ======================== CADASTRAMENTO DE EQUIPES ========================\n");      
			
		
        for(i=0; i<tam; i++){
			
			// Limpando o buffer do teclado:
	        fflush(stdin);
			          
			printf("\n\t\tNome: ");
			fgets(p[i].nome, 51 , stdin);
			
			printf("\n\t\tNacionalidade: ");
            fgets(p[i].nacionalidade, 21, stdin);

            printf("\n\t\tQuantidade de membros: ");
            scanf("%i", &p[i].qtddTitulosConstrutores);

            printf("\n\t\tQuantidade de titulos contrutores: ");
            scanf("%i", &p[i].qtddTitulosCondutores);

            printf("\n\t\tPoli positions: ");
            scanf("%i", &p[i].poliPositions);

            printf("\n\t\tQuantidade de voltas mais rapidas: ");
            scanf("%i", &p[i].qtddVoltasMaisRap);

            printf("\n\t\tValor do mercado: ");
            scanf("%f", &p[i].valorMercado);

            printf("\n\t\tValor da taxa de inscrição: ");
            scanf("%f", &p[i].taxaIncricaoTemp);

            printf("\n\t\tCores de equipe : ");
            fgets(p[i].coresEquipe, 31 , stdin);

            printf("\n\t\tChefe de equipe: ");
            fgets(p[i].chefeEquipe, 21, stdin);
			
			printf("\n\t\tDiretor Comercial: ");
			fgets(p[i].diretorComercial, 21, stdin);
			
			printf("\n\t\tDiretor Tecnico: ");
			fgets(p[i].diretorTecnico, 21, stdin);
			
			printf("\n\t\tChefe dinamico: ");
			fgets(p[i].aeroDinamicChefe, 21, stdin);
			
			printf("\n\t\tProjetista Chefe: ");
			fgets(p[i].projetistaChefe, 21, stdin);
			
			printf("\n\t\tChefe de Pesquisa e Desenvolvimento: ");
			fgets(p[i].ChefePesqEhDev, 21, stdin);
			
			printf("\n\t\tChefe Mecanico: ");
			fgets(p[i].ChefeMecanico, 21, stdin);
			
			printf("\n\t\tTecnico de Pneus: ");
			fgets(p[i].tecnicoPneus, 21, stdin);
			
			printf("\n\t\tTecnicos de Componentes: ");
			fgets(p[i].tecnicoComponentes, 21, stdin);
			
			printf("\n\t\tTecnico de Transmissao: ");
			fgets(p[i].tecnicoTransmissao, 21, stdin);
			
			printf("\n\t\tTecnico de Combustiveis: ");
			fgets(p[i].tecnicoCombustivel, 21, stdin);
			
//			for(i = 0; i<2; i++){
//			    printf("\n\t\tMecanico Pit Stop: ");
//				fgets(p[i][i].mecanicosPitStop, 21, stdin);
//			}
		}
			
		for (i=0; i<tam; i++) {
			fprintf(filePointer, "%s", "INSERCAO DE DADOS FEITA NO CADASTRAMENTO DE PILOTO:");
			fprintf(filePointer, "%s", p[i].nome); 
			fprintf(filePointer, "%s", p[i].nacionalidade);
			fprintf(filePointer, "%i\n", p[i].qtddTitulosConstrutores);
			fprintf(filePointer, "%i\n", p[i].qtddTitulosCondutores);
			fprintf(filePointer, "%i\n", p[i].poliPositions);
			fprintf(filePointer, "%i\n", p[i].qtddVoltasMaisRap);
			fprintf(filePointer, "%f\n",p[i].valorMercado);
			fprintf(filePointer, "%f\n", p[i].taxaIncricaoTemp);
			fprintf(filePointer, "%s", p[i].coresEquipe);
			fprintf(filePointer, "%s", p[i].chefeEquipe);
			fprintf(filePointer, "%s", p[i].diretorComercial);	
			fprintf(filePointer, "%s", p[i].diretorTecnico);
			fprintf(filePointer, "%s", p[i].aeroDinamicChefe);
			fprintf(filePointer, "%s", p[i].projetistaChefe);
			fprintf(filePointer, "%s", p[i].ChefePesqEhDev);
			fprintf(filePointer, "%s", p[i].ChefeMecanico);
			fprintf(filePointer, "%s", p[i].tecnicoPneus);
			fprintf(filePointer, "%s", p[i].tecnicoComponentes);
			fprintf(filePointer, "%s", p[i].tecnicoTransmissao);
			fprintf(filePointer, "%s", p[i].tecnicoCombustivel);
	//		fprintf(filePointer, "%s", p[i].mecanicosPitStop);	
			}
					
		//Fechando o arquivo TXT:
		fechar();
		
		// Limpando o buffer do teclado:
		fflush(stdin);
					
		// Limpando tela:
		system("cls");			
  }
  
  
// Edicao do Piloto:
void editar_equipe() {
	// Limpando o buffer do teclado:
		fflush(stdin);
				
	// Criando/Abrindo o Arquivo TXT:
		abrir();
				
	// Setando o ponteiro ao final do arquivo:
		fseek(filePointer, 0, SEEK_END);
			
	// Impressao de qual tarefa sera realizada:
		printf("\n\t\t ============= EDICAO DE EQUIPE =============\n"); 
					
	// Chacando se a variavel possui dados:
		
	if(equipePointer != NULL) {
			
		int i;
			
		  for(i=0; i<tam ;i++) {
			printf("\n\t\t Grupo %i\r\n", i);
		
			printf("\n\t\tNome: %s ",(equipePointer+i)->nome);
			printf("\n\t\tNacionalidade: %s ",(equipePointer+i)->nacionalidade);
            printf("\n\t\tQuantidade de membros: %i\n",(equipePointer+i)->qtddTitulosConstrutores);
            printf("\n\t\tQuantidade de titulos contrutores: %i\n",(equipePointer+i)->qtddTitulosCondutores);
            printf("\n\t\tQuantidade de titulos condutores: %i\n",(equipePointer+i)->qtddTitulosCondutores);
            printf("\n\t\tPoli positions: %i\n ",(equipePointer+i)->poliPositions);
            printf("\n\t\tQuantidade de voltas mais rapidas: %i\n ",(equipePointer+i)->qtddVoltasMaisRap);
            printf("\n\t\tValor do mercado: %f\n ",(equipePointer+i)->valorMercado);
            printf("\n\t\tValor da taxa de inscrição: %f\n ",(equipePointer+i)->taxaIncricaoTemp);
            printf("\n\t\tCores de equipe: %s ",(equipePointer+i)->coresEquipe);
            printf("\n\t\tChefe de equipe: %s ",(equipePointer+i)->chefeEquipe);
			printf("\n\t\tDiretor Comercial: %s ",(equipePointer+i)->diretorComercial);
			printf("\n\t\tDiretor Tecnico: %s ",(equipePointer+i)->diretorTecnico);
			printf("\n\t\tChefe dinamico: %s ",(equipePointer+i)->aeroDinamicChefe);
			printf("\n\t\tProjetista Chefe: %s",(equipePointer+i)->projetistaChefe);
			printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s",(equipePointer+i)->ChefePesqEhDev);
			printf("\n\t\tChefe Mecanico: %s",(equipePointer+i)->ChefeMecanico);
			printf("\n\t\tTecnico de Pneus: %s",(equipePointer+i)->tecnicoPneus);
			printf("\n\t\tTecnicos de Componentes: %s ",(equipePointer+i)->tecnicoComponentes);
			printf("\n\t\tTecnico de Transmissao: %s",(equipePointer+i)->tecnicoTransmissao);
			printf("\n\t\tTecnico de Combustiveis: %s",(equipePointer+i)->tecnicoCombustivel);
//			printf("\n\t\tMecanico Pit Stop: %s",(equipePointer+i)->mecanicosPitStop);	
		
}

	// Limpando o buffer do teclado:
		fflush(stdin);
						
	// Definição da posição do grupo:
		int edition_group;
						
	    printf("\n\t\t Insira em qual dos grupos deseja realizar a alteracao: ");
	    scanf("%i", &edition_group);
											
	// Limpando o buffer do teclado:
	    fflush(stdin);	
						
	// Selecionando o grupo e a parte de edicao:
	    int edition_choice;	
	    
	printf("\n\t\t ======================================\n\t\t");
	printf("\n\t\t O grupo selecionado foi:\n");
	
		printf("\n\t\tNome: %s ",(equipePointer+edition_group)->nome);
		printf("\n\t\tNacionalidade: %s ",(equipePointer+edition_group)->nacionalidade);
        printf("\n\t\tQuantidade de membros: %i\n",(equipePointer+edition_group)->qtddTitulosConstrutores);
        printf("\n\t\tQuantidade de titulos contrutores: %i\n",(equipePointer+edition_group)->qtddTitulosCondutores);
        printf("\n\t\tQuantidade de titulos condutores: %i\n",(equipePointer+edition_group)->qtddTitulosCondutores);
        printf("\n\t\tPoli positions: %i\n ",(equipePointer+edition_group)->poliPositions);
        printf("\n\t\tQuantidade de voltas mais rapidas: %i\n ",(equipePointer+edition_group)->qtddVoltasMaisRap);
        printf("\n\t\tValor do mercado: %f\n ",(equipePointer+edition_group)->valorMercado);
        printf("\n\t\tValor da taxa de inscrição: %f\n ",(equipePointer+edition_group)->taxaIncricaoTemp);
        printf("\n\t\tCores de equipe: %s ",(equipePointer+edition_group)->coresEquipe);
        printf("\n\t\tChefe de equipe: %s ",(equipePointer+edition_group)->chefeEquipe);
		printf("\n\t\tDiretor Comercial: %s ",(equipePointer+edition_group)->diretorComercial);
		printf("\n\t\tDiretor Tecnico: %s ",(equipePointer+edition_group)->diretorTecnico);
		printf("\n\t\tChefe dinamico: %s ",(equipePointer+edition_group)->aeroDinamicChefe);
		printf("\n\t\tProjetista Chefe: %s",(equipePointer+edition_group)->projetistaChefe);
		printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s",(equipePointer+edition_group)->ChefePesqEhDev);
		printf("\n\t\tChefe Mecanico: %s",(equipePointer+edition_group)->ChefeMecanico);
		printf("\n\t\tTecnico de Pneus: %s",(equipePointer+edition_group)->tecnicoPneus);
		printf("\n\t\tTecnicos de Componentes: %s ",(equipePointer+edition_group)->tecnicoComponentes);
		printf("\n\t\tTecnico de Transmissao: %s",(equipePointer+edition_group)->tecnicoTransmissao);
		printf("\n\t\tTecnico de Combustiveis: %s",(equipePointer+edition_group)->tecnicoCombustivel);
//		printf("\n\t\tMecanico Pit Stop: %s",(equipePointer+edition_group)->mecanicosPitStop);	

        printf("\n\t\t Selecione um numero para editar uma informacao: ");
		scanf("%i", &edition_choice);
						
		// Limpando o buffer do teclado:
		fflush(stdin);
		
		// Editando:					
						switch (edition_choice) {
							case 1:							
							printf("\n\t\tEdição nome: ");
                            scanf("%s\n",((equipePointer+edition_group)->nome),stdin);
									
								break;
							case 2:
							printf("\n\t\tEdição nacionalidade: ");
                            scanf("%s\n",((equipePointer+edition_group)->nacionalidade),stdin);
             
								
								break;
							case 3:
							printf("\n\t\tEdição quantidade de membros: ");
                            scanf("%i",((equipePointer+edition_group )->qtddMembros),stdin);     
								
								break;
							case 4:
							printf("\n\t\t Edição quantidade de titulos contrutores: ");
                            scanf("%i",((equipePointer+edition_group )->qtddTitulosConstrutores),stdin);
								
								break;
								
							case 5:
							printf("\n\t\t Edição quantidade de titulos condutores: ");
                            scanf("%i",((equipePointer+edition_group )->qtddTitulosCondutores ),stdin);
								
								break;
							case 6:
							printf("\n\t\tEdição poli positions: ");
                            scanf("%i",((equipePointer+edition_group )->poliPositions),stdin);
								
								break;
							case 7:
							printf("\n\t\tEdição quantidade de voltas mais rapidas: ");
                            scanf("%i",((equipePointer+edition_group )->qtddVoltasMaisRap),stdin);
								
								break;
							case 8:
							printf("\n\t\tEdição valor do mercado: ");
                            scanf("%f",((equipePointer+edition_group )->valorMercado),stdin);
								
								break;
							case 9:
							printf("\n\t\tEdição valor da taxa de inscrição: ");
                            scanf("%f",((equipePointer+edition_group )->taxaIncricaoTemp),stdin);
								
								break;
							case 10:
							printf("\n\t\tEdição cores de equipe : ");
                            scanf("%s\n",((equipePointer+edition_group )->coresEquipe),stdin);

								
								break;
							case 11:
							printf("\n\t\tEdição chefe de equipe: ");
                            scanf("%s\n",((equipePointer+edition_group )->chefeEquipe),stdin);
								
								break;
							case 12:
							printf("\n\t\tEdição diretor Comercial: ");
		                   	scanf("%s\n",((equipePointer+edition_group )->diretorComercial),stdin);
		                   	
		                   	case 13:
							printf("\n\t\tEdição diretor Tecnico: ");
			                scanf("%s\n",((equipePointer+edition_group )->diretorTecnico),stdin);
             
								
								break;
							case 14:
							printf("\n\t\tEdição chefe dinamico: ");
			                scanf("%s\n",((equipePointer+edition_group )->aeroDinamicChefe),stdin);         
								
								break;
							case 15:
							printf("\n\t\tEdição projetista Chefe: ");
			                scanf("%s\n",((equipePointer+edition_group )->projetistaChefe),stdin);
								
								break;
							case 16:
							printf("\n\t\tEdição chefe de Pesquisa e Desenvolvimento: ");
			                scanf("%s\n",((equipePointer+edition_group)->ChefePesqEhDev),stdin);
								
								break;
								
							case 17:
							printf("\n\t\tChefe Mecanico:: ");
			                scanf("%s\n",((equipePointer+edition_group )->ChefeMecanico),stdin);
                         
						 	break;
						    case 18:
							printf("\n\t\tEdição tecnico de Pneus: ");
			                scanf("%s\n",((equipePointer+edition_group )->tecnicoPneus),stdin);
                         
						 	break;
						 	
			                case 19:
		                 	printf("\n\t\tEdição tecnicos de Componentes: ");
		                   	scanf("%s\n",((equipePointer+edition_group )->tecnicoComponentes),stdin);
                         
						 	break;
			                case 20:
		                    printf("\n\t\tEdição tecnico de Transmissao: ");
		                  	scanf("%s\n",((equipePointer+edition_group )->tecnicoTransmissao),stdin);
                         
						 	break;
			                case 21:
			                printf("\n\t\tEdição tecnico de Combustiveis: ");
		                  	scanf("%s\n",((equipePointer+edition_group )->tecnicoCombustivel ),stdin);
                         
						 	break;
	          //            case 22:
              //			for(i = 0; i<2; i++){
              //	        printf("\n\t\tEdição mecanico Pit Stop: ");
              //			scanf("%s\n",((equipePointer+edition_group )->mecanicosPitStop ),stdin);
              //			}	
              //            break;
          }
						// Gravando no arquivo txt:
							for (i=0; i<tam; i++) {
							printf("\n\t\tNome: %s ",(equipePointer+i)->nome);
						    printf("\n\t\tNacionalidade: %s ",(equipePointer+i)->nacionalidade);
				            printf("\n\t\tQuantidade de membros: %i\n",(equipePointer+i)->qtddTitulosConstrutores);
				            printf("\n\t\tQuantidade de titulos contrutores: %i\n",(equipePointer+i)->qtddTitulosCondutores);
				            printf("\n\t\tPoli positions: %i\n ",(equipePointer+i)->poliPositions);
				            printf("\n\t\tQuantidade de voltas mais rapidas: %i\n ",(equipePointer+i)->qtddVoltasMaisRap);
				            printf("\n\t\tValor do mercado: %f\n ",(equipePointer+i)->valorMercado);
				            printf("\n\t\tValor da taxa de inscrição: %f\n ",(equipePointer+i)->taxaIncricaoTemp);
				            printf("\n\t\tCores de equipe: %s ",(equipePointer+i)->coresEquipe);
				            printf("\n\t\tChefe de equipe: %s ",(equipePointer+i)->chefeEquipe);
							printf("\n\t\tDiretor Comercial: %s ",(equipePointer+i)->diretorComercial);
							printf("\n\t\tDiretor Tecnico: %s ",(equipePointer+i)->diretorTecnico);
							printf("\n\t\tChefe dinamico: %s ",(equipePointer+i)->aeroDinamicChefe);
							printf("\n\t\tProjetista Chefe: %s",(equipePointer+i)->projetistaChefe);
							printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s",(equipePointer+i)->ChefePesqEhDev);
							printf("\n\t\tChefe Mecanico: %s",(equipePointer+i)->ChefeMecanico);
							printf("\n\t\tTecnico de Pneus: %s",(equipePointer+i)->tecnicoPneus);
							printf("\n\t\tTecnicos de Componentes: %s ",(equipePointer+i)->tecnicoComponentes);
							printf("\n\t\tTecnico de Transmissao: %s",(equipePointer+i)->tecnicoTransmissao);
							printf("\n\t\tTecnico de Combustiveis: %s",(equipePointer+i)->tecnicoCombustivel);
				//			printf("\n\t\tMecanico Pit Stop: %s",(equipePointer+i)->mecanicosPitStop);	
							}
					
					// Fechando o arquivo txt:
						fechar();
						
				} else {
					printf("\n\t\t Primeiramente, faca um cadastramento de\n\t\t equipe para que consiga realizar uma edicao!");
				}
		}

// Exclusao do Piloto:
	void excluir_equipe() {
	
	// Limpando o buffer do teclado:
		fflush(stdin);
				
	// Criando/Abrindo o Arquivo TXT:
		abrir();
				
	// Setando o ponteiro ao final do arquivo:
	    fseek(filePointer, 0, SEEK_END);
					
	// Impressao de qual tarefa sera realizada:
		printf("\n\t\t ============= EDICAO DE EQUIPE =============\n"); 
					
	// Chacando se a variavel possui dados:
		if(equipePointer != NULL) {
			
		int i;
		
		for(i=0; i<tam; i++) {
			printf("\n\t\t Grupo %i\r\n", i);
		
			printf("\n\t\tNome: %s ",(equipePointer+i)->nome);
			printf("\n\t\tNacionalidade: %s ",(equipePointer+i)->nacionalidade);
            printf("\n\t\tQuantidade de membros: %i\n",(equipePointer+i)->qtddTitulosConstrutores);
            printf("\n\t\tQuantidade de titulos contrutores: %i\n",(equipePointer+i)->qtddTitulosCondutores);
            printf("\n\t\tPoli positions: %i\n ",(equipePointer+i)->poliPositions);
            printf("\n\t\tQuantidade de voltas mais rapidas: %i\n ",(equipePointer+i)->qtddVoltasMaisRap);
            printf("\n\t\tValor do mercado: %f\n ",(equipePointer+i)->valorMercado);
            printf("\n\t\tValor da taxa de inscrição: %f\n ",(equipePointer+i)->taxaIncricaoTemp);
            printf("\n\t\tCores de equipe: %s ",(equipePointer+i)->coresEquipe);
            printf("\n\t\tChefe de equipe: %s ",(equipePointer+i)->chefeEquipe);
			printf("\n\t\tDiretor Comercial: %s ",(equipePointer+i)->diretorComercial);
			printf("\n\t\tDiretor Tecnico: %s ",(equipePointer+i)->diretorTecnico);
			printf("\n\t\tChefe dinamico: %s ",(equipePointer+i)->aeroDinamicChefe);
			printf("\n\t\tProjetista Chefe: %s",(equipePointer+i)->projetistaChefe);
			printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s",(equipePointer+i)->ChefePesqEhDev);
			printf("\n\t\tChefe Mecanico: %s",(equipePointer+i)->ChefeMecanico);
			printf("\n\t\tTecnico de Pneus: %s",(equipePointer+i)->tecnicoPneus);
			printf("\n\t\tTecnicos de Componentes: %s ",(equipePointer+i)->tecnicoComponentes);
			printf("\n\t\tTecnico de Transmissao: %s",(equipePointer+i)->tecnicoTransmissao);
			printf("\n\t\tTecnico de Combustiveis: %s",(equipePointer+i)->tecnicoCombustivel);
//			printf("\n\t\tMecanico Pit Stop: %s",(equipePointer+i)->mecanicosPitStop);	
		
}
						
	// Limpndo o buffer do teclado:
	   fflush(stdin);
						
    // Definição da posição do grupo:
		int exclusion_group;
						
        printf("\n\t\t Escolha qual grupo deseja deletar: ");
		scanf("%i", &exclusion_group);
											
	// Limpando o buffer do teclado:
		fflush(stdin);	
						
	// Grupo selecionado para exclusao:
		printf("\n\t\t ======================================\n\t\t");
		printf("\n\t\t O grupo selecionado foi:\n");
						
		printf("\n\t\tNome: %s ",(equipePointer+exclusion_group)->nome);
		printf("\n\t\tNacionalidade: %s ",(equipePointer+exclusion_group)->nacionalidade);
        printf("\n\t\tQuantidade de membros: %i\n",(equipePointer+exclusion_group)->qtddTitulosConstrutores);
        printf("\n\t\tQuantidade de titulos contrutores: %i\n",(equipePointer+exclusion_group)->qtddTitulosCondutores);
        printf("\n\t\tPoli positions: %i\n ",(equipePointer+exclusion_group)->poliPositions);
        printf("\n\t\tQuantidade de voltas mais rapidas: %i\n ",(equipePointer+exclusion_group)->qtddVoltasMaisRap);
        printf("\n\t\tValor do mercado: %f\n ",(equipePointer+exclusion_group)->valorMercado);
        printf("\n\t\tValor da taxa de inscrição: %f\n ",(equipePointer+exclusion_group)->taxaIncricaoTemp);
        printf("\n\t\tCores de equipe: %s ",(equipePointer+exclusion_group)->coresEquipe);
        printf("\n\t\tChefe de equipe: %s ",(equipePointer+exclusion_group)->chefeEquipe);
		printf("\n\t\tDiretor Comercial: %s ",(equipePointer+exclusion_group)->diretorComercial);
		printf("\n\t\tDiretor Tecnico: %s ",(equipePointer+exclusion_group)->diretorTecnico);
		printf("\n\t\tChefe dinamico: %s ",(equipePointer+exclusion_group)->aeroDinamicChefe);
		printf("\n\t\tProjetista Chefe: %s",(equipePointer+exclusion_group)->projetistaChefe);
		printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s",(equipePointer+exclusion_group)->ChefePesqEhDev);
		printf("\n\t\tChefe Mecanico: %s",(equipePointer+exclusion_group)->ChefeMecanico);
		printf("\n\t\tTecnico de Pneus: %s",(equipePointer+exclusion_group)->tecnicoPneus);
		printf("\n\t\tTecnicos de Componentes: %s ",(equipePointer+exclusion_group)->tecnicoComponentes);
		printf("\n\t\tTecnico de Transmissao: %s",(equipePointer+exclusion_group)->tecnicoTransmissao);
		printf("\n\t\tTecnico de Combustiveis: %s",(equipePointer+exclusion_group)->tecnicoCombustivel);
//		printf("\n\t\tMecanico Pit Stop: %s",(equipePointer+exclusion_group)->mecanicosPitStop);	
						
		printf("\n\t\t O grupo selecionado será removido no momento de gravação no arquivo!");
						
		// Excluindo:
		// Gravando no arquivo txt:
		for (i=0; i<tam; i++) {
			if (tam == exclusion_group) {
				i++;
		}
								
		    fprintf(filePointer, "%s\n", "INSERCAO DE DADOS FEITA ATRAVES DA EXCLUSAO DE PILOTO:");
	        printf("\n\t\tNome: %s ",(equipePointer+i)->nome);
			printf("\n\t\tNacionalidade: %s ",(equipePointer+i)->nacionalidade);
            printf("\n\t\tQuantidade de membros: %i\n",(equipePointer+i)->qtddTitulosConstrutores);
            printf("\n\t\tQuantidade de titulos contrutores: %i\n",(equipePointer+i)->qtddTitulosCondutores);
            printf("\n\t\tPoli positions: %i\n ",(equipePointer+i)->poliPositions);
            printf("\n\t\tQuantidade de voltas mais rapidas: %i\n ",(equipePointer+i)->qtddVoltasMaisRap);
            printf("\n\t\tValor do mercado: %f\n ",(equipePointer+i)->valorMercado);
            printf("\n\t\tValor da taxa de inscrição: %f\n ",(equipePointer+i)->taxaIncricaoTemp);
            printf("\n\t\tCores de equipe: %s ",(equipePointer+i)->coresEquipe);
            printf("\n\t\tChefe de equipe: %s ",(equipePointer+i)->chefeEquipe);
			printf("\n\t\tDiretor Comercial: %s ",(equipePointer+i)->diretorComercial);
			printf("\n\t\tDiretor Tecnico: %s ",(equipePointer+i)->diretorTecnico);
			printf("\n\t\tChefe dinamico: %s ",(equipePointer+i)->aeroDinamicChefe);
			printf("\n\t\tProjetista Chefe: %s",(equipePointer+i)->projetistaChefe);
			printf("\n\t\tChefe de Pesquisa e Desenvolvimento: %s",(equipePointer+i)->ChefePesqEhDev);
			printf("\n\t\tChefe Mecanico: %s",(equipePointer+i)->ChefeMecanico);
			printf("\n\t\tTecnico de Pneus: %s",(equipePointer+i)->tecnicoPneus);
			printf("\n\t\tTecnicos de Componentes: %s ",(equipePointer+i)->tecnicoComponentes);
			printf("\n\t\tTecnico de Transmissao: %s",(equipePointer+i)->tecnicoTransmissao);
			printf("\n\t\tTecnico de Combustiveis: %s",(equipePointer+i)->tecnicoCombustivel);
//			printf("\n\t\tMecanico Pit Stop: %s",(equipePointer+i)->mecanicosPitStop);	
			}
					
			// Fechando o arquivo txt:
			fechar();
						
			} else {
		      printf("\n\t\t Primeiramente, faca um cadastramento de\n\t\t piloto para que consiga realizar uma exclusao!");
			}
}
		
void imprimir_equipe() {
	system("cls");
	printf("========== IMPRESSAO DADOS DO ARQUIVO EQUIPE ==========\n\n");
	system(" type arquivo_equipe.txt");
	printf("\n\n============================== FIM ==============================\n\t\t");
}
		
void sair_equipe() {
printf("\n\t\t Bye-bye :)");
	//system("exit");
	exit(0);
}

