#pragma once
#include <vector>
#include <chrono>
#include "Solid.h"
#include "Color.h"
#include <iostream>
#include <random>
#include "EmitterConfiguration.h"

using namespace std;
using namespace chrono;

class Emitter : public Solid
{
private:
    EmitterConfiguration conf;
    vector<Solid*> particlesVector;
    vector<long> particleCreationTimes; 

    milliseconds initialMilliseconds;
    long lastUpdateTime;
    long nextInterval;

    int currentBurstSize;
    



    int generateRandom(int min, int max);

public:
    Emitter(EmitterConfiguration confToSet = EmitterConfiguration()) 
        : conf(confToSet), currentBurstSize(0), nextInterval(0)
    {
        this->initialMilliseconds = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        this->lastUpdateTime = 0;
        this->nextInterval = generateRandom(conf.GetMinInterval(), conf.GetMaxInterval());
    }



    Color randomColor(int particleId);
    Vector3D randomSpeed(int particleId);

    void Render();
    void Update(const float& time);

    inline void setConfiguration(const EmitterConfiguration& configuration) { this->conf = configuration; }
    
    Vector3D randomPositionOffsetZ(int particleId);

    Solid* Clone();
};
