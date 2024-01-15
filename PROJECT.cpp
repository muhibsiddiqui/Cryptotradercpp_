#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include<math.h>
#include<string>
#include<fstream>
#include <cctype>
#include<vector>
#include <cstdio> 
#include<Bits.h>
#include<algorithm> 
#include<iterator> 
#include <iomanip>
using namespace std;

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
bool is_valid_password(string password) {
    // Check length
    //cout << "aaaaaaaaaa";
    //int a = sizeof(password) / sizeof(password[0]);
    int i = 0;


    while (password[i] != '\0')
    {
        i++;
    }

    if (i < 8) {
        return false;
    }

    bool has_digit = false;
    bool has_upper = false;
    bool has_special = false;

    for (int c = 0; c < i; c++) {
        if (isdigit(password[c])) {
            has_digit = true;
        }
        if (isupper(password[c])) {
            has_upper = true;
        }
        if (password[c] == '@' || password[c] == '.') {
            has_special = true;
        }
    }

    if (!has_digit || !has_upper || !has_special) {
        return false;

    }

    return true;
}



struct acc {
    int  eth, cardano, binance, xrp, sol, pol, avax, shiba, dogecoin, bitcoin;
    int id, age;
    string name;
    string pass;
    double balance;
    vector<pair<string, int> > transactions;

};


class Account {
public:
    vector<pair<string, int> > transactions;
    double balance;

    int  eth, cardano, binance, xrp, sol, pol, avax, shiba, dogecoin, bitcoin;

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
        cout << "Enter a number to display the corresponding cryptocurrency value:";
        //cout << "\t+--------+--------+" << endl;
        cout << "\t\t| YOUR BALANCE: " << balance << " |" << endl;
        //cout << "\t\t\t\t\t\t\t\t\t\t+--------+---------+" << endl;
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

    void displaycoin() {
        cout << "\n\nYOUR COINS: \n";
        cout << "\n1. Bitcoin (BTC)\t" << bitcoin << endl;
        cout << "2. Ethereum (ETH)\t" << eth << endl;
        cout << "3. Cardano (ADA)\t" << cardano << endl;
        cout << "4. Binance Coin (BNB)\t" << binance << endl;
        cout << "5. XRP (XRP)\t" << xrp << endl;
        cout << "6. Solana (SOL)\t" << sol << endl;
        cout << "7. Dogecoin (DOGE)\t" << dogecoin << endl;
        cout << "8. Polkadot (DOT)\t" << pol << endl;
        cout << "9. SHIBA INU (SHIB)\t" << shiba << endl;
        cout << "10. AVAX (AVAX)\t" << avax << endl;
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


class info :public Account {
public:

    acc c;
    // Get account Details
    bool Get_account_information(Account& a)
    {
        int i = 0;
        string password;
        srand(time(0));
        system("cls");
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, c.name);

        while (i == 0) {
            cout << "Enter password: ";
            cin >> c.pass;
            if (!is_valid_password(c.pass)) {
                cout << "\nPassword should have \n-atleast 8 characters \n-atleast a single digit \n-atleast one upper case\n-make sure to add special characters like @ or .to make it strong\n" << endl;

            }
            else {
                i = 1;
            }
        }
        char y;
        cout << "Enter age: ";
        cin >> c.age;
        c.id = rand() % 9999 + 1000;
        //c.id = 1234;

        bool flag = 0;

        FILE* fp = NULL;

        fp = fopen("he.dat", "ab");
        if (fp != NULL) {
            flag = 1;
            fwrite(&c, sizeof(c), 1, fp);
        }
        fclose(fp);


        if (flag)
            return 1;
        else
            return 0;
    }

    void display(Account& a) {

        cout << "Name: " << a.name << endl << endl;
        cout << "ID: " << a.id << endl << endl;
        cout << "Bank Balance: " << a.balance << endl << endl;
        cout << "\n1. Bitcoin (BTC)\t" << a.bitcoin << endl;
        cout << "2. Ethereum (ETH)\t" << a.eth << endl;
        cout << "3. Cardano (ADA)\t" << a.cardano << endl;
        cout << "4. Binance Coin (BNB)\t" << a.binance << endl;
        cout << "5. XRP (XRP)\t" << a.xrp << endl;
        cout << "6. Solana (SOL)\t" << a.sol << endl;
        cout << "7. Dogecoin (DOGE)\t" << a.dogecoin << endl;
        cout << "8. Polkadot (DOT)\t" << a.pol << endl;
        cout << "9. SHIBA INU (SHIB)\t" << a.shiba << endl;
        cout << "10. AVAX (AVAX)\t" << a.avax << endl;

    }

    // Checking All Transactions
    void History(Account& a)
    {
        cout << "Displaying All transactions\n\n";
        for (auto it : a.transactions) {
            cout << it.first << " " << it.second << endl;
        }

        int no = a.transactions.size();
        cout << "Total transaction:" << no << endl;

        char temp;
        cout << "\nDo you want to clear all transactions:";
        cin >> temp;


        // Clearing All transactions
        if (temp == 'y') {
            a.transactions.clear();
            cout << "Total transactions cleared:" << no << endl;
        }
    }

};

//*********************************************************************

class dep_and_with {
public:
    acc c;
    // Deposit Cash
    bool Deposit(int money, Account& a, string name)
    {
        a.deposit = money;
        a.balance += money;
        a.transactions.push_back({ "Deposit:", money });
        int flag = 0;

        ifstream ifs("he.dat", std::ios::binary);

        if (!ifs) {
            cout << "check he\n";
            return false; // Return false if file couldn't be opened
        }

        //FILE* ofs;
        //ofs = fopen("temp.dat", "wb");
        ofstream ofs("temp.dat", ios::binary);
        if (!ofs) {
            cout << "check temp\n";
            ifs.close(); // Close ifs before returning false
        }

        //acc c; // Declare an Account object to read from file

        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
            if (c.name == a.name) { // Check if current record matches given name
                flag = 1;
                c.balance = a.balance; // Update balance
            }
            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
        }

