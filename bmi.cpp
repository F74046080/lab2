#include "bmi.h"

void BMI::setHeight(float x){
	height = x/100.0;	
}
float BMI::getHeight(){
	return height;
}
void BMI::setMass(float y){
	mass = y;
}
float BMI::getMass(){
	return mass;
}
float BMI::getBmi(){
	float bmi;
	bmi=mass/(height*height);
	return bmi;
}
string BMI::category(float bmi_2){
	string a;
	if(bmi_2<15.0){
		a="Very severely underweight";
		return a ;}
	else if(bmi_2<16.0){
		a="Severely underweight";
		return a ;}
	else if(bmi_2<18.5){
		a="Underweight";
		return a ;}
	else if(bmi_2<25.0){
		a="Normal";
		return a ;}
	else if(bmi_2<30.0){
		a="Overweight";
		return a ;}
	else if(bmi_2<35.0){
		a="Obese Class I (Moderately obese)";
		return a ;}
	else if(bmi_2<40.0){
		a="Obese Class II (Severely obese)";
		return a ;}
	else if(bmi_2>=40.0){
		a="Obese Class III (Very severely obese)";
	return a ;}
}
