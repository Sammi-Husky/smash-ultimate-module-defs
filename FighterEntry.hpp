#ifndef FIGHTERENTRY_H
#define FIGHTERENTRY_H
namespace app::lua_bind {
    namespace FighterEntry {
        u64 current_fighter_id(app::FighterEntry *) asm("_ZN3app8lua_bind37FighterEntry__current_fighter_id_implEPNS_12FighterEntryE") LINKABLE;
        u64 eat_item(app::FighterEntry *,app::LinkEventTouchItem &,bool) asm("_ZN3app8lua_bind27FighterEntry__eat_item_implEPNS_12FighterEntryERNS_18LinkEventTouchItemEb") LINKABLE;
        u64 heal(app::FighterEntry *,float,bool,int,u64) asm("_ZN3app8lua_bind23FighterEntry__heal_implEPNS_12FighterEntryEfbiN3phx6Hash40E") LINKABLE;
        }
    }
#endif // FIGHTERENTRY_H
