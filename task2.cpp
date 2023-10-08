#include<iostream>
using namespace std;

float length, width, height, result;
string unit;


float volume();

main()
{	cout<<"Enter the length of the pyramid (in meters): ";
	cin>>length;

	cout<<"Enter the width of the pyramid (in meters): ";
	cin>>width;

	cout<<"Enter the height of the pyrsmid (in meters): ";
	cin>>height;

	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>>unit;

	result=volume();
	cout<<"The volume of the pyramid is: "<<result<<" cubic "<<unit;
}

float volume()
{
	float vol =(length*height*width)/3;

if(unit == "millimeters")
{	vol=vol*1000;	}


if(unit == "centimeters")
{	vol=vol*100;	}
	

if(unit == "meters")
{	vol=vol;	}
	

if(unit == "kilometers")
{	vol=vol*0.001;	}
	return vol ;
}