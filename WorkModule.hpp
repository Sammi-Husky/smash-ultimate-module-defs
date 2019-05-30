#ifndef WORKMODULE_H
#define WORKMODULE_H
namespace app::lua_bind {
    namespace WorkModule {
        u64 add_float(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind26WorkModule__add_float_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 add_int(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind24WorkModule__add_int_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 clear_all(app::BattleObjectModuleAccessor *,app::WorkKind) asm("_ZN3app8lua_bind26WorkModule__clear_all_implEPNS_26BattleObjectModuleAccessorENS_8WorkKindE") LINKABLE;
        u64 count_down_int(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind31WorkModule__count_down_int_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 dec_int(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24WorkModule__dec_int_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 div_float(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind26WorkModule__div_float_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 enable_transition_term(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind39WorkModule__enable_transition_term_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 enable_transition_term_forbid(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind46WorkModule__enable_transition_term_forbid_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 enable_transition_term_forbid_group(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind52WorkModule__enable_transition_term_forbid_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 enable_transition_term_group(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind45WorkModule__enable_transition_term_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 enable_transition_term_group_ex(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind48WorkModule__enable_transition_term_group_ex_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_float(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind26WorkModule__get_float_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_int(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24WorkModule__get_int_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_int64(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind26WorkModule__get_int64_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_param_float(app::BattleObjectModuleAccessor *,u64,u64) asm("_ZN3app8lua_bind32WorkModule__get_param_float_implEPNS_26BattleObjectModuleAccessorEmm") LINKABLE;
        u64 get_param_int(app::BattleObjectModuleAccessor *,u64,u64) asm("_ZN3app8lua_bind30WorkModule__get_param_int_implEPNS_26BattleObjectModuleAccessorEmm") LINKABLE;
        u64 get_param_int64(app::BattleObjectModuleAccessor *,u64,u64) asm("_ZN3app8lua_bind32WorkModule__get_param_int64_implEPNS_26BattleObjectModuleAccessorEmm") LINKABLE;
        u64 inc_int(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24WorkModule__inc_int_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_enable_transition_term(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind42WorkModule__is_enable_transition_term_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_enable_transition_term_forbid(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind49WorkModule__is_enable_transition_term_forbid_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_enable_transition_term_group(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind48WorkModule__is_enable_transition_term_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_flag(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24WorkModule__is_flag_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 mul_float(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind26WorkModule__mul_float_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 mul_int(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind24WorkModule__mul_int_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 off_flag(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind25WorkModule__off_flag_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 on_flag(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24WorkModule__on_flag_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_flag(app::BattleObjectModuleAccessor *,bool,int) asm("_ZN3app8lua_bind25WorkModule__set_flag_implEPNS_26BattleObjectModuleAccessorEbi") LINKABLE;
        u64 set_float(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind26WorkModule__set_float_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 set_int(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind24WorkModule__set_int_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 set_int64(app::BattleObjectModuleAccessor *,s64,int) asm("_ZN3app8lua_bind26WorkModule__set_int64_implEPNS_26BattleObjectModuleAccessorEli") LINKABLE;
        u64 sub_float(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind26WorkModule__sub_float_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 sub_int(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind24WorkModule__sub_int_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 turn_off_flag(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind30WorkModule__turn_off_flag_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 unable_transition_term(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind39WorkModule__unable_transition_term_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 unable_transition_term_forbid(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind46WorkModule__unable_transition_term_forbid_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 unable_transition_term_forbid_group(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind52WorkModule__unable_transition_term_forbid_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 unable_transition_term_group(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind45WorkModule__unable_transition_term_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 unable_transition_term_group_ex(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind48WorkModule__unable_transition_term_group_ex_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        }
    }
#endif // WORKMODULE_H
