#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(){

    //cout << "hello\n";
    //system.execute("echo 'hello again'");
    auto t0 = high_resolution_clock::now();
    int last_duration = 0;
    for(;;){
        //cin.get();
        auto t1 = high_resolution_clock::now();
        if((duration_cast<seconds>(t1 - t0).count()) - (last_duration) == 1){
            cout << duration_cast<seconds>(t1 - t0).count() << " sec." << endl;
        }
        last_duration = duration_cast<seconds>(t1 - t0).count();
    }
    return 0;
}