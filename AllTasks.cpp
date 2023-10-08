//PD3
//Task1
#include<iostream>
using namespace std;
main(){
cout<<"Enter the number of sides of the polygon: ";
int side;
cin>>side;

int result;
result=(side-2)*180;
cout<<"The sum of internal angles of a "<<side<<"-sided polygon is: "<<result<<" degrees";
}

//Task2
#include<iostream>
using namespace std;
main(){
cout<<"Number of Minutes: ";
int min;
cin>>min;

cout<<"Frames per Second: ";
int sec;
cin>>sec;

int result;
result=min*60*sec;
cout<<"Total Number of Frames: "<<result;
}

//Task3
#include<iostream>
using namespace std;
main(){
cout<<"Enter Initial Velocity (m/s): ";
float initial;
cin>>initial;

cout<<"Enter Acceleration (m/s^2): ";
float acc;
cin>>acc;

cout<<"Enter Time (s): ";
float time;
cin>>time;

float finalVelocity;
finalVelocity=acc*time+initial;
cout<<"Final Velocity (m/s): "<<finalVelocity;
}

//Task4
#include<iostream>
using namespace std;
main(){
cout<<"Enter Imposter Count: ";
float i;
cin>>i;

cout<<"Enter Player Count: ";
float p;
cin>>p;

float result;
result=(i/p)*100;
cout<<"Chance of being an imposter: "<<result<<"%";
}

//Task5
#include<iostream>
using namespace std;
main(){
cout<<"Enter the Name of the Person: ";
string name;
cin>>name;

cout<<"Enter the target weight loss in kilograms: ";
float weight;
cin>>weight;

float result;
result=weight*15;
cout<<name<<" will need "<<result<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";
}

//Task6
#include<iostream>
using namespace std;
main(){
cout<<"Enter the size of the fertilizer bag in pounds: ";
float size;
cin>>size;

cout<<"Enter the cost of the bag: $";
float cost;
cin>>cost;

cout<<"Enter the area in square feet that can be covered by the bag: ";
float area;
cin>>area;

float cost_per_pound;
cost_per_pound=cost/size;
cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;

float poundperf;
poundperf=size/area;

float cost_per_square;
cost_per_square=cost_per_pound*poundperf;
cout<<"Cost of fertilizing per square foot: $"<<cost_per_square;
}

//Task7
#include<iostream>
using namespace std;
main(){
cout<<"Enter the movie name: ";
string name;
cin>>name;

cout<<"Enter the adult ticket price: $";
float adult;
cin>>adult;

cout<<"Enter the child ticket price: $";
float child;
cin>>child;

cout<<"Enter the number of adult tickets sold: ";
float At;
cin>>At;

cout<<"Enter the number of child tickets sold: ";
float Ct;
cin>>Ct;

cout<<"Enter the percentage of the amount to be donated to charity: ";
float per;
cin>>per;
cout<<endl;
cout<<"Movie: "<<name<<endl;

float totalAmount;
totalAmount=(adult*At)+(child*Ct);
cout<<"Total amount generated from ticket sales: $"<<totalAmount<<endl;

float donation;
donation=totalAmount*0.1;
cout<<"Donation to charity ("<<per<<"%): $"<<donation<<endl;

float result;
result=totalAmount-donation;
cout<<"Remaining amount after donation: $"<<result;
}

//task8
#include<iostream>
using namespace std;
main(){
cout<<"Enter vegetable price per kilogram (in coins): ";
float veg;
cin>>veg;

cout<<"Enter fruit price per kilogram (in coins): ";
float fruit;
cin>>fruit;

cout<<"Enter total kilograms of vegetables: ";
int Tveg;
cin>>Tveg;

cout<<"Enter total kilograms of fruits: ";
int Tfruit;
cin>>Tfruit;

float result;
result=(Tveg*veg)+(Tfruit*fruit);
float result2;
result2=result/1.94;
cout<<"Total earnings in Rupees (Rps): "<<result2;
}

//Task9
#include<iostream>
using namespace std;
main(){
cout<<"Enter a 4-digit number: ";
int digit;
cin>>digit;

int num4;
num4=digit%10;
int num3;
num3=(digit/10)%10;
int num2;
num2=(digit/100)%10;
int num1;
num1=(digit/1000)%10;

int result;
result=num1+num2+num3+num4;
cout<<"Sum of the individual digits: "<<result;
}

