#include <iostream>
#include <unistd.h> 

using namespace std;

void trafficLight(int trafficDensity) {
    if (trafficDensity > 7) {
        cout << "🔴 Red Light (Long Duration: 10s)" << endl;
        sleep(10);
        cout << "🟢 Green Light (Short Duration: 5s)" << endl;
        sleep(5);
    } else {
        cout << "🔴 Red Light (Short Duration: 5s)" << endl;
        sleep(5);
        cout << "🟢 Green Light (Long Duration: 10s)" << endl;
        sleep(10);
    }
    cout << "🟡 Yellow Light (3s)" << endl;
    sleep(3);
}

int main() {
    int trafficDensity;
    cout << "Enter traffic density (0-10): ";
    cin >> trafficDensity;
    
    trafficLight(trafficDensity);
    
    return 0;
}
