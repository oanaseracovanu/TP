#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int verificare(char *sir, char **a, int j, int k){
    if(j==k) return 0;
    if((sir[strlen(sir)-1] == a[j][1]) && (sir[strlen(sir)-2] == a[j][0])) return j;
    else if(((int)sir[strlen(sir)-1] == (int)a[j][1]) && ((int)sir[strlen(sir)-2] == (int)a[j][0]+32)) return j;
    verificare(sir,a,j+1,k);
}

int main(){
  char *a[20], *sep=" , ", *p, sir[100];
  int k=0, i=0, j;
  fgets(sir, 100, stdin);
  p=strtok(sir, sep);
  while(p!=NULL){
    k++;
    a[k-1]=(char*)malloc(strlen(p)*sizeof(char*));
    strcpy(a[k-1], p);
    p = strtok(NULL, sep);
  }
  strcpy(sir, a[0]);
  while(i<k){
    j=verificare(sir,a,i+1,k);
    if(j){
        strcat(sir, "-");
        strcat(sir, a[j]);
        i=j;
    }
    else i++;
  }
  printf("%s\n", sir);
  return 0;
}