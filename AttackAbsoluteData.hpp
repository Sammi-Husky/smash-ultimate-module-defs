#ifndef ATTACKABSOLUTEDATA_H
#define ATTACKABSOLUTEDATA_H
namespace app::lua_bind {
    namespace AttackAbsoluteData {
        u64 load_from_l2c_table(app::AttackAbsoluteData *,lib::L2CValue const&) asm("_ZN3app8lua_bind44AttackAbsoluteData__load_from_l2c_table_implEPNS_18AttackAbsoluteDataERKN3lib8L2CValueE") LINKABLE;
        }
    }
#endif // ATTACKABSOLUTEDATA_H
