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
<<<<<<< HEAD
char * names[] = { "ManhNguyen1010", "mnguy009@plattsburgh.edu" };
=======
char * names[] = { "Miguel Aballay", "mabal001"};
>>>>>>> 6ad3d7d8645ae869e34bc2bcfde4a8eb245b7f88

int main()
{
	cout << "hello class" << endl; // this is a comment

	string s;

	for ( int x = 0 ; names[ x ] != NULL ; x++ ) {
		cout << names[x] << endl;
	} 
}
