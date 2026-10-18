#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5c4(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_61e(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5c3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5c3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5c3(u8* __restrict R,Cpu& c);
u32 page_5c3(Cpu& c){return body_5c3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5c3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5c3003:goto L5c3003;
case 0x5c3005:goto L5c3005;
case 0x5c3007:goto L5c3007;
case 0x5c300a:c.instructions+=5;goto B5c300a;
case 0x5c300d:c.instructions+=4;goto B5c300d;
case 0x5c3012:c.instructions+=3;goto B5c3012;
case 0x5c3016:c.instructions+=2;goto B5c3016;
case 0x5c3018:c.instructions+=1;goto B5c3018;
case 0x5c301d:goto L5c301d;
case 0x5c3020:c.instructions+=4;goto B5c3020;
case 0x5c3024:c.instructions+=3;goto B5c3024;
case 0x5c3026:c.instructions+=2;goto B5c3026;
case 0x5c302a:c.instructions+=1;goto B5c302a;
case 0x5c302c:goto L5c302c;
case 0x5c302e:c.instructions+=3;goto B5c302e;
case 0x5c302f:c.instructions+=2;goto B5c302f;
case 0x5c3031:c.instructions+=1;goto B5c3031;
case 0x5c3036:goto L5c3036;
case 0x5c3038:goto L5c3038;
case 0x5c303a:goto L5c303a;
case 0x5c303c:c.instructions+=3;goto B5c303c;
case 0x5c3040:c.instructions+=2;goto B5c3040;
case 0x5c3043:c.instructions+=1;goto B5c3043;
case 0x5c3048:goto L5c3048;
case 0x5c304a:c.instructions+=3;goto B5c304a;
case 0x5c304f:c.instructions+=2;goto B5c304f;
case 0x5c3056:c.instructions+=1;goto B5c3056;
case 0x5c305b:goto L5c305b;
case 0x5c305e:c.instructions+=4;goto B5c305e;
case 0x5c3062:c.instructions+=3;goto B5c3062;
case 0x5c3064:c.instructions+=2;goto B5c3064;
case 0x5c306c:c.instructions+=1;goto B5c306c;
case 0x5c306e:goto L5c306e;
case 0x5c3070:c.instructions+=1;goto B5c3070;
case 0x5c3075:goto L5c3075;
case 0x5c3077:goto L5c3077;
case 0x5c3079:goto L5c3079;
case 0x5c307c:c.instructions+=4;goto B5c307c;
case 0x5c3081:c.instructions+=3;goto B5c3081;
case 0x5c3085:c.instructions+=2;goto B5c3085;
case 0x5c3087:c.instructions+=1;goto B5c3087;
case 0x5c308c:goto L5c308c;
case 0x5c308f:c.instructions+=4;goto B5c308f;
case 0x5c3093:c.instructions+=3;goto B5c3093;
case 0x5c3095:c.instructions+=2;goto B5c3095;
case 0x5c309d:c.instructions+=1;goto B5c309d;
case 0x5c309f:goto L5c309f;
case 0x5c30a1:c.instructions+=3;goto B5c30a1;
case 0x5c30a2:c.instructions+=2;goto B5c30a2;
case 0x5c30a4:c.instructions+=1;goto B5c30a4;
case 0x5c30a9:goto L5c30a9;
case 0x5c30ab:goto L5c30ab;
case 0x5c30ad:goto L5c30ad;
case 0x5c30af:c.instructions+=3;goto B5c30af;
case 0x5c30b3:c.instructions+=2;goto B5c30b3;
case 0x5c30b6:c.instructions+=1;goto B5c30b6;
case 0x5c30bb:goto L5c30bb;
case 0x5c30c2:c.instructions+=4;goto B5c30c2;
case 0x5c30c9:c.instructions+=3;goto B5c30c9;
case 0x5c30cb:c.instructions+=2;goto B5c30cb;
case 0x5c30ce:c.instructions+=1;goto B5c30ce;
case 0x5c30d3:goto L5c30d3;
case 0x5c30da:c.instructions+=4;goto B5c30da;
case 0x5c30e1:c.instructions+=3;goto B5c30e1;
case 0x5c30e3:c.instructions+=2;goto B5c30e3;
case 0x5c30e6:c.instructions+=1;goto B5c30e6;
case 0x5c30eb:goto L5c30eb;
case 0x5c30ed:c.instructions+=5;goto B5c30ed;
case 0x5c30ee:c.instructions+=4;goto B5c30ee;
case 0x5c30f5:c.instructions+=3;goto B5c30f5;
case 0x5c30fc:c.instructions+=2;goto B5c30fc;
case 0x5c30ff:c.instructions+=1;goto B5c30ff;
case 0x5c3104:goto L5c3104;
case 0x5c3107:c.instructions+=9;goto B5c3107;
case 0x5c310b:c.instructions+=8;goto B5c310b;
case 0x5c310e:c.instructions+=7;goto B5c310e;
case 0x5c310f:c.instructions+=6;goto B5c310f;
case 0x5c3112:c.instructions+=5;goto B5c3112;
case 0x5c3113:c.instructions+=4;goto B5c3113;
case 0x5c3114:c.instructions+=3;goto B5c3114;
case 0x5c311b:c.instructions+=2;goto B5c311b;
case 0x5c311e:c.instructions+=1;goto B5c311e;
case 0x5c3120:goto L5c3120;
case 0x5c3125:c.instructions+=15;goto B5c3125;
case 0x5c3128:c.instructions+=14;goto B5c3128;
case 0x5c3129:c.instructions+=13;goto B5c3129;
case 0x5c312b:c.instructions+=12;goto B5c312b;
case 0x5c312f:c.instructions+=11;goto B5c312f;
case 0x5c3130:c.instructions+=10;goto B5c3130;
case 0x5c3132:c.instructions+=9;goto B5c3132;
case 0x5c3134:c.instructions+=8;goto B5c3134;
case 0x5c3136:c.instructions+=7;goto B5c3136;
case 0x5c3138:c.instructions+=6;goto B5c3138;
case 0x5c313d:c.instructions+=5;goto B5c313d;
case 0x5c3142:c.instructions+=4;goto B5c3142;
case 0x5c3144:c.instructions+=3;goto B5c3144;
case 0x5c3146:c.instructions+=2;goto B5c3146;
case 0x5c3147:c.instructions+=1;goto B5c3147;
case 0x5c314a:goto L5c314a;
case 0x5c314c:c.instructions+=1;goto B5c314c;
case 0x5c3152:goto L5c3152;
case 0x5c3157:c.instructions+=16;goto B5c3157;
case 0x5c3159:c.instructions+=15;goto B5c3159;
case 0x5c315a:c.instructions+=14;goto B5c315a;
case 0x5c315c:c.instructions+=13;goto B5c315c;
case 0x5c3162:c.instructions+=12;goto B5c3162;
case 0x5c3163:c.instructions+=11;goto B5c3163;
case 0x5c3164:c.instructions+=10;goto B5c3164;
case 0x5c3166:c.instructions+=9;goto B5c3166;
case 0x5c316b:c.instructions+=8;goto B5c316b;
case 0x5c316c:c.instructions+=7;goto B5c316c;
case 0x5c316e:c.instructions+=6;goto B5c316e;
case 0x5c316f:c.instructions+=5;goto B5c316f;
case 0x5c3175:c.instructions+=4;goto B5c3175;
case 0x5c3177:c.instructions+=3;goto B5c3177;
case 0x5c3179:c.instructions+=2;goto B5c3179;
case 0x5c317b:c.instructions+=1;goto B5c317b;
case 0x5c3180:goto L5c3180;
case 0x5c3182:c.instructions+=4;goto B5c3182;
case 0x5c3185:c.instructions+=3;goto B5c3185;
case 0x5c318b:c.instructions+=2;goto B5c318b;
case 0x5c3191:c.instructions+=1;goto B5c3191;
case 0x5c3196:goto L5c3196;
case 0x5c3198:c.instructions+=32;goto B5c3198;
case 0x5c319a:c.instructions+=31;goto B5c319a;
case 0x5c319b:c.instructions+=30;goto B5c319b;
case 0x5c319d:c.instructions+=29;goto B5c319d;
case 0x5c319f:c.instructions+=28;goto B5c319f;
case 0x5c31a1:c.instructions+=27;goto B5c31a1;
case 0x5c31a3:c.instructions+=26;goto B5c31a3;
case 0x5c31a7:c.instructions+=25;goto B5c31a7;
case 0x5c31aa:c.instructions+=24;goto B5c31aa;
case 0x5c31ae:c.instructions+=23;goto B5c31ae;
case 0x5c31b2:c.instructions+=22;goto B5c31b2;
case 0x5c31b4:c.instructions+=21;goto B5c31b4;
case 0x5c31b5:c.instructions+=20;goto B5c31b5;
case 0x5c31b7:c.instructions+=19;goto B5c31b7;
case 0x5c31b9:c.instructions+=18;goto B5c31b9;
case 0x5c31bb:c.instructions+=17;goto B5c31bb;
case 0x5c31bf:c.instructions+=16;goto B5c31bf;
case 0x5c31c3:c.instructions+=15;goto B5c31c3;
case 0x5c31c7:c.instructions+=14;goto B5c31c7;
case 0x5c31c9:c.instructions+=13;goto B5c31c9;
case 0x5c31ca:c.instructions+=12;goto B5c31ca;
case 0x5c31ce:c.instructions+=11;goto B5c31ce;
case 0x5c31cf:c.instructions+=10;goto B5c31cf;
case 0x5c31d5:c.instructions+=9;goto B5c31d5;
case 0x5c31d7:c.instructions+=8;goto B5c31d7;
case 0x5c31d9:c.instructions+=7;goto B5c31d9;
case 0x5c31de:c.instructions+=6;goto B5c31de;
case 0x5c31e1:c.instructions+=5;goto B5c31e1;
case 0x5c31e2:c.instructions+=4;goto B5c31e2;
case 0x5c31e6:c.instructions+=3;goto B5c31e6;
case 0x5c31e8:c.instructions+=2;goto B5c31e8;
case 0x5c31e9:c.instructions+=1;goto B5c31e9;
case 0x5c31ef:goto L5c31ef;
case 0x5c31f1:c.instructions+=1;goto B5c31f1;
case 0x5c31f7:goto L5c31f7;
case 0x5c31fb:c.instructions+=7;goto B5c31fb;
case 0x5c31fd:c.instructions+=6;goto B5c31fd;
case 0x5c31ff:c.instructions+=5;goto B5c31ff;
case 0x5c3201:c.instructions+=4;goto B5c3201;
case 0x5c3205:c.instructions+=3;goto B5c3205;
case 0x5c3206:c.instructions+=2;goto B5c3206;
case 0x5c3207:c.instructions+=1;goto B5c3207;
case 0x5c320a:goto L5c320a;
case 0x5c320c:c.instructions+=1;goto B5c320c;
case 0x5c3212:goto L5c3212;
case 0x5c3216:c.instructions+=5;goto B5c3216;
case 0x5c3218:c.instructions+=4;goto B5c3218;
case 0x5c321c:c.instructions+=3;goto B5c321c;
case 0x5c321d:c.instructions+=2;goto B5c321d;
case 0x5c321e:c.instructions+=1;goto B5c321e;
case 0x5c3221:goto L5c3221;
case 0x5c3223:c.instructions+=2;goto B5c3223;
case 0x5c3225:c.instructions+=1;goto B5c3225;
case 0x5c322a:goto L5c322a;
case 0x5c322c:c.instructions+=9;goto B5c322c;
case 0x5c322f:c.instructions+=8;goto B5c322f;
case 0x5c3231:c.instructions+=7;goto B5c3231;
case 0x5c3233:c.instructions+=6;goto B5c3233;
case 0x5c3235:c.instructions+=5;goto B5c3235;
case 0x5c3239:c.instructions+=4;goto B5c3239;
case 0x5c323a:c.instructions+=3;goto B5c323a;
case 0x5c323c:c.instructions+=2;goto B5c323c;
case 0x5c323d:c.instructions+=1;goto B5c323d;
case 0x5c3240:goto L5c3240;
case 0x5c3244:c.instructions+=2;goto B5c3244;
case 0x5c3246:c.instructions+=1;goto B5c3246;
case 0x5c3248:goto L5c3248;
case 0x5c324a:c.instructions+=2;goto B5c324a;
case 0x5c324c:c.instructions+=1;goto B5c324c;
case 0x5c3251:goto L5c3251;
case 0x5c3254:c.instructions+=3;goto B5c3254;
case 0x5c3258:c.instructions+=2;goto B5c3258;
case 0x5c325a:c.instructions+=1;goto B5c325a;
case 0x5c325d:goto L5c325d;
case 0x5c325f:goto L5c325f;
case 0x5c3261:c.instructions+=1;goto B5c3261;
case 0x5c3264:goto L5c3264;
case 0x5c3266:goto L5c3266;
case 0x5c3268:c.instructions+=2;goto B5c3268;
case 0x5c326a:c.instructions+=1;goto B5c326a;
case 0x5c326f:goto L5c326f;
case 0x5c3271:c.instructions+=5;goto B5c3271;
case 0x5c3274:c.instructions+=4;goto B5c3274;
case 0x5c3276:c.instructions+=3;goto B5c3276;
case 0x5c3278:c.instructions+=2;goto B5c3278;
case 0x5c3279:c.instructions+=1;goto B5c3279;
case 0x5c327c:goto L5c327c;
case 0x5c327f:c.instructions+=3;goto B5c327f;
case 0x5c3281:c.instructions+=2;goto B5c3281;
case 0x5c3283:c.instructions+=1;goto B5c3283;
case 0x5c3288:goto L5c3288;
case 0x5c328b:c.instructions+=3;goto B5c328b;
case 0x5c328f:c.instructions+=2;goto B5c328f;
case 0x5c3291:c.instructions+=1;goto B5c3291;
case 0x5c3294:goto L5c3294;
case 0x5c3296:goto L5c3296;
case 0x5c3298:c.instructions+=1;goto B5c3298;
case 0x5c329b:goto L5c329b;
case 0x5c329d:goto L5c329d;
case 0x5c32a1:c.instructions+=3;goto B5c32a1;
case 0x5c32a3:c.instructions+=2;goto B5c32a3;
case 0x5c32a4:c.instructions+=1;goto B5c32a4;
case 0x5c32a7:goto L5c32a7;
case 0x5c32ab:c.instructions+=3;goto B5c32ab;
case 0x5c32ad:c.instructions+=2;goto B5c32ad;
case 0x5c32ae:c.instructions+=1;goto B5c32ae;
case 0x5c32b1:goto L5c32b1;
case 0x5c32b2:c.instructions+=2;goto B5c32b2;
case 0x5c32b3:c.instructions+=1;goto B5c32b3;
case 0x5c32b4:goto L5c32b4;
case 0x5c32b5:c.instructions+=2;goto B5c32b5;
case 0x5c32b8:c.instructions+=1;goto B5c32b8;
case 0x5c32c0:goto L5c32c0;
case 0x5c32c5:c.instructions+=3;goto B5c32c5;
case 0x5c32cb:c.instructions+=2;goto B5c32cb;
case 0x5c32ce:c.instructions+=1;goto B5c32ce;
case 0x5c32d4:goto L5c32d4;
case 0x5c32db:c.instructions+=1;goto B5c32db;
case 0x5c32dd:goto L5c32dd;
case 0x5c32e7:goto L5c32e7;
case 0x5c32ec:c.instructions+=2;goto B5c32ec;
case 0x5c32ef:c.instructions+=1;goto B5c32ef;
case 0x5c32f1:goto L5c32f1;
case 0x5c32f6:c.instructions+=1;goto B5c32f6;
case 0x5c32fb:goto L5c32fb;
case 0x5c3301:c.instructions+=4;goto B5c3301;
case 0x5c3302:c.instructions+=3;goto B5c3302;
case 0x5c3304:c.instructions+=2;goto B5c3304;
case 0x5c330a:c.instructions+=1;goto B5c330a;
case 0x5c330c:goto L5c330c;
case 0x5c3311:c.instructions+=8;goto B5c3311;
case 0x5c3316:c.instructions+=7;goto B5c3316;
case 0x5c3317:c.instructions+=6;goto B5c3317;
case 0x5c3318:c.instructions+=5;goto B5c3318;
case 0x5c331d:c.instructions+=4;goto B5c331d;
case 0x5c3321:c.instructions+=3;goto B5c3321;
case 0x5c3326:c.instructions+=2;goto B5c3326;
case 0x5c3327:c.instructions+=1;goto B5c3327;
case 0x5c332c:goto L5c332c;
case 0x5c3330:c.instructions+=2;goto B5c3330;
case 0x5c3331:c.instructions+=1;goto B5c3331;
case 0x5c3336:goto L5c3336;
case 0x5c3339:goto L5c3339;
case 0x5c333f:c.instructions+=4;goto B5c333f;
case 0x5c3344:c.instructions+=3;goto B5c3344;
case 0x5c3345:c.instructions+=2;goto B5c3345;
case 0x5c3347:c.instructions+=1;goto B5c3347;
case 0x5c3349:goto L5c3349;
case 0x5c3353:c.instructions+=1;goto B5c3353;
case 0x5c3355:goto L5c3355;
case 0x5c335f:c.instructions+=1;goto B5c335f;
case 0x5c3369:goto L5c3369;
case 0x5c3370:c.instructions+=1;goto B5c3370;
case 0x5c3372:goto L5c3372;
case 0x5c3377:c.instructions+=5;goto B5c3377;
case 0x5c3378:c.instructions+=4;goto B5c3378;
case 0x5c337c:c.instructions+=3;goto B5c337c;
case 0x5c3381:c.instructions+=2;goto B5c3381;
case 0x5c3382:c.instructions+=1;goto B5c3382;
case 0x5c3387:goto L5c3387;
case 0x5c338d:c.instructions+=5;goto B5c338d;
case 0x5c3391:c.instructions+=4;goto B5c3391;
case 0x5c3392:c.instructions+=3;goto B5c3392;
case 0x5c3393:c.instructions+=2;goto B5c3393;
case 0x5c3399:c.instructions+=1;goto B5c3399;
case 0x5c339e:goto L5c339e;
case 0x5c33a1:c.instructions+=2;goto B5c33a1;
case 0x5c33a3:c.instructions+=1;goto B5c33a3;
case 0x5c33a5:goto L5c33a5;
case 0x5c33a9:c.instructions+=2;goto B5c33a9;
case 0x5c33aa:c.instructions+=1;goto B5c33aa;
case 0x5c33af:goto L5c33af;
case 0x5c33b2:c.instructions+=1;goto B5c33b2;
case 0x5c33bc:goto L5c33bc;
case 0x5c33c2:c.instructions+=1;goto B5c33c2;
case 0x5c33d0:goto L5c33d0;
case 0x5c33d3:c.instructions+=12;goto B5c33d3;
case 0x5c33d4:c.instructions+=11;goto B5c33d4;
case 0x5c33d5:c.instructions+=10;goto B5c33d5;
case 0x5c33d6:c.instructions+=9;goto B5c33d6;
case 0x5c33de:c.instructions+=8;goto B5c33de;
case 0x5c33e6:c.instructions+=7;goto B5c33e6;
case 0x5c33ee:c.instructions+=6;goto B5c33ee;
case 0x5c33f6:c.instructions+=5;goto B5c33f6;
case 0x5c33fe:c.instructions+=4;goto B5c33fe;
case 0x5c3406:c.instructions+=3;goto B5c3406;
case 0x5c340b:c.instructions+=2;goto B5c340b;
case 0x5c3410:c.instructions+=1;goto B5c3410;
case 0x5c3412:goto L5c3412;
case 0x5c3416:c.instructions+=2;goto B5c3416;
case 0x5c3417:c.instructions+=1;goto B5c3417;
case 0x5c341c:goto L5c341c;
case 0x5c341f:c.instructions+=9;goto B5c341f;
case 0x5c3422:c.instructions+=8;goto B5c3422;
case 0x5c3426:c.instructions+=7;goto B5c3426;
case 0x5c342c:c.instructions+=6;goto B5c342c;
case 0x5c3432:c.instructions+=5;goto B5c3432;
case 0x5c3435:c.instructions+=4;goto B5c3435;
case 0x5c3438:c.instructions+=3;goto B5c3438;
case 0x5c343b:c.instructions+=2;goto B5c343b;
case 0x5c3441:c.instructions+=1;goto B5c3441;
case 0x5c3443:goto L5c3443;
case 0x5c3444:c.instructions+=4;goto B5c3444;
case 0x5c3445:c.instructions+=3;goto B5c3445;
case 0x5c3446:c.instructions+=2;goto B5c3446;
case 0x5c3449:c.instructions+=1;goto B5c3449;
case 0x5c3450:goto L5c3450;
case 0x5c3451:c.instructions+=21;goto B5c3451;
case 0x5c3453:c.instructions+=20;goto B5c3453;
case 0x5c3456:c.instructions+=19;goto B5c3456;
case 0x5c345c:c.instructions+=18;goto B5c345c;
case 0x5c345d:c.instructions+=17;goto B5c345d;
case 0x5c345e:c.instructions+=16;goto B5c345e;
case 0x5c345f:c.instructions+=15;goto B5c345f;
case 0x5c3464:c.instructions+=14;goto B5c3464;
case 0x5c346b:c.instructions+=13;goto B5c346b;
case 0x5c346d:c.instructions+=12;goto B5c346d;
case 0x5c346e:c.instructions+=11;goto B5c346e;
case 0x5c3475:c.instructions+=10;goto B5c3475;
case 0x5c3476:c.instructions+=9;goto B5c3476;
case 0x5c347d:c.instructions+=8;goto B5c347d;
case 0x5c347e:c.instructions+=7;goto B5c347e;
case 0x5c3489:c.instructions+=6;goto B5c3489;
case 0x5c3494:c.instructions+=5;goto B5c3494;
case 0x5c349f:c.instructions+=4;goto B5c349f;
case 0x5c34aa:c.instructions+=3;goto B5c34aa;
case 0x5c34b5:c.instructions+=2;goto B5c34b5;
case 0x5c34c0:c.instructions+=1;goto B5c34c0;
case 0x5c34c5:goto L5c34c5;
case 0x5c34c8:c.instructions+=14;goto B5c34c8;
case 0x5c34cb:c.instructions+=13;goto B5c34cb;
case 0x5c34d0:c.instructions+=12;goto B5c34d0;
case 0x5c34d1:c.instructions+=11;goto B5c34d1;
case 0x5c34d2:c.instructions+=10;goto B5c34d2;
case 0x5c34d6:c.instructions+=9;goto B5c34d6;
case 0x5c34d7:c.instructions+=8;goto B5c34d7;
case 0x5c34e2:c.instructions+=7;goto B5c34e2;
case 0x5c34ed:c.instructions+=6;goto B5c34ed;
case 0x5c34f8:c.instructions+=5;goto B5c34f8;
case 0x5c3503:c.instructions+=4;goto B5c3503;
case 0x5c350e:c.instructions+=3;goto B5c350e;
case 0x5c3519:c.instructions+=2;goto B5c3519;
case 0x5c3524:c.instructions+=1;goto B5c3524;
case 0x5c3529:goto L5c3529;
case 0x5c352d:c.instructions+=10;goto B5c352d;
case 0x5c352e:c.instructions+=9;goto B5c352e;
case 0x5c3533:c.instructions+=8;goto B5c3533;
case 0x5c353b:c.instructions+=7;goto B5c353b;
case 0x5c3543:c.instructions+=6;goto B5c3543;
case 0x5c354b:c.instructions+=5;goto B5c354b;
case 0x5c3553:c.instructions+=4;goto B5c3553;
case 0x5c355b:c.instructions+=3;goto B5c355b;
case 0x5c3563:c.instructions+=2;goto B5c3563;
case 0x5c356b:c.instructions+=1;goto B5c356b;
case 0x5c3570:goto L5c3570;
case 0x5c3573:c.instructions+=5;goto B5c3573;
case 0x5c357a:c.instructions+=4;goto B5c357a;
case 0x5c357b:c.instructions+=3;goto B5c357b;
case 0x5c3582:c.instructions+=2;goto B5c3582;
case 0x5c3583:c.instructions+=1;goto B5c3583;
case 0x5c3588:goto L5c3588;
case 0x5c358f:c.instructions+=196;goto B5c358f;
case 0x5c3593:c.instructions+=195;goto B5c3593;
case 0x5c359a:c.instructions+=194;goto B5c359a;
case 0x5c359e:c.instructions+=193;goto B5c359e;
case 0x5c35a0:c.instructions+=192;goto B5c35a0;
case 0x5c35a7:c.instructions+=191;goto B5c35a7;
case 0x5c35ab:c.instructions+=190;goto B5c35ab;
case 0x5c35ad:c.instructions+=189;goto B5c35ad;
case 0x5c35b4:c.instructions+=188;goto B5c35b4;
case 0x5c35b8:c.instructions+=187;goto B5c35b8;
case 0x5c35ba:c.instructions+=186;goto B5c35ba;
case 0x5c35be:c.instructions+=185;goto B5c35be;
case 0x5c35c5:c.instructions+=184;goto B5c35c5;
case 0x5c35c9:c.instructions+=183;goto B5c35c9;
case 0x5c35d0:c.instructions+=182;goto B5c35d0;
case 0x5c35d4:c.instructions+=181;goto B5c35d4;
case 0x5c35d6:c.instructions+=180;goto B5c35d6;
case 0x5c35dd:c.instructions+=179;goto B5c35dd;
case 0x5c35e1:c.instructions+=178;goto B5c35e1;
case 0x5c35e3:c.instructions+=177;goto B5c35e3;
case 0x5c35ea:c.instructions+=176;goto B5c35ea;
case 0x5c35ee:c.instructions+=175;goto B5c35ee;
case 0x5c35f0:c.instructions+=174;goto B5c35f0;
case 0x5c35f4:c.instructions+=173;goto B5c35f4;
case 0x5c35fb:c.instructions+=172;goto B5c35fb;
case 0x5c35ff:c.instructions+=171;goto B5c35ff;
case 0x5c3606:c.instructions+=170;goto B5c3606;
case 0x5c360a:c.instructions+=169;goto B5c360a;
case 0x5c360c:c.instructions+=168;goto B5c360c;
case 0x5c3613:c.instructions+=167;goto B5c3613;
case 0x5c3617:c.instructions+=166;goto B5c3617;
case 0x5c3619:c.instructions+=165;goto B5c3619;
case 0x5c3620:c.instructions+=164;goto B5c3620;
case 0x5c3624:c.instructions+=163;goto B5c3624;
case 0x5c3626:c.instructions+=162;goto B5c3626;
case 0x5c362a:c.instructions+=161;goto B5c362a;
case 0x5c362e:c.instructions+=160;goto B5c362e;
case 0x5c3635:c.instructions+=159;goto B5c3635;
case 0x5c3639:c.instructions+=158;goto B5c3639;
case 0x5c3640:c.instructions+=157;goto B5c3640;
case 0x5c3642:c.instructions+=156;goto B5c3642;
case 0x5c3646:c.instructions+=155;goto B5c3646;
case 0x5c364d:c.instructions+=154;goto B5c364d;
case 0x5c364f:c.instructions+=153;goto B5c364f;
case 0x5c3656:c.instructions+=152;goto B5c3656;
case 0x5c365a:c.instructions+=151;goto B5c365a;
case 0x5c365c:c.instructions+=150;goto B5c365c;
case 0x5c3660:c.instructions+=149;goto B5c3660;
case 0x5c3664:c.instructions+=148;goto B5c3664;
case 0x5c366b:c.instructions+=147;goto B5c366b;
case 0x5c3672:c.instructions+=146;goto B5c3672;
case 0x5c3676:c.instructions+=145;goto B5c3676;
case 0x5c3678:c.instructions+=144;goto B5c3678;
case 0x5c367c:c.instructions+=143;goto B5c367c;
case 0x5c3683:c.instructions+=142;goto B5c3683;
case 0x5c3685:c.instructions+=141;goto B5c3685;
case 0x5c3689:c.instructions+=140;goto B5c3689;
case 0x5c3690:c.instructions+=139;goto B5c3690;
case 0x5c3692:c.instructions+=138;goto B5c3692;
case 0x5c3696:c.instructions+=137;goto B5c3696;
case 0x5c369d:c.instructions+=136;goto B5c369d;
case 0x5c36a1:c.instructions+=135;goto B5c36a1;
case 0x5c36a5:c.instructions+=134;goto B5c36a5;
case 0x5c36ac:c.instructions+=133;goto B5c36ac;
case 0x5c36ae:c.instructions+=132;goto B5c36ae;
case 0x5c36b2:c.instructions+=131;goto B5c36b2;
case 0x5c36b9:c.instructions+=130;goto B5c36b9;
case 0x5c36bb:c.instructions+=129;goto B5c36bb;
case 0x5c36bf:c.instructions+=128;goto B5c36bf;
case 0x5c36c6:c.instructions+=127;goto B5c36c6;
case 0x5c36c8:c.instructions+=126;goto B5c36c8;
case 0x5c36cc:c.instructions+=125;goto B5c36cc;
case 0x5c36d3:c.instructions+=124;goto B5c36d3;
case 0x5c36d7:c.instructions+=123;goto B5c36d7;
case 0x5c36db:c.instructions+=122;goto B5c36db;
case 0x5c36e2:c.instructions+=121;goto B5c36e2;
case 0x5c36e4:c.instructions+=120;goto B5c36e4;
case 0x5c36e8:c.instructions+=119;goto B5c36e8;
case 0x5c36ef:c.instructions+=118;goto B5c36ef;
case 0x5c36f1:c.instructions+=117;goto B5c36f1;
case 0x5c36f5:c.instructions+=116;goto B5c36f5;
case 0x5c36fc:c.instructions+=115;goto B5c36fc;
case 0x5c36fe:c.instructions+=114;goto B5c36fe;
case 0x5c3702:c.instructions+=113;goto B5c3702;
case 0x5c3706:c.instructions+=112;goto B5c3706;
case 0x5c370d:c.instructions+=111;goto B5c370d;
case 0x5c3711:c.instructions+=110;goto B5c3711;
case 0x5c3718:c.instructions+=109;goto B5c3718;
case 0x5c371a:c.instructions+=108;goto B5c371a;
case 0x5c371e:c.instructions+=107;goto B5c371e;
case 0x5c3725:c.instructions+=106;goto B5c3725;
case 0x5c3727:c.instructions+=105;goto B5c3727;
case 0x5c372e:c.instructions+=104;goto B5c372e;
case 0x5c3732:c.instructions+=103;goto B5c3732;
case 0x5c3734:c.instructions+=102;goto B5c3734;
case 0x5c3738:c.instructions+=101;goto B5c3738;
case 0x5c373c:c.instructions+=100;goto B5c373c;
case 0x5c3743:c.instructions+=99;goto B5c3743;
case 0x5c374a:c.instructions+=98;goto B5c374a;
case 0x5c374e:c.instructions+=97;goto B5c374e;
case 0x5c3750:c.instructions+=96;goto B5c3750;
case 0x5c3754:c.instructions+=95;goto B5c3754;
case 0x5c375b:c.instructions+=94;goto B5c375b;
case 0x5c375d:c.instructions+=93;goto B5c375d;
case 0x5c3761:c.instructions+=92;goto B5c3761;
case 0x5c3768:c.instructions+=91;goto B5c3768;
case 0x5c376a:c.instructions+=90;goto B5c376a;
case 0x5c376e:c.instructions+=89;goto B5c376e;
case 0x5c3775:c.instructions+=88;goto B5c3775;
case 0x5c3779:c.instructions+=87;goto B5c3779;
case 0x5c377d:c.instructions+=86;goto B5c377d;
case 0x5c3784:c.instructions+=85;goto B5c3784;
case 0x5c3786:c.instructions+=84;goto B5c3786;
case 0x5c378a:c.instructions+=83;goto B5c378a;
case 0x5c3791:c.instructions+=82;goto B5c3791;
case 0x5c3793:c.instructions+=81;goto B5c3793;
case 0x5c3797:c.instructions+=80;goto B5c3797;
case 0x5c379e:c.instructions+=79;goto B5c379e;
case 0x5c37a0:c.instructions+=78;goto B5c37a0;
case 0x5c37a4:c.instructions+=77;goto B5c37a4;
case 0x5c37ab:c.instructions+=76;goto B5c37ab;
case 0x5c37af:c.instructions+=75;goto B5c37af;
case 0x5c37b3:c.instructions+=74;goto B5c37b3;
case 0x5c37ba:c.instructions+=73;goto B5c37ba;
case 0x5c37bc:c.instructions+=72;goto B5c37bc;
case 0x5c37c0:c.instructions+=71;goto B5c37c0;
case 0x5c37c7:c.instructions+=70;goto B5c37c7;
case 0x5c37c9:c.instructions+=69;goto B5c37c9;
case 0x5c37cd:c.instructions+=68;goto B5c37cd;
case 0x5c37d4:c.instructions+=67;goto B5c37d4;
case 0x5c37d6:c.instructions+=66;goto B5c37d6;
case 0x5c37da:c.instructions+=65;goto B5c37da;
case 0x5c37de:c.instructions+=64;goto B5c37de;
case 0x5c37e5:c.instructions+=63;goto B5c37e5;
case 0x5c37e9:c.instructions+=62;goto B5c37e9;
case 0x5c37f0:c.instructions+=61;goto B5c37f0;
case 0x5c37f2:c.instructions+=60;goto B5c37f2;
case 0x5c37f6:c.instructions+=59;goto B5c37f6;
case 0x5c37fd:c.instructions+=58;goto B5c37fd;
case 0x5c37ff:c.instructions+=57;goto B5c37ff;
case 0x5c3806:c.instructions+=56;goto B5c3806;
case 0x5c380a:c.instructions+=55;goto B5c380a;
case 0x5c380c:c.instructions+=54;goto B5c380c;
case 0x5c3810:c.instructions+=53;goto B5c3810;
case 0x5c3817:c.instructions+=52;goto B5c3817;
case 0x5c381b:c.instructions+=51;goto B5c381b;
case 0x5c381f:c.instructions+=50;goto B5c381f;
case 0x5c3826:c.instructions+=49;goto B5c3826;
case 0x5c3827:c.instructions+=48;goto B5c3827;
case 0x5c382b:c.instructions+=47;goto B5c382b;
case 0x5c3832:c.instructions+=46;goto B5c3832;
case 0x5c3833:c.instructions+=45;goto B5c3833;
case 0x5c3835:c.instructions+=44;goto B5c3835;
case 0x5c383c:c.instructions+=43;goto B5c383c;
case 0x5c3840:c.instructions+=42;goto B5c3840;
case 0x5c3842:c.instructions+=41;goto B5c3842;
case 0x5c3849:c.instructions+=40;goto B5c3849;
case 0x5c384d:c.instructions+=39;goto B5c384d;
case 0x5c384f:c.instructions+=38;goto B5c384f;
case 0x5c3856:c.instructions+=37;goto B5c3856;
case 0x5c385d:c.instructions+=36;goto B5c385d;
case 0x5c3861:c.instructions+=35;goto B5c3861;
case 0x5c3868:c.instructions+=34;goto B5c3868;
case 0x5c386c:c.instructions+=33;goto B5c386c;
case 0x5c386e:c.instructions+=32;goto B5c386e;
case 0x5c3875:c.instructions+=31;goto B5c3875;
case 0x5c3879:c.instructions+=30;goto B5c3879;
case 0x5c387b:c.instructions+=29;goto B5c387b;
case 0x5c3882:c.instructions+=28;goto B5c3882;
case 0x5c3886:c.instructions+=27;goto B5c3886;
case 0x5c3888:c.instructions+=26;goto B5c3888;
case 0x5c388f:c.instructions+=25;goto B5c388f;
case 0x5c3896:c.instructions+=24;goto B5c3896;
case 0x5c389a:c.instructions+=23;goto B5c389a;
case 0x5c38a1:c.instructions+=22;goto B5c38a1;
case 0x5c38a5:c.instructions+=21;goto B5c38a5;
case 0x5c38a7:c.instructions+=20;goto B5c38a7;
case 0x5c38ae:c.instructions+=19;goto B5c38ae;
case 0x5c38b2:c.instructions+=18;goto B5c38b2;
case 0x5c38b4:c.instructions+=17;goto B5c38b4;
case 0x5c38bb:c.instructions+=16;goto B5c38bb;
case 0x5c38bf:c.instructions+=15;goto B5c38bf;
case 0x5c38c1:c.instructions+=14;goto B5c38c1;
case 0x5c38c8:c.instructions+=13;goto B5c38c8;
case 0x5c38cf:c.instructions+=12;goto B5c38cf;
case 0x5c38d3:c.instructions+=11;goto B5c38d3;
case 0x5c38da:c.instructions+=10;goto B5c38da;
case 0x5c38de:c.instructions+=9;goto B5c38de;
case 0x5c38e0:c.instructions+=8;goto B5c38e0;
case 0x5c38e7:c.instructions+=7;goto B5c38e7;
case 0x5c38eb:c.instructions+=6;goto B5c38eb;
case 0x5c38ed:c.instructions+=5;goto B5c38ed;
case 0x5c38f4:c.instructions+=4;goto B5c38f4;
case 0x5c38f8:c.instructions+=3;goto B5c38f8;
case 0x5c38fa:c.instructions+=2;goto B5c38fa;
case 0x5c3901:c.instructions+=1;goto B5c3901;
case 0x5c3906:goto L5c3906;
case 0x5c3909:c.instructions+=12;goto B5c3909;
case 0x5c3910:c.instructions+=11;goto B5c3910;
case 0x5c3911:c.instructions+=10;goto B5c3911;
case 0x5c3918:c.instructions+=9;goto B5c3918;
case 0x5c3919:c.instructions+=8;goto B5c3919;
case 0x5c3924:c.instructions+=7;goto B5c3924;
case 0x5c392f:c.instructions+=6;goto B5c392f;
case 0x5c393a:c.instructions+=5;goto B5c393a;
case 0x5c3945:c.instructions+=4;goto B5c3945;
case 0x5c3950:c.instructions+=3;goto B5c3950;
case 0x5c395b:c.instructions+=2;goto B5c395b;
case 0x5c3966:c.instructions+=1;goto B5c3966;
case 0x5c396b:goto L5c396b;
case 0x5c3971:c.instructions+=17;goto B5c3971;
case 0x5c3976:c.instructions+=16;goto B5c3976;
case 0x5c3978:c.instructions+=15;goto B5c3978;
case 0x5c397f:c.instructions+=14;goto B5c397f;
case 0x5c3983:c.instructions+=13;goto B5c3983;
case 0x5c398e:c.instructions+=12;goto B5c398e;
case 0x5c3991:c.instructions+=11;goto B5c3991;
case 0x5c3997:c.instructions+=10;goto B5c3997;
case 0x5c399d:c.instructions+=9;goto B5c399d;
case 0x5c39a0:c.instructions+=8;goto B5c39a0;
case 0x5c39a7:c.instructions+=7;goto B5c39a7;
case 0x5c39ae:c.instructions+=6;goto B5c39ae;
case 0x5c39b0:c.instructions+=5;goto B5c39b0;
case 0x5c39b2:c.instructions+=4;goto B5c39b2;
case 0x5c39b9:c.instructions+=3;goto B5c39b9;
case 0x5c39c0:c.instructions+=2;goto B5c39c0;
case 0x5c39c7:c.instructions+=1;goto B5c39c7;
case 0x5c39c9:goto L5c39c9;
case 0x5c39d0:goto L5c39d0;
case 0x5c39d3:c.instructions+=2;goto B5c39d3;
case 0x5c39d5:c.instructions+=1;goto B5c39d5;
case 0x5c39db:goto L5c39db;
case 0x5c39de:c.instructions+=4;goto B5c39de;
case 0x5c39e1:c.instructions+=3;goto B5c39e1;
case 0x5c39e3:c.instructions+=2;goto B5c39e3;
case 0x5c39e6:c.instructions+=1;goto B5c39e6;
case 0x5c39eb:goto L5c39eb;
case 0x5c39ee:c.instructions+=4;goto B5c39ee;
case 0x5c39f1:c.instructions+=3;goto B5c39f1;
case 0x5c39f3:c.instructions+=2;goto B5c39f3;
case 0x5c39fa:c.instructions+=1;goto B5c39fa;
case 0x5c3a00:goto L5c3a00;
case 0x5c3a03:c.instructions+=3;goto B5c3a03;
case 0x5c3a0a:c.instructions+=2;goto B5c3a0a;
case 0x5c3a0f:c.instructions+=1;goto B5c3a0f;
case 0x5c3a13:goto L5c3a13;
case 0x5c3a15:goto L5c3a15;
case 0x5c3a16:c.instructions+=5;goto B5c3a16;
case 0x5c3a21:c.instructions+=4;goto B5c3a21;
case 0x5c3a2c:c.instructions+=3;goto B5c3a2c;
case 0x5c3a37:c.instructions+=2;goto B5c3a37;
case 0x5c3a42:c.instructions+=1;goto B5c3a42;
case 0x5c3a47:goto L5c3a47;
case 0x5c3a4b:c.instructions+=3;goto B5c3a4b;
case 0x5c3a4c:c.instructions+=2;goto B5c3a4c;
case 0x5c3a57:c.instructions+=1;goto B5c3a57;
case 0x5c3a5c:goto L5c3a5c;
case 0x5c3a63:c.instructions+=3;goto B5c3a63;
case 0x5c3a64:c.instructions+=2;goto B5c3a64;
case 0x5c3a6c:c.instructions+=1;goto B5c3a6c;
case 0x5c3a71:goto L5c3a71;
case 0x5c3a74:c.instructions+=6;goto B5c3a74;
case 0x5c3a7f:c.instructions+=5;goto B5c3a7f;
case 0x5c3a81:c.instructions+=4;goto B5c3a81;
case 0x5c3a84:c.instructions+=3;goto B5c3a84;
case 0x5c3a87:c.instructions+=2;goto B5c3a87;
case 0x5c3a8a:c.instructions+=1;goto B5c3a8a;
case 0x5c3a90:goto L5c3a90;
case 0x5c3a97:goto L5c3a97;
case 0x5c3a9c:c.instructions+=5;goto B5c3a9c;
case 0x5c3aa0:c.instructions+=4;goto B5c3aa0;
case 0x5c3aa1:c.instructions+=3;goto B5c3aa1;
case 0x5c3aa5:c.instructions+=2;goto B5c3aa5;
case 0x5c3aa6:c.instructions+=1;goto B5c3aa6;
case 0x5c3aab:goto L5c3aab;
case 0x5c3aaf:c.instructions+=196;goto B5c3aaf;
case 0x5c3ab3:c.instructions+=195;goto B5c3ab3;
case 0x5c3ab7:c.instructions+=194;goto B5c3ab7;
case 0x5c3abb:c.instructions+=193;goto B5c3abb;
case 0x5c3abd:c.instructions+=192;goto B5c3abd;
case 0x5c3ac1:c.instructions+=191;goto B5c3ac1;
case 0x5c3ac5:c.instructions+=190;goto B5c3ac5;
case 0x5c3ac7:c.instructions+=189;goto B5c3ac7;
case 0x5c3acb:c.instructions+=188;goto B5c3acb;
case 0x5c3acf:c.instructions+=187;goto B5c3acf;
case 0x5c3ad1:c.instructions+=186;goto B5c3ad1;
case 0x5c3ad8:c.instructions+=185;goto B5c3ad8;
case 0x5c3adc:c.instructions+=184;goto B5c3adc;
case 0x5c3ae0:c.instructions+=183;goto B5c3ae0;
case 0x5c3ae4:c.instructions+=182;goto B5c3ae4;
case 0x5c3ae8:c.instructions+=181;goto B5c3ae8;
case 0x5c3aea:c.instructions+=180;goto B5c3aea;
case 0x5c3aee:c.instructions+=179;goto B5c3aee;
case 0x5c3af2:c.instructions+=178;goto B5c3af2;
case 0x5c3af4:c.instructions+=177;goto B5c3af4;
case 0x5c3af8:c.instructions+=176;goto B5c3af8;
case 0x5c3afc:c.instructions+=175;goto B5c3afc;
case 0x5c3afe:c.instructions+=174;goto B5c3afe;
case 0x5c3b05:c.instructions+=173;goto B5c3b05;
case 0x5c3b09:c.instructions+=172;goto B5c3b09;
case 0x5c3b0d:c.instructions+=171;goto B5c3b0d;
case 0x5c3b11:c.instructions+=170;goto B5c3b11;
case 0x5c3b15:c.instructions+=169;goto B5c3b15;
case 0x5c3b17:c.instructions+=168;goto B5c3b17;
case 0x5c3b1b:c.instructions+=167;goto B5c3b1b;
case 0x5c3b1f:c.instructions+=166;goto B5c3b1f;
case 0x5c3b21:c.instructions+=165;goto B5c3b21;
case 0x5c3b25:c.instructions+=164;goto B5c3b25;
case 0x5c3b29:c.instructions+=163;goto B5c3b29;
case 0x5c3b2b:c.instructions+=162;goto B5c3b2b;
case 0x5c3b32:c.instructions+=161;goto B5c3b32;
case 0x5c3b36:c.instructions+=160;goto B5c3b36;
case 0x5c3b3a:c.instructions+=159;goto B5c3b3a;
case 0x5c3b3e:c.instructions+=158;goto B5c3b3e;
case 0x5c3b42:c.instructions+=157;goto B5c3b42;
case 0x5c3b44:c.instructions+=156;goto B5c3b44;
case 0x5c3b48:c.instructions+=155;goto B5c3b48;
case 0x5c3b4c:c.instructions+=154;goto B5c3b4c;
case 0x5c3b4e:c.instructions+=153;goto B5c3b4e;
case 0x5c3b52:c.instructions+=152;goto B5c3b52;
case 0x5c3b56:c.instructions+=151;goto B5c3b56;
case 0x5c3b58:c.instructions+=150;goto B5c3b58;
case 0x5c3b5f:c.instructions+=149;goto B5c3b5f;
case 0x5c3b63:c.instructions+=148;goto B5c3b63;
case 0x5c3b67:c.instructions+=147;goto B5c3b67;
case 0x5c3b6b:c.instructions+=146;goto B5c3b6b;
case 0x5c3b6f:c.instructions+=145;goto B5c3b6f;
case 0x5c3b71:c.instructions+=144;goto B5c3b71;
case 0x5c3b75:c.instructions+=143;goto B5c3b75;
case 0x5c3b79:c.instructions+=142;goto B5c3b79;
case 0x5c3b7b:c.instructions+=141;goto B5c3b7b;
case 0x5c3b7f:c.instructions+=140;goto B5c3b7f;
case 0x5c3b83:c.instructions+=139;goto B5c3b83;
case 0x5c3b85:c.instructions+=138;goto B5c3b85;
case 0x5c3b8c:c.instructions+=137;goto B5c3b8c;
case 0x5c3b90:c.instructions+=136;goto B5c3b90;
case 0x5c3b94:c.instructions+=135;goto B5c3b94;
case 0x5c3b98:c.instructions+=134;goto B5c3b98;
case 0x5c3b9c:c.instructions+=133;goto B5c3b9c;
case 0x5c3b9e:c.instructions+=132;goto B5c3b9e;
case 0x5c3ba2:c.instructions+=131;goto B5c3ba2;
case 0x5c3ba6:c.instructions+=130;goto B5c3ba6;
case 0x5c3ba8:c.instructions+=129;goto B5c3ba8;
case 0x5c3bac:c.instructions+=128;goto B5c3bac;
case 0x5c3bb0:c.instructions+=127;goto B5c3bb0;
case 0x5c3bb2:c.instructions+=126;goto B5c3bb2;
case 0x5c3bb9:c.instructions+=125;goto B5c3bb9;
case 0x5c3bbd:c.instructions+=124;goto B5c3bbd;
case 0x5c3bc1:c.instructions+=123;goto B5c3bc1;
case 0x5c3bc5:c.instructions+=122;goto B5c3bc5;
case 0x5c3bc9:c.instructions+=121;goto B5c3bc9;
case 0x5c3bcb:c.instructions+=120;goto B5c3bcb;
case 0x5c3bcf:c.instructions+=119;goto B5c3bcf;
case 0x5c3bd3:c.instructions+=118;goto B5c3bd3;
case 0x5c3bd5:c.instructions+=117;goto B5c3bd5;
case 0x5c3bd9:c.instructions+=116;goto B5c3bd9;
case 0x5c3bdd:c.instructions+=115;goto B5c3bdd;
case 0x5c3bdf:c.instructions+=114;goto B5c3bdf;
case 0x5c3be6:c.instructions+=113;goto B5c3be6;
case 0x5c3bea:c.instructions+=112;goto B5c3bea;
case 0x5c3bee:c.instructions+=111;goto B5c3bee;
case 0x5c3bf2:c.instructions+=110;goto B5c3bf2;
case 0x5c3bf6:c.instructions+=109;goto B5c3bf6;
case 0x5c3bf8:c.instructions+=108;goto B5c3bf8;
case 0x5c3bfc:c.instructions+=107;goto B5c3bfc;
case 0x5c3c00:c.instructions+=106;goto B5c3c00;
case 0x5c3c02:c.instructions+=105;goto B5c3c02;
case 0x5c3c06:c.instructions+=104;goto B5c3c06;
case 0x5c3c0a:c.instructions+=103;goto B5c3c0a;
case 0x5c3c0c:c.instructions+=102;goto B5c3c0c;
case 0x5c3c13:c.instructions+=101;goto B5c3c13;
case 0x5c3c17:c.instructions+=100;goto B5c3c17;
case 0x5c3c1b:c.instructions+=99;goto B5c3c1b;
case 0x5c3c22:c.instructions+=98;goto B5c3c22;
case 0x5c3c26:c.instructions+=97;goto B5c3c26;
case 0x5c3c28:c.instructions+=96;goto B5c3c28;
case 0x5c3c2c:c.instructions+=95;goto B5c3c2c;
case 0x5c3c33:c.instructions+=94;goto B5c3c33;
case 0x5c3c35:c.instructions+=93;goto B5c3c35;
case 0x5c3c39:c.instructions+=92;goto B5c3c39;
case 0x5c3c40:c.instructions+=91;goto B5c3c40;
case 0x5c3c42:c.instructions+=90;goto B5c3c42;
case 0x5c3c49:c.instructions+=89;goto B5c3c49;
case 0x5c3c4d:c.instructions+=88;goto B5c3c4d;
case 0x5c3c51:c.instructions+=87;goto B5c3c51;
case 0x5c3c58:c.instructions+=86;goto B5c3c58;
case 0x5c3c5c:c.instructions+=85;goto B5c3c5c;
case 0x5c3c5e:c.instructions+=84;goto B5c3c5e;
case 0x5c3c65:c.instructions+=83;goto B5c3c65;
case 0x5c3c69:c.instructions+=82;goto B5c3c69;
case 0x5c3c6b:c.instructions+=81;goto B5c3c6b;
case 0x5c3c6f:c.instructions+=80;goto B5c3c6f;
case 0x5c3c76:c.instructions+=79;goto B5c3c76;
case 0x5c3c78:c.instructions+=78;goto B5c3c78;
case 0x5c3c7f:c.instructions+=77;goto B5c3c7f;
case 0x5c3c83:c.instructions+=76;goto B5c3c83;
case 0x5c3c87:c.instructions+=75;goto B5c3c87;
case 0x5c3c8e:c.instructions+=74;goto B5c3c8e;
case 0x5c3c92:c.instructions+=73;goto B5c3c92;
case 0x5c3c94:c.instructions+=72;goto B5c3c94;
case 0x5c3c98:c.instructions+=71;goto B5c3c98;
case 0x5c3c9f:c.instructions+=70;goto B5c3c9f;
case 0x5c3ca1:c.instructions+=69;goto B5c3ca1;
case 0x5c3ca5:c.instructions+=68;goto B5c3ca5;
case 0x5c3cac:c.instructions+=67;goto B5c3cac;
case 0x5c3cae:c.instructions+=66;goto B5c3cae;
case 0x5c3cb5:c.instructions+=65;goto B5c3cb5;
case 0x5c3cb9:c.instructions+=64;goto B5c3cb9;
case 0x5c3cbd:c.instructions+=63;goto B5c3cbd;
case 0x5c3cc4:c.instructions+=62;goto B5c3cc4;
case 0x5c3cc8:c.instructions+=61;goto B5c3cc8;
case 0x5c3cca:c.instructions+=60;goto B5c3cca;
case 0x5c3cce:c.instructions+=59;goto B5c3cce;
case 0x5c3cd5:c.instructions+=58;goto B5c3cd5;
case 0x5c3cd7:c.instructions+=57;goto B5c3cd7;
case 0x5c3cdb:c.instructions+=56;goto B5c3cdb;
case 0x5c3ce2:c.instructions+=55;goto B5c3ce2;
case 0x5c3ce4:c.instructions+=54;goto B5c3ce4;
case 0x5c3ceb:c.instructions+=53;goto B5c3ceb;
case 0x5c3cef:c.instructions+=52;goto B5c3cef;
case 0x5c3cf6:c.instructions+=51;goto B5c3cf6;
case 0x5c3cfa:c.instructions+=50;goto B5c3cfa;
case 0x5c3d01:c.instructions+=49;goto B5c3d01;
case 0x5c3d03:c.instructions+=48;goto B5c3d03;
case 0x5c3d07:c.instructions+=47;goto B5c3d07;
case 0x5c3d0e:c.instructions+=46;goto B5c3d0e;
case 0x5c3d10:c.instructions+=45;goto B5c3d10;
case 0x5c3d14:c.instructions+=44;goto B5c3d14;
case 0x5c3d1b:c.instructions+=43;goto B5c3d1b;
case 0x5c3d1d:c.instructions+=42;goto B5c3d1d;
case 0x5c3d24:c.instructions+=41;goto B5c3d24;
case 0x5c3d2b:c.instructions+=40;goto B5c3d2b;
case 0x5c3d2f:c.instructions+=39;goto B5c3d2f;
case 0x5c3d33:c.instructions+=38;goto B5c3d33;
case 0x5c3d3a:c.instructions+=37;goto B5c3d3a;
case 0x5c3d3c:c.instructions+=36;goto B5c3d3c;
case 0x5c3d40:c.instructions+=35;goto B5c3d40;
case 0x5c3d47:c.instructions+=34;goto B5c3d47;
case 0x5c3d49:c.instructions+=33;goto B5c3d49;
case 0x5c3d4d:c.instructions+=32;goto B5c3d4d;
case 0x5c3d54:c.instructions+=31;goto B5c3d54;
case 0x5c3d56:c.instructions+=30;goto B5c3d56;
case 0x5c3d5d:c.instructions+=29;goto B5c3d5d;
case 0x5c3d61:c.instructions+=28;goto B5c3d61;
case 0x5c3d68:c.instructions+=27;goto B5c3d68;
case 0x5c3d6c:c.instructions+=26;goto B5c3d6c;
case 0x5c3d73:c.instructions+=25;goto B5c3d73;
case 0x5c3d75:c.instructions+=24;goto B5c3d75;
case 0x5c3d79:c.instructions+=23;goto B5c3d79;
case 0x5c3d80:c.instructions+=22;goto B5c3d80;
case 0x5c3d82:c.instructions+=21;goto B5c3d82;
case 0x5c3d86:c.instructions+=20;goto B5c3d86;
case 0x5c3d8d:c.instructions+=19;goto B5c3d8d;
case 0x5c3d8f:c.instructions+=18;goto B5c3d8f;
case 0x5c3d96:c.instructions+=17;goto B5c3d96;
case 0x5c3d97:c.instructions+=16;goto B5c3d97;
case 0x5c3d9e:c.instructions+=15;goto B5c3d9e;
case 0x5c3da2:c.instructions+=14;goto B5c3da2;
case 0x5c3da6:c.instructions+=13;goto B5c3da6;
case 0x5c3da7:c.instructions+=12;goto B5c3da7;
case 0x5c3dae:c.instructions+=11;goto B5c3dae;
case 0x5c3db2:c.instructions+=10;goto B5c3db2;
case 0x5c3db9:c.instructions+=9;goto B5c3db9;
case 0x5c3dbb:c.instructions+=8;goto B5c3dbb;
case 0x5c3dbf:c.instructions+=7;goto B5c3dbf;
case 0x5c3dc6:c.instructions+=6;goto B5c3dc6;
case 0x5c3dc8:c.instructions+=5;goto B5c3dc8;
case 0x5c3dcc:c.instructions+=4;goto B5c3dcc;
case 0x5c3dd3:c.instructions+=3;goto B5c3dd3;
case 0x5c3dd5:c.instructions+=2;goto B5c3dd5;
case 0x5c3ddc:c.instructions+=1;goto B5c3ddc;
case 0x5c3de1:goto L5c3de1;
case 0x5c3de6:c.instructions+=1;goto B5c3de6;
case 0x5c3deb:goto L5c3deb;
case 0x5c3df0:c.instructions+=5;goto B5c3df0;
case 0x5c3df4:c.instructions+=4;goto B5c3df4;
case 0x5c3df5:c.instructions+=3;goto B5c3df5;
case 0x5c3df9:c.instructions+=2;goto B5c3df9;
case 0x5c3dfa:c.instructions+=1;goto B5c3dfa;
case 0x5c3dff:goto L5c3dff;
case 0x5c3e03:c.instructions+=129;goto B5c3e03;
case 0x5c3e07:c.instructions+=128;goto B5c3e07;
case 0x5c3e0b:c.instructions+=127;goto B5c3e0b;
case 0x5c3e0f:c.instructions+=126;goto B5c3e0f;
case 0x5c3e11:c.instructions+=125;goto B5c3e11;
case 0x5c3e15:c.instructions+=124;goto B5c3e15;
case 0x5c3e19:c.instructions+=123;goto B5c3e19;
case 0x5c3e1b:c.instructions+=122;goto B5c3e1b;
case 0x5c3e1f:c.instructions+=121;goto B5c3e1f;
case 0x5c3e23:c.instructions+=120;goto B5c3e23;
case 0x5c3e25:c.instructions+=119;goto B5c3e25;
case 0x5c3e2c:c.instructions+=118;goto B5c3e2c;
case 0x5c3e30:c.instructions+=117;goto B5c3e30;
case 0x5c3e34:c.instructions+=116;goto B5c3e34;
case 0x5c3e38:c.instructions+=115;goto B5c3e38;
case 0x5c3e3c:c.instructions+=114;goto B5c3e3c;
case 0x5c3e3e:c.instructions+=113;goto B5c3e3e;
case 0x5c3e42:c.instructions+=112;goto B5c3e42;
case 0x5c3e46:c.instructions+=111;goto B5c3e46;
case 0x5c3e48:c.instructions+=110;goto B5c3e48;
case 0x5c3e4c:c.instructions+=109;goto B5c3e4c;
case 0x5c3e50:c.instructions+=108;goto B5c3e50;
case 0x5c3e52:c.instructions+=107;goto B5c3e52;
case 0x5c3e59:c.instructions+=106;goto B5c3e59;
case 0x5c3e5d:c.instructions+=105;goto B5c3e5d;
case 0x5c3e61:c.instructions+=104;goto B5c3e61;
case 0x5c3e65:c.instructions+=103;goto B5c3e65;
case 0x5c3e69:c.instructions+=102;goto B5c3e69;
case 0x5c3e6b:c.instructions+=101;goto B5c3e6b;
case 0x5c3e6f:c.instructions+=100;goto B5c3e6f;
case 0x5c3e73:c.instructions+=99;goto B5c3e73;
case 0x5c3e75:c.instructions+=98;goto B5c3e75;
case 0x5c3e79:c.instructions+=97;goto B5c3e79;
case 0x5c3e7d:c.instructions+=96;goto B5c3e7d;
case 0x5c3e7f:c.instructions+=95;goto B5c3e7f;
case 0x5c3e86:c.instructions+=94;goto B5c3e86;
case 0x5c3e8a:c.instructions+=93;goto B5c3e8a;
case 0x5c3e8e:c.instructions+=92;goto B5c3e8e;
case 0x5c3e92:c.instructions+=91;goto B5c3e92;
case 0x5c3e96:c.instructions+=90;goto B5c3e96;
case 0x5c3e98:c.instructions+=89;goto B5c3e98;
case 0x5c3e9c:c.instructions+=88;goto B5c3e9c;
case 0x5c3ea0:c.instructions+=87;goto B5c3ea0;
case 0x5c3ea2:c.instructions+=86;goto B5c3ea2;
case 0x5c3ea6:c.instructions+=85;goto B5c3ea6;
case 0x5c3eaa:c.instructions+=84;goto B5c3eaa;
case 0x5c3eac:c.instructions+=83;goto B5c3eac;
case 0x5c3eb3:c.instructions+=82;goto B5c3eb3;
case 0x5c3eb7:c.instructions+=81;goto B5c3eb7;
case 0x5c3ebb:c.instructions+=80;goto B5c3ebb;
case 0x5c3ebf:c.instructions+=79;goto B5c3ebf;
case 0x5c3ec3:c.instructions+=78;goto B5c3ec3;
case 0x5c3ec5:c.instructions+=77;goto B5c3ec5;
case 0x5c3ec9:c.instructions+=76;goto B5c3ec9;
case 0x5c3ecd:c.instructions+=75;goto B5c3ecd;
case 0x5c3ecf:c.instructions+=74;goto B5c3ecf;
case 0x5c3ed3:c.instructions+=73;goto B5c3ed3;
case 0x5c3ed7:c.instructions+=72;goto B5c3ed7;
case 0x5c3ed9:c.instructions+=71;goto B5c3ed9;
case 0x5c3ee0:c.instructions+=70;goto B5c3ee0;
case 0x5c3ee4:c.instructions+=69;goto B5c3ee4;
case 0x5c3ee8:c.instructions+=68;goto B5c3ee8;
case 0x5c3eec:c.instructions+=67;goto B5c3eec;
case 0x5c3ef0:c.instructions+=66;goto B5c3ef0;
case 0x5c3ef2:c.instructions+=65;goto B5c3ef2;
case 0x5c3ef6:c.instructions+=64;goto B5c3ef6;
case 0x5c3efa:c.instructions+=63;goto B5c3efa;
case 0x5c3efc:c.instructions+=62;goto B5c3efc;
case 0x5c3f00:c.instructions+=61;goto B5c3f00;
case 0x5c3f04:c.instructions+=60;goto B5c3f04;
case 0x5c3f06:c.instructions+=59;goto B5c3f06;
case 0x5c3f0d:c.instructions+=58;goto B5c3f0d;
case 0x5c3f11:c.instructions+=57;goto B5c3f11;
case 0x5c3f15:c.instructions+=56;goto B5c3f15;
case 0x5c3f19:c.instructions+=55;goto B5c3f19;
case 0x5c3f1d:c.instructions+=54;goto B5c3f1d;
case 0x5c3f1f:c.instructions+=53;goto B5c3f1f;
case 0x5c3f23:c.instructions+=52;goto B5c3f23;
case 0x5c3f27:c.instructions+=51;goto B5c3f27;
case 0x5c3f29:c.instructions+=50;goto B5c3f29;
case 0x5c3f2d:c.instructions+=49;goto B5c3f2d;
case 0x5c3f31:c.instructions+=48;goto B5c3f31;
case 0x5c3f33:c.instructions+=47;goto B5c3f33;
case 0x5c3f3a:c.instructions+=46;goto B5c3f3a;
case 0x5c3f3e:c.instructions+=45;goto B5c3f3e;
case 0x5c3f42:c.instructions+=44;goto B5c3f42;
case 0x5c3f46:c.instructions+=43;goto B5c3f46;
case 0x5c3f4a:c.instructions+=42;goto B5c3f4a;
case 0x5c3f4c:c.instructions+=41;goto B5c3f4c;
case 0x5c3f50:c.instructions+=40;goto B5c3f50;
case 0x5c3f54:c.instructions+=39;goto B5c3f54;
case 0x5c3f56:c.instructions+=38;goto B5c3f56;
case 0x5c3f5a:c.instructions+=37;goto B5c3f5a;
case 0x5c3f5e:c.instructions+=36;goto B5c3f5e;
case 0x5c3f60:c.instructions+=35;goto B5c3f60;
case 0x5c3f67:c.instructions+=34;goto B5c3f67;
case 0x5c3f6b:c.instructions+=33;goto B5c3f6b;
case 0x5c3f6f:c.instructions+=32;goto B5c3f6f;
case 0x5c3f76:c.instructions+=31;goto B5c3f76;
case 0x5c3f7a:c.instructions+=30;goto B5c3f7a;
case 0x5c3f7c:c.instructions+=29;goto B5c3f7c;
case 0x5c3f80:c.instructions+=28;goto B5c3f80;
case 0x5c3f87:c.instructions+=27;goto B5c3f87;
case 0x5c3f89:c.instructions+=26;goto B5c3f89;
case 0x5c3f8d:c.instructions+=25;goto B5c3f8d;
case 0x5c3f94:c.instructions+=24;goto B5c3f94;
case 0x5c3f96:c.instructions+=23;goto B5c3f96;
case 0x5c3f9d:c.instructions+=22;goto B5c3f9d;
case 0x5c3fa1:c.instructions+=21;goto B5c3fa1;
case 0x5c3fa5:c.instructions+=20;goto B5c3fa5;
case 0x5c3fac:c.instructions+=19;goto B5c3fac;
case 0x5c3fb0:c.instructions+=18;goto B5c3fb0;
case 0x5c3fb2:c.instructions+=17;goto B5c3fb2;
case 0x5c3fb9:c.instructions+=16;goto B5c3fb9;
case 0x5c3fbd:c.instructions+=15;goto B5c3fbd;
case 0x5c3fbf:c.instructions+=14;goto B5c3fbf;
case 0x5c3fc3:c.instructions+=13;goto B5c3fc3;
case 0x5c3fca:c.instructions+=12;goto B5c3fca;
case 0x5c3fcc:c.instructions+=11;goto B5c3fcc;
case 0x5c3fd3:c.instructions+=10;goto B5c3fd3;
case 0x5c3fd7:c.instructions+=9;goto B5c3fd7;
case 0x5c3fdb:c.instructions+=8;goto B5c3fdb;
case 0x5c3fe2:c.instructions+=7;goto B5c3fe2;
case 0x5c3fe6:c.instructions+=6;goto B5c3fe6;
case 0x5c3fe8:c.instructions+=5;goto B5c3fe8;
case 0x5c3fec:c.instructions+=4;goto B5c3fec;
case 0x5c3ff3:c.instructions+=3;goto B5c3ff3;
case 0x5c3ff5:c.instructions+=2;goto B5c3ff5;
case 0x5c3ff9:c.instructions+=1;goto B5c3ff9;
default:missing_instruction(c.pc);}
B5c3003:L5c3003:{c.instructions+=1;NFSU2_TR(0x5c3003);
{goto L5c3007;}
}
B5c3005:L5c3005:{c.instructions+=1;NFSU2_TR(0x5c3005);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c3007:L5c3007:{c.instructions+=6;NFSU2_TR(0x5c3007);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B5c300a:{NFSU2_TR(0x5c300a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c300d:{NFSU2_TR(0x5c300d);
u8 U[4];
w4(U+0,u32(0x51c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3012:{NFSU2_TR(0x5c3012);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3016:{NFSU2_TR(0x5c3016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5c3018:{NFSU2_TR(0x5c3018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c301dull));
TAIL_STATIC(0x575620u,575);
}
B5c301d:L5c301d:{c.instructions+=5;NFSU2_TR(0x5c301d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c3020:{NFSU2_TR(0x5c3020);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3024:{NFSU2_TR(0x5c3024);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c3026:{NFSU2_TR(0x5c3026);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c302a:{NFSU2_TR(0x5c302a);
if(r1(R+518)){{goto L5c3038;}}
}
B5c302c:L5c302c:{c.instructions+=4;NFSU2_TR(0x5c302c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c302e:{NFSU2_TR(0x5c302e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c302f:{NFSU2_TR(0x5c302f);
__builtin_memmove((R+4),(R+0),4);
}
B5c3031:{NFSU2_TR(0x5c3031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3036ull));
TAIL_STATIC(0x61e150u,61e);
}
B5c3036:L5c3036:{c.instructions+=1;NFSU2_TR(0x5c3036);
{goto L5c303a;}
}
B5c3038:L5c3038:{c.instructions+=1;NFSU2_TR(0x5c3038);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c303a:L5c303a:{c.instructions+=4;NFSU2_TR(0x5c303a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c303c:{NFSU2_TR(0x5c303c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3040:{NFSU2_TR(0x5c3040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3043:{NFSU2_TR(0x5c3043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3048ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c3048:L5c3048:{c.instructions+=4;NFSU2_TR(0x5c3048);
__builtin_memmove((R+24),(R+0),4);
}
B5c304a:{NFSU2_TR(0x5c304a);
u8 U[4];
w4(U+0,u32(0x3b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c304f:{NFSU2_TR(0x5c304f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x872f20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3056:{NFSU2_TR(0x5c3056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c305bull));
TAIL_STATIC(0x575620u,575);
}
B5c305b:L5c305b:{c.instructions+=5;NFSU2_TR(0x5c305b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5c305e:{NFSU2_TR(0x5c305e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3062:{NFSU2_TR(0x5c3062);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c3064:{NFSU2_TR(0x5c3064);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c306c:{NFSU2_TR(0x5c306c);
if(r1(R+518)){{goto L5c3077;}}
}
B5c306e:L5c306e:{c.instructions+=2;NFSU2_TR(0x5c306e);
__builtin_memmove((R+4),(R+0),4);
}
B5c3070:{NFSU2_TR(0x5c3070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3075ull));
TAIL_STATIC(0x5e0260u,5e0);
}
B5c3075:L5c3075:{c.instructions+=1;NFSU2_TR(0x5c3075);
{goto L5c3079;}
}
B5c3077:L5c3077:{c.instructions+=1;NFSU2_TR(0x5c3077);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c3079:L5c3079:{c.instructions+=5;NFSU2_TR(0x5c3079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c307c:{NFSU2_TR(0x5c307c);
u8 U[4];
w4(U+0,u32(0x51c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3081:{NFSU2_TR(0x5c3081);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3085:{NFSU2_TR(0x5c3085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5c3087:{NFSU2_TR(0x5c3087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c308cull));
TAIL_STATIC(0x575620u,575);
}
B5c308c:L5c308c:{c.instructions+=5;NFSU2_TR(0x5c308c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c308f:{NFSU2_TR(0x5c308f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3093:{NFSU2_TR(0x5c3093);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c3095:{NFSU2_TR(0x5c3095);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c309d:{NFSU2_TR(0x5c309d);
if(r1(R+518)){{goto L5c30ab;}}
}
B5c309f:L5c309f:{c.instructions+=4;NFSU2_TR(0x5c309f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c30a1:{NFSU2_TR(0x5c30a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c30a2:{NFSU2_TR(0x5c30a2);
__builtin_memmove((R+4),(R+0),4);
}
B5c30a4:{NFSU2_TR(0x5c30a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c30a9ull));
TAIL_STATIC(0x61e150u,61e);
}
B5c30a9:L5c30a9:{c.instructions+=1;NFSU2_TR(0x5c30a9);
{goto L5c30ad;}
}
B5c30ab:L5c30ab:{c.instructions+=1;NFSU2_TR(0x5c30ab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5c30ad:L5c30ad:{c.instructions+=4;NFSU2_TR(0x5c30ad);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c30af:{NFSU2_TR(0x5c30af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c30b3:{NFSU2_TR(0x5c30b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c30b6:{NFSU2_TR(0x5c30b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c30bbull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c30bb:L5c30bb:{c.instructions+=5;NFSU2_TR(0x5c30bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0x870a20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c30c2:{NFSU2_TR(0x5c30c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x86e768ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c30c9:{NFSU2_TR(0x5c30c9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c30cb:{NFSU2_TR(0x5c30cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c30ce:{NFSU2_TR(0x5c30ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c30d3ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c30d3:L5c30d3:{c.instructions+=5;NFSU2_TR(0x5c30d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0x8718c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c30da:{NFSU2_TR(0x5c30da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x86e7bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c30e1:{NFSU2_TR(0x5c30e1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c30e3:{NFSU2_TR(0x5c30e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c30e6:{NFSU2_TR(0x5c30e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c30ebull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c30eb:L5c30eb:{c.instructions+=6;NFSU2_TR(0x5c30eb);
__builtin_memmove((R+24),(R+0),4);
}
B5c30ed:{NFSU2_TR(0x5c30ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c30ee:{NFSU2_TR(0x5c30ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x86e784ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c30f5:{NFSU2_TR(0x5c30f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x8760e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c30fc:{NFSU2_TR(0x5c30fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c30ff:{NFSU2_TR(0x5c30ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3104ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c3104:L5c3104:{c.instructions+=10;NFSU2_TR(0x5c3104);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c3107:{NFSU2_TR(0x5c3107);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c310b:{NFSU2_TR(0x5c310b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c310e:{NFSU2_TR(0x5c310e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c310f:{NFSU2_TR(0x5c310f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3112:{NFSU2_TR(0x5c3112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c3113:{NFSU2_TR(0x5c3113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c3114:{NFSU2_TR(0x5c3114);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c311b:{NFSU2_TR(0x5c311b);
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
B5c311e:{NFSU2_TR(0x5c311e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c3120:L5c3120:{c.instructions+=16;NFSU2_TR(0x5c3120);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c3125:{NFSU2_TR(0x5c3125);
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
B5c3128:{NFSU2_TR(0x5c3128);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3129:{NFSU2_TR(0x5c3129);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c312b:{NFSU2_TR(0x5c312b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c312f:{NFSU2_TR(0x5c312f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3130:{NFSU2_TR(0x5c3130);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3132:{NFSU2_TR(0x5c3132);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3134:{NFSU2_TR(0x5c3134);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3136:{NFSU2_TR(0x5c3136);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3138:{NFSU2_TR(0x5c3138);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c313d:{NFSU2_TR(0x5c313d);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3142:{NFSU2_TR(0x5c3142);
__builtin_memmove((R+12),(R+4),4);
}
B5c3144:{NFSU2_TR(0x5c3144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c3146:{NFSU2_TR(0x5c3146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3147:{NFSU2_TR(0x5c3147);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c314aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c314a:L5c314a:{c.instructions+=2;NFSU2_TR(0x5c314a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c314c:{NFSU2_TR(0x5c314c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c32b4;}}
}
B5c3152:L5c3152:{c.instructions+=17;NFSU2_TR(0x5c3152);
__builtin_memmove((R+0),gp(0x870980),4);
}
B5c3157:{NFSU2_TR(0x5c3157);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c3159:{NFSU2_TR(0x5c3159);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5c315a:{NFSU2_TR(0x5c315a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5c315c:{NFSU2_TR(0x5c315c);
{u32 ea_=u32(r4(MODV+224));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5c3162:{NFSU2_TR(0x5c3162);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3163:{NFSU2_TR(0x5c3163);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3164:{NFSU2_TR(0x5c3164);
__builtin_memmove((R+24),(R+0),4);
}
B5c3166:{NFSU2_TR(0x5c3166);
__builtin_memmove((R+0),gp(0x870984),4);
}
B5c316b:{NFSU2_TR(0x5c316b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5c316c:{NFSU2_TR(0x5c316c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5c316e:{NFSU2_TR(0x5c316e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c316f:{NFSU2_TR(0x5c316f);
{u32 ea_=u32(u32(8010784u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3175:{NFSU2_TR(0x5c3175);
__builtin_memmove((R+28),(R+0),4);
}
B5c3177:{NFSU2_TR(0x5c3177);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B5c3179:{NFSU2_TR(0x5c3179);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B5c317b:{NFSU2_TR(0x5c317b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3180ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c3180:L5c3180:{c.instructions+=5;NFSU2_TR(0x5c3180);
__builtin_memmove((R+20),(R+0),4);
}
B5c3182:{NFSU2_TR(0x5c3182);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5c3185:{NFSU2_TR(0x5c3185);
{u32 ea_=u32(u32(8849796u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5c318b:{NFSU2_TR(0x5c318b);
{u32 ea_=u32(u32(8010780u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3191:{NFSU2_TR(0x5c3191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3196ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5c3196:L5c3196:{c.instructions+=33;NFSU2_TR(0x5c3196);
__builtin_memmove((R+4),(R+0),4);
}
B5c3198:{NFSU2_TR(0x5c3198);
__builtin_memmove((R+0),(R+20),4);
}
B5c319a:{NFSU2_TR(0x5c319a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5c319b:{NFSU2_TR(0x5c319b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5c319d:{NFSU2_TR(0x5c319d);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5c319f:{NFSU2_TR(0x5c319f);
__builtin_memmove((R+8),(R+24),4);
}
B5c31a1:{NFSU2_TR(0x5c31a1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5c31a3:{NFSU2_TR(0x5c31a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5c31a7:{NFSU2_TR(0x5c31a7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0xaull))));
}
B5c31aa:{NFSU2_TR(0x5c31aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c31ae:{NFSU2_TR(0x5c31ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c31b2:{NFSU2_TR(0x5c31b2);
__builtin_memmove((R+0),(R+4),4);
}
B5c31b4:{NFSU2_TR(0x5c31b4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5c31b5:{NFSU2_TR(0x5c31b5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5c31b7:{NFSU2_TR(0x5c31b7);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5c31b9:{NFSU2_TR(0x5c31b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31bb:{NFSU2_TR(0x5c31bb);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5c31bf:{NFSU2_TR(0x5c31bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c31c3:{NFSU2_TR(0x5c31c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c31c7:{NFSU2_TR(0x5c31c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31c9:{NFSU2_TR(0x5c31c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31ca:{NFSU2_TR(0x5c31ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c31ce:{NFSU2_TR(0x5c31ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31cf:{NFSU2_TR(0x5c31cf);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5c31d5:{NFSU2_TR(0x5c31d5);
__builtin_memmove((R+4),(R+28),4);
}
B5c31d7:{NFSU2_TR(0x5c31d7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5c31d9:{NFSU2_TR(0x5c31d9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5c31de:{NFSU2_TR(0x5c31de);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c31e1:{NFSU2_TR(0x5c31e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31e2:{NFSU2_TR(0x5c31e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c31e6:{NFSU2_TR(0x5c31e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c31e8:{NFSU2_TR(0x5c31e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31e9:{NFSU2_TR(0x5c31e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c31efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c31ef:L5c31ef:{c.instructions+=2;NFSU2_TR(0x5c31ef);
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
B5c31f1:{NFSU2_TR(0x5c31f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c32b1;}}
}
B5c31f7:L5c31f7:{c.instructions+=8;NFSU2_TR(0x5c31f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c31fb:{NFSU2_TR(0x5c31fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c31fd:{NFSU2_TR(0x5c31fd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c31ff:{NFSU2_TR(0x5c31ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3201:{NFSU2_TR(0x5c3201);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3205:{NFSU2_TR(0x5c3205);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3206:{NFSU2_TR(0x5c3206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3207:{NFSU2_TR(0x5c3207);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c320aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c320a:L5c320a:{c.instructions+=2;NFSU2_TR(0x5c320a);
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
B5c320c:{NFSU2_TR(0x5c320c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c32b1;}}
}
B5c3212:L5c3212:{c.instructions+=6;NFSU2_TR(0x5c3212);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c3216:{NFSU2_TR(0x5c3216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c3218:{NFSU2_TR(0x5c3218);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c321c:{NFSU2_TR(0x5c321c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c321d:{NFSU2_TR(0x5c321d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c321e:{NFSU2_TR(0x5c321e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3221ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c3221:L5c3221:{c.instructions+=3;NFSU2_TR(0x5c3221);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3223:{NFSU2_TR(0x5c3223);
__builtin_memmove((R+4),(R+12),4);
}
B5c3225:{NFSU2_TR(0x5c3225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c322aull));
TAIL_STATIC(0x4889d0u,488);
}
B5c322a:L5c322a:{c.instructions+=10;NFSU2_TR(0x5c322a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c322c:{NFSU2_TR(0x5c322c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c322f:{NFSU2_TR(0x5c322f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c3231:{NFSU2_TR(0x5c3231);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3233:{NFSU2_TR(0x5c3233);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3235:{NFSU2_TR(0x5c3235);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3239:{NFSU2_TR(0x5c3239);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c323a:{NFSU2_TR(0x5c323a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c323c:{NFSU2_TR(0x5c323c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c323d:{NFSU2_TR(0x5c323d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3240ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c3240:L5c3240:{c.instructions+=3;NFSU2_TR(0x5c3240);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c3244:{NFSU2_TR(0x5c3244);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c3246:{NFSU2_TR(0x5c3246);
if(r1(R+518)){{goto L5c327c;}}
}
B5c3248:L5c3248:{c.instructions+=3;NFSU2_TR(0x5c3248);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c324a:{NFSU2_TR(0x5c324a);
__builtin_memmove((R+4),(R+12),4);
}
B5c324c:{NFSU2_TR(0x5c324c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3251ull));
TAIL_STATIC(0x4889d0u,488);
}
B5c3251:L5c3251:{c.instructions+=4;NFSU2_TR(0x5c3251);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c3254:{NFSU2_TR(0x5c3254);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c3258:{NFSU2_TR(0x5c3258);
__builtin_memmove((R+0),(R+4),4);
}
B5c325a:{NFSU2_TR(0x5c325a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5c325d:L5c325d:{c.instructions+=1;NFSU2_TR(0x5c325d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c325f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c325du);}goto L5c325d;}
}
B5c325f:L5c325f:{c.instructions+=2;NFSU2_TR(0x5c325f);
__builtin_memmove((R+4),(R+0),4);
}
B5c3261:{NFSU2_TR(0x5c3261);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5c3264:L5c3264:{c.instructions+=1;NFSU2_TR(0x5c3264);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5c3266;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c3264u);}goto L5c3264;}
}
B5c3266:L5c3266:{c.instructions+=3;NFSU2_TR(0x5c3266);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3268:{NFSU2_TR(0x5c3268);
__builtin_memmove((R+4),(R+12),4);
}
B5c326a:{NFSU2_TR(0x5c326a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c326full));
TAIL_STATIC(0x4889d0u,488);
}
B5c326f:L5c326f:{c.instructions+=6;NFSU2_TR(0x5c326f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c3271:{NFSU2_TR(0x5c3271);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c3274:{NFSU2_TR(0x5c3274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c3276:{NFSU2_TR(0x5c3276);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3278:{NFSU2_TR(0x5c3278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3279:{NFSU2_TR(0x5c3279);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c327cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c327c:L5c327c:{c.instructions+=4;NFSU2_TR(0x5c327c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5c327f:{NFSU2_TR(0x5c327f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3281:{NFSU2_TR(0x5c3281);
__builtin_memmove((R+4),(R+12),4);
}
B5c3283:{NFSU2_TR(0x5c3283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3288ull));
TAIL_STATIC(0x4889d0u,488);
}
B5c3288:L5c3288:{c.instructions+=4;NFSU2_TR(0x5c3288);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c328b:{NFSU2_TR(0x5c328b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c328f:{NFSU2_TR(0x5c328f);
__builtin_memmove((R+8),(R+4),4);
}
B5c3291:{NFSU2_TR(0x5c3291);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5c3294:L5c3294:{c.instructions+=1;NFSU2_TR(0x5c3294);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c3296;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c3294u);}goto L5c3294;}
}
B5c3296:L5c3296:{c.instructions+=2;NFSU2_TR(0x5c3296);
__builtin_memmove((R+4),(R+8),4);
}
B5c3298:{NFSU2_TR(0x5c3298);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c329b:L5c329b:{c.instructions+=1;NFSU2_TR(0x5c329b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5c329d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c329bu);}goto L5c329b;}
}
B5c329d:L5c329d:{c.instructions+=4;NFSU2_TR(0x5c329d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c32a1:{NFSU2_TR(0x5c32a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5c32a3:{NFSU2_TR(0x5c32a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c32a4:{NFSU2_TR(0x5c32a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c32a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c32a7:L5c32a7:{c.instructions+=4;NFSU2_TR(0x5c32a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c32ab:{NFSU2_TR(0x5c32ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5c32ad:{NFSU2_TR(0x5c32ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c32ae:{NFSU2_TR(0x5c32ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c32b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c32b1:L5c32b1:{c.instructions+=3;NFSU2_TR(0x5c32b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c32b2:{NFSU2_TR(0x5c32b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c32b3:{NFSU2_TR(0x5c32b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5c32b4:L5c32b4:{c.instructions+=3;NFSU2_TR(0x5c32b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c32b5:{NFSU2_TR(0x5c32b5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c32b8:{NFSU2_TR(0x5c32b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c32c0:L5c32c0:{c.instructions+=4;NFSU2_TR(0x5c32c0);
__builtin_memmove((R+0),gp(0x870838),4);
}
B5c32c5:{NFSU2_TR(0x5c32c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B5c32cb:{NFSU2_TR(0x5c32cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c32ce:{NFSU2_TR(0x5c32ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c3355;}}
}
B5c32d4:L5c32d4:{c.instructions+=2;NFSU2_TR(0x5c32d4);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fee5c),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c32db:{NFSU2_TR(0x5c32db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c32e7;}}
}
B5c32dd:L5c32dd:{c.instructions+=1;NFSU2_TR(0x5c32dd);
s4(0x7fee5c,u32(0x1ull));
}
B5c32e7:L5c32e7:{c.instructions+=3;NFSU2_TR(0x5c32e7);
__builtin_memmove((R+0),gp(0x7fee60),4);
}
B5c32ec:{NFSU2_TR(0x5c32ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c32ef:{NFSU2_TR(0x5c32ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5c32fb;}}
}
B5c32f1:L5c32f1:{c.instructions+=2;NFSU2_TR(0x5c32f1);
w4(R+0,u32(0x1ull));
}
B5c32f6:{NFSU2_TR(0x5c32f6);
__builtin_memmove(gp(0x7fee60),(R+0),4);
}
B5c32fb:L5c32fb:{c.instructions+=5;NFSU2_TR(0x5c32fb);
__builtin_memmove((R+4),gp(0x870830),4);
}
B5c3301:{NFSU2_TR(0x5c3301);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5c3302:{NFSU2_TR(0x5c3302);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c3304:{NFSU2_TR(0x5c3304);
__builtin_memmove(gp(0x870830),(R+4),4);
}
B5c330a:{NFSU2_TR(0x5c330a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5c3339;}}
}
B5c330c:L5c330c:{c.instructions+=9;NFSU2_TR(0x5c330c);
__builtin_memmove(gp(0x870830),(R+0),4);
}
B5c3311:{NFSU2_TR(0x5c3311);
__builtin_memmove((R+0),gp(0x7fee64),4);
}
B5c3316:{NFSU2_TR(0x5c3316);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5c3317:{NFSU2_TR(0x5c3317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3318:{NFSU2_TR(0x5c3318);
__builtin_memmove(gp(0x7fee64),(R+0),4);
}
B5c331d:{NFSU2_TR(0x5c331d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c3321:{NFSU2_TR(0x5c3321);
u8 U[4];
w4(U+0,u32(0x7a3c38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3326:{NFSU2_TR(0x5c3326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3327:{NFSU2_TR(0x5c3327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c332cull));
TAIL_STATIC(0x4400d0u,440);
}
B5c332c:L5c332c:{c.instructions+=3;NFSU2_TR(0x5c332c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c3330:{NFSU2_TR(0x5c3330);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3331:{NFSU2_TR(0x5c3331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3336ull));
TAIL_STATIC(0x5c2ed0u,5c2);
}
B5c3336:L5c3336:{c.instructions+=1;NFSU2_TR(0x5c3336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c3339:L5c3339:{c.instructions+=5;NFSU2_TR(0x5c3339);
__builtin_memmove((R+8),gp(0x7fee5c),4);
}
B5c333f:{NFSU2_TR(0x5c333f);
__builtin_memmove((R+0),gp(0x7fee64),4);
}
B5c3344:{NFSU2_TR(0x5c3344);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5c3345:{NFSU2_TR(0x5c3345);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c3347:{NFSU2_TR(0x5c3347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c3369;}}
}
B5c3349:L5c3349:{c.instructions+=2;NFSU2_TR(0x5c3349);
s4(0x870840,u32(0x0ull));
}
B5c3353:{NFSU2_TR(0x5c3353);
{goto L5c3369;}
}
B5c3355:L5c3355:{c.instructions+=2;NFSU2_TR(0x5c3355);
s4(0x7fee64,u32(0xffffffffull));
}
B5c335f:{NFSU2_TR(0x5c335f);
s4(0x870830,u32(0x0ull));
}
B5c3369:L5c3369:{c.instructions+=2;NFSU2_TR(0x5c3369);
u8 U[8];
__builtin_memmove((U+0),gp(0x870838),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5c3370:{NFSU2_TR(0x5c3370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5c33bc;}}
}
B5c3372:L5c3372:{c.instructions+=6;NFSU2_TR(0x5c3372);
__builtin_memmove((R+0),gp(0x870834),4);
}
B5c3377:{NFSU2_TR(0x5c3377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3378:{NFSU2_TR(0x5c3378);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c337c:{NFSU2_TR(0x5c337c);
u8 U[4];
w4(U+0,u32(0x7a3c24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3381:{NFSU2_TR(0x5c3381);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3382:{NFSU2_TR(0x5c3382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3387ull));
TAIL_STATIC(0x4400d0u,440);
}
B5c3387:L5c3387:{c.instructions+=6;NFSU2_TR(0x5c3387);
__builtin_memmove((R+4),gp(0x870834),4);
}
B5c338d:{NFSU2_TR(0x5c338d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3391:{NFSU2_TR(0x5c3391);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5c3392:{NFSU2_TR(0x5c3392);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3393:{NFSU2_TR(0x5c3393);
__builtin_memmove(gp(0x870834),(R+4),4);
}
B5c3399:{NFSU2_TR(0x5c3399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c339eull));
TAIL_STATIC(0x57cac0u,57c);
}
B5c339e:L5c339e:{c.instructions+=3;NFSU2_TR(0x5c339e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5c33a1:{NFSU2_TR(0x5c33a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c33a3:{NFSU2_TR(0x5c33a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c3372u);}goto L5c3372;}}
}
B5c33a5:L5c33a5:{c.instructions+=3;NFSU2_TR(0x5c33a5);
__builtin_memmove((R+0),(R+16),4);
}
B5c33a9:{NFSU2_TR(0x5c33a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c33aa:{NFSU2_TR(0x5c33aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c33afull));
TAIL_STATIC(0x5c2ed0u,5c2);
}
B5c33af:L5c33af:{c.instructions+=2;NFSU2_TR(0x5c33af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c33b2:{NFSU2_TR(0x5c33b2);
s4(0x87083c,u32(0x0ull));
}
B5c33bc:L5c33bc:{c.instructions+=2;NFSU2_TR(0x5c33bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c33c2:{NFSU2_TR(0x5c33c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c33d0:L5c33d0:{c.instructions+=13;NFSU2_TR(0x5c33d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5c33d3:{NFSU2_TR(0x5c33d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c33d4:{NFSU2_TR(0x5c33d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c33d5:{NFSU2_TR(0x5c33d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c33d6:{NFSU2_TR(0x5c33d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c33de:{NFSU2_TR(0x5c33de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c33e6:{NFSU2_TR(0x5c33e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c33ee:{NFSU2_TR(0x5c33ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c33f6:{NFSU2_TR(0x5c33f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c33fe:{NFSU2_TR(0x5c33fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3406:{NFSU2_TR(0x5c3406);
w4(R+12,u32(0x86e7d8ull));
}
B5c340b:{NFSU2_TR(0x5c340b);
w4(R+24,u32(0x871be0ull));
}
B5c3410:{NFSU2_TR(0x5c3410);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5c3412:L5c3412:{c.instructions+=3;NFSU2_TR(0x5c3412);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5c3416:{NFSU2_TR(0x5c3416);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3417:{NFSU2_TR(0x5c3417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c341cull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c341c:L5c341c:{c.instructions+=10;NFSU2_TR(0x5c341c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c341f:{NFSU2_TR(0x5c341f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c3422:{NFSU2_TR(0x5c3422);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5c3426:{NFSU2_TR(0x5c3426);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x871bc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c342c:{NFSU2_TR(0x5c342c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x290ull))));
}
B5c3432:{NFSU2_TR(0x5c3432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c3435:{NFSU2_TR(0x5c3435);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1cull))));
}
B5c3438:{NFSU2_TR(0x5c3438);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5c343b:{NFSU2_TR(0x5c343b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x872b40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x872b40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5c3441:{NFSU2_TR(0x5c3441);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c3412u);}goto L5c3412;}}
}
B5c3443:L5c3443:{c.instructions+=5;NFSU2_TR(0x5c3443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5c3444:{NFSU2_TR(0x5c3444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5c3445:{NFSU2_TR(0x5c3445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5c3446:{NFSU2_TR(0x5c3446);
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
B5c3449:{NFSU2_TR(0x5c3449);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5c3450:L5c3450:{c.instructions+=22;NFSU2_TR(0x5c3450);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3451:{NFSU2_TR(0x5c3451);
__builtin_memmove((R+20),(R+16),4);
}
B5c3453:{NFSU2_TR(0x5c3453);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5c3456:{NFSU2_TR(0x5c3456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x344ull))));
}
B5c345c:{NFSU2_TR(0x5c345c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c345d:{NFSU2_TR(0x5c345d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c345e:{NFSU2_TR(0x5c345e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c345f:{NFSU2_TR(0x5c345f);
u8 U[4];
w4(U+0,u32(0x800b70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3464:{NFSU2_TR(0x5c3464);
u8 U[4];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c346b:{NFSU2_TR(0x5c346b);
__builtin_memmove((R+24),(R+4),4);
}
B5c346d:{NFSU2_TR(0x5c346d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c346e:{NFSU2_TR(0x5c346e);
u8 U[4];
w4(U+0,u32(u32(u32(0x278ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c3475:{NFSU2_TR(0x5c3475);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3476:{NFSU2_TR(0x5c3476);
u8 U[4];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c347d:{NFSU2_TR(0x5c347d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c347e:{NFSU2_TR(0x5c347e);
u8 U[8];
w4(U+0,u32(u32(u32(0x280ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3489:{NFSU2_TR(0x5c3489);
u8 U[8];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3494:{NFSU2_TR(0x5c3494);
u8 U[8];
w4(U+0,u32(u32(u32(0x288ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c349f:{NFSU2_TR(0x5c349f);
u8 U[8];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c34aa:{NFSU2_TR(0x5c34aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c34b5:{NFSU2_TR(0x5c34b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c34c0:{NFSU2_TR(0x5c34c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c34c5ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B5c34c5:L5c34c5:{c.instructions+=15;NFSU2_TR(0x5c34c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5c34c8:{NFSU2_TR(0x5c34c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c34cb:{NFSU2_TR(0x5c34cb);
u8 U[4];
w4(U+0,u32(0x800b70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c34d0:{NFSU2_TR(0x5c34d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c34d1:{NFSU2_TR(0x5c34d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c34d2:{NFSU2_TR(0x5c34d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c34d6:{NFSU2_TR(0x5c34d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c34d7:{NFSU2_TR(0x5c34d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2bcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c34e2:{NFSU2_TR(0x5c34e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2ccull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c34ed:{NFSU2_TR(0x5c34ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c34f8:{NFSU2_TR(0x5c34f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3503:{NFSU2_TR(0x5c3503);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c350e:{NFSU2_TR(0x5c350e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3519:{NFSU2_TR(0x5c3519);
u8 U[8];
w4(U+0,u32(u32(u32(0x2ecull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3524:{NFSU2_TR(0x5c3524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3529ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B5c3529:L5c3529:{c.instructions+=11;NFSU2_TR(0x5c3529);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c352d:{NFSU2_TR(0x5c352d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c352e:{NFSU2_TR(0x5c352e);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3533:{NFSU2_TR(0x5c3533);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c353b:{NFSU2_TR(0x5c353b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3543:{NFSU2_TR(0x5c3543);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c354b:{NFSU2_TR(0x5c354b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3553:{NFSU2_TR(0x5c3553);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c355b:{NFSU2_TR(0x5c355b);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3563:{NFSU2_TR(0x5c3563);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c356b:{NFSU2_TR(0x5c356b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3570ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c3570:L5c3570:{c.instructions+=6;NFSU2_TR(0x5c3570);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c3573:{NFSU2_TR(0x5c3573);
u8 U[4];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c357a:{NFSU2_TR(0x5c357a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c357b:{NFSU2_TR(0x5c357b);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3582:{NFSU2_TR(0x5c3582);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3583:{NFSU2_TR(0x5c3583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3588ull));
TAIL_STATIC(0x63d12cu,63d);
}
B5c3588:L5c3588:{c.instructions+=197;NFSU2_TR(0x5c3588);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c358f:{NFSU2_TR(0x5c358f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3593:{NFSU2_TR(0x5c3593);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c359a:{NFSU2_TR(0x5c359a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c359e:{NFSU2_TR(0x5c359e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c35a0:{NFSU2_TR(0x5c35a0);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35a7:{NFSU2_TR(0x5c35a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35ab:{NFSU2_TR(0x5c35ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c35ad:{NFSU2_TR(0x5c35ad);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35b4:{NFSU2_TR(0x5c35b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35b8:{NFSU2_TR(0x5c35b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c35ba:{NFSU2_TR(0x5c35ba);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c35be:{NFSU2_TR(0x5c35be);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35c5:{NFSU2_TR(0x5c35c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35c9:{NFSU2_TR(0x5c35c9);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35d0:{NFSU2_TR(0x5c35d0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35d4:{NFSU2_TR(0x5c35d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c35d6:{NFSU2_TR(0x5c35d6);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35dd:{NFSU2_TR(0x5c35dd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35e1:{NFSU2_TR(0x5c35e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c35e3:{NFSU2_TR(0x5c35e3);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35ea:{NFSU2_TR(0x5c35ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35ee:{NFSU2_TR(0x5c35ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c35f0:{NFSU2_TR(0x5c35f0);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c35f4:{NFSU2_TR(0x5c35f4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c35fb:{NFSU2_TR(0x5c35fb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c35ff:{NFSU2_TR(0x5c35ff);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3606:{NFSU2_TR(0x5c3606);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c360a:{NFSU2_TR(0x5c360a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c360c:{NFSU2_TR(0x5c360c);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3613:{NFSU2_TR(0x5c3613);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3617:{NFSU2_TR(0x5c3617);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3619:{NFSU2_TR(0x5c3619);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3620:{NFSU2_TR(0x5c3620);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3624:{NFSU2_TR(0x5c3624);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3626:{NFSU2_TR(0x5c3626);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c362a:{NFSU2_TR(0x5c362a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c362e:{NFSU2_TR(0x5c362e);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3635:{NFSU2_TR(0x5c3635);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3639:{NFSU2_TR(0x5c3639);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3640:{NFSU2_TR(0x5c3640);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3642:{NFSU2_TR(0x5c3642);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3646:{NFSU2_TR(0x5c3646);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c364d:{NFSU2_TR(0x5c364d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c364f:{NFSU2_TR(0x5c364f);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3656:{NFSU2_TR(0x5c3656);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c365a:{NFSU2_TR(0x5c365a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c365c:{NFSU2_TR(0x5c365c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3660:{NFSU2_TR(0x5c3660);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3664:{NFSU2_TR(0x5c3664);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c366b:{NFSU2_TR(0x5c366b);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3672:{NFSU2_TR(0x5c3672);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3676:{NFSU2_TR(0x5c3676);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3678:{NFSU2_TR(0x5c3678);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c367c:{NFSU2_TR(0x5c367c);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3683:{NFSU2_TR(0x5c3683);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3685:{NFSU2_TR(0x5c3685);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3689:{NFSU2_TR(0x5c3689);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3690:{NFSU2_TR(0x5c3690);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3692:{NFSU2_TR(0x5c3692);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3696:{NFSU2_TR(0x5c3696);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c369d:{NFSU2_TR(0x5c369d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36a1:{NFSU2_TR(0x5c36a1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36a5:{NFSU2_TR(0x5c36a5);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36ac:{NFSU2_TR(0x5c36ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c36ae:{NFSU2_TR(0x5c36ae);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36b2:{NFSU2_TR(0x5c36b2);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36b9:{NFSU2_TR(0x5c36b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c36bb:{NFSU2_TR(0x5c36bb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36bf:{NFSU2_TR(0x5c36bf);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36c6:{NFSU2_TR(0x5c36c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c36c8:{NFSU2_TR(0x5c36c8);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c36cc:{NFSU2_TR(0x5c36cc);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36d3:{NFSU2_TR(0x5c36d3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36d7:{NFSU2_TR(0x5c36d7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36db:{NFSU2_TR(0x5c36db);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36e2:{NFSU2_TR(0x5c36e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c36e4:{NFSU2_TR(0x5c36e4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36e8:{NFSU2_TR(0x5c36e8);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36ef:{NFSU2_TR(0x5c36ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c36f1:{NFSU2_TR(0x5c36f1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c36f5:{NFSU2_TR(0x5c36f5);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c36fc:{NFSU2_TR(0x5c36fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c36fe:{NFSU2_TR(0x5c36fe);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3702:{NFSU2_TR(0x5c3702);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3706:{NFSU2_TR(0x5c3706);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c370d:{NFSU2_TR(0x5c370d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3711:{NFSU2_TR(0x5c3711);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3718:{NFSU2_TR(0x5c3718);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c371a:{NFSU2_TR(0x5c371a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c371e:{NFSU2_TR(0x5c371e);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3725:{NFSU2_TR(0x5c3725);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3727:{NFSU2_TR(0x5c3727);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c372e:{NFSU2_TR(0x5c372e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3732:{NFSU2_TR(0x5c3732);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3734:{NFSU2_TR(0x5c3734);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3738:{NFSU2_TR(0x5c3738);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c373c:{NFSU2_TR(0x5c373c);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3743:{NFSU2_TR(0x5c3743);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c374a:{NFSU2_TR(0x5c374a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c374e:{NFSU2_TR(0x5c374e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3750:{NFSU2_TR(0x5c3750);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3754:{NFSU2_TR(0x5c3754);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c375b:{NFSU2_TR(0x5c375b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c375d:{NFSU2_TR(0x5c375d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3761:{NFSU2_TR(0x5c3761);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3768:{NFSU2_TR(0x5c3768);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c376a:{NFSU2_TR(0x5c376a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c376e:{NFSU2_TR(0x5c376e);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3775:{NFSU2_TR(0x5c3775);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3779:{NFSU2_TR(0x5c3779);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c377d:{NFSU2_TR(0x5c377d);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3784:{NFSU2_TR(0x5c3784);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3786:{NFSU2_TR(0x5c3786);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c378a:{NFSU2_TR(0x5c378a);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3791:{NFSU2_TR(0x5c3791);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3793:{NFSU2_TR(0x5c3793);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3797:{NFSU2_TR(0x5c3797);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c379e:{NFSU2_TR(0x5c379e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c37a0:{NFSU2_TR(0x5c37a0);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c37a4:{NFSU2_TR(0x5c37a4);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37ab:{NFSU2_TR(0x5c37ab);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37af:{NFSU2_TR(0x5c37af);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37b3:{NFSU2_TR(0x5c37b3);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37ba:{NFSU2_TR(0x5c37ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c37bc:{NFSU2_TR(0x5c37bc);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37c0:{NFSU2_TR(0x5c37c0);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37c7:{NFSU2_TR(0x5c37c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c37c9:{NFSU2_TR(0x5c37c9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37cd:{NFSU2_TR(0x5c37cd);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37d4:{NFSU2_TR(0x5c37d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c37d6:{NFSU2_TR(0x5c37d6);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c37da:{NFSU2_TR(0x5c37da);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37de:{NFSU2_TR(0x5c37de);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37e5:{NFSU2_TR(0x5c37e5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37e9:{NFSU2_TR(0x5c37e9);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37f0:{NFSU2_TR(0x5c37f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c37f2:{NFSU2_TR(0x5c37f2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c37f6:{NFSU2_TR(0x5c37f6);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c37fd:{NFSU2_TR(0x5c37fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c37ff:{NFSU2_TR(0x5c37ff);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3806:{NFSU2_TR(0x5c3806);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c380a:{NFSU2_TR(0x5c380a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c380c:{NFSU2_TR(0x5c380c);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3810:{NFSU2_TR(0x5c3810);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3817:{NFSU2_TR(0x5c3817);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c381b:{NFSU2_TR(0x5c381b);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c381f:{NFSU2_TR(0x5c381f);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3826:{NFSU2_TR(0x5c3826);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3827:{NFSU2_TR(0x5c3827);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c382b:{NFSU2_TR(0x5c382b);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c3832:{NFSU2_TR(0x5c3832);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3833:{NFSU2_TR(0x5c3833);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3835:{NFSU2_TR(0x5c3835);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c383c:{NFSU2_TR(0x5c383c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3840:{NFSU2_TR(0x5c3840);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3842:{NFSU2_TR(0x5c3842);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3849:{NFSU2_TR(0x5c3849);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c384d:{NFSU2_TR(0x5c384d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c384f:{NFSU2_TR(0x5c384f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3856:{NFSU2_TR(0x5c3856);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c385d:{NFSU2_TR(0x5c385d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3861:{NFSU2_TR(0x5c3861);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3868:{NFSU2_TR(0x5c3868);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c386c:{NFSU2_TR(0x5c386c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c386e:{NFSU2_TR(0x5c386e);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3875:{NFSU2_TR(0x5c3875);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3879:{NFSU2_TR(0x5c3879);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c387b:{NFSU2_TR(0x5c387b);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3882:{NFSU2_TR(0x5c3882);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3886:{NFSU2_TR(0x5c3886);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3888:{NFSU2_TR(0x5c3888);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c388f:{NFSU2_TR(0x5c388f);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3896:{NFSU2_TR(0x5c3896);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c389a:{NFSU2_TR(0x5c389a);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38a1:{NFSU2_TR(0x5c38a1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38a5:{NFSU2_TR(0x5c38a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c38a7:{NFSU2_TR(0x5c38a7);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38ae:{NFSU2_TR(0x5c38ae);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38b2:{NFSU2_TR(0x5c38b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c38b4:{NFSU2_TR(0x5c38b4);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38bb:{NFSU2_TR(0x5c38bb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38bf:{NFSU2_TR(0x5c38bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c38c1:{NFSU2_TR(0x5c38c1);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c38c8:{NFSU2_TR(0x5c38c8);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38cf:{NFSU2_TR(0x5c38cf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38d3:{NFSU2_TR(0x5c38d3);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38da:{NFSU2_TR(0x5c38da);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38de:{NFSU2_TR(0x5c38de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c38e0:{NFSU2_TR(0x5c38e0);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38e7:{NFSU2_TR(0x5c38e7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38eb:{NFSU2_TR(0x5c38eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c38ed:{NFSU2_TR(0x5c38ed);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c38f4:{NFSU2_TR(0x5c38f4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c38f8:{NFSU2_TR(0x5c38f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c38fa:{NFSU2_TR(0x5c38fa);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3901:{NFSU2_TR(0x5c3901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3906ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c3906:L5c3906:{c.instructions+=13;NFSU2_TR(0x5c3906);
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
B5c3909:{NFSU2_TR(0x5c3909);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3910:{NFSU2_TR(0x5c3910);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3911:{NFSU2_TR(0x5c3911);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c3918:{NFSU2_TR(0x5c3918);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3919:{NFSU2_TR(0x5c3919);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3924:{NFSU2_TR(0x5c3924);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c392f:{NFSU2_TR(0x5c392f);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c393a:{NFSU2_TR(0x5c393a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3945:{NFSU2_TR(0x5c3945);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3950:{NFSU2_TR(0x5c3950);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c395b:{NFSU2_TR(0x5c395b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3966:{NFSU2_TR(0x5c3966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c396bull));
TAIL_STATIC(0x63d12cu,63d);
}
B5c396b:L5c396b:{c.instructions+=18;NFSU2_TR(0x5c396b);
__builtin_memmove((R+4),gp(0x870cb8),4);
}
B5c3971:{NFSU2_TR(0x5c3971);
__builtin_memmove((R+0),gp(0x870818),4);
}
B5c3976:{NFSU2_TR(0x5c3976);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5c3978:{NFSU2_TR(0x5c3978);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fee90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(r4(U+8)));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{u64 d_=u64(r8(U+12));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5c3978);w8(U+52,u64(u64(r8(U+44))/d_));}
w4(R+0,u32(r8(U+52)));
{u64 d_=u64(r8(U+12));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x5c3978);w8(U+60,u64(u64(r8(U+44))%d_));}
w4(R+8,u32(r8(U+60)));
}
B5c397f:{NFSU2_TR(0x5c397f);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5c3983:{NFSU2_TR(0x5c3983);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c398e:{NFSU2_TR(0x5c398e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c3991:{NFSU2_TR(0x5c3991);
__builtin_memmove((R+4),gp(0x7fee8c),4);
}
B5c3997:{NFSU2_TR(0x5c3997);
__builtin_memmove((R+8),gp(0x7fee88),4);
}
B5c399d:{NFSU2_TR(0x5c399d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c39a0:{NFSU2_TR(0x5c39a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7feea0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5c39a7:{NFSU2_TR(0x5c39a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c39ae:{NFSU2_TR(0x5c39ae);
__builtin_memmove((R+4),(R+0),4);
}
B5c39b0:{NFSU2_TR(0x5c39b0);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5c39b2:{NFSU2_TR(0x5c39b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c39b9:{NFSU2_TR(0x5c39b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c39c0:{NFSU2_TR(0x5c39c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c39c7:{NFSU2_TR(0x5c39c7);
{goto L5c39d0;}
}
B5c39c9:L5c39c9:{c.instructions+=1;NFSU2_TR(0x5c39c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c39d0:L5c39d0:{c.instructions+=3;NFSU2_TR(0x5c39d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5c39d3:{NFSU2_TR(0x5c39d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c39d5:{NFSU2_TR(0x5c39d5);
if(r1(R+518)){TAIL_STATIC(0x5c4fd6u,5c4);}
}
B5c39db:L5c39db:{c.instructions+=5;NFSU2_TR(0x5c39db);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5c39de:{NFSU2_TR(0x5c39de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5c39e1:{NFSU2_TR(0x5c39e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c39e3:{NFSU2_TR(0x5c39e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5c39e6:{NFSU2_TR(0x5c39e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c39ebull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5c39eb:L5c39eb:{c.instructions+=5;NFSU2_TR(0x5c39eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5c39ee:{NFSU2_TR(0x5c39ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5c39f1:{NFSU2_TR(0x5c39f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5c39f3:{NFSU2_TR(0x5c39f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5c39fa:{NFSU2_TR(0x5c39fa);
if(r1(R+518)){TAIL_STATIC(0x5c4fd6u,5c4);}
}
B5c3a00:L5c3a00:{c.instructions+=4;NFSU2_TR(0x5c3a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5c3a03:{NFSU2_TR(0x5c3a03);
u8 U[4];
w4(U+0,u32(u32(u32(0x2d0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3a0a:{NFSU2_TR(0x5c3a0a);
w4(R+4,u32(0x10ull));
}
B5c3a0f:{NFSU2_TR(0x5c3a0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5c3a13:L5c3a13:{c.instructions+=1;NFSU2_TR(0x5c3a13);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5c3a15;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5c3a13u);}goto L5c3a13;}
}
B5c3a15:L5c3a15:{c.instructions+=6;NFSU2_TR(0x5c3a15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3a16:{NFSU2_TR(0x5c3a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a21:{NFSU2_TR(0x5c3a21);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a2c:{NFSU2_TR(0x5c3a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a37:{NFSU2_TR(0x5c3a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a42:{NFSU2_TR(0x5c3a42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3a47ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c3a47:L5c3a47:{c.instructions+=4;NFSU2_TR(0x5c3a47);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c3a4b:{NFSU2_TR(0x5c3a4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3a4c:{NFSU2_TR(0x5c3a4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d8ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a57:{NFSU2_TR(0x5c3a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3a5cull));
TAIL_STATIC(0x43c780u,43c);
}
B5c3a5c:L5c3a5c:{c.instructions+=4;NFSU2_TR(0x5c3a5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c3a63:{NFSU2_TR(0x5c3a63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3a64:{NFSU2_TR(0x5c3a64);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a6c:{NFSU2_TR(0x5c3a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3a71ull));
TAIL_STATIC(0x43c780u,43c);
}
B5c3a71:L5c3a71:{c.instructions+=7;NFSU2_TR(0x5c3a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5c3a74:{NFSU2_TR(0x5c3a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5c3a7f:{NFSU2_TR(0x5c3a7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5c3a81:{NFSU2_TR(0x5c3a81);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5c3a84:{NFSU2_TR(0x5c3a84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5c3a87:{NFSU2_TR(0x5c3a87);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5c3a8a:{NFSU2_TR(0x5c3a8a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5c4efau,5c4);}
}
B5c3a90:L5c3a90:{c.instructions+=1;NFSU2_TR(0x5c3a90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5c5008ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5c3a97:L5c3a97:{c.instructions+=6;NFSU2_TR(0x5c3a97);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3a9c:{NFSU2_TR(0x5c3a9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c3aa0:{NFSU2_TR(0x5c3aa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3aa1:{NFSU2_TR(0x5c3aa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c3aa5:{NFSU2_TR(0x5c3aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3aa6:{NFSU2_TR(0x5c3aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3aabull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c3aab:L5c3aab:{c.instructions+=197;NFSU2_TR(0x5c3aab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3aaf:{NFSU2_TR(0x5c3aaf);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ab3:{NFSU2_TR(0x5c3ab3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ab7:{NFSU2_TR(0x5c3ab7);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3abb:{NFSU2_TR(0x5c3abb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3abd:{NFSU2_TR(0x5c3abd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ac1:{NFSU2_TR(0x5c3ac1);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ac5:{NFSU2_TR(0x5c3ac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ac7:{NFSU2_TR(0x5c3ac7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3acb:{NFSU2_TR(0x5c3acb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3acf:{NFSU2_TR(0x5c3acf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ad1:{NFSU2_TR(0x5c3ad1);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3ad8:{NFSU2_TR(0x5c3ad8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3adc:{NFSU2_TR(0x5c3adc);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ae0:{NFSU2_TR(0x5c3ae0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ae4:{NFSU2_TR(0x5c3ae4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ae8:{NFSU2_TR(0x5c3ae8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3aea:{NFSU2_TR(0x5c3aea);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3aee:{NFSU2_TR(0x5c3aee);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3af2:{NFSU2_TR(0x5c3af2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3af4:{NFSU2_TR(0x5c3af4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3af8:{NFSU2_TR(0x5c3af8);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3afc:{NFSU2_TR(0x5c3afc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3afe:{NFSU2_TR(0x5c3afe);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3b05:{NFSU2_TR(0x5c3b05);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b09:{NFSU2_TR(0x5c3b09);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b0d:{NFSU2_TR(0x5c3b0d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b11:{NFSU2_TR(0x5c3b11);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b15:{NFSU2_TR(0x5c3b15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b17:{NFSU2_TR(0x5c3b17);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b1b:{NFSU2_TR(0x5c3b1b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b1f:{NFSU2_TR(0x5c3b1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b21:{NFSU2_TR(0x5c3b21);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b25:{NFSU2_TR(0x5c3b25);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b29:{NFSU2_TR(0x5c3b29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b2b:{NFSU2_TR(0x5c3b2b);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3b32:{NFSU2_TR(0x5c3b32);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b36:{NFSU2_TR(0x5c3b36);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b3a:{NFSU2_TR(0x5c3b3a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b3e:{NFSU2_TR(0x5c3b3e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b42:{NFSU2_TR(0x5c3b42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b44:{NFSU2_TR(0x5c3b44);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b48:{NFSU2_TR(0x5c3b48);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b4c:{NFSU2_TR(0x5c3b4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b4e:{NFSU2_TR(0x5c3b4e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b52:{NFSU2_TR(0x5c3b52);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b56:{NFSU2_TR(0x5c3b56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b58:{NFSU2_TR(0x5c3b58);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3b5f:{NFSU2_TR(0x5c3b5f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b63:{NFSU2_TR(0x5c3b63);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b67:{NFSU2_TR(0x5c3b67);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b6b:{NFSU2_TR(0x5c3b6b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b6f:{NFSU2_TR(0x5c3b6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b71:{NFSU2_TR(0x5c3b71);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b75:{NFSU2_TR(0x5c3b75);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b79:{NFSU2_TR(0x5c3b79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b7b:{NFSU2_TR(0x5c3b7b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b7f:{NFSU2_TR(0x5c3b7f);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b83:{NFSU2_TR(0x5c3b83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b85:{NFSU2_TR(0x5c3b85);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3b8c:{NFSU2_TR(0x5c3b8c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b90:{NFSU2_TR(0x5c3b90);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b94:{NFSU2_TR(0x5c3b94);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3b98:{NFSU2_TR(0x5c3b98);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3b9c:{NFSU2_TR(0x5c3b9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3b9e:{NFSU2_TR(0x5c3b9e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ba2:{NFSU2_TR(0x5c3ba2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ba6:{NFSU2_TR(0x5c3ba6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ba8:{NFSU2_TR(0x5c3ba8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bac:{NFSU2_TR(0x5c3bac);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bb0:{NFSU2_TR(0x5c3bb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3bb2:{NFSU2_TR(0x5c3bb2);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3bb9:{NFSU2_TR(0x5c3bb9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bbd:{NFSU2_TR(0x5c3bbd);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bc1:{NFSU2_TR(0x5c3bc1);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bc5:{NFSU2_TR(0x5c3bc5);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bc9:{NFSU2_TR(0x5c3bc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3bcb:{NFSU2_TR(0x5c3bcb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bcf:{NFSU2_TR(0x5c3bcf);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bd3:{NFSU2_TR(0x5c3bd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3bd5:{NFSU2_TR(0x5c3bd5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bd9:{NFSU2_TR(0x5c3bd9);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bdd:{NFSU2_TR(0x5c3bdd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3bdf:{NFSU2_TR(0x5c3bdf);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3be6:{NFSU2_TR(0x5c3be6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bea:{NFSU2_TR(0x5c3bea);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bee:{NFSU2_TR(0x5c3bee);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bf2:{NFSU2_TR(0x5c3bf2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3bf6:{NFSU2_TR(0x5c3bf6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3bf8:{NFSU2_TR(0x5c3bf8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3bfc:{NFSU2_TR(0x5c3bfc);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c00:{NFSU2_TR(0x5c3c00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c02:{NFSU2_TR(0x5c3c02);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c06:{NFSU2_TR(0x5c3c06);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c0a:{NFSU2_TR(0x5c3c0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c0c:{NFSU2_TR(0x5c3c0c);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3c13:{NFSU2_TR(0x5c3c13);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c17:{NFSU2_TR(0x5c3c17);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c1b:{NFSU2_TR(0x5c3c1b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c22:{NFSU2_TR(0x5c3c22);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c26:{NFSU2_TR(0x5c3c26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c28:{NFSU2_TR(0x5c3c28);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c2c:{NFSU2_TR(0x5c3c2c);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c33:{NFSU2_TR(0x5c3c33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c35:{NFSU2_TR(0x5c3c35);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c39:{NFSU2_TR(0x5c3c39);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c40:{NFSU2_TR(0x5c3c40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c42:{NFSU2_TR(0x5c3c42);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3c49:{NFSU2_TR(0x5c3c49);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c4d:{NFSU2_TR(0x5c3c4d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c51:{NFSU2_TR(0x5c3c51);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c58:{NFSU2_TR(0x5c3c58);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c5c:{NFSU2_TR(0x5c3c5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c5e:{NFSU2_TR(0x5c3c5e);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c65:{NFSU2_TR(0x5c3c65);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c69:{NFSU2_TR(0x5c3c69);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c6b:{NFSU2_TR(0x5c3c6b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c6f:{NFSU2_TR(0x5c3c6f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c76:{NFSU2_TR(0x5c3c76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c78:{NFSU2_TR(0x5c3c78);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3c7f:{NFSU2_TR(0x5c3c7f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c83:{NFSU2_TR(0x5c3c83);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c87:{NFSU2_TR(0x5c3c87);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c8e:{NFSU2_TR(0x5c3c8e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c92:{NFSU2_TR(0x5c3c92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3c94:{NFSU2_TR(0x5c3c94);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3c98:{NFSU2_TR(0x5c3c98);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3c9f:{NFSU2_TR(0x5c3c9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ca1:{NFSU2_TR(0x5c3ca1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ca5:{NFSU2_TR(0x5c3ca5);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3cac:{NFSU2_TR(0x5c3cac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3cae:{NFSU2_TR(0x5c3cae);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3cb5:{NFSU2_TR(0x5c3cb5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3cb9:{NFSU2_TR(0x5c3cb9);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3cbd:{NFSU2_TR(0x5c3cbd);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3cc4:{NFSU2_TR(0x5c3cc4);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3cc8:{NFSU2_TR(0x5c3cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3cca:{NFSU2_TR(0x5c3cca);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3cce:{NFSU2_TR(0x5c3cce);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3cd5:{NFSU2_TR(0x5c3cd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3cd7:{NFSU2_TR(0x5c3cd7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3cdb:{NFSU2_TR(0x5c3cdb);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ce2:{NFSU2_TR(0x5c3ce2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ce4:{NFSU2_TR(0x5c3ce4);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3ceb:{NFSU2_TR(0x5c3ceb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3cef:{NFSU2_TR(0x5c3cef);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3cf6:{NFSU2_TR(0x5c3cf6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3cfa:{NFSU2_TR(0x5c3cfa);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d01:{NFSU2_TR(0x5c3d01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d03:{NFSU2_TR(0x5c3d03);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d07:{NFSU2_TR(0x5c3d07);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d0e:{NFSU2_TR(0x5c3d0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d10:{NFSU2_TR(0x5c3d10);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d14:{NFSU2_TR(0x5c3d14);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d1b:{NFSU2_TR(0x5c3d1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d1d:{NFSU2_TR(0x5c3d1d);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3d24:{NFSU2_TR(0x5c3d24);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d2b:{NFSU2_TR(0x5c3d2b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d2f:{NFSU2_TR(0x5c3d2f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d33:{NFSU2_TR(0x5c3d33);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d3a:{NFSU2_TR(0x5c3d3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d3c:{NFSU2_TR(0x5c3d3c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d40:{NFSU2_TR(0x5c3d40);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d47:{NFSU2_TR(0x5c3d47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d49:{NFSU2_TR(0x5c3d49);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d4d:{NFSU2_TR(0x5c3d4d);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d54:{NFSU2_TR(0x5c3d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d56:{NFSU2_TR(0x5c3d56);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3d5d:{NFSU2_TR(0x5c3d5d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d61:{NFSU2_TR(0x5c3d61);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d68:{NFSU2_TR(0x5c3d68);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d6c:{NFSU2_TR(0x5c3d6c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d73:{NFSU2_TR(0x5c3d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d75:{NFSU2_TR(0x5c3d75);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d79:{NFSU2_TR(0x5c3d79);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d80:{NFSU2_TR(0x5c3d80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d82:{NFSU2_TR(0x5c3d82);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3d86:{NFSU2_TR(0x5c3d86);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3d8d:{NFSU2_TR(0x5c3d8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3d8f:{NFSU2_TR(0x5c3d8f);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5c3d96:{NFSU2_TR(0x5c3d96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3d97:{NFSU2_TR(0x5c3d97);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3d9e:{NFSU2_TR(0x5c3d9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c3da2:{NFSU2_TR(0x5c3da2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3da6:{NFSU2_TR(0x5c3da6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3da7:{NFSU2_TR(0x5c3da7);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3dae:{NFSU2_TR(0x5c3dae);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3db2:{NFSU2_TR(0x5c3db2);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3db9:{NFSU2_TR(0x5c3db9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3dbb:{NFSU2_TR(0x5c3dbb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3dbf:{NFSU2_TR(0x5c3dbf);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3dc6:{NFSU2_TR(0x5c3dc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3dc8:{NFSU2_TR(0x5c3dc8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3dcc:{NFSU2_TR(0x5c3dcc);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3dd3:{NFSU2_TR(0x5c3dd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3dd5:{NFSU2_TR(0x5c3dd5);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3ddc:{NFSU2_TR(0x5c3ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3de1ull));
TAIL_STATIC(0x4012b0u,401);
}
B5c3de1:L5c3de1:{c.instructions+=2;NFSU2_TR(0x5c3de1);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3de6:{NFSU2_TR(0x5c3de6);
TAIL_STATIC(0x5c413au,5c4);
}
B5c3deb:L5c3deb:{c.instructions+=6;NFSU2_TR(0x5c3deb);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3df0:{NFSU2_TR(0x5c3df0);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5c3df4:{NFSU2_TR(0x5c3df4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3df5:{NFSU2_TR(0x5c3df5);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5c3df9:{NFSU2_TR(0x5c3df9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5c3dfa:{NFSU2_TR(0x5c3dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5c3dffull));
TAIL_STATIC(0x5bada0u,5ba);
}
B5c3dff:L5c3dff:{c.instructions+=130;NFSU2_TR(0x5c3dff);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e03:{NFSU2_TR(0x5c3e03);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e07:{NFSU2_TR(0x5c3e07);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e0b:{NFSU2_TR(0x5c3e0b);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e0f:{NFSU2_TR(0x5c3e0f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e11:{NFSU2_TR(0x5c3e11);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e15:{NFSU2_TR(0x5c3e15);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e19:{NFSU2_TR(0x5c3e19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e1b:{NFSU2_TR(0x5c3e1b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e1f:{NFSU2_TR(0x5c3e1f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e23:{NFSU2_TR(0x5c3e23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e25:{NFSU2_TR(0x5c3e25);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3e2c:{NFSU2_TR(0x5c3e2c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e30:{NFSU2_TR(0x5c3e30);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e34:{NFSU2_TR(0x5c3e34);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e38:{NFSU2_TR(0x5c3e38);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e3c:{NFSU2_TR(0x5c3e3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e3e:{NFSU2_TR(0x5c3e3e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e42:{NFSU2_TR(0x5c3e42);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e46:{NFSU2_TR(0x5c3e46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e48:{NFSU2_TR(0x5c3e48);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e4c:{NFSU2_TR(0x5c3e4c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e50:{NFSU2_TR(0x5c3e50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e52:{NFSU2_TR(0x5c3e52);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3e59:{NFSU2_TR(0x5c3e59);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e5d:{NFSU2_TR(0x5c3e5d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e61:{NFSU2_TR(0x5c3e61);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e65:{NFSU2_TR(0x5c3e65);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e69:{NFSU2_TR(0x5c3e69);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e6b:{NFSU2_TR(0x5c3e6b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e6f:{NFSU2_TR(0x5c3e6f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e73:{NFSU2_TR(0x5c3e73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e75:{NFSU2_TR(0x5c3e75);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e79:{NFSU2_TR(0x5c3e79);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e7d:{NFSU2_TR(0x5c3e7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e7f:{NFSU2_TR(0x5c3e7f);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3e86:{NFSU2_TR(0x5c3e86);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e8a:{NFSU2_TR(0x5c3e8a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e8e:{NFSU2_TR(0x5c3e8e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e92:{NFSU2_TR(0x5c3e92);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3e96:{NFSU2_TR(0x5c3e96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3e98:{NFSU2_TR(0x5c3e98);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3e9c:{NFSU2_TR(0x5c3e9c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ea0:{NFSU2_TR(0x5c3ea0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ea2:{NFSU2_TR(0x5c3ea2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ea6:{NFSU2_TR(0x5c3ea6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3eaa:{NFSU2_TR(0x5c3eaa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3eac:{NFSU2_TR(0x5c3eac);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3eb3:{NFSU2_TR(0x5c3eb3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3eb7:{NFSU2_TR(0x5c3eb7);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ebb:{NFSU2_TR(0x5c3ebb);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ebf:{NFSU2_TR(0x5c3ebf);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ec3:{NFSU2_TR(0x5c3ec3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ec5:{NFSU2_TR(0x5c3ec5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ec9:{NFSU2_TR(0x5c3ec9);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ecd:{NFSU2_TR(0x5c3ecd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ecf:{NFSU2_TR(0x5c3ecf);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ed3:{NFSU2_TR(0x5c3ed3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ed7:{NFSU2_TR(0x5c3ed7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ed9:{NFSU2_TR(0x5c3ed9);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3ee0:{NFSU2_TR(0x5c3ee0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ee4:{NFSU2_TR(0x5c3ee4);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ee8:{NFSU2_TR(0x5c3ee8);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3eec:{NFSU2_TR(0x5c3eec);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ef0:{NFSU2_TR(0x5c3ef0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ef2:{NFSU2_TR(0x5c3ef2);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ef6:{NFSU2_TR(0x5c3ef6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3efa:{NFSU2_TR(0x5c3efa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3efc:{NFSU2_TR(0x5c3efc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f00:{NFSU2_TR(0x5c3f00);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f04:{NFSU2_TR(0x5c3f04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f06:{NFSU2_TR(0x5c3f06);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3f0d:{NFSU2_TR(0x5c3f0d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f11:{NFSU2_TR(0x5c3f11);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f15:{NFSU2_TR(0x5c3f15);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f19:{NFSU2_TR(0x5c3f19);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f1d:{NFSU2_TR(0x5c3f1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f1f:{NFSU2_TR(0x5c3f1f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f23:{NFSU2_TR(0x5c3f23);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f27:{NFSU2_TR(0x5c3f27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f29:{NFSU2_TR(0x5c3f29);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f2d:{NFSU2_TR(0x5c3f2d);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f31:{NFSU2_TR(0x5c3f31);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f33:{NFSU2_TR(0x5c3f33);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3f3a:{NFSU2_TR(0x5c3f3a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f3e:{NFSU2_TR(0x5c3f3e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f42:{NFSU2_TR(0x5c3f42);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f46:{NFSU2_TR(0x5c3f46);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f4a:{NFSU2_TR(0x5c3f4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f4c:{NFSU2_TR(0x5c3f4c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f50:{NFSU2_TR(0x5c3f50);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f54:{NFSU2_TR(0x5c3f54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f56:{NFSU2_TR(0x5c3f56);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f5a:{NFSU2_TR(0x5c3f5a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f5e:{NFSU2_TR(0x5c3f5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f60:{NFSU2_TR(0x5c3f60);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3f67:{NFSU2_TR(0x5c3f67);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f6b:{NFSU2_TR(0x5c3f6b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f6f:{NFSU2_TR(0x5c3f6f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f76:{NFSU2_TR(0x5c3f76);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f7a:{NFSU2_TR(0x5c3f7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f7c:{NFSU2_TR(0x5c3f7c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f80:{NFSU2_TR(0x5c3f80);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f87:{NFSU2_TR(0x5c3f87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f89:{NFSU2_TR(0x5c3f89);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3f8d:{NFSU2_TR(0x5c3f8d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3f94:{NFSU2_TR(0x5c3f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3f96:{NFSU2_TR(0x5c3f96);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3f9d:{NFSU2_TR(0x5c3f9d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fa1:{NFSU2_TR(0x5c3fa1);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3fa5:{NFSU2_TR(0x5c3fa5);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fac:{NFSU2_TR(0x5c3fac);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3fb0:{NFSU2_TR(0x5c3fb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3fb2:{NFSU2_TR(0x5c3fb2);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fb9:{NFSU2_TR(0x5c3fb9);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3fbd:{NFSU2_TR(0x5c3fbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3fbf:{NFSU2_TR(0x5c3fbf);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fc3:{NFSU2_TR(0x5c3fc3);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3fca:{NFSU2_TR(0x5c3fca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3fcc:{NFSU2_TR(0x5c3fcc);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5c3fd3:{NFSU2_TR(0x5c3fd3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fd7:{NFSU2_TR(0x5c3fd7);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3fdb:{NFSU2_TR(0x5c3fdb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fe2:{NFSU2_TR(0x5c3fe2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3fe6:{NFSU2_TR(0x5c3fe6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3fe8:{NFSU2_TR(0x5c3fe8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3fec:{NFSU2_TR(0x5c3fec);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5c3ff3:{NFSU2_TR(0x5c3ff3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5c3ff5:{NFSU2_TR(0x5c3ff5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5c3ff9:{NFSU2_TR(0x5c3ff9);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x5c4000u,5c4);
}
XIT:NFSU2_TR_EXIT(0x5c3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
