#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT ,gm;
    initgraph(&gd,&gm,"");
    rectangle(100,80,50,40);
    line(100,80,50,30);
    

    getch();
    closegraph();
    return 0;
}