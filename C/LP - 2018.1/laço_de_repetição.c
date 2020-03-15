#include <stdio.h>
int main()
{
    int ramos,linhas;
    char carac;
    
    printf("Digite o numero de ramos: ");
    scanf("%d",&ramos);
    for(linhas=1;linhas<=ramos;linhas++)
    {
        for(carac=1;carac<=linhas;carac++)
        {
            putchar('A'+linhas-1);  
        }
        putchar('\n');
        if(carac=='Z')
        {carac='A';}
        else {carac++;}
    }
    return 1;

}
