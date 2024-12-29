#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int count_letters(string texto, int tamanho);

int count_words(string texto, int tamanho);

int count_setences(string texto, int tamanho);

int main (void) {
    string texto = get_string("Digite o seu texto: ");
    int tamanho = strlen(texto);
    int qtd_letras = count_letters(texto,tamanho);
    int qtd_palavras = count_words(texto,tamanho);
    int qtd_frases = count_setences(texto,tamanho);
   float L = ( (float) qtd_letras /(float) qtd_palavras) * 100.0 ;
   float S = ((float) qtd_frases/(float) qtd_palavras) * 100.0 ;
   float indice = (0.0588 * L) - (0.296 * S) - 15.8;
   indice = round(indice);
   if(indice >= 1 && indice < 16) {
     printf("Grade %i\n",(int) indice);

   } else if(indice >= 16) {
      printf("Grade 16+\n");

   } else {
    printf("Before Grade 1\n");
   }

}

int count_letters(string texto, int tamanho)
{
    int counter = 0;
  for(int i = 0; i < tamanho; i++)
  {
     char c = toupper(texto[i]);
      if((c >= 'A' && c <= 'Z'))
      {
         //printf("%c \n",c);
         counter++;
      }
  }
  return counter;
}

int count_words(string texto, int tamanho)
{
    int counter = 0;
  for(int i = 0; i < tamanho; i++)
  {
      if(texto[i] == ' ')
      {
         counter++;
      }
  }

    counter = counter + 1;

  return counter;
}

int count_setences(string texto, int tamanho)
{
     int counter = 0;
  for(int i = 0; i < tamanho; i++)
  {
      if(texto[i] == '.' || texto[i] == '?' || texto[i] == '!')
      {
         counter++;
      }
  }

  return counter;
}
