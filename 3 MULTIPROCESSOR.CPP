#include<iostream>

using namespace std;

class count{
	
	public:
		
		int value = 5;
		
		void operator ++(){
			value++;
			cout<<value<<endl;
		}
		
		void operator --(){
			value--;
			cout<<value<<endl;
		}
		

};
main(){
	
	count obj;
	
	++obj;
	--obj;
	
	
}
