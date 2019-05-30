#ifndef FIGHTERKINETICENERGYGRAVITY_H
#define FIGHTERKINETICENERGYGRAVITY_H
namespace app::lua_bind {
    namespace FighterKineticEnergyGravity {
        u64 get_accel(app::FighterKineticEnergyGravity *) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__get_accel_implEPNS_27FighterKineticEnergyGravityE") LINKABLE;
        u64 get_stable_speed(app::FighterKineticEnergyGravity *) asm("_ZN3app8lua_bind50FighterKineticEnergyGravity__get_stable_speed_implEPNS_27FighterKineticEnergyGravityE") LINKABLE;
        u64 set_accel(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__set_accel_implEPNS_27FighterKineticEnergyGravityEf") LINKABLE;
        u64 set_brake(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__set_brake_implEPNS_27FighterKineticEnergyGravityEf") LINKABLE;
        u64 set_limit_speed(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind49FighterKineticEnergyGravity__set_limit_speed_implEPNS_27FighterKineticEnergyGravityEf") LINKABLE;
        u64 set_speed(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__set_speed_implEPNS_27FighterKineticEnergyGravityEf") LINKABLE;
        u64 set_stable_speed(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind50FighterKineticEnergyGravity__set_stable_speed_implEPNS_27FighterKineticEnergyGravityEf") LINKABLE;
        }
    }
#endif // FIGHTERKINETICENERGYGRAVITY_H
