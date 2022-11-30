/*
Please add your name to names
for demo !!!!
*/

#include <iostream>

using namespace std;

// please add your github user to names
// another change
char *names[] = {"add your name to this list", "mmail002", "afitz013", "nortondav18", "Mooshimi", "abrun014", "Aouncute", "shanthan-reddy372", "dgrant6", "endalkK", "Dan-Nicolas", "DanGen1", "KWhitney02", "That-Weirdo","Platinum-sky""Mshar012","nvaid002"};

int main()
{
	cout << "hello class" << endl; // this is a comment

	string s;

	for (int x = 0; names[x] != NULL; x++)
	{
		cout << names[x] << endl;
	}
}
