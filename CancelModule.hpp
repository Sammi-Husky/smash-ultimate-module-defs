#ifndef CANCELMODULE_H
#define CANCELMODULE_H
namespace app::lua_bind {
    namespace CancelModule {
        u64 enable_cancel(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32CancelModule__enable_cancel_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_enable_cancel(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35CancelModule__is_enable_cancel_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        }
    }
#endif // CANCELMODULE_H
