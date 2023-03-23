#include <iostream>
#include<cstdlib> //Trabaja con números random
using namespace std;

int validation(int a, int b);

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 400) + 1;
    int guess;
    int tries = 0;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {
        guess = validation(1, 400);
        tries++;

        if (guess > secretNumber + 3) 
        {
            cout << "Muy Alto\n\n";
        }
        else if (guess < secretNumber - 3)
        {
            cout << "Muy Bajo\n\n";
        }
        else if (guess < secretNumber) 
        {
            cout << "Bajo pero cerca\n\n";
        }
        else if (guess > secretNumber)
        {
            cout << "Alto pero cerca\n\n";
        }
        else 
        {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";
        }
    } while (guess != secretNumber);
}

int validation(int a, int b)
{
    int c;
    do
    {
        cout << "Introduzca un numero (1-400)" << endl;
        cin >> c;
    } while (c > b or c > a);
    return c;
}