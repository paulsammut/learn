#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
class Sensor{
protected:
    string m_name;
public:
    Sensor(string name) : m_name{name}
    {
        cout << "Creating Sensor." << endl;
    }
    void printName()
    {
        cout << "Sensor name is: " << m_name << endl;
    }
    void capture()
    {
        cout << "Initiaing Sensor Capture " << m_name << endl;
    }
    virtual ~Sensor()
    {
        cout <<"Sensor " << m_name << " destroyed." << endl;
    }
};

class Sony : public Sensor {
public:
    Sony(string name) : Sensor(name)
    {
        cout << "Creating Sony. " << endl;
    }
    void setAperture()
    {
        cout << "Sony Aperture set!" <<endl;
    }
    void capture()
    {
        Sensor::capture();
        cout << "Initiaing Sony Capture " << m_name << endl;
    }
    virtual ~Sony()
    {
        cout <<"Sony " << m_name << " destroyed." << endl;
    }
};

int main()
{
    vector<Sensor*> sensors;
    Sensor *pSensor = new Sony("IMX577");
    pSensor->capture();
    ((Sony*)pSensor)->capture();
    delete pSensor;
    return 0;
}
