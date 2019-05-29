namespace CaptureModule {
    u64 motion(app::BattleObjectModuleAccessor *, phx::Hash40, int) asm("_ZN3app8lua_bind26CaptureModule__motion_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
    u64 thrown(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26CaptureModule__thrown_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 capture(app::BattleObjectModuleAccessor *, uint, int, bool, int) asm("_ZN3app8lua_bind27CaptureModule__capture_implEPNS_26BattleObjectModuleAccessorEjibi") LINKABLE;
    u64 is_thrown(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29CaptureModule__is_thrown_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 motion_lw(app::BattleObjectModuleAccessor *, phx::Hash40, int) asm("_ZN3app8lua_bind29CaptureModule__motion_lw_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
    u64 set_nodes(app::BattleObjectModuleAccessor *, phx::Hash40, phx::Hash40, float) asm("_ZN3app8lua_bind29CaptureModule__set_nodes_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_f") LINKABLE;
    u64 is_capture(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30CaptureModule__is_capture_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 thrown_cut(app::BattleObjectModuleAccessor *, bool, bool) asm("_ZN3app8lua_bind30CaptureModule__thrown_cut_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
    u64 capture_cut(app::BattleObjectModuleAccessor *, bool, bool, bool) asm("_ZN3app8lua_bind31CaptureModule__capture_cut_implEPNS_26BattleObjectModuleAccessorEbbb") LINKABLE;
    u64 node_offset(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31CaptureModule__node_offset_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    u64 check_damage(app::BattleObjectModuleAccessor *, int, float, float) asm("_ZN3app8lua_bind32CaptureModule__check_damage_implEPNS_26BattleObjectModuleAccessorEiff") LINKABLE;
    u64 motion_offset(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33CaptureModule__motion_offset_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 is_motion_hi_lw(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35CaptureModule__is_motion_hi_lw_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 update_node_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35CaptureModule__update_node_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 catch_node_pos_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36CaptureModule__catch_node_pos_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 is_thrown_finish(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36CaptureModule__is_thrown_finish_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 motion_offset_lw(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36CaptureModule__motion_offset_lw_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 is_catch_hit_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37CaptureModule__is_catch_hit_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 update_pos_thrown(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37CaptureModule__update_pos_thrown_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 is_ignore_distance(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38CaptureModule__is_ignore_distance_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 set_send_cut_event(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38CaptureModule__set_send_cut_event_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    u64 check_damage_thrown(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39CaptureModule__check_damage_thrown_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    u64 capture_to_catch_node_pos_diff(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind50CaptureModule__capture_to_catch_node_pos_diff_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
}
