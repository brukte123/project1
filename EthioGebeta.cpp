// ETHIO GEBETA 999

#include <iostream>
using namespace std;

int main()
{
     int amount, receiver, additional;
     string start;
     char input, another;
     cout << " _____ _   _     _          ____      _          _        " << endl
          << "| ____| |_| |__ (_) ___    / ___| ___| |__   ___| |_ __ _ " << endl
          << "|  _| | __| '_ \\| |/ _ \\  | |  _ / _ \\ '_ \\ / _ \\ __/ _` |" << endl
          << "| |___| |_| | | | | (_) | | |_| |  __/ |_) |  __/ || (_| |" << endl
          << "|_____|\\__|_| |_|_|\\___/   \\____|\\___|_.__/ \\___|\\__\\__,_|" << endl;
     do
     {
          cout << "press *999#: ";
          cin >> start;
          if (start != "*999#")
               cout << "Invalid start no, write only *999#" << endl
                    << endl;
          else
          {
               cout << "How much Money do you want? ";
               cin >> amount;
               break;
          }
     } while (start != "*999#");
     if (start == "*999#")
     {
     again:
          cout << "1.Package" << endl
               << "2.Birthday Packages" << endl
               << "3.Houry/Daily Unlimited Pack" << endl
               << "4.My Services" << endl
               << "5.To Show Group Members" << endl
               << "6.Quit" << endl
               << "enter your choice: ";
          cin >> input;
          switch (input)
          {
          // PACKAGE
          case '1':
               cout << "1. For yourself" << endl
                    << "2. For gift" << endl;
               cin >> input;
               switch (input)
               {
               // PACKAGE FOR YOURSELF
               case '1':
                    cout << "1.One Birr Package" << endl
                         << "2.Voice Package" << endl
                         << "3.Internet Package" << endl
                         << "4.Unlimited Premium Package" << endl;
                    cin >> input;
                    switch (input)
                    {
                    // ONE BIRR PACKAGE FOR YOURSELF
                    case '1':
                         cout << "1.1 Birr 4 Min for 1 Hour" << endl
                              << "2.1 Birr 20 MB for 1 Hour" << endl
                              << "3.1 Birr 50 SMS for 1 Hour" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 1)
                              {
                                   amount -= 1;
                                   cout << "You have bought 4 Min One Birr Package for 1 Hour" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your are poor" << endl;
                              }
                              break;
                         case '2':
                              if (amount >= 1)
                              {
                                   amount -= 1;
                                   cout << "You have bought 20 MB One Birr Package for 1 Hour" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your are poor" << endl;
                              }
                              break;
                         case '3':
                              if (amount >= 1)
                              {
                                   amount -= 1;
                                   cout << "You have bought 50 SMS One Birr Package for 1 Hour" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your are poor" << endl;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    // VOICE PACKAGE FOR YOURSELF
                    case '2':
                         cout << "1.Daily" << endl
                              << "2.Weekly" << endl
                              << "3.Monthly" << endl;
                         cin >> input;
                         switch (input)
                         {
                         // DAILY VOICE PACKAGE FOR YOURSELF
                         case '1':
                              cout << "1. Birr 3 for 12Min" << endl
                                   << "2. Birr 5 for 20Min" << endl
                                   << "3. Birr 10 for 45Min" << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 3)
                                   {
                                        amount -= 3;
                                        cout << "You have bought 12Min voice package by 3 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 5)
                                   {
                                        amount -= 5;
                                        cout << "You have bought 20Min voice package by 5 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 10)
                                   {
                                        amount -= 10;
                                        cout << "You have bought 45Min voice package by 10 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         // WEEKLY VOICE PACKAGE FOR YOURSELF
                         case '2':
                              cout << "1) 70min by 15br" << endl
                                   << "2) 1000min by 20br " << endl
                                   << "3) 130min by 25br " << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 15)
                                   {
                                        amount -= 15;
                                        cout << "you buy 70min by 15br" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 20)
                                   {
                                        amount -= 20;
                                        cout << "you buy 1000min by 20br" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 25)
                                   {
                                        amount -= 25;
                                        cout << "you buy 130min by 25br" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         // MONTLY VOICE PACKAGE FOR YOURSELF
                         case '3':
                              cout << "1) 150min by 35br" << endl
                                   << "2) 200min by 40br " << endl
                                   << "3) 250min by 50br " << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 35)
                                   {
                                        amount -= 35;
                                        cout << "you buy 150min by 35br" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 40)
                                   {
                                        amount -= 40;
                                        cout << "you buy 200min by 40br" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 50)
                                   {
                                        amount -= 50;
                                        cout << "you buy 250min by 50br" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         default:
                              break;
                         }
                         break;
                    // INTERNET PACKAGE FOR YOURSELF
                    case '3':
                         cout << "1.Daily" << endl
                              << "2.Weekly" << endl
                              << "3.Monthly" << endl;
                         cin >> input;
                         switch (input)
                         {
                              // DAILY INTERNET PACKAGE FOR YOURSELF
                         case '1':
                              cout << "1. Birr 3 for 35 MB" << endl
                                   << "2. Birr 5 for 75 MB" << endl
                                   << "3. Birr 12 for 200 MB" << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 3)
                                   {
                                        amount -= 3;
                                        cout << "You have bought 35 MB voice package by 3 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 5)
                                   {
                                        amount -= 5;
                                        cout << "You have bought 75 MB voice package by 5 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 12)
                                   {
                                        amount -= 12;
                                        cout << "You have bought 200 MB voice package by 12 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                              // WEEKLY INTERNET PACKAGE FOR YOURSELF
                         case '2':
                              cout << "1. Birr 15 for 200 MB" << endl
                                   << "2. Birr 20 for 350 MB" << endl
                                   << "3. Birr 25 for 500 MB" << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 15)
                                   {
                                        amount -= 15;
                                        cout << "You have bought 200 MB voice package by 15 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 20)
                                   {
                                        amount -= 20;
                                        cout << "You have bought 350 MB voice package by 20 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 25)
                                   {
                                        amount -= 25;
                                        cout << "You have bought 500 MB voice package by 25 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                              // MONTHLY INTERNET PACKAGE FOR YOURSELF
                         case '3':
                              cout << "1. Birr 35 for 600 MB" << endl
                                   << "2. Birr 40 for 700 MB" << endl
                                   << "3. Birr 50 for 1000 MB" << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 35)
                                   {
                                        amount -= 35;
                                        cout << "You have bought 600 MB voice package by 35 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 40)
                                   {
                                        amount -= 40;
                                        cout << "You have bought 700 MB voice package by 40 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 50)
                                   {
                                        amount -= 50;
                                        cout << "You have bought 1000 MB voice package by 50 Birr" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         default:
                              break;
                         }
                         break;
                    // UNLIMIED PACKAGE FOR YOURSELF
                    case '4':
                         cout << "1.Weekly" << endl
                              << "2.Monthly" << endl;
                         cin >> input;
                         switch (input)
                         {
                         // WEEKLY UNLIMITED PACKAGE FOR YOURSELF
                         case '1':
                              cout << "Weekly Unlimited Premium Internet Package and SMS" << endl
                                   << "1.Birr 300 for a week" << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 300)
                                   {
                                        amount -= 300;
                                        cout << "You have bought Weekly Unlimited Internet and SMS" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         case '2':
                              cout << "1.Br 999 for Unlimited Voice" << endl
                                   << "2.Br 999 for Unlimited Internet" << endl
                                   << "3.Br 1700 for Unlimited Voice and Internet" << endl;
                              cin >> input;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 999)
                                   {
                                        amount -= 999;
                                        cout << "You have bought Montly Unlimited Voice" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 999)
                                   {
                                        amount -= 999;
                                        cout << "You have bought Montly Unlimited Internet" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 1700)
                                   {
                                        amount -= 1700;
                                        cout << "You have bought Montly Unlimited Voice and Internet" << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         default:
                              break;
                         }
                         break;

                    default:
                         break;
                    }
               // PACKAGE FOR GIFT
               case '2':
                    cout << "1.One Birr Package" << endl
                         << "2.Voice Package" << endl
                         << "3.Internet Package" << endl
                         << "4.Unlimited Premium Package "<<endl;
                    cin >> input;
                    switch (input)
                    {
                    // ONE BIRR PACKAGE FOR GIFT
                    case '1':
                         cout << "1.1 Birr 4 Min for 1 Hour" << endl
                              << "2.1 Birr 20 MB for 1 Hour" << endl
                              << "3.1 Birr 50 SMS for 1 Hour" << endl;
                         cin >> input;
                         cout << "Please enter a number : ";
                         cin >> receiver;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 1)
                              {
                                   amount -= 1;
                                   cout << "You have bought 4 Min One Birr Package for 1 Hour for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your are poor" << endl;
                              }
                              break;
                         case '2':
                              if (amount >= 1)
                              {
                                   amount -= 1;
                                   cout << "You have bought 20 MB One Birr Package for 1 Hour for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your are poor" << endl;
                              }
                              break;
                         case '3':
                              if (amount >= 1)
                              {
                                   amount -= 1;
                                   cout << "You have bought 50 SMS One Birr Package for 1 Hour for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your are poor" << endl;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    // VOICE PACKAGE FOR GIFT
                    case '2':
                         cout << "1.Daily" << endl
                              << "2.Weekly" << endl
                              << "3.Monthly" << endl;
                         cin >> input;
                         switch (input)
                         {
                         // DAILY VOICE PACKAGE FOR GIFT
                         case '1':
                              cout << "1. Birr 3 for 12Min" << endl
                                   << "2. Birr 5 for 20Min" << endl
                                   << "3. Birr 10 for 45Min" << endl;
                              cin >> input;
                              cout << "Please enter a number : ";
                              cin >> receiver;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 3)
                                   {
                                        amount -= 3;
                                        cout << "You have bought 12Min voice package by 3 Birr for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 5)
                                   {
                                        amount -= 5;
                                        cout << "You have bought 20Min voice package by 5 Birr for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 10)
                                   {
                                        amount -= 10;
                                        cout << "You have bought 45Min voice package by 10 Birr for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         // WEEKLY VOICE PACKAGE FOR GIFT
                         case '2':
                              cout << "1) 70min by 15br for " << receiver << endl
                                   << "2) 1000min by 20br " << endl
                                   << "3) 130min by 25br " << endl;
                              cin >> input;
                              cout << "Please enter a number : ";
                              cin >> receiver;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 15)
                                   {
                                        amount -= 15;
                                        cout << "you buy 70min by 15br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 20)
                                   {
                                        amount -= 20;
                                        cout << "you buy 1000min by 20br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 25)
                                   {
                                        amount -= 25;
                                        cout << "you buy 130min by 25br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         // MONTLY VOICE PACKAGE FOR GIFT
                         case '3':
                              cout << "1) 150min by 35br" << endl
                                   << "2) 200min by 40br " << endl
                                   << "3) 250min by 50br " << endl;
                              cin >> input;
                              cout << "Please enter a number : ";
                              cin >> receiver;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 35)
                                   {
                                        amount -= 35;
                                        cout << "you buy 150min by 35br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 40)
                                   {
                                        amount -= 40;
                                        cout << "you buy 200min by 40br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 50)
                                   {
                                        amount -= 50;
                                        cout << "you buy 250min by 50br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         default:
                              break;
                         }
                         break;
                    // INTERNET PACKAGE FOR GIFT
                    case '3':
                         cout << "1.Daily" << endl
                              << "2.Weekly" << endl
                              << "3.Monthly" << endl;
                         cin >> input;
                         switch (input)
                         {
                              // DAILY INTERNET PACKAGE FOR GIFT
                         case '1':
                              cout << "1. Birr 3 for 30 MB" << endl
                                   << "2. Birr 5 for 75 MB" << endl
                                   << "3. Birr 12 for 200 MB" << endl;
                              cin >> input;
                              cout << "Please enter a number : ";
                              cin >> receiver;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 3)
                                   {
                                        amount -= 3;
                                        cout << "You have bought 35 MB voice package by 3 Birr for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 5)
                                   {
                                        amount -= 5;
                                        cout << "You have bought 75 MB voice package by 5 Birrfor " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 10)
                                   {
                                        amount -= 10;
                                        cout << "You have bought 200 MB voice package by 12 Birrfor " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                              // WEEKLY INTERNET PACKAGE FOR GIFT
                         case '2':
                              cout << "1. Birr 15 for 200 MB" << endl
                                   << "2. Birr 20 for 350 MB" << endl
                                   << "3. Birr 25 for 500 MB" << endl;
                              cin >> input;
                              cout << "Please enter a number : ";
                              cin >> receiver;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 15)
                                   {
                                        amount -= 15;
                                        cout << "You have bought 200 MB voice package by 15 Birr for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 20)
                                   {
                                        amount -= 20;
                                        cout << "You have bought 350 MB voice package by 20 Birrfor " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 25)
                                   {
                                        amount -= 25;
                                        cout << "You have bought 500 MB voice package by 25 Birrfor " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                              // MONTHLY INTERNET PACKAGE FOR GIFT
                         case '3':
                              cout << "1. Birr 35 for 600 MB" << endl
                                   << "2. Birr 40 for 700 MB" << endl
                                   << "3. Birr 50 for 1000 MB" << endl;
                              cin >> input;
                              cout << "Please enter a number : ";
                              cin >> receiver;
                              switch (input)
                              {
                              case '1':
                                   if (amount >= 35)
                                   {
                                        amount -= 35;
                                        cout << "You have bought 600 MB voice package by 35 Birr for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '2':
                                   if (amount >= 40)
                                   {
                                        amount -= 40;
                                        cout << "you buy 700MB by 40br for " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              case '3':
                                   if (amount >= 50)
                                   {
                                        amount -= 50;
                                        cout << "You have bought 1000 MB voice package by 50 Birrfor " << receiver << endl
                                             << "Your remaing balance is " << amount << " Birr" << endl
                                             << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                        cin >> another;
                                        if (another == 'Y' or another == 'y')
                                        {
                                             goto again;
                                        }
                                        break;
                                   }
                                   else
                                   {
                                        cout << "Dear customer your balance is insuffient for this service" << endl;
                                        goto again;
                                   }
                                   break;
                              default:
                                   break;
                              }
                              break;
                         default:
                              break;
                         }
                         break;
                    default:
                         break;
                    }
                    // UNLIMITED PACKAGE FOR GIFT
               case '4':
                    cout << "1.Weekly" << endl
                         << "2.Monthly" << endl;
                    cin >> input;
                    switch (input)
                    {
                    // WEEKLY UNLIMITED PACKAGE FOR GIFT
                    case '1':
                         cout << "Weekly Unlimited Premium Internet Package and SMS" << endl
                              << "1.Birr 300 for a week" << endl;
                         cin >> input;
                         cout << "Please enter a number : ";
                         cin >> receiver;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 300)
                              {
                                   amount -= 300;
                                   cout << "You have bought Weekly Unlimited Internet and SMS for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;
                         default:
                              break;
                         }
                         break;
                    // MONTHLY UNLIMITED PACKAGE FOR GIFT
                    case '2':
                         cout << "1.Br 999 for Unlimited Voice" << endl
                              << "2.Br 999 for Unlimited Internet" << endl
                              << "3.Br 1700 for Unlimited Voice and Internet" << endl;
                         cin >> input;
                         cout << "Please enter a number : ";
                         cin >> receiver;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 999)
                              {
                                   amount -= 999;
                                   cout << "You have bought Montly Unlimited Voice for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;
                         case '2':
                              if (amount >= 999)
                              {
                                   amount -= 999;
                                   cout << "You have bought Montly Unlimited Internet for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;
                         case '3':
                              if (amount >= 1700)
                              {
                                   amount -= 1700;
                                   cout << "You have bought Montly Unlimited Voice and Internet for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;
                         default:
                              break;
                         }
                    default:
                         break;
                    }
               default:
                    break;
               }
                    break;
               break;
          // BIRTHDAY
          case '2':
               cout << "1. For yourself" << endl
                    << "2. For gift" << endl;
               cin >> input;
               switch (input)
               {
               // BIRTHDAY PACKAGE FOR YOURSELF
               case '1':
                    cout << "1.Weekly Birthday Discount Package" << endl;
                    cin >> input;
                    switch (input)
                    {
                    case '1':
                         cout << "1.Birr 20 for 130Min" << endl
                              << "2.Birr 45 for 1GB" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 20)
                              {
                                   amount -= 20;
                                   cout << "You have bought 130 Min Birthday Package, Happy Birthday :)" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;
                         case '2':
                              if (amount >= 45)
                              {
                                   amount -= 45;
                                   cout << "You have bought 1 GB Birthday Package, Happy Birthday :)" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;
                         default:
                              break;
                         }
                         break;

                    default:
                         break;
                    }
                    break;
               // BIRTHDAY PACKAGE FOR GIFT
               case '2':
                    cout << "1.Daily" << endl
                         << "2.Weekly" << endl
                         << "3.Monthly" << endl;
                    cin >> input;
                    switch (input)
                    {
                    // DAILY BIRTHDAY PACKAGE FOR GIFT
                    case '1':
                         cout << "1. Birr 12 for 12Min, 160MB, 10SMS" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              cout << "Please enter number: ";
                              cin >> receiver;
                              if (amount >= 12)
                              {
                                   amount -= 12;
                                   cout << "You have bought 12Min, 160MB, 10SMS Birthday Package for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service";
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    // WEEKLY BIRTHDAY PACKAGE FOR GIFT
                    case '2':
                         cout << "1. Birr 50 for 70Min, 590MB, 20SMS" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              cout << "Please enter number: ";
                              cin >> receiver;
                              if (amount >= 50)
                              {
                                   amount -= 50;
                                   cout << "You have bought 70Min, 590MB, 20SMS Birthday Package for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service";
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    // MONTHLY BIRTHDAY PACKAGE FOR GIFT
                    case '3':
                         cout << "1. Birr 140 for 125Min, 2GB, 50SMS" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              cout << "Please enter number: ";
                              cin >> receiver;
                              if (amount >= 140)
                              {
                                   amount -= 140;
                                   cout << "You have bought 125Min, 2GB, 50SMS Birthday Package for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service";
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    default:
                         break;
                    }
                    break;
               default:
                    break;
               }
               break;
          // HOURLY/DAILY UNLIMITED PACK
          case '3':
               cout << "1. For yourself" << endl
                    << "2. For gift" << endl;
               cin >> input;
               switch (input)
               {
               // HOURLY/DAILY UNLIMITED PACK FOR YOURSELF
               case '1':
                    cout << "1. Hourly unlimited Internet" << endl
                         << "2. Daily unlimited Internet" << endl
                         << "3. Daily unlimited Voice" << endl;
                    cin >> input;
                    switch (input)
                    {
                    case '1':
                         cout << "1.Birr 12 for 1-Hour" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 12)
                              {
                                   amount -= 12;
                                   cout << "You have bought 1-Hour Unlimited Package" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    case '2':
                         cout << "1.Birr 55 for 1 day" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 55)
                              {
                                   amount -= 55;
                                   cout << "You have bought 1 day Unlimited Internet Package" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit: ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    case '3':
                         cout << "1.Birr 35 Unlimited Voice" << endl;
                         cin >> input;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 35)
                              {
                                   amount -= 35;
                                   cout << "You have bought 1 day Unlimited Voice Package" << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    default:
                         break;
                    }
                    break;
               // HOURLY/DAILY UNLIMITED PACK FOR GIFT
               case '2':
                    cout << "1. Hourly unlimited Internet" << endl
                         << "2. Daily unlimited Internet" << endl
                         << "3. Daily unlimited Voice" << endl;
                    cin >> input;
                    switch (input)
                    {
                    case '1':
                         cout << "1.Birr 12 for 1-Hour" << endl;
                         cin >> input;
                         cout << "Please enter a number : ";
                         cin >> receiver;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 12)
                              {
                                   amount -= 12;
                                   cout << "You have bought 1-Hour Unlimited Package for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    case '2':
                         cout << "1.Birr 55 for 1 day" << endl;
                         cin >> input;
                         cout << "Please enter a number : ";
                         cin >> receiver;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 55)
                              {
                                   amount -= 55;
                                   cout << "You have bought 1 day Unlimited Internet Package for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    case '3':
                         cout << "1.Birr 35 Unlimited Voice" << endl;
                         cin >> input;
                         cout << "Please enter a number : ";
                         cin >> receiver;
                         switch (input)
                         {
                         case '1':
                              if (amount >= 35)
                              {
                                   amount -= 35;
                                   cout << "You have bought 1 day Unlimited Voice Package for " << receiver << endl
                                        << "Your remaing balance is " << amount << " Birr" << endl
                                        << "Do you want to buy another package, press Y/y for yes or press any to exit ";
                                   cin >> another;
                                   if (another == 'Y' or another == 'y')
                                   {
                                        goto again;
                                   }
                                   break;
                              }
                              else
                              {
                                   cout << "Dear customer your balance is insuffient for this service" << endl;
                                   goto again;
                              }
                              break;

                         default:
                              break;
                         }
                         break;
                    default:
                         break;
                    }
                    break;
               default:
                    break;
               }
               break;
          // MY SERVICE
          case '4':
               cout << "1. Remaining Balance" << endl
                    << "2. I want Money" << endl;
               cin >> input;
               switch (input)
               {
               case '1':
                    cout << "Your Balance is " << amount << endl
                         << "Do you want to return, press Y/y for yes or press any to exit ";
                    cin >> another;
                    if (another == 'Y' or another == 'y')
                    {
                         goto again;
                    }
                    break;
                    break;
               case '2':
                    cout << "Your Balance is now " << amount << endl
                         << "How much Money do you want? ";
                    cin >> additional;
                    amount += additional;
                    goto again;
                    break;
               default:
                    break;
               }
               break;
          // GROUP MEMBERS
          case '5':
               cout << "Group Members" << endl
                    << "1. bruktawit wondmenew  ID1404995" << endl
                    << "2. BEZAWIT MAREW ID1404199" << endl
                    << "3. BICHAWERK amogne IDID1404613" << endl
                    << "4. Elias demle ID1404524" << endl
                    << "5. BEMNET Demse1404707 ID" << endl
                    << "6. Eyob alebachew ID1404495" << endl
                    << "Do you want to return, press Y/y for yes or press any to exit ";
               cin >> another;
               if (another == 'Y' or another == 'y')
               {
                    goto again;
               }
               break;
               break;
          // QUIT
          case '6':
               cout << "Bye there, seen you again soon :)" << endl;
               break;
          default:
               cout << "Incorrect input :/" << endl;
               break;
          }
     }
     return 0;
}
