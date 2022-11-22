#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

int main(void) {

  int portaList[7] = {};

  int porta, chave, continuar;

  int rand(void);
  void srand(unsigned int);

  printf("\n\nPrograma de avaliação linguagem C\n");

  printf("\n\nTema do programa: Jogo de sobrevivência\n");
  do {

 struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  data_hora_atual = localtime(&segundos);  
  
  //para acessar os membros de uma struct usando o ponteiro
  //utilizamos o operador -> no nosso caso temos: 
  //data_hora_atual->membro_da_struct
  
  //Acessando dados convertidos para a struct data_hora_atual  
  printf("\nData e Hora Atual: %d - %d - %d\n", data_hora_atual->tm_mday-1,data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900);  

    
    printf(
        "\n Ocorreu um assassinado dentro do Apartamento The Pentheuse, na "
        "Inglaterra, traz á tona uma sinistra conspiração para revelar o "
        "assassino do Rinat Akhmetov, cuja fortuna é estimada em 15,4 milhões "
        "de "
        "dólares. Momentos antes de morrer, Rinat Akhmetov consegue deixar "
        "mensagens nas 6 portas disponíveis no apartamento que podem desvendar "
        "o "
        "assassino (ou não). A trama está armada quando descobre que o "
        "assassino "
        "esta no local e você é a próxima vítima, caso não encontre a saída. "
        "Terá que percorrer todas as portas em busca da sua salvação."
      "\n \nEscolha uma porta de 1 até 6\n\n\n");

    printf("Escolha uma porta para entrar:");
    scanf("%d", &porta);

    switch (porta) {
    case 1:
      printf("\nPorta 1 - Está em uma cozinha escura e a porta automaticamente "
             "fechou, nessa cozinha tem um corpo sem cabeça no chão "
             "ensanguentado para sai do local, precisa cortar três dedos, para "
             "receber uma chave amarela.\n\n");
      portaList[1] += 1;
      break;

    case 2:
      printf("\nPorta 2\n\n");
      portaList[2] += 1;
      break;

    case 3:
      printf("\nPorta 3\n\n");
      portaList[3] += 1;
      break;

    case 4:
      printf("\nPorta 4\n");
      portaList[4] += 1;
      break;

    case 5:
      printf("\nPorta 5\n\n");
      portaList[5] += 1;
      break;

    case 6:
      printf("\nPorta 6\n\n");
      portaList[6] += 1;
      break;

    default:
      printf("\n!!!!!!ESCOLHA UMA PORTA DE 1 A 6.!!!!!!!!! \n");
      break;
    }

    printf("\n");
    for (int i = 1; i < 7; i++) {
      printf("Porta %d foi escolhida %d vezes.  \n", i, portaList[i]);
    }
    printf("\n\n\n [Aperte 1 para SAIR] \n\n\n");
    scanf("%d", &continuar);

    printf("\nSeu numero da sorte é: %d\n", rand);

  } while (continuar != 1);
}

/*Ocorreu um assassinado dentro do Apartamento The Pentheuse, na Inglaterra,
traz á tona uma sinistra conspiração para revelar o assassino do Rinat Akhmetov,
cuja fortuna é estimada em 15,4 milhões de dólares. Momentos antes de morrer,
Rinat Akhmetov consegue deixar mensagens nas 6 portas disponíveis no apartamento
que podem desvendar o assassino (ou não). A trama está armada quando descobre
que o assassino esta no local e você é a próxima vítima, caso não encontre a
saída. Terá que percorrer todas as portas em busca da sua salvação.

Porta 1 -	Está em uma cozinha escura e a porta automaticamente fechou,
nessa cozinha tem um corpo sem cabeça no chão ensanguentado para sai do local,
precisa corta três dedos, para receber uma chave amarela. 1.	Corta os dedos
(recebeu chave) 2.	Fugir (retornou a sala principal) Porta 2 – Conseguiu
acesso ao porão, receba um baú com ferramentas e arma para se proteger. (chave
amarela) 1.	Tem chave? Sim ou não Porta 3- Nessa sala terá um corpo, para
recebe a chave vermelha terá que cortar o estômago usando as ferramentas do baú.
Tem as ferramentas?
1.	Sim
2.	 não
Porta 4- Você encontrou o assassino (fim de jogo)
Tem arma?
Sim ( assassino morreu)
Não (você morreu)
Porta 5- Você entrou em um quarto aonde prendeu sua perna em uma corrente, que
está presa no pé da cama, e não tem como se solta. Para se libertar terá que
cortar o pé com o serrote que tem ao lado da cama. 1.	Cortar o pé 2. Porta 6-
Porta trancada (Use a chave vermelha) Tem chave? Sim ou não Sim (liberdade
cantou) Não (continua no apartamento) */
