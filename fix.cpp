/*
    Name(s): Muhammad Sufi Kai, Goo Kai Han, Adrian Tan, Chai Jun Quan, Vieshal a/l Patchiapan
    Student ID(s): 1211101046, 1211101295, 1211101147, 1211101235, 1211103245
    Program Description: A simple and user friendly e-menu interface that allows user to order
    ‎‎‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎‏‏‎ ‎food from a list of menu and generate a summary at the end of order.
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>

using namespace std;

// GLOBAL VARIABLES
string name, table_number, phone_number;
char gotostart;


//
//                    GLOBAL FUNCTIONS
//

void title() {   // NAME, TABLE NO., PHONE NO. TEXT
  cout << "\t\t\t----------Emiru's Family Restaurant-----------\n\n";

  cout << "Enter Your Name   : " << name << endl;

  cout << "Enter Table Number: " << table_number << endl;

  cout << "Enter Phone No.   : " << phone_number << endl;
}


void invalid_box() { // FOR INVALID VALUES USE THIS BOX
  cout << "\t\t\t   *************************************\n";
  cout << "\t\t\t   * Invalid choice. Please try again! *" << endl;
  cout << "\t\t\t   *************************************\n";
}


void repeatcheck() { // VALUE CHECKER TO CHECK VALUE Y OR N
  cout << "\nWould you like to order anything else? [Y / N]: ";
  cin >> gotostart;
  while (gotostart != 'Y' && gotostart != 'y'  && gotostart != 'N'  && gotostart != 'n' ) {

    cout << "\n"; //empty LINE
    invalid_box();

    cout << "\nPlease re-enter Y for Yes and N for No." << endl;
    cout << "Would you like to order anything else? [Y / N]:  ";
    cin >> gotostart;
  }
}


main()
{
    /*        ARRAYS
                    0    1    2
    var_name[3] = {"a", "b", "c"};

    cout << var_name[0];
    Output: a

    Reference/Format:
    string sd1[3] = {"food name", "price", "description"}
                                                                */

    /*        TEXT FORMAT

    \n = NEWLINE
    \t = TAB


                          REFERENCE
    From line 179 - 308, this is the program structure.
    Use this as your reference.


    ****************************************************************************
    *                           CODE STARTS HERE                               *
    *                                                                          *
    ****************************************************************************


    //Initializing & Declaring Variables
    //
    //            Foods
    //
    //  Special Dish -> sd
    //  Malay Cuisine -> mc
    //  Chinese Cuisine -> cc
    //  Indian Cuisine -> ic
    //  Drinks -> d
    //
    //  For pricing sdp1 means Special Dish 1's price; applies to others.
    //  All the values can be changed here without going through the whole code.
    //
    //
    //                    THANK YOU FOR READING!
    //                                                                                            */

    // 1. Special Dish
    string sd1[3] = {"Japanese Omelette Rice", "RM15.00", "\n  [ Omurice, or Japanese Omelette Rice, is a sweet-and-savory chicken fried  \n    rice flavored with ketchup and wrapped in a soft, thin layer of egg.    ]"},
           sd2[3] = {"Apple Pie", "RM13.00", "\n  [ Sliced apples under a lattice crust get bathed with a sweet \n    buttery sauce before baking.\t\t\t\t\t    ]"},
           sd3[3] = {"Bahamas's Cracked Conch", "RM69.00", "\n  [ Conch meat is breaded in a batter made with flour, then deep-fried \n    until golden and crispy. \t\t\t\t\t\t    ]"},
           sd4[3] = {"Pan-Seared Foie Gras", "RM120.00", "\n  [ This pan-seared foie gras is an elegant appetizer made with brioche, \n    foie gras, a grapefruit-Chardonnay sauce, and apple puree.\t\t    ]"};
    float sdp1 = 15.00,
          sdp2 = 13.00,
          sdp3 = 69.00,
          sdp4 = 120.00;


    // 2. Malay Cuisine
    string mc1[3] = {"Nasi Lemak with Chicken Rendang",   "RM15.00",  "\n  [ A rice dish cooked in coconut milk and pandan leaf, served with \n    additional meats stewed in coconut milk and spices. \t\t   ]  "},
           mc2[3] = {"Nasi Kerabu",        "RM15.00",  "\n  [ Blue-colored rice with dried fish, fried chicken, crackers, \n    pickles and other salads.\t\t\t\t\t\t   ]"},
           mc3[3] = {"Ikan Bakar Malacca Style",        "RM13.00",  "\n  [ A grilled fish dish that contains flavorings like bumbu, kecap manis, \n    sambal, and is covered in a banana leaf and cooked on a charcoal fire. ]"},
           mc4[3] = {"Asam Pedas Che' Rokiah",        "RM11.00",  "\n  [ Classic Malaysian dish that's sour, fiery hot, with 1/4 seabass fish \n    served with white rice and tastes extraordinarily satisfying.\t   ]"};
    float mcp1 = 15.00,
          mcp2 = 15.00,
          mcp3 = 13.00,
          mcp4 = 11.00;


    // 3. Chinese Cuisine
    string cc1[3] = {"Wonton Soup",           "RM14.00",  "\n  [ A Chinese soup that is prepared with wontons, which are small dumpling-like morsels \n    filled with various meats, seafood, or vegetables, a clear broth, and several seasonings. \t\t]"},
           cc2[3] = {"Dim Sum",               "RM17.50",  "\n  [ A traditional Chinese food consisting of a variety of items (such as steamed or fried dumplings, \n    pieces of cooked chicken, and rice balls) served in small portions.\t\t\t\t\t]"},
           cc3[3] = {"Char kuey teow",        "RM15.00",  "\n  [ Stir fried Chinese-inspired rice noodle dish from Maritime Southeast Asia.\t\t\t\t]"},
           cc4[3] = {"Hainanese chicken rice","RM17.50",  "\n  [ A dish that consists of succulent steamed white chicken cut into bite-size pieces \n    and served on fragrant rice with some light soy sauce.\t\t\t\t\t\t] "};
    float ccp1 = 14.00,
          ccp2 = 17.50,
          ccp3 = 15.00,
          ccp4 = 17.50;


    // 4. Indian Cuisine
    string ic1[3] = {"Aaloo Parotta",  "RM15.00",  "\n  [ Unleavened whole wheat flatbread stuffed with a savory spiced potato mixture.\t  ] "},
           ic2[3] = {"Dum Briyani",   "RM15.00",  "\n  [ The meat is marinated and cooked along with short grain and fine rice \n    and make air-cooked in claypot.\t\t\t\t\t\t\t  ]"},
           ic3[3] = {"Chicken tandoori ",		    "RM13.00",  "\n  [ A dish of roasted chicken marinated in yogurt and generously spiced, giving the meat \n    its trademark red colour.\t\t\t\t\t\t\t\t  ]"},
           ic4[3] = {"Chicken Tikka", "RM11.00",  "\n  [ Consisting of roasted marinated chicken chunks (Chicken Tikka) in spiced curry sauce. ]"};
    float icp1 = 15.00,
          icp2 = 15.00,
          icp3 = 13.00,
          icp4 = 11.00;


    // 5. Drinks
    string d1[3] = {"Valencia Fizz",   "RM7.00",  "\n  [ A mouth-watering blend of fresh Valencia oranges \n    with lime juice and soda.\t\t\t\t\t\t\t    ]"},
           d2[3] = {"Mango Mastani",   "RM8.00",  "\n  [ A unique and tasty desi style mango milkshake recipe made with ice cream,\n    mango pulp and a generous amount of dry fruits.\t\t\t\t    ]"},
           d3[3] = {"Cendol",   "RM10.00", "\n  [ An iced sweet dessert that contains droplets of green rice flour jelly,\n    coconut milk and palm sugar syrup.\t\t\t\t\t\t    ]"},
           d4[3] = {"Hot Chocolate",   "RM7.00",  "\n  [ A cup of fresh hot chocolate topped with dollops of whipped cream.\t\t    ]"};
    float dp1 = 7.00,
          dp2 = 8.00,
          dp3 = 10.00,
          dp4 = 7.00;




    /*
    //       Selection Variables
    //                                */


    int choice, pchoice;
    float finalprice = 0; //for total accumulated price
    string summary;

    // Decimal  value
    cout << fixed << showpoint << setprecision(2);

    /*
    //            Main Menu
    //                                */

    cout << "\t\t\t----------Emiru's Family Restaurant-----------\n\n";

    cout << "Enter Your Name   : ";
    getline(cin ,name);

    cout << "Enter Table Number: ";
    cin >> table_number;

    cout << "Enter Phone No.   : ";
    cin >> phone_number;


    /*
    //           Main Food Menu
    //                                */

    foodmenu:
    cout << "\t\t\t\t--------Menu--------\n\n";

    cout << "1. Special Dish of the Month" << endl;
    cout << "2. Malay Cuisine" << endl;
    cout << "3. Chinese Cuisine" << endl;
    cout << "4. Indian Cuisine" << endl;
    cout << "5. Drinks" << endl;

    cout << "\nEnter your Choice: ";
    cin >> choice; //User input for Menu Selection

    system("CLS"); //Clear console


    /*
    //            Special Dish
    //                                        */


    if (choice == 1)
        {
            system("CLS");
            cout << "\t\t\t\t--------Special Dish--------\n\n";
            cout << "\n1. " << sd1[0] << "\t\t" << "RM" << sdp1 << "\n   " << sd1[2] << endl;
            cout << "\n\n2. " << sd2[0] << "\t\t\t\t" << "RM" << sdp2 << "\n   " << sd2[2] << endl;
            cout << "\n\n3. " << sd3[0] << "\t\t" << "RM" << sdp3 << "\n   " << sd3[2] << endl;
            cout << "\n\n4. " << sd4[0] << "\t\t\t" << "RM" << sdp4 << "\n   " << sd4[2] << endl;
            cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

            cout << "\nEnter food of choice: ";
            cin >> pchoice;

            // Input check using while loop
            while (pchoice < 1 || pchoice > 5) {
                system("CLS");

                cout << "\t\t\t\t--------Special Dish--------\n\n";

                //Call invalid_box() to use this box again. LINE 26
                cout << "\t\t\t   *************************************\n";
                cout << "\t\t\t   * Invalid choice. Please try again! *" << endl;
                cout << "\t\t\t   *************************************\n";

                cout << "\n1. " << sd1[0] << "\t\t" << "RM" << sdp1 << "\n   " << sd1[2] << endl;
                cout << "\n\n2. " << sd2[0] << "\t\t\t\t" << "RM" << sdp2 << "\n   " << sd2[2] << endl;
                cout << "\n\n3. " << sd3[0] << "\t\t" << "RM" << sdp3 << "\n   " << sd3[2] << endl;
                cout << "\n\n4. " << sd4[0] << "\t\t\t" << "RM" << sdp4 << "\n   " << sd4[2] << endl;
                cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

                cout << "\nRe-enter your choice: ";
                cin >> pchoice;
            }

            // Switch for selection
            switch (pchoice)
            {
                case 1:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "\nYou have selected " << sd1[0];
                    finalprice = finalprice + sdp1;
                    summary = summary + "\t\t   | " + sd1[0] + "\t     | " + sd1[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 2:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << sd2[0];
                    finalprice = finalprice + sdp2;
                    summary = summary + "\t\t   | " + sd2[0] + "\t\t\t     | " + sd2[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 3:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << sd3[0];
                    finalprice = finalprice + sdp3;
                    summary = summary + "\t\t   | " + sd3[0] + "\t     | " + sd3[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 4:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << sd4[0];
                    finalprice = finalprice + sdp4;
                    summary = summary + "\t\t   | " + sd4[0] + "\t     | " + sd4[1] + "       |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 5:
                    {
                    system("CLS");
                    title();
                    goto foodmenu;
                    }

            }

            /*
            //              Value Checker & Repeat Order Function
            //      (For value checker, call repeatcheck() func - line 27)
            //                                                                    */
            cout << "\nWould you like to order anything else? [Y / N]: ";
            cin >> gotostart;
            while (gotostart != 'Y' && gotostart != 'y'  && gotostart != 'N'  && gotostart != 'n' ) {

              cout << "\n"; //empty LINE
              invalid_box();

              cout << "\nPlease re-enter Y for Yes and N for No." << endl;
              cout << "Would you like to order anything else? [Y / N]:  ";
              cin >> gotostart;
            }

            // Repeat order starts here .....
            if (gotostart == 'Y' || gotostart == 'y') {
              system("CLS");
              title();
              goto foodmenu;
            }
            else {
              goto ordersummary;
            }
        }

    /*
    //              Malay Cuisine
    //                                        */


    else if (choice == 2)
        {
            system("CLS");
            cout << "\t\t\t\t--------Malay Cuisine--------\n\n";
            cout << "\n1. " << mc1[0] << "\t" << "RM" << mcp1 << "\n   " << mc1[2] << endl;
            cout << "\n\n2. " << mc2[0] << "\t\t\t\t" << "RM" << mcp2 << "\n   " << mc2[2] << endl;
            cout << "\n\n3. " << mc3[0] << "\t\t" << "RM" << mcp3 << "\n   " << mc3[2] << endl;
            cout << "\n\n4. " << mc4[0] << "\t\t" << "RM" << mcp4 << "\n   " << mc4[2] << endl;
            cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

            cout << "\nEnter food of choice: ";
            cin >> pchoice;

            // Input check using while loop
            while (pchoice < 1 || pchoice > 5) {
                system("CLS");

                cout << "\t\t\t\t--------Malay Cuisine--------\n\n";

                //Call invalid_box() to use this box again. LINE 26
                cout << "\t\t\t   *************************************\n";
                cout << "\t\t\t   * Invalid choice. Please try again! *" << endl;
                cout << "\t\t\t   *************************************\n";

                cout << "\n1. " << mc1[0] << "\t" << "RM" << mcp1 << "\n   " << mc1[2] << endl;
                cout << "\n\n2. " << mc2[0] << "\t\t\t\t" << "RM" << mcp2 << "\n   " << mc2[2] << endl;
                cout << "\n\n3. " << mc3[0] << "\t\t" << "RM" << mcp3 << "\n   " << mc3[2] << endl;
                cout << "\n\n4. " << mc4[0] << "\t\t" << "RM" << mcp4 << "\n   " << mc4[2] << endl;
                cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

                cout << "\nRe-enter your choice: ";
                cin >> pchoice;
            }

            // Switch for selection
            switch (pchoice)
            {
                case 1:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "\nYou have selected " << mc1[0];
                    finalprice = finalprice + mcp1;
                    summary = summary + "\t\t   | " + mc1[0] + " | " + mc1[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 2:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << mc2[0];
                    finalprice = finalprice + mcp2;
                    summary = summary + "\t\t   | " + mc2[0] + "\t\t     | " + mc2[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 3:
                    {
                    system("CLS");
                    title();
                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << mc3[0];
                    finalprice = finalprice + mcp3;
                    summary = summary + "\t\t   | " + mc3[0] + "\t     | " + mc3[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 4:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << mc4[0];
                    finalprice = finalprice + mcp4;
                    summary = summary + "\t\t   | " + mc4[0] + "\t     | " + mc4[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 5:
                    {
                    system("CLS");
                    title();
                    goto foodmenu;
                    }
            }
            //repeat order + checker
            repeatcheck();
            if (gotostart == 'Y' || gotostart == 'y') {
              system("CLS");
              title();
              goto foodmenu;
            }
            else {
              goto ordersummary;
            }
        }


    /*
    //             Chinese Cuisine
    //                                        */



    else if (choice == 3)
        {
           system("CLS");
           cout << "\t\t\t\t--------Chinese Cuisine--------\n\n";
           cout << "\n1. " << cc1[0] << "\t\t\t\t" << "RM" << ccp1 << "\n   " << cc1[2] << endl;
           cout << "\n\n2. " << cc2[0] << "\t\t\t\t" << "RM" << ccp2 << "\n   " << cc2[2] << endl;
           cout << "\n\n3. " << cc3[0] << "\t\t\t" << "RM" << ccp3 << "\n   " << cc3[2] << endl;
           cout << "\n\n4. " << cc4[0] << "\t\t" << "RM" << ccp4 << "\n   " << cc4[2] << endl;
           cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

           cout << "\nEnter food of choice: ";
           cin >> pchoice;

           // Input check using while loop
           while (pchoice < 1 || pchoice > 5) {
               system("CLS");

               cout << "\t\t\t\t--------Chinese Cuisine--------\n\n";

               //Call invalid_box() to use this box again. LINE 26
               cout << "\t\t\t   *************************************\n";
               cout << "\t\t\t   * Invalid choice. Please try again! *" << endl;
               cout << "\t\t\t   *************************************\n";

               cout << "\n1. " << cc1[0] << "\t" << "RM" << ccp1 << "\n   " << cc1[2] << endl;
               cout << "\n\n2. " << cc2[0] << "\t\t\t\t" << "RM" << ccp2 << "\n   " << cc2[2] << endl;
               cout << "\n\n3. " << cc3[0] << "\t\t" << "RM" << ccp3 << "\n   " << cc3[2] << endl;
               cout << "\n\n4. " << cc4[0] << "\t\t" << "RM" << ccp4 << "\n   " << cc4[2] << endl;
               cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

               cout << "\nRe-enter your choice: ";
               cin >> pchoice;
           }

           // Switch for selection
           switch (pchoice)
           {
               case 1:
                   {
                   system("CLS");
                   title();

                   cout << "\t\t\t\t--------Your Order---------\n";
                   cout << "\nYou have selected " << cc1[0];
                   finalprice = finalprice + ccp1;
                   summary = summary + "\t\t   | " + cc1[0] + "\t\t     | " + cc1[1] + "        |\n";

                   cout << "\n\nYour current total bill is RM " << finalprice;
                   break;
                   }
               case 2:
                   {
                   system("CLS");
                   title();

                   cout << "\t\t\t\t--------Your Order---------\n";
                   cout << "You have selected " << cc2[0];
                   finalprice = finalprice + ccp2;
                   summary = summary + "\t\t   | " + cc2[0] + "\t\t\t     | " + cc2[1] + "        |\n";

                   cout << "\n\nYour current total bill is RM " << finalprice;
                   break;
                   }
               case 3:
                   {
                   system("CLS");
                   title();
                   cout << "\t\t\t\t--------Your Order---------\n";
                   cout << "You have selected " << cc3[0];
                   finalprice = finalprice + ccp3;
                   summary = summary + " \t\t   | " + cc3[0] + "\t\t     | " + cc3[1] + "        |\n";

                   cout << "\n\nYour current total bill is RM " << finalprice;
                   break;
                   }
               case 4:
                   {
                   system("CLS");
                   title();

                   cout << "\t\t\t\t--------Your Order---------\n";
                   cout << "You have selected " << cc4[0];
                   finalprice = finalprice + ccp4;
                   summary = summary + "\t\t   | " + cc4[0] + "\t     | " + cc4[1] + "        |\n";

                   cout << "\n\nYour current total bill is RM " << finalprice;
                   break;
                   }
               case 5:
                   {
                   system("CLS");
                   title();
                   goto foodmenu;
                   }
           }
           //repeat order + checker
           repeatcheck();
           if (gotostart == 'Y' || gotostart == 'y') {
             system("CLS");
             title();
             goto foodmenu;
           }
           else {
             goto ordersummary;
           }
       }


  /*
  //            Indian Cuisine
  //                                        */



   else if (choice == 4)
        {
            system("CLS");
            cout << "\t\t\t\t--------Indian Cuisine--------\n\n";
            cout << "\n1. " << ic1[0] << "\t\t\t" << "RM" << icp1 << "\n   " << ic1[2] << endl;
            cout << "\n\n2. " << ic2[0] << "\t\t\t\t" << "RM" << icp2 << "\n   " << ic2[2] << endl;
            cout << "\n\n3. " << ic3[0] << "\t\t\t" << "RM" << icp3 << "\n   " << ic3[2] << endl;
            cout << "\n\n4. " << ic4[0] << "\t\t\t" << "RM" << icp4 << "\n   " << ic4[2] << endl;
            cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

            cout << "\nEnter food of choice: ";
            cin >> pchoice;

            // Input check using while loop
            while (pchoice < 1 || pchoice > 5) {
                system("CLS");

                cout << "\t\t\t\t--------Indian Cuisine--------\n\n";

                //Call invalid_box() to use this box again. LINE 26
                cout << "\t\t\t   *************************************\n";
                cout << "\t\t\t   * Invalid choice. Please try again! *" << endl;
                cout << "\t\t\t   *************************************\n";

                cout << "\n1. " << ic1[0] << "\t" << "RM" << icp1 << "\n   " << ic1[2] << endl;
                cout << "\n\n2. " << ic2[0] << "\t\t\t\t" << "RM" << icp2 << "\n   " << ic2[2] << endl;
                cout << "\n\n3. " << ic3[0] << "\t\t" << "RM" << icp3 << "\n   " << ic3[2] << endl;
                cout << "\n\n4. " << ic4[0] << "\t\t" << "RM" << icp4 << "\n   " << ic4[2] << endl;
                cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

                cout << "\nRe-enter your choice: ";
                cin >> pchoice;
            }

            // Switch for selection
            switch (pchoice)
            {
                case 1:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "\nYou have selected " << ic1[0];
                    finalprice = finalprice + icp1;
                    summary = summary + "\t\t   | " + ic1[0] + " \t\t     | " + ic1[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 2:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << ic2[0];
                    finalprice = finalprice + icp2;
                    summary = summary + "\t\t   | " + ic2[0] + "\t\t     | " + ic2[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 3:
                    {
                    system("CLS");
                    title();
                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << ic3[0];
                    finalprice = finalprice + icp3;
                    summary = summary + "\t\t   | " + ic3[0] + "\t\t     | " + ic3[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 4:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << ic4[0];
                    finalprice = finalprice + icp4;
                    summary = summary + "\t\t   | " + ic4[0] + "\t\t     | " + ic4[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 5:
                    {
                    system("CLS");
                    title();
                    goto foodmenu;
                    }
            }
            //repeat order + checker
            repeatcheck();
            if (gotostart == 'Y' || gotostart == 'y') {
              system("CLS");
              title();
              goto foodmenu;
            }
            else {
              goto ordersummary;
            }

        }


    /*
    //               Drinks
    //                                        */

    else if (choice == 5)
        {
            system("CLS");
            cout << "\t\t\t\t--------Drinks--------\n\n";
            cout << "\n1. " << d1[0] << "\t\t\t" << "RM" << dp1 << "\n   " << d1[2] << endl;
            cout << "\n\n2. " << d2[0] << "\t\t\t" << "RM" << dp2 << "\n   " << d2[2] << endl;
            cout << "\n\n3. " << d3[0] << "\t\t\t\t" << "RM" << dp3 << "\n   " << d3[2] << endl;
            cout << "\n\n4. " << d4[0] << "\t\t\t" << "RM" << dp4 << "\n   " << d4[2] << endl;
            cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

            cout << "\nEnter drinks of choice: ";
            cin >> pchoice;

            // Input check using while loop
            while (pchoice < 1 || pchoice > 5) {
                system("CLS");

                cout << "\t\t\t\t--------Drinks--------\n\n";

                //Call invalid_box() to use this box again. LINE 26
                cout << "\t\t\t   *************************************\n";
                cout << "\t\t\t   * Invalid choice. Please try again! *" << endl;
                cout << "\t\t\t   *************************************\n";

                cout << "\n1. " << d1[0] << "\t" << "RM" << dp1 << "\n   " << d1[2] << endl;
                cout << "\n\n2. " << d2[0] << "\t\t\t\t" << "RM" << dp2 << "\n   " << d2[2] << endl;
                cout << "\n\n3. " << d3[0] << "\t\t" << "RM" << dp3 << "\n   " << d3[2] << endl;
                cout << "\n\n4. " << d4[0] << "\t\t" << "RM" << dp4 << "\n   " << d4[2] << endl;
                cout << "\n\n5. " << "Insert 5 to return to previous menu." << endl;

                cout << "\nRe-enter your choice: ";
                cin >> pchoice;
            }

            // Switch for selection
            switch (pchoice)
            {
                case 1:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "\nYou have selected " << d1[0];
                    finalprice = finalprice + dp1;
                    summary = summary + "\t\t   | " + d1[0] + "\t\t     | " + d1[1] + "         |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 2:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << d2[0];
                    finalprice = finalprice + dp2;
                    summary = summary + "\t\t   | " + d2[0] + "\t\t     | " + d2[1] + "         |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 3:
                    {
                    system("CLS");
                    title();
                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << d3[0];
                    finalprice = finalprice + dp3;
                    summary = summary + "\t\t   | " + d3[0] + "\t\t\t     | " + d3[1] + "        |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 4:
                    {
                    system("CLS");
                    title();

                    cout << "\t\t\t\t--------Your Order---------\n";
                    cout << "You have selected " << d4[0];
                    finalprice = finalprice + dp4;
                    summary = summary + "\t\t   | " + d4[0] + "\t\t     | " + d4[1] + "         |\n";

                    cout << "\n\nYour current total bill is RM " << finalprice;
                    break;
                    }
                case 5:
                    {
                    system("CLS");
                    title();
                    goto foodmenu;
                    }
            }
            //repeat order + checker
            repeatcheck();
            if (gotostart == 'Y' || gotostart == 'y') {
              system("CLS");
              title();
              goto foodmenu;
            }
            else {
              goto ordersummary;
            }
        }

    else {
        title();
        invalid_box();
        goto foodmenu;
    }


    /*
    //                     END SCREEN
    //                                                              */
    ordersummary:
    system("CLS");
    title();
    cout << "\t\t\t\t--------Order Summary--------\n\n";

    cout << "\t\t   +--------------------------------------------------+\n";
    cout << "\t\t   | Name                            |    Price       |\n";
    cout << "\t\t   +---------------------------------+----------------+\n";
    cout << summary;
    cout << "\t\t   |                                 |                |\n";
    cout << "\t\t   |                                 |                |\n";
    cout << "\t\t   +--------------------------------------------------+\n";
    cout << "\t\t     Total                           | RM" << finalprice << "           \n";
    cout << "\t\t   +---------------------------------+----------------+\n";


}