        ifs.close();
        //fclose(ofs);
        ofs.close();

        // Delete the old file
        remove("he.dat");

        // Rename new file to the older file
        rename("temp.dat", "he.dat");

        if (flag)
            return true;
        else
            return false;
    }



    // Withdraw Cash
    bool Withdraw(int money, Account& a)
    {
        if (money > a.balance) {
            return false;
        }

        a.withdraw += money;
        a.balance -= money;
        a.transactions.push_back({ "Withdraw:", money });
        int flag = 0;

        ifstream ifs("he.dat", std::ios::binary);

        if (!ifs) {
            cout << "check he\n";
            return false; // Return false if file couldn't be opened
        }

        ofstream ofs("temp.dat", ios::binary);
        if (!ofs) {
            cout << "check temp\n";
            ifs.close(); // Close ifs before returning false
        }

        //acc c; // Declare an Account object to read from file

        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
            if (c.name == a.name) { // Check if current record matches given name
                flag = 1;
                c.balance = a.balance; // Update balance
            }
            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
        }

        ifs.close();
        //fclose(ofs);
        ofs.close();

        // Delete the old file
        remove("he.dat");

        // Rename new file to the older file
        rename("temp.dat", "he.dat");

        if (flag)
            return true;
        else
            return false;

    }

};


class buy_sell {

public:
    acc c;
    bool flag = 0;

