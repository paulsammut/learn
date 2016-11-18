#ifndef SUPPORT_1_H
#define SUPPORT_1_H

#include <string>

struct RoboCar
{
    int numSensors;
    std::string name;
    int capability;
};

//function prototype for our function that works with the struct.
RoboCar increaseCapability(RoboCar tempRobo);

struct advertising
{
    long numAdsShownToReaders;
    double percentageUsersClickOnAds;
    double avgEarnedFromEachAd;
};


#endif
