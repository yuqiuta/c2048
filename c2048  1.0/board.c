#include "board.h"
#include <stdio.h>
#define ROW 4
#define COL 4
static int cells[ROW][COL];
void StartGame()
{
    int i,j;
    for(i=0;i<ROW;i++)
        for(j=0;j<COL;j++)
            cells[ROW][COL]=0;
}
static void OutputLine(int row)
{
    int j;
    for(j=0;j<COL;j++)
    {
        printf("©¦");
        if(cells[row][j]==0)
            printf("        ");
        else
            printf("%8d",cells[row][j]);
    }
    printf("©¦\n");
}
void InsertANumber(){}
void Output()
{
    printf("©±©¥©¥©¥©¥©Ñ©¥©¥©¥©¥©Ñ©¥©¥©¥©¥©Ñ©¥©¥©¥©¥©·\n");
    OutputLine(0);
    printf("©Á©¥©¥©¥©¥©ã©¥©¥©¥©¥©ã©¥©¥©¥©¥©ã©¥©¥©¥©¥©Ì\n");
    OutputLine(1);
    printf("©Á©¥©¥©¥©¥©ã©¥©¥©¥©¥©ã©¥©¥©¥©¥©ã©¥©¥©¥©¥©Ì\n");
    OutputLine(2);
    printf("©Á©¥©¥©¥©¥©ã©¥©¥©¥©¥©ã©¥©¥©¥©¥©ã©¥©¥©¥©¥©Ì\n");
    OutputLine(3);
    printf("©»©¥©¥©¥©¥©Ú©¥©¥©¥©¥©Ú©¥©¥©¥©¥©Ú©¥©¥©¥©¥©¾\n");
}
int MoveLeft(){return 1;}
int MoveRight(){return 1;}
int MoveUp(){return 1;}
int MoveDown(){return 1;}
