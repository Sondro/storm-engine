//============================================================================================
//    LocCrabs
//============================================================================================

#ifndef _LocCrabs_h_
#define _LocCrabs_h_

#include "dx9render.h"
#include "vmodule_api.h"

#include "LocCrab.h"

class LocCrabs : public Entity
{
  public:
    LocCrabs();
    virtual ~LocCrabs();
    //--------------------------------------------------------------------------------------------
  public:
    // Initialization
    bool Init() override;
    // Execution
    void Execute(uint32_t delta_time);
    // Drawing
    void Realize(uint32_t delta_time);

    void ProcessStage(Stage stage, uint32_t delta) override
    {
        switch (stage)
        {
        case Stage::execute:
            Execute(delta);
            break;
        case Stage::realize:
            Realize(delta);
            break;
            /*case Stage::lost_render:
                LostRender(delta); break;
            case Stage::restore_render:
                RestoreRender(delta); break;*/
        }
    }

    // Messages
    uint64_t ProcessMessage(MESSAGE &message) override;

    //--------------------------------------------------------------------------------------------
  private:
    LocCrab crab[32];
    long num;
};

#endif
