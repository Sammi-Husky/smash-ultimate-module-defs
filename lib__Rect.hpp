#ifndef LIB__RECT_H
#define LIB__RECT_H
namespace app::lua_bind {
    namespace lib__Rect {
        u64 Rect__load_from_l2c_table(lib::Rect *,lib::L2CValue const&) asm("_ZN3app8lua_bind35lib__Rect__load_from_l2c_table_implEPN3lib4RectERKNS1_8L2CValueE") LINKABLE;
        u64 Rect__store_l2c_table(lib::Rect const*) asm("_ZN3app8lua_bind31lib__Rect__store_l2c_table_implEPKN3lib4RectE") LINKABLE;
        }
    }
#endif // LIB__RECT_H
