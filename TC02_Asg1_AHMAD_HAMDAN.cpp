/*************************************
Program:My_Coin_Box.cpp
Course: TCP1101
Year: 2015/16 Trimester 2
Name: AHMAD HAMDAN
ID: 1131121467
Lecture: TC02
Lab: TT04
Email: aboowaleed.a9@gmail.com
Phone: 011-39007471
*************************************/



#include <iostream>
#include<string>
#include<stdlib.h>
#include<cmath>
using namespace std;

void deposit(double amt);
void menu(double amount);

void withdraw(double am){
        int c = 0 ,c1 = 0, c2 = 0, c3 = 0;
        double input;
        double fiftysum=0, twentysum=0, tensum=0, fivesum=0;
        double balance =  fiftysum + twentysum + tensum + fivesum;
        char m, n;


        cout << "your amount is \t RM" << am << endl;
        cout << "please enter the amount in (RM)...=>  ";
        cin >> input;
        double in = input;
        if (input <=am)
        {

            if (input <= am) {
                    while (input >= 0.5){
                            c = c + 1;
                        input = input - 0.5;
                        cout << input <<endl;

                    }
                    while (input >= 0.2){
                            c1 = c1 + 1;
                        input = input - 0.2;
                        cout << input <<endl;

                    }
                    while (input >= 0.09){
                            c2 = c2 + 1;
                        input = input - 0.09;
                        cout << round(input) << endl;

                    }
                    while(input >= 0.049){
                            c3 = c3 + 1;
                        input = input - 0.049;
                        cout << round(input) <<endl;

                    }
                    cout << "collect your money ..." << endl;
                    cout << "\t 0.5 x" << c << endl;
                    cout << "\t 0.2 x" << c1 << endl;
                    cout << "\t 0.1 x" << c2 << endl;
                    cout << "\t 0.05 x" << c3 << endl << endl;
                    cout << "you still have  RM" << am - in << endl;
            }
        }
            else {
                    cout << "sorry no enough money \n";
                    cout << "--------------------------\n\n\n";
            }



            cout << "press (m/M) to main menu or (n/N) to exit -->";
            cin >> m;


        switch (m){
        case 'm' :
            menu(am - in);
            break;
        case 'M' :
            menu(am - in);
            break;
        case 'N' :
            cout<<endl<<endl;
            cout<<"Thank You"<<endl;
            exit (0);
        case 'n' :
            cout<<endl<<endl;
            cout<<"Thank You"<<endl;
            exit (0);
        default :
            cout << "invalid input\n";
        cout << "---------------\n\n\n\n";
        }

}



void menu(double amount){

    double am = amount;
    cout << "\n\n\n\n\n\n";
    cout << ".........Welcome.........\n\n\n\n";



    cout << "Press (d/D) for deposit.\n\n";
    cout << "Press (w/W) for withdraw.\n\n";
    cout << "Press (n/N) to exit. \n\n";
    char input;
    cin >> input;

    switch(input){
    case 'D' :
        deposit(am);
        break;
    case 'd' :
        deposit(am);
        break;
    case 'w' :
        withdraw(am);
        break;
    case 'W' :
        withdraw(am);
        break;
    case 'N' :
        cout<<endl<<endl;
        cout<<"Thank You"<<endl;
        exit (0);
    case 'n' :
        cout<<endl<<endl;
        cout<<"Thank You"<<endl;
        exit (0);
    default :
        cout << "Invalid input\n";
        cout << "---------------\n\n\n\n";
        menu(am);
    }

}

void deposit(double amt){


                int fifty, twenty, ten, five;

                double amount;
                double add;

                double fiftysum=0, twentysum=0, tensum=0, fivesum=0;
                char m, n;

        cout << "How many (50C) do you want to insert? \t";
        cin >> fifty;
        fiftysum += 0.5*fifty;

        cout << "How many (20C) do you want to insert? \t";
        cin >> twenty;
        twentysum += 0.2*twenty;

        cout << "How many (10C) do you want to insert? \t";
        cin >> ten;
        tensum += 0.1*ten;

        cout << "How many (5C) do you want to insert? \t";
        cin >> five;
        fivesum += 0.05*five;


        add = (fifty*0.5) + (twenty*0.2) + (ten*0.1) + (five*0.05);
        cout << "You have added \t (RM" << add << ")to your account\n\n\n";

        amount = amt;
        amount = amount + add;
        cout << "You have in your account:          \t    RM" << amount << endl << endl;


            cout << "Press (m/M) for main menu or (n/N) to exit -->\t";
            cin >> m;


        switch (m){
        case 'm' :
            menu(amount);
            break;
        case 'M' :
            menu(amount);
            break;
        case 'N' :
            cout<<endl<<endl;
            cout<<"...Thank You..."<<endl;
            exit (0);
        case 'n' :
            cout<<endl<<endl;
            cout<<"...Thank You..."<<endl;
            exit (0);
        default :
            cout << "Invalid input\n";
            cout << "---------------\n\n\n\n";
        }



}
int main()
{
    char again;
    double am = 0;

       menu(am);


    return 0;
}
