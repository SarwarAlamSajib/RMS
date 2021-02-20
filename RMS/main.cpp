/*
Author name:Sarwar Alam Sajib (LUCT)
*/

#include <iostream>

using namespace std;

int main()
{

   int user,password, totalCust=0;

   double totalSell=0;

   double chicken_pizza=280, lamb_pizza=290, paparoni_pizza=320, special_pizza=360, cheese_pizza=390,none=0;

   double chicken_burger=145, beef_burger=155, special_burger=170, twister_burger=200, delight_burger=240,noNe=0;

   double water=20, cocacola=35, pepsi=35, tea=40, coffe=60, NoNe=0;

   int pizza_order, burger_order, drink_order, choice,log_in_as;

   int quantity1 , quantity2, quantity3;

   double price, total_price, total_amount;

   string r,name;

   char ans;

do{

    cout << "\t**********************************************************\n" ;

    cout << "\t************************  WELCOME  ***********************\n" ;

    cout << "\t************************    TO   *************************\n" ;

    cout << "\t********************   BONDHU BRITTO   *******************\n" ;

    cout << "\t**********************  RESTAURANT  **********************\n" ;

    cout << "\t**********************************************************\n" ;



    cout << "1. Log in to Order" << endl;

    cout << "2. Log in as Manager" << endl;

    cout<< "3. Exit"<<endl;



    cout << "Please enter the number(1/2/3)to log in or exit: ";

    cin >> log_in_as;

    if (log_in_as==1){



    do{

        cout<< "Enter customer name: ";



        cin >> name;

        cout << "\nHello Mr/Mrs"<<"  "<<name<<endl;

        cout<<"\n==============================================================\n";
        cout<<"====================Here is your Menu========================= \n";
        cout<<"==Menu will change automatically after selecting your choice== \n";
        cout<<"==============================================================\n" <<endl;

  cout<<"\t\tPIZZA MENU \n";

  cout<<"\t1. CHICKEN PIZZA-----280TK \n";

  cout<<"\t2. LAMB PIZZA--------290TK \n";

  cout<<"\t3. PAPARONI PIZZA----320TK \n";

  cout<<"\t4. SPECIAL PIZZA-----360TK \n";

  cout<<"\t5. CHEESE PIZZA------390TK \n";

  cout<<"\t0. NONE--------------  0TK \n";


  cout<<"Please enter the number of Pizza from the menu that you want (1/2/3/4/5/0) : ";

  cin>>pizza_order;

  cout << "How many you want: ";

  cin>> quantity1;



  cout<<"==================================================================== \n";

  cout<<"\t\tBURGER MENU \n";

  cout<<"\t1. CHICKEN BURGER----------145TK \n";

  cout<<"\t2. BEEF BURGER-------------155TK \n";

  cout<<"\t3. SPECIAL BURGER----------170TK \n";

  cout<<"\t4. TWISTER-----------------200TK \n";

  cout<<"\t5. BEEF/CHICKEN DELIGHT----240TK \n";

  cout<<"\t0. NONE--------------------  0TK \n";



  cout<<"Which one you want?(1/2/3/4/5/0) : ";

  cin>>burger_order;

  cout << "How many do you want? : ";

  cin >> quantity2;





  cout<<"=================================================================== \n";

  cout<<"\t\tDRINKS MENU \n";

  cout<<"\t1. NORMAL WATER----------20TK \n";

  cout<<"\t2. COCACOLA  ------------35TK \n";

  cout<<"\t3. PEPSI  ---------------35TK \n";

  cout<<"\t4. SPECIAL TEA-----------40TK \n";

  cout<<"\t5. SPECIAL COFFE---------60TK \n";

  cout<<"\t0. NONE------------------ 0TK \n";





  cout<<"Which one you want(1/2/3/4/5) : ";

  cin>>drink_order;

  cout << "How many do you want?: ";

  cin >>quantity3;



      switch(pizza_order){

        case 1:

          price=chicken_pizza * quantity1;

        break;

       case 2:

          price=lamb_pizza * quantity1;

        break;

       case 3:

         price=paparoni_pizza * quantity1;

        break;

       case 4:

         price=special_pizza * quantity1;

        break;

        case 5:

         price=cheese_pizza * quantity1;

         break;

        case 0:

              price= none* quantity1;

        break;

       default:

         cout << "You type wrong number. Invalid choice";

      }

  switch(burger_order){

    case 1:

        price=price+ chicken_burger * quantity2;

    break;

    case 2:

      price= price+ beef_burger * quantity2;

    break;

    case 3:

      price=price + special_burger*quantity2;

    break;

    case 4:

      price=price + twister_burger * quantity2;

    break;

    case 5:

      price=price + delight_burger * quantity2;

    break;

    case 0:

              price=price+ noNe* quantity2;

        break;

    default:

         cout << "You type wrong number. Invalid choice";

    }

  switch(drink_order){

    case 1:

       price=price+ water * quantity3;

    break;

    case 2:

      price=price + cocacola * quantity3;

    break;

    case 3:

      price=price + pepsi * quantity3;

    break;

    case 4:

      price=price + tea * quantity3;

    break;

    case 5:

      price = price + coffe * quantity3;

    break;
    case 0:

              price= NoNe* quantity3;

        break;

    default:

         cout << "You type wrong number. Invalid choice";

  }

   total_price= (pizza_order)  + (burger_order) + (drink_order) ;

   cout <<"\nThe price is: "<< price <<endl;


   total_price=price+ (price * 0.06);

   cout << "The total Price including 6% Government Tax: "<< total_price<<endl;



    totalSell += total_price;

    totalCust++;



   cout << " \nDo you want to use it for another customer? Please type 'y'/'n' "<<endl;

    cin>>ans;

    if (ans== 'n'|| ans=='N'){

   cout << "Thank you, Please Come again" <<endl;}

}while(ans!='n');

}


else if (log_in_as==2){

cout<<"Manager please type your 5 digit password: "<<endl;
cin >>password;


if (password==12345){
    do{

cout << "\n No. of customers: "<<totalCust;

cout << "\n Total Sales     : "<<totalSell<<"\n\n To Return please type  'r': ";

  	 cin >> r;

  	 }while (r != "r");

   }

   else{cout<<"Sorry you entered WRONG password. PLEASE try again"<<endl;;}

}

}while(log_in_as!=3);

  cout<<"\n Thank you, Please come again."<<endl;

  }
