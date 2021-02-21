void verificarCasasAdjacentes(TABULEIRO tabuleiro)
{
  int linha, coluna, i, j;
  const int tamTabuleiro = tabuleiro.dificuldade.tam;

  for (linha = 0; linha < tamTabuleiro; linha++)
  {
    for (coluna = 0; coluna < tamTabuleiro; coluna++)
    {
      unsigned int bombasProximas = 0;
      const int celulaCentral = tabuleiro.jogavel[linha][coluna];

      if (celulaCentral == BOMBA)
      {
        continue;
      }

      for (i = -1; i < 2; i++)
      {
        for (j = -1; j < 2; j++)
        {
          if (
              (i == 0 && j == 0) ||                                     /* proprio elemento */
              (linha + i < 0 || coluna + j < 0) ||                      /* menor do que o tabuleiro */
              (linha + i >= tamTabuleiro || coluna + j >= tamTabuleiro) /* maior que o tabuleiro */
          )
          {
            continue;
          }
          if (tabuleiro.jogavel[linha + i][coluna + j] == BOMBA)
          {
            bombasProximas++;
          }
        }
      }
      tabuleiro.jogavel[linha][coluna] = bombasProximas;
    }
  }
}