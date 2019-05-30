#ifndef CONTROLMODULE_H
#define CONTROLMODULE_H
namespace app::lua_bind {
    namespace ControlModule {
        u64 add_clatter_time(app::BattleObjectModuleAccessor *, float, int) asm("_ZN3app8lua_bind36ControlModule__add_clatter_time_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 check_button_off(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36ControlModule__check_button_off_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 check_button_on(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35ControlModule__check_button_on_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 check_button_on_release(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind43ControlModule__check_button_on_release_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 check_button_on_trriger(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind43ControlModule__check_button_on_trriger_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 check_button_release(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40ControlModule__check_button_release_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 check_button_trigger(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40ControlModule__check_button_trigger_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 clear_command(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33ControlModule__clear_command_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 clear_command_one(app::BattleObjectModuleAccessor *, int, int) asm("_ZN3app8lua_bind37ControlModule__clear_command_one_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 end_clatter(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31ControlModule__end_clatter_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 end_clatter_motion_rate(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind43ControlModule__end_clatter_motion_rate_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 exec_command(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind32ControlModule__exec_command_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_attack_air_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39ControlModule__get_attack_air_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_attack_air_stick_dir(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44ControlModule__get_attack_air_stick_dir_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_attack_air_stick_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42ControlModule__get_attack_air_stick_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_attack_hi3_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42ControlModule__get_attack_hi3_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_attack_lw3_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42ControlModule__get_attack_lw3_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_clatter_time(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36ControlModule__get_clatter_time_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_command_flag_cat(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40ControlModule__get_command_flag_cat_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_command_life(app::BattleObjectModuleAccessor *, int, int) asm("_ZN3app8lua_bind36ControlModule__get_command_life_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 get_down_stand_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42ControlModule__get_down_stand_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_no_reset_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40ControlModule__get_flick_no_reset_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_no_reset_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40ControlModule__get_flick_no_reset_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_sub_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35ControlModule__get_flick_sub_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31ControlModule__get_flick_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_x_dir(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35ControlModule__get_flick_x_dir_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31ControlModule__get_flick_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_flick_y_dir(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35ControlModule__get_flick_y_dir_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_pad_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32ControlModule__get_pad_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_angle(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35ControlModule__get_stick_angle_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_dir(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ControlModule__get_stick_dir_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_prev_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36ControlModule__get_stick_prev_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31ControlModule__get_stick_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_x_no_clamp(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40ControlModule__get_stick_x_no_clamp_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31ControlModule__get_stick_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_stick_y_no_clamp(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40ControlModule__get_stick_y_no_clamp_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_trigger_count(app::BattleObjectModuleAccessor *, unsigned char) asm("_ZN3app8lua_bind37ControlModule__get_trigger_count_implEPNS_26BattleObjectModuleAccessorEh") LINKABLE;
        u64 get_trigger_count_prev(app::BattleObjectModuleAccessor *, unsigned char) asm("_ZN3app8lua_bind42ControlModule__get_trigger_count_prev_implEPNS_26BattleObjectModuleAccessorEh") LINKABLE;
        u64 is_clear_command(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36ControlModule__is_clear_command_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_enable_flick_jump(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40ControlModule__is_enable_flick_jump_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_input_clatter(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36ControlModule__is_input_clatter_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_jump_mini_button(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39ControlModule__is_jump_mini_button_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_remake_command(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37ControlModule__is_remake_command_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_stick_reversed(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind37ControlModule__is_stick_reversed_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_stick_side(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ControlModule__is_stick_side_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 item_heavy_throw_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44ControlModule__item_heavy_throw_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 item_light_throw_air_fb4_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49ControlModule__item_light_throw_air_fb4_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 item_light_throw_air_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind48ControlModule__item_light_throw_air_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 item_light_throw_fb4_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind45ControlModule__item_light_throw_fb4_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 item_light_throw_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44ControlModule__item_light_throw_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_attack_air_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind41ControlModule__reset_attack_air_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_down_stand_fb_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44ControlModule__reset_down_stand_fb_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_flick_sub_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37ControlModule__reset_flick_sub_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_flick_sub_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37ControlModule__reset_flick_sub_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_flick_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ControlModule__reset_flick_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_flick_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ControlModule__reset_flick_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reset_trigger(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ControlModule__reset_trigger_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reverse_x_frame(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35ControlModule__reverse_x_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_add_jump_mini_button_life(app::BattleObjectModuleAccessor *, signed char) asm("_ZN3app8lua_bind49ControlModule__set_add_jump_mini_button_life_implEPNS_26BattleObjectModuleAccessorEa") LINKABLE;
        u64 set_attack_air_kind(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39ControlModule__set_attack_air_kind_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_clatter_stop(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind36ControlModule__set_clatter_stop_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_clatter_time(app::BattleObjectModuleAccessor *, float, int) asm("_ZN3app8lua_bind36ControlModule__set_clatter_time_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 set_command_life_extend(app::BattleObjectModuleAccessor *, unsigned char) asm("_ZN3app8lua_bind43ControlModule__set_command_life_extend_implEPNS_26BattleObjectModuleAccessorEh") LINKABLE;
        u64 set_dec_time(app::BattleObjectModuleAccessor *, float, int) asm("_ZN3app8lua_bind32ControlModule__set_dec_time_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 set_dec_time_recovery(app::BattleObjectModuleAccessor *, float, int) asm("_ZN3app8lua_bind41ControlModule__set_dec_time_recovery_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 set_off(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind27ControlModule__set_off_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_rumble(app::BattleObjectModuleAccessor *, u64, int, bool, uint) asm("_ZN3app8lua_bind30ControlModule__set_rumble_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eibj") LINKABLE;
        u64 set_special_command_life_count_extend(app::BattleObjectModuleAccessor *, unsigned char) asm("_ZN3app8lua_bind57ControlModule__set_special_command_life_count_extend_implEPNS_26BattleObjectModuleAccessorEh") LINKABLE;
        u64 set_special_command_life_extend(app::BattleObjectModuleAccessor *, signed char) asm("_ZN3app8lua_bind51ControlModule__set_special_command_life_extend_implEPNS_26BattleObjectModuleAccessorEa") LINKABLE;
        u64 special_s_turn(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34ControlModule__special_s_turn_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 start_clatter(app::BattleObjectModuleAccessor *, float, float, float, signed char, int, bool, bool) asm("_ZN3app8lua_bind33ControlModule__start_clatter_implEPNS_26BattleObjectModuleAccessorEfffaibb") LINKABLE;
        u64 start_clatter_motion_rate(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind45ControlModule__start_clatter_motion_rate_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 stop_rumble(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31ControlModule__stop_rumble_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 stop_rumble_kind(app::BattleObjectModuleAccessor *, u64, uint) asm("_ZN3app8lua_bind36ControlModule__stop_rumble_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ej") LINKABLE;
        }
    }
#endif // CONTROLMODULE_H
