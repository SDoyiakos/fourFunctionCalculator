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

int factorial(int x){
    int output=1;
    while(x>0){
        output=output*x;
        x--;
    }
    return output;
    
}

float power(int base,int exponent){
    float answer=base;
    if(exponent>0){
        for(int i=1;i<exponent;i++){
            answer=answer*base;
        }
    }
    else if(exponent<0){
        for(int i=0;i<-exponent;i++){
            answer=answer/base;
        }
    }
    else{
        answer=1; // all numbers to the power of 0 are euqal to 1
    }
    return answer;
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
        std::cout << "[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n[5] Factorial\n[6] Exponentiation\n[7] Quit\n" <<std::endl;
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
                std::cout << "please input a natural number:";
                std::cin >> x;
                if(x<0){
                    std::cout << "Factorial only functions on natural numbers\n";
                    x=0;
                    break;
                }
                std::cout << x << "! = " << factorial(x) << std::endl;

                break;
            
            case 6:
                assignInputs();
                std::cout << x << " raised to the power " << y <<" = " << power(x,y) <<std::endl;
                break;
                

            case 7: 
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

