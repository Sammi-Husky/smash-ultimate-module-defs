#ifndef DAMAGEINFO_H
#define DAMAGEINFO_H
namespace app::lua_bind {
    namespace DamageInfo {
        u64 store_l2c_table(app::DamageInfo const*,lib::L2CValue const&) asm("_ZN3app8lua_bind32DamageInfo__store_l2c_table_implEPKNS_10DamageInfoERKN3lib8L2CValueE") LINKABLE;
        }
    }
#endif // DAMAGEINFO_H
