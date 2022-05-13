#include <stdio.h>
#include <stdlib.h>

char tela[3][3];
int i, j, x, y, teste=1, pl, velha=0;

void disp(void);
void testa(int pl);
void play1(void);
void play2(void); 

void main()
{//abre main()
   for(i=0;i<3;i++)//for1
      for(j=0;j<3;j++)//for2
         tela[i][j]=' ';
      
      while(teste!=0)//while1
      {//abre while teste      
         
         //if(velha!=9)
         //{//abre if velha
         if(teste!=0)
         {//abre if play1
                  
            play1();
            if(tela[x][y]==' ')//if menor
            {//abre if menor
               tela[x][y]='X';
               system("cls");
               velha++;
               testa(pl);      
            }//fecha if menor
            else
            {
               system("cls");
               printf("Jah esta sendo usada essa possisao!!\n"); 
               printf("Pressione qualquer tecla para entrar novo valor\n");
               getch();
               system("cls");
               play1();
            }
         
         
         }//fecha if play1
         if(teste!=0)
         {//abre if play2
                     
            play2();
            if(tela[x][y]==' ')
            {
               velha++;
               tela[x][y]='O';
               system("cls");
               testa(pl);   
            }
            else
            {
               system("cls");
               printf("Jah esta sendo usada essa possisao!!\n"); 
               printf("Pressione qualquer tecla para entrar novo valor\n");
               getch();
               system("cls");
               play2();
            }
         
         
         }//fecha if play2
         //}//fecha if velha
         /*else
         {
            disp();
            printf("Deu VELHA!!!");
         }*/
        }//fecha while teste





}//fecha main()

void disp(void)
{//abre tela()
   printf("   1   2   3   Y\n");
   printf(" 1 %c | %c | %c \n",tela[0][0],tela[0][1],tela[0][2]);
   printf("  ---|---|--- \n ");
   printf("2 %c | %c | %c \n",tela[1][0],tela[1][1],tela[1][2]);
   printf("  ---|---|--- \n ");
   printf("3 %c | %c | %c \n",tela[2][0],tela[2][1],tela[2][2]);

   printf("X\n");



}//fecha tela()

void testa(int pl)
{//abre teste
   /*-------------TESTA NA HORIZONTAL--------*/
         if(x==0)
         if((tela[0][0]==tela[0][1]) && (tela[0][1]==tela[0][2]))
         {//if1
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
         teste=0;
         }//if1
         
         if(x==1)
         if((tela[1][0]==tela[1][1]) && (tela[1][1]==tela[1][2]))
         {//if2
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }//if2
         if(x==2)
         if((tela[2][0]==tela[2][1]) && (tela[2][1]==tela[2][2]))
         {//if3
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }//if3
         /*----------TESTA NA VERTICAL--------*/

         if(y==0)
         if((tela[0][0]==tela[1][0]) && (tela[1][0]==tela[2][0]))
         {//if1
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }//if1
         
         if(y==1)
         if((tela[0][1]==tela[1][1]) && (tela[1][1]==tela[2][1]))
         {//if2
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }//if2
         if(y==2)
         if((tela[0][2]==tela[1][2]) && (tela[1][2]==tela[2][2]))
         {//if3
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }//if3
         
          
         if(((x==0)&&(y==0))||((x==1)&&(y==1))||((x==2)&&(y==2)))
         {
         if((tela[0][0]==tela[1][1]) && (tela[0][0]==tela[2][2]))
         {
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }
         }
         
         
         if(((x==0)&&(y==2))||((x==1)&&(y==1))||((x==2)&&(y==0)))
         {
         if((tela[0][2]==tela[1][1]) && (tela[0][2]==tela[2][0]))
         {
            disp();
            printf("JOGADOR **%i** GANHOU!! \n",pl);
            teste=0;
         }
         }
         


}//fecha teste

void play1(void)
{//abre play1
   disp();
   printf("Jogador 1: Digite a coordenada **X**: ");
   scanf("%i",&x);
   printf("Jogador 1: Digite a coordenada **Y**: ");
   scanf("%i",&y);
   pl=1;
   x--;
   y--;
      
}//fecha play1

void play2(void)
{//abre play2
   disp();      
   printf("Jogador 2: Digite a coordenada **X**: ");
   scanf("%i",&x);
   printf("Jogador 2: Digite a coordenada **Y**: ");
   scanf("%i",&y);
   pl=2;
   x--;
   y--;

}//fecha play2