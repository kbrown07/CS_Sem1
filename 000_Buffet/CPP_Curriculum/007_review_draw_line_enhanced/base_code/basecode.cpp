// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;

	int q;
	cout << "Please enter line length:" << endl << endl;
	cin >> q;
	
	char w;
	cout << "Please enter line symbol:" << endl << endl;
	cin >> w;

	int f;
	cout << "Please enter line x coordinate:" << endl << endl;
	cin >> f;

	int e;
	cout << "Please enter line y coordinate:" << endl << endl;
	cin >> e;
	
		
	for(int y = 1; y < f+1; y++){
		for(int x = 1; x < q+1; x++){
			gotoxy(x,y);
			cout << w;
			cout << ' ';
			}
		cout << endl; 
		}

}
