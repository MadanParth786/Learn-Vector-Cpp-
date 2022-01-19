// Vectors Begining for DSA Strong:
//2. Implement Different Vectors methods:
//a.vector.insert()
//b.vector.front()
//c.vector.back()
#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main(void){
	vector<int> vec1;  
	//if we dont import using namespace std vector will be intialize with
	//std::vector<int> vec1;
	int e;
	

for(int i=0;i<4;i++){
	cout<<"Enter element into vector:";
	cin>>e;
	vec1.push_back(e);  //Enter element into vector from end

}
//vec1.pop_back();  // Remove last Element from array
display(vec1);
vector<int>::iterator iter=vec1.begin();  // before inserting create iterator for that 
vec1.insert(iter,566);  //insert method
//vec1.insert(iter+1,566);//after one place insert 566
//vec1.insert(iter,5,566);  //5 means m copy of 566 inserted

display(vec1);
cout<<vec1.front()<<" ";  //access first element of vector
cout<<vec1.back(); //access last element of vector.

}

