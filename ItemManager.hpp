#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H
namespace app::lua_bind {
    namespace ItemManager {
        u64 find_active_item_from_area_id(app::ItemManager *,uint) asm("_ZN3app8lua_bind47ItemManager__find_active_item_from_area_id_implEPNS_11ItemManagerEj") LINKABLE;
        u64 find_active_item_from_id(app::ItemManager *,uint) asm("_ZN3app8lua_bind42ItemManager__find_active_item_from_id_implEPNS_11ItemManagerEj") LINKABLE;
        u64 get_active_item(app::ItemManager *,u64) asm("_ZN3app8lua_bind33ItemManager__get_active_item_implEPNS_11ItemManagerEm") LINKABLE;
        u64 get_num_of_active_item_all(app::ItemManager *) asm("_ZN3app8lua_bind44ItemManager__get_num_of_active_item_all_implEPNS_11ItemManagerE") LINKABLE;
        u64 get_num_of_ownered_item(app::ItemManager *,uint,app::ItemKind) asm("_ZN3app8lua_bind41ItemManager__get_num_of_ownered_item_implEPNS_11ItemManagerEjNS_8ItemKindE") LINKABLE;
        u64 is_change_fighter_restart_position(app::ItemManager *) asm("_ZN3app8lua_bind52ItemManager__is_change_fighter_restart_position_implEPNS_11ItemManagerE") LINKABLE;
        u64 remove_item_from_id(app::ItemManager *,uint) asm("_ZN3app8lua_bind37ItemManager__remove_item_from_id_implEPNS_11ItemManagerEj") LINKABLE;
        }
    }
#endif // ITEMMANAGER_H
