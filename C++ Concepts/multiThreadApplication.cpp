
#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono_literals;

void RefreshForecast (map<string, int> forecastMap)
{
    while (true)
    {
        for(auto item : forecastMap)
        {
            item.second++;
            cout << item.first << " - " << item.second << endl;
        }

        this_thread::sleep_for(2000ms);
    }

}

int main() {

    map<string, int> forecastMap = {
        {"New York", 15},
        {"Mumbai", 32},
        {"London", 12},
        {"Singapore", 23},
    };

    thread bgWorker(RefreshForecast, forecastMap);

	return 0;
}