//task10
#include<iostream>
using namespace std;
main(){
cout<<"Number 1: ";
int a;
cin>>a;

cout<<"Number 2: ";
int b;
cin>>b;

cout<<"Number 3: ";
int c;
cin>>c;

cout<<"Number 4: ";
int d;
cin>>d;

cout<<"Number 5: ";
int e;
cin>>e;

cout<<"Number 6: ";
int f;
cin>>f;

cout<<"Number 7: ";
int g;
cin>>g;

cout<<"Number 8: ";
int h;
cin>>h;

cout<<"Number 9: ";
int i;
cin>>i;

cout<<"Number 10: ";
int j;
cin>>j;

cout<<"Number 11: ";
int k;
cin>>k;

cout<<"Number 12: ";
int l;
cin>>l;

cout<<"Number 13: ";
int m;
cin>>m;

cout<<"Number 14: ";
int n;
cin>>n;

cout<<"Number 15: ";
int o;
cin>>o;

int five;
five=a+b+c+d+e;
int ten;
ten=f*g*h*i*j;
int fifteen;
fifteen=k-l-m-n-o;

int result1;
result1=five+ten;
int result2;
result2=result1-fifteen;
cout<<"The final result is: "<<result2;
}

//Task11
#include<iostream>
using namespace std;
main(){
cout<<"Enter the person's age: ";
int age;
cin>>age;

cout<<"Enter the number of times they've moved: ";
int move;
cin>>move;

int result;
result=age/(move+1);
cout<<"Average number of years lived in the same house: "<<result;
}

//Task12
#include<iostream>
using namespace std;
main(){
cout<<"Number of square meters you can paint: ";
int meter;
cin>>meter;

cout<<"Width of the single wall (in meters): ";
int sw;
cin>>sw;

cout<<"Height of the single wall (in meters): ";
int sl;
cin>>sl;

int area;
area=sw*sl;
int result;
result=meter/area;
cout<<"Number of walls you can paint: "<<result;
}

//Task13
#include<iostream>
using namespace std;
main(){
	int sum;
	int num;
	
	cout<<"num= ";
	cin>>num;
	sum=sum+num;

	cout<<"num= ";
	cin>>num;
	sum=sum+num;

	cout<<"num= ";
	cin>>num;
	sum=sum+num;

	cout<<"num= ";
	cin>>num;
	sum=sum+num;

	cout<<"num= ";
	cin>>num;
	sum=sum+num;

	cout<<"sum= "<<sum;
}

//Task14
#include<iostream>
using namespace std;
main(){
cout<<"height of side: ";
float height;
cin>>height;

cout<<"radius of side: ";
float radius;
cin>>radius;

float result;
result=2*3.14*radius*(height+radius);
cout<<"area of cylinder is: "<<result;
}


//PD4
//Task1
#include<iostream>
using namespace std;

void equal(int num1, int num2);

main()
{	int num1;
	cout<<"Enter the first number: ";
	cin>> num1;
	int num2;
	cout<<"Enter the second number: ";
	cin>> num2;

	equal(num1, num2);
}
void equal(int num1, int num2)
{
	if(num1==num2)
{	cout<<"true";	}

	else
		cout<<"false";
}

//Task2
#include<iostream>
using namespace std;
void option(string a);
main()
{
	cout<<"Enter 'true' or 'false': ";
	string reverse;
	cin>> reverse;

	option(reverse);
}

void option(string a)
{
	if( a == "true")
{	cout<<"false";	}

	if( a == "false")
{	cout<<"true";	}
	}

//Task3
#include<iostream>
using namespace std;

void finalprice(string name, float price);

main()
{	string name;
	float price;
	cout<<"Enter the country's name: ";
	cin>>name;

	cout<<"Enter the ticket price in dollars: $";
	cin>>price;

	finalprice(name, price);
}

