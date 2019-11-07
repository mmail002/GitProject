/* GitProject.cpp : Defines the entry point for the console application.

   
*/
   
//

#include <iostream>

using  namespace std;

char * names[] = { "mmail002", NULL };
int main()
{ 

	cout << "hello class" << endl;

	for ( int x = 0 ; names[ x ] != NULL ; x++ ) {
		cout << names[x] << endl;
	}

}