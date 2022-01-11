// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;

	 char q;
	 cout << "Please enter the symbol:" << endl << endl;
	 cin >> q;
	 
	 
	 int x;
	 cout << "Please enter the line length:" << endl;
	 cin >> x;
	 
	 char hvd;
	 cout << " Horizontal, Vertical or diagonal:" << endl;
	 cin >> hvd;
	
	 if( hvd == 'h'){
	 int w;
	 for(w = 0; w < x; w++);
	 cout << 'h';
	 cout << endl;
	 }
	if( hvd == 'v'){
	int w;
	for(w = 0; w < x; w++)
	cout << 'v';
	cout << endl;
	}
	if( hvd == 'd'){
	for(int i = 0; i < x; i++){
	gotoxy(1+i,11+i);
	cout << 'd';
	cout << endl;
	}
	 }	
	 
	
	 






}
