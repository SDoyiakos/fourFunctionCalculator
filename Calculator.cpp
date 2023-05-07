#include <iostream>

    int x;
    int y;



    int addition(int x, int y){
    return x+y;
}

int subtraction(int x,int y){
    return x-y;
}

int multiplication(int x,int y){
    return x*y;
}

float division(int x, int y){
    return ((float) x /(float) y);
}

void assignInputs(){
    std::cout << "Input your first number:";
    std::cin >> x;
    std::cout <<"Input your second number:";
    std::cin >> y;
}

int main(){
    std::cout << "Welcome to the Calculator" << std::endl;
    int userSelection;
    int state=1;
    x=0;
    y=0;

    while (state!=0)
    {
        std::cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n[5] Quit" <<std::endl;
        std::cin >> userSelection;
        switch(userSelection){
            case 1:
                assignInputs();
                std::cout << x << " + " << y << " = " << addition(x,y) << std::endl;
            break;
                

            case 2:
                assignInputs();
                std::cout << x << " - " << y << " = " << subtraction(x,y) << std::endl;
            break;

            case 3:
                assignInputs();
                std::cout << x << " X " << y << " = " << multiplication(x,y) << std::endl;
            break;

            case 4:
                assignInputs();
                std::cout << x << " / " << y << " = " << division(x,y) << std::endl;
            break;

            case 5: 
            std::cout << "Goodbye";
            state=0;
            break;

            default:
            std::cout << "Please input an integer 1 through 5\n";
            std::cin.clear();// clear bad input flag
            std::cin.ignore();  //ignore bad input
            break;



        }
    }
    



    return 0;
}

