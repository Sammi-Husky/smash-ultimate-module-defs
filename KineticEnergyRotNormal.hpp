#ifndef KINETICENERGYROTNORMAL_H
#define KINETICENERGYROTNORMAL_H
namespace app::lua_bind {
    namespace KineticEnergyRotNormal {
        u64 get_rot_speed(app::KineticEnergyRotNormal *) asm("_ZN3app8lua_bind42KineticEnergyRotNormal__get_rot_speed_implEPNS_22KineticEnergyRotNormalE") LINKABLE;
        u64 set_accel(app::KineticEnergyRotNormal *,const Vector3f*) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__set_accel_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE") LINKABLE;
        u64 set_brake(app::KineticEnergyRotNormal *,const Vector3f*) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__set_brake_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE") LINKABLE;
        u64 set_limit_speed(app::KineticEnergyRotNormal *,const Vector3f*) asm("_ZN3app8lua_bind44KineticEnergyRotNormal__set_limit_speed_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE") LINKABLE;
        u64 set_speed(app::KineticEnergyRotNormal *,const Vector3f*) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__set_speed_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE") LINKABLE;
        u64 set_stable_speed(app::KineticEnergyRotNormal *,const Vector3f*) asm("_ZN3app8lua_bind45KineticEnergyRotNormal__set_stable_speed_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE") LINKABLE;
        }
    }
#endif // KINETICENERGYROTNORMAL_H