void finalprice(string name, float price)
{
if(name == "Pakistan")
	{ price=price-(price*0.05);
	  cout<<"Final ticket price after discount: $"<<price;}

if(name == "Ireland")
	{  price=price-(price*0.1);
	  cout<<"Final ticket price after discount: $"<<price;}


if(name == "India")
	{  price=price-(price*0.2);
	  cout<<"Final ticket price after discount: $"<<price;}


if(name == "England")
	{  price=price-(price*0.3);
	  cout<<"Final ticket price after discount: $"<<price;}


if(name == "Canada")
	{  price=price-(price*0.45);
	  cout<<"Final ticket price after discount: $"<<price;}
}

//Task4
#include<iostream>
using namespace std;

void checkSpeed(int speed);

main()
{
	cout<<"Speed: ";
	int speed;
	cin>> speed;

	checkSpeed( speed );
}
void checkSpeed(int speed)
{
	if(speed > 100)
	{	cout<<"Halt... YOU WILL BE CHALLENGED!!!";	}

	else
		cout<<"Perfect! You're going good.";
}

//Task5
#include<iostream>
using namespace std;

void possibleBonus(int a, int b);

main()
{	cout<<"Enter your position: ";
	int p1;
	cin>>p1;

	cout<<"Enter your friend's position: ";
	int p2;
	cin>>p2;

	possibleBonus(p1, p2);
}

void possibleBonus(int a, int b)
{
	if(b-a<=6 )
	{	cout<<"true";	}
	if(b-a>6)
	{	cout<<"false";	}	
}

//Task6
#include<iostream>
using namespace std;

void longestDuration(int h, int m);

main()
{
	cout<<"Enter the number of hours: ";
	int hour;
	cin>> hour;

	cout<<"Enter the number of minutes: ";
	int min;
	cin>> min;

	longestDuration(hour, min);
}

void longestDuration(int h, int m)
{
	int hr;
	hr=h*60;

	if(hr>m)
	{	cout<<h;	}
	else
		cout<<m;
}

//task7
#include<iostream>
using namespace std;

void flowershop(float redRose, float whiteRose, float tulip);

main()
{
	cout<<"Red Rose: ";
	float RR;
	cin>>RR;

	cout<<"White Rose: ";
	float WR;
	cin>>WR;

	cout<<"Tulips: ";
	float T;
	cin>>T;

	flowershop(RR, WR, T);
}
void flowershop(float redRose, float whiteRose, float tulip)
{
	float originalPrice;
	originalPrice=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout<<"Original Price: $"<<originalPrice<<endl;

	if(originalPrice > 200)
	{	float discount;
		discount = originalPrice-(originalPrice*0.2);
		cout<<"Price after Discount: $"<<discount;	}

	else
		cout<<"No discount applied.";
}

//Task8
#include<iostream>
using namespace std;

void pet(int holidays);

main()
{
	cout<<"Holidays: ";
	int holidays;
	cin>>holidays;

	pet(holidays);
}

void pet(int holidays)
{
	int workingDay;
	workingDay = 365 - holidays;

	int timeForGame;
	timeForGame = (workingDay*63)+(holidays*127);

if(timeForGame < 30000)
{

	int diffFromNorm;
	diffFromNorm = 30000 - timeForGame;

	int hr;
	hr = (diffFromNorm / 60);

	int min;
	min = diffFromNorm % 60;

	
	  cout<<"Tom sleeps well"<<endl;
	  cout<<hr<<" hours and "<<min<<" minutes less for play";
}


if(timeForGame > 30000)
{

	int diffFromNorm;
	diffFromNorm =timeForGame - 30000;

	int hr;
	hr = (diffFromNorm / 60);

	int min;
	min = diffFromNorm % 60;
	
		cout<<"Tom will run away"<<endl;
	  cout<<hr<<" hours and "<<min<<" minutes for play";
}
}

//Task9
#include<iostream>
using namespace std;

void result(int people, int tp);

main()
{
	cout<<"Number of people in the household: ";
	int people;
	cin>>people;

	cout<<"Number of rolls of TP: ";
	int tp;
	cin>>tp;

	result(people, tp);
}

