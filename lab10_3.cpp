#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    ifstream source;
    source.open("score.txt");
    string num;
    double total,i=0,mean,dev,totalpow2;
    while(getline(source,num)){
        total += atof(num.c_str());
        totalpow2 += pow(atof(num.c_str()),2);
        i++;
    }

    mean = total / i;
    dev = sqrt((totalpow2/i)-pow(mean,2));
    cout << "Number of data = " << i << "\n";
    cout << "Mean = " << roundf(mean*1000)/1000 << "\n";
    cout << "Standard deviation = " << roundf(dev*1000)/1000 << "\n";
    return 0;
}