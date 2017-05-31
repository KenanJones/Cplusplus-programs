#include <iostream>

int getUserInput(std::string name, int min, int max)
{
    using namespace std;
    int input;
    while(true)
    {
        cout << "Please Enter a Value For " << name << ": ";
        cin >> input;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "\nError: that input is invalid.\n";
        }
        else
        {
            std::cin.ignore(32767,'\n');
            if(input > max)
                {std::cout << "Error: that value is too big.\n";}
            else if(input < min)
                {std::cout << "Error: that value is too small.\n";}
            else break;
        }
    }

    return input;
}

void setPolicies()
{
    getUserInput("Tax",0,25);
    getUserInput("Policy",0,10);
}

bool playRound()
{
    setPolicies();
    /*
    generateResources();
    printInfo();
    buildingPhase();
    printInfo();
    */
    return true;
}

int main()
{
    playRound();
    return 0;
}
