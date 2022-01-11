// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	gotoxy(3,5);
	cout << '@';
	gotoxy(3+1,5);
	cout << 'R';
	gotoxy(3+2,5);
	cout << 'M';
	gotoxy(3+3,5);
	cout << 'A';
	gotoxy(3+4,5);
	cout << 'N';
	
	
	
	gotoxy(3,5+1);
	cout << 'H';
	gotoxy(3,5+2);
	cout << 'E';
	gotoxy(3,5+3);
	cout << 'Y';
	
	
	for(int i = 0; 1 < 5; i++){
		gotoxy(3+i,5+i);
		cout << 'N';
	}



}
