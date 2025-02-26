#ifndef SEA_BASE_HPP
#define SEA_BASE_HPP

#include "Sd2_h/CannonTrace.h"
#include "vmodule_api.h"

class SEA_BASE : public CANNON_TRACE_BASE
{
  public:
    virtual float WaveXZ(float x, float z, CVECTOR *vNormal = nullptr) = 0;
};

#endif
