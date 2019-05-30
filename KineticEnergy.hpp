#ifndef KINETICENERGY_H
#define KINETICENERGY_H
namespace app::lua_bind {
    namespace KineticEnergy {
        u64 clear_speed(app::KineticEnergy *) asm("_ZN3app8lua_bind31KineticEnergy__clear_speed_implEPNS_13KineticEnergyE") LINKABLE;
        u64 enable(app::KineticEnergy *) asm("_ZN3app8lua_bind26KineticEnergy__enable_implEPNS_13KineticEnergyE") LINKABLE;
        u64 get_rotation(app::KineticEnergy *) asm("_ZN3app8lua_bind32KineticEnergy__get_rotation_implEPNS_13KineticEnergyE") LINKABLE;
        u64 get_speed(app::KineticEnergy *) asm("_ZN3app8lua_bind29KineticEnergy__get_speed_implEPNS_13KineticEnergyE") LINKABLE;
        u64 get_speed_y(app::KineticEnergy *) asm("_ZN3app8lua_bind31KineticEnergy__get_speed_y_implEPNS_13KineticEnergyE") LINKABLE;
        u64 off_consider_ground_friction(app::KineticEnergy *) asm("_ZN3app8lua_bind48KineticEnergy__off_consider_ground_friction_implEPNS_13KineticEnergyE") LINKABLE;
        u64 on_consider_ground_friction(app::KineticEnergy *) asm("_ZN3app8lua_bind47KineticEnergy__on_consider_ground_friction_implEPNS_13KineticEnergyE") LINKABLE;
        u64 reset_energy(app::KineticEnergy *,int,const Vector2f*,const Vector3f*,app::BattleObjectModuleAccessor &) asm("_ZN3app8lua_bind32KineticEnergy__reset_energy_implEPNS_13KineticEnergyEiRKN3phx8Vector2fERKNS3_8Vector3fERNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 unable(app::KineticEnergy *) asm("_ZN3app8lua_bind26KineticEnergy__unable_implEPNS_13KineticEnergyE") LINKABLE;
        }
    }
#endif // KINETICENERGY_H
