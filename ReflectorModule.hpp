#ifndef REFLECTORMODULE_H
#define REFLECTORMODULE_H
namespace app::lua_bind {
    namespace ReflectorModule {
        u64 is_shield(app::BattleObjectModuleAccessor *, int, int) asm("_ZN3app8lua_bind31ReflectorModule__is_shield_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 set_no_team(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33ReflectorModule__set_no_team_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_status(app::BattleObjectModuleAccessor *, int, app::ShieldStatus, int) asm("_ZN3app8lua_bind32ReflectorModule__set_status_implEPNS_26BattleObjectModuleAccessorEiNS_12ShieldStatusEi") LINKABLE;
        u64 set_status_all(app::BattleObjectModuleAccessor *, app::ShieldStatus, int) asm("_ZN3app8lua_bind36ReflectorModule__set_status_all_implEPNS_26BattleObjectModuleAccessorENS_12ShieldStatusEi") LINKABLE;
        }
    }
#endif // REFLECTORMODULE_H
