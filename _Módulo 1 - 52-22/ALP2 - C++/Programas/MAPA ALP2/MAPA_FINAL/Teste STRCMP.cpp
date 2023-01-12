#define pre 3

 struct p
 {
   char nome[100];
   char presentes[3][100];
 };
  int main(int argc, char** argv)
 {
    struct p convidados[pessoas];
    char teste[100], pesquisa[100];
    int i, j;
    for(i = 0; i < pessoas; i++)
    {
      setbuf(stdin, NULL);
      scanf("%s", convidados[i].nome);
      for(j = 0; j < pre ; j++)
      {
         setbuf(stdin, NULL);
         scanf("%s", convidados[i].presentes[j]);
      }
   }
   setbuf(stdin, NULL);
   scanf("%s %s", teste, pesquisa);
   for(i = 0; i < pessoas; i++)
   {
     for(j = 0; j < pre; j++)
    {
         if(strcmp(convidados[i].nome, teste) == 0 && 
   strcmp(convidados[i].presentes[j], pesquisa) == 0)
         {
            printf("Nome encontrado:\n");
         }
         else
         {
             printf("Nao\n");
         }
     }
   }
  return 0;
}
