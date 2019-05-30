#ifndef FIGHTERKINETICENERGYCONTROLLER_H
#define FIGHTERKINETICENERGYCONTROLLER_H
namespace app::lua_bind {
    namespace FighterKineticEnergyController {
        u64 mul_x_speed_max(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__mul_x_speed_max_implEPNS_30FighterKineticEnergyControllerEf") LINKABLE;
        u64 set_accel_x_add(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_x_add_implEPNS_30FighterKineticEnergyControllerEf") LINKABLE;
        u64 set_accel_x_mul(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_x_mul_implEPNS_30FighterKineticEnergyControllerEf") LINKABLE;
        u64 set_accel_y_add(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_y_add_implEPNS_30FighterKineticEnergyControllerEf") LINKABLE;
        u64 set_accel_y_mul(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_y_mul_implEPNS_30FighterKineticEnergyControllerEf") LINKABLE;
        }
    }
#endif // FIGHTERKINETICENERGYCONTROLLER_H
