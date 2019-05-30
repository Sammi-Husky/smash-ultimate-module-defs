#ifndef ATTACKDATA_H
#define ATTACKDATA_H
namespace app::lua_bind {
    namespace AttackData {
        u64 load_from_l2c_table(app::AttackData *,lib::L2CValue const&) asm("_ZN3app8lua_bind36AttackData__load_from_l2c_table_implEPNS_10AttackDataERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::AttackData const*) asm("_ZN3app8lua_bind32AttackData__store_l2c_table_implEPKNS_10AttackDataE") LINKABLE;
        }
    }
#endif // ATTACKDATA_H
