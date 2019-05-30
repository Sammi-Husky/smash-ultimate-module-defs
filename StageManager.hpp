#ifndef STAGEMANAGER_H
#define STAGEMANAGER_H
namespace app::lua_bind {
    namespace StageManager {
        u64 is_discretion_final_enabled(app::StageManager *) asm("_ZN3app8lua_bind46StageManager__is_discretion_final_enabled_implEPNS_12StageManagerE") LINKABLE;
        u64 stage_all_stop(app::StageManager *,bool) asm("_ZN3app8lua_bind33StageManager__stage_all_stop_implEPNS_12StageManagerEb") LINKABLE;
        }
    }
#endif // STAGEMANAGER_H
