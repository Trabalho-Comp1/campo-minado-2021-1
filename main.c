#include "main.h"

extern DIFICULDADE Facil, Medio, Dificil;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  fwide(stdout, 1);

  renderMenuScene();

  /* Iniciando o jogo */
  resetGame();
  Jogo.GAME_STATE = PLAYING;

  /* GAME LOOP */
  while (Jogo.GAME_STATE != EXIT)
  {
    if (Jogo.GAME_STATE == PLAYING)
    {
      renderGameScene();
    }
    else if (Jogo.GAME_STATE == GAME_OVER)
    {
      renderGameOverScene();
    }
    else if (Jogo.GAME_STATE == VICTORY)
    {
      renderVictoryScene();
    }
  }

  return 0;
}