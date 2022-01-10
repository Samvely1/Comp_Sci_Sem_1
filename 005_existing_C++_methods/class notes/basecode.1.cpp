// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	
	for(int i = 10; i < 30; i++){
			gotoxy(i,i+3);
			cout<<"%"<<endl;
	}

}
