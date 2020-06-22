#include<iostream>
#include<conio.h>
#include<math.h>
#include <iomanip>      

using namespace std;

double distanceCalculate(double x1, double y1, double x2, double y2)
{
	double x = x1 - x2; 
	double y = y1 - y2;
	double dist;

	dist = pow(x, 2) + pow(y, 2);       
	std::cout << std::fixed;
  dist = sqrt(dist);                  

	return dist;
}

int main()
{
	double x1, y1, x2, y2;
	double dist;
	
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

	dist = distanceCalculate(x1, y1, x2, y2);    
	cout << std::setprecision(3) << dist;
}
