#ifndef JOSTLEMODULE_H
#define JOSTLEMODULE_H
namespace app::lua_bind {
    namespace JostleModule {
        u64 is_sleep(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27JostleModule__is_sleep_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 overlap_x(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind28JostleModule__overlap_x_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_fix(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind26JostleModule__set_fix_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_force_gap(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind32JostleModule__set_force_gap_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_ignore_owner_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind38JostleModule__set_ignore_owner_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_ignore_speed_x(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37JostleModule__set_ignore_speed_x_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_influence_opponent_weight(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind48JostleModule__set_influence_opponent_weight_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_layer(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28JostleModule__set_layer_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_overlap_rate_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39JostleModule__set_overlap_rate_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_priority(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31JostleModule__set_priority_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_propagate_push_speed(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind43JostleModule__set_propagate_push_speed_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_push_speed_x(app::BattleObjectModuleAccessor *, float, bool) asm("_ZN3app8lua_bind35JostleModule__set_push_speed_x_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_push_speed_x_overlap_rate(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind48JostleModule__set_push_speed_x_overlap_rate_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_refer(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind28JostleModule__set_refer_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_status(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind29JostleModule__set_status_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_team(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind27JostleModule__set_team_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_weight(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind29JostleModule__set_weight_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind24JostleModule__sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 target_weight(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32JostleModule__target_weight_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 weight(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25JostleModule__weight_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        }
    }
#endif // JOSTLEMODULE_H
