#ifndef FIGHTERSTATUSMODULEIMPL_H
#define FIGHTERSTATUSMODULEIMPL_H
namespace app::lua_bind {
    namespace FighterStatusModuleImpl {
        u64 reset_log_action_info(app::BattleObjectModuleAccessor *,u64) asm("_ZN3app8lua_bind51FighterStatusModuleImpl__reset_log_action_info_implEPNS_26BattleObjectModuleAccessorEm") LINKABLE;
        u64 set_fighter_status_data(app::BattleObjectModuleAccessor *,bool,int,bool,bool,bool,u64,uint,uint,uint) asm("_ZN3app8lua_bind53FighterStatusModuleImpl__set_fighter_status_data_implEPNS_26BattleObjectModuleAccessorEbibbbmjjj") LINKABLE;
        }
    }
#endif // FIGHTERSTATUSMODULEIMPL_H
