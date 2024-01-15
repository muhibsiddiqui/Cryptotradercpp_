#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include<math.h>
#include<string>
#include<fstream>
#include<vector>
#include <cstdio> 
using namespace std;

// Class created for binding
// all account details together


float value1()
{
    srand(time(NULL));

    double stock_value = 24528.0;

    double change = (rand() % 11 - 5) / 100.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value2()
{
    srand(time(NULL));

    double stock_value = 1685.0;

    double change = (rand() % 11 - 5) / 100.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value3()
{
    srand(time(NULL));

    double stock_value = 307.71;

    double change = (rand() % 11 - 5) / 100.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value4()
{
    srand(time(NULL));

    double stock_value = 0.34;

    double change = (rand() % 11 - 5) / 1000.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value5()
{
    srand(time(NULL));

    double stock_value = 0.37;

    double change = (rand() % 11 - 5) / 1000.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value6()
{
    srand(time(NULL));

    double stock_value = 20.43;

    double change = (rand() % 11 - 5) / 1000.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value7()
{
    srand(time(NULL));

    double stock_value = 0.073;

    double change = (rand() % 11 - 5) / 1000.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value8()
{
    srand(time(NULL));

    double stock_value = 6.3;

    double change = (rand() % 11 - 5) / 100.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value9()
{
    srand(time(NULL));

    double stock_value = 0.000011;

    double change = (rand() % 11 - 5) / 10000.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

float value0()
{
    srand(time(NULL));

    double stock_value = 16.48;

    double change = (rand() % 11 - 5) / 1000.0;

    // Update the stock value
    stock_value += change * stock_value;

    return stock_value;
}

//********************************************************************

class Account {
    // Basic Variables declared
public:
    //struct record r;

    double balance;

    int  eth, cardano, binance, xrp, sol, pol, avax, shiba, dogecoin, bitcoin;

    //int dogecoin;
    //int bitcoin;
    int deposit, withdraw;
    int total_equity = 100;
    int predict;
    float dogecoin_value = value7();
    float bitcoin_value = value1();
    float eth_value = value2();
    float cardano_value = value4();
    float binance_value = value3();
    float xrp_value = value5();
    float sol_value = value6();
    float pol_value = value8();
    float avax_value = value0();
    float shiba_value = value9();
    int crypto_invest;
    int crypto_return;
    int id;
    string name;
    string pass;
    int age;
    string ans1, ans2, ans3;


    // Vector declared
    vector<pair<string, int> > transactions;

    // Checking All Transactions
    void History()
    {
        cout << "Displaying All transactions\n";
        for (auto it : transactions) {
            cout << it.first << " " << it.second << endl;
        }

        char temp;
        cout << "Do you want to clear all transactions:";
        cin >> temp;

        int no = transactions.size();

        // Clearing All transactions
        if (temp == 'Y') {
            transactions.clear();
            cout << "Total transactions cleared:" << no
                << endl;
        }
        else {
            cout << "Total transaction:" << no << endl;
        }
    }

    void update() {
        dogecoin_value = value7();
        bitcoin_value = value1();
        eth_value = value2();
        cardano_value = value4();
        binance_value = value3();
        xrp_value = value5();
        sol_value = value6();
        pol_value = value8();
        avax_value = value0();
        shiba_value = value9();
    }

    void display() {
        cout << "Enter a number to display the corresponding cryptocurrency value:" << endl;
        cout << "1. Bitcoin (BTC)\t" << bitcoin_value << endl;
        cout << "2. Ethereum (ETH)\t" << eth_value << endl;
        cout << "3. Cardano (ADA)\t" << cardano_value << endl;
        cout << "4. Binance Coin (BNB)\t" << binance_value << endl;
        cout << "5. XRP (XRP)\t" << xrp_value << endl;
        cout << "6. Solana (SOL)\t" << sol_value << endl;
        cout << "7. Dogecoin (DOGE)\t" << dogecoin_value << endl;
        cout << "8. Polkadot (DOT)\t" << pol_value << endl;
        cout << "9. SHIBA INU (SHIB)\t" << shiba_value << endl;
        cout << "10. AVAX (AVAX)\t" << avax_value << endl;
    }

    Account()
    {
        crypto_invest = 0;
        crypto_return = 0;
        total_equity = 100;

        balance = 0;
        dogecoin = 0;
        bitcoin = 0;
        eth = 0;
        cardano = 0;
        binance = 0;
        xrp = 0;
        sol = 0;
        pol = 0;
        avax = 0;
        shiba = 0;

        withdraw = 0;
        deposit = 0;

    }
};


class info {
public:

    // Get account Details
    void Get_account_information(Account &a)
    {
        srand(time(0));
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, a.name);
        cout << "Enter password: ";
        cin >> a.pass;
        cout << "Enter age: ";
        cin >> a.age;
        a.id = rand() % 9999 + 1000;

    }

    void display(Account &a) {

        //fstream file1;
        //string name1;
        //int id1;
        //file1.open("file1", ios::in);
        ////file1 >> name1;
        //getline(file1, name1);
        //file1 >> id1;

        cout << "Name: " << a.name << endl;
        cout << "ID: " << a.id << endl;
        //cout << "Money Details:\n";
        cout << "Bank Balance:" << a.balance << endl;
        cout << "Dogecoin:" << a.dogecoin << endl;
        cout << "Bitcoin:" << a.bitcoin << endl;

        //file1.close();

    }

};

//*********************************************************************

class dep_and_with {
public:
    // Deposit Cash
    bool Deposit(int money,Account &a)
    {
        a.deposit = money;
        a.balance += money;
        a.transactions.push_back({ "Deposit:", money });
        return true;
    }



    // Withdraw Cash
    bool Withdraw(int money,Account &a)
    {
        if (money > a.balance) {
            return false;
        }

        a.withdraw += money;
        a.balance -= money;
        a.transactions.push_back({ "Withdraw:", money });
        return true;

    }

};

class buy_sell{

public:
    //struct record r;

    //Account a;
    
    // Buy Crypto function
    bool buy_crypto(Account &a)
    {
        a.update();

        int option;
        a.display();
        cin >> option;
        int coins;
        // Checking equity
        if (a.total_equity != 0) {

            // Checking if random number is divisible by
            // 251 to check (random case for buying  crypto
            // used)
            //cout << "\n\n\t\tLUCCCCCCCCKKKKKKKKKKK: " << luck << "\n\n";

            cout << "How many coins do you want to purchase?";
            cin >> coins;

            if (1) {
                if (option == 1)
                {
                    if (a.balance < a.bitcoin_value) {
                        return false;
                    }
                    a.bitcoin += coins;
                    a.balance -= a.bitcoin_value;
                    a.crypto_invest += (a.bitcoin) * a.bitcoin_value;
                    a.transactions.push_back({ "bitcoin Purchased: ", a.bitcoin_value });
                }
                else if (option == 2)
                {
                    if (a.balance < a.eth_value) {
                        return false;
                    }
                    a.eth += coins;
                    a.balance -= a.eth_value;
                    a.crypto_invest += (a.eth) * a.eth_value;
                    a.transactions.push_back({ "Ethereum Purchased: ", a.eth_value });
                }
                else if (option == 3)
                {
                    if (a.balance < a.cardano_value) {
                        return false;
                    }
                    a.cardano += coins;
                    a.balance -= a.cardano_value;
                    a.crypto_invest += (a.cardano) * a.cardano_value;
                    a.transactions.push_back({ "Cardano Purchased :",a.cardano_value });
                }

                else if (option == 4)
                {
                    if (a.balance < a.binance_value) {
                        return false;
                    }
                    a.binance += coins;
                    a.balance -= a.binance_value;
                    a.crypto_invest += (a.binance) * a.binance_value;
                    a.transactions.push_back({ "Binance Purchased :",a.binance_value });
                }
                else if (option == 5)
                {
                    if (a.balance < a.xrp_value) {
                        return false;
                    }
                    a.xrp += coins;
                    a.balance -= a.xrp_value;
                    a.crypto_invest += (a.xrp) * a.xrp_value;
                    a.transactions.push_back({ "XRP Purchased: ",a.xrp_value });
                }
                else if (option == 6)
                {
                    if (a.balance < a.sol_value) {
                        return false;
                    }
                    a.sol += coins;
                    a.balance -= a.sol_value;
                    a.crypto_invest += (a.sol) * a.sol_value;
                    a.transactions.push_back({ "Solana Purchase :",a.sol_value });

                }
                else if (option == 7)
                {
                    if (a.balance < a.dogecoin_value) {
                        return false;
                    }
                    a.dogecoin += coins;
                    a.balance -= a.dogecoin_value;
                    a.crypto_invest += (a.dogecoin) * a.dogecoin_value;
                    a.transactions.push_back({ "Dogecoin Purchased: ", a.dogecoin_value });
                }
                else if (option == 8)
                {
                    if (a.balance < a.pol_value) {
                        return false;
                    }
                    a.pol += coins;
                    a.balance -= a.pol_value;
                    a.crypto_invest += (a.pol) * a.pol_value;
                    a.transactions.push_back({ "PolkaDot Purchased :",a.pol_value });
                }
                else if (option == 9)
                {
                    if (a.balance < a.shiba_value) {
                        return false;
                    }
                    a.shiba += coins;
                    a.balance -= a.shiba_value;
                    a.crypto_invest += (a.shiba) * a.shiba_value;
                    a.transactions.push_back({ "Shiba Inu Purchased :",a.shiba_value });
                }
                else if (option == 0)
                {
                    if (a.balance < a.avax_value) {
                        return false;
                    }
                    a.avax += coins;
                    a.balance -= a.avax_value;
                    a.crypto_invest += (a.avax) * a.avax_value;
                    a.transactions.push_back({ "avax Purchased :",a.avax_value });
                }

            }
            else {
                return false;
            }

        }
        else {
            return false;
        }


    }

    // Selling crypto function
    bool sell_crypto(Account &a)
    {
        int option;
        //cout << "Want to sell the Coins:(PRESS)\nBITCOIN(1)\nETHEREUM(2)\nCARDANO(3)\nBINANCE(4)\nXRP(5)" << endl;
        //cout << "SOLANA(6)\nDOGECOIN(7)\nPOLKA DOT(8)\nSHIBA(9)\nAVAX(0)\n";
        
        a.update();
        a.display();

        cin >> option;
        int coins;

        cout << "How many coins do you want to sell?";
        cin >> coins;
        
        

        if (option == 1) {
            if (a.bitcoin == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.bitcoin_value;
                a.balance += a.bitcoin_value;
                a.transactions.push_back({ "Bitcoin Sold:", a.bitcoin_value });
                a.bitcoin -= coins;
            }
        }

        else if (option == 2) {
            if (a.eth == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.eth_value;
                a.balance += a.eth_value;
                a.transactions.push_back({ "Ethereum Sold:", a.eth_value });
                a.eth -= coins;
            }
        }



        else if (option == 3) {
            if (a.cardano == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.cardano_value;
                a.balance += a.cardano_value;
                a.transactions.push_back({ "Cardano Sold:", a.cardano_value });
                a.cardano -= coins;
            }
        }

        else if (option == 4) {
            if (a.binance == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.binance_value;
                a.balance += a.binance_value;
                a.transactions.push_back({ "Binance Sold:", a.binance_value });
                a.binance -= coins;
            }
        }

        else if (option == 5) {
            if (a.xrp == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.xrp_value;
                a.balance += a.xrp_value;
                a.transactions.push_back({ "XRP Sold:", a.xrp_value });
                a.xrp -= coins;
            }
        }

        else if (option == 6) {
            if (a.sol == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.sol_value;
                a.balance += a.sol_value;
                a.transactions.push_back({ "Solana Sold:", a.sol_value });
                a.sol -= coins;
            }
        }

        else if (option == 7) {
            if (a.dogecoin == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.dogecoin_value;
                a.balance += a.dogecoin_value;
                a.transactions.push_back({ "Dogecoin Sold:", a.dogecoin_value });
                a.dogecoin -= coins;
            }
        }

        else if (option == 8) {
            if (a.pol == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.pol_value;
                a.balance += a.pol_value;
                a.transactions.push_back({ "Polka Dot Sold:", a.pol_value });
                a.pol -= coins;
            }
        }

        else if (option == 9) {
            if (a.shiba == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.shiba_value;
                a.balance += a.bitcoin_value;
                a.transactions.push_back({ "Shiba Inu Sold:", a.shiba_value });
                a.shiba -= coins;
            }
        }

        else if (option == 0) {
            if (a.avax == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.avax_value;
                a.balance += a.avax_value;
                a.transactions.push_back({ "AVAX Sold:", a.avax_value });
                a.avax -= coins;
            }
        }

    }
};





int main()
{
    const int power = 5;
    Account a[power];
    info data;
    dep_and_with dw;
    buy_sell bs;
    int ch, amount, choice;
    bool check, ans;
    string ID, pass;
    int i = 0;
    int person=power+1;

    //a[0].display();

    while (1) {

    label:
        cout << "Press 1 for new Account\nPress 2 for login into existing account: \nPress 3 to exit the app.";
        cin >> ch;
        if (ch == 1) {
            for (i = 0; i < power; i++) {
                if (a[i].name.empty())
                    break;
            }

            person = i;
            //cout << person;
            data.Get_account_information(a[i]);

        }
        else if (ch == 2) {

            cout << "Enter User Name: ";
            cin.ignore();
            getline(cin, ID);
            cout << "Enter Password: ";
            cin >> pass;

            for (i = 0; i < power; i++) {
                if (ID == a[i].name && pass == a[i].pass) {
                    person = i;
                    cout << "Account Loged In!\n\n";
                }
            }

            if (person==power+1) {
                cout << "\n\nPlease make account first.\n\n";
                goto label;
            }
        }

        else if (ch == 3) {
            exit(0);
        }



        cout <<"***********************************************************************  \n";

        cout << endl;

        while(1){

        //cout << "Press 1 to create new Account " << endl;
        cout << "\tPress 2 if want to have your Account Info \n"
            << endl;
        cout << "\tPress 3 if want to Deposit your money \n"
            << endl;
        cout << "\tPress 4 if want to withdraw your money \n"
            << endl;
        cout << "\tPress 5 if want to know your history \n"
            << endl;
        cout << "\tPress 6 if want to know your Buy Crypto\n "
            << endl;
        cout << "\tPress 7 if want to know your Sell Crypto \n"
            << endl;
        cout << "\tElse press any invalid to logout \n"
            << endl;


        cout << "  "
            "******************************************"
            "*****************************  \n";

        cin >> choice;

        if (choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7)
            break;

        int ans;

            switch (choice) {
            case 3:
                cout << "Enter amount to deposit : ";
                cin >> amount;
                ans = dw.Deposit(amount, *(a+person));
                if (ans)
                    cout << "Successfully deposited money"
                    << endl;
                else
                    cout << "Failed\n";
                break;

            case 4:
                cout << "Enter amount to withdrawn : ";
                cin >> amount;
                ans=dw.Withdraw(amount, a[person]);

                if (ans)
                    cout << "Successfully withdrawn Amount"
                    << endl;
                else
                    cout << "NOT ENOUGH BALANCE\n";

                break;

            case 5:
                a[person].History();
                break;

            case 6:

                ans = bs.buy_crypto(a[person]);
                if (ans)
                    cout << "Successful Transaction" << endl;
                else
                    cout << "NOT ENOUGH BALANCE\n";
                break;

            case 7:
                ans = bs.sell_crypto(a[person]);
                if (ans)
                    cout << "Successful Transaction" << endl;
                else
                    cout << "Not Enough CRYPTOCOINS\n";
                break;

            case 2:
                data.display(a[person]);
                break;

            //default:
            //    break;
            }
        }
    }
}