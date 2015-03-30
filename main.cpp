#include<string>
#include<fstream>
#include<iostream>
#include"bmi_h.h"
using namespace std;
int main(){
	double array[5000] = {0.0};
	BMI bmiclass;
	bmiclass.set(&array[0]);
	ofstream outFile("file.out",ios::out);
	int timer = 0;
	while(array[timer]!=0){
		outFile<<array[timer]<<"\t"<<bmiclass.get(array[timer])<<endl;
		timer++;
	}
	return 0;
}
