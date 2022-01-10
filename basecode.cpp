// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	for(int y = 1; y < 9; y++){
		for(int x = 1; x<6; x++){
			gotoxy(x,y+1);
			cout<< "%";
		}
		
	}

}
