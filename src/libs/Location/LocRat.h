//============================================================================================
//    Spirenkov Maxim, 2003
//--------------------------------------------------------------------------------------------
//
//--------------------------------------------------------------------------------------------
//    LocRat
//--------------------------------------------------------------------------------------------
//
//============================================================================================

#ifndef _LocRat_h_
#define _LocRat_h_

#include "LocLife.h"

class LocRat : public LocLife
{
  public:
    LocRat();
    virtual ~LocRat();

  private:
    const char *GetModelName() override;
    const char *GetAniName() override;
    bool PostInit(Animation *ani) override;

    void IdleProcess(Animation *ani, float dltTime) override;
    void MoveProcess(Animation *ani, float dltTime) override;
    void IsStartMove(Animation *ani) override;
    void IsStopMove(Animation *ani) override;

    void Event(Animation *animation, long index, long eventID, AnimationEvent event) override;

    void StartNewAction(Animation *ani);

  private:
    float nextActionTime;
    float timeout;
    float moveTime;
    bool isPanic;
};

#endif
