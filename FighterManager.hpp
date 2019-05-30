#ifndef FIGHTERMANAGER_H
#define FIGHTERMANAGER_H
namespace app::lua_bind {
    namespace FighterManager {
        u64 disable_ko_camera(app::FighterManager *) asm("_ZN3app8lua_bind38FighterManager__disable_ko_camera_implEPNS_14FighterManagerE") LINKABLE;
        u64 enable_ko_camera(app::FighterManager *) asm("_ZN3app8lua_bind37FighterManager__enable_ko_camera_implEPNS_14FighterManagerE") LINKABLE;
        u64 entry_count(app::FighterManager *) asm("_ZN3app8lua_bind32FighterManager__entry_count_implEPNS_14FighterManagerE") LINKABLE;
        u64 exit_finalbg(app::FighterManager *) asm("_ZN3app8lua_bind33FighterManager__exit_finalbg_implEPNS_14FighterManagerE") LINKABLE;
        u64 exit_movie(app::FighterManager *) asm("_ZN3app8lua_bind31FighterManager__exit_movie_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_beat_point_diff_from_top(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind49FighterManager__get_beat_point_diff_from_top_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 get_entry_id(app::FighterManager *,int) asm("_ZN3app8lua_bind33FighterManager__get_entry_id_implEPNS_14FighterManagerEi") LINKABLE;
        u64 get_entry_no(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind33FighterManager__get_entry_no_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 get_fighter_entry(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind38FighterManager__get_fighter_entry_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 get_fighter_information(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind44FighterManager__get_fighter_information_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 get_final_actor_entry_id(app::FighterManager *) asm("_ZN3app8lua_bind45FighterManager__get_final_actor_entry_id_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_jack_final_cut_in(app::FighterManager *) asm("_ZN3app8lua_bind42FighterManager__get_jack_final_cut_in_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_top_rank_player(app::FighterManager *,int) asm("_ZN3app8lua_bind40FighterManager__get_top_rank_player_implEPNS_14FighterManagerEi") LINKABLE;
        u64 get_top_rank_player_num(app::FighterManager *) asm("_ZN3app8lua_bind44FighterManager__get_top_rank_player_num_implEPNS_14FighterManagerE") LINKABLE;
        u64 is_available_discretion_final(app::FighterManager *) asm("_ZN3app8lua_bind50FighterManager__is_available_discretion_final_implEPNS_14FighterManagerE") LINKABLE;
        u64 is_end_movie(app::FighterManager *) asm("_ZN3app8lua_bind33FighterManager__is_end_movie_implEPNS_14FighterManagerE") LINKABLE;
        u64 is_final(app::FighterManager *) asm("_ZN3app8lua_bind29FighterManager__is_final_implEPNS_14FighterManagerE") LINKABLE;
        u64 is_prepared_movie(app::FighterManager *) asm("_ZN3app8lua_bind38FighterManager__is_prepared_movie_implEPNS_14FighterManagerE") LINKABLE;
        u64 is_rebirth_plate_line(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind42FighterManager__is_rebirth_plate_line_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 notify_log_event_collision_hit(app::FighterManager *,uint,uint,float,int,bool) asm("_ZN3app8lua_bind51FighterManager__notify_log_event_collision_hit_implEPNS_14FighterManagerEjjfib") LINKABLE;
        u64 one_on_one_ratio(app::FighterManager *) asm("_ZN3app8lua_bind37FighterManager__one_on_one_ratio_implEPNS_14FighterManagerE") LINKABLE;
        u64 prepare_movie(app::FighterManager *,u64) asm("_ZN3app8lua_bind34FighterManager__prepare_movie_implEPNS_14FighterManagerEN3phx6Hash40E") LINKABLE;
        u64 set_controller_rumble_all(app::FighterManager *,u64,int,bool,uint) asm("_ZN3app8lua_bind46FighterManager__set_controller_rumble_all_implEPNS_14FighterManagerEN3phx6Hash40Eibj") LINKABLE;
        u64 set_cursor_whole(app::FighterManager *,bool) asm("_ZN3app8lua_bind37FighterManager__set_cursor_whole_implEPNS_14FighterManagerEb") LINKABLE;
        u64 set_dead_up_camera_hit_cursor_status(app::FighterManager *,bool) asm("_ZN3app8lua_bind57FighterManager__set_dead_up_camera_hit_cursor_status_implEPNS_14FighterManagerEb") LINKABLE;
        u64 set_final(app::FighterManager *,app::FighterEntryID,app::FighterAvailableFinal,uint) asm("_ZN3app8lua_bind30FighterManager__set_final_implEPNS_14FighterManagerENS_14FighterEntryIDENS_21FighterAvailableFinalEj") LINKABLE;
        u64 set_visible_finalbg(app::FighterManager *,bool) asm("_ZN3app8lua_bind40FighterManager__set_visible_finalbg_implEPNS_14FighterManagerEb") LINKABLE;
        u64 start_finalbg(app::FighterManager *,int,float) asm("_ZN3app8lua_bind34FighterManager__start_finalbg_implEPNS_14FighterManagerEif") LINKABLE;
        u64 start_movie(app::FighterManager *,float) asm("_ZN3app8lua_bind32FighterManager__start_movie_implEPNS_14FighterManagerEf") LINKABLE;
        }
    }
#endif // FIGHTERMANAGER_H
