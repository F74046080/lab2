#include "bmi.h"
int main(){

	float x,y,z;
	BMI k;
	ifstream in("file.in",ios::in);
	ofstream out("file.out",ios::out);
	if(!in){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	while(in>>x>>y){
		if(x==0) exit(1);
		k.setHeight(x);
		k.setMass(y);
		z=k.getBmi();
		//cout<<setprecision(4)<<k.getBmi()<<" "<<endl;    //debug
		out<<setprecision(4);
		if(k.getBmi()<15.0){
			out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
		else if(k.getBmi()<16.0){
			out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
		else if(k.getBmi()<18.5){
		    out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
		else if(k.getBmi()<25.0){
	        out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
		else if(k.getBmi()<30.0){
			out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
        else if(k.getBmi()<35.0){
		  	out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
        else if(k.getBmi()<40.0){
		    out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
		else if(k.getBmi()>=40.0){
		    out<<k.getBmi()<<"\t"<<k.category(z)<<endl;}
	}
	in.close();
	out.close();
}
