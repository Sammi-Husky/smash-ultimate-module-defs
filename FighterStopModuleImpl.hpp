#ifndef FIGHTERSTOPMODULEIMPL_H
#define FIGHTERSTOPMODULEIMPL_H
namespace app::lua_bind {
    namespace FighterStopModuleImpl {
        u64 get_damage_stop_frame(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49FighterStopModuleImpl__get_damage_stop_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_damage_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42FighterStopModuleImpl__is_damage_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        }
    }
#endif // FIGHTERSTOPMODULEIMPL_H
