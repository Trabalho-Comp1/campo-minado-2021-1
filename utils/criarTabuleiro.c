TABULEIRO criarTabuleiro()
{
  int i, tamanho;
  TABULEIRO temp;

/*temp.dificuldade = dificuldade;
  temp.casasAbertas = 0;
  temp.numJogadas = 0; */
  tamanho = Jogo.dificuldade.tam;

  temp.jogavel = (int **)malloc(tamanho * sizeof(int *));
  temp.espelho = (int **)malloc(tamanho * sizeof(int *));

  for (i = 0; i < tamanho; i++)
  {
    *(temp.jogavel+i) = calloc(tamanho, sizeof(int));
    *(temp.espelho+i) = calloc(tamanho, sizeof(int));
  }

  return temp;
}
