namespace StopModule {
    u64 is_hit(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23StopModule__is_hit_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 is_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24StopModule__is_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 is_damage(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26StopModule__is_damage_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 set_link_stop(app::BattleObjectModuleAccessor *, bool, bool) asm("_ZN3app8lua_bind30StopModule__set_link_stop_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
    u64 set_other_stop(app::BattleObjectModuleAccessor *, int, app::StopOtherKind) asm("_ZN3app8lua_bind31StopModule__set_other_stop_implEPNS_26BattleObjectModuleAccessorEiNS_13StopOtherKindE") LINKABLE;
    u64 cancel_hit_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32StopModule__cancel_hit_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 cancel_other_stop(app::BattleObjectModuleAccessor *, app::StopOtherKind) asm("_ZN3app8lua_bind34StopModule__cancel_other_stop_implEPNS_26BattleObjectModuleAccessorENS_13StopOtherKindE") LINKABLE;
    u64 set_hit_stop_frame(app::BattleObjectModuleAccessor *, int, bool) asm("_ZN3app8lua_bind35StopModule__set_hit_stop_frame_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
    u64 get_hit_stop_real_frame(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40StopModule__get_hit_stop_real_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
}
