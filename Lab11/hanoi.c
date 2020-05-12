#include <stdio.h>
 

void hanoi(int n, char t_initial, char t_final, char t_intermediar)
{

    if (n > 1) 
    {
        hanoi(n - 1, t_initial, t_intermediar, t_final);
        printf("%c -> %c\n", t_initial, t_final);
        hanoi(n - 1, t_intermediar, t_final, t_initial);
    }
  
    else 
    {
        printf("%c -> %c\n", t_initial, t_final);
    }
}
 int main(void){
    int n; 
    printf("Introduceti numarul de discuri:");
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');
    return 0;
}