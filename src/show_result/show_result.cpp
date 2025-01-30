#include <iostream>
#include "show_result.h"
#include "graphics.h"
// #include <conio.h>
using std::cout, std::endl;

void Show_Result::drawResult()
{
    initgraph(600, 600);
    setbkcolor(YELLOW);
    cleardevice();

    cout << "Draw Circles:" << endl;
    setlinecolor(GREEN);
    setlinestyle(PS_SOLID, 4);
    circle(230, 230, 150);
    circle(230, 230, 210);

    system("pause");
    closegraph();
}
