#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4b4(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b3(u8* __restrict R,Cpu& c);
u32 page_4b3(Cpu& c){return body_4b3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b3006:goto L4b3006;
case 0x4b3009:c.instructions+=1;goto B4b3009;
case 0x4b3010:goto L4b3010;
case 0x4b3011:c.instructions+=5;goto B4b3011;
case 0x4b3012:c.instructions+=4;goto B4b3012;
case 0x4b3016:c.instructions+=3;goto B4b3016;
case 0x4b301c:c.instructions+=2;goto B4b301c;
case 0x4b301e:c.instructions+=1;goto B4b301e;
case 0x4b3020:goto L4b3020;
case 0x4b3026:c.instructions+=1;goto B4b3026;
case 0x4b3028:goto L4b3028;
case 0x4b302d:c.instructions+=3;goto B4b302d;
case 0x4b302f:c.instructions+=2;goto B4b302f;
case 0x4b3032:c.instructions+=1;goto B4b3032;
case 0x4b3037:goto L4b3037;
case 0x4b303b:c.instructions+=3;goto B4b303b;
case 0x4b303c:c.instructions+=2;goto B4b303c;
case 0x4b3041:c.instructions+=1;goto B4b3041;
case 0x4b3046:goto L4b3046;
case 0x4b3048:c.instructions+=4;goto B4b3048;
case 0x4b304b:c.instructions+=3;goto B4b304b;
case 0x4b304c:c.instructions+=2;goto B4b304c;
case 0x4b304e:c.instructions+=1;goto B4b304e;
case 0x4b3051:goto L4b3051;
case 0x4b3053:c.instructions+=2;goto B4b3053;
case 0x4b3055:c.instructions+=1;goto B4b3055;
case 0x4b3058:goto L4b3058;
case 0x4b3059:c.instructions+=2;goto B4b3059;
case 0x4b305a:c.instructions+=1;goto B4b305a;
case 0x4b3060:goto L4b3060;
case 0x4b3067:c.instructions+=3;goto B4b3067;
case 0x4b3068:c.instructions+=2;goto B4b3068;
case 0x4b306a:c.instructions+=1;goto B4b306a;
case 0x4b306c:goto L4b306c;
case 0x4b306f:c.instructions+=4;goto B4b306f;
case 0x4b3071:c.instructions+=3;goto B4b3071;
case 0x4b3076:c.instructions+=2;goto B4b3076;
case 0x4b3077:c.instructions+=1;goto B4b3077;
case 0x4b307c:goto L4b307c;
case 0x4b307f:c.instructions+=4;goto B4b307f;
case 0x4b3081:c.instructions+=3;goto B4b3081;
case 0x4b3086:c.instructions+=2;goto B4b3086;
case 0x4b3087:c.instructions+=1;goto B4b3087;
case 0x4b308c:goto L4b308c;
case 0x4b308e:c.instructions+=4;goto B4b308e;
case 0x4b3093:c.instructions+=3;goto B4b3093;
case 0x4b3098:c.instructions+=2;goto B4b3098;
case 0x4b309d:c.instructions+=1;goto B4b309d;
case 0x4b30a2:goto L4b30a2;
case 0x4b30a4:c.instructions+=4;goto B4b30a4;
case 0x4b30a9:c.instructions+=3;goto B4b30a9;
case 0x4b30ae:c.instructions+=2;goto B4b30ae;
case 0x4b30b3:c.instructions+=1;goto B4b30b3;
case 0x4b30b8:goto L4b30b8;
case 0x4b30bf:c.instructions+=4;goto B4b30bf;
case 0x4b30c1:c.instructions+=3;goto B4b30c1;
case 0x4b30c4:c.instructions+=2;goto B4b30c4;
case 0x4b30c6:c.instructions+=1;goto B4b30c6;
case 0x4b30c9:goto L4b30c9;
case 0x4b30cc:c.instructions+=3;goto B4b30cc;
case 0x4b30d1:c.instructions+=2;goto B4b30d1;
case 0x4b30d2:c.instructions+=1;goto B4b30d2;
case 0x4b30d7:goto L4b30d7;
case 0x4b30dd:c.instructions+=7;goto B4b30dd;
case 0x4b30e0:c.instructions+=6;goto B4b30e0;
case 0x4b30e2:c.instructions+=5;goto B4b30e2;
case 0x4b30e4:c.instructions+=4;goto B4b30e4;
case 0x4b30ea:c.instructions+=3;goto B4b30ea;
case 0x4b30f0:c.instructions+=2;goto B4b30f0;
case 0x4b30f1:c.instructions+=1;goto B4b30f1;
case 0x4b30f6:goto L4b30f6;
case 0x4b30f7:c.instructions+=2;goto B4b30f7;
case 0x4b30f8:c.instructions+=1;goto B4b30f8;
case 0x4b30fd:goto L4b30fd;
case 0x4b3100:c.instructions+=2;goto B4b3100;
case 0x4b3101:c.instructions+=1;goto B4b3101;
case 0x4b3110:goto L4b3110;
case 0x4b3114:c.instructions+=13;goto B4b3114;
case 0x4b3118:c.instructions+=12;goto B4b3118;
case 0x4b3119:c.instructions+=11;goto B4b3119;
case 0x4b311a:c.instructions+=10;goto B4b311a;
case 0x4b311e:c.instructions+=9;goto B4b311e;
case 0x4b3120:c.instructions+=8;goto B4b3120;
case 0x4b3124:c.instructions+=7;goto B4b3124;
case 0x4b3125:c.instructions+=6;goto B4b3125;
case 0x4b3129:c.instructions+=5;goto B4b3129;
case 0x4b312a:c.instructions+=4;goto B4b312a;
case 0x4b312b:c.instructions+=3;goto B4b312b;
case 0x4b312c:c.instructions+=2;goto B4b312c;
case 0x4b312e:c.instructions+=1;goto B4b312e;
case 0x4b3133:goto L4b3133;
case 0x4b3139:c.instructions+=3;goto B4b3139;
case 0x4b313e:c.instructions+=2;goto B4b313e;
case 0x4b3141:c.instructions+=1;goto B4b3141;
case 0x4b3143:goto L4b3143;
case 0x4b3148:c.instructions+=1;goto B4b3148;
case 0x4b314a:goto L4b314a;
case 0x4b314d:c.instructions+=1;goto B4b314d;
case 0x4b314f:goto L4b314f;
case 0x4b3158:c.instructions+=2;goto B4b3158;
case 0x4b315d:c.instructions+=1;goto B4b315d;
case 0x4b315f:goto L4b315f;
case 0x4b3164:goto L4b3164;
case 0x4b3169:c.instructions+=7;goto B4b3169;
case 0x4b316b:c.instructions+=6;goto B4b316b;
case 0x4b316e:c.instructions+=5;goto B4b316e;
case 0x4b3170:c.instructions+=4;goto B4b3170;
case 0x4b3172:c.instructions+=3;goto B4b3172;
case 0x4b3178:c.instructions+=2;goto B4b3178;
case 0x4b317d:c.instructions+=1;goto B4b317d;
case 0x4b317f:goto L4b317f;
case 0x4b3184:goto L4b3184;
case 0x4b3186:c.instructions+=2;goto B4b3186;
case 0x4b3187:c.instructions+=1;goto B4b3187;
case 0x4b3190:goto L4b3190;
case 0x4b3196:c.instructions+=9;goto B4b3196;
case 0x4b3199:c.instructions+=8;goto B4b3199;
case 0x4b319c:c.instructions+=7;goto B4b319c;
case 0x4b319f:c.instructions+=6;goto B4b319f;
case 0x4b31a0:c.instructions+=5;goto B4b31a0;
case 0x4b31a2:c.instructions+=4;goto B4b31a2;
case 0x4b31a9:c.instructions+=3;goto B4b31a9;
case 0x4b31aa:c.instructions+=2;goto B4b31aa;
case 0x4b31ae:c.instructions+=1;goto B4b31ae;
case 0x4b31b0:goto L4b31b0;
case 0x4b31b9:c.instructions+=1;goto B4b31b9;
case 0x4b31bb:goto L4b31bb;
case 0x4b31bd:goto L4b31bd;
case 0x4b31c1:c.instructions+=2;goto B4b31c1;
case 0x4b31c7:c.instructions+=1;goto B4b31c7;
case 0x4b31c9:goto L4b31c9;
case 0x4b31d0:c.instructions+=3;goto B4b31d0;
case 0x4b31d1:c.instructions+=2;goto B4b31d1;
case 0x4b31d3:c.instructions+=1;goto B4b31d3;
case 0x4b31d5:goto L4b31d5;
case 0x4b31d8:c.instructions+=1;goto B4b31d8;
case 0x4b31da:goto L4b31da;
case 0x4b31e0:c.instructions+=1;goto B4b31e0;
case 0x4b31e2:goto L4b31e2;
case 0x4b31e5:c.instructions+=3;goto B4b31e5;
case 0x4b31e6:c.instructions+=2;goto B4b31e6;
case 0x4b31e8:c.instructions+=1;goto B4b31e8;
case 0x4b31ea:goto L4b31ea;
case 0x4b31f1:goto L4b31f1;
case 0x4b31f7:c.instructions+=4;goto B4b31f7;
case 0x4b31fb:c.instructions+=3;goto B4b31fb;
case 0x4b31fc:c.instructions+=2;goto B4b31fc;
case 0x4b3201:c.instructions+=1;goto B4b3201;
case 0x4b3206:goto L4b3206;
case 0x4b3208:c.instructions+=4;goto B4b3208;
case 0x4b320b:c.instructions+=3;goto B4b320b;
case 0x4b320c:c.instructions+=2;goto B4b320c;
case 0x4b320e:c.instructions+=1;goto B4b320e;
case 0x4b3211:goto L4b3211;
case 0x4b3213:c.instructions+=2;goto B4b3213;
case 0x4b3215:c.instructions+=1;goto B4b3215;
case 0x4b3218:goto L4b3218;
case 0x4b3219:c.instructions+=2;goto B4b3219;
case 0x4b321a:c.instructions+=1;goto B4b321a;
case 0x4b3220:goto L4b3220;
case 0x4b3225:c.instructions+=9;goto B4b3225;
case 0x4b3227:c.instructions+=8;goto B4b3227;
case 0x4b322a:c.instructions+=7;goto B4b322a;
case 0x4b322b:c.instructions+=6;goto B4b322b;
case 0x4b322d:c.instructions+=5;goto B4b322d;
case 0x4b3233:c.instructions+=4;goto B4b3233;
case 0x4b3235:c.instructions+=3;goto B4b3235;
case 0x4b3237:c.instructions+=2;goto B4b3237;
case 0x4b323c:c.instructions+=1;goto B4b323c;
case 0x4b323e:goto L4b323e;
case 0x4b3243:goto L4b3243;
case 0x4b3246:c.instructions+=3;goto B4b3246;
case 0x4b324b:c.instructions+=2;goto B4b324b;
case 0x4b324c:c.instructions+=1;goto B4b324c;
case 0x4b3251:goto L4b3251;
case 0x4b3258:c.instructions+=5;goto B4b3258;
case 0x4b325b:c.instructions+=4;goto B4b325b;
case 0x4b325c:c.instructions+=3;goto B4b325c;
case 0x4b3261:c.instructions+=2;goto B4b3261;
case 0x4b3262:c.instructions+=1;goto B4b3262;
case 0x4b3267:goto L4b3267;
case 0x4b326a:c.instructions+=2;goto B4b326a;
case 0x4b326b:c.instructions+=1;goto B4b326b;
case 0x4b3270:goto L4b3270;
case 0x4b3271:c.instructions+=5;goto B4b3271;
case 0x4b3272:c.instructions+=4;goto B4b3272;
case 0x4b3276:c.instructions+=3;goto B4b3276;
case 0x4b327c:c.instructions+=2;goto B4b327c;
case 0x4b327e:c.instructions+=1;goto B4b327e;
case 0x4b3280:goto L4b3280;
case 0x4b3286:c.instructions+=1;goto B4b3286;
case 0x4b3288:goto L4b3288;
case 0x4b328d:c.instructions+=3;goto B4b328d;
case 0x4b328f:c.instructions+=2;goto B4b328f;
case 0x4b3292:c.instructions+=1;goto B4b3292;
case 0x4b3297:goto L4b3297;
case 0x4b329b:c.instructions+=3;goto B4b329b;
case 0x4b329c:c.instructions+=2;goto B4b329c;
case 0x4b32a1:c.instructions+=1;goto B4b32a1;
case 0x4b32a6:goto L4b32a6;
case 0x4b32a8:c.instructions+=4;goto B4b32a8;
case 0x4b32ab:c.instructions+=3;goto B4b32ab;
case 0x4b32ac:c.instructions+=2;goto B4b32ac;
case 0x4b32ae:c.instructions+=1;goto B4b32ae;
case 0x4b32b1:goto L4b32b1;
case 0x4b32b3:c.instructions+=2;goto B4b32b3;
case 0x4b32b5:c.instructions+=1;goto B4b32b5;
case 0x4b32b8:goto L4b32b8;
case 0x4b32b9:c.instructions+=2;goto B4b32b9;
case 0x4b32ba:c.instructions+=1;goto B4b32ba;
case 0x4b32c0:goto L4b32c0;
case 0x4b32c5:c.instructions+=10;goto B4b32c5;
case 0x4b32c7:c.instructions+=9;goto B4b32c7;
case 0x4b32c8:c.instructions+=8;goto B4b32c8;
case 0x4b32ca:c.instructions+=7;goto B4b32ca;
case 0x4b32cd:c.instructions+=6;goto B4b32cd;
case 0x4b32cf:c.instructions+=5;goto B4b32cf;
case 0x4b32d4:c.instructions+=4;goto B4b32d4;
case 0x4b32d9:c.instructions+=3;goto B4b32d9;
case 0x4b32da:c.instructions+=2;goto B4b32da;
case 0x4b32db:c.instructions+=1;goto B4b32db;
case 0x4b32e0:goto L4b32e0;
case 0x4b32e3:c.instructions+=3;goto B4b32e3;
case 0x4b32e8:c.instructions+=2;goto B4b32e8;
case 0x4b32e9:c.instructions+=1;goto B4b32e9;
case 0x4b32ee:goto L4b32ee;
case 0x4b32f1:c.instructions+=2;goto B4b32f1;
case 0x4b32f2:c.instructions+=1;goto B4b32f2;
case 0x4b3300:goto L4b3300;
case 0x4b3301:c.instructions+=5;goto B4b3301;
case 0x4b3302:c.instructions+=4;goto B4b3302;
case 0x4b3306:c.instructions+=3;goto B4b3306;
case 0x4b330c:c.instructions+=2;goto B4b330c;
case 0x4b330e:c.instructions+=1;goto B4b330e;
case 0x4b3310:goto L4b3310;
case 0x4b3316:c.instructions+=1;goto B4b3316;
case 0x4b3318:goto L4b3318;
case 0x4b331d:c.instructions+=3;goto B4b331d;
case 0x4b331f:c.instructions+=2;goto B4b331f;
case 0x4b3322:c.instructions+=1;goto B4b3322;
case 0x4b3327:goto L4b3327;
case 0x4b332b:c.instructions+=3;goto B4b332b;
case 0x4b332c:c.instructions+=2;goto B4b332c;
case 0x4b3331:c.instructions+=1;goto B4b3331;
case 0x4b3336:goto L4b3336;
case 0x4b3338:c.instructions+=4;goto B4b3338;
case 0x4b333b:c.instructions+=3;goto B4b333b;
case 0x4b333c:c.instructions+=2;goto B4b333c;
case 0x4b333e:c.instructions+=1;goto B4b333e;
case 0x4b3341:goto L4b3341;
case 0x4b3343:c.instructions+=2;goto B4b3343;
case 0x4b3345:c.instructions+=1;goto B4b3345;
case 0x4b3348:goto L4b3348;
case 0x4b3349:c.instructions+=2;goto B4b3349;
case 0x4b334a:c.instructions+=1;goto B4b334a;
case 0x4b3350:goto L4b3350;
case 0x4b3355:c.instructions+=10;goto B4b3355;
case 0x4b3357:c.instructions+=9;goto B4b3357;
case 0x4b3358:c.instructions+=8;goto B4b3358;
case 0x4b335a:c.instructions+=7;goto B4b335a;
case 0x4b335d:c.instructions+=6;goto B4b335d;
case 0x4b335f:c.instructions+=5;goto B4b335f;
case 0x4b3364:c.instructions+=4;goto B4b3364;
case 0x4b3369:c.instructions+=3;goto B4b3369;
case 0x4b336a:c.instructions+=2;goto B4b336a;
case 0x4b336b:c.instructions+=1;goto B4b336b;
case 0x4b3370:goto L4b3370;
case 0x4b3373:c.instructions+=3;goto B4b3373;
case 0x4b3378:c.instructions+=2;goto B4b3378;
case 0x4b3379:c.instructions+=1;goto B4b3379;
case 0x4b337e:goto L4b337e;
case 0x4b3381:c.instructions+=2;goto B4b3381;
case 0x4b3382:c.instructions+=1;goto B4b3382;
case 0x4b3390:goto L4b3390;
case 0x4b3394:c.instructions+=4;goto B4b3394;
case 0x4b3399:c.instructions+=3;goto B4b3399;
case 0x4b339a:c.instructions+=2;goto B4b339a;
case 0x4b339c:c.instructions+=1;goto B4b339c;
case 0x4b339e:goto L4b339e;
case 0x4b33a3:c.instructions+=1;goto B4b33a3;
case 0x4b33a5:goto L4b33a5;
case 0x4b33ab:c.instructions+=3;goto B4b33ab;
case 0x4b33ad:c.instructions+=2;goto B4b33ad;
case 0x4b33b0:c.instructions+=1;goto B4b33b0;
case 0x4b33b6:goto L4b33b6;
case 0x4b33b8:c.instructions+=3;goto B4b33b8;
case 0x4b33b9:c.instructions+=2;goto B4b33b9;
case 0x4b33bb:c.instructions+=1;goto B4b33bb;
case 0x4b33be:goto L4b33be;
case 0x4b33c0:c.instructions+=2;goto B4b33c0;
case 0x4b33c2:c.instructions+=1;goto B4b33c2;
case 0x4b33c5:goto L4b33c5;
case 0x4b33c6:c.instructions+=1;goto B4b33c6;
case 0x4b33d0:goto L4b33d0;
case 0x4b33d5:c.instructions+=10;goto B4b33d5;
case 0x4b33d7:c.instructions+=9;goto B4b33d7;
case 0x4b33d8:c.instructions+=8;goto B4b33d8;
case 0x4b33da:c.instructions+=7;goto B4b33da;
case 0x4b33dd:c.instructions+=6;goto B4b33dd;
case 0x4b33df:c.instructions+=5;goto B4b33df;
case 0x4b33e4:c.instructions+=4;goto B4b33e4;
case 0x4b33e9:c.instructions+=3;goto B4b33e9;
case 0x4b33ea:c.instructions+=2;goto B4b33ea;
case 0x4b33eb:c.instructions+=1;goto B4b33eb;
case 0x4b33f0:goto L4b33f0;
case 0x4b33f3:c.instructions+=3;goto B4b33f3;
case 0x4b33f8:c.instructions+=2;goto B4b33f8;
case 0x4b33f9:c.instructions+=1;goto B4b33f9;
case 0x4b33fe:goto L4b33fe;
case 0x4b3401:c.instructions+=2;goto B4b3401;
case 0x4b3402:c.instructions+=1;goto B4b3402;
case 0x4b3410:goto L4b3410;
case 0x4b3414:c.instructions+=4;goto B4b3414;
case 0x4b3419:c.instructions+=3;goto B4b3419;
case 0x4b341a:c.instructions+=2;goto B4b341a;
case 0x4b341c:c.instructions+=1;goto B4b341c;
case 0x4b341e:goto L4b341e;
case 0x4b3423:c.instructions+=1;goto B4b3423;
case 0x4b3425:goto L4b3425;
case 0x4b342b:c.instructions+=2;goto B4b342b;
case 0x4b342d:c.instructions+=1;goto B4b342d;
case 0x4b3434:goto L4b3434;
case 0x4b343a:c.instructions+=2;goto B4b343a;
case 0x4b343c:c.instructions+=1;goto B4b343c;
case 0x4b343e:goto L4b343e;
case 0x4b3445:goto L4b3445;
case 0x4b3447:c.instructions+=3;goto B4b3447;
case 0x4b3448:c.instructions+=2;goto B4b3448;
case 0x4b344a:c.instructions+=1;goto B4b344a;
case 0x4b344d:goto L4b344d;
case 0x4b344f:c.instructions+=2;goto B4b344f;
case 0x4b3451:c.instructions+=1;goto B4b3451;
case 0x4b3454:goto L4b3454;
case 0x4b3455:c.instructions+=1;goto B4b3455;
case 0x4b3460:goto L4b3460;
case 0x4b3465:c.instructions+=10;goto B4b3465;
case 0x4b3467:c.instructions+=9;goto B4b3467;
case 0x4b3468:c.instructions+=8;goto B4b3468;
case 0x4b346a:c.instructions+=7;goto B4b346a;
case 0x4b346d:c.instructions+=6;goto B4b346d;
case 0x4b346f:c.instructions+=5;goto B4b346f;
case 0x4b3474:c.instructions+=4;goto B4b3474;
case 0x4b3479:c.instructions+=3;goto B4b3479;
case 0x4b347a:c.instructions+=2;goto B4b347a;
case 0x4b347b:c.instructions+=1;goto B4b347b;
case 0x4b3480:goto L4b3480;
case 0x4b3483:c.instructions+=3;goto B4b3483;
case 0x4b3488:c.instructions+=2;goto B4b3488;
case 0x4b3489:c.instructions+=1;goto B4b3489;
case 0x4b348e:goto L4b348e;
case 0x4b3491:c.instructions+=2;goto B4b3491;
case 0x4b3492:c.instructions+=1;goto B4b3492;
case 0x4b34a0:goto L4b34a0;
case 0x4b34a1:c.instructions+=5;goto B4b34a1;
case 0x4b34a2:c.instructions+=4;goto B4b34a2;
case 0x4b34a6:c.instructions+=3;goto B4b34a6;
case 0x4b34ac:c.instructions+=2;goto B4b34ac;
case 0x4b34ae:c.instructions+=1;goto B4b34ae;
case 0x4b34b0:goto L4b34b0;
case 0x4b34b6:c.instructions+=1;goto B4b34b6;
case 0x4b34b8:goto L4b34b8;
case 0x4b34bd:c.instructions+=3;goto B4b34bd;
case 0x4b34bf:c.instructions+=2;goto B4b34bf;
case 0x4b34c2:c.instructions+=1;goto B4b34c2;
case 0x4b34c7:goto L4b34c7;
case 0x4b34cb:c.instructions+=3;goto B4b34cb;
case 0x4b34cc:c.instructions+=2;goto B4b34cc;
case 0x4b34d1:c.instructions+=1;goto B4b34d1;
case 0x4b34d6:goto L4b34d6;
case 0x4b34d8:c.instructions+=4;goto B4b34d8;
case 0x4b34db:c.instructions+=3;goto B4b34db;
case 0x4b34dc:c.instructions+=2;goto B4b34dc;
case 0x4b34de:c.instructions+=1;goto B4b34de;
case 0x4b34e1:goto L4b34e1;
case 0x4b34e2:c.instructions+=2;goto B4b34e2;
case 0x4b34e3:c.instructions+=1;goto B4b34e3;
case 0x4b34f0:goto L4b34f0;
case 0x4b34f5:c.instructions+=5;goto B4b34f5;
case 0x4b34f6:c.instructions+=4;goto B4b34f6;
case 0x4b34f8:c.instructions+=3;goto B4b34f8;
case 0x4b34fa:c.instructions+=2;goto B4b34fa;
case 0x4b34fd:c.instructions+=1;goto B4b34fd;
case 0x4b34ff:goto L4b34ff;
case 0x4b3501:c.instructions+=1;goto B4b3501;
case 0x4b3503:goto L4b3503;
case 0x4b3505:c.instructions+=1;goto B4b3505;
case 0x4b3508:goto L4b3508;
case 0x4b350a:goto L4b350a;
case 0x4b350c:c.instructions+=1;goto B4b350c;
case 0x4b350e:goto L4b350e;
case 0x4b3510:c.instructions+=2;goto B4b3510;
case 0x4b3512:c.instructions+=1;goto B4b3512;
case 0x4b3515:goto L4b3515;
case 0x4b351a:c.instructions+=8;goto B4b351a;
case 0x4b351d:c.instructions+=7;goto B4b351d;
case 0x4b351f:c.instructions+=6;goto B4b351f;
case 0x4b3521:c.instructions+=5;goto B4b3521;
case 0x4b3526:c.instructions+=4;goto B4b3526;
case 0x4b352b:c.instructions+=3;goto B4b352b;
case 0x4b352c:c.instructions+=2;goto B4b352c;
case 0x4b352d:c.instructions+=1;goto B4b352d;
case 0x4b3532:goto L4b3532;
case 0x4b3535:c.instructions+=3;goto B4b3535;
case 0x4b353a:c.instructions+=2;goto B4b353a;
case 0x4b353b:c.instructions+=1;goto B4b353b;
case 0x4b3540:goto L4b3540;
case 0x4b3543:c.instructions+=2;goto B4b3543;
case 0x4b3544:c.instructions+=1;goto B4b3544;
case 0x4b3550:goto L4b3550;
case 0x4b3551:c.instructions+=5;goto B4b3551;
case 0x4b3553:c.instructions+=4;goto B4b3553;
case 0x4b3556:c.instructions+=3;goto B4b3556;
case 0x4b355b:c.instructions+=2;goto B4b355b;
case 0x4b355c:c.instructions+=1;goto B4b355c;
case 0x4b3561:goto L4b3561;
case 0x4b3566:c.instructions+=3;goto B4b3566;
case 0x4b3569:c.instructions+=2;goto B4b3569;
case 0x4b356b:c.instructions+=1;goto B4b356b;
case 0x4b356d:goto L4b356d;
case 0x4b3570:c.instructions+=3;goto B4b3570;
case 0x4b3575:c.instructions+=2;goto B4b3575;
case 0x4b3576:c.instructions+=1;goto B4b3576;
case 0x4b357b:goto L4b357b;
case 0x4b357e:c.instructions+=2;goto B4b357e;
case 0x4b357f:c.instructions+=1;goto B4b357f;
case 0x4b3580:goto L4b3580;
case 0x4b3583:c.instructions+=3;goto B4b3583;
case 0x4b3588:c.instructions+=2;goto B4b3588;
case 0x4b3589:c.instructions+=1;goto B4b3589;
case 0x4b358e:goto L4b358e;
case 0x4b3591:c.instructions+=2;goto B4b3591;
case 0x4b3592:c.instructions+=1;goto B4b3592;
case 0x4b35a0:goto L4b35a0;
case 0x4b35a1:c.instructions+=5;goto B4b35a1;
case 0x4b35a3:c.instructions+=4;goto B4b35a3;
case 0x4b35a6:c.instructions+=3;goto B4b35a6;
case 0x4b35ab:c.instructions+=2;goto B4b35ab;
case 0x4b35ac:c.instructions+=1;goto B4b35ac;
case 0x4b35b1:goto L4b35b1;
case 0x4b35b6:c.instructions+=3;goto B4b35b6;
case 0x4b35b9:c.instructions+=2;goto B4b35b9;
case 0x4b35bb:c.instructions+=1;goto B4b35bb;
case 0x4b35bd:goto L4b35bd;
case 0x4b35c0:c.instructions+=3;goto B4b35c0;
case 0x4b35c5:c.instructions+=2;goto B4b35c5;
case 0x4b35c6:c.instructions+=1;goto B4b35c6;
case 0x4b35cb:goto L4b35cb;
case 0x4b35ce:c.instructions+=2;goto B4b35ce;
case 0x4b35cf:c.instructions+=1;goto B4b35cf;
case 0x4b35d0:goto L4b35d0;
case 0x4b35d3:c.instructions+=3;goto B4b35d3;
case 0x4b35d8:c.instructions+=2;goto B4b35d8;
case 0x4b35d9:c.instructions+=1;goto B4b35d9;
case 0x4b35de:goto L4b35de;
case 0x4b35e1:c.instructions+=2;goto B4b35e1;
case 0x4b35e2:c.instructions+=1;goto B4b35e2;
case 0x4b35f0:goto L4b35f0;
case 0x4b35f5:c.instructions+=5;goto B4b35f5;
case 0x4b35f6:c.instructions+=4;goto B4b35f6;
case 0x4b35f8:c.instructions+=3;goto B4b35f8;
case 0x4b35fc:c.instructions+=2;goto B4b35fc;
case 0x4b3602:c.instructions+=1;goto B4b3602;
case 0x4b3604:goto L4b3604;
case 0x4b3605:c.instructions+=1;goto B4b3605;
case 0x4b3607:goto L4b3607;
case 0x4b360c:c.instructions+=1;goto B4b360c;
case 0x4b360e:goto L4b360e;
case 0x4b3614:c.instructions+=1;goto B4b3614;
case 0x4b3616:goto L4b3616;
case 0x4b3617:c.instructions+=2;goto B4b3617;
case 0x4b361a:c.instructions+=1;goto B4b361a;
case 0x4b361c:goto L4b361c;
case 0x4b361e:goto L4b361e;
case 0x4b3623:c.instructions+=4;goto B4b3623;
case 0x4b3625:c.instructions+=3;goto B4b3625;
case 0x4b3626:c.instructions+=2;goto B4b3626;
case 0x4b3628:c.instructions+=1;goto B4b3628;
case 0x4b362b:goto L4b362b;
case 0x4b362d:c.instructions+=2;goto B4b362d;
case 0x4b362f:c.instructions+=1;goto B4b362f;
case 0x4b3632:goto L4b3632;
case 0x4b3633:c.instructions+=1;goto B4b3633;
case 0x4b3640:goto L4b3640;
case 0x4b3641:c.instructions+=5;goto B4b3641;
case 0x4b3643:c.instructions+=4;goto B4b3643;
case 0x4b3646:c.instructions+=3;goto B4b3646;
case 0x4b364b:c.instructions+=2;goto B4b364b;
case 0x4b364c:c.instructions+=1;goto B4b364c;
case 0x4b3651:goto L4b3651;
case 0x4b3656:c.instructions+=3;goto B4b3656;
case 0x4b3659:c.instructions+=2;goto B4b3659;
case 0x4b365c:c.instructions+=1;goto B4b365c;
case 0x4b365e:goto L4b365e;
case 0x4b3661:c.instructions+=2;goto B4b3661;
case 0x4b3666:c.instructions+=1;goto B4b3666;
case 0x4b366b:goto L4b366b;
case 0x4b366c:c.instructions+=2;goto B4b366c;
case 0x4b366d:c.instructions+=1;goto B4b366d;
case 0x4b3672:goto L4b3672;
case 0x4b3675:c.instructions+=2;goto B4b3675;
case 0x4b3676:c.instructions+=1;goto B4b3676;
case 0x4b3677:goto L4b3677;
case 0x4b367e:c.instructions+=5;goto B4b367e;
case 0x4b3681:c.instructions+=4;goto B4b3681;
case 0x4b3682:c.instructions+=3;goto B4b3682;
case 0x4b3687:c.instructions+=2;goto B4b3687;
case 0x4b3688:c.instructions+=1;goto B4b3688;
case 0x4b368d:goto L4b368d;
case 0x4b3690:c.instructions+=2;goto B4b3690;
case 0x4b3691:c.instructions+=1;goto B4b3691;
case 0x4b36a0:goto L4b36a0;
case 0x4b36a5:c.instructions+=5;goto B4b36a5;
case 0x4b36a6:c.instructions+=4;goto B4b36a6;
case 0x4b36a8:c.instructions+=3;goto B4b36a8;
case 0x4b36ac:c.instructions+=2;goto B4b36ac;
case 0x4b36b2:c.instructions+=1;goto B4b36b2;
case 0x4b36b4:goto L4b36b4;
case 0x4b36b5:c.instructions+=1;goto B4b36b5;
case 0x4b36b7:goto L4b36b7;
case 0x4b36bc:c.instructions+=1;goto B4b36bc;
case 0x4b36be:goto L4b36be;
case 0x4b36c4:c.instructions+=1;goto B4b36c4;
case 0x4b36c6:goto L4b36c6;
case 0x4b36c7:c.instructions+=2;goto B4b36c7;
case 0x4b36ca:c.instructions+=1;goto B4b36ca;
case 0x4b36cc:goto L4b36cc;
case 0x4b36ce:goto L4b36ce;
case 0x4b36d3:c.instructions+=4;goto B4b36d3;
case 0x4b36d5:c.instructions+=3;goto B4b36d5;
case 0x4b36d6:c.instructions+=2;goto B4b36d6;
case 0x4b36d8:c.instructions+=1;goto B4b36d8;
case 0x4b36db:goto L4b36db;
case 0x4b36dd:c.instructions+=2;goto B4b36dd;
case 0x4b36df:c.instructions+=1;goto B4b36df;
case 0x4b36e2:goto L4b36e2;
case 0x4b36e3:c.instructions+=1;goto B4b36e3;
case 0x4b36f0:goto L4b36f0;
case 0x4b36f1:c.instructions+=5;goto B4b36f1;
case 0x4b36f3:c.instructions+=4;goto B4b36f3;
case 0x4b36f6:c.instructions+=3;goto B4b36f6;
case 0x4b36fb:c.instructions+=2;goto B4b36fb;
case 0x4b36fc:c.instructions+=1;goto B4b36fc;
case 0x4b3701:goto L4b3701;
case 0x4b3706:c.instructions+=4;goto B4b3706;
case 0x4b3709:c.instructions+=3;goto B4b3709;
case 0x4b370c:c.instructions+=2;goto B4b370c;
case 0x4b370e:c.instructions+=1;goto B4b370e;
case 0x4b3710:goto L4b3710;
case 0x4b3715:c.instructions+=1;goto B4b3715;
case 0x4b371a:goto L4b371a;
case 0x4b371b:c.instructions+=2;goto B4b371b;
case 0x4b371c:c.instructions+=1;goto B4b371c;
case 0x4b3721:goto L4b3721;
case 0x4b3724:c.instructions+=2;goto B4b3724;
case 0x4b3725:c.instructions+=1;goto B4b3725;
case 0x4b3726:goto L4b3726;
case 0x4b372b:c.instructions+=1;goto B4b372b;
case 0x4b3730:goto L4b3730;
case 0x4b3736:c.instructions+=6;goto B4b3736;
case 0x4b373d:c.instructions+=5;goto B4b373d;
case 0x4b373e:c.instructions+=4;goto B4b373e;
case 0x4b373f:c.instructions+=3;goto B4b373f;
case 0x4b3744:c.instructions+=2;goto B4b3744;
case 0x4b3745:c.instructions+=1;goto B4b3745;
case 0x4b374a:goto L4b374a;
case 0x4b374d:c.instructions+=2;goto B4b374d;
case 0x4b374e:c.instructions+=1;goto B4b374e;
case 0x4b3750:goto L4b3750;
case 0x4b3752:c.instructions+=20;goto B4b3752;
case 0x4b3757:c.instructions+=19;goto B4b3757;
case 0x4b375d:c.instructions+=18;goto B4b375d;
case 0x4b375e:c.instructions+=17;goto B4b375e;
case 0x4b3765:c.instructions+=16;goto B4b3765;
case 0x4b3766:c.instructions+=15;goto B4b3766;
case 0x4b376a:c.instructions+=14;goto B4b376a;
case 0x4b376e:c.instructions+=13;goto B4b376e;
case 0x4b376f:c.instructions+=12;goto B4b376f;
case 0x4b3771:c.instructions+=11;goto B4b3771;
case 0x4b3775:c.instructions+=10;goto B4b3775;
case 0x4b3776:c.instructions+=9;goto B4b3776;
case 0x4b377a:c.instructions+=8;goto B4b377a;
case 0x4b377b:c.instructions+=7;goto B4b377b;
case 0x4b377f:c.instructions+=6;goto B4b377f;
case 0x4b3780:c.instructions+=5;goto B4b3780;
case 0x4b3781:c.instructions+=4;goto B4b3781;
case 0x4b3782:c.instructions+=3;goto B4b3782;
case 0x4b3784:c.instructions+=2;goto B4b3784;
case 0x4b3788:c.instructions+=1;goto B4b3788;
case 0x4b378d:goto L4b378d;
case 0x4b3793:c.instructions+=3;goto B4b3793;
case 0x4b379a:c.instructions+=2;goto B4b379a;
case 0x4b37a2:c.instructions+=1;goto B4b37a2;
case 0x4b37a4:goto L4b37a4;
case 0x4b37ab:c.instructions+=1;goto B4b37ab;
case 0x4b37ad:goto L4b37ad;
case 0x4b37b2:c.instructions+=1;goto B4b37b2;
case 0x4b37b7:goto L4b37b7;
case 0x4b37bc:c.instructions+=1;goto B4b37bc;
case 0x4b37be:goto L4b37be;
case 0x4b37c3:c.instructions+=1;goto B4b37c3;
case 0x4b37c8:goto L4b37c8;
case 0x4b37cb:c.instructions+=1;goto B4b37cb;
case 0x4b37cd:goto L4b37cd;
case 0x4b37cf:c.instructions+=2;goto B4b37cf;
case 0x4b37d4:c.instructions+=1;goto B4b37d4;
case 0x4b37d9:goto L4b37d9;
case 0x4b37dd:c.instructions+=5;goto B4b37dd;
case 0x4b37df:c.instructions+=4;goto B4b37df;
case 0x4b37e0:c.instructions+=3;goto B4b37e0;
case 0x4b37e7:c.instructions+=2;goto B4b37e7;
case 0x4b37ea:c.instructions+=1;goto B4b37ea;
case 0x4b37f0:goto L4b37f0;
case 0x4b37f4:c.instructions+=4;goto B4b37f4;
case 0x4b37f9:c.instructions+=3;goto B4b37f9;
case 0x4b37fa:c.instructions+=2;goto B4b37fa;
case 0x4b37fc:c.instructions+=1;goto B4b37fc;
case 0x4b37fe:goto L4b37fe;
case 0x4b3803:c.instructions+=1;goto B4b3803;
case 0x4b3809:goto L4b3809;
case 0x4b380a:c.instructions+=4;goto B4b380a;
case 0x4b380b:c.instructions+=3;goto B4b380b;
case 0x4b380c:c.instructions+=2;goto B4b380c;
case 0x4b3811:c.instructions+=1;goto B4b3811;
case 0x4b3816:goto L4b3816;
case 0x4b381b:c.instructions+=2;goto B4b381b;
case 0x4b381d:c.instructions+=1;goto B4b381d;
case 0x4b3822:goto L4b3822;
case 0x4b3824:c.instructions+=8;goto B4b3824;
case 0x4b3826:c.instructions+=7;goto B4b3826;
case 0x4b382b:c.instructions+=6;goto B4b382b;
case 0x4b382e:c.instructions+=5;goto B4b382e;
case 0x4b3831:c.instructions+=4;goto B4b3831;
case 0x4b3835:c.instructions+=3;goto B4b3835;
case 0x4b3837:c.instructions+=2;goto B4b3837;
case 0x4b383e:c.instructions+=1;goto B4b383e;
case 0x4b3840:goto L4b3840;
case 0x4b3843:c.instructions+=1;goto B4b3843;
case 0x4b3845:goto L4b3845;
case 0x4b384a:c.instructions+=1;goto B4b384a;
case 0x4b384f:goto L4b384f;
case 0x4b3854:c.instructions+=1;goto B4b3854;
case 0x4b3856:goto L4b3856;
case 0x4b385b:goto L4b385b;
case 0x4b3862:c.instructions+=2;goto B4b3862;
case 0x4b3867:c.instructions+=1;goto B4b3867;
case 0x4b3869:goto L4b3869;
case 0x4b386b:goto L4b386b;
case 0x4b386f:c.instructions+=2;goto B4b386f;
case 0x4b3875:c.instructions+=1;goto B4b3875;
case 0x4b3877:goto L4b3877;
case 0x4b3878:c.instructions+=2;goto B4b3878;
case 0x4b387a:c.instructions+=1;goto B4b387a;
case 0x4b387c:goto L4b387c;
case 0x4b387e:c.instructions+=3;goto B4b387e;
case 0x4b387f:c.instructions+=2;goto B4b387f;
case 0x4b3881:c.instructions+=1;goto B4b3881;
case 0x4b3883:goto L4b3883;
case 0x4b3889:c.instructions+=1;goto B4b3889;
case 0x4b388b:goto L4b388b;
case 0x4b388d:c.instructions+=4;goto B4b388d;
case 0x4b388e:c.instructions+=3;goto B4b388e;
case 0x4b388f:c.instructions+=2;goto B4b388f;
case 0x4b3891:c.instructions+=1;goto B4b3891;
case 0x4b3893:goto L4b3893;
case 0x4b3895:goto L4b3895;
case 0x4b3896:c.instructions+=2;goto B4b3896;
case 0x4b389b:c.instructions+=1;goto B4b389b;
case 0x4b38a0:goto L4b38a0;
case 0x4b38a4:c.instructions+=4;goto B4b38a4;
case 0x4b38a7:c.instructions+=3;goto B4b38a7;
case 0x4b38a8:c.instructions+=2;goto B4b38a8;
case 0x4b38aa:c.instructions+=1;goto B4b38aa;
case 0x4b38ad:goto L4b38ad;
case 0x4b38b0:c.instructions+=2;goto B4b38b0;
case 0x4b38b2:c.instructions+=1;goto B4b38b2;
case 0x4b38b5:goto L4b38b5;
case 0x4b38b6:c.instructions+=2;goto B4b38b6;
case 0x4b38b7:c.instructions+=1;goto B4b38b7;
case 0x4b38b8:goto L4b38b8;
case 0x4b38b9:c.instructions+=1;goto B4b38b9;
case 0x4b38c0:goto L4b38c0;
case 0x4b38c1:c.instructions+=6;goto B4b38c1;
case 0x4b38c2:c.instructions+=5;goto B4b38c2;
case 0x4b38c4:c.instructions+=4;goto B4b38c4;
case 0x4b38c7:c.instructions+=3;goto B4b38c7;
case 0x4b38cc:c.instructions+=2;goto B4b38cc;
case 0x4b38cd:c.instructions+=1;goto B4b38cd;
case 0x4b38d2:goto L4b38d2;
case 0x4b38d5:c.instructions+=3;goto B4b38d5;
case 0x4b38d8:c.instructions+=2;goto B4b38d8;
case 0x4b38dd:c.instructions+=1;goto B4b38dd;
case 0x4b38e2:goto L4b38e2;
case 0x4b38e3:c.instructions+=3;goto B4b38e3;
case 0x4b38e8:c.instructions+=2;goto B4b38e8;
case 0x4b38e9:c.instructions+=1;goto B4b38e9;
case 0x4b38ee:goto L4b38ee;
case 0x4b38f1:c.instructions+=2;goto B4b38f1;
case 0x4b38f6:c.instructions+=1;goto B4b38f6;
case 0x4b38fb:goto L4b38fb;
case 0x4b38fe:c.instructions+=3;goto B4b38fe;
case 0x4b3900:c.instructions+=2;goto B4b3900;
case 0x4b3903:c.instructions+=1;goto B4b3903;
case 0x4b3905:goto L4b3905;
case 0x4b3907:c.instructions+=1;goto B4b3907;
case 0x4b3909:goto L4b3909;
case 0x4b390b:c.instructions+=4;goto B4b390b;
case 0x4b390c:c.instructions+=3;goto B4b390c;
case 0x4b390e:c.instructions+=2;goto B4b390e;
case 0x4b390f:c.instructions+=1;goto B4b390f;
case 0x4b3912:goto L4b3912;
case 0x4b3914:c.instructions+=1;goto B4b3914;
case 0x4b3916:goto L4b3916;
case 0x4b3918:c.instructions+=4;goto B4b3918;
case 0x4b3919:c.instructions+=3;goto B4b3919;
case 0x4b391b:c.instructions+=2;goto B4b391b;
case 0x4b391c:c.instructions+=1;goto B4b391c;
case 0x4b391f:goto L4b391f;
case 0x4b3920:c.instructions+=2;goto B4b3920;
case 0x4b3921:c.instructions+=1;goto B4b3921;
case 0x4b3930:goto L4b3930;
case 0x4b3934:c.instructions+=13;goto B4b3934;
case 0x4b3938:c.instructions+=12;goto B4b3938;
case 0x4b3939:c.instructions+=11;goto B4b3939;
case 0x4b393a:c.instructions+=10;goto B4b393a;
case 0x4b393e:c.instructions+=9;goto B4b393e;
case 0x4b3940:c.instructions+=8;goto B4b3940;
case 0x4b3944:c.instructions+=7;goto B4b3944;
case 0x4b3945:c.instructions+=6;goto B4b3945;
case 0x4b3949:c.instructions+=5;goto B4b3949;
case 0x4b394a:c.instructions+=4;goto B4b394a;
case 0x4b394b:c.instructions+=3;goto B4b394b;
case 0x4b394c:c.instructions+=2;goto B4b394c;
case 0x4b394e:c.instructions+=1;goto B4b394e;
case 0x4b3953:goto L4b3953;
case 0x4b3959:c.instructions+=3;goto B4b3959;
case 0x4b395b:c.instructions+=2;goto B4b395b;
case 0x4b395c:c.instructions+=1;goto B4b395c;
case 0x4b3960:goto L4b3960;
case 0x4b3961:c.instructions+=4;goto B4b3961;
case 0x4b3963:c.instructions+=3;goto B4b3963;
case 0x4b3964:c.instructions+=2;goto B4b3964;
case 0x4b3969:c.instructions+=1;goto B4b3969;
case 0x4b396e:goto L4b396e;
case 0x4b3972:c.instructions+=2;goto B4b3972;
case 0x4b3978:c.instructions+=1;goto B4b3978;
case 0x4b397a:goto L4b397a;
case 0x4b397b:c.instructions+=1;goto B4b397b;
case 0x4b397d:goto L4b397d;
case 0x4b3982:c.instructions+=1;goto B4b3982;
case 0x4b3984:goto L4b3984;
case 0x4b398a:c.instructions+=1;goto B4b398a;
case 0x4b398c:goto L4b398c;
case 0x4b398d:c.instructions+=2;goto B4b398d;
case 0x4b3990:c.instructions+=1;goto B4b3990;
case 0x4b3992:goto L4b3992;
case 0x4b3994:goto L4b3994;
case 0x4b3995:c.instructions+=2;goto B4b3995;
case 0x4b399a:c.instructions+=1;goto B4b399a;
case 0x4b399f:goto L4b399f;
case 0x4b39a1:c.instructions+=3;goto B4b39a1;
case 0x4b39a2:c.instructions+=2;goto B4b39a2;
case 0x4b39a4:c.instructions+=1;goto B4b39a4;
case 0x4b39a7:goto L4b39a7;
case 0x4b39a9:c.instructions+=2;goto B4b39a9;
case 0x4b39ab:c.instructions+=1;goto B4b39ab;
case 0x4b39ae:goto L4b39ae;
case 0x4b39af:c.instructions+=2;goto B4b39af;
case 0x4b39b0:c.instructions+=1;goto B4b39b0;
case 0x4b39c0:goto L4b39c0;
case 0x4b39c1:c.instructions+=5;goto B4b39c1;
case 0x4b39c2:c.instructions+=4;goto B4b39c2;
case 0x4b39c4:c.instructions+=3;goto B4b39c4;
case 0x4b39c9:c.instructions+=2;goto B4b39c9;
case 0x4b39cb:c.instructions+=1;goto B4b39cb;
case 0x4b39d0:goto L4b39d0;
case 0x4b39d3:c.instructions+=2;goto B4b39d3;
case 0x4b39d5:c.instructions+=1;goto B4b39d5;
case 0x4b39d7:goto L4b39d7;
case 0x4b39d8:c.instructions+=1;goto B4b39d8;
case 0x4b39da:goto L4b39da;
case 0x4b39db:c.instructions+=1;goto B4b39db;
case 0x4b39dd:goto L4b39dd;
case 0x4b39e2:c.instructions+=1;goto B4b39e2;
case 0x4b39e4:goto L4b39e4;
case 0x4b39e9:c.instructions+=1;goto B4b39e9;
case 0x4b39eb:goto L4b39eb;
case 0x4b39f0:goto L4b39f0;
case 0x4b39f3:c.instructions+=3;goto B4b39f3;
case 0x4b39f8:c.instructions+=2;goto B4b39f8;
case 0x4b39f9:c.instructions+=1;goto B4b39f9;
case 0x4b39fe:goto L4b39fe;
case 0x4b3a01:c.instructions+=3;goto B4b3a01;
case 0x4b3a02:c.instructions+=2;goto B4b3a02;
case 0x4b3a03:c.instructions+=1;goto B4b3a03;
case 0x4b3a08:goto L4b3a08;
case 0x4b3a0b:c.instructions+=3;goto B4b3a0b;
case 0x4b3a0c:c.instructions+=2;goto B4b3a0c;
case 0x4b3a0d:c.instructions+=1;goto B4b3a0d;
case 0x4b3a10:goto L4b3a10;
case 0x4b3a11:c.instructions+=5;goto B4b3a11;
case 0x4b3a12:c.instructions+=4;goto B4b3a12;
case 0x4b3a16:c.instructions+=3;goto B4b3a16;
case 0x4b3a1c:c.instructions+=2;goto B4b3a1c;
case 0x4b3a1e:c.instructions+=1;goto B4b3a1e;
case 0x4b3a20:goto L4b3a20;
case 0x4b3a26:c.instructions+=1;goto B4b3a26;
case 0x4b3a28:goto L4b3a28;
case 0x4b3a2d:c.instructions+=1;goto B4b3a2d;
case 0x4b3a32:goto L4b3a32;
case 0x4b3a34:c.instructions+=5;goto B4b3a34;
case 0x4b3a36:c.instructions+=4;goto B4b3a36;
case 0x4b3a38:c.instructions+=3;goto B4b3a38;
case 0x4b3a3d:c.instructions+=2;goto B4b3a3d;
case 0x4b3a3e:c.instructions+=1;goto B4b3a3e;
case 0x4b3a43:goto L4b3a43;
case 0x4b3a45:c.instructions+=3;goto B4b3a45;
case 0x4b3a46:c.instructions+=2;goto B4b3a46;
case 0x4b3a48:c.instructions+=1;goto B4b3a48;
case 0x4b3a4b:goto L4b3a4b;
case 0x4b3a4d:c.instructions+=2;goto B4b3a4d;
case 0x4b3a4f:c.instructions+=1;goto B4b3a4f;
case 0x4b3a52:goto L4b3a52;
case 0x4b3a53:c.instructions+=2;goto B4b3a53;
case 0x4b3a54:c.instructions+=1;goto B4b3a54;
case 0x4b3a60:goto L4b3a60;
case 0x4b3a61:c.instructions+=3;goto B4b3a61;
case 0x4b3a63:c.instructions+=2;goto B4b3a63;
case 0x4b3a68:c.instructions+=1;goto B4b3a68;
case 0x4b3a6d:goto L4b3a6d;
case 0x4b3a6f:c.instructions+=1;goto B4b3a6f;
case 0x4b3a71:goto L4b3a71;
case 0x4b3a74:c.instructions+=3;goto B4b3a74;
case 0x4b3a79:c.instructions+=2;goto B4b3a79;
case 0x4b3a7a:c.instructions+=1;goto B4b3a7a;
case 0x4b3a7c:goto L4b3a7c;
case 0x4b3a7f:c.instructions+=2;goto B4b3a7f;
case 0x4b3a84:c.instructions+=1;goto B4b3a84;
case 0x4b3a85:goto L4b3a85;
case 0x4b3a8a:goto L4b3a8a;
case 0x4b3a8d:c.instructions+=4;goto B4b3a8d;
case 0x4b3a90:c.instructions+=3;goto B4b3a90;
case 0x4b3a95:c.instructions+=2;goto B4b3a95;
case 0x4b3a96:c.instructions+=1;goto B4b3a96;
case 0x4b3a9b:goto L4b3a9b;
case 0x4b3a9e:c.instructions+=2;goto B4b3a9e;
case 0x4b3a9f:c.instructions+=1;goto B4b3a9f;
case 0x4b3aa0:goto L4b3aa0;
case 0x4b3aa4:c.instructions+=13;goto B4b3aa4;
case 0x4b3aa8:c.instructions+=12;goto B4b3aa8;
case 0x4b3aa9:c.instructions+=11;goto B4b3aa9;
case 0x4b3aaa:c.instructions+=10;goto B4b3aaa;
case 0x4b3aae:c.instructions+=9;goto B4b3aae;
case 0x4b3ab0:c.instructions+=8;goto B4b3ab0;
case 0x4b3ab4:c.instructions+=7;goto B4b3ab4;
case 0x4b3ab5:c.instructions+=6;goto B4b3ab5;
case 0x4b3ab9:c.instructions+=5;goto B4b3ab9;
case 0x4b3aba:c.instructions+=4;goto B4b3aba;
case 0x4b3abb:c.instructions+=3;goto B4b3abb;
case 0x4b3abc:c.instructions+=2;goto B4b3abc;
case 0x4b3abe:c.instructions+=1;goto B4b3abe;
case 0x4b3ac3:goto L4b3ac3;
case 0x4b3ac9:c.instructions+=3;goto B4b3ac9;
case 0x4b3acb:c.instructions+=2;goto B4b3acb;
case 0x4b3acc:c.instructions+=1;goto B4b3acc;
case 0x4b3ad0:goto L4b3ad0;
case 0x4b3ad1:c.instructions+=4;goto B4b3ad1;
case 0x4b3ad3:c.instructions+=3;goto B4b3ad3;
case 0x4b3ad4:c.instructions+=2;goto B4b3ad4;
case 0x4b3ad9:c.instructions+=1;goto B4b3ad9;
case 0x4b3ade:goto L4b3ade;
case 0x4b3ae2:c.instructions+=2;goto B4b3ae2;
case 0x4b3ae8:c.instructions+=1;goto B4b3ae8;
case 0x4b3aea:goto L4b3aea;
case 0x4b3aeb:c.instructions+=1;goto B4b3aeb;
case 0x4b3aed:goto L4b3aed;
case 0x4b3af2:c.instructions+=1;goto B4b3af2;
case 0x4b3af4:goto L4b3af4;
case 0x4b3afa:c.instructions+=1;goto B4b3afa;
case 0x4b3afc:goto L4b3afc;
case 0x4b3afd:c.instructions+=2;goto B4b3afd;
case 0x4b3b00:c.instructions+=1;goto B4b3b00;
case 0x4b3b02:goto L4b3b02;
case 0x4b3b04:goto L4b3b04;
case 0x4b3b05:c.instructions+=2;goto B4b3b05;
case 0x4b3b0a:c.instructions+=1;goto B4b3b0a;
case 0x4b3b0f:goto L4b3b0f;
case 0x4b3b11:c.instructions+=3;goto B4b3b11;
case 0x4b3b12:c.instructions+=2;goto B4b3b12;
case 0x4b3b14:c.instructions+=1;goto B4b3b14;
case 0x4b3b17:goto L4b3b17;
case 0x4b3b19:c.instructions+=2;goto B4b3b19;
case 0x4b3b1b:c.instructions+=1;goto B4b3b1b;
case 0x4b3b1e:goto L4b3b1e;
case 0x4b3b1f:c.instructions+=2;goto B4b3b1f;
case 0x4b3b20:c.instructions+=1;goto B4b3b20;
case 0x4b3b30:goto L4b3b30;
case 0x4b3b31:c.instructions+=5;goto B4b3b31;
case 0x4b3b32:c.instructions+=4;goto B4b3b32;
case 0x4b3b34:c.instructions+=3;goto B4b3b34;
case 0x4b3b39:c.instructions+=2;goto B4b3b39;
case 0x4b3b3b:c.instructions+=1;goto B4b3b3b;
case 0x4b3b40:goto L4b3b40;
case 0x4b3b43:c.instructions+=1;goto B4b3b43;
case 0x4b3b45:goto L4b3b45;
case 0x4b3b4c:goto L4b3b4c;
case 0x4b3b51:c.instructions+=1;goto B4b3b51;
case 0x4b3b53:goto L4b3b53;
case 0x4b3b58:c.instructions+=1;goto B4b3b58;
case 0x4b3b5a:goto L4b3b5a;
case 0x4b3b5f:c.instructions+=1;goto B4b3b5f;
case 0x4b3b61:goto L4b3b61;
case 0x4b3b66:goto L4b3b66;
case 0x4b3b69:c.instructions+=3;goto B4b3b69;
case 0x4b3b6a:c.instructions+=2;goto B4b3b6a;
case 0x4b3b6b:c.instructions+=1;goto B4b3b6b;
case 0x4b3b70:goto L4b3b70;
case 0x4b3b73:c.instructions+=3;goto B4b3b73;
case 0x4b3b78:c.instructions+=2;goto B4b3b78;
case 0x4b3b79:c.instructions+=1;goto B4b3b79;
case 0x4b3b7e:goto L4b3b7e;
case 0x4b3b81:c.instructions+=3;goto B4b3b81;
case 0x4b3b82:c.instructions+=2;goto B4b3b82;
case 0x4b3b83:c.instructions+=1;goto B4b3b83;
case 0x4b3ba0:goto L4b3ba0;
case 0x4b3ba1:c.instructions+=4;goto B4b3ba1;
case 0x4b3ba3:c.instructions+=3;goto B4b3ba3;
case 0x4b3ba4:c.instructions+=2;goto B4b3ba4;
case 0x4b3ba9:c.instructions+=1;goto B4b3ba9;
case 0x4b3bae:goto L4b3bae;
case 0x4b3bb2:c.instructions+=2;goto B4b3bb2;
case 0x4b3bb8:c.instructions+=1;goto B4b3bb8;
case 0x4b3bba:goto L4b3bba;
case 0x4b3bbb:c.instructions+=1;goto B4b3bbb;
case 0x4b3bbd:goto L4b3bbd;
case 0x4b3bc2:c.instructions+=1;goto B4b3bc2;
case 0x4b3bc4:goto L4b3bc4;
case 0x4b3bca:c.instructions+=1;goto B4b3bca;
case 0x4b3bcc:goto L4b3bcc;
case 0x4b3bcd:c.instructions+=2;goto B4b3bcd;
case 0x4b3bd0:c.instructions+=1;goto B4b3bd0;
case 0x4b3bd2:goto L4b3bd2;
case 0x4b3bd4:goto L4b3bd4;
case 0x4b3bd5:c.instructions+=2;goto B4b3bd5;
case 0x4b3bda:c.instructions+=1;goto B4b3bda;
case 0x4b3bdf:goto L4b3bdf;
case 0x4b3be1:c.instructions+=3;goto B4b3be1;
case 0x4b3be2:c.instructions+=2;goto B4b3be2;
case 0x4b3be4:c.instructions+=1;goto B4b3be4;
case 0x4b3be7:goto L4b3be7;
case 0x4b3be9:c.instructions+=2;goto B4b3be9;
case 0x4b3beb:c.instructions+=1;goto B4b3beb;
case 0x4b3bee:goto L4b3bee;
case 0x4b3bef:c.instructions+=2;goto B4b3bef;
case 0x4b3bf0:c.instructions+=1;goto B4b3bf0;
case 0x4b3c00:goto L4b3c00;
case 0x4b3c01:c.instructions+=5;goto B4b3c01;
case 0x4b3c03:c.instructions+=4;goto B4b3c03;
case 0x4b3c06:c.instructions+=3;goto B4b3c06;
case 0x4b3c0b:c.instructions+=2;goto B4b3c0b;
case 0x4b3c0c:c.instructions+=1;goto B4b3c0c;
case 0x4b3c11:goto L4b3c11;
case 0x4b3c14:c.instructions+=2;goto B4b3c14;
case 0x4b3c19:c.instructions+=1;goto B4b3c19;
case 0x4b3c1e:goto L4b3c1e;
case 0x4b3c21:c.instructions+=2;goto B4b3c21;
case 0x4b3c24:c.instructions+=1;goto B4b3c24;
case 0x4b3c26:goto L4b3c26;
case 0x4b3c2b:c.instructions+=1;goto B4b3c2b;
case 0x4b3c30:goto L4b3c30;
case 0x4b3c31:c.instructions+=2;goto B4b3c31;
case 0x4b3c32:c.instructions+=1;goto B4b3c32;
case 0x4b3c37:goto L4b3c37;
case 0x4b3c3a:c.instructions+=2;goto B4b3c3a;
case 0x4b3c3b:c.instructions+=1;goto B4b3c3b;
case 0x4b3c3c:goto L4b3c3c;
case 0x4b3c41:c.instructions+=1;goto B4b3c41;
case 0x4b3c46:goto L4b3c46;
case 0x4b3c49:c.instructions+=4;goto B4b3c49;
case 0x4b3c4a:c.instructions+=3;goto B4b3c4a;
case 0x4b3c4f:c.instructions+=2;goto B4b3c4f;
case 0x4b3c50:c.instructions+=1;goto B4b3c50;
case 0x4b3c55:goto L4b3c55;
case 0x4b3c58:c.instructions+=2;goto B4b3c58;
case 0x4b3c59:c.instructions+=1;goto B4b3c59;
case 0x4b3c60:goto L4b3c60;
case 0x4b3c61:c.instructions+=4;goto B4b3c61;
case 0x4b3c63:c.instructions+=3;goto B4b3c63;
case 0x4b3c64:c.instructions+=2;goto B4b3c64;
case 0x4b3c69:c.instructions+=1;goto B4b3c69;
case 0x4b3c6e:goto L4b3c6e;
case 0x4b3c72:c.instructions+=2;goto B4b3c72;
case 0x4b3c78:c.instructions+=1;goto B4b3c78;
case 0x4b3c7a:goto L4b3c7a;
case 0x4b3c7b:c.instructions+=1;goto B4b3c7b;
case 0x4b3c7d:goto L4b3c7d;
case 0x4b3c82:c.instructions+=1;goto B4b3c82;
case 0x4b3c84:goto L4b3c84;
case 0x4b3c8a:c.instructions+=1;goto B4b3c8a;
case 0x4b3c8c:goto L4b3c8c;
case 0x4b3c8d:c.instructions+=2;goto B4b3c8d;
case 0x4b3c90:c.instructions+=1;goto B4b3c90;
case 0x4b3c92:goto L4b3c92;
case 0x4b3c94:goto L4b3c94;
case 0x4b3c95:c.instructions+=2;goto B4b3c95;
case 0x4b3c9a:c.instructions+=1;goto B4b3c9a;
case 0x4b3c9f:goto L4b3c9f;
case 0x4b3ca1:c.instructions+=3;goto B4b3ca1;
case 0x4b3ca2:c.instructions+=2;goto B4b3ca2;
case 0x4b3ca4:c.instructions+=1;goto B4b3ca4;
case 0x4b3ca7:goto L4b3ca7;
case 0x4b3ca9:c.instructions+=2;goto B4b3ca9;
case 0x4b3cab:c.instructions+=1;goto B4b3cab;
case 0x4b3cae:goto L4b3cae;
case 0x4b3caf:c.instructions+=2;goto B4b3caf;
case 0x4b3cb0:c.instructions+=1;goto B4b3cb0;
case 0x4b3cc0:goto L4b3cc0;
case 0x4b3cc1:c.instructions+=5;goto B4b3cc1;
case 0x4b3cc3:c.instructions+=4;goto B4b3cc3;
case 0x4b3cc6:c.instructions+=3;goto B4b3cc6;
case 0x4b3ccb:c.instructions+=2;goto B4b3ccb;
case 0x4b3ccc:c.instructions+=1;goto B4b3ccc;
case 0x4b3cd1:goto L4b3cd1;
case 0x4b3cd4:c.instructions+=2;goto B4b3cd4;
case 0x4b3cd9:c.instructions+=1;goto B4b3cd9;
case 0x4b3cde:goto L4b3cde;
case 0x4b3ce0:c.instructions+=2;goto B4b3ce0;
case 0x4b3ce3:c.instructions+=1;goto B4b3ce3;
case 0x4b3ce5:goto L4b3ce5;
case 0x4b3cea:c.instructions+=1;goto B4b3cea;
case 0x4b3cef:goto L4b3cef;
case 0x4b3cf0:c.instructions+=2;goto B4b3cf0;
case 0x4b3cf1:c.instructions+=1;goto B4b3cf1;
case 0x4b3cf6:goto L4b3cf6;
case 0x4b3cf9:c.instructions+=2;goto B4b3cf9;
case 0x4b3cfa:c.instructions+=1;goto B4b3cfa;
case 0x4b3cfb:goto L4b3cfb;
case 0x4b3d00:c.instructions+=1;goto B4b3d00;
case 0x4b3d05:goto L4b3d05;
case 0x4b3d08:c.instructions+=3;goto B4b3d08;
case 0x4b3d09:c.instructions+=2;goto B4b3d09;
case 0x4b3d0e:c.instructions+=1;goto B4b3d0e;
case 0x4b3d13:goto L4b3d13;
case 0x4b3d16:c.instructions+=4;goto B4b3d16;
case 0x4b3d17:c.instructions+=3;goto B4b3d17;
case 0x4b3d1c:c.instructions+=2;goto B4b3d1c;
case 0x4b3d1d:c.instructions+=1;goto B4b3d1d;
case 0x4b3d22:goto L4b3d22;
case 0x4b3d25:c.instructions+=2;goto B4b3d25;
case 0x4b3d26:c.instructions+=1;goto B4b3d26;
case 0x4b3d30:goto L4b3d30;
case 0x4b3d34:c.instructions+=13;goto B4b3d34;
case 0x4b3d38:c.instructions+=12;goto B4b3d38;
case 0x4b3d39:c.instructions+=11;goto B4b3d39;
case 0x4b3d3a:c.instructions+=10;goto B4b3d3a;
case 0x4b3d3e:c.instructions+=9;goto B4b3d3e;
case 0x4b3d40:c.instructions+=8;goto B4b3d40;
case 0x4b3d44:c.instructions+=7;goto B4b3d44;
case 0x4b3d45:c.instructions+=6;goto B4b3d45;
case 0x4b3d49:c.instructions+=5;goto B4b3d49;
case 0x4b3d4a:c.instructions+=4;goto B4b3d4a;
case 0x4b3d4b:c.instructions+=3;goto B4b3d4b;
case 0x4b3d4c:c.instructions+=2;goto B4b3d4c;
case 0x4b3d4e:c.instructions+=1;goto B4b3d4e;
case 0x4b3d53:goto L4b3d53;
case 0x4b3d59:c.instructions+=3;goto B4b3d59;
case 0x4b3d5b:c.instructions+=2;goto B4b3d5b;
case 0x4b3d5c:c.instructions+=1;goto B4b3d5c;
case 0x4b3d60:goto L4b3d60;
case 0x4b3d61:c.instructions+=5;goto B4b3d61;
case 0x4b3d62:c.instructions+=4;goto B4b3d62;
case 0x4b3d64:c.instructions+=3;goto B4b3d64;
case 0x4b3d65:c.instructions+=2;goto B4b3d65;
case 0x4b3d6a:c.instructions+=1;goto B4b3d6a;
case 0x4b3d6f:goto L4b3d6f;
case 0x4b3d73:c.instructions+=3;goto B4b3d73;
case 0x4b3d79:c.instructions+=2;goto B4b3d79;
case 0x4b3d7d:c.instructions+=1;goto B4b3d7d;
case 0x4b3d7f:goto L4b3d7f;
case 0x4b3d80:c.instructions+=2;goto B4b3d80;
case 0x4b3d83:c.instructions+=1;goto B4b3d83;
case 0x4b3d85:goto L4b3d85;
case 0x4b3d8a:c.instructions+=1;goto B4b3d8a;
case 0x4b3d8c:goto L4b3d8c;
case 0x4b3d92:c.instructions+=1;goto B4b3d92;
case 0x4b3d94:goto L4b3d94;
case 0x4b3d95:c.instructions+=2;goto B4b3d95;
case 0x4b3d98:c.instructions+=1;goto B4b3d98;
case 0x4b3d9a:goto L4b3d9a;
case 0x4b3d9f:goto L4b3d9f;
case 0x4b3da4:c.instructions+=1;goto B4b3da4;
case 0x4b3da9:goto L4b3da9;
case 0x4b3dad:c.instructions+=4;goto B4b3dad;
case 0x4b3daf:c.instructions+=3;goto B4b3daf;
case 0x4b3db0:c.instructions+=2;goto B4b3db0;
case 0x4b3db2:c.instructions+=1;goto B4b3db2;
case 0x4b3db5:goto L4b3db5;
case 0x4b3db7:c.instructions+=2;goto B4b3db7;
case 0x4b3db9:c.instructions+=1;goto B4b3db9;
case 0x4b3dbc:goto L4b3dbc;
case 0x4b3dbd:c.instructions+=3;goto B4b3dbd;
case 0x4b3dbe:c.instructions+=2;goto B4b3dbe;
case 0x4b3dbf:c.instructions+=1;goto B4b3dbf;
case 0x4b3dd0:goto L4b3dd0;
case 0x4b3dd1:c.instructions+=5;goto B4b3dd1;
case 0x4b3dd3:c.instructions+=4;goto B4b3dd3;
case 0x4b3dd4:c.instructions+=3;goto B4b3dd4;
case 0x4b3dd7:c.instructions+=2;goto B4b3dd7;
case 0x4b3ddc:c.instructions+=1;goto B4b3ddc;
case 0x4b3de1:goto L4b3de1;
case 0x4b3de5:c.instructions+=4;goto B4b3de5;
case 0x4b3de6:c.instructions+=3;goto B4b3de6;
case 0x4b3deb:c.instructions+=2;goto B4b3deb;
case 0x4b3dec:c.instructions+=1;goto B4b3dec;
case 0x4b3df1:goto L4b3df1;
case 0x4b3df4:c.instructions+=3;goto B4b3df4;
case 0x4b3df9:c.instructions+=2;goto B4b3df9;
case 0x4b3dfa:c.instructions+=1;goto B4b3dfa;
case 0x4b3dff:goto L4b3dff;
case 0x4b3e02:c.instructions+=2;goto B4b3e02;
case 0x4b3e07:c.instructions+=1;goto B4b3e07;
case 0x4b3e0c:goto L4b3e0c;
case 0x4b3e0f:c.instructions+=3;goto B4b3e0f;
case 0x4b3e11:c.instructions+=2;goto B4b3e11;
case 0x4b3e14:c.instructions+=1;goto B4b3e14;
case 0x4b3e16:goto L4b3e16;
case 0x4b3e18:c.instructions+=1;goto B4b3e18;
case 0x4b3e1a:goto L4b3e1a;
case 0x4b3e1c:c.instructions+=4;goto B4b3e1c;
case 0x4b3e1d:c.instructions+=3;goto B4b3e1d;
case 0x4b3e1f:c.instructions+=2;goto B4b3e1f;
case 0x4b3e20:c.instructions+=1;goto B4b3e20;
case 0x4b3e23:goto L4b3e23;
case 0x4b3e25:c.instructions+=1;goto B4b3e25;
case 0x4b3e27:goto L4b3e27;
case 0x4b3e29:c.instructions+=4;goto B4b3e29;
case 0x4b3e2a:c.instructions+=3;goto B4b3e2a;
case 0x4b3e2c:c.instructions+=2;goto B4b3e2c;
case 0x4b3e2d:c.instructions+=1;goto B4b3e2d;
case 0x4b3e30:goto L4b3e30;
case 0x4b3e31:c.instructions+=2;goto B4b3e31;
case 0x4b3e32:c.instructions+=1;goto B4b3e32;
case 0x4b3e40:goto L4b3e40;
case 0x4b3e44:c.instructions+=13;goto B4b3e44;
case 0x4b3e48:c.instructions+=12;goto B4b3e48;
case 0x4b3e49:c.instructions+=11;goto B4b3e49;
case 0x4b3e4a:c.instructions+=10;goto B4b3e4a;
case 0x4b3e4e:c.instructions+=9;goto B4b3e4e;
case 0x4b3e50:c.instructions+=8;goto B4b3e50;
case 0x4b3e54:c.instructions+=7;goto B4b3e54;
case 0x4b3e55:c.instructions+=6;goto B4b3e55;
case 0x4b3e59:c.instructions+=5;goto B4b3e59;
case 0x4b3e5a:c.instructions+=4;goto B4b3e5a;
case 0x4b3e5b:c.instructions+=3;goto B4b3e5b;
case 0x4b3e5c:c.instructions+=2;goto B4b3e5c;
case 0x4b3e5e:c.instructions+=1;goto B4b3e5e;
case 0x4b3e63:goto L4b3e63;
case 0x4b3e68:c.instructions+=6;goto B4b3e68;
case 0x4b3e6e:c.instructions+=5;goto B4b3e6e;
case 0x4b3e72:c.instructions+=4;goto B4b3e72;
case 0x4b3e77:c.instructions+=3;goto B4b3e77;
case 0x4b3e79:c.instructions+=2;goto B4b3e79;
case 0x4b3e7e:c.instructions+=1;goto B4b3e7e;
case 0x4b3e80:goto L4b3e80;
case 0x4b3e83:c.instructions+=1;goto B4b3e83;
case 0x4b3e85:goto L4b3e85;
case 0x4b3e88:c.instructions+=1;goto B4b3e88;
case 0x4b3e8a:goto L4b3e8a;
case 0x4b3e8d:c.instructions+=1;goto B4b3e8d;
case 0x4b3e8f:goto L4b3e8f;
case 0x4b3e92:c.instructions+=1;goto B4b3e92;
case 0x4b3e94:goto L4b3e94;
case 0x4b3e98:c.instructions+=1;goto B4b3e98;
case 0x4b3e9a:goto L4b3e9a;
case 0x4b3ea0:c.instructions+=1;goto B4b3ea0;
case 0x4b3ea2:goto L4b3ea2;
case 0x4b3ea6:goto L4b3ea6;
case 0x4b3eac:c.instructions+=2;goto B4b3eac;
case 0x4b3eb0:c.instructions+=1;goto B4b3eb0;
case 0x4b3eb2:goto L4b3eb2;
case 0x4b3eb7:c.instructions+=2;goto B4b3eb7;
case 0x4b3eb9:c.instructions+=1;goto B4b3eb9;
case 0x4b3ebb:goto L4b3ebb;
case 0x4b3ebe:c.instructions+=1;goto B4b3ebe;
case 0x4b3ec0:goto L4b3ec0;
case 0x4b3ec3:c.instructions+=1;goto B4b3ec3;
case 0x4b3ec5:goto L4b3ec5;
case 0x4b3ec8:c.instructions+=1;goto B4b3ec8;
case 0x4b3eca:goto L4b3eca;
case 0x4b3ecd:c.instructions+=1;goto B4b3ecd;
case 0x4b3ecf:goto L4b3ecf;
case 0x4b3ed3:c.instructions+=4;goto B4b3ed3;
case 0x4b3ed5:c.instructions+=3;goto B4b3ed5;
case 0x4b3edc:c.instructions+=2;goto B4b3edc;
case 0x4b3edd:c.instructions+=1;goto B4b3edd;
case 0x4b3ee0:goto L4b3ee0;
case 0x4b3ee6:c.instructions+=5;goto B4b3ee6;
case 0x4b3eea:c.instructions+=4;goto B4b3eea;
case 0x4b3eec:c.instructions+=3;goto B4b3eec;
case 0x4b3ef3:c.instructions+=2;goto B4b3ef3;
case 0x4b3ef4:c.instructions+=1;goto B4b3ef4;
case 0x4b3ef7:goto L4b3ef7;
case 0x4b3efa:c.instructions+=2;goto B4b3efa;
case 0x4b3efe:c.instructions+=1;goto B4b3efe;
case 0x4b3f05:goto L4b3f05;
case 0x4b3f07:c.instructions+=2;goto B4b3f07;
case 0x4b3f08:c.instructions+=1;goto B4b3f08;
case 0x4b3f10:goto L4b3f10;
case 0x4b3f17:c.instructions+=5;goto B4b3f17;
case 0x4b3f18:c.instructions+=4;goto B4b3f18;
case 0x4b3f1a:c.instructions+=3;goto B4b3f1a;
case 0x4b3f1e:c.instructions+=2;goto B4b3f1e;
case 0x4b3f24:c.instructions+=1;goto B4b3f24;
case 0x4b3f26:goto L4b3f26;
case 0x4b3f2a:c.instructions+=3;goto B4b3f2a;
case 0x4b3f2b:c.instructions+=2;goto B4b3f2b;
case 0x4b3f2d:c.instructions+=1;goto B4b3f2d;
case 0x4b3f2f:goto L4b3f2f;
case 0x4b3f34:c.instructions+=1;goto B4b3f34;
case 0x4b3f36:goto L4b3f36;
case 0x4b3f3c:c.instructions+=1;goto B4b3f3c;
case 0x4b3f3e:goto L4b3f3e;
case 0x4b3f3f:c.instructions+=2;goto B4b3f3f;
case 0x4b3f42:c.instructions+=1;goto B4b3f42;
case 0x4b3f44:goto L4b3f44;
case 0x4b3f48:goto L4b3f48;
case 0x4b3f4e:c.instructions+=4;goto B4b3f4e;
case 0x4b3f50:c.instructions+=3;goto B4b3f50;
case 0x4b3f51:c.instructions+=2;goto B4b3f51;
case 0x4b3f53:c.instructions+=1;goto B4b3f53;
case 0x4b3f56:goto L4b3f56;
case 0x4b3f58:c.instructions+=2;goto B4b3f58;
case 0x4b3f5a:c.instructions+=1;goto B4b3f5a;
case 0x4b3f5d:goto L4b3f5d;
case 0x4b3f5e:c.instructions+=1;goto B4b3f5e;
case 0x4b3f70:goto L4b3f70;
case 0x4b3f77:c.instructions+=7;goto B4b3f77;
case 0x4b3f78:c.instructions+=6;goto B4b3f78;
case 0x4b3f79:c.instructions+=5;goto B4b3f79;
case 0x4b3f7b:c.instructions+=4;goto B4b3f7b;
case 0x4b3f7e:c.instructions+=3;goto B4b3f7e;
case 0x4b3f83:c.instructions+=2;goto B4b3f83;
case 0x4b3f84:c.instructions+=1;goto B4b3f84;
case 0x4b3f89:goto L4b3f89;
case 0x4b3f8c:c.instructions+=3;goto B4b3f8c;
case 0x4b3f91:c.instructions+=2;goto B4b3f91;
case 0x4b3f92:c.instructions+=1;goto B4b3f92;
case 0x4b3f97:goto L4b3f97;
case 0x4b3f9a:c.instructions+=2;goto B4b3f9a;
case 0x4b3f9b:c.instructions+=1;goto B4b3f9b;
case 0x4b3fa0:goto L4b3fa0;
case 0x4b3fa4:c.instructions+=13;goto B4b3fa4;
case 0x4b3fa8:c.instructions+=12;goto B4b3fa8;
case 0x4b3fa9:c.instructions+=11;goto B4b3fa9;
case 0x4b3faa:c.instructions+=10;goto B4b3faa;
case 0x4b3fae:c.instructions+=9;goto B4b3fae;
case 0x4b3fb0:c.instructions+=8;goto B4b3fb0;
case 0x4b3fb4:c.instructions+=7;goto B4b3fb4;
case 0x4b3fb5:c.instructions+=6;goto B4b3fb5;
case 0x4b3fb9:c.instructions+=5;goto B4b3fb9;
case 0x4b3fba:c.instructions+=4;goto B4b3fba;
case 0x4b3fbb:c.instructions+=3;goto B4b3fbb;
case 0x4b3fbc:c.instructions+=2;goto B4b3fbc;
case 0x4b3fbe:c.instructions+=1;goto B4b3fbe;
case 0x4b3fc3:goto L4b3fc3;
case 0x4b3fc9:c.instructions+=3;goto B4b3fc9;
case 0x4b3fcb:c.instructions+=2;goto B4b3fcb;
case 0x4b3fcc:c.instructions+=1;goto B4b3fcc;
case 0x4b3fd0:goto L4b3fd0;
case 0x4b3fd1:c.instructions+=3;goto B4b3fd1;
case 0x4b3fd3:c.instructions+=2;goto B4b3fd3;
case 0x4b3fd8:c.instructions+=1;goto B4b3fd8;
case 0x4b3fdd:goto L4b3fdd;
case 0x4b3fe0:c.instructions+=2;goto B4b3fe0;
case 0x4b3fe2:c.instructions+=1;goto B4b3fe2;
case 0x4b3fe4:goto L4b3fe4;
case 0x4b3fe7:c.instructions+=3;goto B4b3fe7;
case 0x4b3fec:c.instructions+=2;goto B4b3fec;
case 0x4b3fed:c.instructions+=1;goto B4b3fed;
case 0x4b3fef:goto L4b3fef;
case 0x4b3ff2:c.instructions+=2;goto B4b3ff2;
case 0x4b3ff7:c.instructions+=1;goto B4b3ff7;
case 0x4b3ff8:goto L4b3ff8;
case 0x4b3ffd:goto L4b3ffd;
default:missing_instruction(c.pc);}
B4b3006:L4b3006:{c.instructions+=2;NFSU2_TR(0x4b3006);
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
B4b3009:{NFSU2_TR(0x4b3009);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3010:L4b3010:{c.instructions+=6;NFSU2_TR(0x4b3010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3011:{NFSU2_TR(0x4b3011);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3012:{NFSU2_TR(0x4b3012);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3016:{NFSU2_TR(0x4b3016);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b301c:{NFSU2_TR(0x4b301c);
__builtin_memmove((R+24),(R+4),4);
}
B4b301e:{NFSU2_TR(0x4b301e);
if(r1(R+518)){{goto L4b3028;}}
}
B4b3020:L4b3020:{c.instructions+=2;NFSU2_TR(0x4b3020);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3026:{NFSU2_TR(0x4b3026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3037;}}
}
B4b3028:L4b3028:{c.instructions+=4;NFSU2_TR(0x4b3028);
__builtin_memmove((R+0),gp(0x850098),1);
}
B4b302d:{NFSU2_TR(0x4b302d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b302f:{NFSU2_TR(0x4b302f);
__builtin_memmove((R+0),(R+518),1);
}
B4b3032:{NFSU2_TR(0x4b3032);
__builtin_memmove(gp(0x850098),(R+0),1);
}
B4b3037:L4b3037:{c.instructions+=4;NFSU2_TR(0x4b3037);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b303b:{NFSU2_TR(0x4b303b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b303c:{NFSU2_TR(0x4b303c);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3041:{NFSU2_TR(0x4b3041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3046ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b3046:L4b3046:{c.instructions+=5;NFSU2_TR(0x4b3046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3048:{NFSU2_TR(0x4b3048);
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
B4b304b:{NFSU2_TR(0x4b304b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b304c:{NFSU2_TR(0x4b304c);
__builtin_memmove((R+4),(R+24),4);
}
B4b304e:{NFSU2_TR(0x4b304e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3051ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3051:L4b3051:{c.instructions+=3;NFSU2_TR(0x4b3051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3053:{NFSU2_TR(0x4b3053);
__builtin_memmove((R+4),(R+24),4);
}
B4b3055:{NFSU2_TR(0x4b3055);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3058ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3058:L4b3058:{c.instructions+=3;NFSU2_TR(0x4b3058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3059:{NFSU2_TR(0x4b3059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b305a:{NFSU2_TR(0x4b305a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3060:L4b3060:{c.instructions+=4;NFSU2_TR(0x4b3060);
u8 U[8];
__builtin_memmove((U+0),gp(0x850088),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3067:{NFSU2_TR(0x4b3067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3068:{NFSU2_TR(0x4b3068);
__builtin_memmove((R+24),(R+4),4);
}
B4b306a:{NFSU2_TR(0x4b306a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b30c9;}}
}
B4b306c:L4b306c:{c.instructions+=5;NFSU2_TR(0x4b306c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b306f:{NFSU2_TR(0x4b306f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3071:{NFSU2_TR(0x4b3071);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3076:{NFSU2_TR(0x4b3076);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3077:{NFSU2_TR(0x4b3077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b307cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b307c:L4b307c:{c.instructions+=5;NFSU2_TR(0x4b307c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b307f:{NFSU2_TR(0x4b307f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3081:{NFSU2_TR(0x4b3081);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3086:{NFSU2_TR(0x4b3086);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3087:{NFSU2_TR(0x4b3087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b308cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4b308c:L4b308c:{c.instructions+=5;NFSU2_TR(0x4b308c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b308e:{NFSU2_TR(0x4b308e);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3093:{NFSU2_TR(0x4b3093);
u8 U[4];
w4(U+0,u32(0x7bcd6704ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3098:{NFSU2_TR(0x4b3098);
u8 U[4];
w4(U+0,u32(0x78f380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b309d:{NFSU2_TR(0x4b309d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b30a2ull));
TAIL_STATIC(0x537c00u,537);
}
B4b30a2:L4b30a2:{c.instructions+=5;NFSU2_TR(0x4b30a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30a4:{NFSU2_TR(0x4b30a4);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30a9:{NFSU2_TR(0x4b30a9);
u8 U[4];
w4(U+0,u32(0x7c51b6d7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30ae:{NFSU2_TR(0x4b30ae);
u8 U[4];
w4(U+0,u32(0x78f380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30b3:{NFSU2_TR(0x4b30b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b30b8ull));
TAIL_STATIC(0x537c00u,537);
}
B4b30b8:L4b30b8:{c.instructions+=5;NFSU2_TR(0x4b30b8);
s1(0x850098,u8(0x0ull));
}
B4b30bf:{NFSU2_TR(0x4b30bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b30c1:{NFSU2_TR(0x4b30c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b30c4:{NFSU2_TR(0x4b30c4);
__builtin_memmove((R+4),(R+24),4);
}
B4b30c6:{NFSU2_TR(0x4b30c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b30c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b30c9:L4b30c9:{c.instructions+=4;NFSU2_TR(0x4b30c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b30cc:{NFSU2_TR(0x4b30cc);
u8 U[4];
w4(U+0,u32(0xfd85bcb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30d1:{NFSU2_TR(0x4b30d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30d2:{NFSU2_TR(0x4b30d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b30d7ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b30d7:L4b30d7:{c.instructions+=8;NFSU2_TR(0x4b30d7);
__builtin_memmove((R+4),gp(0x850098),1);
}
B4b30dd:{NFSU2_TR(0x4b30dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b30e0:{NFSU2_TR(0x4b30e0);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B4b30e2:{NFSU2_TR(0x4b30e2);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b30e4:{NFSU2_TR(0x4b30e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x58b0443dull))));
}
B4b30ea:{NFSU2_TR(0x4b30ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xe1f1271ull))));
}
B4b30f0:{NFSU2_TR(0x4b30f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30f1:{NFSU2_TR(0x4b30f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b30f6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b30f6:L4b30f6:{c.instructions+=3;NFSU2_TR(0x4b30f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30f7:{NFSU2_TR(0x4b30f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b30f8:{NFSU2_TR(0x4b30f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b30fdull));
TAIL_STATIC(0x537be0u,537);
}
B4b30fd:L4b30fd:{c.instructions+=3;NFSU2_TR(0x4b30fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3100:{NFSU2_TR(0x4b3100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3101:{NFSU2_TR(0x4b3101);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3110:L4b3110:{c.instructions+=14;NFSU2_TR(0x4b3110);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3114:{NFSU2_TR(0x4b3114);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3118:{NFSU2_TR(0x4b3118);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3119:{NFSU2_TR(0x4b3119);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b311a:{NFSU2_TR(0x4b311a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b311e:{NFSU2_TR(0x4b311e);
__builtin_memmove((R+24),(R+4),4);
}
B4b3120:{NFSU2_TR(0x4b3120);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3124:{NFSU2_TR(0x4b3124);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3125:{NFSU2_TR(0x4b3125);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3129:{NFSU2_TR(0x4b3129);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b312a:{NFSU2_TR(0x4b312a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b312b:{NFSU2_TR(0x4b312b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b312c:{NFSU2_TR(0x4b312c);
__builtin_memmove((R+4),(R+24),4);
}
B4b312e:{NFSU2_TR(0x4b312e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3133ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b3133:L4b3133:{c.instructions+=4;NFSU2_TR(0x4b3133);
u8 U[4];
w4(U+0,u32(0x7910b8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3139:{NFSU2_TR(0x4b3139);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4b313e:{NFSU2_TR(0x4b313e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3141:{NFSU2_TR(0x4b3141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b314a;}}
}
B4b3143:L4b3143:{c.instructions+=2;NFSU2_TR(0x4b3143);
w4(R+4,u32(0x6ull));
}
B4b3148:{NFSU2_TR(0x4b3148);
{goto L4b3164;}
}
B4b314a:L4b314a:{c.instructions+=2;NFSU2_TR(0x4b314a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b314d:{NFSU2_TR(0x4b314d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b315f;}}
}
B4b314f:L4b314f:{c.instructions+=3;NFSU2_TR(0x4b314f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8500b8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1132ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4b3158:{NFSU2_TR(0x4b3158);
w4(R+4,u32(0x3ull));
}
B4b315d:{NFSU2_TR(0x4b315d);
if(r1(R+518)){{goto L4b3164;}}
}
B4b315f:L4b315f:{c.instructions+=1;NFSU2_TR(0x4b315f);
w4(R+4,u32(0x4ull));
}
B4b3164:L4b3164:{c.instructions+=8;NFSU2_TR(0x4b3164);
__builtin_memmove((R+0),gp(0x850098),1);
}
B4b3169:{NFSU2_TR(0x4b3169);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b316b:{NFSU2_TR(0x4b316b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4b316e:{NFSU2_TR(0x4b316e);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x2ull))));
}
B4b3170:{NFSU2_TR(0x4b3170);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4b3172:{NFSU2_TR(0x4b3172);
__builtin_memmove(gp(0x850080),(R+4),1);
}
B4b3178:{NFSU2_TR(0x4b3178);
__builtin_memmove(gp(0x850081),(R+0),1);
}
B4b317d:{NFSU2_TR(0x4b317d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4b3184;}}
}
B4b317f:L4b317f:{c.instructions+=1;NFSU2_TR(0x4b317f);
__builtin_memmove(gp(0x850080),(R+0),1);
}
B4b3184:L4b3184:{c.instructions+=3;NFSU2_TR(0x4b3184);
__builtin_memmove((R+0),(R+24),4);
}
B4b3186:{NFSU2_TR(0x4b3186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3187:{NFSU2_TR(0x4b3187);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3190:L4b3190:{c.instructions+=10;NFSU2_TR(0x4b3190);
__builtin_memmove((R+8),gp(0x850088),4);
}
B4b3196:{NFSU2_TR(0x4b3196);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3199:{NFSU2_TR(0x4b3199);
__builtin_memmove((R+0),(R+518),1);
}
B4b319c:{NFSU2_TR(0x4b319c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b319f:{NFSU2_TR(0x4b319f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b31a0:{NFSU2_TR(0x4b31a0);
__builtin_memmove((R+24),(R+4),4);
}
B4b31a2:{NFSU2_TR(0x4b31a2);
w4(R+4,u32(m1(0x850080)));
}
B4b31a9:{NFSU2_TR(0x4b31a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b31aa:{NFSU2_TR(0x4b31aa);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4b31ae:{NFSU2_TR(0x4b31ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b31bd;}}
}
B4b31b0:L4b31b0:{c.instructions+=2;NFSU2_TR(0x4b31b0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8500b8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x1132ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4b31b9:{NFSU2_TR(0x4b31b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b31bd;}}
}
B4b31bb:L4b31bb:{c.instructions+=1;NFSU2_TR(0x4b31bb);
w1(R+0,u8(0x3ull));
}
B4b31bd:L4b31bd:{c.instructions+=3;NFSU2_TR(0x4b31bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b31c1:{NFSU2_TR(0x4b31c1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b31c7:{NFSU2_TR(0x4b31c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b31da;}}
}
B4b31c9:L4b31c9:{c.instructions+=4;NFSU2_TR(0x4b31c9);
w4(R+8,u32(m1(0x850081)));
}
B4b31d0:{NFSU2_TR(0x4b31d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4b31d1:{NFSU2_TR(0x4b31d1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b31d3:{NFSU2_TR(0x4b31d3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b31f1;}}
}
B4b31d5:L4b31d5:{c.instructions+=2;NFSU2_TR(0x4b31d5);
w4(R+4,u32(r1(R+0)));
}
B4b31d8:{NFSU2_TR(0x4b31d8);
{goto L4b31f1;}
}
B4b31da:L4b31da:{c.instructions+=2;NFSU2_TR(0x4b31da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b31e0:{NFSU2_TR(0x4b31e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b31f1;}}
}
B4b31e2:L4b31e2:{c.instructions+=4;NFSU2_TR(0x4b31e2);
w4(R+0,u32(r1(R+0)));
}
B4b31e5:{NFSU2_TR(0x4b31e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4b31e6:{NFSU2_TR(0x4b31e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b31e8:{NFSU2_TR(0x4b31e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b31f1;}}
}
B4b31ea:L4b31ea:{c.instructions+=1;NFSU2_TR(0x4b31ea);
w4(R+4,u32(m1(0x850081)));
}
B4b31f1:L4b31f1:{c.instructions+=5;NFSU2_TR(0x4b31f1);
__builtin_memmove(gp(0x850080),(R+4),1);
}
B4b31f7:{NFSU2_TR(0x4b31f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b31fb:{NFSU2_TR(0x4b31fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b31fc:{NFSU2_TR(0x4b31fc);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3201:{NFSU2_TR(0x4b3201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3206ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b3206:L4b3206:{c.instructions+=5;NFSU2_TR(0x4b3206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3208:{NFSU2_TR(0x4b3208);
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
B4b320b:{NFSU2_TR(0x4b320b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b320c:{NFSU2_TR(0x4b320c);
__builtin_memmove((R+4),(R+24),4);
}
B4b320e:{NFSU2_TR(0x4b320e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3211ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3211:L4b3211:{c.instructions+=3;NFSU2_TR(0x4b3211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3213:{NFSU2_TR(0x4b3213);
__builtin_memmove((R+4),(R+24),4);
}
B4b3215:{NFSU2_TR(0x4b3215);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3218ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3218:L4b3218:{c.instructions+=3;NFSU2_TR(0x4b3218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3219:{NFSU2_TR(0x4b3219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b321a:{NFSU2_TR(0x4b321a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3220:L4b3220:{c.instructions+=10;NFSU2_TR(0x4b3220);
__builtin_memmove((R+0),gp(0x850098),1);
}
B4b3225:{NFSU2_TR(0x4b3225);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b3227:{NFSU2_TR(0x4b3227);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4b322a:{NFSU2_TR(0x4b322a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b322b:{NFSU2_TR(0x4b322b);
__builtin_memmove((R+24),(R+4),4);
}
B4b322d:{NFSU2_TR(0x4b322d);
__builtin_memmove((R+4),gp(0x850080),1);
}
B4b3233:{NFSU2_TR(0x4b3233);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x2ull))));
}
B4b3235:{NFSU2_TR(0x4b3235);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4b3237:{NFSU2_TR(0x4b3237);
__builtin_memmove(gp(0x850081),(R+0),1);
}
B4b323c:{NFSU2_TR(0x4b323c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4b3243;}}
}
B4b323e:L4b323e:{c.instructions+=1;NFSU2_TR(0x4b323e);
__builtin_memmove(gp(0x850080),(R+0),1);
}
B4b3243:L4b3243:{c.instructions+=4;NFSU2_TR(0x4b3243);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3246:{NFSU2_TR(0x4b3246);
u8 U[4];
w4(U+0,u32(0xa40967b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b324b:{NFSU2_TR(0x4b324b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b324c:{NFSU2_TR(0x4b324c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3251ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3251:L4b3251:{c.instructions+=6;NFSU2_TR(0x4b3251);
w4(R+4,u32(m1(0x850080)));
}
B4b3258:{NFSU2_TR(0x4b3258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b325b:{NFSU2_TR(0x4b325b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b325c:{NFSU2_TR(0x4b325c);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3261:{NFSU2_TR(0x4b3261);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3262:{NFSU2_TR(0x4b3262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3267ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3267:L4b3267:{c.instructions+=3;NFSU2_TR(0x4b3267);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b326a:{NFSU2_TR(0x4b326a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b326b:{NFSU2_TR(0x4b326b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3270:L4b3270:{c.instructions+=6;NFSU2_TR(0x4b3270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3271:{NFSU2_TR(0x4b3271);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3272:{NFSU2_TR(0x4b3272);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3276:{NFSU2_TR(0x4b3276);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b327c:{NFSU2_TR(0x4b327c);
__builtin_memmove((R+24),(R+4),4);
}
B4b327e:{NFSU2_TR(0x4b327e);
if(r1(R+518)){{goto L4b3288;}}
}
B4b3280:L4b3280:{c.instructions+=2;NFSU2_TR(0x4b3280);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3286:{NFSU2_TR(0x4b3286);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3297;}}
}
B4b3288:L4b3288:{c.instructions+=4;NFSU2_TR(0x4b3288);
__builtin_memmove((R+0),gp(0x85009a),1);
}
B4b328d:{NFSU2_TR(0x4b328d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b328f:{NFSU2_TR(0x4b328f);
__builtin_memmove((R+0),(R+518),1);
}
B4b3292:{NFSU2_TR(0x4b3292);
__builtin_memmove(gp(0x85009a),(R+0),1);
}
B4b3297:L4b3297:{c.instructions+=4;NFSU2_TR(0x4b3297);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b329b:{NFSU2_TR(0x4b329b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b329c:{NFSU2_TR(0x4b329c);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32a1:{NFSU2_TR(0x4b32a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b32a6ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b32a6:L4b32a6:{c.instructions+=5;NFSU2_TR(0x4b32a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b32a8:{NFSU2_TR(0x4b32a8);
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
B4b32ab:{NFSU2_TR(0x4b32ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32ac:{NFSU2_TR(0x4b32ac);
__builtin_memmove((R+4),(R+24),4);
}
B4b32ae:{NFSU2_TR(0x4b32ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b32b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b32b1:L4b32b1:{c.instructions+=3;NFSU2_TR(0x4b32b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b32b3:{NFSU2_TR(0x4b32b3);
__builtin_memmove((R+4),(R+24),4);
}
B4b32b5:{NFSU2_TR(0x4b32b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b32b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b32b8:L4b32b8:{c.instructions+=3;NFSU2_TR(0x4b32b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b32b9:{NFSU2_TR(0x4b32b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b32ba:{NFSU2_TR(0x4b32ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b32c0:L4b32c0:{c.instructions+=11;NFSU2_TR(0x4b32c0);
__builtin_memmove((R+0),gp(0x85009a),1);
}
B4b32c5:{NFSU2_TR(0x4b32c5);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b32c7:{NFSU2_TR(0x4b32c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32c8:{NFSU2_TR(0x4b32c8);
__builtin_memmove((R+24),(R+4),4);
}
B4b32ca:{NFSU2_TR(0x4b32ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b32cd:{NFSU2_TR(0x4b32cd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b32cf:{NFSU2_TR(0x4b32cf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf154ull))));
}
B4b32d4:{NFSU2_TR(0x4b32d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x61cull))));
}
B4b32d9:{NFSU2_TR(0x4b32d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32da:{NFSU2_TR(0x4b32da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32db:{NFSU2_TR(0x4b32db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b32e0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b32e0:L4b32e0:{c.instructions+=4;NFSU2_TR(0x4b32e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b32e3:{NFSU2_TR(0x4b32e3);
u8 U[4];
w4(U+0,u32(0x7712e575ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32e8:{NFSU2_TR(0x4b32e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b32e9:{NFSU2_TR(0x4b32e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b32eeull));
TAIL_STATIC(0x50c900u,50c);
}
B4b32ee:L4b32ee:{c.instructions+=3;NFSU2_TR(0x4b32ee);
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
B4b32f1:{NFSU2_TR(0x4b32f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b32f2:{NFSU2_TR(0x4b32f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3300:L4b3300:{c.instructions+=6;NFSU2_TR(0x4b3300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3301:{NFSU2_TR(0x4b3301);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3302:{NFSU2_TR(0x4b3302);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3306:{NFSU2_TR(0x4b3306);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b330c:{NFSU2_TR(0x4b330c);
__builtin_memmove((R+24),(R+4),4);
}
B4b330e:{NFSU2_TR(0x4b330e);
if(r1(R+518)){{goto L4b3318;}}
}
B4b3310:L4b3310:{c.instructions+=2;NFSU2_TR(0x4b3310);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3316:{NFSU2_TR(0x4b3316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3327;}}
}
B4b3318:L4b3318:{c.instructions+=4;NFSU2_TR(0x4b3318);
__builtin_memmove((R+0),gp(0x85008c),1);
}
B4b331d:{NFSU2_TR(0x4b331d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b331f:{NFSU2_TR(0x4b331f);
__builtin_memmove((R+0),(R+518),1);
}
B4b3322:{NFSU2_TR(0x4b3322);
__builtin_memmove(gp(0x85008c),(R+0),1);
}
B4b3327:L4b3327:{c.instructions+=4;NFSU2_TR(0x4b3327);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b332b:{NFSU2_TR(0x4b332b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b332c:{NFSU2_TR(0x4b332c);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3331:{NFSU2_TR(0x4b3331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3336ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b3336:L4b3336:{c.instructions+=5;NFSU2_TR(0x4b3336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3338:{NFSU2_TR(0x4b3338);
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
B4b333b:{NFSU2_TR(0x4b333b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b333c:{NFSU2_TR(0x4b333c);
__builtin_memmove((R+4),(R+24),4);
}
B4b333e:{NFSU2_TR(0x4b333e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3341ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3341:L4b3341:{c.instructions+=3;NFSU2_TR(0x4b3341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3343:{NFSU2_TR(0x4b3343);
__builtin_memmove((R+4),(R+24),4);
}
B4b3345:{NFSU2_TR(0x4b3345);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3348ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3348:L4b3348:{c.instructions+=3;NFSU2_TR(0x4b3348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3349:{NFSU2_TR(0x4b3349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b334a:{NFSU2_TR(0x4b334a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3350:L4b3350:{c.instructions+=11;NFSU2_TR(0x4b3350);
__builtin_memmove((R+0),gp(0x85008c),1);
}
B4b3355:{NFSU2_TR(0x4b3355);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b3357:{NFSU2_TR(0x4b3357);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3358:{NFSU2_TR(0x4b3358);
__builtin_memmove((R+24),(R+4),4);
}
B4b335a:{NFSU2_TR(0x4b335a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b335d:{NFSU2_TR(0x4b335d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b335f:{NFSU2_TR(0x4b335f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4d2c2ull))));
}
B4b3364:{NFSU2_TR(0x4b3364);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfabfc6dcull))));
}
B4b3369:{NFSU2_TR(0x4b3369);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b336a:{NFSU2_TR(0x4b336a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b336b:{NFSU2_TR(0x4b336b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3370ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3370:L4b3370:{c.instructions+=4;NFSU2_TR(0x4b3370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3373:{NFSU2_TR(0x4b3373);
u8 U[4];
w4(U+0,u32(0x96a1e80full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3378:{NFSU2_TR(0x4b3378);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3379:{NFSU2_TR(0x4b3379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b337eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b337e:L4b337e:{c.instructions+=3;NFSU2_TR(0x4b337e);
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
B4b3381:{NFSU2_TR(0x4b3381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3382:{NFSU2_TR(0x4b3382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3390:L4b3390:{c.instructions+=5;NFSU2_TR(0x4b3390);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3394:{NFSU2_TR(0x4b3394);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b3399:{NFSU2_TR(0x4b3399);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b339a:{NFSU2_TR(0x4b339a);
__builtin_memmove((R+24),(R+4),4);
}
B4b339c:{NFSU2_TR(0x4b339c);
if(r1(R+518)){{goto L4b33a5;}}
}
B4b339e:L4b339e:{c.instructions+=2;NFSU2_TR(0x4b339e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b33a3:{NFSU2_TR(0x4b33a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b33b6;}}
}
B4b33a5:L4b33a5:{c.instructions+=4;NFSU2_TR(0x4b33a5);
__builtin_memmove((R+4),gp(0x850099),1);
}
B4b33ab:{NFSU2_TR(0x4b33ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4b33ad:{NFSU2_TR(0x4b33ad);
__builtin_memmove((R+4),(R+518),1);
}
B4b33b0:{NFSU2_TR(0x4b33b0);
__builtin_memmove(gp(0x850099),(R+4),1);
}
B4b33b6:L4b33b6:{c.instructions+=4;NFSU2_TR(0x4b33b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b33b8:{NFSU2_TR(0x4b33b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b33b9:{NFSU2_TR(0x4b33b9);
__builtin_memmove((R+4),(R+24),4);
}
B4b33bb:{NFSU2_TR(0x4b33bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b33beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b33be:L4b33be:{c.instructions+=3;NFSU2_TR(0x4b33be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b33c0:{NFSU2_TR(0x4b33c0);
__builtin_memmove((R+4),(R+24),4);
}
B4b33c2:{NFSU2_TR(0x4b33c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b33c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b33c5:L4b33c5:{c.instructions+=2;NFSU2_TR(0x4b33c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b33c6:{NFSU2_TR(0x4b33c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b33d0:L4b33d0:{c.instructions+=11;NFSU2_TR(0x4b33d0);
__builtin_memmove((R+0),gp(0x850099),1);
}
B4b33d5:{NFSU2_TR(0x4b33d5);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b33d7:{NFSU2_TR(0x4b33d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b33d8:{NFSU2_TR(0x4b33d8);
__builtin_memmove((R+24),(R+4),4);
}
B4b33da:{NFSU2_TR(0x4b33da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b33dd:{NFSU2_TR(0x4b33dd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b33df:{NFSU2_TR(0x4b33df);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf154ull))));
}
B4b33e4:{NFSU2_TR(0x4b33e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x61cull))));
}
B4b33e9:{NFSU2_TR(0x4b33e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b33ea:{NFSU2_TR(0x4b33ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b33eb:{NFSU2_TR(0x4b33eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b33f0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b33f0:L4b33f0:{c.instructions+=4;NFSU2_TR(0x4b33f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b33f3:{NFSU2_TR(0x4b33f3);
u8 U[4];
w4(U+0,u32(0xb82a976eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b33f8:{NFSU2_TR(0x4b33f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b33f9:{NFSU2_TR(0x4b33f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b33feull));
TAIL_STATIC(0x50c900u,50c);
}
B4b33fe:L4b33fe:{c.instructions+=3;NFSU2_TR(0x4b33fe);
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
B4b3401:{NFSU2_TR(0x4b3401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3402:{NFSU2_TR(0x4b3402);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3410:L4b3410:{c.instructions+=5;NFSU2_TR(0x4b3410);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3414:{NFSU2_TR(0x4b3414);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b3419:{NFSU2_TR(0x4b3419);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b341a:{NFSU2_TR(0x4b341a);
__builtin_memmove((R+24),(R+4),4);
}
B4b341c:{NFSU2_TR(0x4b341c);
if(r1(R+518)){{goto L4b3425;}}
}
B4b341e:L4b341e:{c.instructions+=2;NFSU2_TR(0x4b341e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b3423:{NFSU2_TR(0x4b3423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3434;}}
}
B4b3425:L4b3425:{c.instructions+=3;NFSU2_TR(0x4b3425);
__builtin_memmove((R+4),gp(0x8500c8),1);
}
B4b342b:{NFSU2_TR(0x4b342b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b342d:{NFSU2_TR(0x4b342d);
__builtin_memmove(gp(0x8500c8),(R+518),1);
}
B4b3434:L4b3434:{c.instructions+=3;NFSU2_TR(0x4b3434);
__builtin_memmove((R+4),gp(0x8500c8),1);
}
B4b343a:{NFSU2_TR(0x4b343a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4b343c:{NFSU2_TR(0x4b343c);
if(r1(R+518)){{goto L4b3445;}}
}
B4b343e:L4b343e:{c.instructions+=1;NFSU2_TR(0x4b343e);
s1(0x85009b,u8(0x0ull));
}
B4b3445:L4b3445:{c.instructions+=4;NFSU2_TR(0x4b3445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3447:{NFSU2_TR(0x4b3447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3448:{NFSU2_TR(0x4b3448);
__builtin_memmove((R+4),(R+24),4);
}
B4b344a:{NFSU2_TR(0x4b344a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b344dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b344d:L4b344d:{c.instructions+=3;NFSU2_TR(0x4b344d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b344f:{NFSU2_TR(0x4b344f);
__builtin_memmove((R+4),(R+24),4);
}
B4b3451:{NFSU2_TR(0x4b3451);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3454ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3454:L4b3454:{c.instructions+=2;NFSU2_TR(0x4b3454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3455:{NFSU2_TR(0x4b3455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3460:L4b3460:{c.instructions+=11;NFSU2_TR(0x4b3460);
__builtin_memmove((R+0),gp(0x8500c8),1);
}
B4b3465:{NFSU2_TR(0x4b3465);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b3467:{NFSU2_TR(0x4b3467);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3468:{NFSU2_TR(0x4b3468);
__builtin_memmove((R+24),(R+4),4);
}
B4b346a:{NFSU2_TR(0x4b346a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b346d:{NFSU2_TR(0x4b346d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b346f:{NFSU2_TR(0x4b346f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf154ull))));
}
B4b3474:{NFSU2_TR(0x4b3474);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x61cull))));
}
B4b3479:{NFSU2_TR(0x4b3479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b347a:{NFSU2_TR(0x4b347a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b347b:{NFSU2_TR(0x4b347b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3480ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3480:L4b3480:{c.instructions+=4;NFSU2_TR(0x4b3480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3483:{NFSU2_TR(0x4b3483);
u8 U[4];
w4(U+0,u32(0x95684a90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3488:{NFSU2_TR(0x4b3488);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3489:{NFSU2_TR(0x4b3489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b348eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b348e:L4b348e:{c.instructions+=3;NFSU2_TR(0x4b348e);
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
B4b3491:{NFSU2_TR(0x4b3491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3492:{NFSU2_TR(0x4b3492);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b34a0:L4b34a0:{c.instructions+=6;NFSU2_TR(0x4b34a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b34a1:{NFSU2_TR(0x4b34a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b34a2:{NFSU2_TR(0x4b34a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b34a6:{NFSU2_TR(0x4b34a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b34ac:{NFSU2_TR(0x4b34ac);
__builtin_memmove((R+24),(R+4),4);
}
B4b34ae:{NFSU2_TR(0x4b34ae);
if(r1(R+518)){{goto L4b34b8;}}
}
B4b34b0:L4b34b0:{c.instructions+=2;NFSU2_TR(0x4b34b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b34b6:{NFSU2_TR(0x4b34b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b34c7;}}
}
B4b34b8:L4b34b8:{c.instructions+=4;NFSU2_TR(0x4b34b8);
__builtin_memmove((R+0),gp(0x85009b),1);
}
B4b34bd:{NFSU2_TR(0x4b34bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b34bf:{NFSU2_TR(0x4b34bf);
__builtin_memmove((R+0),(R+518),1);
}
B4b34c2:{NFSU2_TR(0x4b34c2);
__builtin_memmove(gp(0x85009b),(R+0),1);
}
B4b34c7:L4b34c7:{c.instructions+=4;NFSU2_TR(0x4b34c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b34cb:{NFSU2_TR(0x4b34cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b34cc:{NFSU2_TR(0x4b34cc);
u8 U[4];
w4(U+0,u32(0x92b703b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b34d1:{NFSU2_TR(0x4b34d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b34d6ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4b34d6:L4b34d6:{c.instructions+=5;NFSU2_TR(0x4b34d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b34d8:{NFSU2_TR(0x4b34d8);
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
B4b34db:{NFSU2_TR(0x4b34db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b34dc:{NFSU2_TR(0x4b34dc);
__builtin_memmove((R+4),(R+24),4);
}
B4b34de:{NFSU2_TR(0x4b34de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b34e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b34e1:L4b34e1:{c.instructions+=3;NFSU2_TR(0x4b34e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b34e2:{NFSU2_TR(0x4b34e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b34e3:{NFSU2_TR(0x4b34e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b34f0:L4b34f0:{c.instructions+=6;NFSU2_TR(0x4b34f0);
__builtin_memmove((R+0),gp(0x8500c8),1);
}
B4b34f5:{NFSU2_TR(0x4b34f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b34f6:{NFSU2_TR(0x4b34f6);
__builtin_memmove((R+24),(R+4),4);
}
B4b34f8:{NFSU2_TR(0x4b34f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b34fa:{NFSU2_TR(0x4b34fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b34fd:{NFSU2_TR(0x4b34fd);
if(r1(R+518)){{goto L4b350a;}}
}
B4b34ff:L4b34ff:{c.instructions+=2;NFSU2_TR(0x4b34ff);
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
B4b3501:{NFSU2_TR(0x4b3501);
if(r1(R+518)){{goto L4b3515;}}
}
B4b3503:L4b3503:{c.instructions+=2;NFSU2_TR(0x4b3503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3505:{NFSU2_TR(0x4b3505);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3508ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3508:L4b3508:{c.instructions+=1;NFSU2_TR(0x4b3508);
{goto L4b3515;}
}
B4b350a:L4b350a:{c.instructions+=2;NFSU2_TR(0x4b350a);
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
B4b350c:{NFSU2_TR(0x4b350c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3515;}}
}
B4b350e:L4b350e:{c.instructions+=3;NFSU2_TR(0x4b350e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3510:{NFSU2_TR(0x4b3510);
__builtin_memmove((R+4),(R+24),4);
}
B4b3512:{NFSU2_TR(0x4b3512);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3515ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3515:L4b3515:{c.instructions+=9;NFSU2_TR(0x4b3515);
__builtin_memmove((R+0),gp(0x85009b),1);
}
B4b351a:{NFSU2_TR(0x4b351a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b351d:{NFSU2_TR(0x4b351d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b351f:{NFSU2_TR(0x4b351f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4b3521:{NFSU2_TR(0x4b3521);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf154ull))));
}
B4b3526:{NFSU2_TR(0x4b3526);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x61cull))));
}
B4b352b:{NFSU2_TR(0x4b352b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b352c:{NFSU2_TR(0x4b352c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b352d:{NFSU2_TR(0x4b352d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3532ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3532:L4b3532:{c.instructions+=4;NFSU2_TR(0x4b3532);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3535:{NFSU2_TR(0x4b3535);
u8 U[4];
w4(U+0,u32(0x744a80a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b353a:{NFSU2_TR(0x4b353a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b353b:{NFSU2_TR(0x4b353b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3540ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3540:L4b3540:{c.instructions+=3;NFSU2_TR(0x4b3540);
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
B4b3543:{NFSU2_TR(0x4b3543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3544:{NFSU2_TR(0x4b3544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3550:L4b3550:{c.instructions+=6;NFSU2_TR(0x4b3550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3551:{NFSU2_TR(0x4b3551);
__builtin_memmove((R+24),(R+4),4);
}
B4b3553:{NFSU2_TR(0x4b3553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3556:{NFSU2_TR(0x4b3556);
u8 U[4];
w4(U+0,u32(0x9953843bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b355b:{NFSU2_TR(0x4b355b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b355c:{NFSU2_TR(0x4b355c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3561ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3561:L4b3561:{c.instructions+=4;NFSU2_TR(0x4b3561);
__builtin_memmove((R+0),gp(0x85009c),1);
}
B4b3566:{NFSU2_TR(0x4b3566);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b3569:{NFSU2_TR(0x4b3569);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b356b:{NFSU2_TR(0x4b356b);
if(r1(R+518)){{goto L4b3580;}}
}
B4b356d:L4b356d:{c.instructions+=4;NFSU2_TR(0x4b356d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3570:{NFSU2_TR(0x4b3570);
u8 U[4];
w4(U+0,u32(0x7912a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3575:{NFSU2_TR(0x4b3575);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3576:{NFSU2_TR(0x4b3576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b357bull));
TAIL_STATIC(0x537be0u,537);
}
B4b357b:L4b357b:{c.instructions+=3;NFSU2_TR(0x4b357b);
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
B4b357e:{NFSU2_TR(0x4b357e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b357f:{NFSU2_TR(0x4b357f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3580:L4b3580:{c.instructions+=4;NFSU2_TR(0x4b3580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3583:{NFSU2_TR(0x4b3583);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3588:{NFSU2_TR(0x4b3588);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3589:{NFSU2_TR(0x4b3589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b358eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b358e:L4b358e:{c.instructions+=3;NFSU2_TR(0x4b358e);
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
B4b3591:{NFSU2_TR(0x4b3591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3592:{NFSU2_TR(0x4b3592);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b35a0:L4b35a0:{c.instructions+=6;NFSU2_TR(0x4b35a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35a1:{NFSU2_TR(0x4b35a1);
__builtin_memmove((R+24),(R+4),4);
}
B4b35a3:{NFSU2_TR(0x4b35a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b35a6:{NFSU2_TR(0x4b35a6);
u8 U[4];
w4(U+0,u32(0x97cb518bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35ab:{NFSU2_TR(0x4b35ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35ac:{NFSU2_TR(0x4b35ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b35b1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b35b1:L4b35b1:{c.instructions+=4;NFSU2_TR(0x4b35b1);
__builtin_memmove((R+0),gp(0x8500a9),1);
}
B4b35b6:{NFSU2_TR(0x4b35b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b35b9:{NFSU2_TR(0x4b35b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b35bb:{NFSU2_TR(0x4b35bb);
if(r1(R+518)){{goto L4b35d0;}}
}
B4b35bd:L4b35bd:{c.instructions+=4;NFSU2_TR(0x4b35bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b35c0:{NFSU2_TR(0x4b35c0);
u8 U[4];
w4(U+0,u32(0x7912a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35c5:{NFSU2_TR(0x4b35c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35c6:{NFSU2_TR(0x4b35c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b35cbull));
TAIL_STATIC(0x537be0u,537);
}
B4b35cb:L4b35cb:{c.instructions+=3;NFSU2_TR(0x4b35cb);
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
B4b35ce:{NFSU2_TR(0x4b35ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b35cf:{NFSU2_TR(0x4b35cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b35d0:L4b35d0:{c.instructions+=4;NFSU2_TR(0x4b35d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b35d3:{NFSU2_TR(0x4b35d3);
u8 U[4];
w4(U+0,u32(0xbb298a80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35d8:{NFSU2_TR(0x4b35d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35d9:{NFSU2_TR(0x4b35d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b35deull));
TAIL_STATIC(0x50c900u,50c);
}
B4b35de:L4b35de:{c.instructions+=3;NFSU2_TR(0x4b35de);
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
B4b35e1:{NFSU2_TR(0x4b35e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b35e2:{NFSU2_TR(0x4b35e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b35f0:L4b35f0:{c.instructions+=6;NFSU2_TR(0x4b35f0);
__builtin_memmove((R+0),gp(0x850090),4);
}
B4b35f5:{NFSU2_TR(0x4b35f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b35f6:{NFSU2_TR(0x4b35f6);
__builtin_memmove((R+24),(R+4),4);
}
B4b35f8:{NFSU2_TR(0x4b35f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b35fc:{NFSU2_TR(0x4b35fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3602:{NFSU2_TR(0x4b3602);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b360e;}}
}
B4b3604:L4b3604:{c.instructions+=2;NFSU2_TR(0x4b3604);
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
B4b3605:{NFSU2_TR(0x4b3605);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4b361e;}}
}
B4b3607:L4b3607:{c.instructions+=2;NFSU2_TR(0x4b3607);
w4(R+0,u32(0x6ull));
}
B4b360c:{NFSU2_TR(0x4b360c);
{goto L4b361e;}
}
B4b360e:L4b360e:{c.instructions+=2;NFSU2_TR(0x4b360e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3614:{NFSU2_TR(0x4b3614);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b361e;}}
}
B4b3616:L4b3616:{c.instructions+=3;NFSU2_TR(0x4b3616);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b3617:{NFSU2_TR(0x4b3617);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b361a:{NFSU2_TR(0x4b361a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b361e;}}
}
B4b361c:L4b361c:{c.instructions+=1;NFSU2_TR(0x4b361c);
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
B4b361e:L4b361e:{c.instructions+=5;NFSU2_TR(0x4b361e);
__builtin_memmove(gp(0x850090),(R+0),4);
}
B4b3623:{NFSU2_TR(0x4b3623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3625:{NFSU2_TR(0x4b3625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3626:{NFSU2_TR(0x4b3626);
__builtin_memmove((R+4),(R+24),4);
}
B4b3628:{NFSU2_TR(0x4b3628);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b362bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b362b:L4b362b:{c.instructions+=3;NFSU2_TR(0x4b362b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b362d:{NFSU2_TR(0x4b362d);
__builtin_memmove((R+4),(R+24),4);
}
B4b362f:{NFSU2_TR(0x4b362f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3632ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3632:L4b3632:{c.instructions+=2;NFSU2_TR(0x4b3632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3633:{NFSU2_TR(0x4b3633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3640:L4b3640:{c.instructions+=6;NFSU2_TR(0x4b3640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3641:{NFSU2_TR(0x4b3641);
__builtin_memmove((R+24),(R+4),4);
}
B4b3643:{NFSU2_TR(0x4b3643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3646:{NFSU2_TR(0x4b3646);
u8 U[4];
w4(U+0,u32(0x81caa8e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b364b:{NFSU2_TR(0x4b364b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b364c:{NFSU2_TR(0x4b364c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3651ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3651:L4b3651:{c.instructions+=4;NFSU2_TR(0x4b3651);
__builtin_memmove((R+0),gp(0x850090),4);
}
B4b3656:{NFSU2_TR(0x4b3656);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b3659:{NFSU2_TR(0x4b3659);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b365c:{NFSU2_TR(0x4b365c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3677;}}
}
B4b365e:L4b365e:{c.instructions+=3;NFSU2_TR(0x4b365e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b3661:{NFSU2_TR(0x4b3661);
u8 U[4];
w4(U+0,u32(0x2f8344eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3666:{NFSU2_TR(0x4b3666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b366bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b366b:L4b366b:{c.instructions+=3;NFSU2_TR(0x4b366b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b366c:{NFSU2_TR(0x4b366c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b366d:{NFSU2_TR(0x4b366d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3672ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3672:L4b3672:{c.instructions+=3;NFSU2_TR(0x4b3672);
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
B4b3675:{NFSU2_TR(0x4b3675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3676:{NFSU2_TR(0x4b3676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3677:L4b3677:{c.instructions+=6;NFSU2_TR(0x4b3677);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78da98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4b367e:{NFSU2_TR(0x4b367e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3681:{NFSU2_TR(0x4b3681);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3682:{NFSU2_TR(0x4b3682);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3687:{NFSU2_TR(0x4b3687);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3688:{NFSU2_TR(0x4b3688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b368dull));
TAIL_STATIC(0x537be0u,537);
}
B4b368d:L4b368d:{c.instructions+=3;NFSU2_TR(0x4b368d);
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
B4b3690:{NFSU2_TR(0x4b3690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3691:{NFSU2_TR(0x4b3691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b36a0:L4b36a0:{c.instructions+=6;NFSU2_TR(0x4b36a0);
__builtin_memmove((R+0),gp(0x850094),4);
}
B4b36a5:{NFSU2_TR(0x4b36a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b36a6:{NFSU2_TR(0x4b36a6);
__builtin_memmove((R+24),(R+4),4);
}
B4b36a8:{NFSU2_TR(0x4b36a8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b36ac:{NFSU2_TR(0x4b36ac);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b36b2:{NFSU2_TR(0x4b36b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b36be;}}
}
B4b36b4:L4b36b4:{c.instructions+=2;NFSU2_TR(0x4b36b4);
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
B4b36b5:{NFSU2_TR(0x4b36b5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4b36ce;}}
}
B4b36b7:L4b36b7:{c.instructions+=2;NFSU2_TR(0x4b36b7);
w4(R+0,u32(0x4ull));
}
B4b36bc:{NFSU2_TR(0x4b36bc);
{goto L4b36ce;}
}
B4b36be:L4b36be:{c.instructions+=2;NFSU2_TR(0x4b36be);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b36c4:{NFSU2_TR(0x4b36c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b36ce;}}
}
B4b36c6:L4b36c6:{c.instructions+=3;NFSU2_TR(0x4b36c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b36c7:{NFSU2_TR(0x4b36c7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b36ca:{NFSU2_TR(0x4b36ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b36ce;}}
}
B4b36cc:L4b36cc:{c.instructions+=1;NFSU2_TR(0x4b36cc);
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
B4b36ce:L4b36ce:{c.instructions+=5;NFSU2_TR(0x4b36ce);
__builtin_memmove(gp(0x850094),(R+0),4);
}
B4b36d3:{NFSU2_TR(0x4b36d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b36d5:{NFSU2_TR(0x4b36d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b36d6:{NFSU2_TR(0x4b36d6);
__builtin_memmove((R+4),(R+24),4);
}
B4b36d8:{NFSU2_TR(0x4b36d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b36dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b36db:L4b36db:{c.instructions+=3;NFSU2_TR(0x4b36db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b36dd:{NFSU2_TR(0x4b36dd);
__builtin_memmove((R+4),(R+24),4);
}
B4b36df:{NFSU2_TR(0x4b36df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b36e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b36e2:L4b36e2:{c.instructions+=2;NFSU2_TR(0x4b36e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b36e3:{NFSU2_TR(0x4b36e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b36f0:L4b36f0:{c.instructions+=6;NFSU2_TR(0x4b36f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b36f1:{NFSU2_TR(0x4b36f1);
__builtin_memmove((R+24),(R+4),4);
}
B4b36f3:{NFSU2_TR(0x4b36f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b36f6:{NFSU2_TR(0x4b36f6);
u8 U[4];
w4(U+0,u32(0xfe407a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b36fb:{NFSU2_TR(0x4b36fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b36fc:{NFSU2_TR(0x4b36fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3701ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3701:L4b3701:{c.instructions+=5;NFSU2_TR(0x4b3701);
__builtin_memmove((R+0),gp(0x850094),4);
}
B4b3706:{NFSU2_TR(0x4b3706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b3709:{NFSU2_TR(0x4b3709);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b370c:{NFSU2_TR(0x4b370c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b370e:{NFSU2_TR(0x4b370e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3726;}}
}
B4b3710:L4b3710:{c.instructions+=2;NFSU2_TR(0x4b3710);
u8 U[4];
w4(U+0,u32(0x53b157fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3715:{NFSU2_TR(0x4b3715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b371aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b371a:L4b371a:{c.instructions+=3;NFSU2_TR(0x4b371a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b371b:{NFSU2_TR(0x4b371b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b371c:{NFSU2_TR(0x4b371c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3721ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3721:L4b3721:{c.instructions+=3;NFSU2_TR(0x4b3721);
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
B4b3724:{NFSU2_TR(0x4b3724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3725:{NFSU2_TR(0x4b3725);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3726:L4b3726:{c.instructions+=2;NFSU2_TR(0x4b3726);
u8 U[4];
w4(U+0,u32(0x542110c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b372b:{NFSU2_TR(0x4b372b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3730ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b3730:L4b3730:{c.instructions+=7;NFSU2_TR(0x4b3730);
__builtin_memmove((R+4),gp(0x850094),4);
}
B4b3736:{NFSU2_TR(0x4b3736);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78daa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4b373d:{NFSU2_TR(0x4b373d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b373e:{NFSU2_TR(0x4b373e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b373f:{NFSU2_TR(0x4b373f);
u8 U[4];
w4(U+0,u32(0x790358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3744:{NFSU2_TR(0x4b3744);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3745:{NFSU2_TR(0x4b3745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b374aull));
TAIL_STATIC(0x537be0u,537);
}
B4b374a:L4b374a:{c.instructions+=3;NFSU2_TR(0x4b374a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b374d:{NFSU2_TR(0x4b374d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b374e:{NFSU2_TR(0x4b374e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3750:L4b3750:{c.instructions+=21;NFSU2_TR(0x4b3750);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3752:{NFSU2_TR(0x4b3752);
u8 U[4];
w4(U+0,u32(0x773818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3757:{NFSU2_TR(0x4b3757);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b375d:{NFSU2_TR(0x4b375d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b375e:{NFSU2_TR(0x4b375e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b3765:{NFSU2_TR(0x4b3765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3766:{NFSU2_TR(0x4b3766);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b376a:{NFSU2_TR(0x4b376a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b376e:{NFSU2_TR(0x4b376e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b376f:{NFSU2_TR(0x4b376f);
__builtin_memmove((R+24),(R+4),4);
}
B4b3771:{NFSU2_TR(0x4b3771);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3775:{NFSU2_TR(0x4b3775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3776:{NFSU2_TR(0x4b3776);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b377a:{NFSU2_TR(0x4b377a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b377b:{NFSU2_TR(0x4b377b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b377f:{NFSU2_TR(0x4b377f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3780:{NFSU2_TR(0x4b3780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3781:{NFSU2_TR(0x4b3781);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3782:{NFSU2_TR(0x4b3782);
__builtin_memmove((R+4),(R+24),4);
}
B4b3784:{NFSU2_TR(0x4b3784);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b3788:{NFSU2_TR(0x4b3788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b378dull));
TAIL_STATIC(0x51e230u,51e);
}
B4b378d:L4b378d:{c.instructions+=4;NFSU2_TR(0x4b378d);
u8 U[4];
w4(U+0,u32(0x791380ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3793:{NFSU2_TR(0x4b3793);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b379a:{NFSU2_TR(0x4b379a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b37a2:{NFSU2_TR(0x4b37a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b37d9;}}
}
B4b37a4:L4b37a4:{c.instructions+=2;NFSU2_TR(0x4b37a4);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b37ab:{NFSU2_TR(0x4b37ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b37d9;}}
}
B4b37ad:L4b37ad:{c.instructions+=2;NFSU2_TR(0x4b37ad);
w4(R+4,u32(0x83aab4ull));
}
B4b37b2:{NFSU2_TR(0x4b37b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b37b7ull));
TAIL_STATIC(0x502910u,502);
}
B4b37b7:L4b37b7:{c.instructions+=2;NFSU2_TR(0x4b37b7);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x1132ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4b37bc:{NFSU2_TR(0x4b37bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b37d9;}}
}
B4b37be:L4b37be:{c.instructions+=2;NFSU2_TR(0x4b37be);
w4(R+4,u32(0x83aab4ull));
}
B4b37c3:{NFSU2_TR(0x4b37c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b37c8ull));
TAIL_STATIC(0x502710u,502);
}
B4b37c8:L4b37c8:{c.instructions+=2;NFSU2_TR(0x4b37c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b37cb:{NFSU2_TR(0x4b37cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b37d9;}}
}
B4b37cd:L4b37cd:{c.instructions+=3;NFSU2_TR(0x4b37cd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b37cf:{NFSU2_TR(0x4b37cf);
w4(R+4,u32(0x83aab4ull));
}
B4b37d4:{NFSU2_TR(0x4b37d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b37d9ull));
TAIL_STATIC(0x502960u,502);
}
B4b37d9:L4b37d9:{c.instructions+=6;NFSU2_TR(0x4b37d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b37dd:{NFSU2_TR(0x4b37dd);
__builtin_memmove((R+0),(R+24),4);
}
B4b37df:{NFSU2_TR(0x4b37df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b37e0:{NFSU2_TR(0x4b37e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b37e7:{NFSU2_TR(0x4b37e7);
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
B4b37ea:{NFSU2_TR(0x4b37ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b37f0:L4b37f0:{c.instructions+=5;NFSU2_TR(0x4b37f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b37f4:{NFSU2_TR(0x4b37f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b37f9:{NFSU2_TR(0x4b37f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b37fa:{NFSU2_TR(0x4b37fa);
__builtin_memmove((R+20),(R+4),4);
}
B4b37fc:{NFSU2_TR(0x4b37fc);
if(r1(R+518)){{goto L4b3809;}}
}
B4b37fe:L4b37fe:{c.instructions+=2;NFSU2_TR(0x4b37fe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3803:{NFSU2_TR(0x4b3803);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b38b8;}}
}
B4b3809:L4b3809:{c.instructions+=5;NFSU2_TR(0x4b3809);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b380a:{NFSU2_TR(0x4b380a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b380b:{NFSU2_TR(0x4b380b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b380c:{NFSU2_TR(0x4b380c);
w4(R+4,u32(0x83aab4ull));
}
B4b3811:{NFSU2_TR(0x4b3811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3816ull));
TAIL_STATIC(0x5026f0u,502);
}
B4b3816:L4b3816:{c.instructions+=3;NFSU2_TR(0x4b3816);
w4(R+4,u32(0x83aab4ull));
}
B4b381b:{NFSU2_TR(0x4b381b);
__builtin_memmove((R+12),(R+0),4);
}
B4b381d:{NFSU2_TR(0x4b381d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3822ull));
TAIL_STATIC(0x502710u,502);
}
B4b3822:L4b3822:{c.instructions+=9;NFSU2_TR(0x4b3822);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4b3824:{NFSU2_TR(0x4b3824);
__builtin_memmove((R+28),(R+0),4);
}
B4b3826:{NFSU2_TR(0x4b3826);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B4b382b:{NFSU2_TR(0x4b382b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b382e:{NFSU2_TR(0x4b382e);
__builtin_memmove((R+4),(R+518),1);
}
B4b3831:{NFSU2_TR(0x4b3831);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4b3835:{NFSU2_TR(0x4b3835);
__builtin_memmove((R+24),(R+4),4);
}
B4b3837:{NFSU2_TR(0x4b3837);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b383e:{NFSU2_TR(0x4b383e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b385b;}}
}
B4b3840:L4b3840:{c.instructions+=2;NFSU2_TR(0x4b3840);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3843:{NFSU2_TR(0x4b3843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b385b;}}
}
B4b3845:L4b3845:{c.instructions+=2;NFSU2_TR(0x4b3845);
w4(R+4,u32(0x83aab4ull));
}
B4b384a:{NFSU2_TR(0x4b384a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b384full));
TAIL_STATIC(0x502910u,502);
}
B4b384f:L4b384f:{c.instructions+=2;NFSU2_TR(0x4b384f);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x1132ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B4b3854:{NFSU2_TR(0x4b3854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b385b;}}
}
B4b3856:L4b3856:{c.instructions+=1;NFSU2_TR(0x4b3856);
w4(R+24,u32(0x2ull));
}
B4b385b:L4b385b:{c.instructions+=3;NFSU2_TR(0x4b385b);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3862:{NFSU2_TR(0x4b3862);
w4(R+0,u32(0x1ull));
}
B4b3867:{NFSU2_TR(0x4b3867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b386b;}}
}
B4b3869:L4b3869:{c.instructions+=1;NFSU2_TR(0x4b3869);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b386b:L4b386b:{c.instructions+=3;NFSU2_TR(0x4b386b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b386f:{NFSU2_TR(0x4b386f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3875:{NFSU2_TR(0x4b3875);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3883;}}
}
B4b3877:L4b3877:{c.instructions+=3;NFSU2_TR(0x4b3877);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4b3878:{NFSU2_TR(0x4b3878);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b387a:{NFSU2_TR(0x4b387a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b3895;}}
}
B4b387c:L4b387c:{c.instructions+=4;NFSU2_TR(0x4b387c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B4b387e:{NFSU2_TR(0x4b387e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4b387f:{NFSU2_TR(0x4b387f);
__builtin_memmove((R+28),(R+24),4);
}
B4b3881:{NFSU2_TR(0x4b3881);
{goto L4b3895;}
}
B4b3883:L4b3883:{c.instructions+=2;NFSU2_TR(0x4b3883);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3889:{NFSU2_TR(0x4b3889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3895;}}
}
B4b388b:L4b388b:{c.instructions+=5;NFSU2_TR(0x4b388b);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B4b388d:{NFSU2_TR(0x4b388d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4b388e:{NFSU2_TR(0x4b388e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4b388f:{NFSU2_TR(0x4b388f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3891:{NFSU2_TR(0x4b3891);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3895;}}
}
B4b3893:L4b3893:{c.instructions+=1;NFSU2_TR(0x4b3893);
__builtin_memmove((R+28),(R+0),4);
}
B4b3895:L4b3895:{c.instructions+=3;NFSU2_TR(0x4b3895);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3896:{NFSU2_TR(0x4b3896);
w4(R+4,u32(0x83aab4ull));
}
B4b389b:{NFSU2_TR(0x4b389b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38a0ull));
TAIL_STATIC(0x502960u,502);
}
B4b38a0:L4b38a0:{c.instructions+=5;NFSU2_TR(0x4b38a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b38a4:{NFSU2_TR(0x4b38a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b38a7:{NFSU2_TR(0x4b38a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38a8:{NFSU2_TR(0x4b38a8);
__builtin_memmove((R+4),(R+20),4);
}
B4b38aa:{NFSU2_TR(0x4b38aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b38ad:L4b38ad:{c.instructions+=3;NFSU2_TR(0x4b38ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b38b0:{NFSU2_TR(0x4b38b0);
__builtin_memmove((R+4),(R+20),4);
}
B4b38b2:{NFSU2_TR(0x4b38b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b38b5:L4b38b5:{c.instructions+=3;NFSU2_TR(0x4b38b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b38b6:{NFSU2_TR(0x4b38b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b38b7:{NFSU2_TR(0x4b38b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b38b8:L4b38b8:{c.instructions+=2;NFSU2_TR(0x4b38b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b38b9:{NFSU2_TR(0x4b38b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b38c0:L4b38c0:{c.instructions+=7;NFSU2_TR(0x4b38c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38c1:{NFSU2_TR(0x4b38c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38c2:{NFSU2_TR(0x4b38c2);
__builtin_memmove((R+24),(R+4),4);
}
B4b38c4:{NFSU2_TR(0x4b38c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b38c7:{NFSU2_TR(0x4b38c7);
u8 U[4];
w4(U+0,u32(0x3384a679ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38cc:{NFSU2_TR(0x4b38cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38cd:{NFSU2_TR(0x4b38cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38d2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b38d2:L4b38d2:{c.instructions+=4;NFSU2_TR(0x4b38d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b38d5:{NFSU2_TR(0x4b38d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b38d8:{NFSU2_TR(0x4b38d8);
w4(R+4,u32(0x83aab4ull));
}
B4b38dd:{NFSU2_TR(0x4b38dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38e2ull));
TAIL_STATIC(0x502710u,502);
}
B4b38e2:L4b38e2:{c.instructions+=4;NFSU2_TR(0x4b38e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38e3:{NFSU2_TR(0x4b38e3);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38e8:{NFSU2_TR(0x4b38e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b38e9:{NFSU2_TR(0x4b38e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38eeull));
TAIL_STATIC(0x537be0u,537);
}
B4b38ee:L4b38ee:{c.instructions+=3;NFSU2_TR(0x4b38ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b38f1:{NFSU2_TR(0x4b38f1);
w4(R+4,u32(0x83aab4ull));
}
B4b38f6:{NFSU2_TR(0x4b38f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b38fbull));
TAIL_STATIC(0x502910u,502);
}
B4b38fb:L4b38fb:{c.instructions+=4;NFSU2_TR(0x4b38fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b38fe:{NFSU2_TR(0x4b38fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b3900:{NFSU2_TR(0x4b3900);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b3903:{NFSU2_TR(0x4b3903);
if(r1(R+518)){{goto L4b3912;}}
}
B4b3905:L4b3905:{c.instructions+=2;NFSU2_TR(0x4b3905);
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
B4b3907:{NFSU2_TR(0x4b3907);
if(r1(R+518)){{goto L4b391f;}}
}
B4b3909:L4b3909:{c.instructions+=5;NFSU2_TR(0x4b3909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b390b:{NFSU2_TR(0x4b390b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b390c:{NFSU2_TR(0x4b390c);
__builtin_memmove((R+4),(R+24),4);
}
B4b390e:{NFSU2_TR(0x4b390e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b390f:{NFSU2_TR(0x4b390f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b3912:L4b3912:{c.instructions+=2;NFSU2_TR(0x4b3912);
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
B4b3914:{NFSU2_TR(0x4b3914);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b391f;}}
}
B4b3916:L4b3916:{c.instructions+=5;NFSU2_TR(0x4b3916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3918:{NFSU2_TR(0x4b3918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3919:{NFSU2_TR(0x4b3919);
__builtin_memmove((R+4),(R+24),4);
}
B4b391b:{NFSU2_TR(0x4b391b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b391c:{NFSU2_TR(0x4b391c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b391f:L4b391f:{c.instructions+=3;NFSU2_TR(0x4b391f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3920:{NFSU2_TR(0x4b3920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3921:{NFSU2_TR(0x4b3921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3930:L4b3930:{c.instructions+=14;NFSU2_TR(0x4b3930);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3934:{NFSU2_TR(0x4b3934);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3938:{NFSU2_TR(0x4b3938);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3939:{NFSU2_TR(0x4b3939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b393a:{NFSU2_TR(0x4b393a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b393e:{NFSU2_TR(0x4b393e);
__builtin_memmove((R+24),(R+4),4);
}
B4b3940:{NFSU2_TR(0x4b3940);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3944:{NFSU2_TR(0x4b3944);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3945:{NFSU2_TR(0x4b3945);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3949:{NFSU2_TR(0x4b3949);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b394a:{NFSU2_TR(0x4b394a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b394b:{NFSU2_TR(0x4b394b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b394c:{NFSU2_TR(0x4b394c);
__builtin_memmove((R+4),(R+24),4);
}
B4b394e:{NFSU2_TR(0x4b394e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3953ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b3953:L4b3953:{c.instructions+=4;NFSU2_TR(0x4b3953);
u8 U[4];
w4(U+0,u32(0x7913c8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3959:{NFSU2_TR(0x4b3959);
__builtin_memmove((R+0),(R+24),4);
}
B4b395b:{NFSU2_TR(0x4b395b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b395c:{NFSU2_TR(0x4b395c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3960:L4b3960:{c.instructions+=5;NFSU2_TR(0x4b3960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3961:{NFSU2_TR(0x4b3961);
__builtin_memmove((R+24),(R+4),4);
}
B4b3963:{NFSU2_TR(0x4b3963);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3964:{NFSU2_TR(0x4b3964);
w4(R+4,u32(0x83aab4ull));
}
B4b3969:{NFSU2_TR(0x4b3969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b396eull));
TAIL_STATIC(0x502730u,502);
}
B4b396e:L4b396e:{c.instructions+=3;NFSU2_TR(0x4b396e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3972:{NFSU2_TR(0x4b3972);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3978:{NFSU2_TR(0x4b3978);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3984;}}
}
B4b397a:L4b397a:{c.instructions+=2;NFSU2_TR(0x4b397a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B4b397b:{NFSU2_TR(0x4b397b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4b3994;}}
}
B4b397d:L4b397d:{c.instructions+=2;NFSU2_TR(0x4b397d);
w4(R+0,u32(0x2ull));
}
B4b3982:{NFSU2_TR(0x4b3982);
{goto L4b3994;}
}
B4b3984:L4b3984:{c.instructions+=2;NFSU2_TR(0x4b3984);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b398a:{NFSU2_TR(0x4b398a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3994;}}
}
B4b398c:L4b398c:{c.instructions+=3;NFSU2_TR(0x4b398c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b398d:{NFSU2_TR(0x4b398d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3990:{NFSU2_TR(0x4b3990);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3994;}}
}
B4b3992:L4b3992:{c.instructions+=1;NFSU2_TR(0x4b3992);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b3994:L4b3994:{c.instructions+=3;NFSU2_TR(0x4b3994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3995:{NFSU2_TR(0x4b3995);
w4(R+4,u32(0x83aab4ull));
}
B4b399a:{NFSU2_TR(0x4b399a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b399full));
TAIL_STATIC(0x502990u,502);
}
B4b399f:L4b399f:{c.instructions+=4;NFSU2_TR(0x4b399f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b39a1:{NFSU2_TR(0x4b39a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b39a2:{NFSU2_TR(0x4b39a2);
__builtin_memmove((R+4),(R+24),4);
}
B4b39a4:{NFSU2_TR(0x4b39a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b39a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b39a7:L4b39a7:{c.instructions+=3;NFSU2_TR(0x4b39a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b39a9:{NFSU2_TR(0x4b39a9);
__builtin_memmove((R+4),(R+24),4);
}
B4b39ab:{NFSU2_TR(0x4b39ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b39aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b39ae:L4b39ae:{c.instructions+=3;NFSU2_TR(0x4b39ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b39af:{NFSU2_TR(0x4b39af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b39b0:{NFSU2_TR(0x4b39b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b39c0:L4b39c0:{c.instructions+=6;NFSU2_TR(0x4b39c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b39c1:{NFSU2_TR(0x4b39c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b39c2:{NFSU2_TR(0x4b39c2);
__builtin_memmove((R+28),(R+4),4);
}
B4b39c4:{NFSU2_TR(0x4b39c4);
w4(R+4,u32(0x83aab4ull));
}
B4b39c9:{NFSU2_TR(0x4b39c9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b39cb:{NFSU2_TR(0x4b39cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b39d0ull));
TAIL_STATIC(0x502730u,502);
}
B4b39d0:L4b39d0:{c.instructions+=3;NFSU2_TR(0x4b39d0);
w4(R+0,u32(r1(R+0)));
}
B4b39d3:{NFSU2_TR(0x4b39d3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b39d5:{NFSU2_TR(0x4b39d5);
if(r1(R+518)){{goto L4b39eb;}}
}
B4b39d7:L4b39d7:{c.instructions+=2;NFSU2_TR(0x4b39d7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b39d8:{NFSU2_TR(0x4b39d8);
if(r1(R+518)){{goto L4b39e4;}}
}
B4b39da:L4b39da:{c.instructions+=2;NFSU2_TR(0x4b39da);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4b39db:{NFSU2_TR(0x4b39db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b39f0;}}
}
B4b39dd:L4b39dd:{c.instructions+=2;NFSU2_TR(0x4b39dd);
w4(R+24,u32(0xdbbcf37cull));
}
B4b39e2:{NFSU2_TR(0x4b39e2);
{goto L4b39f0;}
}
B4b39e4:L4b39e4:{c.instructions+=2;NFSU2_TR(0x4b39e4);
w4(R+24,u32(0xcab262deull));
}
B4b39e9:{NFSU2_TR(0x4b39e9);
{goto L4b39f0;}
}
B4b39eb:L4b39eb:{c.instructions+=1;NFSU2_TR(0x4b39eb);
w4(R+24,u32(0xdbbb4e8full));
}
B4b39f0:L4b39f0:{c.instructions+=4;NFSU2_TR(0x4b39f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b39f3:{NFSU2_TR(0x4b39f3);
u8 U[4];
w4(U+0,u32(0x4d156786ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b39f8:{NFSU2_TR(0x4b39f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b39f9:{NFSU2_TR(0x4b39f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b39feull));
TAIL_STATIC(0x50c900u,50c);
}
B4b39fe:L4b39fe:{c.instructions+=4;NFSU2_TR(0x4b39fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3a01:{NFSU2_TR(0x4b3a01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a02:{NFSU2_TR(0x4b3a02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a03:{NFSU2_TR(0x4b3a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a08ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3a08:L4b3a08:{c.instructions+=4;NFSU2_TR(0x4b3a08);
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
B4b3a0b:{NFSU2_TR(0x4b3a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3a0c:{NFSU2_TR(0x4b3a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3a0d:{NFSU2_TR(0x4b3a0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3a10:L4b3a10:{c.instructions+=6;NFSU2_TR(0x4b3a10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a11:{NFSU2_TR(0x4b3a11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a12:{NFSU2_TR(0x4b3a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3a16:{NFSU2_TR(0x4b3a16);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3a1c:{NFSU2_TR(0x4b3a1c);
__builtin_memmove((R+24),(R+4),4);
}
B4b3a1e:{NFSU2_TR(0x4b3a1e);
if(r1(R+518)){{goto L4b3a28;}}
}
B4b3a20:L4b3a20:{c.instructions+=2;NFSU2_TR(0x4b3a20);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3a26:{NFSU2_TR(0x4b3a26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3a43;}}
}
B4b3a28:L4b3a28:{c.instructions+=2;NFSU2_TR(0x4b3a28);
w4(R+4,u32(0x83aab4ull));
}
B4b3a2d:{NFSU2_TR(0x4b3a2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a32ull));
TAIL_STATIC(0x5028f0u,502);
}
B4b3a32:L4b3a32:{c.instructions+=6;NFSU2_TR(0x4b3a32);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4b3a34:{NFSU2_TR(0x4b3a34);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4b3a36:{NFSU2_TR(0x4b3a36);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B4b3a38:{NFSU2_TR(0x4b3a38);
w4(R+4,u32(0x83aab4ull));
}
B4b3a3d:{NFSU2_TR(0x4b3a3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a3e:{NFSU2_TR(0x4b3a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a43ull));
TAIL_STATIC(0x5029f0u,502);
}
B4b3a43:L4b3a43:{c.instructions+=4;NFSU2_TR(0x4b3a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3a45:{NFSU2_TR(0x4b3a45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a46:{NFSU2_TR(0x4b3a46);
__builtin_memmove((R+4),(R+24),4);
}
B4b3a48:{NFSU2_TR(0x4b3a48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3a4b:L4b3a4b:{c.instructions+=3;NFSU2_TR(0x4b3a4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3a4d:{NFSU2_TR(0x4b3a4d);
__builtin_memmove((R+4),(R+24),4);
}
B4b3a4f:{NFSU2_TR(0x4b3a4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3a52:L4b3a52:{c.instructions+=3;NFSU2_TR(0x4b3a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3a53:{NFSU2_TR(0x4b3a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3a54:{NFSU2_TR(0x4b3a54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3a60:L4b3a60:{c.instructions+=4;NFSU2_TR(0x4b3a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a61:{NFSU2_TR(0x4b3a61);
__builtin_memmove((R+24),(R+4),4);
}
B4b3a63:{NFSU2_TR(0x4b3a63);
w4(R+4,u32(0x83aab4ull));
}
B4b3a68:{NFSU2_TR(0x4b3a68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a6dull));
TAIL_STATIC(0x5028f0u,502);
}
B4b3a6d:L4b3a6d:{c.instructions+=2;NFSU2_TR(0x4b3a6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b3a6f:{NFSU2_TR(0x4b3a6f);
if(r1(R+518)){{goto L4b3a7c;}}
}
B4b3a71:L4b3a71:{c.instructions+=4;NFSU2_TR(0x4b3a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3a74:{NFSU2_TR(0x4b3a74);
u8 U[4];
w4(U+0,u32(0x63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a79:{NFSU2_TR(0x4b3a79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a7a:{NFSU2_TR(0x4b3a7a);
{goto L4b3a85;}
}
B4b3a7c:L4b3a7c:{c.instructions+=3;NFSU2_TR(0x4b3a7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3a7f:{NFSU2_TR(0x4b3a7f);
u8 U[4];
w4(U+0,u32(0xccfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a84:{NFSU2_TR(0x4b3a84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a85:L4b3a85:{c.instructions+=1;NFSU2_TR(0x4b3a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a8aull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3a8a:L4b3a8a:{c.instructions+=5;NFSU2_TR(0x4b3a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3a8d:{NFSU2_TR(0x4b3a8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b3a90:{NFSU2_TR(0x4b3a90);
u8 U[4];
w4(U+0,u32(0x8b8e913aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a95:{NFSU2_TR(0x4b3a95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3a96:{NFSU2_TR(0x4b3a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3a9bull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3a9b:L4b3a9b:{c.instructions+=3;NFSU2_TR(0x4b3a9b);
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
B4b3a9e:{NFSU2_TR(0x4b3a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3a9f:{NFSU2_TR(0x4b3a9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3aa0:L4b3aa0:{c.instructions+=14;NFSU2_TR(0x4b3aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3aa4:{NFSU2_TR(0x4b3aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3aa8:{NFSU2_TR(0x4b3aa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3aa9:{NFSU2_TR(0x4b3aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3aaa:{NFSU2_TR(0x4b3aaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3aae:{NFSU2_TR(0x4b3aae);
__builtin_memmove((R+24),(R+4),4);
}
B4b3ab0:{NFSU2_TR(0x4b3ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3ab4:{NFSU2_TR(0x4b3ab4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ab5:{NFSU2_TR(0x4b3ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3ab9:{NFSU2_TR(0x4b3ab9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3aba:{NFSU2_TR(0x4b3aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3abb:{NFSU2_TR(0x4b3abb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3abc:{NFSU2_TR(0x4b3abc);
__builtin_memmove((R+4),(R+24),4);
}
B4b3abe:{NFSU2_TR(0x4b3abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3ac3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b3ac3:L4b3ac3:{c.instructions+=4;NFSU2_TR(0x4b3ac3);
u8 U[4];
w4(U+0,u32(0x791458ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3ac9:{NFSU2_TR(0x4b3ac9);
__builtin_memmove((R+0),(R+24),4);
}
B4b3acb:{NFSU2_TR(0x4b3acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3acc:{NFSU2_TR(0x4b3acc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3ad0:L4b3ad0:{c.instructions+=5;NFSU2_TR(0x4b3ad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ad1:{NFSU2_TR(0x4b3ad1);
__builtin_memmove((R+24),(R+4),4);
}
B4b3ad3:{NFSU2_TR(0x4b3ad3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ad4:{NFSU2_TR(0x4b3ad4);
w4(R+4,u32(0x83aab4ull));
}
B4b3ad9:{NFSU2_TR(0x4b3ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3adeull));
TAIL_STATIC(0x502750u,502);
}
B4b3ade:L4b3ade:{c.instructions+=3;NFSU2_TR(0x4b3ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3ae2:{NFSU2_TR(0x4b3ae2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3ae8:{NFSU2_TR(0x4b3ae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3af4;}}
}
B4b3aea:L4b3aea:{c.instructions+=2;NFSU2_TR(0x4b3aea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B4b3aeb:{NFSU2_TR(0x4b3aeb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4b3b04;}}
}
B4b3aed:L4b3aed:{c.instructions+=2;NFSU2_TR(0x4b3aed);
w4(R+0,u32(0x3ull));
}
B4b3af2:{NFSU2_TR(0x4b3af2);
{goto L4b3b04;}
}
B4b3af4:L4b3af4:{c.instructions+=2;NFSU2_TR(0x4b3af4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3afa:{NFSU2_TR(0x4b3afa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3b04;}}
}
B4b3afc:L4b3afc:{c.instructions+=3;NFSU2_TR(0x4b3afc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b3afd:{NFSU2_TR(0x4b3afd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3b00:{NFSU2_TR(0x4b3b00);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3b04;}}
}
B4b3b02:L4b3b02:{c.instructions+=1;NFSU2_TR(0x4b3b02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b3b04:L4b3b04:{c.instructions+=3;NFSU2_TR(0x4b3b04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b05:{NFSU2_TR(0x4b3b05);
w4(R+4,u32(0x83aab4ull));
}
B4b3b0a:{NFSU2_TR(0x4b3b0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3b0full));
TAIL_STATIC(0x5029c0u,502);
}
B4b3b0f:L4b3b0f:{c.instructions+=4;NFSU2_TR(0x4b3b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3b11:{NFSU2_TR(0x4b3b11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b12:{NFSU2_TR(0x4b3b12);
__builtin_memmove((R+4),(R+24),4);
}
B4b3b14:{NFSU2_TR(0x4b3b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3b17ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3b17:L4b3b17:{c.instructions+=3;NFSU2_TR(0x4b3b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3b19:{NFSU2_TR(0x4b3b19);
__builtin_memmove((R+4),(R+24),4);
}
B4b3b1b:{NFSU2_TR(0x4b3b1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3b1eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3b1e:L4b3b1e:{c.instructions+=3;NFSU2_TR(0x4b3b1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3b1f:{NFSU2_TR(0x4b3b1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3b20:{NFSU2_TR(0x4b3b20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3b30:L4b3b30:{c.instructions+=6;NFSU2_TR(0x4b3b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b31:{NFSU2_TR(0x4b3b31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b32:{NFSU2_TR(0x4b3b32);
__builtin_memmove((R+28),(R+4),4);
}
B4b3b34:{NFSU2_TR(0x4b3b34);
w4(R+4,u32(0x83aab4ull));
}
B4b3b39:{NFSU2_TR(0x4b3b39);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4b3b3b:{NFSU2_TR(0x4b3b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3b40ull));
TAIL_STATIC(0x502750u,502);
}
B4b3b40:L4b3b40:{c.instructions+=2;NFSU2_TR(0x4b3b40);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3b43:{NFSU2_TR(0x4b3b43);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b3b66;}}
}
B4b3b45:L4b3b45:{c.instructions+=1;NFSU2_TR(0x4b3b45);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b3b84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3b4c:L4b3b4c:{c.instructions+=2;NFSU2_TR(0x4b3b4c);
w4(R+24,u32(0x896bcb4dull));
}
B4b3b51:{NFSU2_TR(0x4b3b51);
{goto L4b3b66;}
}
B4b3b53:L4b3b53:{c.instructions+=2;NFSU2_TR(0x4b3b53);
w4(R+24,u32(0xb6bd9c95ull));
}
B4b3b58:{NFSU2_TR(0x4b3b58);
{goto L4b3b66;}
}
B4b3b5a:L4b3b5a:{c.instructions+=2;NFSU2_TR(0x4b3b5a);
w4(R+24,u32(0x907c555eull));
}
B4b3b5f:{NFSU2_TR(0x4b3b5f);
{goto L4b3b66;}
}
B4b3b61:L4b3b61:{c.instructions+=1;NFSU2_TR(0x4b3b61);
w4(R+24,u32(0xb672f15aull));
}
B4b3b66:L4b3b66:{c.instructions+=4;NFSU2_TR(0x4b3b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3b69:{NFSU2_TR(0x4b3b69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b6a:{NFSU2_TR(0x4b3b6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b6b:{NFSU2_TR(0x4b3b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3b70ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3b70:L4b3b70:{c.instructions+=4;NFSU2_TR(0x4b3b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3b73:{NFSU2_TR(0x4b3b73);
u8 U[4];
w4(U+0,u32(0xeb9dfc09ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b78:{NFSU2_TR(0x4b3b78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3b79:{NFSU2_TR(0x4b3b79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3b7eull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3b7e:L4b3b7e:{c.instructions+=4;NFSU2_TR(0x4b3b7e);
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
B4b3b81:{NFSU2_TR(0x4b3b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3b82:{NFSU2_TR(0x4b3b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3b83:{NFSU2_TR(0x4b3b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3ba0:L4b3ba0:{c.instructions+=5;NFSU2_TR(0x4b3ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ba1:{NFSU2_TR(0x4b3ba1);
__builtin_memmove((R+24),(R+4),4);
}
B4b3ba3:{NFSU2_TR(0x4b3ba3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ba4:{NFSU2_TR(0x4b3ba4);
w4(R+4,u32(0x83aab4ull));
}
B4b3ba9:{NFSU2_TR(0x4b3ba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3baeull));
TAIL_STATIC(0x502770u,502);
}
B4b3bae:L4b3bae:{c.instructions+=3;NFSU2_TR(0x4b3bae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3bb2:{NFSU2_TR(0x4b3bb2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3bb8:{NFSU2_TR(0x4b3bb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3bc4;}}
}
B4b3bba:L4b3bba:{c.instructions+=2;NFSU2_TR(0x4b3bba);
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
B4b3bbb:{NFSU2_TR(0x4b3bbb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4b3bd4;}}
}
B4b3bbd:L4b3bbd:{c.instructions+=2;NFSU2_TR(0x4b3bbd);
w4(R+0,u32(0x6ull));
}
B4b3bc2:{NFSU2_TR(0x4b3bc2);
{goto L4b3bd4;}
}
B4b3bc4:L4b3bc4:{c.instructions+=2;NFSU2_TR(0x4b3bc4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3bca:{NFSU2_TR(0x4b3bca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3bd4;}}
}
B4b3bcc:L4b3bcc:{c.instructions+=3;NFSU2_TR(0x4b3bcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b3bcd:{NFSU2_TR(0x4b3bcd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3bd0:{NFSU2_TR(0x4b3bd0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3bd4;}}
}
B4b3bd2:L4b3bd2:{c.instructions+=1;NFSU2_TR(0x4b3bd2);
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
B4b3bd4:L4b3bd4:{c.instructions+=3;NFSU2_TR(0x4b3bd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3bd5:{NFSU2_TR(0x4b3bd5);
w4(R+4,u32(0x83aab4ull));
}
B4b3bda:{NFSU2_TR(0x4b3bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3bdfull));
TAIL_STATIC(0x502a20u,502);
}
B4b3bdf:L4b3bdf:{c.instructions+=4;NFSU2_TR(0x4b3bdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3be1:{NFSU2_TR(0x4b3be1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3be2:{NFSU2_TR(0x4b3be2);
__builtin_memmove((R+4),(R+24),4);
}
B4b3be4:{NFSU2_TR(0x4b3be4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3be7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3be7:L4b3be7:{c.instructions+=3;NFSU2_TR(0x4b3be7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3be9:{NFSU2_TR(0x4b3be9);
__builtin_memmove((R+4),(R+24),4);
}
B4b3beb:{NFSU2_TR(0x4b3beb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3beeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3bee:L4b3bee:{c.instructions+=3;NFSU2_TR(0x4b3bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3bef:{NFSU2_TR(0x4b3bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3bf0:{NFSU2_TR(0x4b3bf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3c00:L4b3c00:{c.instructions+=6;NFSU2_TR(0x4b3c00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c01:{NFSU2_TR(0x4b3c01);
__builtin_memmove((R+24),(R+4),4);
}
B4b3c03:{NFSU2_TR(0x4b3c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3c06:{NFSU2_TR(0x4b3c06);
u8 U[4];
w4(U+0,u32(0x81caa8e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c0b:{NFSU2_TR(0x4b3c0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c0c:{NFSU2_TR(0x4b3c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c11ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3c11:L4b3c11:{c.instructions+=3;NFSU2_TR(0x4b3c11);
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
B4b3c14:{NFSU2_TR(0x4b3c14);
w4(R+4,u32(0x83aab4ull));
}
B4b3c19:{NFSU2_TR(0x4b3c19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c1eull));
TAIL_STATIC(0x502770u,502);
}
B4b3c1e:L4b3c1e:{c.instructions+=3;NFSU2_TR(0x4b3c1e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3c21:{NFSU2_TR(0x4b3c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b3c24:{NFSU2_TR(0x4b3c24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3c3c;}}
}
B4b3c26:L4b3c26:{c.instructions+=2;NFSU2_TR(0x4b3c26);
u8 U[4];
w4(U+0,u32(0x2f8344eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c2b:{NFSU2_TR(0x4b3c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c30ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b3c30:L4b3c30:{c.instructions+=3;NFSU2_TR(0x4b3c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c31:{NFSU2_TR(0x4b3c31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c32:{NFSU2_TR(0x4b3c32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c37ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3c37:L4b3c37:{c.instructions+=3;NFSU2_TR(0x4b3c37);
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
B4b3c3a:{NFSU2_TR(0x4b3c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3c3b:{NFSU2_TR(0x4b3c3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3c3c:L4b3c3c:{c.instructions+=2;NFSU2_TR(0x4b3c3c);
w4(R+4,u32(0x83aab4ull));
}
B4b3c41:{NFSU2_TR(0x4b3c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c46ull));
TAIL_STATIC(0x502790u,502);
}
B4b3c46:L4b3c46:{c.instructions+=5;NFSU2_TR(0x4b3c46);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B4b3c49:{NFSU2_TR(0x4b3c49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c4a:{NFSU2_TR(0x4b3c4a);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c4f:{NFSU2_TR(0x4b3c4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c50:{NFSU2_TR(0x4b3c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c55ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3c55:L4b3c55:{c.instructions+=3;NFSU2_TR(0x4b3c55);
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
B4b3c58:{NFSU2_TR(0x4b3c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3c59:{NFSU2_TR(0x4b3c59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3c60:L4b3c60:{c.instructions+=5;NFSU2_TR(0x4b3c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c61:{NFSU2_TR(0x4b3c61);
__builtin_memmove((R+24),(R+4),4);
}
B4b3c63:{NFSU2_TR(0x4b3c63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c64:{NFSU2_TR(0x4b3c64);
w4(R+4,u32(0x83aab4ull));
}
B4b3c69:{NFSU2_TR(0x4b3c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c6eull));
TAIL_STATIC(0x502780u,502);
}
B4b3c6e:L4b3c6e:{c.instructions+=3;NFSU2_TR(0x4b3c6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3c72:{NFSU2_TR(0x4b3c72);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3c78:{NFSU2_TR(0x4b3c78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3c84;}}
}
B4b3c7a:L4b3c7a:{c.instructions+=2;NFSU2_TR(0x4b3c7a);
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
B4b3c7b:{NFSU2_TR(0x4b3c7b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4b3c94;}}
}
B4b3c7d:L4b3c7d:{c.instructions+=2;NFSU2_TR(0x4b3c7d);
w4(R+0,u32(0x4ull));
}
B4b3c82:{NFSU2_TR(0x4b3c82);
{goto L4b3c94;}
}
B4b3c84:L4b3c84:{c.instructions+=2;NFSU2_TR(0x4b3c84);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3c8a:{NFSU2_TR(0x4b3c8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3c94;}}
}
B4b3c8c:L4b3c8c:{c.instructions+=3;NFSU2_TR(0x4b3c8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b3c8d:{NFSU2_TR(0x4b3c8d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b3c90:{NFSU2_TR(0x4b3c90);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3c94;}}
}
B4b3c92:L4b3c92:{c.instructions+=1;NFSU2_TR(0x4b3c92);
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
B4b3c94:L4b3c94:{c.instructions+=3;NFSU2_TR(0x4b3c94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3c95:{NFSU2_TR(0x4b3c95);
w4(R+4,u32(0x83aab4ull));
}
B4b3c9a:{NFSU2_TR(0x4b3c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3c9full));
TAIL_STATIC(0x502a30u,502);
}
B4b3c9f:L4b3c9f:{c.instructions+=4;NFSU2_TR(0x4b3c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3ca1:{NFSU2_TR(0x4b3ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ca2:{NFSU2_TR(0x4b3ca2);
__builtin_memmove((R+4),(R+24),4);
}
B4b3ca4:{NFSU2_TR(0x4b3ca4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3ca7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3ca7:L4b3ca7:{c.instructions+=3;NFSU2_TR(0x4b3ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3ca9:{NFSU2_TR(0x4b3ca9);
__builtin_memmove((R+4),(R+24),4);
}
B4b3cab:{NFSU2_TR(0x4b3cab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3caeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3cae:L4b3cae:{c.instructions+=3;NFSU2_TR(0x4b3cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3caf:{NFSU2_TR(0x4b3caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3cb0:{NFSU2_TR(0x4b3cb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3cc0:L4b3cc0:{c.instructions+=6;NFSU2_TR(0x4b3cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3cc1:{NFSU2_TR(0x4b3cc1);
__builtin_memmove((R+24),(R+4),4);
}
B4b3cc3:{NFSU2_TR(0x4b3cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3cc6:{NFSU2_TR(0x4b3cc6);
u8 U[4];
w4(U+0,u32(0xfe407a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ccb:{NFSU2_TR(0x4b3ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ccc:{NFSU2_TR(0x4b3ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3cd1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3cd1:L4b3cd1:{c.instructions+=3;NFSU2_TR(0x4b3cd1);
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
B4b3cd4:{NFSU2_TR(0x4b3cd4);
w4(R+4,u32(0x83aab4ull));
}
B4b3cd9:{NFSU2_TR(0x4b3cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3cdeull));
TAIL_STATIC(0x502780u,502);
}
B4b3cde:L4b3cde:{c.instructions+=3;NFSU2_TR(0x4b3cde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b3ce0:{NFSU2_TR(0x4b3ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b3ce3:{NFSU2_TR(0x4b3ce3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3cfb;}}
}
B4b3ce5:L4b3ce5:{c.instructions+=2;NFSU2_TR(0x4b3ce5);
u8 U[4];
w4(U+0,u32(0x53b157fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3cea:{NFSU2_TR(0x4b3cea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3cefull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b3cef:L4b3cef:{c.instructions+=3;NFSU2_TR(0x4b3cef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3cf0:{NFSU2_TR(0x4b3cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3cf1:{NFSU2_TR(0x4b3cf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3cf6ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3cf6:L4b3cf6:{c.instructions+=3;NFSU2_TR(0x4b3cf6);
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
B4b3cf9:{NFSU2_TR(0x4b3cf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3cfa:{NFSU2_TR(0x4b3cfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3cfb:L4b3cfb:{c.instructions+=2;NFSU2_TR(0x4b3cfb);
u8 U[4];
w4(U+0,u32(0x542110c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d00:{NFSU2_TR(0x4b3d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3d05ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b3d05:L4b3d05:{c.instructions+=4;NFSU2_TR(0x4b3d05);
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
B4b3d08:{NFSU2_TR(0x4b3d08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d09:{NFSU2_TR(0x4b3d09);
w4(R+4,u32(0x83aab4ull));
}
B4b3d0e:{NFSU2_TR(0x4b3d0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3d13ull));
TAIL_STATIC(0x5027a0u,502);
}
B4b3d13:L4b3d13:{c.instructions+=5;NFSU2_TR(0x4b3d13);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B4b3d16:{NFSU2_TR(0x4b3d16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d17:{NFSU2_TR(0x4b3d17);
u8 U[4];
w4(U+0,u32(0x787abcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d1c:{NFSU2_TR(0x4b3d1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d1d:{NFSU2_TR(0x4b3d1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3d22ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3d22:L4b3d22:{c.instructions+=3;NFSU2_TR(0x4b3d22);
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
B4b3d25:{NFSU2_TR(0x4b3d25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3d26:{NFSU2_TR(0x4b3d26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3d30:L4b3d30:{c.instructions+=14;NFSU2_TR(0x4b3d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3d34:{NFSU2_TR(0x4b3d34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3d38:{NFSU2_TR(0x4b3d38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d39:{NFSU2_TR(0x4b3d39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d3a:{NFSU2_TR(0x4b3d3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3d3e:{NFSU2_TR(0x4b3d3e);
__builtin_memmove((R+24),(R+4),4);
}
B4b3d40:{NFSU2_TR(0x4b3d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3d44:{NFSU2_TR(0x4b3d44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d45:{NFSU2_TR(0x4b3d45);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3d49:{NFSU2_TR(0x4b3d49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d4a:{NFSU2_TR(0x4b3d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d4b:{NFSU2_TR(0x4b3d4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d4c:{NFSU2_TR(0x4b3d4c);
__builtin_memmove((R+4),(R+24),4);
}
B4b3d4e:{NFSU2_TR(0x4b3d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3d53ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b3d53:L4b3d53:{c.instructions+=4;NFSU2_TR(0x4b3d53);
u8 U[4];
w4(U+0,u32(0x791530ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3d59:{NFSU2_TR(0x4b3d59);
__builtin_memmove((R+0),(R+24),4);
}
B4b3d5b:{NFSU2_TR(0x4b3d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3d5c:{NFSU2_TR(0x4b3d5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3d60:L4b3d60:{c.instructions+=6;NFSU2_TR(0x4b3d60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d61:{NFSU2_TR(0x4b3d61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d62:{NFSU2_TR(0x4b3d62);
__builtin_memmove((R+24),(R+4),4);
}
B4b3d64:{NFSU2_TR(0x4b3d64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3d65:{NFSU2_TR(0x4b3d65);
w4(R+4,u32(0x83aab4ull));
}
B4b3d6a:{NFSU2_TR(0x4b3d6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3d6full));
TAIL_STATIC(0x502910u,502);
}
B4b3d6f:L4b3d6f:{c.instructions+=4;NFSU2_TR(0x4b3d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b3d73:{NFSU2_TR(0x4b3d73);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3d79:{NFSU2_TR(0x4b3d79);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B4b3d7d:{NFSU2_TR(0x4b3d7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3d8c;}}
}
B4b3d7f:L4b3d7f:{c.instructions+=3;NFSU2_TR(0x4b3d7f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4b3d80:{NFSU2_TR(0x4b3d80);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4b3d83:{NFSU2_TR(0x4b3d83);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b3d9f;}}
}
B4b3d85:L4b3d85:{c.instructions+=2;NFSU2_TR(0x4b3d85);
w4(R+28,u32(0xaull));
}
B4b3d8a:{NFSU2_TR(0x4b3d8a);
{goto L4b3d9f;}
}
B4b3d8c:L4b3d8c:{c.instructions+=2;NFSU2_TR(0x4b3d8c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3d92:{NFSU2_TR(0x4b3d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3d9f;}}
}
B4b3d94:L4b3d94:{c.instructions+=3;NFSU2_TR(0x4b3d94);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4b3d95:{NFSU2_TR(0x4b3d95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3d98:{NFSU2_TR(0x4b3d98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3d9f;}}
}
B4b3d9a:L4b3d9a:{c.instructions+=1;NFSU2_TR(0x4b3d9a);
w4(R+28,u32(0x1ull));
}
B4b3d9f:L4b3d9f:{c.instructions+=2;NFSU2_TR(0x4b3d9f);
w4(R+4,u32(0x83aab4ull));
}
B4b3da4:{NFSU2_TR(0x4b3da4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3da9ull));
TAIL_STATIC(0x502910u,502);
}
B4b3da9:L4b3da9:{c.instructions+=5;NFSU2_TR(0x4b3da9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4b3dad:{NFSU2_TR(0x4b3dad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3daf:{NFSU2_TR(0x4b3daf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3db0:{NFSU2_TR(0x4b3db0);
__builtin_memmove((R+4),(R+24),4);
}
B4b3db2:{NFSU2_TR(0x4b3db2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3db5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3db5:L4b3db5:{c.instructions+=3;NFSU2_TR(0x4b3db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3db7:{NFSU2_TR(0x4b3db7);
__builtin_memmove((R+4),(R+24),4);
}
B4b3db9:{NFSU2_TR(0x4b3db9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3dbcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3dbc:L4b3dbc:{c.instructions+=4;NFSU2_TR(0x4b3dbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3dbd:{NFSU2_TR(0x4b3dbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3dbe:{NFSU2_TR(0x4b3dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b3dbf:{NFSU2_TR(0x4b3dbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3dd0:L4b3dd0:{c.instructions+=6;NFSU2_TR(0x4b3dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3dd1:{NFSU2_TR(0x4b3dd1);
__builtin_memmove((R+24),(R+4),4);
}
B4b3dd3:{NFSU2_TR(0x4b3dd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3dd4:{NFSU2_TR(0x4b3dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b3dd7:{NFSU2_TR(0x4b3dd7);
w4(R+4,u32(0x83aab4ull));
}
B4b3ddc:{NFSU2_TR(0x4b3ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3de1ull));
TAIL_STATIC(0x502910u,502);
}
B4b3de1:L4b3de1:{c.instructions+=5;NFSU2_TR(0x4b3de1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4b3de5:{NFSU2_TR(0x4b3de5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3de6:{NFSU2_TR(0x4b3de6);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3deb:{NFSU2_TR(0x4b3deb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3dec:{NFSU2_TR(0x4b3dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3df1ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3df1:L4b3df1:{c.instructions+=4;NFSU2_TR(0x4b3df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3df4:{NFSU2_TR(0x4b3df4);
u8 U[4];
w4(U+0,u32(0x48494e83ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3df9:{NFSU2_TR(0x4b3df9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3dfa:{NFSU2_TR(0x4b3dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3dffull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3dff:L4b3dff:{c.instructions+=3;NFSU2_TR(0x4b3dff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b3e02:{NFSU2_TR(0x4b3e02);
w4(R+4,u32(0x83aab4ull));
}
B4b3e07:{NFSU2_TR(0x4b3e07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3e0cull));
TAIL_STATIC(0x502910u,502);
}
B4b3e0c:L4b3e0c:{c.instructions+=4;NFSU2_TR(0x4b3e0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b3e0f:{NFSU2_TR(0x4b3e0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b3e11:{NFSU2_TR(0x4b3e11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b3e14:{NFSU2_TR(0x4b3e14);
if(r1(R+518)){{goto L4b3e23;}}
}
B4b3e16:L4b3e16:{c.instructions+=2;NFSU2_TR(0x4b3e16);
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
B4b3e18:{NFSU2_TR(0x4b3e18);
if(r1(R+518)){{goto L4b3e30;}}
}
B4b3e1a:L4b3e1a:{c.instructions+=5;NFSU2_TR(0x4b3e1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3e1c:{NFSU2_TR(0x4b3e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3e1d:{NFSU2_TR(0x4b3e1d);
__builtin_memmove((R+4),(R+24),4);
}
B4b3e1f:{NFSU2_TR(0x4b3e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3e20:{NFSU2_TR(0x4b3e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b3e23:L4b3e23:{c.instructions+=2;NFSU2_TR(0x4b3e23);
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
B4b3e25:{NFSU2_TR(0x4b3e25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3e30;}}
}
B4b3e27:L4b3e27:{c.instructions+=5;NFSU2_TR(0x4b3e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3e29:{NFSU2_TR(0x4b3e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3e2a:{NFSU2_TR(0x4b3e2a);
__builtin_memmove((R+4),(R+24),4);
}
B4b3e2c:{NFSU2_TR(0x4b3e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3e2d:{NFSU2_TR(0x4b3e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b3e30:L4b3e30:{c.instructions+=3;NFSU2_TR(0x4b3e30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b3e31:{NFSU2_TR(0x4b3e31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3e32:{NFSU2_TR(0x4b3e32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3e40:L4b3e40:{c.instructions+=14;NFSU2_TR(0x4b3e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3e44:{NFSU2_TR(0x4b3e44);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3e48:{NFSU2_TR(0x4b3e48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3e49:{NFSU2_TR(0x4b3e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3e4a:{NFSU2_TR(0x4b3e4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3e4e:{NFSU2_TR(0x4b3e4e);
__builtin_memmove((R+24),(R+4),4);
}
B4b3e50:{NFSU2_TR(0x4b3e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3e54:{NFSU2_TR(0x4b3e54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3e55:{NFSU2_TR(0x4b3e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3e59:{NFSU2_TR(0x4b3e59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3e5a:{NFSU2_TR(0x4b3e5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3e5b:{NFSU2_TR(0x4b3e5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3e5c:{NFSU2_TR(0x4b3e5c);
__builtin_memmove((R+4),(R+24),4);
}
B4b3e5e:{NFSU2_TR(0x4b3e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3e63ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b3e63:L4b3e63:{c.instructions+=7;NFSU2_TR(0x4b3e63);
w4(R+4,u32(0x1ull));
}
B4b3e68:{NFSU2_TR(0x4b3e68);
u8 U[4];
w4(U+0,u32(0x791578ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3e6e:{NFSU2_TR(0x4b3e6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4b3e72:{NFSU2_TR(0x4b3e72);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4b3e77:{NFSU2_TR(0x4b3e77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b3e79:{NFSU2_TR(0x4b3e79);
w4(R+8,u32(0x2ull));
}
B4b3e7e:{NFSU2_TR(0x4b3e7e);
if(r1(R+518)){{goto L4b3ea2;}}
}
B4b3e80:L4b3e80:{c.instructions+=2;NFSU2_TR(0x4b3e80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3e83:{NFSU2_TR(0x4b3e83);
if(r1(R+518)){{goto L4b3ea2;}}
}
B4b3e85:L4b3e85:{c.instructions+=2;NFSU2_TR(0x4b3e85);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3e88:{NFSU2_TR(0x4b3e88);
if(r1(R+518)){{goto L4b3e9a;}}
}
B4b3e8a:L4b3e8a:{c.instructions+=2;NFSU2_TR(0x4b3e8a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3e8d:{NFSU2_TR(0x4b3e8d);
if(r1(R+518)){{goto L4b3e9a;}}
}
B4b3e8f:L4b3e8f:{c.instructions+=2;NFSU2_TR(0x4b3e8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3e92:{NFSU2_TR(0x4b3e92);
if(r1(R+518)){{goto L4b3e9a;}}
}
B4b3e94:L4b3e94:{c.instructions+=2;NFSU2_TR(0x4b3e94);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4b3e98:{NFSU2_TR(0x4b3e98);
{goto L4b3ea6;}
}
B4b3e9a:L4b3e9a:{c.instructions+=2;NFSU2_TR(0x4b3e9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4b3ea0:{NFSU2_TR(0x4b3ea0);
{goto L4b3ea6;}
}
B4b3ea2:L4b3ea2:{c.instructions+=1;NFSU2_TR(0x4b3ea2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4b3ea6:L4b3ea6:{c.instructions+=3;NFSU2_TR(0x4b3ea6);
__builtin_memmove((R+0),gp(0x8500ba),2);
}
B4b3eac:{NFSU2_TR(0x4b3eac);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+0),r2(U+10)));
w2(U+12,u16(u32(r2(R+0))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4b3eb0:{NFSU2_TR(0x4b3eb0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4b3f05;}}
}
B4b3eb2:L4b3eb2:{c.instructions+=3;NFSU2_TR(0x4b3eb2);
__builtin_memmove((R+0),gp(0x850088),4);
}
B4b3eb7:{NFSU2_TR(0x4b3eb7);
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
B4b3eb9:{NFSU2_TR(0x4b3eb9);
if(r1(R+518)){{goto L4b3ef7;}}
}
B4b3ebb:L4b3ebb:{c.instructions+=2;NFSU2_TR(0x4b3ebb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4b3ebe:{NFSU2_TR(0x4b3ebe);
if(r1(R+518)){{goto L4b3ef7;}}
}
B4b3ec0:L4b3ec0:{c.instructions+=2;NFSU2_TR(0x4b3ec0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3ec3:{NFSU2_TR(0x4b3ec3);
if(r1(R+518)){{goto L4b3ee0;}}
}
B4b3ec5:L4b3ec5:{c.instructions+=2;NFSU2_TR(0x4b3ec5);
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
B4b3ec8:{NFSU2_TR(0x4b3ec8);
if(r1(R+518)){{goto L4b3ee0;}}
}
B4b3eca:L4b3eca:{c.instructions+=2;NFSU2_TR(0x4b3eca);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3ecd:{NFSU2_TR(0x4b3ecd);
if(r1(R+518)){{goto L4b3ee0;}}
}
B4b3ecf:L4b3ecf:{c.instructions+=5;NFSU2_TR(0x4b3ecf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4b3ed3:{NFSU2_TR(0x4b3ed3);
__builtin_memmove((R+0),(R+24),4);
}
B4b3ed5:{NFSU2_TR(0x4b3ed5);
__builtin_memmove(gp(0x8500ba),(R+4),2);
}
B4b3edc:{NFSU2_TR(0x4b3edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3edd:{NFSU2_TR(0x4b3edd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3ee0:L4b3ee0:{c.instructions+=6;NFSU2_TR(0x4b3ee0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4b3ee6:{NFSU2_TR(0x4b3ee6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4b3eea:{NFSU2_TR(0x4b3eea);
__builtin_memmove((R+0),(R+24),4);
}
B4b3eec:{NFSU2_TR(0x4b3eec);
__builtin_memmove(gp(0x8500ba),(R+4),2);
}
B4b3ef3:{NFSU2_TR(0x4b3ef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3ef4:{NFSU2_TR(0x4b3ef4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3ef7:L4b3ef7:{c.instructions+=3;NFSU2_TR(0x4b3ef7);
__builtin_memmove((R+4),(R+8),2);
}
B4b3efa:{NFSU2_TR(0x4b3efa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4b3efe:{NFSU2_TR(0x4b3efe);
__builtin_memmove(gp(0x8500ba),(R+4),2);
}
B4b3f05:L4b3f05:{c.instructions+=3;NFSU2_TR(0x4b3f05);
__builtin_memmove((R+0),(R+24),4);
}
B4b3f07:{NFSU2_TR(0x4b3f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3f08:{NFSU2_TR(0x4b3f08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3f10:L4b3f10:{c.instructions+=6;NFSU2_TR(0x4b3f10);
w4(R+0,u32(m2(0x8500ba)));
}
B4b3f17:{NFSU2_TR(0x4b3f17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f18:{NFSU2_TR(0x4b3f18);
__builtin_memmove((R+24),(R+4),4);
}
B4b3f1a:{NFSU2_TR(0x4b3f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3f1e:{NFSU2_TR(0x4b3f1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b3f24:{NFSU2_TR(0x4b3f24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3f36;}}
}
B4b3f26:L4b3f26:{c.instructions+=4;NFSU2_TR(0x4b3f26);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4b3f2a:{NFSU2_TR(0x4b3f2a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4b3f2b:{NFSU2_TR(0x4b3f2b);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4b3f2d:{NFSU2_TR(0x4b3f2d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4b3f48;}}
}
B4b3f2f:L4b3f2f:{c.instructions+=2;NFSU2_TR(0x4b3f2f);
w4(R+0,u32(0xaull));
}
B4b3f34:{NFSU2_TR(0x4b3f34);
{goto L4b3f48;}
}
B4b3f36:L4b3f36:{c.instructions+=2;NFSU2_TR(0x4b3f36);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3f3c:{NFSU2_TR(0x4b3f3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b3f48;}}
}
B4b3f3e:L4b3f3e:{c.instructions+=3;NFSU2_TR(0x4b3f3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4b3f3f:{NFSU2_TR(0x4b3f3f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3f42:{NFSU2_TR(0x4b3f42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4b3f48;}}
}
B4b3f44:L4b3f44:{c.instructions+=1;NFSU2_TR(0x4b3f44);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4b3f48:L4b3f48:{c.instructions+=5;NFSU2_TR(0x4b3f48);
__builtin_memmove(gp(0x8500ba),(R+0),2);
}
B4b3f4e:{NFSU2_TR(0x4b3f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b3f50:{NFSU2_TR(0x4b3f50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f51:{NFSU2_TR(0x4b3f51);
__builtin_memmove((R+4),(R+24),4);
}
B4b3f53:{NFSU2_TR(0x4b3f53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3f56ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3f56:L4b3f56:{c.instructions+=3;NFSU2_TR(0x4b3f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b3f58:{NFSU2_TR(0x4b3f58);
__builtin_memmove((R+4),(R+24),4);
}
B4b3f5a:{NFSU2_TR(0x4b3f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3f5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b3f5d:L4b3f5d:{c.instructions+=2;NFSU2_TR(0x4b3f5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3f5e:{NFSU2_TR(0x4b3f5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3f70:L4b3f70:{c.instructions+=8;NFSU2_TR(0x4b3f70);
w4(R+0,u32(m2(0x8500ba)));
}
B4b3f77:{NFSU2_TR(0x4b3f77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f78:{NFSU2_TR(0x4b3f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f79:{NFSU2_TR(0x4b3f79);
__builtin_memmove((R+24),(R+4),4);
}
B4b3f7b:{NFSU2_TR(0x4b3f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3f7e:{NFSU2_TR(0x4b3f7e);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f83:{NFSU2_TR(0x4b3f83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f84:{NFSU2_TR(0x4b3f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3f89ull));
TAIL_STATIC(0x537be0u,537);
}
B4b3f89:L4b3f89:{c.instructions+=4;NFSU2_TR(0x4b3f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3f8c:{NFSU2_TR(0x4b3f8c);
u8 U[4];
w4(U+0,u32(0x48494e83ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f91:{NFSU2_TR(0x4b3f91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3f92:{NFSU2_TR(0x4b3f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3f97ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3f97:L4b3f97:{c.instructions+=3;NFSU2_TR(0x4b3f97);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b3f9a:{NFSU2_TR(0x4b3f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3f9b:{NFSU2_TR(0x4b3f9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3fa0:L4b3fa0:{c.instructions+=14;NFSU2_TR(0x4b3fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3fa4:{NFSU2_TR(0x4b3fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b3fa8:{NFSU2_TR(0x4b3fa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fa9:{NFSU2_TR(0x4b3fa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3faa:{NFSU2_TR(0x4b3faa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3fae:{NFSU2_TR(0x4b3fae);
__builtin_memmove((R+24),(R+4),4);
}
B4b3fb0:{NFSU2_TR(0x4b3fb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3fb4:{NFSU2_TR(0x4b3fb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fb5:{NFSU2_TR(0x4b3fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3fb9:{NFSU2_TR(0x4b3fb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fba:{NFSU2_TR(0x4b3fba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fbb:{NFSU2_TR(0x4b3fbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fbc:{NFSU2_TR(0x4b3fbc);
__builtin_memmove((R+4),(R+24),4);
}
B4b3fbe:{NFSU2_TR(0x4b3fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3fc3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b3fc3:L4b3fc3:{c.instructions+=4;NFSU2_TR(0x4b3fc3);
u8 U[4];
w4(U+0,u32(0x7915c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b3fc9:{NFSU2_TR(0x4b3fc9);
__builtin_memmove((R+0),(R+24),4);
}
B4b3fcb:{NFSU2_TR(0x4b3fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b3fcc:{NFSU2_TR(0x4b3fcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b3fd0:L4b3fd0:{c.instructions+=4;NFSU2_TR(0x4b3fd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fd1:{NFSU2_TR(0x4b3fd1);
__builtin_memmove((R+24),(R+4),4);
}
B4b3fd3:{NFSU2_TR(0x4b3fd3);
w4(R+4,u32(0x83aab4ull));
}
B4b3fd8:{NFSU2_TR(0x4b3fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3fddull));
TAIL_STATIC(0x502910u,502);
}
B4b3fdd:L4b3fdd:{c.instructions+=3;NFSU2_TR(0x4b3fdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4b3fe0:{NFSU2_TR(0x4b3fe0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b3fe2:{NFSU2_TR(0x4b3fe2);
if(r1(R+518)){{goto L4b3fef;}}
}
B4b3fe4:L4b3fe4:{c.instructions+=4;NFSU2_TR(0x4b3fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b3fe7:{NFSU2_TR(0x4b3fe7);
u8 U[4];
w4(U+0,u32(0x63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fec:{NFSU2_TR(0x4b3fec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3fed:{NFSU2_TR(0x4b3fed);
{goto L4b3ff8;}
}
B4b3fef:L4b3fef:{c.instructions+=3;NFSU2_TR(0x4b3fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b3ff2:{NFSU2_TR(0x4b3ff2);
u8 U[4];
w4(U+0,u32(0xccfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ff7:{NFSU2_TR(0x4b3ff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b3ff8:L4b3ff8:{c.instructions+=1;NFSU2_TR(0x4b3ff8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b3ffdull));
TAIL_STATIC(0x50c900u,50c);
}
B4b3ffd:L4b3ffd:{c.instructions+=1;NFSU2_TR(0x4b3ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x4b4000u,4b4);
}
XIT:NFSU2_TR_EXIT(0x4b3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
