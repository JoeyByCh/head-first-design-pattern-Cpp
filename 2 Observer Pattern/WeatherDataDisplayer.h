#ifndef WDD_GUARD
#define WDD_GUARD
#include<iostream>
#include<list>
#include "Display.h"
#include "Observer.h"
#include "Subject.h"

class WeatherData: public Subject{
public:
	void registerObserver(Observer *ob){
		obs_list.push_back(ob);
	}
	void removeObserver(Observer *ob){
		obs_list.remove(ob);
	}
	void notifyObserver(){
		for(Observer* ob: obs_list){
			ob->update();
		}
	}
	void measurementChanged(){
		notifyObserver();
	}
	void setMeasurements(double temperature, double humidity, double pressure){
		this->temperature = temperature;
		this->humidity = humidity;
		this->pressure = pressure;
		measurementChanged();
	}
	double getTemperature() const{
		return temperature;
	}
	double getHumidity() const{
		return humidity;
	}
	double getPressure() const{
		return pressure;
	}
private:
	double temperature, humidity, pressure;
	std::list<Observer*> obs_list;
};

class TemperatureDisplayer: public Observer, DisplayElement{
public:
	TemperatureDisplayer(WeatherData* wd){
		weather_data = wd;
		wd->registerObserver(this);
	}
	void update(){
		temperature = weather_data->getTemperature();
		display();
	}
	void display(){
		std::cout<<"This is TemperatureDisplayer. Temperature is "<<temperature<<std::endl;
	}
public:
	double temperature;
	WeatherData* weather_data;
};

class HumidityDisplayer: public Observer, DisplayElement{
public:
	HumidityDisplayer(WeatherData* wd){
		weather_data = wd;
		wd->registerObserver(this);
	}
	void update(){
		humidity = weather_data->getHumidity();
		display();
	}
	void display(){
		std::cout<<"This is HumidityDisplayer. Humidity is "<<humidity<<std::endl;
	}
public:
	double humidity;
	WeatherData* weather_data;
};

#endif