#ifndef BATTLEOBJECTSLOW_H
#define BATTLEOBJECTSLOW_H
namespace app::lua_bind {
    namespace BattleObjectSlow {
        u64 is_adjust(app::BattleObjectSlow *) asm("_ZN3app8lua_bind32BattleObjectSlow__is_adjust_implEPNS_16BattleObjectSlowE") LINKABLE;
        u64 is_estimate(app::BattleObjectSlow *) asm("_ZN3app8lua_bind34BattleObjectSlow__is_estimate_implEPNS_16BattleObjectSlowE") LINKABLE;
        u64 rate(app::BattleObjectSlow *) asm("_ZN3app8lua_bind27BattleObjectSlow__rate_implEPNS_16BattleObjectSlowE") LINKABLE;
        }
    }
#endif // BATTLEOBJECTSLOW_H
