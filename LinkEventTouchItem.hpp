#ifndef LINKEVENTTOUCHITEM_H
#define LINKEVENTTOUCHITEM_H
namespace app::lua_bind {
    namespace LinkEventTouchItem {
        u64 load_from_l2c_table(app::LinkEventTouchItem *,lib::L2CValue const&) asm("_ZN3app8lua_bind44LinkEventTouchItem__load_from_l2c_table_implEPNS_18LinkEventTouchItemERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventTouchItem const*) asm("_ZN3app8lua_bind40LinkEventTouchItem__store_l2c_table_implEPKNS_18LinkEventTouchItemE") LINKABLE;
        }
    }
#endif // LINKEVENTTOUCHITEM_H
