//find the nth root of a number
#include <iostream>
using namespace std;

double nthRoot(double x, int n) {
    double low = 0.0, high = x;
    double epsilon = 0.0000001; // Desired precision

    while (high - low > epsilon) {
        double mid = low + (high - low) / 2.0;
        double midToTheN = 1.0;
        for (int i = 0; i < n; ++i)
            midToTheN *= mid;

        if (midToTheN > x)
            high = mid;
        else if (midToTheN < x)
            low = mid;
        else
            return mid;
    }
    return low + (high - low) / 2.0;
}

int main() {
    double x;
    int n;
 
    cin >> x;
  
    cin >> n;
    if (n == 0) {
        cout << "Undefined! Can't calculate the 0th root." << endl;
    } else {
        double result = nthRoot(x, n);
        cout << "The " << n << "th root of " << x << " is approximately: " << result << endl;
    }
    return 0;
}
