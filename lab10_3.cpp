//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std ;

int main(){
    int count = 0 ;
    float sum = 0 ;
    float sum_of_square = 0 ;
    ifstream source("score.txt");
    string textline ;
    while( getline(source, textline) ){
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()), 2) ;
        count++ ;
    }
    float mean,StandardDeviation ;
    mean = sum/count ;
    StandardDeviation = sqrt((sum_of_square/count) - pow(mean,2)) ;

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean << "\n";
    cout << "Standard deviation = "<< StandardDeviation << "\n";
    
    return 0;
}