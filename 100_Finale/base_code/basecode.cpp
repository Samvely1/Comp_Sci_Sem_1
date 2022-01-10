// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(6,12);
	cout<<"*****"<<endl;
	gotoxy(6,13);
	cout<<"*   *"<<endl;
	gotoxy(6,14);
	cout<<"*****"<<endl;
	
	gotoxy(11,7);
	cout<<"    *    "<<endl;
	gotoxy(11,8);
	cout<<"   / \\   "<<endl;
	gotoxy(11,9);
	cout<<"  / o \\ "<<endl;
	gotoxy(11,10);
	cout<<" / o o \\ "<<endl;
	gotoxy(11,11);
	cout<<"---------"<<endl;
	gotoxy(11,12);
	cout<<"   * *   "<<endl;
	gotoxy(11,13);
	cout<<"   * *   "<<endl;
	
	gotoxy(20,12);
	cout<<"*****"<<endl;
	gotoxy(20,13);
	cout<<"*   *"<<endl;
	gotoxy(20,14);
	cout<<"*****"<<endl;
	
while(true){
	for(int i = 0; i < 9; i++){
			gotoxy(9,i+3);
			cout<<"*"<<endl;
			gotoxy(17,i);
			cout<<"*"<<endl;
			gotoxy(22,i+2);
			cout<<"*"<<endl;
			sleep(1);
			gotoxy(9,i+3);
			cout<<' '<<endl;
			gotoxy(17,i);
			cout<<' '<<endl;
			gotoxy(22,i+2);
			cout<<' '<<endl;
			
		}
	}
	
}