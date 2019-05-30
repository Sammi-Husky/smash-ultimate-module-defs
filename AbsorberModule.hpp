#ifndef ABSORBERMODULE_H
#define ABSORBERMODULE_H
namespace app::lua_bind {
    namespace AbsorberModule {
        u64 set_status(app::BattleObjectModuleAccessor *,int,app::ShieldStatus,int) asm("_ZN3app8lua_bind31AbsorberModule__set_status_implEPNS_26BattleObjectModuleAccessorEiNS_12ShieldStatusEi") LINKABLE;
        }
    }
#endif // ABSORBERMODULE_H
