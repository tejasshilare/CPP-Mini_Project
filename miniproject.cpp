#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void intro()
{
    cout << "\n \t\t********************* ONLINE SHOPPING SYSTEM ********************** \t\t\t\t  " << endl
         << "                -------------------------------------------------------------------" << endl;
    cout << "PREPARED BY -\nRoll no. 37 - TEJAS SHILARE\n"
         << endl;
    cout << endl;
    cout << " \t\t\t"
         << "||"
         << "======================================"
         << "||" << endl;
    cout << " \t\t\t"
         << "||"
         << "     ONLINE SHOPPING SYSTEM           "
         << "||" << endl;
    cout << " \t\t\t"
         << "||"
         << "======================================"
         << "||" << endl;
    cout << endl;
};

template <typename M>
class message
{
public:
    M Name, age, city;

    void getname()
    {
        cout << "                -------------------------------------------------------------------                " << endl
             << "\n \t\t                      ONLINE SHOPPING SYSTEM \t\t\t\t  " << endl
             << "                -------------------------------------------------------------------                " << endl
             << endl;
        cout << "===================================================================================================" << endl
             << endl;
        cout << "                        Enter Your Details here : ";
        cout << "\n                        Enter Name : ";
        cin >> Name;
        cout << "                        Enter age  : ";
        cin >> age;
        cout << "                        Enter city : ";
        cin >> city;
        cout << "==========================================================================" << endl;
    }
    void showname()
    {
        cout << "==========================================================================" << endl;
        cout << "                        Thank you for shopping!!! " << endl;
        cout << "                            Visit Again!!\n";
        cout << "==========================================================================" << endl;
    }
};

class tax
{
    int gst;
    friend void printtax(int a, float total);
    void calc_tax(int a, float total)
    {
        gst = 5 * a / 100;
        total = a + gst;
        try
        {
            if (total > 0)
            {
                cout << "        Total amount : " << total << " Rs. " << endl
                     << endl;
                message<string> N1;
                N1.showname();
            }
            else
            {
                throw(total);
            }
        }
        catch (float total)
        {
            cout << "Error!!!\nTry Again!!!" << endl;
        }
    };
};

void printtax(int a, float total)
{
    tax g;
    g.calc_tax(a, total);
};

class Bill
{
private:
    int a;

public:
    string A;
    float total;
    Bill(string name, int price)
    {
        this->A = name;
        this->a = price;
    }
    void show()
    {
        system("cls");
        message<string> N1;
        N1.getname();
        system("cls");
        cout << "==========================================================================" << endl;
        cout << "                          Bill for your purchase:" << endl;
        cout << "==========================================================================\n"
             << endl;
        cout << "Total number of products in your cart : 1" << endl;
        cout << "          Your item  : " << A << endl;
        cout << "Price for your itme  : " << a << endl;
        cout << "        Gst applied  : 5%" << endl;
        printtax(a, total);
        this->total = total;
    }
};

class electronics
{
public:
    string name;
    int price;
    float rating;
    float weight;
    int warrenty;
    electronics(string name, int price, float rating, float weight, int warrenty)
    {
        this->name = name;
        this->price = price;
        this->rating = rating;
        this->weight = weight;
        this->warrenty = warrenty;
    }
    virtual void display()
    {
        cout << "Product                 : " << name << endl;
        cout << "Price (Rs)              : " << price << endl;
        cout << "Rating                  : " << rating << endl;
        cout << "Weight (gm)             : " << weight << endl;
        cout << "Warrenty (yrs)          : " << warrenty << endl;
    }
};

class moblie : public electronics
{
    int storage;
    int ram;
    int battery;

public:
    moblie(string name, int price, float rating, float weight, int warrenty, int storage, int ram, int battery) : electronics(name, price, rating, weight, warrenty)
    {
        this->storage = storage;
        this->ram = ram;
        this->battery = battery;
    }
    void dispaly()
    {
        electronics::display();

        cout << "Storage (GB)            : " << storage << endl;
        cout << "Ram (GB)                : " << ram << endl;
        cout << "battery capacity (mAh)  : " << battery << endl;
    }
};

