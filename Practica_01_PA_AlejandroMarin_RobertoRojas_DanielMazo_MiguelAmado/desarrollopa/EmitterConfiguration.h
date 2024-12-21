#pragma once
#include "Solid.h"
#include "Vector3D.h"
#include "Color.h"
#include "Sphere.h"

class EmitterConfiguration
{
private:
    int maxParticles;
    int minBurstSize;
    int maxBurstSize;
    int minInterval;
    int maxInterval;
    Solid* particle;
    bool randomSpeedColor;
    Vector3D speedParticle;
    Color colorParticle;

public:
    EmitterConfiguration(
        int period,
        Solid* particle = new Sphere(),
        int maxParticles = 10,
        int minBurst = 1,
        int maxBurst = 5,
        int minInt = 500,
        int maxInt = 1500,
        bool random = false,
        Vector3D speed = Vector3D(0, 1, 0),
        Color color = Color(1, 1, 1, 1))
        : maxParticles(maxParticles),
        minBurstSize(minBurst),
        maxBurstSize(maxBurst),
        minInterval(minInt),
        maxInterval(maxInt),
        particle(particle),
        randomSpeedColor(random),
        speedParticle(speed),
        colorParticle(color)
        {}

    // Métodos de acceso
    inline int GetMaxParticles() const { return this->maxParticles; }
    inline int GetMinBurstSize() const { return this->minBurstSize; }
    inline int GetMaxBurstSize() const { return this->maxBurstSize; }
    inline int GetMinInterval() const { return this->minInterval; }
    inline int GetMaxInterval() const { return this->maxInterval; }
    inline bool GetIsRandom() const { return this->randomSpeedColor; }
    inline Vector3D getSpeedConf() const { return this->speedParticle; }
    inline Color getColorConf() const { return this->colorParticle; }
    inline Solid* GetParticle() const { return this->particle; }
};
