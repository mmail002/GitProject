/* GitProject.cpp : Defines the entry point for the console application.


*/

//

#include <iostream>

using  namespace std;

//please add your github user to names
//another change
char * names[] = { "yxiao025","Xliu008", "MLalanne25","demoinclass", "mmail002", "rmarh001", "qle002",
					"winkhanh", "Yosigi12944","tpeck003", "PerryW11", "johannsilvanus", "je1013", "tylerspags",
					 "ClutchDutch", "mle003","dvalerio001", "jminc005", "nabbott335"
         }


int main()
{

	cout << "hello class" << endl;

	string s;


	for ( int x = 0 ; names[ x ] != NULL ; x++ ) {
		cout << names[x] << endl;
	}

}
