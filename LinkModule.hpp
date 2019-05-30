#ifndef LINKMODULE_H
#define LINKMODULE_H
namespace app::lua_bind {
    namespace LinkModule {
        u64 adjust_model_constraint_posture(app::BattleObjectModuleAccessor *, phx::Vector3f const*, phx::Vector3f const*) asm("_ZN3app8lua_bind48LinkModule__adjust_model_constraint_posture_implEPNS_26BattleObjectModuleAccessorEPKN3phx8Vector3fES6_") LINKABLE;
        u64 chk_link_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30LinkModule__chk_link_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_constraint_translate_offset(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind48LinkModule__get_constraint_translate_offset_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_model_constraint_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42LinkModule__get_model_constraint_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_model_constraint_target_node_position(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind58LinkModule__get_model_constraint_target_node_position_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_node_object_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35LinkModule__get_node_object_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_battle_object_kind(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind46LinkModule__get_parent_battle_object_kind_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_customize_attack_ratio(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind50LinkModule__get_parent_customize_attack_ratio_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_parent_damage_reaction(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind43LinkModule__get_parent_damage_reaction_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_have_item_visibility(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind48LinkModule__get_parent_have_item_visibility_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_id(app::BattleObjectModuleAccessor *, int, bool) asm("_ZN3app8lua_bind30LinkModule__get_parent_id_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 get_parent_lr(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind30LinkModule__get_parent_lr_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_model_joint_global_position(app::BattleObjectModuleAccessor *, int, u64, bool) asm("_ZN3app8lua_bind55LinkModule__get_parent_model_joint_global_position_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Eb") LINKABLE;
        u64 get_parent_motion_frame(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40LinkModule__get_parent_motion_frame_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_motion_kind(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39LinkModule__get_parent_motion_kind_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_motion_rate(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39LinkModule__get_parent_motion_rate_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_motion_whole_rate(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind45LinkModule__get_parent_motion_whole_rate_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_object_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind37LinkModule__get_parent_object_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_pos(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31LinkModule__get_parent_pos_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_power_up_attack(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind43LinkModule__get_parent_power_up_attack_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_parent_prev_pos(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36LinkModule__get_parent_prev_pos_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_rot(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31LinkModule__get_parent_rot_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_scale(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33LinkModule__get_parent_scale_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_shape_center_pos(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind44LinkModule__get_parent_shape_center_pos_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_situation_kind(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind42LinkModule__get_parent_situation_kind_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_status_kind(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39LinkModule__get_parent_status_kind_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_parent_sum_speed(app::BattleObjectModuleAccessor *, int, int) asm("_ZN3app8lua_bind37LinkModule__get_parent_sum_speed_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 get_parent_total_hit_status(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind44LinkModule__get_parent_total_hit_status_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_link(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind24LinkModule__is_link_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_linked(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind26LinkModule__is_linked_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_model_constraint(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36LinkModule__is_model_constraint_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 is_parent_damage_catch_cut(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind43LinkModule__is_parent_damage_catch_cut_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_parent_damage_reaction(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind42LinkModule__is_parent_damage_reaction_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_parent_flip(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31LinkModule__is_parent_flip_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 is_valid_parent_shape(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind38LinkModule__is_valid_parent_shape_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 link(app::BattleObjectModuleAccessor *, int, uint) asm("_ZN3app8lua_bind21LinkModule__link_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 off_model_constraint_flag(app::BattleObjectModuleAccessor *, uint) asm("_ZN3app8lua_bind42LinkModule__off_model_constraint_flag_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 remove_model_constraint(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind40LinkModule__remove_model_constraint_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 send_event_nodes(app::BattleObjectModuleAccessor *, int, u64, uint) asm("_ZN3app8lua_bind33LinkModule__send_event_nodes_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Ej") LINKABLE;
        u64 send_event_nodes_struct(app::BattleObjectModuleAccessor *, int, app::LinkEvent &, uint) asm("_ZN3app8lua_bind40LinkModule__send_event_nodes_struct_implEPNS_26BattleObjectModuleAccessorEiRNS_9LinkEventEj") LINKABLE;
        u64 send_event_nodes_throw(app::BattleObjectModuleAccessor *, u64, u64, bool, int, int, int) asm("_ZN3app8lua_bind39LinkModule__send_event_nodes_throw_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_biii") LINKABLE;
        u64 send_event_parents(app::BattleObjectModuleAccessor *, int, u64) asm("_ZN3app8lua_bind35LinkModule__send_event_parents_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40E") LINKABLE;
        u64 send_event_parents_struct(app::BattleObjectModuleAccessor *, int, app::LinkEvent &) asm("_ZN3app8lua_bind42LinkModule__send_event_parents_struct_implEPNS_26BattleObjectModuleAccessorEiRNS_9LinkEventE") LINKABLE;
        u64 set_attribute(app::BattleObjectModuleAccessor *, int, app::LinkAttribute, bool) asm("_ZN3app8lua_bind30LinkModule__set_attribute_implEPNS_26BattleObjectModuleAccessorEiNS_13LinkAttributeEb") LINKABLE;
        u64 set_constraint_rot_offset(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind42LinkModule__set_constraint_rot_offset_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 set_constraint_rot_offset_x(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind44LinkModule__set_constraint_rot_offset_x_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_constraint_rot_offset_y(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind44LinkModule__set_constraint_rot_offset_y_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_constraint_rot_offset_z(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind44LinkModule__set_constraint_rot_offset_z_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_constraint_scale_offset(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind44LinkModule__set_constraint_scale_offset_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 set_constraint_translate_offset(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind48LinkModule__set_constraint_translate_offset_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 set_model_constraint_flag(app::BattleObjectModuleAccessor *, uint) asm("_ZN3app8lua_bind42LinkModule__set_model_constraint_flag_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 set_model_constraint_pos_ort(app::BattleObjectModuleAccessor *, int, u64, u64, uint, bool) asm("_ZN3app8lua_bind45LinkModule__set_model_constraint_pos_ort_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ES4_jb") LINKABLE;
        u64 set_node_attacker_info(app::BattleObjectModuleAccessor *, int, uint) asm("_ZN3app8lua_bind39LinkModule__set_node_attacker_info_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 set_node_depth_offset(app::BattleObjectModuleAccessor *, int, float) asm("_ZN3app8lua_bind38LinkModule__set_node_depth_offset_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_node_log_damage_player(app::BattleObjectModuleAccessor *, int, uint, int, int) asm("_ZN3app8lua_bind43LinkModule__set_node_log_damage_player_implEPNS_26BattleObjectModuleAccessorEijii") LINKABLE;
        u64 set_parent_attacker_info(app::BattleObjectModuleAccessor *, int, uint) asm("_ZN3app8lua_bind41LinkModule__set_parent_attacker_info_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 set_parent_log_damage_player(app::BattleObjectModuleAccessor *, int, uint, int, int) asm("_ZN3app8lua_bind45LinkModule__set_parent_log_damage_player_implEPNS_26BattleObjectModuleAccessorEijii") LINKABLE;
        u64 unlink(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind23LinkModule__unlink_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 unlink_node(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28LinkModule__unlink_node_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        }
    }
#endif // LINKMODULE_H
