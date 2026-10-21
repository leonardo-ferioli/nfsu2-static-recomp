#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_663baa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_663d47(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_688ce2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_688ea8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_688ecb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689008(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68902b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689037(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689044(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68904f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689052(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689057(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68905a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6890f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689102(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689108(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689115(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68912e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689130(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689139(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68913d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68913f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68914d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689166(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689168(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689171(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689175(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689177(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689185(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689198(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6891f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68920c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689212(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689214(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689217(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689219(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689226(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689239(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689244(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689251(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68930a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68931d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68931f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689322(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68932f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689342(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689347(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689354(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68935f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689361(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689366(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68937b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689382(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689384(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689391(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689394(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689396(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689398(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68939a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6893a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6893a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6893b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6893f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68940a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68941d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689432(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689445(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689448(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68944a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689457(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68946a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68946d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68946f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68947c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68948f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689492(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689494(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689496(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68949c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6894a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6894bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6894bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6894c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6894c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6894d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68952d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689530(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689532(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689540(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68955b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68955e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689567(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68956b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68956d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68957b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689596(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689599(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895e2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6895f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68960d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689610(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689619(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68961e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689620(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68962e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689649(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68964c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68964e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68965c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68968e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689690(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689705(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689707(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68970d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68972c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68972f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68973c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689740(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689743(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68974e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689765(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689768(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68976a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68976c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689775(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689787(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6899f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6899f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6899f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6899fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a07(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a12(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a1a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a23(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a2b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a35(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a3b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a3e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a55(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a6b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a8d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689a96(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689aa6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689ab2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689aba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689abc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689ac4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689ac7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689acd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689ad0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689ae1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689ae5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689aea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689aed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689af8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689afa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689aff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689b03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689b08(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689b0a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689b0d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689c31(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689c72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689cc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689d14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689f5a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689fb9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68a002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d395f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75c9b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75db80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75eb50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75eea0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6892f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6893fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689425(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6896da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68978d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689808(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6898a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689928(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689986(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6899e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689b13(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689b53(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689bac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689be5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689c79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689d1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689fc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_689002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689002:L689002:{bud-=1;NFSU2_TR(0x689002);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x688ecbu);}[[clang::musttail]] return blk_688ecb(ARGS);}}
{[[clang::musttail]] return blk_689008(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689008(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689008:L689008:{bud-=10;NFSU2_TR(0x689008);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68900a:{NFSU2_TR(0x68900a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68900b:{NFSU2_TR(0x68900b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B68900d:{NFSU2_TR(0x68900d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+4),(U+0),4);
}
B68900f:{NFSU2_TR(0x68900f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B689011:{NFSU2_TR(0x689011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B689013:{NFSU2_TR(0x689013);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B689015:{NFSU2_TR(0x689015);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B689018:{NFSU2_TR(0x689018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68901b:{NFSU2_TR(0x68901b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68902b(ARGS);}}
}
B68901d:L68901d:{bud-=3;NFSU2_TR(0x68901d);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B689022:{NFSU2_TR(0x689022);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff3e4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B689029:{NFSU2_TR(0x689029);
{[[clang::musttail]] return blk_689052(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68902b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68902b:L68902b:{bud-=2;NFSU2_TR(0x68902b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68902d:{NFSU2_TR(0x68902d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689037(ARGS);}}
}
B68902f:L68902f:{bud-=3;NFSU2_TR(0x68902f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))&u32(r4(U+4))));
}
B689032:{NFSU2_TR(0x689032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689035:{NFSU2_TR(0x689035);
{[[clang::musttail]] return blk_68904f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689037(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689037:L689037:{bud-=2;NFSU2_TR(0x689037);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68903a:{NFSU2_TR(0x68903a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689044(ARGS);}}
}
B68903c:L68903c:{bud-=3;NFSU2_TR(0x68903c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))&u32(r4(U+4))));
}
B68903f:{NFSU2_TR(0x68903f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689042:{NFSU2_TR(0x689042);
{[[clang::musttail]] return blk_68904f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689044(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689044:L689044:{bud-=2;NFSU2_TR(0x689044);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B689047:{NFSU2_TR(0x689047);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689057(ARGS);}}
}
B689049:L689049:{bud-=2;NFSU2_TR(0x689049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))&u32(r4(U+4))));
}
B68904c:{NFSU2_TR(0x68904c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_68904f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68904f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68904f:L68904f:{bud-=1;NFSU2_TR(0x68904f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_689052(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689052(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689052:L689052:{bud-=2;NFSU2_TR(0x689052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689055:{NFSU2_TR(0x689055);
{[[clang::musttail]] return blk_68905a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689057(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689057:L689057:{bud-=1;NFSU2_TR(0x689057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_68905a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68905a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68905a:L68905a:{bud-=3;NFSU2_TR(0x68905a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68905d:{NFSU2_TR(0x68905d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68905f:{NFSU2_TR(0x68905f);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_689251(ARGS);}}
}
B689065:L689065:{bud-=4;NFSU2_TR(0x689065);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7ff00000ull))));
}
B68906a:{NFSU2_TR(0x68906a);
w4(G+4,u32(0x20400000ull));
}
B68906f:{NFSU2_TR(0x68906f);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B689071:{NFSU2_TR(0x689071);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6891b0(ARGS);}}
}
B689077:L689077:{bud-=1;NFSU2_TR(0x689077);
if(r1(F+6)){{[[clang::musttail]] return blk_689185(ARGS);}}
}
B68907d:L68907d:{bud-=2;NFSU2_TR(0x68907d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689082:{NFSU2_TR(0x689082);
if(r1(F+6)){{[[clang::musttail]] return blk_68914d(ARGS);}}
}
B689088:L689088:{bud-=2;NFSU2_TR(0x689088);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20100000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68908d:{NFSU2_TR(0x68908d);
if(r1(F+6)){{[[clang::musttail]] return blk_689115(ARGS);}}
}
B689093:L689093:{bud-=2;NFSU2_TR(0x689093);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20200000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689098:{NFSU2_TR(0x689098);
if(r1(F+6)){{[[clang::musttail]] return blk_6890dd(ARGS);}}
}
B68909a:L68909a:{bud-=2;NFSU2_TR(0x68909a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20300000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68909f:{NFSU2_TR(0x68909f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6890a5:L6890a5:{bud-=2;NFSU2_TR(0x6890a5);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6890a7:{NFSU2_TR(0x6890a7);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6890ad:L6890ad:{bud-=3;NFSU2_TR(0x6890ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6890b0:{NFSU2_TR(0x6890b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6890b6:{NFSU2_TR(0x6890b6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_6890b8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890b8:L6890b8:{bud-=1;NFSU2_TR(0x6890b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_6890be(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890be:L6890be:{bud-=1;NFSU2_TR(0x6890be);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6890c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890c0:L6890c0:{bud-=4;NFSU2_TR(0x6890c0);
{u32 ea_=u32(r4(G+4)+r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B6890c3:{NFSU2_TR(0x6890c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B6890c5:{NFSU2_TR(0x6890c5);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6890c8:{NFSU2_TR(0x6890c8);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6890ce(ARGS);}}
{[[clang::musttail]] return blk_6890ca(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890ca:L6890ca:{bud-=2;NFSU2_TR(0x6890ca);
__asm__ volatile(".byte 0xd9,0xe8"::);
}
B6890cc:{NFSU2_TR(0x6890cc);
{[[clang::musttail]] return blk_6890d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890ce:L6890ce:{bud-=1;NFSU2_TR(0x6890ce);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_6890d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890d0:L6890d0:{bud-=4;NFSU2_TR(0x6890d0);
{u32 ea_=u32(r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6890d2:{NFSU2_TR(0x6890d2);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B6890d5:{NFSU2_TR(0x6890d5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6890d6:{NFSU2_TR(0x6890d6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6890b8u);}[[clang::musttail]] return blk_6890b8(ARGS);}}
}
B6890d8:L6890d8:{bud-=1;NFSU2_TR(0x6890d8);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890dd:L6890dd:{bud-=2;NFSU2_TR(0x6890dd);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6890df:{NFSU2_TR(0x6890df);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6890e5:L6890e5:{bud-=3;NFSU2_TR(0x6890e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6890e8:{NFSU2_TR(0x6890e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6890ee:{NFSU2_TR(0x6890ee);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_6890f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890f0:L6890f0:{bud-=1;NFSU2_TR(0x6890f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_6890f6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890f6:L6890f6:{bud-=1;NFSU2_TR(0x6890f6);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6890f8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6890f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6890f8:L6890f8:{bud-=4;NFSU2_TR(0x6890f8);
{u32 ea_=u32(r4(G+4)+r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B6890fb:{NFSU2_TR(0x6890fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B6890fd:{NFSU2_TR(0x6890fd);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B689100:{NFSU2_TR(0x689100);
if(r1(F+2)){{[[clang::musttail]] return blk_689106(ARGS);}}
{[[clang::musttail]] return blk_689102(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689102(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689102:L689102:{bud-=2;NFSU2_TR(0x689102);
__asm__ volatile(".byte 0xd9,0xe8"::);
}
B689104:{NFSU2_TR(0x689104);
{[[clang::musttail]] return blk_689108(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689106:L689106:{bud-=1;NFSU2_TR(0x689106);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_689108(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689108(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689108:L689108:{bud-=4;NFSU2_TR(0x689108);
{u32 ea_=u32(r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B68910a:{NFSU2_TR(0x68910a);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B68910d:{NFSU2_TR(0x68910d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68910e:{NFSU2_TR(0x68910e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6890f0u);}[[clang::musttail]] return blk_6890f0(ARGS);}}
}
B689110:L689110:{bud-=1;NFSU2_TR(0x689110);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689115(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689115:L689115:{bud-=2;NFSU2_TR(0x689115);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689117:{NFSU2_TR(0x689117);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68911d:L68911d:{bud-=4;NFSU2_TR(0x68911d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689123:{NFSU2_TR(0x689123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689126:{NFSU2_TR(0x689126);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68912c:{NFSU2_TR(0x68912c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_68912e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68912e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68912e:L68912e:{bud-=1;NFSU2_TR(0x68912e);
{u32 ea_=u32(r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689130(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689130:L689130:{bud-=4;NFSU2_TR(0x689130);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B689132:{NFSU2_TR(0x689132);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689134:{NFSU2_TR(0x689134);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B689137:{NFSU2_TR(0x689137);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68913d(ARGS);}}
{[[clang::musttail]] return blk_689139(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689139(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689139:L689139:{bud-=2;NFSU2_TR(0x689139);
{u32 ea_=u32(r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B68913b:{NFSU2_TR(0x68913b);
{[[clang::musttail]] return blk_68913f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68913d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68913d:L68913d:{bud-=1;NFSU2_TR(0x68913d);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68913f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68913f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68913f:L68913f:{bud-=4;NFSU2_TR(0x68913f);
{u32 ea_=u32(r4(G+4)+r4(R+8));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689142:{NFSU2_TR(0x689142);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B689145:{NFSU2_TR(0x689145);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689146:{NFSU2_TR(0x689146);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68912eu);}[[clang::musttail]] return blk_68912e(ARGS);}}
}
B689148:L689148:{bud-=1;NFSU2_TR(0x689148);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68914d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68914d:L68914d:{bud-=2;NFSU2_TR(0x68914d);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68914f:{NFSU2_TR(0x68914f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689155:L689155:{bud-=4;NFSU2_TR(0x689155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68915b:{NFSU2_TR(0x68915b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68915e:{NFSU2_TR(0x68915e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689164:{NFSU2_TR(0x689164);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_689166(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689166(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689166:L689166:{bud-=1;NFSU2_TR(0x689166);
{u32 ea_=u32(r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689168(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689168(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689168:L689168:{bud-=4;NFSU2_TR(0x689168);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B68916a:{NFSU2_TR(0x68916a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B68916c:{NFSU2_TR(0x68916c);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B68916f:{NFSU2_TR(0x68916f);
if(r1(F+2)){{[[clang::musttail]] return blk_689175(ARGS);}}
{[[clang::musttail]] return blk_689171(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689171(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689171:L689171:{bud-=2;NFSU2_TR(0x689171);
{u32 ea_=u32(r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B689173:{NFSU2_TR(0x689173);
{[[clang::musttail]] return blk_689177(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689175(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689175:L689175:{bud-=1;NFSU2_TR(0x689175);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689177(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689177(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689177:L689177:{bud-=4;NFSU2_TR(0x689177);
{u32 ea_=u32(r4(R+8)+r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B68917a:{NFSU2_TR(0x68917a);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B68917d:{NFSU2_TR(0x68917d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68917e:{NFSU2_TR(0x68917e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689166u);}[[clang::musttail]] return blk_689166(ARGS);}}
}
B689180:L689180:{bud-=1;NFSU2_TR(0x689180);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689185(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689185:L689185:{bud-=2;NFSU2_TR(0x689185);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689187:{NFSU2_TR(0x689187);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68918d:L68918d:{bud-=3;NFSU2_TR(0x68918d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689190:{NFSU2_TR(0x689190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689196:{NFSU2_TR(0x689196);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_689198(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689198(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689198:L689198:{bud-=2;NFSU2_TR(0x689198);
{u32 ea_=u32(r4(G+0)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B68919b:{NFSU2_TR(0x68919b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_6891a1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891a1:L6891a1:{bud-=1;NFSU2_TR(0x6891a1);
{u32 ea_=u32(r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6891a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891a3:L6891a3:{bud-=4;NFSU2_TR(0x6891a3);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6891a5:{NFSU2_TR(0x6891a5);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B6891a8:{NFSU2_TR(0x6891a8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6891a9:{NFSU2_TR(0x6891a9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689198u);}[[clang::musttail]] return blk_689198(ARGS);}}
}
B6891ab:L6891ab:{bud-=1;NFSU2_TR(0x6891ab);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891b0:L6891b0:{bud-=2;NFSU2_TR(0x6891b0);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20500000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6891b5:{NFSU2_TR(0x6891b5);
if(r1(F+6)){{[[clang::musttail]] return blk_689226(ARGS);}}
}
B6891b7:L6891b7:{bud-=2;NFSU2_TR(0x6891b7);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20600000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6891bc:{NFSU2_TR(0x6891bc);
if(r1(F+6)){{[[clang::musttail]] return blk_6891f9(ARGS);}}
}
B6891be:L6891be:{bud-=2;NFSU2_TR(0x6891be);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x50000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6891c3:{NFSU2_TR(0x6891c3);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6891c9:L6891c9:{bud-=1;NFSU2_TR(0x6891c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_6891cc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891cc:L6891cc:{bud-=2;NFSU2_TR(0x6891cc);
__asm__ volatile(".byte 0xd9,0xee"::);
}
B6891ce:{NFSU2_TR(0x6891ce);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
{[[clang::musttail]] return blk_6891d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891d0:L6891d0:{bud-=3;NFSU2_TR(0x6891d0);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6891d2:{NFSU2_TR(0x6891d2);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6891d4:{NFSU2_TR(0x6891d4);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
{[[clang::musttail]] return blk_6891da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891da:L6891da:{bud-=1;NFSU2_TR(0x6891da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_6891e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891e0:L6891e0:{bud-=2;NFSU2_TR(0x6891e0);
{u32 ea_=u32((r4(G+4)*8u)+r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B6891e3:{NFSU2_TR(0x6891e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_6891e9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891e9:L6891e9:{bud-=3;NFSU2_TR(0x6891e9);
{u32 ea_=u32(r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_),"m"(m_));}
}
B6891eb:{NFSU2_TR(0x6891eb);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6891ec:{NFSU2_TR(0x6891ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
{__builtin_memcpy(R+512,F+0,1);[[clang::musttail]] return blk_6891ee(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891ee:L6891ee:{bud-=1;NFSU2_TR(0x6891ee);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6891f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891f0:L6891f0:{bud-=2;NFSU2_TR(0x6891f0);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6891f2:{NFSU2_TR(0x6891f2);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6891dau);}[[clang::musttail]] return blk_6891da(ARGS);}}
}
B6891f4:L6891f4:{bud-=1;NFSU2_TR(0x6891f4);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6891f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6891f9:L6891f9:{bud-=2;NFSU2_TR(0x6891f9);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6891fb:{NFSU2_TR(0x6891fb);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689201:L689201:{bud-=3;NFSU2_TR(0x689201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689204:{NFSU2_TR(0x689204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68920a:{NFSU2_TR(0x68920a);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_68920c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68920c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68920c:L68920c:{bud-=1;NFSU2_TR(0x68920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_689212(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689212(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689212:L689212:{bud-=1;NFSU2_TR(0x689212);
{u32 ea_=u32(r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689214(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689214(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689214:L689214:{bud-=1;NFSU2_TR(0x689214);
{u32 ea_=u32(r4(G+0)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689217(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689217(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689217:L689217:{bud-=1;NFSU2_TR(0x689217);
__asm__ volatile(".byte 0xd9,0xf3"::);
{[[clang::musttail]] return blk_689219(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689219(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689219:L689219:{bud-=4;NFSU2_TR(0x689219);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B68921b:{NFSU2_TR(0x68921b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B68921e:{NFSU2_TR(0x68921e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68921f:{NFSU2_TR(0x68921f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68920cu);}[[clang::musttail]] return blk_68920c(ARGS);}}
}
B689221:L689221:{bud-=1;NFSU2_TR(0x689221);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689226(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689226:L689226:{bud-=2;NFSU2_TR(0x689226);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689228:{NFSU2_TR(0x689228);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68922e:L68922e:{bud-=3;NFSU2_TR(0x68922e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689231:{NFSU2_TR(0x689231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689237:{NFSU2_TR(0x689237);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_689239(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689239(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689239:L689239:{bud-=2;NFSU2_TR(0x689239);
{u32 ea_=u32(r4(G+0)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B68923c:{NFSU2_TR(0x68923c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_689242(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689242:L689242:{bud-=1;NFSU2_TR(0x689242);
{u32 ea_=u32(r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689244(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689244(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689244:L689244:{bud-=4;NFSU2_TR(0x689244);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689246:{NFSU2_TR(0x689246);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689249:{NFSU2_TR(0x689249);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68924a:{NFSU2_TR(0x68924a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689239u);}[[clang::musttail]] return blk_689239(ARGS);}}
}
B68924c:L68924c:{bud-=1;NFSU2_TR(0x68924c);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689251(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689251:L689251:{bud-=4;NFSU2_TR(0x689251);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x7ff00000ull))));
}
B689256:{NFSU2_TR(0x689256);
w4(G+4,u32(0x10c00000ull));
}
B68925b:{NFSU2_TR(0x68925b);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68925d:{NFSU2_TR(0x68925d);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6894d0(ARGS);}}
}
B689263:L689263:{bud-=1;NFSU2_TR(0x689263);
if(r1(F+6)){{[[clang::musttail]] return blk_6894a9(ARGS);}}
}
B689269:L689269:{bud-=3;NFSU2_TR(0x689269);
w4(G+4,u32(0x10600000ull));
}
B68926e:{NFSU2_TR(0x68926e);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B689270:{NFSU2_TR(0x689270);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6893b3(ARGS);}}
}
B689276:L689276:{bud-=1;NFSU2_TR(0x689276);
if(r1(F+6)){{[[clang::musttail]] return blk_689366(ARGS);}}
}
B68927c:L68927c:{bud-=2;NFSU2_TR(0x68927c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689281:{NFSU2_TR(0x689281);
if(r1(F+6)){{[[clang::musttail]] return blk_689354(ARGS);}}
}
B689287:L689287:{bud-=2;NFSU2_TR(0x689287);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10100000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68928c:{NFSU2_TR(0x68928c);
if(r1(F+6)){{[[clang::musttail]] return blk_68932f(ARGS);}}
}
B689292:L689292:{bud-=2;NFSU2_TR(0x689292);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10300000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689297:{NFSU2_TR(0x689297);
if(r1(F+6)){{[[clang::musttail]] return blk_68930a(ARGS);}}
}
B689299:L689299:{bud-=2;NFSU2_TR(0x689299);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10400000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68929e:{NFSU2_TR(0x68929e);
if(r1(F+6)){{[[clang::musttail]] return blk_6892d9(ARGS);}}
}
B6892a0:L6892a0:{bud-=2;NFSU2_TR(0x6892a0);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10500000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6892a5:{NFSU2_TR(0x6892a5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6892ab:L6892ab:{bud-=2;NFSU2_TR(0x6892ab);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6892ad:{NFSU2_TR(0x6892ad);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6892b3:L6892b3:{bud-=3;NFSU2_TR(0x6892b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6892b6:{NFSU2_TR(0x6892b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6892bc:{NFSU2_TR(0x6892bc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
{[[clang::musttail]] return blk_6892be(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892be(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892be:L6892be:{bud-=1;NFSU2_TR(0x6892be);
{u32 ea_=u32(u32(7895760u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6892c4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892c4:L6892c4:{bud-=2;NFSU2_TR(0x6892c4);
{u32 ea_=u32(r4(R+24)+r4(R+12));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B6892c7:{NFSU2_TR(0x6892c7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6892ccull));
{[[clang::musttail]] return blk_75c9b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892cc:L6892cc:{bud-=4;NFSU2_TR(0x6892cc);
{u32 ea_=u32(r4(R+24));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6892ce:{NFSU2_TR(0x6892ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6892d1:{NFSU2_TR(0x6892d1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6892d2:{NFSU2_TR(0x6892d2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6892beu);}[[clang::musttail]] return blk_6892be(ARGS);}}
}
B6892d4:L6892d4:{bud-=1;NFSU2_TR(0x6892d4);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892d9:L6892d9:{bud-=2;NFSU2_TR(0x6892d9);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6892db:{NFSU2_TR(0x6892db);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6892e1:L6892e1:{bud-=3;NFSU2_TR(0x6892e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6892e7:{NFSU2_TR(0x6892e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6892ea:{NFSU2_TR(0x6892ea);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
{[[clang::musttail]] return blk_6892ec(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892ec:L6892ec:{bud-=3;NFSU2_TR(0x6892ec);
{u32 ea_=u32(r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B6892ee:{NFSU2_TR(0x6892ee);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6892ef:{NFSU2_TR(0x6892ef);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_6892f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892f0:L6892f0:{bud-=2;NFSU2_TR(0x6892f0);
{u32 ea_=u32(r4(G+16));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6892f3:{NFSU2_TR(0x6892f3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6892f8ull));
{[[clang::musttail]] return blk_75eb50(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892f8:L6892f8:{bud-=3;NFSU2_TR(0x6892f8);
{u32 ea_=u32(r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_),"m"(m_));}
}
B6892fa:{NFSU2_TR(0x6892fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6892fb:{NFSU2_TR(0x6892fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_6892fc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6892fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6892fc:L6892fc:{bud-=4;NFSU2_TR(0x6892fc);
{u32 ea_=u32(r4(R+24)+r4(R+12));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6892ff:{NFSU2_TR(0x6892ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B689302:{NFSU2_TR(0x689302);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689303:{NFSU2_TR(0x689303);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6892ecu);}[[clang::musttail]] return blk_6892ec(ARGS);}}
}
B689305:L689305:{bud-=1;NFSU2_TR(0x689305);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68930a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68930a:L68930a:{bud-=2;NFSU2_TR(0x68930a);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68930c:{NFSU2_TR(0x68930c);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689312:L689312:{bud-=3;NFSU2_TR(0x689312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689315:{NFSU2_TR(0x689315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68931b:{NFSU2_TR(0x68931b);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_68931d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68931d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68931d:L68931d:{bud-=1;NFSU2_TR(0x68931d);
__asm__ volatile(".byte 0xd9,0xe8"::);
{[[clang::musttail]] return blk_68931f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68931f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68931f:L68931f:{bud-=1;NFSU2_TR(0x68931f);
{u32 ea_=u32(r4(G+4)+r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689322(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689322(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689322:L689322:{bud-=4;NFSU2_TR(0x689322);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689324:{NFSU2_TR(0x689324);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689327:{NFSU2_TR(0x689327);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689328:{NFSU2_TR(0x689328);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68931du);}[[clang::musttail]] return blk_68931d(ARGS);}}
}
B68932a:L68932a:{bud-=1;NFSU2_TR(0x68932a);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68932f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68932f:L68932f:{bud-=2;NFSU2_TR(0x68932f);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689331:{NFSU2_TR(0x689331);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689337:L689337:{bud-=3;NFSU2_TR(0x689337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68933a:{NFSU2_TR(0x68933a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689340:{NFSU2_TR(0x689340);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_689342(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689342(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689342:L689342:{bud-=1;NFSU2_TR(0x689342);
{u32 ea_=u32(r4(G+4)+r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689345(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689345:L689345:{bud-=1;NFSU2_TR(0x689345);
__asm__ volatile(".byte 0xd9,0xe0"::);
{[[clang::musttail]] return blk_689347(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689347(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689347:L689347:{bud-=4;NFSU2_TR(0x689347);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689349:{NFSU2_TR(0x689349);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B68934c:{NFSU2_TR(0x68934c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68934d:{NFSU2_TR(0x68934d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689342u);}[[clang::musttail]] return blk_689342(ARGS);}}
}
B68934f:L68934f:{bud-=1;NFSU2_TR(0x68934f);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689354(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689354:L689354:{bud-=3;NFSU2_TR(0x689354);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68935a:{NFSU2_TR(0x68935a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B68935d:{NFSU2_TR(0x68935d);
__builtin_memmove((R+28),(R+8),4);
{[[clang::musttail]] return blk_68935f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68935f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68935f:L68935f:{bud-=1;NFSU2_TR(0x68935f);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_689361(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(F+10)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68935fu);}goto L68935f;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689361(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689361:L689361:{bud-=1;NFSU2_TR(0x689361);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689366(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689366:L689366:{bud-=3;NFSU2_TR(0x689366);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B689368:{NFSU2_TR(0x689368);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68936a:{NFSU2_TR(0x68936a);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689370:L689370:{bud-=3;NFSU2_TR(0x689370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689373:{NFSU2_TR(0x689373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689379:{NFSU2_TR(0x689379);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_68937b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68937b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68937b:L68937b:{bud-=1;NFSU2_TR(0x68937b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
{[[clang::musttail]] return blk_689382(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689382(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689382:L689382:{bud-=1;NFSU2_TR(0x689382);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689384(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689384(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689384:L689384:{bud-=4;NFSU2_TR(0x689384);
{u32 ea_=u32(u32(7892576u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B68938a:{NFSU2_TR(0x68938a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B68938c:{NFSU2_TR(0x68938c);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B68938f:{NFSU2_TR(0x68938f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6893a2(ARGS);}}
{[[clang::musttail]] return blk_689391(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689391(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689391:L689391:{bud-=1;NFSU2_TR(0x689391);
{u32 ea_=u32(r4(R+8)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689394(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689394(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689394:L689394:{bud-=1;NFSU2_TR(0x689394);
__asm__ volatile(".byte 0xd9,0xed"::);
{[[clang::musttail]] return blk_689396(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689396(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689396:L689396:{bud-=1;NFSU2_TR(0x689396);
__asm__ volatile(".byte 0xd9,0xc9"::);
{[[clang::musttail]] return blk_689398(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689398(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689398:L689398:{bud-=1;NFSU2_TR(0x689398);
__asm__ volatile(".byte 0xd9,0xf1"::);
{[[clang::musttail]] return blk_68939a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68939a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68939a:L68939a:{bud-=2;NFSU2_TR(0x68939a);
{u32 ea_=u32(u32(8104584u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_),"m"(m_));}
}
B6893a0:{NFSU2_TR(0x6893a0);
{[[clang::musttail]] return blk_6893a4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6893a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6893a2:L6893a2:{bud-=1;NFSU2_TR(0x6893a2);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_6893a4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6893a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6893a4:L6893a4:{bud-=5;NFSU2_TR(0x6893a4);
{u32 ea_=u32(r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6893a6:{NFSU2_TR(0x6893a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6893a7:{NFSU2_TR(0x6893a7);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B6893aa:{NFSU2_TR(0x6893aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(F+0,u8((r4(R+24))<(r4(U+0))));
}
B6893ac:{NFSU2_TR(0x6893ac);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68937bu);}[[clang::musttail]] return blk_68937b(ARGS);}}
}
B6893ae:L6893ae:{bud-=1;NFSU2_TR(0x6893ae);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6893b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6893b3:L6893b3:{bud-=2;NFSU2_TR(0x6893b3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10700000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6893b8:{NFSU2_TR(0x6893b8);
if(r1(F+6)){{[[clang::musttail]] return blk_68947c(ARGS);}}
}
B6893be:L6893be:{bud-=2;NFSU2_TR(0x6893be);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10800000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6893c3:{NFSU2_TR(0x6893c3);
if(r1(F+6)){{[[clang::musttail]] return blk_689457(ARGS);}}
}
B6893c9:L6893c9:{bud-=2;NFSU2_TR(0x6893c9);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10900000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6893ce:{NFSU2_TR(0x6893ce);
if(r1(F+6)){{[[clang::musttail]] return blk_689432(ARGS);}}
}
B6893d0:L6893d0:{bud-=2;NFSU2_TR(0x6893d0);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10a00000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6893d5:{NFSU2_TR(0x6893d5);
if(r1(F+6)){{[[clang::musttail]] return blk_68940a(ARGS);}}
}
B6893d7:L6893d7:{bud-=2;NFSU2_TR(0x6893d7);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x10b00000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6893dc:{NFSU2_TR(0x6893dc);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6893e2:L6893e2:{bud-=2;NFSU2_TR(0x6893e2);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6893e4:{NFSU2_TR(0x6893e4);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6893ea:L6893ea:{bud-=3;NFSU2_TR(0x6893ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6893ed:{NFSU2_TR(0x6893ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6893f3:{NFSU2_TR(0x6893f3);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
{[[clang::musttail]] return blk_6893f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6893f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6893f5:L6893f5:{bud-=2;NFSU2_TR(0x6893f5);
{u32 ea_=u32(r4(R+12)+r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B6893f8:{NFSU2_TR(0x6893f8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6893fdull));
{[[clang::musttail]] return blk_75db80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6893fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6893fd:L6893fd:{bud-=4;NFSU2_TR(0x6893fd);
{u32 ea_=u32(r4(R+24));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6893ff:{NFSU2_TR(0x6893ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B689402:{NFSU2_TR(0x689402);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689403:{NFSU2_TR(0x689403);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6893f5u);}[[clang::musttail]] return blk_6893f5(ARGS);}}
}
B689405:L689405:{bud-=1;NFSU2_TR(0x689405);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68940a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68940a:L68940a:{bud-=2;NFSU2_TR(0x68940a);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68940c:{NFSU2_TR(0x68940c);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689412:L689412:{bud-=3;NFSU2_TR(0x689412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689415:{NFSU2_TR(0x689415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68941b:{NFSU2_TR(0x68941b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
{[[clang::musttail]] return blk_68941d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68941d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68941d:L68941d:{bud-=2;NFSU2_TR(0x68941d);
{u32 ea_=u32(r4(R+12)+r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B689420:{NFSU2_TR(0x689420);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x689425ull));
{[[clang::musttail]] return blk_75eea0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689425(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689425:L689425:{bud-=4;NFSU2_TR(0x689425);
{u32 ea_=u32(r4(R+24));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689427:{NFSU2_TR(0x689427);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B68942a:{NFSU2_TR(0x68942a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68942b:{NFSU2_TR(0x68942b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68941du);}[[clang::musttail]] return blk_68941d(ARGS);}}
}
B68942d:L68942d:{bud-=1;NFSU2_TR(0x68942d);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689432(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689432:L689432:{bud-=2;NFSU2_TR(0x689432);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689434:{NFSU2_TR(0x689434);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68943a:L68943a:{bud-=3;NFSU2_TR(0x68943a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68943d:{NFSU2_TR(0x68943d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689443:{NFSU2_TR(0x689443);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_689445(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689445(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689445:L689445:{bud-=1;NFSU2_TR(0x689445);
{u32 ea_=u32(r4(G+4)+r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689448(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689448(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689448:L689448:{bud-=1;NFSU2_TR(0x689448);
__asm__ volatile(".byte 0xd9,0xff"::);
{[[clang::musttail]] return blk_68944a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68944a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68944a:L68944a:{bud-=4;NFSU2_TR(0x68944a);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B68944c:{NFSU2_TR(0x68944c);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B68944f:{NFSU2_TR(0x68944f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689450:{NFSU2_TR(0x689450);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689445u);}[[clang::musttail]] return blk_689445(ARGS);}}
}
B689452:L689452:{bud-=1;NFSU2_TR(0x689452);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689457(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689457:L689457:{bud-=2;NFSU2_TR(0x689457);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689459:{NFSU2_TR(0x689459);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68945f:L68945f:{bud-=3;NFSU2_TR(0x68945f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689462:{NFSU2_TR(0x689462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689468:{NFSU2_TR(0x689468);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_68946a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68946a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68946a:L68946a:{bud-=1;NFSU2_TR(0x68946a);
{u32 ea_=u32(r4(G+4)+r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68946d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68946d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68946d:L68946d:{bud-=1;NFSU2_TR(0x68946d);
__asm__ volatile(".byte 0xd9,0xfe"::);
{[[clang::musttail]] return blk_68946f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68946f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68946f:L68946f:{bud-=4;NFSU2_TR(0x68946f);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689471:{NFSU2_TR(0x689471);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689474:{NFSU2_TR(0x689474);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689475:{NFSU2_TR(0x689475);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68946au);}[[clang::musttail]] return blk_68946a(ARGS);}}
}
B689477:L689477:{bud-=1;NFSU2_TR(0x689477);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68947c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68947c:L68947c:{bud-=2;NFSU2_TR(0x68947c);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68947e:{NFSU2_TR(0x68947e);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689484:L689484:{bud-=3;NFSU2_TR(0x689484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689487:{NFSU2_TR(0x689487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68948d:{NFSU2_TR(0x68948d);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_68948f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68948f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68948f:L68948f:{bud-=1;NFSU2_TR(0x68948f);
{u32 ea_=u32(r4(G+4)+r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689492(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689492(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689492:L689492:{bud-=1;NFSU2_TR(0x689492);
__asm__ volatile(".byte 0xd9,0xe1"::);
{[[clang::musttail]] return blk_689494(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689494(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689494:L689494:{bud-=1;NFSU2_TR(0x689494);
__asm__ volatile(".byte 0xd9,0xfa"::);
{[[clang::musttail]] return blk_689496(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689496(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689496:L689496:{bud-=1;NFSU2_TR(0x689496);
{u32 ea_=u32(u32(7892584u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68949c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68949c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68949c:L68949c:{bud-=4;NFSU2_TR(0x68949c);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B68949e:{NFSU2_TR(0x68949e);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B6894a1:{NFSU2_TR(0x6894a1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6894a2:{NFSU2_TR(0x6894a2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68948fu);}[[clang::musttail]] return blk_68948f(ARGS);}}
}
B6894a4:L6894a4:{bud-=1;NFSU2_TR(0x6894a4);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6894a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6894a9:L6894a9:{bud-=2;NFSU2_TR(0x6894a9);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6894ab:{NFSU2_TR(0x6894ab);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6894b1:L6894b1:{bud-=3;NFSU2_TR(0x6894b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6894b4:{NFSU2_TR(0x6894b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6894ba:{NFSU2_TR(0x6894ba);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
{[[clang::musttail]] return blk_6894bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6894bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6894bc:L6894bc:{bud-=1;NFSU2_TR(0x6894bc);
{u32 ea_=u32(r4(G+4)+r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6894bf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6894bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6894bf:L6894bf:{bud-=1;NFSU2_TR(0x6894bf);
__asm__ volatile(".byte 0xd9,0xe8"::);
{[[clang::musttail]] return blk_6894c1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6894c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6894c1:L6894c1:{bud-=1;NFSU2_TR(0x6894c1);
__asm__ volatile(".byte 0xd9,0xf3"::);
{[[clang::musttail]] return blk_6894c3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6894c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6894c3:L6894c3:{bud-=4;NFSU2_TR(0x6894c3);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6894c5:{NFSU2_TR(0x6894c5);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B6894c8:{NFSU2_TR(0x6894c8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6894c9:{NFSU2_TR(0x6894c9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6894bcu);}[[clang::musttail]] return blk_6894bc(ARGS);}}
}
B6894cb:L6894cb:{bud-=1;NFSU2_TR(0x6894cb);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6894d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6894d0:L6894d0:{bud-=3;NFSU2_TR(0x6894d0);
w4(G+4,u32(0x20500000ull));
}
B6894d5:{NFSU2_TR(0x6894d5);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6894d7:{NFSU2_TR(0x6894d7);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_68965c(ARGS);}}
}
B6894dd:L6894dd:{bud-=1;NFSU2_TR(0x6894dd);
if(r1(F+6)){{[[clang::musttail]] return blk_68962e(ARGS);}}
}
B6894e3:L6894e3:{bud-=2;NFSU2_TR(0x6894e3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6894e8:{NFSU2_TR(0x6894e8);
if(r1(F+6)){{[[clang::musttail]] return blk_6895f2(ARGS);}}
}
B6894ee:L6894ee:{bud-=2;NFSU2_TR(0x6894ee);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20100000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6894f3:{NFSU2_TR(0x6894f3);
if(r1(F+6)){{[[clang::musttail]] return blk_6895b6(ARGS);}}
}
B6894f9:L6894f9:{bud-=2;NFSU2_TR(0x6894f9);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20200000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6894fe:{NFSU2_TR(0x6894fe);
if(r1(F+6)){{[[clang::musttail]] return blk_68957b(ARGS);}}
}
B689500:L689500:{bud-=2;NFSU2_TR(0x689500);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20300000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689505:{NFSU2_TR(0x689505);
if(r1(F+6)){{[[clang::musttail]] return blk_689540(ARGS);}}
}
B689507:L689507:{bud-=2;NFSU2_TR(0x689507);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20400000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68950c:{NFSU2_TR(0x68950c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689512:L689512:{bud-=2;NFSU2_TR(0x689512);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689514:{NFSU2_TR(0x689514);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68951a:L68951a:{bud-=5;NFSU2_TR(0x68951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689520:{NFSU2_TR(0x689520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689526:{NFSU2_TR(0x689526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689529:{NFSU2_TR(0x689529);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
}
B68952b:{NFSU2_TR(0x68952b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
{[[clang::musttail]] return blk_68952d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68952d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68952d:L68952d:{bud-=1;NFSU2_TR(0x68952d);
{u32 ea_=u32(r4(G+0)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689530(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689530(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689530:L689530:{bud-=1;NFSU2_TR(0x689530);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689532(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689532(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689532:L689532:{bud-=4;NFSU2_TR(0x689532);
{u32 ea_=u32(r4(R+8)+r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689535:{NFSU2_TR(0x689535);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689538:{NFSU2_TR(0x689538);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689539:{NFSU2_TR(0x689539);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68952du);}[[clang::musttail]] return blk_68952d(ARGS);}}
}
B68953b:L68953b:{bud-=1;NFSU2_TR(0x68953b);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689540(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689540:L689540:{bud-=2;NFSU2_TR(0x689540);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689542:{NFSU2_TR(0x689542);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689548:L689548:{bud-=5;NFSU2_TR(0x689548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68954e:{NFSU2_TR(0x68954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689554:{NFSU2_TR(0x689554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689557:{NFSU2_TR(0x689557);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B689559:{NFSU2_TR(0x689559);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_68955b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68955b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68955b:L68955b:{bud-=1;NFSU2_TR(0x68955b);
{u32 ea_=u32(r4(R+24)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68955e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68955e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68955e:L68955e:{bud-=4;NFSU2_TR(0x68955e);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B689560:{NFSU2_TR(0x689560);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689562:{NFSU2_TR(0x689562);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B689565:{NFSU2_TR(0x689565);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68956b(ARGS);}}
{[[clang::musttail]] return blk_689567(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689567(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689567:L689567:{bud-=2;NFSU2_TR(0x689567);
__asm__ volatile(".byte 0xd9,0xe8"::);
}
B689569:{NFSU2_TR(0x689569);
{[[clang::musttail]] return blk_68956d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68956b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68956b:L68956b:{bud-=1;NFSU2_TR(0x68956b);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_68956d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68956d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68956d:L68956d:{bud-=4;NFSU2_TR(0x68956d);
{u32 ea_=u32(r4(R+8)+r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689570:{NFSU2_TR(0x689570);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B689573:{NFSU2_TR(0x689573);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689574:{NFSU2_TR(0x689574);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68955bu);}[[clang::musttail]] return blk_68955b(ARGS);}}
}
B689576:L689576:{bud-=1;NFSU2_TR(0x689576);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68957b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68957b:L68957b:{bud-=2;NFSU2_TR(0x68957b);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68957d:{NFSU2_TR(0x68957d);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689583:L689583:{bud-=5;NFSU2_TR(0x689583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689589:{NFSU2_TR(0x689589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68958f:{NFSU2_TR(0x68958f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689592:{NFSU2_TR(0x689592);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B689594:{NFSU2_TR(0x689594);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_689596(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689596(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689596:L689596:{bud-=1;NFSU2_TR(0x689596);
{u32 ea_=u32(r4(R+24)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689599(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689599(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689599:L689599:{bud-=4;NFSU2_TR(0x689599);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B68959b:{NFSU2_TR(0x68959b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B68959d:{NFSU2_TR(0x68959d);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6895a0:{NFSU2_TR(0x6895a0);
if(r1(F+2)){{[[clang::musttail]] return blk_6895a6(ARGS);}}
{[[clang::musttail]] return blk_6895a2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895a2:L6895a2:{bud-=2;NFSU2_TR(0x6895a2);
__asm__ volatile(".byte 0xd9,0xe8"::);
}
B6895a4:{NFSU2_TR(0x6895a4);
{[[clang::musttail]] return blk_6895a8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895a6:L6895a6:{bud-=1;NFSU2_TR(0x6895a6);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_6895a8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895a8:L6895a8:{bud-=4;NFSU2_TR(0x6895a8);
{u32 ea_=u32(r4(R+8)+r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6895ab:{NFSU2_TR(0x6895ab);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B6895ae:{NFSU2_TR(0x6895ae);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6895af:{NFSU2_TR(0x6895af);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689596u);}[[clang::musttail]] return blk_689596(ARGS);}}
}
B6895b1:L6895b1:{bud-=1;NFSU2_TR(0x6895b1);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895b6:L6895b6:{bud-=2;NFSU2_TR(0x6895b6);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6895b8:{NFSU2_TR(0x6895b8);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6895be:L6895be:{bud-=5;NFSU2_TR(0x6895be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6895c4:{NFSU2_TR(0x6895c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6895ca:{NFSU2_TR(0x6895ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6895cd:{NFSU2_TR(0x6895cd);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B6895cf:{NFSU2_TR(0x6895cf);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_6895d1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895d1:L6895d1:{bud-=1;NFSU2_TR(0x6895d1);
{u32 ea_=u32(r4(R+24)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6895d4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895d4:L6895d4:{bud-=4;NFSU2_TR(0x6895d4);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B6895d6:{NFSU2_TR(0x6895d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B6895d8:{NFSU2_TR(0x6895d8);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6895db:{NFSU2_TR(0x6895db);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6895e2(ARGS);}}
{[[clang::musttail]] return blk_6895dd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895dd:L6895dd:{bud-=2;NFSU2_TR(0x6895dd);
{u32 ea_=u32(r4(R+24)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B6895e0:{NFSU2_TR(0x6895e0);
{[[clang::musttail]] return blk_6895e4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895e2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895e2:L6895e2:{bud-=1;NFSU2_TR(0x6895e2);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6895e4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895e4:L6895e4:{bud-=4;NFSU2_TR(0x6895e4);
{u32 ea_=u32(r4(R+8)+r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6895e7:{NFSU2_TR(0x6895e7);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B6895ea:{NFSU2_TR(0x6895ea);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B6895eb:{NFSU2_TR(0x6895eb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6895d1u);}[[clang::musttail]] return blk_6895d1(ARGS);}}
}
B6895ed:L6895ed:{bud-=1;NFSU2_TR(0x6895ed);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6895f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6895f2:L6895f2:{bud-=2;NFSU2_TR(0x6895f2);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6895f4:{NFSU2_TR(0x6895f4);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6895fa:L6895fa:{bud-=5;NFSU2_TR(0x6895fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689600:{NFSU2_TR(0x689600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689606:{NFSU2_TR(0x689606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689609:{NFSU2_TR(0x689609);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B68960b:{NFSU2_TR(0x68960b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_68960d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68960d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68960d:L68960d:{bud-=1;NFSU2_TR(0x68960d);
{u32 ea_=u32(r4(R+24)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689610(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689610(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689610:L689610:{bud-=4;NFSU2_TR(0x689610);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B689612:{NFSU2_TR(0x689612);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689614:{NFSU2_TR(0x689614);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B689617:{NFSU2_TR(0x689617);
if(r1(F+2)){{[[clang::musttail]] return blk_68961e(ARGS);}}
{[[clang::musttail]] return blk_689619(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689619(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689619:L689619:{bud-=2;NFSU2_TR(0x689619);
{u32 ea_=u32(r4(R+24)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B68961c:{NFSU2_TR(0x68961c);
{[[clang::musttail]] return blk_689620(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68961e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68961e:L68961e:{bud-=1;NFSU2_TR(0x68961e);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689620(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689620(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689620:L689620:{bud-=4;NFSU2_TR(0x689620);
{u32 ea_=u32(r4(R+8)+r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689623:{NFSU2_TR(0x689623);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B689626:{NFSU2_TR(0x689626);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689627:{NFSU2_TR(0x689627);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68960du);}[[clang::musttail]] return blk_68960d(ARGS);}}
}
B689629:L689629:{bud-=1;NFSU2_TR(0x689629);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68962e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68962e:L68962e:{bud-=2;NFSU2_TR(0x68962e);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689630:{NFSU2_TR(0x689630);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689636:L689636:{bud-=5;NFSU2_TR(0x689636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68963c:{NFSU2_TR(0x68963c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689642:{NFSU2_TR(0x689642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689645:{NFSU2_TR(0x689645);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
}
B689647:{NFSU2_TR(0x689647);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
{[[clang::musttail]] return blk_689649(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689649(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689649:L689649:{bud-=1;NFSU2_TR(0x689649);
{u32 ea_=u32(r4(G+0)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68964c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68964c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68964c:L68964c:{bud-=1;NFSU2_TR(0x68964c);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68964e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68964e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68964e:L68964e:{bud-=4;NFSU2_TR(0x68964e);
{u32 ea_=u32(r4(G+0)+r4(R+8));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689651:{NFSU2_TR(0x689651);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689654:{NFSU2_TR(0x689654);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689655:{NFSU2_TR(0x689655);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689649u);}[[clang::musttail]] return blk_689649(ARGS);}}
}
B689657:L689657:{bud-=1;NFSU2_TR(0x689657);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68965c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68965c:L68965c:{bud-=2;NFSU2_TR(0x68965c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x20600000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689661:{NFSU2_TR(0x689661);
if(r1(F+6)){{[[clang::musttail]] return blk_68974e(ARGS);}}
}
B689667:L689667:{bud-=2;NFSU2_TR(0x689667);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x30000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68966c:{NFSU2_TR(0x68966c);
if(r1(F+6)){{[[clang::musttail]] return blk_68970d(ARGS);}}
}
B689672:L689672:{bud-=2;NFSU2_TR(0x689672);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x50000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689677:{NFSU2_TR(0x689677);
if(r1(F+6)){{[[clang::musttail]] return blk_6896df(ARGS);}}
}
B689679:L689679:{bud-=2;NFSU2_TR(0x689679);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x50200000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68967e:{NFSU2_TR(0x68967e);
if(r1(F+6)){{[[clang::musttail]] return blk_6896ca(ARGS);}}
}
B689680:L689680:{bud-=2;NFSU2_TR(0x689680);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x70e00000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689685:{NFSU2_TR(0x689685);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B68968b:L68968b:{bud-=1;NFSU2_TR(0x68968b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_68968e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68968e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68968e:L68968e:{bud-=1;NFSU2_TR(0x68968e);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_689690(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689690(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689690:L689690:{bud-=7;NFSU2_TR(0x689690);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689692:{NFSU2_TR(0x689692);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689694:{NFSU2_TR(0x689694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689697:{NFSU2_TR(0x689697);
w4(G+0,shr<u32>(r4(G+0),u64(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B689699:{NFSU2_TR(0x689699);
__builtin_memmove((R+24),(G+0),4);
}
B68969b:{NFSU2_TR(0x68969b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68969c:{NFSU2_TR(0x68969c);
if(r1(F+6)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6896a2:L6896a2:{bud-=2;NFSU2_TR(0x6896a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6896a5:{NFSU2_TR(0x6896a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
{[[clang::musttail]] return blk_6896ac(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896ac:L6896ac:{bud-=2;NFSU2_TR(0x6896ac);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6896b3:{NFSU2_TR(0x6896b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_6896b5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896b5:L6896b5:{bud-=1;NFSU2_TR(0x6896b5);
{u32 ea_=u32(r4(R+28));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6896b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896b7:L6896b7:{bud-=4;NFSU2_TR(0x6896b7);
{u32 ea_=u32(r4(R+12));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_),"m"(m_));}
}
B6896b9:{NFSU2_TR(0x6896b9);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6896ba:{NFSU2_TR(0x6896ba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6896bd:{NFSU2_TR(0x6896bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
{__builtin_memcpy(R+512,F+0,1);[[clang::musttail]] return blk_6896bf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896bf:L6896bf:{bud-=1;NFSU2_TR(0x6896bf);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6896c1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896c1:L6896c1:{bud-=2;NFSU2_TR(0x6896c1);
{u32 ea_=u32(r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6896c3:{NFSU2_TR(0x6896c3);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6896acu);}[[clang::musttail]] return blk_6896ac(ARGS);}}
}
B6896c5:L6896c5:{bud-=1;NFSU2_TR(0x6896c5);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896ca:L6896ca:{bud-=5;NFSU2_TR(0x6896ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6896cd:{NFSU2_TR(0x6896cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6896d3:{NFSU2_TR(0x6896d3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6896d4:{NFSU2_TR(0x6896d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6896d5:{NFSU2_TR(0x6896d5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6896daull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x688ce2u);}[[clang::musttail]] return blk_688ce2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896da:L6896da:{bud-=1;NFSU2_TR(0x6896da);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896df:L6896df:{bud-=1;NFSU2_TR(0x6896df);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_6896e1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896e1:L6896e1:{bud-=1;NFSU2_TR(0x6896e1);
__asm__ volatile(".byte 0xd9,0xee"::);
{[[clang::musttail]] return blk_6896e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896e3:L6896e3:{bud-=2;NFSU2_TR(0x6896e3);
{u32 ea_=u32(r4(R+8));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B6896e5:{NFSU2_TR(0x6896e5);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B6896eb:L6896eb:{bud-=4;NFSU2_TR(0x6896eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6896f1:{NFSU2_TR(0x6896f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6896f7:{NFSU2_TR(0x6896f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6896fa:{NFSU2_TR(0x6896fa);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
{[[clang::musttail]] return blk_6896fc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896fc:L6896fc:{bud-=1;NFSU2_TR(0x6896fc);
{u32 ea_=u32(r4(G+0)+r4(R+8));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6896ff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6896ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6896ff:L6896ff:{bud-=3;NFSU2_TR(0x6896ff);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_),"m"(m_));}
}
B689701:{NFSU2_TR(0x689701);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689704:{NFSU2_TR(0x689704);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_689705(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689705(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689705:L689705:{bud-=1;NFSU2_TR(0x689705);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689707(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689707(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689707:L689707:{bud-=2;NFSU2_TR(0x689707);
{u32 ea_=u32(r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689709:{NFSU2_TR(0x689709);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6896fcu);}[[clang::musttail]] return blk_6896fc(ARGS);}}
}
B68970b:L68970b:{bud-=1;NFSU2_TR(0x68970b);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68970d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68970d:L68970d:{bud-=2;NFSU2_TR(0x68970d);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68970f:{NFSU2_TR(0x68970f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689711:L689711:{bud-=7;NFSU2_TR(0x689711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689717:{NFSU2_TR(0x689717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68971d:{NFSU2_TR(0x68971d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B689723:{NFSU2_TR(0x689723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689726:{NFSU2_TR(0x689726);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B689728:{NFSU2_TR(0x689728);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B68972a:{NFSU2_TR(0x68972a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
{[[clang::musttail]] return blk_68972c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68972c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68972c:L68972c:{bud-=1;NFSU2_TR(0x68972c);
{u32 ea_=u32(r4(G+4)+r4(R+24));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68972f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68972f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68972f:L68972f:{bud-=4;NFSU2_TR(0x68972f);
{u32 ea_=u32(u32(7892576u));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_),"m"(m_));}
}
B689735:{NFSU2_TR(0x689735);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689737:{NFSU2_TR(0x689737);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B68973a:{NFSU2_TR(0x68973a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689740(ARGS);}}
{[[clang::musttail]] return blk_68973c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68973c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68973c:L68973c:{bud-=2;NFSU2_TR(0x68973c);
{u32 ea_=u32(r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
}
B68973e:{NFSU2_TR(0x68973e);
{[[clang::musttail]] return blk_689743(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689740(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689740:L689740:{bud-=1;NFSU2_TR(0x689740);
{u32 ea_=u32(r4(G+4)+r4(R+12));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689743(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689743(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689743:L689743:{bud-=4;NFSU2_TR(0x689743);
{u32 ea_=u32(r4(R+8)+r4(G+4));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B689746:{NFSU2_TR(0x689746);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B689749:{NFSU2_TR(0x689749);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B68974a:{NFSU2_TR(0x68974a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68972cu);}[[clang::musttail]] return blk_68972c(ARGS);}}
}
B68974c:L68974c:{bud-=1;NFSU2_TR(0x68974c);
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68974e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68974e:L68974e:{bud-=2;NFSU2_TR(0x68974e);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B689750:{NFSU2_TR(0x689750);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689775(ARGS);}}
}
B689752:L689752:{bud-=5;NFSU2_TR(0x689752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689758:{NFSU2_TR(0x689758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68975e:{NFSU2_TR(0x68975e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689761:{NFSU2_TR(0x689761);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
}
B689763:{NFSU2_TR(0x689763);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
{[[clang::musttail]] return blk_689765(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689765(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689765:L689765:{bud-=1;NFSU2_TR(0x689765);
{u32 ea_=u32(r4(G+0)+r4(G+4));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689768(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689768(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689768:L689768:{bud-=1;NFSU2_TR(0x689768);
{u32 ea_=u32(r4(G+0));const XM<8>& m_=*static_cast<const XM<8>*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68976a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68976a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68976a:L68976a:{bud-=1;NFSU2_TR(0x68976a);
__asm__ volatile(".byte 0xd9,0xf3"::);
{[[clang::musttail]] return blk_68976c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68976c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68976c:L68976c:{bud-=4;NFSU2_TR(0x68976c);
{u32 ea_=u32(r4(R+8)+r4(G+0));u64& m_=*static_cast<u64*>(gp(ea_));__asm__ volatile(".byte 0xdd,0x18":"=m"(m_):"a"(ea_));}
}
B68976f:{NFSU2_TR(0x68976f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B689772:{NFSU2_TR(0x689772);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B689773:{NFSU2_TR(0x689773);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x689765u);}[[clang::musttail]] return blk_689765(ARGS);}}
{[[clang::musttail]] return blk_689775(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689775(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689775:L689775:{bud-=4;NFSU2_TR(0x689775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B689778:{NFSU2_TR(0x689778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68977b:{NFSU2_TR(0x68977b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+8))));
}
B68977e:{NFSU2_TR(0x68977e);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x688ea8u);}[[clang::musttail]] return blk_688ea8(ARGS);}}
}
B689784:L689784:{bud-=3;NFSU2_TR(0x689784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B689785:{NFSU2_TR(0x689785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B689786:{NFSU2_TR(0x689786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_689787(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689787(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689787:L689787:{bud-=3;NFSU2_TR(0x689787);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B689789:{NFSU2_TR(0x689789);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68978a:{NFSU2_TR(0x68978a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x663baau)[[clang::musttail]] return blk_663baa(ARGS);if(t__==0x663d47u)[[clang::musttail]] return blk_663d47(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68978d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68978d:L68978d:{bud-=37;NFSU2_TR(0x68978d);
__builtin_memmove((R+28),(R+28),4);
}
B68978f:{NFSU2_TR(0x68978f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689790:{NFSU2_TR(0x689790);
__builtin_memmove((R+20),(G+16),4);
}
B689792:{NFSU2_TR(0x689792);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689793:{NFSU2_TR(0x689793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689796:{NFSU2_TR(0x689796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B689799:{NFSU2_TR(0x689799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68979c:{NFSU2_TR(0x68979c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B68979f:{NFSU2_TR(0x68979f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B6897a3:{NFSU2_TR(0x6897a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B6897a6:{NFSU2_TR(0x6897a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B6897aa:{NFSU2_TR(0x6897aa);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B6897ad:{NFSU2_TR(0x6897ad);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897b1:{NFSU2_TR(0x6897b1);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6897b4:{NFSU2_TR(0x6897b4);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B6897b7:{NFSU2_TR(0x6897b7);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897bb:{NFSU2_TR(0x6897bb);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897bf:{NFSU2_TR(0x6897bf);
u8 U[16];
__builtin_memmove((U+0),gp(0x7baab0),16);
w4(R+4736,u32(u32(r4(R+4736))^u32(r4(U+0))));
w4(R+4740,u32(u32(r4(R+4740))^u32(r4(U+4))));
w4(R+4744,u32(u32(r4(R+4744))^u32(r4(U+8))));
w4(R+4748,u32(u32(r4(R+4748))^u32(r4(U+12))));
}
B6897c6:{NFSU2_TR(0x6897c6);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6897c9:{NFSU2_TR(0x6897c9);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4748))));
}
B6897cc:{NFSU2_TR(0x6897cc);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B6897cf:{NFSU2_TR(0x6897cf);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897d3:{NFSU2_TR(0x6897d3);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897d7:{NFSU2_TR(0x6897d7);
u8 U[16];
__builtin_memmove((U+0),gp(0x7baaa0),16);
w4(R+4800,u32(u32(r4(R+4800))^u32(r4(U+0))));
w4(R+4804,u32(u32(r4(R+4804))^u32(r4(U+4))));
w4(R+4808,u32(u32(r4(R+4808))^u32(r4(U+8))));
w4(R+4812,u32(u32(r4(R+4812))^u32(r4(U+12))));
}
B6897de:{NFSU2_TR(0x6897de);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6897e1:{NFSU2_TR(0x6897e1);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4812))));
}
B6897e4:{NFSU2_TR(0x6897e4);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897e8:{NFSU2_TR(0x6897e8);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897ec:{NFSU2_TR(0x6897ec);
u8 U[16];
__builtin_memmove((U+0),gp(0x7baa90),16);
w4(R+4736,u32(u32(r4(R+4736))^u32(r4(U+0))));
w4(R+4740,u32(u32(r4(R+4740))^u32(r4(U+4))));
w4(R+4744,u32(u32(r4(R+4744))^u32(r4(U+8))));
w4(R+4748,u32(u32(r4(R+4748))^u32(r4(U+12))));
}
B6897f3:{NFSU2_TR(0x6897f3);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6897f6:{NFSU2_TR(0x6897f6);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4748))));
}
B6897f9:{NFSU2_TR(0x6897f9);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6897fc:{NFSU2_TR(0x6897fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4680),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689800:{NFSU2_TR(0x689800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689803:{NFSU2_TR(0x689803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689804:{NFSU2_TR(0x689804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689805:{NFSU2_TR(0x689805);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689808(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689808:L689808:{bud-=39;NFSU2_TR(0x689808);
__builtin_memmove((R+28),(R+28),4);
}
B68980a:{NFSU2_TR(0x68980a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68980b:{NFSU2_TR(0x68980b);
__builtin_memmove((R+20),(G+16),4);
}
B68980d:{NFSU2_TR(0x68980d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689810:{NFSU2_TR(0x689810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B689814:{NFSU2_TR(0x689814);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689819:{NFSU2_TR(0x689819);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68981e:{NFSU2_TR(0x68981e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B689823:{NFSU2_TR(0x689823);
__builtin_memmove((R+4864),(R+4608),4);
}
B689827:{NFSU2_TR(0x689827);
__builtin_memmove((R+4928),(R+4672),4);
}
B68982b:{NFSU2_TR(0x68982b);
__builtin_memmove((R+4992),(R+4736),4);
}
B68982f:{NFSU2_TR(0x68982f);
__builtin_memmove((R+5056),(R+4800),4);
}
B689833:{NFSU2_TR(0x689833);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
}
B689837:{NFSU2_TR(0x689837);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
}
B68983b:{NFSU2_TR(0x68983b);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4736))));
}
B68983f:{NFSU2_TR(0x68983f);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
}
B689843:{NFSU2_TR(0x689843);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
}
B689847:{NFSU2_TR(0x689847);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
}
B68984b:{NFSU2_TR(0x68984b);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4992))));
}
B68984f:{NFSU2_TR(0x68984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689852:{NFSU2_TR(0x689852);
{wv<16>((R+4928),uo::rsqrtss<16>(rv<16>((R+4928)),rv<16>((R+4864))));}
}
B689856:{NFSU2_TR(0x689856);
__builtin_memmove((R+4992),(R+4928),4);
}
B68985a:{NFSU2_TR(0x68985a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4928))));
}
B68985e:{NFSU2_TR(0x68985e);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4928))));
}
B689862:{NFSU2_TR(0x689862);
__builtin_memmove((R+4928),gp(0x80aac0),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68986a:{NFSU2_TR(0x68986a);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4864))));
}
B68986e:{NFSU2_TR(0x68986e);
w4(R+4928,b32(f32(r4(R+4928))*f32(m4(0x80aab0))));
}
B689876:{NFSU2_TR(0x689876);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4992))));
}
B68987a:{NFSU2_TR(0x68987a);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4928))));
}
B68987e:{NFSU2_TR(0x68987e);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
}
B689882:{NFSU2_TR(0x689882);
u8 U[4];
__builtin_memmove((U+0),(R+4608),4);
s4(u32(r4(G+0)),r4(U+0));
}
B689886:{NFSU2_TR(0x689886);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4928))));
}
B68988a:{NFSU2_TR(0x68988a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68988f:{NFSU2_TR(0x68988f);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4928))));
}
B689893:{NFSU2_TR(0x689893);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4736),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689898:{NFSU2_TR(0x689898);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68989d:{NFSU2_TR(0x68989d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6898a0:{NFSU2_TR(0x6898a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6898a1:{NFSU2_TR(0x6898a1);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6898a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6898a4:L6898a4:{bud-=43;NFSU2_TR(0x6898a4);
__builtin_memmove((R+28),(R+28),4);
}
B6898a6:{NFSU2_TR(0x6898a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6898a7:{NFSU2_TR(0x6898a7);
__builtin_memmove((R+12),(G+16),4);
}
B6898a9:{NFSU2_TR(0x6898a9);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6898aa:{NFSU2_TR(0x6898aa);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B6898ad:{NFSU2_TR(0x6898ad);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B6898b0:{NFSU2_TR(0x6898b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6898b1:{NFSU2_TR(0x6898b1);
__builtin_memmove((R+20),(G+16),4);
}
B6898b3:{NFSU2_TR(0x6898b3);
u8 U[6];
w1(F+0,u8((r4(G+16))<(u32(0x10ull))));
w1(F+11,sborrow<u32>(r4(G+16),u32(0x10ull)));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6898b6:{NFSU2_TR(0x6898b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6898b9:{NFSU2_TR(0x6898b9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6898bd:{NFSU2_TR(0x6898bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B6898c0:{NFSU2_TR(0x6898c0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B6898c4:{NFSU2_TR(0x6898c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6898c7:{NFSU2_TR(0x6898c7);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B6898ca:{NFSU2_TR(0x6898ca);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B6898cd:{NFSU2_TR(0x6898cd);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6898d0:{NFSU2_TR(0x6898d0);
__builtin_memmove((R+4736),(R+4616),8);
}
B6898d3:{NFSU2_TR(0x6898d3);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B6898d6:{NFSU2_TR(0x6898d6);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6898d9:{NFSU2_TR(0x6898d9);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6898dd:{NFSU2_TR(0x6898dd);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B6898e1:{NFSU2_TR(0x6898e1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6898e5:{NFSU2_TR(0x6898e5);
{wv<16>((R+4736),uo::rcpss<16>(rv<16>((R+4736)),rv<16>((R+4608))));}
}
B6898e9:{NFSU2_TR(0x6898e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4736),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6898ee:{NFSU2_TR(0x6898ee);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6898f2:{NFSU2_TR(0x6898f2);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B6898f5:{NFSU2_TR(0x6898f5);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
}
B6898f9:{NFSU2_TR(0x6898f9);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B6898fc:{NFSU2_TR(0x6898fc);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B689900:{NFSU2_TR(0x689900);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
}
B689904:{NFSU2_TR(0x689904);
w4(R+4608,b32(f32(r4(R+4608))-f32(r4(R+4800))));
}
B689908:{NFSU2_TR(0x689908);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68990b:{NFSU2_TR(0x68990b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68990f:{NFSU2_TR(0x68990f);
u8 U[16];
__builtin_memmove((U+0),gp(0x80aad0),16);
__builtin_memmove((R+4608),(U+0),4);
__builtin_memmove((R+4612),(U+4),4);
__builtin_memmove((R+4616),(U+8),4);
__builtin_memmove((R+4620),(U+12),4);
}
B689916:{NFSU2_TR(0x689916);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B689919:{NFSU2_TR(0x689919);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4748))));
}
B68991c:{NFSU2_TR(0x68991c);
u8 U[16];
__builtin_memmove((U+0),(R+4672),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B68991f:{NFSU2_TR(0x68991f);
__builtin_memmove((G+16),(R+20),4);
}
B689921:{NFSU2_TR(0x689921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689922:{NFSU2_TR(0x689922);
__builtin_memmove((G+16),(R+12),4);
}
B689924:{NFSU2_TR(0x689924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689925:{NFSU2_TR(0x689925);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689928(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689928:L689928:{bud-=28;NFSU2_TR(0x689928);
__builtin_memmove((R+28),(R+28),4);
}
B68992a:{NFSU2_TR(0x68992a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68992b:{NFSU2_TR(0x68992b);
__builtin_memmove((R+12),(G+16),4);
}
B68992d:{NFSU2_TR(0x68992d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68992e:{NFSU2_TR(0x68992e);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B689931:{NFSU2_TR(0x689931);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B689934:{NFSU2_TR(0x689934);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689935:{NFSU2_TR(0x689935);
__builtin_memmove((R+20),(G+16),4);
}
B689937:{NFSU2_TR(0x689937);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x20ull))));
}
B68993a:{NFSU2_TR(0x68993a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68993f:{NFSU2_TR(0x68993f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689944:{NFSU2_TR(0x689944);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689949:{NFSU2_TR(0x689949);
w4(G+0,u32(0x7bab30ull));
}
B68994e:{NFSU2_TR(0x68994e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B689951:{NFSU2_TR(0x689951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689956:{NFSU2_TR(0x689956);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68995b:{NFSU2_TR(0x68995b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689960:{NFSU2_TR(0x689960);
__builtin_memmove((R+4672),gp(0x7d7d3c),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689968:{NFSU2_TR(0x689968);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B68996b:{NFSU2_TR(0x68996b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68996c:{NFSU2_TR(0x68996c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B68996f:{NFSU2_TR(0x68996f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689974:{NFSU2_TR(0x689974);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B689978:{NFSU2_TR(0x689978);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689979:{NFSU2_TR(0x689979);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B68997c:{NFSU2_TR(0x68997c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68997d:{NFSU2_TR(0x68997d);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689981:{NFSU2_TR(0x689981);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x689986ull));
{[[clang::musttail]] return blk_6d395f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689986(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689986:L689986:{bud-=30;NFSU2_TR(0x689986);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68998a:{NFSU2_TR(0x68998a);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68998d:{NFSU2_TR(0x68998d);
u8 U[100];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+64),(U+4),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+8),gp(u32(r4(U+96))),4);
__builtin_memmove((U+68),(U+8),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((U+12),gp(u32(r4(U+96))),4);
__builtin_memmove((U+72),(U+12),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((U+16),gp(u32(r4(U+96))),4);
__builtin_memmove((U+76),(U+16),4);
__builtin_memmove((U+80),(R+4672),4);
__builtin_memmove((U+84),(R+4676),4);
__builtin_memmove((U+88),(R+4680),4);
__builtin_memmove((U+92),(R+4684),4);
w1(U+20,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4672,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4676,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4680,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4684,u32(u32(r4(U+51))+u32(r4(U+60))));
}
B689992:{NFSU2_TR(0x689992);
u8 U[100];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+64),(U+4),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+8),gp(u32(r4(U+96))),4);
__builtin_memmove((U+68),(U+8),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((U+12),gp(u32(r4(U+96))),4);
__builtin_memmove((U+72),(U+12),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((U+16),gp(u32(r4(U+96))),4);
__builtin_memmove((U+76),(U+16),4);
__builtin_memmove((U+80),(R+4608),4);
__builtin_memmove((U+84),(R+4612),4);
__builtin_memmove((U+88),(R+4616),4);
__builtin_memmove((U+92),(R+4620),4);
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4608,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4612,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4616,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4620,u32(u32(r4(U+51))+u32(r4(U+60))));
}
B689997:{NFSU2_TR(0x689997);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68999a:{NFSU2_TR(0x68999a);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68999e:{NFSU2_TR(0x68999e);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B6899a1:{NFSU2_TR(0x6899a1);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899a5:{NFSU2_TR(0x6899a5);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899a9:{NFSU2_TR(0x6899a9);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B6899ac:{NFSU2_TR(0x6899ac);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899b0:{NFSU2_TR(0x6899b0);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B6899b3:{NFSU2_TR(0x6899b3);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4748))));
}
B6899b6:{NFSU2_TR(0x6899b6);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4812))));
}
B6899b9:{NFSU2_TR(0x6899b9);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899bd:{NFSU2_TR(0x6899bd);
w4(G+0,u32(0x7bab20ull));
}
B6899c2:{NFSU2_TR(0x6899c2);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4864),(U+16),4);
__builtin_memmove((R+4868),(U+20),4);
__builtin_memmove((R+4872),(U+24),4);
__builtin_memmove((R+4876),(U+28),4);
}
B6899c5:{NFSU2_TR(0x6899c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6899c8:{NFSU2_TR(0x6899c8);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B6899cb:{NFSU2_TR(0x6899cb);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899cf:{NFSU2_TR(0x6899cf);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4812))));
}
B6899d2:{NFSU2_TR(0x6899d2);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B6899d5:{NFSU2_TR(0x6899d5);
w4(R+4672,u32(u32(r4(R+4672))^u32(r4(R+4864))));
w4(R+4676,u32(u32(r4(R+4676))^u32(r4(R+4868))));
w4(R+4680,u32(u32(r4(R+4680))^u32(r4(R+4872))));
w4(R+4684,u32(u32(r4(R+4684))^u32(r4(R+4876))));
}
B6899d8:{NFSU2_TR(0x6899d8);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B6899db:{NFSU2_TR(0x6899db);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B6899de:{NFSU2_TR(0x6899de);
__builtin_memmove((G+16),(R+20),4);
}
B6899e0:{NFSU2_TR(0x6899e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6899e1:{NFSU2_TR(0x6899e1);
__builtin_memmove((G+16),(R+12),4);
}
B6899e3:{NFSU2_TR(0x6899e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6899e4:{NFSU2_TR(0x6899e4);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6899e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6899e7:L6899e7:{bud-=5;NFSU2_TR(0x6899e7);
__builtin_memmove((R+28),(R+28),4);
}
B6899e9:{NFSU2_TR(0x6899e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6899ea:{NFSU2_TR(0x6899ea);
__builtin_memmove((R+20),(G+16),4);
}
B6899ec:{NFSU2_TR(0x6899ec);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x14ull))));
}
B6899ef:{NFSU2_TR(0x6899ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_6899f2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6899f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6899f2:L6899f2:{bud-=1;NFSU2_TR(0x6899f2);
{u32 ea_=u32(r4(G+4)+u32(20u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6899f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6899f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6899f5:L6899f5:{bud-=1;NFSU2_TR(0x6899f5);
{u32 ea_=u32(r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6899f7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6899f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6899f7:L6899f7:{bud-=1;NFSU2_TR(0x6899f7);
{u32 ea_=u32(r4(G+4)+u32(40u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_6899fa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_6899fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6899fa:L6899fa:{bud-=4;NFSU2_TR(0x6899fa);
{u32 ea_=u32(u32(8224060u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_),"m"(m_));}
}
B689a00:{NFSU2_TR(0x689a00);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689a02:{NFSU2_TR(0x689a02);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B689a05:{NFSU2_TR(0x689a05);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_689a48(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689a07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a07(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a07:L689a07:{bud-=2;NFSU2_TR(0x689a07);
{u32 ea_=u32(u32(7881296u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
}
B689a0d:{NFSU2_TR(0x689a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_689a10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a10:L689a10:{bud-=1;NFSU2_TR(0x689a10);
__asm__ volatile(".byte 0xd9,0xfa"::);
{[[clang::musttail]] return blk_689a12(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a12(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a12:L689a12:{bud-=2;NFSU2_TR(0x689a12);
{u32 ea_=u32(u32(7881312u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_),"m"(m_));}
}
B689a18:{NFSU2_TR(0x689a18);
__asm__ volatile(".byte 0xd9,0xc0"::);
{[[clang::musttail]] return blk_689a1a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a1a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a1a:L689a1a:{bud-=1;NFSU2_TR(0x689a1a);
{u32 ea_=u32(r4(G+0)+u32(12u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_689a1d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a1d:L689a1d:{bud-=1;NFSU2_TR(0x689a1d);
{u32 ea_=u32(u32(7884072u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a23(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a23(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a23:L689a23:{bud-=1;NFSU2_TR(0x689a23);
{u32 ea_=u32(r4(G+4)+u32(24u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a26(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a26:L689a26:{bud-=1;NFSU2_TR(0x689a26);
{u32 ea_=u32(r4(G+4)+u32(36u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a29(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a29:L689a29:{bud-=1;NFSU2_TR(0x689a29);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_689a2b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a2b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a2b:L689a2b:{bud-=1;NFSU2_TR(0x689a2b);
{u32 ea_=u32(r4(G+0));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_689a2d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a2d:L689a2d:{bud-=1;NFSU2_TR(0x689a2d);
{u32 ea_=u32(r4(G+4)+u32(32u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a30(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a30:L689a30:{bud-=1;NFSU2_TR(0x689a30);
{u32 ea_=u32(r4(G+4)+u32(8u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a33(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a33:L689a33:{bud-=1;NFSU2_TR(0x689a33);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_689a35(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a35(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a35:L689a35:{bud-=1;NFSU2_TR(0x689a35);
{u32 ea_=u32(r4(G+0)+u32(4u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_689a38(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a38:L689a38:{bud-=1;NFSU2_TR(0x689a38);
{u32 ea_=u32(r4(G+4)+u32(4u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a3b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a3b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a3b:L689a3b:{bud-=1;NFSU2_TR(0x689a3b);
{u32 ea_=u32(r4(G+4)+u32(16u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689a3e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a3e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a3e:L689a3e:{bud-=1;NFSU2_TR(0x689a3e);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_689a40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a40:L689a40:{bud-=2;NFSU2_TR(0x689a40);
{u32 ea_=u32(r4(G+0)+u32(8u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B689a43:{NFSU2_TR(0x689a43);
{[[clang::musttail]] return blk_689b0d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a48:L689a48:{bud-=1;NFSU2_TR(0x689a48);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_689a4b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a4b:L689a4b:{bud-=1;NFSU2_TR(0x689a4b);
__asm__ volatile(".byte 0xdd,0xd8"::);
{[[clang::musttail]] return blk_689a4d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a4d:L689a4d:{bud-=3;NFSU2_TR(0x689a4d);
{u32 ea_=u32(r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B689a4f:{NFSU2_TR(0x689a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689a52:{NFSU2_TR(0x689a52);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_689a55(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a55(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a55:L689a55:{bud-=1;NFSU2_TR(0x689a55);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x10":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_689a58(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a58:L689a58:{bud-=9;NFSU2_TR(0x689a58);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_),"m"(m_));}
}
B689a5b:{NFSU2_TR(0x689a5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689a5c:{NFSU2_TR(0x689a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689a5f:{NFSU2_TR(0x689a5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689a60:{NFSU2_TR(0x689a60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B689a62:{NFSU2_TR(0x689a62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689a64:{NFSU2_TR(0x689a64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689a65:{NFSU2_TR(0x689a65);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B689a68:{NFSU2_TR(0x689a68);
if(r1(F+6)){{[[clang::musttail]] return blk_689a6b(ARGS);}}
}
B689a6a:L689a6a:{bud-=1;NFSU2_TR(0x689a6a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_689a6b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a6b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a6b:L689a6b:{bud-=2;NFSU2_TR(0x689a6b);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967276u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B689a6f:{NFSU2_TR(0x689a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_689a72(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a72:L689a72:{bud-=4;NFSU2_TR(0x689a72);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_),"m"(m_));}
}
B689a75:{NFSU2_TR(0x689a75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_):);w2(G+0,u16(ax_));}
}
B689a77:{NFSU2_TR(0x689a77);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B689a7a:{NFSU2_TR(0x689a7a);
if(r1(F+6)){{[[clang::musttail]] return blk_689a82(ARGS);}}
}
B689a7c:L689a7c:{bud-=3;NFSU2_TR(0x689a7c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689a7e:{NFSU2_TR(0x689a7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689a7f:{NFSU2_TR(0x689a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_689a82(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a82:L689a82:{bud-=3;NFSU2_TR(0x689a82);
__builtin_memmove((R+8),(R+12),4);
}
B689a84:{NFSU2_TR(0x689a84);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B689a87:{NFSU2_TR(0x689a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7bab40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
{[[clang::musttail]] return blk_689a8d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a8d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a8d:L689a8d:{bud-=3;NFSU2_TR(0x689a8d);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294967276u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B689a91:{NFSU2_TR(0x689a91);
__builtin_memmove((R+24),(R+28),4);
}
B689a93:{NFSU2_TR(0x689a93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
{[[clang::musttail]] return blk_689a96(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689a96(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689a96:L689a96:{bud-=4;NFSU2_TR(0x689a96);
{u32 ea_=u32(r4(R+24)+r4(R+20)+u32(4294967276u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
}
B689a9a:{NFSU2_TR(0x689a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bab40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689aa0:{NFSU2_TR(0x689aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689aa3:{NFSU2_TR(0x689aa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
{[[clang::musttail]] return blk_689aa6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689aa6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689aa6:L689aa6:{bud-=4;NFSU2_TR(0x689aa6);
{u32 ea_=u32(r4(G+0)+r4(R+20)+u32(4294967276u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
}
B689aaa:{NFSU2_TR(0x689aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689aad:{NFSU2_TR(0x689aad);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B689aaf:{NFSU2_TR(0x689aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_689ab2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689ab2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689ab2:L689ab2:{bud-=2;NFSU2_TR(0x689ab2);
{u32 ea_=u32(u32(7881296u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
}
B689ab8:{NFSU2_TR(0x689ab8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
{[[clang::musttail]] return blk_689aba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689aba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689aba:L689aba:{bud-=1;NFSU2_TR(0x689aba);
__asm__ volatile(".byte 0xd9,0xfa"::);
{[[clang::musttail]] return blk_689abc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689abc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689abc:L689abc:{bud-=2;NFSU2_TR(0x689abc);
{u32 ea_=u32(u32(7881312u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_),"m"(m_));}
}
B689ac2:{NFSU2_TR(0x689ac2);
__asm__ volatile(".byte 0xd9,0xc0"::);
{[[clang::musttail]] return blk_689ac4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689ac4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689ac4:L689ac4:{bud-=1;NFSU2_TR(0x689ac4);
{u32 ea_=u32(r4(G+0)+r4(R+8));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_689ac7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689ac7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689ac7:L689ac7:{bud-=1;NFSU2_TR(0x689ac7);
{u32 ea_=u32(u32(7884072u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689acd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689acd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689acd:L689acd:{bud-=1;NFSU2_TR(0x689acd);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689ad0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689ad0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689ad0:L689ad0:{bud-=6;NFSU2_TR(0x689ad0);
{u32 ea_=u32((r4(R+28)*4u)+r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
}
B689ad3:{NFSU2_TR(0x689ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B689ad6:{NFSU2_TR(0x689ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B689ad9:{NFSU2_TR(0x689ad9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B689adc:{NFSU2_TR(0x689adc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B689ade:{NFSU2_TR(0x689ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
{[[clang::musttail]] return blk_689ae1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689ae1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689ae1:L689ae1:{bud-=2;NFSU2_TR(0x689ae1);
__asm__ volatile(".byte 0xd8,0xc9"::);
}
B689ae3:{NFSU2_TR(0x689ae3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
{[[clang::musttail]] return blk_689ae5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689ae5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689ae5:L689ae5:{bud-=2;NFSU2_TR(0x689ae5);
{u32 ea_=u32(r4(G+0)+r4(R+24));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B689ae8:{NFSU2_TR(0x689ae8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
{[[clang::musttail]] return blk_689aea(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689aea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689aea:L689aea:{bud-=1;NFSU2_TR(0x689aea);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_689aed(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689aed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689aed:L689aed:{bud-=4;NFSU2_TR(0x689aed);
{u32 ea_=u32((r4(R+8)*4u)+r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
}
B689af0:{NFSU2_TR(0x689af0);
__builtin_memmove((R+8),(R+28),4);
}
B689af2:{NFSU2_TR(0x689af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B689af5:{NFSU2_TR(0x689af5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
{[[clang::musttail]] return blk_689af8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689af8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689af8:L689af8:{bud-=1;NFSU2_TR(0x689af8);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_689afa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689afa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689afa:L689afa:{bud-=2;NFSU2_TR(0x689afa);
{u32 ea_=u32(r4(G+0)+r4(R+8));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B689afd:{NFSU2_TR(0x689afd);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),r4(R+28)));
w1(F+11,scarry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689aff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689aff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689aff:L689aff:{bud-=2;NFSU2_TR(0x689aff);
{u32 ea_=u32((r4(R+24)*4u)+r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_),"m"(m_));}
}
B689b02:{NFSU2_TR(0x689b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_689b03(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689b03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689b03:L689b03:{bud-=3;NFSU2_TR(0x689b03);
{u32 ea_=u32((r4(R+8)*4u)+r4(G+4));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_),"m"(m_));}
}
B689b06:{NFSU2_TR(0x689b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B689b07:{NFSU2_TR(0x689b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_689b08(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689b08(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689b08:L689b08:{bud-=1;NFSU2_TR(0x689b08);
__asm__ volatile(".byte 0xd8,0xc9"::);
{[[clang::musttail]] return blk_689b0a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689b0a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689b0a:L689b0a:{bud-=1;NFSU2_TR(0x689b0a);
{u32 ea_=u32(r4(G+0)+u32(12u));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
{[[clang::musttail]] return blk_689b0d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689b0d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689b0d:L689b0d:{bud-=3;NFSU2_TR(0x689b0d);
__asm__ volatile(".byte 0xdd,0xd8"::);
}
B689b0f:{NFSU2_TR(0x689b0f);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B689b10:{NFSU2_TR(0x689b10);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689b13(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689b13:L689b13:{bud-=21;NFSU2_TR(0x689b13);
__builtin_memmove((R+28),(R+28),4);
}
B689b15:{NFSU2_TR(0x689b15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689b16:{NFSU2_TR(0x689b16);
__builtin_memmove((R+20),(G+16),4);
}
B689b18:{NFSU2_TR(0x689b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689b1b:{NFSU2_TR(0x689b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689b1e:{NFSU2_TR(0x689b1e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B689b21:{NFSU2_TR(0x689b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4736),(U+0),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689b25:{NFSU2_TR(0x689b25);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b29:{NFSU2_TR(0x689b29);
u8 U[36];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689b2d:{NFSU2_TR(0x689b2d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B689b30:{NFSU2_TR(0x689b30);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689b35:{NFSU2_TR(0x689b35);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b39:{NFSU2_TR(0x689b39);
u8 U[36];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B689b3d:{NFSU2_TR(0x689b3d);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B689b40:{NFSU2_TR(0x689b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689b43:{NFSU2_TR(0x689b43);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B689b46:{NFSU2_TR(0x689b46);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B689b49:{NFSU2_TR(0x689b49);
u8 U[16];
__builtin_memmove((U+0),(R+4736),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B689b4c:{NFSU2_TR(0x689b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689b4f:{NFSU2_TR(0x689b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689b50:{NFSU2_TR(0x689b50);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689b53(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689b53:L689b53:{bud-=29;NFSU2_TR(0x689b53);
__builtin_memmove((R+28),(R+28),4);
}
B689b55:{NFSU2_TR(0x689b55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689b56:{NFSU2_TR(0x689b56);
__builtin_memmove((R+20),(G+16),4);
}
B689b58:{NFSU2_TR(0x689b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689b5b:{NFSU2_TR(0x689b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689b5e:{NFSU2_TR(0x689b5e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B689b61:{NFSU2_TR(0x689b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4736),(U+0),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689b65:{NFSU2_TR(0x689b65);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b69:{NFSU2_TR(0x689b69);
u8 U[36];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689b6d:{NFSU2_TR(0x689b6d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B689b70:{NFSU2_TR(0x689b70);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689b75:{NFSU2_TR(0x689b75);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b79:{NFSU2_TR(0x689b79);
u8 U[36];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B689b7d:{NFSU2_TR(0x689b7d);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B689b80:{NFSU2_TR(0x689b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689b83:{NFSU2_TR(0x689b83);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B689b86:{NFSU2_TR(0x689b86);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B689b89:{NFSU2_TR(0x689b89);
{wv<16>((R+4608),uo::rcpps<16>(rv<16>((R+4608)),rv<16>((R+4736))));}
}
B689b8c:{NFSU2_TR(0x689b8c);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B689b8f:{NFSU2_TR(0x689b8f);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B689b92:{NFSU2_TR(0x689b92);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4608))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4612))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4616))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4620))));
}
B689b95:{NFSU2_TR(0x689b95);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4748))));
}
B689b98:{NFSU2_TR(0x689b98);
w4(R+4608,b32(f32(r4(R+4608))-f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))-f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))-f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))-f32(r4(R+4684))));
}
B689b9b:{NFSU2_TR(0x689b9b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b9f:{NFSU2_TR(0x689b9f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B689ba2:{NFSU2_TR(0x689ba2);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B689ba5:{NFSU2_TR(0x689ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689ba8:{NFSU2_TR(0x689ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689ba9:{NFSU2_TR(0x689ba9);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689bac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689bac:L689bac:{bud-=19;NFSU2_TR(0x689bac);
__builtin_memmove((R+28),(R+28),4);
}
B689bae:{NFSU2_TR(0x689bae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689baf:{NFSU2_TR(0x689baf);
__builtin_memmove((R+20),(G+16),4);
}
B689bb1:{NFSU2_TR(0x689bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689bb4:{NFSU2_TR(0x689bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689bb7:{NFSU2_TR(0x689bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4736),(U+0),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689bbb:{NFSU2_TR(0x689bbb);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B689bbe:{NFSU2_TR(0x689bbe);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689bc2:{NFSU2_TR(0x689bc2);
u8 U[36];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689bc6:{NFSU2_TR(0x689bc6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689bcb:{NFSU2_TR(0x689bcb);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B689bce:{NFSU2_TR(0x689bce);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689bd2:{NFSU2_TR(0x689bd2);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B689bd5:{NFSU2_TR(0x689bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689bd8:{NFSU2_TR(0x689bd8);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B689bdb:{NFSU2_TR(0x689bdb);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B689bde:{NFSU2_TR(0x689bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689be1:{NFSU2_TR(0x689be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689be2:{NFSU2_TR(0x689be2);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689be5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689be5:L689be5:{bud-=18;NFSU2_TR(0x689be5);
__builtin_memmove((R+28),(R+28),4);
}
B689be7:{NFSU2_TR(0x689be7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689be8:{NFSU2_TR(0x689be8);
__builtin_memmove((R+20),(G+16),4);
}
B689bea:{NFSU2_TR(0x689bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689bed:{NFSU2_TR(0x689bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B689bf1:{NFSU2_TR(0x689bf1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689bf6:{NFSU2_TR(0x689bf6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689bfb:{NFSU2_TR(0x689bfb);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B689bfe:{NFSU2_TR(0x689bfe);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B689c01:{NFSU2_TR(0x689c01);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B689c04:{NFSU2_TR(0x689c04);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B689c08:{NFSU2_TR(0x689c08);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4672))));
}
B689c0c:{NFSU2_TR(0x689c0c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4736))));
}
B689c10:{NFSU2_TR(0x689c10);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B689c14:{NFSU2_TR(0x689c14);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B689c18:{NFSU2_TR(0x689c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689c1b:{NFSU2_TR(0x689c1b);
u8 U[4];
w1(U+0,u8(std::isnan(f32(r4(R+4608)))));
w1(U+1,u8(std::isnan(f32(m4(0x7baae0)))));
w1(F+2,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4608))==f32(m4(0x7baae0))));
w1(F+6,u8(u32(r1(F+2))|u32(r1(U+2))));
w1(U+3,u8(f32(r4(R+4608))<f32(m4(0x7baae0))));
w1(F+0,u8(u32(r1(F+2))|u32(r1(U+3))));
w1(F+11,u8(0x0ull));
w1(F+4,u8(0x0ull));
w1(F+7,u8(0x0ull));
}
B689c22:{NFSU2_TR(0x689c22);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689c31(ARGS);}}
}
B689c24:L689c24:{bud-=5;NFSU2_TR(0x689c24);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B689c26:{NFSU2_TR(0x689c26);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B689c28:{NFSU2_TR(0x689c28);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c2b:{NFSU2_TR(0x689c2b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c2e:{NFSU2_TR(0x689c2e);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689c72(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689c31(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689c31:L689c31:{bud-=14;NFSU2_TR(0x689c31);
{wv<16>((R+4992),uo::rsqrtss<16>(rv<16>((R+4992)),rv<16>((R+4608))));}
}
B689c35:{NFSU2_TR(0x689c35);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689c38:{NFSU2_TR(0x689c38);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
}
B689c3c:{NFSU2_TR(0x689c3c);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B689c40:{NFSU2_TR(0x689c40);
__builtin_memmove((R+4672),gp(0x7baac0),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689c48:{NFSU2_TR(0x689c48);
w4(R+5056,b32(f32(r4(R+5056))*f32(m4(0x7baad0))));
}
B689c50:{NFSU2_TR(0x689c50);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(R+4992))));
}
B689c54:{NFSU2_TR(0x689c54);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+5056))));
}
B689c58:{NFSU2_TR(0x689c58);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
}
B689c5c:{NFSU2_TR(0x689c5c);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
}
B689c60:{NFSU2_TR(0x689c60);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
}
B689c64:{NFSU2_TR(0x689c64);
u8 U[4];
__builtin_memmove((U+0),(R+4800),4);
s4(u32(r4(G+4)),r4(U+0));
}
B689c68:{NFSU2_TR(0x689c68);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4864),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c6d:{NFSU2_TR(0x689c6d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4928),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_689c72(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689c72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689c72:L689c72:{bud-=3;NFSU2_TR(0x689c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689c75:{NFSU2_TR(0x689c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689c76:{NFSU2_TR(0x689c76);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689c79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689c79:L689c79:{bud-=18;NFSU2_TR(0x689c79);
__builtin_memmove((R+28),(R+28),4);
}
B689c7b:{NFSU2_TR(0x689c7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689c7c:{NFSU2_TR(0x689c7c);
__builtin_memmove((R+20),(G+16),4);
}
B689c7e:{NFSU2_TR(0x689c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689c81:{NFSU2_TR(0x689c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B689c85:{NFSU2_TR(0x689c85);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689c8a:{NFSU2_TR(0x689c8a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689c8f:{NFSU2_TR(0x689c8f);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B689c92:{NFSU2_TR(0x689c92);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B689c95:{NFSU2_TR(0x689c95);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B689c98:{NFSU2_TR(0x689c98);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B689c9c:{NFSU2_TR(0x689c9c);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4672))));
}
B689ca0:{NFSU2_TR(0x689ca0);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4736))));
}
B689ca4:{NFSU2_TR(0x689ca4);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B689ca8:{NFSU2_TR(0x689ca8);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B689cac:{NFSU2_TR(0x689cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689caf:{NFSU2_TR(0x689caf);
u8 U[4];
w1(U+0,u8(std::isnan(f32(r4(R+4608)))));
w1(U+1,u8(std::isnan(f32(m4(0x7baae0)))));
w1(F+2,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4608))==f32(m4(0x7baae0))));
w1(F+6,u8(u32(r1(F+2))|u32(r1(U+2))));
w1(U+3,u8(f32(r4(R+4608))<f32(m4(0x7baae0))));
w1(F+0,u8(u32(r1(F+2))|u32(r1(U+3))));
w1(F+11,u8(0x0ull));
w1(F+4,u8(0x0ull));
w1(F+7,u8(0x0ull));
}
B689cb6:{NFSU2_TR(0x689cb6);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689cc9(ARGS);}}
}
B689cb8:L689cb8:{bud-=6;NFSU2_TR(0x689cb8);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B689cba:{NFSU2_TR(0x689cba);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B689cbc:{NFSU2_TR(0x689cbc);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689cbf:{NFSU2_TR(0x689cbf);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689cc2:{NFSU2_TR(0x689cc2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689cc5:{NFSU2_TR(0x689cc5);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689d14(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689cc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689cc9:L689cc9:{bud-=16;NFSU2_TR(0x689cc9);
{wv<16>((R+4992),uo::rsqrtss<16>(rv<16>((R+4992)),rv<16>((R+4608))));}
}
B689ccd:{NFSU2_TR(0x689ccd);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689cd0:{NFSU2_TR(0x689cd0);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
}
B689cd4:{NFSU2_TR(0x689cd4);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B689cd8:{NFSU2_TR(0x689cd8);
__builtin_memmove((R+4672),gp(0x7baac0),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689ce0:{NFSU2_TR(0x689ce0);
w4(R+5056,b32(f32(r4(R+5056))*f32(m4(0x7baad0))));
}
B689ce8:{NFSU2_TR(0x689ce8);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(R+4992))));
}
B689cec:{NFSU2_TR(0x689cec);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+5056))));
}
B689cf0:{NFSU2_TR(0x689cf0);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
}
B689cf4:{NFSU2_TR(0x689cf4);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
}
B689cf8:{NFSU2_TR(0x689cf8);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
}
B689cfc:{NFSU2_TR(0x689cfc);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+4))));
}
B689d01:{NFSU2_TR(0x689d01);
u8 U[4];
__builtin_memmove((U+0),(R+4800),4);
s4(u32(r4(G+4)),r4(U+0));
}
B689d05:{NFSU2_TR(0x689d05);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4864),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d0a:{NFSU2_TR(0x689d0a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4928),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d0f:{NFSU2_TR(0x689d0f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_689d14(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689d14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689d14:L689d14:{bud-=3;NFSU2_TR(0x689d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689d17:{NFSU2_TR(0x689d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689d18:{NFSU2_TR(0x689d18);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689d1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689d1b:L689d1b:{bud-=158;NFSU2_TR(0x689d1b);
__builtin_memmove((R+28),(R+28),4);
}
B689d1d:{NFSU2_TR(0x689d1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689d1e:{NFSU2_TR(0x689d1e);
__builtin_memmove((R+12),(G+16),4);
}
B689d20:{NFSU2_TR(0x689d20);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x8ull))));
}
B689d23:{NFSU2_TR(0x689d23);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B689d26:{NFSU2_TR(0x689d26);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B689d29:{NFSU2_TR(0x689d29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689d2a:{NFSU2_TR(0x689d2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689d2b:{NFSU2_TR(0x689d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B689d2e:{NFSU2_TR(0x689d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d32:{NFSU2_TR(0x689d32);
__builtin_memmove((R+20),(G+16),4);
}
B689d34:{NFSU2_TR(0x689d34);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x110ull))));
}
B689d3a:{NFSU2_TR(0x689d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689d3d:{NFSU2_TR(0x689d3d);
w4(R+4608,u32(u32(r4(R+4608))^u32(r4(R+4608))));
w4(R+4612,u32(u32(r4(R+4612))^u32(r4(R+4612))));
w4(R+4616,u32(u32(r4(R+4616))^u32(r4(R+4616))));
w4(R+4620,u32(u32(r4(R+4620))^u32(r4(R+4620))));
}
B689d40:{NFSU2_TR(0x689d40);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B689d44:{NFSU2_TR(0x689d44);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B689d48:{NFSU2_TR(0x689d48);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B689d4c:{NFSU2_TR(0x689d4c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4872),(U+4),8);
}
B689d50:{NFSU2_TR(0x689d50);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B689d54:{NFSU2_TR(0x689d54);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B689d57:{NFSU2_TR(0x689d57);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B689d5b:{NFSU2_TR(0x689d5b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B689d5f:{NFSU2_TR(0x689d5f);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B689d62:{NFSU2_TR(0x689d62);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d66:{NFSU2_TR(0x689d66);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d6a:{NFSU2_TR(0x689d6a);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B689d6d:{NFSU2_TR(0x689d6d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4940))));
}
B689d70:{NFSU2_TR(0x689d70);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d74:{NFSU2_TR(0x689d74);
__builtin_memmove((R+4992),(R+4736),4);
__builtin_memmove((R+4996),(R+4740),4);
__builtin_memmove((R+5000),(R+4744),4);
__builtin_memmove((R+5004),(R+4748),4);
}
B689d77:{NFSU2_TR(0x689d77);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d7b:{NFSU2_TR(0x689d7b);
__builtin_memmove((R+5056),(R+4800),4);
__builtin_memmove((R+5060),(R+4804),4);
__builtin_memmove((R+5064),(R+4808),4);
__builtin_memmove((R+5068),(R+4812),4);
}
B689d7e:{NFSU2_TR(0x689d7e);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d82:{NFSU2_TR(0x689d82);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d86:{NFSU2_TR(0x689d86);
__builtin_memmove((R+5056),(R+4800),4);
__builtin_memmove((R+5060),(R+4804),4);
__builtin_memmove((R+5064),(R+4808),4);
__builtin_memmove((R+5068),(R+4812),4);
}
B689d89:{NFSU2_TR(0x689d89);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4992))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4996))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5000))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5004))));
}
B689d8c:{NFSU2_TR(0x689d8c);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4676))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4680))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4684))));
}
B689d8f:{NFSU2_TR(0x689d8f);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689d96:{NFSU2_TR(0x689d96);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B689d99:{NFSU2_TR(0x689d99);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4736))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4740))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4744))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4748))));
}
B689d9c:{NFSU2_TR(0x689d9c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B689d9f:{NFSU2_TR(0x689d9f);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+5068))));
}
B689da2:{NFSU2_TR(0x689da2);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689da5:{NFSU2_TR(0x689da5);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B689da8:{NFSU2_TR(0x689da8);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689dac:{NFSU2_TR(0x689dac);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689db0:{NFSU2_TR(0x689db0);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689db7:{NFSU2_TR(0x689db7);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B689dba:{NFSU2_TR(0x689dba);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5068))));
}
B689dbd:{NFSU2_TR(0x689dbd);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B689dc0:{NFSU2_TR(0x689dc0);
__builtin_memmove((R+4800),(R+5056),4);
__builtin_memmove((R+4804),(R+5060),4);
__builtin_memmove((R+4808),(R+5064),4);
__builtin_memmove((R+4812),(R+5068),4);
}
B689dc3:{NFSU2_TR(0x689dc3);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689dc7:{NFSU2_TR(0x689dc7);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B689dca:{NFSU2_TR(0x689dca);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689dd1:{NFSU2_TR(0x689dd1);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B689dd4:{NFSU2_TR(0x689dd4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5068))));
}
B689dd7:{NFSU2_TR(0x689dd7);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4672))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4676))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4680))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4684))));
}
B689dda:{NFSU2_TR(0x689dda);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4812))));
}
B689ddd:{NFSU2_TR(0x689ddd);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B689de0:{NFSU2_TR(0x689de0);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689de4:{NFSU2_TR(0x689de4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4864))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4868))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4872))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4876))));
}
B689de7:{NFSU2_TR(0x689de7);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689deb:{NFSU2_TR(0x689deb);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689df2:{NFSU2_TR(0x689df2);
__builtin_memmove((R+5056),(R+4928),4);
__builtin_memmove((R+5060),(R+4932),4);
__builtin_memmove((R+5064),(R+4936),4);
__builtin_memmove((R+5068),(R+4940),4);
}
B689df5:{NFSU2_TR(0x689df5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B689df8:{NFSU2_TR(0x689df8);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B689dfb:{NFSU2_TR(0x689dfb);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B689dfe:{NFSU2_TR(0x689dfe);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e02:{NFSU2_TR(0x689e02);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B689e05:{NFSU2_TR(0x689e05);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e0c:{NFSU2_TR(0x689e0c);
__builtin_memmove((R+4864),(R+5056),4);
__builtin_memmove((R+4868),(R+5060),4);
__builtin_memmove((R+4872),(R+5064),4);
__builtin_memmove((R+4876),(R+5068),4);
}
B689e0f:{NFSU2_TR(0x689e0f);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4812))));
}
B689e12:{NFSU2_TR(0x689e12);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B689e15:{NFSU2_TR(0x689e15);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5068))));
}
B689e18:{NFSU2_TR(0x689e18);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+4748))));
}
B689e1b:{NFSU2_TR(0x689e1b);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B689e1e:{NFSU2_TR(0x689e1e);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B689e21:{NFSU2_TR(0x689e21);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e25:{NFSU2_TR(0x689e25);
__builtin_memmove((R+5056),(R+4672),4);
__builtin_memmove((R+5060),(R+4676),4);
__builtin_memmove((R+5064),(R+4680),4);
__builtin_memmove((R+5068),(R+4684),4);
}
B689e28:{NFSU2_TR(0x689e28);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e2c:{NFSU2_TR(0x689e2c);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e33:{NFSU2_TR(0x689e33);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+5056))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+5060))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+5064))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+5068))));
}
B689e36:{NFSU2_TR(0x689e36);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B689e39:{NFSU2_TR(0x689e39);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e3d:{NFSU2_TR(0x689e3d);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4928))));
}
B689e41:{NFSU2_TR(0x689e41);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e48:{NFSU2_TR(0x689e48);
__builtin_memmove((R+4928),(R+4992),4);
__builtin_memmove((R+4932),(R+4996),4);
__builtin_memmove((R+4936),(R+5000),4);
__builtin_memmove((R+4940),(R+5004),4);
}
B689e4b:{NFSU2_TR(0x689e4b);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B689e4e:{NFSU2_TR(0x689e4e);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e52:{NFSU2_TR(0x689e52);
__builtin_memmove((R+5056),(R+4928),4);
__builtin_memmove((R+5060),(R+4932),4);
__builtin_memmove((R+5064),(R+4936),4);
__builtin_memmove((R+5068),(R+4940),4);
}
B689e55:{NFSU2_TR(0x689e55);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e59:{NFSU2_TR(0x689e59);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e5d:{NFSU2_TR(0x689e5d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689e64:{NFSU2_TR(0x689e64);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e68:{NFSU2_TR(0x689e68);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B689e6b:{NFSU2_TR(0x689e6b);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B689e6e:{NFSU2_TR(0x689e6e);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B689e71:{NFSU2_TR(0x689e71);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B689e74:{NFSU2_TR(0x689e74);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4940))));
}
B689e77:{NFSU2_TR(0x689e77);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4992))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4996))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+5000))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+5004))));
}
B689e7a:{NFSU2_TR(0x689e7a);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B689e7d:{NFSU2_TR(0x689e7d);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4748))));
}
B689e80:{NFSU2_TR(0x689e80);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e84:{NFSU2_TR(0x689e84);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e88:{NFSU2_TR(0x689e88);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689e8c:{NFSU2_TR(0x689e8c);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e90:{NFSU2_TR(0x689e90);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689e93:{NFSU2_TR(0x689e93);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B689e96:{NFSU2_TR(0x689e96);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+4812))));
}
B689e99:{NFSU2_TR(0x689e99);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B689e9c:{NFSU2_TR(0x689e9c);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689ea0:{NFSU2_TR(0x689ea0);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689ea4:{NFSU2_TR(0x689ea4);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B689ea7:{NFSU2_TR(0x689ea7);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B689eaa:{NFSU2_TR(0x689eaa);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689eae:{NFSU2_TR(0x689eae);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B689eb1:{NFSU2_TR(0x689eb1);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B689eb4:{NFSU2_TR(0x689eb4);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4940))));
}
B689eb7:{NFSU2_TR(0x689eb7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689ebe:{NFSU2_TR(0x689ebe);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+5056),(U+20),4);
__builtin_memmove((R+5060),(U+24),4);
__builtin_memmove((R+5064),(U+28),4);
__builtin_memmove((R+5068),(U+32),4);
}
B689ec5:{NFSU2_TR(0x689ec5);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5068))));
}
B689ec8:{NFSU2_TR(0x689ec8);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689ecc:{NFSU2_TR(0x689ecc);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+5056),(U+20),4);
__builtin_memmove((R+5060),(U+24),4);
__builtin_memmove((R+5064),(U+28),4);
__builtin_memmove((R+5068),(U+32),4);
}
B689ed0:{NFSU2_TR(0x689ed0);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+5056))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+5060))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+5064))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+5068))));
}
B689ed3:{NFSU2_TR(0x689ed3);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5068))));
}
B689ed6:{NFSU2_TR(0x689ed6);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+4876))));
}
B689ed9:{NFSU2_TR(0x689ed9);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5068))));
}
B689edc:{NFSU2_TR(0x689edc);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4940))));
}
B689edf:{NFSU2_TR(0x689edf);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689ee3:{NFSU2_TR(0x689ee3);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B689ee6:{NFSU2_TR(0x689ee6);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689eea:{NFSU2_TR(0x689eea);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689eee:{NFSU2_TR(0x689eee);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689ef2:{NFSU2_TR(0x689ef2);
__builtin_memmove((R+4992),(R+4928),4);
__builtin_memmove((R+4996),(R+4932),4);
__builtin_memmove((R+5000),(R+4936),4);
__builtin_memmove((R+5004),(R+4940),4);
}
B689ef5:{NFSU2_TR(0x689ef5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B689ef8:{NFSU2_TR(0x689ef8);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B689efb:{NFSU2_TR(0x689efb);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B689efe:{NFSU2_TR(0x689efe);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B689f01:{NFSU2_TR(0x689f01);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B689f04:{NFSU2_TR(0x689f04);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4992))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4996))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+5000))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+5004))));
}
B689f07:{NFSU2_TR(0x689f07);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689f0e:{NFSU2_TR(0x689f0e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B689f15:{NFSU2_TR(0x689f15);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5004))));
}
B689f18:{NFSU2_TR(0x689f18);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689f1c:{NFSU2_TR(0x689f1c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B689f20:{NFSU2_TR(0x689f20);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B689f23:{NFSU2_TR(0x689f23);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4940))));
}
B689f26:{NFSU2_TR(0x689f26);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689f2a:{NFSU2_TR(0x689f2a);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B689f2d:{NFSU2_TR(0x689f2d);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+5068))));
}
B689f30:{NFSU2_TR(0x689f30);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689f34:{NFSU2_TR(0x689f34);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4940))));
}
B689f37:{NFSU2_TR(0x689f37);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B689f3a:{NFSU2_TR(0x689f3a);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4748))));
}
B689f3d:{NFSU2_TR(0x689f3d);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B689f40:{NFSU2_TR(0x689f40);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4992))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4996))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+5000))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+5004))));
}
B689f43:{NFSU2_TR(0x689f43);
u8 U[3];
w1(U+0,u8(std::isnan(f32(r4(R+4672)))));
w1(U+1,u8(std::isnan(f32(r4(R+4608)))));
w1(F+2,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4672))==f32(r4(R+4608))));
w1(F+6,u8(u32(r1(F+2))|u32(r1(U+2))));
w1(F+4,u8(0x0ull));
}
B689f46:{NFSU2_TR(0x689f46);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B689f4a:{NFSU2_TR(0x689f4a);
if(r1(F+6)){{__builtin_memcpy(R+516,F+4,1);[[clang::musttail]] return blk_689fb9(ARGS);}}
}
B689f4c:L689f4c:{bud-=3;NFSU2_TR(0x689f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689f4f:{NFSU2_TR(0x689f4f);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B689f51:{NFSU2_TR(0x689f51);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689f5a(ARGS);}}
}
B689f53:L689f53:{bud-=2;NFSU2_TR(0x689f53);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B689f56:{NFSU2_TR(0x689f56);
u8 U[4];
__builtin_memmove((U+0),(R+4608),4);
s4(u32(r4(G+0)),r4(U+0));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_689f5a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689f5a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689f5a:L689f5a:{bud-=28;NFSU2_TR(0x689f5a);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B689f5d:{NFSU2_TR(0x689f5d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B689f64:{NFSU2_TR(0x689f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689f67:{NFSU2_TR(0x689f67);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B689f6a:{NFSU2_TR(0x689f6a);
{wv<16>((R+4608),uo::rcpss<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B689f6e:{NFSU2_TR(0x689f6e);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B689f71:{NFSU2_TR(0x689f71);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B689f75:{NFSU2_TR(0x689f75);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
}
B689f79:{NFSU2_TR(0x689f79);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4928))));
}
B689f7d:{NFSU2_TR(0x689f7d);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4800))));
}
B689f81:{NFSU2_TR(0x689f81);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689f85:{NFSU2_TR(0x689f85);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B689f88:{NFSU2_TR(0x689f88);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B689f8b:{NFSU2_TR(0x689f8b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4680),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689f8f:{NFSU2_TR(0x689f8f);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4940))));
}
B689f92:{NFSU2_TR(0x689f92);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689f96:{NFSU2_TR(0x689f96);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4872),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689f9a:{NFSU2_TR(0x689f9a);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4940))));
}
B689f9d:{NFSU2_TR(0x689f9d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fa1:{NFSU2_TR(0x689fa1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+5000),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fa5:{NFSU2_TR(0x689fa5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B689fa8:{NFSU2_TR(0x689fa8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4928),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fac:{NFSU2_TR(0x689fac);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4936),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fb0:{NFSU2_TR(0x689fb0);
__builtin_memmove((G+16),(R+20),4);
}
B689fb2:{NFSU2_TR(0x689fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689fb3:{NFSU2_TR(0x689fb3);
__builtin_memmove((G+16),(R+12),4);
}
B689fb5:{NFSU2_TR(0x689fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689fb6:{NFSU2_TR(0x689fb6);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689fb9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689fb9:L689fb9:{bud-=6;NFSU2_TR(0x689fb9);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B689fbb:{NFSU2_TR(0x689fbb);
__builtin_memmove((G+16),(R+20),4);
}
B689fbd:{NFSU2_TR(0x689fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689fbe:{NFSU2_TR(0x689fbe);
__builtin_memmove((G+16),(R+12),4);
}
B689fc0:{NFSU2_TR(0x689fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689fc1:{NFSU2_TR(0x689fc1);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_689fc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B689fc7:L689fc7:{bud-=17;NFSU2_TR(0x689fc7);
__builtin_memmove((R+28),(R+28),4);
}
B689fc9:{NFSU2_TR(0x689fc9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B689fca:{NFSU2_TR(0x689fca);
__builtin_memmove((R+20),(G+16),4);
}
B689fcc:{NFSU2_TR(0x689fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B689fcf:{NFSU2_TR(0x689fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B689fd2:{NFSU2_TR(0x689fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689fd5:{NFSU2_TR(0x689fd5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B689fd8:{NFSU2_TR(0x689fd8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B689fdc:{NFSU2_TR(0x689fdc);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B689fe0:{NFSU2_TR(0x689fe0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B689fe4:{NFSU2_TR(0x689fe4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B689fe8:{NFSU2_TR(0x689fe8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B689fec:{NFSU2_TR(0x689fec);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B689ff0:{NFSU2_TR(0x689ff0);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B689ff4:{NFSU2_TR(0x689ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4864),(U+0),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B689ff8:{NFSU2_TR(0x689ff8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B689ffd:{NFSU2_TR(0x689ffd);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
{[[clang::musttail]] return blk_68a002(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 ent_689(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x689002:[[clang::musttail]] return blk_689002(c,a4,a0,a1,bud);
case 0x689008:[[clang::musttail]] return blk_689008(c,a4,a0,a1,bud);
case 0x68902b:[[clang::musttail]] return blk_68902b(c,a4,a0,a1,bud);
case 0x689037:[[clang::musttail]] return blk_689037(c,a4,a0,a1,bud);
case 0x689044:[[clang::musttail]] return blk_689044(c,a4,a0,a1,bud);
case 0x68904f:[[clang::musttail]] return blk_68904f(c,a4,a0,a1,bud);
case 0x689052:[[clang::musttail]] return blk_689052(c,a4,a0,a1,bud);
case 0x689057:[[clang::musttail]] return blk_689057(c,a4,a0,a1,bud);
case 0x68905a:[[clang::musttail]] return blk_68905a(c,a4,a0,a1,bud);
case 0x6890b8:[[clang::musttail]] return blk_6890b8(c,a4,a0,a1,bud);
case 0x6890be:[[clang::musttail]] return blk_6890be(c,a4,a0,a1,bud);
case 0x6890c0:[[clang::musttail]] return blk_6890c0(c,a4,a0,a1,bud);
case 0x6890ca:[[clang::musttail]] return blk_6890ca(c,a4,a0,a1,bud);
case 0x6890ce:[[clang::musttail]] return blk_6890ce(c,a4,a0,a1,bud);
case 0x6890d0:[[clang::musttail]] return blk_6890d0(c,a4,a0,a1,bud);
case 0x6890dd:[[clang::musttail]] return blk_6890dd(c,a4,a0,a1,bud);
case 0x6890f0:[[clang::musttail]] return blk_6890f0(c,a4,a0,a1,bud);
case 0x6890f6:[[clang::musttail]] return blk_6890f6(c,a4,a0,a1,bud);
case 0x6890f8:[[clang::musttail]] return blk_6890f8(c,a4,a0,a1,bud);
case 0x689102:[[clang::musttail]] return blk_689102(c,a4,a0,a1,bud);
case 0x689106:[[clang::musttail]] return blk_689106(c,a4,a0,a1,bud);
case 0x689108:[[clang::musttail]] return blk_689108(c,a4,a0,a1,bud);
case 0x689115:[[clang::musttail]] return blk_689115(c,a4,a0,a1,bud);
case 0x68912e:[[clang::musttail]] return blk_68912e(c,a4,a0,a1,bud);
case 0x689130:[[clang::musttail]] return blk_689130(c,a4,a0,a1,bud);
case 0x689139:[[clang::musttail]] return blk_689139(c,a4,a0,a1,bud);
case 0x68913d:[[clang::musttail]] return blk_68913d(c,a4,a0,a1,bud);
case 0x68913f:[[clang::musttail]] return blk_68913f(c,a4,a0,a1,bud);
case 0x68914d:[[clang::musttail]] return blk_68914d(c,a4,a0,a1,bud);
case 0x689166:[[clang::musttail]] return blk_689166(c,a4,a0,a1,bud);
case 0x689168:[[clang::musttail]] return blk_689168(c,a4,a0,a1,bud);
case 0x689171:[[clang::musttail]] return blk_689171(c,a4,a0,a1,bud);
case 0x689175:[[clang::musttail]] return blk_689175(c,a4,a0,a1,bud);
case 0x689177:[[clang::musttail]] return blk_689177(c,a4,a0,a1,bud);
case 0x689185:[[clang::musttail]] return blk_689185(c,a4,a0,a1,bud);
case 0x689198:[[clang::musttail]] return blk_689198(c,a4,a0,a1,bud);
case 0x6891a1:[[clang::musttail]] return blk_6891a1(c,a4,a0,a1,bud);
case 0x6891a3:[[clang::musttail]] return blk_6891a3(c,a4,a0,a1,bud);
case 0x6891b0:[[clang::musttail]] return blk_6891b0(c,a4,a0,a1,bud);
case 0x6891cc:[[clang::musttail]] return blk_6891cc(c,a4,a0,a1,bud);
case 0x6891d0:[[clang::musttail]] return blk_6891d0(c,a4,a0,a1,bud);
case 0x6891da:[[clang::musttail]] return blk_6891da(c,a4,a0,a1,bud);
case 0x6891e0:[[clang::musttail]] return blk_6891e0(c,a4,a0,a1,bud);
case 0x6891e9:[[clang::musttail]] return blk_6891e9(c,a4,a0,a1,bud);
case 0x6891ee:[[clang::musttail]] return blk_6891ee(c,a4,a0,a1,bud);
case 0x6891f0:[[clang::musttail]] return blk_6891f0(c,a4,a0,a1,bud);
case 0x6891f9:[[clang::musttail]] return blk_6891f9(c,a4,a0,a1,bud);
case 0x68920c:[[clang::musttail]] return blk_68920c(c,a4,a0,a1,bud);
case 0x689212:[[clang::musttail]] return blk_689212(c,a4,a0,a1,bud);
case 0x689214:[[clang::musttail]] return blk_689214(c,a4,a0,a1,bud);
case 0x689217:[[clang::musttail]] return blk_689217(c,a4,a0,a1,bud);
case 0x689219:[[clang::musttail]] return blk_689219(c,a4,a0,a1,bud);
case 0x689226:[[clang::musttail]] return blk_689226(c,a4,a0,a1,bud);
case 0x689239:[[clang::musttail]] return blk_689239(c,a4,a0,a1,bud);
case 0x689242:[[clang::musttail]] return blk_689242(c,a4,a0,a1,bud);
case 0x689244:[[clang::musttail]] return blk_689244(c,a4,a0,a1,bud);
case 0x689251:[[clang::musttail]] return blk_689251(c,a4,a0,a1,bud);
case 0x6892be:[[clang::musttail]] return blk_6892be(c,a4,a0,a1,bud);
case 0x6892c4:[[clang::musttail]] return blk_6892c4(c,a4,a0,a1,bud);
case 0x6892cc:[[clang::musttail]] return blk_6892cc(c,a4,a0,a1,bud);
case 0x6892d9:[[clang::musttail]] return blk_6892d9(c,a4,a0,a1,bud);
case 0x6892ec:[[clang::musttail]] return blk_6892ec(c,a4,a0,a1,bud);
case 0x6892f0:[[clang::musttail]] return blk_6892f0(c,a4,a0,a1,bud);
case 0x6892f8:[[clang::musttail]] return blk_6892f8(c,a4,a0,a1,bud);
case 0x6892fc:[[clang::musttail]] return blk_6892fc(c,a4,a0,a1,bud);
case 0x68930a:[[clang::musttail]] return blk_68930a(c,a4,a0,a1,bud);
case 0x68931d:[[clang::musttail]] return blk_68931d(c,a4,a0,a1,bud);
case 0x68931f:[[clang::musttail]] return blk_68931f(c,a4,a0,a1,bud);
case 0x689322:[[clang::musttail]] return blk_689322(c,a4,a0,a1,bud);
case 0x68932f:[[clang::musttail]] return blk_68932f(c,a4,a0,a1,bud);
case 0x689342:[[clang::musttail]] return blk_689342(c,a4,a0,a1,bud);
case 0x689345:[[clang::musttail]] return blk_689345(c,a4,a0,a1,bud);
case 0x689347:[[clang::musttail]] return blk_689347(c,a4,a0,a1,bud);
case 0x689354:[[clang::musttail]] return blk_689354(c,a4,a0,a1,bud);
case 0x68935f:[[clang::musttail]] return blk_68935f(c,a4,a0,a1,bud);
case 0x689361:[[clang::musttail]] return blk_689361(c,a4,a0,a1,bud);
case 0x689366:[[clang::musttail]] return blk_689366(c,a4,a0,a1,bud);
case 0x68937b:[[clang::musttail]] return blk_68937b(c,a4,a0,a1,bud);
case 0x689382:[[clang::musttail]] return blk_689382(c,a4,a0,a1,bud);
case 0x689384:[[clang::musttail]] return blk_689384(c,a4,a0,a1,bud);
case 0x689391:[[clang::musttail]] return blk_689391(c,a4,a0,a1,bud);
case 0x689394:[[clang::musttail]] return blk_689394(c,a4,a0,a1,bud);
case 0x689396:[[clang::musttail]] return blk_689396(c,a4,a0,a1,bud);
case 0x689398:[[clang::musttail]] return blk_689398(c,a4,a0,a1,bud);
case 0x68939a:[[clang::musttail]] return blk_68939a(c,a4,a0,a1,bud);
case 0x6893a2:[[clang::musttail]] return blk_6893a2(c,a4,a0,a1,bud);
case 0x6893a4:[[clang::musttail]] return blk_6893a4(c,a4,a0,a1,bud);
case 0x6893b3:[[clang::musttail]] return blk_6893b3(c,a4,a0,a1,bud);
case 0x6893f5:[[clang::musttail]] return blk_6893f5(c,a4,a0,a1,bud);
case 0x6893fd:[[clang::musttail]] return blk_6893fd(c,a4,a0,a1,bud);
case 0x68940a:[[clang::musttail]] return blk_68940a(c,a4,a0,a1,bud);
case 0x68941d:[[clang::musttail]] return blk_68941d(c,a4,a0,a1,bud);
case 0x689425:[[clang::musttail]] return blk_689425(c,a4,a0,a1,bud);
case 0x689432:[[clang::musttail]] return blk_689432(c,a4,a0,a1,bud);
case 0x689445:[[clang::musttail]] return blk_689445(c,a4,a0,a1,bud);
case 0x689448:[[clang::musttail]] return blk_689448(c,a4,a0,a1,bud);
case 0x68944a:[[clang::musttail]] return blk_68944a(c,a4,a0,a1,bud);
case 0x689457:[[clang::musttail]] return blk_689457(c,a4,a0,a1,bud);
case 0x68946a:[[clang::musttail]] return blk_68946a(c,a4,a0,a1,bud);
case 0x68946d:[[clang::musttail]] return blk_68946d(c,a4,a0,a1,bud);
case 0x68946f:[[clang::musttail]] return blk_68946f(c,a4,a0,a1,bud);
case 0x68947c:[[clang::musttail]] return blk_68947c(c,a4,a0,a1,bud);
case 0x68948f:[[clang::musttail]] return blk_68948f(c,a4,a0,a1,bud);
case 0x689492:[[clang::musttail]] return blk_689492(c,a4,a0,a1,bud);
case 0x689494:[[clang::musttail]] return blk_689494(c,a4,a0,a1,bud);
case 0x689496:[[clang::musttail]] return blk_689496(c,a4,a0,a1,bud);
case 0x68949c:[[clang::musttail]] return blk_68949c(c,a4,a0,a1,bud);
case 0x6894a9:[[clang::musttail]] return blk_6894a9(c,a4,a0,a1,bud);
case 0x6894bc:[[clang::musttail]] return blk_6894bc(c,a4,a0,a1,bud);
case 0x6894bf:[[clang::musttail]] return blk_6894bf(c,a4,a0,a1,bud);
case 0x6894c1:[[clang::musttail]] return blk_6894c1(c,a4,a0,a1,bud);
case 0x6894c3:[[clang::musttail]] return blk_6894c3(c,a4,a0,a1,bud);
case 0x6894d0:[[clang::musttail]] return blk_6894d0(c,a4,a0,a1,bud);
case 0x68952d:[[clang::musttail]] return blk_68952d(c,a4,a0,a1,bud);
case 0x689530:[[clang::musttail]] return blk_689530(c,a4,a0,a1,bud);
case 0x689532:[[clang::musttail]] return blk_689532(c,a4,a0,a1,bud);
case 0x689540:[[clang::musttail]] return blk_689540(c,a4,a0,a1,bud);
case 0x68955b:[[clang::musttail]] return blk_68955b(c,a4,a0,a1,bud);
case 0x68955e:[[clang::musttail]] return blk_68955e(c,a4,a0,a1,bud);
case 0x689567:[[clang::musttail]] return blk_689567(c,a4,a0,a1,bud);
case 0x68956b:[[clang::musttail]] return blk_68956b(c,a4,a0,a1,bud);
case 0x68956d:[[clang::musttail]] return blk_68956d(c,a4,a0,a1,bud);
case 0x68957b:[[clang::musttail]] return blk_68957b(c,a4,a0,a1,bud);
case 0x689596:[[clang::musttail]] return blk_689596(c,a4,a0,a1,bud);
case 0x689599:[[clang::musttail]] return blk_689599(c,a4,a0,a1,bud);
case 0x6895a2:[[clang::musttail]] return blk_6895a2(c,a4,a0,a1,bud);
case 0x6895a6:[[clang::musttail]] return blk_6895a6(c,a4,a0,a1,bud);
case 0x6895a8:[[clang::musttail]] return blk_6895a8(c,a4,a0,a1,bud);
case 0x6895b6:[[clang::musttail]] return blk_6895b6(c,a4,a0,a1,bud);
case 0x6895d1:[[clang::musttail]] return blk_6895d1(c,a4,a0,a1,bud);
case 0x6895d4:[[clang::musttail]] return blk_6895d4(c,a4,a0,a1,bud);
case 0x6895dd:[[clang::musttail]] return blk_6895dd(c,a4,a0,a1,bud);
case 0x6895e2:[[clang::musttail]] return blk_6895e2(c,a4,a0,a1,bud);
case 0x6895e4:[[clang::musttail]] return blk_6895e4(c,a4,a0,a1,bud);
case 0x6895f2:[[clang::musttail]] return blk_6895f2(c,a4,a0,a1,bud);
case 0x68960d:[[clang::musttail]] return blk_68960d(c,a4,a0,a1,bud);
case 0x689610:[[clang::musttail]] return blk_689610(c,a4,a0,a1,bud);
case 0x689619:[[clang::musttail]] return blk_689619(c,a4,a0,a1,bud);
case 0x68961e:[[clang::musttail]] return blk_68961e(c,a4,a0,a1,bud);
case 0x689620:[[clang::musttail]] return blk_689620(c,a4,a0,a1,bud);
case 0x68962e:[[clang::musttail]] return blk_68962e(c,a4,a0,a1,bud);
case 0x689649:[[clang::musttail]] return blk_689649(c,a4,a0,a1,bud);
case 0x68964c:[[clang::musttail]] return blk_68964c(c,a4,a0,a1,bud);
case 0x68964e:[[clang::musttail]] return blk_68964e(c,a4,a0,a1,bud);
case 0x68965c:[[clang::musttail]] return blk_68965c(c,a4,a0,a1,bud);
case 0x68968e:[[clang::musttail]] return blk_68968e(c,a4,a0,a1,bud);
case 0x689690:[[clang::musttail]] return blk_689690(c,a4,a0,a1,bud);
case 0x6896ac:[[clang::musttail]] return blk_6896ac(c,a4,a0,a1,bud);
case 0x6896b5:[[clang::musttail]] return blk_6896b5(c,a4,a0,a1,bud);
case 0x6896b7:[[clang::musttail]] return blk_6896b7(c,a4,a0,a1,bud);
case 0x6896bf:[[clang::musttail]] return blk_6896bf(c,a4,a0,a1,bud);
case 0x6896c1:[[clang::musttail]] return blk_6896c1(c,a4,a0,a1,bud);
case 0x6896ca:[[clang::musttail]] return blk_6896ca(c,a4,a0,a1,bud);
case 0x6896da:[[clang::musttail]] return blk_6896da(c,a4,a0,a1,bud);
case 0x6896df:[[clang::musttail]] return blk_6896df(c,a4,a0,a1,bud);
case 0x6896e1:[[clang::musttail]] return blk_6896e1(c,a4,a0,a1,bud);
case 0x6896e3:[[clang::musttail]] return blk_6896e3(c,a4,a0,a1,bud);
case 0x6896fc:[[clang::musttail]] return blk_6896fc(c,a4,a0,a1,bud);
case 0x6896ff:[[clang::musttail]] return blk_6896ff(c,a4,a0,a1,bud);
case 0x689705:[[clang::musttail]] return blk_689705(c,a4,a0,a1,bud);
case 0x689707:[[clang::musttail]] return blk_689707(c,a4,a0,a1,bud);
case 0x68970d:[[clang::musttail]] return blk_68970d(c,a4,a0,a1,bud);
case 0x68972c:[[clang::musttail]] return blk_68972c(c,a4,a0,a1,bud);
case 0x68972f:[[clang::musttail]] return blk_68972f(c,a4,a0,a1,bud);
case 0x68973c:[[clang::musttail]] return blk_68973c(c,a4,a0,a1,bud);
case 0x689740:[[clang::musttail]] return blk_689740(c,a4,a0,a1,bud);
case 0x689743:[[clang::musttail]] return blk_689743(c,a4,a0,a1,bud);
case 0x68974e:[[clang::musttail]] return blk_68974e(c,a4,a0,a1,bud);
case 0x689765:[[clang::musttail]] return blk_689765(c,a4,a0,a1,bud);
case 0x689768:[[clang::musttail]] return blk_689768(c,a4,a0,a1,bud);
case 0x68976a:[[clang::musttail]] return blk_68976a(c,a4,a0,a1,bud);
case 0x68976c:[[clang::musttail]] return blk_68976c(c,a4,a0,a1,bud);
case 0x689775:[[clang::musttail]] return blk_689775(c,a4,a0,a1,bud);
case 0x689787:[[clang::musttail]] return blk_689787(c,a4,a0,a1,bud);
case 0x68978d:[[clang::musttail]] return blk_68978d(c,a4,a0,a1,bud);
case 0x689808:[[clang::musttail]] return blk_689808(c,a4,a0,a1,bud);
case 0x6898a4:[[clang::musttail]] return blk_6898a4(c,a4,a0,a1,bud);
case 0x689928:[[clang::musttail]] return blk_689928(c,a4,a0,a1,bud);
case 0x689986:[[clang::musttail]] return blk_689986(c,a4,a0,a1,bud);
case 0x6899e7:[[clang::musttail]] return blk_6899e7(c,a4,a0,a1,bud);
case 0x6899f2:[[clang::musttail]] return blk_6899f2(c,a4,a0,a1,bud);
case 0x6899f5:[[clang::musttail]] return blk_6899f5(c,a4,a0,a1,bud);
case 0x6899f7:[[clang::musttail]] return blk_6899f7(c,a4,a0,a1,bud);
case 0x6899fa:[[clang::musttail]] return blk_6899fa(c,a4,a0,a1,bud);
case 0x689a07:[[clang::musttail]] return blk_689a07(c,a4,a0,a1,bud);
case 0x689a10:[[clang::musttail]] return blk_689a10(c,a4,a0,a1,bud);
case 0x689a12:[[clang::musttail]] return blk_689a12(c,a4,a0,a1,bud);
case 0x689a1a:[[clang::musttail]] return blk_689a1a(c,a4,a0,a1,bud);
case 0x689a1d:[[clang::musttail]] return blk_689a1d(c,a4,a0,a1,bud);
case 0x689a23:[[clang::musttail]] return blk_689a23(c,a4,a0,a1,bud);
case 0x689a26:[[clang::musttail]] return blk_689a26(c,a4,a0,a1,bud);
case 0x689a29:[[clang::musttail]] return blk_689a29(c,a4,a0,a1,bud);
case 0x689a2b:[[clang::musttail]] return blk_689a2b(c,a4,a0,a1,bud);
case 0x689a2d:[[clang::musttail]] return blk_689a2d(c,a4,a0,a1,bud);
case 0x689a30:[[clang::musttail]] return blk_689a30(c,a4,a0,a1,bud);
case 0x689a33:[[clang::musttail]] return blk_689a33(c,a4,a0,a1,bud);
case 0x689a35:[[clang::musttail]] return blk_689a35(c,a4,a0,a1,bud);
case 0x689a38:[[clang::musttail]] return blk_689a38(c,a4,a0,a1,bud);
case 0x689a3b:[[clang::musttail]] return blk_689a3b(c,a4,a0,a1,bud);
case 0x689a3e:[[clang::musttail]] return blk_689a3e(c,a4,a0,a1,bud);
case 0x689a40:[[clang::musttail]] return blk_689a40(c,a4,a0,a1,bud);
case 0x689a48:[[clang::musttail]] return blk_689a48(c,a4,a0,a1,bud);
case 0x689a4b:[[clang::musttail]] return blk_689a4b(c,a4,a0,a1,bud);
case 0x689a4d:[[clang::musttail]] return blk_689a4d(c,a4,a0,a1,bud);
case 0x689a55:[[clang::musttail]] return blk_689a55(c,a4,a0,a1,bud);
case 0x689a58:[[clang::musttail]] return blk_689a58(c,a4,a0,a1,bud);
case 0x689a6b:[[clang::musttail]] return blk_689a6b(c,a4,a0,a1,bud);
case 0x689a72:[[clang::musttail]] return blk_689a72(c,a4,a0,a1,bud);
case 0x689a82:[[clang::musttail]] return blk_689a82(c,a4,a0,a1,bud);
case 0x689a8d:[[clang::musttail]] return blk_689a8d(c,a4,a0,a1,bud);
case 0x689a96:[[clang::musttail]] return blk_689a96(c,a4,a0,a1,bud);
case 0x689aa6:[[clang::musttail]] return blk_689aa6(c,a4,a0,a1,bud);
case 0x689ab2:[[clang::musttail]] return blk_689ab2(c,a4,a0,a1,bud);
case 0x689aba:[[clang::musttail]] return blk_689aba(c,a4,a0,a1,bud);
case 0x689abc:[[clang::musttail]] return blk_689abc(c,a4,a0,a1,bud);
case 0x689ac4:[[clang::musttail]] return blk_689ac4(c,a4,a0,a1,bud);
case 0x689ac7:[[clang::musttail]] return blk_689ac7(c,a4,a0,a1,bud);
case 0x689acd:[[clang::musttail]] return blk_689acd(c,a4,a0,a1,bud);
case 0x689ad0:[[clang::musttail]] return blk_689ad0(c,a4,a0,a1,bud);
case 0x689ae1:[[clang::musttail]] return blk_689ae1(c,a4,a0,a1,bud);
case 0x689ae5:[[clang::musttail]] return blk_689ae5(c,a4,a0,a1,bud);
case 0x689aea:[[clang::musttail]] return blk_689aea(c,a4,a0,a1,bud);
case 0x689aed:[[clang::musttail]] return blk_689aed(c,a4,a0,a1,bud);
case 0x689af8:[[clang::musttail]] return blk_689af8(c,a4,a0,a1,bud);
case 0x689afa:[[clang::musttail]] return blk_689afa(c,a4,a0,a1,bud);
case 0x689aff:[[clang::musttail]] return blk_689aff(c,a4,a0,a1,bud);
case 0x689b03:[[clang::musttail]] return blk_689b03(c,a4,a0,a1,bud);
case 0x689b08:[[clang::musttail]] return blk_689b08(c,a4,a0,a1,bud);
case 0x689b0a:[[clang::musttail]] return blk_689b0a(c,a4,a0,a1,bud);
case 0x689b0d:[[clang::musttail]] return blk_689b0d(c,a4,a0,a1,bud);
case 0x689b13:[[clang::musttail]] return blk_689b13(c,a4,a0,a1,bud);
case 0x689b53:[[clang::musttail]] return blk_689b53(c,a4,a0,a1,bud);
case 0x689bac:[[clang::musttail]] return blk_689bac(c,a4,a0,a1,bud);
case 0x689be5:[[clang::musttail]] return blk_689be5(c,a4,a0,a1,bud);
case 0x689c31:[[clang::musttail]] return blk_689c31(c,a4,a0,a1,bud);
case 0x689c72:[[clang::musttail]] return blk_689c72(c,a4,a0,a1,bud);
case 0x689c79:[[clang::musttail]] return blk_689c79(c,a4,a0,a1,bud);
case 0x689cc9:[[clang::musttail]] return blk_689cc9(c,a4,a0,a1,bud);
case 0x689d14:[[clang::musttail]] return blk_689d14(c,a4,a0,a1,bud);
case 0x689d1b:[[clang::musttail]] return blk_689d1b(c,a4,a0,a1,bud);
case 0x689f5a:[[clang::musttail]] return blk_689f5a(c,a4,a0,a1,bud);
case 0x689fb9:[[clang::musttail]] return blk_689fb9(c,a4,a0,a1,bud);
case 0x689fc7:[[clang::musttail]] return blk_689fc7(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_689(Cpu& c){u8* R=c.regs.data();return ent_689(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
