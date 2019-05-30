#ifndef CATCHMODULE_H
#define CATCHMODULE_H
namespace app::lua_bind {
    namespace CatchModule {
        u64 capture_object_id(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind35CatchModule__capture_object_id_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 capture_pos_x_diff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36CatchModule__capture_pos_x_diff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 catch_cut(app::BattleObjectModuleAccessor *,bool,bool) asm("_ZN3app8lua_bind27CatchModule__catch_cut_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 check_damage(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30CatchModule__check_damage_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 cling_cut(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind27CatchModule__cling_cut_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 is_catch(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26CatchModule__is_catch_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_catch(app::BattleObjectModuleAccessor *,uint) asm("_ZN3app8lua_bind27CatchModule__set_catch_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 set_send_cut_event(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind36CatchModule__set_send_cut_event_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 update_pos_cling(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34CatchModule__update_pos_cling_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        }
    }
#endif // CATCHMODULE_H
