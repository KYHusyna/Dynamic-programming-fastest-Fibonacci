#include <iostream>
#include <ctime>

using namespace std;

    long long A[100];


long long f(int n) {

    if (n < 2) 
        return 1;
    else return  f(n - 1) + f(n - 2);
}


long long Fib(int n) 
{
    if (A[n] == 0) {
        if (n == 0 || n == 1) {
            A[n] = 1;
        }
        else {
            A[n] = Fib(n - 1) + Fib(n - 2);
        }
    }
            return A[n];
}




long long Fibonacci(int n) {
    A[0] = 1;
    A[1] = 1;
    for (int i = 2; i <= n; i++) {
        A[i] = A[i - 1] + A[i - 2];
    }

    return A[n];
}


    int main(long long numb)
    {
        long long startTime, endTime;
     int n1 = 0;

     cout <<"           Firs method           " << endl;
     cout << "---------------------------------" << endl;

        double start=clock();
      while(n1 <= 30) {

        if (n1 % 10 == 0) {

            double end = clock(); 
            double miliseconds = difftime(end, start);

            if (miliseconds < 0.0001) {
                miliseconds = 0.1;

                cout << "For " << n1 << " fibonacci number=" << f(n1) << endl;
                cout << "Wasted time <" << miliseconds * 0.001 << " seconds" << endl;
            }
            else {
                cout << "For " << n1 << " fibonacci number=" << f(n1) << endl;
                cout << "Wasted time :" << miliseconds * 0.001 << " seconds" << endl;
            }
        }
        n1 ++;
        if (n1 > 40) {
            break;
        }
      }
      n1 = 0;
     cout << "---------------------------------" << endl;

     cout << "           Second method           " << endl;
     cout << "---------------------------------" << endl;
     
      while (n1 <= 100) {
          start = clock();

        if (n1 % 10 == 0) {
            double end = clock();

            double miliseconds = difftime(end, start);
            if (miliseconds < 0.0001) {
                miliseconds = 0.0001;

                cout << "For " << n1 << " fibonacci number=" <<Fib(n1) << endl;
                cout << "Wasted time <" << miliseconds  << " seconds" << endl;
            }
            else {
                cout << "For " << n1 << " fibonacci number=" << Fib(n1) << endl;
                cout << "Wasted time :" << miliseconds  << " seconds" << endl;
            }
        }
        n1++;

      }
      n1 = 0;
     cout << "---------------------------------" << endl;

     cout << "           Third method           " << endl;
     cout << "---------------------------------" << endl;

       while (n1 <= 100) {
           start = clock();
        if (n1 % 10 == 0) {
            double end = clock();

            double miliseconds = difftime(end, start);
            if (miliseconds < 0.0001) {
                miliseconds = 0.000001;
                cout << "For " << n1 << " fibonacci number=" << Fibonacci(n1) << endl;
                cout << "Wasted time <" << "0.000001" << " seconds" << endl;
            }
            else {
                cout << "For " << n1 << " fibonacci number=" << Fibonacci(n1) << endl;
                cout << "Wasted time :" << miliseconds << " seconds" << endl;
            }
        }
        n1++;
       }

     cout << "---------------------------------" << endl;
     return 0;

    }
