#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int,int);
float retDiv(int,int);

int a;
int b;

int main()
{
    cout << "Anna luku a: " << endl;
    cin >> a;
    cout << "Anna luku b: " << endl;
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    cout << "Anna uusi luku a: " << endl;
    cin >> a;
    cout << "Anna uusi luku b: " << endl;
    cin >> b;

    cout << "Lukujen summa oli: " << retSum(a,b) << endl;
    std::cout << "Lukujen osamaara oli: " <<std::fixed << std::setprecision(2) << retDiv(a,b) << endl;

    return 0;
}

void calcSum(int, int) {
    int sum = a + b;
    cout << "Lukujen summa on: " << sum << endl;
}

void calcDiv(int, int) {
    float div = (float)a/(float)b;
    if(b <= 0){
        cout << "Virheilmoitus!" << endl;
    }
    else{
        std::cout << "Lukujen osamaara oli: " <<std::fixed << std::setprecision(2) << div << endl;
    }
}

int retSum(int,int) {
    int sum2 = a+b;
    return sum2;
}

float retDiv(int,int) {
    float div2 = (float)a/(float)b;
    if(b<=0){
        cout << "Virhe!" << endl;
        return 0;
    }
    else{
        return div2;
    }
}

