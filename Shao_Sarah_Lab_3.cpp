//Sarah Shao
//09/30/2024
//Lab 3

#include <iostream>
#include <iomanip>

using namespace std;   // shortcut

int main() //to start the code
{
    cout << setfill ('#') << setw(81) << "" << endl; 
    //changes fill to # for the top line
    cout << "#" << setfill (' ') << setw(80) << "#"<< endl; 
    //changes it to a space instead of #
    cout <<"# Ways to access the Task Manager on your Windows computer:" << setw(22)<< "#" << endl;  
    // first line
    cout <<"#" << setw(80) << "#" << endl;  
    // spaces for box
    cout <<"#       Press the key combination Ctrl + Shift + Escape" << setw(26) << "#"<< endl; 
    // changed the extra spaces into setw too
    cout <<"#" << setw(80) << "#" << endl;  
    // spaces for box
    cout <<"#       Press the key combination Ctrl + Alt + Delete and select \"Task Manager\" #"<< endl;
    cout <<"#" << setw(80) << "#" << endl;  
    // spaces for box
    cout <<"#       Type \"Task Manager\" in the Windows Start menu search" << setw(21) << "#"<< endl;
    cout <<"#" << setw(80) << "#" << endl;  
    // spaces for box
    cout <<"#################################################################################" << endl;

return 0; //returns code

    /*
    #################################################################################
    #                                                                               #
    # Ways to access the Task Manager on your Windows computer:                     #
    #                                                                               #
    #       Press the key combination Ctrl + Shift + Escape                         #
    #                                                                               #
    #       Press the key combination Ctrl + Alt + Delete and select "Task Manager" #
    #                                                                               #
    #       Type "Task Manager" in the Windows Start menu search                    #
    #                                                                               #
    #################################################################################
    */
}