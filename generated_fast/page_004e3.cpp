#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_49c(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4b4(u8* __restrict R,Cpu& c);
u32 body_4b5(u8* __restrict R,Cpu& c);
u32 body_4b6(u8* __restrict R,Cpu& c);
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 body_4ce(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4d0(u8* __restrict R,Cpu& c);
u32 body_4d1(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e3(u8* __restrict R,Cpu& c);
u32 page_4e3(Cpu& c){return body_4e3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e3002:goto L4e3002;
case 0x4e3005:c.instructions+=4;goto B4e3005;
case 0x4e300a:c.instructions+=3;goto B4e300a;
case 0x4e300b:c.instructions+=2;goto B4e300b;
case 0x4e3010:c.instructions+=1;goto B4e3010;
case 0x4e3015:goto L4e3015;
case 0x4e301b:c.instructions+=6;goto B4e301b;
case 0x4e3021:c.instructions+=5;goto B4e3021;
case 0x4e3024:c.instructions+=4;goto B4e3024;
case 0x4e3029:c.instructions+=3;goto B4e3029;
case 0x4e302f:c.instructions+=2;goto B4e302f;
case 0x4e3035:c.instructions+=1;goto B4e3035;
case 0x4e303a:goto L4e303a;
case 0x4e303d:c.instructions+=3;goto B4e303d;
case 0x4e303f:c.instructions+=2;goto B4e303f;
case 0x4e3049:c.instructions+=1;goto B4e3049;
case 0x4e304e:goto L4e304e;
case 0x4e3053:c.instructions+=2;goto B4e3053;
case 0x4e3056:c.instructions+=1;goto B4e3056;
case 0x4e305c:goto L4e305c;
case 0x4e3061:c.instructions+=1;goto B4e3061;
case 0x4e3067:goto L4e3067;
case 0x4e306a:c.instructions+=2;goto B4e306a;
case 0x4e306d:c.instructions+=1;goto B4e306d;
case 0x4e306f:goto L4e306f;
case 0x4e3074:c.instructions+=3;goto B4e3074;
case 0x4e3079:c.instructions+=2;goto B4e3079;
case 0x4e307a:c.instructions+=1;goto B4e307a;
case 0x4e307f:goto L4e307f;
case 0x4e3082:c.instructions+=2;goto B4e3082;
case 0x4e3083:c.instructions+=1;goto B4e3083;
case 0x4e3088:goto L4e3088;
case 0x4e308b:c.instructions+=5;goto B4e308b;
case 0x4e308d:c.instructions+=4;goto B4e308d;
case 0x4e3092:c.instructions+=3;goto B4e3092;
case 0x4e3097:c.instructions+=2;goto B4e3097;
case 0x4e3098:c.instructions+=1;goto B4e3098;
case 0x4e309d:goto L4e309d;
case 0x4e30a0:c.instructions+=3;goto B4e30a0;
case 0x4e30a5:c.instructions+=2;goto B4e30a5;
case 0x4e30a6:c.instructions+=1;goto B4e30a6;
case 0x4e30ab:goto L4e30ab;
case 0x4e30ac:c.instructions+=1;goto B4e30ac;
case 0x4e30b1:goto L4e30b1;
case 0x4e30b4:c.instructions+=1;goto B4e30b4;
case 0x4e30b9:goto L4e30b9;
case 0x4e30be:c.instructions+=3;goto B4e30be;
case 0x4e30c3:c.instructions+=2;goto B4e30c3;
case 0x4e30c4:c.instructions+=1;goto B4e30c4;
case 0x4e30c9:goto L4e30c9;
case 0x4e30cc:c.instructions+=2;goto B4e30cc;
case 0x4e30cd:c.instructions+=1;goto B4e30cd;
case 0x4e30d2:goto L4e30d2;
case 0x4e30d5:c.instructions+=5;goto B4e30d5;
case 0x4e30d7:c.instructions+=4;goto B4e30d7;
case 0x4e30dc:c.instructions+=3;goto B4e30dc;
case 0x4e30e1:c.instructions+=2;goto B4e30e1;
case 0x4e30e2:c.instructions+=1;goto B4e30e2;
case 0x4e30e7:goto L4e30e7;
case 0x4e30ea:c.instructions+=3;goto B4e30ea;
case 0x4e30ef:c.instructions+=2;goto B4e30ef;
case 0x4e30f0:c.instructions+=1;goto B4e30f0;
case 0x4e30f5:goto L4e30f5;
case 0x4e30f6:c.instructions+=1;goto B4e30f6;
case 0x4e30fb:goto L4e30fb;
case 0x4e30fe:c.instructions+=1;goto B4e30fe;
case 0x4e3103:goto L4e3103;
case 0x4e310a:c.instructions+=3;goto B4e310a;
case 0x4e3114:c.instructions+=2;goto B4e3114;
case 0x4e3117:c.instructions+=1;goto B4e3117;
case 0x4e3119:goto L4e3119;
case 0x4e311e:c.instructions+=1;goto B4e311e;
case 0x4e3120:goto L4e3120;
case 0x4e3125:goto L4e3125;
case 0x4e312a:c.instructions+=2;goto B4e312a;
case 0x4e312b:c.instructions+=1;goto B4e312b;
case 0x4e3130:goto L4e3130;
case 0x4e3133:c.instructions+=2;goto B4e3133;
case 0x4e3134:c.instructions+=1;goto B4e3134;
case 0x4e3139:goto L4e3139;
case 0x4e313e:c.instructions+=3;goto B4e313e;
case 0x4e3141:c.instructions+=2;goto B4e3141;
case 0x4e3144:c.instructions+=1;goto B4e3144;
case 0x4e3146:goto L4e3146;
case 0x4e3149:c.instructions+=5;goto B4e3149;
case 0x4e314b:c.instructions+=4;goto B4e314b;
case 0x4e3150:c.instructions+=3;goto B4e3150;
case 0x4e3155:c.instructions+=2;goto B4e3155;
case 0x4e3156:c.instructions+=1;goto B4e3156;
case 0x4e315b:goto L4e315b;
case 0x4e315e:goto L4e315e;
case 0x4e3161:c.instructions+=5;goto B4e3161;
case 0x4e3163:c.instructions+=4;goto B4e3163;
case 0x4e3168:c.instructions+=3;goto B4e3168;
case 0x4e316d:c.instructions+=2;goto B4e316d;
case 0x4e316e:c.instructions+=1;goto B4e316e;
case 0x4e3173:goto L4e3173;
case 0x4e3176:c.instructions+=3;goto B4e3176;
case 0x4e317b:c.instructions+=2;goto B4e317b;
case 0x4e317c:c.instructions+=1;goto B4e317c;
case 0x4e3181:goto L4e3181;
case 0x4e3182:c.instructions+=1;goto B4e3182;
case 0x4e3187:goto L4e3187;
case 0x4e318a:c.instructions+=3;goto B4e318a;
case 0x4e318f:c.instructions+=2;goto B4e318f;
case 0x4e3190:c.instructions+=1;goto B4e3190;
case 0x4e3195:goto L4e3195;
case 0x4e3196:c.instructions+=1;goto B4e3196;
case 0x4e319b:goto L4e319b;
case 0x4e319e:c.instructions+=3;goto B4e319e;
case 0x4e31a3:c.instructions+=2;goto B4e31a3;
case 0x4e31a4:c.instructions+=1;goto B4e31a4;
case 0x4e31a9:goto L4e31a9;
case 0x4e31ac:c.instructions+=2;goto B4e31ac;
case 0x4e31ae:c.instructions+=1;goto B4e31ae;
case 0x4e31b0:goto L4e31b0;
case 0x4e31b3:c.instructions+=6;goto B4e31b3;
case 0x4e31b6:c.instructions+=5;goto B4e31b6;
case 0x4e31bc:c.instructions+=4;goto B4e31bc;
case 0x4e31bd:c.instructions+=3;goto B4e31bd;
case 0x4e31be:c.instructions+=2;goto B4e31be;
case 0x4e31c4:c.instructions+=1;goto B4e31c4;
case 0x4e31c9:goto L4e31c9;
case 0x4e31cc:c.instructions+=2;goto B4e31cc;
case 0x4e31cf:c.instructions+=1;goto B4e31cf;
case 0x4e31d1:goto L4e31d1;
case 0x4e31d4:c.instructions+=3;goto B4e31d4;
case 0x4e31d9:c.instructions+=2;goto B4e31d9;
case 0x4e31da:c.instructions+=1;goto B4e31da;
case 0x4e31df:goto L4e31df;
case 0x4e31e0:c.instructions+=1;goto B4e31e0;
case 0x4e31e5:goto L4e31e5;
case 0x4e31eb:c.instructions+=1;goto B4e31eb;
case 0x4e31ed:goto L4e31ed;
case 0x4e31f0:c.instructions+=1;goto B4e31f0;
case 0x4e31f2:goto L4e31f2;
case 0x4e31f5:c.instructions+=3;goto B4e31f5;
case 0x4e31fa:c.instructions+=2;goto B4e31fa;
case 0x4e31fb:c.instructions+=1;goto B4e31fb;
case 0x4e3200:goto L4e3200;
case 0x4e3201:c.instructions+=1;goto B4e3201;
case 0x4e3206:goto L4e3206;
case 0x4e320c:goto L4e320c;
case 0x4e320f:goto L4e320f;
case 0x4e3212:c.instructions+=3;goto B4e3212;
case 0x4e3217:c.instructions+=2;goto B4e3217;
case 0x4e3218:c.instructions+=1;goto B4e3218;
case 0x4e321d:goto L4e321d;
case 0x4e3223:c.instructions+=4;goto B4e3223;
case 0x4e3226:c.instructions+=3;goto B4e3226;
case 0x4e3229:c.instructions+=2;goto B4e3229;
case 0x4e322b:c.instructions+=1;goto B4e322b;
case 0x4e322d:goto L4e322d;
case 0x4e3230:c.instructions+=3;goto B4e3230;
case 0x4e3233:c.instructions+=2;goto B4e3233;
case 0x4e3235:c.instructions+=1;goto B4e3235;
case 0x4e3237:goto L4e3237;
case 0x4e323a:c.instructions+=1;goto B4e323a;
case 0x4e323c:goto L4e323c;
case 0x4e3243:goto L4e3243;
case 0x4e3246:goto L4e3246;
case 0x4e3248:c.instructions+=2;goto B4e3248;
case 0x4e324e:c.instructions+=1;goto B4e324e;
case 0x4e3253:goto L4e3253;
case 0x4e3257:c.instructions+=8;goto B4e3257;
case 0x4e3258:c.instructions+=7;goto B4e3258;
case 0x4e325a:c.instructions+=6;goto B4e325a;
case 0x4e325b:c.instructions+=5;goto B4e325b;
case 0x4e325c:c.instructions+=4;goto B4e325c;
case 0x4e325d:c.instructions+=3;goto B4e325d;
case 0x4e3264:c.instructions+=2;goto B4e3264;
case 0x4e3267:c.instructions+=1;goto B4e3267;
case 0x4e3270:goto L4e3270;
case 0x4e3271:c.instructions+=5;goto B4e3271;
case 0x4e3273:c.instructions+=4;goto B4e3273;
case 0x4e3277:c.instructions+=3;goto B4e3277;
case 0x4e327a:c.instructions+=2;goto B4e327a;
case 0x4e327d:c.instructions+=1;goto B4e327d;
case 0x4e327f:goto L4e327f;
case 0x4e3282:c.instructions+=1;goto B4e3282;
case 0x4e3284:goto L4e3284;
case 0x4e3287:c.instructions+=1;goto B4e3287;
case 0x4e3289:goto L4e3289;
case 0x4e328c:c.instructions+=1;goto B4e328c;
case 0x4e328e:goto L4e328e;
case 0x4e3291:c.instructions+=1;goto B4e3291;
case 0x4e3293:goto L4e3293;
case 0x4e3295:goto L4e3295;
case 0x4e3298:c.instructions+=1;goto B4e3298;
case 0x4e329a:goto L4e329a;
case 0x4e329d:c.instructions+=3;goto B4e329d;
case 0x4e32a0:c.instructions+=2;goto B4e32a0;
case 0x4e32a2:c.instructions+=1;goto B4e32a2;
case 0x4e32a4:goto L4e32a4;
case 0x4e32a7:c.instructions+=1;goto B4e32a7;
case 0x4e32a9:goto L4e32a9;
case 0x4e32b0:goto L4e32b0;
case 0x4e32b3:c.instructions+=4;goto B4e32b3;
case 0x4e32b4:c.instructions+=3;goto B4e32b4;
case 0x4e32b5:c.instructions+=2;goto B4e32b5;
case 0x4e32b7:c.instructions+=1;goto B4e32b7;
case 0x4e32bc:goto L4e32bc;
case 0x4e32bf:c.instructions+=3;goto B4e32bf;
case 0x4e32c2:c.instructions+=2;goto B4e32c2;
case 0x4e32c4:c.instructions+=1;goto B4e32c4;
case 0x4e32c6:goto L4e32c6;
case 0x4e32c9:c.instructions+=1;goto B4e32c9;
case 0x4e32cb:goto L4e32cb;
case 0x4e32d2:goto L4e32d2;
case 0x4e32d3:c.instructions+=2;goto B4e32d3;
case 0x4e32d6:c.instructions+=1;goto B4e32d6;
case 0x4e32db:goto L4e32db;
case 0x4e32dd:c.instructions+=1;goto B4e32dd;
case 0x4e32e2:goto L4e32e2;
case 0x4e32e8:c.instructions+=1;goto B4e32e8;
case 0x4e32ee:goto L4e32ee;
case 0x4e32ef:c.instructions+=1;goto B4e32ef;
case 0x4e3300:goto L4e3300;
case 0x4e3302:c.instructions+=12;goto B4e3302;
case 0x4e3307:c.instructions+=11;goto B4e3307;
case 0x4e330d:c.instructions+=10;goto B4e330d;
case 0x4e330e:c.instructions+=9;goto B4e330e;
case 0x4e3315:c.instructions+=8;goto B4e3315;
case 0x4e3316:c.instructions+=7;goto B4e3316;
case 0x4e3317:c.instructions+=6;goto B4e3317;
case 0x4e3318:c.instructions+=5;goto B4e3318;
case 0x4e331c:c.instructions+=4;goto B4e331c;
case 0x4e331e:c.instructions+=3;goto B4e331e;
case 0x4e331f:c.instructions+=2;goto B4e331f;
case 0x4e3323:c.instructions+=1;goto B4e3323;
case 0x4e3328:goto L4e3328;
case 0x4e332e:c.instructions+=7;goto B4e332e;
case 0x4e3333:c.instructions+=6;goto B4e3333;
case 0x4e3338:c.instructions+=5;goto B4e3338;
case 0x4e333b:c.instructions+=4;goto B4e333b;
case 0x4e3341:c.instructions+=3;goto B4e3341;
case 0x4e3343:c.instructions+=2;goto B4e3343;
case 0x4e334b:c.instructions+=1;goto B4e334b;
case 0x4e3350:goto L4e3350;
case 0x4e3352:c.instructions+=1;goto B4e3352;
case 0x4e3357:goto L4e3357;
case 0x4e335d:c.instructions+=4;goto B4e335d;
case 0x4e335f:c.instructions+=3;goto B4e335f;
case 0x4e3360:c.instructions+=2;goto B4e3360;
case 0x4e3367:c.instructions+=1;goto B4e3367;
case 0x4e336c:goto L4e336c;
case 0x4e3370:c.instructions+=7;goto B4e3370;
case 0x4e3373:c.instructions+=6;goto B4e3373;
case 0x4e3374:c.instructions+=5;goto B4e3374;
case 0x4e3376:c.instructions+=4;goto B4e3376;
case 0x4e3377:c.instructions+=3;goto B4e3377;
case 0x4e337e:c.instructions+=2;goto B4e337e;
case 0x4e3381:c.instructions+=1;goto B4e3381;
case 0x4e3390:goto L4e3390;
case 0x4e3391:c.instructions+=5;goto B4e3391;
case 0x4e3392:c.instructions+=4;goto B4e3392;
case 0x4e3394:c.instructions+=3;goto B4e3394;
case 0x4e3397:c.instructions+=2;goto B4e3397;
case 0x4e3399:c.instructions+=1;goto B4e3399;
case 0x4e339b:goto L4e339b;
case 0x4e33a1:c.instructions+=5;goto B4e33a1;
case 0x4e33a6:c.instructions+=4;goto B4e33a6;
case 0x4e33ab:c.instructions+=3;goto B4e33ab;
case 0x4e33ac:c.instructions+=2;goto B4e33ac;
case 0x4e33b0:c.instructions+=1;goto B4e33b0;
case 0x4e33b5:goto L4e33b5;
case 0x4e33bb:c.instructions+=5;goto B4e33bb;
case 0x4e33be:c.instructions+=4;goto B4e33be;
case 0x4e33bf:c.instructions+=3;goto B4e33bf;
case 0x4e33c2:c.instructions+=2;goto B4e33c2;
case 0x4e33c5:c.instructions+=1;goto B4e33c5;
case 0x4e33ca:goto L4e33ca;
case 0x4e33d0:c.instructions+=2;goto B4e33d0;
case 0x4e33d1:c.instructions+=1;goto B4e33d1;
case 0x4e33d6:goto L4e33d6;
case 0x4e33d9:c.instructions+=1;goto B4e33d9;
case 0x4e33dc:goto L4e33dc;
case 0x4e33e2:c.instructions+=2;goto B4e33e2;
case 0x4e33e3:c.instructions+=1;goto B4e33e3;
case 0x4e33e8:goto L4e33e8;
case 0x4e33eb:c.instructions+=4;goto B4e33eb;
case 0x4e33ef:c.instructions+=3;goto B4e33ef;
case 0x4e33f2:c.instructions+=2;goto B4e33f2;
case 0x4e33f4:c.instructions+=1;goto B4e33f4;
case 0x4e33f6:goto L4e33f6;
case 0x4e33f8:c.instructions+=1;goto B4e33f8;
case 0x4e33fa:goto L4e33fa;
case 0x4e33fd:c.instructions+=3;goto B4e33fd;
case 0x4e3402:c.instructions+=2;goto B4e3402;
case 0x4e3404:c.instructions+=1;goto B4e3404;
case 0x4e3406:goto L4e3406;
case 0x4e3410:goto L4e3410;
case 0x4e3416:c.instructions+=7;goto B4e3416;
case 0x4e341a:c.instructions+=6;goto B4e341a;
case 0x4e341c:c.instructions+=5;goto B4e341c;
case 0x4e341e:c.instructions+=4;goto B4e341e;
case 0x4e3421:c.instructions+=3;goto B4e3421;
case 0x4e3422:c.instructions+=2;goto B4e3422;
case 0x4e3424:c.instructions+=1;goto B4e3424;
case 0x4e3426:goto L4e3426;
case 0x4e3429:c.instructions+=9;goto B4e3429;
case 0x4e342f:c.instructions+=8;goto B4e342f;
case 0x4e3432:c.instructions+=7;goto B4e3432;
case 0x4e3435:c.instructions+=6;goto B4e3435;
case 0x4e3436:c.instructions+=5;goto B4e3436;
case 0x4e3438:c.instructions+=4;goto B4e3438;
case 0x4e343b:c.instructions+=3;goto B4e343b;
case 0x4e343e:c.instructions+=2;goto B4e343e;
case 0x4e3440:c.instructions+=1;goto B4e3440;
case 0x4e3442:goto L4e3442;
case 0x4e3445:goto L4e3445;
case 0x4e3447:c.instructions+=1;goto B4e3447;
case 0x4e344c:goto L4e344c;
case 0x4e344f:c.instructions+=3;goto B4e344f;
case 0x4e3451:c.instructions+=2;goto B4e3451;
case 0x4e3452:c.instructions+=1;goto B4e3452;
case 0x4e3457:goto L4e3457;
case 0x4e345a:goto L4e345a;
case 0x4e345d:c.instructions+=2;goto B4e345d;
case 0x4e345f:c.instructions+=1;goto B4e345f;
case 0x4e3461:goto L4e3461;
case 0x4e3464:c.instructions+=1;goto B4e3464;
case 0x4e3466:goto L4e3466;
case 0x4e3468:c.instructions+=3;goto B4e3468;
case 0x4e346b:c.instructions+=2;goto B4e346b;
case 0x4e3472:c.instructions+=1;goto B4e3472;
case 0x4e3474:goto L4e3474;
case 0x4e3478:goto L4e3478;
case 0x4e347a:c.instructions+=1;goto B4e347a;
case 0x4e347f:goto L4e347f;
case 0x4e3482:c.instructions+=3;goto B4e3482;
case 0x4e3484:c.instructions+=2;goto B4e3484;
case 0x4e3485:c.instructions+=1;goto B4e3485;
case 0x4e348a:goto L4e348a;
case 0x4e348d:goto L4e348d;
case 0x4e348e:c.instructions+=2;goto B4e348e;
case 0x4e348f:c.instructions+=1;goto B4e348f;
case 0x4e34a0:goto L4e34a0;
case 0x4e34a2:c.instructions+=7;goto B4e34a2;
case 0x4e34a7:c.instructions+=6;goto B4e34a7;
case 0x4e34ad:c.instructions+=5;goto B4e34ad;
case 0x4e34ae:c.instructions+=4;goto B4e34ae;
case 0x4e34b5:c.instructions+=3;goto B4e34b5;
case 0x4e34b6:c.instructions+=2;goto B4e34b6;
case 0x4e34b8:c.instructions+=1;goto B4e34b8;
case 0x4e34bd:goto L4e34bd;
case 0x4e34c0:c.instructions+=4;goto B4e34c0;
case 0x4e34c4:c.instructions+=3;goto B4e34c4;
case 0x4e34c6:c.instructions+=2;goto B4e34c6;
case 0x4e34ce:c.instructions+=1;goto B4e34ce;
case 0x4e34d0:goto L4e34d0;
case 0x4e34d4:c.instructions+=3;goto B4e34d4;
case 0x4e34d5:c.instructions+=2;goto B4e34d5;
case 0x4e34d7:c.instructions+=1;goto B4e34d7;
case 0x4e34dc:goto L4e34dc;
case 0x4e34e0:c.instructions+=3;goto B4e34e0;
case 0x4e34e7:c.instructions+=2;goto B4e34e7;
case 0x4e34ea:c.instructions+=1;goto B4e34ea;
case 0x4e34eb:goto L4e34eb;
case 0x4e34ef:c.instructions+=4;goto B4e34ef;
case 0x4e34f1:c.instructions+=3;goto B4e34f1;
case 0x4e34f8:c.instructions+=2;goto B4e34f8;
case 0x4e34fb:c.instructions+=1;goto B4e34fb;
case 0x4e3500:goto L4e3500;
case 0x4e3502:c.instructions+=7;goto B4e3502;
case 0x4e3507:c.instructions+=6;goto B4e3507;
case 0x4e350d:c.instructions+=5;goto B4e350d;
case 0x4e350e:c.instructions+=4;goto B4e350e;
case 0x4e3515:c.instructions+=3;goto B4e3515;
case 0x4e3516:c.instructions+=2;goto B4e3516;
case 0x4e351b:c.instructions+=1;goto B4e351b;
case 0x4e3520:goto L4e3520;
case 0x4e3523:c.instructions+=4;goto B4e3523;
case 0x4e3527:c.instructions+=3;goto B4e3527;
case 0x4e3529:c.instructions+=2;goto B4e3529;
case 0x4e3531:c.instructions+=1;goto B4e3531;
case 0x4e3533:goto L4e3533;
case 0x4e3537:c.instructions+=3;goto B4e3537;
case 0x4e3538:c.instructions+=2;goto B4e3538;
case 0x4e353a:c.instructions+=1;goto B4e353a;
case 0x4e353f:goto L4e353f;
case 0x4e3543:c.instructions+=3;goto B4e3543;
case 0x4e354a:c.instructions+=2;goto B4e354a;
case 0x4e354d:c.instructions+=1;goto B4e354d;
case 0x4e354e:goto L4e354e;
case 0x4e3552:c.instructions+=4;goto B4e3552;
case 0x4e3554:c.instructions+=3;goto B4e3554;
case 0x4e355b:c.instructions+=2;goto B4e355b;
case 0x4e355e:c.instructions+=1;goto B4e355e;
case 0x4e3560:goto L4e3560;
case 0x4e3562:c.instructions+=11;goto B4e3562;
case 0x4e3567:c.instructions+=10;goto B4e3567;
case 0x4e356d:c.instructions+=9;goto B4e356d;
case 0x4e356e:c.instructions+=8;goto B4e356e;
case 0x4e3575:c.instructions+=7;goto B4e3575;
case 0x4e3576:c.instructions+=6;goto B4e3576;
case 0x4e357a:c.instructions+=5;goto B4e357a;
case 0x4e357b:c.instructions+=4;goto B4e357b;
case 0x4e357d:c.instructions+=3;goto B4e357d;
case 0x4e357e:c.instructions+=2;goto B4e357e;
case 0x4e3582:c.instructions+=1;goto B4e3582;
case 0x4e3587:goto L4e3587;
case 0x4e358d:c.instructions+=4;goto B4e358d;
case 0x4e3594:c.instructions+=3;goto B4e3594;
case 0x4e3597:c.instructions+=2;goto B4e3597;
case 0x4e359f:c.instructions+=1;goto B4e359f;
case 0x4e35a1:goto L4e35a1;
case 0x4e35a6:c.instructions+=3;goto B4e35a6;
case 0x4e35a7:c.instructions+=2;goto B4e35a7;
case 0x4e35ae:c.instructions+=1;goto B4e35ae;
case 0x4e35b3:goto L4e35b3;
case 0x4e35b4:c.instructions+=1;goto B4e35b4;
case 0x4e35b9:goto L4e35b9;
case 0x4e35bc:c.instructions+=5;goto B4e35bc;
case 0x4e35be:c.instructions+=4;goto B4e35be;
case 0x4e35c3:c.instructions+=3;goto B4e35c3;
case 0x4e35c8:c.instructions+=2;goto B4e35c8;
case 0x4e35c9:c.instructions+=1;goto B4e35c9;
case 0x4e35ce:goto L4e35ce;
case 0x4e35d1:c.instructions+=5;goto B4e35d1;
case 0x4e35d4:c.instructions+=4;goto B4e35d4;
case 0x4e35d9:c.instructions+=3;goto B4e35d9;
case 0x4e35de:c.instructions+=2;goto B4e35de;
case 0x4e35df:c.instructions+=1;goto B4e35df;
case 0x4e35e4:goto L4e35e4;
case 0x4e35e7:c.instructions+=2;goto B4e35e7;
case 0x4e35e8:c.instructions+=1;goto B4e35e8;
case 0x4e35ed:goto L4e35ed;
case 0x4e35f0:c.instructions+=5;goto B4e35f0;
case 0x4e35f2:c.instructions+=4;goto B4e35f2;
case 0x4e35f7:c.instructions+=3;goto B4e35f7;
case 0x4e35fc:c.instructions+=2;goto B4e35fc;
case 0x4e35fd:c.instructions+=1;goto B4e35fd;
case 0x4e3602:goto L4e3602;
case 0x4e3605:c.instructions+=1;goto B4e3605;
case 0x4e3607:goto L4e3607;
case 0x4e3608:c.instructions+=3;goto B4e3608;
case 0x4e360d:c.instructions+=2;goto B4e360d;
case 0x4e360e:c.instructions+=1;goto B4e360e;
case 0x4e3613:goto L4e3613;
case 0x4e3614:c.instructions+=1;goto B4e3614;
case 0x4e3619:goto L4e3619;
case 0x4e361c:c.instructions+=2;goto B4e361c;
case 0x4e3621:c.instructions+=1;goto B4e3621;
case 0x4e3626:goto L4e3626;
case 0x4e3627:c.instructions+=2;goto B4e3627;
case 0x4e3628:c.instructions+=1;goto B4e3628;
case 0x4e362d:goto L4e362d;
case 0x4e362e:c.instructions+=1;goto B4e362e;
case 0x4e3633:goto L4e3633;
case 0x4e3636:c.instructions+=1;goto B4e3636;
case 0x4e3637:goto L4e3637;
case 0x4e3639:c.instructions+=1;goto B4e3639;
case 0x4e363e:goto L4e363e;
case 0x4e3641:c.instructions+=2;goto B4e3641;
case 0x4e3643:c.instructions+=1;goto B4e3643;
case 0x4e3648:goto L4e3648;
case 0x4e364f:c.instructions+=1;goto B4e364f;
case 0x4e3651:goto L4e3651;
case 0x4e3654:c.instructions+=6;goto B4e3654;
case 0x4e3657:c.instructions+=5;goto B4e3657;
case 0x4e365d:c.instructions+=4;goto B4e365d;
case 0x4e365e:c.instructions+=3;goto B4e365e;
case 0x4e365f:c.instructions+=2;goto B4e365f;
case 0x4e3665:c.instructions+=1;goto B4e3665;
case 0x4e366a:goto L4e366a;
case 0x4e366e:c.instructions+=5;goto B4e366e;
case 0x4e3670:c.instructions+=4;goto B4e3670;
case 0x4e3671:c.instructions+=3;goto B4e3671;
case 0x4e3678:c.instructions+=2;goto B4e3678;
case 0x4e367b:c.instructions+=1;goto B4e367b;
case 0x4e3680:goto L4e3680;
case 0x4e3681:c.instructions+=2;goto B4e3681;
case 0x4e3683:c.instructions+=1;goto B4e3683;
case 0x4e3688:goto L4e3688;
case 0x4e368d:c.instructions+=1;goto B4e368d;
case 0x4e368f:goto L4e368f;
case 0x4e3690:c.instructions+=1;goto B4e3690;
case 0x4e3695:goto L4e3695;
case 0x4e3698:goto L4e3698;
case 0x4e369a:c.instructions+=2;goto B4e369a;
case 0x4e369b:c.instructions+=1;goto B4e369b;
case 0x4e36a0:goto L4e36a0;
case 0x4e36a6:c.instructions+=1;goto B4e36a6;
case 0x4e36b0:goto L4e36b0;
case 0x4e36b2:c.instructions+=7;goto B4e36b2;
case 0x4e36b7:c.instructions+=6;goto B4e36b7;
case 0x4e36bd:c.instructions+=5;goto B4e36bd;
case 0x4e36be:c.instructions+=4;goto B4e36be;
case 0x4e36c5:c.instructions+=3;goto B4e36c5;
case 0x4e36c6:c.instructions+=2;goto B4e36c6;
case 0x4e36cb:c.instructions+=1;goto B4e36cb;
case 0x4e36d0:goto L4e36d0;
case 0x4e36d3:c.instructions+=4;goto B4e36d3;
case 0x4e36d7:c.instructions+=3;goto B4e36d7;
case 0x4e36d9:c.instructions+=2;goto B4e36d9;
case 0x4e36e1:c.instructions+=1;goto B4e36e1;
case 0x4e36e3:goto L4e36e3;
case 0x4e36e7:c.instructions+=3;goto B4e36e7;
case 0x4e36e8:c.instructions+=2;goto B4e36e8;
case 0x4e36ea:c.instructions+=1;goto B4e36ea;
case 0x4e36ef:goto L4e36ef;
case 0x4e36f3:c.instructions+=3;goto B4e36f3;
case 0x4e36fa:c.instructions+=2;goto B4e36fa;
case 0x4e36fd:c.instructions+=1;goto B4e36fd;
case 0x4e36fe:goto L4e36fe;
case 0x4e3702:c.instructions+=4;goto B4e3702;
case 0x4e3704:c.instructions+=3;goto B4e3704;
case 0x4e370b:c.instructions+=2;goto B4e370b;
case 0x4e370e:c.instructions+=1;goto B4e370e;
case 0x4e3710:goto L4e3710;
case 0x4e3712:c.instructions+=7;goto B4e3712;
case 0x4e3717:c.instructions+=6;goto B4e3717;
case 0x4e371d:c.instructions+=5;goto B4e371d;
case 0x4e371e:c.instructions+=4;goto B4e371e;
case 0x4e3725:c.instructions+=3;goto B4e3725;
case 0x4e3726:c.instructions+=2;goto B4e3726;
case 0x4e372b:c.instructions+=1;goto B4e372b;
case 0x4e3730:goto L4e3730;
case 0x4e3733:c.instructions+=4;goto B4e3733;
case 0x4e3737:c.instructions+=3;goto B4e3737;
case 0x4e3739:c.instructions+=2;goto B4e3739;
case 0x4e3741:c.instructions+=1;goto B4e3741;
case 0x4e3743:goto L4e3743;
case 0x4e3747:c.instructions+=3;goto B4e3747;
case 0x4e3748:c.instructions+=2;goto B4e3748;
case 0x4e374a:c.instructions+=1;goto B4e374a;
case 0x4e374f:goto L4e374f;
case 0x4e3753:c.instructions+=3;goto B4e3753;
case 0x4e375a:c.instructions+=2;goto B4e375a;
case 0x4e375d:c.instructions+=1;goto B4e375d;
case 0x4e375e:goto L4e375e;
case 0x4e3762:c.instructions+=4;goto B4e3762;
case 0x4e3764:c.instructions+=3;goto B4e3764;
case 0x4e376b:c.instructions+=2;goto B4e376b;
case 0x4e376e:c.instructions+=1;goto B4e376e;
case 0x4e3770:goto L4e3770;
case 0x4e3772:c.instructions+=7;goto B4e3772;
case 0x4e3777:c.instructions+=6;goto B4e3777;
case 0x4e377d:c.instructions+=5;goto B4e377d;
case 0x4e377e:c.instructions+=4;goto B4e377e;
case 0x4e3785:c.instructions+=3;goto B4e3785;
case 0x4e3786:c.instructions+=2;goto B4e3786;
case 0x4e378b:c.instructions+=1;goto B4e378b;
case 0x4e3790:goto L4e3790;
case 0x4e3793:c.instructions+=4;goto B4e3793;
case 0x4e3797:c.instructions+=3;goto B4e3797;
case 0x4e3799:c.instructions+=2;goto B4e3799;
case 0x4e37a1:c.instructions+=1;goto B4e37a1;
case 0x4e37a3:goto L4e37a3;
case 0x4e37a7:c.instructions+=3;goto B4e37a7;
case 0x4e37a8:c.instructions+=2;goto B4e37a8;
case 0x4e37aa:c.instructions+=1;goto B4e37aa;
case 0x4e37af:goto L4e37af;
case 0x4e37b3:c.instructions+=3;goto B4e37b3;
case 0x4e37ba:c.instructions+=2;goto B4e37ba;
case 0x4e37bd:c.instructions+=1;goto B4e37bd;
case 0x4e37be:goto L4e37be;
case 0x4e37c2:c.instructions+=4;goto B4e37c2;
case 0x4e37c4:c.instructions+=3;goto B4e37c4;
case 0x4e37cb:c.instructions+=2;goto B4e37cb;
case 0x4e37ce:c.instructions+=1;goto B4e37ce;
case 0x4e37d0:goto L4e37d0;
case 0x4e37d1:c.instructions+=15;goto B4e37d1;
case 0x4e37d3:c.instructions+=14;goto B4e37d3;
case 0x4e37d6:c.instructions+=13;goto B4e37d6;
case 0x4e37d8:c.instructions+=12;goto B4e37d8;
case 0x4e37dd:c.instructions+=11;goto B4e37dd;
case 0x4e37e3:c.instructions+=10;goto B4e37e3;
case 0x4e37e4:c.instructions+=9;goto B4e37e4;
case 0x4e37eb:c.instructions+=8;goto B4e37eb;
case 0x4e37f1:c.instructions+=7;goto B4e37f1;
case 0x4e37f2:c.instructions+=6;goto B4e37f2;
case 0x4e37f3:c.instructions+=5;goto B4e37f3;
case 0x4e37f5:c.instructions+=4;goto B4e37f5;
case 0x4e37f8:c.instructions+=3;goto B4e37f8;
case 0x4e37fa:c.instructions+=2;goto B4e37fa;
case 0x4e37fb:c.instructions+=1;goto B4e37fb;
case 0x4e3801:goto L4e3801;
case 0x4e3804:c.instructions+=3;goto B4e3804;
case 0x4e3806:c.instructions+=2;goto B4e3806;
case 0x4e380c:c.instructions+=1;goto B4e380c;
case 0x4e380e:goto L4e380e;
case 0x4e3811:c.instructions+=2;goto B4e3811;
case 0x4e3813:c.instructions+=1;goto B4e3813;
case 0x4e3815:goto L4e3815;
case 0x4e3816:c.instructions+=1;goto B4e3816;
case 0x4e381b:goto L4e381b;
case 0x4e381d:c.instructions+=2;goto B4e381d;
case 0x4e381f:c.instructions+=1;goto B4e381f;
case 0x4e3821:goto L4e3821;
case 0x4e3824:c.instructions+=1;goto B4e3824;
case 0x4e3826:goto L4e3826;
case 0x4e3828:c.instructions+=1;goto B4e3828;
case 0x4e382d:goto L4e382d;
case 0x4e3831:c.instructions+=9;goto B4e3831;
case 0x4e3833:c.instructions+=8;goto B4e3833;
case 0x4e383a:c.instructions+=7;goto B4e383a;
case 0x4e3841:c.instructions+=6;goto B4e3841;
case 0x4e3842:c.instructions+=5;goto B4e3842;
case 0x4e3843:c.instructions+=4;goto B4e3843;
case 0x4e3844:c.instructions+=3;goto B4e3844;
case 0x4e3846:c.instructions+=2;goto B4e3846;
case 0x4e3847:c.instructions+=1;goto B4e3847;
case 0x4e384a:goto L4e384a;
case 0x4e384d:c.instructions+=1;goto B4e384d;
case 0x4e384f:goto L4e384f;
case 0x4e3853:goto L4e3853;
case 0x4e3855:c.instructions+=8;goto B4e3855;
case 0x4e385c:c.instructions+=7;goto B4e385c;
case 0x4e3863:c.instructions+=6;goto B4e3863;
case 0x4e3864:c.instructions+=5;goto B4e3864;
case 0x4e3865:c.instructions+=4;goto B4e3865;
case 0x4e3866:c.instructions+=3;goto B4e3866;
case 0x4e3868:c.instructions+=2;goto B4e3868;
case 0x4e3869:c.instructions+=1;goto B4e3869;
case 0x4e386c:goto L4e386c;
case 0x4e386e:c.instructions+=2;goto B4e386e;
case 0x4e3871:c.instructions+=1;goto B4e3871;
case 0x4e3873:goto L4e3873;
case 0x4e3876:c.instructions+=1;goto B4e3876;
case 0x4e3878:goto L4e3878;
case 0x4e387a:c.instructions+=2;goto B4e387a;
case 0x4e387f:c.instructions+=1;goto B4e387f;
case 0x4e3884:goto L4e3884;
case 0x4e3886:goto L4e3886;
case 0x4e388a:c.instructions+=1;goto B4e388a;
case 0x4e388f:goto L4e388f;
case 0x4e3891:c.instructions+=6;goto B4e3891;
case 0x4e3895:c.instructions+=5;goto B4e3895;
case 0x4e3896:c.instructions+=4;goto B4e3896;
case 0x4e3898:c.instructions+=3;goto B4e3898;
case 0x4e389d:c.instructions+=2;goto B4e389d;
case 0x4e38a8:c.instructions+=1;goto B4e38a8;
case 0x4e38ad:goto L4e38ad;
case 0x4e38b1:c.instructions+=2;goto B4e38b1;
case 0x4e38b2:c.instructions+=1;goto B4e38b2;
case 0x4e38b7:goto L4e38b7;
case 0x4e38b9:c.instructions+=1;goto B4e38b9;
case 0x4e38be:goto L4e38be;
case 0x4e38bf:c.instructions+=2;goto B4e38bf;
case 0x4e38c4:c.instructions+=1;goto B4e38c4;
case 0x4e38c9:goto L4e38c9;
case 0x4e38cb:c.instructions+=1;goto B4e38cb;
case 0x4e38d0:goto L4e38d0;
case 0x4e38d2:c.instructions+=1;goto B4e38d2;
case 0x4e38d4:goto L4e38d4;
case 0x4e38d6:c.instructions+=2;goto B4e38d6;
case 0x4e38db:c.instructions+=1;goto B4e38db;
case 0x4e38e0:goto L4e38e0;
case 0x4e38e7:c.instructions+=2;goto B4e38e7;
case 0x4e38f2:c.instructions+=1;goto B4e38f2;
case 0x4e38f7:goto L4e38f7;
case 0x4e38fa:c.instructions+=1;goto B4e38fa;
case 0x4e38fc:goto L4e38fc;
case 0x4e38ff:c.instructions+=2;goto B4e38ff;
case 0x4e3901:c.instructions+=1;goto B4e3901;
case 0x4e3903:goto L4e3903;
case 0x4e3905:c.instructions+=2;goto B4e3905;
case 0x4e390a:c.instructions+=1;goto B4e390a;
case 0x4e390f:goto L4e390f;
case 0x4e3912:c.instructions+=1;goto B4e3912;
case 0x4e3916:goto L4e3916;
case 0x4e3918:c.instructions+=2;goto B4e3918;
case 0x4e391a:c.instructions+=1;goto B4e391a;
case 0x4e391c:goto L4e391c;
case 0x4e391d:c.instructions+=1;goto B4e391d;
case 0x4e3922:goto L4e3922;
case 0x4e3925:c.instructions+=1;goto B4e3925;
case 0x4e392b:goto L4e392b;
case 0x4e3930:c.instructions+=8;goto B4e3930;
case 0x4e3937:c.instructions+=7;goto B4e3937;
case 0x4e393e:c.instructions+=6;goto B4e393e;
case 0x4e393f:c.instructions+=5;goto B4e393f;
case 0x4e3940:c.instructions+=4;goto B4e3940;
case 0x4e3941:c.instructions+=3;goto B4e3941;
case 0x4e3943:c.instructions+=2;goto B4e3943;
case 0x4e3944:c.instructions+=1;goto B4e3944;
case 0x4e3947:goto L4e3947;
case 0x4e394e:c.instructions+=8;goto B4e394e;
case 0x4e394f:c.instructions+=7;goto B4e394f;
case 0x4e3950:c.instructions+=6;goto B4e3950;
case 0x4e3952:c.instructions+=5;goto B4e3952;
case 0x4e3959:c.instructions+=4;goto B4e3959;
case 0x4e395a:c.instructions+=3;goto B4e395a;
case 0x4e395c:c.instructions+=2;goto B4e395c;
case 0x4e395d:c.instructions+=1;goto B4e395d;
case 0x4e3960:goto L4e3960;
case 0x4e3962:c.instructions+=30;goto B4e3962;
case 0x4e3967:c.instructions+=29;goto B4e3967;
case 0x4e396d:c.instructions+=28;goto B4e396d;
case 0x4e396e:c.instructions+=27;goto B4e396e;
case 0x4e3975:c.instructions+=26;goto B4e3975;
case 0x4e3976:c.instructions+=25;goto B4e3976;
case 0x4e3977:c.instructions+=24;goto B4e3977;
case 0x4e3978:c.instructions+=23;goto B4e3978;
case 0x4e3979:c.instructions+=22;goto B4e3979;
case 0x4e397a:c.instructions+=21;goto B4e397a;
case 0x4e397c:c.instructions+=20;goto B4e397c;
case 0x4e3982:c.instructions+=19;goto B4e3982;
case 0x4e3988:c.instructions+=18;goto B4e3988;
case 0x4e398f:c.instructions+=17;goto B4e398f;
case 0x4e3993:c.instructions+=16;goto B4e3993;
case 0x4e3995:c.instructions+=15;goto B4e3995;
case 0x4e3998:c.instructions+=14;goto B4e3998;
case 0x4e399c:c.instructions+=13;goto B4e399c;
case 0x4e39a0:c.instructions+=12;goto B4e39a0;
case 0x4e39a2:c.instructions+=11;goto B4e39a2;
case 0x4e39a8:c.instructions+=10;goto B4e39a8;
case 0x4e39ae:c.instructions+=9;goto B4e39ae;
case 0x4e39b4:c.instructions+=8;goto B4e39b4;
case 0x4e39ba:c.instructions+=7;goto B4e39ba;
case 0x4e39c0:c.instructions+=6;goto B4e39c0;
case 0x4e39c5:c.instructions+=5;goto B4e39c5;
case 0x4e39c6:c.instructions+=4;goto B4e39c6;
case 0x4e39c8:c.instructions+=3;goto B4e39c8;
case 0x4e39cc:c.instructions+=2;goto B4e39cc;
case 0x4e39ce:c.instructions+=1;goto B4e39ce;
case 0x4e39d3:goto L4e39d3;
case 0x4e39d5:c.instructions+=1;goto B4e39d5;
case 0x4e39d7:goto L4e39d7;
case 0x4e39d9:c.instructions+=1;goto B4e39d9;
case 0x4e39de:goto L4e39de;
case 0x4e39e1:c.instructions+=2;goto B4e39e1;
case 0x4e39e3:c.instructions+=1;goto B4e39e3;
case 0x4e39e5:goto L4e39e5;
case 0x4e39e8:c.instructions+=3;goto B4e39e8;
case 0x4e39ef:c.instructions+=2;goto B4e39ef;
case 0x4e39f6:c.instructions+=1;goto B4e39f6;
case 0x4e39f8:goto L4e39f8;
case 0x4e39fa:goto L4e39fa;
case 0x4e39fd:c.instructions+=4;goto B4e39fd;
case 0x4e39ff:c.instructions+=3;goto B4e39ff;
case 0x4e3a02:c.instructions+=2;goto B4e3a02;
case 0x4e3a05:c.instructions+=1;goto B4e3a05;
case 0x4e3a07:goto L4e3a07;
case 0x4e3a0c:c.instructions+=4;goto B4e3a0c;
case 0x4e3a0d:c.instructions+=3;goto B4e3a0d;
case 0x4e3a0f:c.instructions+=2;goto B4e3a0f;
case 0x4e3a11:c.instructions+=1;goto B4e3a11;
case 0x4e3a16:goto L4e3a16;
case 0x4e3a18:c.instructions+=1;goto B4e3a18;
case 0x4e3a1a:goto L4e3a1a;
case 0x4e3a1c:c.instructions+=1;goto B4e3a1c;
case 0x4e3a21:goto L4e3a21;
case 0x4e3a24:c.instructions+=2;goto B4e3a24;
case 0x4e3a26:c.instructions+=1;goto B4e3a26;
case 0x4e3a28:goto L4e3a28;
case 0x4e3a2b:c.instructions+=3;goto B4e3a2b;
case 0x4e3a32:c.instructions+=2;goto B4e3a32;
case 0x4e3a39:c.instructions+=1;goto B4e3a39;
case 0x4e3a3b:goto L4e3a3b;
case 0x4e3a3d:goto L4e3a3d;
case 0x4e3a40:c.instructions+=4;goto B4e3a40;
case 0x4e3a42:c.instructions+=3;goto B4e3a42;
case 0x4e3a45:c.instructions+=2;goto B4e3a45;
case 0x4e3a48:c.instructions+=1;goto B4e3a48;
case 0x4e3a4a:goto L4e3a4a;
case 0x4e3a4f:c.instructions+=4;goto B4e3a4f;
case 0x4e3a50:c.instructions+=3;goto B4e3a50;
case 0x4e3a52:c.instructions+=2;goto B4e3a52;
case 0x4e3a54:c.instructions+=1;goto B4e3a54;
case 0x4e3a59:goto L4e3a59;
case 0x4e3a5b:c.instructions+=1;goto B4e3a5b;
case 0x4e3a5d:goto L4e3a5d;
case 0x4e3a5f:c.instructions+=1;goto B4e3a5f;
case 0x4e3a64:goto L4e3a64;
case 0x4e3a67:c.instructions+=2;goto B4e3a67;
case 0x4e3a69:c.instructions+=1;goto B4e3a69;
case 0x4e3a6b:goto L4e3a6b;
case 0x4e3a6e:c.instructions+=3;goto B4e3a6e;
case 0x4e3a75:c.instructions+=2;goto B4e3a75;
case 0x4e3a7c:c.instructions+=1;goto B4e3a7c;
case 0x4e3a7e:goto L4e3a7e;
case 0x4e3a80:goto L4e3a80;
case 0x4e3a83:c.instructions+=4;goto B4e3a83;
case 0x4e3a85:c.instructions+=3;goto B4e3a85;
case 0x4e3a88:c.instructions+=2;goto B4e3a88;
case 0x4e3a8b:c.instructions+=1;goto B4e3a8b;
case 0x4e3a8d:goto L4e3a8d;
case 0x4e3a92:c.instructions+=4;goto B4e3a92;
case 0x4e3a93:c.instructions+=3;goto B4e3a93;
case 0x4e3a95:c.instructions+=2;goto B4e3a95;
case 0x4e3a97:c.instructions+=1;goto B4e3a97;
case 0x4e3a9c:goto L4e3a9c;
case 0x4e3a9e:c.instructions+=1;goto B4e3a9e;
case 0x4e3aa0:goto L4e3aa0;
case 0x4e3aa2:c.instructions+=1;goto B4e3aa2;
case 0x4e3aa7:goto L4e3aa7;
case 0x4e3aaa:c.instructions+=2;goto B4e3aaa;
case 0x4e3aac:c.instructions+=1;goto B4e3aac;
case 0x4e3aae:goto L4e3aae;
case 0x4e3ab1:c.instructions+=3;goto B4e3ab1;
case 0x4e3ab8:c.instructions+=2;goto B4e3ab8;
case 0x4e3abf:c.instructions+=1;goto B4e3abf;
case 0x4e3ac1:goto L4e3ac1;
case 0x4e3ac3:goto L4e3ac3;
case 0x4e3ac6:c.instructions+=4;goto B4e3ac6;
case 0x4e3ac8:c.instructions+=3;goto B4e3ac8;
case 0x4e3acb:c.instructions+=2;goto B4e3acb;
case 0x4e3ace:c.instructions+=1;goto B4e3ace;
case 0x4e3ad0:goto L4e3ad0;
case 0x4e3ad5:c.instructions+=4;goto B4e3ad5;
case 0x4e3ad6:c.instructions+=3;goto B4e3ad6;
case 0x4e3ad8:c.instructions+=2;goto B4e3ad8;
case 0x4e3ada:c.instructions+=1;goto B4e3ada;
case 0x4e3adf:goto L4e3adf;
case 0x4e3ae1:c.instructions+=1;goto B4e3ae1;
case 0x4e3ae3:goto L4e3ae3;
case 0x4e3ae5:c.instructions+=1;goto B4e3ae5;
case 0x4e3aea:goto L4e3aea;
case 0x4e3aed:c.instructions+=2;goto B4e3aed;
case 0x4e3aef:c.instructions+=1;goto B4e3aef;
case 0x4e3af1:goto L4e3af1;
case 0x4e3af4:c.instructions+=3;goto B4e3af4;
case 0x4e3afb:c.instructions+=2;goto B4e3afb;
case 0x4e3b02:c.instructions+=1;goto B4e3b02;
case 0x4e3b04:goto L4e3b04;
case 0x4e3b06:goto L4e3b06;
case 0x4e3b09:c.instructions+=4;goto B4e3b09;
case 0x4e3b0b:c.instructions+=3;goto B4e3b0b;
case 0x4e3b0e:c.instructions+=2;goto B4e3b0e;
case 0x4e3b11:c.instructions+=1;goto B4e3b11;
case 0x4e3b13:goto L4e3b13;
case 0x4e3b18:c.instructions+=4;goto B4e3b18;
case 0x4e3b19:c.instructions+=3;goto B4e3b19;
case 0x4e3b1b:c.instructions+=2;goto B4e3b1b;
case 0x4e3b1d:c.instructions+=1;goto B4e3b1d;
case 0x4e3b22:goto L4e3b22;
case 0x4e3b24:c.instructions+=1;goto B4e3b24;
case 0x4e3b26:goto L4e3b26;
case 0x4e3b28:c.instructions+=1;goto B4e3b28;
case 0x4e3b2d:goto L4e3b2d;
case 0x4e3b30:c.instructions+=2;goto B4e3b30;
case 0x4e3b32:c.instructions+=1;goto B4e3b32;
case 0x4e3b34:goto L4e3b34;
case 0x4e3b37:c.instructions+=3;goto B4e3b37;
case 0x4e3b3e:c.instructions+=2;goto B4e3b3e;
case 0x4e3b45:c.instructions+=1;goto B4e3b45;
case 0x4e3b47:goto L4e3b47;
case 0x4e3b49:goto L4e3b49;
case 0x4e3b4c:c.instructions+=4;goto B4e3b4c;
case 0x4e3b4e:c.instructions+=3;goto B4e3b4e;
case 0x4e3b51:c.instructions+=2;goto B4e3b51;
case 0x4e3b54:c.instructions+=1;goto B4e3b54;
case 0x4e3b56:goto L4e3b56;
case 0x4e3b5c:c.instructions+=3;goto B4e3b5c;
case 0x4e3b5d:c.instructions+=2;goto B4e3b5d;
case 0x4e3b5f:c.instructions+=1;goto B4e3b5f;
case 0x4e3b64:goto L4e3b64;
case 0x4e3b68:c.instructions+=6;goto B4e3b68;
case 0x4e3b6e:c.instructions+=5;goto B4e3b6e;
case 0x4e3b71:c.instructions+=4;goto B4e3b71;
case 0x4e3b72:c.instructions+=3;goto B4e3b72;
case 0x4e3b73:c.instructions+=2;goto B4e3b73;
case 0x4e3b74:c.instructions+=1;goto B4e3b74;
case 0x4e3b79:goto L4e3b79;
case 0x4e3b7d:c.instructions+=9;goto B4e3b7d;
case 0x4e3b80:c.instructions+=8;goto B4e3b80;
case 0x4e3b82:c.instructions+=7;goto B4e3b82;
case 0x4e3b83:c.instructions+=6;goto B4e3b83;
case 0x4e3b84:c.instructions+=5;goto B4e3b84;
case 0x4e3b85:c.instructions+=4;goto B4e3b85;
case 0x4e3b86:c.instructions+=3;goto B4e3b86;
case 0x4e3b8d:c.instructions+=2;goto B4e3b8d;
case 0x4e3b90:c.instructions+=1;goto B4e3b90;
case 0x4e3ba0:goto L4e3ba0;
case 0x4e3ba1:c.instructions+=5;goto B4e3ba1;
case 0x4e3ba7:c.instructions+=4;goto B4e3ba7;
case 0x4e3bad:c.instructions+=3;goto B4e3bad;
case 0x4e3baf:c.instructions+=2;goto B4e3baf;
case 0x4e3bb1:c.instructions+=1;goto B4e3bb1;
case 0x4e3bb3:goto L4e3bb3;
case 0x4e3bb5:c.instructions+=5;goto B4e3bb5;
case 0x4e3bb8:c.instructions+=4;goto B4e3bb8;
case 0x4e3bba:c.instructions+=3;goto B4e3bba;
case 0x4e3bbb:c.instructions+=2;goto B4e3bbb;
case 0x4e3bbe:c.instructions+=1;goto B4e3bbe;
case 0x4e3bc3:goto L4e3bc3;
case 0x4e3bc5:c.instructions+=3;goto B4e3bc5;
case 0x4e3bc8:c.instructions+=2;goto B4e3bc8;
case 0x4e3bca:c.instructions+=1;goto B4e3bca;
case 0x4e3bcc:goto L4e3bcc;
case 0x4e3bcd:c.instructions+=1;goto B4e3bcd;
case 0x4e3bd0:goto L4e3bd0;
case 0x4e3bd2:c.instructions+=7;goto B4e3bd2;
case 0x4e3bd7:c.instructions+=6;goto B4e3bd7;
case 0x4e3bdd:c.instructions+=5;goto B4e3bdd;
case 0x4e3bde:c.instructions+=4;goto B4e3bde;
case 0x4e3be5:c.instructions+=3;goto B4e3be5;
case 0x4e3be6:c.instructions+=2;goto B4e3be6;
case 0x4e3beb:c.instructions+=1;goto B4e3beb;
case 0x4e3bf0:goto L4e3bf0;
case 0x4e3bf3:c.instructions+=4;goto B4e3bf3;
case 0x4e3bf7:c.instructions+=3;goto B4e3bf7;
case 0x4e3bf9:c.instructions+=2;goto B4e3bf9;
case 0x4e3c01:c.instructions+=1;goto B4e3c01;
case 0x4e3c03:goto L4e3c03;
case 0x4e3c07:c.instructions+=3;goto B4e3c07;
case 0x4e3c08:c.instructions+=2;goto B4e3c08;
case 0x4e3c0a:c.instructions+=1;goto B4e3c0a;
case 0x4e3c0f:goto L4e3c0f;
case 0x4e3c13:c.instructions+=3;goto B4e3c13;
case 0x4e3c1a:c.instructions+=2;goto B4e3c1a;
case 0x4e3c1d:c.instructions+=1;goto B4e3c1d;
case 0x4e3c1e:goto L4e3c1e;
case 0x4e3c22:c.instructions+=4;goto B4e3c22;
case 0x4e3c24:c.instructions+=3;goto B4e3c24;
case 0x4e3c2b:c.instructions+=2;goto B4e3c2b;
case 0x4e3c2e:c.instructions+=1;goto B4e3c2e;
case 0x4e3c30:goto L4e3c30;
case 0x4e3c31:c.instructions+=2;goto B4e3c31;
case 0x4e3c33:c.instructions+=1;goto B4e3c33;
case 0x4e3c38:goto L4e3c38;
case 0x4e3c3d:c.instructions+=1;goto B4e3c3d;
case 0x4e3c3f:goto L4e3c3f;
case 0x4e3c40:c.instructions+=1;goto B4e3c40;
case 0x4e3c45:goto L4e3c45;
case 0x4e3c48:goto L4e3c48;
case 0x4e3c4a:c.instructions+=2;goto B4e3c4a;
case 0x4e3c4b:c.instructions+=1;goto B4e3c4b;
case 0x4e3c50:goto L4e3c50;
case 0x4e3c52:c.instructions+=7;goto B4e3c52;
case 0x4e3c57:c.instructions+=6;goto B4e3c57;
case 0x4e3c5d:c.instructions+=5;goto B4e3c5d;
case 0x4e3c5e:c.instructions+=4;goto B4e3c5e;
case 0x4e3c65:c.instructions+=3;goto B4e3c65;
case 0x4e3c66:c.instructions+=2;goto B4e3c66;
case 0x4e3c6b:c.instructions+=1;goto B4e3c6b;
case 0x4e3c70:goto L4e3c70;
case 0x4e3c73:c.instructions+=4;goto B4e3c73;
case 0x4e3c77:c.instructions+=3;goto B4e3c77;
case 0x4e3c79:c.instructions+=2;goto B4e3c79;
case 0x4e3c81:c.instructions+=1;goto B4e3c81;
case 0x4e3c83:goto L4e3c83;
case 0x4e3c87:c.instructions+=3;goto B4e3c87;
case 0x4e3c88:c.instructions+=2;goto B4e3c88;
case 0x4e3c8a:c.instructions+=1;goto B4e3c8a;
case 0x4e3c8f:goto L4e3c8f;
case 0x4e3c93:c.instructions+=3;goto B4e3c93;
case 0x4e3c9a:c.instructions+=2;goto B4e3c9a;
case 0x4e3c9d:c.instructions+=1;goto B4e3c9d;
case 0x4e3c9e:goto L4e3c9e;
case 0x4e3ca2:c.instructions+=4;goto B4e3ca2;
case 0x4e3ca4:c.instructions+=3;goto B4e3ca4;
case 0x4e3cab:c.instructions+=2;goto B4e3cab;
case 0x4e3cae:c.instructions+=1;goto B4e3cae;
case 0x4e3cb0:goto L4e3cb0;
case 0x4e3cb1:c.instructions+=2;goto B4e3cb1;
case 0x4e3cb3:c.instructions+=1;goto B4e3cb3;
case 0x4e3cb8:goto L4e3cb8;
case 0x4e3cbd:c.instructions+=1;goto B4e3cbd;
case 0x4e3cbf:goto L4e3cbf;
case 0x4e3cc0:c.instructions+=1;goto B4e3cc0;
case 0x4e3cc5:goto L4e3cc5;
case 0x4e3cc8:goto L4e3cc8;
case 0x4e3cca:c.instructions+=2;goto B4e3cca;
case 0x4e3ccb:c.instructions+=1;goto B4e3ccb;
case 0x4e3cd0:goto L4e3cd0;
case 0x4e3cd2:c.instructions+=7;goto B4e3cd2;
case 0x4e3cd7:c.instructions+=6;goto B4e3cd7;
case 0x4e3cdd:c.instructions+=5;goto B4e3cdd;
case 0x4e3cde:c.instructions+=4;goto B4e3cde;
case 0x4e3ce5:c.instructions+=3;goto B4e3ce5;
case 0x4e3ce6:c.instructions+=2;goto B4e3ce6;
case 0x4e3ceb:c.instructions+=1;goto B4e3ceb;
case 0x4e3cf0:goto L4e3cf0;
case 0x4e3cf3:c.instructions+=4;goto B4e3cf3;
case 0x4e3cf7:c.instructions+=3;goto B4e3cf7;
case 0x4e3cf9:c.instructions+=2;goto B4e3cf9;
case 0x4e3d01:c.instructions+=1;goto B4e3d01;
case 0x4e3d03:goto L4e3d03;
case 0x4e3d07:c.instructions+=3;goto B4e3d07;
case 0x4e3d08:c.instructions+=2;goto B4e3d08;
case 0x4e3d0a:c.instructions+=1;goto B4e3d0a;
case 0x4e3d0f:goto L4e3d0f;
case 0x4e3d13:c.instructions+=3;goto B4e3d13;
case 0x4e3d1a:c.instructions+=2;goto B4e3d1a;
case 0x4e3d1d:c.instructions+=1;goto B4e3d1d;
case 0x4e3d1e:goto L4e3d1e;
case 0x4e3d22:c.instructions+=4;goto B4e3d22;
case 0x4e3d24:c.instructions+=3;goto B4e3d24;
case 0x4e3d2b:c.instructions+=2;goto B4e3d2b;
case 0x4e3d2e:c.instructions+=1;goto B4e3d2e;
case 0x4e3d30:goto L4e3d30;
case 0x4e3d31:c.instructions+=2;goto B4e3d31;
case 0x4e3d33:c.instructions+=1;goto B4e3d33;
case 0x4e3d38:goto L4e3d38;
case 0x4e3d3d:c.instructions+=1;goto B4e3d3d;
case 0x4e3d3f:goto L4e3d3f;
case 0x4e3d40:c.instructions+=1;goto B4e3d40;
case 0x4e3d45:goto L4e3d45;
case 0x4e3d48:goto L4e3d48;
case 0x4e3d4a:c.instructions+=2;goto B4e3d4a;
case 0x4e3d4b:c.instructions+=1;goto B4e3d4b;
case 0x4e3d50:goto L4e3d50;
case 0x4e3d52:c.instructions+=7;goto B4e3d52;
case 0x4e3d57:c.instructions+=6;goto B4e3d57;
case 0x4e3d5d:c.instructions+=5;goto B4e3d5d;
case 0x4e3d5e:c.instructions+=4;goto B4e3d5e;
case 0x4e3d65:c.instructions+=3;goto B4e3d65;
case 0x4e3d66:c.instructions+=2;goto B4e3d66;
case 0x4e3d6b:c.instructions+=1;goto B4e3d6b;
case 0x4e3d70:goto L4e3d70;
case 0x4e3d73:c.instructions+=4;goto B4e3d73;
case 0x4e3d77:c.instructions+=3;goto B4e3d77;
case 0x4e3d79:c.instructions+=2;goto B4e3d79;
case 0x4e3d81:c.instructions+=1;goto B4e3d81;
case 0x4e3d83:goto L4e3d83;
case 0x4e3d87:c.instructions+=3;goto B4e3d87;
case 0x4e3d88:c.instructions+=2;goto B4e3d88;
case 0x4e3d8a:c.instructions+=1;goto B4e3d8a;
case 0x4e3d8f:goto L4e3d8f;
case 0x4e3d93:c.instructions+=3;goto B4e3d93;
case 0x4e3d9a:c.instructions+=2;goto B4e3d9a;
case 0x4e3d9d:c.instructions+=1;goto B4e3d9d;
case 0x4e3d9e:goto L4e3d9e;
case 0x4e3da2:c.instructions+=4;goto B4e3da2;
case 0x4e3da4:c.instructions+=3;goto B4e3da4;
case 0x4e3dab:c.instructions+=2;goto B4e3dab;
case 0x4e3dae:c.instructions+=1;goto B4e3dae;
case 0x4e3db0:goto L4e3db0;
case 0x4e3db1:c.instructions+=2;goto B4e3db1;
case 0x4e3db3:c.instructions+=1;goto B4e3db3;
case 0x4e3db8:goto L4e3db8;
case 0x4e3dbd:c.instructions+=1;goto B4e3dbd;
case 0x4e3dbf:goto L4e3dbf;
case 0x4e3dc0:c.instructions+=1;goto B4e3dc0;
case 0x4e3dc5:goto L4e3dc5;
case 0x4e3dc8:goto L4e3dc8;
case 0x4e3dca:c.instructions+=2;goto B4e3dca;
case 0x4e3dcb:c.instructions+=1;goto B4e3dcb;
case 0x4e3dd0:goto L4e3dd0;
case 0x4e3dd2:c.instructions+=7;goto B4e3dd2;
case 0x4e3dd7:c.instructions+=6;goto B4e3dd7;
case 0x4e3ddd:c.instructions+=5;goto B4e3ddd;
case 0x4e3dde:c.instructions+=4;goto B4e3dde;
case 0x4e3de5:c.instructions+=3;goto B4e3de5;
case 0x4e3de6:c.instructions+=2;goto B4e3de6;
case 0x4e3deb:c.instructions+=1;goto B4e3deb;
case 0x4e3df0:goto L4e3df0;
case 0x4e3df3:c.instructions+=4;goto B4e3df3;
case 0x4e3df7:c.instructions+=3;goto B4e3df7;
case 0x4e3df9:c.instructions+=2;goto B4e3df9;
case 0x4e3e01:c.instructions+=1;goto B4e3e01;
case 0x4e3e03:goto L4e3e03;
case 0x4e3e07:c.instructions+=3;goto B4e3e07;
case 0x4e3e08:c.instructions+=2;goto B4e3e08;
case 0x4e3e0a:c.instructions+=1;goto B4e3e0a;
case 0x4e3e0f:goto L4e3e0f;
case 0x4e3e13:c.instructions+=3;goto B4e3e13;
case 0x4e3e1a:c.instructions+=2;goto B4e3e1a;
case 0x4e3e1d:c.instructions+=1;goto B4e3e1d;
case 0x4e3e1e:goto L4e3e1e;
case 0x4e3e22:c.instructions+=4;goto B4e3e22;
case 0x4e3e24:c.instructions+=3;goto B4e3e24;
case 0x4e3e2b:c.instructions+=2;goto B4e3e2b;
case 0x4e3e2e:c.instructions+=1;goto B4e3e2e;
case 0x4e3e30:goto L4e3e30;
case 0x4e3e32:c.instructions+=7;goto B4e3e32;
case 0x4e3e37:c.instructions+=6;goto B4e3e37;
case 0x4e3e3d:c.instructions+=5;goto B4e3e3d;
case 0x4e3e3e:c.instructions+=4;goto B4e3e3e;
case 0x4e3e45:c.instructions+=3;goto B4e3e45;
case 0x4e3e46:c.instructions+=2;goto B4e3e46;
case 0x4e3e4b:c.instructions+=1;goto B4e3e4b;
case 0x4e3e50:goto L4e3e50;
case 0x4e3e53:c.instructions+=4;goto B4e3e53;
case 0x4e3e57:c.instructions+=3;goto B4e3e57;
case 0x4e3e59:c.instructions+=2;goto B4e3e59;
case 0x4e3e61:c.instructions+=1;goto B4e3e61;
case 0x4e3e63:goto L4e3e63;
case 0x4e3e67:c.instructions+=3;goto B4e3e67;
case 0x4e3e68:c.instructions+=2;goto B4e3e68;
case 0x4e3e6a:c.instructions+=1;goto B4e3e6a;
case 0x4e3e6f:goto L4e3e6f;
case 0x4e3e73:c.instructions+=3;goto B4e3e73;
case 0x4e3e7a:c.instructions+=2;goto B4e3e7a;
case 0x4e3e7d:c.instructions+=1;goto B4e3e7d;
case 0x4e3e7e:goto L4e3e7e;
case 0x4e3e82:c.instructions+=4;goto B4e3e82;
case 0x4e3e84:c.instructions+=3;goto B4e3e84;
case 0x4e3e8b:c.instructions+=2;goto B4e3e8b;
case 0x4e3e8e:c.instructions+=1;goto B4e3e8e;
case 0x4e3e90:goto L4e3e90;
case 0x4e3e91:c.instructions+=2;goto B4e3e91;
case 0x4e3e93:c.instructions+=1;goto B4e3e93;
case 0x4e3e98:goto L4e3e98;
case 0x4e3e9d:c.instructions+=1;goto B4e3e9d;
case 0x4e3e9f:goto L4e3e9f;
case 0x4e3ea0:c.instructions+=1;goto B4e3ea0;
case 0x4e3ea5:goto L4e3ea5;
case 0x4e3ea8:goto L4e3ea8;
case 0x4e3eaa:c.instructions+=2;goto B4e3eaa;
case 0x4e3eab:c.instructions+=1;goto B4e3eab;
case 0x4e3eb0:goto L4e3eb0;
case 0x4e3eb1:c.instructions+=2;goto B4e3eb1;
case 0x4e3eb3:c.instructions+=1;goto B4e3eb3;
case 0x4e3eb8:goto L4e3eb8;
case 0x4e3ebd:c.instructions+=1;goto B4e3ebd;
case 0x4e3ebf:goto L4e3ebf;
case 0x4e3ec0:c.instructions+=1;goto B4e3ec0;
case 0x4e3ec5:goto L4e3ec5;
case 0x4e3ec8:goto L4e3ec8;
case 0x4e3eca:c.instructions+=2;goto B4e3eca;
case 0x4e3ecb:c.instructions+=1;goto B4e3ecb;
case 0x4e3ed0:goto L4e3ed0;
case 0x4e3ed3:c.instructions+=9;goto B4e3ed3;
case 0x4e3ed4:c.instructions+=8;goto B4e3ed4;
case 0x4e3ed5:c.instructions+=7;goto B4e3ed5;
case 0x4e3ed6:c.instructions+=6;goto B4e3ed6;
case 0x4e3ed7:c.instructions+=5;goto B4e3ed7;
case 0x4e3ed9:c.instructions+=4;goto B4e3ed9;
case 0x4e3ede:c.instructions+=3;goto B4e3ede;
case 0x4e3ee6:c.instructions+=2;goto B4e3ee6;
case 0x4e3ee8:c.instructions+=1;goto B4e3ee8;
case 0x4e3eed:goto L4e3eed;
case 0x4e3eef:c.instructions+=3;goto B4e3eef;
case 0x4e3ef2:c.instructions+=2;goto B4e3ef2;
case 0x4e3ef4:c.instructions+=1;goto B4e3ef4;
case 0x4e3ef6:goto L4e3ef6;
case 0x4e3ef9:c.instructions+=13;goto B4e3ef9;
case 0x4e3eff:c.instructions+=12;goto B4e3eff;
case 0x4e3f01:c.instructions+=11;goto B4e3f01;
case 0x4e3f04:c.instructions+=10;goto B4e3f04;
case 0x4e3f07:c.instructions+=9;goto B4e3f07;
case 0x4e3f0a:c.instructions+=8;goto B4e3f0a;
case 0x4e3f0d:c.instructions+=7;goto B4e3f0d;
case 0x4e3f10:c.instructions+=6;goto B4e3f10;
case 0x4e3f13:c.instructions+=5;goto B4e3f13;
case 0x4e3f17:c.instructions+=4;goto B4e3f17;
case 0x4e3f1e:c.instructions+=3;goto B4e3f1e;
case 0x4e3f25:c.instructions+=2;goto B4e3f25;
case 0x4e3f29:c.instructions+=1;goto B4e3f29;
case 0x4e3f2b:goto L4e3f2b;
case 0x4e3f2f:goto L4e3f2f;
case 0x4e3f30:c.instructions+=5;goto B4e3f30;
case 0x4e3f35:c.instructions+=4;goto B4e3f35;
case 0x4e3f39:c.instructions+=3;goto B4e3f39;
case 0x4e3f3b:c.instructions+=2;goto B4e3f3b;
case 0x4e3f3c:c.instructions+=1;goto B4e3f3c;
case 0x4e3f41:goto L4e3f41;
case 0x4e3f44:c.instructions+=3;goto B4e3f44;
case 0x4e3f48:c.instructions+=2;goto B4e3f48;
case 0x4e3f49:c.instructions+=1;goto B4e3f49;
case 0x4e3f4e:goto L4e3f4e;
case 0x4e3f4f:c.instructions+=2;goto B4e3f4f;
case 0x4e3f50:c.instructions+=1;goto B4e3f50;
case 0x4e3f55:goto L4e3f55;
case 0x4e3f57:c.instructions+=2;goto B4e3f57;
case 0x4e3f59:c.instructions+=1;goto B4e3f59;
case 0x4e3f5e:goto L4e3f5e;
case 0x4e3f61:c.instructions+=2;goto B4e3f61;
case 0x4e3f63:c.instructions+=1;goto B4e3f63;
case 0x4e3f65:goto L4e3f65;
case 0x4e3f6b:c.instructions+=3;goto B4e3f6b;
case 0x4e3f6e:c.instructions+=2;goto B4e3f6e;
case 0x4e3f71:c.instructions+=1;goto B4e3f71;
case 0x4e3f73:goto L4e3f73;
case 0x4e3f75:goto L4e3f75;
case 0x4e3f79:c.instructions+=12;goto B4e3f79;
case 0x4e3f7c:c.instructions+=11;goto B4e3f7c;
case 0x4e3f7d:c.instructions+=10;goto B4e3f7d;
case 0x4e3f80:c.instructions+=9;goto B4e3f80;
case 0x4e3f85:c.instructions+=8;goto B4e3f85;
case 0x4e3f87:c.instructions+=7;goto B4e3f87;
case 0x4e3f8b:c.instructions+=6;goto B4e3f8b;
case 0x4e3f8e:c.instructions+=5;goto B4e3f8e;
case 0x4e3f90:c.instructions+=4;goto B4e3f90;
case 0x4e3f91:c.instructions+=3;goto B4e3f91;
case 0x4e3f94:c.instructions+=2;goto B4e3f94;
case 0x4e3f96:c.instructions+=1;goto B4e3f96;
case 0x4e3f9b:goto L4e3f9b;
case 0x4e3f9e:c.instructions+=3;goto B4e3f9e;
case 0x4e3fa2:c.instructions+=2;goto B4e3fa2;
case 0x4e3fa3:c.instructions+=1;goto B4e3fa3;
case 0x4e3fa8:goto L4e3fa8;
case 0x4e3fa9:c.instructions+=2;goto B4e3fa9;
case 0x4e3faa:c.instructions+=1;goto B4e3faa;
case 0x4e3faf:goto L4e3faf;
case 0x4e3fb1:c.instructions+=2;goto B4e3fb1;
case 0x4e3fb3:c.instructions+=1;goto B4e3fb3;
case 0x4e3fb8:goto L4e3fb8;
case 0x4e3fbb:c.instructions+=2;goto B4e3fbb;
case 0x4e3fbd:c.instructions+=1;goto B4e3fbd;
case 0x4e3fbf:goto L4e3fbf;
case 0x4e3fc5:c.instructions+=3;goto B4e3fc5;
case 0x4e3fc8:c.instructions+=2;goto B4e3fc8;
case 0x4e3fcb:c.instructions+=1;goto B4e3fcb;
case 0x4e3fcd:goto L4e3fcd;
case 0x4e3fcf:goto L4e3fcf;
case 0x4e3fd2:c.instructions+=10;goto B4e3fd2;
case 0x4e3fd4:c.instructions+=9;goto B4e3fd4;
case 0x4e3fd5:c.instructions+=8;goto B4e3fd5;
case 0x4e3fd8:c.instructions+=7;goto B4e3fd8;
case 0x4e3fdd:c.instructions+=6;goto B4e3fdd;
case 0x4e3fe0:c.instructions+=5;goto B4e3fe0;
case 0x4e3fe4:c.instructions+=4;goto B4e3fe4;
case 0x4e3fe6:c.instructions+=3;goto B4e3fe6;
case 0x4e3fe7:c.instructions+=2;goto B4e3fe7;
case 0x4e3fe9:c.instructions+=1;goto B4e3fe9;
case 0x4e3fee:goto L4e3fee;
case 0x4e3ff1:c.instructions+=3;goto B4e3ff1;
case 0x4e3ff5:c.instructions+=2;goto B4e3ff5;
case 0x4e3ff6:c.instructions+=1;goto B4e3ff6;
case 0x4e3ffb:goto L4e3ffb;
case 0x4e3ffc:c.instructions+=2;goto B4e3ffc;
case 0x4e3ffd:c.instructions+=1;goto B4e3ffd;
default:missing_instruction(c.pc);}
B4e3002:L4e3002:{c.instructions+=5;NFSU2_TR(0x4e3002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3005:{NFSU2_TR(0x4e3005);
u8 U[4];
w4(U+0,u32(0x90fe80f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e300a:{NFSU2_TR(0x4e300a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e300b:{NFSU2_TR(0x4e300b);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e3010:{NFSU2_TR(0x4e3010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3015ull));
TAIL_STATIC(0x537a60u,537);
}
B4e3015:L4e3015:{c.instructions+=7;NFSU2_TR(0x4e3015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e301b:{NFSU2_TR(0x4e301b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3021:{NFSU2_TR(0x4e3021);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e3024:{NFSU2_TR(0x4e3024);
w4(R+4,u32(0x83aab4ull));
}
B4e3029:{NFSU2_TR(0x4e3029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e302f:{NFSU2_TR(0x4e302f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3035:{NFSU2_TR(0x4e3035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e303aull));
TAIL_STATIC(0x502910u,502);
}
B4e303a:L4e303a:{c.instructions+=4;NFSU2_TR(0x4e303a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e303d:{NFSU2_TR(0x4e303d);
__builtin_memmove((R+4),(R+24),4);
}
B4e303f:{NFSU2_TR(0x4e303f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x42200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3049:{NFSU2_TR(0x4e3049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e304eull));
TAIL_STATIC(0x4cded0u,4cd);
}
B4e304e:L4e304e:{c.instructions+=3;NFSU2_TR(0x4e304e);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e3053:{NFSU2_TR(0x4e3053);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3056:{NFSU2_TR(0x4e3056);
if(r1(R+518)){{goto L4e3103;}}
}
B4e305c:L4e305c:{c.instructions+=2;NFSU2_TR(0x4e305c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3061:{NFSU2_TR(0x4e3061);
if(r1(R+518)){{goto L4e3103;}}
}
B4e3067:L4e3067:{c.instructions+=3;NFSU2_TR(0x4e3067);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e306a:{NFSU2_TR(0x4e306a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e306d:{NFSU2_TR(0x4e306d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e30b9;}}
}
B4e306f:L4e306f:{c.instructions+=4;NFSU2_TR(0x4e306f);
u8 U[4];
w4(U+0,u32(0x1bf733bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3074:{NFSU2_TR(0x4e3074);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3079:{NFSU2_TR(0x4e3079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e307a:{NFSU2_TR(0x4e307a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e307full));
TAIL_STATIC(0x537a10u,537);
}
B4e307f:L4e307f:{c.instructions+=3;NFSU2_TR(0x4e307f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e3082:{NFSU2_TR(0x4e3082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3083:{NFSU2_TR(0x4e3083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3088ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e3088:L4e3088:{c.instructions+=6;NFSU2_TR(0x4e3088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e308b:{NFSU2_TR(0x4e308b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e308d:{NFSU2_TR(0x4e308d);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3092:{NFSU2_TR(0x4e3092);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3097:{NFSU2_TR(0x4e3097);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3098:{NFSU2_TR(0x4e3098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e309dull));
TAIL_STATIC(0x537c00u,537);
}
B4e309d:L4e309d:{c.instructions+=4;NFSU2_TR(0x4e309d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e30a0:{NFSU2_TR(0x4e30a0);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30a5:{NFSU2_TR(0x4e30a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30a6:{NFSU2_TR(0x4e30a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30abull));
TAIL_STATIC(0x5379c0u,537);
}
B4e30ab:L4e30ab:{c.instructions+=2;NFSU2_TR(0x4e30ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30ac:{NFSU2_TR(0x4e30ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30b1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e30b1:L4e30b1:{c.instructions+=2;NFSU2_TR(0x4e30b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e30b4:{NFSU2_TR(0x4e30b4);
{goto L4e31c9;}
}
B4e30b9:L4e30b9:{c.instructions+=4;NFSU2_TR(0x4e30b9);
u8 U[4];
w4(U+0,u32(0xe5d63bb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30be:{NFSU2_TR(0x4e30be);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30c3:{NFSU2_TR(0x4e30c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30c4:{NFSU2_TR(0x4e30c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30c9ull));
TAIL_STATIC(0x537a10u,537);
}
B4e30c9:L4e30c9:{c.instructions+=3;NFSU2_TR(0x4e30c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e30cc:{NFSU2_TR(0x4e30cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30cd:{NFSU2_TR(0x4e30cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30d2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e30d2:L4e30d2:{c.instructions+=6;NFSU2_TR(0x4e30d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e30d5:{NFSU2_TR(0x4e30d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30d7:{NFSU2_TR(0x4e30d7);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30dc:{NFSU2_TR(0x4e30dc);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30e1:{NFSU2_TR(0x4e30e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30e2:{NFSU2_TR(0x4e30e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30e7ull));
TAIL_STATIC(0x537c00u,537);
}
B4e30e7:L4e30e7:{c.instructions+=4;NFSU2_TR(0x4e30e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e30ea:{NFSU2_TR(0x4e30ea);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30ef:{NFSU2_TR(0x4e30ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30f0:{NFSU2_TR(0x4e30f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30f5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e30f5:L4e30f5:{c.instructions+=2;NFSU2_TR(0x4e30f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e30f6:{NFSU2_TR(0x4e30f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e30fbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e30fb:L4e30fb:{c.instructions+=2;NFSU2_TR(0x4e30fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4e30fe:{NFSU2_TR(0x4e30fe);
{goto L4e31c9;}
}
B4e3103:L4e3103:{c.instructions+=4;NFSU2_TR(0x4e3103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x27329d35ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e310a:{NFSU2_TR(0x4e310a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3114:{NFSU2_TR(0x4e3114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3117:{NFSU2_TR(0x4e3117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3120;}}
}
B4e3119:L4e3119:{c.instructions+=2;NFSU2_TR(0x4e3119);
u8 U[4];
w4(U+0,u32(0x766a0edfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e311e:{NFSU2_TR(0x4e311e);
{goto L4e3125;}
}
B4e3120:L4e3120:{c.instructions+=1;NFSU2_TR(0x4e3120);
u8 U[4];
w4(U+0,u32(0x3bc6066dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3125:L4e3125:{c.instructions+=3;NFSU2_TR(0x4e3125);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e312a:{NFSU2_TR(0x4e312a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e312b:{NFSU2_TR(0x4e312b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3130ull));
TAIL_STATIC(0x537a10u,537);
}
B4e3130:L4e3130:{c.instructions+=3;NFSU2_TR(0x4e3130);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e3133:{NFSU2_TR(0x4e3133);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3134:{NFSU2_TR(0x4e3134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3139ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e3139:L4e3139:{c.instructions+=4;NFSU2_TR(0x4e3139);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4e313e:{NFSU2_TR(0x4e313e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e3141:{NFSU2_TR(0x4e3141);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3144:{NFSU2_TR(0x4e3144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e315e;}}
}
B4e3146:L4e3146:{c.instructions+=6;NFSU2_TR(0x4e3146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3149:{NFSU2_TR(0x4e3149);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e314b:{NFSU2_TR(0x4e314b);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3150:{NFSU2_TR(0x4e3150);
u8 U[4];
w4(U+0,u32(0x797720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3155:{NFSU2_TR(0x4e3155);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3156:{NFSU2_TR(0x4e3156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e315bull));
TAIL_STATIC(0x5426c0u,542);
}
B4e315b:L4e315b:{c.instructions+=1;NFSU2_TR(0x4e315b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e315e:L4e315e:{c.instructions+=6;NFSU2_TR(0x4e315e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e3161:{NFSU2_TR(0x4e3161);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3163:{NFSU2_TR(0x4e3163);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3168:{NFSU2_TR(0x4e3168);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e316d:{NFSU2_TR(0x4e316d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e316e:{NFSU2_TR(0x4e316e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3173ull));
TAIL_STATIC(0x537c00u,537);
}
B4e3173:L4e3173:{c.instructions+=4;NFSU2_TR(0x4e3173);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3176:{NFSU2_TR(0x4e3176);
u8 U[4];
w4(U+0,u32(0x4fd28546ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e317b:{NFSU2_TR(0x4e317b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e317c:{NFSU2_TR(0x4e317c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3181ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e3181:L4e3181:{c.instructions+=2;NFSU2_TR(0x4e3181);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3182:{NFSU2_TR(0x4e3182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3187ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4e3187:L4e3187:{c.instructions+=4;NFSU2_TR(0x4e3187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e318a:{NFSU2_TR(0x4e318a);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e318f:{NFSU2_TR(0x4e318f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3190:{NFSU2_TR(0x4e3190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3195ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e3195:L4e3195:{c.instructions+=2;NFSU2_TR(0x4e3195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3196:{NFSU2_TR(0x4e3196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e319bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e319b:L4e319b:{c.instructions+=4;NFSU2_TR(0x4e319b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e319e:{NFSU2_TR(0x4e319e);
u8 U[4];
w4(U+0,u32(0x78f8d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31a3:{NFSU2_TR(0x4e31a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31a4:{NFSU2_TR(0x4e31a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e31a9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B4e31a9:L4e31a9:{c.instructions+=3;NFSU2_TR(0x4e31a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4e31ac:{NFSU2_TR(0x4e31ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e31ae:{NFSU2_TR(0x4e31ae);
if(r1(R+518)){{goto L4e31c9;}}
}
B4e31b0:L4e31b0:{c.instructions+=7;NFSU2_TR(0x4e31b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e31b3:{NFSU2_TR(0x4e31b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e31b6:{NFSU2_TR(0x4e31b6);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000ull))));
}
B4e31bc:{NFSU2_TR(0x4e31bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31bd:{NFSU2_TR(0x4e31bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31be:{NFSU2_TR(0x4e31be);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e31c4:{NFSU2_TR(0x4e31c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e31c9ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e31c9:L4e31c9:{c.instructions+=3;NFSU2_TR(0x4e31c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e31cc:{NFSU2_TR(0x4e31cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4e31cf:{NFSU2_TR(0x4e31cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e31ed;}}
}
B4e31d1:L4e31d1:{c.instructions+=4;NFSU2_TR(0x4e31d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e31d4:{NFSU2_TR(0x4e31d4);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31d9:{NFSU2_TR(0x4e31d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31da:{NFSU2_TR(0x4e31da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e31dfull));
TAIL_STATIC(0x5379c0u,537);
}
B4e31df:L4e31df:{c.instructions+=2;NFSU2_TR(0x4e31df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31e0:{NFSU2_TR(0x4e31e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e31e5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e31e5:L4e31e5:{c.instructions+=2;NFSU2_TR(0x4e31e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e31eb:{NFSU2_TR(0x4e31eb);
{goto L4e320c;}
}
B4e31ed:L4e31ed:{c.instructions+=2;NFSU2_TR(0x4e31ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e31f0:{NFSU2_TR(0x4e31f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e320f;}}
}
B4e31f2:L4e31f2:{c.instructions+=4;NFSU2_TR(0x4e31f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e31f5:{NFSU2_TR(0x4e31f5);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31fa:{NFSU2_TR(0x4e31fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e31fb:{NFSU2_TR(0x4e31fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3200ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e3200:L4e3200:{c.instructions+=2;NFSU2_TR(0x4e3200);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3201:{NFSU2_TR(0x4e3201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3206ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e3206:L4e3206:{c.instructions+=1;NFSU2_TR(0x4e3206);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e320c:L4e320c:{c.instructions+=1;NFSU2_TR(0x4e320c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e320f:L4e320f:{c.instructions+=4;NFSU2_TR(0x4e320f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3212:{NFSU2_TR(0x4e3212);
u8 U[4];
w4(U+0,u32(0x36227ee9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3217:{NFSU2_TR(0x4e3217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3218:{NFSU2_TR(0x4e3218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e321dull));
TAIL_STATIC(0x537a10u,537);
}
B4e321d:L4e321d:{c.instructions+=5;NFSU2_TR(0x4e321d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3223:{NFSU2_TR(0x4e3223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3226:{NFSU2_TR(0x4e3226);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e3229:{NFSU2_TR(0x4e3229);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e322b:{NFSU2_TR(0x4e322b);
if(r1(R+518)){{goto L4e3246;}}
}
B4e322d:L4e322d:{c.instructions+=4;NFSU2_TR(0x4e322d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3230:{NFSU2_TR(0x4e3230);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3233:{NFSU2_TR(0x4e3233);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3235:{NFSU2_TR(0x4e3235);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e323c;}}
}
B4e3237:L4e3237:{c.instructions+=2;NFSU2_TR(0x4e3237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e323a:{NFSU2_TR(0x4e323a);
{goto L4e3243;}
}
B4e323c:L4e323c:{c.instructions+=1;NFSU2_TR(0x4e323c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4e3243:L4e3243:{c.instructions+=1;NFSU2_TR(0x4e3243);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3246:L4e3246:{c.instructions+=3;NFSU2_TR(0x4e3246);
__builtin_memmove((R+4),(R+24),4);
}
B4e3248:{NFSU2_TR(0x4e3248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e324e:{NFSU2_TR(0x4e324e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3253ull));
TAIL_STATIC(0x4ce170u,4ce);
}
B4e3253:L4e3253:{c.instructions+=9;NFSU2_TR(0x4e3253);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3257:{NFSU2_TR(0x4e3257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e3258:{NFSU2_TR(0x4e3258);
__builtin_memmove((R+0),(R+24),4);
}
B4e325a:{NFSU2_TR(0x4e325a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e325b:{NFSU2_TR(0x4e325b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e325c:{NFSU2_TR(0x4e325c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e325d:{NFSU2_TR(0x4e325d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3264:{NFSU2_TR(0x4e3264);
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
B4e3267:{NFSU2_TR(0x4e3267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3270:L4e3270:{c.instructions+=6;NFSU2_TR(0x4e3270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3271:{NFSU2_TR(0x4e3271);
__builtin_memmove((R+24),(R+4),4);
}
B4e3273:{NFSU2_TR(0x4e3273);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3277:{NFSU2_TR(0x4e3277);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e327a:{NFSU2_TR(0x4e327a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e327d:{NFSU2_TR(0x4e327d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3289;}}
}
B4e327f:L4e327f:{c.instructions+=2;NFSU2_TR(0x4e327f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e3282:{NFSU2_TR(0x4e3282);
if(r1(R+518)){{goto L4e3295;}}
}
B4e3284:L4e3284:{c.instructions+=2;NFSU2_TR(0x4e3284);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3287:{NFSU2_TR(0x4e3287);
{goto L4e3295;}
}
B4e3289:L4e3289:{c.instructions+=2;NFSU2_TR(0x4e3289);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e328c:{NFSU2_TR(0x4e328c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3295;}}
}
B4e328e:L4e328e:{c.instructions+=2;NFSU2_TR(0x4e328e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e3291:{NFSU2_TR(0x4e3291);
if(r1(R+518)){{goto L4e3295;}}
}
B4e3293:L4e3293:{c.instructions+=1;NFSU2_TR(0x4e3293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e3295:L4e3295:{c.instructions+=2;NFSU2_TR(0x4e3295);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4e3298:{NFSU2_TR(0x4e3298);
if(r1(R+518)){{goto L4e32ee;}}
}
B4e329a:L4e329a:{c.instructions+=4;NFSU2_TR(0x4e329a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e329d:{NFSU2_TR(0x4e329d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e32a0:{NFSU2_TR(0x4e32a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e32a2:{NFSU2_TR(0x4e32a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e32a9;}}
}
B4e32a4:L4e32a4:{c.instructions+=2;NFSU2_TR(0x4e32a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e32a7:{NFSU2_TR(0x4e32a7);
{goto L4e32b0;}
}
B4e32a9:L4e32a9:{c.instructions+=1;NFSU2_TR(0x4e32a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4e32b0:L4e32b0:{c.instructions+=5;NFSU2_TR(0x4e32b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e32b3:{NFSU2_TR(0x4e32b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e32b4:{NFSU2_TR(0x4e32b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e32b5:{NFSU2_TR(0x4e32b5);
__builtin_memmove((R+4),(R+24),4);
}
B4e32b7:{NFSU2_TR(0x4e32b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e32bcull));
TAIL_STATIC(0x498740u,498);
}
B4e32bc:L4e32bc:{c.instructions+=4;NFSU2_TR(0x4e32bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e32bf:{NFSU2_TR(0x4e32bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e32c2:{NFSU2_TR(0x4e32c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e32c4:{NFSU2_TR(0x4e32c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e32cb;}}
}
B4e32c6:L4e32c6:{c.instructions+=2;NFSU2_TR(0x4e32c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e32c9:{NFSU2_TR(0x4e32c9);
{goto L4e32d2;}
}
B4e32cb:L4e32cb:{c.instructions+=1;NFSU2_TR(0x4e32cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4e32d2:L4e32d2:{c.instructions+=3;NFSU2_TR(0x4e32d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e32d3:{NFSU2_TR(0x4e32d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e32d6:{NFSU2_TR(0x4e32d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e32dbull));
TAIL_STATIC(0x52ee40u,52e);
}
B4e32db:L4e32db:{c.instructions+=2;NFSU2_TR(0x4e32db);
__builtin_memmove((R+4),(R+24),4);
}
B4e32dd:{NFSU2_TR(0x4e32dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e32e2ull));
TAIL_STATIC(0x4ce170u,4ce);
}
B4e32e2:L4e32e2:{c.instructions+=2;NFSU2_TR(0x4e32e2);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e32e8:{NFSU2_TR(0x4e32e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e32ee:L4e32ee:{c.instructions+=2;NFSU2_TR(0x4e32ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e32ef:{NFSU2_TR(0x4e32ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3300:L4e3300:{c.instructions+=13;NFSU2_TR(0x4e3300);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3302:{NFSU2_TR(0x4e3302);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3307:{NFSU2_TR(0x4e3307);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e330d:{NFSU2_TR(0x4e330d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e330e:{NFSU2_TR(0x4e330e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3315:{NFSU2_TR(0x4e3315);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3316:{NFSU2_TR(0x4e3316);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3317:{NFSU2_TR(0x4e3317);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3318:{NFSU2_TR(0x4e3318);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e331c:{NFSU2_TR(0x4e331c);
__builtin_memmove((R+24),(R+4),4);
}
B4e331e:{NFSU2_TR(0x4e331e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e331f:{NFSU2_TR(0x4e331f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3323:{NFSU2_TR(0x4e3323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3328ull));
TAIL_STATIC(0x551de0u,551);
}
B4e3328:L4e3328:{c.instructions+=8;NFSU2_TR(0x4e3328);
u8 U[4];
w4(U+0,u32(0x78f8e4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e332e:{NFSU2_TR(0x4e332e);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e3333:{NFSU2_TR(0x4e3333);
__builtin_memmove(gp(0x83a9c8),(R+0),4);
}
B4e3338:{NFSU2_TR(0x4e3338);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e333b:{NFSU2_TR(0x4e333b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3341:{NFSU2_TR(0x4e3341);
__builtin_memmove((R+4),(R+24),4);
}
B4e3343:{NFSU2_TR(0x4e3343);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e334b:{NFSU2_TR(0x4e334b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3350ull));
TAIL_STATIC(0x4b4cc0u,4b4);
}
B4e3350:L4e3350:{c.instructions+=2;NFSU2_TR(0x4e3350);
__builtin_memmove((R+4),(R+24),4);
}
B4e3352:{NFSU2_TR(0x4e3352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3357ull));
TAIL_STATIC(0x4ce500u,4ce);
}
B4e3357:L4e3357:{c.instructions+=5;NFSU2_TR(0x4e3357);
__builtin_memmove((R+8),gp(0x7f44fc),4);
}
B4e335d:{NFSU2_TR(0x4e335d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e335f:{NFSU2_TR(0x4e335f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3360:{NFSU2_TR(0x4e3360);
s1(0x838528,u8(0x0ull));
}
B4e3367:{NFSU2_TR(0x4e3367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e336cull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e336c:L4e336c:{c.instructions+=8;NFSU2_TR(0x4e336c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3370:{NFSU2_TR(0x4e3370);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e3373:{NFSU2_TR(0x4e3373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e3374:{NFSU2_TR(0x4e3374);
__builtin_memmove((R+0),(R+24),4);
}
B4e3376:{NFSU2_TR(0x4e3376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3377:{NFSU2_TR(0x4e3377);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e337e:{NFSU2_TR(0x4e337e);
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
B4e3381:{NFSU2_TR(0x4e3381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3390:L4e3390:{c.instructions+=6;NFSU2_TR(0x4e3390);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3391:{NFSU2_TR(0x4e3391);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3392:{NFSU2_TR(0x4e3392);
__builtin_memmove((R+24),(R+4),4);
}
B4e3394:{NFSU2_TR(0x4e3394);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e3397:{NFSU2_TR(0x4e3397);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e3399:{NFSU2_TR(0x4e3399);
if(r1(R+518)){{goto L4e33dc;}}
}
B4e339b:L4e339b:{c.instructions+=6;NFSU2_TR(0x4e339b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e33a1:{NFSU2_TR(0x4e33a1);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e33a6:{NFSU2_TR(0x4e33a6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e33ab:{NFSU2_TR(0x4e33ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e33ac:{NFSU2_TR(0x4e33ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e33b0:{NFSU2_TR(0x4e33b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e33b5ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4e33b5:L4e33b5:{c.instructions+=6;NFSU2_TR(0x4e33b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e33bb:{NFSU2_TR(0x4e33bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e33be:{NFSU2_TR(0x4e33be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e33bf:{NFSU2_TR(0x4e33bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e33c2:{NFSU2_TR(0x4e33c2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B4e33c5:{NFSU2_TR(0x4e33c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e33caull));
TAIL_STATIC(0x532670u,532);
}
B4e33ca:L4e33ca:{c.instructions+=3;NFSU2_TR(0x4e33ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e33d0:{NFSU2_TR(0x4e33d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e33d1:{NFSU2_TR(0x4e33d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e33d6ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4e33d6:L4e33d6:{c.instructions+=2;NFSU2_TR(0x4e33d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e33d9:{NFSU2_TR(0x4e33d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e33dc:L4e33dc:{c.instructions+=3;NFSU2_TR(0x4e33dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e33e2:{NFSU2_TR(0x4e33e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e33e3:{NFSU2_TR(0x4e33e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e33e8ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4e33e8:L4e33e8:{c.instructions+=5;NFSU2_TR(0x4e33e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e33eb:{NFSU2_TR(0x4e33eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4e33ef:{NFSU2_TR(0x4e33ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e33f2:{NFSU2_TR(0x4e33f2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e33f4:{NFSU2_TR(0x4e33f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e345a;}}
}
B4e33f6:L4e33f6:{c.instructions+=2;NFSU2_TR(0x4e33f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e33f8:{NFSU2_TR(0x4e33f8);
if(r1(R+518)){{goto L4e345a;}}
}
B4e33fa:L4e33fa:{c.instructions+=4;NFSU2_TR(0x4e33fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e33fd:{NFSU2_TR(0x4e33fd);
w4(R+0,u32(0xfeull));
}
B4e3402:{NFSU2_TR(0x4e3402);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e3404:{NFSU2_TR(0x4e3404);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e3426;}}
}
B4e3406:L4e3406:{c.instructions+=1;NFSU2_TR(0x4e3406);
{goto L4e3410;}
}
B4e3410:L4e3410:{c.instructions+=8;NFSU2_TR(0x4e3410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3416:{NFSU2_TR(0x4e3416);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B4e341a:{NFSU2_TR(0x4e341a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4e341c:{NFSU2_TR(0x4e341c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B4e341e:{NFSU2_TR(0x4e341e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3421:{NFSU2_TR(0x4e3421);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4e3422:{NFSU2_TR(0x4e3422);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3424:{NFSU2_TR(0x4e3424);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e3410u);}goto L4e3410;}}
}
B4e3426:L4e3426:{c.instructions+=10;NFSU2_TR(0x4e3426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3429:{NFSU2_TR(0x4e3429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e342f:{NFSU2_TR(0x4e342f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4e3432:{NFSU2_TR(0x4e3432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3435:{NFSU2_TR(0x4e3435);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e3436:{NFSU2_TR(0x4e3436);
__builtin_memmove((R+4),(R+0),4);
}
B4e3438:{NFSU2_TR(0x4e3438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e343b:{NFSU2_TR(0x4e343b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e343e:{NFSU2_TR(0x4e343e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3440:{NFSU2_TR(0x4e3440);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e3445;}}
}
B4e3442:L4e3442:{c.instructions+=1;NFSU2_TR(0x4e3442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3445:L4e3445:{c.instructions+=2;NFSU2_TR(0x4e3445);
__builtin_memmove((R+4),(R+24),4);
}
B4e3447:{NFSU2_TR(0x4e3447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e344cull));
TAIL_STATIC(0x4b5100u,4b5);
}
B4e344c:L4e344c:{c.instructions+=4;NFSU2_TR(0x4e344c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e344f:{NFSU2_TR(0x4e344f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3451:{NFSU2_TR(0x4e3451);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3452:{NFSU2_TR(0x4e3452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3457ull));
TAIL_STATIC(0x51de60u,51d);
}
B4e3457:L4e3457:{c.instructions+=1;NFSU2_TR(0x4e3457);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e345a:L4e345a:{c.instructions+=3;NFSU2_TR(0x4e345a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e345d:{NFSU2_TR(0x4e345d);
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
B4e345f:{NFSU2_TR(0x4e345f);
if(r1(R+518)){{goto L4e348d;}}
}
B4e3461:L4e3461:{c.instructions+=2;NFSU2_TR(0x4e3461);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(U+3))<(u8(0x20ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x20ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4e3464:{NFSU2_TR(0x4e3464);
if(r1(R+518)){{goto L4e348d;}}
}
B4e3466:L4e3466:{c.instructions+=4;NFSU2_TR(0x4e3466);
w1(R+0,u8(u32(r1(R+0))^u32(u8(0x1ull))));
}
B4e3468:{NFSU2_TR(0x4e3468);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e346b:{NFSU2_TR(0x4e346b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e3472:{NFSU2_TR(0x4e3472);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3478;}}
}
B4e3474:L4e3474:{c.instructions+=1;NFSU2_TR(0x4e3474);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e3478:L4e3478:{c.instructions+=2;NFSU2_TR(0x4e3478);
__builtin_memmove((R+4),(R+24),4);
}
B4e347a:{NFSU2_TR(0x4e347a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e347full));
TAIL_STATIC(0x4ce500u,4ce);
}
B4e347f:L4e347f:{c.instructions+=4;NFSU2_TR(0x4e347f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3482:{NFSU2_TR(0x4e3482);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3484:{NFSU2_TR(0x4e3484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3485:{NFSU2_TR(0x4e3485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e348aull));
TAIL_STATIC(0x51de60u,51d);
}
B4e348a:L4e348a:{c.instructions+=1;NFSU2_TR(0x4e348a);
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
B4e348d:L4e348d:{c.instructions+=3;NFSU2_TR(0x4e348d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e348e:{NFSU2_TR(0x4e348e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e348f:{NFSU2_TR(0x4e348f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e34a0:L4e34a0:{c.instructions+=8;NFSU2_TR(0x4e34a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e34a2:{NFSU2_TR(0x4e34a2);
u8 U[4];
w4(U+0,u32(0x775c34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e34a7:{NFSU2_TR(0x4e34a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e34ad:{NFSU2_TR(0x4e34ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e34ae:{NFSU2_TR(0x4e34ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e34b5:{NFSU2_TR(0x4e34b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e34b6:{NFSU2_TR(0x4e34b6);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e34b8:{NFSU2_TR(0x4e34b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e34bdull));
TAIL_STATIC(0x575620u,575);
}
B4e34bd:L4e34bd:{c.instructions+=5;NFSU2_TR(0x4e34bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e34c0:{NFSU2_TR(0x4e34c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e34c4:{NFSU2_TR(0x4e34c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e34c6:{NFSU2_TR(0x4e34c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e34ce:{NFSU2_TR(0x4e34ce);
if(r1(R+518)){{goto L4e34eb;}}
}
B4e34d0:L4e34d0:{c.instructions+=4;NFSU2_TR(0x4e34d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e34d4:{NFSU2_TR(0x4e34d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e34d5:{NFSU2_TR(0x4e34d5);
__builtin_memmove((R+4),(R+0),4);
}
B4e34d7:{NFSU2_TR(0x4e34d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e34dcull));
TAIL_STATIC(0x4ce710u,4ce);
}
B4e34dc:L4e34dc:{c.instructions+=4;NFSU2_TR(0x4e34dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e34e0:{NFSU2_TR(0x4e34e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e34e7:{NFSU2_TR(0x4e34e7);
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
B4e34ea:{NFSU2_TR(0x4e34ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e34eb:L4e34eb:{c.instructions+=5;NFSU2_TR(0x4e34eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e34ef:{NFSU2_TR(0x4e34ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e34f1:{NFSU2_TR(0x4e34f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e34f8:{NFSU2_TR(0x4e34f8);
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
B4e34fb:{NFSU2_TR(0x4e34fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3500:L4e3500:{c.instructions+=8;NFSU2_TR(0x4e3500);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3502:{NFSU2_TR(0x4e3502);
u8 U[4];
w4(U+0,u32(0x775c54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3507:{NFSU2_TR(0x4e3507);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e350d:{NFSU2_TR(0x4e350d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e350e:{NFSU2_TR(0x4e350e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3515:{NFSU2_TR(0x4e3515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3516:{NFSU2_TR(0x4e3516);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e351b:{NFSU2_TR(0x4e351b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3520ull));
TAIL_STATIC(0x575620u,575);
}
B4e3520:L4e3520:{c.instructions+=5;NFSU2_TR(0x4e3520);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3523:{NFSU2_TR(0x4e3523);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3527:{NFSU2_TR(0x4e3527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3529:{NFSU2_TR(0x4e3529);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3531:{NFSU2_TR(0x4e3531);
if(r1(R+518)){{goto L4e354e;}}
}
B4e3533:L4e3533:{c.instructions+=4;NFSU2_TR(0x4e3533);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3537:{NFSU2_TR(0x4e3537);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3538:{NFSU2_TR(0x4e3538);
__builtin_memmove((R+4),(R+0),4);
}
B4e353a:{NFSU2_TR(0x4e353a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e353full));
TAIL_STATIC(0x4ce770u,4ce);
}
B4e353f:L4e353f:{c.instructions+=4;NFSU2_TR(0x4e353f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3543:{NFSU2_TR(0x4e3543);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e354a:{NFSU2_TR(0x4e354a);
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
B4e354d:{NFSU2_TR(0x4e354d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e354e:L4e354e:{c.instructions+=5;NFSU2_TR(0x4e354e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3552:{NFSU2_TR(0x4e3552);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3554:{NFSU2_TR(0x4e3554);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e355b:{NFSU2_TR(0x4e355b);
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
B4e355e:{NFSU2_TR(0x4e355e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3560:L4e3560:{c.instructions+=12;NFSU2_TR(0x4e3560);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3562:{NFSU2_TR(0x4e3562);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3567:{NFSU2_TR(0x4e3567);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e356d:{NFSU2_TR(0x4e356d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e356e:{NFSU2_TR(0x4e356e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3575:{NFSU2_TR(0x4e3575);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3576:{NFSU2_TR(0x4e3576);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e357a:{NFSU2_TR(0x4e357a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e357b:{NFSU2_TR(0x4e357b);
__builtin_memmove((R+24),(R+4),4);
}
B4e357d:{NFSU2_TR(0x4e357d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e357e:{NFSU2_TR(0x4e357e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3582:{NFSU2_TR(0x4e3582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3587ull));
TAIL_STATIC(0x552330u,552);
}
B4e3587:L4e3587:{c.instructions+=5;NFSU2_TR(0x4e3587);
u8 U[4];
w4(U+0,u32(0x797794ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e358d:{NFSU2_TR(0x4e358d);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3594:{NFSU2_TR(0x4e3594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3597:{NFSU2_TR(0x4e3597);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e359f:{NFSU2_TR(0x4e359f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3607;}}
}
B4e35a1:L4e35a1:{c.instructions+=4;NFSU2_TR(0x4e35a1);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35a6:{NFSU2_TR(0x4e35a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35a7:{NFSU2_TR(0x4e35a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xc5ac0f31ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e35ae:{NFSU2_TR(0x4e35ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e35b3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e35b3:L4e35b3:{c.instructions+=2;NFSU2_TR(0x4e35b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35b4:{NFSU2_TR(0x4e35b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e35b9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e35b9:L4e35b9:{c.instructions+=6;NFSU2_TR(0x4e35b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e35bc:{NFSU2_TR(0x4e35bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35be:{NFSU2_TR(0x4e35be);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35c3:{NFSU2_TR(0x4e35c3);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35c8:{NFSU2_TR(0x4e35c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35c9:{NFSU2_TR(0x4e35c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e35ceull));
TAIL_STATIC(0x537c00u,537);
}
B4e35ce:L4e35ce:{c.instructions+=6;NFSU2_TR(0x4e35ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e35d1:{NFSU2_TR(0x4e35d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e35d4:{NFSU2_TR(0x4e35d4);
u8 U[4];
w4(U+0,u32(0xb0fcf98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35d9:{NFSU2_TR(0x4e35d9);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35de:{NFSU2_TR(0x4e35de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35df:{NFSU2_TR(0x4e35df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e35e4ull));
TAIL_STATIC(0x537a10u,537);
}
B4e35e4:L4e35e4:{c.instructions+=3;NFSU2_TR(0x4e35e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e35e7:{NFSU2_TR(0x4e35e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35e8:{NFSU2_TR(0x4e35e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e35edull));
TAIL_STATIC(0x50c900u,50c);
}
B4e35ed:L4e35ed:{c.instructions+=6;NFSU2_TR(0x4e35ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e35f0:{NFSU2_TR(0x4e35f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35f2:{NFSU2_TR(0x4e35f2);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35f7:{NFSU2_TR(0x4e35f7);
u8 U[4];
w4(U+0,u32(0x797720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35fc:{NFSU2_TR(0x4e35fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e35fd:{NFSU2_TR(0x4e35fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3602ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e3602:L4e3602:{c.instructions+=2;NFSU2_TR(0x4e3602);
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
B4e3605:{NFSU2_TR(0x4e3605);
{goto L4e3637;}
}
B4e3607:L4e3607:{c.instructions+=4;NFSU2_TR(0x4e3607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3608:{NFSU2_TR(0x4e3608);
u8 U[4];
w4(U+0,u32(0x10cba23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e360d:{NFSU2_TR(0x4e360d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e360e:{NFSU2_TR(0x4e360e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3613ull));
TAIL_STATIC(0x5379c0u,537);
}
B4e3613:L4e3613:{c.instructions+=2;NFSU2_TR(0x4e3613);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3614:{NFSU2_TR(0x4e3614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3619ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e3619:L4e3619:{c.instructions+=3;NFSU2_TR(0x4e3619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e361c:{NFSU2_TR(0x4e361c);
u8 U[4];
w4(U+0,u32(0x795e14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3621:{NFSU2_TR(0x4e3621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3626ull));
TAIL_STATIC(0x505450u,505);
}
B4e3626:L4e3626:{c.instructions+=3;NFSU2_TR(0x4e3626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3627:{NFSU2_TR(0x4e3627);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3628:{NFSU2_TR(0x4e3628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e362dull));
TAIL_STATIC(0x5379c0u,537);
}
B4e362d:L4e362d:{c.instructions+=2;NFSU2_TR(0x4e362d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e362e:{NFSU2_TR(0x4e362e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3633ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4e3633:L4e3633:{c.instructions+=2;NFSU2_TR(0x4e3633);
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
B4e3636:{NFSU2_TR(0x4e3636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e3637:L4e3637:{c.instructions+=2;NFSU2_TR(0x4e3637);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3639:{NFSU2_TR(0x4e3639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e363eull));
TAIL_STATIC(0x49c5f0u,49c);
}
B4e363e:L4e363e:{c.instructions+=3;NFSU2_TR(0x4e363e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3641:{NFSU2_TR(0x4e3641);
__builtin_memmove((R+4),(R+24),4);
}
B4e3643:{NFSU2_TR(0x4e3643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3648ull));
TAIL_STATIC(0x4b6230u,4b6);
}
B4e3648:L4e3648:{c.instructions+=2;NFSU2_TR(0x4e3648);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e364f:{NFSU2_TR(0x4e364f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e366a;}}
}
B4e3651:L4e3651:{c.instructions+=7;NFSU2_TR(0x4e3651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3654:{NFSU2_TR(0x4e3654);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3657:{NFSU2_TR(0x4e3657);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000ull))));
}
B4e365d:{NFSU2_TR(0x4e365d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e365e:{NFSU2_TR(0x4e365e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e365f:{NFSU2_TR(0x4e365f);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4e3665:{NFSU2_TR(0x4e3665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e366aull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4e366a:L4e366a:{c.instructions+=6;NFSU2_TR(0x4e366a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e366e:{NFSU2_TR(0x4e366e);
__builtin_memmove((R+0),(R+24),4);
}
B4e3670:{NFSU2_TR(0x4e3670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3671:{NFSU2_TR(0x4e3671);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3678:{NFSU2_TR(0x4e3678);
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
B4e367b:{NFSU2_TR(0x4e367b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3680:L4e3680:{c.instructions+=3;NFSU2_TR(0x4e3680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3681:{NFSU2_TR(0x4e3681);
__builtin_memmove((R+24),(R+4),4);
}
B4e3683:{NFSU2_TR(0x4e3683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3688ull));
{goto L4e36a0;}
}
B4e3688:L4e3688:{c.instructions+=2;NFSU2_TR(0x4e3688);
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
B4e368d:{NFSU2_TR(0x4e368d);
if(r1(R+518)){{goto L4e3698;}}
}
B4e368f:L4e368f:{c.instructions+=2;NFSU2_TR(0x4e368f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3690:{NFSU2_TR(0x4e3690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3695ull));
TAIL_STATIC(0x575630u,575);
}
B4e3695:L4e3695:{c.instructions+=1;NFSU2_TR(0x4e3695);
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
B4e3698:L4e3698:{c.instructions+=3;NFSU2_TR(0x4e3698);
__builtin_memmove((R+0),(R+24),4);
}
B4e369a:{NFSU2_TR(0x4e369a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e369b:{NFSU2_TR(0x4e369b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e36a0:L4e36a0:{c.instructions+=2;NFSU2_TR(0x4e36a0);
u8 U[4];
w4(U+0,u32(0x797794ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4e36a6:{NFSU2_TR(0x4e36a6);
TAIL_STATIC(0x4defb0u,4de);
}
B4e36b0:L4e36b0:{c.instructions+=8;NFSU2_TR(0x4e36b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e36b2:{NFSU2_TR(0x4e36b2);
u8 U[4];
w4(U+0,u32(0x775c74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e36b7:{NFSU2_TR(0x4e36b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e36bd:{NFSU2_TR(0x4e36bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e36be:{NFSU2_TR(0x4e36be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e36c5:{NFSU2_TR(0x4e36c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e36c6:{NFSU2_TR(0x4e36c6);
u8 U[4];
w4(U+0,u32(0x14cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e36cb:{NFSU2_TR(0x4e36cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e36d0ull));
TAIL_STATIC(0x575620u,575);
}
B4e36d0:L4e36d0:{c.instructions+=5;NFSU2_TR(0x4e36d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e36d3:{NFSU2_TR(0x4e36d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e36d7:{NFSU2_TR(0x4e36d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e36d9:{NFSU2_TR(0x4e36d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e36e1:{NFSU2_TR(0x4e36e1);
if(r1(R+518)){{goto L4e36fe;}}
}
B4e36e3:L4e36e3:{c.instructions+=4;NFSU2_TR(0x4e36e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e36e7:{NFSU2_TR(0x4e36e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e36e8:{NFSU2_TR(0x4e36e8);
__builtin_memmove((R+4),(R+0),4);
}
B4e36ea:{NFSU2_TR(0x4e36ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e36efull));
TAIL_STATIC(0x4cf660u,4cf);
}
B4e36ef:L4e36ef:{c.instructions+=4;NFSU2_TR(0x4e36ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e36f3:{NFSU2_TR(0x4e36f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e36fa:{NFSU2_TR(0x4e36fa);
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
B4e36fd:{NFSU2_TR(0x4e36fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e36fe:L4e36fe:{c.instructions+=5;NFSU2_TR(0x4e36fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3702:{NFSU2_TR(0x4e3702);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3704:{NFSU2_TR(0x4e3704);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e370b:{NFSU2_TR(0x4e370b);
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
B4e370e:{NFSU2_TR(0x4e370e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3710:L4e3710:{c.instructions+=8;NFSU2_TR(0x4e3710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3712:{NFSU2_TR(0x4e3712);
u8 U[4];
w4(U+0,u32(0x775c94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3717:{NFSU2_TR(0x4e3717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e371d:{NFSU2_TR(0x4e371d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e371e:{NFSU2_TR(0x4e371e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3725:{NFSU2_TR(0x4e3725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3726:{NFSU2_TR(0x4e3726);
u8 U[4];
w4(U+0,u32(0x164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e372b:{NFSU2_TR(0x4e372b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3730ull));
TAIL_STATIC(0x575620u,575);
}
B4e3730:L4e3730:{c.instructions+=5;NFSU2_TR(0x4e3730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3733:{NFSU2_TR(0x4e3733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3737:{NFSU2_TR(0x4e3737);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3739:{NFSU2_TR(0x4e3739);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3741:{NFSU2_TR(0x4e3741);
if(r1(R+518)){{goto L4e375e;}}
}
B4e3743:L4e3743:{c.instructions+=4;NFSU2_TR(0x4e3743);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3747:{NFSU2_TR(0x4e3747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3748:{NFSU2_TR(0x4e3748);
__builtin_memmove((R+4),(R+0),4);
}
B4e374a:{NFSU2_TR(0x4e374a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e374full));
TAIL_STATIC(0x4cf750u,4cf);
}
B4e374f:L4e374f:{c.instructions+=4;NFSU2_TR(0x4e374f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3753:{NFSU2_TR(0x4e3753);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e375a:{NFSU2_TR(0x4e375a);
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
B4e375d:{NFSU2_TR(0x4e375d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e375e:L4e375e:{c.instructions+=5;NFSU2_TR(0x4e375e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3762:{NFSU2_TR(0x4e3762);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3764:{NFSU2_TR(0x4e3764);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e376b:{NFSU2_TR(0x4e376b);
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
B4e376e:{NFSU2_TR(0x4e376e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3770:L4e3770:{c.instructions+=8;NFSU2_TR(0x4e3770);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3772:{NFSU2_TR(0x4e3772);
u8 U[4];
w4(U+0,u32(0x775cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3777:{NFSU2_TR(0x4e3777);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e377d:{NFSU2_TR(0x4e377d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e377e:{NFSU2_TR(0x4e377e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3785:{NFSU2_TR(0x4e3785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3786:{NFSU2_TR(0x4e3786);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e378b:{NFSU2_TR(0x4e378b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3790ull));
TAIL_STATIC(0x575620u,575);
}
B4e3790:L4e3790:{c.instructions+=5;NFSU2_TR(0x4e3790);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3793:{NFSU2_TR(0x4e3793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3797:{NFSU2_TR(0x4e3797);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3799:{NFSU2_TR(0x4e3799);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e37a1:{NFSU2_TR(0x4e37a1);
if(r1(R+518)){{goto L4e37be;}}
}
B4e37a3:L4e37a3:{c.instructions+=4;NFSU2_TR(0x4e37a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e37a7:{NFSU2_TR(0x4e37a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37a8:{NFSU2_TR(0x4e37a8);
__builtin_memmove((R+4),(R+0),4);
}
B4e37aa:{NFSU2_TR(0x4e37aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e37afull));
TAIL_STATIC(0x4cfba0u,4cf);
}
B4e37af:L4e37af:{c.instructions+=4;NFSU2_TR(0x4e37af);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e37b3:{NFSU2_TR(0x4e37b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e37ba:{NFSU2_TR(0x4e37ba);
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
B4e37bd:{NFSU2_TR(0x4e37bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e37be:L4e37be:{c.instructions+=5;NFSU2_TR(0x4e37be);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e37c2:{NFSU2_TR(0x4e37c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e37c4:{NFSU2_TR(0x4e37c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e37cb:{NFSU2_TR(0x4e37cb);
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
B4e37ce:{NFSU2_TR(0x4e37ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e37d0:L4e37d0:{c.instructions+=16;NFSU2_TR(0x4e37d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37d1:{NFSU2_TR(0x4e37d1);
__builtin_memmove((R+20),(R+16),4);
}
B4e37d3:{NFSU2_TR(0x4e37d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e37d6:{NFSU2_TR(0x4e37d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37d8:{NFSU2_TR(0x4e37d8);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37dd:{NFSU2_TR(0x4e37dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e37e3:{NFSU2_TR(0x4e37e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37e4:{NFSU2_TR(0x4e37e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e37eb:{NFSU2_TR(0x4e37eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8f8ull))));
}
B4e37f1:{NFSU2_TR(0x4e37f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37f2:{NFSU2_TR(0x4e37f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37f3:{NFSU2_TR(0x4e37f3);
__builtin_memmove((R+24),(R+4),4);
}
B4e37f5:{NFSU2_TR(0x4e37f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e37f8:{NFSU2_TR(0x4e37f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e37fa:{NFSU2_TR(0x4e37fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e37fb:{NFSU2_TR(0x4e37fb);
if(r1(R+518)){{goto L4e3947;}}
}
B4e3801:L4e3801:{c.instructions+=4;NFSU2_TR(0x4e3801);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e3804:{NFSU2_TR(0x4e3804);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e3806:{NFSU2_TR(0x4e3806);
__builtin_memmove((R+12),gp(0x8500d0),4);
}
B4e380c:{NFSU2_TR(0x4e380c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e386c;}}
}
B4e380e:L4e380e:{c.instructions+=3;NFSU2_TR(0x4e380e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3811:{NFSU2_TR(0x4e3811);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e3813:{NFSU2_TR(0x4e3813);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e386c;}}
}
B4e3815:L4e3815:{c.instructions+=2;NFSU2_TR(0x4e3815);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3816:{NFSU2_TR(0x4e3816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e381bull));
TAIL_STATIC(0x4cfee0u,4cf);
}
B4e381b:L4e381b:{c.instructions+=3;NFSU2_TR(0x4e381b);
__builtin_memmove((R+28),(R+0),4);
}
B4e381d:{NFSU2_TR(0x4e381d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4e381f:{NFSU2_TR(0x4e381f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e386c;}}
}
B4e3821:L4e3821:{c.instructions+=2;NFSU2_TR(0x4e3821);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3824:{NFSU2_TR(0x4e3824);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e384a;}}
}
B4e3826:L4e3826:{c.instructions+=2;NFSU2_TR(0x4e3826);
__builtin_memmove((R+4),(R+24),4);
}
B4e3828:{NFSU2_TR(0x4e3828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e382dull));
TAIL_STATIC(0x49d870u,49d);
}
B4e382d:L4e382d:{c.instructions+=10;NFSU2_TR(0x4e382d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e3831:{NFSU2_TR(0x4e3831);
__builtin_memmove((R+0),(R+28),4);
}
B4e3833:{NFSU2_TR(0x4e3833);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e383a:{NFSU2_TR(0x4e383a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3841:{NFSU2_TR(0x4e3841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e3842:{NFSU2_TR(0x4e3842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3843:{NFSU2_TR(0x4e3843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e3844:{NFSU2_TR(0x4e3844);
__builtin_memmove((R+16),(R+20),4);
}
B4e3846:{NFSU2_TR(0x4e3846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e3847:{NFSU2_TR(0x4e3847);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e384a:L4e384a:{c.instructions+=2;NFSU2_TR(0x4e384a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e384d:{NFSU2_TR(0x4e384d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3853;}}
}
B4e384f:L4e384f:{c.instructions+=1;NFSU2_TR(0x4e384f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e3853:L4e3853:{c.instructions+=9;NFSU2_TR(0x4e3853);
__builtin_memmove((R+0),(R+28),4);
}
B4e3855:{NFSU2_TR(0x4e3855);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e385c:{NFSU2_TR(0x4e385c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3863:{NFSU2_TR(0x4e3863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e3864:{NFSU2_TR(0x4e3864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3865:{NFSU2_TR(0x4e3865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e3866:{NFSU2_TR(0x4e3866);
__builtin_memmove((R+16),(R+20),4);
}
B4e3868:{NFSU2_TR(0x4e3868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e3869:{NFSU2_TR(0x4e3869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e386c:L4e386c:{c.instructions+=3;NFSU2_TR(0x4e386c);
__builtin_memmove((R+0),(R+12),4);
}
B4e386e:{NFSU2_TR(0x4e386e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e3871:{NFSU2_TR(0x4e3871);
if(r1(R+518)){{goto L4e3886;}}
}
B4e3873:L4e3873:{c.instructions+=2;NFSU2_TR(0x4e3873);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e3876:{NFSU2_TR(0x4e3876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e38f7;}}
}
B4e3878:L4e3878:{c.instructions+=3;NFSU2_TR(0x4e3878);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e387a:{NFSU2_TR(0x4e387a);
w4(R+4,u32(0x850080ull));
}
B4e387f:{NFSU2_TR(0x4e387f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3884ull));
TAIL_STATIC(0x5031b0u,503);
}
B4e3884:L4e3884:{c.instructions+=1;NFSU2_TR(0x4e3884);
{goto L4e38f7;}
}
B4e3886:L4e3886:{c.instructions+=2;NFSU2_TR(0x4e3886);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e388a:{NFSU2_TR(0x4e388a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e388full));
TAIL_STATIC(0x40c910u,40c);
}
B4e388f:L4e388f:{c.instructions+=7;NFSU2_TR(0x4e388f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3891:{NFSU2_TR(0x4e3891);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e3895:{NFSU2_TR(0x4e3895);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3896:{NFSU2_TR(0x4e3896);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3898:{NFSU2_TR(0x4e3898);
w4(R+4,u32(0x83a9d0ull));
}
B4e389d:{NFSU2_TR(0x4e389d);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e38a8:{NFSU2_TR(0x4e38a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38adull));
TAIL_STATIC(0x515d00u,515);
}
B4e38ad:L4e38ad:{c.instructions+=3;NFSU2_TR(0x4e38ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e38b1:{NFSU2_TR(0x4e38b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e38b2:{NFSU2_TR(0x4e38b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38b7ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e38b7:L4e38b7:{c.instructions+=2;NFSU2_TR(0x4e38b7);
__builtin_memmove((R+4),(R+0),4);
}
B4e38b9:{NFSU2_TR(0x4e38b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38beull));
TAIL_STATIC(0x587630u,587);
}
B4e38be:L4e38be:{c.instructions+=3;NFSU2_TR(0x4e38be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e38bf:{NFSU2_TR(0x4e38bf);
u8 U[4];
w4(U+0,u32(0x4d0350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e38c4:{NFSU2_TR(0x4e38c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38c9ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e38c9:L4e38c9:{c.instructions+=2;NFSU2_TR(0x4e38c9);
__builtin_memmove((R+4),(R+0),4);
}
B4e38cb:{NFSU2_TR(0x4e38cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38d0ull));
TAIL_STATIC(0x58e080u,58e);
}
B4e38d0:L4e38d0:{c.instructions+=2;NFSU2_TR(0x4e38d0);
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
B4e38d2:{NFSU2_TR(0x4e38d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4e38e0;}}
}
B4e38d4:L4e38d4:{c.instructions+=3;NFSU2_TR(0x4e38d4);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e38d6:{NFSU2_TR(0x4e38d6);
w4(R+4,u32(0x850080ull));
}
B4e38db:{NFSU2_TR(0x4e38db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38e0ull));
TAIL_STATIC(0x5031b0u,503);
}
B4e38e0:L4e38e0:{c.instructions+=3;NFSU2_TR(0x4e38e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e38e7:{NFSU2_TR(0x4e38e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e38f2:{NFSU2_TR(0x4e38f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e38f7ull));
TAIL_STATIC(0x4022c0u,402);
}
B4e38f7:L4e38f7:{c.instructions+=2;NFSU2_TR(0x4e38f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4e38fa:{NFSU2_TR(0x4e38fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4e3947;}}
}
B4e38fc:L4e38fc:{c.instructions+=3;NFSU2_TR(0x4e38fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e38ff:{NFSU2_TR(0x4e38ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e3901:{NFSU2_TR(0x4e3901);
if(r1(R+518)){{goto L4e3916;}}
}
B4e3903:L4e3903:{c.instructions+=3;NFSU2_TR(0x4e3903);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3905:{NFSU2_TR(0x4e3905);
u8 U[4];
w4(U+0,u32(0x10bb17ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e390a:{NFSU2_TR(0x4e390a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e390full));
TAIL_STATIC(0x55dde0u,55d);
}
B4e390f:L4e390f:{c.instructions+=2;NFSU2_TR(0x4e390f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e3912:{NFSU2_TR(0x4e3912);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e3916:L4e3916:{c.instructions+=3;NFSU2_TR(0x4e3916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e3918:{NFSU2_TR(0x4e3918);
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
B4e391a:{NFSU2_TR(0x4e391a);
if(r1(R+518)){{goto L4e392b;}}
}
B4e391c:L4e391c:{c.instructions+=2;NFSU2_TR(0x4e391c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e391d:{NFSU2_TR(0x4e391d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3922ull));
TAIL_STATIC(0x540a60u,540);
}
B4e3922:L4e3922:{c.instructions+=2;NFSU2_TR(0x4e3922);
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
B4e3925:{NFSU2_TR(0x4e3925);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e392b:L4e392b:{c.instructions+=9;NFSU2_TR(0x4e392b);
w4(R+0,u32(0x1ull));
}
B4e3930:{NFSU2_TR(0x4e3930);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3937:{NFSU2_TR(0x4e3937);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e393e:{NFSU2_TR(0x4e393e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e393f:{NFSU2_TR(0x4e393f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3940:{NFSU2_TR(0x4e3940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e3941:{NFSU2_TR(0x4e3941);
__builtin_memmove((R+16),(R+20),4);
}
B4e3943:{NFSU2_TR(0x4e3943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e3944:{NFSU2_TR(0x4e3944);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3947:L4e3947:{c.instructions+=9;NFSU2_TR(0x4e3947);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e394e:{NFSU2_TR(0x4e394e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e394f:{NFSU2_TR(0x4e394f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3950:{NFSU2_TR(0x4e3950);
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
B4e3952:{NFSU2_TR(0x4e3952);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3959:{NFSU2_TR(0x4e3959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e395a:{NFSU2_TR(0x4e395a);
__builtin_memmove((R+16),(R+20),4);
}
B4e395c:{NFSU2_TR(0x4e395c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e395d:{NFSU2_TR(0x4e395d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3960:L4e3960:{c.instructions+=31;NFSU2_TR(0x4e3960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3962:{NFSU2_TR(0x4e3962);
u8 U[4];
w4(U+0,u32(0x775cceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3967:{NFSU2_TR(0x4e3967);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e396d:{NFSU2_TR(0x4e396d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e396e:{NFSU2_TR(0x4e396e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3975:{NFSU2_TR(0x4e3975);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3976:{NFSU2_TR(0x4e3976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3977:{NFSU2_TR(0x4e3977);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3978:{NFSU2_TR(0x4e3978);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3979:{NFSU2_TR(0x4e3979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e397a:{NFSU2_TR(0x4e397a);
__builtin_memmove((R+28),(R+4),4);
}
B4e397c:{NFSU2_TR(0x4e397c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x138ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3982:{NFSU2_TR(0x4e3982);
u8 U[4];
w4(U+0,u32(0x7977f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e3988:{NFSU2_TR(0x4e3988);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e398f:{NFSU2_TR(0x4e398f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3993:{NFSU2_TR(0x4e3993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4e3995:{NFSU2_TR(0x4e3995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3998:{NFSU2_TR(0x4e3998);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e399c:{NFSU2_TR(0x4e399c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e39a0:{NFSU2_TR(0x4e39a0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e39a2:{NFSU2_TR(0x4e39a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e39a8:{NFSU2_TR(0x4e39a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e39ae:{NFSU2_TR(0x4e39ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e39b4:{NFSU2_TR(0x4e39b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e39ba:{NFSU2_TR(0x4e39ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x151ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e39c0:{NFSU2_TR(0x4e39c0);
__builtin_memmove((R+0),gp(0x7f4490),4);
}
B4e39c5:{NFSU2_TR(0x4e39c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e39c6:{NFSU2_TR(0x4e39c6);
__builtin_memmove((R+4),(R+28),4);
}
B4e39c8:{NFSU2_TR(0x4e39c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e39cc:{NFSU2_TR(0x4e39cc);
__builtin_memmove((R+20),(R+0),4);
}
B4e39ce:{NFSU2_TR(0x4e39ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e39d3ull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e39d3:L4e39d3:{c.instructions+=2;NFSU2_TR(0x4e39d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e39d5:{NFSU2_TR(0x4e39d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3a07;}}
}
B4e39d7:L4e39d7:{c.instructions+=2;NFSU2_TR(0x4e39d7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e39d9:{NFSU2_TR(0x4e39d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e39deull));
TAIL_STATIC(0x575620u,575);
}
B4e39de:L4e39de:{c.instructions+=3;NFSU2_TR(0x4e39de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e39e1:{NFSU2_TR(0x4e39e1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e39e3:{NFSU2_TR(0x4e39e3);
if(r1(R+518)){{goto L4e39f8;}}
}
B4e39e5:L4e39e5:{c.instructions+=4;NFSU2_TR(0x4e39e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e39e8:{NFSU2_TR(0x4e39e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x49de00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e39ef:{NFSU2_TR(0x4e39ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x49dde0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e39f6:{NFSU2_TR(0x4e39f6);
{goto L4e39fa;}
}
B4e39f8:L4e39f8:{c.instructions+=1;NFSU2_TR(0x4e39f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e39fa:L4e39fa:{c.instructions+=5;NFSU2_TR(0x4e39fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e39fd:{NFSU2_TR(0x4e39fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e39ff:{NFSU2_TR(0x4e39ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a02:{NFSU2_TR(0x4e3a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a05:{NFSU2_TR(0x4e3a05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3a07:L4e3a07:{c.instructions+=5;NFSU2_TR(0x4e3a07);
__builtin_memmove((R+0),gp(0x7f4498),4);
}
B4e3a0c:{NFSU2_TR(0x4e3a0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3a0d:{NFSU2_TR(0x4e3a0d);
__builtin_memmove((R+4),(R+28),4);
}
B4e3a0f:{NFSU2_TR(0x4e3a0f);
__builtin_memmove((R+20),(R+0),4);
}
B4e3a11:{NFSU2_TR(0x4e3a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3a16ull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e3a16:L4e3a16:{c.instructions+=2;NFSU2_TR(0x4e3a16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3a18:{NFSU2_TR(0x4e3a18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3a4a;}}
}
B4e3a1a:L4e3a1a:{c.instructions+=2;NFSU2_TR(0x4e3a1a);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3a1c:{NFSU2_TR(0x4e3a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3a21ull));
TAIL_STATIC(0x575620u,575);
}
B4e3a21:L4e3a21:{c.instructions+=3;NFSU2_TR(0x4e3a21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3a24:{NFSU2_TR(0x4e3a24);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3a26:{NFSU2_TR(0x4e3a26);
if(r1(R+518)){{goto L4e3a3b;}}
}
B4e3a28:L4e3a28:{c.instructions+=4;NFSU2_TR(0x4e3a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a2b:{NFSU2_TR(0x4e3a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x49dd30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a32:{NFSU2_TR(0x4e3a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x49ddf0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a39:{NFSU2_TR(0x4e3a39);
{goto L4e3a3d;}
}
B4e3a3b:L4e3a3b:{c.instructions+=1;NFSU2_TR(0x4e3a3b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3a3d:L4e3a3d:{c.instructions+=5;NFSU2_TR(0x4e3a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3a40:{NFSU2_TR(0x4e3a40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3a42:{NFSU2_TR(0x4e3a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a45:{NFSU2_TR(0x4e3a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a48:{NFSU2_TR(0x4e3a48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3a4a:L4e3a4a:{c.instructions+=5;NFSU2_TR(0x4e3a4a);
__builtin_memmove((R+0),gp(0x7f449c),4);
}
B4e3a4f:{NFSU2_TR(0x4e3a4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3a50:{NFSU2_TR(0x4e3a50);
__builtin_memmove((R+4),(R+28),4);
}
B4e3a52:{NFSU2_TR(0x4e3a52);
__builtin_memmove((R+20),(R+0),4);
}
B4e3a54:{NFSU2_TR(0x4e3a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3a59ull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e3a59:L4e3a59:{c.instructions+=2;NFSU2_TR(0x4e3a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3a5b:{NFSU2_TR(0x4e3a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3a8d;}}
}
B4e3a5d:L4e3a5d:{c.instructions+=2;NFSU2_TR(0x4e3a5d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3a5f:{NFSU2_TR(0x4e3a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3a64ull));
TAIL_STATIC(0x575620u,575);
}
B4e3a64:L4e3a64:{c.instructions+=3;NFSU2_TR(0x4e3a64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3a67:{NFSU2_TR(0x4e3a67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3a69:{NFSU2_TR(0x4e3a69);
if(r1(R+518)){{goto L4e3a7e;}}
}
B4e3a6b:L4e3a6b:{c.instructions+=4;NFSU2_TR(0x4e3a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a6e:{NFSU2_TR(0x4e3a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x49dd70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a75:{NFSU2_TR(0x4e3a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x49de00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a7c:{NFSU2_TR(0x4e3a7c);
{goto L4e3a80;}
}
B4e3a7e:L4e3a7e:{c.instructions+=1;NFSU2_TR(0x4e3a7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3a80:L4e3a80:{c.instructions+=5;NFSU2_TR(0x4e3a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3a83:{NFSU2_TR(0x4e3a83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3a85:{NFSU2_TR(0x4e3a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a88:{NFSU2_TR(0x4e3a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3a8b:{NFSU2_TR(0x4e3a8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3a8d:L4e3a8d:{c.instructions+=5;NFSU2_TR(0x4e3a8d);
__builtin_memmove((R+0),gp(0x7f44a0),4);
}
B4e3a92:{NFSU2_TR(0x4e3a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3a93:{NFSU2_TR(0x4e3a93);
__builtin_memmove((R+4),(R+28),4);
}
B4e3a95:{NFSU2_TR(0x4e3a95);
__builtin_memmove((R+20),(R+0),4);
}
B4e3a97:{NFSU2_TR(0x4e3a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3a9cull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e3a9c:L4e3a9c:{c.instructions+=2;NFSU2_TR(0x4e3a9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3a9e:{NFSU2_TR(0x4e3a9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3ad0;}}
}
B4e3aa0:L4e3aa0:{c.instructions+=2;NFSU2_TR(0x4e3aa0);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3aa2:{NFSU2_TR(0x4e3aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3aa7ull));
TAIL_STATIC(0x575620u,575);
}
B4e3aa7:L4e3aa7:{c.instructions+=3;NFSU2_TR(0x4e3aa7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3aaa:{NFSU2_TR(0x4e3aaa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3aac:{NFSU2_TR(0x4e3aac);
if(r1(R+518)){{goto L4e3ac1;}}
}
B4e3aae:L4e3aae:{c.instructions+=4;NFSU2_TR(0x4e3aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3ab1:{NFSU2_TR(0x4e3ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x49dda0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3ab8:{NFSU2_TR(0x4e3ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x49de00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3abf:{NFSU2_TR(0x4e3abf);
{goto L4e3ac3;}
}
B4e3ac1:L4e3ac1:{c.instructions+=1;NFSU2_TR(0x4e3ac1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3ac3:L4e3ac3:{c.instructions+=5;NFSU2_TR(0x4e3ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3ac6:{NFSU2_TR(0x4e3ac6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3ac8:{NFSU2_TR(0x4e3ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3acb:{NFSU2_TR(0x4e3acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3ace:{NFSU2_TR(0x4e3ace);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3ad0:L4e3ad0:{c.instructions+=5;NFSU2_TR(0x4e3ad0);
__builtin_memmove((R+0),gp(0x7f44a4),4);
}
B4e3ad5:{NFSU2_TR(0x4e3ad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ad6:{NFSU2_TR(0x4e3ad6);
__builtin_memmove((R+4),(R+28),4);
}
B4e3ad8:{NFSU2_TR(0x4e3ad8);
__builtin_memmove((R+20),(R+0),4);
}
B4e3ada:{NFSU2_TR(0x4e3ada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3adfull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e3adf:L4e3adf:{c.instructions+=2;NFSU2_TR(0x4e3adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3ae1:{NFSU2_TR(0x4e3ae1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3b13;}}
}
B4e3ae3:L4e3ae3:{c.instructions+=2;NFSU2_TR(0x4e3ae3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ae5:{NFSU2_TR(0x4e3ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3aeaull));
TAIL_STATIC(0x575620u,575);
}
B4e3aea:L4e3aea:{c.instructions+=3;NFSU2_TR(0x4e3aea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3aed:{NFSU2_TR(0x4e3aed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3aef:{NFSU2_TR(0x4e3aef);
if(r1(R+518)){{goto L4e3b04;}}
}
B4e3af1:L4e3af1:{c.instructions+=4;NFSU2_TR(0x4e3af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3af4:{NFSU2_TR(0x4e3af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x49ddb0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3afb:{NFSU2_TR(0x4e3afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x49de00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b02:{NFSU2_TR(0x4e3b02);
{goto L4e3b06;}
}
B4e3b04:L4e3b04:{c.instructions+=1;NFSU2_TR(0x4e3b04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3b06:L4e3b06:{c.instructions+=5;NFSU2_TR(0x4e3b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3b09:{NFSU2_TR(0x4e3b09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3b0b:{NFSU2_TR(0x4e3b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b0e:{NFSU2_TR(0x4e3b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b11:{NFSU2_TR(0x4e3b11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3b13:L4e3b13:{c.instructions+=5;NFSU2_TR(0x4e3b13);
__builtin_memmove((R+0),gp(0x7f44a8),4);
}
B4e3b18:{NFSU2_TR(0x4e3b18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3b19:{NFSU2_TR(0x4e3b19);
__builtin_memmove((R+4),(R+28),4);
}
B4e3b1b:{NFSU2_TR(0x4e3b1b);
__builtin_memmove((R+20),(R+0),4);
}
B4e3b1d:{NFSU2_TR(0x4e3b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3b22ull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e3b22:L4e3b22:{c.instructions+=2;NFSU2_TR(0x4e3b22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3b24:{NFSU2_TR(0x4e3b24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e3b56;}}
}
B4e3b26:L4e3b26:{c.instructions+=2;NFSU2_TR(0x4e3b26);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3b28:{NFSU2_TR(0x4e3b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3b2dull));
TAIL_STATIC(0x575620u,575);
}
B4e3b2d:L4e3b2d:{c.instructions+=3;NFSU2_TR(0x4e3b2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3b30:{NFSU2_TR(0x4e3b30);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3b32:{NFSU2_TR(0x4e3b32);
if(r1(R+518)){{goto L4e3b47;}}
}
B4e3b34:L4e3b34:{c.instructions+=4;NFSU2_TR(0x4e3b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b37:{NFSU2_TR(0x4e3b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x49ddc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b3e:{NFSU2_TR(0x4e3b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x49de00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b45:{NFSU2_TR(0x4e3b45);
{goto L4e3b49;}
}
B4e3b47:L4e3b47:{c.instructions+=1;NFSU2_TR(0x4e3b47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3b49:L4e3b49:{c.instructions+=5;NFSU2_TR(0x4e3b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3b4c:{NFSU2_TR(0x4e3b4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3b4e:{NFSU2_TR(0x4e3b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b51:{NFSU2_TR(0x4e3b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b54:{NFSU2_TR(0x4e3b54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3b56:L4e3b56:{c.instructions+=4;NFSU2_TR(0x4e3b56);
__builtin_memmove((R+8),gp(0x7f4490),4);
}
B4e3b5c:{NFSU2_TR(0x4e3b5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3b5d:{NFSU2_TR(0x4e3b5d);
__builtin_memmove((R+4),(R+28),4);
}
B4e3b5f:{NFSU2_TR(0x4e3b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3b64ull));
TAIL_STATIC(0x4b9650u,4b9);
}
B4e3b64:L4e3b64:{c.instructions+=7;NFSU2_TR(0x4e3b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3b68:{NFSU2_TR(0x4e3b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b6e:{NFSU2_TR(0x4e3b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3b71:{NFSU2_TR(0x4e3b71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3b72:{NFSU2_TR(0x4e3b72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3b73:{NFSU2_TR(0x4e3b73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3b74:{NFSU2_TR(0x4e3b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3b79ull));
TAIL_STATIC(0x537980u,537);
}
B4e3b79:L4e3b79:{c.instructions+=10;NFSU2_TR(0x4e3b79);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3b7d:{NFSU2_TR(0x4e3b7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e3b80:{NFSU2_TR(0x4e3b80);
__builtin_memmove((R+0),(R+28),4);
}
B4e3b82:{NFSU2_TR(0x4e3b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e3b83:{NFSU2_TR(0x4e3b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3b84:{NFSU2_TR(0x4e3b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e3b85:{NFSU2_TR(0x4e3b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e3b86:{NFSU2_TR(0x4e3b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3b8d:{NFSU2_TR(0x4e3b8d);
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
B4e3b90:{NFSU2_TR(0x4e3b90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3ba0:L4e3ba0:{c.instructions+=6;NFSU2_TR(0x4e3ba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ba1:{NFSU2_TR(0x4e3ba1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3ba7:{NFSU2_TR(0x4e3ba7);
u8 U[4];
w4(U+0,u32(0x7977f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4e3bad:{NFSU2_TR(0x4e3bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e3baf:{NFSU2_TR(0x4e3baf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4e3bb1:{NFSU2_TR(0x4e3bb1);
if(r1(R+518)){{goto L4e3bcc;}}
}
B4e3bb3:L4e3bb3:{c.instructions+=6;NFSU2_TR(0x4e3bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e3bb5:{NFSU2_TR(0x4e3bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e3bb8:{NFSU2_TR(0x4e3bb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e3bba:{NFSU2_TR(0x4e3bba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3bbb:{NFSU2_TR(0x4e3bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3bbe:{NFSU2_TR(0x4e3bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3bc3ull));
TAIL_STATIC(0x575630u,575);
}
B4e3bc3:L4e3bc3:{c.instructions+=4;NFSU2_TR(0x4e3bc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e3bc5:{NFSU2_TR(0x4e3bc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3bc8:{NFSU2_TR(0x4e3bc8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4e3bca:{NFSU2_TR(0x4e3bca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e3bb3u);}goto L4e3bb3;}}
}
B4e3bcc:L4e3bcc:{c.instructions+=2;NFSU2_TR(0x4e3bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3bcd:{NFSU2_TR(0x4e3bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3bd0:L4e3bd0:{c.instructions+=8;NFSU2_TR(0x4e3bd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3bd2:{NFSU2_TR(0x4e3bd2);
u8 U[4];
w4(U+0,u32(0x775cf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3bd7:{NFSU2_TR(0x4e3bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3bdd:{NFSU2_TR(0x4e3bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3bde:{NFSU2_TR(0x4e3bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3be5:{NFSU2_TR(0x4e3be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3be6:{NFSU2_TR(0x4e3be6);
u8 U[4];
w4(U+0,u32(0x190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3beb:{NFSU2_TR(0x4e3beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3bf0ull));
TAIL_STATIC(0x575620u,575);
}
B4e3bf0:L4e3bf0:{c.instructions+=5;NFSU2_TR(0x4e3bf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3bf3:{NFSU2_TR(0x4e3bf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3bf7:{NFSU2_TR(0x4e3bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3bf9:{NFSU2_TR(0x4e3bf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3c01:{NFSU2_TR(0x4e3c01);
if(r1(R+518)){{goto L4e3c1e;}}
}
B4e3c03:L4e3c03:{c.instructions+=4;NFSU2_TR(0x4e3c03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3c07:{NFSU2_TR(0x4e3c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c08:{NFSU2_TR(0x4e3c08);
__builtin_memmove((R+4),(R+0),4);
}
B4e3c0a:{NFSU2_TR(0x4e3c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3c0full));
TAIL_STATIC(0x4d0500u,4d0);
}
B4e3c0f:L4e3c0f:{c.instructions+=4;NFSU2_TR(0x4e3c0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3c13:{NFSU2_TR(0x4e3c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3c1a:{NFSU2_TR(0x4e3c1a);
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
B4e3c1d:{NFSU2_TR(0x4e3c1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3c1e:L4e3c1e:{c.instructions+=5;NFSU2_TR(0x4e3c1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3c22:{NFSU2_TR(0x4e3c22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3c24:{NFSU2_TR(0x4e3c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3c2b:{NFSU2_TR(0x4e3c2b);
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
B4e3c2e:{NFSU2_TR(0x4e3c2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3c30:L4e3c30:{c.instructions+=3;NFSU2_TR(0x4e3c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c31:{NFSU2_TR(0x4e3c31);
__builtin_memmove((R+24),(R+4),4);
}
B4e3c33:{NFSU2_TR(0x4e3c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3c38ull));
TAIL_STATIC(0x4d0620u,4d0);
}
B4e3c38:L4e3c38:{c.instructions+=2;NFSU2_TR(0x4e3c38);
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
B4e3c3d:{NFSU2_TR(0x4e3c3d);
if(r1(R+518)){{goto L4e3c48;}}
}
B4e3c3f:L4e3c3f:{c.instructions+=2;NFSU2_TR(0x4e3c3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c40:{NFSU2_TR(0x4e3c40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3c45ull));
TAIL_STATIC(0x575630u,575);
}
B4e3c45:L4e3c45:{c.instructions+=1;NFSU2_TR(0x4e3c45);
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
B4e3c48:L4e3c48:{c.instructions+=3;NFSU2_TR(0x4e3c48);
__builtin_memmove((R+0),(R+24),4);
}
B4e3c4a:{NFSU2_TR(0x4e3c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3c4b:{NFSU2_TR(0x4e3c4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3c50:L4e3c50:{c.instructions+=8;NFSU2_TR(0x4e3c50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c52:{NFSU2_TR(0x4e3c52);
u8 U[4];
w4(U+0,u32(0x775d14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c57:{NFSU2_TR(0x4e3c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3c5d:{NFSU2_TR(0x4e3c5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c5e:{NFSU2_TR(0x4e3c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3c65:{NFSU2_TR(0x4e3c65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c66:{NFSU2_TR(0x4e3c66);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c6b:{NFSU2_TR(0x4e3c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3c70ull));
TAIL_STATIC(0x575620u,575);
}
B4e3c70:L4e3c70:{c.instructions+=5;NFSU2_TR(0x4e3c70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3c73:{NFSU2_TR(0x4e3c73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c77:{NFSU2_TR(0x4e3c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3c79:{NFSU2_TR(0x4e3c79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3c81:{NFSU2_TR(0x4e3c81);
if(r1(R+518)){{goto L4e3c9e;}}
}
B4e3c83:L4e3c83:{c.instructions+=4;NFSU2_TR(0x4e3c83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3c87:{NFSU2_TR(0x4e3c87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3c88:{NFSU2_TR(0x4e3c88);
__builtin_memmove((R+4),(R+0),4);
}
B4e3c8a:{NFSU2_TR(0x4e3c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3c8full));
TAIL_STATIC(0x4d0690u,4d0);
}
B4e3c8f:L4e3c8f:{c.instructions+=4;NFSU2_TR(0x4e3c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3c93:{NFSU2_TR(0x4e3c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3c9a:{NFSU2_TR(0x4e3c9a);
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
B4e3c9d:{NFSU2_TR(0x4e3c9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3c9e:L4e3c9e:{c.instructions+=5;NFSU2_TR(0x4e3c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3ca2:{NFSU2_TR(0x4e3ca2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3ca4:{NFSU2_TR(0x4e3ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3cab:{NFSU2_TR(0x4e3cab);
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
B4e3cae:{NFSU2_TR(0x4e3cae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3cb0:L4e3cb0:{c.instructions+=3;NFSU2_TR(0x4e3cb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3cb1:{NFSU2_TR(0x4e3cb1);
__builtin_memmove((R+24),(R+4),4);
}
B4e3cb3:{NFSU2_TR(0x4e3cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3cb8ull));
TAIL_STATIC(0x4d07d0u,4d0);
}
B4e3cb8:L4e3cb8:{c.instructions+=2;NFSU2_TR(0x4e3cb8);
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
B4e3cbd:{NFSU2_TR(0x4e3cbd);
if(r1(R+518)){{goto L4e3cc8;}}
}
B4e3cbf:L4e3cbf:{c.instructions+=2;NFSU2_TR(0x4e3cbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3cc0:{NFSU2_TR(0x4e3cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3cc5ull));
TAIL_STATIC(0x575630u,575);
}
B4e3cc5:L4e3cc5:{c.instructions+=1;NFSU2_TR(0x4e3cc5);
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
B4e3cc8:L4e3cc8:{c.instructions+=3;NFSU2_TR(0x4e3cc8);
__builtin_memmove((R+0),(R+24),4);
}
B4e3cca:{NFSU2_TR(0x4e3cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3ccb:{NFSU2_TR(0x4e3ccb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3cd0:L4e3cd0:{c.instructions+=8;NFSU2_TR(0x4e3cd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3cd2:{NFSU2_TR(0x4e3cd2);
u8 U[4];
w4(U+0,u32(0x775d34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3cd7:{NFSU2_TR(0x4e3cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3cdd:{NFSU2_TR(0x4e3cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3cde:{NFSU2_TR(0x4e3cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3ce5:{NFSU2_TR(0x4e3ce5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ce6:{NFSU2_TR(0x4e3ce6);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ceb:{NFSU2_TR(0x4e3ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3cf0ull));
TAIL_STATIC(0x575620u,575);
}
B4e3cf0:L4e3cf0:{c.instructions+=5;NFSU2_TR(0x4e3cf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3cf3:{NFSU2_TR(0x4e3cf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3cf7:{NFSU2_TR(0x4e3cf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3cf9:{NFSU2_TR(0x4e3cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3d01:{NFSU2_TR(0x4e3d01);
if(r1(R+518)){{goto L4e3d1e;}}
}
B4e3d03:L4e3d03:{c.instructions+=4;NFSU2_TR(0x4e3d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3d07:{NFSU2_TR(0x4e3d07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d08:{NFSU2_TR(0x4e3d08);
__builtin_memmove((R+4),(R+0),4);
}
B4e3d0a:{NFSU2_TR(0x4e3d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3d0full));
TAIL_STATIC(0x4d0860u,4d0);
}
B4e3d0f:L4e3d0f:{c.instructions+=4;NFSU2_TR(0x4e3d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3d13:{NFSU2_TR(0x4e3d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3d1a:{NFSU2_TR(0x4e3d1a);
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
B4e3d1d:{NFSU2_TR(0x4e3d1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3d1e:L4e3d1e:{c.instructions+=5;NFSU2_TR(0x4e3d1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3d22:{NFSU2_TR(0x4e3d22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3d24:{NFSU2_TR(0x4e3d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3d2b:{NFSU2_TR(0x4e3d2b);
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
B4e3d2e:{NFSU2_TR(0x4e3d2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3d30:L4e3d30:{c.instructions+=3;NFSU2_TR(0x4e3d30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d31:{NFSU2_TR(0x4e3d31);
__builtin_memmove((R+24),(R+4),4);
}
B4e3d33:{NFSU2_TR(0x4e3d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3d38ull));
TAIL_STATIC(0x4d0910u,4d0);
}
B4e3d38:L4e3d38:{c.instructions+=2;NFSU2_TR(0x4e3d38);
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
B4e3d3d:{NFSU2_TR(0x4e3d3d);
if(r1(R+518)){{goto L4e3d48;}}
}
B4e3d3f:L4e3d3f:{c.instructions+=2;NFSU2_TR(0x4e3d3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d40:{NFSU2_TR(0x4e3d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3d45ull));
TAIL_STATIC(0x575630u,575);
}
B4e3d45:L4e3d45:{c.instructions+=1;NFSU2_TR(0x4e3d45);
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
B4e3d48:L4e3d48:{c.instructions+=3;NFSU2_TR(0x4e3d48);
__builtin_memmove((R+0),(R+24),4);
}
B4e3d4a:{NFSU2_TR(0x4e3d4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3d4b:{NFSU2_TR(0x4e3d4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3d50:L4e3d50:{c.instructions+=8;NFSU2_TR(0x4e3d50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d52:{NFSU2_TR(0x4e3d52);
u8 U[4];
w4(U+0,u32(0x775d54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d57:{NFSU2_TR(0x4e3d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3d5d:{NFSU2_TR(0x4e3d5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d5e:{NFSU2_TR(0x4e3d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3d65:{NFSU2_TR(0x4e3d65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d66:{NFSU2_TR(0x4e3d66);
u8 U[4];
w4(U+0,u32(0x1a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d6b:{NFSU2_TR(0x4e3d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3d70ull));
TAIL_STATIC(0x575620u,575);
}
B4e3d70:L4e3d70:{c.instructions+=5;NFSU2_TR(0x4e3d70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3d73:{NFSU2_TR(0x4e3d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d77:{NFSU2_TR(0x4e3d77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3d79:{NFSU2_TR(0x4e3d79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3d81:{NFSU2_TR(0x4e3d81);
if(r1(R+518)){{goto L4e3d9e;}}
}
B4e3d83:L4e3d83:{c.instructions+=4;NFSU2_TR(0x4e3d83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3d87:{NFSU2_TR(0x4e3d87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3d88:{NFSU2_TR(0x4e3d88);
__builtin_memmove((R+4),(R+0),4);
}
B4e3d8a:{NFSU2_TR(0x4e3d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3d8full));
TAIL_STATIC(0x4d09a0u,4d0);
}
B4e3d8f:L4e3d8f:{c.instructions+=4;NFSU2_TR(0x4e3d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3d93:{NFSU2_TR(0x4e3d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3d9a:{NFSU2_TR(0x4e3d9a);
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
B4e3d9d:{NFSU2_TR(0x4e3d9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3d9e:L4e3d9e:{c.instructions+=5;NFSU2_TR(0x4e3d9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3da2:{NFSU2_TR(0x4e3da2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3da4:{NFSU2_TR(0x4e3da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3dab:{NFSU2_TR(0x4e3dab);
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
B4e3dae:{NFSU2_TR(0x4e3dae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3db0:L4e3db0:{c.instructions+=3;NFSU2_TR(0x4e3db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3db1:{NFSU2_TR(0x4e3db1);
__builtin_memmove((R+24),(R+4),4);
}
B4e3db3:{NFSU2_TR(0x4e3db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3db8ull));
TAIL_STATIC(0x4d0ff0u,4d0);
}
B4e3db8:L4e3db8:{c.instructions+=2;NFSU2_TR(0x4e3db8);
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
B4e3dbd:{NFSU2_TR(0x4e3dbd);
if(r1(R+518)){{goto L4e3dc8;}}
}
B4e3dbf:L4e3dbf:{c.instructions+=2;NFSU2_TR(0x4e3dbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3dc0:{NFSU2_TR(0x4e3dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3dc5ull));
TAIL_STATIC(0x575630u,575);
}
B4e3dc5:L4e3dc5:{c.instructions+=1;NFSU2_TR(0x4e3dc5);
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
B4e3dc8:L4e3dc8:{c.instructions+=3;NFSU2_TR(0x4e3dc8);
__builtin_memmove((R+0),(R+24),4);
}
B4e3dca:{NFSU2_TR(0x4e3dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3dcb:{NFSU2_TR(0x4e3dcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3dd0:L4e3dd0:{c.instructions+=8;NFSU2_TR(0x4e3dd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3dd2:{NFSU2_TR(0x4e3dd2);
u8 U[4];
w4(U+0,u32(0x775d74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3dd7:{NFSU2_TR(0x4e3dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3ddd:{NFSU2_TR(0x4e3ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3dde:{NFSU2_TR(0x4e3dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3de5:{NFSU2_TR(0x4e3de5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3de6:{NFSU2_TR(0x4e3de6);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3deb:{NFSU2_TR(0x4e3deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3df0ull));
TAIL_STATIC(0x575620u,575);
}
B4e3df0:L4e3df0:{c.instructions+=5;NFSU2_TR(0x4e3df0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3df3:{NFSU2_TR(0x4e3df3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3df7:{NFSU2_TR(0x4e3df7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3df9:{NFSU2_TR(0x4e3df9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e01:{NFSU2_TR(0x4e3e01);
if(r1(R+518)){{goto L4e3e1e;}}
}
B4e3e03:L4e3e03:{c.instructions+=4;NFSU2_TR(0x4e3e03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3e07:{NFSU2_TR(0x4e3e07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e08:{NFSU2_TR(0x4e3e08);
__builtin_memmove((R+4),(R+0),4);
}
B4e3e0a:{NFSU2_TR(0x4e3e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3e0full));
TAIL_STATIC(0x4d1080u,4d1);
}
B4e3e0f:L4e3e0f:{c.instructions+=4;NFSU2_TR(0x4e3e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3e13:{NFSU2_TR(0x4e3e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e1a:{NFSU2_TR(0x4e3e1a);
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
B4e3e1d:{NFSU2_TR(0x4e3e1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3e1e:L4e3e1e:{c.instructions+=5;NFSU2_TR(0x4e3e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3e22:{NFSU2_TR(0x4e3e22);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3e24:{NFSU2_TR(0x4e3e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e2b:{NFSU2_TR(0x4e3e2b);
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
B4e3e2e:{NFSU2_TR(0x4e3e2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3e30:L4e3e30:{c.instructions+=8;NFSU2_TR(0x4e3e30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e32:{NFSU2_TR(0x4e3e32);
u8 U[4];
w4(U+0,u32(0x775d94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e37:{NFSU2_TR(0x4e3e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e3e3d:{NFSU2_TR(0x4e3e3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e3e:{NFSU2_TR(0x4e3e3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e45:{NFSU2_TR(0x4e3e45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e46:{NFSU2_TR(0x4e3e46);
u8 U[4];
w4(U+0,u32(0x1a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e4b:{NFSU2_TR(0x4e3e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3e50ull));
TAIL_STATIC(0x575620u,575);
}
B4e3e50:L4e3e50:{c.instructions+=5;NFSU2_TR(0x4e3e50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3e53:{NFSU2_TR(0x4e3e53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e57:{NFSU2_TR(0x4e3e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3e59:{NFSU2_TR(0x4e3e59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e61:{NFSU2_TR(0x4e3e61);
if(r1(R+518)){{goto L4e3e7e;}}
}
B4e3e63:L4e3e63:{c.instructions+=4;NFSU2_TR(0x4e3e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3e67:{NFSU2_TR(0x4e3e67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e68:{NFSU2_TR(0x4e3e68);
__builtin_memmove((R+4),(R+0),4);
}
B4e3e6a:{NFSU2_TR(0x4e3e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3e6full));
TAIL_STATIC(0x4d1100u,4d1);
}
B4e3e6f:L4e3e6f:{c.instructions+=4;NFSU2_TR(0x4e3e6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3e73:{NFSU2_TR(0x4e3e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e7a:{NFSU2_TR(0x4e3e7a);
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
B4e3e7d:{NFSU2_TR(0x4e3e7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3e7e:L4e3e7e:{c.instructions+=5;NFSU2_TR(0x4e3e7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3e82:{NFSU2_TR(0x4e3e82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3e84:{NFSU2_TR(0x4e3e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3e8b:{NFSU2_TR(0x4e3e8b);
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
B4e3e8e:{NFSU2_TR(0x4e3e8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3e90:L4e3e90:{c.instructions+=3;NFSU2_TR(0x4e3e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3e91:{NFSU2_TR(0x4e3e91);
__builtin_memmove((R+24),(R+4),4);
}
B4e3e93:{NFSU2_TR(0x4e3e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3e98ull));
TAIL_STATIC(0x4d1250u,4d1);
}
B4e3e98:L4e3e98:{c.instructions+=2;NFSU2_TR(0x4e3e98);
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
B4e3e9d:{NFSU2_TR(0x4e3e9d);
if(r1(R+518)){{goto L4e3ea8;}}
}
B4e3e9f:L4e3e9f:{c.instructions+=2;NFSU2_TR(0x4e3e9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ea0:{NFSU2_TR(0x4e3ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3ea5ull));
TAIL_STATIC(0x575630u,575);
}
B4e3ea5:L4e3ea5:{c.instructions+=1;NFSU2_TR(0x4e3ea5);
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
B4e3ea8:L4e3ea8:{c.instructions+=3;NFSU2_TR(0x4e3ea8);
__builtin_memmove((R+0),(R+24),4);
}
B4e3eaa:{NFSU2_TR(0x4e3eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3eab:{NFSU2_TR(0x4e3eab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3eb0:L4e3eb0:{c.instructions+=3;NFSU2_TR(0x4e3eb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3eb1:{NFSU2_TR(0x4e3eb1);
__builtin_memmove((R+24),(R+4),4);
}
B4e3eb3:{NFSU2_TR(0x4e3eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3eb8ull));
TAIL_STATIC(0x4d12c0u,4d1);
}
B4e3eb8:L4e3eb8:{c.instructions+=2;NFSU2_TR(0x4e3eb8);
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
B4e3ebd:{NFSU2_TR(0x4e3ebd);
if(r1(R+518)){{goto L4e3ec8;}}
}
B4e3ebf:L4e3ebf:{c.instructions+=2;NFSU2_TR(0x4e3ebf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ec0:{NFSU2_TR(0x4e3ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3ec5ull));
TAIL_STATIC(0x575630u,575);
}
B4e3ec5:L4e3ec5:{c.instructions+=1;NFSU2_TR(0x4e3ec5);
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
B4e3ec8:L4e3ec8:{c.instructions+=3;NFSU2_TR(0x4e3ec8);
__builtin_memmove((R+0),(R+24),4);
}
B4e3eca:{NFSU2_TR(0x4e3eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e3ecb:{NFSU2_TR(0x4e3ecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e3ed0:L4e3ed0:{c.instructions+=10;NFSU2_TR(0x4e3ed0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B4e3ed3:{NFSU2_TR(0x4e3ed3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ed4:{NFSU2_TR(0x4e3ed4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ed5:{NFSU2_TR(0x4e3ed5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ed6:{NFSU2_TR(0x4e3ed6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ed7:{NFSU2_TR(0x4e3ed7);
__builtin_memmove((R+20),(R+4),4);
}
B4e3ed9:{NFSU2_TR(0x4e3ed9);
w4(R+28,u32(0x1ull));
}
B4e3ede:{NFSU2_TR(0x4e3ede);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3ee6:{NFSU2_TR(0x4e3ee6);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ee8:{NFSU2_TR(0x4e3ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3eedull));
TAIL_STATIC(0x575620u,575);
}
B4e3eed:L4e3eed:{c.instructions+=4;NFSU2_TR(0x4e3eed);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e3eef:{NFSU2_TR(0x4e3eef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e3ef2:{NFSU2_TR(0x4e3ef2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3ef4:{NFSU2_TR(0x4e3ef4);
if(r1(R+518)){{goto L4e3f2b;}}
}
B4e3ef6:L4e3ef6:{c.instructions+=14;NFSU2_TR(0x4e3ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e3ef9:{NFSU2_TR(0x4e3ef9);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e3eff:{NFSU2_TR(0x4e3eff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3f01:{NFSU2_TR(0x4e3f01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f04:{NFSU2_TR(0x4e3f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f07:{NFSU2_TR(0x4e3f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f0a:{NFSU2_TR(0x4e3f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f0d:{NFSU2_TR(0x4e3f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f10:{NFSU2_TR(0x4e3f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f13:{NFSU2_TR(0x4e3f13);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e3f17:{NFSU2_TR(0x4e3f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f1e:{NFSU2_TR(0x4e3f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f25:{NFSU2_TR(0x4e3f25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f29:{NFSU2_TR(0x4e3f29);
{goto L4e3f2f;}
}
B4e3f2b:L4e3f2b:{c.instructions+=1;NFSU2_TR(0x4e3f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f2f:L4e3f2f:{c.instructions+=6;NFSU2_TR(0x4e3f2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f30:{NFSU2_TR(0x4e3f30);
u8 U[4];
w4(U+0,u32(0x7978a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f35:{NFSU2_TR(0x4e3f35);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e3f39:{NFSU2_TR(0x4e3f39);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f3b:{NFSU2_TR(0x4e3f3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f3c:{NFSU2_TR(0x4e3f3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3f41ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e3f41:L4e3f41:{c.instructions+=4;NFSU2_TR(0x4e3f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e3f44:{NFSU2_TR(0x4e3f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e3f48:{NFSU2_TR(0x4e3f48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f49:{NFSU2_TR(0x4e3f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3f4eull));
TAIL_STATIC(0x505450u,505);
}
B4e3f4e:L4e3f4e:{c.instructions+=3;NFSU2_TR(0x4e3f4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f4f:{NFSU2_TR(0x4e3f4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f50:{NFSU2_TR(0x4e3f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3f55ull));
TAIL_STATIC(0x537a10u,537);
}
B4e3f55:L4e3f55:{c.instructions+=3;NFSU2_TR(0x4e3f55);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f57:{NFSU2_TR(0x4e3f57);
__builtin_memmove((R+24),(R+0),4);
}
B4e3f59:{NFSU2_TR(0x4e3f59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3f5eull));
TAIL_STATIC(0x575620u,575);
}
B4e3f5e:L4e3f5e:{c.instructions+=3;NFSU2_TR(0x4e3f5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e3f61:{NFSU2_TR(0x4e3f61);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e3f63:{NFSU2_TR(0x4e3f63);
if(r1(R+518)){{goto L4e3f73;}}
}
B4e3f65:L4e3f65:{c.instructions+=4;NFSU2_TR(0x4e3f65);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e3f6b:{NFSU2_TR(0x4e3f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f6e:{NFSU2_TR(0x4e3f6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e3f71:{NFSU2_TR(0x4e3f71);
{goto L4e3f75;}
}
B4e3f73:L4e3f73:{c.instructions+=1;NFSU2_TR(0x4e3f73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3f75:L4e3f75:{c.instructions+=13;NFSU2_TR(0x4e3f75);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e3f79:{NFSU2_TR(0x4e3f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3f7c:{NFSU2_TR(0x4e3f7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f7d:{NFSU2_TR(0x4e3f7d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B4e3f80:{NFSU2_TR(0x4e3f80);
u8 U[4];
w4(U+0,u32(0x797894ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f85:{NFSU2_TR(0x4e3f85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3f87:{NFSU2_TR(0x4e3f87);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e3f8b:{NFSU2_TR(0x4e3f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f8e:{NFSU2_TR(0x4e3f8e);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f90:{NFSU2_TR(0x4e3f90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3f91:{NFSU2_TR(0x4e3f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3f94:{NFSU2_TR(0x4e3f94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3f96:{NFSU2_TR(0x4e3f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3f9bull));
TAIL_STATIC(0x50c960u,50c);
}
B4e3f9b:L4e3f9b:{c.instructions+=4;NFSU2_TR(0x4e3f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e3f9e:{NFSU2_TR(0x4e3f9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e3fa2:{NFSU2_TR(0x4e3fa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fa3:{NFSU2_TR(0x4e3fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3fa8ull));
TAIL_STATIC(0x505450u,505);
}
B4e3fa8:L4e3fa8:{c.instructions+=3;NFSU2_TR(0x4e3fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fa9:{NFSU2_TR(0x4e3fa9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3faa:{NFSU2_TR(0x4e3faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3fafull));
TAIL_STATIC(0x537a10u,537);
}
B4e3faf:L4e3faf:{c.instructions+=3;NFSU2_TR(0x4e3faf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fb1:{NFSU2_TR(0x4e3fb1);
__builtin_memmove((R+12),(R+0),4);
}
B4e3fb3:{NFSU2_TR(0x4e3fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3fb8ull));
TAIL_STATIC(0x575620u,575);
}
B4e3fb8:L4e3fb8:{c.instructions+=3;NFSU2_TR(0x4e3fb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e3fbb:{NFSU2_TR(0x4e3fbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e3fbd:{NFSU2_TR(0x4e3fbd);
if(r1(R+518)){{goto L4e3fcd;}}
}
B4e3fbf:L4e3fbf:{c.instructions+=4;NFSU2_TR(0x4e3fbf);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e3fc5:{NFSU2_TR(0x4e3fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3fc8:{NFSU2_TR(0x4e3fc8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e3fcb:{NFSU2_TR(0x4e3fcb);
{goto L4e3fcf;}
}
B4e3fcd:L4e3fcd:{c.instructions+=1;NFSU2_TR(0x4e3fcd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e3fcf:L4e3fcf:{c.instructions+=11;NFSU2_TR(0x4e3fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e3fd2:{NFSU2_TR(0x4e3fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e3fd4:{NFSU2_TR(0x4e3fd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fd5:{NFSU2_TR(0x4e3fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3fd8:{NFSU2_TR(0x4e3fd8);
u8 U[4];
w4(U+0,u32(0x797880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fdd:{NFSU2_TR(0x4e3fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e3fe0:{NFSU2_TR(0x4e3fe0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e3fe4:{NFSU2_TR(0x4e3fe4);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fe6:{NFSU2_TR(0x4e3fe6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3fe7:{NFSU2_TR(0x4e3fe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e3fe9:{NFSU2_TR(0x4e3fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3feeull));
TAIL_STATIC(0x50c960u,50c);
}
B4e3fee:L4e3fee:{c.instructions+=4;NFSU2_TR(0x4e3fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e3ff1:{NFSU2_TR(0x4e3ff1);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e3ff5:{NFSU2_TR(0x4e3ff5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ff6:{NFSU2_TR(0x4e3ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e3ffbull));
TAIL_STATIC(0x505450u,505);
}
B4e3ffb:L4e3ffb:{c.instructions+=3;NFSU2_TR(0x4e3ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ffc:{NFSU2_TR(0x4e3ffc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e3ffd:{NFSU2_TR(0x4e3ffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e4002ull));
TAIL_STATIC(0x537a10u,537);
}
XIT:NFSU2_TR_EXIT(0x4e3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
