/* Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
?? Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

?? Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1 */

#include <iostream>
using namespace std;
int main (){
	int num;
	cout<<"Enter the number of readings :";
	cin>>num;
	
	int arr[num];
	cout<<"Enter the temperature readings :"<<endl;
	for (int i=0;i<num;i++){
		cin>>arr[i];
	}	
	int positive = 0, negative = 0,  zero = 0;
	
	for (int i=0;i<num;i++){
		if (arr[i]>0)
		positive ++;
		else if (arr[i]<0)
		negative ++;
		else 
		zero++;
	}
	cout<<"No. of Positive numbers in the readings ="<<positive<<endl;
	cout<<"No. of Negative numbers in the readings="<<negative<<endl;
	cout<<"No. of Zero numbers in the readings ="<<zero<<endl;
	
	return 0;
}
