#include<iostream>
using namespace std;

	char type;
	float price, result;

float taxCalculator(char type, float price);

main()
{
	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;

	cout<<"Enter the price of the vehicle: $";
	cin>>price;

	result=taxCalculator(type, price);
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<result;
}

float taxCalculator(char type, float price)
{
float taxRate;

if(type == 'M')
{	taxRate = 0.06;	}

if(type == 'E')
{	taxRate = 0.08;	}

if(type == 'S')
{	taxRate = 0.1;	}

if(type == 'V')
{	taxRate = 0.12;	}

if(type == 'T')
{	taxRate = 0.15;	}
float taxAmount= price * (taxRate);
float FP=price + taxAmount;
	return FP;
}