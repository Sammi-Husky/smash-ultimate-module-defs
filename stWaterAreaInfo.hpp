#ifndef STWATERAREAINFO_H
#define STWATERAREAINFO_H
namespace app::lua_bind {
    namespace stWaterAreaInfo {
        u64 load_from_l2c_table(app::stWaterAreaInfo *,lib::L2CValue const&) asm("_ZN3app8lua_bind41stWaterAreaInfo__load_from_l2c_table_implEPNS_15stWaterAreaInfoERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::stWaterAreaInfo const*) asm("_ZN3app8lua_bind37stWaterAreaInfo__store_l2c_table_implEPKNS_15stWaterAreaInfoE") LINKABLE;
        }
    }
#endif // STWATERAREAINFO_H
