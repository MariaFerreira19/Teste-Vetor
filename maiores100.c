#include<stdio.h>

int main(){
  int vet[5]; 
  int maiores; 
  int i;

  for(i= 0; i < 5; i++){
    scanf("%d",&vet[i]);
  }
  maiores = 0;
  for(i= 0; i < 5; i++){
     if (vet[i] > 100)
         maiores = maiores + 1;
  }

  printf("\nConstam %d números maiores que 100.", maiores);
}