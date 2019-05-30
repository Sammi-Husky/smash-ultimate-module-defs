#ifndef WEAPONKINETICENERGYGRAVITY_H
#define WEAPONKINETICENERGYGRAVITY_H
namespace app::lua_bind {
    namespace WeaponKineticEnergyGravity {
        u64 set_accel(app::WeaponKineticEnergyGravity *,float) asm("_ZN3app8lua_bind42WeaponKineticEnergyGravity__set_accel_implEPNS_26WeaponKineticEnergyGravityEf") LINKABLE;
        u64 set_limit_speed(app::WeaponKineticEnergyGravity *,float) asm("_ZN3app8lua_bind48WeaponKineticEnergyGravity__set_limit_speed_implEPNS_26WeaponKineticEnergyGravityEf") LINKABLE;
        u64 set_speed(app::WeaponKineticEnergyGravity *,float) asm("_ZN3app8lua_bind42WeaponKineticEnergyGravity__set_speed_implEPNS_26WeaponKineticEnergyGravityEf") LINKABLE;
        }
    }
#endif // WEAPONKINETICENERGYGRAVITY_H
