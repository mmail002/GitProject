/*
Name: John Lynch, Tyler Wells
Teacher: Dr. Martin Mailoux
Course: OOP
Date: 4.6.2020
*/

#include <iostream>

using  namespace std;

//please add your github user to names
//another change
char * names[] = { "add your name"};

int main()
{
	cout << "hello class" << endl; // this is a comment

	string s;

	for ( int x = 0 ; names[ x ] != NULL ; x++ ) {
		cout << names[x] << endl;
	} 
}
