#ifndef FIGHTERKINETICENERGYMOTION_H
#define FIGHTERKINETICENERGYMOTION_H
namespace app::lua_bind {
    namespace FighterKineticEnergyMotion {
        u64 set_angle(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind42FighterKineticEnergyMotion__set_angle_implEPNS_26FighterKineticEnergyMotionEf") LINKABLE;
        u64 set_speed_mul(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__set_speed_mul_implEPNS_26FighterKineticEnergyMotionEf") LINKABLE;
        u64 set_speed_mul_2nd(app::FighterKineticEnergyMotion *,const Vector2f*) asm("_ZN3app8lua_bind50FighterKineticEnergyMotion__set_speed_mul_2nd_implEPNS_26FighterKineticEnergyMotionERKN3phx8Vector2fE") LINKABLE;
        }
    }
#endif // FIGHTERKINETICENERGYMOTION_H
