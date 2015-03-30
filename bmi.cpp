#include<string>
#include<iostream>
#include<cstdlib>
#include<fstream>
#include"bmi_h.h"
using namespace std;

double BMI::set(double array[]){
	ifstream inFile("file.in",ios::in);
	int time = 0;
	while(inFile>>height>>mass){
		height = height/100;
                array[time] = mass/(height*height);
		time++;
	}
	return 0;
}

string BMI::get(double bmi){
	if(bmi<15){
		return "Very severely underweight";
	}
	else if(bmi>=15.0 && bmi<16.0){
		return  "Severely underweight";
	}
	else if(bmi>=16.0 && bmi<18.5){
                return "Underweight";
        }
        else if(bmi>=18.5 && bmi<25){
                return  "Normal";
        }
        else if(bmi>=25 && bmi<30){
                return "Overweight";
        }
	else if(bmi>=30 && bmi<35){
                return  "Obese Class I (Moderately obese)";
        }
	else if(bmi>=35 && bmi<40){
                return "Obese Class II (Severely obese)";
        }
	else if(bmi>=40){
                return "Obese Class III (Very severely obese)";
        }
}
