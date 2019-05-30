#ifndef FIGHTERAREAMODULEIMPL_H
#define FIGHTERAREAMODULEIMPL_H
namespace app::lua_bind {
    namespace FighterAreaModuleImpl {
        u64 enable_fix_jostle_area(app::BattleObjectModuleAccessor *,float,float) asm("_ZN3app8lua_bind50FighterAreaModuleImpl__enable_fix_jostle_area_implEPNS_26BattleObjectModuleAccessorEff") LINKABLE;
        u64 enable_fix_jostle_area_xy(app::BattleObjectModuleAccessor *,float,float,float,float) asm("_ZN3app8lua_bind53FighterAreaModuleImpl__enable_fix_jostle_area_xy_implEPNS_26BattleObjectModuleAccessorEffff") LINKABLE;
        }
    }
#endif // FIGHTERAREAMODULEIMPL_H
