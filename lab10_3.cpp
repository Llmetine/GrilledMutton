//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int num=0;
    float sum,avg,mean,sd,po;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        sum+=atof(textline.c_str());
        num++;
        po+=pow(atof(textline.c_str()),2);
    }
    avg=sum/num;
    mean=avg;
    sd=sqrt((po/num)-pow(avg,2));
    cout << "Number of data = " << num << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
     cout << "Standard deviation = " << sd;
}