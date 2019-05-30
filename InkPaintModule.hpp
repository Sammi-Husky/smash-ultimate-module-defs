#ifndef INKPAINTMODULE_H
#define INKPAINTMODULE_H
namespace app::lua_bind {
    namespace InkPaintModule {
        u64 set_special_paint(app::BattleObjectModuleAccessor *,app::SpecialPaintKind) asm("_ZN3app8lua_bind38InkPaintModule__set_special_paint_implEPNS_26BattleObjectModuleAccessorENS_16SpecialPaintKindE") LINKABLE;
        }
    }
#endif // INKPAINTMODULE_H