void result(int people, int tp)
{
	int sheet = tp*500;
	int usageperday = 57* people;
	int totalusage = usageperday * 14;
	int available = sheet/usageperday;

if(sheet>totalusage)
{
	cout<<"Your TP will last "<<available<<" days, no need to panic!";
}
if(sheet<totalusage)
{
	cout<<"Your TP will only last "<<available<<" days, buy more!";
}
}


//LAB 4
//Task1
#include<iostream>
using namespace std;

void CalculateFuel(float distance);

main()
{
	cout<<"Enter the distance: ";
	float dis;
	cin>>dis;

	CalculateFuel(dis);
	
}
void CalculateFuel(float distance)
{
	float fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;

}

//Task2
#include<iostream>
using namespace std;

void inch(float inches);

main()
{
	cout<<"Enter the measurement in inches: ";
	float in;
	cin>> in;

	inch(in);
}

void inch(float inches)
{
	float result;
	result=inches/12;
	cout<<"Equivalent in feet: "<<result;
}

//Task3
#include<iostream>
using namespace std;

void length(int l1);

main()
{
	cout<<"Enter the side length of the Rubik's Cube: ";
	int a;
	cin>>a;

	length( a );
}

void length(int l1)
{
	int result;
	result=l1*l1*6;
	cout<<"Number of stickers needed: "<<result;
}

//Task4
#include<iostream>
using namespace std;

void add(int n1, int n2);
void sub(int n1, int n2);
void multiply(int n1, int n2);
void divide(float n1, float n2);

main()
{
	int n1, n2;
	char op;
	cout<<"Enter 1st number: ";
	cin>>n1;

	cout<<"Enter 2nd number: ";
	cin>>n2;

	cout<<"Enter an operator (+, -, *, /): ";
	cin>>op;
	
	if(op=='+')
{
	add(n1,n2);
}
	if(op=='-')
{
	sub(n1,n2);
}
	if(op=='*')
{
	multiply(n1,n2);
}
	if(op=='/')
{
	divide(n1,n2);
}
}

void add(int n1, int n2)
{	int sum;
	sum=n1+n2;
	cout<<"Addition: "<<sum;
}

void sub(int n1, int n2)
{	int subtract;
	subtract=n1-n2;
	cout<<"Subtraction: "<<subtract;
}

void multiply(int n1, int n2)
{	int multi;
	multi=n1*n2;
	cout<<"Multiplication: "<<multi;
}

void divide(float n1, float n2)
{	float div;
	div=n1/n2;
	cout<<"Division: "<<div;
}

//Task5
#include<iostream>
using namespace std;

void Vote(int age);


main()
{	int age;
	cout<<"Enter your age: ";
	cin>>age;

	Vote(age);
}

void Vote(int age)
{	if(age >= 18)
	cout<<"You are eligible to vote.";
	 
	if(age < 18)

	cout<<"You are not eligible to vote.";
}

//Task6
#include<iostream>
using namespace std;

void test(int score);

main()
{
	cout<<"Enter your score: ";
	int score;
	cin>>score;

	test(score);
}

void test(int score)
{
	if(score > 50)
{	cout<<"Pass";	}

	if(score <= 50)
{	cout<<"Fail";	}
}

//Task7
#include<iostream>
using namespace std;

void Number(int num);

main()
{
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	
	Number(num);

}

void Number(int num)
{
	if(num%2 == 0)
{	cout<<"Number "<<num<<" is even";	}

	if(num%2 == 1)
{	cout<<"Number "<<num<<" is odd";	}
}

//Task8
#include<iostream>
using namespace std;

void calculatePayableAmount(string day, float pur);

main()
{
	cout<<"Enter the day of purchase: ";
	string day;
	cin>>day;

	cout<<"Enter the total purchase amount: $";
	float purchase;
	cin>>purchase;

	calculatePayableAmount(day, purchase);

}

void calculatePayableAmount(string day, float pur)
{	if(day == "Sunday")
	{ 
	 b=b-(b*0.1);
	cout<<"Payable Amount: $"<<b; }
	
	 if(day == "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday")
		{cout<<"Payable Amount: $"<<b;	}
}

//Task9
#include<iostream>
using namespace std;

void fuelNeeded(float distance);