class laptop : public electronics
{
    int storage;
    int ram;
    float size;

public:
    laptop(string name, int price, float rating, float weight, int warrenty, int storage, int ram, float size) : electronics(name, price, rating, weight, warrenty)
    {
        this->storage = storage;
        this->ram = ram;
        this->size = size;
    }
    void display()
    {
        electronics::display();
        cout << "storage(GB)             : " << storage << endl;
        cout << "ram(GB)                 : " << ram << endl;
        cout << "size(inch)              : " << size << endl;
    }
};

class clothing
{
public:
    string brand;
    int price;
    float rating;
    string type;
    string material;

    clothing(string brand, int price, float rating, string type, string material)
    {
        this->brand = brand;
        this->price = price;
        this->rating = rating;
        this->type = type;
        this->material = material;
    }
    virtual void display()
    {
        cout << "Brand                   : " << brand << endl;
        cout << "Price                   : " << price << endl;
        cout << "Rating                  : " << rating << endl;
        cout << "Type                    : " << type << endl;
        cout << "Material                : " << material << endl;
    }
};

class beauty
{
public:
    int weight;
    string name;
    string brand;
    int price;
    string expiry;
    beauty(int weight, string name, string brand, int price, string expiry)
    {
        this->weight = weight;
        this->price = price;
        this->name = name;
        this->brand = brand;
        this->expiry = expiry;
    }
    virtual void display()
    {
        cout << "Name      : " << name << endl;
        cout << "Price     : " << price << endl;
        cout << "Brand     : " << brand << endl;
        cout << "Expiry    : " << expiry << endl;
        cout << "Weight    : " << weight << endl;
    }
};