    bool buy_crypto(Account& a)
    {
        a.update();

        int option;
        a.display();
        cin >> option;
        int coins;
        // Checking equity
        if (a.total_equity != 0) {

            cout << "How many coins do you want to purchase?";
            cin >> coins;

            if (1) {
                if (option == 1)
                {
                    if (a.balance < a.bitcoin_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {
                        a.bitcoin += coins;
                        a.balance -= a.bitcoin_value;
                        a.crypto_invest += (a.bitcoin) * a.bitcoin_value;
                        a.transactions.push_back({ "bitcoin Purchased: ",coins });

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }

                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.bitcoin = a.bitcoin;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 2)
                {
                    if (a.balance < a.eth_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {
                        a.eth += coins;
                        a.balance -= a.eth_value;
                        a.crypto_invest += (a.eth) * a.eth_value;
                        a.transactions.push_back({ "Ethereum Purchased: ",coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }
                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.eth = a.eth;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 3)
                {
                    if (a.balance < a.cardano_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.cardano += coins;
                        a.balance -= a.cardano_value;
                        a.crypto_invest += (a.cardano) * a.cardano_value;
                        a.transactions.push_back({ "Cardano Purchased :",coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }

                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.cardano = a.cardano;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }

                else if (option == 4)
                {
                    if (a.balance < a.binance_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.binance += coins;
                        a.balance -= a.binance_value;
                        a.crypto_invest += (a.binance) * a.binance_value;
                        a.transactions.push_back({ "Binance Purchased :",coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }
                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.binance = a.binance;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 5)
                {
                    if (a.balance < a.xrp_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.xrp += coins;
                        a.balance -= a.xrp_value;
                        a.crypto_invest += (a.xrp) * a.xrp_value;
                        a.transactions.push_back({ "XRP Purchased: ",coins });
                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }
                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.xrp = a.xrp;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 6)
                {
                    if (a.balance < a.sol_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.sol += coins;
                        a.balance -= a.sol_value;
                        a.crypto_invest += (a.sol) * a.sol_value;
                        a.transactions.push_back({ "Solana Purchase :",coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.sol = a.sol;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;

                    }
                }
                else if (option == 7)
                {
                    if (a.balance < a.dogecoin_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.dogecoin += coins;
                        a.balance -= a.dogecoin_value;
                        a.crypto_invest += (a.dogecoin) * a.dogecoin_value;
                        a.transactions.push_back({ "Dogecoin Purchased: ", coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }

                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.dogecoin = a.dogecoin;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 8)
                {
                    if (a.balance < a.pol_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.pol += coins;
                        a.balance -= a.pol_value;
                        a.crypto_invest += (a.pol) * a.pol_value;
                        a.transactions.push_back({ "PolkaDot Purchased :",coins });
                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }

                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.pol = a.pol;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 9)
                {
                    if (a.balance < a.shiba_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.shiba += coins;
                        a.balance -= a.shiba_value;
                        a.crypto_invest += (a.shiba) * a.shiba_value;
                        a.transactions.push_back({ "Shiba Inu Purchased :",coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }

                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.shiba = a.shiba;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
                }
                else if (option == 10)
                {
                    if (a.balance < a.avax_value * coins) {
                        flag = 1;
                        return false;
                    }
                    if (!flag) {

                        a.avax += coins;
                        a.balance -= a.avax_value;
                        a.crypto_invest += (a.avax) * a.avax_value;
                        a.transactions.push_back({ "avax Purchased :",coins });

                        int flag = 0;

                        ifstream ifs("he.dat", std::ios::binary);

                        if (!ifs) {
                            cout << "check he\n";
                            return false; // Return false if file couldn't be opened
                        }

                        ofstream ofs("temp.dat", ios::binary);
                        if (!ofs) {
                            cout << "check temp\n";
                            ifs.close(); // Close ifs before returning false
                        }
                        //acc c; // Declare an Account object to read from file

                        while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                            if (c.name == a.name) { // Check if current record matches given name
                                flag = 1;
                                c.balance = a.balance; // Update balance
                                c.avax = a.avax;
                            }
                            ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                        }

                        ifs.close();
                        //fclose(ofs);
                        ofs.close();

                        // Delete the old file
                        remove("he.dat");

                        // Rename new file to the older file
                        rename("temp.dat", "he.dat");

                        if (flag)
                            return true;
                        else
                            return false;
                    }
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
    bool sell_crypto(Account& a)
    {
        int option;

        a.update();
        a.display();
        a.displaycoin();



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
                a.balance += a.bitcoin_value * coins;
                a.transactions.push_back({ "Bitcoin Sold:", coins });
                a.bitcoin -= coins;
                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }
                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.bitcoin = a.bitcoin;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 2) {
            if (a.eth == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.eth_value;
                a.balance += a.eth_value * coins;
                a.transactions.push_back({ "Ethereum Sold:", coins });
                a.eth -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.eth = a.eth;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
           
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }



        else if (option == 3) {
            if (a.cardano == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.cardano_value;
                a.balance += a.cardano_value * coins;
                a.transactions.push_back({ "Cardano Sold:",coins });
                a.cardano -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.cardano = a.cardano;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 4) {
            if (a.binance == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.binance_value;
                a.balance += a.binance_value * coins;
                a.transactions.push_back({ "Binance Sold:", coins });
                a.binance -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.binance = a.binance;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 5) {
            if (a.xrp == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.xrp_value;
                a.balance += a.xrp_value * coins;
                a.transactions.push_back({ "XRP Sold:", coins });
                a.xrp -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.xrp = a.xrp;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 6) {
            if (a.sol == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.sol_value;
                a.balance += a.sol_value * coins;
                a.transactions.push_back({ "Solana Sold:",coins });
                a.sol -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.sol = a.sol;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 7) {
            if (a.dogecoin == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.dogecoin_value;
                a.balance += a.dogecoin_value * coins;
                a.transactions.push_back({ "Dogecoin Sold:", coins });
                a.dogecoin -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.dogecoin = a.dogecoin;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 8) {
            if (a.pol == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.pol_value;
                a.balance += a.pol_value * coins;
                a.transactions.push_back({ "Polka Dot Sold:", coins });
                a.pol -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.pol = a.pol;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 9) {
            if (a.shiba == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.shiba_value;
                a.balance += a.bitcoin_value * coins;
                a.transactions.push_back({ "Shiba Inu Sold:", coins });
                a.shiba -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.shiba = a.shiba;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

        else if (option == 0) {
            if (a.avax == 0)
            {
                return false;
            }

            else {
                a.crypto_return += a.avax_value;
                a.balance += a.avax_value * coins;
                a.transactions.push_back({ "AVAX Sold:", coins });
                a.avax -= coins;

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);
                if (!ifs) {
                    cout << "check he\n";
                    return false; // Return false if file couldn't be opened
                }

                ofstream ofs("temp.dat", ios::binary);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                //acc c; // Declare an Account object to read from file

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.balance = a.balance; // Update balance
                        c.avax = a.avax;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();

                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");

                if (flag)
                    return true;
                else
                    return false;
            }
        }

    }
};





int main()
{
    acc c;
    char y;
    const int power = 5;
    int ch, amount;
    char choice;
    bool check, ans, flag = 0;
    string  name;
    string pass;
    char ch1;
    int ID;
    int i = 0;
    int person = power + 1;
    buy_sell bs;
    dep_and_with dw;
    info data;

    while (1) {
        Account a;


    label:
        cout << "Press 1 for new Account\nPress 2 for login into existing account: \nPress 3 to exit the app.";
        cin >> ch;
        if (ch == 1) {
            //for (i = 0; i < power; i++) {
            //    if (a[i].name.empty())
            //        break;
            //}

            //person = i;
            //cout << person;

            if (data.Get_account_information(a)) {
                cout << "\nACCOUNT MADE SUCCESSFULLY";
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                system("cls");
                goto label;
            }
            else {
                cout << "ERROR";
                exit(0);
            }


        }
        else if (ch == 2) {
        label2:
            cout << "Enter User Name: ";
            cin.ignore();
            getline(cin, name);
            //cin.ignore();
            cout << "Enter Password: ";
            getline(cin, pass);

            ifstream infile("he.dat", std::ios::binary);

            while (infile.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                if (name == c.name && pass == c.pass) {
                    flag = 1;
                    a.name = c.name;
                    a.age = c.age;
                    a.avax = c.avax;
                    a.balance = c.balance;
                    a.binance = c.binance;
                    a.bitcoin = c.bitcoin;
                    a.cardano = c.cardano;
                    a.dogecoin = c.dogecoin;
                    a.eth = c.eth;
                    a.id = c.id;
                    a.transactions = c.transactions;

                    cout << "Account Loged In!\n\n";
                    cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                    cin >> y;
                    infile.close();
                }
            }

            if (!flag) {
                cout << "\n\nDo you want to try again press \"y\" OR";
                cout << " Please make account first.\n\n";
                cin >> ch1;
                if (ch1 == 'y')
                    goto label2;
                else
                    goto label;
            }
        }

        else if (ch == 3) {
            exit(0);
        }

        cout << endl;

        while (1) {

            system("cls");

            cout << "***********************************************************************  \n";

            cout << "\n\tPress 2 if want to have your Account Info \n"
                << endl;
            cout << "\tPress 3 if want to Deposit your money \n"
                << endl;
            cout << "\tPress 4 if want to withdraw your money \n"
                << endl;
            cout << "\tPress 5 if want to know your history \n"
                << endl;
            cout << "\tPress 6 if want Buy Crypto\n "
                << endl;
            cout << "\tPress 7 if want to Sell your Crypto \n"
                << endl;
            cout << "\tElse press 8 to logout\n"
                << endl;


            cout << "  "
                "******************************************"
                "*****************************  \n";

            cin >> choice;

            if (choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != '7') {
                system("cls");
                break;
            }

            int ans;


            switch (choice) {
            case '3':

                system("cls");
                cout << "Enter amount to deposit : ";
                cin >> amount;
                ans = dw.Deposit(amount, a, name);
                if (ans)
                    cout << "\nSuccessfully deposited money\n" << endl;
                else
                    cout << "\nFailed\n";
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                break;

            case '4':
                system("cls");
                cout << "Enter amount to withdrawn : ";
                cin >> amount;
                ans = dw.Withdraw(amount, a);

                if (ans)
                    cout << "\nSuccessfully withdrawn Amount\n"
                    << endl;
                else
                    cout << "\nNOT ENOUGH BALANCE\n";
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                break;

            case '5':
                system("cls");
                data.History(a);
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                break;

            case '6':

                system("cls");
                ans = bs.buy_crypto(a);
                if (ans)
                    cout << "\nSuccessful Transaction\n" << endl;
                else
                    cout << "NOT ENOUGH BALANCE\n";
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                break;

            case '7':
                system("cls");
                ans = bs.sell_crypto(a);
                if (ans)
                    cout << "\nSuccessful Transaction\n" << endl;
                else
                    cout << "Not Enough CRYPTOCOINS\n";
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                break;

            case '2':
                system("cls");
                data.display(a);
                cout << "\n\n\t\tPRESS Y TO CONTINUE !";
                cin >> y;
                break;

            case '8':

                int flag = 0;

                ifstream ifs("he.dat", std::ios::binary);

                if (!ifs) {
                    cout << "check he\n";
                }

                //FILE* ofs;
                ofstream ofs("temp.dat",ios::out);
                if (!ofs) {
                    cout << "check temp\n";
                    ifs.close(); // Close ifs before returning false
                }

                while (ifs.read(reinterpret_cast<char*>(&c), sizeof(c))) {
                    if (c.name == a.name) { // Check if current record matches given name
                        flag = 1;
                        c.transactions = a.transactions;
                    }
                    ofs.write(reinterpret_cast<const char*>(&c), sizeof(c));
                }

                ifs.close();
                //fclose(ofs);
                ofs.close();


                // Delete the old file
                remove("he.dat");

                // Rename new file to the older file
                rename("temp.dat", "he.dat");
                break;
            }
        }
    }
}