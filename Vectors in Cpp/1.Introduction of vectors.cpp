// Vectors Begining for DSA Strong:
//1. Introduction to create a vector and display it.

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
vec1.pop_back();  // Remove last Element from array
display(vec1);

}


