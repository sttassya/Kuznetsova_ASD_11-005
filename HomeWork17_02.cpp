#include <iostream>
#include <cmath>

using namespace std;


void numbers() {
    
    int n;
    int s = 0;
    int a = 0;
    cout << "Vvedite kolichestvo chisel : ";
    cin >> n;
    cout << "Vvedite chisla: ";
    for (int i = 0; i < n; i++) {
        cin >> a;
        s = s + a;
    }
    cout << "Sum: " << s << endl;
}
void dec() {
   
    double a, b, c, x1, x2;
    cout << "Vvedite koefficienty: ";
    cin >> a >> b >> c;
    double dec1;
    dec1 = b * b - 4 * a * c;
    if (dec1 == 0) {
        x1 = -b  / (2 * a);
        cout << "Koren : " << x1 << endl;
    }
    if (dec1 < 0) {
        cout << "Korney net" << endl;
    }
    if (dec1 > 0) {
        x1 = ((-b + sqrt(dec1)) / (2 * a));
        x2 = ((-b - sqrt(dec1)) / (2 * a));
        cout << "1 koren : " << x1 << " 2 koren : " << x2 << endl;
    }
}


void log() {
    int p = 0;
    int x;
    int r = 1;
    cout << "Vvedite x: ";
    cin >> x;
    while (r < x) {
        r = r * 2;
        p++;
    }
    p = p - 1;
    cout << "Max p: " << p << endl;
}

int power(int x, unsigned p) {
    int k = x;
    for (int i = 1; i < p; ++i) {
        k = k * x;
    }
    return k;
}

int main() {
    int x = 0;
    unsigned  p = 0;
    numbers();
    dec();
    log();
    cout << "Vvedite chislo: " ;
    cin >> x;
    cout << "Vvedite stepen: ";
    cin >> p;
    cout << "Answer: " << power(x, p) << endl;

    return 0;
}