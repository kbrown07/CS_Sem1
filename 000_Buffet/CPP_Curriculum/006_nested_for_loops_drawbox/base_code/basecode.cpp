// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int q;
	cout << "Please enter box width:" << endl << endl;
	cin >> q;
	
	
	char w;
	cout << "Please enter border char:" << endl << endl;
	cin >> w;
	
	int f;
	cout << "Please enter box height:" << endl << endl;
	cin >> f;




	
	for(int y = 1; y < f+1; y++){
		for(int x = 1; x < q+1; x++){
			gotoxy(x,y);
			cout << w;
			}
		cout << endl;
		}
	
	
}
