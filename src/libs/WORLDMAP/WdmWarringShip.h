//============================================================================================
//    Spirenkov Maxim aka Sp-Max Shaman, 2001
//--------------------------------------------------------------------------------------------
//
//--------------------------------------------------------------------------------------------
//    WdmWarringShip
//--------------------------------------------------------------------------------------------
//
//============================================================================================

#ifndef _WdmWarringShip_H_
#define _WdmWarringShip_H_

#include "WdmEnemyShip.h"

class WdmWarringShip : public WdmEnemyShip
{
    struct MoveInfo
    {
        CVECTOR v;
        float dAng;
        float time;
        float kTime;
    };

    // --------------------------------------------------------------------------------------------
    // Construction, destruction
    // --------------------------------------------------------------------------------------------
  public:
    WdmWarringShip();
    virtual ~WdmWarringShip();

    // Calculations
    void Update(float dltTime) override;

    // Rendering
    void LRender(VDX9RENDER *rs) override;

  protected:
    // All move calculations together
    void Move(float dltTime) override{};

    // --------------------------------------------------------------------------------------------
    // Encapsulation
    // --------------------------------------------------------------------------------------------
  private:
    // Particles for cannon smoke
    RS_RECT rect[24];
    MoveInfo move[24];
    long numRects;
    float brnTime;
    long texture;
};

#endif
