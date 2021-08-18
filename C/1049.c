#include <stdio.h>
#include <string.h>

int main() 
{
  char to[20], tm[20], ta[20];
  scanf ("%s %s %s", to, tm, ta);
    if ((strcmp(to,"vertebrado") == 0) && (strcmp(tm,"ave") == 0) && (strcmp(ta,"carnivoro") == 0)){
      printf("aguia\n");
    }
    else if ((strcmp(to,"vertebrado") == 0) && (strcmp(tm,"ave") == 0) && (strcmp(ta,"onivoro") == 0)){
      printf("pomba\n");   
    }
    else if ((strcmp(to,"vertebrado") == 0) && (strcmp(tm,"mamifero") == 0) && (strcmp(ta,"onivoro") == 0)){
      printf("homem\n");
    }
    else if ((strcmp(to,"vertebrado") == 0) && (strcmp(tm,"mamifero") == 0) && (strcmp(ta,"herbivoro") == 0)){
      printf("vaca\n");
    }
    else if((strcmp(to,"invertebrado") == 0) && (strcmp(tm,"inseto") == 0) && (strcmp(ta,"hematofago") == 0)){
      printf("pulga\n");
    }
    else if ((strcmp(to,"invertebrado") == 0) && (strcmp(tm,"inseto") == 0) && (strcmp(ta,"herbivoro") == 0)){
      printf("lagarta\n");
    }
    else if ((strcmp(to,"invertebrado") == 0) && (strcmp(tm,"anelideo") == 0) && (strcmp(ta,"hematofago") == 0)){
      printf("sanguessuga\n");
    }
    else if ((strcmp(to,"invertebrado") == 0) && (strcmp(tm,"anelideo") == 0) && (strcmp(ta,"onivoro") == 0)){
      printf("minhoca\n");
    }
  return 0;
}