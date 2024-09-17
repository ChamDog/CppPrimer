#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data vSd1, vSd2;
    vSd1.Input_Sales_data();
    vSd2.Input_Sales_data();

    Sales_data vSd3,vSd4;
    vSd3 = vSd1 + vSd2;
    vSd4 = vSd1 + vSd2 + vSd3;

    vSd1.Output_Sales_data();
    vSd2.Output_Sales_data();
    vSd3.Output_Sales_data();
    vSd4.Output_Sales_data();
}
