#include<bits/stdc++.h>

using namespace std;

class Calculator {

    public:

        void calculate(float x, char op, float y) {

            switch (op)
            {
            case '+':
                cout<<"Sum of "<<x<<" and "<<y<<" is -> "<<x+y<<endl;
                break;
            case '-':
                cout<<"Difference between "<<x<<" and "<<y<<" is -> "<<x-y<<endl;
                break;
            case '*':
                cout<<"Multiplication of "<<x<<" and "<<y<<" is -> "<<x*y<<endl;
                break;
            case '/':
                if(y!=0)
                    cout<<"Division of "<<x<<" and "<<y<<" is -> "<<x/y<<endl;
                else
                    cout<<x<<" cannot be divided by 0";
                break;
                                
            default:
                cout<<"Enter appropriate operator"<<endl;
                break;
            }
            
        }

};


int main() {

    Calculator c;

    float x, y;
    char op;

    string condition;

    bool check = true;

    while(check) {

        cout<<"Enter a number: ";
        cin>>x;
        
        cout<<"Enter the operator: ";
        cin>>op;

        cout<<"Enter another number: ";
        cin>>y;

        c.calculate(x, op, y);

        cout<<"\nWant to continue? Enter yes to continue and no to terminate: ";
        cin>>condition;

        if(condition == "yes" || condition == "Yes" || condition == "YES")
            check = true;
        else
            check = false;

        if(check) cout<<endl;
    }

    return 0;
}
