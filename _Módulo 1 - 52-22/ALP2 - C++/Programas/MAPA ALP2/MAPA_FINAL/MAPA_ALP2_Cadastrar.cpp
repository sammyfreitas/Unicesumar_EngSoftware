int cadastrarVacina(){
	system("cls");
	do{
		for(i = 0; i <= totalReg; i++){
			printf("\n");
		    printf("\t----------------[Cadastro de Vacinação]-----------------\n");
		    printf("\t\n");
			printf("\tDigite o CPF no formato: XXX.XXX.XXX-XX   : ");
			scanf("%s",&Vacinados[i].CPF);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite o nome completo: ");
			scanf("%[^\n]s",&Vacinados[i].Nome);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite o Fabricante da Vacina: ");
			scanf("%s",&Vacinados[i].Vacina);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite a Data no formato xx/xx/xxxx : ");
			scanf("%s",&Vacinados[i].Data);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite o numero do lote: ");
			scanf("%s",&Vacinados[i].Lote);
			fflush(stdin);	
			system("cls");
			fflush(stdin);
			printf("\n[Registro número %d cadastrado com sucesso\]n",&i);
			printf("\t\n");
			printf("\t|----------------------------------------------|\n");
			printf("\t|    1 - Volta para o menu principal           |\n");
			printf("\t|    2 - Cadastre outra pessoa                 |\n");
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
					totalReg=totalReg+1;
					break;
				}
				else if(Sub_menu == 2)
				{
					system("cls");
					totalReg=totalReg+1;
					continue;
				}
				else if(Sub_menu == 3)
				{
					exit(0);
				}	
			}				
	    }
}while(0);

system("pause");
return 0;
}
