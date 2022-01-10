// base code file
#include "./hfiles/poole.h"
#include <thread>
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	
	while(kbhit()==0){
		gotoxy(5,5);
		//char x = getch();
		//cin>>x;
		cout<<random(9);
	
	
	}
}
