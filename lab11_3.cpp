//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#include<fstream>
#include<cmath>
#include <iomanip>

int main(){
    int count =0;
    double sum = 0;
    double mean = 0;
    double SD = 0;
    double SDmean = 0;
    string text;
    ifstream source("score.txt");
    while(getline(source,text)){
        sum += atof(text.c_str());
        SDmean += pow(atof(text.c_str()),2);
        count++;
    }
    mean = sum/count;
    SD = sqrt((SDmean/count)-pow(mean,2));

    cout << setprecision(3);
    cout << "Number of data = "<< count <<"\n";
    cout << "Mean = "<< mean <<"\n";
    cout << "Standard deviation = "<< SD;

    source.close();
    return 0;
}

