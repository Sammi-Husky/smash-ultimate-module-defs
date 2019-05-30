#ifndef EFFECTMODULE_H
#define EFFECTMODULE_H
namespace app::lua_bind {
    namespace EffectModule {
        u64 clear_screen(app::BattleObjectModuleAccessor *, int, int) asm("_ZN3app8lua_bind31EffectModule__clear_screen_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 detach(app::BattleObjectModuleAccessor *, uint, int) asm("_ZN3app8lua_bind25EffectModule__detach_implEPNS_26BattleObjectModuleAccessorEji") LINKABLE;
        u64 detach_all(app::BattleObjectModuleAccessor *, uint) asm("_ZN3app8lua_bind29EffectModule__detach_all_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 detach_kind(app::BattleObjectModuleAccessor *, u64, int) asm("_ZN3app8lua_bind30EffectModule__detach_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
        u64 enable_stencil(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33EffectModule__enable_stencil_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 enable_sync_init_pos_last(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44EffectModule__enable_sync_init_pos_last_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 end_kind(app::BattleObjectModuleAccessor *, u64, int) asm("_ZN3app8lua_bind27EffectModule__end_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
        u64 force_update_common_effect(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind45EffectModule__force_update_common_effect_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_dead_effect_rot_z(app::BattleObjectModuleAccessor *, const Vector3f*, float, bool) asm("_ZN3app8lua_bind40EffectModule__get_dead_effect_rot_z_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEfb") LINKABLE;
        u64 get_dead_effect_scale(app::BattleObjectModuleAccessor *, const Vector3f*, float, bool) asm("_ZN3app8lua_bind40EffectModule__get_dead_effect_scale_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEfb") LINKABLE;
        u64 get_last_handle(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34EffectModule__get_last_handle_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_variation_effect_kind(app::BattleObjectModuleAccessor *, u64, int) asm("_ZN3app8lua_bind44EffectModule__get_variation_effect_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
        u64 is_enable_ground_effect(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42EffectModule__is_enable_ground_effect_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_exist_common(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind34EffectModule__is_exist_common_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 is_exist_effect(app::BattleObjectModuleAccessor *, uint) asm("_ZN3app8lua_bind34EffectModule__is_exist_effect_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 is_sync_visibility(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37EffectModule__is_sync_visibility_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 kill(app::BattleObjectModuleAccessor *, uint, bool, bool) asm("_ZN3app8lua_bind23EffectModule__kill_implEPNS_26BattleObjectModuleAccessorEjbb") LINKABLE;
        u64 kill_all(app::BattleObjectModuleAccessor *, uint, bool, bool) asm("_ZN3app8lua_bind27EffectModule__kill_all_implEPNS_26BattleObjectModuleAccessorEjbb") LINKABLE;
        u64 kill_joint_id(app::BattleObjectModuleAccessor *, u64, bool, bool) asm("_ZN3app8lua_bind32EffectModule__kill_joint_id_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebb") LINKABLE;
        u64 kill_kind(app::BattleObjectModuleAccessor *, u64, bool, bool) asm("_ZN3app8lua_bind28EffectModule__kill_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebb") LINKABLE;
        u64 preset_lifetime_rate_partial(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind47EffectModule__preset_lifetime_rate_partial_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 preset_limit_num(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35EffectModule__preset_limit_num_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 remove(app::BattleObjectModuleAccessor *, uint, uint) asm("_ZN3app8lua_bind25EffectModule__remove_implEPNS_26BattleObjectModuleAccessorEjj") LINKABLE;
        u64 remove_all(app::BattleObjectModuleAccessor *, uint, uint) asm("_ZN3app8lua_bind29EffectModule__remove_all_implEPNS_26BattleObjectModuleAccessorEjj") LINKABLE;
        u64 remove_all_after_image(app::BattleObjectModuleAccessor *, uint, uint) asm("_ZN3app8lua_bind41EffectModule__remove_all_after_image_implEPNS_26BattleObjectModuleAccessorEjj") LINKABLE;
        u64 remove_common(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind32EffectModule__remove_common_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 remove_post_effect_line(app::BattleObjectModuleAccessor *, int, bool) asm("_ZN3app8lua_bind42EffectModule__remove_post_effect_line_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 remove_screen(app::BattleObjectModuleAccessor *, u64, int) asm("_ZN3app8lua_bind32EffectModule__remove_screen_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
        u64 remove_time(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind30EffectModule__remove_time_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 req(app::BattleObjectModuleAccessor *, u64, const Vector3f*, const Vector3f*, float, uint, int, bool, int) asm("_ZN3app8lua_bind22EffectModule__req_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fES7_fjibi") LINKABLE;
        u64 req_2d(app::BattleObjectModuleAccessor *, u64, const Vector3f*, const Vector3f*, float, uint) asm("_ZN3app8lua_bind25EffectModule__req_2d_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fES7_fj") LINKABLE;
        u64 req_common(app::BattleObjectModuleAccessor *, u64, float) asm("_ZN3app8lua_bind29EffectModule__req_common_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ef") LINKABLE;
        u64 req_emit(app::BattleObjectModuleAccessor *, u64, uint) asm("_ZN3app8lua_bind27EffectModule__req_emit_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ej") LINKABLE;
        u64 req_follow(app::BattleObjectModuleAccessor *, u64, u64, const Vector3f*, const Vector3f*, float, bool, uint, int, int, int, int, bool, bool) asm("_ZN3app8lua_bind29EffectModule__req_follow_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_RKNS3_8Vector3fES7_fbjiiiibb") LINKABLE;
        u64 req_on_joint(app::BattleObjectModuleAccessor *, u64, u64, const Vector3f*, const Vector3f*, float, const Vector3f*, const Vector3f*, bool, uint, int, int) asm("_ZN3app8lua_bind31EffectModule__req_on_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_RKNS3_8Vector3fES7_fS7_S7_bjii") LINKABLE;
        u64 req_screen(app::BattleObjectModuleAccessor *, u64, bool, bool, bool) asm("_ZN3app8lua_bind29EffectModule__req_screen_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebbb") LINKABLE;
        u64 req_time(app::BattleObjectModuleAccessor *, u64, int, const Vector3f*, const Vector3f*, float, uint, bool, bool) asm("_ZN3app8lua_bind27EffectModule__req_time_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40EiRKNS3_8Vector3fES7_fjbb") LINKABLE;
        u64 request_post_effect_line_circle(app::BattleObjectModuleAccessor *, u64, u64, phx::Vector2f, phx::Vector3f, bool, float, float) asm("_ZN3app8lua_bind50EffectModule__request_post_effect_line_circle_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_NS3_8Vector2fENS3_8Vector3fEbff") LINKABLE;
        u64 request_post_effect_line_parallel_2d(app::BattleObjectModuleAccessor *, u64, phx::Vector2f, phx::Vector2f, phx::Vector2f, phx::Vector2f, bool, float, float) asm("_ZN3app8lua_bind55EffectModule__request_post_effect_line_parallel_2d_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ENS3_8Vector2fES5_S5_S5_bff") LINKABLE;
        u64 reset_screen(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31EffectModule__reset_screen_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_alpha(app::BattleObjectModuleAccessor *, uint, float) asm("_ZN3app8lua_bind28EffectModule__set_alpha_implEPNS_26BattleObjectModuleAccessorEjf") LINKABLE;
        u64 set_custom_uv_offset(app::BattleObjectModuleAccessor *, uint, const Vector2f*, int) asm("_ZN3app8lua_bind39EffectModule__set_custom_uv_offset_implEPNS_26BattleObjectModuleAccessorEjRKN3phx8Vector2fEi") LINKABLE;
        u64 set_disable_render_offset_last(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49EffectModule__set_disable_render_offset_last_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_disable_system_slow(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind42EffectModule__set_disable_system_slow_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_frame(app::BattleObjectModuleAccessor *, uint, float) asm("_ZN3app8lua_bind28EffectModule__set_frame_implEPNS_26BattleObjectModuleAccessorEjf") LINKABLE;
        u64 set_offset_to_next(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind37EffectModule__set_offset_to_next_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_pos(app::BattleObjectModuleAccessor *, uint, const Vector3f*) asm("_ZN3app8lua_bind26EffectModule__set_pos_implEPNS_26BattleObjectModuleAccessorEjRKN3phx8Vector3fE") LINKABLE;
        u64 set_post_effect_line_circle_target(app::BattleObjectModuleAccessor *, u64, phx::Vector2f, phx::Vector3f, bool) asm("_ZN3app8lua_bind53EffectModule__set_post_effect_line_circle_target_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ENS3_8Vector2fENS3_8Vector3fEb") LINKABLE;
        u64 set_rate(app::BattleObjectModuleAccessor *, uint, float) asm("_ZN3app8lua_bind27EffectModule__set_rate_implEPNS_26BattleObjectModuleAccessorEjf") LINKABLE;
        u64 set_rate_last(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind32EffectModule__set_rate_last_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_rgb(app::BattleObjectModuleAccessor *, uint, float, float, float) asm("_ZN3app8lua_bind26EffectModule__set_rgb_implEPNS_26BattleObjectModuleAccessorEjfff") LINKABLE;
        u64 set_rgb_partial_last(app::BattleObjectModuleAccessor *, float, float, float) asm("_ZN3app8lua_bind39EffectModule__set_rgb_partial_last_implEPNS_26BattleObjectModuleAccessorEfff") LINKABLE;
        u64 set_rot(app::BattleObjectModuleAccessor *, uint, const Vector3f*) asm("_ZN3app8lua_bind26EffectModule__set_rot_implEPNS_26BattleObjectModuleAccessorEjRKN3phx8Vector3fE") LINKABLE;
        u64 set_scale(app::BattleObjectModuleAccessor *, uint, const Vector3f*) asm("_ZN3app8lua_bind28EffectModule__set_scale_implEPNS_26BattleObjectModuleAccessorEjRKN3phx8Vector3fE") LINKABLE;
        u64 set_sync_scale(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33EffectModule__set_sync_scale_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_sync_visibility(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38EffectModule__set_sync_visibility_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_visible(app::BattleObjectModuleAccessor *, uint, bool) asm("_ZN3app8lua_bind30EffectModule__set_visible_implEPNS_26BattleObjectModuleAccessorEjb") LINKABLE;
        u64 set_visible_kind(app::BattleObjectModuleAccessor *, u64, bool) asm("_ZN3app8lua_bind35EffectModule__set_visible_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb") LINKABLE;
        u64 set_whole(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind28EffectModule__set_whole_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_whole_attr(app::BattleObjectModuleAccessor *, bool, uint) asm("_ZN3app8lua_bind33EffectModule__set_whole_attr_implEPNS_26BattleObjectModuleAccessorEbj") LINKABLE;
        }
    }
#endif // EFFECTMODULE_H
