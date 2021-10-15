#include<iostream>

using namespace std;

int main()
{
//declaring variables
    double work_hrs, gross_pay, net_income;
    double social_security_tax, federal_income_tax, state_income_tax, union_dues;
    double pay = 16.78;

//hours worked output and input
    cout << "Please enter the amount of hours worked this week: ";
    cin >> work_hrs;

//initializes gross_pay
    gross_pay = work_hrs * pay;

//checks for overtime
    if(work_hrs > 40){
    //declares overtime
        double overtime, overtime_pay;

    //calculates total overtime pay
        overtime = (work_hrs - 40);
        overtime_pay = (overtime * 25.17);

    //includes overtime in gross pay
        gross_pay = gross_pay + overtime_pay - pay;

    }
//taxes!
    social_security_tax = gross_pay * .06;
    federal_income_tax = gross_pay * .14;
    state_income_tax = gross_pay * .05;
    union_dues = 40;

//calculates net income
    net_income = gross_pay - (social_security_tax + federal_income_tax + state_income_tax + union_dues);

//outputs all statistics
    cout << "Gross Pay: " << gross_pay << endl;
    cout << "Social Security Tax: " << social_security_tax << endl;
    cout << "Federal Income Tax: " << federal_income_tax << endl;
    cout << "State Income Tax: " << state_income_tax << endl;
    cout << "Union Dues: " << union_dues << endl;
    cout << "Net Income: " << net_income << endl;

    return 0;
}