int main()
{
    int choice, choice1, choice2, choice3, choice4, choice5, choice6, choice7, buy;
    char again;
A:
    system("cls");
    intro();

    cout << "Choose from the following :  " << endl;
    cout << "1. Start Shopping " << endl
         << "2. Exit" << endl
         << "Enter Your Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        do
        {
        B:
            system("cls");
            intro();
            cout << "\nStart with the Shopping journey!!!\n"
                 << endl;
            cout << "Choose The Product category:   " << endl;
            cout << "1. Electronics. " << endl
                 << "2. Clothing. " << endl
                 << "3. Beauty." << endl
                 << "4. Back" << endl
                 << "Enter Your Choice: ";
            cin >> choice1;
            cout << endl;
            switch (choice1)
            {
            case 1:
            C1:
                system("cls");
                intro();
                cout << "CATEGORY - lectronics" << endl;
                cout << "Select from the following: \n";
                cout << "1. Mobile. " << endl
                     << "2. Laptops." << endl
                     << "3. Back" << endl
                     << "Enter Your Choice: ";
                cin >> choice3;
                cout << endl;
                switch (choice3)
                {
                case 1:
                D1:
                    system("cls");
                    intro();
                    cout << "Select from the following: \n";
                    cout << "1. Realme C21Y" << endl
                         << "2. SAMSUNG Galaxy F12" << endl
                         << "3. REDMI 9i Sport" << endl
                         << "4. Back" << endl
                         << "Enter Your Choice: ";
                    cin >> choice4;
                    cout << endl;
                    switch (choice4)
                    {

                    case 1:
                    E1:
                        system("cls");
                        intro();
                        {
                            moblie m1("Realme C21Y", 9999, 4.5, 200, 1, 64, 4, 5000);
                            m1.display();
                            cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                            cin >> buy;
                            switch (buy)
                            {

                            case 1:
                            {
                                Bill x1("Realme C21Y", 9999);
                                x1.show();
                            }
                            break;

                            default:
                                goto D1;
                                break;
                            }
                        }
                        break;
                    case 2:
                    E2:
                        system("cls");
                        intro();
                        {
                            moblie m2("SAMSUNG Galaxy F12", 10299, 4.2, 221, 1, 64, 4, 6000);
                            m2.display();
                            cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                            cin >> buy;
                            switch (buy)
                            {

                            case 1:
                            {
                                Bill x1("SAMSUNG Galaxy F12", 10299);
                                x1.show();
                            }
                            break;
                            default:
                                goto D1;
                                break;
                            }
                        }
                        break;
                    case 3:
                    E3:
                        system("cls");
                        intro();
                        {
                            moblie m3("REDMI 9i Sport", 8499, 4.5, 199, 1, 64, 4, 4000);
                            m3.display();
                            cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                            cin >> buy;
                            switch (buy)
                            {

                            case 1:
                            {
                                Bill x1("REDMI 9i Sport", 8499);
                                x1.show();
                            }
                            break;
                            default:
                                goto D1;
                                break;
                            }
                        }
                        break;
                    case 4:
                        goto C1;
                        break;

                    default:
                        cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
                        goto B;
                        break;
                    }
                    break;
                case 2:
                D2:
                    system("cls");
                    intro();
                    cout << "1. HP Pavilion Core i7 11th Gen" << endl
                         << "2. Lenovo IdeadPad 3 Core i3 10th Gen " << endl
                         << "3. Dell Vostro Core i3 11th Gen" << endl
                         << "4. Back" << endl
                         << "Enter Your Choice: ";
                    cin >> choice5;
                    cout << endl;
                    system("cls");
                    intro();
                    switch (choice5)
                    {
                    case 1:
                    {
                        laptop l1("HP Pavilion Core i7 11th Gen", 84990, 4.4, 1410, 1, 1000, 16, 14);
                        l1.display();
                        cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                        cin >> buy;
                        switch (buy)
                        {

                        case 1:
                        {
                            Bill x1("HP Pavilion Core i7 11th Gen", 84990);
                            x1.show();
                        }
                        break;
                        default:
                            goto D2;
                            break;
                        }
                    }
                    break;
                    case 2:
                    {
                        laptop l2("Lenovo IdeaPad 3 Core i3 10th Gen", 33990, 4.4, 1700, 1, 256, 4, 15.6);
                        l2.display();
                        cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                        cin >> buy;
                        switch (buy)
                        {

                        case 1:
                        {
                            Bill x1("Lenovo IdeaPad 3 Core i3 10th Gen", 33990);
                            x1.show();
                        }
                        break;
                        default:
                            goto D2;
                            break;
                        }
                    }
                    break;
                    case 3:
                    {
                        laptop l3("DELL Vostro Core i3 11th Gen", 42400, 4.2, 1580, 1, 256, 8, 14);
                        l3.display();
                        cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                        cin >> buy;
                        switch (buy)
                        {

                        case 1:
                        {
                            Bill x1("DELL Vostro Core i3 11th Gen", 42400);
                            x1.show();
                        }
                        break;
                        default:
                            goto D2;
                            break;
                        }
                    }

                    break;

                    case 4:
                        goto C1;
                        break;

                    default:
                        cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
                        goto B;
                        break;
                    }
                    break;
                case 3:
                    goto B;
                    break;

                default:
                    cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
                    goto C1;
                    break;
                }
                break;
            case 2:
            {
            C2:
                system("cls");
                intro();
                cout << "CATEGORY-CLOTHINGS" << endl;
                cout << "Choose the clothing: " << endl;
                cout << "1. TRIPR Men Hoody" << endl
                     << "2. Billion Round Neck Tshirt" << endl
                     << "3. Reya Men Round Neck Tshirt " << endl
                     << "4. Back" << endl
                     << "Enter Your Choice: ";
                cin >> choice6;
                cout << endl;
                system("cls");
                intro();
                switch (choice6)
                {
                case 1:
                {
                    clothing c1("TRIPR Men Hoody", 367, 3.9, "Sweatshirt", "Cotton");
                    c1.display();
                    cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                    cin >> buy;
                    switch (buy)
                    {

                    case 1:
                    {
                        Bill x1("TRIPR Men Hoody", 367);
                        x1.show();
                    }
                    break;
                    default:
                        goto C2;
                        break;
                    }
                }
                break;
                case 2:
                {
                    clothing c2("Billion Round Neck T-Shirt", 454, 4.1, "Sweatshirt", "Cotton");
                    c2.display();
                    cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                    cin >> buy;
                    switch (buy)
                    {

                    case 1:
                    {
                        Bill x1("Billion Round Neck T-Shirt", 454);
                        x1.show();
                    }
                    break;
                    default:
                        goto C2;
                        break;
                    }
                }
                break;
                case 3:
                {
                    clothing c3("Reya Men Round Neck T-Shirt", 332, 3.9, "T-Shirt", "Cotton");
                    c3.display();
                    cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                    cin >> buy;
                    switch (buy)
                    {

                    case 1:
                    {
                        Bill x1("Reya Men Round Neck T-Shirt", 332);
                        x1.show();
                    }
                    break;
                    default:
                        goto C2;
                        break;
                    }
                    break;
                }
                case 4:
                    goto B;
                    break;

                default:
                    cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
                    goto C2;
                    break;
                }
            }
            break;
            case 3:
            C3:
            {
                system("cls");
                intro();
                cout << "CATEGORY-BEAUTY" << endl;
                cout << "Choose from the following : " << endl;
                cout << "1. NIVEA Acne Face Wash " << endl
                     << "2. MamaEarth Urban Face Wash" << endl
                     << "3. NIVEA Soft Moisturizer" << endl
                     << "4. Back" << endl
                     << "Enter Your Choice: ";
                cin >> choice7;
                system("cls");
                intro();
                switch (choice7)
                {
                case 1:
                {
                    beauty b1(200, "NIVEA Acne Face Wash", "NIVEA", 338, "January 2024");
                    b1.display();
                    cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                    cin >> buy;
                    switch (buy)
                    {

                    case 1:
                    {
                        Bill x1("NIVEA Acne Face Wash", 338);
                        x1.show();
                    }
                    break;
                    default:
                        goto C3;
                        break;
                    }
                }
                break;

                case 2:
                {
                    beauty b2(200, "MamaEarth Ubtan Face Wash", "MamaEarth", 299, "April 2023");
                    b2.display();
                    cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                    cin >> buy;
                    switch (buy)
                    {

                    case 1:
                    {
                        Bill x1("MamaEarth Ubtan Face Wash", 299);
                        x1.show();
                    }
                    break;
                    default:
                        goto C3;
                        break;
                    }
                }
                break;
                case 3:
                {
                    beauty b3(50, "NIVEA Soft Moisturizing Cream", "Nivea", 50, "December 2022");
                    b3.display();
                    cout << "\nPress 1 to buy  /  Press any random number to cancell  :  ";
                    cin >> buy;
                    switch (buy)
                    {

                    case 1:
                    {
                        Bill x1("NIVEA Soft Moisturizing Cream", 50);
                        x1.show();
                    }
                    break;
                    default:
                        goto C3;
                        break;
                    }
                }
                break;
                case 4:
                    goto B;
                    break;

                default:
                    cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
                    goto C3;
                    break;
                }
            }
            break;
            case 4:
                goto A;
                break;
            default:
                cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
                goto B;
                break;
            }
            cout << "\n\nDo you want to continue shopping?\nPress y for yes: ";
            cin >> again;
        } while (again == 'y' || again == 'Y');
        break;
    case 2:
        exit(0);
        break;

    default:
        cout << "\nWrong Input!!!!!!!\nTry Again!!" << endl;
        goto A;
        break;
    }
    system("cls");
    cout << "==========================================================================" << endl;
    cout << "                       Thanks for Shopping!!!\n";
    cout << "                            Visit Again!!\n";
    cout << "==========================================================================" << endl;
    cout << "                             GOOD BYE  !!!\n";
    cout << "                         HAVE A NICE DAY !!\n";
    cout << "==========================================================================" << endl
         << endl;
    getch();
    return 0;
}