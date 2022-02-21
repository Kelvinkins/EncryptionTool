#include "interface.h"

int main()
{
    Interface interface;
    //welcome message
    interface.displayWelcomeMessage();

    //algorithm list menu
    interface.displayAlgMenu();

    //Input prompt
    interface.setInput();

    //display menu
    interface.displayActionMenu();

//Action promt
    interface.setAction();

    //Encryption Decryption function
    interface.EncrDecr();

    return 0;
}
