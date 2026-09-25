//      print the sum of a odd digit of a number using while loop
//   n = 10892
//
//


// print the sum of digits of a number using while loop
//     n = 10892

#include <iostream>
using namespace std;
int main()
{

int n = 10892;
int sum = 0;
while(n > 0)
{ int lastdigit = n%10;
    if(lastdigit%2 != 0)
  sum = sum + lastdigit;

    n = n/10;  

}
cout<<sum<<endl;


}

