#ifndef ITEMCAMERAMODULEIMPL_H
#define ITEMCAMERAMODULEIMPL_H
namespace app::lua_bind {
    namespace ItemCameraModuleImpl {
        u64 end_camera_subject(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind45ItemCameraModuleImpl__end_camera_subject_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_camera_subject_pos(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind49ItemCameraModuleImpl__get_camera_subject_pos_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_camera_subject_enable(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind52ItemCameraModuleImpl__set_camera_subject_enable_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_camera_subject_pos(app::BattleObjectModuleAccessor *,int,const Vector3f*) asm("_ZN3app8lua_bind49ItemCameraModuleImpl__set_camera_subject_pos_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE") LINKABLE;
        u64 set_camera_subject_range(app::BattleObjectModuleAccessor *,int,phx::Vector4f const&) asm("_ZN3app8lua_bind51ItemCameraModuleImpl__set_camera_subject_range_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector4fE") LINKABLE;
        u64 start_camera_subject(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind47ItemCameraModuleImpl__start_camera_subject_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        }
    }
#endif // ITEMCAMERAMODULEIMPL_H
