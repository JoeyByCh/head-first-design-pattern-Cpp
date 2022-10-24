#include <iostream>
using std::cout; using std::endl;
#include "WeatherDataDisplayer.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	WeatherData wd;
	TemperatureDisplayer tdisp(&wd);
	HumidityDisplayer hdisp(&wd);
	wd.setMeasurements(2333, 7777, 3.0);
	wd.removeObserver(&hdisp);
	cout<<"------------------After Remove HumidityDisplayer------------------------"<<endl;
	wd.setMeasurements(11, 22, 33);
	return 0;
}