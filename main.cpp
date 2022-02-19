#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, Welcome to Encryption tool!" << endl
         <<"Encrypt your text data with any algorithm"<<endl;

    cout<<"Select Algorithm>>"<<endl
        <<"1: AES"<<endl
        <<"2: DES"<<endl
        <<"3: 3DES"<<endl
        <<"4: CAESAR CIPHER"<<endl;

    int input=0;
    string selectedAlgo="";

    cin>>input;
    cout<<">>";

    while(input>4||input <1)
    {
        cout<<"Invalid option, please try again!"<<endl;
        cin>>input;
        cout<<">>";

    }


    int action=0;

    cout<<"Select Action>>"<<endl
        <<"1: Encrypt"<<endl
        <<"2: Decrypt"<<endl;



        cin>>action;
    cout<<">>";

    while(action>2||action <1)
    {
        cout<<"Invalid action, please try again!"<<endl;
        cin>>action;
        cout<<">>";

    }

    switch(input)
    {

    case 1:
        cout<<"you entered  AES"<<endl;
        if(action==1)
        {

        }
        else if(action==2)
        {

        }

        break;

    case 2:
        cout<<"you entered  DES"<<endl;
        selectedAlgo="DES";
        if(action==1)
        {

        }
        else if(action==2)
        {

        }
        break;
    case 3:
        cout<<"you entered  3DES"<<endl;
        if(action==1)
        {

        }
        else if(action==2)
        {

        }
        break;
    case 4:
        cout<<"you entered  CAESAR CIPHER"<<endl;
        if(action==1)
        {

        }
        else if(action==2)
        {

        }
        break;
    default:
        cout<<"Please enter a valid algorithm"<<endl;

        break;
    }





    return 0;
}