main()
{	cout<<"Enter the distance: ";
	float distance;
	cin>> distance;

	fuelNeeded(distance);

}
void fuelNeeded(float distance)
{	float result;
	result=distance*10;
	

	if(result > 100)
	{	cout<<"Fuel needed: "<<result;	};

	if(result < 100)
	{	cout<<"Fuel needed: 100";	};
}

//LAB 3
//Task1
#include<iostream>
using namespace std;
main(){
	cout<<"Enter your Name: ";
	string Name;
	cin>>Name;
	cout<<"Enter your roll number: ";
	int Roll_no;
	cin>>Roll_no;
	cout<<"Enter your Aggregate: ";
	float Aggregate;
	cin>>Aggregate;
	cout<<"Enter your Section: ";
	char Section;
	cin>>Section;
	cout<<"Student Information:"<<endl;
	cout<<"Name: "<<Name<<endl;
	cout<<"Roll Number: "<<Roll_no<<endl;
	cout<<"Aggregate: "<<Aggregate<<endl;
	cout<<"Section: "<<Section;
}

//task2
#include<iostream>
using namespace std;
main(){
	cout<<"Enter weight in pounds: ";
	float Weight;
	cin>>Weight;
	int result;
	result=Weight*0.45;
	cout<<Weight<<" pounds is equal to "<<result<<" kilograms.";
}

//Task3
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the length of the rectangle: ";
	int length;
	cin>>length;
	cout<<"Enter the width of the rectangle: ";
	int width;
	cin>>width;
	int Area;
	Area=length*width;
	cout<<"The area of the rectangle is: "<<Area;
}

//Task4
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the charge (Q) in Coulombs: ";
	float charge;
	cin>>charge;
	cout<<"Enter the time (t) in seconds: ";
	float time;
	cin>>time;
	float current;
	current=charge/time;
	cout<<"The current (I) is: "<<current<<" Amperes";
}

//Task5
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the Student's name: ";
	string name;
	cin>>name;

	cout<<"Enter matriculation marks (out of 1100): ";
	float matric;
	cin>>matric;

	cout<<"Enter intermediate marks (out of 550): ";
	float inter;
	cin>>inter;
	
	cout<<"Enter Ecat marks (out of 400): ";
	float ecat;
	cin>>ecat;

	ecat=ecat/400*0.5;
	matric=matric/1100*0.1;
	inter=inter/550*0.4;

	float score;
	score=(ecat+matric+inter)*100;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<score<<"%";
}

//Task6
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the size in megabytes (MB): ";
	float megabyte;
	cin>>megabyte;

	
	float bit;
bit=1024*1024*8*megabyte;

	cout<<megabyte<<" MB is equivalent to "<<bit<<" bits.";
}

//Task7
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the number of hours: ";
	int h;
	cin>>h;
	float second;
	second=h*3600;
	cout<<h<<" hours is equivalent to "<<second<<" seconds.";
}

//Task 8
#include<iostream>
using namespace std;
main(){
	cout<<"Enter voltage (in volts): ";
	float a;
	cin>>a;
	cout<<"Enter current (in amperes): ";
	float b;
	cin>>b;
	float c;
	c=a*b;
	cout<<"The power is "<<c<<" watts.";
}

//Task 9
#include<iostream>
using namespace std;
main(){
	cout<<"Enter your age in years: ";
	int a;
	cin>>a;
	int b;
	b=a*365;
	cout<<"Your age in days is approximately "<<b<<" days.";
}

//Task10
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the name of the cricket team: ";
	string name;
	cin>>name;

cout<<"Enter the number of wins: ";
int win;
cin>>win;

	cout<<"Enter the number of draws: ";
	int draw;
	cin>>draw;

cout<<"Enter the number of losses: ";
int losses;
cin>>losses;

	int result;
	result=(win*3)+(draw*1)+(losses*0);
	cout<<name<<" has obtained "<<result<<" points in the Asia Cup tournament.";
}

//Task11
#include<iostream>
using namespace std;
main(){
	cout<<"Enter the current world population: ";
	int pop;
	cin>> pop;

	cout<<"Enter the monthly birth rate (number of births per month): ";
	int bri;
	cin>> bri;

	int result;
	result=bri*12*30+pop;
	cout<<"The population in three decades will be: "<<result;
}

