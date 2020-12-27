#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void StartGame(){}
void InsertANumber(){}
void Output()
{
    printf("");
}
int MoveLeft(){printf("2");return 1;}
int MoveRight(){printf("3");return 1;}
int MoveUp(){printf("4");return 1;}
int MoveDown(){printf("1");return 1;}
int main()
{
    int key1,key2,step=0,moved;
    StartGame();
    InsertANumber();
    InsertANumber();
    Output();
    while(1)
    {
        key1=_getch();
        if(key1)
        {
            key2=_getch();
        }
        switch(key2)
        {
            case 75:moved=MoveLeft();break;
            case 77:moved=MoveRight();break;
            case 72:moved=MoveUp();break;
            case 80:moved=MoveDown();break;
        }
        if(moved)
        {
            InsertANumber();
            printf("ÒÆ¶¯²½Êý£º%d\n",++step);
            Output();
        }
    }
    return 0;
}
