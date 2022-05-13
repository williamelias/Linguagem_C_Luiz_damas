#include<stdio.h>
// Program of to show an hash game
//   - with two gamers

// functions statements
void printTable();
void getDataofGammer();
void setValueOfCell();

const char *ptr;
int main(int argc, char const *argv[])
{
    /*array was filled with '0'*/

    ptr = NULL;
    char hashtoalter[3][3] = {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
    printf("Below is a table for to be filled:\n\n");
    printTable(0,hashtoalter);
    printf("\nThe first user is 'X' and the second user is 'O'\n");

    getDataofGammer(hashtoalter);

    return 0;
}

//Function to set a value of cell in hash game
void setValueOfCell(int i, char hash[3][3]){

    int l,c;

    if (i%2 == 0) {

        printf("Jogador 1 - Qual a linha vc escolhe:");
        scanf("%d",&l);

        printf("Jogador 1 - Qual a coluna vc escolhe vc escolhe:");
        scanf("%d",&c);

        hash[l][c] = 'X';
        ptr = (char*)&hash;
    }
    else
    {

        printf("Jogador 2 - Qual a linha vc escolhe:");
        scanf("%d",&l);

        printf("Jogador 2 - Qual a coluna vc escolhe vc escolhe:");
        scanf("%d",&c);

       hash[l][c] = 'O';
       ptr = (char*)&hash;
    }
    
}

//Function to loop all cells of hash game
void getDataofGammer(char hash[3][3]){

    for(int i = 0; i < 9; i++)
    {
        setValueOfCell(i, hash);
        printTable(i,hash);
    }
    
}

//Function to print a hash table
void printTable(int i, char var[3][3]){

    printf("O estado do jogo é o seguinte:\n\n");
    for(int i = 0; i < 3; i++)
    {
       for( int j = 0; j < 3; j++)
       {
          if (j != 2) {
              printf("%c|",var[i][j]);
          }
          else{
             printf("%c\n",var[i][j]);
          }
          
       }    

    }
    printf("\n");
    
}


