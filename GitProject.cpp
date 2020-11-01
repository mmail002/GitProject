/*
Please add your name to names
*/

#include <iostream>

using  namespace std;

//please add your github user to names
//another change
char * names[] = { "mmail002", "johndoe!!!!!", "Jason Jacobs", "MattThung2400"};

int main()
{
	cout << "hello class" << endl; // this is a comment

	string s;

	for ( int x = 0 ; names[ x ] != NULL ; x++ ) {
		cout << names[x] << endl;
	} 
}
