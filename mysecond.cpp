//
// Created by 33559 on 2022/9/19.
//
#include "mysecond.h"

void LimitHead()
{
    cout << INT32_MAX;
}
void constit()
{
    int a{5};
    int b(50);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
void structarr()
{
    typedef struct {
        char name[20];
        float volume;
        double price;
    }Test;
    Test guess[2]={
            {"Bambi" , 0.5 ,21.99},
            {"Kobi",200,5.99}
    };
    cout << "The guest " << guess[0].name << " and "
    << guess[1].name << "345g"
    << guess[0].volume + guess[1].volume << " cubic feet";
}
void pointer()
{
    int update = 6;
    int *pupdate ;
    pupdate = &update;
    cout << pupdate ;
}
void UseNew()
{
//    int nights = 1001;
//    int *pt = new int ;
//    *pt = 1001;
//
//    cout << "nights value = ";
//    cout << nights << ": location " << &nights << endl ;
//    cout << "int value " << *pt << ": location = "<< pt << endl;
    double *pd = new double ;
    *pd = 10000001.0;

    cout << "double value = " << *pd << ":location = " << pd << endl;
    cout << "size of pt = " << sizeof(pd);
}
void pointit()
{
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 += 1;
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[2] is " << p3[2] << endl;
    //溢出
    p3 -= 1;
    delete [] p3;
}
void getlineusing()
{
    string city;
    cout << "Could you please tell me your city you live in?"
    <<endl;
    getline(cin , city);

    cout << city;
}
void output()
{
    string fname ,lname;
    char grade;
    int age;

    cout << "Your first name?" << endl;
    getline(cin , fname);
    cout << "Your last name?" <<endl;
    getline(cin ,lname);
    cout << "Your grade ?" << endl;
    cin >> grade;
    grade += 1;
    cout << "Your age?" << endl;
    cin >> age;

    cout << "Name: " << fname <<"," << lname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age;

}

void changeit()
{
    string name , dessert;
    cout << "Enter your name:" <<endl;
    getline(cin , name);
    cout << "What dessert do you want?" << endl;
    getline(cin, dessert);
}
void newit_1()
{
    typedef struct {
        string name;
        double diameter;
        double weight;
    }Pizza;
    Pizza *pizza = new Pizza ;//指针

    cout << "How many big do you want?"<< endl;
    (cin >> pizza[0].diameter) ;
    cin.get();
    //(cin >> pizza[0].diameter).get()
    //getline( pizza[0].name,12);
    cout << "Please enter the name of the company!"<<endl;
    getline(cin , pizza[0].name);
    cout << "weight?" << endl;
    cin >> pizza[0].weight;

    cout << "The name of the Pizza Company: " <<  pizza[0].name << endl;
    cout << "The diameter of the Pizza Company: " << pizza[0].diameter<< endl;
    cout << "The weight of the Pizza Company: " << pizza[0].weight << endl;

    delete pizza;
}
void CandyBar()
{
    typedef struct {
        string brand;
        double weight;
        double calories;
    }Candy;

    Candy *candy = new Candy ;

    cout << "Weight!" << endl;
    cin >> candy[0].weight;
    cin.get();

    cout << "Tell me your Brand!" << endl;
    getline(cin ,candy[0].brand);

    cout << "calories!" << endl;
    cin >> candy[0].calories;

    cout << "a."<< candy[0].weight << endl;
    cout << "b."<< candy[0].brand << endl;
    cout << "c."<< candy[0].calories << endl;

    delete candy;
}

//getline()针对string类型！
void object()
{
    array < double , 3 > scores;
    double average;

    cout << "Enter your first grade" << endl;
    cin >> scores[0];
    cout << "Enter your 2 grade" << endl;
    cin >> scores[1];
    cout << "Enter your 3 grade" << endl;
    cin >> scores[2];

    average =( scores[0] +scores[1] + scores[2]) /3;
    cout << average;

}
