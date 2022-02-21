

#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>
#include <string>
#include <stdlib.h>
 using namespace std;
class Interface
{
    public:
    void displayWelcomeMessage();
    void displayAlgMenu();
    void displayActionMenu();
    string getInput();
    string getAction();
    void setInput();
    void setAction();
    void EncrDecr();


private:
    string input="0";
    string action="0";


};

#endif
