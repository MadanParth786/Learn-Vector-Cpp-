// Vectors Begining for DSA Strong:
//3.Ways to create Vectors

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
	cout<<"Vector: "<<"\n";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main(void){
	vector<int>vec1; //zero length integer vector
	vector<char>vec2(4);//4-element charater vector
	vector<char>vec3(vec2);//4-element character vector from vector 2
	vector<int>vec4(6,3);//6-element vector of 3's.
	//vec1.push_back(8);
	display(vec4);  
	//if we dont import using namespace std vector will be intialize with
	//std::vector<int> vec1;
	int e;
	

//for(int i=0;i<4;i++){
//	cout<<"Enter element into vector:";
//	cin>>e;
//	vec1.push_back(e);  //Enter element into vector from end
//
//}
//vec1.pop_back();  // Remove last Element from array
//display(vec1);

}


