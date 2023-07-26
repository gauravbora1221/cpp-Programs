#include <iostream>

#include <conio.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
void main()

{

clrscr();

float balance1;

int i,pin,npin,option;

double balance = 10000,withdraw, deposit;

//textcolor(YELLOW);

clrscr();

    cout<<"\t\t\t  ***************************** "<<endl;

    cout<<"\t\t\t    *************************   "<<endl;

    cout<<"\t\t\t      *******  ***  *******     "<<endl;

    cout<<"\t\t\t        *****  ***  *****       "<<endl;

    cout<<"\t\t\t           **  ***  **          "<<endl;

    cout<<"\t\t\t           **  ***  **          "<<endl;

    cout<<"\t\t\t           **  ***  **          "<<endl;

    cout<<"\t\t\t           **  ***  **          "<<endl;

    cout<<"\t\t\t           **  ***  **          "<<endl;

    cout<<"\t\t\t            *  ***  *           "<<endl;

    cout<<"\t\t\t                *               "<<endl;

cout<<"================================================================================";

cout<<"\t\t           Welcome To [ T CUBE ATM ] Service             "<<endl;

cout<<"\t\t                  Architect By:                           "<<endl;

cout<<"\t\t         ####  THE TECHNICAL THAKUR  ####               "<<endl;

cout<<"================================================================================\n";

cout<<"\t\t**************  PIN FOR USER IS 5555   **************\n";



cout<<"\n\t\t\t       =*= WELCOME USER =*= \n";

for (i=0;i<3;i++)

{

cout <<" \t\t\t       Enter Your Pin: ";

cin>>pin;



balance1=balance;

if (pin==5555)

{

textcolor(15);

clrscr();

repeat:



for(i=1;i<=3;i++)

{

cout<<"\n\n";

cout<<"\t\t      *** Automated Teller Machine ***"<< endl;

cout<<"\t\t*******************************************"<<endl;

cout<<"\t\t*                Main Menu                *"<<endl;

cout<<"\t\t*******************************************"<<endl;

cout<<"\t\t*           1 - View My Balance           *"<<endl;

cout<<"\t\t*           2 - Withdraw Cash             *"<<endl;

cout<<"\t\t*           3 - Deposit Funds             *"<<endl;

cout<<"\t\t*           4 - Change Pin                *"<<endl;

cout<<"\t\t*           5 - Exit                      *"<<endl;

cout<<"\t\t*******************************************"<<endl;

cout<<"\t\t*******************************************"<<endl;cout<<"\n";

cout<<"\t\t            Enter Option: ";

cin>>option;



switch(option)

{

case 1:

cout<<"\n\t\t\t [[[% BALANCE INQUIRY %]]]\n\n";

cout<<"\t\t\t****************************"<<endl;

cout<<"\t\t\t  Your Balance Is: rs "<<balance1<<endl;

cout<<"\t\t\t****************************"<<endl;

getch();

clrscr();

goto repeat;

break;



case 2:

repe:



cout<<"\n\t\t\t   [[[% WITHDRAW %]]]";

cout<<"\n\t\t\t Enter amount in Rupees: ";

cin>>withdraw;

if(withdraw<=balance1)

{

balance1 = balance1 - withdraw;

cout<<"\t\t\t You withdrew RS: "<< withdraw<< endl;

cout<<"\t\t\t Your remaining balance is RS: "<< balance1<< endl;

}

else

{

cout<<"\t\t!! You have only Rs.10,000 balance in your account. !!\n";

goto repe;

}

getch();

clrscr();

goto repeat;

break;



case 3:



cout<<"\n\t\t\t  [[[% DEPOSIT %]]]\n";

cout<<"\n\t\t\t Enter amount in RS: ";

cin>>deposit;

balance1 = balance1 + deposit;

cout<<"\n\t\t\t You deposited RS: "<< deposit<< endl;

cout<<"\n\t\t\t Your new balance is RS: "<< balance1<< endl;

getch();

clrscr();

goto repeat;

break;



pinchange: case 4:



cout<<"\n\t\t\t Enter Your Old Pin: ";

cin>>pin;

if(pin==5555)

{

cout<<"\t\t\t Enter New Pin: ";

cin>>npin;

cout<<"\n\t\t\t Pin Changed Sucessfully.";

}

else

{

cout<<"\n\t\t\t Wrong Pin !! Enter Pin Again.\n" ;

goto pinchange;

}

getch();

clrscr();

goto repeat;

break;

case 5:

exit(0);

break;

default:

cout<<"\n\t\t That is an invalid option Plz enter correct option. \n";

getch();

clrscr();

break;

}

}

}

else

cout<<"\t\t\tPls try again!!! Wrong pin entered.\n\n";

}

getch();

}