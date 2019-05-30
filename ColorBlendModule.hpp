#ifndef COLORBLENDMODULE_H
#define COLORBLENDMODULE_H
namespace app::lua_bind {
    namespace ColorBlendModule {
        u64 cancel_main_color(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind40ColorBlendModule__cancel_main_color_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_disable_camera_depth_influence(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind57ColorBlendModule__set_disable_camera_depth_influence_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_enable_flash(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind39ColorBlendModule__set_enable_flash_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_last_attack_direction(app::BattleObjectModuleAccessor *,const Vector3f*) asm("_ZN3app8lua_bind48ColorBlendModule__set_last_attack_direction_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 set_main_color(app::BattleObjectModuleAccessor *,phx::Vector4f const&,phx::Vector4f const&,float,float,int,bool) asm("_ZN3app8lua_bind37ColorBlendModule__set_main_color_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector4fES6_ffib") LINKABLE;
        u64 set_shadow_bloom(app::BattleObjectModuleAccessor *,float,bool) asm("_ZN3app8lua_bind39ColorBlendModule__set_shadow_bloom_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        }
    }
#endif // COLORBLENDMODULE_H
