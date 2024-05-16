#include<stdio.h>
#include<math.h>


double myPow(double x, int n) 
{
    double ans = 0.0;

    ans = pow(x,n);
    printf("\n%f",ans);

}



int main()
{
    // you can also take user input in this program and pass
    // it as a parameter...
    int n = 3;
    double x = 2.1;

    myPow(x,n);

}


