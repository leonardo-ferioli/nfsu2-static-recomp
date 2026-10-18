#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 page_5f3(Cpu& c){return body_5f3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f3010:goto L5f3010;
case 0x5f3011:c.instructions+=4;goto B5f3011;
case 0x5f3013:c.instructions+=3;goto B5f3013;
case 0x5f3016:c.instructions+=2;goto B5f3016;
case 0x5f3018:c.instructions+=1;goto B5f3018;
case 0x5f301a:goto L5f301a;
case 0x5f301e:c.instructions+=1;goto B5f301e;
case 0x5f3020:goto L5f3020;
case 0x5f3021:c.instructions+=2;goto B5f3021;
case 0x5f3023:c.instructions+=1;goto B5f3023;
case 0x5f3028:goto L5f3028;
case 0x5f302b:c.instructions+=3;goto B5f302b;
case 0x5f302e:c.instructions+=2;goto B5f302e;
case 0x5f3030:c.instructions+=1;goto B5f3030;
case 0x5f3032:goto L5f3032;
case 0x5f3035:c.instructions+=4;goto B5f3035;
case 0x5f3037:c.instructions+=3;goto B5f3037;
case 0x5f3038:c.instructions+=2;goto B5f3038;
case 0x5f303a:c.instructions+=1;goto B5f303a;
case 0x5f303d:goto L5f303d;
case 0x5f303f:c.instructions+=3;goto B5f303f;
case 0x5f3041:c.instructions+=2;goto B5f3041;
case 0x5f3043:c.instructions+=1;goto B5f3043;
case 0x5f3046:goto L5f3046;
case 0x5f304c:c.instructions+=3;goto B5f304c;
case 0x5f3051:c.instructions+=2;goto B5f3051;
case 0x5f3053:c.instructions+=1;goto B5f3053;
case 0x5f3055:goto L5f3055;
case 0x5f305b:c.instructions+=2;goto B5f305b;
case 0x5f305d:c.instructions+=1;goto B5f305d;
case 0x5f305f:goto L5f305f;
case 0x5f3063:goto L5f3063;
case 0x5f3065:c.instructions+=3;goto B5f3065;
case 0x5f3066:c.instructions+=2;goto B5f3066;
case 0x5f3068:c.instructions+=1;goto B5f3068;
case 0x5f306b:goto L5f306b;
case 0x5f306d:c.instructions+=4;goto B5f306d;
case 0x5f306f:c.instructions+=3;goto B5f306f;
case 0x5f3070:c.instructions+=2;goto B5f3070;
case 0x5f3071:c.instructions+=1;goto B5f3071;
case 0x5f3074:goto L5f3074;
case 0x5f3075:goto L5f3075;
case 0x5f3076:c.instructions+=1;goto B5f3076;
case 0x5f3080:goto L5f3080;
case 0x5f3081:c.instructions+=4;goto B5f3081;
case 0x5f3083:c.instructions+=3;goto B5f3083;
case 0x5f3086:c.instructions+=2;goto B5f3086;
case 0x5f3088:c.instructions+=1;goto B5f3088;
case 0x5f308a:goto L5f308a;
case 0x5f308e:c.instructions+=1;goto B5f308e;
case 0x5f3090:goto L5f3090;
case 0x5f3091:c.instructions+=2;goto B5f3091;
case 0x5f3093:c.instructions+=1;goto B5f3093;
case 0x5f3098:goto L5f3098;
case 0x5f309b:c.instructions+=3;goto B5f309b;
case 0x5f309e:c.instructions+=2;goto B5f309e;
case 0x5f30a0:c.instructions+=1;goto B5f30a0;
case 0x5f30a2:goto L5f30a2;
case 0x5f30a5:c.instructions+=4;goto B5f30a5;
case 0x5f30a7:c.instructions+=3;goto B5f30a7;
case 0x5f30a8:c.instructions+=2;goto B5f30a8;
case 0x5f30aa:c.instructions+=1;goto B5f30aa;
case 0x5f30ad:goto L5f30ad;
case 0x5f30af:c.instructions+=3;goto B5f30af;
case 0x5f30b1:c.instructions+=2;goto B5f30b1;
case 0x5f30b3:c.instructions+=1;goto B5f30b3;
case 0x5f30b6:goto L5f30b6;
case 0x5f30bd:c.instructions+=1;goto B5f30bd;
case 0x5f30bf:goto L5f30bf;
case 0x5f30c4:c.instructions+=3;goto B5f30c4;
case 0x5f30c6:c.instructions+=2;goto B5f30c6;
case 0x5f30cb:c.instructions+=1;goto B5f30cb;
case 0x5f30cd:goto L5f30cd;
case 0x5f30d1:goto L5f30d1;
case 0x5f30d3:c.instructions+=3;goto B5f30d3;
case 0x5f30d4:c.instructions+=2;goto B5f30d4;
case 0x5f30d6:c.instructions+=1;goto B5f30d6;
case 0x5f30d9:goto L5f30d9;
case 0x5f30db:c.instructions+=4;goto B5f30db;
case 0x5f30dd:c.instructions+=3;goto B5f30dd;
case 0x5f30de:c.instructions+=2;goto B5f30de;
case 0x5f30df:c.instructions+=1;goto B5f30df;
case 0x5f30e2:goto L5f30e2;
case 0x5f30e3:goto L5f30e3;
case 0x5f30e4:c.instructions+=1;goto B5f30e4;
case 0x5f30f0:goto L5f30f0;
case 0x5f30f1:c.instructions+=9;goto B5f30f1;
case 0x5f30f3:c.instructions+=8;goto B5f30f3;
case 0x5f30f6:c.instructions+=7;goto B5f30f6;
case 0x5f30f9:c.instructions+=6;goto B5f30f9;
case 0x5f30fa:c.instructions+=5;goto B5f30fa;
case 0x5f30fc:c.instructions+=4;goto B5f30fc;
case 0x5f3102:c.instructions+=3;goto B5f3102;
case 0x5f3104:c.instructions+=2;goto B5f3104;
case 0x5f310e:c.instructions+=1;goto B5f310e;
case 0x5f3114:goto L5f3114;
case 0x5f3118:c.instructions+=1;goto B5f3118;
case 0x5f311e:goto L5f311e;
case 0x5f3121:c.instructions+=3;goto B5f3121;
case 0x5f3125:c.instructions+=2;goto B5f3125;
case 0x5f3126:c.instructions+=1;goto B5f3126;
case 0x5f312b:goto L5f312b;
case 0x5f312f:c.instructions+=4;goto B5f312f;
case 0x5f3130:c.instructions+=3;goto B5f3130;
case 0x5f3134:c.instructions+=2;goto B5f3134;
case 0x5f3135:c.instructions+=1;goto B5f3135;
case 0x5f313a:goto L5f313a;
case 0x5f3140:c.instructions+=6;goto B5f3140;
case 0x5f3143:c.instructions+=5;goto B5f3143;
case 0x5f3145:c.instructions+=4;goto B5f3145;
case 0x5f314d:c.instructions+=3;goto B5f314d;
case 0x5f3155:c.instructions+=2;goto B5f3155;
case 0x5f315d:c.instructions+=1;goto B5f315d;
case 0x5f315f:goto L5f315f;
case 0x5f3162:c.instructions+=6;goto B5f3162;
case 0x5f3163:c.instructions+=5;goto B5f3163;
case 0x5f3167:c.instructions+=4;goto B5f3167;
case 0x5f3168:c.instructions+=3;goto B5f3168;
case 0x5f316c:c.instructions+=2;goto B5f316c;
case 0x5f316d:c.instructions+=1;goto B5f316d;
case 0x5f3172:goto L5f3172;
case 0x5f3176:c.instructions+=9;goto B5f3176;
case 0x5f317c:c.instructions+=8;goto B5f317c;
case 0x5f317f:c.instructions+=7;goto B5f317f;
case 0x5f3183:c.instructions+=6;goto B5f3183;
case 0x5f3187:c.instructions+=5;goto B5f3187;
case 0x5f318d:c.instructions+=4;goto B5f318d;
case 0x5f3191:c.instructions+=3;goto B5f3191;
case 0x5f3195:c.instructions+=2;goto B5f3195;
case 0x5f319b:c.instructions+=1;goto B5f319b;
case 0x5f319f:goto L5f319f;
case 0x5f31a3:c.instructions+=10;goto B5f31a3;
case 0x5f31a7:c.instructions+=9;goto B5f31a7;
case 0x5f31ab:c.instructions+=8;goto B5f31ab;
case 0x5f31af:c.instructions+=7;goto B5f31af;
case 0x5f31b3:c.instructions+=6;goto B5f31b3;
case 0x5f31b4:c.instructions+=5;goto B5f31b4;
case 0x5f31b8:c.instructions+=4;goto B5f31b8;
case 0x5f31b9:c.instructions+=3;goto B5f31b9;
case 0x5f31bb:c.instructions+=2;goto B5f31bb;
case 0x5f31bf:c.instructions+=1;goto B5f31bf;
case 0x5f31c4:goto L5f31c4;
case 0x5f31c8:c.instructions+=12;goto B5f31c8;
case 0x5f31ce:c.instructions+=11;goto B5f31ce;
case 0x5f31d0:c.instructions+=10;goto B5f31d0;
case 0x5f31d6:c.instructions+=9;goto B5f31d6;
case 0x5f31dd:c.instructions+=8;goto B5f31dd;
case 0x5f31e1:c.instructions+=7;goto B5f31e1;
case 0x5f31e4:c.instructions+=6;goto B5f31e4;
case 0x5f31e5:c.instructions+=5;goto B5f31e5;
case 0x5f31e6:c.instructions+=4;goto B5f31e6;
case 0x5f31ea:c.instructions+=3;goto B5f31ea;
case 0x5f31ee:c.instructions+=2;goto B5f31ee;
case 0x5f31f1:c.instructions+=1;goto B5f31f1;
case 0x5f31f6:goto L5f31f6;
case 0x5f31f9:c.instructions+=7;goto B5f31f9;
case 0x5f31fd:c.instructions+=6;goto B5f31fd;
case 0x5f3200:c.instructions+=5;goto B5f3200;
case 0x5f3204:c.instructions+=4;goto B5f3204;
case 0x5f3208:c.instructions+=3;goto B5f3208;
case 0x5f320a:c.instructions+=2;goto B5f320a;
case 0x5f320d:c.instructions+=1;goto B5f320d;
case 0x5f320f:goto L5f320f;
case 0x5f3211:c.instructions+=1;goto B5f3211;
case 0x5f3215:goto L5f3215;
case 0x5f3219:c.instructions+=4;goto B5f3219;
case 0x5f321b:c.instructions+=3;goto B5f321b;
case 0x5f321d:c.instructions+=2;goto B5f321d;
case 0x5f3220:c.instructions+=1;goto B5f3220;
case 0x5f3222:goto L5f3222;
case 0x5f3224:c.instructions+=1;goto B5f3224;
case 0x5f3228:goto L5f3228;
case 0x5f322d:goto L5f322d;
case 0x5f3230:c.instructions+=11;goto B5f3230;
case 0x5f3236:c.instructions+=10;goto B5f3236;
case 0x5f3239:c.instructions+=9;goto B5f3239;
case 0x5f323a:c.instructions+=8;goto B5f323a;
case 0x5f3240:c.instructions+=7;goto B5f3240;
case 0x5f3247:c.instructions+=6;goto B5f3247;
case 0x5f324b:c.instructions+=5;goto B5f324b;
case 0x5f324c:c.instructions+=4;goto B5f324c;
case 0x5f324d:c.instructions+=3;goto B5f324d;
case 0x5f3253:c.instructions+=2;goto B5f3253;
case 0x5f3254:c.instructions+=1;goto B5f3254;
case 0x5f3259:goto L5f3259;
case 0x5f325c:c.instructions+=4;goto B5f325c;
case 0x5f325f:c.instructions+=3;goto B5f325f;
case 0x5f3266:c.instructions+=2;goto B5f3266;
case 0x5f3267:c.instructions+=1;goto B5f3267;
case 0x5f326c:goto L5f326c;
case 0x5f326d:c.instructions+=1;goto B5f326d;
case 0x5f3272:goto L5f3272;
case 0x5f3275:c.instructions+=2;goto B5f3275;
case 0x5f3277:c.instructions+=1;goto B5f3277;
case 0x5f3279:goto L5f3279;
case 0x5f327f:c.instructions+=1;goto B5f327f;
case 0x5f3284:goto L5f3284;
case 0x5f328a:c.instructions+=1;goto B5f328a;
case 0x5f328f:goto L5f328f;
case 0x5f3290:c.instructions+=3;goto B5f3290;
case 0x5f3292:c.instructions+=2;goto B5f3292;
case 0x5f3293:c.instructions+=1;goto B5f3293;
case 0x5f32a0:goto L5f32a0;
case 0x5f32a1:c.instructions+=9;goto B5f32a1;
case 0x5f32a2:c.instructions+=8;goto B5f32a2;
case 0x5f32a4:c.instructions+=7;goto B5f32a4;
case 0x5f32a7:c.instructions+=6;goto B5f32a7;
case 0x5f32aa:c.instructions+=5;goto B5f32aa;
case 0x5f32b1:c.instructions+=4;goto B5f32b1;
case 0x5f32b3:c.instructions+=3;goto B5f32b3;
case 0x5f32b5:c.instructions+=2;goto B5f32b5;
case 0x5f32b7:c.instructions+=1;goto B5f32b7;
case 0x5f32bd:goto L5f32bd;
case 0x5f32be:c.instructions+=2;goto B5f32be;
case 0x5f32c0:c.instructions+=1;goto B5f32c0;
case 0x5f32c5:goto L5f32c5;
case 0x5f32cb:c.instructions+=5;goto B5f32cb;
case 0x5f32cd:c.instructions+=4;goto B5f32cd;
case 0x5f32d3:c.instructions+=3;goto B5f32d3;
case 0x5f32d4:c.instructions+=2;goto B5f32d4;
case 0x5f32d6:c.instructions+=1;goto B5f32d6;
case 0x5f32d8:goto L5f32d8;
case 0x5f32da:c.instructions+=1;goto B5f32da;
case 0x5f32dc:goto L5f32dc;
case 0x5f32e1:c.instructions+=2;goto B5f32e1;
case 0x5f32e3:c.instructions+=1;goto B5f32e3;
case 0x5f32e5:goto L5f32e5;
case 0x5f32ea:c.instructions+=2;goto B5f32ea;
case 0x5f32ec:c.instructions+=1;goto B5f32ec;
case 0x5f32ee:goto L5f32ee;
case 0x5f32f1:c.instructions+=5;goto B5f32f1;
case 0x5f32f4:c.instructions+=4;goto B5f32f4;
case 0x5f32f5:c.instructions+=3;goto B5f32f5;
case 0x5f32fb:c.instructions+=2;goto B5f32fb;
case 0x5f32fd:c.instructions+=1;goto B5f32fd;
case 0x5f32ff:goto L5f32ff;
case 0x5f3305:c.instructions+=1;goto B5f3305;
case 0x5f3307:goto L5f3307;
case 0x5f330d:c.instructions+=5;goto B5f330d;
case 0x5f3313:c.instructions+=4;goto B5f3313;
case 0x5f3319:c.instructions+=3;goto B5f3319;
case 0x5f331b:c.instructions+=2;goto B5f331b;
case 0x5f331e:c.instructions+=1;goto B5f331e;
case 0x5f3320:goto L5f3320;
case 0x5f3326:goto L5f3326;
case 0x5f3327:goto L5f3327;
case 0x5f332c:c.instructions+=2;goto B5f332c;
case 0x5f332e:c.instructions+=1;goto B5f332e;
case 0x5f3330:goto L5f3330;
case 0x5f3335:c.instructions+=2;goto B5f3335;
case 0x5f3337:c.instructions+=1;goto B5f3337;
case 0x5f3339:goto L5f3339;
case 0x5f333f:c.instructions+=1;goto B5f333f;
case 0x5f3341:goto L5f3341;
case 0x5f3343:c.instructions+=1;goto B5f3343;
case 0x5f3345:goto L5f3345;
case 0x5f3347:c.instructions+=1;goto B5f3347;
case 0x5f3349:goto L5f3349;
case 0x5f334f:c.instructions+=1;goto B5f334f;
case 0x5f3351:goto L5f3351;
case 0x5f3358:c.instructions+=1;goto B5f3358;
case 0x5f335a:goto L5f335a;
case 0x5f3361:c.instructions+=1;goto B5f3361;
case 0x5f3363:goto L5f3363;
case 0x5f3369:c.instructions+=1;goto B5f3369;
case 0x5f336c:goto L5f336c;
case 0x5f336f:c.instructions+=5;goto B5f336f;
case 0x5f3375:c.instructions+=4;goto B5f3375;
case 0x5f3378:c.instructions+=3;goto B5f3378;
case 0x5f337a:c.instructions+=2;goto B5f337a;
case 0x5f337b:c.instructions+=1;goto B5f337b;
case 0x5f337d:goto L5f337d;
case 0x5f3383:c.instructions+=1;goto B5f3383;
case 0x5f3385:goto L5f3385;
case 0x5f338b:c.instructions+=5;goto B5f338b;
case 0x5f3391:c.instructions+=4;goto B5f3391;
case 0x5f3397:c.instructions+=3;goto B5f3397;
case 0x5f3399:c.instructions+=2;goto B5f3399;
case 0x5f339c:c.instructions+=1;goto B5f339c;
case 0x5f339e:goto L5f339e;
case 0x5f33a4:goto L5f33a4;
case 0x5f33a5:c.instructions+=3;goto B5f33a5;
case 0x5f33a7:c.instructions+=2;goto B5f33a7;
case 0x5f33a8:c.instructions+=1;goto B5f33a8;
case 0x5f33b0:goto L5f33b0;
case 0x5f33b1:c.instructions+=7;goto B5f33b1;
case 0x5f33b7:c.instructions+=6;goto B5f33b7;
case 0x5f33b8:c.instructions+=5;goto B5f33b8;
case 0x5f33b9:c.instructions+=4;goto B5f33b9;
case 0x5f33bb:c.instructions+=3;goto B5f33bb;
case 0x5f33bd:c.instructions+=2;goto B5f33bd;
case 0x5f33bf:c.instructions+=1;goto B5f33bf;
case 0x5f33c5:goto L5f33c5;
case 0x5f33c8:c.instructions+=5;goto B5f33c8;
case 0x5f33cb:c.instructions+=4;goto B5f33cb;
case 0x5f33ce:c.instructions+=3;goto B5f33ce;
case 0x5f33d4:c.instructions+=2;goto B5f33d4;
case 0x5f33d6:c.instructions+=1;goto B5f33d6;
case 0x5f33d8:goto L5f33d8;
case 0x5f33dd:goto L5f33dd;
case 0x5f33e3:c.instructions+=4;goto B5f33e3;
case 0x5f33e9:c.instructions+=3;goto B5f33e9;
case 0x5f33ec:c.instructions+=2;goto B5f33ec;
case 0x5f33f2:c.instructions+=1;goto B5f33f2;
case 0x5f33f4:goto L5f33f4;
case 0x5f33f6:c.instructions+=1;goto B5f33f6;
case 0x5f33f8:goto L5f33f8;
case 0x5f33fa:c.instructions+=1;goto B5f33fa;
case 0x5f33fc:goto L5f33fc;
case 0x5f3402:goto L5f3402;
case 0x5f3409:c.instructions+=1;goto B5f3409;
case 0x5f340b:goto L5f340b;
case 0x5f3411:c.instructions+=8;goto B5f3411;
case 0x5f3412:c.instructions+=7;goto B5f3412;
case 0x5f3418:c.instructions+=6;goto B5f3418;
case 0x5f341a:c.instructions+=5;goto B5f341a;
case 0x5f3420:c.instructions+=4;goto B5f3420;
case 0x5f3426:c.instructions+=3;goto B5f3426;
case 0x5f3429:c.instructions+=2;goto B5f3429;
case 0x5f342f:c.instructions+=1;goto B5f342f;
case 0x5f3431:goto L5f3431;
case 0x5f3434:c.instructions+=1;goto B5f3434;
case 0x5f3436:goto L5f3436;
case 0x5f343c:c.instructions+=2;goto B5f343c;
case 0x5f343e:c.instructions+=1;goto B5f343e;
case 0x5f3440:goto L5f3440;
case 0x5f3442:c.instructions+=1;goto B5f3442;
case 0x5f3444:goto L5f3444;
case 0x5f3446:c.instructions+=1;goto B5f3446;
case 0x5f3448:goto L5f3448;
case 0x5f344b:c.instructions+=1;goto B5f344b;
case 0x5f344d:goto L5f344d;
case 0x5f3453:c.instructions+=2;goto B5f3453;
case 0x5f3455:c.instructions+=1;goto B5f3455;
case 0x5f3457:goto L5f3457;
case 0x5f345d:goto L5f345d;
case 0x5f345e:goto L5f345e;
case 0x5f3464:c.instructions+=2;goto B5f3464;
case 0x5f3466:c.instructions+=1;goto B5f3466;
case 0x5f3468:goto L5f3468;
case 0x5f346d:c.instructions+=2;goto B5f346d;
case 0x5f346f:c.instructions+=1;goto B5f346f;
case 0x5f3471:goto L5f3471;
case 0x5f3476:c.instructions+=1;goto B5f3476;
case 0x5f3478:goto L5f3478;
case 0x5f347b:c.instructions+=1;goto B5f347b;
case 0x5f347d:goto L5f347d;
case 0x5f3482:c.instructions+=1;goto B5f3482;
case 0x5f3487:goto L5f3487;
case 0x5f3489:c.instructions+=1;goto B5f3489;
case 0x5f348b:goto L5f348b;
case 0x5f3490:goto L5f3490;
case 0x5f3492:c.instructions+=1;goto B5f3492;
case 0x5f3494:goto L5f3494;
case 0x5f349a:goto L5f349a;
case 0x5f349d:c.instructions+=1;goto B5f349d;
case 0x5f349f:goto L5f349f;
case 0x5f34a2:goto L5f34a2;
case 0x5f34a5:c.instructions+=1;goto B5f34a5;
case 0x5f34a7:goto L5f34a7;
case 0x5f34ac:c.instructions+=2;goto B5f34ac;
case 0x5f34ae:c.instructions+=1;goto B5f34ae;
case 0x5f34b0:goto L5f34b0;
case 0x5f34b6:goto L5f34b6;
case 0x5f34b8:c.instructions+=5;goto B5f34b8;
case 0x5f34b9:c.instructions+=4;goto B5f34b9;
case 0x5f34bb:c.instructions+=3;goto B5f34bb;
case 0x5f34bc:c.instructions+=2;goto B5f34bc;
case 0x5f34bd:c.instructions+=1;goto B5f34bd;
case 0x5f34c0:goto L5f34c0;
case 0x5f34c3:c.instructions+=3;goto B5f34c3;
case 0x5f34c6:c.instructions+=2;goto B5f34c6;
case 0x5f34cb:c.instructions+=1;goto B5f34cb;
case 0x5f34cd:goto L5f34cd;
case 0x5f34d2:c.instructions+=2;goto B5f34d2;
case 0x5f34d4:c.instructions+=1;goto B5f34d4;
case 0x5f34d6:goto L5f34d6;
case 0x5f34db:c.instructions+=2;goto B5f34db;
case 0x5f34dd:c.instructions+=1;goto B5f34dd;
case 0x5f34df:goto L5f34df;
case 0x5f34e4:c.instructions+=2;goto B5f34e4;
case 0x5f34e6:c.instructions+=1;goto B5f34e6;
case 0x5f34e8:goto L5f34e8;
case 0x5f34ed:c.instructions+=3;goto B5f34ed;
case 0x5f34ef:c.instructions+=2;goto B5f34ef;
case 0x5f34f2:c.instructions+=1;goto B5f34f2;
case 0x5f34f4:goto L5f34f4;
case 0x5f34f6:c.instructions+=2;goto B5f34f6;
case 0x5f34f8:c.instructions+=1;goto B5f34f8;
case 0x5f34f9:goto L5f34f9;
case 0x5f34fa:c.instructions+=5;goto B5f34fa;
case 0x5f34fb:c.instructions+=4;goto B5f34fb;
case 0x5f34fd:c.instructions+=3;goto B5f34fd;
case 0x5f34ff:c.instructions+=2;goto B5f34ff;
case 0x5f3502:c.instructions+=1;goto B5f3502;
case 0x5f3504:goto L5f3504;
case 0x5f350a:c.instructions+=2;goto B5f350a;
case 0x5f350c:c.instructions+=1;goto B5f350c;
case 0x5f350e:goto L5f350e;
case 0x5f3513:goto L5f3513;
case 0x5f3518:c.instructions+=2;goto B5f3518;
case 0x5f351a:c.instructions+=1;goto B5f351a;
case 0x5f351c:goto L5f351c;
case 0x5f351f:goto L5f351f;
case 0x5f3524:goto L5f3524;
case 0x5f3529:c.instructions+=5;goto B5f3529;
case 0x5f352b:c.instructions+=4;goto B5f352b;
case 0x5f3530:c.instructions+=3;goto B5f3530;
case 0x5f3532:c.instructions+=2;goto B5f3532;
case 0x5f3534:c.instructions+=1;goto B5f3534;
case 0x5f3536:goto L5f3536;
case 0x5f353b:c.instructions+=2;goto B5f353b;
case 0x5f353d:c.instructions+=1;goto B5f353d;
case 0x5f353f:goto L5f353f;
case 0x5f3545:goto L5f3545;
case 0x5f3547:c.instructions+=4;goto B5f3547;
case 0x5f3548:c.instructions+=3;goto B5f3548;
case 0x5f354a:c.instructions+=2;goto B5f354a;
case 0x5f354b:c.instructions+=1;goto B5f354b;
case 0x5f3550:goto L5f3550;
case 0x5f3551:c.instructions+=11;goto B5f3551;
case 0x5f3553:c.instructions+=10;goto B5f3553;
case 0x5f3556:c.instructions+=9;goto B5f3556;
case 0x5f355c:c.instructions+=8;goto B5f355c;
case 0x5f355d:c.instructions+=7;goto B5f355d;
case 0x5f355e:c.instructions+=6;goto B5f355e;
case 0x5f355f:c.instructions+=5;goto B5f355f;
case 0x5f3561:c.instructions+=4;goto B5f3561;
case 0x5f3564:c.instructions+=3;goto B5f3564;
case 0x5f356b:c.instructions+=2;goto B5f356b;
case 0x5f356c:c.instructions+=1;goto B5f356c;
case 0x5f3571:goto L5f3571;
case 0x5f3578:c.instructions+=4;goto B5f3578;
case 0x5f3579:c.instructions+=3;goto B5f3579;
case 0x5f3580:c.instructions+=2;goto B5f3580;
case 0x5f3581:c.instructions+=1;goto B5f3581;
case 0x5f3586:goto L5f3586;
case 0x5f3589:c.instructions+=2;goto B5f3589;
case 0x5f358b:c.instructions+=1;goto B5f358b;
case 0x5f3590:goto L5f3590;
case 0x5f3592:c.instructions+=1;goto B5f3592;
case 0x5f3598:goto L5f3598;
case 0x5f359e:c.instructions+=7;goto B5f359e;
case 0x5f35a1:c.instructions+=6;goto B5f35a1;
case 0x5f35a2:c.instructions+=5;goto B5f35a2;
case 0x5f35a9:c.instructions+=4;goto B5f35a9;
case 0x5f35aa:c.instructions+=3;goto B5f35aa;
case 0x5f35ae:c.instructions+=2;goto B5f35ae;
case 0x5f35af:c.instructions+=1;goto B5f35af;
case 0x5f35b4:goto L5f35b4;
case 0x5f35b8:c.instructions+=13;goto B5f35b8;
case 0x5f35be:c.instructions+=12;goto B5f35be;
case 0x5f35c2:c.instructions+=11;goto B5f35c2;
case 0x5f35c3:c.instructions+=10;goto B5f35c3;
case 0x5f35c7:c.instructions+=9;goto B5f35c7;
case 0x5f35cb:c.instructions+=8;goto B5f35cb;
case 0x5f35cc:c.instructions+=7;goto B5f35cc;
case 0x5f35d0:c.instructions+=6;goto B5f35d0;
case 0x5f35d6:c.instructions+=5;goto B5f35d6;
case 0x5f35da:c.instructions+=4;goto B5f35da;
case 0x5f35de:c.instructions+=3;goto B5f35de;
case 0x5f35e4:c.instructions+=2;goto B5f35e4;
case 0x5f35e8:c.instructions+=1;goto B5f35e8;
case 0x5f35ed:goto L5f35ed;
case 0x5f35f1:c.instructions+=10;goto B5f35f1;
case 0x5f35f5:c.instructions+=9;goto B5f35f5;
case 0x5f35f9:c.instructions+=8;goto B5f35f9;
case 0x5f35fd:c.instructions+=7;goto B5f35fd;
case 0x5f3601:c.instructions+=6;goto B5f3601;
case 0x5f3602:c.instructions+=5;goto B5f3602;
case 0x5f3606:c.instructions+=4;goto B5f3606;
case 0x5f3607:c.instructions+=3;goto B5f3607;
case 0x5f3609:c.instructions+=2;goto B5f3609;
case 0x5f360d:c.instructions+=1;goto B5f360d;
case 0x5f3612:goto L5f3612;
case 0x5f3616:c.instructions+=8;goto B5f3616;
case 0x5f361a:c.instructions+=7;goto B5f361a;
case 0x5f361c:c.instructions+=6;goto B5f361c;
case 0x5f361f:c.instructions+=5;goto B5f361f;
case 0x5f3620:c.instructions+=4;goto B5f3620;
case 0x5f3621:c.instructions+=3;goto B5f3621;
case 0x5f3628:c.instructions+=2;goto B5f3628;
case 0x5f362b:c.instructions+=1;goto B5f362b;
case 0x5f3630:goto L5f3630;
case 0x5f3633:c.instructions+=2;goto B5f3633;
case 0x5f363a:c.instructions+=1;goto B5f363a;
case 0x5f363f:goto L5f363f;
case 0x5f3646:c.instructions+=9;goto B5f3646;
case 0x5f3649:c.instructions+=8;goto B5f3649;
case 0x5f364f:c.instructions+=7;goto B5f364f;
case 0x5f3653:c.instructions+=6;goto B5f3653;
case 0x5f3657:c.instructions+=5;goto B5f3657;
case 0x5f3659:c.instructions+=4;goto B5f3659;
case 0x5f365f:c.instructions+=3;goto B5f365f;
case 0x5f3661:c.instructions+=2;goto B5f3661;
case 0x5f3664:c.instructions+=1;goto B5f3664;
case 0x5f3666:goto L5f3666;
case 0x5f3668:c.instructions+=1;goto B5f3668;
case 0x5f366e:goto L5f366e;
case 0x5f3674:c.instructions+=4;goto B5f3674;
case 0x5f3676:c.instructions+=3;goto B5f3676;
case 0x5f3678:c.instructions+=2;goto B5f3678;
case 0x5f367b:c.instructions+=1;goto B5f367b;
case 0x5f367d:goto L5f367d;
case 0x5f367f:c.instructions+=1;goto B5f367f;
case 0x5f3685:goto L5f3685;
case 0x5f368a:goto L5f368a;
case 0x5f368d:c.instructions+=3;goto B5f368d;
case 0x5f3693:c.instructions+=2;goto B5f3693;
case 0x5f369a:c.instructions+=1;goto B5f369a;
case 0x5f369f:goto L5f369f;
case 0x5f36a6:c.instructions+=8;goto B5f36a6;
case 0x5f36a8:c.instructions+=7;goto B5f36a8;
case 0x5f36af:c.instructions+=6;goto B5f36af;
case 0x5f36b3:c.instructions+=5;goto B5f36b3;
case 0x5f36b4:c.instructions+=4;goto B5f36b4;
case 0x5f36b8:c.instructions+=3;goto B5f36b8;
case 0x5f36b9:c.instructions+=2;goto B5f36b9;
case 0x5f36ba:c.instructions+=1;goto B5f36ba;
case 0x5f36bf:goto L5f36bf;
case 0x5f36c1:c.instructions+=7;goto B5f36c1;
case 0x5f36c8:c.instructions+=6;goto B5f36c8;
case 0x5f36cc:c.instructions+=5;goto B5f36cc;
case 0x5f36d0:c.instructions+=4;goto B5f36d0;
case 0x5f36d1:c.instructions+=3;goto B5f36d1;
case 0x5f36d2:c.instructions+=2;goto B5f36d2;
case 0x5f36d3:c.instructions+=1;goto B5f36d3;
case 0x5f36d8:goto L5f36d8;
case 0x5f36dc:c.instructions+=6;goto B5f36dc;
case 0x5f36e0:c.instructions+=5;goto B5f36e0;
case 0x5f36e3:c.instructions+=4;goto B5f36e3;
case 0x5f36e7:c.instructions+=3;goto B5f36e7;
case 0x5f36eb:c.instructions+=2;goto B5f36eb;
case 0x5f36ef:c.instructions+=1;goto B5f36ef;
case 0x5f36f3:goto L5f36f3;
case 0x5f36f9:c.instructions+=2;goto B5f36f9;
case 0x5f36fb:c.instructions+=1;goto B5f36fb;
case 0x5f36fd:goto L5f36fd;
case 0x5f3700:c.instructions+=5;goto B5f3700;
case 0x5f3703:c.instructions+=4;goto B5f3703;
case 0x5f3704:c.instructions+=3;goto B5f3704;
case 0x5f3707:c.instructions+=2;goto B5f3707;
case 0x5f3708:c.instructions+=1;goto B5f3708;
case 0x5f370d:goto L5f370d;
case 0x5f3710:c.instructions+=1;goto B5f3710;
case 0x5f3712:goto L5f3712;
case 0x5f3718:goto L5f3718;
case 0x5f371a:c.instructions+=3;goto B5f371a;
case 0x5f3720:c.instructions+=2;goto B5f3720;
case 0x5f3722:c.instructions+=1;goto B5f3722;
case 0x5f3727:goto L5f3727;
case 0x5f3729:c.instructions+=1;goto B5f3729;
case 0x5f372b:goto L5f372b;
case 0x5f372e:c.instructions+=3;goto B5f372e;
case 0x5f3733:c.instructions+=2;goto B5f3733;
case 0x5f3734:c.instructions+=1;goto B5f3734;
case 0x5f3739:goto L5f3739;
case 0x5f373c:c.instructions+=2;goto B5f373c;
case 0x5f373e:c.instructions+=1;goto B5f373e;
case 0x5f3740:goto L5f3740;
case 0x5f3746:c.instructions+=4;goto B5f3746;
case 0x5f374c:c.instructions+=3;goto B5f374c;
case 0x5f374d:c.instructions+=2;goto B5f374d;
case 0x5f374e:c.instructions+=1;goto B5f374e;
case 0x5f3753:goto L5f3753;
case 0x5f3756:c.instructions+=4;goto B5f3756;
case 0x5f3758:c.instructions+=3;goto B5f3758;
case 0x5f375a:c.instructions+=2;goto B5f375a;
case 0x5f3761:c.instructions+=1;goto B5f3761;
case 0x5f3763:goto L5f3763;
case 0x5f376c:goto L5f376c;
case 0x5f3771:c.instructions+=7;goto B5f3771;
case 0x5f3772:c.instructions+=6;goto B5f3772;
case 0x5f3776:c.instructions+=5;goto B5f3776;
case 0x5f3777:c.instructions+=4;goto B5f3777;
case 0x5f377b:c.instructions+=3;goto B5f377b;
case 0x5f3780:c.instructions+=2;goto B5f3780;
case 0x5f3781:c.instructions+=1;goto B5f3781;
case 0x5f3786:goto L5f3786;
case 0x5f378c:c.instructions+=4;goto B5f378c;
case 0x5f378f:c.instructions+=3;goto B5f378f;
case 0x5f3793:c.instructions+=2;goto B5f3793;
case 0x5f3794:c.instructions+=1;goto B5f3794;
case 0x5f3799:goto L5f3799;
case 0x5f379c:c.instructions+=5;goto B5f379c;
case 0x5f37a2:c.instructions+=4;goto B5f37a2;
case 0x5f37a4:c.instructions+=3;goto B5f37a4;
case 0x5f37a6:c.instructions+=2;goto B5f37a6;
case 0x5f37a7:c.instructions+=1;goto B5f37a7;
case 0x5f37ac:goto L5f37ac;
case 0x5f37b2:c.instructions+=13;goto B5f37b2;
case 0x5f37b5:c.instructions+=12;goto B5f37b5;
case 0x5f37b7:c.instructions+=11;goto B5f37b7;
case 0x5f37ba:c.instructions+=10;goto B5f37ba;
case 0x5f37be:c.instructions+=9;goto B5f37be;
case 0x5f37bf:c.instructions+=8;goto B5f37bf;
case 0x5f37c3:c.instructions+=7;goto B5f37c3;
case 0x5f37ca:c.instructions+=6;goto B5f37ca;
case 0x5f37ce:c.instructions+=5;goto B5f37ce;
case 0x5f37d2:c.instructions+=4;goto B5f37d2;
case 0x5f37d3:c.instructions+=3;goto B5f37d3;
case 0x5f37d7:c.instructions+=2;goto B5f37d7;
case 0x5f37d8:c.instructions+=1;goto B5f37d8;
case 0x5f37dd:goto L5f37dd;
case 0x5f37e3:c.instructions+=7;goto B5f37e3;
case 0x5f37e4:c.instructions+=6;goto B5f37e4;
case 0x5f37e8:c.instructions+=5;goto B5f37e8;
case 0x5f37e9:c.instructions+=4;goto B5f37e9;
case 0x5f37ed:c.instructions+=3;goto B5f37ed;
case 0x5f37f2:c.instructions+=2;goto B5f37f2;
case 0x5f37f3:c.instructions+=1;goto B5f37f3;
case 0x5f37f8:goto L5f37f8;
case 0x5f37fe:c.instructions+=4;goto B5f37fe;
case 0x5f3801:c.instructions+=3;goto B5f3801;
case 0x5f3805:c.instructions+=2;goto B5f3805;
case 0x5f3806:c.instructions+=1;goto B5f3806;
case 0x5f380b:goto L5f380b;
case 0x5f3811:c.instructions+=4;goto B5f3811;
case 0x5f3813:c.instructions+=3;goto B5f3813;
case 0x5f3815:c.instructions+=2;goto B5f3815;
case 0x5f3816:c.instructions+=1;goto B5f3816;
case 0x5f381b:goto L5f381b;
case 0x5f381d:c.instructions+=1;goto B5f381d;
case 0x5f381f:goto L5f381f;
case 0x5f3825:c.instructions+=9;goto B5f3825;
case 0x5f3828:c.instructions+=8;goto B5f3828;
case 0x5f382b:c.instructions+=7;goto B5f382b;
case 0x5f382e:c.instructions+=6;goto B5f382e;
case 0x5f3830:c.instructions+=5;goto B5f3830;
case 0x5f3832:c.instructions+=4;goto B5f3832;
case 0x5f3836:c.instructions+=3;goto B5f3836;
case 0x5f383a:c.instructions+=2;goto B5f383a;
case 0x5f383e:c.instructions+=1;goto B5f383e;
case 0x5f3840:goto L5f3840;
case 0x5f3846:c.instructions+=13;goto B5f3846;
case 0x5f3849:c.instructions+=12;goto B5f3849;
case 0x5f384b:c.instructions+=11;goto B5f384b;
case 0x5f384e:c.instructions+=10;goto B5f384e;
case 0x5f3852:c.instructions+=9;goto B5f3852;
case 0x5f3853:c.instructions+=8;goto B5f3853;
case 0x5f3857:c.instructions+=7;goto B5f3857;
case 0x5f385e:c.instructions+=6;goto B5f385e;
case 0x5f3862:c.instructions+=5;goto B5f3862;
case 0x5f3866:c.instructions+=4;goto B5f3866;
case 0x5f3867:c.instructions+=3;goto B5f3867;
case 0x5f386b:c.instructions+=2;goto B5f386b;
case 0x5f386c:c.instructions+=1;goto B5f386c;
case 0x5f3871:goto L5f3871;
case 0x5f3874:goto L5f3874;
case 0x5f3878:c.instructions+=11;goto B5f3878;
case 0x5f3879:c.instructions+=10;goto B5f3879;
case 0x5f387d:c.instructions+=9;goto B5f387d;
case 0x5f387e:c.instructions+=8;goto B5f387e;
case 0x5f3882:c.instructions+=7;goto B5f3882;
case 0x5f3883:c.instructions+=6;goto B5f3883;
case 0x5f3889:c.instructions+=5;goto B5f3889;
case 0x5f388a:c.instructions+=4;goto B5f388a;
case 0x5f3895:c.instructions+=3;goto B5f3895;
case 0x5f38a0:c.instructions+=2;goto B5f38a0;
case 0x5f38ab:c.instructions+=1;goto B5f38ab;
case 0x5f38b0:goto L5f38b0;
case 0x5f38b3:c.instructions+=6;goto B5f38b3;
case 0x5f38b9:c.instructions+=5;goto B5f38b9;
case 0x5f38bc:c.instructions+=4;goto B5f38bc;
case 0x5f38be:c.instructions+=3;goto B5f38be;
case 0x5f38bf:c.instructions+=2;goto B5f38bf;
case 0x5f38c0:c.instructions+=1;goto B5f38c0;
case 0x5f38c5:goto L5f38c5;
case 0x5f38cb:c.instructions+=5;goto B5f38cb;
case 0x5f38ce:c.instructions+=4;goto B5f38ce;
case 0x5f38d5:c.instructions+=3;goto B5f38d5;
case 0x5f38da:c.instructions+=2;goto B5f38da;
case 0x5f38df:c.instructions+=1;goto B5f38df;
case 0x5f38e5:goto L5f38e5;
case 0x5f38e7:c.instructions+=7;goto B5f38e7;
case 0x5f38e8:c.instructions+=6;goto B5f38e8;
case 0x5f38ec:c.instructions+=5;goto B5f38ec;
case 0x5f38ed:c.instructions+=4;goto B5f38ed;
case 0x5f38f1:c.instructions+=3;goto B5f38f1;
case 0x5f38f6:c.instructions+=2;goto B5f38f6;
case 0x5f38f7:c.instructions+=1;goto B5f38f7;
case 0x5f38fc:goto L5f38fc;
case 0x5f3900:c.instructions+=6;goto B5f3900;
case 0x5f3901:c.instructions+=5;goto B5f3901;
case 0x5f3908:c.instructions+=4;goto B5f3908;
case 0x5f3909:c.instructions+=3;goto B5f3909;
case 0x5f390d:c.instructions+=2;goto B5f390d;
case 0x5f390e:c.instructions+=1;goto B5f390e;
case 0x5f3913:goto L5f3913;
case 0x5f3917:c.instructions+=7;goto B5f3917;
case 0x5f3918:c.instructions+=6;goto B5f3918;
case 0x5f391c:c.instructions+=5;goto B5f391c;
case 0x5f391d:c.instructions+=4;goto B5f391d;
case 0x5f391e:c.instructions+=3;goto B5f391e;
case 0x5f3924:c.instructions+=2;goto B5f3924;
case 0x5f3925:c.instructions+=1;goto B5f3925;
case 0x5f392a:goto L5f392a;
case 0x5f392d:c.instructions+=4;goto B5f392d;
case 0x5f3930:c.instructions+=3;goto B5f3930;
case 0x5f3933:c.instructions+=2;goto B5f3933;
case 0x5f3939:c.instructions+=1;goto B5f3939;
case 0x5f393b:goto L5f393b;
case 0x5f3940:c.instructions+=5;goto B5f3940;
case 0x5f3947:c.instructions+=4;goto B5f3947;
case 0x5f3948:c.instructions+=3;goto B5f3948;
case 0x5f394f:c.instructions+=2;goto B5f394f;
case 0x5f3950:c.instructions+=1;goto B5f3950;
case 0x5f3955:goto L5f3955;
case 0x5f3959:c.instructions+=13;goto B5f3959;
case 0x5f395d:c.instructions+=12;goto B5f395d;
case 0x5f3961:c.instructions+=11;goto B5f3961;
case 0x5f3965:c.instructions+=10;goto B5f3965;
case 0x5f3969:c.instructions+=9;goto B5f3969;
case 0x5f396d:c.instructions+=8;goto B5f396d;
case 0x5f396e:c.instructions+=7;goto B5f396e;
case 0x5f3975:c.instructions+=6;goto B5f3975;
case 0x5f3979:c.instructions+=5;goto B5f3979;
case 0x5f397a:c.instructions+=4;goto B5f397a;
case 0x5f397e:c.instructions+=3;goto B5f397e;
case 0x5f397f:c.instructions+=2;goto B5f397f;
case 0x5f3987:c.instructions+=1;goto B5f3987;
case 0x5f398c:goto L5f398c;
case 0x5f398f:c.instructions+=6;goto B5f398f;
case 0x5f3993:c.instructions+=5;goto B5f3993;
case 0x5f3994:c.instructions+=4;goto B5f3994;
case 0x5f399b:c.instructions+=3;goto B5f399b;
case 0x5f399c:c.instructions+=2;goto B5f399c;
case 0x5f399e:c.instructions+=1;goto B5f399e;
case 0x5f39a3:goto L5f39a3;
case 0x5f39a9:c.instructions+=10;goto B5f39a9;
case 0x5f39af:c.instructions+=9;goto B5f39af;
case 0x5f39b5:c.instructions+=8;goto B5f39b5;
case 0x5f39bb:c.instructions+=7;goto B5f39bb;
case 0x5f39bc:c.instructions+=6;goto B5f39bc;
case 0x5f39c2:c.instructions+=5;goto B5f39c2;
case 0x5f39c3:c.instructions+=4;goto B5f39c3;
case 0x5f39c4:c.instructions+=3;goto B5f39c4;
case 0x5f39c6:c.instructions+=2;goto B5f39c6;
case 0x5f39c7:c.instructions+=1;goto B5f39c7;
case 0x5f39d0:goto L5f39d0;
case 0x5f39d1:c.instructions+=5;goto B5f39d1;
case 0x5f39d2:c.instructions+=4;goto B5f39d2;
case 0x5f39d4:c.instructions+=3;goto B5f39d4;
case 0x5f39d5:c.instructions+=2;goto B5f39d5;
case 0x5f39d6:c.instructions+=1;goto B5f39d6;
case 0x5f39db:goto L5f39db;
case 0x5f39dd:c.instructions+=4;goto B5f39dd;
case 0x5f39e0:c.instructions+=3;goto B5f39e0;
case 0x5f39e3:c.instructions+=2;goto B5f39e3;
case 0x5f39e5:c.instructions+=1;goto B5f39e5;
case 0x5f39eb:goto L5f39eb;
case 0x5f39f0:c.instructions+=2;goto B5f39f0;
case 0x5f39f2:c.instructions+=1;goto B5f39f2;
case 0x5f39f4:goto L5f39f4;
case 0x5f39f9:c.instructions+=2;goto B5f39f9;
case 0x5f39fb:c.instructions+=1;goto B5f39fb;
case 0x5f3a01:goto L5f3a01;
case 0x5f3a0b:c.instructions+=1;goto B5f3a0b;
case 0x5f3a0d:goto L5f3a0d;
case 0x5f3a12:c.instructions+=2;goto B5f3a12;
case 0x5f3a14:c.instructions+=1;goto B5f3a14;
case 0x5f3a16:goto L5f3a16;
case 0x5f3a1d:c.instructions+=1;goto B5f3a1d;
case 0x5f3a23:goto L5f3a23;
case 0x5f3a28:c.instructions+=2;goto B5f3a28;
case 0x5f3a2b:c.instructions+=1;goto B5f3a2b;
case 0x5f3a2d:goto L5f3a2d;
case 0x5f3a30:c.instructions+=2;goto B5f3a30;
case 0x5f3a33:c.instructions+=1;goto B5f3a33;
case 0x5f3a3b:goto L5f3a3b;
case 0x5f3a3c:c.instructions+=7;goto B5f3a3c;
case 0x5f3a3d:c.instructions+=6;goto B5f3a3d;
case 0x5f3a40:c.instructions+=5;goto B5f3a40;
case 0x5f3a42:c.instructions+=4;goto B5f3a42;
case 0x5f3a47:c.instructions+=3;goto B5f3a47;
case 0x5f3a49:c.instructions+=2;goto B5f3a49;
case 0x5f3a4b:c.instructions+=1;goto B5f3a4b;
case 0x5f3a50:goto L5f3a50;
case 0x5f3a56:c.instructions+=2;goto B5f3a56;
case 0x5f3a58:c.instructions+=1;goto B5f3a58;
case 0x5f3a5a:goto L5f3a5a;
case 0x5f3a5c:c.instructions+=1;goto B5f3a5c;
case 0x5f3a5e:goto L5f3a5e;
case 0x5f3a61:c.instructions+=7;goto B5f3a61;
case 0x5f3a64:c.instructions+=6;goto B5f3a64;
case 0x5f3a66:c.instructions+=5;goto B5f3a66;
case 0x5f3a68:c.instructions+=4;goto B5f3a68;
case 0x5f3a6b:c.instructions+=3;goto B5f3a6b;
case 0x5f3a6d:c.instructions+=2;goto B5f3a6d;
case 0x5f3a70:c.instructions+=1;goto B5f3a70;
case 0x5f3a72:goto L5f3a72;
case 0x5f3a78:c.instructions+=4;goto B5f3a78;
case 0x5f3a7e:c.instructions+=3;goto B5f3a7e;
case 0x5f3a80:c.instructions+=2;goto B5f3a80;
case 0x5f3a83:c.instructions+=1;goto B5f3a83;
case 0x5f3a85:goto L5f3a85;
case 0x5f3a8a:c.instructions+=1;goto B5f3a8a;
case 0x5f3a8c:goto L5f3a8c;
case 0x5f3a8e:goto L5f3a8e;
case 0x5f3a92:c.instructions+=5;goto B5f3a92;
case 0x5f3a94:c.instructions+=4;goto B5f3a94;
case 0x5f3a95:c.instructions+=3;goto B5f3a95;
case 0x5f3a97:c.instructions+=2;goto B5f3a97;
case 0x5f3a98:c.instructions+=1;goto B5f3a98;
case 0x5f3a9a:goto L5f3a9a;
case 0x5f3aa0:c.instructions+=2;goto B5f3aa0;
case 0x5f3aa2:c.instructions+=1;goto B5f3aa2;
case 0x5f3aa4:goto L5f3aa4;
case 0x5f3aa9:c.instructions+=1;goto B5f3aa9;
case 0x5f3aab:goto L5f3aab;
case 0x5f3aad:goto L5f3aad;
case 0x5f3aaf:c.instructions+=1;goto B5f3aaf;
case 0x5f3ab1:goto L5f3ab1;
case 0x5f3ab2:c.instructions+=4;goto B5f3ab2;
case 0x5f3abc:c.instructions+=3;goto B5f3abc;
case 0x5f3abd:c.instructions+=2;goto B5f3abd;
case 0x5f3abe:c.instructions+=1;goto B5f3abe;
case 0x5f3abf:goto L5f3abf;
case 0x5f3ac6:c.instructions+=1;goto B5f3ac6;
case 0x5f3ac8:goto L5f3ac8;
case 0x5f3ad2:goto L5f3ad2;
case 0x5f3ad3:c.instructions+=3;goto B5f3ad3;
case 0x5f3ad4:c.instructions+=2;goto B5f3ad4;
case 0x5f3ad5:c.instructions+=1;goto B5f3ad5;
case 0x5f3ae0:goto L5f3ae0;
case 0x5f3ae1:c.instructions+=9;goto B5f3ae1;
case 0x5f3ae3:c.instructions+=8;goto B5f3ae3;
case 0x5f3ae6:c.instructions+=7;goto B5f3ae6;
case 0x5f3ae9:c.instructions+=6;goto B5f3ae9;
case 0x5f3af0:c.instructions+=5;goto B5f3af0;
case 0x5f3af1:c.instructions+=4;goto B5f3af1;
case 0x5f3af2:c.instructions+=3;goto B5f3af2;
case 0x5f3af3:c.instructions+=2;goto B5f3af3;
case 0x5f3af5:c.instructions+=1;goto B5f3af5;
case 0x5f3afb:goto L5f3afb;
case 0x5f3afe:c.instructions+=2;goto B5f3afe;
case 0x5f3b00:c.instructions+=1;goto B5f3b00;
case 0x5f3b06:goto L5f3b06;
case 0x5f3b0c:c.instructions+=2;goto B5f3b0c;
case 0x5f3b0e:c.instructions+=1;goto B5f3b0e;
case 0x5f3b14:goto L5f3b14;
case 0x5f3b17:c.instructions+=1;goto B5f3b17;
case 0x5f3b1d:goto L5f3b1d;
case 0x5f3b23:c.instructions+=2;goto B5f3b23;
case 0x5f3b25:c.instructions+=1;goto B5f3b25;
case 0x5f3b2b:goto L5f3b2b;
case 0x5f3b2f:c.instructions+=1;goto B5f3b2f;
case 0x5f3b35:goto L5f3b35;
case 0x5f3b38:c.instructions+=2;goto B5f3b38;
case 0x5f3b3a:c.instructions+=1;goto B5f3b3a;
case 0x5f3b3c:goto L5f3b3c;
case 0x5f3b3f:c.instructions+=1;goto B5f3b3f;
case 0x5f3b41:goto L5f3b41;
case 0x5f3b43:goto L5f3b43;
case 0x5f3b45:c.instructions+=1;goto B5f3b45;
case 0x5f3b4b:goto L5f3b4b;
case 0x5f3b51:c.instructions+=2;goto B5f3b51;
case 0x5f3b53:c.instructions+=1;goto B5f3b53;
case 0x5f3b59:goto L5f3b59;
case 0x5f3b5b:c.instructions+=1;goto B5f3b5b;
case 0x5f3b61:goto L5f3b61;
case 0x5f3b64:c.instructions+=4;goto B5f3b64;
case 0x5f3b6a:c.instructions+=3;goto B5f3b6a;
case 0x5f3b6c:c.instructions+=2;goto B5f3b6c;
case 0x5f3b6f:c.instructions+=1;goto B5f3b6f;
case 0x5f3b71:goto L5f3b71;
case 0x5f3b73:c.instructions+=8;goto B5f3b73;
case 0x5f3b79:c.instructions+=7;goto B5f3b79;
case 0x5f3b7c:c.instructions+=6;goto B5f3b7c;
case 0x5f3b7f:c.instructions+=5;goto B5f3b7f;
case 0x5f3b80:c.instructions+=4;goto B5f3b80;
case 0x5f3b81:c.instructions+=3;goto B5f3b81;
case 0x5f3b82:c.instructions+=2;goto B5f3b82;
case 0x5f3b84:c.instructions+=1;goto B5f3b84;
case 0x5f3b89:goto L5f3b89;
case 0x5f3b8e:c.instructions+=1;goto B5f3b8e;
case 0x5f3b93:goto L5f3b93;
case 0x5f3b95:c.instructions+=1;goto B5f3b95;
case 0x5f3b9b:goto L5f3b9b;
case 0x5f3b9d:c.instructions+=1;goto B5f3b9d;
case 0x5f3ba2:goto L5f3ba2;
case 0x5f3ba4:c.instructions+=3;goto B5f3ba4;
case 0x5f3ba7:c.instructions+=2;goto B5f3ba7;
case 0x5f3ba9:c.instructions+=1;goto B5f3ba9;
case 0x5f3baf:goto L5f3baf;
case 0x5f3bb5:c.instructions+=2;goto B5f3bb5;
case 0x5f3bb7:c.instructions+=1;goto B5f3bb7;
case 0x5f3bbd:goto L5f3bbd;
case 0x5f3bbf:c.instructions+=8;goto B5f3bbf;
case 0x5f3bc1:c.instructions+=7;goto B5f3bc1;
case 0x5f3bc8:c.instructions+=6;goto B5f3bc8;
case 0x5f3bcc:c.instructions+=5;goto B5f3bcc;
case 0x5f3bd0:c.instructions+=4;goto B5f3bd0;
case 0x5f3bd1:c.instructions+=3;goto B5f3bd1;
case 0x5f3bd2:c.instructions+=2;goto B5f3bd2;
case 0x5f3bd3:c.instructions+=1;goto B5f3bd3;
case 0x5f3bd8:goto L5f3bd8;
case 0x5f3bda:c.instructions+=6;goto B5f3bda;
case 0x5f3bdf:c.instructions+=5;goto B5f3bdf;
case 0x5f3be2:c.instructions+=4;goto B5f3be2;
case 0x5f3be3:c.instructions+=3;goto B5f3be3;
case 0x5f3be6:c.instructions+=2;goto B5f3be6;
case 0x5f3be7:c.instructions+=1;goto B5f3be7;
case 0x5f3bec:goto L5f3bec;
case 0x5f3bef:c.instructions+=14;goto B5f3bef;
case 0x5f3bf5:c.instructions+=13;goto B5f3bf5;
case 0x5f3bf9:c.instructions+=12;goto B5f3bf9;
case 0x5f3bfc:c.instructions+=11;goto B5f3bfc;
case 0x5f3c00:c.instructions+=10;goto B5f3c00;
case 0x5f3c03:c.instructions+=9;goto B5f3c03;
case 0x5f3c04:c.instructions+=8;goto B5f3c04;
case 0x5f3c08:c.instructions+=7;goto B5f3c08;
case 0x5f3c0a:c.instructions+=6;goto B5f3c0a;
case 0x5f3c0c:c.instructions+=5;goto B5f3c0c;
case 0x5f3c10:c.instructions+=4;goto B5f3c10;
case 0x5f3c14:c.instructions+=3;goto B5f3c14;
case 0x5f3c1c:c.instructions+=2;goto B5f3c1c;
case 0x5f3c24:c.instructions+=1;goto B5f3c24;
case 0x5f3c29:goto L5f3c29;
case 0x5f3c2d:c.instructions+=9;goto B5f3c2d;
case 0x5f3c31:c.instructions+=8;goto B5f3c31;
case 0x5f3c35:c.instructions+=7;goto B5f3c35;
case 0x5f3c36:c.instructions+=6;goto B5f3c36;
case 0x5f3c39:c.instructions+=5;goto B5f3c39;
case 0x5f3c3d:c.instructions+=4;goto B5f3c3d;
case 0x5f3c41:c.instructions+=3;goto B5f3c41;
case 0x5f3c49:c.instructions+=2;goto B5f3c49;
case 0x5f3c51:c.instructions+=1;goto B5f3c51;
case 0x5f3c56:goto L5f3c56;
case 0x5f3c5a:c.instructions+=7;goto B5f3c5a;
case 0x5f3c5b:c.instructions+=6;goto B5f3c5b;
case 0x5f3c5e:c.instructions+=5;goto B5f3c5e;
case 0x5f3c66:c.instructions+=4;goto B5f3c66;
case 0x5f3c6e:c.instructions+=3;goto B5f3c6e;
case 0x5f3c76:c.instructions+=2;goto B5f3c76;
case 0x5f3c7e:c.instructions+=1;goto B5f3c7e;
case 0x5f3c83:goto L5f3c83;
case 0x5f3c89:c.instructions+=7;goto B5f3c89;
case 0x5f3c8c:c.instructions+=6;goto B5f3c8c;
case 0x5f3c8e:c.instructions+=5;goto B5f3c8e;
case 0x5f3c90:c.instructions+=4;goto B5f3c90;
case 0x5f3c92:c.instructions+=3;goto B5f3c92;
case 0x5f3c93:c.instructions+=2;goto B5f3c93;
case 0x5f3c94:c.instructions+=1;goto B5f3c94;
case 0x5f3c99:goto L5f3c99;
case 0x5f3c9a:c.instructions+=5;goto B5f3c9a;
case 0x5f3c9b:c.instructions+=4;goto B5f3c9b;
case 0x5f3c9c:c.instructions+=3;goto B5f3c9c;
case 0x5f3c9e:c.instructions+=2;goto B5f3c9e;
case 0x5f3c9f:c.instructions+=1;goto B5f3c9f;
case 0x5f3cb0:goto L5f3cb0;
case 0x5f3cb1:c.instructions+=10;goto B5f3cb1;
case 0x5f3cb3:c.instructions+=9;goto B5f3cb3;
case 0x5f3cb6:c.instructions+=8;goto B5f3cb6;
case 0x5f3cb9:c.instructions+=7;goto B5f3cb9;
case 0x5f3cbe:c.instructions+=6;goto B5f3cbe;
case 0x5f3cc0:c.instructions+=5;goto B5f3cc0;
case 0x5f3cc1:c.instructions+=4;goto B5f3cc1;
case 0x5f3cc2:c.instructions+=3;goto B5f3cc2;
case 0x5f3cc3:c.instructions+=2;goto B5f3cc3;
case 0x5f3cc5:c.instructions+=1;goto B5f3cc5;
case 0x5f3ccb:goto L5f3ccb;
case 0x5f3cce:c.instructions+=4;goto B5f3cce;
case 0x5f3cd1:c.instructions+=3;goto B5f3cd1;
case 0x5f3cd6:c.instructions+=2;goto B5f3cd6;
case 0x5f3cd8:c.instructions+=1;goto B5f3cd8;
case 0x5f3cde:goto L5f3cde;
case 0x5f3ce4:c.instructions+=2;goto B5f3ce4;
case 0x5f3ce6:c.instructions+=1;goto B5f3ce6;
case 0x5f3cec:goto L5f3cec;
case 0x5f3cef:c.instructions+=1;goto B5f3cef;
case 0x5f3cf5:goto L5f3cf5;
case 0x5f3cf8:c.instructions+=3;goto B5f3cf8;
case 0x5f3cfa:c.instructions+=2;goto B5f3cfa;
case 0x5f3cfc:c.instructions+=1;goto B5f3cfc;
case 0x5f3cff:goto L5f3cff;
case 0x5f3d01:c.instructions+=2;goto B5f3d01;
case 0x5f3d05:c.instructions+=1;goto B5f3d05;
case 0x5f3d0a:goto L5f3d0a;
case 0x5f3d0c:c.instructions+=3;goto B5f3d0c;
case 0x5f3d12:c.instructions+=2;goto B5f3d12;
case 0x5f3d15:c.instructions+=1;goto B5f3d15;
case 0x5f3d17:goto L5f3d17;
case 0x5f3d1a:c.instructions+=1;goto B5f3d1a;
case 0x5f3d20:goto L5f3d20;
case 0x5f3d22:c.instructions+=1;goto B5f3d22;
case 0x5f3d28:goto L5f3d28;
case 0x5f3d2b:c.instructions+=2;goto B5f3d2b;
case 0x5f3d2d:c.instructions+=1;goto B5f3d2d;
case 0x5f3d33:goto L5f3d33;
case 0x5f3d37:c.instructions+=10;goto B5f3d37;
case 0x5f3d38:c.instructions+=9;goto B5f3d38;
case 0x5f3d3b:c.instructions+=8;goto B5f3d3b;
case 0x5f3d3f:c.instructions+=7;goto B5f3d3f;
case 0x5f3d40:c.instructions+=6;goto B5f3d40;
case 0x5f3d44:c.instructions+=5;goto B5f3d44;
case 0x5f3d47:c.instructions+=4;goto B5f3d47;
case 0x5f3d48:c.instructions+=3;goto B5f3d48;
case 0x5f3d49:c.instructions+=2;goto B5f3d49;
case 0x5f3d4b:c.instructions+=1;goto B5f3d4b;
case 0x5f3d50:goto L5f3d50;
case 0x5f3d53:c.instructions+=2;goto B5f3d53;
case 0x5f3d57:c.instructions+=1;goto B5f3d57;
case 0x5f3d59:goto L5f3d59;
case 0x5f3d5b:c.instructions+=1;goto B5f3d5b;
case 0x5f3d60:goto L5f3d60;
case 0x5f3d64:c.instructions+=11;goto B5f3d64;
case 0x5f3d68:c.instructions+=10;goto B5f3d68;
case 0x5f3d69:c.instructions+=9;goto B5f3d69;
case 0x5f3d6b:c.instructions+=8;goto B5f3d6b;
case 0x5f3d6f:c.instructions+=7;goto B5f3d6f;
case 0x5f3d73:c.instructions+=6;goto B5f3d73;
case 0x5f3d75:c.instructions+=5;goto B5f3d75;
case 0x5f3d76:c.instructions+=4;goto B5f3d76;
case 0x5f3d7a:c.instructions+=3;goto B5f3d7a;
case 0x5f3d7b:c.instructions+=2;goto B5f3d7b;
case 0x5f3d7d:c.instructions+=1;goto B5f3d7d;
case 0x5f3d82:goto L5f3d82;
case 0x5f3d84:c.instructions+=1;goto B5f3d84;
case 0x5f3d86:goto L5f3d86;
case 0x5f3d8c:c.instructions+=7;goto B5f3d8c;
case 0x5f3d8f:c.instructions+=6;goto B5f3d8f;
case 0x5f3d93:c.instructions+=5;goto B5f3d93;
case 0x5f3d94:c.instructions+=4;goto B5f3d94;
case 0x5f3d95:c.instructions+=3;goto B5f3d95;
case 0x5f3d96:c.instructions+=2;goto B5f3d96;
case 0x5f3d98:c.instructions+=1;goto B5f3d98;
case 0x5f3d9d:goto L5f3d9d;
case 0x5f3da1:c.instructions+=12;goto B5f3da1;
case 0x5f3da5:c.instructions+=11;goto B5f3da5;
case 0x5f3da9:c.instructions+=10;goto B5f3da9;
case 0x5f3daf:c.instructions+=9;goto B5f3daf;
case 0x5f3db5:c.instructions+=8;goto B5f3db5;
case 0x5f3dbb:c.instructions+=7;goto B5f3dbb;
case 0x5f3dc2:c.instructions+=6;goto B5f3dc2;
case 0x5f3dc3:c.instructions+=5;goto B5f3dc3;
case 0x5f3dc4:c.instructions+=4;goto B5f3dc4;
case 0x5f3dc5:c.instructions+=3;goto B5f3dc5;
case 0x5f3dc7:c.instructions+=2;goto B5f3dc7;
case 0x5f3dc8:c.instructions+=1;goto B5f3dc8;
case 0x5f3dcb:goto L5f3dcb;
case 0x5f3dd1:c.instructions+=2;goto B5f3dd1;
case 0x5f3dd3:c.instructions+=1;goto B5f3dd3;
case 0x5f3dd5:goto L5f3dd5;
case 0x5f3ddb:c.instructions+=7;goto B5f3ddb;
case 0x5f3dde:c.instructions+=6;goto B5f3dde;
case 0x5f3de4:c.instructions+=5;goto B5f3de4;
case 0x5f3de5:c.instructions+=4;goto B5f3de5;
case 0x5f3de6:c.instructions+=3;goto B5f3de6;
case 0x5f3de7:c.instructions+=2;goto B5f3de7;
case 0x5f3de9:c.instructions+=1;goto B5f3de9;
case 0x5f3dee:goto L5f3dee;
case 0x5f3def:c.instructions+=5;goto B5f3def;
case 0x5f3df0:c.instructions+=4;goto B5f3df0;
case 0x5f3df1:c.instructions+=3;goto B5f3df1;
case 0x5f3df3:c.instructions+=2;goto B5f3df3;
case 0x5f3df4:c.instructions+=1;goto B5f3df4;
case 0x5f3df7:goto L5f3df7;
case 0x5f3dfe:goto L5f3dfe;
case 0x5f3dff:c.instructions+=5;goto B5f3dff;
case 0x5f3e00:c.instructions+=4;goto B5f3e00;
case 0x5f3e01:c.instructions+=3;goto B5f3e01;
case 0x5f3e03:c.instructions+=2;goto B5f3e03;
case 0x5f3e04:c.instructions+=1;goto B5f3e04;
case 0x5f3e10:goto L5f3e10;
case 0x5f3e14:c.instructions+=13;goto B5f3e14;
case 0x5f3e15:c.instructions+=12;goto B5f3e15;
case 0x5f3e17:c.instructions+=11;goto B5f3e17;
case 0x5f3e1a:c.instructions+=10;goto B5f3e1a;
case 0x5f3e1d:c.instructions+=9;goto B5f3e1d;
case 0x5f3e21:c.instructions+=8;goto B5f3e21;
case 0x5f3e27:c.instructions+=7;goto B5f3e27;
case 0x5f3e2d:c.instructions+=6;goto B5f3e2d;
case 0x5f3e30:c.instructions+=5;goto B5f3e30;
case 0x5f3e31:c.instructions+=4;goto B5f3e31;
case 0x5f3e36:c.instructions+=3;goto B5f3e36;
case 0x5f3e38:c.instructions+=2;goto B5f3e38;
case 0x5f3e3a:c.instructions+=1;goto B5f3e3a;
case 0x5f3e3c:goto L5f3e3c;
case 0x5f3e42:c.instructions+=1;goto B5f3e42;
case 0x5f3e44:goto L5f3e44;
case 0x5f3e48:goto L5f3e48;
case 0x5f3e4a:c.instructions+=3;goto B5f3e4a;
case 0x5f3e4b:c.instructions+=2;goto B5f3e4b;
case 0x5f3e4d:c.instructions+=1;goto B5f3e4d;
case 0x5f3e50:goto L5f3e50;
case 0x5f3e55:c.instructions+=2;goto B5f3e55;
case 0x5f3e56:c.instructions+=1;goto B5f3e56;
case 0x5f3e5b:goto L5f3e5b;
case 0x5f3e5e:c.instructions+=2;goto B5f3e5e;
case 0x5f3e60:c.instructions+=1;goto B5f3e60;
case 0x5f3e62:goto L5f3e62;
case 0x5f3e65:c.instructions+=2;goto B5f3e65;
case 0x5f3e68:c.instructions+=1;goto B5f3e68;
case 0x5f3e6a:goto L5f3e6a;
case 0x5f3e6c:goto L5f3e6c;
case 0x5f3e71:c.instructions+=2;goto B5f3e71;
case 0x5f3e77:c.instructions+=1;goto B5f3e77;
case 0x5f3e7c:goto L5f3e7c;
case 0x5f3e82:c.instructions+=3;goto B5f3e82;
case 0x5f3e85:c.instructions+=2;goto B5f3e85;
case 0x5f3e86:c.instructions+=1;goto B5f3e86;
case 0x5f3e8b:goto L5f3e8b;
case 0x5f3e91:c.instructions+=2;goto B5f3e91;
case 0x5f3e92:c.instructions+=1;goto B5f3e92;
case 0x5f3e97:goto L5f3e97;
case 0x5f3e9a:c.instructions+=2;goto B5f3e9a;
case 0x5f3e9c:c.instructions+=1;goto B5f3e9c;
case 0x5f3e9e:goto L5f3e9e;
case 0x5f3ea1:c.instructions+=2;goto B5f3ea1;
case 0x5f3ea4:c.instructions+=1;goto B5f3ea4;
case 0x5f3ea6:goto L5f3ea6;
case 0x5f3ea8:goto L5f3ea8;
case 0x5f3ead:c.instructions+=2;goto B5f3ead;
case 0x5f3eb3:c.instructions+=1;goto B5f3eb3;
case 0x5f3eb8:goto L5f3eb8;
case 0x5f3ebe:c.instructions+=3;goto B5f3ebe;
case 0x5f3ec1:c.instructions+=2;goto B5f3ec1;
case 0x5f3ec2:c.instructions+=1;goto B5f3ec2;
case 0x5f3ec7:goto L5f3ec7;
case 0x5f3ec9:c.instructions+=1;goto B5f3ec9;
case 0x5f3ece:goto L5f3ece;
case 0x5f3ed1:c.instructions+=2;goto B5f3ed1;
case 0x5f3ed3:c.instructions+=1;goto B5f3ed3;
case 0x5f3ed5:goto L5f3ed5;
case 0x5f3ed7:c.instructions+=5;goto B5f3ed7;
case 0x5f3eda:c.instructions+=4;goto B5f3eda;
case 0x5f3edb:c.instructions+=3;goto B5f3edb;
case 0x5f3ee1:c.instructions+=2;goto B5f3ee1;
case 0x5f3ee2:c.instructions+=1;goto B5f3ee2;
case 0x5f3ee5:goto L5f3ee5;
case 0x5f3ee7:c.instructions+=4;goto B5f3ee7;
case 0x5f3ee8:c.instructions+=3;goto B5f3ee8;
case 0x5f3eee:c.instructions+=2;goto B5f3eee;
case 0x5f3eef:c.instructions+=1;goto B5f3eef;
case 0x5f3f00:goto L5f3f00;
case 0x5f3f01:c.instructions+=4;goto B5f3f01;
case 0x5f3f04:c.instructions+=3;goto B5f3f04;
case 0x5f3f0a:c.instructions+=2;goto B5f3f0a;
case 0x5f3f0c:c.instructions+=1;goto B5f3f0c;
case 0x5f3f0e:goto L5f3f0e;
case 0x5f3f11:c.instructions+=1;goto B5f3f11;
case 0x5f3f13:goto L5f3f13;
case 0x5f3f16:c.instructions+=1;goto B5f3f16;
case 0x5f3f1c:goto L5f3f1c;
case 0x5f3f1f:c.instructions+=6;goto B5f3f1f;
case 0x5f3f25:c.instructions+=5;goto B5f3f25;
case 0x5f3f2b:c.instructions+=4;goto B5f3f2b;
case 0x5f3f31:c.instructions+=3;goto B5f3f31;
case 0x5f3f33:c.instructions+=2;goto B5f3f33;
case 0x5f3f36:c.instructions+=1;goto B5f3f36;
case 0x5f3f38:goto L5f3f38;
case 0x5f3f3d:c.instructions+=2;goto B5f3f3d;
case 0x5f3f3f:c.instructions+=1;goto B5f3f3f;
case 0x5f3f41:goto L5f3f41;
case 0x5f3f44:c.instructions+=1;goto B5f3f44;
case 0x5f3f46:goto L5f3f46;
case 0x5f3f49:c.instructions+=5;goto B5f3f49;
case 0x5f3f4f:c.instructions+=4;goto B5f3f4f;
case 0x5f3f55:c.instructions+=3;goto B5f3f55;
case 0x5f3f57:c.instructions+=2;goto B5f3f57;
case 0x5f3f5a:c.instructions+=1;goto B5f3f5a;
case 0x5f3f5c:goto L5f3f5c;
case 0x5f3f63:c.instructions+=1;goto B5f3f63;
case 0x5f3f65:goto L5f3f65;
case 0x5f3f6b:c.instructions+=2;goto B5f3f6b;
case 0x5f3f6d:c.instructions+=1;goto B5f3f6d;
case 0x5f3f6f:goto L5f3f6f;
case 0x5f3f74:c.instructions+=1;goto B5f3f74;
case 0x5f3f76:goto L5f3f76;
case 0x5f3f7b:c.instructions+=8;goto B5f3f7b;
case 0x5f3f81:c.instructions+=7;goto B5f3f81;
case 0x5f3f85:c.instructions+=6;goto B5f3f85;
case 0x5f3f89:c.instructions+=5;goto B5f3f89;
case 0x5f3f8f:c.instructions+=4;goto B5f3f8f;
case 0x5f3f95:c.instructions+=3;goto B5f3f95;
case 0x5f3f97:c.instructions+=2;goto B5f3f97;
case 0x5f3f9a:c.instructions+=1;goto B5f3f9a;
case 0x5f3f9c:goto L5f3f9c;
case 0x5f3f9e:c.instructions+=2;goto B5f3f9e;
case 0x5f3f9f:c.instructions+=1;goto B5f3f9f;
case 0x5f3fa0:goto L5f3fa0;
case 0x5f3fa2:c.instructions+=2;goto B5f3fa2;
case 0x5f3fa3:c.instructions+=1;goto B5f3fa3;
case 0x5f3fb0:goto L5f3fb0;
case 0x5f3fb3:c.instructions+=21;goto B5f3fb3;
case 0x5f3fb4:c.instructions+=20;goto B5f3fb4;
case 0x5f3fb6:c.instructions+=19;goto B5f3fb6;
case 0x5f3fb9:c.instructions+=18;goto B5f3fb9;
case 0x5f3fbf:c.instructions+=17;goto B5f3fbf;
case 0x5f3fc2:c.instructions+=16;goto B5f3fc2;
case 0x5f3fc8:c.instructions+=15;goto B5f3fc8;
case 0x5f3fc9:c.instructions+=14;goto B5f3fc9;
case 0x5f3fcf:c.instructions+=13;goto B5f3fcf;
case 0x5f3fd5:c.instructions+=12;goto B5f3fd5;
case 0x5f3fd7:c.instructions+=11;goto B5f3fd7;
case 0x5f3fd9:c.instructions+=10;goto B5f3fd9;
case 0x5f3fdd:c.instructions+=9;goto B5f3fdd;
case 0x5f3fe1:c.instructions+=8;goto B5f3fe1;
case 0x5f3fe5:c.instructions+=7;goto B5f3fe5;
case 0x5f3feb:c.instructions+=6;goto B5f3feb;
case 0x5f3fef:c.instructions+=5;goto B5f3fef;
case 0x5f3ff3:c.instructions+=4;goto B5f3ff3;
case 0x5f3ff9:c.instructions+=3;goto B5f3ff9;
case 0x5f3ffb:c.instructions+=2;goto B5f3ffb;
case 0x5f3ffe:c.instructions+=1;goto B5f3ffe;
default:missing_instruction(c.pc);}
B5f3010:L5f3010:{c.instructions+=5;NFSU2_TR(0x5f3010);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3011:{NFSU2_TR(0x5f3011);
__builtin_memmove((R+28),(R+4),4);
}
B5f3013:{NFSU2_TR(0x5f3013);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3016:{NFSU2_TR(0x5f3016);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3018:{NFSU2_TR(0x5f3018);
if(r1(R+518)){{goto L5f3075;}}
}
B5f301a:L5f301a:{c.instructions+=2;NFSU2_TR(0x5f301a);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f301e:{NFSU2_TR(0x5f301e);
if(r1(R+518)){{goto L5f3075;}}
}
B5f3020:L5f3020:{c.instructions+=3;NFSU2_TR(0x5f3020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3021:{NFSU2_TR(0x5f3021);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3023:{NFSU2_TR(0x5f3023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3028ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5f3028:L5f3028:{c.instructions+=4;NFSU2_TR(0x5f3028);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f302b:{NFSU2_TR(0x5f302b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f302e:{NFSU2_TR(0x5f302e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3030:{NFSU2_TR(0x5f3030);
if(r1(R+518)){{goto L5f3074;}}
}
B5f3032:L5f3032:{c.instructions+=5;NFSU2_TR(0x5f3032);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3035:{NFSU2_TR(0x5f3035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f3037:{NFSU2_TR(0x5f3037);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3038:{NFSU2_TR(0x5f3038);
__builtin_memmove((R+4),(R+24),4);
}
B5f303a:{NFSU2_TR(0x5f303a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f303dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f303d:L5f303d:{c.instructions+=4;NFSU2_TR(0x5f303d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f303f:{NFSU2_TR(0x5f303f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3041:{NFSU2_TR(0x5f3041);
__builtin_memmove((R+4),(R+24),4);
}
B5f3043:{NFSU2_TR(0x5f3043);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3046ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f3046:L5f3046:{c.instructions+=4;NFSU2_TR(0x5f3046);
__builtin_memmove((R+4),gp(0x89e7d8),1);
}
B5f304c:{NFSU2_TR(0x5f304c);
w4(R+0,u32(0x1ull));
}
B5f3051:{NFSU2_TR(0x5f3051);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3053:{NFSU2_TR(0x5f3053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f305f;}}
}
B5f3055:L5f3055:{c.instructions+=3;NFSU2_TR(0x5f3055);
__builtin_memmove((R+4),gp(0x864fac),4);
}
B5f305b:{NFSU2_TR(0x5f305b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f305d:{NFSU2_TR(0x5f305d);
if(r1(R+518)){{goto L5f3063;}}
}
B5f305f:L5f305f:{c.instructions+=1;NFSU2_TR(0x5f305f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5f3063:L5f3063:{c.instructions+=4;NFSU2_TR(0x5f3063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f3065:{NFSU2_TR(0x5f3065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3066:{NFSU2_TR(0x5f3066);
__builtin_memmove((R+4),(R+24),4);
}
B5f3068:{NFSU2_TR(0x5f3068);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f306bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f306b:L5f306b:{c.instructions+=5;NFSU2_TR(0x5f306b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f306d:{NFSU2_TR(0x5f306d);
__builtin_memmove((R+4),(R+24),4);
}
B5f306f:{NFSU2_TR(0x5f306f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3070:{NFSU2_TR(0x5f3070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3071:{NFSU2_TR(0x5f3071);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f3074:L5f3074:{c.instructions+=1;NFSU2_TR(0x5f3074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3075:L5f3075:{c.instructions+=2;NFSU2_TR(0x5f3075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3076:{NFSU2_TR(0x5f3076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3080:L5f3080:{c.instructions+=5;NFSU2_TR(0x5f3080);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3081:{NFSU2_TR(0x5f3081);
__builtin_memmove((R+28),(R+4),4);
}
B5f3083:{NFSU2_TR(0x5f3083);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3086:{NFSU2_TR(0x5f3086);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3088:{NFSU2_TR(0x5f3088);
if(r1(R+518)){{goto L5f30e3;}}
}
B5f308a:L5f308a:{c.instructions+=2;NFSU2_TR(0x5f308a);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f308e:{NFSU2_TR(0x5f308e);
if(r1(R+518)){{goto L5f30e3;}}
}
B5f3090:L5f3090:{c.instructions+=3;NFSU2_TR(0x5f3090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3091:{NFSU2_TR(0x5f3091);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3093:{NFSU2_TR(0x5f3093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3098ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B5f3098:L5f3098:{c.instructions+=4;NFSU2_TR(0x5f3098);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f309b:{NFSU2_TR(0x5f309b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f309e:{NFSU2_TR(0x5f309e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f30a0:{NFSU2_TR(0x5f30a0);
if(r1(R+518)){{goto L5f30e2;}}
}
B5f30a2:L5f30a2:{c.instructions+=5;NFSU2_TR(0x5f30a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f30a5:{NFSU2_TR(0x5f30a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f30a7:{NFSU2_TR(0x5f30a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f30a8:{NFSU2_TR(0x5f30a8);
__builtin_memmove((R+4),(R+24),4);
}
B5f30aa:{NFSU2_TR(0x5f30aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f30adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f30ad:L5f30ad:{c.instructions+=4;NFSU2_TR(0x5f30ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f30af:{NFSU2_TR(0x5f30af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f30b1:{NFSU2_TR(0x5f30b1);
__builtin_memmove((R+4),(R+24),4);
}
B5f30b3:{NFSU2_TR(0x5f30b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f30b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f30b6:L5f30b6:{c.instructions+=2;NFSU2_TR(0x5f30b6);
u8 U[5];
__builtin_memmove((U+3),gp(0x89e7d8),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f30bd:{NFSU2_TR(0x5f30bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f30cd;}}
}
B5f30bf:L5f30bf:{c.instructions+=4;NFSU2_TR(0x5f30bf);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5f30c4:{NFSU2_TR(0x5f30c4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f30c6:{NFSU2_TR(0x5f30c6);
w4(R+0,u32(0x1ull));
}
B5f30cb:{NFSU2_TR(0x5f30cb);
if(r1(R+518)){{goto L5f30d1;}}
}
B5f30cd:L5f30cd:{c.instructions+=1;NFSU2_TR(0x5f30cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5f30d1:L5f30d1:{c.instructions+=4;NFSU2_TR(0x5f30d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f30d3:{NFSU2_TR(0x5f30d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f30d4:{NFSU2_TR(0x5f30d4);
__builtin_memmove((R+4),(R+24),4);
}
B5f30d6:{NFSU2_TR(0x5f30d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f30d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f30d9:L5f30d9:{c.instructions+=5;NFSU2_TR(0x5f30d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f30db:{NFSU2_TR(0x5f30db);
__builtin_memmove((R+4),(R+24),4);
}
B5f30dd:{NFSU2_TR(0x5f30dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f30de:{NFSU2_TR(0x5f30de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f30df:{NFSU2_TR(0x5f30df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f30e2:L5f30e2:{c.instructions+=1;NFSU2_TR(0x5f30e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f30e3:L5f30e3:{c.instructions+=2;NFSU2_TR(0x5f30e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f30e4:{NFSU2_TR(0x5f30e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f30f0:L5f30f0:{c.instructions+=10;NFSU2_TR(0x5f30f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f30f1:{NFSU2_TR(0x5f30f1);
__builtin_memmove((R+20),(R+16),4);
}
B5f30f3:{NFSU2_TR(0x5f30f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f30f6:{NFSU2_TR(0x5f30f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B5f30f9:{NFSU2_TR(0x5f30f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f30fa:{NFSU2_TR(0x5f30fa);
__builtin_memmove((R+24),(R+4),4);
}
B5f30fc:{NFSU2_TR(0x5f30fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3102:{NFSU2_TR(0x5f3102);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3104:{NFSU2_TR(0x5f3104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f310e:{NFSU2_TR(0x5f310e);
if(r1(R+518)){{goto L5f328f;}}
}
B5f3114:L5f3114:{c.instructions+=2;NFSU2_TR(0x5f3114);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x11ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f3118:{NFSU2_TR(0x5f3118);
if(r1(R+518)){{goto L5f328f;}}
}
B5f311e:L5f311e:{c.instructions+=4;NFSU2_TR(0x5f311e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3121:{NFSU2_TR(0x5f3121);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3125:{NFSU2_TR(0x5f3125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3126:{NFSU2_TR(0x5f3126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f312bull));
TAIL_STATIC(0x5ecc00u,5ec);
}
B5f312b:L5f312b:{c.instructions+=5;NFSU2_TR(0x5f312b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f312f:{NFSU2_TR(0x5f312f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3130:{NFSU2_TR(0x5f3130);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3134:{NFSU2_TR(0x5f3134);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3135:{NFSU2_TR(0x5f3135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f313aull));
TAIL_STATIC(0x5baf90u,5ba);
}
B5f313a:L5f313a:{c.instructions+=7;NFSU2_TR(0x5f313a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3140:{NFSU2_TR(0x5f3140);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3143:{NFSU2_TR(0x5f3143);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3145:{NFSU2_TR(0x5f3145);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f314d:{NFSU2_TR(0x5f314d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3155:{NFSU2_TR(0x5f3155);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f315d:{NFSU2_TR(0x5f315d);
if(r1(R+518)){{goto L5f319f;}}
}
B5f315f:L5f315f:{c.instructions+=7;NFSU2_TR(0x5f315f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5f3162:{NFSU2_TR(0x5f3162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3163:{NFSU2_TR(0x5f3163);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3167:{NFSU2_TR(0x5f3167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3168:{NFSU2_TR(0x5f3168);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f316c:{NFSU2_TR(0x5f316c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f316d:{NFSU2_TR(0x5f316d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3172ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f3172:L5f3172:{c.instructions+=10;NFSU2_TR(0x5f3172);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3176:{NFSU2_TR(0x5f3176);
{u32 ea_=u32(u32(8397712u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f317c:{NFSU2_TR(0x5f317c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f317f:{NFSU2_TR(0x5f317f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3183:{NFSU2_TR(0x5f3183);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3187:{NFSU2_TR(0x5f3187);
{u32 ea_=u32(u32(8397716u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f318d:{NFSU2_TR(0x5f318d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3191:{NFSU2_TR(0x5f3191);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3195:{NFSU2_TR(0x5f3195);
{u32 ea_=u32(u32(8397720u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f319b:{NFSU2_TR(0x5f319b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f319f:L5f319f:{c.instructions+=11;NFSU2_TR(0x5f319f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f31a3:{NFSU2_TR(0x5f31a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f31a7:{NFSU2_TR(0x5f31a7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f31ab:{NFSU2_TR(0x5f31ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f31af:{NFSU2_TR(0x5f31af);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f31b3:{NFSU2_TR(0x5f31b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f31b4:{NFSU2_TR(0x5f31b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f31b8:{NFSU2_TR(0x5f31b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f31b9:{NFSU2_TR(0x5f31b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f31bb:{NFSU2_TR(0x5f31bb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f31bf:{NFSU2_TR(0x5f31bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f31c4ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5f31c4:L5f31c4:{c.instructions+=13;NFSU2_TR(0x5f31c4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f31c8:{NFSU2_TR(0x5f31c8);
__builtin_memmove((R+4),gp(0x7a54bc),4);
}
B5f31ce:{NFSU2_TR(0x5f31ce);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f31d0:{NFSU2_TR(0x5f31d0);
__builtin_memmove((R+8),gp(0x7a54b8),4);
}
B5f31d6:{NFSU2_TR(0x5f31d6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f31dd:{NFSU2_TR(0x5f31dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f31e1:{NFSU2_TR(0x5f31e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f31e4:{NFSU2_TR(0x5f31e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f31e5:{NFSU2_TR(0x5f31e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f31e6:{NFSU2_TR(0x5f31e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f31ea:{NFSU2_TR(0x5f31ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f31ee:{NFSU2_TR(0x5f31ee);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f31f1:{NFSU2_TR(0x5f31f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f31f6ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5f31f6:L5f31f6:{c.instructions+=8;NFSU2_TR(0x5f31f6);
w4(R+4,u32(r2(R+0)));
}
B5f31f9:{NFSU2_TR(0x5f31f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f31fd:{NFSU2_TR(0x5f31fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3200:{NFSU2_TR(0x5f3200);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f3204:{NFSU2_TR(0x5f3204);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f3208:{NFSU2_TR(0x5f3208);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f320a:{NFSU2_TR(0x5f320a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f320d:{NFSU2_TR(0x5f320d);
if(r1(R+518)){{goto L5f3215;}}
}
B5f320f:L5f320f:{c.instructions+=2;NFSU2_TR(0x5f320f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f3211:{NFSU2_TR(0x5f3211);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3215:L5f3215:{c.instructions+=5;NFSU2_TR(0x5f3215);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3219:{NFSU2_TR(0x5f3219);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f321b:{NFSU2_TR(0x5f321b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f321d:{NFSU2_TR(0x5f321d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3220:{NFSU2_TR(0x5f3220);
if(r1(R+514)){{goto L5f3228;}}
}
B5f3222:L5f3222:{c.instructions+=2;NFSU2_TR(0x5f3222);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f3224:{NFSU2_TR(0x5f3224);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3228:L5f3228:{c.instructions+=1;NFSU2_TR(0x5f3228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f322dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f322d:L5f322d:{c.instructions+=12;NFSU2_TR(0x5f322d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3230:{NFSU2_TR(0x5f3230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3236:{NFSU2_TR(0x5f3236);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B5f3239:{NFSU2_TR(0x5f3239);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f323a:{NFSU2_TR(0x5f323a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3240:{NFSU2_TR(0x5f3240);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f3247:{NFSU2_TR(0x5f3247);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f324b:{NFSU2_TR(0x5f324b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f324c:{NFSU2_TR(0x5f324c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f324d:{NFSU2_TR(0x5f324d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3253:{NFSU2_TR(0x5f3253);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3254:{NFSU2_TR(0x5f3254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3259ull));
TAIL_STATIC(0x444b60u,444);
}
B5f3259:L5f3259:{c.instructions+=5;NFSU2_TR(0x5f3259);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f325c:{NFSU2_TR(0x5f325c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f325f:{NFSU2_TR(0x5f325f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5f3266:{NFSU2_TR(0x5f3266);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3267:{NFSU2_TR(0x5f3267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f326cull));
TAIL_STATIC(0x502500u,502);
}
B5f326c:L5f326c:{c.instructions+=2;NFSU2_TR(0x5f326c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f326d:{NFSU2_TR(0x5f326d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3272ull));
TAIL_STATIC(0x441190u,441);
}
B5f3272:L5f3272:{c.instructions+=3;NFSU2_TR(0x5f3272);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3275:{NFSU2_TR(0x5f3275);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3277:{NFSU2_TR(0x5f3277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f328f;}}
}
B5f3279:L5f3279:{c.instructions+=2;NFSU2_TR(0x5f3279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f327f:{NFSU2_TR(0x5f327f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3284ull));
TAIL_STATIC(0x441aa0u,441);
}
B5f3284:L5f3284:{c.instructions+=2;NFSU2_TR(0x5f3284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f328a:{NFSU2_TR(0x5f328a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f328full));
TAIL_STATIC(0x441aa0u,441);
}
B5f328f:L5f328f:{c.instructions+=4;NFSU2_TR(0x5f328f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3290:{NFSU2_TR(0x5f3290);
__builtin_memmove((R+16),(R+20),4);
}
B5f3292:{NFSU2_TR(0x5f3292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3293:{NFSU2_TR(0x5f3293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f32a0:L5f32a0:{c.instructions+=10;NFSU2_TR(0x5f32a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f32a1:{NFSU2_TR(0x5f32a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f32a2:{NFSU2_TR(0x5f32a2);
__builtin_memmove((R+24),(R+4),4);
}
B5f32a4:{NFSU2_TR(0x5f32a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f32a7:{NFSU2_TR(0x5f32a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f32aa:{NFSU2_TR(0x5f32aa);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5f32b1:{NFSU2_TR(0x5f32b1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f32b3:{NFSU2_TR(0x5f32b3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5f32b5:{NFSU2_TR(0x5f32b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f32b7:{NFSU2_TR(0x5f32b7);
if(r1(R+518)){{goto L5f33a4;}}
}
B5f32bd:L5f32bd:{c.instructions+=3;NFSU2_TR(0x5f32bd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f32be:{NFSU2_TR(0x5f32be);
__builtin_memmove((R+4),(R+24),4);
}
B5f32c0:{NFSU2_TR(0x5f32c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f32c5ull));
TAIL_STATIC(0x5ea930u,5ea);
}
B5f32c5:L5f32c5:{c.instructions+=6;NFSU2_TR(0x5f32c5);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B5f32cb:{NFSU2_TR(0x5f32cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f32cd:{NFSU2_TR(0x5f32cd);
__builtin_memmove((R+20),gp(0x890104),4);
}
B5f32d3:{NFSU2_TR(0x5f32d3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5f32d4:{NFSU2_TR(0x5f32d4);
__builtin_memmove((R+4),(R+0),4);
}
B5f32d6:{NFSU2_TR(0x5f32d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3327;}}
}
B5f32d8:L5f32d8:{c.instructions+=2;NFSU2_TR(0x5f32d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f32da:{NFSU2_TR(0x5f32da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3327;}}
}
B5f32dc:L5f32dc:{c.instructions+=3;NFSU2_TR(0x5f32dc);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B5f32e1:{NFSU2_TR(0x5f32e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f32e3:{NFSU2_TR(0x5f32e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3327;}}
}
B5f32e5:L5f32e5:{c.instructions+=3;NFSU2_TR(0x5f32e5);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B5f32ea:{NFSU2_TR(0x5f32ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f32ec:{NFSU2_TR(0x5f32ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3327;}}
}
B5f32ee:L5f32ee:{c.instructions+=6;NFSU2_TR(0x5f32ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f32f1:{NFSU2_TR(0x5f32f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5f32f4:{NFSU2_TR(0x5f32f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f32f5:{NFSU2_TR(0x5f32f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x414ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f32fb:{NFSU2_TR(0x5f32fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f32fd:{NFSU2_TR(0x5f32fd);
if(r1(R+518)){{goto L5f3326;}}
}
B5f32ff:L5f32ff:{c.instructions+=2;NFSU2_TR(0x5f32ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3305:{NFSU2_TR(0x5f3305);
if(r1(R+518)){{goto L5f3326;}}
}
B5f3307:L5f3307:{c.instructions+=6;NFSU2_TR(0x5f3307);
{u32 ea_=u32(r4(R+0)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f330d:{NFSU2_TR(0x5f330d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3313:{NFSU2_TR(0x5f3313);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3319:{NFSU2_TR(0x5f3319);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f331b:{NFSU2_TR(0x5f331b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f331e:{NFSU2_TR(0x5f331e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3326;}}
}
B5f3320:L5f3320:{c.instructions+=1;NFSU2_TR(0x5f3320);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x40000ull))));
}
B5f3326:L5f3326:{c.instructions+=1;NFSU2_TR(0x5f3326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3327:L5f3327:{c.instructions+=3;NFSU2_TR(0x5f3327);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5f332c:{NFSU2_TR(0x5f332c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f332e:{NFSU2_TR(0x5f332e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3339;}}
}
B5f3330:L5f3330:{c.instructions+=3;NFSU2_TR(0x5f3330);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5f3335:{NFSU2_TR(0x5f3335);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3337:{NFSU2_TR(0x5f3337);
if(r1(R+518)){{goto L5f3341;}}
}
B5f3339:L5f3339:{c.instructions+=2;NFSU2_TR(0x5f3339);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x20000000ull))));
}
B5f333f:{NFSU2_TR(0x5f333f);
{goto L5f336c;}
}
B5f3341:L5f3341:{c.instructions+=2;NFSU2_TR(0x5f3341);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3343:{NFSU2_TR(0x5f3343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3349;}}
}
B5f3345:L5f3345:{c.instructions+=2;NFSU2_TR(0x5f3345);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3347:{NFSU2_TR(0x5f3347);
if(r1(R+518)){{goto L5f3351;}}
}
B5f3349:L5f3349:{c.instructions+=2;NFSU2_TR(0x5f3349);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x80000000ull))));
}
B5f334f:{NFSU2_TR(0x5f334f);
{goto L5f336c;}
}
B5f3351:L5f3351:{c.instructions+=2;NFSU2_TR(0x5f3351);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3358:{NFSU2_TR(0x5f3358);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f336c;}}
}
B5f335a:L5f335a:{c.instructions+=2;NFSU2_TR(0x5f335a);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3361:{NFSU2_TR(0x5f3361);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f336c;}}
}
B5f3363:L5f3363:{c.instructions+=2;NFSU2_TR(0x5f3363);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400ull))));
}
B5f3369:{NFSU2_TR(0x5f3369);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x40ull))));
}
B5f336c:L5f336c:{c.instructions+=6;NFSU2_TR(0x5f336c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f336f:{NFSU2_TR(0x5f336f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x454ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f3375:{NFSU2_TR(0x5f3375);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5f3378:{NFSU2_TR(0x5f3378);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f337a:{NFSU2_TR(0x5f337a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f337b:{NFSU2_TR(0x5f337b);
if(r1(R+518)){{goto L5f33a4;}}
}
B5f337d:L5f337d:{c.instructions+=2;NFSU2_TR(0x5f337d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3383:{NFSU2_TR(0x5f3383);
if(r1(R+518)){{goto L5f33a4;}}
}
B5f3385:L5f3385:{c.instructions+=6;NFSU2_TR(0x5f3385);
{u32 ea_=u32(r4(R+0)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f338b:{NFSU2_TR(0x5f338b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3391:{NFSU2_TR(0x5f3391);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3397:{NFSU2_TR(0x5f3397);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3399:{NFSU2_TR(0x5f3399);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f339c:{NFSU2_TR(0x5f339c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f33a4;}}
}
B5f339e:L5f339e:{c.instructions+=1;NFSU2_TR(0x5f339e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f33a4:L5f33a4:{c.instructions+=4;NFSU2_TR(0x5f33a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f33a5:{NFSU2_TR(0x5f33a5);
__builtin_memmove((R+0),(R+4),4);
}
B5f33a7:{NFSU2_TR(0x5f33a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f33a8:{NFSU2_TR(0x5f33a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f33b0:L5f33b0:{c.instructions+=8;NFSU2_TR(0x5f33b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f33b1:{NFSU2_TR(0x5f33b1);
__builtin_memmove((R+12),gp(0x89e7b0),4);
}
B5f33b7:{NFSU2_TR(0x5f33b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f33b8:{NFSU2_TR(0x5f33b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f33b9:{NFSU2_TR(0x5f33b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f33bb:{NFSU2_TR(0x5f33bb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f33bd:{NFSU2_TR(0x5f33bd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f33bf:{NFSU2_TR(0x5f33bf);
if(r1(R+518)){{goto L5f34b6;}}
}
B5f33c5:L5f33c5:{c.instructions+=6;NFSU2_TR(0x5f33c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f33c8:{NFSU2_TR(0x5f33c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f33cb:{NFSU2_TR(0x5f33cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5f33ce:{NFSU2_TR(0x5f33ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aa66ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f33d4:{NFSU2_TR(0x5f33d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f33d6:{NFSU2_TR(0x5f33d6);
if(r1(R+518)){{goto L5f33dd;}}
}
B5f33d8:L5f33d8:{c.instructions+=1;NFSU2_TR(0x5f33d8);
w4(R+28,u32(0x508ull));
}
B5f33dd:L5f33dd:{c.instructions+=5;NFSU2_TR(0x5f33dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aa78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f33e3:{NFSU2_TR(0x5f33e3);
__builtin_memmove((R+8),gp(0x890104),4);
}
B5f33e9:{NFSU2_TR(0x5f33e9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f33ec:{NFSU2_TR(0x5f33ec);
__builtin_memmove((R+4),gp(0x89e7d9),1);
}
B5f33f2:{NFSU2_TR(0x5f33f2);
if(r1(R+518)){{goto L5f3402;}}
}
B5f33f4:L5f33f4:{c.instructions+=2;NFSU2_TR(0x5f33f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f33f6:{NFSU2_TR(0x5f33f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3402;}}
}
B5f33f8:L5f33f8:{c.instructions+=2;NFSU2_TR(0x5f33f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f33fa:{NFSU2_TR(0x5f33fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3402;}}
}
B5f33fc:L5f33fc:{c.instructions+=1;NFSU2_TR(0x5f33fc);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x80ull))));
}
B5f3402:L5f3402:{c.instructions+=2;NFSU2_TR(0x5f3402);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aa65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f3409:{NFSU2_TR(0x5f3409);
if(r1(R+518)){{goto L5f345e;}}
}
B5f340b:L5f340b:{c.instructions+=9;NFSU2_TR(0x5f340b);
__builtin_memmove((R+12),gp(0x89e7cc),4);
}
B5f3411:{NFSU2_TR(0x5f3411);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3412:{NFSU2_TR(0x5f3412);
__builtin_memmove((R+20),gp(0x89e7c8),4);
}
B5f3418:{NFSU2_TR(0x5f3418);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B5f341a:{NFSU2_TR(0x5f341a);
w4(R+20,u32(u32(r4(R+20))+u32(m4(0x89e7c4))));
}
B5f3420:{NFSU2_TR(0x5f3420);
w4(R+20,u32(u32(r4(R+20))+u32(m4(0x89e7c0))));
}
B5f3426:{NFSU2_TR(0x5f3426);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3429:{NFSU2_TR(0x5f3429);
__builtin_memmove((R+12),gp(0x89e7b0),4);
}
B5f342f:{NFSU2_TR(0x5f342f);
if(r1(R+518)){{goto L5f3440;}}
}
B5f3431:L5f3431:{c.instructions+=2;NFSU2_TR(0x5f3431);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3434:{NFSU2_TR(0x5f3434);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3457;}}
}
B5f3436:L5f3436:{c.instructions+=3;NFSU2_TR(0x5f3436);
__builtin_memmove((R+20),gp(0x89e7bc),4);
}
B5f343c:{NFSU2_TR(0x5f343c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f343e:{NFSU2_TR(0x5f343e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3457;}}
}
B5f3440:L5f3440:{c.instructions+=2;NFSU2_TR(0x5f3440);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3442:{NFSU2_TR(0x5f3442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3448;}}
}
B5f3444:L5f3444:{c.instructions+=2;NFSU2_TR(0x5f3444);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3446:{NFSU2_TR(0x5f3446);
if(r1(R+518)){{goto L5f345d;}}
}
B5f3448:L5f3448:{c.instructions+=2;NFSU2_TR(0x5f3448);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f344b:{NFSU2_TR(0x5f344b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3457;}}
}
B5f344d:L5f344d:{c.instructions+=3;NFSU2_TR(0x5f344d);
__builtin_memmove((R+4),gp(0x89e7b4),4);
}
B5f3453:{NFSU2_TR(0x5f3453);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3455:{NFSU2_TR(0x5f3455);
if(r1(R+518)){{goto L5f345d;}}
}
B5f3457:L5f3457:{c.instructions+=1;NFSU2_TR(0x5f3457);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x200ull))));
}
B5f345d:L5f345d:{c.instructions+=1;NFSU2_TR(0x5f345d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f345e:L5f345e:{c.instructions+=3;NFSU2_TR(0x5f345e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83aa69ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f3464:{NFSU2_TR(0x5f3464);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3466:{NFSU2_TR(0x5f3466);
if(r1(R+518)){{goto L5f349a;}}
}
B5f3468:L5f3468:{c.instructions+=3;NFSU2_TR(0x5f3468);
__builtin_memmove((R+0),gp(0x89e818),4);
}
B5f346d:{NFSU2_TR(0x5f346d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f346f:{NFSU2_TR(0x5f346f);
if(r1(R+518)){{goto L5f3478;}}
}
B5f3471:L5f3471:{c.instructions+=2;NFSU2_TR(0x5f3471);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3476:{NFSU2_TR(0x5f3476);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f349a;}}
}
B5f3478:L5f3478:{c.instructions+=2;NFSU2_TR(0x5f3478);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f347b:{NFSU2_TR(0x5f347b);
if(r1(R+518)){{goto L5f349f;}}
}
B5f347d:L5f347d:{c.instructions+=2;NFSU2_TR(0x5f347d);
w4(R+4,u32(0x89e7a0ull));
}
B5f3482:{NFSU2_TR(0x5f3482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3487ull));
TAIL_STATIC(0x5ed990u,5ed);
}
B5f3487:L5f3487:{c.instructions+=2;NFSU2_TR(0x5f3487);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3489:{NFSU2_TR(0x5f3489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f349a;}}
}
B5f348b:L5f348b:{c.instructions+=1;NFSU2_TR(0x5f348b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3490ull));
TAIL_STATIC(0x4018f0u,401);
}
B5f3490:L5f3490:{c.instructions+=2;NFSU2_TR(0x5f3490);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3492:{NFSU2_TR(0x5f3492);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f349a;}}
}
B5f3494:L5f3494:{c.instructions+=1;NFSU2_TR(0x5f3494);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x800000ull))));
}
B5f349a:L5f349a:{c.instructions+=2;NFSU2_TR(0x5f349a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f349d:{NFSU2_TR(0x5f349d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f34a2;}}
}
B5f349f:L5f349f:{c.instructions+=1;NFSU2_TR(0x5f349f);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x40ull))));
}
B5f34a2:L5f34a2:{c.instructions+=2;NFSU2_TR(0x5f34a2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f34a5:{NFSU2_TR(0x5f34a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f34b0;}}
}
B5f34a7:L5f34a7:{c.instructions+=3;NFSU2_TR(0x5f34a7);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B5f34ac:{NFSU2_TR(0x5f34ac);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f34ae:{NFSU2_TR(0x5f34ae);
if(r1(R+518)){{goto L5f34b6;}}
}
B5f34b0:L5f34b0:{c.instructions+=1;NFSU2_TR(0x5f34b0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f34b6:L5f34b6:{c.instructions+=6;NFSU2_TR(0x5f34b6);
__builtin_memmove((R+0),(R+28),4);
}
B5f34b8:{NFSU2_TR(0x5f34b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f34b9:{NFSU2_TR(0x5f34b9);
__builtin_memmove((R+8),(R+24),4);
}
B5f34bb:{NFSU2_TR(0x5f34bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f34bc:{NFSU2_TR(0x5f34bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f34bd:{NFSU2_TR(0x5f34bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f34c0:L5f34c0:{c.instructions+=4;NFSU2_TR(0x5f34c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f34c3:{NFSU2_TR(0x5f34c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f34c6:{NFSU2_TR(0x5f34c6);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f34cb:{NFSU2_TR(0x5f34cb);
if(r1(R+518)){{goto L5f34e8;}}
}
B5f34cd:L5f34cd:{c.instructions+=3;NFSU2_TR(0x5f34cd);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5f34d2:{NFSU2_TR(0x5f34d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f34d4:{NFSU2_TR(0x5f34d4);
if(r1(R+518)){{goto L5f34e8;}}
}
B5f34d6:L5f34d6:{c.instructions+=3;NFSU2_TR(0x5f34d6);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5f34db:{NFSU2_TR(0x5f34db);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f34dd:{NFSU2_TR(0x5f34dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f34e8;}}
}
B5f34df:L5f34df:{c.instructions+=3;NFSU2_TR(0x5f34df);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5f34e4:{NFSU2_TR(0x5f34e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f34e6:{NFSU2_TR(0x5f34e6);
if(r1(R+518)){{goto L5f34f4;}}
}
B5f34e8:L5f34e8:{c.instructions+=4;NFSU2_TR(0x5f34e8);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5f34ed:{NFSU2_TR(0x5f34ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f34ef:{NFSU2_TR(0x5f34ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f34f2:{NFSU2_TR(0x5f34f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f34f9;}}
}
B5f34f4:L5f34f4:{c.instructions+=3;NFSU2_TR(0x5f34f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f34f6:{NFSU2_TR(0x5f34f6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f34f8:{NFSU2_TR(0x5f34f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f34f9:L5f34f9:{c.instructions+=6;NFSU2_TR(0x5f34f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f34fa:{NFSU2_TR(0x5f34fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f34fb:{NFSU2_TR(0x5f34fb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f34fd:{NFSU2_TR(0x5f34fd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f34ff:{NFSU2_TR(0x5f34ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3502:{NFSU2_TR(0x5f3502);
if(r1(R+518)){{goto L5f3513;}}
}
B5f3504:L5f3504:{c.instructions+=3;NFSU2_TR(0x5f3504);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f350a:{NFSU2_TR(0x5f350a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f350c:{NFSU2_TR(0x5f350c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3513;}}
}
B5f350e:L5f350e:{c.instructions+=1;NFSU2_TR(0x5f350e);
w4(R+24,u32(0x20000ull));
}
B5f3513:L5f3513:{c.instructions+=3;NFSU2_TR(0x5f3513);
__builtin_memmove((R+0),gp(0x83aa1b),1);
}
B5f3518:{NFSU2_TR(0x5f3518);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f351a:{NFSU2_TR(0x5f351a);
if(r1(R+518)){{goto L5f351f;}}
}
B5f351c:L5f351c:{c.instructions+=1;NFSU2_TR(0x5f351c);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x1ull))));
}
B5f351f:L5f351f:{c.instructions+=1;NFSU2_TR(0x5f351f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3524ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f32a0u);}goto L5f32a0;}
}
B5f3524:L5f3524:{c.instructions+=6;NFSU2_TR(0x5f3524);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4800ull))));
}
B5f3529:{NFSU2_TR(0x5f3529);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B5f352b:{NFSU2_TR(0x5f352b);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5f3530:{NFSU2_TR(0x5f3530);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
}
B5f3532:{NFSU2_TR(0x5f3532);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3534:{NFSU2_TR(0x5f3534);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f353f;}}
}
B5f3536:L5f3536:{c.instructions+=3;NFSU2_TR(0x5f3536);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5f353b:{NFSU2_TR(0x5f353b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f353d:{NFSU2_TR(0x5f353d);
if(r1(R+518)){{goto L5f3545;}}
}
B5f353f:L5f353f:{c.instructions+=1;NFSU2_TR(0x5f353f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x20000ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3545:L5f3545:{c.instructions+=5;NFSU2_TR(0x5f3545);
__builtin_memmove((R+0),(R+28),4);
}
B5f3547:{NFSU2_TR(0x5f3547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3548:{NFSU2_TR(0x5f3548);
__builtin_memmove((R+8),(R+24),4);
}
B5f354a:{NFSU2_TR(0x5f354a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f354b:{NFSU2_TR(0x5f354b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3550:L5f3550:{c.instructions+=12;NFSU2_TR(0x5f3550);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3551:{NFSU2_TR(0x5f3551);
__builtin_memmove((R+20),(R+16),4);
}
B5f3553:{NFSU2_TR(0x5f3553);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f3556:{NFSU2_TR(0x5f3556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B5f355c:{NFSU2_TR(0x5f355c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f355d:{NFSU2_TR(0x5f355d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f355e:{NFSU2_TR(0x5f355e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f355f:{NFSU2_TR(0x5f355f);
__builtin_memmove((R+24),(R+4),4);
}
B5f3561:{NFSU2_TR(0x5f3561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3564:{NFSU2_TR(0x5f3564);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f356b:{NFSU2_TR(0x5f356b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f356c:{NFSU2_TR(0x5f356c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3571ull));
TAIL_STATIC(0x5ecc00u,5ec);
}
B5f3571:L5f3571:{c.instructions+=5;NFSU2_TR(0x5f3571);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3578:{NFSU2_TR(0x5f3578);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3579:{NFSU2_TR(0x5f3579);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3580:{NFSU2_TR(0x5f3580);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3581:{NFSU2_TR(0x5f3581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3586ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B5f3586:L5f3586:{c.instructions+=3;NFSU2_TR(0x5f3586);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3589:{NFSU2_TR(0x5f3589);
__builtin_memmove((R+4),(R+24),4);
}
B5f358b:{NFSU2_TR(0x5f358b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3590ull));
TAIL_STATIC(0x5ea9a0u,5ea);
}
B5f3590:L5f3590:{c.instructions+=2;NFSU2_TR(0x5f3590);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3592:{NFSU2_TR(0x5f3592);
if(r1(R+518)){{goto L5f363f;}}
}
B5f3598:L5f3598:{c.instructions+=8;NFSU2_TR(0x5f3598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f359e:{NFSU2_TR(0x5f359e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5f35a1:{NFSU2_TR(0x5f35a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f35a2:{NFSU2_TR(0x5f35a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f35a9:{NFSU2_TR(0x5f35a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f35aa:{NFSU2_TR(0x5f35aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f35ae:{NFSU2_TR(0x5f35ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f35af:{NFSU2_TR(0x5f35af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f35b4ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f35b4:L5f35b4:{c.instructions+=14;NFSU2_TR(0x5f35b4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f35b8:{NFSU2_TR(0x5f35b8);
{u32 ea_=u32(u32(8397712u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f35be:{NFSU2_TR(0x5f35be);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f35c2:{NFSU2_TR(0x5f35c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f35c3:{NFSU2_TR(0x5f35c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f35c7:{NFSU2_TR(0x5f35c7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f35cb:{NFSU2_TR(0x5f35cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f35cc:{NFSU2_TR(0x5f35cc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f35d0:{NFSU2_TR(0x5f35d0);
{u32 ea_=u32(u32(8397716u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f35d6:{NFSU2_TR(0x5f35d6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f35da:{NFSU2_TR(0x5f35da);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f35de:{NFSU2_TR(0x5f35de);
{u32 ea_=u32(u32(8397720u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f35e4:{NFSU2_TR(0x5f35e4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f35e8:{NFSU2_TR(0x5f35e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f35edull));
TAIL_STATIC(0x43cf10u,43c);
}
B5f35ed:L5f35ed:{c.instructions+=11;NFSU2_TR(0x5f35ed);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f35f1:{NFSU2_TR(0x5f35f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f35f5:{NFSU2_TR(0x5f35f5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f35f9:{NFSU2_TR(0x5f35f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f35fd:{NFSU2_TR(0x5f35fd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3601:{NFSU2_TR(0x5f3601);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3602:{NFSU2_TR(0x5f3602);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3606:{NFSU2_TR(0x5f3606);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3607:{NFSU2_TR(0x5f3607);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f3609:{NFSU2_TR(0x5f3609);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f360d:{NFSU2_TR(0x5f360d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3612ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5f3612:L5f3612:{c.instructions+=9;NFSU2_TR(0x5f3612);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3616:{NFSU2_TR(0x5f3616);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f361a:{NFSU2_TR(0x5f361a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f361c:{NFSU2_TR(0x5f361c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5f361f:{NFSU2_TR(0x5f361f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3620:{NFSU2_TR(0x5f3620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3621:{NFSU2_TR(0x5f3621);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f3628:{NFSU2_TR(0x5f3628);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f362b:{NFSU2_TR(0x5f362b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3630ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5f3630:L5f3630:{c.instructions+=3;NFSU2_TR(0x5f3630);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3633:{NFSU2_TR(0x5f3633);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f363a:{NFSU2_TR(0x5f363a);
{goto L5f36f3;}
}
B5f363f:L5f363f:{c.instructions+=10;NFSU2_TR(0x5f363f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f3646:{NFSU2_TR(0x5f3646);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3649:{NFSU2_TR(0x5f3649);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f364f:{NFSU2_TR(0x5f364f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3653:{NFSU2_TR(0x5f3653);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f3657:{NFSU2_TR(0x5f3657);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f3659:{NFSU2_TR(0x5f3659);
{u32 ea_=u32(u32(8017080u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f365f:{NFSU2_TR(0x5f365f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3661:{NFSU2_TR(0x5f3661);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3664:{NFSU2_TR(0x5f3664);
if(r1(R+518)){{goto L5f366e;}}
}
B5f3666:L5f3666:{c.instructions+=2;NFSU2_TR(0x5f3666);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f3668:{NFSU2_TR(0x5f3668);
{u32 ea_=u32(u32(8017080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f366e:L5f366e:{c.instructions+=5;NFSU2_TR(0x5f366e);
{u32 ea_=u32(u32(8017084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3674:{NFSU2_TR(0x5f3674);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f3676:{NFSU2_TR(0x5f3676);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3678:{NFSU2_TR(0x5f3678);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f367b:{NFSU2_TR(0x5f367b);
if(r1(R+514)){{goto L5f3685;}}
}
B5f367d:L5f367d:{c.instructions+=2;NFSU2_TR(0x5f367d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f367f:{NFSU2_TR(0x5f367f);
{u32 ea_=u32(u32(8017084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3685:L5f3685:{c.instructions+=1;NFSU2_TR(0x5f3685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f368aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f368a:L5f368a:{c.instructions+=4;NFSU2_TR(0x5f368a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f368d:{NFSU2_TR(0x5f368d);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3693:{NFSU2_TR(0x5f3693);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f369a:{NFSU2_TR(0x5f369a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f369full));
TAIL_STATIC(0x75bed4u,75b);
}
B5f369f:L5f369f:{c.instructions+=9;NFSU2_TR(0x5f369f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B5f36a6:{NFSU2_TR(0x5f36a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f36a8:{NFSU2_TR(0x5f36a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5f36af:{NFSU2_TR(0x5f36af);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f36b3:{NFSU2_TR(0x5f36b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f36b4:{NFSU2_TR(0x5f36b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f36b8:{NFSU2_TR(0x5f36b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f36b9:{NFSU2_TR(0x5f36b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f36ba:{NFSU2_TR(0x5f36ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f36bfull));
TAIL_STATIC(0x43c390u,43c);
}
B5f36bf:L5f36bf:{c.instructions+=8;NFSU2_TR(0x5f36bf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5f36c1:{NFSU2_TR(0x5f36c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x166ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5f36c8:{NFSU2_TR(0x5f36c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f36cc:{NFSU2_TR(0x5f36cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f36d0:{NFSU2_TR(0x5f36d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f36d1:{NFSU2_TR(0x5f36d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f36d2:{NFSU2_TR(0x5f36d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f36d3:{NFSU2_TR(0x5f36d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f36d8ull));
TAIL_STATIC(0x43c390u,43c);
}
B5f36d8:L5f36d8:{c.instructions+=7;NFSU2_TR(0x5f36d8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f36dc:{NFSU2_TR(0x5f36dc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f36e0:{NFSU2_TR(0x5f36e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5f36e3:{NFSU2_TR(0x5f36e3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f36e7:{NFSU2_TR(0x5f36e7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f36eb:{NFSU2_TR(0x5f36eb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f36ef:{NFSU2_TR(0x5f36ef);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f36f3:L5f36f3:{c.instructions+=3;NFSU2_TR(0x5f36f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f36f9:{NFSU2_TR(0x5f36f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f36fb:{NFSU2_TR(0x5f36fb);
if(r1(R+518)){{goto L5f3712;}}
}
B5f36fd:L5f36fd:{c.instructions+=6;NFSU2_TR(0x5f36fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3700:{NFSU2_TR(0x5f3700);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5f3703:{NFSU2_TR(0x5f3703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3704:{NFSU2_TR(0x5f3704);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x60ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3707:{NFSU2_TR(0x5f3707);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3708:{NFSU2_TR(0x5f3708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f370dull));
TAIL_STATIC(0x43ce10u,43c);
}
B5f370d:L5f370d:{c.instructions+=2;NFSU2_TR(0x5f370d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3710:{NFSU2_TR(0x5f3710);
{goto L5f3718;}
}
B5f3712:L5f3712:{c.instructions+=1;NFSU2_TR(0x5f3712);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3718:L5f3718:{c.instructions+=4;NFSU2_TR(0x5f3718);
__builtin_memmove((R+4),(R+24),4);
}
B5f371a:{NFSU2_TR(0x5f371a);
{u32 ea_=u32(r4(R+24)+u32(472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3720:{NFSU2_TR(0x5f3720);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5f3722:{NFSU2_TR(0x5f3722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3727ull));
TAIL_STATIC(0x5ea9a0u,5ea);
}
B5f3727:L5f3727:{c.instructions+=2;NFSU2_TR(0x5f3727);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3729:{NFSU2_TR(0x5f3729);
if(r1(R+518)){{goto L5f3763;}}
}
B5f372b:L5f372b:{c.instructions+=4;NFSU2_TR(0x5f372b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f372e:{NFSU2_TR(0x5f372e);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3733:{NFSU2_TR(0x5f3733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3734:{NFSU2_TR(0x5f3734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3739ull));
TAIL_STATIC(0x571a00u,571);
}
B5f3739:L5f3739:{c.instructions+=3;NFSU2_TR(0x5f3739);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f373c:{NFSU2_TR(0x5f373c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f373e:{NFSU2_TR(0x5f373e);
if(r1(R+518)){{goto L5f3763;}}
}
B5f3740:L5f3740:{c.instructions+=5;NFSU2_TR(0x5f3740);
__builtin_memmove((R+4),gp(0x7a54ec),4);
}
B5f3746:{NFSU2_TR(0x5f3746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f374c:{NFSU2_TR(0x5f374c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f374d:{NFSU2_TR(0x5f374d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f374e:{NFSU2_TR(0x5f374e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3753ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5f3753:L5f3753:{c.instructions+=5;NFSU2_TR(0x5f3753);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5f3756:{NFSU2_TR(0x5f3756);
w1(R+12,u8(0x1ull));
}
B5f3758:{NFSU2_TR(0x5f3758);
u8 U[7];
w1(R+512,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f375a:{NFSU2_TR(0x5f375a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f3761:{NFSU2_TR(0x5f3761);
{goto L5f376c;}
}
B5f3763:L5f3763:{c.instructions+=1;NFSU2_TR(0x5f3763);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
w2(U+4,u16(0x32dcull));
s2(u32(r4(U+0)),r2(U+4));
}
B5f376c:L5f376c:{c.instructions+=8;NFSU2_TR(0x5f376c);
__builtin_memmove((R+0),gp(0x7a54d8),4);
}
B5f3771:{NFSU2_TR(0x5f3771);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3772:{NFSU2_TR(0x5f3772);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3776:{NFSU2_TR(0x5f3776);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3777:{NFSU2_TR(0x5f3777);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f377b:{NFSU2_TR(0x5f377b);
u8 U[4];
w4(U+0,u32(0x802390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3780:{NFSU2_TR(0x5f3780);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3781:{NFSU2_TR(0x5f3781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3786ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5f3786:L5f3786:{c.instructions+=5;NFSU2_TR(0x5f3786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f378c:{NFSU2_TR(0x5f378c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f378f:{NFSU2_TR(0x5f378f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3793:{NFSU2_TR(0x5f3793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3794:{NFSU2_TR(0x5f3794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3799ull));
TAIL_STATIC(0x574cd0u,574);
}
B5f3799:L5f3799:{c.instructions+=6;NFSU2_TR(0x5f3799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f379c:{NFSU2_TR(0x5f379c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f37a2:{NFSU2_TR(0x5f37a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37a4:{NFSU2_TR(0x5f37a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37a6:{NFSU2_TR(0x5f37a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37a7:{NFSU2_TR(0x5f37a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f37acull));
TAIL_STATIC(0x574df0u,574);
}
B5f37ac:L5f37ac:{c.instructions+=14;NFSU2_TR(0x5f37ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f37b2:{NFSU2_TR(0x5f37b2);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f37b5:{NFSU2_TR(0x5f37b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f37b7:{NFSU2_TR(0x5f37b7);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f37ba:{NFSU2_TR(0x5f37ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f37be:{NFSU2_TR(0x5f37be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37bf:{NFSU2_TR(0x5f37bf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f37c3:{NFSU2_TR(0x5f37c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f37ca:{NFSU2_TR(0x5f37ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f37ce:{NFSU2_TR(0x5f37ce);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f37d2:{NFSU2_TR(0x5f37d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37d3:{NFSU2_TR(0x5f37d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f37d7:{NFSU2_TR(0x5f37d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37d8:{NFSU2_TR(0x5f37d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f37ddull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f37dd:L5f37dd:{c.instructions+=8;NFSU2_TR(0x5f37dd);
__builtin_memmove((R+8),gp(0x7a54cc),4);
}
B5f37e3:{NFSU2_TR(0x5f37e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37e4:{NFSU2_TR(0x5f37e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f37e8:{NFSU2_TR(0x5f37e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37e9:{NFSU2_TR(0x5f37e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f37ed:{NFSU2_TR(0x5f37ed);
u8 U[4];
w4(U+0,u32(0x802390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37f2:{NFSU2_TR(0x5f37f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f37f3:{NFSU2_TR(0x5f37f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f37f8ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5f37f8:L5f37f8:{c.instructions+=5;NFSU2_TR(0x5f37f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f37fe:{NFSU2_TR(0x5f37fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5f3801:{NFSU2_TR(0x5f3801);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3805:{NFSU2_TR(0x5f3805);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3806:{NFSU2_TR(0x5f3806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f380bull));
TAIL_STATIC(0x574cd0u,574);
}
B5f380b:L5f380b:{c.instructions+=5;NFSU2_TR(0x5f380b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3811:{NFSU2_TR(0x5f3811);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3813:{NFSU2_TR(0x5f3813);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3815:{NFSU2_TR(0x5f3815);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3816:{NFSU2_TR(0x5f3816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f381bull));
TAIL_STATIC(0x574df0u,574);
}
B5f381b:L5f381b:{c.instructions+=2;NFSU2_TR(0x5f381b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f381d:{NFSU2_TR(0x5f381d);
if(r1(R+518)){{goto L5f3840;}}
}
B5f381f:L5f381f:{c.instructions+=10;NFSU2_TR(0x5f381f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3825:{NFSU2_TR(0x5f3825);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3828:{NFSU2_TR(0x5f3828);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5f382b:{NFSU2_TR(0x5f382b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f382e:{NFSU2_TR(0x5f382e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f3830:{NFSU2_TR(0x5f3830);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f3832:{NFSU2_TR(0x5f3832);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3836:{NFSU2_TR(0x5f3836);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f383a:{NFSU2_TR(0x5f383a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f383e:{NFSU2_TR(0x5f383e);
{goto L5f3874;}
}
B5f3840:L5f3840:{c.instructions+=14;NFSU2_TR(0x5f3840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3846:{NFSU2_TR(0x5f3846);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3849:{NFSU2_TR(0x5f3849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f384b:{NFSU2_TR(0x5f384b);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f384e:{NFSU2_TR(0x5f384e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3852:{NFSU2_TR(0x5f3852);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3853:{NFSU2_TR(0x5f3853);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3857:{NFSU2_TR(0x5f3857);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f385e:{NFSU2_TR(0x5f385e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3862:{NFSU2_TR(0x5f3862);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3866:{NFSU2_TR(0x5f3866);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3867:{NFSU2_TR(0x5f3867);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f386b:{NFSU2_TR(0x5f386b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f386c:{NFSU2_TR(0x5f386c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3871ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f3871:L5f3871:{c.instructions+=1;NFSU2_TR(0x5f3871);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5f3874:L5f3874:{c.instructions+=12;NFSU2_TR(0x5f3874);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3878:{NFSU2_TR(0x5f3878);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3879:{NFSU2_TR(0x5f3879);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f387d:{NFSU2_TR(0x5f387d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f387e:{NFSU2_TR(0x5f387e);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3882:{NFSU2_TR(0x5f3882);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3883:{NFSU2_TR(0x5f3883);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3889:{NFSU2_TR(0x5f3889);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f388a:{NFSU2_TR(0x5f388a);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3895:{NFSU2_TR(0x5f3895);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f38a0:{NFSU2_TR(0x5f38a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f38ab:{NFSU2_TR(0x5f38ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f38b0ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B5f38b0:L5f38b0:{c.instructions+=7;NFSU2_TR(0x5f38b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f38b3:{NFSU2_TR(0x5f38b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f38b9:{NFSU2_TR(0x5f38b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5f38bc:{NFSU2_TR(0x5f38bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38be:{NFSU2_TR(0x5f38be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38bf:{NFSU2_TR(0x5f38bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38c0:{NFSU2_TR(0x5f38c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f38c5ull));
TAIL_STATIC(0x444530u,444);
}
B5f38c5:L5f38c5:{c.instructions+=6;NFSU2_TR(0x5f38c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f38cb:{NFSU2_TR(0x5f38cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f38ce:{NFSU2_TR(0x5f38ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5f38d5:{NFSU2_TR(0x5f38d5);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f38da:{NFSU2_TR(0x5f38da);
w4(R+28,u32(0x7a54ccull));
}
B5f38df:{NFSU2_TR(0x5f38df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f38e5:L5f38e5:{c.instructions+=8;NFSU2_TR(0x5f38e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f38e7:{NFSU2_TR(0x5f38e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38e8:{NFSU2_TR(0x5f38e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f38ec:{NFSU2_TR(0x5f38ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38ed:{NFSU2_TR(0x5f38ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f38f1:{NFSU2_TR(0x5f38f1);
u8 U[4];
w4(U+0,u32(0x802390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38f6:{NFSU2_TR(0x5f38f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f38f7:{NFSU2_TR(0x5f38f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f38fcull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5f38fc:L5f38fc:{c.instructions+=7;NFSU2_TR(0x5f38fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3900:{NFSU2_TR(0x5f3900);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3901:{NFSU2_TR(0x5f3901);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3908:{NFSU2_TR(0x5f3908);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3909:{NFSU2_TR(0x5f3909);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f390d:{NFSU2_TR(0x5f390d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f390e:{NFSU2_TR(0x5f390e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3913ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f3913:L5f3913:{c.instructions+=8;NFSU2_TR(0x5f3913);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3917:{NFSU2_TR(0x5f3917);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3918:{NFSU2_TR(0x5f3918);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f391c:{NFSU2_TR(0x5f391c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f391d:{NFSU2_TR(0x5f391d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f391e:{NFSU2_TR(0x5f391e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3924:{NFSU2_TR(0x5f3924);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3925:{NFSU2_TR(0x5f3925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f392aull));
TAIL_STATIC(0x5eab90u,5ea);
}
B5f392a:L5f392a:{c.instructions+=5;NFSU2_TR(0x5f392a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5f392d:{NFSU2_TR(0x5f392d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B5f3930:{NFSU2_TR(0x5f3930);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5f3933:{NFSU2_TR(0x5f3933);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7a54d8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7a54d8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7a54d8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3939:{NFSU2_TR(0x5f3939);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f38e5u);}goto L5f38e5;}}
}
B5f393b:L5f393b:{c.instructions+=6;NFSU2_TR(0x5f393b);
u8 U[4];
w4(U+0,u32(0x802390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3940:{NFSU2_TR(0x5f3940);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3947:{NFSU2_TR(0x5f3947);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3948:{NFSU2_TR(0x5f3948);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f394f:{NFSU2_TR(0x5f394f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3950:{NFSU2_TR(0x5f3950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3955ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5f3955:L5f3955:{c.instructions+=14;NFSU2_TR(0x5f3955);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3959:{NFSU2_TR(0x5f3959);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f395d:{NFSU2_TR(0x5f395d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3961:{NFSU2_TR(0x5f3961);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3965:{NFSU2_TR(0x5f3965);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3969:{NFSU2_TR(0x5f3969);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f396d:{NFSU2_TR(0x5f396d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f396e:{NFSU2_TR(0x5f396e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3975:{NFSU2_TR(0x5f3975);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3979:{NFSU2_TR(0x5f3979);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f397a:{NFSU2_TR(0x5f397a);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f397e:{NFSU2_TR(0x5f397e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f397f:{NFSU2_TR(0x5f397f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3987:{NFSU2_TR(0x5f3987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f398cull));
TAIL_STATIC(0x43c9b0u,43c);
}
B5f398c:L5f398c:{c.instructions+=7;NFSU2_TR(0x5f398c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5f398f:{NFSU2_TR(0x5f398f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3993:{NFSU2_TR(0x5f3993);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3994:{NFSU2_TR(0x5f3994);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f399b:{NFSU2_TR(0x5f399b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f399c:{NFSU2_TR(0x5f399c);
__builtin_memmove((R+4),(R+24),4);
}
B5f399e:{NFSU2_TR(0x5f399e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f39a3ull));
TAIL_STATIC(0x5eaa40u,5ea);
}
B5f39a3:L5f39a3:{c.instructions+=11;NFSU2_TR(0x5f39a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f39a9:{NFSU2_TR(0x5f39a9);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f39af:{NFSU2_TR(0x5f39af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f39b5:{NFSU2_TR(0x5f39b5);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f39bb:{NFSU2_TR(0x5f39bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f39bc:{NFSU2_TR(0x5f39bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f39c2:{NFSU2_TR(0x5f39c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f39c3:{NFSU2_TR(0x5f39c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f39c4:{NFSU2_TR(0x5f39c4);
__builtin_memmove((R+16),(R+20),4);
}
B5f39c6:{NFSU2_TR(0x5f39c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f39c7:{NFSU2_TR(0x5f39c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f39d0:L5f39d0:{c.instructions+=6;NFSU2_TR(0x5f39d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f39d1:{NFSU2_TR(0x5f39d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f39d2:{NFSU2_TR(0x5f39d2);
__builtin_memmove((R+20),(R+4),4);
}
B5f39d4:{NFSU2_TR(0x5f39d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f39d5:{NFSU2_TR(0x5f39d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f39d6:{NFSU2_TR(0x5f39d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f39dbull));
TAIL_STATIC(0x4a9d50u,4a9);
}
B5f39db:L5f39db:{c.instructions+=5;NFSU2_TR(0x5f39db);
__builtin_memmove((R+28),(R+0),4);
}
B5f39dd:{NFSU2_TR(0x5f39dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f39e0:{NFSU2_TR(0x5f39e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f39e3:{NFSU2_TR(0x5f39e3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f39e5:{NFSU2_TR(0x5f39e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3ad2;}}
}
B5f39eb:L5f39eb:{c.instructions+=3;NFSU2_TR(0x5f39eb);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5f39f0:{NFSU2_TR(0x5f39f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f39f2:{NFSU2_TR(0x5f39f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3a01;}}
}
B5f39f4:L5f39f4:{c.instructions+=3;NFSU2_TR(0x5f39f4);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5f39f9:{NFSU2_TR(0x5f39f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f39fb:{NFSU2_TR(0x5f39fb);
if(r1(R+518)){{goto L5f3abf;}}
}
B5f3a01:L5f3a01:{c.instructions+=2;NFSU2_TR(0x5f3a01);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3a0b:{NFSU2_TR(0x5f3a0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3a23;}}
}
B5f3a0d:L5f3a0d:{c.instructions+=3;NFSU2_TR(0x5f3a0d);
__builtin_memmove((R+0),gp(0x86b320),4);
}
B5f3a12:{NFSU2_TR(0x5f3a12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3a14:{NFSU2_TR(0x5f3a14);
if(r1(R+518)){{goto L5f3a23;}}
}
B5f3a16:L5f3a16:{c.instructions+=2;NFSU2_TR(0x5f3a16);
u8 U[14];
__builtin_memmove((U+6),gp(0x86b328),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3a1d:{NFSU2_TR(0x5f3a1d);
if(r1(R+518)){{goto L5f3ab1;}}
}
B5f3a23:L5f3a23:{c.instructions+=3;NFSU2_TR(0x5f3a23);
__builtin_memmove((R+0),gp(0x8900a0),4);
}
B5f3a28:{NFSU2_TR(0x5f3a28);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3a2b:{NFSU2_TR(0x5f3a2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3a3b;}}
}
B5f3a2d:L5f3a2d:{c.instructions+=3;NFSU2_TR(0x5f3a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3a30:{NFSU2_TR(0x5f3a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5f3a33:{NFSU2_TR(0x5f3a33);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa7bull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B5f3a3b:L5f3a3b:{c.instructions+=8;NFSU2_TR(0x5f3a3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3a3c:{NFSU2_TR(0x5f3a3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3a3d:{NFSU2_TR(0x5f3a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f3a40:{NFSU2_TR(0x5f3a40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3a42:{NFSU2_TR(0x5f3a42);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f3a47:{NFSU2_TR(0x5f3a47);
__builtin_memmove((R+4),(R+24),4);
}
B5f3a49:{NFSU2_TR(0x5f3a49);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5f3a4b:{NFSU2_TR(0x5f3a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3a50ull));
TAIL_STATIC(0x40f690u,40f);
}
B5f3a50:L5f3a50:{c.instructions+=3;NFSU2_TR(0x5f3a50);
__builtin_memmove((R+4),gp(0x88f2be),1);
}
B5f3a56:{NFSU2_TR(0x5f3a56);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3a58:{NFSU2_TR(0x5f3a58);
if(r1(R+518)){{goto L5f3a72;}}
}
B5f3a5a:L5f3a5a:{c.instructions+=2;NFSU2_TR(0x5f3a5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3a5c:{NFSU2_TR(0x5f3a5c);
if(r1(R+518)){{goto L5f3a72;}}
}
B5f3a5e:L5f3a5e:{c.instructions+=8;NFSU2_TR(0x5f3a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f3a61:{NFSU2_TR(0x5f3a61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f3a64:{NFSU2_TR(0x5f3a64);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B5f3a66:{NFSU2_TR(0x5f3a66);
w1(R+12,u8(~u32(r1(R+12))));
}
B5f3a68:{NFSU2_TR(0x5f3a68);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B5f3a6b:{NFSU2_TR(0x5f3a6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3a6d:{NFSU2_TR(0x5f3a6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B5f3a70:{NFSU2_TR(0x5f3a70);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+4))));
}
B5f3a72:L5f3a72:{c.instructions+=5;NFSU2_TR(0x5f3a72);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3a78:{NFSU2_TR(0x5f3a78);
{u32 ea_=u32(u32(8017064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3a7e:{NFSU2_TR(0x5f3a7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3a80:{NFSU2_TR(0x5f3a80);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3a83:{NFSU2_TR(0x5f3a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3a8c;}}
}
B5f3a85:L5f3a85:{c.instructions+=2;NFSU2_TR(0x5f3a85);
w4(R+0,u32(0x1ull));
}
B5f3a8a:{NFSU2_TR(0x5f3a8a);
{goto L5f3a8e;}
}
B5f3a8c:L5f3a8c:{c.instructions+=1;NFSU2_TR(0x5f3a8c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f3a8e:L5f3a8e:{c.instructions+=6;NFSU2_TR(0x5f3a8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f3a92:{NFSU2_TR(0x5f3a92);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+0))));
}
B5f3a94:{NFSU2_TR(0x5f3a94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3a95:{NFSU2_TR(0x5f3a95);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3a97:{NFSU2_TR(0x5f3a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f3a98:{NFSU2_TR(0x5f3a98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3aab;}}
}
B5f3a9a:L5f3a9a:{c.instructions+=3;NFSU2_TR(0x5f3a9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f3aa0:{NFSU2_TR(0x5f3aa0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3aa2:{NFSU2_TR(0x5f3aa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3aab;}}
}
B5f3aa4:L5f3aa4:{c.instructions+=2;NFSU2_TR(0x5f3aa4);
w4(R+0,u32(0x1ull));
}
B5f3aa9:{NFSU2_TR(0x5f3aa9);
{goto L5f3aad;}
}
B5f3aab:L5f3aab:{c.instructions+=1;NFSU2_TR(0x5f3aab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f3aad:L5f3aad:{c.instructions+=2;NFSU2_TR(0x5f3aad);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3aaf:{NFSU2_TR(0x5f3aaf);
if(r1(R+518)){{goto L5f3abf;}}
}
B5f3ab1:L5f3ab1:{c.instructions+=5;NFSU2_TR(0x5f3ab1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3ab2:{NFSU2_TR(0x5f3ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x230ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3abc:{NFSU2_TR(0x5f3abc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3abd:{NFSU2_TR(0x5f3abd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3abe:{NFSU2_TR(0x5f3abe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3abf:L5f3abf:{c.instructions+=2;NFSU2_TR(0x5f3abf);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f3ac6:{NFSU2_TR(0x5f3ac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3ad2;}}
}
B5f3ac8:L5f3ac8:{c.instructions+=1;NFSU2_TR(0x5f3ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x230ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3ad2:L5f3ad2:{c.instructions+=4;NFSU2_TR(0x5f3ad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3ad3:{NFSU2_TR(0x5f3ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3ad4:{NFSU2_TR(0x5f3ad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3ad5:{NFSU2_TR(0x5f3ad5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3ae0:L5f3ae0:{c.instructions+=10;NFSU2_TR(0x5f3ae0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3ae1:{NFSU2_TR(0x5f3ae1);
__builtin_memmove((R+20),(R+16),4);
}
B5f3ae3:{NFSU2_TR(0x5f3ae3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f3ae6:{NFSU2_TR(0x5f3ae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5f3ae9:{NFSU2_TR(0x5f3ae9);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3af0:{NFSU2_TR(0x5f3af0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3af1:{NFSU2_TR(0x5f3af1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3af2:{NFSU2_TR(0x5f3af2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3af3:{NFSU2_TR(0x5f3af3);
__builtin_memmove((R+12),(R+4),4);
}
B5f3af5:{NFSU2_TR(0x5f3af5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3c99;}}
}
B5f3afb:L5f3afb:{c.instructions+=3;NFSU2_TR(0x5f3afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3afe:{NFSU2_TR(0x5f3afe);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3b00:{NFSU2_TR(0x5f3b00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3c99;}}
}
B5f3b06:L5f3b06:{c.instructions+=3;NFSU2_TR(0x5f3b06);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f3b0c:{NFSU2_TR(0x5f3b0c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3b0e:{NFSU2_TR(0x5f3b0e);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3b14:L5f3b14:{c.instructions+=2;NFSU2_TR(0x5f3b14);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f3b17:{NFSU2_TR(0x5f3b17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3c99;}}
}
B5f3b1d:L5f3b1d:{c.instructions+=3;NFSU2_TR(0x5f3b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3b23:{NFSU2_TR(0x5f3b23);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3b25:{NFSU2_TR(0x5f3b25);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3b2b:L5f3b2b:{c.instructions+=2;NFSU2_TR(0x5f3b2b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f3b2f:{NFSU2_TR(0x5f3b2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3c99;}}
}
B5f3b35:L5f3b35:{c.instructions+=3;NFSU2_TR(0x5f3b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3b38:{NFSU2_TR(0x5f3b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3b3a:{NFSU2_TR(0x5f3b3a);
if(r1(R+518)){{goto L5f3b41;}}
}
B5f3b3c:L5f3b3c:{c.instructions+=2;NFSU2_TR(0x5f3b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3b3f:{NFSU2_TR(0x5f3b3f);
{goto L5f3b43;}
}
B5f3b41:L5f3b41:{c.instructions+=1;NFSU2_TR(0x5f3b41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f3b43:L5f3b43:{c.instructions+=2;NFSU2_TR(0x5f3b43);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3b45:{NFSU2_TR(0x5f3b45);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3b4b:L5f3b4b:{c.instructions+=3;NFSU2_TR(0x5f3b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f3b51:{NFSU2_TR(0x5f3b51);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3b53:{NFSU2_TR(0x5f3b53);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3b59:L5f3b59:{c.instructions+=2;NFSU2_TR(0x5f3b59);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3b5b:{NFSU2_TR(0x5f3b5b);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3b61:L5f3b61:{c.instructions+=5;NFSU2_TR(0x5f3b61);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3b64:{NFSU2_TR(0x5f3b64);
{u32 ea_=u32(u32(8017248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3b6a:{NFSU2_TR(0x5f3b6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3b6c:{NFSU2_TR(0x5f3b6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3b6f:{NFSU2_TR(0x5f3b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3b89;}}
}
B5f3b71:L5f3b71:{c.instructions+=9;NFSU2_TR(0x5f3b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f3b73:{NFSU2_TR(0x5f3b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3b79:{NFSU2_TR(0x5f3b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3b7c:{NFSU2_TR(0x5f3b7c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5f3b7f:{NFSU2_TR(0x5f3b7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3b80:{NFSU2_TR(0x5f3b80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3b81:{NFSU2_TR(0x5f3b81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3b82:{NFSU2_TR(0x5f3b82);
__builtin_memmove((R+4),(R+12),4);
}
B5f3b84:{NFSU2_TR(0x5f3b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3b89ull));
TAIL_STATIC(0x5eac90u,5ea);
}
B5f3b89:L5f3b89:{c.instructions+=2;NFSU2_TR(0x5f3b89);
w4(R+4,u32(0x89cf48ull));
}
B5f3b8e:{NFSU2_TR(0x5f3b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3b93ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B5f3b93:L5f3b93:{c.instructions+=2;NFSU2_TR(0x5f3b93);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3b95:{NFSU2_TR(0x5f3b95);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3b9b:L5f3b9b:{c.instructions+=2;NFSU2_TR(0x5f3b9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3b9d:{NFSU2_TR(0x5f3b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3ba2ull));
TAIL_STATIC(0x401e80u,401);
}
B5f3ba2:L5f3ba2:{c.instructions+=4;NFSU2_TR(0x5f3ba2);
__builtin_memmove((R+24),(R+0),4);
}
B5f3ba4:{NFSU2_TR(0x5f3ba4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f3ba7:{NFSU2_TR(0x5f3ba7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3ba9:{NFSU2_TR(0x5f3ba9);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3baf:L5f3baf:{c.instructions+=3;NFSU2_TR(0x5f3baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3bb5:{NFSU2_TR(0x5f3bb5);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3bb7:{NFSU2_TR(0x5f3bb7);
if(r1(R+518)){{goto L5f3c99;}}
}
B5f3bbd:L5f3bbd:{c.instructions+=9;NFSU2_TR(0x5f3bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f3bbf:{NFSU2_TR(0x5f3bbf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f3bc1:{NFSU2_TR(0x5f3bc1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5f3bc8:{NFSU2_TR(0x5f3bc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3bcc:{NFSU2_TR(0x5f3bcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3bd0:{NFSU2_TR(0x5f3bd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3bd1:{NFSU2_TR(0x5f3bd1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3bd2:{NFSU2_TR(0x5f3bd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3bd3:{NFSU2_TR(0x5f3bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3bd8ull));
TAIL_STATIC(0x43c390u,43c);
}
B5f3bd8:L5f3bd8:{c.instructions+=7;NFSU2_TR(0x5f3bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f3bda:{NFSU2_TR(0x5f3bda);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3bdf:{NFSU2_TR(0x5f3bdf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3be2:{NFSU2_TR(0x5f3be2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3be3:{NFSU2_TR(0x5f3be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3be6:{NFSU2_TR(0x5f3be6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3be7:{NFSU2_TR(0x5f3be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3becull));
TAIL_STATIC(0x401280u,401);
}
B5f3bec:L5f3bec:{c.instructions+=15;NFSU2_TR(0x5f3bec);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3bef:{NFSU2_TR(0x5f3bef);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f3bf5:{NFSU2_TR(0x5f3bf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3bf9:{NFSU2_TR(0x5f3bf9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3bfc:{NFSU2_TR(0x5f3bfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3c00:{NFSU2_TR(0x5f3c00);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3c03:{NFSU2_TR(0x5f3c03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c04:{NFSU2_TR(0x5f3c04);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3c08:{NFSU2_TR(0x5f3c08);
__builtin_memmove((R+4),(R+24),4);
}
B5f3c0a:{NFSU2_TR(0x5f3c0a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5f3c0c:{NFSU2_TR(0x5f3c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c10:{NFSU2_TR(0x5f3c10);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3c14:{NFSU2_TR(0x5f3c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c1c:{NFSU2_TR(0x5f3c1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c24:{NFSU2_TR(0x5f3c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3c29ull));
TAIL_STATIC(0x440fd0u,440);
}
B5f3c29:L5f3c29:{c.instructions+=10;NFSU2_TR(0x5f3c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3c2d:{NFSU2_TR(0x5f3c2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3c31:{NFSU2_TR(0x5f3c31);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3c35:{NFSU2_TR(0x5f3c35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c36:{NFSU2_TR(0x5f3c36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3c39:{NFSU2_TR(0x5f3c39);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c3d:{NFSU2_TR(0x5f3c3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c41:{NFSU2_TR(0x5f3c41);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c49:{NFSU2_TR(0x5f3c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c51:{NFSU2_TR(0x5f3c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3c56ull));
TAIL_STATIC(0x440fd0u,440);
}
B5f3c56:L5f3c56:{c.instructions+=8;NFSU2_TR(0x5f3c56);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3c5a:{NFSU2_TR(0x5f3c5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c5b:{NFSU2_TR(0x5f3c5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3c5e:{NFSU2_TR(0x5f3c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c66:{NFSU2_TR(0x5f3c66);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c6e:{NFSU2_TR(0x5f3c6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c76:{NFSU2_TR(0x5f3c76);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f3c7e:{NFSU2_TR(0x5f3c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3c83ull));
TAIL_STATIC(0x440fd0u,440);
}
B5f3c83:L5f3c83:{c.instructions+=8;NFSU2_TR(0x5f3c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3c89:{NFSU2_TR(0x5f3c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3c8c:{NFSU2_TR(0x5f3c8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c8e:{NFSU2_TR(0x5f3c8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c90:{NFSU2_TR(0x5f3c90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c92:{NFSU2_TR(0x5f3c92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c93:{NFSU2_TR(0x5f3c93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3c94:{NFSU2_TR(0x5f3c94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3c99ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B5f3c99:L5f3c99:{c.instructions+=6;NFSU2_TR(0x5f3c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3c9a:{NFSU2_TR(0x5f3c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3c9b:{NFSU2_TR(0x5f3c9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f3c9c:{NFSU2_TR(0x5f3c9c);
__builtin_memmove((R+16),(R+20),4);
}
B5f3c9e:{NFSU2_TR(0x5f3c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3c9f:{NFSU2_TR(0x5f3c9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3cb0:L5f3cb0:{c.instructions+=11;NFSU2_TR(0x5f3cb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3cb1:{NFSU2_TR(0x5f3cb1);
__builtin_memmove((R+20),(R+16),4);
}
B5f3cb3:{NFSU2_TR(0x5f3cb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f3cb6:{NFSU2_TR(0x5f3cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5f3cb9:{NFSU2_TR(0x5f3cb9);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5f3cbe:{NFSU2_TR(0x5f3cbe);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3cc0:{NFSU2_TR(0x5f3cc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3cc1:{NFSU2_TR(0x5f3cc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3cc2:{NFSU2_TR(0x5f3cc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3cc3:{NFSU2_TR(0x5f3cc3);
__builtin_memmove((R+28),(R+4),4);
}
B5f3cc5:{NFSU2_TR(0x5f3cc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3df7;}}
}
B5f3ccb:L5f3ccb:{c.instructions+=5;NFSU2_TR(0x5f3ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3cce:{NFSU2_TR(0x5f3cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3cd1:{NFSU2_TR(0x5f3cd1);
w4(R+8,u32(0x1ull));
}
B5f3cd6:{NFSU2_TR(0x5f3cd6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3cd8:{NFSU2_TR(0x5f3cd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3df7;}}
}
B5f3cde:L5f3cde:{c.instructions+=3;NFSU2_TR(0x5f3cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3ce4:{NFSU2_TR(0x5f3ce4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3ce6:{NFSU2_TR(0x5f3ce6);
if(r1(R+518)){{goto L5f3df7;}}
}
B5f3cec:L5f3cec:{c.instructions+=2;NFSU2_TR(0x5f3cec);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f3cef:{NFSU2_TR(0x5f3cef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3df7;}}
}
B5f3cf5:L5f3cf5:{c.instructions+=4;NFSU2_TR(0x5f3cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5f3cf8:{NFSU2_TR(0x5f3cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f3cfa:{NFSU2_TR(0x5f3cfa);
__builtin_memmove((R+4),(R+24),4);
}
B5f3cfc:{NFSU2_TR(0x5f3cfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3cffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f3cff:L5f3cff:{c.instructions+=3;NFSU2_TR(0x5f3cff);
__builtin_memmove((R+4),(R+24),4);
}
B5f3d01:{NFSU2_TR(0x5f3d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3d05:{NFSU2_TR(0x5f3d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3d0aull));
TAIL_STATIC(0x5f1640u,5f1);
}
B5f3d0a:L5f3d0a:{c.instructions+=4;NFSU2_TR(0x5f3d0a);
__builtin_memmove((R+12),(R+0),4);
}
B5f3d0c:{NFSU2_TR(0x5f3d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3d12:{NFSU2_TR(0x5f3d12);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3d15:{NFSU2_TR(0x5f3d15);
if(r1(R+518)){{goto L5f3d20;}}
}
B5f3d17:L5f3d17:{c.instructions+=2;NFSU2_TR(0x5f3d17);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3d1a:{NFSU2_TR(0x5f3d1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3df7;}}
}
B5f3d20:L5f3d20:{c.instructions+=2;NFSU2_TR(0x5f3d20);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3d22:{NFSU2_TR(0x5f3d22);
if(r1(R+518)){{goto L5f3dcb;}}
}
B5f3d28:L5f3d28:{c.instructions+=3;NFSU2_TR(0x5f3d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3d2b:{NFSU2_TR(0x5f3d2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3d2d:{NFSU2_TR(0x5f3d2d);
if(r1(R+518)){{goto L5f3dcb;}}
}
B5f3d33:L5f3d33:{c.instructions+=11;NFSU2_TR(0x5f3d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3d37:{NFSU2_TR(0x5f3d37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d38:{NFSU2_TR(0x5f3d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3d3b:{NFSU2_TR(0x5f3d3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3d3f:{NFSU2_TR(0x5f3d3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d40:{NFSU2_TR(0x5f3d40);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5f3d44:{NFSU2_TR(0x5f3d44);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B5f3d47:{NFSU2_TR(0x5f3d47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d48:{NFSU2_TR(0x5f3d48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d49:{NFSU2_TR(0x5f3d49);
__builtin_memmove((R+4),(R+12),4);
}
B5f3d4b:{NFSU2_TR(0x5f3d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3d50ull));
TAIL_STATIC(0x419b20u,419);
}
B5f3d50:L5f3d50:{c.instructions+=3;NFSU2_TR(0x5f3d50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3d53:{NFSU2_TR(0x5f3d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3d57:{NFSU2_TR(0x5f3d57);
if(r1(R+518)){{goto L5f3dcb;}}
}
B5f3d59:L5f3d59:{c.instructions+=2;NFSU2_TR(0x5f3d59);
__builtin_memmove((R+4),(R+24),4);
}
B5f3d5b:{NFSU2_TR(0x5f3d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3d60ull));
TAIL_STATIC(0x40a2a0u,40a);
}
B5f3d60:L5f3d60:{c.instructions+=12;NFSU2_TR(0x5f3d60);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f3d64:{NFSU2_TR(0x5f3d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3d68:{NFSU2_TR(0x5f3d68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d69:{NFSU2_TR(0x5f3d69);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d6b:{NFSU2_TR(0x5f3d6b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3d6f:{NFSU2_TR(0x5f3d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3d73:{NFSU2_TR(0x5f3d73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d75:{NFSU2_TR(0x5f3d75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d76:{NFSU2_TR(0x5f3d76);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3d7a:{NFSU2_TR(0x5f3d7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d7b:{NFSU2_TR(0x5f3d7b);
__builtin_memmove((R+4),(R+12),4);
}
B5f3d7d:{NFSU2_TR(0x5f3d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3d82ull));
TAIL_STATIC(0x419d20u,419);
}
B5f3d82:L5f3d82:{c.instructions+=2;NFSU2_TR(0x5f3d82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3d84:{NFSU2_TR(0x5f3d84);
if(r1(R+518)){{goto L5f3dcb;}}
}
B5f3d86:L5f3d86:{c.instructions+=8;NFSU2_TR(0x5f3d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3d8c:{NFSU2_TR(0x5f3d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3d8f:{NFSU2_TR(0x5f3d8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3d93:{NFSU2_TR(0x5f3d93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d94:{NFSU2_TR(0x5f3d94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d95:{NFSU2_TR(0x5f3d95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3d96:{NFSU2_TR(0x5f3d96);
__builtin_memmove((R+4),(R+28),4);
}
B5f3d98:{NFSU2_TR(0x5f3d98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3d9dull));
TAIL_STATIC(0x5eac90u,5ea);
}
B5f3d9d:L5f3d9d:{c.instructions+=13;NFSU2_TR(0x5f3d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f3da1:{NFSU2_TR(0x5f3da1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3da5:{NFSU2_TR(0x5f3da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3da9:{NFSU2_TR(0x5f3da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3daf:{NFSU2_TR(0x5f3daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3db5:{NFSU2_TR(0x5f3db5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3dbb:{NFSU2_TR(0x5f3dbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f3dc2:{NFSU2_TR(0x5f3dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3dc3:{NFSU2_TR(0x5f3dc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3dc4:{NFSU2_TR(0x5f3dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f3dc5:{NFSU2_TR(0x5f3dc5);
__builtin_memmove((R+16),(R+20),4);
}
B5f3dc7:{NFSU2_TR(0x5f3dc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3dc8:{NFSU2_TR(0x5f3dc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3dcb:L5f3dcb:{c.instructions+=3;NFSU2_TR(0x5f3dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f3dd1:{NFSU2_TR(0x5f3dd1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3dd3:{NFSU2_TR(0x5f3dd3);
if(r1(R+518)){{goto L5f3dfe;}}
}
B5f3dd5:L5f3dd5:{c.instructions+=8;NFSU2_TR(0x5f3dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3ddb:{NFSU2_TR(0x5f3ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3dde:{NFSU2_TR(0x5f3dde);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5f3de4:{NFSU2_TR(0x5f3de4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3de5:{NFSU2_TR(0x5f3de5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3de6:{NFSU2_TR(0x5f3de6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3de7:{NFSU2_TR(0x5f3de7);
__builtin_memmove((R+4),(R+28),4);
}
B5f3de9:{NFSU2_TR(0x5f3de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3deeull));
TAIL_STATIC(0x5eac90u,5ea);
}
B5f3dee:L5f3dee:{c.instructions+=6;NFSU2_TR(0x5f3dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3def:{NFSU2_TR(0x5f3def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3df0:{NFSU2_TR(0x5f3df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f3df1:{NFSU2_TR(0x5f3df1);
__builtin_memmove((R+16),(R+20),4);
}
B5f3df3:{NFSU2_TR(0x5f3df3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3df4:{NFSU2_TR(0x5f3df4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3df7:L5f3df7:{c.instructions+=1;NFSU2_TR(0x5f3df7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f3dfe:L5f3dfe:{c.instructions+=6;NFSU2_TR(0x5f3dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3dff:{NFSU2_TR(0x5f3dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3e00:{NFSU2_TR(0x5f3e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f3e01:{NFSU2_TR(0x5f3e01);
__builtin_memmove((R+16),(R+20),4);
}
B5f3e03:{NFSU2_TR(0x5f3e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f3e04:{NFSU2_TR(0x5f3e04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3e10:L5f3e10:{c.instructions+=14;NFSU2_TR(0x5f3e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3e14:{NFSU2_TR(0x5f3e14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e15:{NFSU2_TR(0x5f3e15);
__builtin_memmove((R+24),(R+4),4);
}
B5f3e17:{NFSU2_TR(0x5f3e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3e1a:{NFSU2_TR(0x5f3e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3e1d:{NFSU2_TR(0x5f3e1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5f3e21:{NFSU2_TR(0x5f3e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x464ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3e27:{NFSU2_TR(0x5f3e27);
__builtin_memmove((R+8),gp(0x89e7d8),1);
}
B5f3e2d:{NFSU2_TR(0x5f3e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3e30:{NFSU2_TR(0x5f3e30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e31:{NFSU2_TR(0x5f3e31);
w4(R+4,u32(0x1ull));
}
B5f3e36:{NFSU2_TR(0x5f3e36);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f3e38:{NFSU2_TR(0x5f3e38);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3e3a:{NFSU2_TR(0x5f3e3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3e44;}}
}
B5f3e3c:L5f3e3c:{c.instructions+=2;NFSU2_TR(0x5f3e3c);
u8 U[14];
__builtin_memmove((U+6),gp(0x864fac),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3e42:{NFSU2_TR(0x5f3e42);
if(r1(R+518)){{goto L5f3e48;}}
}
B5f3e44:L5f3e44:{c.instructions+=1;NFSU2_TR(0x5f3e44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5f3e48:L5f3e48:{c.instructions+=4;NFSU2_TR(0x5f3e48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f3e4a:{NFSU2_TR(0x5f3e4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e4b:{NFSU2_TR(0x5f3e4b);
__builtin_memmove((R+4),(R+0),4);
}
B5f3e4d:{NFSU2_TR(0x5f3e4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3e50ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f3e50:L5f3e50:{c.instructions+=3;NFSU2_TR(0x5f3e50);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B5f3e55:{NFSU2_TR(0x5f3e55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e56:{NFSU2_TR(0x5f3e56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3e5bull));
TAIL_STATIC(0x440e50u,440);
}
B5f3e5b:L5f3e5b:{c.instructions+=3;NFSU2_TR(0x5f3e5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f3e5e:{NFSU2_TR(0x5f3e5e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3e60:{NFSU2_TR(0x5f3e60);
if(r1(R+518)){{goto L5f3e6a;}}
}
B5f3e62:L5f3e62:{c.instructions+=3;NFSU2_TR(0x5f3e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3e65:{NFSU2_TR(0x5f3e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3e68:{NFSU2_TR(0x5f3e68);
{goto L5f3e6c;}
}
B5f3e6a:L5f3e6a:{c.instructions+=1;NFSU2_TR(0x5f3e6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f3e6c:L5f3e6c:{c.instructions+=3;NFSU2_TR(0x5f3e6c);
u8 U[4];
w4(U+0,u32(0x7a62c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e71:{NFSU2_TR(0x5f3e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3e77:{NFSU2_TR(0x5f3e77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3e7cull));
TAIL_STATIC(0x43db50u,43d);
}
B5f3e7c:L5f3e7c:{c.instructions+=4;NFSU2_TR(0x5f3e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3e82:{NFSU2_TR(0x5f3e82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f3e85:{NFSU2_TR(0x5f3e85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e86:{NFSU2_TR(0x5f3e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3e8bull));
TAIL_STATIC(0x493600u,493);
}
B5f3e8b:L5f3e8b:{c.instructions+=3;NFSU2_TR(0x5f3e8b);
__builtin_memmove((R+4),gp(0x82da88),4);
}
B5f3e91:{NFSU2_TR(0x5f3e91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3e92:{NFSU2_TR(0x5f3e92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3e97ull));
TAIL_STATIC(0x440e50u,440);
}
B5f3e97:L5f3e97:{c.instructions+=3;NFSU2_TR(0x5f3e97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f3e9a:{NFSU2_TR(0x5f3e9a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3e9c:{NFSU2_TR(0x5f3e9c);
if(r1(R+518)){{goto L5f3ea6;}}
}
B5f3e9e:L5f3e9e:{c.instructions+=3;NFSU2_TR(0x5f3e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3ea1:{NFSU2_TR(0x5f3ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3ea4:{NFSU2_TR(0x5f3ea4);
{goto L5f3ea8;}
}
B5f3ea6:L5f3ea6:{c.instructions+=1;NFSU2_TR(0x5f3ea6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f3ea8:L5f3ea8:{c.instructions+=3;NFSU2_TR(0x5f3ea8);
u8 U[4];
w4(U+0,u32(0x7a62b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3ead:{NFSU2_TR(0x5f3ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3eb3:{NFSU2_TR(0x5f3eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3eb8ull));
TAIL_STATIC(0x43db50u,43d);
}
B5f3eb8:L5f3eb8:{c.instructions+=4;NFSU2_TR(0x5f3eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3ebe:{NFSU2_TR(0x5f3ebe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f3ec1:{NFSU2_TR(0x5f3ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3ec2:{NFSU2_TR(0x5f3ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3ec7ull));
TAIL_STATIC(0x493600u,493);
}
B5f3ec7:L5f3ec7:{c.instructions+=2;NFSU2_TR(0x5f3ec7);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3ec9:{NFSU2_TR(0x5f3ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f3eceull));
TAIL_STATIC(0x575620u,575);
}
B5f3ece:L5f3ece:{c.instructions+=3;NFSU2_TR(0x5f3ece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f3ed1:{NFSU2_TR(0x5f3ed1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+6)));
w4(U+10,u32(u32(r4(R+0))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3ed3:{NFSU2_TR(0x5f3ed3);
if(r1(R+518)){{goto L5f3ee5;}}
}
B5f3ed5:L5f3ed5:{c.instructions+=6;NFSU2_TR(0x5f3ed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f3ed7:{NFSU2_TR(0x5f3ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3eda:{NFSU2_TR(0x5f3eda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3edb:{NFSU2_TR(0x5f3edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3ee1:{NFSU2_TR(0x5f3ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3ee2:{NFSU2_TR(0x5f3ee2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3ee5:L5f3ee5:{c.instructions+=5;NFSU2_TR(0x5f3ee5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3ee7:{NFSU2_TR(0x5f3ee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f3ee8:{NFSU2_TR(0x5f3ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3eee:{NFSU2_TR(0x5f3eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f3eef:{NFSU2_TR(0x5f3eef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3f00:L5f3f00:{c.instructions+=5;NFSU2_TR(0x5f3f00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3f01:{NFSU2_TR(0x5f3f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3f04:{NFSU2_TR(0x5f3f04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8020e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f3f0a:{NFSU2_TR(0x5f3f0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3f0c:{NFSU2_TR(0x5f3f0c);
if(r1(R+518)){{goto L5f3f1c;}}
}
B5f3f0e:L5f3f0e:{c.instructions+=2;NFSU2_TR(0x5f3f0e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3f11:{NFSU2_TR(0x5f3f11);
if(r1(R+518)){{goto L5f3f1c;}}
}
B5f3f13:L5f3f13:{c.instructions+=2;NFSU2_TR(0x5f3f13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3f16:{NFSU2_TR(0x5f3f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3f9c;}}
}
B5f3f1c:L5f3f1c:{c.instructions+=7;NFSU2_TR(0x5f3f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3f1f:{NFSU2_TR(0x5f3f1f);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3f25:{NFSU2_TR(0x5f3f25);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3f2b:{NFSU2_TR(0x5f3f2b);
{u32 ea_=u32(u32(8017304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3f31:{NFSU2_TR(0x5f3f31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3f33:{NFSU2_TR(0x5f3f33);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3f36:{NFSU2_TR(0x5f3f36);
if(r1(R+518)){{goto L5f3f9c;}}
}
B5f3f38:L5f3f38:{c.instructions+=3;NFSU2_TR(0x5f3f38);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f3f3d:{NFSU2_TR(0x5f3f3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f3f3f:{NFSU2_TR(0x5f3f3f);
if(r1(R+518)){{goto L5f3f65;}}
}
B5f3f41:L5f3f41:{c.instructions+=2;NFSU2_TR(0x5f3f41);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f3f44:{NFSU2_TR(0x5f3f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3f65;}}
}
B5f3f46:L5f3f46:{c.instructions+=6;NFSU2_TR(0x5f3f46);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f3f49:{NFSU2_TR(0x5f3f49);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3f4f:{NFSU2_TR(0x5f3f4f);
{u32 ea_=u32(u32(8017312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3f55:{NFSU2_TR(0x5f3f55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3f57:{NFSU2_TR(0x5f3f57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3f5a:{NFSU2_TR(0x5f3f5a);
if(r1(R+514)){{goto L5f3f65;}}
}
B5f3f5c:L5f3f5c:{c.instructions+=2;NFSU2_TR(0x5f3f5c);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f3f63:{NFSU2_TR(0x5f3f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f3f9c;}}
}
B5f3f65:L5f3f65:{c.instructions+=3;NFSU2_TR(0x5f3f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3f6b:{NFSU2_TR(0x5f3f6b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3f6d:{NFSU2_TR(0x5f3f6d);
if(r1(R+518)){{goto L5f3fa0;}}
}
B5f3f6f:L5f3f6f:{c.instructions+=2;NFSU2_TR(0x5f3f6f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f3f74:{NFSU2_TR(0x5f3f74);
if(r1(R+518)){{goto L5f3fa0;}}
}
B5f3f76:L5f3f76:{c.instructions+=9;NFSU2_TR(0x5f3f76);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f3f7b:{NFSU2_TR(0x5f3f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5f3f81:{NFSU2_TR(0x5f3f81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5f3f85:{NFSU2_TR(0x5f3f85);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f3f89:{NFSU2_TR(0x5f3f89);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3f8f:{NFSU2_TR(0x5f3f8f);
{u32 ea_=u32(r4(R+4)+u32(2424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3f95:{NFSU2_TR(0x5f3f95);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3f97:{NFSU2_TR(0x5f3f97);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3f9a:{NFSU2_TR(0x5f3f9a);
if(r1(R+514)){{goto L5f3fa0;}}
}
B5f3f9c:L5f3f9c:{c.instructions+=3;NFSU2_TR(0x5f3f9c);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f3f9e:{NFSU2_TR(0x5f3f9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3f9f:{NFSU2_TR(0x5f3f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3fa0:L5f3fa0:{c.instructions+=3;NFSU2_TR(0x5f3fa0);
w1(R+0,u8(0x1ull));
}
B5f3fa2:{NFSU2_TR(0x5f3fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f3fa3:{NFSU2_TR(0x5f3fa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f3fb0:L5f3fb0:{c.instructions+=22;NFSU2_TR(0x5f3fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5f3fb3:{NFSU2_TR(0x5f3fb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3fb4:{NFSU2_TR(0x5f3fb4);
__builtin_memmove((R+24),(R+4),4);
}
B5f3fb6:{NFSU2_TR(0x5f3fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f3fb9:{NFSU2_TR(0x5f3fb9);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3fbf:{NFSU2_TR(0x5f3fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3fc2:{NFSU2_TR(0x5f3fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f3fc8:{NFSU2_TR(0x5f3fc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f3fc9:{NFSU2_TR(0x5f3fc9);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B5f3fcf:{NFSU2_TR(0x5f3fcf);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3fd5:{NFSU2_TR(0x5f3fd5);
__builtin_memmove((R+8),(R+28),4);
}
B5f3fd7:{NFSU2_TR(0x5f3fd7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5f3fd9:{NFSU2_TR(0x5f3fd9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3fdd:{NFSU2_TR(0x5f3fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f3fe1:{NFSU2_TR(0x5f3fe1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f3fe5:{NFSU2_TR(0x5f3fe5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f3feb:{NFSU2_TR(0x5f3feb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f3fef:{NFSU2_TR(0x5f3fef);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f3ff3:{NFSU2_TR(0x5f3ff3);
{u32 ea_=u32(u32(8017304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f3ff9:{NFSU2_TR(0x5f3ff9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f3ffb:{NFSU2_TR(0x5f3ffb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f3ffe:{NFSU2_TR(0x5f3ffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5f403fu,5f4);}
TAIL_STATIC(0x5f4000u,5f4);
}
XIT:NFSU2_TR_EXIT(0x5f3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
