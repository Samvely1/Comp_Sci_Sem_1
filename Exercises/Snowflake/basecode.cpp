// base code file
#include "./hfiles/poole.h"
#include <thread>
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char x;
	cout<<"pick a symbol"<<endl;
	cin>>x;
		for(int i = 1; i < 10; i++){
			gotoxy(4,i+5);
			cout<<x<<endl;
			sleep(1);
			gotoxy(4,i+5);
			cout<<' '<<endl;
		}
		
		
		

	}

