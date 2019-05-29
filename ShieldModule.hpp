namespace ShieldModule {
    u64 set_status(app::BattleObjectModuleAccessor *, int, app::ShieldStatus, int) asm("_ZN3app8lua_bind29ShieldModule__set_status_implEPNS_26BattleObjectModuleAccessorEiNS_12ShieldStatusEi") LINKABLE;
    u64 set_shield_type(app::BattleObjectModuleAccessor *, app::ShieldType, int, int) asm("_ZN3app8lua_bind34ShieldModule__set_shield_type_implEPNS_26BattleObjectModuleAccessorENS_10ShieldTypeEii") LINKABLE;
    u64 set_hit_stop_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35ShieldModule__set_hit_stop_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
}
