#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;

class BMI{
	public:
		void setHeight(float x);
		void setMass(float y);
		float getBmi();
		string category(float bmi_2);
	private:
		float height,mass;
};


