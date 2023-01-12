int listarRegistros(){
	system("cls");
    teste = false;
    printf("\t----------------[Lista de Registros Cadastrados]-----------------\n");
    do{  
    for(i = 0; i <= totalReg; i++){
    
    	printf("\n  |---------------(Codigo:%d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",Vacinados[i].Nome);
    	printf("  |  CPF: %s\n",Vacinados[i].CPF);
    	printf("  |  Vacina: %s\n",Vacinados[i].Vacina);
    	printf("  |  Data: %s\n",Vacinados[i].Data);
    	printf("  |  Lote: %s\n",Vacinados[i].Lote);
    	printf("  |------------------------------------------|\n");
    	if(totalReg == i){
       		system("pause");
    		teste = true;
    		system("cls");
    		break;
		}	
    }  
}while(0);
break;
system("pause");
return 0;
}

