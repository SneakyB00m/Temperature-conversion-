// Mode 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
	int Menu, Cant, Cant2, i = 0;
	float F = 0, K = 0, C = 0, R = 0, n1 = 0, num = 0, L = 0, H = 0, B = 0, Rad = 0, W = 0, Op = 0, Op2 = 0, Op3 = 0,p1=0 ,p2=0 ,a1=0 ,a2=0 ,Op4=0,n2=0,s=0,d=0,t=0,Op5=0,Op6=0,Op7=0,v1=0,v2=0,Op8=0;
	char resp, Option;
	do
	{
		system("color 02");
		cout << "..................Welcome...................." << endl;
		cout << "...................MENU....................." << endl;
		cout << "1-.Calculator" << endl;
		cout << "2.-Figures" << endl;
		cout << "3.-Physical 2" << endl;
		cout << "4.-Degreese" << endl;
		cout << "Type the number of the mode u want to use" << endl;
		cin >> Menu;
		switch (Menu)
		{

		case 1:
			cout << "........Calculator......." << endl;
			cout << "1.-Sum" << endl;
			cout << "2.-Substraction" << endl;
			cout << "3.-Division" << endl;
			cout << "4.-Multiplication" << endl;
			cin >> Menu;
			switch (Menu)
			{
			case 1:
				cout << "Sum" << endl;
				cout << "How many numbres u want to sum" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give a number" << endl;
					cin >> n1;
					Op2 = Op2 + n1;
					cout << "The result is: " << Op2 << endl;
				}
				break;
			case 2:
				cout << "Substraction" << endl;
				cout << "How many numbres u want to Substrac" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give a number" << endl;
					cin >> n1;
					Op2 = n1-Op2;
					cout << "The result is: " << Op2 << endl;
				}
				break;
			case 3:
				cout << "Division" << endl;
				cout << "How many numbres u want to Divide" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give a number" << endl;
					cin >> n1;
					cout << "Give a second number" << endl;
					cin >> n2;
					Op2 = n1 / n2;
					cout << "The result is: " << Op2 << endl;
				}
				break;
			case 4:
				cout << "Multiplaction" << endl;
				cout << "How many numbres u want to multiply" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give a number" << endl;
					cin >> n1;
					cout << "Give a second number" << endl;
					cin >> n2;
					Op2 = n1 * n2;
					cout << "The result is: " << Op2 << endl;
				}
				break;
			}
			break;
		case 2:
			cout << ".........Figures........" << endl;
			cout << "1.-Traingle" << endl;
			cout << "2.-Circle" << endl;
			cout << "3.-Square" << endl;
			cout << "4.-Rectangle" << endl;
			cin >> Menu;
			switch (Menu)
			{
			case 1:
				cout << "Triangle" << endl;
				cout << "How many operations u want?" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give the base" << endl;
					cin >> B;
					cout << "Give the height" << endl;
					cin >> H;
					Op3 = B * H / 2;
					cout << "The result is: " << Op3 << endl;
				}
				break;
			case 2:
				cout << "Circle" << endl;
				cout << "How many operations u want?" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give the Radius" << endl;
					cin >> Rad;
					Op3 = 3.14159265359*Rad*Rad;
					cout << "The result is: " << Op3 << endl;
				}
				break;
			case 3:
				cout << "Square" << endl;
				cout << "How many operations u want?" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give the side" << endl;
					cin >> L;
					Op3 = L * L;
					cout << "The result is: " << Op3 << endl;
				}
				break;
			case 4:
				cout << "Rectangle" << endl;
				cout << "How many operations u want?" << endl;
				cin >> num;
				for (i = 0; i < num; i++)
				{
					cout << "Give the length" << endl;
					cin >> L;
					cout << "Give the width" << endl;
					cin >> W;
					Op3 = W * L;
					cout << "The result is: " << Op3 << endl;
				}
				break;
			}
			break;
		case 3:
			cout << ".........Physical 2........." << endl;
			cout << "1.-Pascal" << endl;
			cout << "2.-Flow" << endl;
			cout << "3.-Speed" << endl;
			cin >> Menu;
			switch (Menu)
			{
			case 1:
				cout << "What is missing ?" << endl;
				cout << "Type 1 for Pressure 1,Type 2 for Pressure 2,Type 3 for Area 1,Type 4 for Area 2" << endl;
				cin >> Menu;
				switch (Menu)
				{
					case 1:
						cout << "Give P2" << endl;
						cin >> p2;
						cout << "Give A1 in diameters" << endl;
						cin >> a1;
						cout << "Give A2 in diameters" << endl;
						cin >> a2;
						Op6 = (a1 * a1) * 3.14159265359/4;
						Op7 = (a2 * a2 )* 3.14159265359/4;
						Op4 = p2 * Op6 / Op7;
						cout << "The result is: " << Op4 << endl;
					break;
					case 2:
						cout << "Give P1" << endl;
						cin >> p1;
						cout << "Give A1 In Diameters" << endl;
						cin >> a1;
						cout << "Give A2 In Diameters" << endl;
						cin >> a2;
						Op6 = (a1 * a1) * 3.14159265359 / 4;
						Op7 = (a2 * a2)* 3.14159265359 / 4;
						Op4 = p1 * Op7 / Op6;
						cout << "The result is: " << Op4 << endl;
					break;
					case 3:
						cout << "Give P1" << endl;
						cin >> p1;
						cout << "Give A2 In Diameters" << endl;
						cin >> a2;
						cout << "Give P2" << endl;
						cin >> p2;
						Op7 = (a2 * a2)* 3.14159265359 / 4;
						Op4 = p1 * Op7 / p2;
						cout << "The result is: " << Op4 << endl;
					break;
					case 4:
						cout << "Give P2" << endl;
						cin >> p2;
						cout << "Give A1 In Diameters" << endl;
						cin >> a1;
						cout << "Give P1" << endl;
						cin >> p1;
						Op6 = (a1 * a1) * 3.14159265359 / 4;
						Op4 = p2 * Op6 / p1;
						cout << "The result is: " << Op4 << endl;
					break;
				}
			break;
			case 2:
				cout << "What is missing ?" << endl;
				cout << "Type a for Area1, Type b for Area2,Type c Speed1, Type d Speed2" << endl;
				cin >> Option;
				switch (Option)
				{
				case 'a':
					cout << "Give the area2" << endl;
					cin >> a2;
					cout << "Give the Speed1" << endl;
					cin >> v1;
					cout << "Give the Speed2" << endl;
					cin >> v2;
					Op8 = a2 * v2 / v1;
					cout << "The result is: " << Op8 << endl;
					break;
				case 'b':
					cout << "Give the area1" << endl;
					cin >> a1;
					cout << "Give the Speed1" << endl;
					cin >> v1;
					cout << "Give the Speed2" << endl;
					cin >> v2;
					Op8 = a1 * v1 / v2;
					cout << "The result is: " << Op8 << endl;
					break;
				case 'c':
					cout << "Give the area2" << endl;
					cin >> a2;
					cout << "Give the Speed2" << endl;
					cin >> v2;
					cout << "Give the area1" << endl;
					cin >> a1;
					Op8 = a2 * v2 / a1;
					cout << "The result is: " << Op8 << endl;
					break;
				case 'd':
					cout << "Give the area1" << endl;
					cin >> a2;
					cout << "Give the Volume1" << endl;
					cin >> v1;
					cout << "Give the area2" << endl;
					cin >> a2;
					Op8 = a1 * v1 / a2;
					cout << "The result is: " << Op8 << endl;
					break;
				}
			break;
			case 3:
				cout << "What is missing ?" << endl;
				cout << "Type S for Speed,Type D for Distance,Type t for Time" << endl;
				cin >> Option;
				switch (Option)
				{
				case 's':
					cout << "Give the Distance" << endl;
					cin >> d;
					cout << "Give the Time" << endl;
					cin >> t;
					Op5 = d / t;
					cout << "The result is: " << Op5 << endl;
				break;
				case 'd':
					cout << "Give the Speed" << endl;
					cin >> s;
					cout << "Give the Time" << endl;
					cin >> t;
					Op5 = s * t;
					cout << "The result is: " << Op5 << endl;
				break;
				case 't':
					cout << "Give the Distance" << endl;
					cin >> d;
					cout << "Give the speed" << endl;
					cin >> s;
					Op5 = d / s;
					cout << "The result is: " << Op5 << endl;
				break;
				}
			break;
			}
			break;
		case 4:
			cout << ".........Degrees........." << endl;
			cout << "1.-Celsius to Fahrenheit" << endl;
			cout << "2.-Celsius to Kelvin" << endl;
			cout << "3.-Celsius to Rankine" << endl;
			cout << "4.-Fahrenheit to Celsius" << endl;
			cout << "5.-Fahrenheit to Kelvin" << endl;
			cout << "6.-Fahrenheit to Rankine" << endl;
			cout << "7.-Kelvin to Celsius" << endl;
			cout << "8.-Kelvin to Fahrenheit" << endl;
			cout << "9.-Kelvin to Rankine" << endl;
			cout << "10.-Rankine to Celsius" << endl;
			cout << "11.-Rankine to Fahrenheit" << endl;
			cout << "12.-Rankine to Kelvin" << endl;
			cout << "--Typoe your option--" << endl;
			cin >> Menu;
			switch (Menu)
			{
			case 1:
				cout << "Celius to Fahrenheit" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Celsius" << endl;
					cin >> C;
					Op = (1.8)*C + 32;
					cout << "The result is: " << Op << endl;
				}
				break;
			case 2:
				cout << "Celius to Kelvin" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Celsius" << endl;
					cin >> C;
					Op = C + 273.15;
					cout << "The result is: " << Op << endl;
				}
				break;
			case 3:
				cout << "Celius to Rankine" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Celsius" << endl;
					cin >> C;
					Op = (1.8)*C + 491.67;
					cout << "The result is: " << Op << endl;
				}
				break;
			case 4:
				cout << "Fahrenheit to Celsius" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Fahrenheit" << endl;
					cin >> F;
					Op = (F - 32)*(.555);
					cout << "The result is" << Op << endl;
				}
				break;
			case 5:
				cout << "Fahrenheit to Kelvin" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Fahrenheit" << endl;
					cin >> F;
					Op = (F - 32)*(.555) + 273.15;
					cout << "The result is" << Op << endl;
				}
				break;
			case 6:
				cout << "Fahrenheit to Rankine" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Fahrenheit" << endl;
					cin >> F;
					Op = (F + 459.67);
					cout << "The result is" << Op << endl;
				}
				break;
			case 7:
				cout << "Kelvin to Celsius" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Kelvin" << endl;
					cin >> K;
					Op = K - 273.15;
					cout << "The result is" << Op << endl;
				}
				break;
			case 8:
				cout << "Kelvin to Fahrenheit" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Kelvin" << endl;
					cin >> K;
					Op = (K - 273.15)*1.8 + 32;
					cout << "The result is" << Op << endl;
				}
				break;
			case 9:
				cout << "Kelvin to Rankine" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Kelvin" << endl;
					cin >> K;
					Op = (K - 273.15)*1.8 + 491.67;
					cout << "The result is" << Op << endl;
				}
				break;
			case 10:
				cout << "Rankine to Celsius" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Rankine" << endl;
					cin >> R;
					Op = (R - 491.67)*1.555;
					cout << "The result is" << Op << endl;
				}
				break;
			case 11:
				cout << "Rankine to Fahrenheit" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Rankine" << endl;
					cin >> R;
					Op = R - 459.67;
					cout << "The result is" << Op << endl;
				}
				break;
			case 12:
				cout << "Rankine to Kelvin" << endl;
				cout << "How many degrees u want to make" << endl;
				cin >> Cant;
				for (i = 0; i < Cant; i++)
				{
					cout << "Give the degrees in Rankine" << endl;
					cin >> R;
					Op = (R - 491.67)*.555 + 273.15;
					cout << "The result is" << Op << endl;
				}
				break;
				return 0;
			}
			case 5:
				cout << "===================================" << endl;
				cout << "=           Sheep.Com ©           =" << endl;
				cout << "=            Alan Dev.            =" << endl;
				cout << "=         Helper Giovanni.        =" << endl;
				cout << "=            2018-2018            =" << endl;
				cout << "=                                 =" << endl;
				cout << "===================================" << endl;
			break;
		}
		cout << "U wanna to continue S/N?" << endl;
		cin >> resp;
		system("CLS");
	}
	while (resp == 's');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
