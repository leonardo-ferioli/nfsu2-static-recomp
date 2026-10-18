#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 page_5d3(Cpu& c){return body_5d3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d3001:goto L5d3001;
case 0x5d3005:c.instructions+=9;goto B5d3005;
case 0x5d3009:c.instructions+=8;goto B5d3009;
case 0x5d300f:c.instructions+=7;goto B5d300f;
case 0x5d3013:c.instructions+=6;goto B5d3013;
case 0x5d3015:c.instructions+=5;goto B5d3015;
case 0x5d3018:c.instructions+=4;goto B5d3018;
case 0x5d301b:c.instructions+=3;goto B5d301b;
case 0x5d301f:c.instructions+=2;goto B5d301f;
case 0x5d3021:c.instructions+=1;goto B5d3021;
case 0x5d3023:goto L5d3023;
case 0x5d3027:c.instructions+=5;goto B5d3027;
case 0x5d302b:c.instructions+=4;goto B5d302b;
case 0x5d302d:c.instructions+=3;goto B5d302d;
case 0x5d3031:c.instructions+=2;goto B5d3031;
case 0x5d3034:c.instructions+=1;goto B5d3034;
case 0x5d3037:goto L5d3037;
case 0x5d303a:c.instructions+=1;goto B5d303a;
case 0x5d3040:goto L5d3040;
case 0x5d3043:c.instructions+=40;goto B5d3043;
case 0x5d3047:c.instructions+=39;goto B5d3047;
case 0x5d3049:c.instructions+=38;goto B5d3049;
case 0x5d304c:c.instructions+=37;goto B5d304c;
case 0x5d304f:c.instructions+=36;goto B5d304f;
case 0x5d3053:c.instructions+=35;goto B5d3053;
case 0x5d3057:c.instructions+=34;goto B5d3057;
case 0x5d305b:c.instructions+=33;goto B5d305b;
case 0x5d305f:c.instructions+=32;goto B5d305f;
case 0x5d3063:c.instructions+=31;goto B5d3063;
case 0x5d3067:c.instructions+=30;goto B5d3067;
case 0x5d306b:c.instructions+=29;goto B5d306b;
case 0x5d3071:c.instructions+=28;goto B5d3071;
case 0x5d3075:c.instructions+=27;goto B5d3075;
case 0x5d3079:c.instructions+=26;goto B5d3079;
case 0x5d307f:c.instructions+=25;goto B5d307f;
case 0x5d3083:c.instructions+=24;goto B5d3083;
case 0x5d3087:c.instructions+=23;goto B5d3087;
case 0x5d308d:c.instructions+=22;goto B5d308d;
case 0x5d3091:c.instructions+=21;goto B5d3091;
case 0x5d3093:c.instructions+=20;goto B5d3093;
case 0x5d3095:c.instructions+=19;goto B5d3095;
case 0x5d3097:c.instructions+=18;goto B5d3097;
case 0x5d309b:c.instructions+=17;goto B5d309b;
case 0x5d309d:c.instructions+=16;goto B5d309d;
case 0x5d30a0:c.instructions+=15;goto B5d30a0;
case 0x5d30a4:c.instructions+=14;goto B5d30a4;
case 0x5d30a8:c.instructions+=13;goto B5d30a8;
case 0x5d30ab:c.instructions+=12;goto B5d30ab;
case 0x5d30af:c.instructions+=11;goto B5d30af;
case 0x5d30b1:c.instructions+=10;goto B5d30b1;
case 0x5d30b3:c.instructions+=9;goto B5d30b3;
case 0x5d30b5:c.instructions+=8;goto B5d30b5;
case 0x5d30b7:c.instructions+=7;goto B5d30b7;
case 0x5d30bb:c.instructions+=6;goto B5d30bb;
case 0x5d30be:c.instructions+=5;goto B5d30be;
case 0x5d30c2:c.instructions+=4;goto B5d30c2;
case 0x5d30c6:c.instructions+=3;goto B5d30c6;
case 0x5d30c9:c.instructions+=2;goto B5d30c9;
case 0x5d30cc:c.instructions+=1;goto B5d30cc;
case 0x5d30d0:goto L5d30d0;
case 0x5d30d1:c.instructions+=11;goto B5d30d1;
case 0x5d30d3:c.instructions+=10;goto B5d30d3;
case 0x5d30d6:c.instructions+=9;goto B5d30d6;
case 0x5d30dc:c.instructions+=8;goto B5d30dc;
case 0x5d30dd:c.instructions+=7;goto B5d30dd;
case 0x5d30de:c.instructions+=6;goto B5d30de;
case 0x5d30df:c.instructions+=5;goto B5d30df;
case 0x5d30e1:c.instructions+=4;goto B5d30e1;
case 0x5d30e4:c.instructions+=3;goto B5d30e4;
case 0x5d30eb:c.instructions+=2;goto B5d30eb;
case 0x5d30ed:c.instructions+=1;goto B5d30ed;
case 0x5d30f3:goto L5d30f3;
case 0x5d30f7:c.instructions+=1;goto B5d30f7;
case 0x5d30fc:goto L5d30fc;
case 0x5d3102:c.instructions+=6;goto B5d3102;
case 0x5d3108:c.instructions+=5;goto B5d3108;
case 0x5d3109:c.instructions+=4;goto B5d3109;
case 0x5d310b:c.instructions+=3;goto B5d310b;
case 0x5d310f:c.instructions+=2;goto B5d310f;
case 0x5d3117:c.instructions+=1;goto B5d3117;
case 0x5d311d:goto L5d311d;
case 0x5d3123:c.instructions+=2;goto B5d3123;
case 0x5d3128:c.instructions+=1;goto B5d3128;
case 0x5d3130:goto L5d3130;
case 0x5d3134:c.instructions+=5;goto B5d3134;
case 0x5d3135:c.instructions+=4;goto B5d3135;
case 0x5d3139:c.instructions+=3;goto B5d3139;
case 0x5d313a:c.instructions+=2;goto B5d313a;
case 0x5d313d:c.instructions+=1;goto B5d313d;
case 0x5d3142:goto L5d3142;
case 0x5d3146:c.instructions+=5;goto B5d3146;
case 0x5d3147:c.instructions+=4;goto B5d3147;
case 0x5d314b:c.instructions+=3;goto B5d314b;
case 0x5d314c:c.instructions+=2;goto B5d314c;
case 0x5d314f:c.instructions+=1;goto B5d314f;
case 0x5d3154:goto L5d3154;
case 0x5d3158:c.instructions+=16;goto B5d3158;
case 0x5d315c:c.instructions+=15;goto B5d315c;
case 0x5d315f:c.instructions+=14;goto B5d315f;
case 0x5d3162:c.instructions+=13;goto B5d3162;
case 0x5d3164:c.instructions+=12;goto B5d3164;
case 0x5d3166:c.instructions+=11;goto B5d3166;
case 0x5d316a:c.instructions+=10;goto B5d316a;
case 0x5d316e:c.instructions+=9;goto B5d316e;
case 0x5d3172:c.instructions+=8;goto B5d3172;
case 0x5d3176:c.instructions+=7;goto B5d3176;
case 0x5d317a:c.instructions+=6;goto B5d317a;
case 0x5d317e:c.instructions+=5;goto B5d317e;
case 0x5d3182:c.instructions+=4;goto B5d3182;
case 0x5d3186:c.instructions+=3;goto B5d3186;
case 0x5d318a:c.instructions+=2;goto B5d318a;
case 0x5d318e:c.instructions+=1;goto B5d318e;
case 0x5d3190:goto L5d3190;
case 0x5d3192:c.instructions+=1;goto B5d3192;
case 0x5d3194:goto L5d3194;
case 0x5d3196:goto L5d3196;
case 0x5d3198:c.instructions+=1;goto B5d3198;
case 0x5d319a:goto L5d319a;
case 0x5d319c:c.instructions+=1;goto B5d319c;
case 0x5d319e:goto L5d319e;
case 0x5d31a0:goto L5d31a0;
case 0x5d31a2:c.instructions+=19;goto B5d31a2;
case 0x5d31a4:c.instructions+=18;goto B5d31a4;
case 0x5d31ab:c.instructions+=17;goto B5d31ab;
case 0x5d31b2:c.instructions+=16;goto B5d31b2;
case 0x5d31b9:c.instructions+=15;goto B5d31b9;
case 0x5d31c0:c.instructions+=14;goto B5d31c0;
case 0x5d31c3:c.instructions+=13;goto B5d31c3;
case 0x5d31ca:c.instructions+=12;goto B5d31ca;
case 0x5d31cd:c.instructions+=11;goto B5d31cd;
case 0x5d31cf:c.instructions+=10;goto B5d31cf;
case 0x5d31d1:c.instructions+=9;goto B5d31d1;
case 0x5d31d6:c.instructions+=8;goto B5d31d6;
case 0x5d31dd:c.instructions+=7;goto B5d31dd;
case 0x5d31e4:c.instructions+=6;goto B5d31e4;
case 0x5d31eb:c.instructions+=5;goto B5d31eb;
case 0x5d31f2:c.instructions+=4;goto B5d31f2;
case 0x5d31f3:c.instructions+=3;goto B5d31f3;
case 0x5d31f7:c.instructions+=2;goto B5d31f7;
case 0x5d31f8:c.instructions+=1;goto B5d31f8;
case 0x5d31fd:goto L5d31fd;
case 0x5d3201:c.instructions+=7;goto B5d3201;
case 0x5d3207:c.instructions+=6;goto B5d3207;
case 0x5d3208:c.instructions+=5;goto B5d3208;
case 0x5d320b:c.instructions+=4;goto B5d320b;
case 0x5d320c:c.instructions+=3;goto B5d320c;
case 0x5d320e:c.instructions+=2;goto B5d320e;
case 0x5d3212:c.instructions+=1;goto B5d3212;
case 0x5d3218:goto L5d3218;
case 0x5d3219:c.instructions+=5;goto B5d3219;
case 0x5d321a:c.instructions+=4;goto B5d321a;
case 0x5d321b:c.instructions+=3;goto B5d321b;
case 0x5d321d:c.instructions+=2;goto B5d321d;
case 0x5d321e:c.instructions+=1;goto B5d321e;
case 0x5d3230:goto L5d3230;
case 0x5d3232:c.instructions+=2;goto B5d3232;
case 0x5d3234:c.instructions+=1;goto B5d3234;
case 0x5d3236:goto L5d3236;
case 0x5d3239:c.instructions+=2;goto B5d3239;
case 0x5d323b:c.instructions+=1;goto B5d323b;
case 0x5d323d:goto L5d323d;
case 0x5d3243:c.instructions+=1;goto B5d3243;
case 0x5d324a:goto L5d324a;
case 0x5d3250:goto L5d3250;
case 0x5d3255:c.instructions+=2;goto B5d3255;
case 0x5d3257:c.instructions+=1;goto B5d3257;
case 0x5d3259:goto L5d3259;
case 0x5d325d:c.instructions+=5;goto B5d325d;
case 0x5d325f:c.instructions+=4;goto B5d325f;
case 0x5d3264:c.instructions+=3;goto B5d3264;
case 0x5d3265:c.instructions+=2;goto B5d3265;
case 0x5d326a:c.instructions+=1;goto B5d326a;
case 0x5d326f:goto L5d326f;
case 0x5d3274:c.instructions+=4;goto B5d3274;
case 0x5d3277:c.instructions+=3;goto B5d3277;
case 0x5d327a:c.instructions+=2;goto B5d327a;
case 0x5d327d:c.instructions+=1;goto B5d327d;
case 0x5d3280:goto L5d3280;
case 0x5d3281:c.instructions+=4;goto B5d3281;
case 0x5d3282:c.instructions+=3;goto B5d3282;
case 0x5d3287:c.instructions+=2;goto B5d3287;
case 0x5d328c:c.instructions+=1;goto B5d328c;
case 0x5d3290:goto L5d3290;
case 0x5d3292:c.instructions+=3;goto B5d3292;
case 0x5d3294:c.instructions+=2;goto B5d3294;
case 0x5d329a:c.instructions+=1;goto B5d329a;
case 0x5d329c:goto L5d329c;
case 0x5d329e:c.instructions+=3;goto B5d329e;
case 0x5d32a0:c.instructions+=2;goto B5d32a0;
case 0x5d32a1:c.instructions+=1;goto B5d32a1;
case 0x5d32a6:goto L5d32a6;
case 0x5d32a9:c.instructions+=2;goto B5d32a9;
case 0x5d32aa:c.instructions+=1;goto B5d32aa;
case 0x5d32af:goto L5d32af;
case 0x5d32b2:c.instructions+=1;goto B5d32b2;
case 0x5d32b4:goto L5d32b4;
case 0x5d32ba:c.instructions+=3;goto B5d32ba;
case 0x5d32bd:c.instructions+=2;goto B5d32bd;
case 0x5d32c3:c.instructions+=1;goto B5d32c3;
case 0x5d32c5:goto L5d32c5;
case 0x5d32ca:c.instructions+=3;goto B5d32ca;
case 0x5d32d4:c.instructions+=2;goto B5d32d4;
case 0x5d32de:c.instructions+=1;goto B5d32de;
case 0x5d32e3:goto L5d32e3;
case 0x5d32e4:c.instructions+=2;goto B5d32e4;
case 0x5d32e9:c.instructions+=1;goto B5d32e9;
case 0x5d32ee:goto L5d32ee;
case 0x5d32f1:c.instructions+=3;goto B5d32f1;
case 0x5d32f2:c.instructions+=2;goto B5d32f2;
case 0x5d32f3:c.instructions+=1;goto B5d32f3;
case 0x5d3300:goto L5d3300;
case 0x5d3305:c.instructions+=2;goto B5d3305;
case 0x5d3307:c.instructions+=1;goto B5d3307;
case 0x5d3309:goto L5d3309;
case 0x5d330b:c.instructions+=4;goto B5d330b;
case 0x5d3310:c.instructions+=3;goto B5d3310;
case 0x5d3312:c.instructions+=2;goto B5d3312;
case 0x5d3314:c.instructions+=1;goto B5d3314;
case 0x5d3319:goto L5d3319;
case 0x5d331c:c.instructions+=1;goto B5d331c;
case 0x5d3321:goto L5d3321;
case 0x5d3330:goto L5d3330;
case 0x5d3336:c.instructions+=18;goto B5d3336;
case 0x5d333a:c.instructions+=17;goto B5d333a;
case 0x5d333d:c.instructions+=16;goto B5d333d;
case 0x5d3340:c.instructions+=15;goto B5d3340;
case 0x5d3342:c.instructions+=14;goto B5d3342;
case 0x5d3345:c.instructions+=13;goto B5d3345;
case 0x5d3347:c.instructions+=12;goto B5d3347;
case 0x5d334a:c.instructions+=11;goto B5d334a;
case 0x5d334d:c.instructions+=10;goto B5d334d;
case 0x5d3350:c.instructions+=9;goto B5d3350;
case 0x5d3353:c.instructions+=8;goto B5d3353;
case 0x5d3355:c.instructions+=7;goto B5d3355;
case 0x5d3357:c.instructions+=6;goto B5d3357;
case 0x5d335b:c.instructions+=5;goto B5d335b;
case 0x5d3361:c.instructions+=4;goto B5d3361;
case 0x5d3365:c.instructions+=3;goto B5d3365;
case 0x5d3367:c.instructions+=2;goto B5d3367;
case 0x5d336a:c.instructions+=1;goto B5d336a;
case 0x5d336c:goto L5d336c;
case 0x5d336e:c.instructions+=6;goto B5d336e;
case 0x5d3372:c.instructions+=5;goto B5d3372;
case 0x5d3376:c.instructions+=4;goto B5d3376;
case 0x5d337c:c.instructions+=3;goto B5d337c;
case 0x5d337e:c.instructions+=2;goto B5d337e;
case 0x5d3381:c.instructions+=1;goto B5d3381;
case 0x5d3383:goto L5d3383;
case 0x5d3385:c.instructions+=2;goto B5d3385;
case 0x5d3389:c.instructions+=1;goto B5d3389;
case 0x5d338c:goto L5d338c;
case 0x5d338f:c.instructions+=15;goto B5d338f;
case 0x5d3392:c.instructions+=14;goto B5d3392;
case 0x5d3394:c.instructions+=13;goto B5d3394;
case 0x5d3397:c.instructions+=12;goto B5d3397;
case 0x5d3399:c.instructions+=11;goto B5d3399;
case 0x5d339c:c.instructions+=10;goto B5d339c;
case 0x5d339f:c.instructions+=9;goto B5d339f;
case 0x5d33a2:c.instructions+=8;goto B5d33a2;
case 0x5d33a5:c.instructions+=7;goto B5d33a5;
case 0x5d33a7:c.instructions+=6;goto B5d33a7;
case 0x5d33a9:c.instructions+=5;goto B5d33a9;
case 0x5d33ad:c.instructions+=4;goto B5d33ad;
case 0x5d33b1:c.instructions+=3;goto B5d33b1;
case 0x5d33b3:c.instructions+=2;goto B5d33b3;
case 0x5d33b6:c.instructions+=1;goto B5d33b6;
case 0x5d33b8:goto L5d33b8;
case 0x5d33ba:c.instructions+=1;goto B5d33ba;
case 0x5d33be:goto L5d33be;
case 0x5d33c4:c.instructions+=3;goto B5d33c4;
case 0x5d33c6:c.instructions+=2;goto B5d33c6;
case 0x5d33c9:c.instructions+=1;goto B5d33c9;
case 0x5d33cb:goto L5d33cb;
case 0x5d33ce:c.instructions+=15;goto B5d33ce;
case 0x5d33d1:c.instructions+=14;goto B5d33d1;
case 0x5d33d3:c.instructions+=13;goto B5d33d3;
case 0x5d33d6:c.instructions+=12;goto B5d33d6;
case 0x5d33d8:c.instructions+=11;goto B5d33d8;
case 0x5d33db:c.instructions+=10;goto B5d33db;
case 0x5d33de:c.instructions+=9;goto B5d33de;
case 0x5d33e1:c.instructions+=8;goto B5d33e1;
case 0x5d33e4:c.instructions+=7;goto B5d33e4;
case 0x5d33e6:c.instructions+=6;goto B5d33e6;
case 0x5d33e8:c.instructions+=5;goto B5d33e8;
case 0x5d33ec:c.instructions+=4;goto B5d33ec;
case 0x5d33f0:c.instructions+=3;goto B5d33f0;
case 0x5d33f2:c.instructions+=2;goto B5d33f2;
case 0x5d33f5:c.instructions+=1;goto B5d33f5;
case 0x5d33f7:goto L5d33f7;
case 0x5d33f9:c.instructions+=1;goto B5d33f9;
case 0x5d33fd:goto L5d33fd;
case 0x5d3403:c.instructions+=3;goto B5d3403;
case 0x5d3405:c.instructions+=2;goto B5d3405;
case 0x5d3408:c.instructions+=1;goto B5d3408;
case 0x5d340a:goto L5d340a;
case 0x5d340e:c.instructions+=1;goto B5d340e;
case 0x5d3410:goto L5d3410;
case 0x5d3413:c.instructions+=15;goto B5d3413;
case 0x5d3416:c.instructions+=14;goto B5d3416;
case 0x5d3418:c.instructions+=13;goto B5d3418;
case 0x5d341b:c.instructions+=12;goto B5d341b;
case 0x5d341d:c.instructions+=11;goto B5d341d;
case 0x5d3420:c.instructions+=10;goto B5d3420;
case 0x5d3423:c.instructions+=9;goto B5d3423;
case 0x5d3426:c.instructions+=8;goto B5d3426;
case 0x5d3429:c.instructions+=7;goto B5d3429;
case 0x5d342b:c.instructions+=6;goto B5d342b;
case 0x5d342d:c.instructions+=5;goto B5d342d;
case 0x5d3431:c.instructions+=4;goto B5d3431;
case 0x5d3435:c.instructions+=3;goto B5d3435;
case 0x5d3437:c.instructions+=2;goto B5d3437;
case 0x5d343a:c.instructions+=1;goto B5d343a;
case 0x5d343c:goto L5d343c;
case 0x5d343e:c.instructions+=1;goto B5d343e;
case 0x5d3442:goto L5d3442;
case 0x5d3448:goto L5d3448;
case 0x5d3450:goto L5d3450;
case 0x5d3451:c.instructions+=9;goto B5d3451;
case 0x5d3453:c.instructions+=8;goto B5d3453;
case 0x5d3456:c.instructions+=7;goto B5d3456;
case 0x5d3459:c.instructions+=6;goto B5d3459;
case 0x5d345a:c.instructions+=5;goto B5d345a;
case 0x5d345c:c.instructions+=4;goto B5d345c;
case 0x5d3460:c.instructions+=3;goto B5d3460;
case 0x5d3461:c.instructions+=2;goto B5d3461;
case 0x5d3462:c.instructions+=1;goto B5d3462;
case 0x5d3464:goto L5d3464;
case 0x5d3467:c.instructions+=2;goto B5d3467;
case 0x5d3468:c.instructions+=1;goto B5d3468;
case 0x5d346d:goto L5d346d;
case 0x5d3473:c.instructions+=3;goto B5d3473;
case 0x5d3475:c.instructions+=2;goto B5d3475;
case 0x5d3478:c.instructions+=1;goto B5d3478;
case 0x5d347a:goto L5d347a;
case 0x5d3480:c.instructions+=6;goto B5d3480;
case 0x5d3481:c.instructions+=5;goto B5d3481;
case 0x5d3482:c.instructions+=4;goto B5d3482;
case 0x5d3483:c.instructions+=3;goto B5d3483;
case 0x5d3485:c.instructions+=2;goto B5d3485;
case 0x5d3486:c.instructions+=1;goto B5d3486;
case 0x5d3489:goto L5d3489;
case 0x5d348c:c.instructions+=5;goto B5d348c;
case 0x5d3490:c.instructions+=4;goto B5d3490;
case 0x5d3494:c.instructions+=3;goto B5d3494;
case 0x5d3496:c.instructions+=2;goto B5d3496;
case 0x5d3498:c.instructions+=1;goto B5d3498;
case 0x5d349e:goto L5d349e;
case 0x5d34a1:goto L5d34a1;
case 0x5d34a2:c.instructions+=31;goto B5d34a2;
case 0x5d34a4:c.instructions+=30;goto B5d34a4;
case 0x5d34a5:c.instructions+=29;goto B5d34a5;
case 0x5d34a7:c.instructions+=28;goto B5d34a7;
case 0x5d34aa:c.instructions+=27;goto B5d34aa;
case 0x5d34ac:c.instructions+=26;goto B5d34ac;
case 0x5d34ae:c.instructions+=25;goto B5d34ae;
case 0x5d34b2:c.instructions+=24;goto B5d34b2;
case 0x5d34b5:c.instructions+=23;goto B5d34b5;
case 0x5d34b9:c.instructions+=22;goto B5d34b9;
case 0x5d34bc:c.instructions+=21;goto B5d34bc;
case 0x5d34c0:c.instructions+=20;goto B5d34c0;
case 0x5d34c3:c.instructions+=19;goto B5d34c3;
case 0x5d34c6:c.instructions+=18;goto B5d34c6;
case 0x5d34ca:c.instructions+=17;goto B5d34ca;
case 0x5d34cc:c.instructions+=16;goto B5d34cc;
case 0x5d34cf:c.instructions+=15;goto B5d34cf;
case 0x5d34d1:c.instructions+=14;goto B5d34d1;
case 0x5d34d5:c.instructions+=13;goto B5d34d5;
case 0x5d34d7:c.instructions+=12;goto B5d34d7;
case 0x5d34d8:c.instructions+=11;goto B5d34d8;
case 0x5d34d9:c.instructions+=10;goto B5d34d9;
case 0x5d34dd:c.instructions+=9;goto B5d34dd;
case 0x5d34e1:c.instructions+=8;goto B5d34e1;
case 0x5d34e3:c.instructions+=7;goto B5d34e3;
case 0x5d34e5:c.instructions+=6;goto B5d34e5;
case 0x5d34e9:c.instructions+=5;goto B5d34e9;
case 0x5d34ed:c.instructions+=4;goto B5d34ed;
case 0x5d34ef:c.instructions+=3;goto B5d34ef;
case 0x5d34f1:c.instructions+=2;goto B5d34f1;
case 0x5d34f5:c.instructions+=1;goto B5d34f5;
case 0x5d34fa:goto L5d34fa;
case 0x5d34fe:c.instructions+=17;goto B5d34fe;
case 0x5d3500:c.instructions+=16;goto B5d3500;
case 0x5d3503:c.instructions+=15;goto B5d3503;
case 0x5d3507:c.instructions+=14;goto B5d3507;
case 0x5d350b:c.instructions+=13;goto B5d350b;
case 0x5d350f:c.instructions+=12;goto B5d350f;
case 0x5d3513:c.instructions+=11;goto B5d3513;
case 0x5d3515:c.instructions+=10;goto B5d3515;
case 0x5d3519:c.instructions+=9;goto B5d3519;
case 0x5d351d:c.instructions+=8;goto B5d351d;
case 0x5d3521:c.instructions+=7;goto B5d3521;
case 0x5d3525:c.instructions+=6;goto B5d3525;
case 0x5d3527:c.instructions+=5;goto B5d3527;
case 0x5d352b:c.instructions+=4;goto B5d352b;
case 0x5d3531:c.instructions+=3;goto B5d3531;
case 0x5d3533:c.instructions+=2;goto B5d3533;
case 0x5d3536:c.instructions+=1;goto B5d3536;
case 0x5d3538:goto L5d3538;
case 0x5d353a:c.instructions+=6;goto B5d353a;
case 0x5d353c:c.instructions+=5;goto B5d353c;
case 0x5d3540:c.instructions+=4;goto B5d3540;
case 0x5d3544:c.instructions+=3;goto B5d3544;
case 0x5d3546:c.instructions+=2;goto B5d3546;
case 0x5d3548:c.instructions+=1;goto B5d3548;
case 0x5d354a:goto L5d354a;
case 0x5d354e:c.instructions+=4;goto B5d354e;
case 0x5d3552:c.instructions+=3;goto B5d3552;
case 0x5d3554:c.instructions+=2;goto B5d3554;
case 0x5d3557:c.instructions+=1;goto B5d3557;
case 0x5d3559:goto L5d3559;
case 0x5d355d:c.instructions+=10;goto B5d355d;
case 0x5d3561:c.instructions+=9;goto B5d3561;
case 0x5d3563:c.instructions+=8;goto B5d3563;
case 0x5d3565:c.instructions+=7;goto B5d3565;
case 0x5d3567:c.instructions+=6;goto B5d3567;
case 0x5d3569:c.instructions+=5;goto B5d3569;
case 0x5d356b:c.instructions+=4;goto B5d356b;
case 0x5d356d:c.instructions+=3;goto B5d356d;
case 0x5d356f:c.instructions+=2;goto B5d356f;
case 0x5d3571:c.instructions+=1;goto B5d3571;
case 0x5d3573:goto L5d3573;
case 0x5d3575:goto L5d3575;
case 0x5d3579:c.instructions+=3;goto B5d3579;
case 0x5d357b:c.instructions+=2;goto B5d357b;
case 0x5d357e:c.instructions+=1;goto B5d357e;
case 0x5d3580:goto L5d3580;
case 0x5d3584:c.instructions+=4;goto B5d3584;
case 0x5d3587:c.instructions+=3;goto B5d3587;
case 0x5d3589:c.instructions+=2;goto B5d3589;
case 0x5d358c:c.instructions+=1;goto B5d358c;
case 0x5d358e:goto L5d358e;
case 0x5d3590:goto L5d3590;
case 0x5d3592:goto L5d3592;
case 0x5d3596:c.instructions+=3;goto B5d3596;
case 0x5d3599:c.instructions+=2;goto B5d3599;
case 0x5d359b:c.instructions+=1;goto B5d359b;
case 0x5d35a1:goto L5d35a1;
case 0x5d35a5:c.instructions+=6;goto B5d35a5;
case 0x5d35a6:c.instructions+=5;goto B5d35a6;
case 0x5d35a7:c.instructions+=4;goto B5d35a7;
case 0x5d35a8:c.instructions+=3;goto B5d35a8;
case 0x5d35aa:c.instructions+=2;goto B5d35aa;
case 0x5d35ab:c.instructions+=1;goto B5d35ab;
case 0x5d35b0:goto L5d35b0;
case 0x5d35b1:c.instructions+=10;goto B5d35b1;
case 0x5d35b3:c.instructions+=9;goto B5d35b3;
case 0x5d35b6:c.instructions+=8;goto B5d35b6;
case 0x5d35bc:c.instructions+=7;goto B5d35bc;
case 0x5d35bd:c.instructions+=6;goto B5d35bd;
case 0x5d35be:c.instructions+=5;goto B5d35be;
case 0x5d35c0:c.instructions+=4;goto B5d35c0;
case 0x5d35c1:c.instructions+=3;goto B5d35c1;
case 0x5d35c5:c.instructions+=2;goto B5d35c5;
case 0x5d35c7:c.instructions+=1;goto B5d35c7;
case 0x5d35c9:goto L5d35c9;
case 0x5d35cc:c.instructions+=2;goto B5d35cc;
case 0x5d35d0:c.instructions+=1;goto B5d35d0;
case 0x5d35d3:goto L5d35d3;
case 0x5d35d6:c.instructions+=15;goto B5d35d6;
case 0x5d35d9:c.instructions+=14;goto B5d35d9;
case 0x5d35db:c.instructions+=13;goto B5d35db;
case 0x5d35de:c.instructions+=12;goto B5d35de;
case 0x5d35e1:c.instructions+=11;goto B5d35e1;
case 0x5d35e2:c.instructions+=10;goto B5d35e2;
case 0x5d35e5:c.instructions+=9;goto B5d35e5;
case 0x5d35e8:c.instructions+=8;goto B5d35e8;
case 0x5d35eb:c.instructions+=7;goto B5d35eb;
case 0x5d35ef:c.instructions+=6;goto B5d35ef;
case 0x5d35f3:c.instructions+=5;goto B5d35f3;
case 0x5d35f5:c.instructions+=4;goto B5d35f5;
case 0x5d35f8:c.instructions+=3;goto B5d35f8;
case 0x5d35fb:c.instructions+=2;goto B5d35fb;
case 0x5d35fe:c.instructions+=1;goto B5d35fe;
case 0x5d3600:goto L5d3600;
case 0x5d3604:c.instructions+=6;goto B5d3604;
case 0x5d3605:c.instructions+=5;goto B5d3605;
case 0x5d3609:c.instructions+=4;goto B5d3609;
case 0x5d360a:c.instructions+=3;goto B5d360a;
case 0x5d360e:c.instructions+=2;goto B5d360e;
case 0x5d360f:c.instructions+=1;goto B5d360f;
case 0x5d3614:goto L5d3614;
case 0x5d3618:c.instructions+=6;goto B5d3618;
case 0x5d3619:c.instructions+=5;goto B5d3619;
case 0x5d361d:c.instructions+=4;goto B5d361d;
case 0x5d361e:c.instructions+=3;goto B5d361e;
case 0x5d3625:c.instructions+=2;goto B5d3625;
case 0x5d3626:c.instructions+=1;goto B5d3626;
case 0x5d362b:goto L5d362b;
case 0x5d362e:c.instructions+=5;goto B5d362e;
case 0x5d3631:c.instructions+=4;goto B5d3631;
case 0x5d3633:c.instructions+=3;goto B5d3633;
case 0x5d363a:c.instructions+=2;goto B5d363a;
case 0x5d363e:c.instructions+=1;goto B5d363e;
case 0x5d3640:goto L5d3640;
case 0x5d3644:c.instructions+=4;goto B5d3644;
case 0x5d3645:c.instructions+=3;goto B5d3645;
case 0x5d3646:c.instructions+=2;goto B5d3646;
case 0x5d3647:c.instructions+=1;goto B5d3647;
case 0x5d364c:goto L5d364c;
case 0x5d3650:c.instructions+=6;goto B5d3650;
case 0x5d3651:c.instructions+=5;goto B5d3651;
case 0x5d3655:c.instructions+=4;goto B5d3655;
case 0x5d3656:c.instructions+=3;goto B5d3656;
case 0x5d365d:c.instructions+=2;goto B5d365d;
case 0x5d365e:c.instructions+=1;goto B5d365e;
case 0x5d3663:goto L5d3663;
case 0x5d3666:c.instructions+=1;goto B5d3666;
case 0x5d3668:goto L5d3668;
case 0x5d366c:c.instructions+=4;goto B5d366c;
case 0x5d366d:c.instructions+=3;goto B5d366d;
case 0x5d366e:c.instructions+=2;goto B5d366e;
case 0x5d366f:c.instructions+=1;goto B5d366f;
case 0x5d3674:goto L5d3674;
case 0x5d3677:goto L5d3677;
case 0x5d367b:c.instructions+=3;goto B5d367b;
case 0x5d367d:c.instructions+=2;goto B5d367d;
case 0x5d367f:c.instructions+=1;goto B5d367f;
case 0x5d3681:goto L5d3681;
case 0x5d3685:goto L5d3685;
case 0x5d3688:c.instructions+=11;goto B5d3688;
case 0x5d368b:c.instructions+=10;goto B5d368b;
case 0x5d368e:c.instructions+=9;goto B5d368e;
case 0x5d3691:c.instructions+=8;goto B5d3691;
case 0x5d3693:c.instructions+=7;goto B5d3693;
case 0x5d3696:c.instructions+=6;goto B5d3696;
case 0x5d3698:c.instructions+=5;goto B5d3698;
case 0x5d369a:c.instructions+=4;goto B5d369a;
case 0x5d36a0:c.instructions+=3;goto B5d36a0;
case 0x5d36a2:c.instructions+=2;goto B5d36a2;
case 0x5d36a5:c.instructions+=1;goto B5d36a5;
case 0x5d36a7:goto L5d36a7;
case 0x5d36a8:c.instructions+=3;goto B5d36a8;
case 0x5d36ab:c.instructions+=2;goto B5d36ab;
case 0x5d36ad:c.instructions+=1;goto B5d36ad;
case 0x5d36af:goto L5d36af;
case 0x5d36b2:c.instructions+=2;goto B5d36b2;
case 0x5d36b4:c.instructions+=1;goto B5d36b4;
case 0x5d36b6:goto L5d36b6;
case 0x5d36ba:c.instructions+=9;goto B5d36ba;
case 0x5d36bd:c.instructions+=8;goto B5d36bd;
case 0x5d36c1:c.instructions+=7;goto B5d36c1;
case 0x5d36c4:c.instructions+=6;goto B5d36c4;
case 0x5d36c6:c.instructions+=5;goto B5d36c6;
case 0x5d36ca:c.instructions+=4;goto B5d36ca;
case 0x5d36cd:c.instructions+=3;goto B5d36cd;
case 0x5d36cf:c.instructions+=2;goto B5d36cf;
case 0x5d36d1:c.instructions+=1;goto B5d36d1;
case 0x5d36d3:goto L5d36d3;
case 0x5d36d5:c.instructions+=6;goto B5d36d5;
case 0x5d36d6:c.instructions+=5;goto B5d36d6;
case 0x5d36d7:c.instructions+=4;goto B5d36d7;
case 0x5d36d8:c.instructions+=3;goto B5d36d8;
case 0x5d36da:c.instructions+=2;goto B5d36da;
case 0x5d36db:c.instructions+=1;goto B5d36db;
case 0x5d36de:goto L5d36de;
case 0x5d36df:c.instructions+=6;goto B5d36df;
case 0x5d36e0:c.instructions+=5;goto B5d36e0;
case 0x5d36e2:c.instructions+=4;goto B5d36e2;
case 0x5d36e3:c.instructions+=3;goto B5d36e3;
case 0x5d36e5:c.instructions+=2;goto B5d36e5;
case 0x5d36e6:c.instructions+=1;goto B5d36e6;
case 0x5d36f0:goto L5d36f0;
case 0x5d36f1:c.instructions+=43;goto B5d36f1;
case 0x5d36f3:c.instructions+=42;goto B5d36f3;
case 0x5d36f6:c.instructions+=41;goto B5d36f6;
case 0x5d36f9:c.instructions+=40;goto B5d36f9;
case 0x5d36fc:c.instructions+=39;goto B5d36fc;
case 0x5d36fd:c.instructions+=38;goto B5d36fd;
case 0x5d36ff:c.instructions+=37;goto B5d36ff;
case 0x5d3702:c.instructions+=36;goto B5d3702;
case 0x5d3704:c.instructions+=35;goto B5d3704;
case 0x5d3707:c.instructions+=34;goto B5d3707;
case 0x5d370a:c.instructions+=33;goto B5d370a;
case 0x5d370d:c.instructions+=32;goto B5d370d;
case 0x5d3710:c.instructions+=31;goto B5d3710;
case 0x5d3713:c.instructions+=30;goto B5d3713;
case 0x5d3715:c.instructions+=29;goto B5d3715;
case 0x5d3718:c.instructions+=28;goto B5d3718;
case 0x5d371c:c.instructions+=27;goto B5d371c;
case 0x5d371f:c.instructions+=26;goto B5d371f;
case 0x5d3722:c.instructions+=25;goto B5d3722;
case 0x5d3726:c.instructions+=24;goto B5d3726;
case 0x5d3729:c.instructions+=23;goto B5d3729;
case 0x5d372c:c.instructions+=22;goto B5d372c;
case 0x5d3730:c.instructions+=21;goto B5d3730;
case 0x5d3733:c.instructions+=20;goto B5d3733;
case 0x5d3735:c.instructions+=19;goto B5d3735;
case 0x5d3738:c.instructions+=18;goto B5d3738;
case 0x5d373a:c.instructions+=17;goto B5d373a;
case 0x5d373c:c.instructions+=16;goto B5d373c;
case 0x5d373f:c.instructions+=15;goto B5d373f;
case 0x5d3741:c.instructions+=14;goto B5d3741;
case 0x5d3745:c.instructions+=13;goto B5d3745;
case 0x5d3748:c.instructions+=12;goto B5d3748;
case 0x5d374c:c.instructions+=11;goto B5d374c;
case 0x5d374f:c.instructions+=10;goto B5d374f;
case 0x5d3751:c.instructions+=9;goto B5d3751;
case 0x5d3755:c.instructions+=8;goto B5d3755;
case 0x5d3758:c.instructions+=7;goto B5d3758;
case 0x5d375a:c.instructions+=6;goto B5d375a;
case 0x5d375e:c.instructions+=5;goto B5d375e;
case 0x5d3760:c.instructions+=4;goto B5d3760;
case 0x5d3766:c.instructions+=3;goto B5d3766;
case 0x5d3768:c.instructions+=2;goto B5d3768;
case 0x5d376b:c.instructions+=1;goto B5d376b;
case 0x5d376d:goto L5d376d;
case 0x5d376f:c.instructions+=22;goto B5d376f;
case 0x5d3770:c.instructions+=21;goto B5d3770;
case 0x5d3772:c.instructions+=20;goto B5d3772;
case 0x5d3776:c.instructions+=19;goto B5d3776;
case 0x5d377a:c.instructions+=18;goto B5d377a;
case 0x5d377d:c.instructions+=17;goto B5d377d;
case 0x5d3780:c.instructions+=16;goto B5d3780;
case 0x5d3784:c.instructions+=15;goto B5d3784;
case 0x5d3787:c.instructions+=14;goto B5d3787;
case 0x5d378a:c.instructions+=13;goto B5d378a;
case 0x5d378e:c.instructions+=12;goto B5d378e;
case 0x5d3790:c.instructions+=11;goto B5d3790;
case 0x5d3794:c.instructions+=10;goto B5d3794;
case 0x5d3796:c.instructions+=9;goto B5d3796;
case 0x5d3798:c.instructions+=8;goto B5d3798;
case 0x5d379a:c.instructions+=7;goto B5d379a;
case 0x5d379d:c.instructions+=6;goto B5d379d;
case 0x5d379e:c.instructions+=5;goto B5d379e;
case 0x5d379f:c.instructions+=4;goto B5d379f;
case 0x5d37a1:c.instructions+=3;goto B5d37a1;
case 0x5d37a5:c.instructions+=2;goto B5d37a5;
case 0x5d37a6:c.instructions+=1;goto B5d37a6;
case 0x5d37ab:goto L5d37ab;
case 0x5d37ae:c.instructions+=5;goto B5d37ae;
case 0x5d37b0:c.instructions+=4;goto B5d37b0;
case 0x5d37b4:c.instructions+=3;goto B5d37b4;
case 0x5d37b5:c.instructions+=2;goto B5d37b5;
case 0x5d37b7:c.instructions+=1;goto B5d37b7;
case 0x5d37bc:goto L5d37bc;
case 0x5d37be:c.instructions+=1;goto B5d37be;
case 0x5d37c0:goto L5d37c0;
case 0x5d37c3:c.instructions+=2;goto B5d37c3;
case 0x5d37c5:c.instructions+=1;goto B5d37c5;
case 0x5d37c7:goto L5d37c7;
case 0x5d37cb:c.instructions+=5;goto B5d37cb;
case 0x5d37cf:c.instructions+=4;goto B5d37cf;
case 0x5d37d1:c.instructions+=3;goto B5d37d1;
case 0x5d37d5:c.instructions+=2;goto B5d37d5;
case 0x5d37d8:c.instructions+=1;goto B5d37d8;
case 0x5d37db:goto L5d37db;
case 0x5d37dd:c.instructions+=4;goto B5d37dd;
case 0x5d37de:c.instructions+=3;goto B5d37de;
case 0x5d37e0:c.instructions+=2;goto B5d37e0;
case 0x5d37e1:c.instructions+=1;goto B5d37e1;
case 0x5d37e4:goto L5d37e4;
case 0x5d37e6:goto L5d37e6;
case 0x5d37e8:c.instructions+=4;goto B5d37e8;
case 0x5d37e9:c.instructions+=3;goto B5d37e9;
case 0x5d37eb:c.instructions+=2;goto B5d37eb;
case 0x5d37ec:c.instructions+=1;goto B5d37ec;
case 0x5d37f0:goto L5d37f0;
case 0x5d37f1:c.instructions+=14;goto B5d37f1;
case 0x5d37f3:c.instructions+=13;goto B5d37f3;
case 0x5d37f6:c.instructions+=12;goto B5d37f6;
case 0x5d37f9:c.instructions+=11;goto B5d37f9;
case 0x5d37fa:c.instructions+=10;goto B5d37fa;
case 0x5d37fb:c.instructions+=9;goto B5d37fb;
case 0x5d37fd:c.instructions+=8;goto B5d37fd;
case 0x5d37fe:c.instructions+=7;goto B5d37fe;
case 0x5d3801:c.instructions+=6;goto B5d3801;
case 0x5d3802:c.instructions+=5;goto B5d3802;
case 0x5d3806:c.instructions+=4;goto B5d3806;
case 0x5d3807:c.instructions+=3;goto B5d3807;
case 0x5d380b:c.instructions+=2;goto B5d380b;
case 0x5d380c:c.instructions+=1;goto B5d380c;
case 0x5d3811:goto L5d3811;
case 0x5d3814:c.instructions+=4;goto B5d3814;
case 0x5d3817:c.instructions+=3;goto B5d3817;
case 0x5d3819:c.instructions+=2;goto B5d3819;
case 0x5d381e:c.instructions+=1;goto B5d381e;
case 0x5d3820:goto L5d3820;
case 0x5d3823:goto L5d3823;
case 0x5d3824:c.instructions+=5;goto B5d3824;
case 0x5d3828:c.instructions+=4;goto B5d3828;
case 0x5d3829:c.instructions+=3;goto B5d3829;
case 0x5d382d:c.instructions+=2;goto B5d382d;
case 0x5d382e:c.instructions+=1;goto B5d382e;
case 0x5d3833:goto L5d3833;
case 0x5d3837:c.instructions+=5;goto B5d3837;
case 0x5d383a:c.instructions+=4;goto B5d383a;
case 0x5d383b:c.instructions+=3;goto B5d383b;
case 0x5d383e:c.instructions+=2;goto B5d383e;
case 0x5d3840:c.instructions+=1;goto B5d3840;
case 0x5d3842:goto L5d3842;
case 0x5d3845:c.instructions+=8;goto B5d3845;
case 0x5d3848:c.instructions+=7;goto B5d3848;
case 0x5d3849:c.instructions+=6;goto B5d3849;
case 0x5d384a:c.instructions+=5;goto B5d384a;
case 0x5d384e:c.instructions+=4;goto B5d384e;
case 0x5d384f:c.instructions+=3;goto B5d384f;
case 0x5d3853:c.instructions+=2;goto B5d3853;
case 0x5d3854:c.instructions+=1;goto B5d3854;
case 0x5d3859:goto L5d3859;
case 0x5d385c:c.instructions+=2;goto B5d385c;
case 0x5d385e:c.instructions+=1;goto B5d385e;
case 0x5d3864:goto L5d3864;
case 0x5d3867:c.instructions+=7;goto B5d3867;
case 0x5d386a:c.instructions+=6;goto B5d386a;
case 0x5d386e:c.instructions+=5;goto B5d386e;
case 0x5d386f:c.instructions+=4;goto B5d386f;
case 0x5d3870:c.instructions+=3;goto B5d3870;
case 0x5d3871:c.instructions+=2;goto B5d3871;
case 0x5d3873:c.instructions+=1;goto B5d3873;
case 0x5d3878:goto L5d3878;
case 0x5d387a:c.instructions+=1;goto B5d387a;
case 0x5d3880:goto L5d3880;
case 0x5d3884:c.instructions+=8;goto B5d3884;
case 0x5d3887:c.instructions+=7;goto B5d3887;
case 0x5d3889:c.instructions+=6;goto B5d3889;
case 0x5d388b:c.instructions+=5;goto B5d388b;
case 0x5d388e:c.instructions+=4;goto B5d388e;
case 0x5d3892:c.instructions+=3;goto B5d3892;
case 0x5d3895:c.instructions+=2;goto B5d3895;
case 0x5d3899:c.instructions+=1;goto B5d3899;
case 0x5d389b:goto L5d389b;
case 0x5d389d:c.instructions+=11;goto B5d389d;
case 0x5d38a0:c.instructions+=10;goto B5d38a0;
case 0x5d38a2:c.instructions+=9;goto B5d38a2;
case 0x5d38a5:c.instructions+=8;goto B5d38a5;
case 0x5d38a7:c.instructions+=7;goto B5d38a7;
case 0x5d38a9:c.instructions+=6;goto B5d38a9;
case 0x5d38ac:c.instructions+=5;goto B5d38ac;
case 0x5d38ae:c.instructions+=4;goto B5d38ae;
case 0x5d38b4:c.instructions+=3;goto B5d38b4;
case 0x5d38b6:c.instructions+=2;goto B5d38b6;
case 0x5d38b9:c.instructions+=1;goto B5d38b9;
case 0x5d38bb:goto L5d38bb;
case 0x5d38bd:c.instructions+=16;goto B5d38bd;
case 0x5d38c0:c.instructions+=15;goto B5d38c0;
case 0x5d38c2:c.instructions+=14;goto B5d38c2;
case 0x5d38c4:c.instructions+=13;goto B5d38c4;
case 0x5d38c6:c.instructions+=12;goto B5d38c6;
case 0x5d38c8:c.instructions+=11;goto B5d38c8;
case 0x5d38ca:c.instructions+=10;goto B5d38ca;
case 0x5d38cc:c.instructions+=9;goto B5d38cc;
case 0x5d38ce:c.instructions+=8;goto B5d38ce;
case 0x5d38d0:c.instructions+=7;goto B5d38d0;
case 0x5d38d2:c.instructions+=6;goto B5d38d2;
case 0x5d38d4:c.instructions+=5;goto B5d38d4;
case 0x5d38d6:c.instructions+=4;goto B5d38d6;
case 0x5d38d8:c.instructions+=3;goto B5d38d8;
case 0x5d38da:c.instructions+=2;goto B5d38da;
case 0x5d38dd:c.instructions+=1;goto B5d38dd;
case 0x5d38df:goto L5d38df;
case 0x5d38e2:c.instructions+=3;goto B5d38e2;
case 0x5d38e4:c.instructions+=2;goto B5d38e4;
case 0x5d38e6:c.instructions+=1;goto B5d38e6;
case 0x5d38e8:goto L5d38e8;
case 0x5d38ec:c.instructions+=5;goto B5d38ec;
case 0x5d38f0:c.instructions+=4;goto B5d38f0;
case 0x5d38f2:c.instructions+=3;goto B5d38f2;
case 0x5d38f6:c.instructions+=2;goto B5d38f6;
case 0x5d38f9:c.instructions+=1;goto B5d38f9;
case 0x5d38fc:goto L5d38fc;
case 0x5d38fe:c.instructions+=6;goto B5d38fe;
case 0x5d38ff:c.instructions+=5;goto B5d38ff;
case 0x5d3900:c.instructions+=4;goto B5d3900;
case 0x5d3901:c.instructions+=3;goto B5d3901;
case 0x5d3903:c.instructions+=2;goto B5d3903;
case 0x5d3904:c.instructions+=1;goto B5d3904;
case 0x5d3907:goto L5d3907;
case 0x5d3909:c.instructions+=1;goto B5d3909;
case 0x5d390b:goto L5d390b;
case 0x5d390d:goto L5d390d;
case 0x5d390e:c.instructions+=6;goto B5d390e;
case 0x5d390f:c.instructions+=5;goto B5d390f;
case 0x5d3911:c.instructions+=4;goto B5d3911;
case 0x5d3912:c.instructions+=3;goto B5d3912;
case 0x5d3914:c.instructions+=2;goto B5d3914;
case 0x5d3915:c.instructions+=1;goto B5d3915;
case 0x5d3920:goto L5d3920;
case 0x5d3921:c.instructions+=15;goto B5d3921;
case 0x5d3923:c.instructions+=14;goto B5d3923;
case 0x5d3926:c.instructions+=13;goto B5d3926;
case 0x5d3929:c.instructions+=12;goto B5d3929;
case 0x5d392c:c.instructions+=11;goto B5d392c;
case 0x5d392d:c.instructions+=10;goto B5d392d;
case 0x5d392e:c.instructions+=9;goto B5d392e;
case 0x5d392f:c.instructions+=8;goto B5d392f;
case 0x5d3931:c.instructions+=7;goto B5d3931;
case 0x5d3932:c.instructions+=6;goto B5d3932;
case 0x5d3936:c.instructions+=5;goto B5d3936;
case 0x5d3937:c.instructions+=4;goto B5d3937;
case 0x5d393b:c.instructions+=3;goto B5d393b;
case 0x5d393c:c.instructions+=2;goto B5d393c;
case 0x5d3940:c.instructions+=1;goto B5d3940;
case 0x5d3945:goto L5d3945;
case 0x5d3948:c.instructions+=8;goto B5d3948;
case 0x5d394b:c.instructions+=7;goto B5d394b;
case 0x5d394c:c.instructions+=6;goto B5d394c;
case 0x5d394d:c.instructions+=5;goto B5d394d;
case 0x5d3951:c.instructions+=4;goto B5d3951;
case 0x5d3952:c.instructions+=3;goto B5d3952;
case 0x5d3956:c.instructions+=2;goto B5d3956;
case 0x5d3957:c.instructions+=1;goto B5d3957;
case 0x5d395c:goto L5d395c;
case 0x5d3962:c.instructions+=5;goto B5d3962;
case 0x5d3965:c.instructions+=4;goto B5d3965;
case 0x5d3967:c.instructions+=3;goto B5d3967;
case 0x5d3969:c.instructions+=2;goto B5d3969;
case 0x5d3971:c.instructions+=1;goto B5d3971;
case 0x5d3973:goto L5d3973;
case 0x5d3976:goto L5d3976;
case 0x5d3979:c.instructions+=16;goto B5d3979;
case 0x5d397c:c.instructions+=15;goto B5d397c;
case 0x5d397e:c.instructions+=14;goto B5d397e;
case 0x5d397f:c.instructions+=13;goto B5d397f;
case 0x5d3980:c.instructions+=12;goto B5d3980;
case 0x5d3983:c.instructions+=11;goto B5d3983;
case 0x5d3987:c.instructions+=10;goto B5d3987;
case 0x5d3988:c.instructions+=9;goto B5d3988;
case 0x5d398b:c.instructions+=8;goto B5d398b;
case 0x5d398f:c.instructions+=7;goto B5d398f;
case 0x5d3990:c.instructions+=6;goto B5d3990;
case 0x5d3991:c.instructions+=5;goto B5d3991;
case 0x5d3992:c.instructions+=4;goto B5d3992;
case 0x5d3996:c.instructions+=3;goto B5d3996;
case 0x5d3997:c.instructions+=2;goto B5d3997;
case 0x5d3999:c.instructions+=1;goto B5d3999;
case 0x5d399e:goto L5d399e;
case 0x5d39a0:c.instructions+=1;goto B5d39a0;
case 0x5d39a2:goto L5d39a2;
case 0x5d39a6:c.instructions+=5;goto B5d39a6;
case 0x5d39ac:c.instructions+=4;goto B5d39ac;
case 0x5d39ad:c.instructions+=3;goto B5d39ad;
case 0x5d39b0:c.instructions+=2;goto B5d39b0;
case 0x5d39b2:c.instructions+=1;goto B5d39b2;
case 0x5d39b4:goto L5d39b4;
case 0x5d39b6:c.instructions+=6;goto B5d39b6;
case 0x5d39b7:c.instructions+=5;goto B5d39b7;
case 0x5d39b8:c.instructions+=4;goto B5d39b8;
case 0x5d39b9:c.instructions+=3;goto B5d39b9;
case 0x5d39bb:c.instructions+=2;goto B5d39bb;
case 0x5d39bc:c.instructions+=1;goto B5d39bc;
case 0x5d39bf:goto L5d39bf;
case 0x5d39c2:c.instructions+=2;goto B5d39c2;
case 0x5d39c4:c.instructions+=1;goto B5d39c4;
case 0x5d39c6:goto L5d39c6;
case 0x5d39c9:c.instructions+=5;goto B5d39c9;
case 0x5d39cc:c.instructions+=4;goto B5d39cc;
case 0x5d39cf:c.instructions+=3;goto B5d39cf;
case 0x5d39d1:c.instructions+=2;goto B5d39d1;
case 0x5d39d4:c.instructions+=1;goto B5d39d4;
case 0x5d39d7:goto L5d39d7;
case 0x5d39d8:c.instructions+=6;goto B5d39d8;
case 0x5d39d9:c.instructions+=5;goto B5d39d9;
case 0x5d39db:c.instructions+=4;goto B5d39db;
case 0x5d39dc:c.instructions+=3;goto B5d39dc;
case 0x5d39de:c.instructions+=2;goto B5d39de;
case 0x5d39df:c.instructions+=1;goto B5d39df;
case 0x5d39f0:goto L5d39f0;
case 0x5d39f1:c.instructions+=15;goto B5d39f1;
case 0x5d39f3:c.instructions+=14;goto B5d39f3;
case 0x5d39f6:c.instructions+=13;goto B5d39f6;
case 0x5d39f9:c.instructions+=12;goto B5d39f9;
case 0x5d39fa:c.instructions+=11;goto B5d39fa;
case 0x5d39fd:c.instructions+=10;goto B5d39fd;
case 0x5d39fe:c.instructions+=9;goto B5d39fe;
case 0x5d39ff:c.instructions+=8;goto B5d39ff;
case 0x5d3a01:c.instructions+=7;goto B5d3a01;
case 0x5d3a02:c.instructions+=6;goto B5d3a02;
case 0x5d3a06:c.instructions+=5;goto B5d3a06;
case 0x5d3a07:c.instructions+=4;goto B5d3a07;
case 0x5d3a0b:c.instructions+=3;goto B5d3a0b;
case 0x5d3a0c:c.instructions+=2;goto B5d3a0c;
case 0x5d3a10:c.instructions+=1;goto B5d3a10;
case 0x5d3a15:goto L5d3a15;
case 0x5d3a18:c.instructions+=8;goto B5d3a18;
case 0x5d3a1b:c.instructions+=7;goto B5d3a1b;
case 0x5d3a1c:c.instructions+=6;goto B5d3a1c;
case 0x5d3a1d:c.instructions+=5;goto B5d3a1d;
case 0x5d3a21:c.instructions+=4;goto B5d3a21;
case 0x5d3a22:c.instructions+=3;goto B5d3a22;
case 0x5d3a26:c.instructions+=2;goto B5d3a26;
case 0x5d3a27:c.instructions+=1;goto B5d3a27;
case 0x5d3a2c:goto L5d3a2c;
case 0x5d3a32:c.instructions+=7;goto B5d3a32;
case 0x5d3a34:c.instructions+=6;goto B5d3a34;
case 0x5d3a37:c.instructions+=5;goto B5d3a37;
case 0x5d3a39:c.instructions+=4;goto B5d3a39;
case 0x5d3a41:c.instructions+=3;goto B5d3a41;
case 0x5d3a45:c.instructions+=2;goto B5d3a45;
case 0x5d3a49:c.instructions+=1;goto B5d3a49;
case 0x5d3a4b:goto L5d3a4b;
case 0x5d3a4e:c.instructions+=1;goto B5d3a4e;
case 0x5d3a52:goto L5d3a52;
case 0x5d3a55:c.instructions+=14;goto B5d3a55;
case 0x5d3a59:c.instructions+=13;goto B5d3a59;
case 0x5d3a5b:c.instructions+=12;goto B5d3a5b;
case 0x5d3a5d:c.instructions+=11;goto B5d3a5d;
case 0x5d3a5e:c.instructions+=10;goto B5d3a5e;
case 0x5d3a62:c.instructions+=9;goto B5d3a62;
case 0x5d3a63:c.instructions+=8;goto B5d3a63;
case 0x5d3a67:c.instructions+=7;goto B5d3a67;
case 0x5d3a68:c.instructions+=6;goto B5d3a68;
case 0x5d3a69:c.instructions+=5;goto B5d3a69;
case 0x5d3a6a:c.instructions+=4;goto B5d3a6a;
case 0x5d3a6e:c.instructions+=3;goto B5d3a6e;
case 0x5d3a6f:c.instructions+=2;goto B5d3a6f;
case 0x5d3a71:c.instructions+=1;goto B5d3a71;
case 0x5d3a76:goto L5d3a76;
case 0x5d3a78:c.instructions+=1;goto B5d3a78;
case 0x5d3a7a:goto L5d3a7a;
case 0x5d3a7e:goto L5d3a7e;
case 0x5d3a82:c.instructions+=9;goto B5d3a82;
case 0x5d3a86:c.instructions+=8;goto B5d3a86;
case 0x5d3a8a:c.instructions+=7;goto B5d3a8a;
case 0x5d3a90:c.instructions+=6;goto B5d3a90;
case 0x5d3a91:c.instructions+=5;goto B5d3a91;
case 0x5d3a94:c.instructions+=4;goto B5d3a94;
case 0x5d3a96:c.instructions+=3;goto B5d3a96;
case 0x5d3a9a:c.instructions+=2;goto B5d3a9a;
case 0x5d3a9e:c.instructions+=1;goto B5d3a9e;
case 0x5d3aa0:goto L5d3aa0;
case 0x5d3aa4:goto L5d3aa4;
case 0x5d3aa6:c.instructions+=23;goto B5d3aa6;
case 0x5d3aa8:c.instructions+=22;goto B5d3aa8;
case 0x5d3aac:c.instructions+=21;goto B5d3aac;
case 0x5d3aaf:c.instructions+=20;goto B5d3aaf;
case 0x5d3ab2:c.instructions+=19;goto B5d3ab2;
case 0x5d3ab6:c.instructions+=18;goto B5d3ab6;
case 0x5d3ab9:c.instructions+=17;goto B5d3ab9;
case 0x5d3abc:c.instructions+=16;goto B5d3abc;
case 0x5d3ac0:c.instructions+=15;goto B5d3ac0;
case 0x5d3ac4:c.instructions+=14;goto B5d3ac4;
case 0x5d3ac8:c.instructions+=13;goto B5d3ac8;
case 0x5d3acc:c.instructions+=12;goto B5d3acc;
case 0x5d3ad0:c.instructions+=11;goto B5d3ad0;
case 0x5d3ad2:c.instructions+=10;goto B5d3ad2;
case 0x5d3ad6:c.instructions+=9;goto B5d3ad6;
case 0x5d3ada:c.instructions+=8;goto B5d3ada;
case 0x5d3adc:c.instructions+=7;goto B5d3adc;
case 0x5d3ade:c.instructions+=6;goto B5d3ade;
case 0x5d3ae2:c.instructions+=5;goto B5d3ae2;
case 0x5d3ae6:c.instructions+=4;goto B5d3ae6;
case 0x5d3aea:c.instructions+=3;goto B5d3aea;
case 0x5d3aec:c.instructions+=2;goto B5d3aec;
case 0x5d3aef:c.instructions+=1;goto B5d3aef;
case 0x5d3af5:goto L5d3af5;
case 0x5d3af8:c.instructions+=2;goto B5d3af8;
case 0x5d3afb:c.instructions+=1;goto B5d3afb;
case 0x5d3afd:goto L5d3afd;
case 0x5d3afe:c.instructions+=1;goto B5d3afe;
case 0x5d3b04:goto L5d3b04;
case 0x5d3b08:c.instructions+=8;goto B5d3b08;
case 0x5d3b09:c.instructions+=7;goto B5d3b09;
case 0x5d3b0c:c.instructions+=6;goto B5d3b0c;
case 0x5d3b10:c.instructions+=5;goto B5d3b10;
case 0x5d3b14:c.instructions+=4;goto B5d3b14;
case 0x5d3b17:c.instructions+=3;goto B5d3b17;
case 0x5d3b18:c.instructions+=2;goto B5d3b18;
case 0x5d3b19:c.instructions+=1;goto B5d3b19;
case 0x5d3b1e:goto L5d3b1e;
case 0x5d3b22:c.instructions+=19;goto B5d3b22;
case 0x5d3b24:c.instructions+=18;goto B5d3b24;
case 0x5d3b27:c.instructions+=17;goto B5d3b27;
case 0x5d3b2b:c.instructions+=16;goto B5d3b2b;
case 0x5d3b2d:c.instructions+=15;goto B5d3b2d;
case 0x5d3b30:c.instructions+=14;goto B5d3b30;
case 0x5d3b34:c.instructions+=13;goto B5d3b34;
case 0x5d3b37:c.instructions+=12;goto B5d3b37;
case 0x5d3b3b:c.instructions+=11;goto B5d3b3b;
case 0x5d3b3f:c.instructions+=10;goto B5d3b3f;
case 0x5d3b41:c.instructions+=9;goto B5d3b41;
case 0x5d3b43:c.instructions+=8;goto B5d3b43;
case 0x5d3b46:c.instructions+=7;goto B5d3b46;
case 0x5d3b49:c.instructions+=6;goto B5d3b49;
case 0x5d3b4a:c.instructions+=5;goto B5d3b4a;
case 0x5d3b4b:c.instructions+=4;goto B5d3b4b;
case 0x5d3b4c:c.instructions+=3;goto B5d3b4c;
case 0x5d3b4e:c.instructions+=2;goto B5d3b4e;
case 0x5d3b4f:c.instructions+=1;goto B5d3b4f;
case 0x5d3b52:goto L5d3b52;
case 0x5d3b55:c.instructions+=2;goto B5d3b55;
case 0x5d3b57:c.instructions+=1;goto B5d3b57;
case 0x5d3b59:goto L5d3b59;
case 0x5d3b5d:c.instructions+=9;goto B5d3b5d;
case 0x5d3b61:c.instructions+=8;goto B5d3b61;
case 0x5d3b64:c.instructions+=7;goto B5d3b64;
case 0x5d3b68:c.instructions+=6;goto B5d3b68;
case 0x5d3b6c:c.instructions+=5;goto B5d3b6c;
case 0x5d3b70:c.instructions+=4;goto B5d3b70;
case 0x5d3b71:c.instructions+=3;goto B5d3b71;
case 0x5d3b72:c.instructions+=2;goto B5d3b72;
case 0x5d3b73:c.instructions+=1;goto B5d3b73;
case 0x5d3b78:goto L5d3b78;
case 0x5d3b7c:c.instructions+=23;goto B5d3b7c;
case 0x5d3b80:c.instructions+=22;goto B5d3b80;
case 0x5d3b83:c.instructions+=21;goto B5d3b83;
case 0x5d3b85:c.instructions+=20;goto B5d3b85;
case 0x5d3b8b:c.instructions+=19;goto B5d3b8b;
case 0x5d3b8e:c.instructions+=18;goto B5d3b8e;
case 0x5d3b92:c.instructions+=17;goto B5d3b92;
case 0x5d3b96:c.instructions+=16;goto B5d3b96;
case 0x5d3b98:c.instructions+=15;goto B5d3b98;
case 0x5d3b9c:c.instructions+=14;goto B5d3b9c;
case 0x5d3b9f:c.instructions+=13;goto B5d3b9f;
case 0x5d3ba1:c.instructions+=12;goto B5d3ba1;
case 0x5d3ba4:c.instructions+=11;goto B5d3ba4;
case 0x5d3ba8:c.instructions+=10;goto B5d3ba8;
case 0x5d3bac:c.instructions+=9;goto B5d3bac;
case 0x5d3bae:c.instructions+=8;goto B5d3bae;
case 0x5d3bb1:c.instructions+=7;goto B5d3bb1;
case 0x5d3bb4:c.instructions+=6;goto B5d3bb4;
case 0x5d3bb5:c.instructions+=5;goto B5d3bb5;
case 0x5d3bb6:c.instructions+=4;goto B5d3bb6;
case 0x5d3bb7:c.instructions+=3;goto B5d3bb7;
case 0x5d3bb9:c.instructions+=2;goto B5d3bb9;
case 0x5d3bba:c.instructions+=1;goto B5d3bba;
case 0x5d3bbd:goto L5d3bbd;
case 0x5d3bbf:c.instructions+=10;goto B5d3bbf;
case 0x5d3bc2:c.instructions+=9;goto B5d3bc2;
case 0x5d3bc5:c.instructions+=8;goto B5d3bc5;
case 0x5d3bc8:c.instructions+=7;goto B5d3bc8;
case 0x5d3bca:c.instructions+=6;goto B5d3bca;
case 0x5d3bcc:c.instructions+=5;goto B5d3bcc;
case 0x5d3bcf:c.instructions+=4;goto B5d3bcf;
case 0x5d3bd5:c.instructions+=3;goto B5d3bd5;
case 0x5d3bd8:c.instructions+=2;goto B5d3bd8;
case 0x5d3bda:c.instructions+=1;goto B5d3bda;
case 0x5d3bdc:goto L5d3bdc;
case 0x5d3bdf:c.instructions+=8;goto B5d3bdf;
case 0x5d3be1:c.instructions+=7;goto B5d3be1;
case 0x5d3be4:c.instructions+=6;goto B5d3be4;
case 0x5d3be5:c.instructions+=5;goto B5d3be5;
case 0x5d3be6:c.instructions+=4;goto B5d3be6;
case 0x5d3be7:c.instructions+=3;goto B5d3be7;
case 0x5d3be9:c.instructions+=2;goto B5d3be9;
case 0x5d3bea:c.instructions+=1;goto B5d3bea;
case 0x5d3bed:goto L5d3bed;
case 0x5d3bf0:c.instructions+=1;goto B5d3bf0;
case 0x5d3bf3:goto L5d3bf3;
case 0x5d3bf5:c.instructions+=6;goto B5d3bf5;
case 0x5d3bf6:c.instructions+=5;goto B5d3bf6;
case 0x5d3bf7:c.instructions+=4;goto B5d3bf7;
case 0x5d3bf8:c.instructions+=3;goto B5d3bf8;
case 0x5d3bfa:c.instructions+=2;goto B5d3bfa;
case 0x5d3bfb:c.instructions+=1;goto B5d3bfb;
case 0x5d3bfe:goto L5d3bfe;
case 0x5d3bff:c.instructions+=6;goto B5d3bff;
case 0x5d3c00:c.instructions+=5;goto B5d3c00;
case 0x5d3c02:c.instructions+=4;goto B5d3c02;
case 0x5d3c03:c.instructions+=3;goto B5d3c03;
case 0x5d3c05:c.instructions+=2;goto B5d3c05;
case 0x5d3c06:c.instructions+=1;goto B5d3c06;
case 0x5d3c10:goto L5d3c10;
case 0x5d3c14:c.instructions+=2;goto B5d3c14;
case 0x5d3c17:c.instructions+=1;goto B5d3c17;
case 0x5d3c19:goto L5d3c19;
case 0x5d3c1b:c.instructions+=1;goto B5d3c1b;
case 0x5d3c1e:goto L5d3c1e;
case 0x5d3c21:c.instructions+=7;goto B5d3c21;
case 0x5d3c22:c.instructions+=6;goto B5d3c22;
case 0x5d3c23:c.instructions+=5;goto B5d3c23;
case 0x5d3c28:c.instructions+=4;goto B5d3c28;
case 0x5d3c2a:c.instructions+=3;goto B5d3c2a;
case 0x5d3c2f:c.instructions+=2;goto B5d3c2f;
case 0x5d3c31:c.instructions+=1;goto B5d3c31;
case 0x5d3c33:goto L5d3c33;
case 0x5d3c36:c.instructions+=2;goto B5d3c36;
case 0x5d3c38:c.instructions+=1;goto B5d3c38;
case 0x5d3c3a:goto L5d3c3a;
case 0x5d3c3c:goto L5d3c3c;
case 0x5d3c3f:c.instructions+=10;goto B5d3c3f;
case 0x5d3c40:c.instructions+=9;goto B5d3c40;
case 0x5d3c45:c.instructions+=8;goto B5d3c45;
case 0x5d3c47:c.instructions+=7;goto B5d3c47;
case 0x5d3c48:c.instructions+=6;goto B5d3c48;
case 0x5d3c4a:c.instructions+=5;goto B5d3c4a;
case 0x5d3c4d:c.instructions+=4;goto B5d3c4d;
case 0x5d3c50:c.instructions+=3;goto B5d3c50;
case 0x5d3c53:c.instructions+=2;goto B5d3c53;
case 0x5d3c56:c.instructions+=1;goto B5d3c56;
case 0x5d3c60:goto L5d3c60;
case 0x5d3c61:c.instructions+=4;goto B5d3c61;
case 0x5d3c62:c.instructions+=3;goto B5d3c62;
case 0x5d3c66:c.instructions+=2;goto B5d3c66;
case 0x5d3c68:c.instructions+=1;goto B5d3c68;
case 0x5d3c6a:goto L5d3c6a;
case 0x5d3c70:c.instructions+=3;goto B5d3c70;
case 0x5d3c75:c.instructions+=2;goto B5d3c75;
case 0x5d3c77:c.instructions+=1;goto B5d3c77;
case 0x5d3c79:goto L5d3c79;
case 0x5d3c7f:c.instructions+=1;goto B5d3c7f;
case 0x5d3c82:goto L5d3c82;
case 0x5d3c84:c.instructions+=1;goto B5d3c84;
case 0x5d3c86:goto L5d3c86;
case 0x5d3c87:c.instructions+=3;goto B5d3c87;
case 0x5d3c8a:c.instructions+=2;goto B5d3c8a;
case 0x5d3c8c:c.instructions+=1;goto B5d3c8c;
case 0x5d3c8e:goto L5d3c8e;
case 0x5d3c90:goto L5d3c90;
case 0x5d3c91:c.instructions+=2;goto B5d3c91;
case 0x5d3c92:c.instructions+=1;goto B5d3c92;
case 0x5d3ca0:goto L5d3ca0;
case 0x5d3ca4:c.instructions+=13;goto B5d3ca4;
case 0x5d3ca5:c.instructions+=12;goto B5d3ca5;
case 0x5d3ca9:c.instructions+=11;goto B5d3ca9;
case 0x5d3caf:c.instructions+=10;goto B5d3caf;
case 0x5d3cb5:c.instructions+=9;goto B5d3cb5;
case 0x5d3cb6:c.instructions+=8;goto B5d3cb6;
case 0x5d3cb7:c.instructions+=7;goto B5d3cb7;
case 0x5d3cba:c.instructions+=6;goto B5d3cba;
case 0x5d3cbb:c.instructions+=5;goto B5d3cbb;
case 0x5d3cbd:c.instructions+=4;goto B5d3cbd;
case 0x5d3cc0:c.instructions+=3;goto B5d3cc0;
case 0x5d3cc3:c.instructions+=2;goto B5d3cc3;
case 0x5d3cc5:c.instructions+=1;goto B5d3cc5;
case 0x5d3cca:goto L5d3cca;
case 0x5d3cce:c.instructions+=6;goto B5d3cce;
case 0x5d3cd2:c.instructions+=5;goto B5d3cd2;
case 0x5d3cd6:c.instructions+=4;goto B5d3cd6;
case 0x5d3cd8:c.instructions+=3;goto B5d3cd8;
case 0x5d3cda:c.instructions+=2;goto B5d3cda;
case 0x5d3cdd:c.instructions+=1;goto B5d3cdd;
case 0x5d3cdf:goto L5d3cdf;
case 0x5d3ce3:c.instructions+=2;goto B5d3ce3;
case 0x5d3ce9:c.instructions+=1;goto B5d3ce9;
case 0x5d3ced:goto L5d3ced;
case 0x5d3cef:c.instructions+=1;goto B5d3cef;
case 0x5d3cf4:goto L5d3cf4;
case 0x5d3cf8:c.instructions+=5;goto B5d3cf8;
case 0x5d3cfc:c.instructions+=4;goto B5d3cfc;
case 0x5d3cfe:c.instructions+=3;goto B5d3cfe;
case 0x5d3d00:c.instructions+=2;goto B5d3d00;
case 0x5d3d03:c.instructions+=1;goto B5d3d03;
case 0x5d3d05:goto L5d3d05;
case 0x5d3d0b:goto L5d3d0b;
case 0x5d3d0f:c.instructions+=1;goto B5d3d0f;
case 0x5d3d14:goto L5d3d14;
case 0x5d3d16:c.instructions+=2;goto B5d3d16;
case 0x5d3d18:c.instructions+=1;goto B5d3d18;
case 0x5d3d1d:goto L5d3d1d;
case 0x5d3d1f:c.instructions+=65;goto B5d3d1f;
case 0x5d3d23:c.instructions+=64;goto B5d3d23;
case 0x5d3d25:c.instructions+=63;goto B5d3d25;
case 0x5d3d28:c.instructions+=62;goto B5d3d28;
case 0x5d3d2c:c.instructions+=61;goto B5d3d2c;
case 0x5d3d2e:c.instructions+=60;goto B5d3d2e;
case 0x5d3d34:c.instructions+=59;goto B5d3d34;
case 0x5d3d36:c.instructions+=58;goto B5d3d36;
case 0x5d3d3c:c.instructions+=57;goto B5d3d3c;
case 0x5d3d40:c.instructions+=56;goto B5d3d40;
case 0x5d3d43:c.instructions+=55;goto B5d3d43;
case 0x5d3d46:c.instructions+=54;goto B5d3d46;
case 0x5d3d49:c.instructions+=53;goto B5d3d49;
case 0x5d3d4c:c.instructions+=52;goto B5d3d4c;
case 0x5d3d4f:c.instructions+=51;goto B5d3d4f;
case 0x5d3d51:c.instructions+=50;goto B5d3d51;
case 0x5d3d54:c.instructions+=49;goto B5d3d54;
case 0x5d3d57:c.instructions+=48;goto B5d3d57;
case 0x5d3d5a:c.instructions+=47;goto B5d3d5a;
case 0x5d3d61:c.instructions+=46;goto B5d3d61;
case 0x5d3d63:c.instructions+=45;goto B5d3d63;
case 0x5d3d66:c.instructions+=44;goto B5d3d66;
case 0x5d3d69:c.instructions+=43;goto B5d3d69;
case 0x5d3d6c:c.instructions+=42;goto B5d3d6c;
case 0x5d3d6f:c.instructions+=41;goto B5d3d6f;
case 0x5d3d71:c.instructions+=40;goto B5d3d71;
case 0x5d3d73:c.instructions+=39;goto B5d3d73;
case 0x5d3d76:c.instructions+=38;goto B5d3d76;
case 0x5d3d79:c.instructions+=37;goto B5d3d79;
case 0x5d3d7c:c.instructions+=36;goto B5d3d7c;
case 0x5d3d7f:c.instructions+=35;goto B5d3d7f;
case 0x5d3d82:c.instructions+=34;goto B5d3d82;
case 0x5d3d84:c.instructions+=33;goto B5d3d84;
case 0x5d3d87:c.instructions+=32;goto B5d3d87;
case 0x5d3d89:c.instructions+=31;goto B5d3d89;
case 0x5d3d8c:c.instructions+=30;goto B5d3d8c;
case 0x5d3d8f:c.instructions+=29;goto B5d3d8f;
case 0x5d3d91:c.instructions+=28;goto B5d3d91;
case 0x5d3d98:c.instructions+=27;goto B5d3d98;
case 0x5d3d9b:c.instructions+=26;goto B5d3d9b;
case 0x5d3d9d:c.instructions+=25;goto B5d3d9d;
case 0x5d3da1:c.instructions+=24;goto B5d3da1;
case 0x5d3da4:c.instructions+=23;goto B5d3da4;
case 0x5d3da5:c.instructions+=22;goto B5d3da5;
case 0x5d3da7:c.instructions+=21;goto B5d3da7;
case 0x5d3dae:c.instructions+=20;goto B5d3dae;
case 0x5d3db1:c.instructions+=19;goto B5d3db1;
case 0x5d3db4:c.instructions+=18;goto B5d3db4;
case 0x5d3db7:c.instructions+=17;goto B5d3db7;
case 0x5d3db9:c.instructions+=16;goto B5d3db9;
case 0x5d3dbb:c.instructions+=15;goto B5d3dbb;
case 0x5d3dbe:c.instructions+=14;goto B5d3dbe;
case 0x5d3dc0:c.instructions+=13;goto B5d3dc0;
case 0x5d3dc1:c.instructions+=12;goto B5d3dc1;
case 0x5d3dc2:c.instructions+=11;goto B5d3dc2;
case 0x5d3dc4:c.instructions+=10;goto B5d3dc4;
case 0x5d3dcb:c.instructions+=9;goto B5d3dcb;
case 0x5d3dcd:c.instructions+=8;goto B5d3dcd;
case 0x5d3dd1:c.instructions+=7;goto B5d3dd1;
case 0x5d3dd3:c.instructions+=6;goto B5d3dd3;
case 0x5d3dd6:c.instructions+=5;goto B5d3dd6;
case 0x5d3dd7:c.instructions+=4;goto B5d3dd7;
case 0x5d3dd9:c.instructions+=3;goto B5d3dd9;
case 0x5d3ddb:c.instructions+=2;goto B5d3ddb;
case 0x5d3ddd:c.instructions+=1;goto B5d3ddd;
case 0x5d3de0:goto L5d3de0;
case 0x5d3de5:c.instructions+=2;goto B5d3de5;
case 0x5d3de7:c.instructions+=1;goto B5d3de7;
case 0x5d3de9:goto L5d3de9;
case 0x5d3dea:c.instructions+=2;goto B5d3dea;
case 0x5d3df1:c.instructions+=1;goto B5d3df1;
case 0x5d3df6:goto L5d3df6;
case 0x5d3df8:c.instructions+=2;goto B5d3df8;
case 0x5d3df9:c.instructions+=1;goto B5d3df9;
case 0x5d3dfe:goto L5d3dfe;
case 0x5d3e01:c.instructions+=4;goto B5d3e01;
case 0x5d3e04:c.instructions+=3;goto B5d3e04;
case 0x5d3e07:c.instructions+=2;goto B5d3e07;
case 0x5d3e0d:c.instructions+=1;goto B5d3e0d;
case 0x5d3e0f:goto L5d3e0f;
case 0x5d3e10:goto L5d3e10;
case 0x5d3e14:c.instructions+=2;goto B5d3e14;
case 0x5d3e19:c.instructions+=1;goto B5d3e19;
case 0x5d3e20:goto L5d3e20;
case 0x5d3e23:c.instructions+=1;goto B5d3e23;
case 0x5d3e25:goto L5d3e25;
case 0x5d3e28:c.instructions+=2;goto B5d3e28;
case 0x5d3e2d:c.instructions+=1;goto B5d3e2d;
case 0x5d3e2f:goto L5d3e2f;
case 0x5d3e31:goto L5d3e31;
case 0x5d3e40:goto L5d3e40;
case 0x5d3e46:c.instructions+=5;goto B5d3e46;
case 0x5d3e47:c.instructions+=4;goto B5d3e47;
case 0x5d3e49:c.instructions+=3;goto B5d3e49;
case 0x5d3e4b:c.instructions+=2;goto B5d3e4b;
case 0x5d3e4c:c.instructions+=1;goto B5d3e4c;
case 0x5d3e4e:goto L5d3e4e;
case 0x5d3e53:c.instructions+=2;goto B5d3e53;
case 0x5d3e57:c.instructions+=1;goto B5d3e57;
case 0x5d3e60:goto L5d3e60;
case 0x5d3e67:c.instructions+=2;goto B5d3e67;
case 0x5d3e69:c.instructions+=1;goto B5d3e69;
case 0x5d3e6b:goto L5d3e6b;
case 0x5d3e6c:c.instructions+=3;goto B5d3e6c;
case 0x5d3e71:c.instructions+=2;goto B5d3e71;
case 0x5d3e73:c.instructions+=1;goto B5d3e73;
case 0x5d3e75:goto L5d3e75;
case 0x5d3e77:goto L5d3e77;
case 0x5d3e78:c.instructions+=2;goto B5d3e78;
case 0x5d3e79:c.instructions+=1;goto B5d3e79;
case 0x5d3e80:goto L5d3e80;
case 0x5d3e86:c.instructions+=2;goto B5d3e86;
case 0x5d3e88:c.instructions+=1;goto B5d3e88;
case 0x5d3e8a:goto L5d3e8a;
case 0x5d3e8e:c.instructions+=2;goto B5d3e8e;
case 0x5d3e90:c.instructions+=1;goto B5d3e90;
case 0x5d3e92:goto L5d3e92;
case 0x5d3e98:c.instructions+=1;goto B5d3e98;
case 0x5d3e9a:goto L5d3e9a;
case 0x5d3ea0:c.instructions+=2;goto B5d3ea0;
case 0x5d3ea2:c.instructions+=1;goto B5d3ea2;
case 0x5d3ea3:goto L5d3ea3;
case 0x5d3ea5:c.instructions+=1;goto B5d3ea5;
case 0x5d3eb0:goto L5d3eb0;
case 0x5d3eb4:c.instructions+=2;goto B5d3eb4;
case 0x5d3eba:c.instructions+=1;goto B5d3eba;
case 0x5d3ebc:goto L5d3ebc;
case 0x5d3ebf:c.instructions+=11;goto B5d3ebf;
case 0x5d3ec5:c.instructions+=10;goto B5d3ec5;
case 0x5d3ec8:c.instructions+=9;goto B5d3ec8;
case 0x5d3ecd:c.instructions+=8;goto B5d3ecd;
case 0x5d3ecf:c.instructions+=7;goto B5d3ecf;
case 0x5d3ed1:c.instructions+=6;goto B5d3ed1;
case 0x5d3ed3:c.instructions+=5;goto B5d3ed3;
case 0x5d3ed5:c.instructions+=4;goto B5d3ed5;
case 0x5d3ed8:c.instructions+=3;goto B5d3ed8;
case 0x5d3ede:c.instructions+=2;goto B5d3ede;
case 0x5d3ee3:c.instructions+=1;goto B5d3ee3;
case 0x5d3ee4:goto L5d3ee4;
case 0x5d3ee6:c.instructions+=1;goto B5d3ee6;
case 0x5d3ef0:goto L5d3ef0;
case 0x5d3ef4:c.instructions+=4;goto B5d3ef4;
case 0x5d3ef6:c.instructions+=3;goto B5d3ef6;
case 0x5d3ef8:c.instructions+=2;goto B5d3ef8;
case 0x5d3efe:c.instructions+=1;goto B5d3efe;
case 0x5d3f00:goto L5d3f00;
case 0x5d3f05:c.instructions+=2;goto B5d3f05;
case 0x5d3f0a:c.instructions+=1;goto B5d3f0a;
case 0x5d3f0f:goto L5d3f0f;
case 0x5d3f10:goto L5d3f10;
case 0x5d3f11:c.instructions+=6;goto B5d3f11;
case 0x5d3f12:c.instructions+=5;goto B5d3f12;
case 0x5d3f16:c.instructions+=4;goto B5d3f16;
case 0x5d3f18:c.instructions+=3;goto B5d3f18;
case 0x5d3f1a:c.instructions+=2;goto B5d3f1a;
case 0x5d3f22:c.instructions+=1;goto B5d3f22;
case 0x5d3f24:goto L5d3f24;
case 0x5d3f2a:c.instructions+=3;goto B5d3f2a;
case 0x5d3f2d:c.instructions+=2;goto B5d3f2d;
case 0x5d3f30:c.instructions+=1;goto B5d3f30;
case 0x5d3f34:goto L5d3f34;
case 0x5d3f35:c.instructions+=8;goto B5d3f35;
case 0x5d3f39:c.instructions+=7;goto B5d3f39;
case 0x5d3f3b:c.instructions+=6;goto B5d3f3b;
case 0x5d3f3d:c.instructions+=5;goto B5d3f3d;
case 0x5d3f3f:c.instructions+=4;goto B5d3f3f;
case 0x5d3f43:c.instructions+=3;goto B5d3f43;
case 0x5d3f44:c.instructions+=2;goto B5d3f44;
case 0x5d3f46:c.instructions+=1;goto B5d3f46;
case 0x5d3f4b:goto L5d3f4b;
case 0x5d3f4e:c.instructions+=3;goto B5d3f4e;
case 0x5d3f50:c.instructions+=2;goto B5d3f50;
case 0x5d3f51:c.instructions+=1;goto B5d3f51;
case 0x5d3f53:goto L5d3f53;
case 0x5d3f57:c.instructions+=2;goto B5d3f57;
case 0x5d3f59:c.instructions+=1;goto B5d3f59;
case 0x5d3f5b:goto L5d3f5b;
case 0x5d3f61:c.instructions+=6;goto B5d3f61;
case 0x5d3f64:c.instructions+=5;goto B5d3f64;
case 0x5d3f66:c.instructions+=4;goto B5d3f66;
case 0x5d3f68:c.instructions+=3;goto B5d3f68;
case 0x5d3f69:c.instructions+=2;goto B5d3f69;
case 0x5d3f6a:c.instructions+=1;goto B5d3f6a;
case 0x5d3f6b:goto L5d3f6b;
case 0x5d3f71:goto L5d3f71;
case 0x5d3f72:c.instructions+=2;goto B5d3f72;
case 0x5d3f73:c.instructions+=1;goto B5d3f73;
case 0x5d3f80:goto L5d3f80;
case 0x5d3f84:c.instructions+=2;goto B5d3f84;
case 0x5d3f86:c.instructions+=1;goto B5d3f86;
case 0x5d3f88:goto L5d3f88;
case 0x5d3f8c:c.instructions+=4;goto B5d3f8c;
case 0x5d3f93:c.instructions+=3;goto B5d3f93;
case 0x5d3f96:c.instructions+=2;goto B5d3f96;
case 0x5d3f9d:c.instructions+=1;goto B5d3f9d;
case 0x5d3f9e:goto L5d3f9e;
case 0x5d3fa2:c.instructions+=4;goto B5d3fa2;
case 0x5d3fa5:c.instructions+=3;goto B5d3fa5;
case 0x5d3fa7:c.instructions+=2;goto B5d3fa7;
case 0x5d3fae:c.instructions+=1;goto B5d3fae;
case 0x5d3fb0:goto L5d3fb0;
case 0x5d3fb4:c.instructions+=2;goto B5d3fb4;
case 0x5d3fb8:c.instructions+=1;goto B5d3fb8;
case 0x5d3fba:goto L5d3fba;
case 0x5d3fbe:c.instructions+=2;goto B5d3fbe;
case 0x5d3fc2:c.instructions+=1;goto B5d3fc2;
case 0x5d3fc4:goto L5d3fc4;
case 0x5d3fc7:c.instructions+=2;goto B5d3fc7;
case 0x5d3fc9:c.instructions+=1;goto B5d3fc9;
case 0x5d3fcb:goto L5d3fcb;
case 0x5d3fd2:c.instructions+=2;goto B5d3fd2;
case 0x5d3fd4:c.instructions+=1;goto B5d3fd4;
case 0x5d3fd6:goto L5d3fd6;
case 0x5d3fd9:c.instructions+=3;goto B5d3fd9;
case 0x5d3fdc:c.instructions+=2;goto B5d3fdc;
case 0x5d3fe3:c.instructions+=1;goto B5d3fe3;
case 0x5d3fe4:goto L5d3fe4;
case 0x5d3fe6:c.instructions+=1;goto B5d3fe6;
case 0x5d3ff0:goto L5d3ff0;
case 0x5d3ff4:c.instructions+=2;goto B5d3ff4;
case 0x5d3ff8:c.instructions+=1;goto B5d3ff8;
case 0x5d3ffa:goto L5d3ffa;
case 0x5d3ffe:c.instructions+=1;goto B5d3ffe;
default:missing_instruction(c.pc);}
B5d3001:L5d3001:{c.instructions+=10;NFSU2_TR(0x5d3001);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3005:{NFSU2_TR(0x5d3005);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d3009:{NFSU2_TR(0x5d3009);
{u32 ea_=u32(u32(7997180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d300f:{NFSU2_TR(0x5d300f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3013:{NFSU2_TR(0x5d3013);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d3015:{NFSU2_TR(0x5d3015);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3018:{NFSU2_TR(0x5d3018);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d301b:{NFSU2_TR(0x5d301b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d301f:{NFSU2_TR(0x5d301f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3021:{NFSU2_TR(0x5d3021);
if(r1(R+518)){{goto L5d3037;}}
}
B5d3023:L5d3023:{c.instructions+=6;NFSU2_TR(0x5d3023);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3027:{NFSU2_TR(0x5d3027);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d302b:{NFSU2_TR(0x5d302b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d302d:{NFSU2_TR(0x5d302d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d3031:{NFSU2_TR(0x5d3031);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3034:{NFSU2_TR(0x5d3034);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3037:L5d3037:{c.instructions+=2;NFSU2_TR(0x5d3037);
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
B5d303a:{NFSU2_TR(0x5d303a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3040:L5d3040:{c.instructions+=41;NFSU2_TR(0x5d3040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d3043:{NFSU2_TR(0x5d3043);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5d3047:{NFSU2_TR(0x5d3047);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3049:{NFSU2_TR(0x5d3049);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d304c:{NFSU2_TR(0x5d304c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d304f:{NFSU2_TR(0x5d304f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3053:{NFSU2_TR(0x5d3053);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5d3057:{NFSU2_TR(0x5d3057);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5d305b:{NFSU2_TR(0x5d305b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d305f:{NFSU2_TR(0x5d305f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d3063:{NFSU2_TR(0x5d3063);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3067:{NFSU2_TR(0x5d3067);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d306b:{NFSU2_TR(0x5d306b);
{u32 ea_=u32(u32(7997180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3071:{NFSU2_TR(0x5d3071);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d3075:{NFSU2_TR(0x5d3075);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3079:{NFSU2_TR(0x5d3079);
{u32 ea_=u32(u32(7997180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d307f:{NFSU2_TR(0x5d307f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3083:{NFSU2_TR(0x5d3083);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d3087:{NFSU2_TR(0x5d3087);
{u32 ea_=u32(u32(7997180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d308d:{NFSU2_TR(0x5d308d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3091:{NFSU2_TR(0x5d3091);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d3093:{NFSU2_TR(0x5d3093);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5d3095:{NFSU2_TR(0x5d3095);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3097:{NFSU2_TR(0x5d3097);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d309b:{NFSU2_TR(0x5d309b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5d309d:{NFSU2_TR(0x5d309d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d30a0:{NFSU2_TR(0x5d30a0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d30a4:{NFSU2_TR(0x5d30a4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d30a8:{NFSU2_TR(0x5d30a8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d30ab:{NFSU2_TR(0x5d30ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d30af:{NFSU2_TR(0x5d30af);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5d30b1:{NFSU2_TR(0x5d30b1);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5d30b3:{NFSU2_TR(0x5d30b3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d30b5:{NFSU2_TR(0x5d30b5);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5d30b7:{NFSU2_TR(0x5d30b7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d30bb:{NFSU2_TR(0x5d30bb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d30be:{NFSU2_TR(0x5d30be);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d30c2:{NFSU2_TR(0x5d30c2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d30c6:{NFSU2_TR(0x5d30c6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d30c9:{NFSU2_TR(0x5d30c9);
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
B5d30cc:{NFSU2_TR(0x5d30cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d30d0:L5d30d0:{c.instructions+=12;NFSU2_TR(0x5d30d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d30d1:{NFSU2_TR(0x5d30d1);
__builtin_memmove((R+20),(R+16),4);
}
B5d30d3:{NFSU2_TR(0x5d30d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d30d6:{NFSU2_TR(0x5d30d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B5d30dc:{NFSU2_TR(0x5d30dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d30dd:{NFSU2_TR(0x5d30dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d30de:{NFSU2_TR(0x5d30de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d30df:{NFSU2_TR(0x5d30df);
__builtin_memmove((R+28),(R+4),4);
}
B5d30e1:{NFSU2_TR(0x5d30e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d30e4:{NFSU2_TR(0x5d30e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x876c80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5d30eb:{NFSU2_TR(0x5d30eb);
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
B5d30ed:{NFSU2_TR(0x5d30ed);
if(r1(R+518)){{goto L5d3218;}}
}
B5d30f3:L5d30f3:{c.instructions+=2;NFSU2_TR(0x5d30f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d30f7:{NFSU2_TR(0x5d30f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d30fcull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B5d30fc:L5d30fc:{c.instructions+=7;NFSU2_TR(0x5d30fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3102:{NFSU2_TR(0x5d3102);
__builtin_memmove((R+4),gp(0x7a4634),4);
}
B5d3108:{NFSU2_TR(0x5d3108);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5d3109:{NFSU2_TR(0x5d3109);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d310b:{NFSU2_TR(0x5d310b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d310f:{NFSU2_TR(0x5d310f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d3117:{NFSU2_TR(0x5d3117);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d3218;}}
}
B5d311d:L5d311d:{c.instructions+=3;NFSU2_TR(0x5d311d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8full))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3123:{NFSU2_TR(0x5d3123);
w4(R+12,u32(0x80808080ull));
}
B5d3128:{NFSU2_TR(0x5d3128);
{goto L5d3130;}
}
B5d3130:L5d3130:{c.instructions+=6;NFSU2_TR(0x5d3130);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3134:{NFSU2_TR(0x5d3134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3135:{NFSU2_TR(0x5d3135);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3139:{NFSU2_TR(0x5d3139);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d313a:{NFSU2_TR(0x5d313a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d313d:{NFSU2_TR(0x5d313d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3142ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3040u);}goto L5d3040;}
}
B5d3142:L5d3142:{c.instructions+=6;NFSU2_TR(0x5d3142);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d3146:{NFSU2_TR(0x5d3146);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3147:{NFSU2_TR(0x5d3147);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d314b:{NFSU2_TR(0x5d314b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d314c:{NFSU2_TR(0x5d314c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d314f:{NFSU2_TR(0x5d314f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3154ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3040u);}goto L5d3040;}
}
B5d3154:L5d3154:{c.instructions+=17;NFSU2_TR(0x5d3154);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3158:{NFSU2_TR(0x5d3158);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d315c:{NFSU2_TR(0x5d315c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d315f:{NFSU2_TR(0x5d315f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5d3162:{NFSU2_TR(0x5d3162);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d3164:{NFSU2_TR(0x5d3164);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5d3166:{NFSU2_TR(0x5d3166);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d316a:{NFSU2_TR(0x5d316a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d316e:{NFSU2_TR(0x5d316e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3172:{NFSU2_TR(0x5d3172);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3176:{NFSU2_TR(0x5d3176);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d317a:{NFSU2_TR(0x5d317a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d317e:{NFSU2_TR(0x5d317e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3182:{NFSU2_TR(0x5d3182);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3186:{NFSU2_TR(0x5d3186);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d318a:{NFSU2_TR(0x5d318a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d318e:{NFSU2_TR(0x5d318e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d3194;}}
}
B5d3190:L5d3190:{c.instructions+=2;NFSU2_TR(0x5d3190);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d3192:{NFSU2_TR(0x5d3192);
{goto L5d3196;}
}
B5d3194:L5d3194:{c.instructions+=1;NFSU2_TR(0x5d3194);
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+8))));
}
B5d3196:L5d3196:{c.instructions+=2;NFSU2_TR(0x5d3196);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d3198:{NFSU2_TR(0x5d3198);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d319e;}}
}
B5d319a:L5d319a:{c.instructions+=2;NFSU2_TR(0x5d319a);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5d319c:{NFSU2_TR(0x5d319c);
{goto L5d31a0;}
}
B5d319e:L5d319e:{c.instructions+=1;NFSU2_TR(0x5d319e);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B5d31a0:L5d31a0:{c.instructions+=20;NFSU2_TR(0x5d31a0);
w1(R+4,shr<u8>(r1(R+4),u64(u32(0x1ull))));
}
B5d31a2:{NFSU2_TR(0x5d31a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d31a4:{NFSU2_TR(0x5d31a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d31ab:{NFSU2_TR(0x5d31ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d31b2:{NFSU2_TR(0x5d31b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x8bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d31b9:{NFSU2_TR(0x5d31b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x8full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d31c0:{NFSU2_TR(0x5d31c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d31c3:{NFSU2_TR(0x5d31c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x876c80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5d31ca:{NFSU2_TR(0x5d31ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d31cd:{NFSU2_TR(0x5d31cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d31cf:{NFSU2_TR(0x5d31cf);
w1(R+0,shr<u8>(r1(R+0),u64(u32(0x1ull))));
}
B5d31d1:{NFSU2_TR(0x5d31d1);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d31d6:{NFSU2_TR(0x5d31d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d31dd:{NFSU2_TR(0x5d31dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d31e4:{NFSU2_TR(0x5d31e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x8full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d31eb:{NFSU2_TR(0x5d31eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x9bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d31f2:{NFSU2_TR(0x5d31f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d31f3:{NFSU2_TR(0x5d31f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d31f7:{NFSU2_TR(0x5d31f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d31f8:{NFSU2_TR(0x5d31f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d31fdull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B5d31fd:L5d31fd:{c.instructions+=8;NFSU2_TR(0x5d31fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3201:{NFSU2_TR(0x5d3201);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3207:{NFSU2_TR(0x5d3207);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d3208:{NFSU2_TR(0x5d3208);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5d320b:{NFSU2_TR(0x5d320b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5d320c:{NFSU2_TR(0x5d320c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d320e:{NFSU2_TR(0x5d320e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3212:{NFSU2_TR(0x5d3212);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3130u);}goto L5d3130;}}
}
B5d3218:L5d3218:{c.instructions+=6;NFSU2_TR(0x5d3218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3219:{NFSU2_TR(0x5d3219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d321a:{NFSU2_TR(0x5d321a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d321b:{NFSU2_TR(0x5d321b);
__builtin_memmove((R+16),(R+20),4);
}
B5d321d:{NFSU2_TR(0x5d321d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d321e:{NFSU2_TR(0x5d321e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3230:L5d3230:{c.instructions+=3;NFSU2_TR(0x5d3230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d3232:{NFSU2_TR(0x5d3232);
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
B5d3234:{NFSU2_TR(0x5d3234);
if(r1(R+518)){{goto L5d324a;}}
}
B5d3236:L5d3236:{c.instructions+=3;NFSU2_TR(0x5d3236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3239:{NFSU2_TR(0x5d3239);
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
B5d323b:{NFSU2_TR(0x5d323b);
if(r1(R+518)){{goto L5d324a;}}
}
B5d323d:L5d323d:{c.instructions+=2;NFSU2_TR(0x5d323d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5d3243:{NFSU2_TR(0x5d3243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d324a:L5d324a:{c.instructions+=1;NFSU2_TR(0x5d324a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3250:L5d3250:{c.instructions+=3;NFSU2_TR(0x5d3250);
__builtin_memmove((R+0),gp(0x883d74),4);
}
B5d3255:{NFSU2_TR(0x5d3255);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3257:{NFSU2_TR(0x5d3257);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3280;}}
}
B5d3259:L5d3259:{c.instructions+=6;NFSU2_TR(0x5d3259);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d325d:{NFSU2_TR(0x5d325d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d325f:{NFSU2_TR(0x5d325f);
u8 U[4];
w4(U+0,u32(0x7a5198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3264:{NFSU2_TR(0x5d3264);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3265:{NFSU2_TR(0x5d3265);
u8 U[4];
w4(U+0,u32(0x110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d326a:{NFSU2_TR(0x5d326a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d326full));
TAIL_STATIC(0x440df0u,440);
}
B5d326f:L5d326f:{c.instructions+=5;NFSU2_TR(0x5d326f);
__builtin_memmove(gp(0x883d74),(R+0),4);
}
B5d3274:{NFSU2_TR(0x5d3274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3277:{NFSU2_TR(0x5d3277);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d327a:{NFSU2_TR(0x5d327a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B5d327d:{NFSU2_TR(0x5d327d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3280:L5d3280:{c.instructions+=5;NFSU2_TR(0x5d3280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3281:{NFSU2_TR(0x5d3281);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3282:{NFSU2_TR(0x5d3282);
w4(R+24,u32(0x876c80ull));
}
B5d3287:{NFSU2_TR(0x5d3287);
w4(R+28,u32(0x800ef0ull));
}
B5d328c:{NFSU2_TR(0x5d328c);
__builtin_memmove((R+16),(R+16),4);
}
B5d3290:L5d3290:{c.instructions+=4;NFSU2_TR(0x5d3290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d3292:{NFSU2_TR(0x5d3292);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3294:{NFSU2_TR(0x5d3294);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d329a:{NFSU2_TR(0x5d329a);
if(r1(R+518)){{goto L5d32b4;}}
}
B5d329c:L5d329c:{c.instructions+=4;NFSU2_TR(0x5d329c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d329e:{NFSU2_TR(0x5d329e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d32a0:{NFSU2_TR(0x5d32a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d32a1:{NFSU2_TR(0x5d32a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d32a6ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d32a6:L5d32a6:{c.instructions+=3;NFSU2_TR(0x5d32a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d32a9:{NFSU2_TR(0x5d32a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d32aa:{NFSU2_TR(0x5d32aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d32afull));
TAIL_STATIC(0x4901d0u,490);
}
B5d32af:L5d32af:{c.instructions+=2;NFSU2_TR(0x5d32af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d32b2:{NFSU2_TR(0x5d32b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d32b4:L5d32b4:{c.instructions+=4;NFSU2_TR(0x5d32b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x98ull))));
}
B5d32ba:{NFSU2_TR(0x5d32ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5d32bd:{NFSU2_TR(0x5d32bd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x802028ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x802028ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d32c3:{NFSU2_TR(0x5d32c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3290u);}goto L5d3290;}}
}
B5d32c5:L5d32c5:{c.instructions+=4;NFSU2_TR(0x5d32c5);
u8 U[4];
w4(U+0,u32(0x7a5188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d32ca:{NFSU2_TR(0x5d32ca);
s4(0x883d78,u32(0x0ull));
}
B5d32d4:{NFSU2_TR(0x5d32d4);
s4(0x883d7c,u32(0x0ull));
}
B5d32de:{NFSU2_TR(0x5d32de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d32e3ull));
TAIL_STATIC(0x43db50u,43d);
}
B5d32e3:L5d32e3:{c.instructions+=3;NFSU2_TR(0x5d32e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d32e4:{NFSU2_TR(0x5d32e4);
u8 U[4];
w4(U+0,u32(0x88ea68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d32e9:{NFSU2_TR(0x5d32e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d32eeull));
TAIL_STATIC(0x48b8b0u,48b);
}
B5d32ee:L5d32ee:{c.instructions+=4;NFSU2_TR(0x5d32ee);
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
B5d32f1:{NFSU2_TR(0x5d32f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d32f2:{NFSU2_TR(0x5d32f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d32f3:{NFSU2_TR(0x5d32f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3300:L5d3300:{c.instructions+=3;NFSU2_TR(0x5d3300);
__builtin_memmove((R+0),gp(0x883d80),4);
}
B5d3305:{NFSU2_TR(0x5d3305);
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
B5d3307:{NFSU2_TR(0x5d3307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3321;}}
}
B5d3309:L5d3309:{c.instructions+=5;NFSU2_TR(0x5d3309);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d330b:{NFSU2_TR(0x5d330b);
u8 U[4];
w4(U+0,u32(0x7a51a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3310:{NFSU2_TR(0x5d3310);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3312:{NFSU2_TR(0x5d3312);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3314:{NFSU2_TR(0x5d3314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3319ull));
TAIL_STATIC(0x440df0u,440);
}
B5d3319:L5d3319:{c.instructions+=2;NFSU2_TR(0x5d3319);
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
B5d331c:{NFSU2_TR(0x5d331c);
__builtin_memmove(gp(0x883d80),(R+0),4);
}
B5d3321:L5d3321:{c.instructions+=1;NFSU2_TR(0x5d3321);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3330:L5d3330:{c.instructions+=19;NFSU2_TR(0x5d3330);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3336:{NFSU2_TR(0x5d3336);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d333a:{NFSU2_TR(0x5d333a);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d333d:{NFSU2_TR(0x5d333d);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3340:{NFSU2_TR(0x5d3340);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3342:{NFSU2_TR(0x5d3342);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3345:{NFSU2_TR(0x5d3345);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d3347:{NFSU2_TR(0x5d3347);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d334a:{NFSU2_TR(0x5d334a);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d334d:{NFSU2_TR(0x5d334d);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3350:{NFSU2_TR(0x5d3350);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3353:{NFSU2_TR(0x5d3353);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d3355:{NFSU2_TR(0x5d3355);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d3357:{NFSU2_TR(0x5d3357);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d335b:{NFSU2_TR(0x5d335b);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3361:{NFSU2_TR(0x5d3361);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3365:{NFSU2_TR(0x5d3365);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3367:{NFSU2_TR(0x5d3367);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d336a:{NFSU2_TR(0x5d336a);
if(r1(R+518)){{goto L5d338c;}}
}
B5d336c:L5d336c:{c.instructions+=7;NFSU2_TR(0x5d336c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d336e:{NFSU2_TR(0x5d336e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3372:{NFSU2_TR(0x5d3372);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3376:{NFSU2_TR(0x5d3376);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d337c:{NFSU2_TR(0x5d337c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d337e:{NFSU2_TR(0x5d337e);
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
B5d3381:{NFSU2_TR(0x5d3381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d338c;}}
}
B5d3383:L5d3383:{c.instructions+=3;NFSU2_TR(0x5d3383);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d3385:{NFSU2_TR(0x5d3385);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3389:{NFSU2_TR(0x5d3389);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d338c:L5d338c:{c.instructions+=16;NFSU2_TR(0x5d338c);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d338f:{NFSU2_TR(0x5d338f);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3392:{NFSU2_TR(0x5d3392);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3394:{NFSU2_TR(0x5d3394);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3397:{NFSU2_TR(0x5d3397);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d3399:{NFSU2_TR(0x5d3399);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d339c:{NFSU2_TR(0x5d339c);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d339f:{NFSU2_TR(0x5d339f);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33a2:{NFSU2_TR(0x5d33a2);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d33a5:{NFSU2_TR(0x5d33a5);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d33a7:{NFSU2_TR(0x5d33a7);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d33a9:{NFSU2_TR(0x5d33a9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d33ad:{NFSU2_TR(0x5d33ad);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d33b1:{NFSU2_TR(0x5d33b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d33b3:{NFSU2_TR(0x5d33b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d33b6:{NFSU2_TR(0x5d33b6);
if(r1(R+518)){{goto L5d33be;}}
}
B5d33b8:L5d33b8:{c.instructions+=2;NFSU2_TR(0x5d33b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d33ba:{NFSU2_TR(0x5d33ba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33be:L5d33be:{c.instructions+=4;NFSU2_TR(0x5d33be);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d33c4:{NFSU2_TR(0x5d33c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d33c6:{NFSU2_TR(0x5d33c6);
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
B5d33c9:{NFSU2_TR(0x5d33c9);
if(r1(R+518)){{goto L5d3448;}}
}
B5d33cb:L5d33cb:{c.instructions+=16;NFSU2_TR(0x5d33cb);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33ce:{NFSU2_TR(0x5d33ce);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d33d1:{NFSU2_TR(0x5d33d1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33d3:{NFSU2_TR(0x5d33d3);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d33d6:{NFSU2_TR(0x5d33d6);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d33d8:{NFSU2_TR(0x5d33d8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33db:{NFSU2_TR(0x5d33db);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d33de:{NFSU2_TR(0x5d33de);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33e1:{NFSU2_TR(0x5d33e1);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d33e4:{NFSU2_TR(0x5d33e4);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d33e6:{NFSU2_TR(0x5d33e6);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d33e8:{NFSU2_TR(0x5d33e8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d33ec:{NFSU2_TR(0x5d33ec);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d33f0:{NFSU2_TR(0x5d33f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d33f2:{NFSU2_TR(0x5d33f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d33f5:{NFSU2_TR(0x5d33f5);
if(r1(R+518)){{goto L5d33fd;}}
}
B5d33f7:L5d33f7:{c.instructions+=2;NFSU2_TR(0x5d33f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d33f9:{NFSU2_TR(0x5d33f9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d33fd:L5d33fd:{c.instructions+=4;NFSU2_TR(0x5d33fd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d3403:{NFSU2_TR(0x5d3403);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3405:{NFSU2_TR(0x5d3405);
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
B5d3408:{NFSU2_TR(0x5d3408);
if(r1(R+518)){{goto L5d3448;}}
}
B5d340a:L5d340a:{c.instructions+=2;NFSU2_TR(0x5d340a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x4ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5d340e:{NFSU2_TR(0x5d340e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3448;}}
}
B5d3410:L5d3410:{c.instructions+=16;NFSU2_TR(0x5d3410);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3413:{NFSU2_TR(0x5d3413);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3416:{NFSU2_TR(0x5d3416);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3418:{NFSU2_TR(0x5d3418);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d341b:{NFSU2_TR(0x5d341b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d341d:{NFSU2_TR(0x5d341d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3420:{NFSU2_TR(0x5d3420);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3423:{NFSU2_TR(0x5d3423);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3426:{NFSU2_TR(0x5d3426);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3429:{NFSU2_TR(0x5d3429);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d342b:{NFSU2_TR(0x5d342b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5d342d:{NFSU2_TR(0x5d342d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3431:{NFSU2_TR(0x5d3431);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d3435:{NFSU2_TR(0x5d3435);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3437:{NFSU2_TR(0x5d3437);
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
B5d343a:{NFSU2_TR(0x5d343a);
if(r1(R+518)){{goto L5d3442;}}
}
B5d343c:L5d343c:{c.instructions+=2;NFSU2_TR(0x5d343c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d343e:{NFSU2_TR(0x5d343e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3442:L5d3442:{c.instructions+=1;NFSU2_TR(0x5d3442);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d3448:L5d3448:{c.instructions+=1;NFSU2_TR(0x5d3448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3450:L5d3450:{c.instructions+=10;NFSU2_TR(0x5d3450);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3451:{NFSU2_TR(0x5d3451);
__builtin_memmove((R+20),(R+16),4);
}
B5d3453:{NFSU2_TR(0x5d3453);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5d3456:{NFSU2_TR(0x5d3456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5d3459:{NFSU2_TR(0x5d3459);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d345a:{NFSU2_TR(0x5d345a);
__builtin_memmove((R+12),(R+4),4);
}
B5d345c:{NFSU2_TR(0x5d345c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3460:{NFSU2_TR(0x5d3460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3461:{NFSU2_TR(0x5d3461);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3462:{NFSU2_TR(0x5d3462);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3489;}}
}
B5d3464:L5d3464:{c.instructions+=3;NFSU2_TR(0x5d3464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3467:{NFSU2_TR(0x5d3467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3468:{NFSU2_TR(0x5d3468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d346dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3330u);}goto L5d3330;}
}
B5d346d:L5d346d:{c.instructions+=4;NFSU2_TR(0x5d346d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3473:{NFSU2_TR(0x5d3473);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3475:{NFSU2_TR(0x5d3475);
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
B5d3478:{NFSU2_TR(0x5d3478);
if(r1(R+514)){{goto L5d3489;}}
}
B5d347a:L5d347a:{c.instructions+=7;NFSU2_TR(0x5d347a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3480:{NFSU2_TR(0x5d3480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3481:{NFSU2_TR(0x5d3481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3482:{NFSU2_TR(0x5d3482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3483:{NFSU2_TR(0x5d3483);
__builtin_memmove((R+16),(R+20),4);
}
B5d3485:{NFSU2_TR(0x5d3485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3486:{NFSU2_TR(0x5d3486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3489:L5d3489:{c.instructions+=6;NFSU2_TR(0x5d3489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d348c:{NFSU2_TR(0x5d348c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3490:{NFSU2_TR(0x5d3490);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5d3494:{NFSU2_TR(0x5d3494);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d3496:{NFSU2_TR(0x5d3496);
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
B5d3498:{NFSU2_TR(0x5d3498);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d35a1;}}
}
B5d349e:L5d349e:{c.instructions+=1;NFSU2_TR(0x5d349e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d34a1:L5d34a1:{c.instructions+=32;NFSU2_TR(0x5d34a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d34a2:{NFSU2_TR(0x5d34a2);
__builtin_memmove((R+0),(R+28),4);
}
B5d34a4:{NFSU2_TR(0x5d34a4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d34a5:{NFSU2_TR(0x5d34a5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d34a5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d34a5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d34a7:{NFSU2_TR(0x5d34a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d34aa:{NFSU2_TR(0x5d34aa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d34ac:{NFSU2_TR(0x5d34ac);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d34ae:{NFSU2_TR(0x5d34ae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d34b2:{NFSU2_TR(0x5d34b2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d34b5:{NFSU2_TR(0x5d34b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d34b9:{NFSU2_TR(0x5d34b9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d34bc:{NFSU2_TR(0x5d34bc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d34c0:{NFSU2_TR(0x5d34c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B5d34c3:{NFSU2_TR(0x5d34c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d34c6:{NFSU2_TR(0x5d34c6);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d34ca:{NFSU2_TR(0x5d34ca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B5d34cc:{NFSU2_TR(0x5d34cc);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d34cf:{NFSU2_TR(0x5d34cf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d34d1:{NFSU2_TR(0x5d34d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d34d5:{NFSU2_TR(0x5d34d5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d34d7:{NFSU2_TR(0x5d34d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d34d8:{NFSU2_TR(0x5d34d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d34d9:{NFSU2_TR(0x5d34d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d34dd:{NFSU2_TR(0x5d34dd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d34e1:{NFSU2_TR(0x5d34e1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d34e3:{NFSU2_TR(0x5d34e3);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d34e5:{NFSU2_TR(0x5d34e5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d34e9:{NFSU2_TR(0x5d34e9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d34ed:{NFSU2_TR(0x5d34ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d34ef:{NFSU2_TR(0x5d34ef);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d34f1:{NFSU2_TR(0x5d34f1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d34f5:{NFSU2_TR(0x5d34f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d34faull));
TAIL_STATIC(0x43ce50u,43c);
}
B5d34fa:L5d34fa:{c.instructions+=18;NFSU2_TR(0x5d34fa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d34fe:{NFSU2_TR(0x5d34fe);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d3500:{NFSU2_TR(0x5d3500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d3503:{NFSU2_TR(0x5d3503);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3507:{NFSU2_TR(0x5d3507);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d350b:{NFSU2_TR(0x5d350b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d350f:{NFSU2_TR(0x5d350f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3513:{NFSU2_TR(0x5d3513);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3515:{NFSU2_TR(0x5d3515);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3519:{NFSU2_TR(0x5d3519);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d351d:{NFSU2_TR(0x5d351d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3521:{NFSU2_TR(0x5d3521);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3525:{NFSU2_TR(0x5d3525);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3527:{NFSU2_TR(0x5d3527);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d352b:{NFSU2_TR(0x5d352b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3531:{NFSU2_TR(0x5d3531);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3533:{NFSU2_TR(0x5d3533);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d3536:{NFSU2_TR(0x5d3536);
if(r1(R+514)){{goto L5d354a;}}
}
B5d3538:L5d3538:{c.instructions+=7;NFSU2_TR(0x5d3538);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d353a:{NFSU2_TR(0x5d353a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d353c:{NFSU2_TR(0x5d353c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3540:{NFSU2_TR(0x5d3540);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3544:{NFSU2_TR(0x5d3544);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3546:{NFSU2_TR(0x5d3546);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d3548:{NFSU2_TR(0x5d3548);
{goto L5d3575;}
}
B5d354a:L5d354a:{c.instructions+=5;NFSU2_TR(0x5d354a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d354e:{NFSU2_TR(0x5d354e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3552:{NFSU2_TR(0x5d3552);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3554:{NFSU2_TR(0x5d3554);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3557:{NFSU2_TR(0x5d3557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3573;}}
}
B5d3559:L5d3559:{c.instructions+=11;NFSU2_TR(0x5d3559);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d355d:{NFSU2_TR(0x5d355d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3561:{NFSU2_TR(0x5d3561);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d3563:{NFSU2_TR(0x5d3563);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d3565:{NFSU2_TR(0x5d3565);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d3567:{NFSU2_TR(0x5d3567);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d3569:{NFSU2_TR(0x5d3569);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d356b:{NFSU2_TR(0x5d356b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d356d:{NFSU2_TR(0x5d356d);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d356f:{NFSU2_TR(0x5d356f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d3571:{NFSU2_TR(0x5d3571);
{goto L5d3575;}
}
B5d3573:L5d3573:{c.instructions+=1;NFSU2_TR(0x5d3573);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d3575:L5d3575:{c.instructions+=4;NFSU2_TR(0x5d3575);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d3579:{NFSU2_TR(0x5d3579);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d357b:{NFSU2_TR(0x5d357b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d357e:{NFSU2_TR(0x5d357e);
if(r1(R+514)){{goto L5d3590;}}
}
B5d3580:L5d3580:{c.instructions+=5;NFSU2_TR(0x5d3580);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d3584:{NFSU2_TR(0x5d3584);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3587:{NFSU2_TR(0x5d3587);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3589:{NFSU2_TR(0x5d3589);
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
B5d358c:{NFSU2_TR(0x5d358c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d35a1;}}
}
B5d358e:L5d358e:{c.instructions+=1;NFSU2_TR(0x5d358e);
{goto L5d3592;}
}
B5d3590:L5d3590:{c.instructions+=1;NFSU2_TR(0x5d3590);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d3592:L5d3592:{c.instructions+=4;NFSU2_TR(0x5d3592);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5d3596:{NFSU2_TR(0x5d3596);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5d3599:{NFSU2_TR(0x5d3599);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5d359b:{NFSU2_TR(0x5d359b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d34a1u);}goto L5d34a1;}}
}
B5d35a1:L5d35a1:{c.instructions+=7;NFSU2_TR(0x5d35a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d35a5:{NFSU2_TR(0x5d35a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d35a6:{NFSU2_TR(0x5d35a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d35a7:{NFSU2_TR(0x5d35a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d35a8:{NFSU2_TR(0x5d35a8);
__builtin_memmove((R+16),(R+20),4);
}
B5d35aa:{NFSU2_TR(0x5d35aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d35ab:{NFSU2_TR(0x5d35ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d35b0:L5d35b0:{c.instructions+=11;NFSU2_TR(0x5d35b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d35b1:{NFSU2_TR(0x5d35b1);
__builtin_memmove((R+20),(R+16),4);
}
B5d35b3:{NFSU2_TR(0x5d35b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d35b6:{NFSU2_TR(0x5d35b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B5d35bc:{NFSU2_TR(0x5d35bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d35bd:{NFSU2_TR(0x5d35bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d35be:{NFSU2_TR(0x5d35be);
__builtin_memmove((R+24),(R+4),4);
}
B5d35c0:{NFSU2_TR(0x5d35c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d35c1:{NFSU2_TR(0x5d35c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B5d35c5:{NFSU2_TR(0x5d35c5);
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
B5d35c7:{NFSU2_TR(0x5d35c7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d3600;}}
}
B5d35c9:L5d35c9:{c.instructions+=3;NFSU2_TR(0x5d35c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d35cc:{NFSU2_TR(0x5d35cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d35d0:{NFSU2_TR(0x5d35d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d35d3:L5d35d3:{c.instructions+=16;NFSU2_TR(0x5d35d3);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d35d6:{NFSU2_TR(0x5d35d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5d35d9:{NFSU2_TR(0x5d35d9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d35db:{NFSU2_TR(0x5d35db);
{u32 ea_=u32(r4(R+0)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d35de:{NFSU2_TR(0x5d35de);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5d35e1:{NFSU2_TR(0x5d35e1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d35e2:{NFSU2_TR(0x5d35e2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d35e5:{NFSU2_TR(0x5d35e5);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d35e8:{NFSU2_TR(0x5d35e8);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d35eb:{NFSU2_TR(0x5d35eb);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d35ef:{NFSU2_TR(0x5d35ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d35f3:{NFSU2_TR(0x5d35f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d35f5:{NFSU2_TR(0x5d35f5);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d35f8:{NFSU2_TR(0x5d35f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d35fb:{NFSU2_TR(0x5d35fb);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d35fe:{NFSU2_TR(0x5d35fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d35d3u);}goto L5d35d3;}}
}
B5d3600:L5d3600:{c.instructions+=7;NFSU2_TR(0x5d3600);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3604:{NFSU2_TR(0x5d3604);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3605:{NFSU2_TR(0x5d3605);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3609:{NFSU2_TR(0x5d3609);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d360a:{NFSU2_TR(0x5d360a);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d360e:{NFSU2_TR(0x5d360e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d360f:{NFSU2_TR(0x5d360f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3614ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5d3614:L5d3614:{c.instructions+=7;NFSU2_TR(0x5d3614);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3618:{NFSU2_TR(0x5d3618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3619:{NFSU2_TR(0x5d3619);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d361d:{NFSU2_TR(0x5d361d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d361e:{NFSU2_TR(0x5d361e);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d3625:{NFSU2_TR(0x5d3625);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3626:{NFSU2_TR(0x5d3626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d362bull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5d362b:L5d362b:{c.instructions+=6;NFSU2_TR(0x5d362b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d362e:{NFSU2_TR(0x5d362e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5d3631:{NFSU2_TR(0x5d3631);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d3633:{NFSU2_TR(0x5d3633);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d363a:{NFSU2_TR(0x5d363a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d363e:{NFSU2_TR(0x5d363e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3668;}}
}
B5d3640:L5d3640:{c.instructions+=5;NFSU2_TR(0x5d3640);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3644:{NFSU2_TR(0x5d3644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3645:{NFSU2_TR(0x5d3645);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3646:{NFSU2_TR(0x5d3646);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3647:{NFSU2_TR(0x5d3647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d364cull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5d364c:L5d364c:{c.instructions+=7;NFSU2_TR(0x5d364c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3650:{NFSU2_TR(0x5d3650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3651:{NFSU2_TR(0x5d3651);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3655:{NFSU2_TR(0x5d3655);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3656:{NFSU2_TR(0x5d3656);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d365d:{NFSU2_TR(0x5d365d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d365e:{NFSU2_TR(0x5d365e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3663ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5d3663:L5d3663:{c.instructions+=2;NFSU2_TR(0x5d3663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5d3666:{NFSU2_TR(0x5d3666);
{goto L5d3677;}
}
B5d3668:L5d3668:{c.instructions+=5;NFSU2_TR(0x5d3668);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d366c:{NFSU2_TR(0x5d366c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d366d:{NFSU2_TR(0x5d366d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d366e:{NFSU2_TR(0x5d366e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d366f:{NFSU2_TR(0x5d366f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3674ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5d3674:L5d3674:{c.instructions+=1;NFSU2_TR(0x5d3674);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d3677:L5d3677:{c.instructions+=4;NFSU2_TR(0x5d3677);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B5d367b:{NFSU2_TR(0x5d367b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d367d:{NFSU2_TR(0x5d367d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d367f:{NFSU2_TR(0x5d367f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d36af;}}
}
B5d3681:L5d3681:{c.instructions+=1;NFSU2_TR(0x5d3681);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3685:L5d3685:{c.instructions+=12;NFSU2_TR(0x5d3685);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3688:{NFSU2_TR(0x5d3688);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d368b:{NFSU2_TR(0x5d368b);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d368e:{NFSU2_TR(0x5d368e);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3691:{NFSU2_TR(0x5d3691);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3693:{NFSU2_TR(0x5d3693);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3696:{NFSU2_TR(0x5d3696);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3698:{NFSU2_TR(0x5d3698);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d369a:{NFSU2_TR(0x5d369a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d36a0:{NFSU2_TR(0x5d36a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d36a2:{NFSU2_TR(0x5d36a2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d36a5:{NFSU2_TR(0x5d36a5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5d36de;}}
}
B5d36a7:L5d36a7:{c.instructions+=4;NFSU2_TR(0x5d36a7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d36a8:{NFSU2_TR(0x5d36a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5d36ab:{NFSU2_TR(0x5d36ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d36ad:{NFSU2_TR(0x5d36ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3685u);}goto L5d3685;}}
}
B5d36af:L5d36af:{c.instructions+=3;NFSU2_TR(0x5d36af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d36b2:{NFSU2_TR(0x5d36b2);
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
B5d36b4:{NFSU2_TR(0x5d36b4);
if(r1(R+518)){{goto L5d36d3;}}
}
B5d36b6:L5d36b6:{c.instructions+=10;NFSU2_TR(0x5d36b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d36ba:{NFSU2_TR(0x5d36ba);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d36bd:{NFSU2_TR(0x5d36bd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d36c1:{NFSU2_TR(0x5d36c1);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d36c4:{NFSU2_TR(0x5d36c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d36c6:{NFSU2_TR(0x5d36c6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d36ca:{NFSU2_TR(0x5d36ca);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d36cd:{NFSU2_TR(0x5d36cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d36cf:{NFSU2_TR(0x5d36cf);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d36d1:{NFSU2_TR(0x5d36d1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d36d3:L5d36d3:{c.instructions+=7;NFSU2_TR(0x5d36d3);
w1(R+0,u8(0x1ull));
}
B5d36d5:{NFSU2_TR(0x5d36d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d36d6:{NFSU2_TR(0x5d36d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d36d7:{NFSU2_TR(0x5d36d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d36d8:{NFSU2_TR(0x5d36d8);
__builtin_memmove((R+16),(R+20),4);
}
B5d36da:{NFSU2_TR(0x5d36da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d36db:{NFSU2_TR(0x5d36db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d36de:L5d36de:{c.instructions+=7;NFSU2_TR(0x5d36de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d36df:{NFSU2_TR(0x5d36df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d36e0:{NFSU2_TR(0x5d36e0);
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
B5d36e2:{NFSU2_TR(0x5d36e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d36e3:{NFSU2_TR(0x5d36e3);
__builtin_memmove((R+16),(R+20),4);
}
B5d36e5:{NFSU2_TR(0x5d36e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d36e6:{NFSU2_TR(0x5d36e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d36f0:L5d36f0:{c.instructions+=44;NFSU2_TR(0x5d36f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d36f1:{NFSU2_TR(0x5d36f1);
__builtin_memmove((R+20),(R+16),4);
}
B5d36f3:{NFSU2_TR(0x5d36f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d36f6:{NFSU2_TR(0x5d36f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B5d36f9:{NFSU2_TR(0x5d36f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d36fc:{NFSU2_TR(0x5d36fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d36fd:{NFSU2_TR(0x5d36fd);
__builtin_memmove((R+24),(R+4),4);
}
B5d36ff:{NFSU2_TR(0x5d36ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3702:{NFSU2_TR(0x5d3702);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3704:{NFSU2_TR(0x5d3704);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3707:{NFSU2_TR(0x5d3707);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d370a:{NFSU2_TR(0x5d370a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d370d:{NFSU2_TR(0x5d370d);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3710:{NFSU2_TR(0x5d3710);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d3713:{NFSU2_TR(0x5d3713);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3715:{NFSU2_TR(0x5d3715);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3718:{NFSU2_TR(0x5d3718);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d371c:{NFSU2_TR(0x5d371c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d371f:{NFSU2_TR(0x5d371f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d3722:{NFSU2_TR(0x5d3722);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3726:{NFSU2_TR(0x5d3726);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3729:{NFSU2_TR(0x5d3729);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d372c:{NFSU2_TR(0x5d372c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3730:{NFSU2_TR(0x5d3730);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3733:{NFSU2_TR(0x5d3733);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d3735:{NFSU2_TR(0x5d3735);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3738:{NFSU2_TR(0x5d3738);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d373a:{NFSU2_TR(0x5d373a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d373c:{NFSU2_TR(0x5d373c);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d373f:{NFSU2_TR(0x5d373f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3741:{NFSU2_TR(0x5d3741);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3745:{NFSU2_TR(0x5d3745);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3748:{NFSU2_TR(0x5d3748);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d374c:{NFSU2_TR(0x5d374c);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d374f:{NFSU2_TR(0x5d374f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3751:{NFSU2_TR(0x5d3751);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3755:{NFSU2_TR(0x5d3755);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3758:{NFSU2_TR(0x5d3758);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d375a:{NFSU2_TR(0x5d375a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d375e:{NFSU2_TR(0x5d375e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d3760:{NFSU2_TR(0x5d3760);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3766:{NFSU2_TR(0x5d3766);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3768:{NFSU2_TR(0x5d3768);
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
B5d376b:{NFSU2_TR(0x5d376b);
if(r1(R+514)){{goto L5d37e4;}}
}
B5d376d:L5d376d:{c.instructions+=23;NFSU2_TR(0x5d376d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d376f:{NFSU2_TR(0x5d376f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3770:{NFSU2_TR(0x5d3770);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3772:{NFSU2_TR(0x5d3772);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3776:{NFSU2_TR(0x5d3776);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d377a:{NFSU2_TR(0x5d377a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d377d:{NFSU2_TR(0x5d377d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3780:{NFSU2_TR(0x5d3780);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3784:{NFSU2_TR(0x5d3784);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3787:{NFSU2_TR(0x5d3787);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d378a:{NFSU2_TR(0x5d378a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d378e:{NFSU2_TR(0x5d378e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d3790:{NFSU2_TR(0x5d3790);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3794:{NFSU2_TR(0x5d3794);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d3796:{NFSU2_TR(0x5d3796);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5d3798:{NFSU2_TR(0x5d3798);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5d379a:{NFSU2_TR(0x5d379a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d379d:{NFSU2_TR(0x5d379d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d379e:{NFSU2_TR(0x5d379e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d379f:{NFSU2_TR(0x5d379f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d37a1:{NFSU2_TR(0x5d37a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d37a5:{NFSU2_TR(0x5d37a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37a6:{NFSU2_TR(0x5d37a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d37abull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5d37ab:L5d37ab:{c.instructions+=6;NFSU2_TR(0x5d37ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d37ae:{NFSU2_TR(0x5d37ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37b0:{NFSU2_TR(0x5d37b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d37b4:{NFSU2_TR(0x5d37b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37b5:{NFSU2_TR(0x5d37b5);
__builtin_memmove((R+4),(R+24),4);
}
B5d37b7:{NFSU2_TR(0x5d37b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d37bcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d35b0u);}goto L5d35b0;}
}
B5d37bc:L5d37bc:{c.instructions+=2;NFSU2_TR(0x5d37bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d37be:{NFSU2_TR(0x5d37be);
if(r1(R+518)){{goto L5d37e6;}}
}
B5d37c0:L5d37c0:{c.instructions+=3;NFSU2_TR(0x5d37c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d37c3:{NFSU2_TR(0x5d37c3);
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
B5d37c5:{NFSU2_TR(0x5d37c5);
if(r1(R+518)){{goto L5d37db;}}
}
B5d37c7:L5d37c7:{c.instructions+=6;NFSU2_TR(0x5d37c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d37cb:{NFSU2_TR(0x5d37cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d37cf:{NFSU2_TR(0x5d37cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d37d1:{NFSU2_TR(0x5d37d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d37d5:{NFSU2_TR(0x5d37d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d37d8:{NFSU2_TR(0x5d37d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d37db:L5d37db:{c.instructions+=5;NFSU2_TR(0x5d37db);
w1(R+0,u8(0x1ull));
}
B5d37dd:{NFSU2_TR(0x5d37dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d37de:{NFSU2_TR(0x5d37de);
__builtin_memmove((R+16),(R+20),4);
}
B5d37e0:{NFSU2_TR(0x5d37e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d37e1:{NFSU2_TR(0x5d37e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d37e4:L5d37e4:{c.instructions+=1;NFSU2_TR(0x5d37e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d37e6:L5d37e6:{c.instructions+=5;NFSU2_TR(0x5d37e6);
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
B5d37e8:{NFSU2_TR(0x5d37e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d37e9:{NFSU2_TR(0x5d37e9);
__builtin_memmove((R+16),(R+20),4);
}
B5d37eb:{NFSU2_TR(0x5d37eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d37ec:{NFSU2_TR(0x5d37ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d37f0:L5d37f0:{c.instructions+=15;NFSU2_TR(0x5d37f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37f1:{NFSU2_TR(0x5d37f1);
__builtin_memmove((R+20),(R+16),4);
}
B5d37f3:{NFSU2_TR(0x5d37f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d37f6:{NFSU2_TR(0x5d37f6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x34ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d37f9:{NFSU2_TR(0x5d37f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37fa:{NFSU2_TR(0x5d37fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37fb:{NFSU2_TR(0x5d37fb);
__builtin_memmove((R+24),(R+4),4);
}
B5d37fd:{NFSU2_TR(0x5d37fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d37fe:{NFSU2_TR(0x5d37fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3801:{NFSU2_TR(0x5d3801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3802:{NFSU2_TR(0x5d3802);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3806:{NFSU2_TR(0x5d3806);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3807:{NFSU2_TR(0x5d3807);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d380b:{NFSU2_TR(0x5d380b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d380c:{NFSU2_TR(0x5d380c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3811ull));
TAIL_STATIC(0x43d540u,43d);
}
B5d3811:L5d3811:{c.instructions+=5;NFSU2_TR(0x5d3811);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d3814:{NFSU2_TR(0x5d3814);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d3817:{NFSU2_TR(0x5d3817);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3819:{NFSU2_TR(0x5d3819);
w4(R+28,u32(0x1ull));
}
B5d381e:{NFSU2_TR(0x5d381e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d3842;}}
}
B5d3820:L5d3820:{c.instructions+=1;NFSU2_TR(0x5d3820);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3823:L5d3823:{c.instructions+=6;NFSU2_TR(0x5d3823);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3824:{NFSU2_TR(0x5d3824);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3828:{NFSU2_TR(0x5d3828);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3829:{NFSU2_TR(0x5d3829);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d382d:{NFSU2_TR(0x5d382d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d382e:{NFSU2_TR(0x5d382e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3833ull));
TAIL_STATIC(0x43d570u,43d);
}
B5d3833:L5d3833:{c.instructions+=6;NFSU2_TR(0x5d3833);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5d3837:{NFSU2_TR(0x5d3837);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5d383a:{NFSU2_TR(0x5d383a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d383b:{NFSU2_TR(0x5d383b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5d383e:{NFSU2_TR(0x5d383e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3840:{NFSU2_TR(0x5d3840);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3823u);}goto L5d3823;}}
}
B5d3842:L5d3842:{c.instructions+=9;NFSU2_TR(0x5d3842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3845:{NFSU2_TR(0x5d3845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3848:{NFSU2_TR(0x5d3848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3849:{NFSU2_TR(0x5d3849);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d384a:{NFSU2_TR(0x5d384a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d384e:{NFSU2_TR(0x5d384e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d384f:{NFSU2_TR(0x5d384f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3853:{NFSU2_TR(0x5d3853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3854:{NFSU2_TR(0x5d3854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3859ull));
TAIL_STATIC(0x43d820u,43d);
}
B5d3859:L5d3859:{c.instructions+=3;NFSU2_TR(0x5d3859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5d385c:{NFSU2_TR(0x5d385c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d385e:{NFSU2_TR(0x5d385e);
if(r1(R+518)){{goto L5d390d;}}
}
B5d3864:L5d3864:{c.instructions+=8;NFSU2_TR(0x5d3864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3867:{NFSU2_TR(0x5d3867);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d386a:{NFSU2_TR(0x5d386a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d386e:{NFSU2_TR(0x5d386e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d386f:{NFSU2_TR(0x5d386f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3870:{NFSU2_TR(0x5d3870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3871:{NFSU2_TR(0x5d3871);
__builtin_memmove((R+4),(R+24),4);
}
B5d3873:{NFSU2_TR(0x5d3873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3878ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d36f0u);}goto L5d36f0;}
}
B5d3878:L5d3878:{c.instructions+=2;NFSU2_TR(0x5d3878);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d387a:{NFSU2_TR(0x5d387a);
if(r1(R+518)){{goto L5d390d;}}
}
B5d3880:L5d3880:{c.instructions+=9;NFSU2_TR(0x5d3880);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3884:{NFSU2_TR(0x5d3884);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d3887:{NFSU2_TR(0x5d3887);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3889:{NFSU2_TR(0x5d3889);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d388b:{NFSU2_TR(0x5d388b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d388e:{NFSU2_TR(0x5d388e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d3892:{NFSU2_TR(0x5d3892);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3895:{NFSU2_TR(0x5d3895);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d3899:{NFSU2_TR(0x5d3899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d38bb;}}
}
B5d389b:L5d389b:{c.instructions+=12;NFSU2_TR(0x5d389b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d389d:{NFSU2_TR(0x5d389d);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d38a0:{NFSU2_TR(0x5d38a0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d38a2:{NFSU2_TR(0x5d38a2);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d38a5:{NFSU2_TR(0x5d38a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d38a7:{NFSU2_TR(0x5d38a7);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5d38a9:{NFSU2_TR(0x5d38a9);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d38ac:{NFSU2_TR(0x5d38ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d38ae:{NFSU2_TR(0x5d38ae);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d38b4:{NFSU2_TR(0x5d38b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d38b6:{NFSU2_TR(0x5d38b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d38b9:{NFSU2_TR(0x5d38b9);
if(r1(R+514)){{goto L5d3907;}}
}
B5d38bb:L5d38bb:{c.instructions+=17;NFSU2_TR(0x5d38bb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d38bd:{NFSU2_TR(0x5d38bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d38c0:{NFSU2_TR(0x5d38c0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d38c2:{NFSU2_TR(0x5d38c2);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5d38c4:{NFSU2_TR(0x5d38c4);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5d38c6:{NFSU2_TR(0x5d38c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d38c8:{NFSU2_TR(0x5d38c8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d38ca:{NFSU2_TR(0x5d38ca);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d38cc:{NFSU2_TR(0x5d38cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d38ce:{NFSU2_TR(0x5d38ce);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d38d0:{NFSU2_TR(0x5d38d0);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5d38d2:{NFSU2_TR(0x5d38d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d38d4:{NFSU2_TR(0x5d38d4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d38d6:{NFSU2_TR(0x5d38d6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d38d8:{NFSU2_TR(0x5d38d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d38da:{NFSU2_TR(0x5d38da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d38dd:{NFSU2_TR(0x5d38dd);
if(r1(R+514)){{goto L5d390b;}}
}
B5d38df:L5d38df:{c.instructions+=4;NFSU2_TR(0x5d38df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d38e2:{NFSU2_TR(0x5d38e2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d38e4:{NFSU2_TR(0x5d38e4);
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
B5d38e6:{NFSU2_TR(0x5d38e6);
if(r1(R+518)){{goto L5d38fc;}}
}
B5d38e8:L5d38e8:{c.instructions+=6;NFSU2_TR(0x5d38e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d38ec:{NFSU2_TR(0x5d38ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d38f0:{NFSU2_TR(0x5d38f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d38f2:{NFSU2_TR(0x5d38f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d38f6:{NFSU2_TR(0x5d38f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d38f9:{NFSU2_TR(0x5d38f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d38fc:L5d38fc:{c.instructions+=7;NFSU2_TR(0x5d38fc);
w1(R+0,u8(0x1ull));
}
B5d38fe:{NFSU2_TR(0x5d38fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d38ff:{NFSU2_TR(0x5d38ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3900:{NFSU2_TR(0x5d3900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3901:{NFSU2_TR(0x5d3901);
__builtin_memmove((R+16),(R+20),4);
}
B5d3903:{NFSU2_TR(0x5d3903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3904:{NFSU2_TR(0x5d3904);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3907:L5d3907:{c.instructions+=2;NFSU2_TR(0x5d3907);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d3909:{NFSU2_TR(0x5d3909);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d390b:L5d390b:{c.instructions+=1;NFSU2_TR(0x5d390b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d390d:L5d390d:{c.instructions+=7;NFSU2_TR(0x5d390d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d390e:{NFSU2_TR(0x5d390e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d390f:{NFSU2_TR(0x5d390f);
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
B5d3911:{NFSU2_TR(0x5d3911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3912:{NFSU2_TR(0x5d3912);
__builtin_memmove((R+16),(R+20),4);
}
B5d3914:{NFSU2_TR(0x5d3914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3915:{NFSU2_TR(0x5d3915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3920:L5d3920:{c.instructions+=16;NFSU2_TR(0x5d3920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3921:{NFSU2_TR(0x5d3921);
__builtin_memmove((R+20),(R+16),4);
}
B5d3923:{NFSU2_TR(0x5d3923);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d3926:{NFSU2_TR(0x5d3926);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x34ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3929:{NFSU2_TR(0x5d3929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d392c:{NFSU2_TR(0x5d392c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d392d:{NFSU2_TR(0x5d392d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d392e:{NFSU2_TR(0x5d392e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d392f:{NFSU2_TR(0x5d392f);
__builtin_memmove((R+28),(R+4),4);
}
B5d3931:{NFSU2_TR(0x5d3931);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3932:{NFSU2_TR(0x5d3932);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3936:{NFSU2_TR(0x5d3936);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3937:{NFSU2_TR(0x5d3937);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d393b:{NFSU2_TR(0x5d393b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d393c:{NFSU2_TR(0x5d393c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3940:{NFSU2_TR(0x5d3940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3945ull));
TAIL_STATIC(0x43d540u,43d);
}
B5d3945:L5d3945:{c.instructions+=9;NFSU2_TR(0x5d3945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3948:{NFSU2_TR(0x5d3948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d394b:{NFSU2_TR(0x5d394b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d394c:{NFSU2_TR(0x5d394c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d394d:{NFSU2_TR(0x5d394d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d3951:{NFSU2_TR(0x5d3951);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3952:{NFSU2_TR(0x5d3952);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3956:{NFSU2_TR(0x5d3956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3957:{NFSU2_TR(0x5d3957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d395cull));
TAIL_STATIC(0x43d610u,43d);
}
B5d395c:L5d395c:{c.instructions+=6;NFSU2_TR(0x5d395c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3962:{NFSU2_TR(0x5d3962);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5d3965:{NFSU2_TR(0x5d3965);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d3967:{NFSU2_TR(0x5d3967);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3969:{NFSU2_TR(0x5d3969);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d3971:{NFSU2_TR(0x5d3971);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d39b4;}}
}
B5d3973:L5d3973:{c.instructions+=1;NFSU2_TR(0x5d3973);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3cull))));
}
B5d3976:L5d3976:{c.instructions+=17;NFSU2_TR(0x5d3976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3979:{NFSU2_TR(0x5d3979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d397c:{NFSU2_TR(0x5d397c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d397e:{NFSU2_TR(0x5d397e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d397f:{NFSU2_TR(0x5d397f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3980:{NFSU2_TR(0x5d3980);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3983:{NFSU2_TR(0x5d3983);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3987:{NFSU2_TR(0x5d3987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3988:{NFSU2_TR(0x5d3988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d398b:{NFSU2_TR(0x5d398b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d398f:{NFSU2_TR(0x5d398f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3990:{NFSU2_TR(0x5d3990);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3991:{NFSU2_TR(0x5d3991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3992:{NFSU2_TR(0x5d3992);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3996:{NFSU2_TR(0x5d3996);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3997:{NFSU2_TR(0x5d3997);
__builtin_memmove((R+4),(R+24),4);
}
B5d3999:{NFSU2_TR(0x5d3999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d399eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d37f0u);}goto L5d37f0;}
}
B5d399e:L5d399e:{c.instructions+=2;NFSU2_TR(0x5d399e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d39a0:{NFSU2_TR(0x5d39a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d39bf;}}
}
B5d39a2:L5d39a2:{c.instructions+=6;NFSU2_TR(0x5d39a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d39a6:{NFSU2_TR(0x5d39a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d39ac:{NFSU2_TR(0x5d39ac);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5d39ad:{NFSU2_TR(0x5d39ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d39b0:{NFSU2_TR(0x5d39b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d39b2:{NFSU2_TR(0x5d39b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3976u);}goto L5d3976;}}
}
B5d39b4:L5d39b4:{c.instructions+=7;NFSU2_TR(0x5d39b4);
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
B5d39b6:{NFSU2_TR(0x5d39b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d39b7:{NFSU2_TR(0x5d39b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d39b8:{NFSU2_TR(0x5d39b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d39b9:{NFSU2_TR(0x5d39b9);
__builtin_memmove((R+16),(R+20),4);
}
B5d39bb:{NFSU2_TR(0x5d39bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d39bc:{NFSU2_TR(0x5d39bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d39bf:L5d39bf:{c.instructions+=3;NFSU2_TR(0x5d39bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d39c2:{NFSU2_TR(0x5d39c2);
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
B5d39c4:{NFSU2_TR(0x5d39c4);
if(r1(R+518)){{goto L5d39d7;}}
}
B5d39c6:L5d39c6:{c.instructions+=6;NFSU2_TR(0x5d39c6);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d39c9:{NFSU2_TR(0x5d39c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d39cc:{NFSU2_TR(0x5d39cc);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d39cf:{NFSU2_TR(0x5d39cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5d39d1:{NFSU2_TR(0x5d39d1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d39d4:{NFSU2_TR(0x5d39d4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d39d7:L5d39d7:{c.instructions+=7;NFSU2_TR(0x5d39d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d39d8:{NFSU2_TR(0x5d39d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d39d9:{NFSU2_TR(0x5d39d9);
w1(R+0,u8(0x1ull));
}
B5d39db:{NFSU2_TR(0x5d39db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d39dc:{NFSU2_TR(0x5d39dc);
__builtin_memmove((R+16),(R+20),4);
}
B5d39de:{NFSU2_TR(0x5d39de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d39df:{NFSU2_TR(0x5d39df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d39f0:L5d39f0:{c.instructions+=16;NFSU2_TR(0x5d39f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d39f1:{NFSU2_TR(0x5d39f1);
__builtin_memmove((R+20),(R+16),4);
}
B5d39f3:{NFSU2_TR(0x5d39f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d39f6:{NFSU2_TR(0x5d39f6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d39f9:{NFSU2_TR(0x5d39f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d39fa:{NFSU2_TR(0x5d39fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d39fd:{NFSU2_TR(0x5d39fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d39fe:{NFSU2_TR(0x5d39fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d39ff:{NFSU2_TR(0x5d39ff);
__builtin_memmove((R+28),(R+4),4);
}
B5d3a01:{NFSU2_TR(0x5d3a01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a02:{NFSU2_TR(0x5d3a02);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3a06:{NFSU2_TR(0x5d3a06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a07:{NFSU2_TR(0x5d3a07);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3a0b:{NFSU2_TR(0x5d3a0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a0c:{NFSU2_TR(0x5d3a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a10:{NFSU2_TR(0x5d3a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3a15ull));
TAIL_STATIC(0x43d540u,43d);
}
B5d3a15:L5d3a15:{c.instructions+=9;NFSU2_TR(0x5d3a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3a18:{NFSU2_TR(0x5d3a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d3a1b:{NFSU2_TR(0x5d3a1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a1c:{NFSU2_TR(0x5d3a1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a1d:{NFSU2_TR(0x5d3a1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3a21:{NFSU2_TR(0x5d3a21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a22:{NFSU2_TR(0x5d3a22);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3a26:{NFSU2_TR(0x5d3a26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a27:{NFSU2_TR(0x5d3a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3a2cull));
TAIL_STATIC(0x43d610u,43d);
}
B5d3a2c:L5d3a2c:{c.instructions+=8;NFSU2_TR(0x5d3a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3a32:{NFSU2_TR(0x5d3a32);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d3a34:{NFSU2_TR(0x5d3a34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5d3a37:{NFSU2_TR(0x5d3a37);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d3a39:{NFSU2_TR(0x5d3a39);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a41:{NFSU2_TR(0x5d3a41);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a45:{NFSU2_TR(0x5d3a45);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a49:{NFSU2_TR(0x5d3a49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d3aa4;}}
}
B5d3a4b:L5d3a4b:{c.instructions+=2;NFSU2_TR(0x5d3a4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3cull))));
}
B5d3a4e:{NFSU2_TR(0x5d3a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a52:L5d3a52:{c.instructions+=15;NFSU2_TR(0x5d3a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3a55:{NFSU2_TR(0x5d3a55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3a59:{NFSU2_TR(0x5d3a59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5d3a5b:{NFSU2_TR(0x5d3a5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a5d:{NFSU2_TR(0x5d3a5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a5e:{NFSU2_TR(0x5d3a5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3a62:{NFSU2_TR(0x5d3a62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a63:{NFSU2_TR(0x5d3a63);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d3a67:{NFSU2_TR(0x5d3a67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a68:{NFSU2_TR(0x5d3a68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a69:{NFSU2_TR(0x5d3a69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a6a:{NFSU2_TR(0x5d3a6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3a6e:{NFSU2_TR(0x5d3a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3a6f:{NFSU2_TR(0x5d3a6f);
__builtin_memmove((R+4),(R+28),4);
}
B5d3a71:{NFSU2_TR(0x5d3a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3a76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d37f0u);}goto L5d37f0;}
}
B5d3a76:L5d3a76:{c.instructions+=2;NFSU2_TR(0x5d3a76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3a78:{NFSU2_TR(0x5d3a78);
if(r1(R+518)){{goto L5d3a7e;}}
}
B5d3a7a:L5d3a7a:{c.instructions+=1;NFSU2_TR(0x5d3a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a7e:L5d3a7e:{c.instructions+=10;NFSU2_TR(0x5d3a7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3a82:{NFSU2_TR(0x5d3a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d3a86:{NFSU2_TR(0x5d3a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3a8a:{NFSU2_TR(0x5d3a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3a90:{NFSU2_TR(0x5d3a90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d3a91:{NFSU2_TR(0x5d3a91);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5d3a94:{NFSU2_TR(0x5d3a94);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3a96:{NFSU2_TR(0x5d3a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a9a:{NFSU2_TR(0x5d3a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3a9e:{NFSU2_TR(0x5d3a9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3a52u);}goto L5d3a52;}}
}
B5d3aa0:L5d3aa0:{c.instructions+=1;NFSU2_TR(0x5d3aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3aa4:L5d3aa4:{c.instructions+=24;NFSU2_TR(0x5d3aa4);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3aa6:{NFSU2_TR(0x5d3aa6);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3aa8:{NFSU2_TR(0x5d3aa8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3aac:{NFSU2_TR(0x5d3aac);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3aaf:{NFSU2_TR(0x5d3aaf);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3ab2:{NFSU2_TR(0x5d3ab2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3ab6:{NFSU2_TR(0x5d3ab6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3ab9:{NFSU2_TR(0x5d3ab9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3abc:{NFSU2_TR(0x5d3abc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3ac0:{NFSU2_TR(0x5d3ac0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3ac4:{NFSU2_TR(0x5d3ac4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3ac8:{NFSU2_TR(0x5d3ac8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3acc:{NFSU2_TR(0x5d3acc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3ad0:{NFSU2_TR(0x5d3ad0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3ad2:{NFSU2_TR(0x5d3ad2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3ad6:{NFSU2_TR(0x5d3ad6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3ada:{NFSU2_TR(0x5d3ada);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3adc:{NFSU2_TR(0x5d3adc);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d3ade:{NFSU2_TR(0x5d3ade);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3ae2:{NFSU2_TR(0x5d3ae2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3ae6:{NFSU2_TR(0x5d3ae6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d3aea:{NFSU2_TR(0x5d3aea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3aec:{NFSU2_TR(0x5d3aec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d3aef:{NFSU2_TR(0x5d3aef);
if(r1(R+514)){{goto L5d3bfe;}}
}
B5d3af5:L5d3af5:{c.instructions+=3;NFSU2_TR(0x5d3af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3af8:{NFSU2_TR(0x5d3af8);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d3afb:{NFSU2_TR(0x5d3afb);
if(r1(R+518)){{goto L5d3b52;}}
}
B5d3afd:L5d3afd:{c.instructions+=2;NFSU2_TR(0x5d3afd);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3afe:{NFSU2_TR(0x5d3afe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3bf3;}}
}
B5d3b04:L5d3b04:{c.instructions+=9;NFSU2_TR(0x5d3b04);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b08:{NFSU2_TR(0x5d3b08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3b09:{NFSU2_TR(0x5d3b09);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3b0c:{NFSU2_TR(0x5d3b0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5d3b10:{NFSU2_TR(0x5d3b10);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3b14:{NFSU2_TR(0x5d3b14);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3b17:{NFSU2_TR(0x5d3b17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3b18:{NFSU2_TR(0x5d3b18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3b19:{NFSU2_TR(0x5d3b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3b1eull));
TAIL_STATIC(0x43cf90u,43c);
}
B5d3b1e:L5d3b1e:{c.instructions+=20;NFSU2_TR(0x5d3b1e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b22:{NFSU2_TR(0x5d3b22);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3b24:{NFSU2_TR(0x5d3b24);
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
B5d3b27:{NFSU2_TR(0x5d3b27);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b2b:{NFSU2_TR(0x5d3b2b);
w1(R+0,u8(0x1ull));
}
B5d3b2d:{NFSU2_TR(0x5d3b2d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3b30:{NFSU2_TR(0x5d3b30);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b34:{NFSU2_TR(0x5d3b34);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3b37:{NFSU2_TR(0x5d3b37);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3b3b:{NFSU2_TR(0x5d3b3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3b3f:{NFSU2_TR(0x5d3b3f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d3b41:{NFSU2_TR(0x5d3b41);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3b43:{NFSU2_TR(0x5d3b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3b46:{NFSU2_TR(0x5d3b46);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3b49:{NFSU2_TR(0x5d3b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3b4a:{NFSU2_TR(0x5d3b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3b4b:{NFSU2_TR(0x5d3b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3b4c:{NFSU2_TR(0x5d3b4c);
__builtin_memmove((R+16),(R+20),4);
}
B5d3b4e:{NFSU2_TR(0x5d3b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3b4f:{NFSU2_TR(0x5d3b4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3b52:L5d3b52:{c.instructions+=3;NFSU2_TR(0x5d3b52);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d3b55:{NFSU2_TR(0x5d3b55);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3b57:{NFSU2_TR(0x5d3b57);
if(r1(R+518)){{goto L5d3bbd;}}
}
B5d3b59:L5d3b59:{c.instructions+=10;NFSU2_TR(0x5d3b59);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b5d:{NFSU2_TR(0x5d3b5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3b61:{NFSU2_TR(0x5d3b61);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3b64:{NFSU2_TR(0x5d3b64);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3b68:{NFSU2_TR(0x5d3b68);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3b6c:{NFSU2_TR(0x5d3b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3b70:{NFSU2_TR(0x5d3b70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3b71:{NFSU2_TR(0x5d3b71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3b72:{NFSU2_TR(0x5d3b72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3b73:{NFSU2_TR(0x5d3b73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3b78ull));
TAIL_STATIC(0x43cf90u,43c);
}
B5d3b78:L5d3b78:{c.instructions+=24;NFSU2_TR(0x5d3b78);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b7c:{NFSU2_TR(0x5d3b7c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d3b80:{NFSU2_TR(0x5d3b80);
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
B5d3b83:{NFSU2_TR(0x5d3b83);
w1(R+0,u8(0x1ull));
}
B5d3b85:{NFSU2_TR(0x5d3b85);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d3b8b:{NFSU2_TR(0x5d3b8b);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3b8e:{NFSU2_TR(0x5d3b8e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3b92:{NFSU2_TR(0x5d3b92);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b96:{NFSU2_TR(0x5d3b96);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3b98:{NFSU2_TR(0x5d3b98);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3b9c:{NFSU2_TR(0x5d3b9c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3b9f:{NFSU2_TR(0x5d3b9f);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5d3ba1:{NFSU2_TR(0x5d3ba1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3ba4:{NFSU2_TR(0x5d3ba4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3ba8:{NFSU2_TR(0x5d3ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d3bac:{NFSU2_TR(0x5d3bac);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3bae:{NFSU2_TR(0x5d3bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3bb1:{NFSU2_TR(0x5d3bb1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3bb4:{NFSU2_TR(0x5d3bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3bb5:{NFSU2_TR(0x5d3bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3bb6:{NFSU2_TR(0x5d3bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3bb7:{NFSU2_TR(0x5d3bb7);
__builtin_memmove((R+16),(R+20),4);
}
B5d3bb9:{NFSU2_TR(0x5d3bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3bba:{NFSU2_TR(0x5d3bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3bbd:L5d3bbd:{c.instructions+=11;NFSU2_TR(0x5d3bbd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d3bbf:{NFSU2_TR(0x5d3bbf);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3bc2:{NFSU2_TR(0x5d3bc2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3bc5:{NFSU2_TR(0x5d3bc5);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3bc8:{NFSU2_TR(0x5d3bc8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3bca:{NFSU2_TR(0x5d3bca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3bcc:{NFSU2_TR(0x5d3bcc);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3bcf:{NFSU2_TR(0x5d3bcf);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3bd5:{NFSU2_TR(0x5d3bd5);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5d3bd8:{NFSU2_TR(0x5d3bd8);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d3bda:{NFSU2_TR(0x5d3bda);
if(r1(R+518)){{goto L5d3bed;}}
}
B5d3bdc:L5d3bdc:{c.instructions+=9;NFSU2_TR(0x5d3bdc);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3bdf:{NFSU2_TR(0x5d3bdf);
w1(R+0,u8(0x1ull));
}
B5d3be1:{NFSU2_TR(0x5d3be1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3be4:{NFSU2_TR(0x5d3be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3be5:{NFSU2_TR(0x5d3be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3be6:{NFSU2_TR(0x5d3be6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3be7:{NFSU2_TR(0x5d3be7);
__builtin_memmove((R+16),(R+20),4);
}
B5d3be9:{NFSU2_TR(0x5d3be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3bea:{NFSU2_TR(0x5d3bea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3bed:L5d3bed:{c.instructions+=2;NFSU2_TR(0x5d3bed);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d3bf0:{NFSU2_TR(0x5d3bf0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3bf3:L5d3bf3:{c.instructions+=7;NFSU2_TR(0x5d3bf3);
w1(R+0,u8(0x1ull));
}
B5d3bf5:{NFSU2_TR(0x5d3bf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3bf6:{NFSU2_TR(0x5d3bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3bf7:{NFSU2_TR(0x5d3bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3bf8:{NFSU2_TR(0x5d3bf8);
__builtin_memmove((R+16),(R+20),4);
}
B5d3bfa:{NFSU2_TR(0x5d3bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3bfb:{NFSU2_TR(0x5d3bfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3bfe:L5d3bfe:{c.instructions+=7;NFSU2_TR(0x5d3bfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3bff:{NFSU2_TR(0x5d3bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3c00:{NFSU2_TR(0x5d3c00);
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
B5d3c02:{NFSU2_TR(0x5d3c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3c03:{NFSU2_TR(0x5d3c03);
__builtin_memmove((R+16),(R+20),4);
}
B5d3c05:{NFSU2_TR(0x5d3c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3c06:{NFSU2_TR(0x5d3c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3c10:L5d3c10:{c.instructions+=3;NFSU2_TR(0x5d3c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3c14:{NFSU2_TR(0x5d3c14);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5d3c17:{NFSU2_TR(0x5d3c17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3c1e;}}
}
B5d3c19:L5d3c19:{c.instructions+=2;NFSU2_TR(0x5d3c19);
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
B5d3c1b:{NFSU2_TR(0x5d3c1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3c1e:L5d3c1e:{c.instructions+=8;NFSU2_TR(0x5d3c1e);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B5d3c21:{NFSU2_TR(0x5d3c21);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d3c22:{NFSU2_TR(0x5d3c22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3c23:{NFSU2_TR(0x5d3c23);
w4(R+24,u32(0x64ull));
}
B5d3c28:{NFSU2_TR(0x5d3c28);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d3c28);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d3c28);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d3c2a:{NFSU2_TR(0x5d3c2a);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5d3c2f:{NFSU2_TR(0x5d3c2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3c31:{NFSU2_TR(0x5d3c31);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d3c3c;}}
}
B5d3c33:L5d3c33:{c.instructions+=3;NFSU2_TR(0x5d3c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d3c36:{NFSU2_TR(0x5d3c36);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3c38:{NFSU2_TR(0x5d3c38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d3c3c;}}
}
B5d3c3a:L5d3c3a:{c.instructions+=1;NFSU2_TR(0x5d3c3a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d3c3c:L5d3c3c:{c.instructions+=11;NFSU2_TR(0x5d3c3c);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B5d3c3f:{NFSU2_TR(0x5d3c3f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5d3c40:{NFSU2_TR(0x5d3c40);
w4(R+4,u32(0x64ull));
}
B5d3c45:{NFSU2_TR(0x5d3c45);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d3c45);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5d3c45);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5d3c47:{NFSU2_TR(0x5d3c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3c48:{NFSU2_TR(0x5d3c48);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5d3c4a:{NFSU2_TR(0x5d3c4a);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5d3c4d:{NFSU2_TR(0x5d3c4d);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x41ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x41ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x41ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3c50:{NFSU2_TR(0x5d3c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d3c53:{NFSU2_TR(0x5d3c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d3c56:{NFSU2_TR(0x5d3c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3c60:L5d3c60:{c.instructions+=5;NFSU2_TR(0x5d3c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3c61:{NFSU2_TR(0x5d3c61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3c62:{NFSU2_TR(0x5d3c62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d3c66:{NFSU2_TR(0x5d3c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3c68:{NFSU2_TR(0x5d3c68);
if(r1(R+518)){{goto L5d3c8e;}}
}
B5d3c6a:L5d3c6a:{c.instructions+=4;NFSU2_TR(0x5d3c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x828ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d3c70:{NFSU2_TR(0x5d3c70);
w4(R+8,u32(0x1ull));
}
B5d3c75:{NFSU2_TR(0x5d3c75);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d3c77:{NFSU2_TR(0x5d3c77);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d3c8e;}}
}
B5d3c79:L5d3c79:{c.instructions+=2;NFSU2_TR(0x5d3c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x82cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3c7f:{NFSU2_TR(0x5d3c7f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5d3c82:L5d3c82:{c.instructions+=2;NFSU2_TR(0x5d3c82);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5d3c84:{NFSU2_TR(0x5d3c84);
if(r1(R+518)){{goto L5d3c90;}}
}
B5d3c86:L5d3c86:{c.instructions+=4;NFSU2_TR(0x5d3c86);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d3c87:{NFSU2_TR(0x5d3c87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5d3c8a:{NFSU2_TR(0x5d3c8a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3c8c:{NFSU2_TR(0x5d3c8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3c82u);}goto L5d3c82;}}
}
B5d3c8e:L5d3c8e:{c.instructions+=1;NFSU2_TR(0x5d3c8e);
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
B5d3c90:L5d3c90:{c.instructions+=3;NFSU2_TR(0x5d3c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3c91:{NFSU2_TR(0x5d3c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3c92:{NFSU2_TR(0x5d3c92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3ca0:L5d3ca0:{c.instructions+=14;NFSU2_TR(0x5d3ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3ca4:{NFSU2_TR(0x5d3ca4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3ca5:{NFSU2_TR(0x5d3ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d3ca9:{NFSU2_TR(0x5d3ca9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B5d3caf:{NFSU2_TR(0x5d3caf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x800ee0ull))));
}
B5d3cb5:{NFSU2_TR(0x5d3cb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3cb6:{NFSU2_TR(0x5d3cb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3cb7:{NFSU2_TR(0x5d3cb7);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3cba:{NFSU2_TR(0x5d3cba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3cbb:{NFSU2_TR(0x5d3cbb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3cbd:{NFSU2_TR(0x5d3cbd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3cc0:{NFSU2_TR(0x5d3cc0);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3cc3:{NFSU2_TR(0x5d3cc3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d3cc5:{NFSU2_TR(0x5d3cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3ccaull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d3cca:L5d3cca:{c.instructions+=7;NFSU2_TR(0x5d3cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3cce:{NFSU2_TR(0x5d3cce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d3cd2:{NFSU2_TR(0x5d3cd2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d3cd6:{NFSU2_TR(0x5d3cd6);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5d3cd8:{NFSU2_TR(0x5d3cd8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3cda:{NFSU2_TR(0x5d3cda);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3cdd:{NFSU2_TR(0x5d3cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3ced;}}
}
B5d3cdf:L5d3cdf:{c.instructions+=3;NFSU2_TR(0x5d3cdf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3ce3:{NFSU2_TR(0x5d3ce3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3ce9:{NFSU2_TR(0x5d3ce9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3ced:L5d3ced:{c.instructions+=2;NFSU2_TR(0x5d3ced);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d3cef:{NFSU2_TR(0x5d3cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3cf4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d3cf4:L5d3cf4:{c.instructions+=6;NFSU2_TR(0x5d3cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3cf8:{NFSU2_TR(0x5d3cf8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d3cfc:{NFSU2_TR(0x5d3cfc);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B5d3cfe:{NFSU2_TR(0x5d3cfe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d3d00:{NFSU2_TR(0x5d3d00);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3d03:{NFSU2_TR(0x5d3d03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3d0b;}}
}
B5d3d05:L5d3d05:{c.instructions+=1;NFSU2_TR(0x5d3d05);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3d0b:L5d3d0b:{c.instructions+=2;NFSU2_TR(0x5d3d0b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3d0f:{NFSU2_TR(0x5d3d0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3d14ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d3d14:L5d3d14:{c.instructions+=3;NFSU2_TR(0x5d3d14);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d3d16:{NFSU2_TR(0x5d3d16);
__builtin_memmove((R+28),(R+0),4);
}
B5d3d18:{NFSU2_TR(0x5d3d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3d1dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d3d1d:L5d3d1d:{c.instructions+=66;NFSU2_TR(0x5d3d1d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5d3d1f:{NFSU2_TR(0x5d3d1f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3d23:{NFSU2_TR(0x5d3d23);
__builtin_memmove((R+20),(R+0),4);
}
B5d3d25:{NFSU2_TR(0x5d3d25);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5d3d28:{NFSU2_TR(0x5d3d28);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d3d2c:{NFSU2_TR(0x5d3d2c);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B5d3d2e:{NFSU2_TR(0x5d3d2e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3d34:{NFSU2_TR(0x5d3d34);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5d3d36:{NFSU2_TR(0x5d3d36);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3d3c:{NFSU2_TR(0x5d3d3c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d3d40:{NFSU2_TR(0x5d3d40);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3d43:{NFSU2_TR(0x5d3d43);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0xfffffffbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5d3d46:{NFSU2_TR(0x5d3d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3d49:{NFSU2_TR(0x5d3d49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5d3d4c:{NFSU2_TR(0x5d3d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d3d4f:{NFSU2_TR(0x5d3d4f);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B5d3d51:{NFSU2_TR(0x5d3d51);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfull))));
}
B5d3d54:{NFSU2_TR(0x5d3d54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d3d57:{NFSU2_TR(0x5d3d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3d5a:{NFSU2_TR(0x5d3d5a);
{u32 ea_=u32((r4(R+20)*4u)+u32(8391672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3d61:{NFSU2_TR(0x5d3d61);
__builtin_memmove((R+20),(R+4),4);
}
B5d3d63:{NFSU2_TR(0x5d3d63);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5d3d66:{NFSU2_TR(0x5d3d66);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5d3d69:{NFSU2_TR(0x5d3d69);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0xfffffffbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B5d3d6c:{NFSU2_TR(0x5d3d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5d3d6f:{NFSU2_TR(0x5d3d6f);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B5d3d71:{NFSU2_TR(0x5d3d71);
__builtin_memmove((R+24),(R+8),4);
}
B5d3d73:{NFSU2_TR(0x5d3d73);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5d3d76:{NFSU2_TR(0x5d3d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3d79:{NFSU2_TR(0x5d3d79);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xfffffffbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5d3d7c:{NFSU2_TR(0x5d3d7c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d3d7f:{NFSU2_TR(0x5d3d7f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfull))));
}
B5d3d82:{NFSU2_TR(0x5d3d82);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d3d84:{NFSU2_TR(0x5d3d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d3d87:{NFSU2_TR(0x5d3d87);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5d3d89:{NFSU2_TR(0x5d3d89);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d3d8c:{NFSU2_TR(0x5d3d8c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d3d8f:{NFSU2_TR(0x5d3d8f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d3d91:{NFSU2_TR(0x5d3d91);
{u32 ea_=u32((r4(R+20)*4u)+u32(8391672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3d98:{NFSU2_TR(0x5d3d98);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xfffffffbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d3d9b:{NFSU2_TR(0x5d3d9b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d3d9d:{NFSU2_TR(0x5d3d9d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3da1:{NFSU2_TR(0x5d3da1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B5d3da4:{NFSU2_TR(0x5d3da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3da5:{NFSU2_TR(0x5d3da5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3da7:{NFSU2_TR(0x5d3da7);
{u32 ea_=u32((r4(R+24)*4u)+u32(8391672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3dae:{NFSU2_TR(0x5d3dae);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3db1:{NFSU2_TR(0x5d3db1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d3db4:{NFSU2_TR(0x5d3db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d3db7:{NFSU2_TR(0x5d3db7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d3db9:{NFSU2_TR(0x5d3db9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d3dbb:{NFSU2_TR(0x5d3dbb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3dbe:{NFSU2_TR(0x5d3dbe);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5d3dc0:{NFSU2_TR(0x5d3dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3dc1:{NFSU2_TR(0x5d3dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d3dc2:{NFSU2_TR(0x5d3dc2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3dc4:{NFSU2_TR(0x5d3dc4);
{u32 ea_=u32((r4(R+4)*4u)+u32(8391672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d3dcb:{NFSU2_TR(0x5d3dcb);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5d3dcd:{NFSU2_TR(0x5d3dcd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3dd1:{NFSU2_TR(0x5d3dd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d3dd3:{NFSU2_TR(0x5d3dd3);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d3dd6:{NFSU2_TR(0x5d3dd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d3dd7:{NFSU2_TR(0x5d3dd7);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5d3dd9:{NFSU2_TR(0x5d3dd9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d3ddb:{NFSU2_TR(0x5d3ddb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d3ddd:{NFSU2_TR(0x5d3ddd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3de0:L5d3de0:{c.instructions+=3;NFSU2_TR(0x5d3de0);
__builtin_memmove((R+0),gp(0x883d9c),1);
}
B5d3de5:{NFSU2_TR(0x5d3de5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d3de7:{NFSU2_TR(0x5d3de7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3e10;}}
}
B5d3de9:L5d3de9:{c.instructions+=3;NFSU2_TR(0x5d3de9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3dea:{NFSU2_TR(0x5d3dea);
s1(0x883d9c,u8(0x1ull));
}
B5d3df1:{NFSU2_TR(0x5d3df1);
w4(R+24,u32(0x800c38ull));
}
B5d3df6:L5d3df6:{c.instructions+=3;NFSU2_TR(0x5d3df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d3df8:{NFSU2_TR(0x5d3df8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3df9:{NFSU2_TR(0x5d3df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3dfeull));
TAIL_STATIC(0x43db50u,43d);
}
B5d3dfe:L5d3dfe:{c.instructions+=5;NFSU2_TR(0x5d3dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3e01:{NFSU2_TR(0x5d3e01);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5d3e04:{NFSU2_TR(0x5d3e04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d3e07:{NFSU2_TR(0x5d3e07);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x800ca0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x800ca0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3e0d:{NFSU2_TR(0x5d3e0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3df6u);}goto L5d3df6;}}
}
B5d3e0f:L5d3e0f:{c.instructions+=1;NFSU2_TR(0x5d3e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3e10:L5d3e10:{c.instructions+=3;NFSU2_TR(0x5d3e10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3e14:{NFSU2_TR(0x5d3e14);
w4(R+0,u32(0x800c38ull));
}
B5d3e19:{NFSU2_TR(0x5d3e19);
__builtin_memmove((R+16),(R+16),4);
}
B5d3e20:L5d3e20:{c.instructions+=2;NFSU2_TR(0x5d3e20);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d3e23:{NFSU2_TR(0x5d3e23);
if(r1(R+518)){{goto L5d3e31;}}
}
B5d3e25:L5d3e25:{c.instructions+=3;NFSU2_TR(0x5d3e25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5d3e28:{NFSU2_TR(0x5d3e28);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x800ca0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800ca0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d3e2d:{NFSU2_TR(0x5d3e2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3e20u);}goto L5d3e20;}}
}
B5d3e2f:L5d3e2f:{c.instructions+=1;NFSU2_TR(0x5d3e2f);
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
B5d3e31:L5d3e31:{c.instructions+=1;NFSU2_TR(0x5d3e31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3e40:L5d3e40:{c.instructions+=6;NFSU2_TR(0x5d3e40);
__builtin_memmove((R+8),gp(0x883da4),4);
}
B5d3e46:{NFSU2_TR(0x5d3e46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3e47:{NFSU2_TR(0x5d3e47);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d3e49:{NFSU2_TR(0x5d3e49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3e4b:{NFSU2_TR(0x5d3e4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3e4c:{NFSU2_TR(0x5d3e4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d3e75;}}
}
B5d3e4e:L5d3e4e:{c.instructions+=3;NFSU2_TR(0x5d3e4e);
__builtin_memmove((R+0),gp(0x883da0),4);
}
B5d3e53:{NFSU2_TR(0x5d3e53);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d3e57:{NFSU2_TR(0x5d3e57);
{goto L5d3e60;}
}
B5d3e60:L5d3e60:{c.instructions+=3;NFSU2_TR(0x5d3e60);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B5d3e67:{NFSU2_TR(0x5d3e67);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5d3e69:{NFSU2_TR(0x5d3e69);
if(r1(R+518)){{goto L5d3e77;}}
}
B5d3e6b:L5d3e6b:{c.instructions+=4;NFSU2_TR(0x5d3e6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d3e6c:{NFSU2_TR(0x5d3e6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
}
B5d3e71:{NFSU2_TR(0x5d3e71);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3e73:{NFSU2_TR(0x5d3e73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d3e60u);}goto L5d3e60;}}
}
B5d3e75:L5d3e75:{c.instructions+=1;NFSU2_TR(0x5d3e75);
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
B5d3e77:L5d3e77:{c.instructions+=3;NFSU2_TR(0x5d3e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3e78:{NFSU2_TR(0x5d3e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3e79:{NFSU2_TR(0x5d3e79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3e80:L5d3e80:{c.instructions+=3;NFSU2_TR(0x5d3e80);
__builtin_memmove((R+4),gp(0x883da0),4);
}
B5d3e86:{NFSU2_TR(0x5d3e86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3e88:{NFSU2_TR(0x5d3e88);
if(r1(R+518)){{goto L5d3ea3;}}
}
B5d3e8a:L5d3e8a:{c.instructions+=3;NFSU2_TR(0x5d3e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3e8e:{NFSU2_TR(0x5d3e8e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d3e90:{NFSU2_TR(0x5d3e90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d3ea3;}}
}
B5d3e92:L5d3e92:{c.instructions+=2;NFSU2_TR(0x5d3e92);
u8 U[8];
__builtin_memmove((U+0),gp(0x883da4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d3e98:{NFSU2_TR(0x5d3e98);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d3ea3;}}
}
B5d3e9a:L5d3e9a:{c.instructions+=3;NFSU2_TR(0x5d3e9a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x128ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d3ea0:{NFSU2_TR(0x5d3ea0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3ea2:{NFSU2_TR(0x5d3ea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3ea3:L5d3ea3:{c.instructions+=2;NFSU2_TR(0x5d3ea3);
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
B5d3ea5:{NFSU2_TR(0x5d3ea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3eb0:L5d3eb0:{c.instructions+=3;NFSU2_TR(0x5d3eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3eb4:{NFSU2_TR(0x5d3eb4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34201ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d3eba:{NFSU2_TR(0x5d3eba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3ee4;}}
}
B5d3ebc:L5d3ebc:{c.instructions+=12;NFSU2_TR(0x5d3ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3ebf:{NFSU2_TR(0x5d3ebf);
__builtin_memmove(gp(0x883da0),(R+4),4);
}
B5d3ec5:{NFSU2_TR(0x5d3ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d3ec8:{NFSU2_TR(0x5d3ec8);
w4(R+0,u32(0xbacf914dull));
}
B5d3ecd:{NFSU2_TR(0x5d3ecd);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d3ecf:{NFSU2_TR(0x5d3ecf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B5d3ed1:{NFSU2_TR(0x5d3ed1);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5d3ed3:{NFSU2_TR(0x5d3ed3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3ed5:{NFSU2_TR(0x5d3ed5);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5d3ed8:{NFSU2_TR(0x5d3ed8);
__builtin_memmove(gp(0x883da4),(R+4),4);
}
B5d3ede:{NFSU2_TR(0x5d3ede);
w4(R+0,u32(0x1ull));
}
B5d3ee3:{NFSU2_TR(0x5d3ee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3ee4:L5d3ee4:{c.instructions+=2;NFSU2_TR(0x5d3ee4);
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
B5d3ee6:{NFSU2_TR(0x5d3ee6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3ef0:L5d3ef0:{c.instructions+=5;NFSU2_TR(0x5d3ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3ef4:{NFSU2_TR(0x5d3ef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d3ef6:{NFSU2_TR(0x5d3ef6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d3ef8:{NFSU2_TR(0x5d3ef8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x34201ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34201ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34201ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3efe:{NFSU2_TR(0x5d3efe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d3f0f;}}
}
B5d3f00:L5d3f00:{c.instructions+=3;NFSU2_TR(0x5d3f00);
__builtin_memmove(gp(0x883da0),(R+0),4);
}
B5d3f05:{NFSU2_TR(0x5d3f05);
__builtin_memmove(gp(0x883da4),(R+0),4);
}
B5d3f0a:{NFSU2_TR(0x5d3f0a);
w4(R+0,u32(0x1ull));
}
B5d3f0f:L5d3f0f:{c.instructions+=1;NFSU2_TR(0x5d3f0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3f10:L5d3f10:{c.instructions+=7;NFSU2_TR(0x5d3f10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f11:{NFSU2_TR(0x5d3f11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f12:{NFSU2_TR(0x5d3f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d3f16:{NFSU2_TR(0x5d3f16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d3f18:{NFSU2_TR(0x5d3f18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d3f1a:{NFSU2_TR(0x5d3f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d3f22:{NFSU2_TR(0x5d3f22);
if(r1(R+518)){{goto L5d3f34;}}
}
B5d3f24:L5d3f24:{c.instructions+=4;NFSU2_TR(0x5d3f24);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x883db0))));
}
B5d3f2a:{NFSU2_TR(0x5d3f2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d3f2d:{NFSU2_TR(0x5d3f2d);
w4(R+0,u32(r2(R+0)));
}
B5d3f30:{NFSU2_TR(0x5d3f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d3f34:L5d3f34:{c.instructions+=9;NFSU2_TR(0x5d3f34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f35:{NFSU2_TR(0x5d3f35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d3f39:{NFSU2_TR(0x5d3f39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f3b:{NFSU2_TR(0x5d3f3b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f3d:{NFSU2_TR(0x5d3f3d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f3f:{NFSU2_TR(0x5d3f3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3f43:{NFSU2_TR(0x5d3f43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d3f44:{NFSU2_TR(0x5d3f44);
__builtin_memmove((R+4),(R+28),4);
}
B5d3f46:{NFSU2_TR(0x5d3f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d3f4bull));
TAIL_STATIC(0x571640u,571);
}
B5d3f4b:L5d3f4b:{c.instructions+=4;NFSU2_TR(0x5d3f4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d3f4e:{NFSU2_TR(0x5d3f4e);
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
B5d3f50:{NFSU2_TR(0x5d3f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d3f51:{NFSU2_TR(0x5d3f51);
if(r1(R+518)){{goto L5d3f71;}}
}
B5d3f53:L5d3f53:{c.instructions+=3;NFSU2_TR(0x5d3f53);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d3f57:{NFSU2_TR(0x5d3f57);
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
B5d3f59:{NFSU2_TR(0x5d3f59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d3f6b;}}
}
B5d3f5b:L5d3f5b:{c.instructions+=7;NFSU2_TR(0x5d3f5b);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5d3f61:{NFSU2_TR(0x5d3f61);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d3f64:{NFSU2_TR(0x5d3f64);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3f66:{NFSU2_TR(0x5d3f66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5d3f68:{NFSU2_TR(0x5d3f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3f69:{NFSU2_TR(0x5d3f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3f6a:{NFSU2_TR(0x5d3f6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3f6b:L5d3f6b:{c.instructions+=1;NFSU2_TR(0x5d3f6b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5d3f71:L5d3f71:{c.instructions+=3;NFSU2_TR(0x5d3f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d3f72:{NFSU2_TR(0x5d3f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d3f73:{NFSU2_TR(0x5d3f73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3f80:L5d3f80:{c.instructions+=3;NFSU2_TR(0x5d3f80);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d3f84:{NFSU2_TR(0x5d3f84);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3f86:{NFSU2_TR(0x5d3f86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d3f9e;}}
}
B5d3f88:L5d3f88:{c.instructions+=5;NFSU2_TR(0x5d3f88);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d3f8c:{NFSU2_TR(0x5d3f8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d3f93:{NFSU2_TR(0x5d3f93);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d3f96:{NFSU2_TR(0x5d3f96);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d3f9d:{NFSU2_TR(0x5d3f9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3f9e:L5d3f9e:{c.instructions+=5;NFSU2_TR(0x5d3f9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d3fa2:{NFSU2_TR(0x5d3fa2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d3fa5:{NFSU2_TR(0x5d3fa5);
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
B5d3fa7:{NFSU2_TR(0x5d3fa7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d3fae:{NFSU2_TR(0x5d3fae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3fb0:L5d3fb0:{c.instructions+=3;NFSU2_TR(0x5d3fb0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5d3fb4:{NFSU2_TR(0x5d3fb4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5d3fb8:{NFSU2_TR(0x5d3fb8);
if(r1(R+518)){{goto L5d3fe4;}}
}
B5d3fba:L5d3fba:{c.instructions+=3;NFSU2_TR(0x5d3fba);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5d3fbe:{NFSU2_TR(0x5d3fbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5d3fc2:{NFSU2_TR(0x5d3fc2);
if(r1(R+518)){{goto L5d3fe4;}}
}
B5d3fc4:L5d3fc4:{c.instructions+=3;NFSU2_TR(0x5d3fc4);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5d3fc7:{NFSU2_TR(0x5d3fc7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d3fc9:{NFSU2_TR(0x5d3fc9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d3fe4;}}
}
B5d3fcb:L5d3fcb:{c.instructions+=3;NFSU2_TR(0x5d3fcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d3fd2:{NFSU2_TR(0x5d3fd2);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d3fd4:{NFSU2_TR(0x5d3fd4);
if(r1(R+518)){{goto L5d3fe4;}}
}
B5d3fd6:L5d3fd6:{c.instructions+=4;NFSU2_TR(0x5d3fd6);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5d3fd9:{NFSU2_TR(0x5d3fd9);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d3fdc:{NFSU2_TR(0x5d3fdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d3fe3:{NFSU2_TR(0x5d3fe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3fe4:L5d3fe4:{c.instructions+=2;NFSU2_TR(0x5d3fe4);
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
B5d3fe6:{NFSU2_TR(0x5d3fe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d3ff0:L5d3ff0:{c.instructions+=3;NFSU2_TR(0x5d3ff0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5d3ff4:{NFSU2_TR(0x5d3ff4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5d3ff8:{NFSU2_TR(0x5d3ff8);
if(r1(R+518)){TAIL_STATIC(0x5d4024u,5d4);}
}
B5d3ffa:L5d3ffa:{c.instructions+=2;NFSU2_TR(0x5d3ffa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5d3ffe:{NFSU2_TR(0x5d3ffe);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
TAIL_STATIC(0x5d4002u,5d4);
}
XIT:NFSU2_TR_EXIT(0x5d3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
