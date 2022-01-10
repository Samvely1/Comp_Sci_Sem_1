// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	while(true){
		int x;
	int y;
	int q = 1;
	
	cout<<"input a number"<<endl;
	cin>>x;
	cout<<"input another number"<<endl;
	cin>>y;
	
	cout<<"type 1 for add, 2 for subtract, 3 for multiply and 4 for divide"<<endl;
	cin>>q;
	
	if(q==1){
		cout<<x+y<<endl;
	}
	else if (q==2){
		cout<<x-y<<endl;
	}
	else if (q==3){
		cout<<x*y<<endl;
	}
	else if (q==4){
		cout<<x/y<<endl;
	}
	cout<< "do you want to do another. type 1 for yes and 2 for no"<<endl;
	int z;
	cin>>z;
	if(z==2)
	{
		break;
	}
	
	
	
	}
	
	
}
