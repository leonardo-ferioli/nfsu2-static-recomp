#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 body_4ea(u8* __restrict R,Cpu& c);
u32 body_4eb(u8* __restrict R,Cpu& c);
u32 body_4f2(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f3(u8* __restrict R,Cpu& c);
u32 page_4f3(Cpu& c){return body_4f3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f3000:goto L4f3000;
case 0x4f3005:goto L4f3005;
case 0x4f3006:c.instructions+=2;goto B4f3006;
case 0x4f3007:c.instructions+=1;goto B4f3007;
case 0x4f300c:goto L4f300c;
case 0x4f300f:c.instructions+=4;goto B4f300f;
case 0x4f3010:c.instructions+=3;goto B4f3010;
case 0x4f3013:c.instructions+=2;goto B4f3013;
case 0x4f3016:c.instructions+=1;goto B4f3016;
case 0x4f301b:goto L4f301b;
case 0x4f301c:c.instructions+=2;goto B4f301c;
case 0x4f301f:c.instructions+=1;goto B4f301f;
case 0x4f3025:goto L4f3025;
case 0x4f3027:c.instructions+=1;goto B4f3027;
case 0x4f302c:goto L4f302c;
case 0x4f302d:c.instructions+=5;goto B4f302d;
case 0x4f302e:c.instructions+=4;goto B4f302e;
case 0x4f302f:c.instructions+=3;goto B4f302f;
case 0x4f3030:c.instructions+=2;goto B4f3030;
case 0x4f3033:c.instructions+=1;goto B4f3033;
case 0x4f3040:goto L4f3040;
case 0x4f3041:c.instructions+=12;goto B4f3041;
case 0x4f3043:c.instructions+=11;goto B4f3043;
case 0x4f3046:c.instructions+=10;goto B4f3046;
case 0x4f304c:c.instructions+=9;goto B4f304c;
case 0x4f304d:c.instructions+=8;goto B4f304d;
case 0x4f304e:c.instructions+=7;goto B4f304e;
case 0x4f304f:c.instructions+=6;goto B4f304f;
case 0x4f3051:c.instructions+=5;goto B4f3051;
case 0x4f3057:c.instructions+=4;goto B4f3057;
case 0x4f3058:c.instructions+=3;goto B4f3058;
case 0x4f305a:c.instructions+=2;goto B4f305a;
case 0x4f305f:c.instructions+=1;goto B4f305f;
case 0x4f3063:goto L4f3063;
case 0x4f3065:goto L4f3065;
case 0x4f306a:c.instructions+=7;goto B4f306a;
case 0x4f306e:c.instructions+=6;goto B4f306e;
case 0x4f306f:c.instructions+=5;goto B4f306f;
case 0x4f3075:c.instructions+=4;goto B4f3075;
case 0x4f3076:c.instructions+=3;goto B4f3076;
case 0x4f3077:c.instructions+=2;goto B4f3077;
case 0x4f307b:c.instructions+=1;goto B4f307b;
case 0x4f3080:goto L4f3080;
case 0x4f3086:c.instructions+=3;goto B4f3086;
case 0x4f3089:c.instructions+=2;goto B4f3089;
case 0x4f308b:c.instructions+=1;goto B4f308b;
case 0x4f308d:goto L4f308d;
case 0x4f3092:c.instructions+=3;goto B4f3092;
case 0x4f3096:c.instructions+=2;goto B4f3096;
case 0x4f309c:c.instructions+=1;goto B4f309c;
case 0x4f309e:goto L4f309e;
case 0x4f30a0:goto L4f30a0;
case 0x4f30a6:goto L4f30a6;
case 0x4f30ac:c.instructions+=2;goto B4f30ac;
case 0x4f30b1:c.instructions+=1;goto B4f30b1;
case 0x4f30b5:goto L4f30b5;
case 0x4f30b7:goto L4f30b7;
case 0x4f30bd:c.instructions+=5;goto B4f30bd;
case 0x4f30c3:c.instructions+=4;goto B4f30c3;
case 0x4f30c5:c.instructions+=3;goto B4f30c5;
case 0x4f30c7:c.instructions+=2;goto B4f30c7;
case 0x4f30c9:c.instructions+=1;goto B4f30c9;
case 0x4f30cb:goto L4f30cb;
case 0x4f30d0:goto L4f30d0;
case 0x4f30d2:c.instructions+=6;goto B4f30d2;
case 0x4f30d5:c.instructions+=5;goto B4f30d5;
case 0x4f30d7:c.instructions+=4;goto B4f30d7;
case 0x4f30d9:c.instructions+=3;goto B4f30d9;
case 0x4f30db:c.instructions+=2;goto B4f30db;
case 0x4f30de:c.instructions+=1;goto B4f30de;
case 0x4f30e0:goto L4f30e0;
case 0x4f30e1:c.instructions+=1;goto B4f30e1;
case 0x4f30e6:goto L4f30e6;
case 0x4f30e9:goto L4f30e9;
case 0x4f30eb:c.instructions+=3;goto B4f30eb;
case 0x4f30ed:c.instructions+=2;goto B4f30ed;
case 0x4f30ef:c.instructions+=1;goto B4f30ef;
case 0x4f30f1:goto L4f30f1;
case 0x4f30f3:goto L4f30f3;
case 0x4f30f5:goto L4f30f5;
case 0x4f30fb:c.instructions+=4;goto B4f30fb;
case 0x4f30ff:c.instructions+=3;goto B4f30ff;
case 0x4f3103:c.instructions+=2;goto B4f3103;
case 0x4f3107:c.instructions+=1;goto B4f3107;
case 0x4f310d:goto L4f310d;
case 0x4f310f:goto L4f310f;
case 0x4f3113:goto L4f3113;
case 0x4f3117:c.instructions+=2;goto B4f3117;
case 0x4f3119:c.instructions+=1;goto B4f3119;
case 0x4f311b:goto L4f311b;
case 0x4f3120:goto L4f3120;
case 0x4f3123:c.instructions+=3;goto B4f3123;
case 0x4f3124:c.instructions+=2;goto B4f3124;
case 0x4f3126:c.instructions+=1;goto B4f3126;
case 0x4f3128:goto L4f3128;
case 0x4f312a:c.instructions+=1;goto B4f312a;
case 0x4f312f:goto L4f312f;
case 0x4f3132:c.instructions+=2;goto B4f3132;
case 0x4f3134:c.instructions+=1;goto B4f3134;
case 0x4f3136:goto L4f3136;
case 0x4f3139:c.instructions+=4;goto B4f3139;
case 0x4f313d:c.instructions+=3;goto B4f313d;
case 0x4f3140:c.instructions+=2;goto B4f3140;
case 0x4f3144:c.instructions+=1;goto B4f3144;
case 0x4f3146:goto L4f3146;
case 0x4f3148:c.instructions+=4;goto B4f3148;
case 0x4f314a:c.instructions+=3;goto B4f314a;
case 0x4f314d:c.instructions+=2;goto B4f314d;
case 0x4f314f:c.instructions+=1;goto B4f314f;
case 0x4f3151:goto L4f3151;
case 0x4f3156:goto L4f3156;
case 0x4f315a:c.instructions+=5;goto B4f315a;
case 0x4f315b:c.instructions+=4;goto B4f315b;
case 0x4f315c:c.instructions+=3;goto B4f315c;
case 0x4f315f:c.instructions+=2;goto B4f315f;
case 0x4f3160:c.instructions+=1;goto B4f3160;
case 0x4f3165:goto L4f3165;
case 0x4f3168:c.instructions+=5;goto B4f3168;
case 0x4f3169:c.instructions+=4;goto B4f3169;
case 0x4f316e:c.instructions+=3;goto B4f316e;
case 0x4f3171:c.instructions+=2;goto B4f3171;
case 0x4f3173:c.instructions+=1;goto B4f3173;
case 0x4f3175:goto L4f3175;
case 0x4f3178:c.instructions+=3;goto B4f3178;
case 0x4f3179:c.instructions+=2;goto B4f3179;
case 0x4f317c:c.instructions+=1;goto B4f317c;
case 0x4f317e:goto L4f317e;
case 0x4f3180:c.instructions+=13;goto B4f3180;
case 0x4f3184:c.instructions+=12;goto B4f3184;
case 0x4f3186:c.instructions+=11;goto B4f3186;
case 0x4f3188:c.instructions+=10;goto B4f3188;
case 0x4f318c:c.instructions+=9;goto B4f318c;
case 0x4f318d:c.instructions+=8;goto B4f318d;
case 0x4f3191:c.instructions+=7;goto B4f3191;
case 0x4f3192:c.instructions+=6;goto B4f3192;
case 0x4f3196:c.instructions+=5;goto B4f3196;
case 0x4f319b:c.instructions+=4;goto B4f319b;
case 0x4f319c:c.instructions+=3;goto B4f319c;
case 0x4f31a1:c.instructions+=2;goto B4f31a1;
case 0x4f31a5:c.instructions+=1;goto B4f31a5;
case 0x4f31aa:goto L4f31aa;
case 0x4f31ae:c.instructions+=4;goto B4f31ae;
case 0x4f31b0:c.instructions+=3;goto B4f31b0;
case 0x4f31b1:c.instructions+=2;goto B4f31b1;
case 0x4f31b6:c.instructions+=1;goto B4f31b6;
case 0x4f31bb:goto L4f31bb;
case 0x4f31bf:c.instructions+=4;goto B4f31bf;
case 0x4f31c1:c.instructions+=3;goto B4f31c1;
case 0x4f31c2:c.instructions+=2;goto B4f31c2;
case 0x4f31c6:c.instructions+=1;goto B4f31c6;
case 0x4f31cb:goto L4f31cb;
case 0x4f31cc:c.instructions+=3;goto B4f31cc;
case 0x4f31cd:c.instructions+=2;goto B4f31cd;
case 0x4f31d1:c.instructions+=1;goto B4f31d1;
case 0x4f31d6:goto L4f31d6;
case 0x4f31d9:c.instructions+=8;goto B4f31d9;
case 0x4f31dd:c.instructions+=7;goto B4f31dd;
case 0x4f31de:c.instructions+=6;goto B4f31de;
case 0x4f31e2:c.instructions+=5;goto B4f31e2;
case 0x4f31e8:c.instructions+=4;goto B4f31e8;
case 0x4f31ed:c.instructions+=3;goto B4f31ed;
case 0x4f31ee:c.instructions+=2;goto B4f31ee;
case 0x4f31ef:c.instructions+=1;goto B4f31ef;
case 0x4f31f4:goto L4f31f4;
case 0x4f31f7:c.instructions+=3;goto B4f31f7;
case 0x4f31f9:c.instructions+=2;goto B4f31f9;
case 0x4f31fc:c.instructions+=1;goto B4f31fc;
case 0x4f31fe:goto L4f31fe;
case 0x4f31ff:c.instructions+=1;goto B4f31ff;
case 0x4f3204:goto L4f3204;
case 0x4f3207:c.instructions+=1;goto B4f3207;
case 0x4f3209:goto L4f3209;
case 0x4f320f:c.instructions+=5;goto B4f320f;
case 0x4f3215:c.instructions+=4;goto B4f3215;
case 0x4f3217:c.instructions+=3;goto B4f3217;
case 0x4f321a:c.instructions+=2;goto B4f321a;
case 0x4f321d:c.instructions+=1;goto B4f321d;
case 0x4f321f:goto L4f321f;
case 0x4f3222:c.instructions+=1;goto B4f3222;
case 0x4f3224:goto L4f3224;
case 0x4f3227:c.instructions+=3;goto B4f3227;
case 0x4f3228:c.instructions+=2;goto B4f3228;
case 0x4f322a:c.instructions+=1;goto B4f322a;
case 0x4f322c:goto L4f322c;
case 0x4f3230:c.instructions+=8;goto B4f3230;
case 0x4f3236:c.instructions+=7;goto B4f3236;
case 0x4f3237:c.instructions+=6;goto B4f3237;
case 0x4f3238:c.instructions+=5;goto B4f3238;
case 0x4f323a:c.instructions+=4;goto B4f323a;
case 0x4f323c:c.instructions+=3;goto B4f323c;
case 0x4f3240:c.instructions+=2;goto B4f3240;
case 0x4f3244:c.instructions+=1;goto B4f3244;
case 0x4f324a:goto L4f324a;
case 0x4f324e:goto L4f324e;
case 0x4f3250:c.instructions+=1;goto B4f3250;
case 0x4f3255:goto L4f3255;
case 0x4f325b:c.instructions+=2;goto B4f325b;
case 0x4f325d:c.instructions+=1;goto B4f325d;
case 0x4f325f:goto L4f325f;
case 0x4f3260:c.instructions+=1;goto B4f3260;
case 0x4f3265:goto L4f3265;
case 0x4f3268:c.instructions+=2;goto B4f3268;
case 0x4f326e:c.instructions+=1;goto B4f326e;
case 0x4f3274:goto L4f3274;
case 0x4f3275:c.instructions+=6;goto B4f3275;
case 0x4f3276:c.instructions+=5;goto B4f3276;
case 0x4f3277:c.instructions+=4;goto B4f3277;
case 0x4f3278:c.instructions+=3;goto B4f3278;
case 0x4f327a:c.instructions+=2;goto B4f327a;
case 0x4f327b:c.instructions+=1;goto B4f327b;
case 0x4f3280:goto L4f3280;
case 0x4f3281:c.instructions+=2;goto B4f3281;
case 0x4f3283:c.instructions+=1;goto B4f3283;
case 0x4f3288:goto L4f3288;
case 0x4f328d:c.instructions+=1;goto B4f328d;
case 0x4f328f:goto L4f328f;
case 0x4f3290:c.instructions+=1;goto B4f3290;
case 0x4f3295:goto L4f3295;
case 0x4f3298:goto L4f3298;
case 0x4f329a:c.instructions+=2;goto B4f329a;
case 0x4f329b:c.instructions+=1;goto B4f329b;
case 0x4f32a0:goto L4f32a0;
case 0x4f32a6:c.instructions+=1;goto B4f32a6;
case 0x4f32b0:goto L4f32b0;
case 0x4f32b2:c.instructions+=8;goto B4f32b2;
case 0x4f32b7:c.instructions+=7;goto B4f32b7;
case 0x4f32bd:c.instructions+=6;goto B4f32bd;
case 0x4f32be:c.instructions+=5;goto B4f32be;
case 0x4f32c5:c.instructions+=4;goto B4f32c5;
case 0x4f32c6:c.instructions+=3;goto B4f32c6;
case 0x4f32c7:c.instructions+=2;goto B4f32c7;
case 0x4f32cc:c.instructions+=1;goto B4f32cc;
case 0x4f32d1:goto L4f32d1;
case 0x4f32d3:c.instructions+=5;goto B4f32d3;
case 0x4f32d6:c.instructions+=4;goto B4f32d6;
case 0x4f32da:c.instructions+=3;goto B4f32da;
case 0x4f32dc:c.instructions+=2;goto B4f32dc;
case 0x4f32e4:c.instructions+=1;goto B4f32e4;
case 0x4f32e6:goto L4f32e6;
case 0x4f32ea:c.instructions+=3;goto B4f32ea;
case 0x4f32eb:c.instructions+=2;goto B4f32eb;
case 0x4f32ed:c.instructions+=1;goto B4f32ed;
case 0x4f32f2:goto L4f32f2;
case 0x4f32f8:c.instructions+=1;goto B4f32f8;
case 0x4f32fa:goto L4f32fa;
case 0x4f32fc:goto L4f32fc;
case 0x4f32fe:c.instructions+=3;goto B4f32fe;
case 0x4f3300:c.instructions+=2;goto B4f3300;
case 0x4f3308:c.instructions+=1;goto B4f3308;
case 0x4f330b:goto L4f330b;
case 0x4f330f:c.instructions+=5;goto B4f330f;
case 0x4f3311:c.instructions+=4;goto B4f3311;
case 0x4f3312:c.instructions+=3;goto B4f3312;
case 0x4f3319:c.instructions+=2;goto B4f3319;
case 0x4f331c:c.instructions+=1;goto B4f331c;
case 0x4f3320:goto L4f3320;
case 0x4f3322:c.instructions+=8;goto B4f3322;
case 0x4f3327:c.instructions+=7;goto B4f3327;
case 0x4f332d:c.instructions+=6;goto B4f332d;
case 0x4f332e:c.instructions+=5;goto B4f332e;
case 0x4f3335:c.instructions+=4;goto B4f3335;
case 0x4f3336:c.instructions+=3;goto B4f3336;
case 0x4f3337:c.instructions+=2;goto B4f3337;
case 0x4f333c:c.instructions+=1;goto B4f333c;
case 0x4f3341:goto L4f3341;
case 0x4f3343:c.instructions+=5;goto B4f3343;
case 0x4f3346:c.instructions+=4;goto B4f3346;
case 0x4f334a:c.instructions+=3;goto B4f334a;
case 0x4f334c:c.instructions+=2;goto B4f334c;
case 0x4f3354:c.instructions+=1;goto B4f3354;
case 0x4f3356:goto L4f3356;
case 0x4f335a:c.instructions+=3;goto B4f335a;
case 0x4f335b:c.instructions+=2;goto B4f335b;
case 0x4f335d:c.instructions+=1;goto B4f335d;
case 0x4f3362:goto L4f3362;
case 0x4f3368:c.instructions+=2;goto B4f3368;
case 0x4f3372:c.instructions+=1;goto B4f3372;
case 0x4f3374:goto L4f3374;
case 0x4f3376:goto L4f3376;
case 0x4f3378:c.instructions+=3;goto B4f3378;
case 0x4f337a:c.instructions+=2;goto B4f337a;
case 0x4f3382:c.instructions+=1;goto B4f3382;
case 0x4f3385:goto L4f3385;
case 0x4f3389:c.instructions+=5;goto B4f3389;
case 0x4f338b:c.instructions+=4;goto B4f338b;
case 0x4f338c:c.instructions+=3;goto B4f338c;
case 0x4f3393:c.instructions+=2;goto B4f3393;
case 0x4f3396:c.instructions+=1;goto B4f3396;
case 0x4f33a0:goto L4f33a0;
case 0x4f33a1:c.instructions+=6;goto B4f33a1;
case 0x4f33a3:c.instructions+=5;goto B4f33a3;
case 0x4f33a4:c.instructions+=4;goto B4f33a4;
case 0x4f33aa:c.instructions+=3;goto B4f33aa;
case 0x4f33ac:c.instructions+=2;goto B4f33ac;
case 0x4f33ae:c.instructions+=1;goto B4f33ae;
case 0x4f33b3:goto L4f33b3;
case 0x4f33b9:c.instructions+=4;goto B4f33b9;
case 0x4f33bf:c.instructions+=3;goto B4f33bf;
case 0x4f33c2:c.instructions+=2;goto B4f33c2;
case 0x4f33c5:c.instructions+=1;goto B4f33c5;
case 0x4f33cb:goto L4f33cb;
case 0x4f33d2:c.instructions+=1;goto B4f33d2;
case 0x4f33d9:goto L4f33d9;
case 0x4f33db:c.instructions+=1;goto B4f33db;
case 0x4f33e1:goto L4f33e1;
case 0x4f33e2:c.instructions+=3;goto B4f33e2;
case 0x4f33e4:c.instructions+=2;goto B4f33e4;
case 0x4f33e5:c.instructions+=1;goto B4f33e5;
case 0x4f33ea:goto L4f33ea;
case 0x4f33ec:c.instructions+=1;goto B4f33ec;
case 0x4f33f2:goto L4f33f2;
case 0x4f33f7:c.instructions+=4;goto B4f33f7;
case 0x4f33fc:c.instructions+=3;goto B4f33fc;
case 0x4f3401:c.instructions+=2;goto B4f3401;
case 0x4f3403:c.instructions+=1;goto B4f3403;
case 0x4f3408:goto L4f3408;
case 0x4f3409:c.instructions+=2;goto B4f3409;
case 0x4f340a:c.instructions+=1;goto B4f340a;
case 0x4f340b:goto L4f340b;
case 0x4f340e:c.instructions+=1;goto B4f340e;
case 0x4f3414:goto L4f3414;
case 0x4f3416:goto L4f3416;
case 0x4f3418:c.instructions+=3;goto B4f3418;
case 0x4f341d:c.instructions+=2;goto B4f341d;
case 0x4f3420:c.instructions+=1;goto B4f3420;
case 0x4f3425:goto L4f3425;
case 0x4f3429:c.instructions+=3;goto B4f3429;
case 0x4f342a:c.instructions+=2;goto B4f342a;
case 0x4f342b:c.instructions+=1;goto B4f342b;
case 0x4f3430:goto L4f3430;
case 0x4f3436:c.instructions+=3;goto B4f3436;
case 0x4f3439:c.instructions+=2;goto B4f3439;
case 0x4f343a:c.instructions+=1;goto B4f343a;
case 0x4f343f:goto L4f343f;
case 0x4f3440:c.instructions+=2;goto B4f3440;
case 0x4f3441:c.instructions+=1;goto B4f3441;
case 0x4f3442:goto L4f3442;
case 0x4f3447:c.instructions+=2;goto B4f3447;
case 0x4f344c:c.instructions+=1;goto B4f344c;
case 0x4f344e:goto L4f344e;
case 0x4f3451:c.instructions+=3;goto B4f3451;
case 0x4f3452:c.instructions+=2;goto B4f3452;
case 0x4f3457:c.instructions+=1;goto B4f3457;
case 0x4f345c:goto L4f345c;
case 0x4f345f:c.instructions+=3;goto B4f345f;
case 0x4f3460:c.instructions+=2;goto B4f3460;
case 0x4f3461:c.instructions+=1;goto B4f3461;
case 0x4f3462:goto L4f3462;
case 0x4f3467:c.instructions+=1;goto B4f3467;
case 0x4f346c:goto L4f346c;
case 0x4f346e:c.instructions+=1;goto B4f346e;
case 0x4f3470:goto L4f3470;
case 0x4f3475:c.instructions+=1;goto B4f3475;
case 0x4f347a:goto L4f347a;
case 0x4f347b:c.instructions+=3;goto B4f347b;
case 0x4f347e:c.instructions+=2;goto B4f347e;
case 0x4f347f:c.instructions+=1;goto B4f347f;
case 0x4f3484:goto L4f3484;
case 0x4f3487:c.instructions+=3;goto B4f3487;
case 0x4f3489:c.instructions+=2;goto B4f3489;
case 0x4f348b:c.instructions+=1;goto B4f348b;
case 0x4f3490:goto L4f3490;
case 0x4f3491:c.instructions+=2;goto B4f3491;
case 0x4f3492:c.instructions+=1;goto B4f3492;
case 0x4f3493:goto L4f3493;
case 0x4f3495:c.instructions+=2;goto B4f3495;
case 0x4f3497:c.instructions+=1;goto B4f3497;
case 0x4f349c:goto L4f349c;
case 0x4f349d:c.instructions+=2;goto B4f349d;
case 0x4f349e:c.instructions+=1;goto B4f349e;
case 0x4f349f:goto L4f349f;
case 0x4f34a4:c.instructions+=1;goto B4f34a4;
case 0x4f34a9:goto L4f34a9;
case 0x4f34ab:c.instructions+=2;goto B4f34ab;
case 0x4f34ad:c.instructions+=1;goto B4f34ad;
case 0x4f34af:goto L4f34af;
case 0x4f34b1:c.instructions+=1;goto B4f34b1;
case 0x4f34b6:goto L4f34b6;
case 0x4f34b7:c.instructions+=2;goto B4f34b7;
case 0x4f34b8:c.instructions+=1;goto B4f34b8;
case 0x4f34b9:goto L4f34b9;
case 0x4f34bb:c.instructions+=1;goto B4f34bb;
case 0x4f34c0:goto L4f34c0;
case 0x4f34c1:c.instructions+=2;goto B4f34c1;
case 0x4f34c2:c.instructions+=1;goto B4f34c2;
case 0x4f34c3:goto L4f34c3;
case 0x4f34c4:c.instructions+=3;goto B4f34c4;
case 0x4f34c6:c.instructions+=2;goto B4f34c6;
case 0x4f34c7:c.instructions+=1;goto B4f34c7;
case 0x4f3550:goto L4f3550;
case 0x4f3551:c.instructions+=2;goto B4f3551;
case 0x4f3553:c.instructions+=1;goto B4f3553;
case 0x4f3558:goto L4f3558;
case 0x4f355d:c.instructions+=1;goto B4f355d;
case 0x4f355f:goto L4f355f;
case 0x4f3560:c.instructions+=1;goto B4f3560;
case 0x4f3565:goto L4f3565;
case 0x4f3568:goto L4f3568;
case 0x4f356a:c.instructions+=2;goto B4f356a;
case 0x4f356b:c.instructions+=1;goto B4f356b;
case 0x4f3570:goto L4f3570;
case 0x4f3571:c.instructions+=6;goto B4f3571;
case 0x4f3573:c.instructions+=5;goto B4f3573;
case 0x4f3576:c.instructions+=4;goto B4f3576;
case 0x4f357d:c.instructions+=3;goto B4f357d;
case 0x4f3582:c.instructions+=2;goto B4f3582;
case 0x4f3584:c.instructions+=1;goto B4f3584;
case 0x4f3586:goto L4f3586;
case 0x4f358b:c.instructions+=3;goto B4f358b;
case 0x4f358c:c.instructions+=2;goto B4f358c;
case 0x4f3591:c.instructions+=1;goto B4f3591;
case 0x4f3596:goto L4f3596;
case 0x4f359b:c.instructions+=1;goto B4f359b;
case 0x4f359e:goto L4f359e;
case 0x4f35a3:c.instructions+=3;goto B4f35a3;
case 0x4f35a6:c.instructions+=2;goto B4f35a6;
case 0x4f35ab:c.instructions+=1;goto B4f35ab;
case 0x4f35b1:goto L4f35b1;
case 0x4f35b8:c.instructions+=1;goto B4f35b8;
case 0x4f35bf:goto L4f35bf;
case 0x4f35c4:c.instructions+=2;goto B4f35c4;
case 0x4f35c6:c.instructions+=1;goto B4f35c6;
case 0x4f35cb:goto L4f35cb;
case 0x4f35d0:goto L4f35d0;
case 0x4f35d5:goto L4f35d5;
case 0x4f35d7:c.instructions+=1;goto B4f35d7;
case 0x4f35dd:goto L4f35dd;
case 0x4f35df:c.instructions+=1;goto B4f35df;
case 0x4f35e4:goto L4f35e4;
case 0x4f35e9:goto L4f35e9;
case 0x4f35ec:c.instructions+=3;goto B4f35ec;
case 0x4f35ed:c.instructions+=2;goto B4f35ed;
case 0x4f35f2:c.instructions+=1;goto B4f35f2;
case 0x4f35f7:goto L4f35f7;
case 0x4f35fa:c.instructions+=1;goto B4f35fa;
case 0x4f35fc:goto L4f35fc;
case 0x4f3601:c.instructions+=1;goto B4f3601;
case 0x4f3606:goto L4f3606;
case 0x4f3608:c.instructions+=1;goto B4f3608;
case 0x4f360a:goto L4f360a;
case 0x4f360f:c.instructions+=1;goto B4f360f;
case 0x4f3614:goto L4f3614;
case 0x4f3615:c.instructions+=3;goto B4f3615;
case 0x4f3618:c.instructions+=2;goto B4f3618;
case 0x4f3619:c.instructions+=1;goto B4f3619;
case 0x4f361e:goto L4f361e;
case 0x4f3621:c.instructions+=3;goto B4f3621;
case 0x4f3623:c.instructions+=2;goto B4f3623;
case 0x4f3625:c.instructions+=1;goto B4f3625;
case 0x4f362a:goto L4f362a;
case 0x4f362c:goto L4f362c;
case 0x4f362f:c.instructions+=3;goto B4f362f;
case 0x4f3630:c.instructions+=2;goto B4f3630;
case 0x4f3635:c.instructions+=1;goto B4f3635;
case 0x4f363a:goto L4f363a;
case 0x4f363d:c.instructions+=1;goto B4f363d;
case 0x4f363f:goto L4f363f;
case 0x4f3645:c.instructions+=1;goto B4f3645;
case 0x4f364a:goto L4f364a;
case 0x4f364c:goto L4f364c;
case 0x4f3652:c.instructions+=1;goto B4f3652;
case 0x4f3657:goto L4f3657;
case 0x4f3659:goto L4f3659;
case 0x4f365f:c.instructions+=1;goto B4f365f;
case 0x4f3664:goto L4f3664;
case 0x4f3666:goto L4f3666;
case 0x4f366c:c.instructions+=2;goto B4f366c;
case 0x4f366e:c.instructions+=1;goto B4f366e;
case 0x4f3673:goto L4f3673;
case 0x4f3676:c.instructions+=3;goto B4f3676;
case 0x4f367b:c.instructions+=2;goto B4f367b;
case 0x4f367c:c.instructions+=1;goto B4f367c;
case 0x4f3681:goto L4f3681;
case 0x4f3684:c.instructions+=2;goto B4f3684;
case 0x4f3686:c.instructions+=1;goto B4f3686;
case 0x4f368b:goto L4f368b;
case 0x4f368c:c.instructions+=1;goto B4f368c;
case 0x4f3780:goto L4f3780;
case 0x4f3781:c.instructions+=10;goto B4f3781;
case 0x4f3783:c.instructions+=9;goto B4f3783;
case 0x4f3786:c.instructions+=8;goto B4f3786;
case 0x4f3789:c.instructions+=7;goto B4f3789;
case 0x4f378a:c.instructions+=6;goto B4f378a;
case 0x4f378b:c.instructions+=5;goto B4f378b;
case 0x4f3791:c.instructions+=4;goto B4f3791;
case 0x4f3792:c.instructions+=3;goto B4f3792;
case 0x4f3794:c.instructions+=2;goto B4f3794;
case 0x4f3797:c.instructions+=1;goto B4f3797;
case 0x4f379c:goto L4f379c;
case 0x4f37a2:c.instructions+=6;goto B4f37a2;
case 0x4f37a4:c.instructions+=5;goto B4f37a4;
case 0x4f37a9:c.instructions+=4;goto B4f37a9;
case 0x4f37af:c.instructions+=3;goto B4f37af;
case 0x4f37b4:c.instructions+=2;goto B4f37b4;
case 0x4f37ba:c.instructions+=1;goto B4f37ba;
case 0x4f37c0:goto L4f37c0;
case 0x4f37c6:goto L4f37c6;
case 0x4f37cb:c.instructions+=1;goto B4f37cb;
case 0x4f37cd:goto L4f37cd;
case 0x4f37d2:c.instructions+=1;goto B4f37d2;
case 0x4f37d4:goto L4f37d4;
case 0x4f37d9:c.instructions+=1;goto B4f37d9;
case 0x4f37df:goto L4f37df;
case 0x4f37e2:c.instructions+=3;goto B4f37e2;
case 0x4f37e3:c.instructions+=2;goto B4f37e3;
case 0x4f37e8:c.instructions+=1;goto B4f37e8;
case 0x4f37ed:goto L4f37ed;
case 0x4f37f0:c.instructions+=4;goto B4f37f0;
case 0x4f37f1:c.instructions+=3;goto B4f37f1;
case 0x4f37f2:c.instructions+=2;goto B4f37f2;
case 0x4f37f3:c.instructions+=1;goto B4f37f3;
case 0x4f37f6:goto L4f37f6;
case 0x4f37f8:c.instructions+=1;goto B4f37f8;
case 0x4f37fa:goto L4f37fa;
case 0x4f37fc:c.instructions+=3;goto B4f37fc;
case 0x4f37fe:c.instructions+=2;goto B4f37fe;
case 0x4f3805:c.instructions+=1;goto B4f3805;
case 0x4f380a:goto L4f380a;
case 0x4f380b:c.instructions+=3;goto B4f380b;
case 0x4f380c:c.instructions+=2;goto B4f380c;
case 0x4f380d:c.instructions+=1;goto B4f380d;
case 0x4f3810:goto L4f3810;
case 0x4f3816:c.instructions+=5;goto B4f3816;
case 0x4f381d:c.instructions+=4;goto B4f381d;
case 0x4f3821:c.instructions+=3;goto B4f3821;
case 0x4f3823:c.instructions+=2;goto B4f3823;
case 0x4f3825:c.instructions+=1;goto B4f3825;
case 0x4f382a:goto L4f382a;
case 0x4f382b:c.instructions+=3;goto B4f382b;
case 0x4f382c:c.instructions+=2;goto B4f382c;
case 0x4f382d:c.instructions+=1;goto B4f382d;
case 0x4f3830:goto L4f3830;
case 0x4f3832:c.instructions+=1;goto B4f3832;
case 0x4f3834:goto L4f3834;
case 0x4f3836:c.instructions+=1;goto B4f3836;
case 0x4f383b:goto L4f383b;
case 0x4f383d:c.instructions+=4;goto B4f383d;
case 0x4f383f:c.instructions+=3;goto B4f383f;
case 0x4f3841:c.instructions+=2;goto B4f3841;
case 0x4f3843:c.instructions+=1;goto B4f3843;
case 0x4f3848:goto L4f3848;
case 0x4f384a:c.instructions+=4;goto B4f384a;
case 0x4f384c:c.instructions+=3;goto B4f384c;
case 0x4f384e:c.instructions+=2;goto B4f384e;
case 0x4f3850:c.instructions+=1;goto B4f3850;
case 0x4f3855:goto L4f3855;
case 0x4f3856:c.instructions+=3;goto B4f3856;
case 0x4f3857:c.instructions+=2;goto B4f3857;
case 0x4f3858:c.instructions+=1;goto B4f3858;
case 0x4f385b:goto L4f385b;
case 0x4f385e:c.instructions+=3;goto B4f385e;
case 0x4f385f:c.instructions+=2;goto B4f385f;
case 0x4f3864:c.instructions+=1;goto B4f3864;
case 0x4f3869:goto L4f3869;
case 0x4f386c:c.instructions+=4;goto B4f386c;
case 0x4f386d:c.instructions+=3;goto B4f386d;
case 0x4f386e:c.instructions+=2;goto B4f386e;
case 0x4f386f:c.instructions+=1;goto B4f386f;
case 0x4f3872:goto L4f3872;
case 0x4f3874:c.instructions+=1;goto B4f3874;
case 0x4f387a:goto L4f387a;
case 0x4f387c:c.instructions+=2;goto B4f387c;
case 0x4f387e:c.instructions+=1;goto B4f387e;
case 0x4f3883:goto L4f3883;
case 0x4f3884:c.instructions+=3;goto B4f3884;
case 0x4f3885:c.instructions+=2;goto B4f3885;
case 0x4f3886:c.instructions+=1;goto B4f3886;
case 0x4f3889:goto L4f3889;
case 0x4f388e:c.instructions+=1;goto B4f388e;
case 0x4f3890:goto L4f3890;
case 0x4f3895:c.instructions+=1;goto B4f3895;
case 0x4f389b:goto L4f389b;
case 0x4f389d:c.instructions+=1;goto B4f389d;
case 0x4f389f:goto L4f389f;
case 0x4f38a4:c.instructions+=7;goto B4f38a4;
case 0x4f38a7:c.instructions+=6;goto B4f38a7;
case 0x4f38aa:c.instructions+=5;goto B4f38aa;
case 0x4f38ab:c.instructions+=4;goto B4f38ab;
case 0x4f38b2:c.instructions+=3;goto B4f38b2;
case 0x4f38b3:c.instructions+=2;goto B4f38b3;
case 0x4f38b4:c.instructions+=1;goto B4f38b4;
case 0x4f38b7:goto L4f38b7;
case 0x4f38ba:c.instructions+=3;goto B4f38ba;
case 0x4f38bb:c.instructions+=2;goto B4f38bb;
case 0x4f38c0:c.instructions+=1;goto B4f38c0;
case 0x4f38c5:goto L4f38c5;
case 0x4f38c8:c.instructions+=4;goto B4f38c8;
case 0x4f38c9:c.instructions+=3;goto B4f38c9;
case 0x4f38ca:c.instructions+=2;goto B4f38ca;
case 0x4f38cb:c.instructions+=1;goto B4f38cb;
case 0x4f38ce:goto L4f38ce;
case 0x4f38d0:c.instructions+=1;goto B4f38d0;
case 0x4f38d2:goto L4f38d2;
case 0x4f38d4:c.instructions+=2;goto B4f38d4;
case 0x4f38d9:c.instructions+=1;goto B4f38d9;
case 0x4f38de:goto L4f38de;
case 0x4f38e8:c.instructions+=1;goto B4f38e8;
case 0x4f38ea:goto L4f38ea;
case 0x4f38ec:c.instructions+=2;goto B4f38ec;
case 0x4f38f1:c.instructions+=1;goto B4f38f1;
case 0x4f38f6:goto L4f38f6;
case 0x4f38f8:c.instructions+=2;goto B4f38f8;
case 0x4f38fa:c.instructions+=1;goto B4f38fa;
case 0x4f38ff:goto L4f38ff;
case 0x4f3900:c.instructions+=3;goto B4f3900;
case 0x4f3901:c.instructions+=2;goto B4f3901;
case 0x4f3902:c.instructions+=1;goto B4f3902;
case 0x4f3905:goto L4f3905;
case 0x4f390a:c.instructions+=1;goto B4f390a;
case 0x4f390f:goto L4f390f;
case 0x4f3911:c.instructions+=2;goto B4f3911;
case 0x4f3913:c.instructions+=1;goto B4f3913;
case 0x4f3918:goto L4f3918;
case 0x4f3919:c.instructions+=3;goto B4f3919;
case 0x4f391a:c.instructions+=2;goto B4f391a;
case 0x4f391b:c.instructions+=1;goto B4f391b;
case 0x4f391e:goto L4f391e;
case 0x4f3923:c.instructions+=2;goto B4f3923;
case 0x4f3924:c.instructions+=1;goto B4f3924;
case 0x4f3929:goto L4f3929;
case 0x4f392c:goto L4f392c;
case 0x4f392d:c.instructions+=3;goto B4f392d;
case 0x4f392e:c.instructions+=2;goto B4f392e;
case 0x4f392f:c.instructions+=1;goto B4f392f;
case 0x4f3940:goto L4f3940;
case 0x4f3942:c.instructions+=7;goto B4f3942;
case 0x4f3947:c.instructions+=6;goto B4f3947;
case 0x4f394d:c.instructions+=5;goto B4f394d;
case 0x4f394e:c.instructions+=4;goto B4f394e;
case 0x4f3955:c.instructions+=3;goto B4f3955;
case 0x4f3956:c.instructions+=2;goto B4f3956;
case 0x4f395b:c.instructions+=1;goto B4f395b;
case 0x4f3960:goto L4f3960;
case 0x4f3963:c.instructions+=4;goto B4f3963;
case 0x4f3967:c.instructions+=3;goto B4f3967;
case 0x4f3969:c.instructions+=2;goto B4f3969;
case 0x4f3971:c.instructions+=1;goto B4f3971;
case 0x4f3973:goto L4f3973;
case 0x4f3977:c.instructions+=3;goto B4f3977;
case 0x4f3978:c.instructions+=2;goto B4f3978;
case 0x4f397a:c.instructions+=1;goto B4f397a;
case 0x4f397f:goto L4f397f;
case 0x4f3983:c.instructions+=3;goto B4f3983;
case 0x4f398a:c.instructions+=2;goto B4f398a;
case 0x4f398d:c.instructions+=1;goto B4f398d;
case 0x4f398e:goto L4f398e;
case 0x4f3992:c.instructions+=4;goto B4f3992;
case 0x4f3994:c.instructions+=3;goto B4f3994;
case 0x4f399b:c.instructions+=2;goto B4f399b;
case 0x4f399e:c.instructions+=1;goto B4f399e;
case 0x4f39a0:goto L4f39a0;
case 0x4f39a1:c.instructions+=14;goto B4f39a1;
case 0x4f39a3:c.instructions+=13;goto B4f39a3;
case 0x4f39a6:c.instructions+=12;goto B4f39a6;
case 0x4f39a9:c.instructions+=11;goto B4f39a9;
case 0x4f39aa:c.instructions+=10;goto B4f39aa;
case 0x4f39ad:c.instructions+=9;goto B4f39ad;
case 0x4f39ae:c.instructions+=8;goto B4f39ae;
case 0x4f39b0:c.instructions+=7;goto B4f39b0;
case 0x4f39b3:c.instructions+=6;goto B4f39b3;
case 0x4f39b4:c.instructions+=5;goto B4f39b4;
case 0x4f39b5:c.instructions+=4;goto B4f39b5;
case 0x4f39b6:c.instructions+=3;goto B4f39b6;
case 0x4f39b7:c.instructions+=2;goto B4f39b7;
case 0x4f39b9:c.instructions+=1;goto B4f39b9;
case 0x4f39be:goto L4f39be;
case 0x4f39c4:c.instructions+=1;goto B4f39c4;
case 0x4f39ca:goto L4f39ca;
case 0x4f39d0:goto L4f39d0;
case 0x4f39d6:c.instructions+=1;goto B4f39d6;
case 0x4f39dc:goto L4f39dc;
case 0x4f39de:goto L4f39de;
case 0x4f39e4:c.instructions+=1;goto B4f39e4;
case 0x4f39e6:goto L4f39e6;
case 0x4f39ec:c.instructions+=1;goto B4f39ec;
case 0x4f39f2:goto L4f39f2;
case 0x4f39f5:c.instructions+=3;goto B4f39f5;
case 0x4f39f6:c.instructions+=2;goto B4f39f6;
case 0x4f39fb:c.instructions+=1;goto B4f39fb;
case 0x4f3a00:goto L4f3a00;
case 0x4f3a03:c.instructions+=4;goto B4f3a03;
case 0x4f3a04:c.instructions+=3;goto B4f3a04;
case 0x4f3a05:c.instructions+=2;goto B4f3a05;
case 0x4f3a06:c.instructions+=1;goto B4f3a06;
case 0x4f3a09:goto L4f3a09;
case 0x4f3a10:c.instructions+=1;goto B4f3a10;
case 0x4f3a12:goto L4f3a12;
case 0x4f3a17:c.instructions+=2;goto B4f3a17;
case 0x4f3a19:c.instructions+=1;goto B4f3a19;
case 0x4f3a1b:goto L4f3a1b;
case 0x4f3a1d:c.instructions+=2;goto B4f3a1d;
case 0x4f3a22:c.instructions+=1;goto B4f3a22;
case 0x4f3a27:goto L4f3a27;
case 0x4f3a29:c.instructions+=1;goto B4f3a29;
case 0x4f3a2b:goto L4f3a2b;
case 0x4f3a30:c.instructions+=1;goto B4f3a30;
case 0x4f3a35:goto L4f3a35;
case 0x4f3a3a:c.instructions+=2;goto B4f3a3a;
case 0x4f3a3f:c.instructions+=1;goto B4f3a3f;
case 0x4f3a44:goto L4f3a44;
case 0x4f3a47:c.instructions+=3;goto B4f3a47;
case 0x4f3a48:c.instructions+=2;goto B4f3a48;
case 0x4f3a4d:c.instructions+=1;goto B4f3a4d;
case 0x4f3a52:goto L4f3a52;
case 0x4f3a55:c.instructions+=4;goto B4f3a55;
case 0x4f3a56:c.instructions+=3;goto B4f3a56;
case 0x4f3a57:c.instructions+=2;goto B4f3a57;
case 0x4f3a58:c.instructions+=1;goto B4f3a58;
case 0x4f3a5b:goto L4f3a5b;
case 0x4f3a5d:c.instructions+=1;goto B4f3a5d;
case 0x4f3a62:goto L4f3a62;
case 0x4f3a63:c.instructions+=3;goto B4f3a63;
case 0x4f3a64:c.instructions+=2;goto B4f3a64;
case 0x4f3a65:c.instructions+=1;goto B4f3a65;
case 0x4f3a68:goto L4f3a68;
case 0x4f3a6e:c.instructions+=1;goto B4f3a6e;
case 0x4f3a70:goto L4f3a70;
case 0x4f3a76:c.instructions+=1;goto B4f3a76;
case 0x4f3a7c:goto L4f3a7c;
case 0x4f3a7e:c.instructions+=1;goto B4f3a7e;
case 0x4f3a83:goto L4f3a83;
case 0x4f3a84:c.instructions+=3;goto B4f3a84;
case 0x4f3a85:c.instructions+=2;goto B4f3a85;
case 0x4f3a86:c.instructions+=1;goto B4f3a86;
case 0x4f3a89:goto L4f3a89;
case 0x4f3a90:c.instructions+=1;goto B4f3a90;
case 0x4f3a92:goto L4f3a92;
case 0x4f3a97:c.instructions+=2;goto B4f3a97;
case 0x4f3a99:c.instructions+=1;goto B4f3a99;
case 0x4f3a9b:goto L4f3a9b;
case 0x4f3a9d:c.instructions+=2;goto B4f3a9d;
case 0x4f3aa2:c.instructions+=1;goto B4f3aa2;
case 0x4f3aa7:goto L4f3aa7;
case 0x4f3aa9:c.instructions+=1;goto B4f3aa9;
case 0x4f3aab:goto L4f3aab;
case 0x4f3ab0:c.instructions+=2;goto B4f3ab0;
case 0x4f3ab7:c.instructions+=1;goto B4f3ab7;
case 0x4f3abc:goto L4f3abc;
case 0x4f3ac1:c.instructions+=1;goto B4f3ac1;
case 0x4f3ac6:goto L4f3ac6;
case 0x4f3ac9:c.instructions+=6;goto B4f3ac9;
case 0x4f3acb:c.instructions+=5;goto B4f3acb;
case 0x4f3acd:c.instructions+=4;goto B4f3acd;
case 0x4f3ad2:c.instructions+=3;goto B4f3ad2;
case 0x4f3ad3:c.instructions+=2;goto B4f3ad3;
case 0x4f3ad4:c.instructions+=1;goto B4f3ad4;
case 0x4f3ad9:goto L4f3ad9;
case 0x4f3adc:c.instructions+=4;goto B4f3adc;
case 0x4f3add:c.instructions+=3;goto B4f3add;
case 0x4f3ade:c.instructions+=2;goto B4f3ade;
case 0x4f3adf:c.instructions+=1;goto B4f3adf;
case 0x4f3ae2:goto L4f3ae2;
case 0x4f3ae5:c.instructions+=3;goto B4f3ae5;
case 0x4f3ae6:c.instructions+=2;goto B4f3ae6;
case 0x4f3aeb:c.instructions+=1;goto B4f3aeb;
case 0x4f3af0:goto L4f3af0;
case 0x4f3af3:c.instructions+=4;goto B4f3af3;
case 0x4f3af4:c.instructions+=3;goto B4f3af4;
case 0x4f3af5:c.instructions+=2;goto B4f3af5;
case 0x4f3af6:c.instructions+=1;goto B4f3af6;
case 0x4f3af9:goto L4f3af9;
case 0x4f3afb:c.instructions+=1;goto B4f3afb;
case 0x4f3b00:goto L4f3b00;
case 0x4f3b01:c.instructions+=3;goto B4f3b01;
case 0x4f3b02:c.instructions+=2;goto B4f3b02;
case 0x4f3b03:c.instructions+=1;goto B4f3b03;
case 0x4f3b06:goto L4f3b06;
case 0x4f3b0c:c.instructions+=1;goto B4f3b0c;
case 0x4f3b0e:goto L4f3b0e;
case 0x4f3b10:goto L4f3b10;
case 0x4f3b16:c.instructions+=1;goto B4f3b16;
case 0x4f3b18:goto L4f3b18;
case 0x4f3b1e:c.instructions+=1;goto B4f3b1e;
case 0x4f3b24:goto L4f3b24;
case 0x4f3b27:c.instructions+=3;goto B4f3b27;
case 0x4f3b28:c.instructions+=2;goto B4f3b28;
case 0x4f3b2d:c.instructions+=1;goto B4f3b2d;
case 0x4f3b32:goto L4f3b32;
case 0x4f3b35:c.instructions+=4;goto B4f3b35;
case 0x4f3b36:c.instructions+=3;goto B4f3b36;
case 0x4f3b37:c.instructions+=2;goto B4f3b37;
case 0x4f3b38:c.instructions+=1;goto B4f3b38;
case 0x4f3b3b:goto L4f3b3b;
case 0x4f3b41:c.instructions+=2;goto B4f3b41;
case 0x4f3b43:c.instructions+=1;goto B4f3b43;
case 0x4f3b48:goto L4f3b48;
case 0x4f3b4a:c.instructions+=1;goto B4f3b4a;
case 0x4f3b4c:goto L4f3b4c;
case 0x4f3b4e:c.instructions+=1;goto B4f3b4e;
case 0x4f3b53:goto L4f3b53;
case 0x4f3b59:goto L4f3b59;
case 0x4f3b5b:c.instructions+=1;goto B4f3b5b;
case 0x4f3b60:goto L4f3b60;
case 0x4f3b61:c.instructions+=3;goto B4f3b61;
case 0x4f3b62:c.instructions+=2;goto B4f3b62;
case 0x4f3b63:c.instructions+=1;goto B4f3b63;
case 0x4f3b66:goto L4f3b66;
case 0x4f3b68:c.instructions+=1;goto B4f3b68;
case 0x4f3b6d:goto L4f3b6d;
case 0x4f3b6e:c.instructions+=3;goto B4f3b6e;
case 0x4f3b6f:c.instructions+=2;goto B4f3b6f;
case 0x4f3b70:c.instructions+=1;goto B4f3b70;
case 0x4f3b73:goto L4f3b73;
case 0x4f3b79:c.instructions+=1;goto B4f3b79;
case 0x4f3b7b:goto L4f3b7b;
case 0x4f3b81:c.instructions+=1;goto B4f3b81;
case 0x4f3b83:goto L4f3b83;
case 0x4f3b89:c.instructions+=2;goto B4f3b89;
case 0x4f3b8e:c.instructions+=1;goto B4f3b8e;
case 0x4f3b90:goto L4f3b90;
case 0x4f3b95:c.instructions+=1;goto B4f3b95;
case 0x4f3b97:goto L4f3b97;
case 0x4f3b9c:c.instructions+=1;goto B4f3b9c;
case 0x4f3b9e:goto L4f3b9e;
case 0x4f3ba4:c.instructions+=3;goto B4f3ba4;
case 0x4f3ba6:c.instructions+=2;goto B4f3ba6;
case 0x4f3ba8:c.instructions+=1;goto B4f3ba8;
case 0x4f3bad:goto L4f3bad;
case 0x4f3bae:c.instructions+=3;goto B4f3bae;
case 0x4f3baf:c.instructions+=2;goto B4f3baf;
case 0x4f3bb0:c.instructions+=1;goto B4f3bb0;
case 0x4f3bb3:goto L4f3bb3;
case 0x4f3bb9:c.instructions+=2;goto B4f3bb9;
case 0x4f3bbb:c.instructions+=1;goto B4f3bbb;
case 0x4f3bc0:goto L4f3bc0;
case 0x4f3bc1:c.instructions+=3;goto B4f3bc1;
case 0x4f3bc2:c.instructions+=2;goto B4f3bc2;
case 0x4f3bc3:c.instructions+=1;goto B4f3bc3;
case 0x4f3bc6:goto L4f3bc6;
case 0x4f3bc9:c.instructions+=3;goto B4f3bc9;
case 0x4f3bca:c.instructions+=2;goto B4f3bca;
case 0x4f3bcf:c.instructions+=1;goto B4f3bcf;
case 0x4f3bd4:goto L4f3bd4;
case 0x4f3bd7:c.instructions+=4;goto B4f3bd7;
case 0x4f3bd8:c.instructions+=3;goto B4f3bd8;
case 0x4f3bd9:c.instructions+=2;goto B4f3bd9;
case 0x4f3bda:c.instructions+=1;goto B4f3bda;
case 0x4f3be0:goto L4f3be0;
case 0x4f3be2:c.instructions+=11;goto B4f3be2;
case 0x4f3be7:c.instructions+=10;goto B4f3be7;
case 0x4f3bed:c.instructions+=9;goto B4f3bed;
case 0x4f3bee:c.instructions+=8;goto B4f3bee;
case 0x4f3bf5:c.instructions+=7;goto B4f3bf5;
case 0x4f3bf6:c.instructions+=6;goto B4f3bf6;
case 0x4f3bfa:c.instructions+=5;goto B4f3bfa;
case 0x4f3bfb:c.instructions+=4;goto B4f3bfb;
case 0x4f3bfd:c.instructions+=3;goto B4f3bfd;
case 0x4f3bfe:c.instructions+=2;goto B4f3bfe;
case 0x4f3c02:c.instructions+=1;goto B4f3c02;
case 0x4f3c07:goto L4f3c07;
case 0x4f3c0a:c.instructions+=24;goto B4f3c0a;
case 0x4f3c0c:c.instructions+=23;goto B4f3c0c;
case 0x4f3c12:c.instructions+=22;goto B4f3c12;
case 0x4f3c16:c.instructions+=21;goto B4f3c16;
case 0x4f3c18:c.instructions+=20;goto B4f3c18;
case 0x4f3c1b:c.instructions+=19;goto B4f3c1b;
case 0x4f3c1e:c.instructions+=18;goto B4f3c1e;
case 0x4f3c24:c.instructions+=17;goto B4f3c24;
case 0x4f3c27:c.instructions+=16;goto B4f3c27;
case 0x4f3c2a:c.instructions+=15;goto B4f3c2a;
case 0x4f3c2d:c.instructions+=14;goto B4f3c2d;
case 0x4f3c30:c.instructions+=13;goto B4f3c30;
case 0x4f3c33:c.instructions+=12;goto B4f3c33;
case 0x4f3c36:c.instructions+=11;goto B4f3c36;
case 0x4f3c39:c.instructions+=10;goto B4f3c39;
case 0x4f3c3c:c.instructions+=9;goto B4f3c3c;
case 0x4f3c3f:c.instructions+=8;goto B4f3c3f;
case 0x4f3c42:c.instructions+=7;goto B4f3c42;
case 0x4f3c45:c.instructions+=6;goto B4f3c45;
case 0x4f3c4b:c.instructions+=5;goto B4f3c4b;
case 0x4f3c4e:c.instructions+=4;goto B4f3c4e;
case 0x4f3c50:c.instructions+=3;goto B4f3c50;
case 0x4f3c55:c.instructions+=2;goto B4f3c55;
case 0x4f3c58:c.instructions+=1;goto B4f3c58;
case 0x4f3c5d:goto L4f3c5d;
case 0x4f3c61:c.instructions+=5;goto B4f3c61;
case 0x4f3c63:c.instructions+=4;goto B4f3c63;
case 0x4f3c64:c.instructions+=3;goto B4f3c64;
case 0x4f3c6b:c.instructions+=2;goto B4f3c6b;
case 0x4f3c6e:c.instructions+=1;goto B4f3c6e;
case 0x4f3c80:goto L4f3c80;
case 0x4f3c81:c.instructions+=2;goto B4f3c81;
case 0x4f3c83:c.instructions+=1;goto B4f3c83;
case 0x4f3c88:goto L4f3c88;
case 0x4f3c8d:c.instructions+=1;goto B4f3c8d;
case 0x4f3c8f:goto L4f3c8f;
case 0x4f3c90:c.instructions+=1;goto B4f3c90;
case 0x4f3c95:goto L4f3c95;
case 0x4f3c98:goto L4f3c98;
case 0x4f3c9a:c.instructions+=2;goto B4f3c9a;
case 0x4f3c9b:c.instructions+=1;goto B4f3c9b;
case 0x4f3ca0:goto L4f3ca0;
case 0x4f3ca3:c.instructions+=7;goto B4f3ca3;
case 0x4f3ca4:c.instructions+=6;goto B4f3ca4;
case 0x4f3ca5:c.instructions+=5;goto B4f3ca5;
case 0x4f3ca6:c.instructions+=4;goto B4f3ca6;
case 0x4f3ca8:c.instructions+=3;goto B4f3ca8;
case 0x4f3cab:c.instructions+=2;goto B4f3cab;
case 0x4f3cb0:c.instructions+=1;goto B4f3cb0;
case 0x4f3cb5:goto L4f3cb5;
case 0x4f3cb6:c.instructions+=2;goto B4f3cb6;
case 0x4f3cb7:c.instructions+=1;goto B4f3cb7;
case 0x4f3cbc:goto L4f3cbc;
case 0x4f3cbf:c.instructions+=3;goto B4f3cbf;
case 0x4f3cc4:c.instructions+=2;goto B4f3cc4;
case 0x4f3cc6:c.instructions+=1;goto B4f3cc6;
case 0x4f3ccb:goto L4f3ccb;
case 0x4f3ccc:c.instructions+=2;goto B4f3ccc;
case 0x4f3ccd:c.instructions+=1;goto B4f3ccd;
case 0x4f3cd2:goto L4f3cd2;
case 0x4f3cd4:c.instructions+=6;goto B4f3cd4;
case 0x4f3cd8:c.instructions+=5;goto B4f3cd8;
case 0x4f3cd9:c.instructions+=4;goto B4f3cd9;
case 0x4f3cdd:c.instructions+=3;goto B4f3cdd;
case 0x4f3cde:c.instructions+=2;goto B4f3cde;
case 0x4f3cdf:c.instructions+=1;goto B4f3cdf;
case 0x4f3ce4:goto L4f3ce4;
case 0x4f3ce8:c.instructions+=7;goto B4f3ce8;
case 0x4f3cec:c.instructions+=6;goto B4f3cec;
case 0x4f3ced:c.instructions+=5;goto B4f3ced;
case 0x4f3cf1:c.instructions+=4;goto B4f3cf1;
case 0x4f3cf2:c.instructions+=3;goto B4f3cf2;
case 0x4f3cf3:c.instructions+=2;goto B4f3cf3;
case 0x4f3cf9:c.instructions+=1;goto B4f3cf9;
case 0x4f3cfe:goto L4f3cfe;
case 0x4f3d02:c.instructions+=7;goto B4f3d02;
case 0x4f3d06:c.instructions+=6;goto B4f3d06;
case 0x4f3d07:c.instructions+=5;goto B4f3d07;
case 0x4f3d0b:c.instructions+=4;goto B4f3d0b;
case 0x4f3d0c:c.instructions+=3;goto B4f3d0c;
case 0x4f3d0d:c.instructions+=2;goto B4f3d0d;
case 0x4f3d13:c.instructions+=1;goto B4f3d13;
case 0x4f3d18:goto L4f3d18;
case 0x4f3d1c:c.instructions+=7;goto B4f3d1c;
case 0x4f3d20:c.instructions+=6;goto B4f3d20;
case 0x4f3d21:c.instructions+=5;goto B4f3d21;
case 0x4f3d25:c.instructions+=4;goto B4f3d25;
case 0x4f3d26:c.instructions+=3;goto B4f3d26;
case 0x4f3d27:c.instructions+=2;goto B4f3d27;
case 0x4f3d2d:c.instructions+=1;goto B4f3d2d;
case 0x4f3d32:goto L4f3d32;
case 0x4f3d36:c.instructions+=8;goto B4f3d36;
case 0x4f3d39:c.instructions+=7;goto B4f3d39;
case 0x4f3d3d:c.instructions+=6;goto B4f3d3d;
case 0x4f3d3e:c.instructions+=5;goto B4f3d3e;
case 0x4f3d42:c.instructions+=4;goto B4f3d42;
case 0x4f3d43:c.instructions+=3;goto B4f3d43;
case 0x4f3d44:c.instructions+=2;goto B4f3d44;
case 0x4f3d4a:c.instructions+=1;goto B4f3d4a;
case 0x4f3d4f:goto L4f3d4f;
case 0x4f3d53:c.instructions+=7;goto B4f3d53;
case 0x4f3d57:c.instructions+=6;goto B4f3d57;
case 0x4f3d58:c.instructions+=5;goto B4f3d58;
case 0x4f3d5c:c.instructions+=4;goto B4f3d5c;
case 0x4f3d5d:c.instructions+=3;goto B4f3d5d;
case 0x4f3d5e:c.instructions+=2;goto B4f3d5e;
case 0x4f3d64:c.instructions+=1;goto B4f3d64;
case 0x4f3d69:goto L4f3d69;
case 0x4f3d6d:c.instructions+=7;goto B4f3d6d;
case 0x4f3d71:c.instructions+=6;goto B4f3d71;
case 0x4f3d72:c.instructions+=5;goto B4f3d72;
case 0x4f3d76:c.instructions+=4;goto B4f3d76;
case 0x4f3d77:c.instructions+=3;goto B4f3d77;
case 0x4f3d78:c.instructions+=2;goto B4f3d78;
case 0x4f3d7e:c.instructions+=1;goto B4f3d7e;
case 0x4f3d83:goto L4f3d83;
case 0x4f3d87:c.instructions+=7;goto B4f3d87;
case 0x4f3d8b:c.instructions+=6;goto B4f3d8b;
case 0x4f3d8c:c.instructions+=5;goto B4f3d8c;
case 0x4f3d90:c.instructions+=4;goto B4f3d90;
case 0x4f3d91:c.instructions+=3;goto B4f3d91;
case 0x4f3d97:c.instructions+=2;goto B4f3d97;
case 0x4f3d98:c.instructions+=1;goto B4f3d98;
case 0x4f3d9d:goto L4f3d9d;
case 0x4f3da1:c.instructions+=10;goto B4f3da1;
case 0x4f3da7:c.instructions+=9;goto B4f3da7;
case 0x4f3dad:c.instructions+=8;goto B4f3dad;
case 0x4f3db3:c.instructions+=7;goto B4f3db3;
case 0x4f3db9:c.instructions+=6;goto B4f3db9;
case 0x4f3dbf:c.instructions+=5;goto B4f3dbf;
case 0x4f3dc5:c.instructions+=4;goto B4f3dc5;
case 0x4f3dc8:c.instructions+=3;goto B4f3dc8;
case 0x4f3dc9:c.instructions+=2;goto B4f3dc9;
case 0x4f3dcb:c.instructions+=1;goto B4f3dcb;
case 0x4f3dd0:goto L4f3dd0;
case 0x4f3dd1:c.instructions+=4;goto B4f3dd1;
case 0x4f3dd2:c.instructions+=3;goto B4f3dd2;
case 0x4f3dd3:c.instructions+=2;goto B4f3dd3;
case 0x4f3dd6:c.instructions+=1;goto B4f3dd6;
case 0x4f3de0:goto L4f3de0;
case 0x4f3de5:c.instructions+=8;goto B4f3de5;
case 0x4f3de8:c.instructions+=7;goto B4f3de8;
case 0x4f3de9:c.instructions+=6;goto B4f3de9;
case 0x4f3ded:c.instructions+=5;goto B4f3ded;
case 0x4f3df3:c.instructions+=4;goto B4f3df3;
case 0x4f3df4:c.instructions+=3;goto B4f3df4;
case 0x4f3df6:c.instructions+=2;goto B4f3df6;
case 0x4f3dfc:c.instructions+=1;goto B4f3dfc;
case 0x4f3dfe:goto L4f3dfe;
case 0x4f3e04:c.instructions+=1;goto B4f3e04;
case 0x4f3e06:goto L4f3e06;
case 0x4f3e09:c.instructions+=4;goto B4f3e09;
case 0x4f3e0a:c.instructions+=3;goto B4f3e0a;
case 0x4f3e0c:c.instructions+=2;goto B4f3e0c;
case 0x4f3e12:c.instructions+=1;goto B4f3e12;
case 0x4f3e14:goto L4f3e14;
case 0x4f3e16:c.instructions+=1;goto B4f3e16;
case 0x4f3e18:goto L4f3e18;
case 0x4f3e1b:c.instructions+=6;goto B4f3e1b;
case 0x4f3e1d:c.instructions+=5;goto B4f3e1d;
case 0x4f3e1f:c.instructions+=4;goto B4f3e1f;
case 0x4f3e22:c.instructions+=3;goto B4f3e22;
case 0x4f3e28:c.instructions+=2;goto B4f3e28;
case 0x4f3e29:c.instructions+=1;goto B4f3e29;
case 0x4f3e2b:goto L4f3e2b;
case 0x4f3e31:goto L4f3e31;
case 0x4f3e37:c.instructions+=1;goto B4f3e37;
case 0x4f3e39:goto L4f3e39;
case 0x4f3e3a:c.instructions+=5;goto B4f3e3a;
case 0x4f3e3d:c.instructions+=4;goto B4f3e3d;
case 0x4f3e3f:c.instructions+=3;goto B4f3e3f;
case 0x4f3e41:c.instructions+=2;goto B4f3e41;
case 0x4f3e42:c.instructions+=1;goto B4f3e42;
case 0x4f3e47:goto L4f3e47;
case 0x4f3e48:c.instructions+=2;goto B4f3e48;
case 0x4f3e49:c.instructions+=1;goto B4f3e49;
case 0x4f3e4e:goto L4f3e4e;
case 0x4f3e53:c.instructions+=6;goto B4f3e53;
case 0x4f3e56:c.instructions+=5;goto B4f3e56;
case 0x4f3e58:c.instructions+=4;goto B4f3e58;
case 0x4f3e5e:c.instructions+=3;goto B4f3e5e;
case 0x4f3e64:c.instructions+=2;goto B4f3e64;
case 0x4f3e6e:c.instructions+=1;goto B4f3e6e;
case 0x4f3e73:goto L4f3e73;
case 0x4f3e75:c.instructions+=1;goto B4f3e75;
case 0x4f3e7a:goto L4f3e7a;
case 0x4f3e7c:c.instructions+=2;goto B4f3e7c;
case 0x4f3e83:c.instructions+=1;goto B4f3e83;
case 0x4f3e88:goto L4f3e88;
case 0x4f3e89:goto L4f3e89;
case 0x4f3e8f:c.instructions+=4;goto B4f3e8f;
case 0x4f3e90:c.instructions+=3;goto B4f3e90;
case 0x4f3e91:c.instructions+=2;goto B4f3e91;
case 0x4f3e93:c.instructions+=1;goto B4f3e93;
case 0x4f3e98:goto L4f3e98;
case 0x4f3e99:c.instructions+=2;goto B4f3e99;
case 0x4f3e9a:c.instructions+=1;goto B4f3e9a;
case 0x4f3ea0:goto L4f3ea0;
case 0x4f3ea2:c.instructions+=34;goto B4f3ea2;
case 0x4f3ea7:c.instructions+=33;goto B4f3ea7;
case 0x4f3ead:c.instructions+=32;goto B4f3ead;
case 0x4f3eae:c.instructions+=31;goto B4f3eae;
case 0x4f3eb5:c.instructions+=30;goto B4f3eb5;
case 0x4f3eb6:c.instructions+=29;goto B4f3eb6;
case 0x4f3eb7:c.instructions+=28;goto B4f3eb7;
case 0x4f3eb8:c.instructions+=27;goto B4f3eb8;
case 0x4f3eb9:c.instructions+=26;goto B4f3eb9;
case 0x4f3ebb:c.instructions+=25;goto B4f3ebb;
case 0x4f3ec1:c.instructions+=24;goto B4f3ec1;
case 0x4f3ec3:c.instructions+=23;goto B4f3ec3;
case 0x4f3ec6:c.instructions+=22;goto B4f3ec6;
case 0x4f3ec9:c.instructions+=21;goto B4f3ec9;
case 0x4f3ecb:c.instructions+=20;goto B4f3ecb;
case 0x4f3ece:c.instructions+=19;goto B4f3ece;
case 0x4f3ed1:c.instructions+=18;goto B4f3ed1;
case 0x4f3ed5:c.instructions+=17;goto B4f3ed5;
case 0x4f3ed8:c.instructions+=16;goto B4f3ed8;
case 0x4f3edb:c.instructions+=15;goto B4f3edb;
case 0x4f3ede:c.instructions+=14;goto B4f3ede;
case 0x4f3ee5:c.instructions+=13;goto B4f3ee5;
case 0x4f3eec:c.instructions+=12;goto B4f3eec;
case 0x4f3ef3:c.instructions+=11;goto B4f3ef3;
case 0x4f3ef6:c.instructions+=10;goto B4f3ef6;
case 0x4f3ef9:c.instructions+=9;goto B4f3ef9;
case 0x4f3efd:c.instructions+=8;goto B4f3efd;
case 0x4f3f00:c.instructions+=7;goto B4f3f00;
case 0x4f3f04:c.instructions+=6;goto B4f3f04;
case 0x4f3f06:c.instructions+=5;goto B4f3f06;
case 0x4f3f09:c.instructions+=4;goto B4f3f09;
case 0x4f3f0e:c.instructions+=3;goto B4f3f0e;
case 0x4f3f11:c.instructions+=2;goto B4f3f11;
case 0x4f3f16:c.instructions+=1;goto B4f3f16;
case 0x4f3f18:goto L4f3f18;
case 0x4f3f1e:c.instructions+=1;goto B4f3f1e;
case 0x4f3f20:goto L4f3f20;
case 0x4f3f27:c.instructions+=1;goto B4f3f27;
case 0x4f3f29:goto L4f3f29;
case 0x4f3f2b:goto L4f3f2b;
case 0x4f3f2e:c.instructions+=1;goto B4f3f2e;
case 0x4f3f30:goto L4f3f30;
case 0x4f3f37:c.instructions+=1;goto B4f3f37;
case 0x4f3f39:goto L4f3f39;
case 0x4f3f3c:c.instructions+=1;goto B4f3f3c;
case 0x4f3f3e:goto L4f3f3e;
case 0x4f3f45:goto L4f3f45;
case 0x4f3f47:goto L4f3f47;
case 0x4f3f4d:c.instructions+=1;goto B4f3f4d;
case 0x4f3f52:goto L4f3f52;
case 0x4f3f54:c.instructions+=1;goto B4f3f54;
case 0x4f3f56:goto L4f3f56;
case 0x4f3f59:c.instructions+=1;goto B4f3f59;
case 0x4f3f5b:goto L4f3f5b;
case 0x4f3f5d:goto L4f3f5d;
case 0x4f3f60:c.instructions+=4;goto B4f3f60;
case 0x4f3f62:c.instructions+=3;goto B4f3f62;
case 0x4f3f65:c.instructions+=2;goto B4f3f65;
case 0x4f3f68:c.instructions+=1;goto B4f3f68;
case 0x4f3f6a:goto L4f3f6a;
case 0x4f3f6c:c.instructions+=1;goto B4f3f6c;
case 0x4f3f71:goto L4f3f71;
case 0x4f3f73:c.instructions+=1;goto B4f3f73;
case 0x4f3f75:goto L4f3f75;
case 0x4f3f7b:c.instructions+=1;goto B4f3f7b;
case 0x4f3f80:goto L4f3f80;
case 0x4f3f82:c.instructions+=1;goto B4f3f82;
case 0x4f3f84:goto L4f3f84;
case 0x4f3f87:c.instructions+=1;goto B4f3f87;
case 0x4f3f89:goto L4f3f89;
case 0x4f3f8b:goto L4f3f8b;
case 0x4f3f8e:c.instructions+=4;goto B4f3f8e;
case 0x4f3f90:c.instructions+=3;goto B4f3f90;
case 0x4f3f93:c.instructions+=2;goto B4f3f93;
case 0x4f3f96:c.instructions+=1;goto B4f3f96;
case 0x4f3f98:goto L4f3f98;
case 0x4f3f9a:c.instructions+=1;goto B4f3f9a;
case 0x4f3f9f:goto L4f3f9f;
case 0x4f3fa1:c.instructions+=1;goto B4f3fa1;
case 0x4f3fa3:goto L4f3fa3;
case 0x4f3fa9:c.instructions+=1;goto B4f3fa9;
case 0x4f3fae:goto L4f3fae;
case 0x4f3fb0:c.instructions+=1;goto B4f3fb0;
case 0x4f3fb2:goto L4f3fb2;
case 0x4f3fb5:c.instructions+=1;goto B4f3fb5;
case 0x4f3fb7:goto L4f3fb7;
case 0x4f3fb9:goto L4f3fb9;
case 0x4f3fbc:c.instructions+=4;goto B4f3fbc;
case 0x4f3fbe:c.instructions+=3;goto B4f3fbe;
case 0x4f3fc1:c.instructions+=2;goto B4f3fc1;
case 0x4f3fc4:c.instructions+=1;goto B4f3fc4;
case 0x4f3fc6:goto L4f3fc6;
case 0x4f3fcb:c.instructions+=2;goto B4f3fcb;
case 0x4f3fcd:c.instructions+=1;goto B4f3fcd;
case 0x4f3fcf:goto L4f3fcf;
case 0x4f3fd6:c.instructions+=1;goto B4f3fd6;
case 0x4f3fd8:goto L4f3fd8;
case 0x4f3fda:c.instructions+=2;goto B4f3fda;
case 0x4f3fdf:c.instructions+=1;goto B4f3fdf;
case 0x4f3fe4:goto L4f3fe4;
case 0x4f3fe6:c.instructions+=1;goto B4f3fe6;
case 0x4f3fe8:goto L4f3fe8;
case 0x4f3fed:c.instructions+=1;goto B4f3fed;
case 0x4f3ff2:goto L4f3ff2;
case 0x4f3ff4:c.instructions+=1;goto B4f3ff4;
case 0x4f3ff6:goto L4f3ff6;
case 0x4f3ffb:c.instructions+=1;goto B4f3ffb;
default:missing_instruction(c.pc);}
B4f3000:L4f3000:{c.instructions+=1;NFSU2_TR(0x4f3000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3005ull));
TAIL_STATIC(0x505450u,505);
}
B4f3005:L4f3005:{c.instructions+=3;NFSU2_TR(0x4f3005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3006:{NFSU2_TR(0x4f3006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3007:{NFSU2_TR(0x4f3007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f300cull));
TAIL_STATIC(0x5379c0u,537);
}
B4f300c:L4f300c:{c.instructions+=5;NFSU2_TR(0x4f300c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4f300f:{NFSU2_TR(0x4f300f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3010:{NFSU2_TR(0x4f3010);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3013:{NFSU2_TR(0x4f3013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3016:{NFSU2_TR(0x4f3016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f301bull));
TAIL_STATIC(0x52e770u,52e);
}
B4f301b:L4f301b:{c.instructions+=3;NFSU2_TR(0x4f301b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4f301c:{NFSU2_TR(0x4f301c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f301f:{NFSU2_TR(0x4f301f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4f2ef4u,4f2);}
}
B4f3025:L4f3025:{c.instructions+=2;NFSU2_TR(0x4f3025);
__builtin_memmove((R+4),(R+12),4);
}
B4f3027:{NFSU2_TR(0x4f3027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f302cull));
TAIL_STATIC(0x4e8a00u,4e8);
}
B4f302c:L4f302c:{c.instructions+=6;NFSU2_TR(0x4f302c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f302d:{NFSU2_TR(0x4f302d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f302e:{NFSU2_TR(0x4f302e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f302f:{NFSU2_TR(0x4f302f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f3030:{NFSU2_TR(0x4f3030);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3033:{NFSU2_TR(0x4f3033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3040:L4f3040:{c.instructions+=13;NFSU2_TR(0x4f3040);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3041:{NFSU2_TR(0x4f3041);
__builtin_memmove((R+20),(R+16),4);
}
B4f3043:{NFSU2_TR(0x4f3043);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4f3046:{NFSU2_TR(0x4f3046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x820ull))));
}
B4f304c:{NFSU2_TR(0x4f304c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f304d:{NFSU2_TR(0x4f304d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f304e:{NFSU2_TR(0x4f304e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f304f:{NFSU2_TR(0x4f304f);
__builtin_memmove((R+12),(R+4),4);
}
B4f3051:{NFSU2_TR(0x4f3051);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3057:{NFSU2_TR(0x4f3057);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3058:{NFSU2_TR(0x4f3058);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f305a:{NFSU2_TR(0x4f305a);
w4(R+4,u32(0x200ull));
}
B4f305f:{NFSU2_TR(0x4f305f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3063:L4f3063:{c.instructions+=1;NFSU2_TR(0x4f3063);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4f3065;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f3063u);}goto L4f3063;}
}
B4f3065:L4f3065:{c.instructions+=8;NFSU2_TR(0x4f3065);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f306a:{NFSU2_TR(0x4f306a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f306e:{NFSU2_TR(0x4f306e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f306f:{NFSU2_TR(0x4f306f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x918ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3075:{NFSU2_TR(0x4f3075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3076:{NFSU2_TR(0x4f3076);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3077:{NFSU2_TR(0x4f3077);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f307b:{NFSU2_TR(0x4f307b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3080ull));
TAIL_STATIC(0x743aa0u,743);
}
B4f3080:L4f3080:{c.instructions+=4;NFSU2_TR(0x4f3080);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3086:{NFSU2_TR(0x4f3086);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f3089:{NFSU2_TR(0x4f3089);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f308b:{NFSU2_TR(0x4f308b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f30a6;}}
}
B4f308d:L4f308d:{c.instructions+=4;NFSU2_TR(0x4f308d);
w4(R+4,u32(0x200ull));
}
B4f3092:{NFSU2_TR(0x4f3092);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3096:{NFSU2_TR(0x4f3096);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f309c:{NFSU2_TR(0x4f309c);
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
B4f309e:L4f309e:{c.instructions+=1;NFSU2_TR(0x4f309e);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4f30a0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f309eu);}goto L4f309e;}}
}
B4f30a0:L4f30a0:{c.instructions+=1;NFSU2_TR(0x4f30a0);
if(r1(R+518)){{goto L4f3274;}}
}
B4f30a6:L4f30a6:{c.instructions+=3;NFSU2_TR(0x4f30a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f30ac:{NFSU2_TR(0x4f30ac);
w4(R+4,u32(0x200ull));
}
B4f30b1:{NFSU2_TR(0x4f30b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4f30b5:L4f30b5:{c.instructions+=1;NFSU2_TR(0x4f30b5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4f30b7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f30b5u);}goto L4f30b5;}
}
B4f30b7:L4f30b7:{c.instructions+=6;NFSU2_TR(0x4f30b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f30bd:{NFSU2_TR(0x4f30bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f30c3:{NFSU2_TR(0x4f30c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f30c5:{NFSU2_TR(0x4f30c5);
__builtin_memmove((R+4),(R+0),4);
}
B4f30c7:{NFSU2_TR(0x4f30c7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f30c9:{NFSU2_TR(0x4f30c9);
if(r1(R+518)){{goto L4f30f3;}}
}
B4f30cb:L4f30cb:{c.instructions+=1;NFSU2_TR(0x4f30cb);
{goto L4f30d0;}
}
B4f30d0:L4f30d0:{c.instructions+=7;NFSU2_TR(0x4f30d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f30d2:{NFSU2_TR(0x4f30d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f30d5:{NFSU2_TR(0x4f30d5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f30d7:{NFSU2_TR(0x4f30d7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f30d9:{NFSU2_TR(0x4f30d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f30db:{NFSU2_TR(0x4f30db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f30de:{NFSU2_TR(0x4f30de);
if(r1(R+518)){{goto L4f30e9;}}
}
B4f30e0:L4f30e0:{c.instructions+=2;NFSU2_TR(0x4f30e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f30e1:{NFSU2_TR(0x4f30e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f30e6ull));
TAIL_STATIC(0x575630u,575);
}
B4f30e6:L4f30e6:{c.instructions+=1;NFSU2_TR(0x4f30e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f30e9:L4f30e9:{c.instructions+=4;NFSU2_TR(0x4f30e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f30eb:{NFSU2_TR(0x4f30eb);
__builtin_memmove((R+4),(R+0),4);
}
B4f30ed:{NFSU2_TR(0x4f30ed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f30ef:{NFSU2_TR(0x4f30ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f30d0u);}goto L4f30d0;}}
}
B4f30f1:L4f30f1:{c.instructions+=1;NFSU2_TR(0x4f30f1);
{goto L4f30f5;}
}
B4f30f3:L4f30f3:{c.instructions+=1;NFSU2_TR(0x4f30f3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f30f5:L4f30f5:{c.instructions+=5;NFSU2_TR(0x4f30f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f30fb:{NFSU2_TR(0x4f30fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B4f30ff:{NFSU2_TR(0x4f30ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3103:{NFSU2_TR(0x4f3103);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3107:{NFSU2_TR(0x4f3107);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4f324e;}}
}
B4f310d:L4f310d:{c.instructions+=1;NFSU2_TR(0x4f310d);
{goto L4f3113;}
}
B4f310f:L4f310f:{c.instructions+=1;NFSU2_TR(0x4f310f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f3113:L4f3113:{c.instructions+=3;NFSU2_TR(0x4f3113);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4f3117:{NFSU2_TR(0x4f3117);
__builtin_memmove((R+24),(R+20),4);
}
B4f3119:{NFSU2_TR(0x4f3119);
if(r1(R+518)){{goto L4f3128;}}
}
B4f311b:L4f311b:{c.instructions+=1;NFSU2_TR(0x4f311b);
{goto L4f3120;}
}
B4f3120:L4f3120:{c.instructions+=4;NFSU2_TR(0x4f3120);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f3123:{NFSU2_TR(0x4f3123);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4f3124:{NFSU2_TR(0x4f3124);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3126:{NFSU2_TR(0x4f3126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f3120u);}goto L4f3120;}}
}
B4f3128:L4f3128:{c.instructions+=2;NFSU2_TR(0x4f3128);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f312a:{NFSU2_TR(0x4f312a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f312full));
TAIL_STATIC(0x575620u,575);
}
B4f312f:L4f312f:{c.instructions+=3;NFSU2_TR(0x4f312f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f3132:{NFSU2_TR(0x4f3132);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3134:{NFSU2_TR(0x4f3134);
if(r1(R+518)){{goto L4f3146;}}
}
B4f3136:L4f3136:{c.instructions+=5;NFSU2_TR(0x4f3136);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3139:{NFSU2_TR(0x4f3139);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4f313d:{NFSU2_TR(0x4f313d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3140:{NFSU2_TR(0x4f3140);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3144:{NFSU2_TR(0x4f3144);
__builtin_memmove((R+28),(R+0),4);
}
B4f3146:L4f3146:{c.instructions+=5;NFSU2_TR(0x4f3146);
__builtin_memmove((R+0),(R+24),4);
}
B4f3148:{NFSU2_TR(0x4f3148);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B4f314a:{NFSU2_TR(0x4f314a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f314d:{NFSU2_TR(0x4f314d);
__builtin_memmove((R+20),(R+0),4);
}
B4f314f:{NFSU2_TR(0x4f314f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4f3156;}}
}
B4f3151:L4f3151:{c.instructions+=1;NFSU2_TR(0x4f3151);
w4(R+20,u32(0xcull));
}
B4f3156:L4f3156:{c.instructions+=6;NFSU2_TR(0x4f3156);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f315a:{NFSU2_TR(0x4f315a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f315b:{NFSU2_TR(0x4f315b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f315c:{NFSU2_TR(0x4f315c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f315f:{NFSU2_TR(0x4f315f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3160:{NFSU2_TR(0x4f3160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3165ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f3165:L4f3165:{c.instructions+=6;NFSU2_TR(0x4f3165);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f3168:{NFSU2_TR(0x4f3168);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4f3169:{NFSU2_TR(0x4f3169);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4f316e:{NFSU2_TR(0x4f316e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4f3171:{NFSU2_TR(0x4f3171);
__builtin_memmove((R+0),(R+24),4);
}
B4f3173:{NFSU2_TR(0x4f3173);
if(r1(R+518)){{goto L4f317e;}}
}
B4f3175:L4f3175:{c.instructions+=4;NFSU2_TR(0x4f3175);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4f3178:{NFSU2_TR(0x4f3178);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4f3179:{NFSU2_TR(0x4f3179);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f317c:{NFSU2_TR(0x4f317c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f3175u);}goto L4f3175;}}
}
B4f317e:L4f317e:{c.instructions+=14;NFSU2_TR(0x4f317e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4f3180:{NFSU2_TR(0x4f3180);
u8 U[8];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3184:{NFSU2_TR(0x4f3184);
__builtin_memmove((R+20),(R+24),4);
}
B4f3186:{NFSU2_TR(0x4f3186);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B4f3188:{NFSU2_TR(0x4f3188);
u8 U[8];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f318c:{NFSU2_TR(0x4f318c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f318d:{NFSU2_TR(0x4f318d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3191:{NFSU2_TR(0x4f3191);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3192:{NFSU2_TR(0x4f3192);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f3196:{NFSU2_TR(0x4f3196);
u8 U[6];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4f319b:{NFSU2_TR(0x4f319b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f319c:{NFSU2_TR(0x4f319c);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f31a1:{NFSU2_TR(0x4f31a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f31a5:{NFSU2_TR(0x4f31a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f31aaull));
TAIL_STATIC(0x43dc00u,43d);
}
B4f31aa:L4f31aa:{c.instructions+=5;NFSU2_TR(0x4f31aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f31ae:{NFSU2_TR(0x4f31ae);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31b0:{NFSU2_TR(0x4f31b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31b1:{NFSU2_TR(0x4f31b1);
u8 U[13];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B4f31b6:{NFSU2_TR(0x4f31b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f31bbull));
TAIL_STATIC(0x75cf10u,75c);
}
B4f31bb:L4f31bb:{c.instructions+=5;NFSU2_TR(0x4f31bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f31bf:{NFSU2_TR(0x4f31bf);
__builtin_memmove((R+20),(R+0),4);
}
B4f31c1:{NFSU2_TR(0x4f31c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31c2:{NFSU2_TR(0x4f31c2);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B4f31c6:{NFSU2_TR(0x4f31c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f31cbull));
TAIL_STATIC(0x43de50u,43d);
}
B4f31cb:L4f31cb:{c.instructions+=4;NFSU2_TR(0x4f31cb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4f31cc:{NFSU2_TR(0x4f31cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31cd:{NFSU2_TR(0x4f31cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4f31d1:{NFSU2_TR(0x4f31d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f31d6ull));
TAIL_STATIC(0x43de50u,43d);
}
B4f31d6:L4f31d6:{c.instructions+=9;NFSU2_TR(0x4f31d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f31d9:{NFSU2_TR(0x4f31d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f31dd:{NFSU2_TR(0x4f31dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31de:{NFSU2_TR(0x4f31de);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f31e2:{NFSU2_TR(0x4f31e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f31e8:{NFSU2_TR(0x4f31e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
}
B4f31ed:{NFSU2_TR(0x4f31ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31ee:{NFSU2_TR(0x4f31ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31ef:{NFSU2_TR(0x4f31ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f31f4ull));
TAIL_STATIC(0x743a50u,743);
}
B4f31f4:L4f31f4:{c.instructions+=4;NFSU2_TR(0x4f31f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4f31f7:{NFSU2_TR(0x4f31f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f31f9:{NFSU2_TR(0x4f31f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f31fc:{NFSU2_TR(0x4f31fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3209;}}
}
B4f31fe:L4f31fe:{c.instructions+=2;NFSU2_TR(0x4f31fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f31ff:{NFSU2_TR(0x4f31ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3204ull));
TAIL_STATIC(0x575630u,575);
}
B4f3204:L4f3204:{c.instructions+=2;NFSU2_TR(0x4f3204);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f3207:{NFSU2_TR(0x4f3207);
{goto L4f321f;}
}
B4f3209:L4f3209:{c.instructions+=6;NFSU2_TR(0x4f3209);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f320f:{NFSU2_TR(0x4f320f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3215:{NFSU2_TR(0x4f3215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f3217:{NFSU2_TR(0x4f3217);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f321a:{NFSU2_TR(0x4f321a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f321d:{NFSU2_TR(0x4f321d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f321f:L4f321f:{c.instructions+=2;NFSU2_TR(0x4f321f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4f3222:{NFSU2_TR(0x4f3222);
if(r1(R+518)){{goto L4f322c;}}
}
B4f3224:L4f3224:{c.instructions+=4;NFSU2_TR(0x4f3224);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4f3227:{NFSU2_TR(0x4f3227);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4f3228:{NFSU2_TR(0x4f3228);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f322a:{NFSU2_TR(0x4f322a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f3224u);}goto L4f3224;}}
}
B4f322c:L4f322c:{c.instructions+=9;NFSU2_TR(0x4f322c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3230:{NFSU2_TR(0x4f3230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3236:{NFSU2_TR(0x4f3236);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4f3237:{NFSU2_TR(0x4f3237);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4f3238:{NFSU2_TR(0x4f3238);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f323a:{NFSU2_TR(0x4f323a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B4f323c:{NFSU2_TR(0x4f323c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3240:{NFSU2_TR(0x4f3240);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3244:{NFSU2_TR(0x4f3244);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f310fu);}goto L4f310f;}}
}
B4f324a:L4f324a:{c.instructions+=1;NFSU2_TR(0x4f324a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f324e:L4f324e:{c.instructions+=2;NFSU2_TR(0x4f324e);
__builtin_memmove((R+4),(R+12),4);
}
B4f3250:{NFSU2_TR(0x4f3250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3255ull));
TAIL_STATIC(0x4e8a00u,4e8);
}
B4f3255:L4f3255:{c.instructions+=3;NFSU2_TR(0x4f3255);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f325b:{NFSU2_TR(0x4f325b);
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
B4f325d:{NFSU2_TR(0x4f325d);
if(r1(R+518)){{goto L4f3274;}}
}
B4f325f:L4f325f:{c.instructions+=2;NFSU2_TR(0x4f325f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3260:{NFSU2_TR(0x4f3260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3265ull));
TAIL_STATIC(0x540a60u,540);
}
B4f3265:L4f3265:{c.instructions+=3;NFSU2_TR(0x4f3265);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3268:{NFSU2_TR(0x4f3268);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x904ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f326e:{NFSU2_TR(0x4f326e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3274:L4f3274:{c.instructions+=7;NFSU2_TR(0x4f3274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3275:{NFSU2_TR(0x4f3275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3276:{NFSU2_TR(0x4f3276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3277:{NFSU2_TR(0x4f3277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f3278:{NFSU2_TR(0x4f3278);
__builtin_memmove((R+16),(R+20),4);
}
B4f327a:{NFSU2_TR(0x4f327a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f327b:{NFSU2_TR(0x4f327b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3280:L4f3280:{c.instructions+=3;NFSU2_TR(0x4f3280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3281:{NFSU2_TR(0x4f3281);
__builtin_memmove((R+24),(R+4),4);
}
B4f3283:{NFSU2_TR(0x4f3283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3288ull));
{goto L4f32a0;}
}
B4f3288:L4f3288:{c.instructions+=2;NFSU2_TR(0x4f3288);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4f328d:{NFSU2_TR(0x4f328d);
if(r1(R+518)){{goto L4f3298;}}
}
B4f328f:L4f328f:{c.instructions+=2;NFSU2_TR(0x4f328f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3290:{NFSU2_TR(0x4f3290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3295ull));
TAIL_STATIC(0x575630u,575);
}
B4f3295:L4f3295:{c.instructions+=1;NFSU2_TR(0x4f3295);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3298:L4f3298:{c.instructions+=3;NFSU2_TR(0x4f3298);
__builtin_memmove((R+0),(R+24),4);
}
B4f329a:{NFSU2_TR(0x4f329a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f329b:{NFSU2_TR(0x4f329b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f32a0:L4f32a0:{c.instructions+=2;NFSU2_TR(0x4f32a0);
u8 U[4];
w4(U+0,u32(0x798308ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4f32a6:{NFSU2_TR(0x4f32a6);
TAIL_STATIC(0x4e8bf0u,4e8);
}
B4f32b0:L4f32b0:{c.instructions+=9;NFSU2_TR(0x4f32b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32b2:{NFSU2_TR(0x4f32b2);
u8 U[4];
w4(U+0,u32(0x776764ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32b7:{NFSU2_TR(0x4f32b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f32bd:{NFSU2_TR(0x4f32bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32be:{NFSU2_TR(0x4f32be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f32c5:{NFSU2_TR(0x4f32c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32c6:{NFSU2_TR(0x4f32c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32c7:{NFSU2_TR(0x4f32c7);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32cc:{NFSU2_TR(0x4f32cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f32d1ull));
TAIL_STATIC(0x575620u,575);
}
B4f32d1:L4f32d1:{c.instructions+=6;NFSU2_TR(0x4f32d1);
__builtin_memmove((R+24),(R+0),4);
}
B4f32d3:{NFSU2_TR(0x4f32d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f32d6:{NFSU2_TR(0x4f32d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f32da:{NFSU2_TR(0x4f32da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f32dc:{NFSU2_TR(0x4f32dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f32e4:{NFSU2_TR(0x4f32e4);
if(r1(R+518)){{goto L4f32fa;}}
}
B4f32e6:L4f32e6:{c.instructions+=4;NFSU2_TR(0x4f32e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f32ea:{NFSU2_TR(0x4f32ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f32eb:{NFSU2_TR(0x4f32eb);
__builtin_memmove((R+4),(R+24),4);
}
B4f32ed:{NFSU2_TR(0x4f32ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f32f2ull));
TAIL_STATIC(0x4e8b70u,4e8);
}
B4f32f2:L4f32f2:{c.instructions+=2;NFSU2_TR(0x4f32f2);
u8 U[4];
w4(U+0,u32(0x798308ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f32f8:{NFSU2_TR(0x4f32f8);
{goto L4f32fc;}
}
B4f32fa:L4f32fa:{c.instructions+=1;NFSU2_TR(0x4f32fa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f32fc:L4f32fc:{c.instructions+=4;NFSU2_TR(0x4f32fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f32fe:{NFSU2_TR(0x4f32fe);
__builtin_memmove((R+4),(R+24),4);
}
B4f3300:{NFSU2_TR(0x4f3300);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3308:{NFSU2_TR(0x4f3308);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f330bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f330b:L4f330b:{c.instructions+=6;NFSU2_TR(0x4f330b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f330f:{NFSU2_TR(0x4f330f);
__builtin_memmove((R+0),(R+24),4);
}
B4f3311:{NFSU2_TR(0x4f3311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3312:{NFSU2_TR(0x4f3312);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3319:{NFSU2_TR(0x4f3319);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f331c:{NFSU2_TR(0x4f331c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3320:L4f3320:{c.instructions+=9;NFSU2_TR(0x4f3320);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3322:{NFSU2_TR(0x4f3322);
u8 U[4];
w4(U+0,u32(0x776784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3327:{NFSU2_TR(0x4f3327);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f332d:{NFSU2_TR(0x4f332d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f332e:{NFSU2_TR(0x4f332e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3335:{NFSU2_TR(0x4f3335);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3336:{NFSU2_TR(0x4f3336);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3337:{NFSU2_TR(0x4f3337);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f333c:{NFSU2_TR(0x4f333c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3341ull));
TAIL_STATIC(0x575620u,575);
}
B4f3341:L4f3341:{c.instructions+=6;NFSU2_TR(0x4f3341);
__builtin_memmove((R+24),(R+0),4);
}
B4f3343:{NFSU2_TR(0x4f3343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f3346:{NFSU2_TR(0x4f3346);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f334a:{NFSU2_TR(0x4f334a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f334c:{NFSU2_TR(0x4f334c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3354:{NFSU2_TR(0x4f3354);
if(r1(R+518)){{goto L4f3374;}}
}
B4f3356:L4f3356:{c.instructions+=4;NFSU2_TR(0x4f3356);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f335a:{NFSU2_TR(0x4f335a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f335b:{NFSU2_TR(0x4f335b);
__builtin_memmove((R+4),(R+24),4);
}
B4f335d:{NFSU2_TR(0x4f335d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3362ull));
TAIL_STATIC(0x4e8b70u,4e8);
}
B4f3362:L4f3362:{c.instructions+=3;NFSU2_TR(0x4f3362);
u8 U[4];
w4(U+0,u32(0x797df4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f3368:{NFSU2_TR(0x4f3368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3372:{NFSU2_TR(0x4f3372);
{goto L4f3376;}
}
B4f3374:L4f3374:{c.instructions+=1;NFSU2_TR(0x4f3374);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3376:L4f3376:{c.instructions+=4;NFSU2_TR(0x4f3376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f3378:{NFSU2_TR(0x4f3378);
__builtin_memmove((R+4),(R+24),4);
}
B4f337a:{NFSU2_TR(0x4f337a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3382:{NFSU2_TR(0x4f3382);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3385ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f3385:L4f3385:{c.instructions+=6;NFSU2_TR(0x4f3385);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3389:{NFSU2_TR(0x4f3389);
__builtin_memmove((R+0),(R+24),4);
}
B4f338b:{NFSU2_TR(0x4f338b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f338c:{NFSU2_TR(0x4f338c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3393:{NFSU2_TR(0x4f3393);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3396:{NFSU2_TR(0x4f3396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f33a0:L4f33a0:{c.instructions+=7;NFSU2_TR(0x4f33a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f33a1:{NFSU2_TR(0x4f33a1);
__builtin_memmove((R+24),(R+4),4);
}
B4f33a3:{NFSU2_TR(0x4f33a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f33a4:{NFSU2_TR(0x4f33a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f33aa:{NFSU2_TR(0x4f33aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f33ac:{NFSU2_TR(0x4f33ac);
__builtin_memmove((R+4),(R+28),4);
}
B4f33ae:{NFSU2_TR(0x4f33ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f33b3ull));
TAIL_STATIC(0x43be80u,43b);
}
B4f33b3:L4f33b3:{c.instructions+=5;NFSU2_TR(0x4f33b3);
__builtin_memmove((R+4),gp(0x836514),4);
}
B4f33b9:{NFSU2_TR(0x4f33b9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0ull))));
}
B4f33bf:{NFSU2_TR(0x4f33bf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
}
B4f33c2:{NFSU2_TR(0x4f33c2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x60ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x60ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f33c5:{NFSU2_TR(0x4f33c5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f3490;}}
}
B4f33cb:L4f33cb:{c.instructions+=2;NFSU2_TR(0x4f33cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4f34e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4f33d2:{NFSU2_TR(0x4f33d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4f34ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f33d9:L4f33d9:{c.instructions+=2;NFSU2_TR(0x4f33d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f33db:{NFSU2_TR(0x4f33db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f34c3;}}
}
B4f33e1:L4f33e1:{c.instructions+=4;NFSU2_TR(0x4f33e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f33e2:{NFSU2_TR(0x4f33e2);
__builtin_memmove((R+4),(R+24),4);
}
B4f33e4:{NFSU2_TR(0x4f33e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f33e5:{NFSU2_TR(0x4f33e5);
TAIL_STATIC(0x4a3bf0u,4a3);
}
B4f33ea:L4f33ea:{c.instructions+=2;NFSU2_TR(0x4f33ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f33ec:{NFSU2_TR(0x4f33ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f34c3;}}
}
B4f33f2:L4f33f2:{c.instructions+=5;NFSU2_TR(0x4f33f2);
u8 U[4];
w4(U+0,u32(0x3000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f33f7:{NFSU2_TR(0x4f33f7);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f33fc:{NFSU2_TR(0x4f33fc);
u8 U[4];
w4(U+0,u32(0xab1f0e92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3401:{NFSU2_TR(0x4f3401);
__builtin_memmove((R+4),(R+24),4);
}
B4f3403:{NFSU2_TR(0x4f3403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3408ull));
TAIL_STATIC(0x4a39c0u,4a3);
}
B4f3408:L4f3408:{c.instructions+=3;NFSU2_TR(0x4f3408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3409:{NFSU2_TR(0x4f3409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f340a:{NFSU2_TR(0x4f340a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f340b:L4f340b:{c.instructions+=2;NFSU2_TR(0x4f340b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f340e:{NFSU2_TR(0x4f340e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4f34c3;}}
}
B4f3414:L4f3414:{c.instructions+=1;NFSU2_TR(0x4f3414);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3442;}}
}
B4f3416:L4f3416:{c.instructions+=4;NFSU2_TR(0x4f3416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4f3418:{NFSU2_TR(0x4f3418);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f341d:{NFSU2_TR(0x4f341d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
}
B4f3420:{NFSU2_TR(0x4f3420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3425ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4f3425:L4f3425:{c.instructions+=4;NFSU2_TR(0x4f3425);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4f3429:{NFSU2_TR(0x4f3429);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f342a:{NFSU2_TR(0x4f342a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f342b:{NFSU2_TR(0x4f342b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3430ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4f3430:L4f3430:{c.instructions+=4;NFSU2_TR(0x4f3430);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f3436:{NFSU2_TR(0x4f3436);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3439:{NFSU2_TR(0x4f3439);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f343a:{NFSU2_TR(0x4f343a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f343full));
TAIL_STATIC(0x4c5f20u,4c5);
}
B4f343f:L4f343f:{c.instructions+=3;NFSU2_TR(0x4f343f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3440:{NFSU2_TR(0x4f3440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3441:{NFSU2_TR(0x4f3441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3442:L4f3442:{c.instructions+=3;NFSU2_TR(0x4f3442);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4f3447:{NFSU2_TR(0x4f3447);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xbull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B4f344c:{NFSU2_TR(0x4f344c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3493;}}
}
B4f344e:L4f344e:{c.instructions+=4;NFSU2_TR(0x4f344e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3451:{NFSU2_TR(0x4f3451);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3452:{NFSU2_TR(0x4f3452);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3457:{NFSU2_TR(0x4f3457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f345cull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f345c:L4f345c:{c.instructions+=4;NFSU2_TR(0x4f345c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f345f:{NFSU2_TR(0x4f345f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3460:{NFSU2_TR(0x4f3460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3461:{NFSU2_TR(0x4f3461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3462:L4f3462:{c.instructions+=2;NFSU2_TR(0x4f3462);
w4(R+4,u32(0x83a9e0ull));
}
B4f3467:{NFSU2_TR(0x4f3467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f346cull));
TAIL_STATIC(0x502fe0u,502);
}
B4f346c:L4f346c:{c.instructions+=2;NFSU2_TR(0x4f346c);
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
B4f346e:{NFSU2_TR(0x4f346e);
if(r1(R+518)){{goto L4f3493;}}
}
B4f3470:L4f3470:{c.instructions+=2;NFSU2_TR(0x4f3470);
w4(R+4,u32(0x83a9e0ull));
}
B4f3475:{NFSU2_TR(0x4f3475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f347aull));
TAIL_STATIC(0x502fd0u,502);
}
B4f347a:L4f347a:{c.instructions+=4;NFSU2_TR(0x4f347a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f347b:{NFSU2_TR(0x4f347b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4f347e:{NFSU2_TR(0x4f347e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f347f:{NFSU2_TR(0x4f347f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3484ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4f3484:L4f3484:{c.instructions+=4;NFSU2_TR(0x4f3484);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f3487:{NFSU2_TR(0x4f3487);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3489:{NFSU2_TR(0x4f3489);
__builtin_memmove((R+4),(R+24),4);
}
B4f348b:{NFSU2_TR(0x4f348b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3490ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f3490:L4f3490:{c.instructions+=3;NFSU2_TR(0x4f3490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3491:{NFSU2_TR(0x4f3491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3492:{NFSU2_TR(0x4f3492);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3493:L4f3493:{c.instructions+=3;NFSU2_TR(0x4f3493);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3495:{NFSU2_TR(0x4f3495);
__builtin_memmove((R+4),(R+24),4);
}
B4f3497:{NFSU2_TR(0x4f3497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f349cull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f349c:L4f349c:{c.instructions+=3;NFSU2_TR(0x4f349c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f349d:{NFSU2_TR(0x4f349d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f349e:{NFSU2_TR(0x4f349e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f349f:L4f349f:{c.instructions+=2;NFSU2_TR(0x4f349f);
w4(R+4,u32(0x83a9e0ull));
}
B4f34a4:{NFSU2_TR(0x4f34a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f34a9ull));
TAIL_STATIC(0x502fe0u,502);
}
B4f34a9:L4f34a9:{c.instructions+=3;NFSU2_TR(0x4f34a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f34ab:{NFSU2_TR(0x4f34ab);
__builtin_memmove((R+4),(R+24),4);
}
B4f34ad:{NFSU2_TR(0x4f34ad);
if(r1(R+518)){{goto L4f34b9;}}
}
B4f34af:L4f34af:{c.instructions+=2;NFSU2_TR(0x4f34af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f34b1:{NFSU2_TR(0x4f34b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f34b6ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f34b6:L4f34b6:{c.instructions+=3;NFSU2_TR(0x4f34b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f34b7:{NFSU2_TR(0x4f34b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f34b8:{NFSU2_TR(0x4f34b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f34b9:L4f34b9:{c.instructions+=2;NFSU2_TR(0x4f34b9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f34bb:{NFSU2_TR(0x4f34bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f34c0ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f34c0:L4f34c0:{c.instructions+=3;NFSU2_TR(0x4f34c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f34c1:{NFSU2_TR(0x4f34c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f34c2:{NFSU2_TR(0x4f34c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f34c3:L4f34c3:{c.instructions+=4;NFSU2_TR(0x4f34c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f34c4:{NFSU2_TR(0x4f34c4);
__builtin_memmove((R+4),(R+24),4);
}
B4f34c6:{NFSU2_TR(0x4f34c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f34c7:{NFSU2_TR(0x4f34c7);
TAIL_STATIC(0x4a32e0u,4a3);
}
B4f3550:L4f3550:{c.instructions+=3;NFSU2_TR(0x4f3550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3551:{NFSU2_TR(0x4f3551);
__builtin_memmove((R+24),(R+4),4);
}
B4f3553:{NFSU2_TR(0x4f3553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3558ull));
TAIL_STATIC(0x4e8bf0u,4e8);
}
B4f3558:L4f3558:{c.instructions+=2;NFSU2_TR(0x4f3558);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4f355d:{NFSU2_TR(0x4f355d);
if(r1(R+518)){{goto L4f3568;}}
}
B4f355f:L4f355f:{c.instructions+=2;NFSU2_TR(0x4f355f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3560:{NFSU2_TR(0x4f3560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3565ull));
TAIL_STATIC(0x575630u,575);
}
B4f3565:L4f3565:{c.instructions+=1;NFSU2_TR(0x4f3565);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3568:L4f3568:{c.instructions+=3;NFSU2_TR(0x4f3568);
__builtin_memmove((R+0),(R+24),4);
}
B4f356a:{NFSU2_TR(0x4f356a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f356b:{NFSU2_TR(0x4f356b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3570:L4f3570:{c.instructions+=7;NFSU2_TR(0x4f3570);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3571:{NFSU2_TR(0x4f3571);
__builtin_memmove((R+24),(R+4),4);
}
B4f3573:{NFSU2_TR(0x4f3573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3576:{NFSU2_TR(0x4f3576);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x80ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4f357d:{NFSU2_TR(0x4f357d);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4f3582:{NFSU2_TR(0x4f3582);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4f3584:{NFSU2_TR(0x4f3584);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4f359e;}}
}
B4f3586:L4f3586:{c.instructions+=4;NFSU2_TR(0x4f3586);
__builtin_memmove((R+0),gp(0x836518),4);
}
B4f358b:{NFSU2_TR(0x4f358b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f358c:{NFSU2_TR(0x4f358c);
u8 U[4];
w4(U+0,u32(0x5afe12f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3591:{NFSU2_TR(0x4f3591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3596ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3596:L4f3596:{c.instructions+=2;NFSU2_TR(0x4f3596);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4f359b:{NFSU2_TR(0x4f359b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f359e:L4f359e:{c.instructions+=4;NFSU2_TR(0x4f359e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B4f35a3:{NFSU2_TR(0x4f35a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4f35a6:{NFSU2_TR(0x4f35a6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f35ab:{NFSU2_TR(0x4f35ab);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f3673;}}
}
B4f35b1:L4f35b1:{c.instructions+=2;NFSU2_TR(0x4f35b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4f36b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4f35b8:{NFSU2_TR(0x4f35b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4f3690ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4f35bf:L4f35bf:{c.instructions+=3;NFSU2_TR(0x4f35bf);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f35c4:{NFSU2_TR(0x4f35c4);
__builtin_memmove((R+4),(R+24),4);
}
B4f35c6:{NFSU2_TR(0x4f35c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f35cbull));
TAIL_STATIC(0x4a37c0u,4a3);
}
B4f35cb:L4f35cb:{c.instructions+=1;NFSU2_TR(0x4f35cb);
{goto L4f3673;}
}
B4f35d0:L4f35d0:{c.instructions+=1;NFSU2_TR(0x4f35d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f35d5ull));
TAIL_STATIC(0x4a9590u,4a9);
}
B4f35d5:L4f35d5:{c.instructions+=2;NFSU2_TR(0x4f35d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f35d7:{NFSU2_TR(0x4f35d7);
if(r1(R+518)){{goto L4f3673;}}
}
B4f35dd:L4f35dd:{c.instructions+=2;NFSU2_TR(0x4f35dd);
__builtin_memmove((R+4),(R+24),4);
}
B4f35df:{NFSU2_TR(0x4f35df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f35e4ull));
TAIL_STATIC(0x4e8ce0u,4e8);
}
B4f35e4:L4f35e4:{c.instructions+=1;NFSU2_TR(0x4f35e4);
{goto L4f3673;}
}
B4f35e9:L4f35e9:{c.instructions+=4;NFSU2_TR(0x4f35e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f35ec:{NFSU2_TR(0x4f35ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f35ed:{NFSU2_TR(0x4f35ed);
u8 U[4];
w4(U+0,u32(0x5a051729ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f35f2:{NFSU2_TR(0x4f35f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f35f7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f35f7:L4f35f7:{c.instructions+=2;NFSU2_TR(0x4f35f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f35fa:{NFSU2_TR(0x4f35fa);
{goto L4f3673;}
}
B4f35fc:L4f35fc:{c.instructions+=2;NFSU2_TR(0x4f35fc);
w4(R+4,u32(0x83a9e0ull));
}
B4f3601:{NFSU2_TR(0x4f3601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3606ull));
TAIL_STATIC(0x502fe0u,502);
}
B4f3606:L4f3606:{c.instructions+=2;NFSU2_TR(0x4f3606);
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
B4f3608:{NFSU2_TR(0x4f3608);
if(r1(R+518)){{goto L4f362c;}}
}
B4f360a:L4f360a:{c.instructions+=2;NFSU2_TR(0x4f360a);
w4(R+4,u32(0x83a9e0ull));
}
B4f360f:{NFSU2_TR(0x4f360f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3614ull));
TAIL_STATIC(0x502fd0u,502);
}
B4f3614:L4f3614:{c.instructions+=4;NFSU2_TR(0x4f3614);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3615:{NFSU2_TR(0x4f3615);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3618:{NFSU2_TR(0x4f3618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3619:{NFSU2_TR(0x4f3619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f361eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4f361e:L4f361e:{c.instructions+=4;NFSU2_TR(0x4f361e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f3621:{NFSU2_TR(0x4f3621);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3623:{NFSU2_TR(0x4f3623);
__builtin_memmove((R+4),(R+24),4);
}
B4f3625:{NFSU2_TR(0x4f3625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f362aull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f362a:L4f362a:{c.instructions+=1;NFSU2_TR(0x4f362a);
{goto L4f3673;}
}
B4f362c:L4f362c:{c.instructions+=4;NFSU2_TR(0x4f362c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f362f:{NFSU2_TR(0x4f362f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3630:{NFSU2_TR(0x4f3630);
u8 U[4];
w4(U+0,u32(0x461a18eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3635:{NFSU2_TR(0x4f3635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f363aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f363a:L4f363a:{c.instructions+=2;NFSU2_TR(0x4f363a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f363d:{NFSU2_TR(0x4f363d);
{goto L4f3673;}
}
B4f363f:L4f363f:{c.instructions+=2;NFSU2_TR(0x4f363f);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f3645:{NFSU2_TR(0x4f3645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f364aull));
TAIL_STATIC(0x4eb8d0u,4eb);
}
B4f364a:L4f364a:{c.instructions+=1;NFSU2_TR(0x4f364a);
{goto L4f3673;}
}
B4f364c:L4f364c:{c.instructions+=2;NFSU2_TR(0x4f364c);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f3652:{NFSU2_TR(0x4f3652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3657ull));
TAIL_STATIC(0x4d9c60u,4d9);
}
B4f3657:L4f3657:{c.instructions+=1;NFSU2_TR(0x4f3657);
{goto L4f3673;}
}
B4f3659:L4f3659:{c.instructions+=2;NFSU2_TR(0x4f3659);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f365f:{NFSU2_TR(0x4f365f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3664ull));
TAIL_STATIC(0x4a9750u,4a9);
}
B4f3664:L4f3664:{c.instructions+=1;NFSU2_TR(0x4f3664);
{goto L4f3673;}
}
B4f3666:L4f3666:{c.instructions+=3;NFSU2_TR(0x4f3666);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f366c:{NFSU2_TR(0x4f366c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f366e:{NFSU2_TR(0x4f366e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3673ull));
TAIL_STATIC(0x4a9710u,4a9);
}
B4f3673:L4f3673:{c.instructions+=4;NFSU2_TR(0x4f3673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f3676:{NFSU2_TR(0x4f3676);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f367b:{NFSU2_TR(0x4f367b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f367c:{NFSU2_TR(0x4f367c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3681ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4f3681:L4f3681:{c.instructions+=3;NFSU2_TR(0x4f3681);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3684:{NFSU2_TR(0x4f3684);
__builtin_memmove((R+4),(R+0),4);
}
B4f3686:{NFSU2_TR(0x4f3686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f368bull));
TAIL_STATIC(0x5047e0u,504);
}
B4f368b:L4f368b:{c.instructions+=2;NFSU2_TR(0x4f368b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f368c:{NFSU2_TR(0x4f368c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3780:L4f3780:{c.instructions+=11;NFSU2_TR(0x4f3780);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3781:{NFSU2_TR(0x4f3781);
__builtin_memmove((R+20),(R+16),4);
}
B4f3783:{NFSU2_TR(0x4f3783);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3786:{NFSU2_TR(0x4f3786);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3789:{NFSU2_TR(0x4f3789);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f378a:{NFSU2_TR(0x4f378a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f378b:{NFSU2_TR(0x4f378b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb8a7c6ccull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3791:{NFSU2_TR(0x4f3791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3792:{NFSU2_TR(0x4f3792);
__builtin_memmove((R+24),(R+4),4);
}
B4f3794:{NFSU2_TR(0x4f3794);
__builtin_memmove((R+12),(R+518),1);
}
B4f3797:{NFSU2_TR(0x4f3797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f379cull));
TAIL_STATIC(0x4a3ae0u,4a3);
}
B4f379c:L4f379c:{c.instructions+=7;NFSU2_TR(0x4f379c);
__builtin_memmove((R+4),gp(0x836514),4);
}
B4f37a2:{NFSU2_TR(0x4f37a2);
__builtin_memmove((R+0),(R+4),4);
}
B4f37a4:{NFSU2_TR(0x4f37a4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
}
B4f37a9:{NFSU2_TR(0x4f37a9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0ffffffull))));
}
B4f37af:{NFSU2_TR(0x4f37af);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f37b4:{NFSU2_TR(0x4f37b4);
__builtin_memmove(gp(0x836514),(R+4),4);
}
B4f37ba:{NFSU2_TR(0x4f37ba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4f3889;}}
}
B4f37c0:L4f37c0:{c.instructions+=1;NFSU2_TR(0x4f37c0);
if(r1(R+518)){{goto L4f3872;}}
}
B4f37c6:L4f37c6:{c.instructions+=2;NFSU2_TR(0x4f37c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f37cb:{NFSU2_TR(0x4f37cb);
if(r1(R+518)){{goto L4f3830;}}
}
B4f37cd:L4f37cd:{c.instructions+=2;NFSU2_TR(0x4f37cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f37d2:{NFSU2_TR(0x4f37d2);
if(r1(R+518)){{goto L4f37f6;}}
}
B4f37d4:L4f37d4:{c.instructions+=2;NFSU2_TR(0x4f37d4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f37d9:{NFSU2_TR(0x4f37d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f392c;}}
}
B4f37df:L4f37df:{c.instructions+=4;NFSU2_TR(0x4f37df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f37e2:{NFSU2_TR(0x4f37e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f37e3:{NFSU2_TR(0x4f37e3);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f37e8:{NFSU2_TR(0x4f37e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f37edull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f37ed:L4f37ed:{c.instructions+=5;NFSU2_TR(0x4f37ed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f37f0:{NFSU2_TR(0x4f37f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f37f1:{NFSU2_TR(0x4f37f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f37f2:{NFSU2_TR(0x4f37f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f37f3:{NFSU2_TR(0x4f37f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f37f6:L4f37f6:{c.instructions+=2;NFSU2_TR(0x4f37f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f37f8:{NFSU2_TR(0x4f37f8);
if(r1(R+518)){{goto L4f3810;}}
}
B4f37fa:L4f37fa:{c.instructions+=4;NFSU2_TR(0x4f37fa);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f37fc:{NFSU2_TR(0x4f37fc);
__builtin_memmove((R+4),(R+24),4);
}
B4f37fe:{NFSU2_TR(0x4f37fe);
s1(0x844ad9,u8(0x1ull));
}
B4f3805:{NFSU2_TR(0x4f3805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f380aull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f380a:L4f380a:{c.instructions+=4;NFSU2_TR(0x4f380a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f380b:{NFSU2_TR(0x4f380b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f380c:{NFSU2_TR(0x4f380c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f380d:{NFSU2_TR(0x4f380d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3810:L4f3810:{c.instructions+=6;NFSU2_TR(0x4f3810);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4f3816:{NFSU2_TR(0x4f3816);
s1(0x844ad9,u8(0x0ull));
}
B4f381d:{NFSU2_TR(0x4f381d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3821:{NFSU2_TR(0x4f3821);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3823:{NFSU2_TR(0x4f3823);
__builtin_memmove((R+4),(R+24),4);
}
B4f3825:{NFSU2_TR(0x4f3825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f382aull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f382a:L4f382a:{c.instructions+=4;NFSU2_TR(0x4f382a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f382b:{NFSU2_TR(0x4f382b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f382c:{NFSU2_TR(0x4f382c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f382d:{NFSU2_TR(0x4f382d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3830:L4f3830:{c.instructions+=2;NFSU2_TR(0x4f3830);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3832:{NFSU2_TR(0x4f3832);
if(r1(R+518)){{goto L4f385b;}}
}
B4f3834:L4f3834:{c.instructions+=2;NFSU2_TR(0x4f3834);
__builtin_memmove((R+4),(R+24),4);
}
B4f3836:{NFSU2_TR(0x4f3836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f383bull));
TAIL_STATIC(0x556490u,556);
}
B4f383b:L4f383b:{c.instructions+=5;NFSU2_TR(0x4f383b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f383d:{NFSU2_TR(0x4f383d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f383f:{NFSU2_TR(0x4f383f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3841:{NFSU2_TR(0x4f3841);
__builtin_memmove((R+4),(R+24),4);
}
B4f3843:{NFSU2_TR(0x4f3843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3848ull));
TAIL_STATIC(0x4a3460u,4a3);
}
B4f3848:L4f3848:{c.instructions+=5;NFSU2_TR(0x4f3848);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f384a:{NFSU2_TR(0x4f384a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f384c:{NFSU2_TR(0x4f384c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f384e:{NFSU2_TR(0x4f384e);
__builtin_memmove((R+4),(R+24),4);
}
B4f3850:{NFSU2_TR(0x4f3850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3855ull));
TAIL_STATIC(0x4a3460u,4a3);
}
B4f3855:L4f3855:{c.instructions+=4;NFSU2_TR(0x4f3855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3856:{NFSU2_TR(0x4f3856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f3857:{NFSU2_TR(0x4f3857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3858:{NFSU2_TR(0x4f3858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f385b:L4f385b:{c.instructions+=4;NFSU2_TR(0x4f385b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f385e:{NFSU2_TR(0x4f385e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f385f:{NFSU2_TR(0x4f385f);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3864:{NFSU2_TR(0x4f3864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3869ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3869:L4f3869:{c.instructions+=5;NFSU2_TR(0x4f3869);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f386c:{NFSU2_TR(0x4f386c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f386d:{NFSU2_TR(0x4f386d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f386e:{NFSU2_TR(0x4f386e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f386f:{NFSU2_TR(0x4f386f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3872:L4f3872:{c.instructions+=2;NFSU2_TR(0x4f3872);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3874:{NFSU2_TR(0x4f3874);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f37dfu);}goto L4f37df;}}
}
B4f387a:L4f387a:{c.instructions+=3;NFSU2_TR(0x4f387a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f387c:{NFSU2_TR(0x4f387c);
__builtin_memmove((R+4),(R+24),4);
}
B4f387e:{NFSU2_TR(0x4f387e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3883ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f3883:L4f3883:{c.instructions+=4;NFSU2_TR(0x4f3883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3884:{NFSU2_TR(0x4f3884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f3885:{NFSU2_TR(0x4f3885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3886:{NFSU2_TR(0x4f3886);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3889:L4f3889:{c.instructions+=2;NFSU2_TR(0x4f3889);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f388e:{NFSU2_TR(0x4f388e);
if(r1(R+518)){{goto L4f38ce;}}
}
B4f3890:L4f3890:{c.instructions+=2;NFSU2_TR(0x4f3890);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3895:{NFSU2_TR(0x4f3895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f392c;}}
}
B4f389b:L4f389b:{c.instructions+=2;NFSU2_TR(0x4f389b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f389d:{NFSU2_TR(0x4f389d);
if(r1(R+518)){{goto L4f38b7;}}
}
B4f389f:L4f389f:{c.instructions+=8;NFSU2_TR(0x4f389f);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4f38a4:{NFSU2_TR(0x4f38a4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x6cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f38a7:{NFSU2_TR(0x4f38a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f38aa:{NFSU2_TR(0x4f38aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f38ab:{NFSU2_TR(0x4f38ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f38b2:{NFSU2_TR(0x4f38b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f38b3:{NFSU2_TR(0x4f38b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f38b4:{NFSU2_TR(0x4f38b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f38b7:L4f38b7:{c.instructions+=4;NFSU2_TR(0x4f38b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f38ba:{NFSU2_TR(0x4f38ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f38bb:{NFSU2_TR(0x4f38bb);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f38c0:{NFSU2_TR(0x4f38c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f38c5ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f38c5:L4f38c5:{c.instructions+=5;NFSU2_TR(0x4f38c5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f38c8:{NFSU2_TR(0x4f38c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f38c9:{NFSU2_TR(0x4f38c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f38ca:{NFSU2_TR(0x4f38ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f38cb:{NFSU2_TR(0x4f38cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f38ce:L4f38ce:{c.instructions+=2;NFSU2_TR(0x4f38ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f38d0:{NFSU2_TR(0x4f38d0);
if(r1(R+518)){{goto L4f391e;}}
}
B4f38d2:L4f38d2:{c.instructions+=3;NFSU2_TR(0x4f38d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f38d4:{NFSU2_TR(0x4f38d4);
w4(R+4,u32(0x83a9d0ull));
}
B4f38d9:{NFSU2_TR(0x4f38d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f38deull));
TAIL_STATIC(0x52a460u,52a);
}
B4f38de:L4f38de:{c.instructions+=2;NFSU2_TR(0x4f38de);
u8 U[4];
w4(U+0,u32(u32(m4(0x836514))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f38e8:{NFSU2_TR(0x4f38e8);
if(r1(R+518)){{goto L4f3905;}}
}
B4f38ea:L4f38ea:{c.instructions+=3;NFSU2_TR(0x4f38ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f38ec:{NFSU2_TR(0x4f38ec);
w4(R+4,u32(0x85ad40ull));
}
B4f38f1:{NFSU2_TR(0x4f38f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f38f6ull));
TAIL_STATIC(0x532830u,532);
}
B4f38f6:L4f38f6:{c.instructions+=3;NFSU2_TR(0x4f38f6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f38f8:{NFSU2_TR(0x4f38f8);
__builtin_memmove((R+4),(R+24),4);
}
B4f38fa:{NFSU2_TR(0x4f38fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f38ffull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f38ff:L4f38ff:{c.instructions+=4;NFSU2_TR(0x4f38ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3900:{NFSU2_TR(0x4f3900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f3901:{NFSU2_TR(0x4f3901);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3902:{NFSU2_TR(0x4f3902);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3905:L4f3905:{c.instructions+=2;NFSU2_TR(0x4f3905);
w4(R+4,u32(0x83a9d0ull));
}
B4f390a:{NFSU2_TR(0x4f390a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f390full));
TAIL_STATIC(0x5346f0u,534);
}
B4f390f:L4f390f:{c.instructions+=3;NFSU2_TR(0x4f390f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3911:{NFSU2_TR(0x4f3911);
__builtin_memmove((R+4),(R+24),4);
}
B4f3913:{NFSU2_TR(0x4f3913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3918ull));
TAIL_STATIC(0x4e8d30u,4e8);
}
B4f3918:L4f3918:{c.instructions+=4;NFSU2_TR(0x4f3918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3919:{NFSU2_TR(0x4f3919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f391a:{NFSU2_TR(0x4f391a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f391b:{NFSU2_TR(0x4f391b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f391e:L4f391e:{c.instructions+=3;NFSU2_TR(0x4f391e);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3923:{NFSU2_TR(0x4f3923);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3924:{NFSU2_TR(0x4f3924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3929ull));
TAIL_STATIC(0x4a31d0u,4a3);
}
B4f3929:L4f3929:{c.instructions+=1;NFSU2_TR(0x4f3929);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f392c:L4f392c:{c.instructions+=4;NFSU2_TR(0x4f392c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f392d:{NFSU2_TR(0x4f392d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f392e:{NFSU2_TR(0x4f392e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f392f:{NFSU2_TR(0x4f392f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3940:L4f3940:{c.instructions+=8;NFSU2_TR(0x4f3940);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3942:{NFSU2_TR(0x4f3942);
u8 U[4];
w4(U+0,u32(0x7767a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3947:{NFSU2_TR(0x4f3947);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f394d:{NFSU2_TR(0x4f394d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f394e:{NFSU2_TR(0x4f394e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3955:{NFSU2_TR(0x4f3955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3956:{NFSU2_TR(0x4f3956);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f395b:{NFSU2_TR(0x4f395b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3960ull));
TAIL_STATIC(0x575620u,575);
}
B4f3960:L4f3960:{c.instructions+=5;NFSU2_TR(0x4f3960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f3963:{NFSU2_TR(0x4f3963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4f3967:{NFSU2_TR(0x4f3967);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f3969:{NFSU2_TR(0x4f3969);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3971:{NFSU2_TR(0x4f3971);
if(r1(R+518)){{goto L4f398e;}}
}
B4f3973:L4f3973:{c.instructions+=4;NFSU2_TR(0x4f3973);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3977:{NFSU2_TR(0x4f3977);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3978:{NFSU2_TR(0x4f3978);
__builtin_memmove((R+4),(R+0),4);
}
B4f397a:{NFSU2_TR(0x4f397a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f397full));
TAIL_STATIC(0x4e94c0u,4e9);
}
B4f397f:L4f397f:{c.instructions+=4;NFSU2_TR(0x4f397f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3983:{NFSU2_TR(0x4f3983);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f398a:{NFSU2_TR(0x4f398a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f398d:{NFSU2_TR(0x4f398d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f398e:L4f398e:{c.instructions+=5;NFSU2_TR(0x4f398e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3992:{NFSU2_TR(0x4f3992);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f3994:{NFSU2_TR(0x4f3994);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f399b:{NFSU2_TR(0x4f399b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f399e:{NFSU2_TR(0x4f399e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f39a0:L4f39a0:{c.instructions+=15;NFSU2_TR(0x4f39a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39a1:{NFSU2_TR(0x4f39a1);
__builtin_memmove((R+20),(R+16),4);
}
B4f39a3:{NFSU2_TR(0x4f39a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f39a6:{NFSU2_TR(0x4f39a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f39a9:{NFSU2_TR(0x4f39a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39aa:{NFSU2_TR(0x4f39aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4f39ad:{NFSU2_TR(0x4f39ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39ae:{NFSU2_TR(0x4f39ae);
__builtin_memmove((R+28),(R+4),4);
}
B4f39b0:{NFSU2_TR(0x4f39b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f39b3:{NFSU2_TR(0x4f39b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39b4:{NFSU2_TR(0x4f39b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39b5:{NFSU2_TR(0x4f39b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39b6:{NFSU2_TR(0x4f39b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39b7:{NFSU2_TR(0x4f39b7);
__builtin_memmove((R+4),(R+28),4);
}
B4f39b9:{NFSU2_TR(0x4f39b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f39beull));
TAIL_STATIC(0x543d40u,543);
}
B4f39be:L4f39be:{c.instructions+=2;NFSU2_TR(0x4f39be);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x451e768eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x451e768eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f39c4:{NFSU2_TR(0x4f39c4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f3b06;}}
}
B4f39ca:L4f39ca:{c.instructions+=1;NFSU2_TR(0x4f39ca);
if(r1(R+518)){{goto L4f3af9;}}
}
B4f39d0:L4f39d0:{c.instructions+=2;NFSU2_TR(0x4f39d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x33c42e03ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x33c42e03ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f39d6:{NFSU2_TR(0x4f39d6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f3a68;}}
}
B4f39dc:L4f39dc:{c.instructions+=1;NFSU2_TR(0x4f39dc);
if(r1(R+518)){{goto L4f3a5b;}}
}
B4f39de:L4f39de:{c.instructions+=2;NFSU2_TR(0x4f39de);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24dd40cfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f39e4:{NFSU2_TR(0x4f39e4);
if(r1(R+518)){{goto L4f3a09;}}
}
B4f39e6:L4f39e6:{c.instructions+=2;NFSU2_TR(0x4f39e6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x30ed2368ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x30ed2368ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x30ed2368ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f39ec:{NFSU2_TR(0x4f39ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3bad;}}
}
B4f39f2:L4f39f2:{c.instructions+=4;NFSU2_TR(0x4f39f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f39f5:{NFSU2_TR(0x4f39f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39f6:{NFSU2_TR(0x4f39f6);
u8 U[4];
w4(U+0,u32(0x24dd40cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f39fb:{NFSU2_TR(0x4f39fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3a00ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3a00:L4f3a00:{c.instructions+=5;NFSU2_TR(0x4f3a00);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3a03:{NFSU2_TR(0x4f3a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3a04:{NFSU2_TR(0x4f3a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3a05:{NFSU2_TR(0x4f3a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3a06:{NFSU2_TR(0x4f3a06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3a09:L4f3a09:{c.instructions+=2;NFSU2_TR(0x4f3a09);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3a10:{NFSU2_TR(0x4f3a10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3a44;}}
}
B4f3a12:L4f3a12:{c.instructions+=3;NFSU2_TR(0x4f3a12);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B4f3a17:{NFSU2_TR(0x4f3a17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3a19:{NFSU2_TR(0x4f3a19);
if(r1(R+518)){{goto L4f3a44;}}
}
B4f3a1b:L4f3a1b:{c.instructions+=3;NFSU2_TR(0x4f3a1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3a1d:{NFSU2_TR(0x4f3a1d);
w4(R+4,u32(0x85ba64ull));
}
B4f3a22:{NFSU2_TR(0x4f3a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3a27ull));
TAIL_STATIC(0x5287a0u,528);
}
B4f3a27:L4f3a27:{c.instructions+=2;NFSU2_TR(0x4f3a27);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3a29:{NFSU2_TR(0x4f3a29);
if(r1(R+518)){{goto L4f3a44;}}
}
B4f3a2b:L4f3a2b:{c.instructions+=2;NFSU2_TR(0x4f3a2b);
w4(R+4,u32(0x85ad40ull));
}
B4f3a30:{NFSU2_TR(0x4f3a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3a35ull));
TAIL_STATIC(0x54ca30u,54c);
}
B4f3a35:L4f3a35:{c.instructions+=3;NFSU2_TR(0x4f3a35);
u8 U[4];
w4(U+0,u32(0xd78d7bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3a3a:{NFSU2_TR(0x4f3a3a);
u8 U[4];
w4(U+0,u32(0xd78d7bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3a3f:{NFSU2_TR(0x4f3a3f);
{goto L4f3ac6;}
}
B4f3a44:L4f3a44:{c.instructions+=4;NFSU2_TR(0x4f3a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3a47:{NFSU2_TR(0x4f3a47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3a48:{NFSU2_TR(0x4f3a48);
u8 U[4];
w4(U+0,u32(0xd78d7bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3a4d:{NFSU2_TR(0x4f3a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3a52ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3a52:L4f3a52:{c.instructions+=5;NFSU2_TR(0x4f3a52);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3a55:{NFSU2_TR(0x4f3a55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3a56:{NFSU2_TR(0x4f3a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3a57:{NFSU2_TR(0x4f3a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3a58:{NFSU2_TR(0x4f3a58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3a5b:L4f3a5b:{c.instructions+=2;NFSU2_TR(0x4f3a5b);
__builtin_memmove((R+4),(R+28),4);
}
B4f3a5d:{NFSU2_TR(0x4f3a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3a62ull));
TAIL_STATIC(0x4a3dc0u,4a3);
}
B4f3a62:L4f3a62:{c.instructions+=4;NFSU2_TR(0x4f3a62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3a63:{NFSU2_TR(0x4f3a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3a64:{NFSU2_TR(0x4f3a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3a65:{NFSU2_TR(0x4f3a65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3a68:L4f3a68:{c.instructions+=2;NFSU2_TR(0x4f3a68);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3411395cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3a6e:{NFSU2_TR(0x4f3a6e);
if(r1(R+518)){{goto L4f3a89;}}
}
B4f3a70:L4f3a70:{c.instructions+=2;NFSU2_TR(0x4f3a70);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x35e413ddull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35e413ddull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35e413ddull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3a76:{NFSU2_TR(0x4f3a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3bad;}}
}
B4f3a7c:L4f3a7c:{c.instructions+=2;NFSU2_TR(0x4f3a7c);
__builtin_memmove((R+4),(R+28),4);
}
B4f3a7e:{NFSU2_TR(0x4f3a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3a83ull));
TAIL_STATIC(0x4a3e30u,4a3);
}
B4f3a83:L4f3a83:{c.instructions+=4;NFSU2_TR(0x4f3a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3a84:{NFSU2_TR(0x4f3a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3a85:{NFSU2_TR(0x4f3a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3a86:{NFSU2_TR(0x4f3a86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3a89:L4f3a89:{c.instructions+=2;NFSU2_TR(0x4f3a89);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3a90:{NFSU2_TR(0x4f3a90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3ae2;}}
}
B4f3a92:L4f3a92:{c.instructions+=3;NFSU2_TR(0x4f3a92);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B4f3a97:{NFSU2_TR(0x4f3a97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3a99:{NFSU2_TR(0x4f3a99);
if(r1(R+518)){{goto L4f3ae2;}}
}
B4f3a9b:L4f3a9b:{c.instructions+=3;NFSU2_TR(0x4f3a9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3a9d:{NFSU2_TR(0x4f3a9d);
w4(R+4,u32(0x85ba64ull));
}
B4f3aa2:{NFSU2_TR(0x4f3aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3aa7ull));
TAIL_STATIC(0x5287a0u,528);
}
B4f3aa7:L4f3aa7:{c.instructions+=2;NFSU2_TR(0x4f3aa7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3aa9:{NFSU2_TR(0x4f3aa9);
if(r1(R+518)){{goto L4f3ae2;}}
}
B4f3aab:L4f3aab:{c.instructions+=3;NFSU2_TR(0x4f3aab);
w4(R+4,u32(0x85ad40ull));
}
B4f3ab0:{NFSU2_TR(0x4f3ab0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3ab7:{NFSU2_TR(0x4f3ab7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3abcull));
TAIL_STATIC(0x54ca30u,54c);
}
B4f3abc:L4f3abc:{c.instructions+=2;NFSU2_TR(0x4f3abc);
u8 U[4];
w4(U+0,u32(0x35e413ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ac1:{NFSU2_TR(0x4f3ac1);
u8 U[4];
w4(U+0,u32(0x35e413ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ac6:L4f3ac6:{c.instructions+=7;NFSU2_TR(0x4f3ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f3ac9:{NFSU2_TR(0x4f3ac9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3acb:{NFSU2_TR(0x4f3acb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3acd:{NFSU2_TR(0x4f3acd);
u8 U[4];
w4(U+0,u32(0x441ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ad2:{NFSU2_TR(0x4f3ad2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ad3:{NFSU2_TR(0x4f3ad3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ad4:{NFSU2_TR(0x4f3ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3ad9ull));
TAIL_STATIC(0x4a3100u,4a3);
}
B4f3ad9:L4f3ad9:{c.instructions+=5;NFSU2_TR(0x4f3ad9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3adc:{NFSU2_TR(0x4f3adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3add:{NFSU2_TR(0x4f3add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3ade:{NFSU2_TR(0x4f3ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3adf:{NFSU2_TR(0x4f3adf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3ae2:L4f3ae2:{c.instructions+=4;NFSU2_TR(0x4f3ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3ae5:{NFSU2_TR(0x4f3ae5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ae6:{NFSU2_TR(0x4f3ae6);
u8 U[4];
w4(U+0,u32(0x35e413ddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3aeb:{NFSU2_TR(0x4f3aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3af0ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3af0:L4f3af0:{c.instructions+=5;NFSU2_TR(0x4f3af0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3af3:{NFSU2_TR(0x4f3af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3af4:{NFSU2_TR(0x4f3af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3af5:{NFSU2_TR(0x4f3af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3af6:{NFSU2_TR(0x4f3af6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3af9:L4f3af9:{c.instructions+=2;NFSU2_TR(0x4f3af9);
__builtin_memmove((R+4),(R+28),4);
}
B4f3afb:{NFSU2_TR(0x4f3afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3b00ull));
TAIL_STATIC(0x4a3df0u,4a3);
}
B4f3b00:L4f3b00:{c.instructions+=4;NFSU2_TR(0x4f3b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3b01:{NFSU2_TR(0x4f3b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3b02:{NFSU2_TR(0x4f3b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3b03:{NFSU2_TR(0x4f3b03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3b06:L4f3b06:{c.instructions+=2;NFSU2_TR(0x4f3b06);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xd78d7bf1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd78d7bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3b0c:{NFSU2_TR(0x4f3b0c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4f3b73;}}
}
B4f3b0e:L4f3b0e:{c.instructions+=1;NFSU2_TR(0x4f3b0e);
if(r1(R+518)){{goto L4f3b66;}}
}
B4f3b10:L4f3b10:{c.instructions+=2;NFSU2_TR(0x4f3b10);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3b16:{NFSU2_TR(0x4f3b16);
if(r1(R+518)){{goto L4f3b3b;}}
}
B4f3b18:L4f3b18:{c.instructions+=2;NFSU2_TR(0x4f3b18);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xb4623f67ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb4623f67ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb4623f67ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3b1e:{NFSU2_TR(0x4f3b1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3bad;}}
}
B4f3b24:L4f3b24:{c.instructions+=4;NFSU2_TR(0x4f3b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3b27:{NFSU2_TR(0x4f3b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3b28:{NFSU2_TR(0x4f3b28);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3b2d:{NFSU2_TR(0x4f3b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3b32ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3b32:L4f3b32:{c.instructions+=5;NFSU2_TR(0x4f3b32);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3b35:{NFSU2_TR(0x4f3b35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3b36:{NFSU2_TR(0x4f3b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3b37:{NFSU2_TR(0x4f3b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3b38:{NFSU2_TR(0x4f3b38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3b3b:L4f3b3b:{c.instructions+=3;NFSU2_TR(0x4f3b3b);
__builtin_memmove((R+24),gp(0x8363dc),4);
}
B4f3b41:{NFSU2_TR(0x4f3b41);
__builtin_memmove((R+4),(R+24),4);
}
B4f3b43:{NFSU2_TR(0x4f3b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3b48ull));
TAIL_STATIC(0x4a45e0u,4a4);
}
B4f3b48:L4f3b48:{c.instructions+=2;NFSU2_TR(0x4f3b48);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3b4a:{NFSU2_TR(0x4f3b4a);
if(r1(R+518)){{goto L4f3b59;}}
}
B4f3b4c:L4f3b4c:{c.instructions+=2;NFSU2_TR(0x4f3b4c);
__builtin_memmove((R+4),(R+24),4);
}
B4f3b4e:{NFSU2_TR(0x4f3b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3b53ull));
TAIL_STATIC(0x4ea240u,4ea);
}
B4f3b53:L4f3b53:{c.instructions+=1;NFSU2_TR(0x4f3b53);
__builtin_memmove((R+24),gp(0x8363dc),4);
}
B4f3b59:L4f3b59:{c.instructions+=2;NFSU2_TR(0x4f3b59);
__builtin_memmove((R+4),(R+24),4);
}
B4f3b5b:{NFSU2_TR(0x4f3b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3b60ull));
TAIL_STATIC(0x4c0020u,4c0);
}
B4f3b60:L4f3b60:{c.instructions+=4;NFSU2_TR(0x4f3b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3b61:{NFSU2_TR(0x4f3b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3b62:{NFSU2_TR(0x4f3b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3b63:{NFSU2_TR(0x4f3b63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3b66:L4f3b66:{c.instructions+=2;NFSU2_TR(0x4f3b66);
__builtin_memmove((R+4),(R+28),4);
}
B4f3b68:{NFSU2_TR(0x4f3b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3b6dull));
TAIL_STATIC(0x4a3e80u,4a3);
}
B4f3b6d:L4f3b6d:{c.instructions+=4;NFSU2_TR(0x4f3b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3b6e:{NFSU2_TR(0x4f3b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3b6f:{NFSU2_TR(0x4f3b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3b70:{NFSU2_TR(0x4f3b70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3b73:L4f3b73:{c.instructions+=2;NFSU2_TR(0x4f3b73);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe1a57d51ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3b79:{NFSU2_TR(0x4f3b79);
if(r1(R+518)){{goto L4f3b9e;}}
}
B4f3b7b:L4f3b7b:{c.instructions+=2;NFSU2_TR(0x4f3b7b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3b81:{NFSU2_TR(0x4f3b81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3bad;}}
}
B4f3b83:L4f3b83:{c.instructions+=3;NFSU2_TR(0x4f3b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3b89:{NFSU2_TR(0x4f3b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30ed2368ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f3b8e:{NFSU2_TR(0x4f3b8e);
if(r1(R+518)){{goto L4f3bc6;}}
}
B4f3b90:L4f3b90:{c.instructions+=2;NFSU2_TR(0x4f3b90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f3b95:{NFSU2_TR(0x4f3b95);
if(r1(R+518)){{goto L4f3bb3;}}
}
B4f3b97:L4f3b97:{c.instructions+=2;NFSU2_TR(0x4f3b97);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1a57d51ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1a57d51ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1a57d51ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3b9c:{NFSU2_TR(0x4f3b9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3bad;}}
}
B4f3b9e:L4f3b9e:{c.instructions+=4;NFSU2_TR(0x4f3b9e);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4f3ba4:{NFSU2_TR(0x4f3ba4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ba6:{NFSU2_TR(0x4f3ba6);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ba8:{NFSU2_TR(0x4f3ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3badull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4f3bad:L4f3bad:{c.instructions+=4;NFSU2_TR(0x4f3bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3bae:{NFSU2_TR(0x4f3bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3baf:{NFSU2_TR(0x4f3baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3bb0:{NFSU2_TR(0x4f3bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3bb3:L4f3bb3:{c.instructions+=3;NFSU2_TR(0x4f3bb3);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4f3bb9:{NFSU2_TR(0x4f3bb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bbb:{NFSU2_TR(0x4f3bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3bc0ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4f3bc0:L4f3bc0:{c.instructions+=4;NFSU2_TR(0x4f3bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3bc1:{NFSU2_TR(0x4f3bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3bc2:{NFSU2_TR(0x4f3bc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3bc3:{NFSU2_TR(0x4f3bc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3bc6:L4f3bc6:{c.instructions+=4;NFSU2_TR(0x4f3bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3bc9:{NFSU2_TR(0x4f3bc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bca:{NFSU2_TR(0x4f3bca);
u8 U[4];
w4(U+0,u32(0x24dd40cfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bcf:{NFSU2_TR(0x4f3bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3bd4ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4f3bd4:L4f3bd4:{c.instructions+=5;NFSU2_TR(0x4f3bd4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3bd7:{NFSU2_TR(0x4f3bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3bd8:{NFSU2_TR(0x4f3bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3bd9:{NFSU2_TR(0x4f3bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3bda:{NFSU2_TR(0x4f3bda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3be0:L4f3be0:{c.instructions+=12;NFSU2_TR(0x4f3be0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3be2:{NFSU2_TR(0x4f3be2);
u8 U[4];
w4(U+0,u32(0x7767c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3be7:{NFSU2_TR(0x4f3be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3bed:{NFSU2_TR(0x4f3bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bee:{NFSU2_TR(0x4f3bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3bf5:{NFSU2_TR(0x4f3bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bf6:{NFSU2_TR(0x4f3bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3bfa:{NFSU2_TR(0x4f3bfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bfb:{NFSU2_TR(0x4f3bfb);
__builtin_memmove((R+24),(R+4),4);
}
B4f3bfd:{NFSU2_TR(0x4f3bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3bfe:{NFSU2_TR(0x4f3bfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c02:{NFSU2_TR(0x4f3c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3c07ull));
TAIL_STATIC(0x551de0u,551);
}
B4f3c07:L4f3c07:{c.instructions+=25;NFSU2_TR(0x4f3c07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3c0a:{NFSU2_TR(0x4f3c0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f3c0c:{NFSU2_TR(0x4f3c0c);
u8 U[4];
w4(U+0,u32(0x797a8cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f3c12:{NFSU2_TR(0x4f3c12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c16:{NFSU2_TR(0x4f3c16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f3c18:{NFSU2_TR(0x4f3c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c1b:{NFSU2_TR(0x4f3c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3c1e:{NFSU2_TR(0x4f3c1e);
__builtin_memmove((R+8),gp(0x78dff0),4);
}
B4f3c24:{NFSU2_TR(0x4f3c24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f3c27:{NFSU2_TR(0x4f3c27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f3c2a:{NFSU2_TR(0x4f3c2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f3c2d:{NFSU2_TR(0x4f3c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c30:{NFSU2_TR(0x4f3c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c33:{NFSU2_TR(0x4f3c33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f3c36:{NFSU2_TR(0x4f3c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c39:{NFSU2_TR(0x4f3c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c3c:{NFSU2_TR(0x4f3c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c3f:{NFSU2_TR(0x4f3c3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f3c42:{NFSU2_TR(0x4f3c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c45:{NFSU2_TR(0x4f3c45);
__builtin_memmove((R+4),gp(0x851044),4);
}
B4f3c4b:{NFSU2_TR(0x4f3c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c4e:{NFSU2_TR(0x4f3c4e);
__builtin_memmove((R+4),(R+24),4);
}
B4f3c50:{NFSU2_TR(0x4f3c50);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3c55:{NFSU2_TR(0x4f3c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c58:{NFSU2_TR(0x4f3c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3c5dull));
TAIL_STATIC(0x4e9640u,4e9);
}
B4f3c5d:L4f3c5d:{c.instructions+=6;NFSU2_TR(0x4f3c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3c61:{NFSU2_TR(0x4f3c61);
__builtin_memmove((R+0),(R+24),4);
}
B4f3c63:{NFSU2_TR(0x4f3c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3c64:{NFSU2_TR(0x4f3c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3c6b:{NFSU2_TR(0x4f3c6b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3c6e:{NFSU2_TR(0x4f3c6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3c80:L4f3c80:{c.instructions+=3;NFSU2_TR(0x4f3c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3c81:{NFSU2_TR(0x4f3c81);
__builtin_memmove((R+24),(R+4),4);
}
B4f3c83:{NFSU2_TR(0x4f3c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3c88ull));
TAIL_STATIC(0x4e95a0u,4e9);
}
B4f3c88:L4f3c88:{c.instructions+=2;NFSU2_TR(0x4f3c88);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4f3c8d:{NFSU2_TR(0x4f3c8d);
if(r1(R+518)){{goto L4f3c98;}}
}
B4f3c8f:L4f3c8f:{c.instructions+=2;NFSU2_TR(0x4f3c8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3c90:{NFSU2_TR(0x4f3c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3c95ull));
TAIL_STATIC(0x575630u,575);
}
B4f3c95:L4f3c95:{c.instructions+=1;NFSU2_TR(0x4f3c95);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3c98:L4f3c98:{c.instructions+=3;NFSU2_TR(0x4f3c98);
__builtin_memmove((R+0),(R+24),4);
}
B4f3c9a:{NFSU2_TR(0x4f3c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3c9b:{NFSU2_TR(0x4f3c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3ca0:L4f3ca0:{c.instructions+=8;NFSU2_TR(0x4f3ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4f3ca3:{NFSU2_TR(0x4f3ca3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ca4:{NFSU2_TR(0x4f3ca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ca5:{NFSU2_TR(0x4f3ca5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ca6:{NFSU2_TR(0x4f3ca6);
__builtin_memmove((R+24),(R+4),4);
}
B4f3ca8:{NFSU2_TR(0x4f3ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f3cab:{NFSU2_TR(0x4f3cab);
u8 U[4];
w4(U+0,u32(0x79836cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cb0:{NFSU2_TR(0x4f3cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3cb5ull));
TAIL_STATIC(0x43db50u,43d);
}
B4f3cb5:L4f3cb5:{c.instructions+=3;NFSU2_TR(0x4f3cb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cb6:{NFSU2_TR(0x4f3cb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cb7:{NFSU2_TR(0x4f3cb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3cbcull));
TAIL_STATIC(0x537a60u,537);
}
B4f3cbc:L4f3cbc:{c.instructions+=4;NFSU2_TR(0x4f3cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f3cbf:{NFSU2_TR(0x4f3cbf);
u8 U[4];
w4(U+0,u32(0x79835cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cc4:{NFSU2_TR(0x4f3cc4);
__builtin_memmove((R+28),(R+0),4);
}
B4f3cc6:{NFSU2_TR(0x4f3cc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3ccbull));
TAIL_STATIC(0x43db50u,43d);
}
B4f3ccb:L4f3ccb:{c.instructions+=3;NFSU2_TR(0x4f3ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ccc:{NFSU2_TR(0x4f3ccc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ccd:{NFSU2_TR(0x4f3ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3cd2ull));
TAIL_STATIC(0x537a60u,537);
}
B4f3cd2:L4f3cd2:{c.instructions+=7;NFSU2_TR(0x4f3cd2);
__builtin_memmove((R+12),(R+0),4);
}
B4f3cd4:{NFSU2_TR(0x4f3cd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3cd8:{NFSU2_TR(0x4f3cd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cd9:{NFSU2_TR(0x4f3cd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3cdd:{NFSU2_TR(0x4f3cdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cde:{NFSU2_TR(0x4f3cde);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cdf:{NFSU2_TR(0x4f3cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3ce4ull));
TAIL_STATIC(0x51d070u,51d);
}
B4f3ce4:L4f3ce4:{c.instructions+=8;NFSU2_TR(0x4f3ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3ce8:{NFSU2_TR(0x4f3ce8);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3cec:{NFSU2_TR(0x4f3cec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ced:{NFSU2_TR(0x4f3ced);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3cf1:{NFSU2_TR(0x4f3cf1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cf2:{NFSU2_TR(0x4f3cf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3cf3:{NFSU2_TR(0x4f3cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3cf9:{NFSU2_TR(0x4f3cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3cfeull));
TAIL_STATIC(0x51d070u,51d);
}
B4f3cfe:L4f3cfe:{c.instructions+=8;NFSU2_TR(0x4f3cfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3d02:{NFSU2_TR(0x4f3d02);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3d06:{NFSU2_TR(0x4f3d06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d07:{NFSU2_TR(0x4f3d07);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3d0b:{NFSU2_TR(0x4f3d0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d0c:{NFSU2_TR(0x4f3d0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d0d:{NFSU2_TR(0x4f3d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3d13:{NFSU2_TR(0x4f3d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3d18ull));
TAIL_STATIC(0x51d730u,51d);
}
B4f3d18:L4f3d18:{c.instructions+=8;NFSU2_TR(0x4f3d18);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3d1c:{NFSU2_TR(0x4f3d1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3d20:{NFSU2_TR(0x4f3d20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d21:{NFSU2_TR(0x4f3d21);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3d25:{NFSU2_TR(0x4f3d25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d26:{NFSU2_TR(0x4f3d26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d27:{NFSU2_TR(0x4f3d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3d2d:{NFSU2_TR(0x4f3d2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3d32ull));
TAIL_STATIC(0x51d730u,51d);
}
B4f3d32:L4f3d32:{c.instructions+=9;NFSU2_TR(0x4f3d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3d36:{NFSU2_TR(0x4f3d36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B4f3d39:{NFSU2_TR(0x4f3d39);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3d3d:{NFSU2_TR(0x4f3d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d3e:{NFSU2_TR(0x4f3d3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3d42:{NFSU2_TR(0x4f3d42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d43:{NFSU2_TR(0x4f3d43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d44:{NFSU2_TR(0x4f3d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3d4a:{NFSU2_TR(0x4f3d4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3d4full));
TAIL_STATIC(0x51d070u,51d);
}
B4f3d4f:L4f3d4f:{c.instructions+=8;NFSU2_TR(0x4f3d4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3d53:{NFSU2_TR(0x4f3d53);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3d57:{NFSU2_TR(0x4f3d57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d58:{NFSU2_TR(0x4f3d58);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3d5c:{NFSU2_TR(0x4f3d5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d5d:{NFSU2_TR(0x4f3d5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d5e:{NFSU2_TR(0x4f3d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3d64:{NFSU2_TR(0x4f3d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3d69ull));
TAIL_STATIC(0x51d070u,51d);
}
B4f3d69:L4f3d69:{c.instructions+=8;NFSU2_TR(0x4f3d69);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3d6d:{NFSU2_TR(0x4f3d6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3d71:{NFSU2_TR(0x4f3d71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d72:{NFSU2_TR(0x4f3d72);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3d76:{NFSU2_TR(0x4f3d76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d77:{NFSU2_TR(0x4f3d77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d78:{NFSU2_TR(0x4f3d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3d7e:{NFSU2_TR(0x4f3d7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3d83ull));
TAIL_STATIC(0x51d730u,51d);
}
B4f3d83:L4f3d83:{c.instructions+=8;NFSU2_TR(0x4f3d83);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3d87:{NFSU2_TR(0x4f3d87);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3d8b:{NFSU2_TR(0x4f3d8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d8c:{NFSU2_TR(0x4f3d8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f3d90:{NFSU2_TR(0x4f3d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d91:{NFSU2_TR(0x4f3d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3d97:{NFSU2_TR(0x4f3d97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3d98:{NFSU2_TR(0x4f3d98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3d9dull));
TAIL_STATIC(0x51d730u,51d);
}
B4f3d9d:L4f3d9d:{c.instructions+=11;NFSU2_TR(0x4f3d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3da1:{NFSU2_TR(0x4f3da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3da7:{NFSU2_TR(0x4f3da7);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4f3dad:{NFSU2_TR(0x4f3dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3db3:{NFSU2_TR(0x4f3db3);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4f3db9:{NFSU2_TR(0x4f3db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3dbf:{NFSU2_TR(0x4f3dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3dc5:{NFSU2_TR(0x4f3dc5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3dc8:{NFSU2_TR(0x4f3dc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3dc9:{NFSU2_TR(0x4f3dc9);
__builtin_memmove((R+4),(R+24),4);
}
B4f3dcb:{NFSU2_TR(0x4f3dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3dd0ull));
TAIL_STATIC(0x4e9c00u,4e9);
}
B4f3dd0:L4f3dd0:{c.instructions+=5;NFSU2_TR(0x4f3dd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3dd1:{NFSU2_TR(0x4f3dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3dd2:{NFSU2_TR(0x4f3dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f3dd3:{NFSU2_TR(0x4f3dd3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f3dd6:{NFSU2_TR(0x4f3dd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3de0:L4f3de0:{c.instructions+=9;NFSU2_TR(0x4f3de0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4f3de5:{NFSU2_TR(0x4f3de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f3de8:{NFSU2_TR(0x4f3de8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3de9:{NFSU2_TR(0x4f3de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f3ded:{NFSU2_TR(0x4f3ded);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3df3:{NFSU2_TR(0x4f3df3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3df4:{NFSU2_TR(0x4f3df4);
__builtin_memmove((R+24),(R+4),4);
}
B4f3df6:{NFSU2_TR(0x4f3df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3dfc:{NFSU2_TR(0x4f3dfc);
if(r1(R+518)){{goto L4f3e18;}}
}
B4f3dfe:L4f3dfe:{c.instructions+=2;NFSU2_TR(0x4f3dfe);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3e04:{NFSU2_TR(0x4f3e04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3e31;}}
}
B4f3e06:L4f3e06:{c.instructions+=5;NFSU2_TR(0x4f3e06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3e09:{NFSU2_TR(0x4f3e09);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4f3e0a:{NFSU2_TR(0x4f3e0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f3e0c:{NFSU2_TR(0x4f3e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3e12:{NFSU2_TR(0x4f3e12);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4f3e2b;}}
}
B4f3e14:L4f3e14:{c.instructions+=2;NFSU2_TR(0x4f3e14);
__builtin_memmove((R+0),(R+8),4);
}
B4f3e16:{NFSU2_TR(0x4f3e16);
{goto L4f3e2b;}
}
B4f3e18:L4f3e18:{c.instructions+=7;NFSU2_TR(0x4f3e18);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3e1b:{NFSU2_TR(0x4f3e1b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4f3e1d:{NFSU2_TR(0x4f3e1d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4f3e1f:{NFSU2_TR(0x4f3e1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B4f3e22:{NFSU2_TR(0x4f3e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3e28:{NFSU2_TR(0x4f3e28);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4f3e29:{NFSU2_TR(0x4f3e29);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B4f3e2b:L4f3e2b:{c.instructions+=1;NFSU2_TR(0x4f3e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3e31:L4f3e31:{c.instructions+=2;NFSU2_TR(0x4f3e31);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4f3e37:{NFSU2_TR(0x4f3e37);
if(r1(R+518)){{goto L4f3e89;}}
}
B4f3e39:L4f3e39:{c.instructions+=6;NFSU2_TR(0x4f3e39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e3a:{NFSU2_TR(0x4f3e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f3e3d:{NFSU2_TR(0x4f3e3d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e3f:{NFSU2_TR(0x4f3e3f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e41:{NFSU2_TR(0x4f3e41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e42:{NFSU2_TR(0x4f3e42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3e47ull));
TAIL_STATIC(0x50d260u,50d);
}
B4f3e47:L4f3e47:{c.instructions+=3;NFSU2_TR(0x4f3e47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e48:{NFSU2_TR(0x4f3e48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e49:{NFSU2_TR(0x4f3e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3e4eull));
TAIL_STATIC(0x51de60u,51d);
}
B4f3e4e:L4f3e4e:{c.instructions+=7;NFSU2_TR(0x4f3e4e);
w4(R+0,u32(0x1ull));
}
B4f3e53:{NFSU2_TR(0x4f3e53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4f3e56:{NFSU2_TR(0x4f3e56);
__builtin_memmove((R+4),(R+24),4);
}
B4f3e58:{NFSU2_TR(0x4f3e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3e5e:{NFSU2_TR(0x4f3e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3e64:{NFSU2_TR(0x4f3e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3e6e:{NFSU2_TR(0x4f3e6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3e73ull));
TAIL_STATIC(0x52fd40u,52f);
}
B4f3e73:L4f3e73:{c.instructions+=2;NFSU2_TR(0x4f3e73);
__builtin_memmove((R+4),(R+24),4);
}
B4f3e75:{NFSU2_TR(0x4f3e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3e7aull));
TAIL_STATIC(0x4bff00u,4bf);
}
B4f3e7a:L4f3e7a:{c.instructions+=3;NFSU2_TR(0x4f3e7a);
__builtin_memmove((R+4),(R+24),4);
}
B4f3e7c:{NFSU2_TR(0x4f3e7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3e83:{NFSU2_TR(0x4f3e83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3e88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f3ca0u);}goto L4f3ca0;}
}
B4f3e88:L4f3e88:{c.instructions+=1;NFSU2_TR(0x4f3e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f3e89:L4f3e89:{c.instructions+=5;NFSU2_TR(0x4f3e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3e8f:{NFSU2_TR(0x4f3e8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e90:{NFSU2_TR(0x4f3e90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3e91:{NFSU2_TR(0x4f3e91);
__builtin_memmove((R+4),(R+24),4);
}
B4f3e93:{NFSU2_TR(0x4f3e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3e98ull));
TAIL_STATIC(0x4a4480u,4a4);
}
B4f3e98:L4f3e98:{c.instructions+=3;NFSU2_TR(0x4f3e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3e99:{NFSU2_TR(0x4f3e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f3e9a:{NFSU2_TR(0x4f3e9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f3ea0:L4f3ea0:{c.instructions+=35;NFSU2_TR(0x4f3ea0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ea2:{NFSU2_TR(0x4f3ea2);
u8 U[4];
w4(U+0,u32(0x7767e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3ea7:{NFSU2_TR(0x4f3ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f3ead:{NFSU2_TR(0x4f3ead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3eae:{NFSU2_TR(0x4f3eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3eb5:{NFSU2_TR(0x4f3eb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3eb6:{NFSU2_TR(0x4f3eb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3eb7:{NFSU2_TR(0x4f3eb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3eb8:{NFSU2_TR(0x4f3eb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3eb9:{NFSU2_TR(0x4f3eb9);
__builtin_memmove((R+28),(R+4),4);
}
B4f3ebb:{NFSU2_TR(0x4f3ebb);
u8 U[4];
w4(U+0,u32(0x797b7cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4f3ec1:{NFSU2_TR(0x4f3ec1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4f3ec3:{NFSU2_TR(0x4f3ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ec6:{NFSU2_TR(0x4f3ec6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f3ec9:{NFSU2_TR(0x4f3ec9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f3ecb:{NFSU2_TR(0x4f3ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ece:{NFSU2_TR(0x4f3ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ed1:{NFSU2_TR(0x4f3ed1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ed5:{NFSU2_TR(0x4f3ed5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f3ed8:{NFSU2_TR(0x4f3ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3edb:{NFSU2_TR(0x4f3edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ede:{NFSU2_TR(0x4f3ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ee5:{NFSU2_TR(0x4f3ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3eec:{NFSU2_TR(0x4f3eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w4(U+4,u32(0x7964a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ef3:{NFSU2_TR(0x4f3ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ef6:{NFSU2_TR(0x4f3ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3ef9:{NFSU2_TR(0x4f3ef9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3efd:{NFSU2_TR(0x4f3efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f3f00:{NFSU2_TR(0x4f3f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f04:{NFSU2_TR(0x4f3f04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f3f06:{NFSU2_TR(0x4f3f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f09:{NFSU2_TR(0x4f3f09);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4f3f0e:{NFSU2_TR(0x4f3f0e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3f11:{NFSU2_TR(0x4f3f11);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f3f16:{NFSU2_TR(0x4f3f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3f2b;}}
}
B4f3f18:L4f3f18:{c.instructions+=2;NFSU2_TR(0x4f3f18);
u8 U[8];
__builtin_memmove((U+0),gp(0x863470),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3f1e:{NFSU2_TR(0x4f3f1e);
if(r1(R+518)){{goto L4f3f47;}}
}
B4f3f20:L4f3f20:{c.instructions+=2;NFSU2_TR(0x4f3f20);
u8 U[8];
__builtin_memmove((U+0),gp(0x85ef4c),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3f27:{NFSU2_TR(0x4f3f27);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4f3f6a;}}
}
B4f3f29:L4f3f29:{c.instructions+=1;NFSU2_TR(0x4f3f29);
{goto L4f3f47;}
}
B4f3f2b:L4f3f2b:{c.instructions+=2;NFSU2_TR(0x4f3f2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3f2e:{NFSU2_TR(0x4f3f2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3f39;}}
}
B4f3f30:L4f3f30:{c.instructions+=2;NFSU2_TR(0x4f3f30);
u8 U[2];
__builtin_memmove((U+0),gp(0x850098),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f3f37:{NFSU2_TR(0x4f3f37);
{goto L4f3f45;}
}
B4f3f39:L4f3f39:{c.instructions+=2;NFSU2_TR(0x4f3f39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3f3c:{NFSU2_TR(0x4f3f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f3f47;}}
}
B4f3f3e:L4f3f3e:{c.instructions+=1;NFSU2_TR(0x4f3f3e);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3f45:L4f3f45:{c.instructions+=1;NFSU2_TR(0x4f3f45);
if(r1(R+518)){{goto L4f3f6a;}}
}
B4f3f47:L4f3f47:{c.instructions+=2;NFSU2_TR(0x4f3f47);
__builtin_memmove((R+12),gp(0x7f4570),4);
}
B4f3f4d:{NFSU2_TR(0x4f3f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3f52ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f3f52:L4f3f52:{c.instructions+=2;NFSU2_TR(0x4f3f52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f3f54:{NFSU2_TR(0x4f3f54);
if(r1(R+518)){{goto L4f3f5b;}}
}
B4f3f56:L4f3f56:{c.instructions+=2;NFSU2_TR(0x4f3f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f59:{NFSU2_TR(0x4f3f59);
{goto L4f3f5d;}
}
B4f3f5b:L4f3f5b:{c.instructions+=1;NFSU2_TR(0x4f3f5b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f3f5d:L4f3f5d:{c.instructions+=5;NFSU2_TR(0x4f3f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3f60:{NFSU2_TR(0x4f3f60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f3f62:{NFSU2_TR(0x4f3f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f65:{NFSU2_TR(0x4f3f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f68:{NFSU2_TR(0x4f3f68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f3f6a:L4f3f6a:{c.instructions+=2;NFSU2_TR(0x4f3f6a);
__builtin_memmove((R+4),(R+28),4);
}
B4f3f6c:{NFSU2_TR(0x4f3f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3f71ull));
TAIL_STATIC(0x4c0050u,4c0);
}
B4f3f71:L4f3f71:{c.instructions+=2;NFSU2_TR(0x4f3f71);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3f73:{NFSU2_TR(0x4f3f73);
if(r1(R+518)){{goto L4f3f98;}}
}
B4f3f75:L4f3f75:{c.instructions+=2;NFSU2_TR(0x4f3f75);
__builtin_memmove((R+12),gp(0x7f4574),4);
}
B4f3f7b:{NFSU2_TR(0x4f3f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3f80ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f3f80:L4f3f80:{c.instructions+=2;NFSU2_TR(0x4f3f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f3f82:{NFSU2_TR(0x4f3f82);
if(r1(R+518)){{goto L4f3f89;}}
}
B4f3f84:L4f3f84:{c.instructions+=2;NFSU2_TR(0x4f3f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f87:{NFSU2_TR(0x4f3f87);
{goto L4f3f8b;}
}
B4f3f89:L4f3f89:{c.instructions+=1;NFSU2_TR(0x4f3f89);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f3f8b:L4f3f8b:{c.instructions+=5;NFSU2_TR(0x4f3f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3f8e:{NFSU2_TR(0x4f3f8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f3f90:{NFSU2_TR(0x4f3f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f93:{NFSU2_TR(0x4f3f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3f96:{NFSU2_TR(0x4f3f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f3f98:L4f3f98:{c.instructions+=2;NFSU2_TR(0x4f3f98);
__builtin_memmove((R+4),(R+28),4);
}
B4f3f9a:{NFSU2_TR(0x4f3f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3f9full));
TAIL_STATIC(0x4c00c0u,4c0);
}
B4f3f9f:L4f3f9f:{c.instructions+=2;NFSU2_TR(0x4f3f9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3fa1:{NFSU2_TR(0x4f3fa1);
if(r1(R+518)){{goto L4f3fc6;}}
}
B4f3fa3:L4f3fa3:{c.instructions+=2;NFSU2_TR(0x4f3fa3);
__builtin_memmove((R+12),gp(0x7f4578),4);
}
B4f3fa9:{NFSU2_TR(0x4f3fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3faeull));
TAIL_STATIC(0x440ec0u,440);
}
B4f3fae:L4f3fae:{c.instructions+=2;NFSU2_TR(0x4f3fae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f3fb0:{NFSU2_TR(0x4f3fb0);
if(r1(R+518)){{goto L4f3fb7;}}
}
B4f3fb2:L4f3fb2:{c.instructions+=2;NFSU2_TR(0x4f3fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3fb5:{NFSU2_TR(0x4f3fb5);
{goto L4f3fb9;}
}
B4f3fb7:L4f3fb7:{c.instructions+=1;NFSU2_TR(0x4f3fb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f3fb9:L4f3fb9:{c.instructions+=5;NFSU2_TR(0x4f3fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f3fbc:{NFSU2_TR(0x4f3fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f3fbe:{NFSU2_TR(0x4f3fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3fc1:{NFSU2_TR(0x4f3fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f3fc4:{NFSU2_TR(0x4f3fc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f3fc6:L4f3fc6:{c.instructions+=3;NFSU2_TR(0x4f3fc6);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4f3fcb:{NFSU2_TR(0x4f3fcb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3fcd:{NFSU2_TR(0x4f3fcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f4027u,4f4);}
}
B4f3fcf:L4f3fcf:{c.instructions+=2;NFSU2_TR(0x4f3fcf);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f3fd6:{NFSU2_TR(0x4f3fd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4f4027u,4f4);}
}
B4f3fd8:L4f3fd8:{c.instructions+=3;NFSU2_TR(0x4f3fd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f3fda:{NFSU2_TR(0x4f3fda);
w4(R+4,u32(0x85ba64ull));
}
B4f3fdf:{NFSU2_TR(0x4f3fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3fe4ull));
TAIL_STATIC(0x5287a0u,528);
}
B4f3fe4:L4f3fe4:{c.instructions+=2;NFSU2_TR(0x4f3fe4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f3fe6:{NFSU2_TR(0x4f3fe6);
if(r1(R+518)){TAIL_STATIC(0x4f4027u,4f4);}
}
B4f3fe8:L4f3fe8:{c.instructions+=2;NFSU2_TR(0x4f3fe8);
w4(R+4,u32(0x85ba64ull));
}
B4f3fed:{NFSU2_TR(0x4f3fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f3ff2ull));
TAIL_STATIC(0x500db0u,500);
}
B4f3ff2:L4f3ff2:{c.instructions+=2;NFSU2_TR(0x4f3ff2);
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
B4f3ff4:{NFSU2_TR(0x4f3ff4);
if(r1(R+518)){TAIL_STATIC(0x4f4027u,4f4);}
}
B4f3ff6:L4f3ff6:{c.instructions+=2;NFSU2_TR(0x4f3ff6);
w4(R+4,u32(0x85ba64ull));
}
B4f3ffb:{NFSU2_TR(0x4f3ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f4000ull));
TAIL_STATIC(0x500dd0u,500);
}
XIT:NFSU2_TR_EXIT(0x4f3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
