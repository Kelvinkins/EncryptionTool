#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Interface
{
public:
    void displayWelcomeMessage()
    {
        //welcome message
        cout << "Hello, Welcome to Encryption tool!" << endl
             <<"Encrypt your text data with any algorithm"<<endl;
    }
    void displayAlgMenu()
    {
        //algorithm list menu
        cout<<"Select Algorithm>>"<<endl
            <<"1: AES"<<endl
            <<"2: DES"<<endl
            <<"3: 3DES"<<endl
            <<"4: CAESAR CIPHER"<<endl
            <<endl
            <<"5: EXIT"<<endl;
    }

    void displayActionMenu()
    {

        cout<<"Select Action>>"<<endl
            <<"1: Encrypt"<<endl
            <<"2: Decrypt"<<endl;
    }


    string getInput()
    {
        return input;
    }

    string getAction()
    {
        return action;
    }
    void setInput()
    {
        try
        {
            cout<<">>";
            cin>>input;
            if(stoi(input)==5)
            {

                exit(0);
            }



            while(stoi(input)>5||stoi(input) <1)
            {
                cout<<"Invalid option, please try again!"<<endl;
                setInput();

            }

        }
        catch(...)
        {

            cout<<"there was an error processing the input. Please enter a valid number between 1 and 4"<<endl;
            setInput();
        }
    }



    void setAction()
    {
        try
        {
            cout<<">>";
            cin>>action;
            //Continue prompting while user enters invalid option
            while(stoi(action)>2||stoi(action) <1)
            {
                cout<<"Invalid action, please try again!"<<endl;
                setAction();

            }
        }
        catch(...)
        {

            cout<<"there was an error processing the input. Please enter a valid number between 1 and 2"<<endl;
            setAction();
        }
    }

    void EncrDecr()
    {
        switch(stoi(this->input))
        {

        case 1:
            cout<<"you entered  AES"<<endl;
            if(stoi(this->input)==1)
            {
            }
            else if(stoi(this->input)==2)
            {

            }

            break;

        case 2:
            cout<<"you entered  DES"<<endl;
            if(stoi(this->input)==1)
            {

            }
            else if(stoi(this->input)==2)
            {

            }
            break;
        case 3:
            cout<<"you entered  3DES"<<endl;
            if(stoi(this->input)==1)
            {

            }
            else if(stoi(this->input)==2)
            {

            }
            break;
        case 4:
            cout<<"you entered  CAESAR CIPHER"<<endl;
            if(stoi(this->input)==1)
            {

            }
            else if(stoi(this->input)==2)
            {

            }
            break;
        case 5:

            cout<<"The program will now exit"<<endl;
            break;

        default:
            cout<<"Please enter a valid algorithm"<<endl;

            break;
        }

        //algorithm list menu
        displayAlgMenu();

        //First prompt
        setInput();

        displayActionMenu();

        setAction();
    }


private:
    string input="0";
    string action="0";



};

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
