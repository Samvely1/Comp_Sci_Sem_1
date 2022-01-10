// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	int x;
	int y;
	int q = 1;
	
	cout<<"input a number"<<endl;
	cin>>x;
	cout<<"input another number"<<endl;
	cin>>y;
	
	cout<<"pick a number between 1 and 4"<<endl;
	cin>>q;
	
	if(q==1){
		cout<<x+y;
	}
	else if (q==2){
		cout<<x-y;
	}
	else if (q==3){
		cout<<x*y;
	}
	else if (q==4){
		cout<<x/y;
	}
	
	
}
