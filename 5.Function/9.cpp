//calculate area of a circle by radius using function

#include<iostream>
#include<iomanip>

using namespace std;
float area(int r)
{
    float area;
    area=3.1416*r;
    return area;
}
int main()
{
    int r;
    cin>>r;
    float a=area(r); 
    
    cout<<fixed<<setprecision(5)<<a;
    return 0;
}