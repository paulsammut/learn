#include <iostream>
#include <array>
#include <string>
#include <vector>

class Value
{
private:
    int m_value;
public:
    Value(int Value) {
        m_value = Value;
    }

    friend bool isEqual(const Value &value1, const Value &value2);
};

bool isEqual(const Value &value1, const Value &value2)
{
    return value1.m_value == value2.m_value;
}

class Humidity;

class Temperature
{
private:
    int m_temp;
public:
    Temperature(int temp=0) {
        m_temp = temp;
    }

    void setTemperature(int temp) {
        m_temp = temp;
    }

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

class Humidity
{
private:
    int m_humidity;
public:
    Humidity(int humidity=0) {
        m_humidity = humidity;
    }

    void setHumidity(int humidity) {
        m_humidity = humidity;
    }

    friend void printWeather(const Temperature &temperature, const Humidity &humidity);
};

void printWeather(const Temperature &temperature, const Humidity &humidity)
{
    std::cout << "The temperature is " << temperature.m_temp <<
              " and the humidity is " << humidity.m_humidity << '\n';
}

int main()
{
    Value val1(1);
    Value val2(1);

    std::cout << isEqual(val1, val2) << std::endl;

    Humidity hum(10);
    Temperature temp(12);

    printWeather(temp, hum);

    return 0;
}

