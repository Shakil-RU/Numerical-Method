#include<bits/stdc++.h>
using namespace std;

class BisectionMethod{
private:
double epsilon = 0.001;
double lower, upper;

double function(double x)
{
    return x*x*x+x*x-1;
}
public:
double root;
void solve(){
    srand((int)time(0));
    while(true)
    {
        lower = -9 + rand()%10;
        upper = rand()%10;
        if(function(lower) * function(upper) <= 0)
        {
            break;
        }
    }

    if(upper<lower)
    {
        swap(lower, upper);
    }

    while(upper - lower >= epsilon)
    {
        root = (lower + upper) /2;
        if(function(root) * function(lower) <= 0)
        {
            upper = root;
        }
        else if(function(root) == 0.0)
        {
            break;
        }
        else{
            lower = root;
        }
    }
    cout<< "The root is "<< root <<endl;
}
};

int main()
{
    BisectionMethod x = BisectionMethod();
    x.solve();
    return 0;
}
