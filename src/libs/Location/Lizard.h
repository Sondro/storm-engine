//============================================================================================
//    Spirenkov Maxim
//--------------------------------------------------------------------------------------------
//
//--------------------------------------------------------------------------------------------
//    Lizard
//--------------------------------------------------------------------------------------------
//
//============================================================================================

#ifndef _Lizard_h_
#define _Lizard_h_

#include "LocLife.h"

class Lizard : public LocLife
{
  public:
    Lizard();
    virtual ~Lizard();

  private:
    const char *GetModelName() override;
    const char *GetAniName() override;
    bool PostInit(Animation *ani) override;

    void IdleProcess(Animation *ani, float dltTime) override;
    void MoveProcess(Animation *ani, float dltTime) override;
    void IsStartMove(Animation *ani) override;
    void IsStopMove(Animation *ani) override;

  private:
    float lastMove;
};

#endif
