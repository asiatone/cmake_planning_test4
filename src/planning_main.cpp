#include <iostream>
#include "processes.h"
#include "show_result.h"
using std::cout, std::endl;

int main()
{
    cout << "planing start" << endl;
    Process pro;
    pro.planProcess();
    cout << "main of planning end" << endl;

    cout << "show result" << endl;
    Show_Result show;
    show.drawResult();
    
    return 0;
}
