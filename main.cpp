#include <iostream>
using namespace std;
int main() {
    int n,num1=0,num2=1,nums, i;// nums>num2>num1
    cin>>n;

    cout << 1 << endl;
    for(i=0;;i++){

        nums = num1 + num2;//sommo
        num1 = num2;//sposto
        num2 = nums;

        if(nums>n)break;
        cout << nums << endl;

    }

    return 0;
}
