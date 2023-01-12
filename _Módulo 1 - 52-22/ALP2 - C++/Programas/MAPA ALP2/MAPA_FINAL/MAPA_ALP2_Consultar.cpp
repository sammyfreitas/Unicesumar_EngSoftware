int consultarCPF(){
	do{
		system("cls");
	    teste = false;
	    char BuscaCPF [14];
	    int achar=0;
	    printf("\t----------------[Consulta por CPF]-----------------\n");
	    printf("Digite o CPF que deseja buscar no formato xxx.xxx.xxx-xx");
	scanf("%s",&BuscaCPF);
	fflush(stdin);
	i=0;
	int acha=0;
	while ((i<totalReg) && (acha==0))
	{
		if (strcmp(Vacinados[i].CPF, BuscaCPF) == 0)
		{
			acha=1;
		else
			i++;
		}
		if (acha==1)
		{
			printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
			printf("  |  Nome: %s\n",Vacinados[i].Nome);
			printf("  |  CPF: %s\n",Vacinados[i].CPF);
			printf("  |  Vacina: %s\n",Vacinados[i].Vacina);
			printf("  |  Data: %s\n",Vacinados[i].Data);
			printf("  |  Lote: %s\n",Vacinados[i].Lote);
			printf("  |------------------------------------------|\n");
			printf("\t\n");			
			printf("\t|----------------------------------------------|\n");
			printf("\t|    1 - Volta para o menu principal           |\n");
			printf("\t|    2 - Consulte outra pessoa                 |\n");
			printf("\t|    3 - Sair                                  |\n");
			printf("\t|----------------------------------------------|\n");
			printf("\t\n");
				printf("\nDigite a opção: ");   
				scanf("%d", &Sub_menu);
				if(Sub_menu >= 1 && Sub_menu <= 3)
				{
					if(Sub_menu == 1)
					{
						system("cls");
						teste = true;
						break;
					}
					else if(Sub_menu == 2)
					{
						system("cls");
						continue;
					}
					else if(Sub_menu == 3)
					{
						exit(0);
					}	
				}				
		    }
	system("pause");  
    teste = true;
    system("cls");
    break;
}while(0);

system("pause");
return 0;
}
break;
}while(0);
