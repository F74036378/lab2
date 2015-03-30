#include<string>
#ifndef bmi_h
#define bmi_h
class BMI{
	private:
		double mass, height;
	public:
		double set(double array[]);
		std::string get(double bmi);
};
#endif
