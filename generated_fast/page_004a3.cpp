#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 page_4a3(Cpu& c){return body_4a3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a3002:goto L4a3002;
case 0x4a3003:c.instructions+=1;goto B4a3003;
case 0x4a3008:goto L4a3008;
case 0x4a300b:c.instructions+=4;goto B4a300b;
case 0x4a300d:c.instructions+=3;goto B4a300d;
case 0x4a300f:c.instructions+=2;goto B4a300f;
case 0x4a3014:c.instructions+=1;goto B4a3014;
case 0x4a3019:goto L4a3019;
case 0x4a301c:c.instructions+=3;goto B4a301c;
case 0x4a301d:c.instructions+=2;goto B4a301d;
case 0x4a3022:c.instructions+=1;goto B4a3022;
case 0x4a3027:goto L4a3027;
case 0x4a302a:c.instructions+=5;goto B4a302a;
case 0x4a302b:c.instructions+=4;goto B4a302b;
case 0x4a302d:c.instructions+=3;goto B4a302d;
case 0x4a3032:c.instructions+=2;goto B4a3032;
case 0x4a3034:c.instructions+=1;goto B4a3034;
case 0x4a3039:goto L4a3039;
case 0x4a303c:c.instructions+=2;goto B4a303c;
case 0x4a3041:c.instructions+=1;goto B4a3041;
case 0x4a3046:goto L4a3046;
case 0x4a3047:c.instructions+=3;goto B4a3047;
case 0x4a304c:c.instructions+=2;goto B4a304c;
case 0x4a304d:c.instructions+=1;goto B4a304d;
case 0x4a3052:goto L4a3052;
case 0x4a3057:c.instructions+=1;goto B4a3057;
case 0x4a305c:goto L4a305c;
case 0x4a305f:c.instructions+=3;goto B4a305f;
case 0x4a3060:c.instructions+=2;goto B4a3060;
case 0x4a3065:c.instructions+=1;goto B4a3065;
case 0x4a306a:goto L4a306a;
case 0x4a306f:c.instructions+=1;goto B4a306f;
case 0x4a3074:goto L4a3074;
case 0x4a3077:c.instructions+=3;goto B4a3077;
case 0x4a3078:c.instructions+=2;goto B4a3078;
case 0x4a307d:c.instructions+=1;goto B4a307d;
case 0x4a3082:goto L4a3082;
case 0x4a3087:c.instructions+=1;goto B4a3087;
case 0x4a308c:goto L4a308c;
case 0x4a308f:c.instructions+=3;goto B4a308f;
case 0x4a3090:c.instructions+=2;goto B4a3090;
case 0x4a3095:c.instructions+=1;goto B4a3095;
case 0x4a309a:goto L4a309a;
case 0x4a309b:c.instructions+=1;goto B4a309b;
case 0x4a30a0:goto L4a30a0;
case 0x4a30a1:c.instructions+=6;goto B4a30a1;
case 0x4a30a3:c.instructions+=5;goto B4a30a3;
case 0x4a30a5:c.instructions+=4;goto B4a30a5;
case 0x4a30a8:c.instructions+=3;goto B4a30a8;
case 0x4a30a9:c.instructions+=2;goto B4a30a9;
case 0x4a30ad:c.instructions+=1;goto B4a30ad;
case 0x4a30af:goto L4a30af;
case 0x4a30b2:c.instructions+=3;goto B4a30b2;
case 0x4a30b3:c.instructions+=2;goto B4a30b3;
case 0x4a30b4:c.instructions+=1;goto B4a30b4;
case 0x4a30b9:goto L4a30b9;
case 0x4a30bc:goto L4a30bc;
case 0x4a30be:c.instructions+=2;goto B4a30be;
case 0x4a30c1:c.instructions+=1;goto B4a30c1;
case 0x4a30c3:goto L4a30c3;
case 0x4a30c9:c.instructions+=1;goto B4a30c9;
case 0x4a30cb:goto L4a30cb;
case 0x4a30ce:c.instructions+=4;goto B4a30ce;
case 0x4a30d1:c.instructions+=3;goto B4a30d1;
case 0x4a30d2:c.instructions+=2;goto B4a30d2;
case 0x4a30d3:c.instructions+=1;goto B4a30d3;
case 0x4a30d8:goto L4a30d8;
case 0x4a30db:c.instructions+=3;goto B4a30db;
case 0x4a30dc:c.instructions+=2;goto B4a30dc;
case 0x4a30dd:c.instructions+=1;goto B4a30dd;
case 0x4a30e0:goto L4a30e0;
case 0x4a30e3:c.instructions+=4;goto B4a30e3;
case 0x4a30e6:c.instructions+=3;goto B4a30e6;
case 0x4a30e7:c.instructions+=2;goto B4a30e7;
case 0x4a30e8:c.instructions+=1;goto B4a30e8;
case 0x4a30ed:goto L4a30ed;
case 0x4a30f0:goto L4a30f0;
case 0x4a30f1:c.instructions+=2;goto B4a30f1;
case 0x4a30f2:c.instructions+=1;goto B4a30f2;
case 0x4a3100:goto L4a3100;
case 0x4a3104:c.instructions+=18;goto B4a3104;
case 0x4a3108:c.instructions+=17;goto B4a3108;
case 0x4a310c:c.instructions+=16;goto B4a310c;
case 0x4a3112:c.instructions+=15;goto B4a3112;
case 0x4a3116:c.instructions+=14;goto B4a3116;
case 0x4a311b:c.instructions+=13;goto B4a311b;
case 0x4a311c:c.instructions+=12;goto B4a311c;
case 0x4a3120:c.instructions+=11;goto B4a3120;
case 0x4a3126:c.instructions+=10;goto B4a3126;
case 0x4a312a:c.instructions+=9;goto B4a312a;
case 0x4a3130:c.instructions+=8;goto B4a3130;
case 0x4a3134:c.instructions+=7;goto B4a3134;
case 0x4a3137:c.instructions+=6;goto B4a3137;
case 0x4a313a:c.instructions+=5;goto B4a313a;
case 0x4a3140:c.instructions+=4;goto B4a3140;
case 0x4a3146:c.instructions+=3;goto B4a3146;
case 0x4a314c:c.instructions+=2;goto B4a314c;
case 0x4a3156:c.instructions+=1;goto B4a3156;
case 0x4a3158:goto L4a3158;
case 0x4a315a:goto L4a315a;
case 0x4a315d:c.instructions+=1;goto B4a315d;
case 0x4a315f:goto L4a315f;
case 0x4a3161:c.instructions+=3;goto B4a3161;
case 0x4a3166:c.instructions+=2;goto B4a3166;
case 0x4a3167:c.instructions+=1;goto B4a3167;
case 0x4a316c:goto L4a316c;
case 0x4a316f:c.instructions+=1;goto B4a316f;
case 0x4a3171:goto L4a3171;
case 0x4a3172:c.instructions+=2;goto B4a3172;
case 0x4a3177:c.instructions+=1;goto B4a3177;
case 0x4a317c:goto L4a317c;
case 0x4a3182:c.instructions+=5;goto B4a3182;
case 0x4a3184:c.instructions+=4;goto B4a3184;
case 0x4a3189:c.instructions+=3;goto B4a3189;
case 0x4a318a:c.instructions+=2;goto B4a318a;
case 0x4a318b:c.instructions+=1;goto B4a318b;
case 0x4a3190:goto L4a3190;
case 0x4a3193:goto L4a3193;
case 0x4a3199:c.instructions+=4;goto B4a3199;
case 0x4a319b:c.instructions+=3;goto B4a319b;
case 0x4a31a2:c.instructions+=2;goto B4a31a2;
case 0x4a31a3:c.instructions+=1;goto B4a31a3;
case 0x4a31a5:goto L4a31a5;
case 0x4a31a8:c.instructions+=2;goto B4a31a8;
case 0x4a31aa:c.instructions+=1;goto B4a31aa;
case 0x4a31ac:goto L4a31ac;
case 0x4a31b1:c.instructions+=2;goto B4a31b1;
case 0x4a31b3:c.instructions+=1;goto B4a31b3;
case 0x4a31b5:goto L4a31b5;
case 0x4a31bc:c.instructions+=1;goto B4a31bc;
case 0x4a31c1:goto L4a31c1;
case 0x4a31d0:goto L4a31d0;
case 0x4a31d1:c.instructions+=7;goto B4a31d1;
case 0x4a31d2:c.instructions+=6;goto B4a31d2;
case 0x4a31d6:c.instructions+=5;goto B4a31d6;
case 0x4a31d9:c.instructions+=4;goto B4a31d9;
case 0x4a31da:c.instructions+=3;goto B4a31da;
case 0x4a31df:c.instructions+=2;goto B4a31df;
case 0x4a31e0:c.instructions+=1;goto B4a31e0;
case 0x4a31e5:goto L4a31e5;
case 0x4a31e8:c.instructions+=2;goto B4a31e8;
case 0x4a31ea:c.instructions+=1;goto B4a31ea;
case 0x4a31ef:goto L4a31ef;
case 0x4a31f3:c.instructions+=3;goto B4a31f3;
case 0x4a31f4:c.instructions+=2;goto B4a31f4;
case 0x4a31f9:c.instructions+=1;goto B4a31f9;
case 0x4a31fe:goto L4a31fe;
case 0x4a3203:c.instructions+=4;goto B4a3203;
case 0x4a3206:c.instructions+=3;goto B4a3206;
case 0x4a3207:c.instructions+=2;goto B4a3207;
case 0x4a320c:c.instructions+=1;goto B4a320c;
case 0x4a320e:goto L4a320e;
case 0x4a320f:c.instructions+=1;goto B4a320f;
case 0x4a3211:goto L4a3211;
case 0x4a3212:c.instructions+=1;goto B4a3212;
case 0x4a3214:goto L4a3214;
case 0x4a3216:c.instructions+=3;goto B4a3216;
case 0x4a3218:c.instructions+=2;goto B4a3218;
case 0x4a321a:c.instructions+=1;goto B4a321a;
case 0x4a321c:goto L4a321c;
case 0x4a321e:goto L4a321e;
case 0x4a3224:c.instructions+=5;goto B4a3224;
case 0x4a322a:c.instructions+=4;goto B4a322a;
case 0x4a322b:c.instructions+=3;goto B4a322b;
case 0x4a322c:c.instructions+=2;goto B4a322c;
case 0x4a322d:c.instructions+=1;goto B4a322d;
case 0x4a3232:goto L4a3232;
case 0x4a3234:goto L4a3234;
case 0x4a3239:c.instructions+=3;goto B4a3239;
case 0x4a323a:c.instructions+=2;goto B4a323a;
case 0x4a323f:c.instructions+=1;goto B4a323f;
case 0x4a3244:goto L4a3244;
case 0x4a324a:c.instructions+=2;goto B4a324a;
case 0x4a324b:c.instructions+=1;goto B4a324b;
case 0x4a3250:goto L4a3250;
case 0x4a3253:goto L4a3253;
case 0x4a3258:c.instructions+=2;goto B4a3258;
case 0x4a325b:c.instructions+=1;goto B4a325b;
case 0x4a325d:goto L4a325d;
case 0x4a3262:c.instructions+=2;goto B4a3262;
case 0x4a3264:c.instructions+=1;goto B4a3264;
case 0x4a3266:goto L4a3266;
case 0x4a326c:c.instructions+=2;goto B4a326c;
case 0x4a326d:c.instructions+=1;goto B4a326d;
case 0x4a326f:goto L4a326f;
case 0x4a3272:goto L4a3272;
case 0x4a3278:c.instructions+=7;goto B4a3278;
case 0x4a327e:c.instructions+=6;goto B4a327e;
case 0x4a3284:c.instructions+=5;goto B4a3284;
case 0x4a328a:c.instructions+=4;goto B4a328a;
case 0x4a3290:c.instructions+=3;goto B4a3290;
case 0x4a3296:c.instructions+=2;goto B4a3296;
case 0x4a329c:c.instructions+=1;goto B4a329c;
case 0x4a32a2:goto L4a32a2;
case 0x4a32a8:c.instructions+=3;goto B4a32a8;
case 0x4a32aa:c.instructions+=2;goto B4a32aa;
case 0x4a32b0:c.instructions+=1;goto B4a32b0;
case 0x4a32b2:goto L4a32b2;
case 0x4a32b8:c.instructions+=1;goto B4a32b8;
case 0x4a32ba:goto L4a32ba;
case 0x4a32bb:c.instructions+=3;goto B4a32bb;
case 0x4a32bc:c.instructions+=2;goto B4a32bc;
case 0x4a32bd:c.instructions+=1;goto B4a32bd;
case 0x4a32c2:goto L4a32c2;
case 0x4a32c3:c.instructions+=3;goto B4a32c3;
case 0x4a32c4:c.instructions+=2;goto B4a32c4;
case 0x4a32c5:c.instructions+=1;goto B4a32c5;
case 0x4a32d0:goto L4a32d0;
case 0x4a32d5:c.instructions+=1;goto B4a32d5;
case 0x4a32e0:goto L4a32e0;
case 0x4a32e1:c.instructions+=8;goto B4a32e1;
case 0x4a32e3:c.instructions+=7;goto B4a32e3;
case 0x4a32e6:c.instructions+=6;goto B4a32e6;
case 0x4a32ec:c.instructions+=5;goto B4a32ec;
case 0x4a32ee:c.instructions+=4;goto B4a32ee;
case 0x4a32f0:c.instructions+=3;goto B4a32f0;
case 0x4a32f1:c.instructions+=2;goto B4a32f1;
case 0x4a32f2:c.instructions+=1;goto B4a32f2;
case 0x4a32f7:goto L4a32f7;
case 0x4a32fa:c.instructions+=4;goto B4a32fa;
case 0x4a32fd:c.instructions+=3;goto B4a32fd;
case 0x4a32ff:c.instructions+=2;goto B4a32ff;
case 0x4a3300:c.instructions+=1;goto B4a3300;
case 0x4a3305:goto L4a3305;
case 0x4a3308:c.instructions+=2;goto B4a3308;
case 0x4a330a:c.instructions+=1;goto B4a330a;
case 0x4a330f:goto L4a330f;
case 0x4a3312:c.instructions+=5;goto B4a3312;
case 0x4a3314:c.instructions+=4;goto B4a3314;
case 0x4a3319:c.instructions+=3;goto B4a3319;
case 0x4a331e:c.instructions+=2;goto B4a331e;
case 0x4a331f:c.instructions+=1;goto B4a331f;
case 0x4a3324:goto L4a3324;
case 0x4a3327:c.instructions+=2;goto B4a3327;
case 0x4a3328:c.instructions+=1;goto B4a3328;
case 0x4a3330:goto L4a3330;
case 0x4a3331:c.instructions+=4;goto B4a3331;
case 0x4a3333:c.instructions+=3;goto B4a3333;
case 0x4a3339:c.instructions+=2;goto B4a3339;
case 0x4a333b:c.instructions+=1;goto B4a333b;
case 0x4a333d:goto L4a333d;
case 0x4a3340:c.instructions+=2;goto B4a3340;
case 0x4a3341:c.instructions+=1;goto B4a3341;
case 0x4a3346:goto L4a3346;
case 0x4a3349:c.instructions+=5;goto B4a3349;
case 0x4a334b:c.instructions+=4;goto B4a334b;
case 0x4a3350:c.instructions+=3;goto B4a3350;
case 0x4a3355:c.instructions+=2;goto B4a3355;
case 0x4a3356:c.instructions+=1;goto B4a3356;
case 0x4a335b:goto L4a335b;
case 0x4a335e:c.instructions+=4;goto B4a335e;
case 0x4a3361:c.instructions+=3;goto B4a3361;
case 0x4a3366:c.instructions+=2;goto B4a3366;
case 0x4a3367:c.instructions+=1;goto B4a3367;
case 0x4a336c:goto L4a336c;
case 0x4a336f:c.instructions+=2;goto B4a336f;
case 0x4a3371:c.instructions+=1;goto B4a3371;
case 0x4a3376:goto L4a3376;
case 0x4a337b:c.instructions+=2;goto B4a337b;
case 0x4a3380:c.instructions+=1;goto B4a3380;
case 0x4a3385:goto L4a3385;
case 0x4a338a:c.instructions+=2;goto B4a338a;
case 0x4a338f:c.instructions+=1;goto B4a338f;
case 0x4a3394:goto L4a3394;
case 0x4a3397:goto L4a3397;
case 0x4a33a1:c.instructions+=2;goto B4a33a1;
case 0x4a33a2:c.instructions+=1;goto B4a33a2;
case 0x4a33b0:goto L4a33b0;
case 0x4a33b3:c.instructions+=3;goto B4a33b3;
case 0x4a33b4:c.instructions+=2;goto B4a33b4;
case 0x4a33b9:c.instructions+=1;goto B4a33b9;
case 0x4a33be:goto L4a33be;
case 0x4a33c1:c.instructions+=1;goto B4a33c1;
case 0x4a33d0:goto L4a33d0;
case 0x4a33d3:c.instructions+=2;goto B4a33d3;
case 0x4a33d5:c.instructions+=1;goto B4a33d5;
case 0x4a33d7:goto L4a33d7;
case 0x4a33db:c.instructions+=2;goto B4a33db;
case 0x4a33e1:c.instructions+=1;goto B4a33e1;
case 0x4a33e3:goto L4a33e3;
case 0x4a33e8:c.instructions+=1;goto B4a33e8;
case 0x4a33eb:goto L4a33eb;
case 0x4a33f1:c.instructions+=3;goto B4a33f1;
case 0x4a33f2:c.instructions+=2;goto B4a33f2;
case 0x4a33f5:c.instructions+=1;goto B4a33f5;
case 0x4a33f7:goto L4a33f7;
case 0x4a33fe:goto L4a33fe;
case 0x4a3402:c.instructions+=3;goto B4a3402;
case 0x4a3403:c.instructions+=2;goto B4a3403;
case 0x4a3404:c.instructions+=1;goto B4a3404;
case 0x4a3409:goto L4a3409;
case 0x4a340c:c.instructions+=1;goto B4a340c;
case 0x4a340f:goto L4a340f;
case 0x4a3413:c.instructions+=3;goto B4a3413;
case 0x4a3414:c.instructions+=2;goto B4a3414;
case 0x4a3415:c.instructions+=1;goto B4a3415;
case 0x4a341a:goto L4a341a;
case 0x4a341d:c.instructions+=1;goto B4a341d;
case 0x4a3420:goto L4a3420;
case 0x4a3424:c.instructions+=4;goto B4a3424;
case 0x4a3426:c.instructions+=3;goto B4a3426;
case 0x4a3427:c.instructions+=2;goto B4a3427;
case 0x4a3428:c.instructions+=1;goto B4a3428;
case 0x4a342d:goto L4a342d;
case 0x4a3430:c.instructions+=1;goto B4a3430;
case 0x4a3433:goto L4a3433;
case 0x4a3437:c.instructions+=3;goto B4a3437;
case 0x4a3438:c.instructions+=2;goto B4a3438;
case 0x4a3439:c.instructions+=1;goto B4a3439;
case 0x4a343e:goto L4a343e;
case 0x4a3441:c.instructions+=1;goto B4a3441;
case 0x4a3444:goto L4a3444;
case 0x4a3446:c.instructions+=1;goto B4a3446;
case 0x4a3460:goto L4a3460;
case 0x4a3464:c.instructions+=7;goto B4a3464;
case 0x4a3466:c.instructions+=6;goto B4a3466;
case 0x4a3467:c.instructions+=5;goto B4a3467;
case 0x4a346b:c.instructions+=4;goto B4a346b;
case 0x4a346c:c.instructions+=3;goto B4a346c;
case 0x4a346d:c.instructions+=2;goto B4a346d;
case 0x4a346f:c.instructions+=1;goto B4a346f;
case 0x4a3475:goto L4a3475;
case 0x4a3479:c.instructions+=2;goto B4a3479;
case 0x4a347b:c.instructions+=1;goto B4a347b;
case 0x4a347d:goto L4a347d;
case 0x4a3484:c.instructions+=4;goto B4a3484;
case 0x4a3487:c.instructions+=3;goto B4a3487;
case 0x4a3488:c.instructions+=2;goto B4a3488;
case 0x4a3489:c.instructions+=1;goto B4a3489;
case 0x4a348e:goto L4a348e;
case 0x4a348f:c.instructions+=2;goto B4a348f;
case 0x4a3490:c.instructions+=1;goto B4a3490;
case 0x4a3495:goto L4a3495;
case 0x4a3498:goto L4a3498;
case 0x4a349f:c.instructions+=7;goto B4a349f;
case 0x4a34a2:c.instructions+=6;goto B4a34a2;
case 0x4a34a4:c.instructions+=5;goto B4a34a4;
case 0x4a34ab:c.instructions+=4;goto B4a34ab;
case 0x4a34b0:c.instructions+=3;goto B4a34b0;
case 0x4a34b1:c.instructions+=2;goto B4a34b1;
case 0x4a34b2:c.instructions+=1;goto B4a34b2;
case 0x4a34b7:goto L4a34b7;
case 0x4a34be:c.instructions+=7;goto B4a34be;
case 0x4a34c1:c.instructions+=6;goto B4a34c1;
case 0x4a34c3:c.instructions+=5;goto B4a34c3;
case 0x4a34ca:c.instructions+=4;goto B4a34ca;
case 0x4a34cf:c.instructions+=3;goto B4a34cf;
case 0x4a34d0:c.instructions+=2;goto B4a34d0;
case 0x4a34d1:c.instructions+=1;goto B4a34d1;
case 0x4a34d6:goto L4a34d6;
case 0x4a34d8:c.instructions+=4;goto B4a34d8;
case 0x4a34db:c.instructions+=3;goto B4a34db;
case 0x4a34dc:c.instructions+=2;goto B4a34dc;
case 0x4a34dd:c.instructions+=1;goto B4a34dd;
case 0x4a34e2:goto L4a34e2;
case 0x4a34e3:c.instructions+=1;goto B4a34e3;
case 0x4a34e8:goto L4a34e8;
case 0x4a34ea:c.instructions+=4;goto B4a34ea;
case 0x4a34ed:c.instructions+=3;goto B4a34ed;
case 0x4a34ee:c.instructions+=2;goto B4a34ee;
case 0x4a34ef:c.instructions+=1;goto B4a34ef;
case 0x4a34f4:goto L4a34f4;
case 0x4a34f5:c.instructions+=1;goto B4a34f5;
case 0x4a34fa:goto L4a34fa;
case 0x4a34fc:c.instructions+=4;goto B4a34fc;
case 0x4a34ff:c.instructions+=3;goto B4a34ff;
case 0x4a3500:c.instructions+=2;goto B4a3500;
case 0x4a3501:c.instructions+=1;goto B4a3501;
case 0x4a3506:goto L4a3506;
case 0x4a3509:c.instructions+=9;goto B4a3509;
case 0x4a350c:c.instructions+=8;goto B4a350c;
case 0x4a3512:c.instructions+=7;goto B4a3512;
case 0x4a3514:c.instructions+=6;goto B4a3514;
case 0x4a3516:c.instructions+=5;goto B4a3516;
case 0x4a3519:c.instructions+=4;goto B4a3519;
case 0x4a351c:c.instructions+=3;goto B4a351c;
case 0x4a351d:c.instructions+=2;goto B4a351d;
case 0x4a351e:c.instructions+=1;goto B4a351e;
case 0x4a3523:goto L4a3523;
case 0x4a3526:c.instructions+=8;goto B4a3526;
case 0x4a3529:c.instructions+=7;goto B4a3529;
case 0x4a352c:c.instructions+=6;goto B4a352c;
case 0x4a352d:c.instructions+=5;goto B4a352d;
case 0x4a3533:c.instructions+=4;goto B4a3533;
case 0x4a3534:c.instructions+=3;goto B4a3534;
case 0x4a3536:c.instructions+=2;goto B4a3536;
case 0x4a3537:c.instructions+=1;goto B4a3537;
case 0x4a353a:goto L4a353a;
case 0x4a3541:c.instructions+=5;goto B4a3541;
case 0x4a3544:c.instructions+=4;goto B4a3544;
case 0x4a354b:c.instructions+=3;goto B4a354b;
case 0x4a354c:c.instructions+=2;goto B4a354c;
case 0x4a354d:c.instructions+=1;goto B4a354d;
case 0x4a3552:goto L4a3552;
case 0x4a3553:c.instructions+=1;goto B4a3553;
case 0x4a3558:goto L4a3558;
case 0x4a355f:c.instructions+=5;goto B4a355f;
case 0x4a3562:c.instructions+=4;goto B4a3562;
case 0x4a3569:c.instructions+=3;goto B4a3569;
case 0x4a356a:c.instructions+=2;goto B4a356a;
case 0x4a356b:c.instructions+=1;goto B4a356b;
case 0x4a3570:goto L4a3570;
case 0x4a3571:c.instructions+=1;goto B4a3571;
case 0x4a3576:goto L4a3576;
case 0x4a3578:c.instructions+=4;goto B4a3578;
case 0x4a357b:c.instructions+=3;goto B4a357b;
case 0x4a357c:c.instructions+=2;goto B4a357c;
case 0x4a357d:c.instructions+=1;goto B4a357d;
case 0x4a3582:goto L4a3582;
case 0x4a3585:c.instructions+=8;goto B4a3585;
case 0x4a3588:c.instructions+=7;goto B4a3588;
case 0x4a358e:c.instructions+=6;goto B4a358e;
case 0x4a3590:c.instructions+=5;goto B4a3590;
case 0x4a3592:c.instructions+=4;goto B4a3592;
case 0x4a3595:c.instructions+=3;goto B4a3595;
case 0x4a3596:c.instructions+=2;goto B4a3596;
case 0x4a3597:c.instructions+=1;goto B4a3597;
case 0x4a359c:goto L4a359c;
case 0x4a359f:c.instructions+=8;goto B4a359f;
case 0x4a35a2:c.instructions+=7;goto B4a35a2;
case 0x4a35a5:c.instructions+=6;goto B4a35a5;
case 0x4a35a6:c.instructions+=5;goto B4a35a6;
case 0x4a35ac:c.instructions+=4;goto B4a35ac;
case 0x4a35ad:c.instructions+=3;goto B4a35ad;
case 0x4a35af:c.instructions+=2;goto B4a35af;
case 0x4a35b0:c.instructions+=1;goto B4a35b0;
case 0x4a35c0:goto L4a35c0;
case 0x4a35c1:c.instructions+=7;goto B4a35c1;
case 0x4a35c5:c.instructions+=6;goto B4a35c5;
case 0x4a35c7:c.instructions+=5;goto B4a35c7;
case 0x4a35c8:c.instructions+=4;goto B4a35c8;
case 0x4a35c9:c.instructions+=3;goto B4a35c9;
case 0x4a35cb:c.instructions+=2;goto B4a35cb;
case 0x4a35d0:c.instructions+=1;goto B4a35d0;
case 0x4a35d2:goto L4a35d2;
case 0x4a35d4:c.instructions+=3;goto B4a35d4;
case 0x4a35d6:c.instructions+=2;goto B4a35d6;
case 0x4a35d8:c.instructions+=1;goto B4a35d8;
case 0x4a35dd:goto L4a35dd;
case 0x4a35df:c.instructions+=4;goto B4a35df;
case 0x4a35e1:c.instructions+=3;goto B4a35e1;
case 0x4a35e3:c.instructions+=2;goto B4a35e3;
case 0x4a35e5:c.instructions+=1;goto B4a35e5;
case 0x4a35ea:goto L4a35ea;
case 0x4a35ec:c.instructions+=4;goto B4a35ec;
case 0x4a35ee:c.instructions+=3;goto B4a35ee;
case 0x4a35ef:c.instructions+=2;goto B4a35ef;
case 0x4a35f1:c.instructions+=1;goto B4a35f1;
case 0x4a35f6:goto L4a35f6;
case 0x4a35fa:c.instructions+=5;goto B4a35fa;
case 0x4a35fb:c.instructions+=4;goto B4a35fb;
case 0x4a35fd:c.instructions+=3;goto B4a35fd;
case 0x4a35ff:c.instructions+=2;goto B4a35ff;
case 0x4a3601:c.instructions+=1;goto B4a3601;
case 0x4a3606:goto L4a3606;
case 0x4a360a:c.instructions+=5;goto B4a360a;
case 0x4a360b:c.instructions+=4;goto B4a360b;
case 0x4a360d:c.instructions+=3;goto B4a360d;
case 0x4a360f:c.instructions+=2;goto B4a360f;
case 0x4a3611:c.instructions+=1;goto B4a3611;
case 0x4a3616:goto L4a3616;
case 0x4a3617:c.instructions+=4;goto B4a3617;
case 0x4a3619:c.instructions+=3;goto B4a3619;
case 0x4a361b:c.instructions+=2;goto B4a361b;
case 0x4a361d:c.instructions+=1;goto B4a361d;
case 0x4a3622:goto L4a3622;
case 0x4a3625:c.instructions+=4;goto B4a3625;
case 0x4a362a:c.instructions+=3;goto B4a362a;
case 0x4a362b:c.instructions+=2;goto B4a362b;
case 0x4a3630:c.instructions+=1;goto B4a3630;
case 0x4a3635:goto L4a3635;
case 0x4a3638:c.instructions+=2;goto B4a3638;
case 0x4a363a:c.instructions+=1;goto B4a363a;
case 0x4a363f:goto L4a363f;
case 0x4a3649:c.instructions+=1;goto B4a3649;
case 0x4a364e:goto L4a364e;
case 0x4a3652:c.instructions+=2;goto B4a3652;
case 0x4a3654:c.instructions+=1;goto B4a3654;
case 0x4a3656:goto L4a3656;
case 0x4a3657:c.instructions+=4;goto B4a3657;
case 0x4a3659:c.instructions+=3;goto B4a3659;
case 0x4a365b:c.instructions+=2;goto B4a365b;
case 0x4a365d:c.instructions+=1;goto B4a365d;
case 0x4a3662:goto L4a3662;
case 0x4a3666:c.instructions+=5;goto B4a3666;
case 0x4a3667:c.instructions+=4;goto B4a3667;
case 0x4a3669:c.instructions+=3;goto B4a3669;
case 0x4a366b:c.instructions+=2;goto B4a366b;
case 0x4a366d:c.instructions+=1;goto B4a366d;
case 0x4a3672:goto L4a3672;
case 0x4a3674:c.instructions+=4;goto B4a3674;
case 0x4a3676:c.instructions+=3;goto B4a3676;
case 0x4a3678:c.instructions+=2;goto B4a3678;
case 0x4a367a:c.instructions+=1;goto B4a367a;
case 0x4a367f:goto L4a367f;
case 0x4a3681:c.instructions+=4;goto B4a3681;
case 0x4a3683:c.instructions+=3;goto B4a3683;
case 0x4a3685:c.instructions+=2;goto B4a3685;
case 0x4a3687:c.instructions+=1;goto B4a3687;
case 0x4a368c:goto L4a368c;
case 0x4a368e:c.instructions+=4;goto B4a368e;
case 0x4a3690:c.instructions+=3;goto B4a3690;
case 0x4a3692:c.instructions+=2;goto B4a3692;
case 0x4a3694:c.instructions+=1;goto B4a3694;
case 0x4a3699:goto L4a3699;
case 0x4a369b:c.instructions+=4;goto B4a369b;
case 0x4a369d:c.instructions+=3;goto B4a369d;
case 0x4a369f:c.instructions+=2;goto B4a369f;
case 0x4a36a1:c.instructions+=1;goto B4a36a1;
case 0x4a36a6:goto L4a36a6;
case 0x4a36a9:c.instructions+=4;goto B4a36a9;
case 0x4a36ae:c.instructions+=3;goto B4a36ae;
case 0x4a36af:c.instructions+=2;goto B4a36af;
case 0x4a36b4:c.instructions+=1;goto B4a36b4;
case 0x4a36b9:goto L4a36b9;
case 0x4a36bc:c.instructions+=2;goto B4a36bc;
case 0x4a36be:c.instructions+=1;goto B4a36be;
case 0x4a36c3:goto L4a36c3;
case 0x4a36c9:c.instructions+=1;goto B4a36c9;
case 0x4a36ce:goto L4a36ce;
case 0x4a36d2:c.instructions+=2;goto B4a36d2;
case 0x4a36d4:c.instructions+=1;goto B4a36d4;
case 0x4a36da:goto L4a36da;
case 0x4a36dc:c.instructions+=4;goto B4a36dc;
case 0x4a36de:c.instructions+=3;goto B4a36de;
case 0x4a36e0:c.instructions+=2;goto B4a36e0;
case 0x4a36e2:c.instructions+=1;goto B4a36e2;
case 0x4a36e7:goto L4a36e7;
case 0x4a36e9:c.instructions+=4;goto B4a36e9;
case 0x4a36eb:c.instructions+=3;goto B4a36eb;
case 0x4a36ed:c.instructions+=2;goto B4a36ed;
case 0x4a36ef:c.instructions+=1;goto B4a36ef;
case 0x4a36f4:goto L4a36f4;
case 0x4a36f5:c.instructions+=4;goto B4a36f5;
case 0x4a36f7:c.instructions+=3;goto B4a36f7;
case 0x4a36f9:c.instructions+=2;goto B4a36f9;
case 0x4a36fb:c.instructions+=1;goto B4a36fb;
case 0x4a3700:goto L4a3700;
case 0x4a3702:c.instructions+=4;goto B4a3702;
case 0x4a3704:c.instructions+=3;goto B4a3704;
case 0x4a3706:c.instructions+=2;goto B4a3706;
case 0x4a3708:c.instructions+=1;goto B4a3708;
case 0x4a370d:goto L4a370d;
case 0x4a370f:c.instructions+=4;goto B4a370f;
case 0x4a3711:c.instructions+=3;goto B4a3711;
case 0x4a3713:c.instructions+=2;goto B4a3713;
case 0x4a3715:c.instructions+=1;goto B4a3715;
case 0x4a371a:goto L4a371a;
case 0x4a371c:c.instructions+=4;goto B4a371c;
case 0x4a371e:c.instructions+=3;goto B4a371e;
case 0x4a3720:c.instructions+=2;goto B4a3720;
case 0x4a3722:c.instructions+=1;goto B4a3722;
case 0x4a3727:goto L4a3727;
case 0x4a372a:c.instructions+=4;goto B4a372a;
case 0x4a372f:c.instructions+=3;goto B4a372f;
case 0x4a3730:c.instructions+=2;goto B4a3730;
case 0x4a3735:c.instructions+=1;goto B4a3735;
case 0x4a373a:goto L4a373a;
case 0x4a373d:c.instructions+=2;goto B4a373d;
case 0x4a373f:c.instructions+=1;goto B4a373f;
case 0x4a3744:goto L4a3744;
case 0x4a3747:c.instructions+=3;goto B4a3747;
case 0x4a374c:c.instructions+=2;goto B4a374c;
case 0x4a374d:c.instructions+=1;goto B4a374d;
case 0x4a3752:goto L4a3752;
case 0x4a3755:c.instructions+=1;goto B4a3755;
case 0x4a375f:goto L4a375f;
case 0x4a3766:c.instructions+=4;goto B4a3766;
case 0x4a3769:c.instructions+=3;goto B4a3769;
case 0x4a376a:c.instructions+=2;goto B4a376a;
case 0x4a376b:c.instructions+=1;goto B4a376b;
case 0x4a3770:goto L4a3770;
case 0x4a3777:c.instructions+=6;goto B4a3777;
case 0x4a377a:c.instructions+=5;goto B4a377a;
case 0x4a377c:c.instructions+=4;goto B4a377c;
case 0x4a3781:c.instructions+=3;goto B4a3781;
case 0x4a3782:c.instructions+=2;goto B4a3782;
case 0x4a3783:c.instructions+=1;goto B4a3783;
case 0x4a3788:goto L4a3788;
case 0x4a378f:c.instructions+=6;goto B4a378f;
case 0x4a3792:c.instructions+=5;goto B4a3792;
case 0x4a3794:c.instructions+=4;goto B4a3794;
case 0x4a3799:c.instructions+=3;goto B4a3799;
case 0x4a379a:c.instructions+=2;goto B4a379a;
case 0x4a379b:c.instructions+=1;goto B4a379b;
case 0x4a37a0:goto L4a37a0;
case 0x4a37a3:c.instructions+=8;goto B4a37a3;
case 0x4a37a7:c.instructions+=7;goto B4a37a7;
case 0x4a37ac:c.instructions+=6;goto B4a37ac;
case 0x4a37ad:c.instructions+=5;goto B4a37ad;
case 0x4a37b2:c.instructions+=4;goto B4a37b2;
case 0x4a37b3:c.instructions+=3;goto B4a37b3;
case 0x4a37b8:c.instructions+=2;goto B4a37b8;
case 0x4a37b9:c.instructions+=1;goto B4a37b9;
case 0x4a37c0:goto L4a37c0;
case 0x4a37c4:c.instructions+=4;goto B4a37c4;
case 0x4a37c6:c.instructions+=3;goto B4a37c6;
case 0x4a37c7:c.instructions+=2;goto B4a37c7;
case 0x4a37c9:c.instructions+=1;goto B4a37c9;
case 0x4a37cf:goto L4a37cf;
case 0x4a37d2:c.instructions+=4;goto B4a37d2;
case 0x4a37d3:c.instructions+=3;goto B4a37d3;
case 0x4a37d8:c.instructions+=2;goto B4a37d8;
case 0x4a37d9:c.instructions+=1;goto B4a37d9;
case 0x4a37de:goto L4a37de;
case 0x4a37e1:c.instructions+=1;goto B4a37e1;
case 0x4a37e3:goto L4a37e3;
case 0x4a37e9:c.instructions+=4;goto B4a37e9;
case 0x4a37ec:c.instructions+=3;goto B4a37ec;
case 0x4a37ed:c.instructions+=2;goto B4a37ed;
case 0x4a37ee:c.instructions+=1;goto B4a37ee;
case 0x4a37f3:goto L4a37f3;
case 0x4a37f4:c.instructions+=1;goto B4a37f4;
case 0x4a37f9:goto L4a37f9;
case 0x4a37ff:c.instructions+=4;goto B4a37ff;
case 0x4a3802:c.instructions+=3;goto B4a3802;
case 0x4a3803:c.instructions+=2;goto B4a3803;
case 0x4a3804:c.instructions+=1;goto B4a3804;
case 0x4a3809:goto L4a3809;
case 0x4a380a:c.instructions+=1;goto B4a380a;
case 0x4a380f:goto L4a380f;
case 0x4a3815:c.instructions+=4;goto B4a3815;
case 0x4a3818:c.instructions+=3;goto B4a3818;
case 0x4a3819:c.instructions+=2;goto B4a3819;
case 0x4a381a:c.instructions+=1;goto B4a381a;
case 0x4a381f:goto L4a381f;
case 0x4a3822:c.instructions+=8;goto B4a3822;
case 0x4a3825:c.instructions+=7;goto B4a3825;
case 0x4a382b:c.instructions+=6;goto B4a382b;
case 0x4a382d:c.instructions+=5;goto B4a382d;
case 0x4a3833:c.instructions+=4;goto B4a3833;
case 0x4a3836:c.instructions+=3;goto B4a3836;
case 0x4a3837:c.instructions+=2;goto B4a3837;
case 0x4a3838:c.instructions+=1;goto B4a3838;
case 0x4a383d:goto L4a383d;
case 0x4a3840:c.instructions+=7;goto B4a3840;
case 0x4a3843:c.instructions+=6;goto B4a3843;
case 0x4a3849:c.instructions+=5;goto B4a3849;
case 0x4a384c:c.instructions+=4;goto B4a384c;
case 0x4a384f:c.instructions+=3;goto B4a384f;
case 0x4a3852:c.instructions+=2;goto B4a3852;
case 0x4a3854:c.instructions+=1;goto B4a3854;
case 0x4a3856:goto L4a3856;
case 0x4a3857:c.instructions+=2;goto B4a3857;
case 0x4a3858:c.instructions+=1;goto B4a3858;
case 0x4a385b:goto L4a385b;
case 0x4a385c:c.instructions+=3;goto B4a385c;
case 0x4a385f:c.instructions+=2;goto B4a385f;
case 0x4a3860:c.instructions+=1;goto B4a3860;
case 0x4a3865:goto L4a3865;
case 0x4a3868:c.instructions+=9;goto B4a3868;
case 0x4a386b:c.instructions+=8;goto B4a386b;
case 0x4a386d:c.instructions+=7;goto B4a386d;
case 0x4a3870:c.instructions+=6;goto B4a3870;
case 0x4a3875:c.instructions+=5;goto B4a3875;
case 0x4a3878:c.instructions+=4;goto B4a3878;
case 0x4a387b:c.instructions+=3;goto B4a387b;
case 0x4a3880:c.instructions+=2;goto B4a3880;
case 0x4a3881:c.instructions+=1;goto B4a3881;
case 0x4a3886:goto L4a3886;
case 0x4a3889:c.instructions+=2;goto B4a3889;
case 0x4a388a:c.instructions+=1;goto B4a388a;
case 0x4a3890:goto L4a3890;
case 0x4a3894:c.instructions+=12;goto B4a3894;
case 0x4a3895:c.instructions+=11;goto B4a3895;
case 0x4a389b:c.instructions+=10;goto B4a389b;
case 0x4a389c:c.instructions+=9;goto B4a389c;
case 0x4a38a1:c.instructions+=8;goto B4a38a1;
case 0x4a38a3:c.instructions+=7;goto B4a38a3;
case 0x4a38a7:c.instructions+=6;goto B4a38a7;
case 0x4a38a9:c.instructions+=5;goto B4a38a9;
case 0x4a38af:c.instructions+=4;goto B4a38af;
case 0x4a38b2:c.instructions+=3;goto B4a38b2;
case 0x4a38b3:c.instructions+=2;goto B4a38b3;
case 0x4a38b4:c.instructions+=1;goto B4a38b4;
case 0x4a38b9:goto L4a38b9;
case 0x4a38bd:c.instructions+=4;goto B4a38bd;
case 0x4a38c0:c.instructions+=3;goto B4a38c0;
case 0x4a38c1:c.instructions+=2;goto B4a38c1;
case 0x4a38c2:c.instructions+=1;goto B4a38c2;
case 0x4a38c7:goto L4a38c7;
case 0x4a38cb:c.instructions+=4;goto B4a38cb;
case 0x4a38ce:c.instructions+=3;goto B4a38ce;
case 0x4a38cf:c.instructions+=2;goto B4a38cf;
case 0x4a38d0:c.instructions+=1;goto B4a38d0;
case 0x4a38d5:goto L4a38d5;
case 0x4a38d8:c.instructions+=2;goto B4a38d8;
case 0x4a38da:c.instructions+=1;goto B4a38da;
case 0x4a38e0:goto L4a38e0;
case 0x4a38e6:c.instructions+=4;goto B4a38e6;
case 0x4a38e9:c.instructions+=3;goto B4a38e9;
case 0x4a38ea:c.instructions+=2;goto B4a38ea;
case 0x4a38eb:c.instructions+=1;goto B4a38eb;
case 0x4a38f0:goto L4a38f0;
case 0x4a38f1:c.instructions+=1;goto B4a38f1;
case 0x4a38f6:goto L4a38f6;
case 0x4a38fc:c.instructions+=4;goto B4a38fc;
case 0x4a38ff:c.instructions+=3;goto B4a38ff;
case 0x4a3900:c.instructions+=2;goto B4a3900;
case 0x4a3901:c.instructions+=1;goto B4a3901;
case 0x4a3906:goto L4a3906;
case 0x4a3907:c.instructions+=1;goto B4a3907;
case 0x4a390c:goto L4a390c;
case 0x4a3912:c.instructions+=4;goto B4a3912;
case 0x4a3915:c.instructions+=3;goto B4a3915;
case 0x4a3916:c.instructions+=2;goto B4a3916;
case 0x4a3917:c.instructions+=1;goto B4a3917;
case 0x4a391c:goto L4a391c;
case 0x4a391f:c.instructions+=8;goto B4a391f;
case 0x4a3922:c.instructions+=7;goto B4a3922;
case 0x4a3928:c.instructions+=6;goto B4a3928;
case 0x4a392a:c.instructions+=5;goto B4a392a;
case 0x4a3930:c.instructions+=4;goto B4a3930;
case 0x4a3933:c.instructions+=3;goto B4a3933;
case 0x4a3934:c.instructions+=2;goto B4a3934;
case 0x4a3935:c.instructions+=1;goto B4a3935;
case 0x4a393a:goto L4a393a;
case 0x4a393d:c.instructions+=7;goto B4a393d;
case 0x4a3940:c.instructions+=6;goto B4a3940;
case 0x4a3946:c.instructions+=5;goto B4a3946;
case 0x4a3949:c.instructions+=4;goto B4a3949;
case 0x4a394c:c.instructions+=3;goto B4a394c;
case 0x4a394f:c.instructions+=2;goto B4a394f;
case 0x4a3951:c.instructions+=1;goto B4a3951;
case 0x4a3953:goto L4a3953;
case 0x4a3955:c.instructions+=4;goto B4a3955;
case 0x4a3957:c.instructions+=3;goto B4a3957;
case 0x4a3959:c.instructions+=2;goto B4a3959;
case 0x4a395b:c.instructions+=1;goto B4a395b;
case 0x4a3960:goto L4a3960;
case 0x4a3962:c.instructions+=4;goto B4a3962;
case 0x4a3964:c.instructions+=3;goto B4a3964;
case 0x4a3966:c.instructions+=2;goto B4a3966;
case 0x4a3968:c.instructions+=1;goto B4a3968;
case 0x4a396d:goto L4a396d;
case 0x4a3970:c.instructions+=5;goto B4a3970;
case 0x4a3972:c.instructions+=4;goto B4a3972;
case 0x4a3977:c.instructions+=3;goto B4a3977;
case 0x4a397c:c.instructions+=2;goto B4a397c;
case 0x4a397d:c.instructions+=1;goto B4a397d;
case 0x4a3982:goto L4a3982;
case 0x4a3985:c.instructions+=5;goto B4a3985;
case 0x4a3987:c.instructions+=4;goto B4a3987;
case 0x4a398c:c.instructions+=3;goto B4a398c;
case 0x4a3991:c.instructions+=2;goto B4a3991;
case 0x4a3992:c.instructions+=1;goto B4a3992;
case 0x4a3997:goto L4a3997;
case 0x4a399a:c.instructions+=3;goto B4a399a;
case 0x4a399f:c.instructions+=2;goto B4a399f;
case 0x4a39a0:c.instructions+=1;goto B4a39a0;
case 0x4a39a5:goto L4a39a5;
case 0x4a39a8:c.instructions+=5;goto B4a39a8;
case 0x4a39ac:c.instructions+=4;goto B4a39ac;
case 0x4a39b6:c.instructions+=3;goto B4a39b6;
case 0x4a39b7:c.instructions+=2;goto B4a39b7;
case 0x4a39b8:c.instructions+=1;goto B4a39b8;
case 0x4a39c0:goto L4a39c0;
case 0x4a39c4:c.instructions+=12;goto B4a39c4;
case 0x4a39c5:c.instructions+=11;goto B4a39c5;
case 0x4a39c6:c.instructions+=10;goto B4a39c6;
case 0x4a39cc:c.instructions+=9;goto B4a39cc;
case 0x4a39d1:c.instructions+=8;goto B4a39d1;
case 0x4a39d3:c.instructions+=7;goto B4a39d3;
case 0x4a39d7:c.instructions+=6;goto B4a39d7;
case 0x4a39d9:c.instructions+=5;goto B4a39d9;
case 0x4a39df:c.instructions+=4;goto B4a39df;
case 0x4a39e2:c.instructions+=3;goto B4a39e2;
case 0x4a39e3:c.instructions+=2;goto B4a39e3;
case 0x4a39e4:c.instructions+=1;goto B4a39e4;
case 0x4a39e9:goto L4a39e9;
case 0x4a39ed:c.instructions+=6;goto B4a39ed;
case 0x4a39f0:c.instructions+=5;goto B4a39f0;
case 0x4a39f3:c.instructions+=4;goto B4a39f3;
case 0x4a39f4:c.instructions+=3;goto B4a39f4;
case 0x4a39f9:c.instructions+=2;goto B4a39f9;
case 0x4a39fa:c.instructions+=1;goto B4a39fa;
case 0x4a39ff:goto L4a39ff;
case 0x4a3a02:c.instructions+=2;goto B4a3a02;
case 0x4a3a03:c.instructions+=1;goto B4a3a03;
case 0x4a3a08:goto L4a3a08;
case 0x4a3a0b:c.instructions+=2;goto B4a3a0b;
case 0x4a3a0d:c.instructions+=1;goto B4a3a0d;
case 0x4a3a10:goto L4a3a10;
case 0x4a3a13:c.instructions+=1;goto B4a3a13;
case 0x4a3a15:goto L4a3a15;
case 0x4a3a17:c.instructions+=4;goto B4a3a17;
case 0x4a3a19:c.instructions+=3;goto B4a3a19;
case 0x4a3a1a:c.instructions+=2;goto B4a3a1a;
case 0x4a3a1c:c.instructions+=1;goto B4a3a1c;
case 0x4a3a21:goto L4a3a21;
case 0x4a3a23:goto L4a3a23;
case 0x4a3a2a:c.instructions+=4;goto B4a3a2a;
case 0x4a3a2d:c.instructions+=3;goto B4a3a2d;
case 0x4a3a2e:c.instructions+=2;goto B4a3a2e;
case 0x4a3a2f:c.instructions+=1;goto B4a3a2f;
case 0x4a3a34:goto L4a3a34;
case 0x4a3a35:c.instructions+=1;goto B4a3a35;
case 0x4a3a3a:goto L4a3a3a;
case 0x4a3a41:c.instructions+=4;goto B4a3a41;
case 0x4a3a44:c.instructions+=3;goto B4a3a44;
case 0x4a3a45:c.instructions+=2;goto B4a3a45;
case 0x4a3a46:c.instructions+=1;goto B4a3a46;
case 0x4a3a4b:goto L4a3a4b;
case 0x4a3a4c:c.instructions+=1;goto B4a3a4c;
case 0x4a3a51:goto L4a3a51;
case 0x4a3a58:c.instructions+=4;goto B4a3a58;
case 0x4a3a5b:c.instructions+=3;goto B4a3a5b;
case 0x4a3a5c:c.instructions+=2;goto B4a3a5c;
case 0x4a3a5d:c.instructions+=1;goto B4a3a5d;
case 0x4a3a62:goto L4a3a62;
case 0x4a3a65:c.instructions+=8;goto B4a3a65;
case 0x4a3a68:c.instructions+=7;goto B4a3a68;
case 0x4a3a6e:c.instructions+=6;goto B4a3a6e;
case 0x4a3a70:c.instructions+=5;goto B4a3a70;
case 0x4a3a77:c.instructions+=4;goto B4a3a77;
case 0x4a3a7a:c.instructions+=3;goto B4a3a7a;
case 0x4a3a7b:c.instructions+=2;goto B4a3a7b;
case 0x4a3a7c:c.instructions+=1;goto B4a3a7c;
case 0x4a3a81:goto L4a3a81;
case 0x4a3a84:c.instructions+=4;goto B4a3a84;
case 0x4a3a87:c.instructions+=3;goto B4a3a87;
case 0x4a3a8a:c.instructions+=2;goto B4a3a8a;
case 0x4a3a90:c.instructions+=1;goto B4a3a90;
case 0x4a3a92:goto L4a3a92;
case 0x4a3a93:c.instructions+=2;goto B4a3a93;
case 0x4a3a96:c.instructions+=1;goto B4a3a96;
case 0x4a3a9c:goto L4a3a9c;
case 0x4a3a9f:c.instructions+=5;goto B4a3a9f;
case 0x4a3aa1:c.instructions+=4;goto B4a3aa1;
case 0x4a3aa6:c.instructions+=3;goto B4a3aa6;
case 0x4a3aab:c.instructions+=2;goto B4a3aab;
case 0x4a3aac:c.instructions+=1;goto B4a3aac;
case 0x4a3ab1:goto L4a3ab1;
case 0x4a3ab4:c.instructions+=5;goto B4a3ab4;
case 0x4a3ab6:c.instructions+=4;goto B4a3ab6;
case 0x4a3abb:c.instructions+=3;goto B4a3abb;
case 0x4a3ac0:c.instructions+=2;goto B4a3ac0;
case 0x4a3ac1:c.instructions+=1;goto B4a3ac1;
case 0x4a3ac6:goto L4a3ac6;
case 0x4a3ac9:c.instructions+=3;goto B4a3ac9;
case 0x4a3ace:c.instructions+=2;goto B4a3ace;
case 0x4a3acf:c.instructions+=1;goto B4a3acf;
case 0x4a3ad4:goto L4a3ad4;
case 0x4a3ad7:c.instructions+=4;goto B4a3ad7;
case 0x4a3ad8:c.instructions+=3;goto B4a3ad8;
case 0x4a3adc:c.instructions+=2;goto B4a3adc;
case 0x4a3add:c.instructions+=1;goto B4a3add;
case 0x4a3ae0:goto L4a3ae0;
case 0x4a3ae1:c.instructions+=5;goto B4a3ae1;
case 0x4a3ae5:c.instructions+=4;goto B4a3ae5;
case 0x4a3ae6:c.instructions+=3;goto B4a3ae6;
case 0x4a3ae7:c.instructions+=2;goto B4a3ae7;
case 0x4a3ae9:c.instructions+=1;goto B4a3ae9;
case 0x4a3aee:goto L4a3aee;
case 0x4a3af1:c.instructions+=2;goto B4a3af1;
case 0x4a3af3:c.instructions+=1;goto B4a3af3;
case 0x4a3af9:goto L4a3af9;
case 0x4a3afc:c.instructions+=2;goto B4a3afc;
case 0x4a3b01:c.instructions+=1;goto B4a3b01;
case 0x4a3b03:goto L4a3b03;
case 0x4a3b08:c.instructions+=3;goto B4a3b08;
case 0x4a3b0b:c.instructions+=2;goto B4a3b0b;
case 0x4a3b0d:c.instructions+=1;goto B4a3b0d;
case 0x4a3b0f:goto L4a3b0f;
case 0x4a3b16:c.instructions+=1;goto B4a3b16;
case 0x4a3b18:goto L4a3b18;
case 0x4a3b1d:c.instructions+=1;goto B4a3b1d;
case 0x4a3b1f:goto L4a3b1f;
case 0x4a3b24:c.instructions+=1;goto B4a3b24;
case 0x4a3b26:goto L4a3b26;
case 0x4a3b2b:c.instructions+=1;goto B4a3b2b;
case 0x4a3b2d:goto L4a3b2d;
case 0x4a3b32:c.instructions+=1;goto B4a3b32;
case 0x4a3b34:goto L4a3b34;
case 0x4a3b39:c.instructions+=1;goto B4a3b39;
case 0x4a3b3b:goto L4a3b3b;
case 0x4a3b40:c.instructions+=3;goto B4a3b40;
case 0x4a3b43:c.instructions+=2;goto B4a3b43;
case 0x4a3b45:c.instructions+=1;goto B4a3b45;
case 0x4a3b47:goto L4a3b47;
case 0x4a3b4e:c.instructions+=1;goto B4a3b4e;
case 0x4a3b50:goto L4a3b50;
case 0x4a3b55:c.instructions+=3;goto B4a3b55;
case 0x4a3b58:c.instructions+=2;goto B4a3b58;
case 0x4a3b5a:c.instructions+=1;goto B4a3b5a;
case 0x4a3b5c:goto L4a3b5c;
case 0x4a3b63:goto L4a3b63;
case 0x4a3b65:goto L4a3b65;
case 0x4a3b6b:c.instructions+=4;goto B4a3b6b;
case 0x4a3b6e:c.instructions+=3;goto B4a3b6e;
case 0x4a3b6f:c.instructions+=2;goto B4a3b6f;
case 0x4a3b70:c.instructions+=1;goto B4a3b70;
case 0x4a3b75:goto L4a3b75;
case 0x4a3b76:c.instructions+=1;goto B4a3b76;
case 0x4a3b7b:goto L4a3b7b;
case 0x4a3b81:c.instructions+=4;goto B4a3b81;
case 0x4a3b84:c.instructions+=3;goto B4a3b84;
case 0x4a3b85:c.instructions+=2;goto B4a3b85;
case 0x4a3b86:c.instructions+=1;goto B4a3b86;
case 0x4a3b8b:goto L4a3b8b;
case 0x4a3b8c:c.instructions+=1;goto B4a3b8c;
case 0x4a3b91:goto L4a3b91;
case 0x4a3b97:c.instructions+=4;goto B4a3b97;
case 0x4a3b9a:c.instructions+=3;goto B4a3b9a;
case 0x4a3b9b:c.instructions+=2;goto B4a3b9b;
case 0x4a3b9c:c.instructions+=1;goto B4a3b9c;
case 0x4a3ba1:goto L4a3ba1;
case 0x4a3ba4:c.instructions+=8;goto B4a3ba4;
case 0x4a3ba7:c.instructions+=7;goto B4a3ba7;
case 0x4a3bad:c.instructions+=6;goto B4a3bad;
case 0x4a3baf:c.instructions+=5;goto B4a3baf;
case 0x4a3bb5:c.instructions+=4;goto B4a3bb5;
case 0x4a3bb8:c.instructions+=3;goto B4a3bb8;
case 0x4a3bb9:c.instructions+=2;goto B4a3bb9;
case 0x4a3bba:c.instructions+=1;goto B4a3bba;
case 0x4a3bbf:goto L4a3bbf;
case 0x4a3bc2:c.instructions+=7;goto B4a3bc2;
case 0x4a3bc5:c.instructions+=6;goto B4a3bc5;
case 0x4a3bcb:c.instructions+=5;goto B4a3bcb;
case 0x4a3bce:c.instructions+=4;goto B4a3bce;
case 0x4a3bd1:c.instructions+=3;goto B4a3bd1;
case 0x4a3bd4:c.instructions+=2;goto B4a3bd4;
case 0x4a3bd6:c.instructions+=1;goto B4a3bd6;
case 0x4a3bd8:goto L4a3bd8;
case 0x4a3bda:c.instructions+=3;goto B4a3bda;
case 0x4a3bdc:c.instructions+=2;goto B4a3bdc;
case 0x4a3be0:c.instructions+=1;goto B4a3be0;
case 0x4a3be5:goto L4a3be5;
case 0x4a3be6:c.instructions+=2;goto B4a3be6;
case 0x4a3be7:c.instructions+=1;goto B4a3be7;
case 0x4a3bf0:goto L4a3bf0;
case 0x4a3bf5:c.instructions+=3;goto B4a3bf5;
case 0x4a3bfa:c.instructions+=2;goto B4a3bfa;
case 0x4a3bff:c.instructions+=1;goto B4a3bff;
case 0x4a3c04:goto L4a3c04;
case 0x4a3c10:goto L4a3c10;
case 0x4a3c11:c.instructions+=6;goto B4a3c11;
case 0x4a3c16:c.instructions+=5;goto B4a3c16;
case 0x4a3c1b:c.instructions+=4;goto B4a3c1b;
case 0x4a3c20:c.instructions+=3;goto B4a3c20;
case 0x4a3c25:c.instructions+=2;goto B4a3c25;
case 0x4a3c27:c.instructions+=1;goto B4a3c27;
case 0x4a3c2c:goto L4a3c2c;
case 0x4a3c36:c.instructions+=1;goto B4a3c36;
case 0x4a3c38:goto L4a3c38;
case 0x4a3c3b:c.instructions+=3;goto B4a3c3b;
case 0x4a3c3c:c.instructions+=2;goto B4a3c3c;
case 0x4a3c41:c.instructions+=1;goto B4a3c41;
case 0x4a3c46:goto L4a3c46;
case 0x4a3c49:c.instructions+=4;goto B4a3c49;
case 0x4a3c4c:c.instructions+=3;goto B4a3c4c;
case 0x4a3c4d:c.instructions+=2;goto B4a3c4d;
case 0x4a3c4e:c.instructions+=1;goto B4a3c4e;
case 0x4a3c53:goto L4a3c53;
case 0x4a3c56:c.instructions+=2;goto B4a3c56;
case 0x4a3c57:c.instructions+=1;goto B4a3c57;
case 0x4a3c58:goto L4a3c58;
case 0x4a3c5b:c.instructions+=3;goto B4a3c5b;
case 0x4a3c5c:c.instructions+=2;goto B4a3c5c;
case 0x4a3c61:c.instructions+=1;goto B4a3c61;
case 0x4a3c66:goto L4a3c66;
case 0x4a3c69:c.instructions+=4;goto B4a3c69;
case 0x4a3c6a:c.instructions+=3;goto B4a3c6a;
case 0x4a3c6d:c.instructions+=2;goto B4a3c6d;
case 0x4a3c6e:c.instructions+=1;goto B4a3c6e;
case 0x4a3c73:goto L4a3c73;
case 0x4a3c76:c.instructions+=2;goto B4a3c76;
case 0x4a3c77:c.instructions+=1;goto B4a3c77;
case 0x4a3c80:goto L4a3c80;
case 0x4a3c81:c.instructions+=6;goto B4a3c81;
case 0x4a3c82:c.instructions+=5;goto B4a3c82;
case 0x4a3c84:c.instructions+=4;goto B4a3c84;
case 0x4a3c87:c.instructions+=3;goto B4a3c87;
case 0x4a3c8c:c.instructions+=2;goto B4a3c8c;
case 0x4a3c8d:c.instructions+=1;goto B4a3c8d;
case 0x4a3c92:goto L4a3c92;
case 0x4a3c95:c.instructions+=2;goto B4a3c95;
case 0x4a3c97:c.instructions+=1;goto B4a3c97;
case 0x4a3ca0:goto L4a3ca0;
case 0x4a3ca6:c.instructions+=4;goto B4a3ca6;
case 0x4a3ca9:c.instructions+=3;goto B4a3ca9;
case 0x4a3caa:c.instructions+=2;goto B4a3caa;
case 0x4a3cab:c.instructions+=1;goto B4a3cab;
case 0x4a3cb0:goto L4a3cb0;
case 0x4a3cb1:c.instructions+=1;goto B4a3cb1;
case 0x4a3cb6:goto L4a3cb6;
case 0x4a3cbc:c.instructions+=4;goto B4a3cbc;
case 0x4a3cbf:c.instructions+=3;goto B4a3cbf;
case 0x4a3cc0:c.instructions+=2;goto B4a3cc0;
case 0x4a3cc1:c.instructions+=1;goto B4a3cc1;
case 0x4a3cc6:goto L4a3cc6;
case 0x4a3cc7:c.instructions+=1;goto B4a3cc7;
case 0x4a3ccc:goto L4a3ccc;
case 0x4a3cd2:c.instructions+=4;goto B4a3cd2;
case 0x4a3cd5:c.instructions+=3;goto B4a3cd5;
case 0x4a3cd6:c.instructions+=2;goto B4a3cd6;
case 0x4a3cd7:c.instructions+=1;goto B4a3cd7;
case 0x4a3cdc:goto L4a3cdc;
case 0x4a3cdf:c.instructions+=8;goto B4a3cdf;
case 0x4a3ce2:c.instructions+=7;goto B4a3ce2;
case 0x4a3ce8:c.instructions+=6;goto B4a3ce8;
case 0x4a3cea:c.instructions+=5;goto B4a3cea;
case 0x4a3cf0:c.instructions+=4;goto B4a3cf0;
case 0x4a3cf3:c.instructions+=3;goto B4a3cf3;
case 0x4a3cf4:c.instructions+=2;goto B4a3cf4;
case 0x4a3cf5:c.instructions+=1;goto B4a3cf5;
case 0x4a3cfa:goto L4a3cfa;
case 0x4a3cfd:c.instructions+=7;goto B4a3cfd;
case 0x4a3d00:c.instructions+=6;goto B4a3d00;
case 0x4a3d06:c.instructions+=5;goto B4a3d06;
case 0x4a3d09:c.instructions+=4;goto B4a3d09;
case 0x4a3d0c:c.instructions+=3;goto B4a3d0c;
case 0x4a3d0f:c.instructions+=2;goto B4a3d0f;
case 0x4a3d11:c.instructions+=1;goto B4a3d11;
case 0x4a3d13:goto L4a3d13;
case 0x4a3d17:c.instructions+=4;goto B4a3d17;
case 0x4a3d21:c.instructions+=3;goto B4a3d21;
case 0x4a3d22:c.instructions+=2;goto B4a3d22;
case 0x4a3d23:c.instructions+=1;goto B4a3d23;
case 0x4a3d30:goto L4a3d30;
case 0x4a3d35:c.instructions+=2;goto B4a3d35;
case 0x4a3d3a:c.instructions+=1;goto B4a3d3a;
case 0x4a3d3f:goto L4a3d3f;
case 0x4a3d42:c.instructions+=1;goto B4a3d42;
case 0x4a3d50:goto L4a3d50;
case 0x4a3d56:c.instructions+=12;goto B4a3d56;
case 0x4a3d57:c.instructions+=11;goto B4a3d57;
case 0x4a3d59:c.instructions+=10;goto B4a3d59;
case 0x4a3d5b:c.instructions+=9;goto B4a3d5b;
case 0x4a3d5e:c.instructions+=8;goto B4a3d5e;
case 0x4a3d61:c.instructions+=7;goto B4a3d61;
case 0x4a3d62:c.instructions+=6;goto B4a3d62;
case 0x4a3d63:c.instructions+=5;goto B4a3d63;
case 0x4a3d65:c.instructions+=4;goto B4a3d65;
case 0x4a3d66:c.instructions+=3;goto B4a3d66;
case 0x4a3d68:c.instructions+=2;goto B4a3d68;
case 0x4a3d6a:c.instructions+=1;goto B4a3d6a;
case 0x4a3d6c:goto L4a3d6c;
case 0x4a3d70:goto L4a3d70;
case 0x4a3d77:c.instructions+=2;goto B4a3d77;
case 0x4a3d78:c.instructions+=1;goto B4a3d78;
case 0x4a3d7d:goto L4a3d7d;
case 0x4a3d80:c.instructions+=4;goto B4a3d80;
case 0x4a3d82:c.instructions+=3;goto B4a3d82;
case 0x4a3d83:c.instructions+=2;goto B4a3d83;
case 0x4a3d85:c.instructions+=1;goto B4a3d85;
case 0x4a3d87:goto L4a3d87;
case 0x4a3d8b:c.instructions+=3;goto B4a3d8b;
case 0x4a3d8c:c.instructions+=2;goto B4a3d8c;
case 0x4a3d8d:c.instructions+=1;goto B4a3d8d;
case 0x4a3d92:goto L4a3d92;
case 0x4a3d95:c.instructions+=4;goto B4a3d95;
case 0x4a3d96:c.instructions+=3;goto B4a3d96;
case 0x4a3d97:c.instructions+=2;goto B4a3d97;
case 0x4a3d98:c.instructions+=1;goto B4a3d98;
case 0x4a3da0:goto L4a3da0;
case 0x4a3da3:c.instructions+=7;goto B4a3da3;
case 0x4a3da5:c.instructions+=6;goto B4a3da5;
case 0x4a3daa:c.instructions+=5;goto B4a3daa;
case 0x4a3dae:c.instructions+=4;goto B4a3dae;
case 0x4a3db1:c.instructions+=3;goto B4a3db1;
case 0x4a3db2:c.instructions+=2;goto B4a3db2;
case 0x4a3db3:c.instructions+=1;goto B4a3db3;
case 0x4a3db8:goto L4a3db8;
case 0x4a3dbb:c.instructions+=1;goto B4a3dbb;
case 0x4a3dc0:goto L4a3dc0;
case 0x4a3dc5:c.instructions+=1;goto B4a3dc5;
case 0x4a3dca:goto L4a3dca;
case 0x4a3dcf:c.instructions+=1;goto B4a3dcf;
case 0x4a3dd4:goto L4a3dd4;
case 0x4a3dda:c.instructions+=4;goto B4a3dda;
case 0x4a3ddd:c.instructions+=3;goto B4a3ddd;
case 0x4a3ddf:c.instructions+=2;goto B4a3ddf;
case 0x4a3de1:c.instructions+=1;goto B4a3de1;
case 0x4a3de6:goto L4a3de6;
case 0x4a3df0:goto L4a3df0;
case 0x4a3df5:c.instructions+=1;goto B4a3df5;
case 0x4a3dfa:goto L4a3dfa;
case 0x4a3e00:c.instructions+=3;goto B4a3e00;
case 0x4a3e02:c.instructions+=2;goto B4a3e02;
case 0x4a3e04:c.instructions+=1;goto B4a3e04;
case 0x4a3e09:goto L4a3e09;
case 0x4a3e0e:goto L4a3e0e;
case 0x4a3e0f:c.instructions+=1;goto B4a3e0f;
case 0x4a3e14:goto L4a3e14;
case 0x4a3e17:c.instructions+=2;goto B4a3e17;
case 0x4a3e19:c.instructions+=1;goto B4a3e19;
case 0x4a3e1b:goto L4a3e1b;
case 0x4a3e20:goto L4a3e20;
case 0x4a3e21:c.instructions+=1;goto B4a3e21;
case 0x4a3e26:goto L4a3e26;
case 0x4a3e27:goto L4a3e27;
case 0x4a3e30:goto L4a3e30;
case 0x4a3e33:c.instructions+=6;goto B4a3e33;
case 0x4a3e34:c.instructions+=5;goto B4a3e34;
case 0x4a3e38:c.instructions+=4;goto B4a3e38;
case 0x4a3e3a:c.instructions+=3;goto B4a3e3a;
case 0x4a3e3b:c.instructions+=2;goto B4a3e3b;
case 0x4a3e40:c.instructions+=1;goto B4a3e40;
case 0x4a3e45:goto L4a3e45;
case 0x4a3e47:c.instructions+=1;goto B4a3e47;
case 0x4a3e49:goto L4a3e49;
case 0x4a3e4c:c.instructions+=4;goto B4a3e4c;
case 0x4a3e50:c.instructions+=3;goto B4a3e50;
case 0x4a3e51:c.instructions+=2;goto B4a3e51;
case 0x4a3e52:c.instructions+=1;goto B4a3e52;
case 0x4a3e57:goto L4a3e57;
case 0x4a3e5a:c.instructions+=3;goto B4a3e5a;
case 0x4a3e5b:c.instructions+=2;goto B4a3e5b;
case 0x4a3e5e:c.instructions+=1;goto B4a3e5e;
case 0x4a3e5f:goto L4a3e5f;
case 0x4a3e65:c.instructions+=3;goto B4a3e65;
case 0x4a3e67:c.instructions+=2;goto B4a3e67;
case 0x4a3e69:c.instructions+=1;goto B4a3e69;
case 0x4a3e6e:goto L4a3e6e;
case 0x4a3e6f:c.instructions+=2;goto B4a3e6f;
case 0x4a3e72:c.instructions+=1;goto B4a3e72;
case 0x4a3e80:goto L4a3e80;
case 0x4a3e87:c.instructions+=3;goto B4a3e87;
case 0x4a3e88:c.instructions+=2;goto B4a3e88;
case 0x4a3e8a:c.instructions+=1;goto B4a3e8a;
case 0x4a3e8c:goto L4a3e8c;
case 0x4a3e91:c.instructions+=1;goto B4a3e91;
case 0x4a3e96:goto L4a3e96;
case 0x4a3e9b:c.instructions+=1;goto B4a3e9b;
case 0x4a3ea0:goto L4a3ea0;
case 0x4a3ea3:c.instructions+=3;goto B4a3ea3;
case 0x4a3ea5:c.instructions+=2;goto B4a3ea5;
case 0x4a3ea6:c.instructions+=1;goto B4a3ea6;
case 0x4a3eab:goto L4a3eab;
case 0x4a3eae:c.instructions+=3;goto B4a3eae;
case 0x4a3eb0:c.instructions+=2;goto B4a3eb0;
case 0x4a3eb5:c.instructions+=1;goto B4a3eb5;
case 0x4a3eba:goto L4a3eba;
case 0x4a3ebb:c.instructions+=1;goto B4a3ebb;
case 0x4a3ec0:goto L4a3ec0;
case 0x4a3ec6:c.instructions+=4;goto B4a3ec6;
case 0x4a3ec9:c.instructions+=3;goto B4a3ec9;
case 0x4a3ecb:c.instructions+=2;goto B4a3ecb;
case 0x4a3ecd:c.instructions+=1;goto B4a3ecd;
case 0x4a3ed2:goto L4a3ed2;
case 0x4a3ed3:c.instructions+=1;goto B4a3ed3;
case 0x4a3ee0:goto L4a3ee0;
case 0x4a3ee1:c.instructions+=4;goto B4a3ee1;
case 0x4a3ee3:c.instructions+=3;goto B4a3ee3;
case 0x4a3ee6:c.instructions+=2;goto B4a3ee6;
case 0x4a3ee8:c.instructions+=1;goto B4a3ee8;
case 0x4a3eea:goto L4a3eea;
case 0x4a3eeb:c.instructions+=1;goto B4a3eeb;
case 0x4a3ef0:goto L4a3ef0;
case 0x4a3ef3:goto L4a3ef3;
case 0x4a3efa:c.instructions+=2;goto B4a3efa;
case 0x4a3efb:c.instructions+=1;goto B4a3efb;
case 0x4a3f00:goto L4a3f00;
case 0x4a3f04:c.instructions+=2;goto B4a3f04;
case 0x4a3f09:c.instructions+=1;goto B4a3f09;
case 0x4a3f0b:goto L4a3f0b;
case 0x4a3f10:c.instructions+=1;goto B4a3f10;
case 0x4a3f12:goto L4a3f12;
case 0x4a3f16:c.instructions+=3;goto B4a3f16;
case 0x4a3f17:c.instructions+=2;goto B4a3f17;
case 0x4a3f18:c.instructions+=1;goto B4a3f18;
case 0x4a3f1d:goto L4a3f1d;
case 0x4a3f20:c.instructions+=1;goto B4a3f20;
case 0x4a3f23:goto L4a3f23;
case 0x4a3f28:c.instructions+=1;goto B4a3f28;
case 0x4a3f2b:goto L4a3f2b;
case 0x4a3f2d:c.instructions+=1;goto B4a3f2d;
case 0x4a3f30:goto L4a3f30;
case 0x4a3f35:c.instructions+=4;goto B4a3f35;
case 0x4a3f38:c.instructions+=3;goto B4a3f38;
case 0x4a3f39:c.instructions+=2;goto B4a3f39;
case 0x4a3f3b:c.instructions+=1;goto B4a3f3b;
case 0x4a3f41:goto L4a3f41;
case 0x4a3f46:c.instructions+=1;goto B4a3f46;
case 0x4a3f4c:goto L4a3f4c;
case 0x4a3f51:c.instructions+=2;goto B4a3f51;
case 0x4a3f53:c.instructions+=1;goto B4a3f53;
case 0x4a3f59:goto L4a3f59;
case 0x4a3f5e:c.instructions+=2;goto B4a3f5e;
case 0x4a3f60:c.instructions+=1;goto B4a3f60;
case 0x4a3f66:goto L4a3f66;
case 0x4a3f6b:c.instructions+=2;goto B4a3f6b;
case 0x4a3f6d:c.instructions+=1;goto B4a3f6d;
case 0x4a3f73:goto L4a3f73;
case 0x4a3f78:c.instructions+=2;goto B4a3f78;
case 0x4a3f7a:c.instructions+=1;goto B4a3f7a;
case 0x4a3f7c:goto L4a3f7c;
case 0x4a3f81:c.instructions+=2;goto B4a3f81;
case 0x4a3f83:c.instructions+=1;goto B4a3f83;
case 0x4a3f89:goto L4a3f89;
case 0x4a3f8a:c.instructions+=3;goto B4a3f8a;
case 0x4a3f8d:c.instructions+=2;goto B4a3f8d;
case 0x4a3f92:c.instructions+=1;goto B4a3f92;
case 0x4a3f97:goto L4a3f97;
case 0x4a3f9a:c.instructions+=3;goto B4a3f9a;
case 0x4a3f9b:c.instructions+=2;goto B4a3f9b;
case 0x4a3fa0:c.instructions+=1;goto B4a3fa0;
case 0x4a3fa5:goto L4a3fa5;
case 0x4a3fa8:c.instructions+=3;goto B4a3fa8;
case 0x4a3fa9:c.instructions+=2;goto B4a3fa9;
case 0x4a3faa:c.instructions+=1;goto B4a3faa;
case 0x4a3faf:goto L4a3faf;
case 0x4a3fb2:c.instructions+=2;goto B4a3fb2;
case 0x4a3fb7:c.instructions+=1;goto B4a3fb7;
case 0x4a3fbc:goto L4a3fbc;
case 0x4a3fbd:c.instructions+=2;goto B4a3fbd;
case 0x4a3fbe:c.instructions+=1;goto B4a3fbe;
case 0x4a3fc3:goto L4a3fc3;
case 0x4a3fc6:c.instructions+=2;goto B4a3fc6;
case 0x4a3fcb:c.instructions+=1;goto B4a3fcb;
case 0x4a3fd0:goto L4a3fd0;
case 0x4a3fd1:c.instructions+=2;goto B4a3fd1;
case 0x4a3fd2:c.instructions+=1;goto B4a3fd2;
case 0x4a3fd7:goto L4a3fd7;
case 0x4a3fda:c.instructions+=3;goto B4a3fda;
case 0x4a3fdb:c.instructions+=2;goto B4a3fdb;
case 0x4a3fdc:c.instructions+=1;goto B4a3fdc;
case 0x4a3fdd:goto L4a3fdd;
case 0x4a3fe2:c.instructions+=2;goto B4a3fe2;
case 0x4a3fe4:c.instructions+=1;goto B4a3fe4;
case 0x4a3fe6:goto L4a3fe6;
case 0x4a3feb:c.instructions+=2;goto B4a3feb;
case 0x4a3fed:c.instructions+=1;goto B4a3fed;
case 0x4a3fef:goto L4a3fef;
case 0x4a3ff2:c.instructions+=2;goto B4a3ff2;
case 0x4a3ff7:c.instructions+=1;goto B4a3ff7;
case 0x4a3ffc:goto L4a3ffc;
case 0x4a3fff:c.instructions+=1;goto B4a3fff;
default:missing_instruction(c.pc);}
B4a3002:L4a3002:{c.instructions+=2;NFSU2_TR(0x4a3002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3003:{NFSU2_TR(0x4a3003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3008ull));
TAIL_STATIC(0x5426c0u,542);
}
B4a3008:L4a3008:{c.instructions+=5;NFSU2_TR(0x4a3008);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a300b:{NFSU2_TR(0x4a300b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a300d:{NFSU2_TR(0x4a300d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a300f:{NFSU2_TR(0x4a300f);
u8 U[4];
w4(U+0,u32(0x22729437ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3014:{NFSU2_TR(0x4a3014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3019ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3019:L4a3019:{c.instructions+=4;NFSU2_TR(0x4a3019);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a301c:{NFSU2_TR(0x4a301c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a301d:{NFSU2_TR(0x4a301d);
u8 U[4];
w4(U+0,u32(0x818f0385ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3022:{NFSU2_TR(0x4a3022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3027ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3027:L4a3027:{c.instructions+=6;NFSU2_TR(0x4a3027);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a302a:{NFSU2_TR(0x4a302a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a302b:{NFSU2_TR(0x4a302b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a302d:{NFSU2_TR(0x4a302d);
u8 U[4];
w4(U+0,u32(0x5b9d88b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3032:{NFSU2_TR(0x4a3032);
__builtin_memmove((R+4),(R+24),4);
}
B4a3034:{NFSU2_TR(0x4a3034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3039ull));
TAIL_STATIC(0x555f80u,555);
}
B4a3039:L4a3039:{c.instructions+=3;NFSU2_TR(0x4a3039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a303c:{NFSU2_TR(0x4a303c);
u8 U[4];
w4(U+0,u32(0x22729437ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3041:{NFSU2_TR(0x4a3041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3046ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3046:L4a3046:{c.instructions+=4;NFSU2_TR(0x4a3046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3047:{NFSU2_TR(0x4a3047);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a304c:{NFSU2_TR(0x4a304c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a304d:{NFSU2_TR(0x4a304d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3052ull));
TAIL_STATIC(0x542600u,542);
}
B4a3052:L4a3052:{c.instructions+=2;NFSU2_TR(0x4a3052);
u8 U[4];
w4(U+0,u32(0xd9dc2f12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3057:{NFSU2_TR(0x4a3057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a305cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a305c:L4a305c:{c.instructions+=4;NFSU2_TR(0x4a305c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a305f:{NFSU2_TR(0x4a305f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3060:{NFSU2_TR(0x4a3060);
w4(R+4,u32(0x850080ull));
}
B4a3065:{NFSU2_TR(0x4a3065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a306aull));
TAIL_STATIC(0x503230u,503);
}
B4a306a:L4a306a:{c.instructions+=2;NFSU2_TR(0x4a306a);
u8 U[4];
w4(U+0,u32(0xd9dc2f12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a306f:{NFSU2_TR(0x4a306f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3074ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3074:L4a3074:{c.instructions+=4;NFSU2_TR(0x4a3074);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3077:{NFSU2_TR(0x4a3077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3078:{NFSU2_TR(0x4a3078);
w4(R+4,u32(0x850080ull));
}
B4a307d:{NFSU2_TR(0x4a307d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3082ull));
TAIL_STATIC(0x503260u,503);
}
B4a3082:L4a3082:{c.instructions+=2;NFSU2_TR(0x4a3082);
u8 U[4];
w4(U+0,u32(0xd9dc2f12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3087:{NFSU2_TR(0x4a3087);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a308cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a308c:L4a308c:{c.instructions+=4;NFSU2_TR(0x4a308c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a308f:{NFSU2_TR(0x4a308f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3090:{NFSU2_TR(0x4a3090);
w4(R+4,u32(0x850080ull));
}
B4a3095:{NFSU2_TR(0x4a3095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a309aull));
TAIL_STATIC(0x503290u,503);
}
B4a309a:L4a309a:{c.instructions+=2;NFSU2_TR(0x4a309a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a309b:{NFSU2_TR(0x4a309b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a30a0:L4a30a0:{c.instructions+=7;NFSU2_TR(0x4a30a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30a1:{NFSU2_TR(0x4a30a1);
__builtin_memmove((R+24),(R+4),4);
}
B4a30a3:{NFSU2_TR(0x4a30a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a30a5:{NFSU2_TR(0x4a30a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a30a8:{NFSU2_TR(0x4a30a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30a9:{NFSU2_TR(0x4a30a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a30ad:{NFSU2_TR(0x4a30ad);
if(r1(R+518)){{goto L4a30bc;}}
}
B4a30af:L4a30af:{c.instructions+=4;NFSU2_TR(0x4a30af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a30b2:{NFSU2_TR(0x4a30b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30b3:{NFSU2_TR(0x4a30b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30b4:{NFSU2_TR(0x4a30b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a30b9ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a30b9:L4a30b9:{c.instructions+=1;NFSU2_TR(0x4a30b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a30bc:L4a30bc:{c.instructions+=3;NFSU2_TR(0x4a30bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a30be:{NFSU2_TR(0x4a30be);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a30c1:{NFSU2_TR(0x4a30c1);
if(r1(R+518)){{goto L4a30f0;}}
}
B4a30c3:L4a30c3:{c.instructions+=2;NFSU2_TR(0x4a30c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x461a18eeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a30c9:{NFSU2_TR(0x4a30c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a30e0;}}
}
B4a30cb:L4a30cb:{c.instructions+=5;NFSU2_TR(0x4a30cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a30ce:{NFSU2_TR(0x4a30ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a30d1:{NFSU2_TR(0x4a30d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30d2:{NFSU2_TR(0x4a30d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30d3:{NFSU2_TR(0x4a30d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a30d8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a30d8:L4a30d8:{c.instructions+=4;NFSU2_TR(0x4a30d8);
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
B4a30db:{NFSU2_TR(0x4a30db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a30dc:{NFSU2_TR(0x4a30dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a30dd:{NFSU2_TR(0x4a30dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a30e0:L4a30e0:{c.instructions+=5;NFSU2_TR(0x4a30e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a30e3:{NFSU2_TR(0x4a30e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a30e6:{NFSU2_TR(0x4a30e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30e7:{NFSU2_TR(0x4a30e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a30e8:{NFSU2_TR(0x4a30e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a30edull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a30ed:L4a30ed:{c.instructions+=1;NFSU2_TR(0x4a30ed);
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
B4a30f0:L4a30f0:{c.instructions+=3;NFSU2_TR(0x4a30f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a30f1:{NFSU2_TR(0x4a30f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a30f2:{NFSU2_TR(0x4a30f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3100:L4a3100:{c.instructions+=19;NFSU2_TR(0x4a3100);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3104:{NFSU2_TR(0x4a3104);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3108:{NFSU2_TR(0x4a3108);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a310c:{NFSU2_TR(0x4a310c);
__builtin_memmove(gp(0x83651c),(R+4),4);
}
B4a3112:{NFSU2_TR(0x4a3112);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3116:{NFSU2_TR(0x4a3116);
__builtin_memmove(gp(0x836514),(R+0),4);
}
B4a311b:{NFSU2_TR(0x4a311b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a311c:{NFSU2_TR(0x4a311c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a3120:{NFSU2_TR(0x4a3120);
__builtin_memmove(gp(0x836524),(R+8),4);
}
B4a3126:{NFSU2_TR(0x4a3126);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a312a:{NFSU2_TR(0x4a312a);
__builtin_memmove(gp(0x836528),(R+4),4);
}
B4a3130:{NFSU2_TR(0x4a3130);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3134:{NFSU2_TR(0x4a3134);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B4a3137:{NFSU2_TR(0x4a3137);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a313a:{NFSU2_TR(0x4a313a);
__builtin_memmove(gp(0x836518),(R+24),4);
}
B4a3140:{NFSU2_TR(0x4a3140);
__builtin_memmove(gp(0x836530),(R+8),4);
}
B4a3146:{NFSU2_TR(0x4a3146);
__builtin_memmove(gp(0x836534),(R+4),4);
}
B4a314c:{NFSU2_TR(0x4a314c);
s4(0x836520,u32(0x78f184ull));
}
B4a3156:{NFSU2_TR(0x4a3156);
if(r1(R+518)){{goto L4a3171;}}
}
B4a3158:L4a3158:{c.instructions+=1;NFSU2_TR(0x4a3158);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4a3193;}}
}
B4a315a:L4a315a:{c.instructions+=2;NFSU2_TR(0x4a315a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a315d:{NFSU2_TR(0x4a315d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a3193;}}
}
B4a315f:L4a315f:{c.instructions+=4;NFSU2_TR(0x4a315f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3161:{NFSU2_TR(0x4a3161);
u8 U[4];
w4(U+0,u32(0x78f184ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3166:{NFSU2_TR(0x4a3166);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3167:{NFSU2_TR(0x4a3167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a316cull));
TAIL_STATIC(0x537980u,537);
}
B4a316c:L4a316c:{c.instructions+=2;NFSU2_TR(0x4a316c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a316f:{NFSU2_TR(0x4a316f);
{goto L4a3193;}
}
B4a3171:L4a3171:{c.instructions+=3;NFSU2_TR(0x4a3171);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3172:{NFSU2_TR(0x4a3172);
u8 U[4];
w4(U+0,u32(0x96dda9e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3177:{NFSU2_TR(0x4a3177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a317cull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a317c:L4a317c:{c.instructions+=6;NFSU2_TR(0x4a317c);
__builtin_memmove((R+8),gp(0x836520),4);
}
B4a3182:{NFSU2_TR(0x4a3182);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3184:{NFSU2_TR(0x4a3184);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3189:{NFSU2_TR(0x4a3189);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a318a:{NFSU2_TR(0x4a318a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a318b:{NFSU2_TR(0x4a318b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3190ull));
TAIL_STATIC(0x555eb0u,555);
}
B4a3190:L4a3190:{c.instructions+=1;NFSU2_TR(0x4a3190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a3193:L4a3193:{c.instructions+=5;NFSU2_TR(0x4a3193);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a3199:{NFSU2_TR(0x4a3199);
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
B4a319b:{NFSU2_TR(0x4a319b);
s1(0x83653c,u8(0x0ull));
}
B4a31a2:{NFSU2_TR(0x4a31a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a31a3:{NFSU2_TR(0x4a31a3);
if(r1(R+518)){{goto L4a31c1;}}
}
B4a31a5:L4a31a5:{c.instructions+=3;NFSU2_TR(0x4a31a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a31a8:{NFSU2_TR(0x4a31a8);
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
B4a31aa:{NFSU2_TR(0x4a31aa);
if(r1(R+518)){{goto L4a31c1;}}
}
B4a31ac:L4a31ac:{c.instructions+=3;NFSU2_TR(0x4a31ac);
__builtin_memmove((R+0),gp(0x8384dc),1);
}
B4a31b1:{NFSU2_TR(0x4a31b1);
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
B4a31b3:{NFSU2_TR(0x4a31b3);
if(r1(R+518)){{goto L4a31c1;}}
}
B4a31b5:L4a31b5:{c.instructions+=2;NFSU2_TR(0x4a31b5);
s1(0x83653c,u8(0x1ull));
}
B4a31bc:{NFSU2_TR(0x4a31bc);
TAIL_STATIC(0x54e6b0u,54e);
}
B4a31c1:L4a31c1:{c.instructions+=1;NFSU2_TR(0x4a31c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a31d0:L4a31d0:{c.instructions+=8;NFSU2_TR(0x4a31d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a31d1:{NFSU2_TR(0x4a31d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a31d2:{NFSU2_TR(0x4a31d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a31d6:{NFSU2_TR(0x4a31d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a31d9:{NFSU2_TR(0x4a31d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a31da:{NFSU2_TR(0x4a31da);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a31df:{NFSU2_TR(0x4a31df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a31e0:{NFSU2_TR(0x4a31e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a31e5ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4a31e5:L4a31e5:{c.instructions+=3;NFSU2_TR(0x4a31e5);
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
B4a31e8:{NFSU2_TR(0x4a31e8);
__builtin_memmove((R+4),(R+0),4);
}
B4a31ea:{NFSU2_TR(0x4a31ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a31efull));
TAIL_STATIC(0x5047e0u,504);
}
B4a31ef:L4a31ef:{c.instructions+=4;NFSU2_TR(0x4a31ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a31f3:{NFSU2_TR(0x4a31f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a31f4:{NFSU2_TR(0x4a31f4);
w4(R+4,u32(0x836514ull));
}
B4a31f9:{NFSU2_TR(0x4a31f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a31feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a30a0u);}goto L4a30a0;}
}
B4a31fe:L4a31fe:{c.instructions+=5;NFSU2_TR(0x4a31fe);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4a3203:{NFSU2_TR(0x4a3203);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B4a3206:{NFSU2_TR(0x4a3206);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a3207:{NFSU2_TR(0x4a3207);
w4(R+12,u32(0x0ull));
}
B4a320c:{NFSU2_TR(0x4a320c);
if(r1(R+518)){{goto L4a3234;}}
}
B4a320e:L4a320e:{c.instructions+=2;NFSU2_TR(0x4a320e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4a320f:{NFSU2_TR(0x4a320f);
if(r1(R+518)){{goto L4a321e;}}
}
B4a3211:L4a3211:{c.instructions+=2;NFSU2_TR(0x4a3211);
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
B4a3212:{NFSU2_TR(0x4a3212);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3253;}}
}
B4a3214:L4a3214:{c.instructions+=4;NFSU2_TR(0x4a3214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a3216:{NFSU2_TR(0x4a3216);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3218:{NFSU2_TR(0x4a3218);
__builtin_memmove((R+4),(R+24),4);
}
B4a321a:{NFSU2_TR(0x4a321a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a321cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4a321c:L4a321c:{c.instructions+=1;NFSU2_TR(0x4a321c);
{goto L4a3253;}
}
B4a321e:L4a321e:{c.instructions+=6;NFSU2_TR(0x4a321e);
__builtin_memmove((R+4),gp(0x83651c),4);
}
B4a3224:{NFSU2_TR(0x4a3224);
__builtin_memmove((R+8),gp(0x836520),4);
}
B4a322a:{NFSU2_TR(0x4a322a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a322b:{NFSU2_TR(0x4a322b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a322c:{NFSU2_TR(0x4a322c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a322d:{NFSU2_TR(0x4a322d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3232ull));
TAIL_STATIC(0x537980u,537);
}
B4a3232:L4a3232:{c.instructions+=1;NFSU2_TR(0x4a3232);
{goto L4a3250;}
}
B4a3234:L4a3234:{c.instructions+=4;NFSU2_TR(0x4a3234);
__builtin_memmove((R+0),gp(0x83651c),4);
}
B4a3239:{NFSU2_TR(0x4a3239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a323a:{NFSU2_TR(0x4a323a);
u8 U[4];
w4(U+0,u32(0x251bf83eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a323f:{NFSU2_TR(0x4a323f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3244ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a3244:L4a3244:{c.instructions+=3;NFSU2_TR(0x4a3244);
__builtin_memmove((R+4),gp(0x836520),4);
}
B4a324a:{NFSU2_TR(0x4a324a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a324b:{NFSU2_TR(0x4a324b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3250ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a3250:L4a3250:{c.instructions+=1;NFSU2_TR(0x4a3250);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a3253:L4a3253:{c.instructions+=3;NFSU2_TR(0x4a3253);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4a3258:{NFSU2_TR(0x4a3258);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a325b:{NFSU2_TR(0x4a325b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a32a2;}}
}
B4a325d:L4a325d:{c.instructions+=3;NFSU2_TR(0x4a325d);
__builtin_memmove((R+0),gp(0x836524),4);
}
B4a3262:{NFSU2_TR(0x4a3262);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4a3264:{NFSU2_TR(0x4a3264);
if(r1(R+518)){{goto L4a3272;}}
}
B4a3266:L4a3266:{c.instructions+=3;NFSU2_TR(0x4a3266);
__builtin_memmove((R+8),gp(0x836528),4);
}
B4a326c:{NFSU2_TR(0x4a326c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a326d:{NFSU2_TR(0x4a326d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a326full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4a326f:L4a326f:{c.instructions+=1;NFSU2_TR(0x4a326f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3272:L4a3272:{c.instructions+=8;NFSU2_TR(0x4a3272);
__builtin_memmove(gp(0x836514),(R+12),4);
}
B4a3278:{NFSU2_TR(0x4a3278);
__builtin_memmove(gp(0x836520),(R+12),4);
}
B4a327e:{NFSU2_TR(0x4a327e);
__builtin_memmove(gp(0x83651c),(R+12),4);
}
B4a3284:{NFSU2_TR(0x4a3284);
__builtin_memmove(gp(0x836518),(R+12),4);
}
B4a328a:{NFSU2_TR(0x4a328a);
__builtin_memmove(gp(0x836524),(R+12),4);
}
B4a3290:{NFSU2_TR(0x4a3290);
__builtin_memmove(gp(0x836528),(R+12),4);
}
B4a3296:{NFSU2_TR(0x4a3296);
__builtin_memmove(gp(0x836530),(R+12),4);
}
B4a329c:{NFSU2_TR(0x4a329c);
__builtin_memmove(gp(0x836534),(R+12),4);
}
B4a32a2:L4a32a2:{c.instructions+=4;NFSU2_TR(0x4a32a2);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4a32a8:{NFSU2_TR(0x4a32a8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4a32aa:{NFSU2_TR(0x4a32aa);
__builtin_memmove(gp(0x83652c),(R+28),4);
}
B4a32b0:{NFSU2_TR(0x4a32b0);
if(r1(R+518)){{goto L4a32c2;}}
}
B4a32b2:L4a32b2:{c.instructions+=2;NFSU2_TR(0x4a32b2);
u8 U[5];
__builtin_memmove((U+3),gp(0x83653c),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4a32b8:{NFSU2_TR(0x4a32b8);
if(r1(R+518)){{goto L4a32c2;}}
}
B4a32ba:L4a32ba:{c.instructions+=4;NFSU2_TR(0x4a32ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a32bb:{NFSU2_TR(0x4a32bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a32bc:{NFSU2_TR(0x4a32bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a32bd:{NFSU2_TR(0x4a32bd);
TAIL_STATIC(0x54e6a0u,54e);
}
B4a32c2:L4a32c2:{c.instructions+=4;NFSU2_TR(0x4a32c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a32c3:{NFSU2_TR(0x4a32c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a32c4:{NFSU2_TR(0x4a32c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a32c5:{NFSU2_TR(0x4a32c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a32d0:L4a32d0:{c.instructions+=2;NFSU2_TR(0x4a32d0);
__builtin_memmove((R+0),gp(0x836538),4);
}
B4a32d5:{NFSU2_TR(0x4a32d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a32e0:L4a32e0:{c.instructions+=9;NFSU2_TR(0x4a32e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a32e1:{NFSU2_TR(0x4a32e1);
__builtin_memmove((R+24),(R+4),4);
}
B4a32e3:{NFSU2_TR(0x4a32e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a32e6:{NFSU2_TR(0x4a32e6);
__builtin_memmove((R+4),gp(0x7f4564),4);
}
B4a32ec:{NFSU2_TR(0x4a32ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a32ee:{NFSU2_TR(0x4a32ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a32f0:{NFSU2_TR(0x4a32f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a32f1:{NFSU2_TR(0x4a32f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a32f2:{NFSU2_TR(0x4a32f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a32f7ull));
TAIL_STATIC(0x555eb0u,555);
}
B4a32f7:L4a32f7:{c.instructions+=5;NFSU2_TR(0x4a32f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a32fa:{NFSU2_TR(0x4a32fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a32fd:{NFSU2_TR(0x4a32fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a32ff:{NFSU2_TR(0x4a32ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3300:{NFSU2_TR(0x4a3300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3305ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4a3305:L4a3305:{c.instructions+=3;NFSU2_TR(0x4a3305);
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
B4a3308:{NFSU2_TR(0x4a3308);
__builtin_memmove((R+4),(R+0),4);
}
B4a330a:{NFSU2_TR(0x4a330a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a330full));
TAIL_STATIC(0x5047e0u,504);
}
B4a330f:L4a330f:{c.instructions+=6;NFSU2_TR(0x4a330f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3312:{NFSU2_TR(0x4a3312);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3314:{NFSU2_TR(0x4a3314);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3319:{NFSU2_TR(0x4a3319);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a331e:{NFSU2_TR(0x4a331e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a331f:{NFSU2_TR(0x4a331f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3324ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3324:L4a3324:{c.instructions+=3;NFSU2_TR(0x4a3324);
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
B4a3327:{NFSU2_TR(0x4a3327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3328:{NFSU2_TR(0x4a3328);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3330:L4a3330:{c.instructions+=5;NFSU2_TR(0x4a3330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3331:{NFSU2_TR(0x4a3331);
__builtin_memmove((R+24),(R+4),4);
}
B4a3333:{NFSU2_TR(0x4a3333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3339:{NFSU2_TR(0x4a3339);
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
B4a333b:{NFSU2_TR(0x4a333b);
if(r1(R+518)){{goto L4a3397;}}
}
B4a333d:L4a333d:{c.instructions+=3;NFSU2_TR(0x4a333d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3340:{NFSU2_TR(0x4a3340);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3341:{NFSU2_TR(0x4a3341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3346ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a3346:L4a3346:{c.instructions+=6;NFSU2_TR(0x4a3346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3349:{NFSU2_TR(0x4a3349);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a334b:{NFSU2_TR(0x4a334b);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3350:{NFSU2_TR(0x4a3350);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3355:{NFSU2_TR(0x4a3355);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3356:{NFSU2_TR(0x4a3356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a335bull));
TAIL_STATIC(0x537c00u,537);
}
B4a335b:L4a335b:{c.instructions+=5;NFSU2_TR(0x4a335b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a335e:{NFSU2_TR(0x4a335e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4a3361:{NFSU2_TR(0x4a3361);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3366:{NFSU2_TR(0x4a3366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3367:{NFSU2_TR(0x4a3367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a336cull));
TAIL_STATIC(0x52cef0u,52c);
}
B4a336c:L4a336c:{c.instructions+=3;NFSU2_TR(0x4a336c);
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
B4a336f:{NFSU2_TR(0x4a336f);
__builtin_memmove((R+4),(R+0),4);
}
B4a3371:{NFSU2_TR(0x4a3371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3376ull));
TAIL_STATIC(0x5047e0u,504);
}
B4a3376:L4a3376:{c.instructions+=3;NFSU2_TR(0x4a3376);
u8 U[4];
w4(U+0,u32(0x790458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a337b:{NFSU2_TR(0x4a337b);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3380:{NFSU2_TR(0x4a3380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3385ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a3385:L4a3385:{c.instructions+=3;NFSU2_TR(0x4a3385);
u8 U[4];
w4(U+0,u32(0x790444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a338a:{NFSU2_TR(0x4a338a);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a338f:{NFSU2_TR(0x4a338f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3394ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a3394:L4a3394:{c.instructions+=1;NFSU2_TR(0x4a3394);
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
B4a3397:L4a3397:{c.instructions+=3;NFSU2_TR(0x4a3397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a33a1:{NFSU2_TR(0x4a33a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a33a2:{NFSU2_TR(0x4a33a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a33b0:L4a33b0:{c.instructions+=4;NFSU2_TR(0x4a33b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a33b3:{NFSU2_TR(0x4a33b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a33b4:{NFSU2_TR(0x4a33b4);
u8 U[4];
w4(U+0,u32(0x8867412dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a33b9:{NFSU2_TR(0x4a33b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a33beull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a33be:L4a33be:{c.instructions+=2;NFSU2_TR(0x4a33be);
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
B4a33c1:{NFSU2_TR(0x4a33c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a33d0:L4a33d0:{c.instructions+=3;NFSU2_TR(0x4a33d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a33d3:{NFSU2_TR(0x4a33d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a33d5:{NFSU2_TR(0x4a33d5);
if(r1(R+518)){{goto L4a3444;}}
}
B4a33d7:L4a33d7:{c.instructions+=3;NFSU2_TR(0x4a33d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a33db:{NFSU2_TR(0x4a33db);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a33e1:{NFSU2_TR(0x4a33e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a33eb;}}
}
B4a33e3:L4a33e3:{c.instructions+=2;NFSU2_TR(0x4a33e3);
w4(R+0,u32(0x8ull));
}
B4a33e8:{NFSU2_TR(0x4a33e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a33eb:L4a33eb:{c.instructions+=4;NFSU2_TR(0x4a33eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a33f1:{NFSU2_TR(0x4a33f1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4a33f2:{NFSU2_TR(0x4a33f2);
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
B4a33f5:{NFSU2_TR(0x4a33f5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a3444;}}
}
B4a33f7:L4a33f7:{c.instructions+=1;NFSU2_TR(0x4a33f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4a344cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a33fe:L4a33fe:{c.instructions+=4;NFSU2_TR(0x4a33fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3402:{NFSU2_TR(0x4a3402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3403:{NFSU2_TR(0x4a3403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3404:{NFSU2_TR(0x4a3404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3409ull));
TAIL_STATIC(0x50d210u,50d);
}
B4a3409:L4a3409:{c.instructions+=2;NFSU2_TR(0x4a3409);
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
B4a340c:{NFSU2_TR(0x4a340c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a340f:L4a340f:{c.instructions+=4;NFSU2_TR(0x4a340f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3413:{NFSU2_TR(0x4a3413);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3414:{NFSU2_TR(0x4a3414);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3415:{NFSU2_TR(0x4a3415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a341aull));
TAIL_STATIC(0x50d1f0u,50d);
}
B4a341a:L4a341a:{c.instructions+=2;NFSU2_TR(0x4a341a);
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
B4a341d:{NFSU2_TR(0x4a341d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3420:L4a3420:{c.instructions+=5;NFSU2_TR(0x4a3420);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3424:{NFSU2_TR(0x4a3424);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3426:{NFSU2_TR(0x4a3426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3427:{NFSU2_TR(0x4a3427);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3428:{NFSU2_TR(0x4a3428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a342dull));
TAIL_STATIC(0x50d1a0u,50d);
}
B4a342d:L4a342d:{c.instructions+=2;NFSU2_TR(0x4a342d);
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
B4a3430:{NFSU2_TR(0x4a3430);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3433:L4a3433:{c.instructions+=4;NFSU2_TR(0x4a3433);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3437:{NFSU2_TR(0x4a3437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3438:{NFSU2_TR(0x4a3438);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3439:{NFSU2_TR(0x4a3439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a343eull));
TAIL_STATIC(0x50d1d0u,50d);
}
B4a343e:L4a343e:{c.instructions+=2;NFSU2_TR(0x4a343e);
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
B4a3441:{NFSU2_TR(0x4a3441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3444:L4a3444:{c.instructions+=2;NFSU2_TR(0x4a3444);
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
B4a3446:{NFSU2_TR(0x4a3446);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3460:L4a3460:{c.instructions+=8;NFSU2_TR(0x4a3460);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a3464:{NFSU2_TR(0x4a3464);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3466:{NFSU2_TR(0x4a3466);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3467:{NFSU2_TR(0x4a3467);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a346b:{NFSU2_TR(0x4a346b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a346c:{NFSU2_TR(0x4a346c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a346d:{NFSU2_TR(0x4a346d);
__builtin_memmove((R+24),(R+4),4);
}
B4a346f:{NFSU2_TR(0x4a346f);
if(r1(R+518)){{goto L4a353a;}}
}
B4a3475:L4a3475:{c.instructions+=3;NFSU2_TR(0x4a3475);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a3479:{NFSU2_TR(0x4a3479);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a347b:{NFSU2_TR(0x4a347b);
if(r1(R+518)){{goto L4a3498;}}
}
B4a347d:L4a347d:{c.instructions+=5;NFSU2_TR(0x4a347d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a3484:{NFSU2_TR(0x4a3484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3487:{NFSU2_TR(0x4a3487);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3488:{NFSU2_TR(0x4a3488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3489:{NFSU2_TR(0x4a3489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a348eull));
TAIL_STATIC(0x5379c0u,537);
}
B4a348e:L4a348e:{c.instructions+=3;NFSU2_TR(0x4a348e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a348f:{NFSU2_TR(0x4a348f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3490:{NFSU2_TR(0x4a3490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3495ull));
TAIL_STATIC(0x537ab0u,537);
}
B4a3495:L4a3495:{c.instructions+=1;NFSU2_TR(0x4a3495);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a3498:L4a3498:{c.instructions+=8;NFSU2_TR(0x4a3498);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4a349f:{NFSU2_TR(0x4a349f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a34a2:{NFSU2_TR(0x4a34a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34a4:{NFSU2_TR(0x4a34a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4a34ab:{NFSU2_TR(0x4a34ab);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34b0:{NFSU2_TR(0x4a34b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34b1:{NFSU2_TR(0x4a34b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34b2:{NFSU2_TR(0x4a34b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a34b7ull));
TAIL_STATIC(0x537c00u,537);
}
B4a34b7:L4a34b7:{c.instructions+=8;NFSU2_TR(0x4a34b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a34be:{NFSU2_TR(0x4a34be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a34c1:{NFSU2_TR(0x4a34c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34c3:{NFSU2_TR(0x4a34c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B4a34ca:{NFSU2_TR(0x4a34ca);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34cf:{NFSU2_TR(0x4a34cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34d0:{NFSU2_TR(0x4a34d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34d1:{NFSU2_TR(0x4a34d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a34d6ull));
TAIL_STATIC(0x537c00u,537);
}
B4a34d6:L4a34d6:{c.instructions+=5;NFSU2_TR(0x4a34d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a34d8:{NFSU2_TR(0x4a34d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a34db:{NFSU2_TR(0x4a34db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34dc:{NFSU2_TR(0x4a34dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34dd:{NFSU2_TR(0x4a34dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a34e2ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a34e2:L4a34e2:{c.instructions+=2;NFSU2_TR(0x4a34e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34e3:{NFSU2_TR(0x4a34e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a34e8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a34e8:L4a34e8:{c.instructions+=5;NFSU2_TR(0x4a34e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a34ea:{NFSU2_TR(0x4a34ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a34ed:{NFSU2_TR(0x4a34ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34ee:{NFSU2_TR(0x4a34ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34ef:{NFSU2_TR(0x4a34ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a34f4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a34f4:L4a34f4:{c.instructions+=2;NFSU2_TR(0x4a34f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a34f5:{NFSU2_TR(0x4a34f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a34faull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a34fa:L4a34fa:{c.instructions+=5;NFSU2_TR(0x4a34fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a34fc:{NFSU2_TR(0x4a34fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a34ff:{NFSU2_TR(0x4a34ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3500:{NFSU2_TR(0x4a3500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3501:{NFSU2_TR(0x4a3501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3506ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3506:L4a3506:{c.instructions+=10;NFSU2_TR(0x4a3506);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3509:{NFSU2_TR(0x4a3509);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a350c:{NFSU2_TR(0x4a350c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfbffffffull))));
}
B4a3512:{NFSU2_TR(0x4a3512);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3514:{NFSU2_TR(0x4a3514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a3516:{NFSU2_TR(0x4a3516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a3519:{NFSU2_TR(0x4a3519);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4a351c:{NFSU2_TR(0x4a351c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a351d:{NFSU2_TR(0x4a351d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a351e:{NFSU2_TR(0x4a351e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3523ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3523:L4a3523:{c.instructions+=9;NFSU2_TR(0x4a3523);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3526:{NFSU2_TR(0x4a3526);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3529:{NFSU2_TR(0x4a3529);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a352c:{NFSU2_TR(0x4a352c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a352d:{NFSU2_TR(0x4a352d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfbffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a3533:{NFSU2_TR(0x4a3533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3534:{NFSU2_TR(0x4a3534);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3536:{NFSU2_TR(0x4a3536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a3537:{NFSU2_TR(0x4a3537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a353a:L4a353a:{c.instructions+=6;NFSU2_TR(0x4a353a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a3541:{NFSU2_TR(0x4a3541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3544:{NFSU2_TR(0x4a3544);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4a354b:{NFSU2_TR(0x4a354b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a354c:{NFSU2_TR(0x4a354c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a354d:{NFSU2_TR(0x4a354d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3552ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3552:L4a3552:{c.instructions+=2;NFSU2_TR(0x4a3552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3553:{NFSU2_TR(0x4a3553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3558ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3558:L4a3558:{c.instructions+=6;NFSU2_TR(0x4a3558);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a355f:{NFSU2_TR(0x4a355f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3562:{NFSU2_TR(0x4a3562);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B4a3569:{NFSU2_TR(0x4a3569);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a356a:{NFSU2_TR(0x4a356a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a356b:{NFSU2_TR(0x4a356b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3570ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3570:L4a3570:{c.instructions+=2;NFSU2_TR(0x4a3570);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3571:{NFSU2_TR(0x4a3571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3576ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3576:L4a3576:{c.instructions+=5;NFSU2_TR(0x4a3576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4a3578:{NFSU2_TR(0x4a3578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a357b:{NFSU2_TR(0x4a357b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a357c:{NFSU2_TR(0x4a357c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a357d:{NFSU2_TR(0x4a357d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3582ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3582:L4a3582:{c.instructions+=9;NFSU2_TR(0x4a3582);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3585:{NFSU2_TR(0x4a3585);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3588:{NFSU2_TR(0x4a3588);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000000ull))));
}
B4a358e:{NFSU2_TR(0x4a358e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3590:{NFSU2_TR(0x4a3590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a3592:{NFSU2_TR(0x4a3592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a3595:{NFSU2_TR(0x4a3595);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3596:{NFSU2_TR(0x4a3596);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3597:{NFSU2_TR(0x4a3597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a359cull));
TAIL_STATIC(0x5379c0u,537);
}
B4a359c:L4a359c:{c.instructions+=9;NFSU2_TR(0x4a359c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a359f:{NFSU2_TR(0x4a359f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a35a2:{NFSU2_TR(0x4a35a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a35a5:{NFSU2_TR(0x4a35a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a35a6:{NFSU2_TR(0x4a35a6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a35ac:{NFSU2_TR(0x4a35ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a35ad:{NFSU2_TR(0x4a35ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a35af:{NFSU2_TR(0x4a35af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a35b0:{NFSU2_TR(0x4a35b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a35c0:L4a35c0:{c.instructions+=8;NFSU2_TR(0x4a35c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35c1:{NFSU2_TR(0x4a35c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a35c5:{NFSU2_TR(0x4a35c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a35c7:{NFSU2_TR(0x4a35c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35c8:{NFSU2_TR(0x4a35c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35c9:{NFSU2_TR(0x4a35c9);
__builtin_memmove((R+24),(R+4),4);
}
B4a35cb:{NFSU2_TR(0x4a35cb);
w4(R+28,u32(0x2ull));
}
B4a35d0:{NFSU2_TR(0x4a35d0);
if(r1(R+518)){{goto L4a364e;}}
}
B4a35d2:L4a35d2:{c.instructions+=4;NFSU2_TR(0x4a35d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35d4:{NFSU2_TR(0x4a35d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35d6:{NFSU2_TR(0x4a35d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35d8:{NFSU2_TR(0x4a35d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a35ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a35dd:L4a35dd:{c.instructions+=5;NFSU2_TR(0x4a35dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35df:{NFSU2_TR(0x4a35df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35e1:{NFSU2_TR(0x4a35e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35e3:{NFSU2_TR(0x4a35e3);
__builtin_memmove((R+4),(R+24),4);
}
B4a35e5:{NFSU2_TR(0x4a35e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a35eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a35ea:L4a35ea:{c.instructions+=5;NFSU2_TR(0x4a35ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35ec:{NFSU2_TR(0x4a35ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35ee:{NFSU2_TR(0x4a35ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35ef:{NFSU2_TR(0x4a35ef);
__builtin_memmove((R+4),(R+24),4);
}
B4a35f1:{NFSU2_TR(0x4a35f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a35f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a35f6:L4a35f6:{c.instructions+=6;NFSU2_TR(0x4a35f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a35fa:{NFSU2_TR(0x4a35fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35fb:{NFSU2_TR(0x4a35fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35fd:{NFSU2_TR(0x4a35fd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a35ff:{NFSU2_TR(0x4a35ff);
__builtin_memmove((R+4),(R+24),4);
}
B4a3601:{NFSU2_TR(0x4a3601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3606ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3606:L4a3606:{c.instructions+=6;NFSU2_TR(0x4a3606);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a360a:{NFSU2_TR(0x4a360a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a360b:{NFSU2_TR(0x4a360b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a360d:{NFSU2_TR(0x4a360d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a360f:{NFSU2_TR(0x4a360f);
__builtin_memmove((R+4),(R+24),4);
}
B4a3611:{NFSU2_TR(0x4a3611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3616ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3616:L4a3616:{c.instructions+=5;NFSU2_TR(0x4a3616);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3617:{NFSU2_TR(0x4a3617);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3619:{NFSU2_TR(0x4a3619);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a361b:{NFSU2_TR(0x4a361b);
__builtin_memmove((R+4),(R+24),4);
}
B4a361d:{NFSU2_TR(0x4a361d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3622ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3622:L4a3622:{c.instructions+=5;NFSU2_TR(0x4a3622);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3625:{NFSU2_TR(0x4a3625);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a362a:{NFSU2_TR(0x4a362a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a362b:{NFSU2_TR(0x4a362b);
w4(R+28,u32(0x3ull));
}
B4a3630:{NFSU2_TR(0x4a3630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3635ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4a3635:L4a3635:{c.instructions+=3;NFSU2_TR(0x4a3635);
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
B4a3638:{NFSU2_TR(0x4a3638);
__builtin_memmove((R+4),(R+0),4);
}
B4a363a:{NFSU2_TR(0x4a363a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a363full));
TAIL_STATIC(0x5047e0u,504);
}
B4a363f:L4a363f:{c.instructions+=2;NFSU2_TR(0x4a363f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a3649:{NFSU2_TR(0x4a3649);
{goto L4a375f;}
}
B4a364e:L4a364e:{c.instructions+=3;NFSU2_TR(0x4a364e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3652:{NFSU2_TR(0x4a3652);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3654:{NFSU2_TR(0x4a3654);
if(r1(R+518)){{goto L4a36ce;}}
}
B4a3656:L4a3656:{c.instructions+=5;NFSU2_TR(0x4a3656);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3657:{NFSU2_TR(0x4a3657);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3659:{NFSU2_TR(0x4a3659);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a365b:{NFSU2_TR(0x4a365b);
__builtin_memmove((R+4),(R+24),4);
}
B4a365d:{NFSU2_TR(0x4a365d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3662ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3662:L4a3662:{c.instructions+=6;NFSU2_TR(0x4a3662);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3666:{NFSU2_TR(0x4a3666);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3667:{NFSU2_TR(0x4a3667);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3669:{NFSU2_TR(0x4a3669);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a366b:{NFSU2_TR(0x4a366b);
__builtin_memmove((R+4),(R+24),4);
}
B4a366d:{NFSU2_TR(0x4a366d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3672ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3672:L4a3672:{c.instructions+=5;NFSU2_TR(0x4a3672);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3674:{NFSU2_TR(0x4a3674);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3676:{NFSU2_TR(0x4a3676);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3678:{NFSU2_TR(0x4a3678);
__builtin_memmove((R+4),(R+24),4);
}
B4a367a:{NFSU2_TR(0x4a367a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a367full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a367f:L4a367f:{c.instructions+=5;NFSU2_TR(0x4a367f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3681:{NFSU2_TR(0x4a3681);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3683:{NFSU2_TR(0x4a3683);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3685:{NFSU2_TR(0x4a3685);
__builtin_memmove((R+4),(R+24),4);
}
B4a3687:{NFSU2_TR(0x4a3687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a368cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a368c:L4a368c:{c.instructions+=5;NFSU2_TR(0x4a368c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a368e:{NFSU2_TR(0x4a368e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3690:{NFSU2_TR(0x4a3690);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3692:{NFSU2_TR(0x4a3692);
__builtin_memmove((R+4),(R+24),4);
}
B4a3694:{NFSU2_TR(0x4a3694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3699ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3699:L4a3699:{c.instructions+=5;NFSU2_TR(0x4a3699);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a369b:{NFSU2_TR(0x4a369b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a369d:{NFSU2_TR(0x4a369d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a369f:{NFSU2_TR(0x4a369f);
__builtin_memmove((R+4),(R+24),4);
}
B4a36a1:{NFSU2_TR(0x4a36a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a36a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a36a6:L4a36a6:{c.instructions+=5;NFSU2_TR(0x4a36a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a36a9:{NFSU2_TR(0x4a36a9);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36ae:{NFSU2_TR(0x4a36ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36af:{NFSU2_TR(0x4a36af);
w4(R+28,u32(0x1ull));
}
B4a36b4:{NFSU2_TR(0x4a36b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a36b9ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4a36b9:L4a36b9:{c.instructions+=3;NFSU2_TR(0x4a36b9);
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
B4a36bc:{NFSU2_TR(0x4a36bc);
__builtin_memmove((R+4),(R+0),4);
}
B4a36be:{NFSU2_TR(0x4a36be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a36c3ull));
TAIL_STATIC(0x5047e0u,504);
}
B4a36c3:L4a36c3:{c.instructions+=2;NFSU2_TR(0x4a36c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a36c9:{NFSU2_TR(0x4a36c9);
{goto L4a375f;}
}
B4a36ce:L4a36ce:{c.instructions+=3;NFSU2_TR(0x4a36ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a36d2:{NFSU2_TR(0x4a36d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a36d4:{NFSU2_TR(0x4a36d4);
if(r1(R+518)){{goto L4a375f;}}
}
B4a36da:L4a36da:{c.instructions+=5;NFSU2_TR(0x4a36da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36dc:{NFSU2_TR(0x4a36dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36de:{NFSU2_TR(0x4a36de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36e0:{NFSU2_TR(0x4a36e0);
__builtin_memmove((R+4),(R+24),4);
}
B4a36e2:{NFSU2_TR(0x4a36e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a36e7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a36e7:L4a36e7:{c.instructions+=5;NFSU2_TR(0x4a36e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36e9:{NFSU2_TR(0x4a36e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36eb:{NFSU2_TR(0x4a36eb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36ed:{NFSU2_TR(0x4a36ed);
__builtin_memmove((R+4),(R+24),4);
}
B4a36ef:{NFSU2_TR(0x4a36ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a36f4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a36f4:L4a36f4:{c.instructions+=5;NFSU2_TR(0x4a36f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36f5:{NFSU2_TR(0x4a36f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36f7:{NFSU2_TR(0x4a36f7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a36f9:{NFSU2_TR(0x4a36f9);
__builtin_memmove((R+4),(R+24),4);
}
B4a36fb:{NFSU2_TR(0x4a36fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3700ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3700:L4a3700:{c.instructions+=5;NFSU2_TR(0x4a3700);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3702:{NFSU2_TR(0x4a3702);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3704:{NFSU2_TR(0x4a3704);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3706:{NFSU2_TR(0x4a3706);
__builtin_memmove((R+4),(R+24),4);
}
B4a3708:{NFSU2_TR(0x4a3708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a370dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a370d:L4a370d:{c.instructions+=5;NFSU2_TR(0x4a370d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a370f:{NFSU2_TR(0x4a370f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3711:{NFSU2_TR(0x4a3711);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3713:{NFSU2_TR(0x4a3713);
__builtin_memmove((R+4),(R+24),4);
}
B4a3715:{NFSU2_TR(0x4a3715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a371aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a371a:L4a371a:{c.instructions+=5;NFSU2_TR(0x4a371a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a371c:{NFSU2_TR(0x4a371c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a371e:{NFSU2_TR(0x4a371e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3720:{NFSU2_TR(0x4a3720);
__builtin_memmove((R+4),(R+24),4);
}
B4a3722:{NFSU2_TR(0x4a3722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3727ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3727:L4a3727:{c.instructions+=5;NFSU2_TR(0x4a3727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a372a:{NFSU2_TR(0x4a372a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a372f:{NFSU2_TR(0x4a372f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3730:{NFSU2_TR(0x4a3730);
w4(R+28,u32(0x2ull));
}
B4a3735:{NFSU2_TR(0x4a3735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a373aull));
TAIL_STATIC(0x52cef0u,52c);
}
B4a373a:L4a373a:{c.instructions+=3;NFSU2_TR(0x4a373a);
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
B4a373d:{NFSU2_TR(0x4a373d);
__builtin_memmove((R+4),(R+0),4);
}
B4a373f:{NFSU2_TR(0x4a373f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3744ull));
TAIL_STATIC(0x5047e0u,504);
}
B4a3744:L4a3744:{c.instructions+=4;NFSU2_TR(0x4a3744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3747:{NFSU2_TR(0x4a3747);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a374c:{NFSU2_TR(0x4a374c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a374d:{NFSU2_TR(0x4a374d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3752ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3752:L4a3752:{c.instructions+=2;NFSU2_TR(0x4a3752);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3755:{NFSU2_TR(0x4a3755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a375f:L4a375f:{c.instructions+=5;NFSU2_TR(0x4a375f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a3766:{NFSU2_TR(0x4a3766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3769:{NFSU2_TR(0x4a3769);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a376a:{NFSU2_TR(0x4a376a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a376b:{NFSU2_TR(0x4a376b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3770ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4a3770:L4a3770:{c.instructions+=7;NFSU2_TR(0x4a3770);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a3777:{NFSU2_TR(0x4a3777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a377a:{NFSU2_TR(0x4a377a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a377c:{NFSU2_TR(0x4a377c);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3781:{NFSU2_TR(0x4a3781);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3782:{NFSU2_TR(0x4a3782);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3783:{NFSU2_TR(0x4a3783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3788ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3788:L4a3788:{c.instructions+=7;NFSU2_TR(0x4a3788);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4a378f:{NFSU2_TR(0x4a378f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3792:{NFSU2_TR(0x4a3792);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3794:{NFSU2_TR(0x4a3794);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3799:{NFSU2_TR(0x4a3799);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a379a:{NFSU2_TR(0x4a379a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a379b:{NFSU2_TR(0x4a379b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a37a0ull));
TAIL_STATIC(0x537c00u,537);
}
B4a37a0:L4a37a0:{c.instructions+=9;NFSU2_TR(0x4a37a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a37a3:{NFSU2_TR(0x4a37a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a37a7:{NFSU2_TR(0x4a37a7);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4a37ac:{NFSU2_TR(0x4a37ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a37ad:{NFSU2_TR(0x4a37ad);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a37b2:{NFSU2_TR(0x4a37b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a37b3:{NFSU2_TR(0x4a37b3);
__builtin_memmove(gp(0x836514),(R+0),4);
}
B4a37b8:{NFSU2_TR(0x4a37b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a37b9:{NFSU2_TR(0x4a37b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a37c0:L4a37c0:{c.instructions+=5;NFSU2_TR(0x4a37c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a37c4:{NFSU2_TR(0x4a37c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a37c6:{NFSU2_TR(0x4a37c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37c7:{NFSU2_TR(0x4a37c7);
__builtin_memmove((R+28),(R+4),4);
}
B4a37c9:{NFSU2_TR(0x4a37c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a385b;}}
}
B4a37cf:L4a37cf:{c.instructions+=5;NFSU2_TR(0x4a37cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a37d2:{NFSU2_TR(0x4a37d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37d3:{NFSU2_TR(0x4a37d3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37d8:{NFSU2_TR(0x4a37d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37d9:{NFSU2_TR(0x4a37d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a37deull));
TAIL_STATIC(0x537be0u,537);
}
B4a37de:L4a37de:{c.instructions+=2;NFSU2_TR(0x4a37de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a37e1:{NFSU2_TR(0x4a37e1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a37e3:L4a37e3:{c.instructions+=5;NFSU2_TR(0x4a37e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a37e9:{NFSU2_TR(0x4a37e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a37ec:{NFSU2_TR(0x4a37ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37ed:{NFSU2_TR(0x4a37ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37ee:{NFSU2_TR(0x4a37ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a37f3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a37f3:L4a37f3:{c.instructions+=2;NFSU2_TR(0x4a37f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a37f4:{NFSU2_TR(0x4a37f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a37f9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a37f9:L4a37f9:{c.instructions+=5;NFSU2_TR(0x4a37f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a37ff:{NFSU2_TR(0x4a37ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3802:{NFSU2_TR(0x4a3802);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3803:{NFSU2_TR(0x4a3803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3804:{NFSU2_TR(0x4a3804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3809ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3809:L4a3809:{c.instructions+=2;NFSU2_TR(0x4a3809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a380a:{NFSU2_TR(0x4a380a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a380full));
TAIL_STATIC(0x50ca00u,50c);
}
B4a380f:L4a380f:{c.instructions+=5;NFSU2_TR(0x4a380f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3815:{NFSU2_TR(0x4a3815);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3818:{NFSU2_TR(0x4a3818);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3819:{NFSU2_TR(0x4a3819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a381a:{NFSU2_TR(0x4a381a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a381full));
TAIL_STATIC(0x5379c0u,537);
}
B4a381f:L4a381f:{c.instructions+=9;NFSU2_TR(0x4a381f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3822:{NFSU2_TR(0x4a3822);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3825:{NFSU2_TR(0x4a3825);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a382b:{NFSU2_TR(0x4a382b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a382d:{NFSU2_TR(0x4a382d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3833:{NFSU2_TR(0x4a3833);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3836:{NFSU2_TR(0x4a3836);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3837:{NFSU2_TR(0x4a3837);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3838:{NFSU2_TR(0x4a3838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a383dull));
TAIL_STATIC(0x5379c0u,537);
}
B4a383d:L4a383d:{c.instructions+=8;NFSU2_TR(0x4a383d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3840:{NFSU2_TR(0x4a3840);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3843:{NFSU2_TR(0x4a3843);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3849:{NFSU2_TR(0x4a3849);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a384c:{NFSU2_TR(0x4a384c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a384f:{NFSU2_TR(0x4a384f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a3852:{NFSU2_TR(0x4a3852);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3854:{NFSU2_TR(0x4a3854);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a37e3u);}goto L4a37e3;}}
}
B4a3856:L4a3856:{c.instructions+=3;NFSU2_TR(0x4a3856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3857:{NFSU2_TR(0x4a3857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a3858:{NFSU2_TR(0x4a3858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a385b:L4a385b:{c.instructions+=4;NFSU2_TR(0x4a385b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a385c:{NFSU2_TR(0x4a385c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a385f:{NFSU2_TR(0x4a385f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3860:{NFSU2_TR(0x4a3860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3865ull));
TAIL_STATIC(0x537ab0u,537);
}
B4a3865:L4a3865:{c.instructions+=10;NFSU2_TR(0x4a3865);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3868:{NFSU2_TR(0x4a3868);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a386b:{NFSU2_TR(0x4a386b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a386d:{NFSU2_TR(0x4a386d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2ull))));
}
B4a3870:{NFSU2_TR(0x4a3870);
u8 U[4];
w4(U+0,u32(0x790470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3875:{NFSU2_TR(0x4a3875);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a3878:{NFSU2_TR(0x4a3878);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a387b:{NFSU2_TR(0x4a387b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3880:{NFSU2_TR(0x4a3880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3881:{NFSU2_TR(0x4a3881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3886ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3886:L4a3886:{c.instructions+=3;NFSU2_TR(0x4a3886);
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
B4a3889:{NFSU2_TR(0x4a3889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a388a:{NFSU2_TR(0x4a388a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3890:L4a3890:{c.instructions+=13;NFSU2_TR(0x4a3890);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3894:{NFSU2_TR(0x4a3894);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3895:{NFSU2_TR(0x4a3895);
__builtin_memmove((R+24),gp(0x836514),4);
}
B4a389b:{NFSU2_TR(0x4a389b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a389c:{NFSU2_TR(0x4a389c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
}
B4a38a1:{NFSU2_TR(0x4a38a1);
__builtin_memmove((R+28),(R+4),4);
}
B4a38a3:{NFSU2_TR(0x4a38a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a38a7:{NFSU2_TR(0x4a38a7);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B4a38a9:{NFSU2_TR(0x4a38a9);
__builtin_memmove(gp(0x836514),(R+24),4);
}
B4a38af:{NFSU2_TR(0x4a38af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a38b2:{NFSU2_TR(0x4a38b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38b3:{NFSU2_TR(0x4a38b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38b4:{NFSU2_TR(0x4a38b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a38b9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a38b9:L4a38b9:{c.instructions+=5;NFSU2_TR(0x4a38b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a38bd:{NFSU2_TR(0x4a38bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a38c0:{NFSU2_TR(0x4a38c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38c1:{NFSU2_TR(0x4a38c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38c2:{NFSU2_TR(0x4a38c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a38c7ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a38c7:L4a38c7:{c.instructions+=5;NFSU2_TR(0x4a38c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a38cb:{NFSU2_TR(0x4a38cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a38ce:{NFSU2_TR(0x4a38ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38cf:{NFSU2_TR(0x4a38cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38d0:{NFSU2_TR(0x4a38d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a38d5ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a38d5:L4a38d5:{c.instructions+=3;NFSU2_TR(0x4a38d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4a38d8:{NFSU2_TR(0x4a38d8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a38da:{NFSU2_TR(0x4a38da);
__builtin_memmove((R+12),(R+12),4);
}
B4a38e0:L4a38e0:{c.instructions+=5;NFSU2_TR(0x4a38e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a38e6:{NFSU2_TR(0x4a38e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a38e9:{NFSU2_TR(0x4a38e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38ea:{NFSU2_TR(0x4a38ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38eb:{NFSU2_TR(0x4a38eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a38f0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a38f0:L4a38f0:{c.instructions+=2;NFSU2_TR(0x4a38f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a38f1:{NFSU2_TR(0x4a38f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a38f6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a38f6:L4a38f6:{c.instructions+=5;NFSU2_TR(0x4a38f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a38fc:{NFSU2_TR(0x4a38fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a38ff:{NFSU2_TR(0x4a38ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3900:{NFSU2_TR(0x4a3900);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3901:{NFSU2_TR(0x4a3901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3906ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3906:L4a3906:{c.instructions+=2;NFSU2_TR(0x4a3906);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3907:{NFSU2_TR(0x4a3907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a390cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a390c:L4a390c:{c.instructions+=5;NFSU2_TR(0x4a390c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3912:{NFSU2_TR(0x4a3912);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3915:{NFSU2_TR(0x4a3915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3916:{NFSU2_TR(0x4a3916);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3917:{NFSU2_TR(0x4a3917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a391cull));
TAIL_STATIC(0x5379c0u,537);
}
B4a391c:L4a391c:{c.instructions+=9;NFSU2_TR(0x4a391c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a391f:{NFSU2_TR(0x4a391f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3922:{NFSU2_TR(0x4a3922);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3928:{NFSU2_TR(0x4a3928);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a392a:{NFSU2_TR(0x4a392a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3930:{NFSU2_TR(0x4a3930);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3933:{NFSU2_TR(0x4a3933);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3934:{NFSU2_TR(0x4a3934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3935:{NFSU2_TR(0x4a3935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a393aull));
TAIL_STATIC(0x5379c0u,537);
}
B4a393a:L4a393a:{c.instructions+=8;NFSU2_TR(0x4a393a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a393d:{NFSU2_TR(0x4a393d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3940:{NFSU2_TR(0x4a3940);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3946:{NFSU2_TR(0x4a3946);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a3949:{NFSU2_TR(0x4a3949);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a394c:{NFSU2_TR(0x4a394c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a394f:{NFSU2_TR(0x4a394f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3951:{NFSU2_TR(0x4a3951);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a38e0u);}goto L4a38e0;}}
}
B4a3953:L4a3953:{c.instructions+=5;NFSU2_TR(0x4a3953);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3955:{NFSU2_TR(0x4a3955);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3957:{NFSU2_TR(0x4a3957);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3959:{NFSU2_TR(0x4a3959);
__builtin_memmove((R+4),(R+28),4);
}
B4a395b:{NFSU2_TR(0x4a395b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3960ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3960:L4a3960:{c.instructions+=5;NFSU2_TR(0x4a3960);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3962:{NFSU2_TR(0x4a3962);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3964:{NFSU2_TR(0x4a3964);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3966:{NFSU2_TR(0x4a3966);
__builtin_memmove((R+4),(R+28),4);
}
B4a3968:{NFSU2_TR(0x4a3968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a396dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a396d:L4a396d:{c.instructions+=6;NFSU2_TR(0x4a396d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3970:{NFSU2_TR(0x4a3970);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3972:{NFSU2_TR(0x4a3972);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3977:{NFSU2_TR(0x4a3977);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a397c:{NFSU2_TR(0x4a397c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a397d:{NFSU2_TR(0x4a397d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3982ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3982:L4a3982:{c.instructions+=6;NFSU2_TR(0x4a3982);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3985:{NFSU2_TR(0x4a3985);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3987:{NFSU2_TR(0x4a3987);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a398c:{NFSU2_TR(0x4a398c);
u8 U[4];
w4(U+0,u32(0xb1000cc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3991:{NFSU2_TR(0x4a3991);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3992:{NFSU2_TR(0x4a3992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3997ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3997:L4a3997:{c.instructions+=4;NFSU2_TR(0x4a3997);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a399a:{NFSU2_TR(0x4a399a);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a399f:{NFSU2_TR(0x4a399f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39a0:{NFSU2_TR(0x4a39a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a39a5ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4a39a5:L4a39a5:{c.instructions+=6;NFSU2_TR(0x4a39a5);
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
B4a39a8:{NFSU2_TR(0x4a39a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a39ac:{NFSU2_TR(0x4a39ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a39b6:{NFSU2_TR(0x4a39b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a39b7:{NFSU2_TR(0x4a39b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a39b8:{NFSU2_TR(0x4a39b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a39c0:L4a39c0:{c.instructions+=13;NFSU2_TR(0x4a39c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a39c4:{NFSU2_TR(0x4a39c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39c5:{NFSU2_TR(0x4a39c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39c6:{NFSU2_TR(0x4a39c6);
__builtin_memmove((R+28),gp(0x836514),4);
}
B4a39cc:{NFSU2_TR(0x4a39cc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf000000ull))));
}
B4a39d1:{NFSU2_TR(0x4a39d1);
__builtin_memmove((R+24),(R+4),4);
}
B4a39d3:{NFSU2_TR(0x4a39d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a39d7:{NFSU2_TR(0x4a39d7);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4a39d9:{NFSU2_TR(0x4a39d9);
__builtin_memmove(gp(0x836514),(R+28),4);
}
B4a39df:{NFSU2_TR(0x4a39df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a39e2:{NFSU2_TR(0x4a39e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39e3:{NFSU2_TR(0x4a39e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39e4:{NFSU2_TR(0x4a39e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a39e9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a39e9:L4a39e9:{c.instructions+=7;NFSU2_TR(0x4a39e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a39ed:{NFSU2_TR(0x4a39ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a39f0:{NFSU2_TR(0x4a39f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a39f3:{NFSU2_TR(0x4a39f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39f4:{NFSU2_TR(0x4a39f4);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39f9:{NFSU2_TR(0x4a39f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a39fa:{NFSU2_TR(0x4a39fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a39ffull));
TAIL_STATIC(0x537a10u,537);
}
B4a39ff:L4a39ff:{c.instructions+=3;NFSU2_TR(0x4a39ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3a02:{NFSU2_TR(0x4a3a02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a03:{NFSU2_TR(0x4a3a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a08ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a3a08:L4a3a08:{c.instructions+=3;NFSU2_TR(0x4a3a08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3a0b:{NFSU2_TR(0x4a3a0b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a3a0d:{NFSU2_TR(0x4a3a0d);
__builtin_memmove((R+4),(R+4),4);
}
B4a3a10:L4a3a10:{c.instructions+=2;NFSU2_TR(0x4a3a10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a3a13:{NFSU2_TR(0x4a3a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3a23;}}
}
B4a3a15:L4a3a15:{c.instructions+=5;NFSU2_TR(0x4a3a15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a17:{NFSU2_TR(0x4a3a17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a19:{NFSU2_TR(0x4a3a19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a1a:{NFSU2_TR(0x4a3a1a);
__builtin_memmove((R+4),(R+24),4);
}
B4a3a1c:{NFSU2_TR(0x4a3a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a21ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3460u);}goto L4a3460;}
}
B4a3a21:L4a3a21:{c.instructions+=1;NFSU2_TR(0x4a3a21);
{goto L4a3a92;}
}
B4a3a23:L4a3a23:{c.instructions+=5;NFSU2_TR(0x4a3a23);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a3a2a:{NFSU2_TR(0x4a3a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3a2d:{NFSU2_TR(0x4a3a2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a2e:{NFSU2_TR(0x4a3a2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a2f:{NFSU2_TR(0x4a3a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a34ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3a34:L4a3a34:{c.instructions+=2;NFSU2_TR(0x4a3a34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a35:{NFSU2_TR(0x4a3a35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a3aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3a3a:L4a3a3a:{c.instructions+=5;NFSU2_TR(0x4a3a3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a3a41:{NFSU2_TR(0x4a3a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3a44:{NFSU2_TR(0x4a3a44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a45:{NFSU2_TR(0x4a3a45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a46:{NFSU2_TR(0x4a3a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a4bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3a4b:L4a3a4b:{c.instructions+=2;NFSU2_TR(0x4a3a4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a4c:{NFSU2_TR(0x4a3a4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a51ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3a51:L4a3a51:{c.instructions+=5;NFSU2_TR(0x4a3a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4a3a58:{NFSU2_TR(0x4a3a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3a5b:{NFSU2_TR(0x4a3a5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a5c:{NFSU2_TR(0x4a3a5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a5d:{NFSU2_TR(0x4a3a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a62ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3a62:L4a3a62:{c.instructions+=9;NFSU2_TR(0x4a3a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3a65:{NFSU2_TR(0x4a3a65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3a68:{NFSU2_TR(0x4a3a68);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000000ull))));
}
B4a3a6e:{NFSU2_TR(0x4a3a6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3a70:{NFSU2_TR(0x4a3a70);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x78dfd4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4a3a77:{NFSU2_TR(0x4a3a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3a7a:{NFSU2_TR(0x4a3a7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a7b:{NFSU2_TR(0x4a3a7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3a7c:{NFSU2_TR(0x4a3a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3a81ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3a81:L4a3a81:{c.instructions+=5;NFSU2_TR(0x4a3a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3a84:{NFSU2_TR(0x4a3a84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3a87:{NFSU2_TR(0x4a3a87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a3a8a:{NFSU2_TR(0x4a3a8a);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x4000000ull))));
}
B4a3a90:{NFSU2_TR(0x4a3a90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3a92:L4a3a92:{c.instructions+=3;NFSU2_TR(0x4a3a92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4a3a93:{NFSU2_TR(0x4a3a93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a3a96:{NFSU2_TR(0x4a3a96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3a10u);}goto L4a3a10;}}
}
B4a3a9c:L4a3a9c:{c.instructions+=6;NFSU2_TR(0x4a3a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3a9f:{NFSU2_TR(0x4a3a9f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3aa1:{NFSU2_TR(0x4a3aa1);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3aa6:{NFSU2_TR(0x4a3aa6);
u8 U[4];
w4(U+0,u32(0xb1000cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3aab:{NFSU2_TR(0x4a3aab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3aac:{NFSU2_TR(0x4a3aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ab1ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3ab1:L4a3ab1:{c.instructions+=6;NFSU2_TR(0x4a3ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3ab4:{NFSU2_TR(0x4a3ab4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ab6:{NFSU2_TR(0x4a3ab6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3abb:{NFSU2_TR(0x4a3abb);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ac0:{NFSU2_TR(0x4a3ac0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ac1:{NFSU2_TR(0x4a3ac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ac6ull));
TAIL_STATIC(0x537c00u,537);
}
B4a3ac6:L4a3ac6:{c.instructions+=4;NFSU2_TR(0x4a3ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3ac9:{NFSU2_TR(0x4a3ac9);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ace:{NFSU2_TR(0x4a3ace);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3acf:{NFSU2_TR(0x4a3acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ad4ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4a3ad4:L4a3ad4:{c.instructions+=5;NFSU2_TR(0x4a3ad4);
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
B4a3ad7:{NFSU2_TR(0x4a3ad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a3ad8:{NFSU2_TR(0x4a3ad8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a3adc:{NFSU2_TR(0x4a3adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3add:{NFSU2_TR(0x4a3add);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3ae0:L4a3ae0:{c.instructions+=6;NFSU2_TR(0x4a3ae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ae1:{NFSU2_TR(0x4a3ae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a3ae5:{NFSU2_TR(0x4a3ae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ae6:{NFSU2_TR(0x4a3ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ae7:{NFSU2_TR(0x4a3ae7);
__builtin_memmove((R+28),(R+4),4);
}
B4a3ae9:{NFSU2_TR(0x4a3ae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3aeeull));
TAIL_STATIC(0x50c9e0u,50c);
}
B4a3aee:L4a3aee:{c.instructions+=3;NFSU2_TR(0x4a3aee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3af1:{NFSU2_TR(0x4a3af1);
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
B4a3af3:{NFSU2_TR(0x4a3af3);
if(r1(R+518)){{goto L4a3be5;}}
}
B4a3af9:L4a3af9:{c.instructions+=3;NFSU2_TR(0x4a3af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3afc:{NFSU2_TR(0x4a3afc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3b01:{NFSU2_TR(0x4a3b01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3b18;}}
}
B4a3b03:L4a3b03:{c.instructions+=4;NFSU2_TR(0x4a3b03);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a3b08:{NFSU2_TR(0x4a3b08);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a3b0b:{NFSU2_TR(0x4a3b0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3b0d:{NFSU2_TR(0x4a3b0d);
if(r1(R+518)){{goto L4a3b63;}}
}
B4a3b0f:L4a3b0f:{c.instructions+=2;NFSU2_TR(0x4a3b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a3b16:{NFSU2_TR(0x4a3b16);
{goto L4a3b63;}
}
B4a3b18:L4a3b18:{c.instructions+=2;NFSU2_TR(0x4a3b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ccull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3b1d:{NFSU2_TR(0x4a3b1d);
if(r1(R+518)){{goto L4a3b50;}}
}
B4a3b1f:L4a3b1f:{c.instructions+=2;NFSU2_TR(0x4a3b1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6d0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3b24:{NFSU2_TR(0x4a3b24);
if(r1(R+518)){{goto L4a3b50;}}
}
B4a3b26:L4a3b26:{c.instructions+=2;NFSU2_TR(0x4a3b26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cdull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3b2b:{NFSU2_TR(0x4a3b2b);
if(r1(R+518)){{goto L4a3b3b;}}
}
B4a3b2d:L4a3b2d:{c.instructions+=2;NFSU2_TR(0x4a3b2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ceull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3b32:{NFSU2_TR(0x4a3b32);
if(r1(R+518)){{goto L4a3b3b;}}
}
B4a3b34:L4a3b34:{c.instructions+=2;NFSU2_TR(0x4a3b34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3b39:{NFSU2_TR(0x4a3b39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3b63;}}
}
B4a3b3b:L4a3b3b:{c.instructions+=4;NFSU2_TR(0x4a3b3b);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a3b40:{NFSU2_TR(0x4a3b40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a3b43:{NFSU2_TR(0x4a3b43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3b45:{NFSU2_TR(0x4a3b45);
if(r1(R+518)){{goto L4a3b63;}}
}
B4a3b47:L4a3b47:{c.instructions+=2;NFSU2_TR(0x4a3b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a3b4e:{NFSU2_TR(0x4a3b4e);
{goto L4a3b63;}
}
B4a3b50:L4a3b50:{c.instructions+=4;NFSU2_TR(0x4a3b50);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4a3b55:{NFSU2_TR(0x4a3b55);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4a3b58:{NFSU2_TR(0x4a3b58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3b5a:{NFSU2_TR(0x4a3b5a);
if(r1(R+518)){{goto L4a3b63;}}
}
B4a3b5c:L4a3b5c:{c.instructions+=1;NFSU2_TR(0x4a3b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a3b63:L4a3b63:{c.instructions+=1;NFSU2_TR(0x4a3b63);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a3b65:L4a3b65:{c.instructions+=5;NFSU2_TR(0x4a3b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3b6b:{NFSU2_TR(0x4a3b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3b6e:{NFSU2_TR(0x4a3b6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b6f:{NFSU2_TR(0x4a3b6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b70:{NFSU2_TR(0x4a3b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3b75ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3b75:L4a3b75:{c.instructions+=2;NFSU2_TR(0x4a3b75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b76:{NFSU2_TR(0x4a3b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3b7bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3b7b:L4a3b7b:{c.instructions+=5;NFSU2_TR(0x4a3b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3b81:{NFSU2_TR(0x4a3b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3b84:{NFSU2_TR(0x4a3b84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b85:{NFSU2_TR(0x4a3b85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b86:{NFSU2_TR(0x4a3b86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3b8bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3b8b:L4a3b8b:{c.instructions+=2;NFSU2_TR(0x4a3b8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b8c:{NFSU2_TR(0x4a3b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3b91ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3b91:L4a3b91:{c.instructions+=5;NFSU2_TR(0x4a3b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3b97:{NFSU2_TR(0x4a3b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3b9a:{NFSU2_TR(0x4a3b9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b9b:{NFSU2_TR(0x4a3b9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3b9c:{NFSU2_TR(0x4a3b9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ba1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3ba1:L4a3ba1:{c.instructions+=9;NFSU2_TR(0x4a3ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3ba4:{NFSU2_TR(0x4a3ba4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3ba7:{NFSU2_TR(0x4a3ba7);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3bad:{NFSU2_TR(0x4a3bad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3baf:{NFSU2_TR(0x4a3baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3bb5:{NFSU2_TR(0x4a3bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3bb8:{NFSU2_TR(0x4a3bb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3bb9:{NFSU2_TR(0x4a3bb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3bba:{NFSU2_TR(0x4a3bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3bbfull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3bbf:L4a3bbf:{c.instructions+=8;NFSU2_TR(0x4a3bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3bc2:{NFSU2_TR(0x4a3bc2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3bc5:{NFSU2_TR(0x4a3bc5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3bcb:{NFSU2_TR(0x4a3bcb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a3bce:{NFSU2_TR(0x4a3bce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a3bd1:{NFSU2_TR(0x4a3bd1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a3bd4:{NFSU2_TR(0x4a3bd4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3bd6:{NFSU2_TR(0x4a3bd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3b65u);}goto L4a3b65;}}
}
B4a3bd8:L4a3bd8:{c.instructions+=4;NFSU2_TR(0x4a3bd8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3bda:{NFSU2_TR(0x4a3bda);
__builtin_memmove((R+4),(R+28),4);
}
B4a3bdc:{NFSU2_TR(0x4a3bdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a3be0:{NFSU2_TR(0x4a3be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3be5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a37c0u);}goto L4a37c0;}
}
B4a3be5:L4a3be5:{c.instructions+=3;NFSU2_TR(0x4a3be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a3be6:{NFSU2_TR(0x4a3be6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3be7:{NFSU2_TR(0x4a3be7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3bf0:L4a3bf0:{c.instructions+=4;NFSU2_TR(0x4a3bf0);
u8 U[4];
w4(U+0,u32(0x3000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3bf5:{NFSU2_TR(0x4a3bf5);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3bfa:{NFSU2_TR(0x4a3bfa);
u8 U[4];
w4(U+0,u32(0xab1f0e92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3bff:{NFSU2_TR(0x4a3bff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a39c0u);}goto L4a39c0;}
}
B4a3c04:L4a3c04:{c.instructions+=1;NFSU2_TR(0x4a3c04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3c10:L4a3c10:{c.instructions+=7;NFSU2_TR(0x4a3c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c11:{NFSU2_TR(0x4a3c11);
u8 U[4];
w4(U+0,u32(0x4000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c16:{NFSU2_TR(0x4a3c16);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c1b:{NFSU2_TR(0x4a3c1b);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c20:{NFSU2_TR(0x4a3c20);
u8 U[4];
w4(U+0,u32(0x2a9ba6f9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c25:{NFSU2_TR(0x4a3c25);
__builtin_memmove((R+24),(R+4),4);
}
B4a3c27:{NFSU2_TR(0x4a3c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3890u);}goto L4a3890;}
}
B4a3c2c:L4a3c2c:{c.instructions+=2;NFSU2_TR(0x4a3c2c);
u8 U[4];
w4(U+0,u32(u32(m4(0x836514))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3c36:{NFSU2_TR(0x4a3c36);
if(r1(R+518)){{goto L4a3c58;}}
}
B4a3c38:L4a3c38:{c.instructions+=4;NFSU2_TR(0x4a3c38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4a3c3b:{NFSU2_TR(0x4a3c3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c3c:{NFSU2_TR(0x4a3c3c);
u8 U[4];
w4(U+0,u32(0x69b6213dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c41:{NFSU2_TR(0x4a3c41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c46ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3c46:L4a3c46:{c.instructions+=5;NFSU2_TR(0x4a3c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3c49:{NFSU2_TR(0x4a3c49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3c4c:{NFSU2_TR(0x4a3c4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c4d:{NFSU2_TR(0x4a3c4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c4e:{NFSU2_TR(0x4a3c4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c53ull));
TAIL_STATIC(0x537be0u,537);
}
B4a3c53:L4a3c53:{c.instructions+=3;NFSU2_TR(0x4a3c53);
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
B4a3c56:{NFSU2_TR(0x4a3c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3c57:{NFSU2_TR(0x4a3c57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3c58:L4a3c58:{c.instructions+=4;NFSU2_TR(0x4a3c58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a3c5b:{NFSU2_TR(0x4a3c5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c5c:{NFSU2_TR(0x4a3c5c);
u8 U[4];
w4(U+0,u32(0x2a9ba6f9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c61:{NFSU2_TR(0x4a3c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c66ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3c66:L4a3c66:{c.instructions+=5;NFSU2_TR(0x4a3c66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3c69:{NFSU2_TR(0x4a3c69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c6a:{NFSU2_TR(0x4a3c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3c6d:{NFSU2_TR(0x4a3c6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c6e:{NFSU2_TR(0x4a3c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c73ull));
TAIL_STATIC(0x537be0u,537);
}
B4a3c73:L4a3c73:{c.instructions+=3;NFSU2_TR(0x4a3c73);
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
B4a3c76:{NFSU2_TR(0x4a3c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3c77:{NFSU2_TR(0x4a3c77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3c80:L4a3c80:{c.instructions+=7;NFSU2_TR(0x4a3c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c81:{NFSU2_TR(0x4a3c81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c82:{NFSU2_TR(0x4a3c82);
__builtin_memmove((R+28),(R+4),4);
}
B4a3c84:{NFSU2_TR(0x4a3c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3c87:{NFSU2_TR(0x4a3c87);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c8c:{NFSU2_TR(0x4a3c8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3c8d:{NFSU2_TR(0x4a3c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3c92ull));
TAIL_STATIC(0x537be0u,537);
}
B4a3c92:L4a3c92:{c.instructions+=3;NFSU2_TR(0x4a3c92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3c95:{NFSU2_TR(0x4a3c95);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a3c97:{NFSU2_TR(0x4a3c97);
{goto L4a3ca0;}
}
B4a3ca0:L4a3ca0:{c.instructions+=5;NFSU2_TR(0x4a3ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3ca6:{NFSU2_TR(0x4a3ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3ca9:{NFSU2_TR(0x4a3ca9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3caa:{NFSU2_TR(0x4a3caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cab:{NFSU2_TR(0x4a3cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3cb0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3cb0:L4a3cb0:{c.instructions+=2;NFSU2_TR(0x4a3cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cb1:{NFSU2_TR(0x4a3cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3cb6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3cb6:L4a3cb6:{c.instructions+=5;NFSU2_TR(0x4a3cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3cbc:{NFSU2_TR(0x4a3cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3cbf:{NFSU2_TR(0x4a3cbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cc0:{NFSU2_TR(0x4a3cc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cc1:{NFSU2_TR(0x4a3cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3cc6ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3cc6:L4a3cc6:{c.instructions+=2;NFSU2_TR(0x4a3cc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cc7:{NFSU2_TR(0x4a3cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3cccull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a3ccc:L4a3ccc:{c.instructions+=5;NFSU2_TR(0x4a3ccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3cd2:{NFSU2_TR(0x4a3cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3cd5:{NFSU2_TR(0x4a3cd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cd6:{NFSU2_TR(0x4a3cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cd7:{NFSU2_TR(0x4a3cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3cdcull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3cdc:L4a3cdc:{c.instructions+=9;NFSU2_TR(0x4a3cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3cdf:{NFSU2_TR(0x4a3cdf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3ce2:{NFSU2_TR(0x4a3ce2);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3ce8:{NFSU2_TR(0x4a3ce8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3cea:{NFSU2_TR(0x4a3cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78dfd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3cf0:{NFSU2_TR(0x4a3cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3cf3:{NFSU2_TR(0x4a3cf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cf4:{NFSU2_TR(0x4a3cf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3cf5:{NFSU2_TR(0x4a3cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3cfaull));
TAIL_STATIC(0x5379c0u,537);
}
B4a3cfa:L4a3cfa:{c.instructions+=8;NFSU2_TR(0x4a3cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3cfd:{NFSU2_TR(0x4a3cfd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4a3d00:{NFSU2_TR(0x4a3d00);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000000ull))));
}
B4a3d06:{NFSU2_TR(0x4a3d06);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a3d09:{NFSU2_TR(0x4a3d09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4a3d0c:{NFSU2_TR(0x4a3d0c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a3d0f:{NFSU2_TR(0x4a3d0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4a3d11:{NFSU2_TR(0x4a3d11);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3ca0u);}goto L4a3ca0;}}
}
B4a3d13:L4a3d13:{c.instructions+=5;NFSU2_TR(0x4a3d13);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a3d17:{NFSU2_TR(0x4a3d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a3d21:{NFSU2_TR(0x4a3d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a3d22:{NFSU2_TR(0x4a3d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3d23:{NFSU2_TR(0x4a3d23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3d30:L4a3d30:{c.instructions+=3;NFSU2_TR(0x4a3d30);
u8 U[4];
w4(U+0,u32(0x78f170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d35:{NFSU2_TR(0x4a3d35);
u8 U[4];
w4(U+0,u32(0xd8692111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d3a:{NFSU2_TR(0x4a3d3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3d3full));
TAIL_STATIC(0x55dda0u,55d);
}
B4a3d3f:L4a3d3f:{c.instructions+=2;NFSU2_TR(0x4a3d3f);
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
B4a3d42:{NFSU2_TR(0x4a3d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3d50:L4a3d50:{c.instructions+=13;NFSU2_TR(0x4a3d50);
__builtin_memmove((R+8),gp(0x850078),4);
}
B4a3d56:{NFSU2_TR(0x4a3d56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d57:{NFSU2_TR(0x4a3d57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a3d59:{NFSU2_TR(0x4a3d59);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a3d5b:{NFSU2_TR(0x4a3d5b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a3d5e:{NFSU2_TR(0x4a3d5e);
__builtin_memmove((R+0),(R+518),1);
}
B4a3d61:{NFSU2_TR(0x4a3d61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d62:{NFSU2_TR(0x4a3d62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d63:{NFSU2_TR(0x4a3d63);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a3d65:{NFSU2_TR(0x4a3d65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a3d66:{NFSU2_TR(0x4a3d66);
__builtin_memmove((R+28),(R+0),4);
}
B4a3d68:{NFSU2_TR(0x4a3d68);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3d6a:{NFSU2_TR(0x4a3d6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4a3d87;}}
}
B4a3d6c:L4a3d6c:{c.instructions+=1;NFSU2_TR(0x4a3d6c);
__builtin_memmove((R+16),(R+16),4);
}
B4a3d70:L4a3d70:{c.instructions+=3;NFSU2_TR(0x4a3d70);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4a3d77:{NFSU2_TR(0x4a3d77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d78:{NFSU2_TR(0x4a3d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3d7dull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4a3d7d:L4a3d7d:{c.instructions+=5;NFSU2_TR(0x4a3d7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3d80:{NFSU2_TR(0x4a3d80);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B4a3d82:{NFSU2_TR(0x4a3d82);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4a3d83:{NFSU2_TR(0x4a3d83);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a3d85:{NFSU2_TR(0x4a3d85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a3d70u);}goto L4a3d70;}}
}
B4a3d87:L4a3d87:{c.instructions+=4;NFSU2_TR(0x4a3d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3d8b:{NFSU2_TR(0x4a3d8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d8c:{NFSU2_TR(0x4a3d8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3d8d:{NFSU2_TR(0x4a3d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3d92ull));
TAIL_STATIC(0x537950u,537);
}
B4a3d92:L4a3d92:{c.instructions+=5;NFSU2_TR(0x4a3d92);
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
B4a3d95:{NFSU2_TR(0x4a3d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a3d96:{NFSU2_TR(0x4a3d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3d97:{NFSU2_TR(0x4a3d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a3d98:{NFSU2_TR(0x4a3d98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3da0:L4a3da0:{c.instructions+=8;NFSU2_TR(0x4a3da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3da3:{NFSU2_TR(0x4a3da3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3da5:{NFSU2_TR(0x4a3da5);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3daa:{NFSU2_TR(0x4a3daa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a3dae:{NFSU2_TR(0x4a3dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3db1:{NFSU2_TR(0x4a3db1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3db2:{NFSU2_TR(0x4a3db2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3db3:{NFSU2_TR(0x4a3db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3db8ull));
TAIL_STATIC(0x5426c0u,542);
}
B4a3db8:L4a3db8:{c.instructions+=2;NFSU2_TR(0x4a3db8);
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
B4a3dbb:{NFSU2_TR(0x4a3dbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3dc0:L4a3dc0:{c.instructions+=2;NFSU2_TR(0x4a3dc0);
w4(R+4,u32(0x85ad40ull));
}
B4a3dc5:{NFSU2_TR(0x4a3dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3dcaull));
TAIL_STATIC(0x54ca40u,54c);
}
B4a3dca:L4a3dca:{c.instructions+=2;NFSU2_TR(0x4a3dca);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3dcf:{NFSU2_TR(0x4a3dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3dd4ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4a3dd4:L4a3dd4:{c.instructions+=5;NFSU2_TR(0x4a3dd4);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a3dda:{NFSU2_TR(0x4a3dda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3ddd:{NFSU2_TR(0x4a3ddd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ddf:{NFSU2_TR(0x4a3ddf);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3de1:{NFSU2_TR(0x4a3de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3de6ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4a3de6:L4a3de6:{c.instructions+=1;NFSU2_TR(0x4a3de6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3df0:L4a3df0:{c.instructions+=2;NFSU2_TR(0x4a3df0);
w4(R+4,u32(0x85ad40ull));
}
B4a3df5:{NFSU2_TR(0x4a3df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3dfaull));
TAIL_STATIC(0x513950u,513);
}
B4a3dfa:L4a3dfa:{c.instructions+=4;NFSU2_TR(0x4a3dfa);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a3e00:{NFSU2_TR(0x4a3e00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e02:{NFSU2_TR(0x4a3e02);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e04:{NFSU2_TR(0x4a3e04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e09ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4a3e09:L4a3e09:{c.instructions+=1;NFSU2_TR(0x4a3e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e0eull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a3e0e:L4a3e0e:{c.instructions+=2;NFSU2_TR(0x4a3e0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e0f:{NFSU2_TR(0x4a3e0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e14ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a3e14:L4a3e14:{c.instructions+=3;NFSU2_TR(0x4a3e14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3e17:{NFSU2_TR(0x4a3e17);
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
B4a3e19:{NFSU2_TR(0x4a3e19);
if(r1(R+518)){{goto L4a3e27;}}
}
B4a3e1b:L4a3e1b:{c.instructions+=1;NFSU2_TR(0x4a3e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e20ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a3e20:L4a3e20:{c.instructions+=2;NFSU2_TR(0x4a3e20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e21:{NFSU2_TR(0x4a3e21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e26ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a3e26:L4a3e26:{c.instructions+=1;NFSU2_TR(0x4a3e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a3e27:L4a3e27:{c.instructions+=1;NFSU2_TR(0x4a3e27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3e30:L4a3e30:{c.instructions+=7;NFSU2_TR(0x4a3e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4a3e33:{NFSU2_TR(0x4a3e33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e34:{NFSU2_TR(0x4a3e34);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4a3e38:{NFSU2_TR(0x4a3e38);
__builtin_memmove((R+24),(R+4),4);
}
B4a3e3a:{NFSU2_TR(0x4a3e3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e3b:{NFSU2_TR(0x4a3e3b);
w4(R+4,u32(0x85ad40ull));
}
B4a3e40:{NFSU2_TR(0x4a3e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e45ull));
TAIL_STATIC(0x54c9d0u,54c);
}
B4a3e45:L4a3e45:{c.instructions+=2;NFSU2_TR(0x4a3e45);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3e47:{NFSU2_TR(0x4a3e47);
if(r1(R+518)){{goto L4a3e5f;}}
}
B4a3e49:L4a3e49:{c.instructions+=5;NFSU2_TR(0x4a3e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a3e4c:{NFSU2_TR(0x4a3e4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a3e50:{NFSU2_TR(0x4a3e50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e51:{NFSU2_TR(0x4a3e51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e52:{NFSU2_TR(0x4a3e52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e57ull));
TAIL_STATIC(0x53d7a0u,53d);
}
B4a3e57:L4a3e57:{c.instructions+=4;NFSU2_TR(0x4a3e57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3e5a:{NFSU2_TR(0x4a3e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3e5b:{NFSU2_TR(0x4a3e5b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a3e5e:{NFSU2_TR(0x4a3e5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3e5f:L4a3e5f:{c.instructions+=4;NFSU2_TR(0x4a3e5f);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a3e65:{NFSU2_TR(0x4a3e65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e67:{NFSU2_TR(0x4a3e67);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e69:{NFSU2_TR(0x4a3e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e6eull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4a3e6e:L4a3e6e:{c.instructions+=3;NFSU2_TR(0x4a3e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3e6f:{NFSU2_TR(0x4a3e6f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a3e72:{NFSU2_TR(0x4a3e72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3e80:L4a3e80:{c.instructions+=4;NFSU2_TR(0x4a3e80);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a3e87:{NFSU2_TR(0x4a3e87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3e88:{NFSU2_TR(0x4a3e88);
__builtin_memmove((R+24),(R+4),4);
}
B4a3e8a:{NFSU2_TR(0x4a3e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3ea0;}}
}
B4a3e8c:L4a3e8c:{c.instructions+=2;NFSU2_TR(0x4a3e8c);
w4(R+4,u32(0x85ad40ull));
}
B4a3e91:{NFSU2_TR(0x4a3e91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3e96ull));
TAIL_STATIC(0x54ca40u,54c);
}
B4a3e96:L4a3e96:{c.instructions+=2;NFSU2_TR(0x4a3e96);
w4(R+4,u32(0x85ad40ull));
}
B4a3e9b:{NFSU2_TR(0x4a3e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ea0ull));
TAIL_STATIC(0x5139c0u,513);
}
B4a3ea0:L4a3ea0:{c.instructions+=4;NFSU2_TR(0x4a3ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3ea3:{NFSU2_TR(0x4a3ea3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ea5:{NFSU2_TR(0x4a3ea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ea6:{NFSU2_TR(0x4a3ea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3eabull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a3eab:L4a3eab:{c.instructions+=4;NFSU2_TR(0x4a3eab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a3eae:{NFSU2_TR(0x4a3eae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3eb0:{NFSU2_TR(0x4a3eb0);
w4(R+4,u32(0x83a9d0ull));
}
B4a3eb5:{NFSU2_TR(0x4a3eb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ebaull));
TAIL_STATIC(0x502ff0u,502);
}
B4a3eba:L4a3eba:{c.instructions+=2;NFSU2_TR(0x4a3eba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ebb:{NFSU2_TR(0x4a3ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ec0ull));
TAIL_STATIC(0x50c8d0u,50c);
}
B4a3ec0:L4a3ec0:{c.instructions+=5;NFSU2_TR(0x4a3ec0);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a3ec6:{NFSU2_TR(0x4a3ec6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3ec9:{NFSU2_TR(0x4a3ec9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ecb:{NFSU2_TR(0x4a3ecb);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ecd:{NFSU2_TR(0x4a3ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ed2ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4a3ed2:L4a3ed2:{c.instructions+=2;NFSU2_TR(0x4a3ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3ed3:{NFSU2_TR(0x4a3ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3ee0:L4a3ee0:{c.instructions+=5;NFSU2_TR(0x4a3ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ee1:{NFSU2_TR(0x4a3ee1);
__builtin_memmove((R+24),(R+4),4);
}
B4a3ee3:{NFSU2_TR(0x4a3ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3ee6:{NFSU2_TR(0x4a3ee6);
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
B4a3ee8:{NFSU2_TR(0x4a3ee8);
if(r1(R+518)){{goto L4a3ef3;}}
}
B4a3eea:L4a3eea:{c.instructions+=2;NFSU2_TR(0x4a3eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3eeb:{NFSU2_TR(0x4a3eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ef0ull));
TAIL_STATIC(0x540a60u,540);
}
B4a3ef0:L4a3ef0:{c.instructions+=1;NFSU2_TR(0x4a3ef0);
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
B4a3ef3:L4a3ef3:{c.instructions+=3;NFSU2_TR(0x4a3ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a3efa:{NFSU2_TR(0x4a3efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3efb:{NFSU2_TR(0x4a3efb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3f00:L4a3f00:{c.instructions+=3;NFSU2_TR(0x4a3f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a3f04:{NFSU2_TR(0x4a3f04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3f09:{NFSU2_TR(0x4a3f09);
if(r1(R+518)){{goto L4a3f2b;}}
}
B4a3f0b:L4a3f0b:{c.instructions+=2;NFSU2_TR(0x4a3f0b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a3f10:{NFSU2_TR(0x4a3f10);
if(r1(R+518)){{goto L4a3f23;}}
}
B4a3f12:L4a3f12:{c.instructions+=4;NFSU2_TR(0x4a3f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a3f16:{NFSU2_TR(0x4a3f16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3f17:{NFSU2_TR(0x4a3f17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3f18:{NFSU2_TR(0x4a3f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3f1dull));
TAIL_STATIC(0x50d230u,50d);
}
B4a3f1d:L4a3f1d:{c.instructions+=2;NFSU2_TR(0x4a3f1d);
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
B4a3f20:{NFSU2_TR(0x4a3f20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3f23:L4a3f23:{c.instructions+=2;NFSU2_TR(0x4a3f23);
w4(R+0,u32(0x8ull));
}
B4a3f28:{NFSU2_TR(0x4a3f28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3f2b:L4a3f2b:{c.instructions+=2;NFSU2_TR(0x4a3f2b);
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
B4a3f2d:{NFSU2_TR(0x4a3f2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3f30:L4a3f30:{c.instructions+=5;NFSU2_TR(0x4a3f30);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4a3f35:{NFSU2_TR(0x4a3f35);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a3f38:{NFSU2_TR(0x4a3f38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3f39:{NFSU2_TR(0x4a3f39);
__builtin_memmove((R+24),(R+4),4);
}
B4a3f3b:{NFSU2_TR(0x4a3f3b);
if(r1(R+518)){{goto L4a3fdd;}}
}
B4a3f41:L4a3f41:{c.instructions+=2;NFSU2_TR(0x4a3f41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3f46:{NFSU2_TR(0x4a3f46);
if(r1(R+518)){{goto L4a3fdd;}}
}
B4a3f4c:L4a3f4c:{c.instructions+=3;NFSU2_TR(0x4a3f4c);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4a3f51:{NFSU2_TR(0x4a3f51);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3f53:{NFSU2_TR(0x4a3f53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3fef;}}
}
B4a3f59:L4a3f59:{c.instructions+=3;NFSU2_TR(0x4a3f59);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4a3f5e:{NFSU2_TR(0x4a3f5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a3f60:{NFSU2_TR(0x4a3f60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3fef;}}
}
B4a3f66:L4a3f66:{c.instructions+=3;NFSU2_TR(0x4a3f66);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B4a3f6b:{NFSU2_TR(0x4a3f6b);
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
B4a3f6d:{NFSU2_TR(0x4a3f6d);
if(r1(R+518)){TAIL_STATIC(0x4a4017u,4a4);}
}
B4a3f73:L4a3f73:{c.instructions+=3;NFSU2_TR(0x4a3f73);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4a3f78:{NFSU2_TR(0x4a3f78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3f7a:{NFSU2_TR(0x4a3f7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3f89;}}
}
B4a3f7c:L4a3f7c:{c.instructions+=3;NFSU2_TR(0x4a3f7c);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4a3f81:{NFSU2_TR(0x4a3f81);
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
B4a3f83:{NFSU2_TR(0x4a3f83);
if(r1(R+518)){TAIL_STATIC(0x4a4017u,4a4);}
}
B4a3f89:L4a3f89:{c.instructions+=4;NFSU2_TR(0x4a3f89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3f8a:{NFSU2_TR(0x4a3f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a3f8d:{NFSU2_TR(0x4a3f8d);
u8 U[4];
w4(U+0,u32(0xf77e6402ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3f92:{NFSU2_TR(0x4a3f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3f97ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3f97:L4a3f97:{c.instructions+=4;NFSU2_TR(0x4a3f97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3f9a:{NFSU2_TR(0x4a3f9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3f9b:{NFSU2_TR(0x4a3f9b);
u8 U[4];
w4(U+0,u32(0x7904dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fa0:{NFSU2_TR(0x4a3fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3fa5ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a3fa5:L4a3fa5:{c.instructions+=4;NFSU2_TR(0x4a3fa5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3fa8:{NFSU2_TR(0x4a3fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fa9:{NFSU2_TR(0x4a3fa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3faa:{NFSU2_TR(0x4a3faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3fafull));
TAIL_STATIC(0x537b80u,537);
}
B4a3faf:L4a3faf:{c.instructions+=3;NFSU2_TR(0x4a3faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a3fb2:{NFSU2_TR(0x4a3fb2);
u8 U[4];
w4(U+0,u32(0x7904ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fb7:{NFSU2_TR(0x4a3fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3fbcull));
TAIL_STATIC(0x50b990u,50b);
}
B4a3fbc:L4a3fbc:{c.instructions+=3;NFSU2_TR(0x4a3fbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fbd:{NFSU2_TR(0x4a3fbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fbe:{NFSU2_TR(0x4a3fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3fc3ull));
TAIL_STATIC(0x4954e0u,495);
}
B4a3fc3:L4a3fc3:{c.instructions+=3;NFSU2_TR(0x4a3fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a3fc6:{NFSU2_TR(0x4a3fc6);
u8 U[4];
w4(U+0,u32(0x7904bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fcb:{NFSU2_TR(0x4a3fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3fd0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4a3fd0:L4a3fd0:{c.instructions+=3;NFSU2_TR(0x4a3fd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fd1:{NFSU2_TR(0x4a3fd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3fd2:{NFSU2_TR(0x4a3fd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3fd7ull));
TAIL_STATIC(0x4954e0u,495);
}
B4a3fd7:L4a3fd7:{c.instructions+=4;NFSU2_TR(0x4a3fd7);
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
B4a3fda:{NFSU2_TR(0x4a3fda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a3fdb:{NFSU2_TR(0x4a3fdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a3fdc:{NFSU2_TR(0x4a3fdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a3fdd:L4a3fdd:{c.instructions+=3;NFSU2_TR(0x4a3fdd);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4a3fe2:{NFSU2_TR(0x4a3fe2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a3fe4:{NFSU2_TR(0x4a3fe4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a3fef;}}
}
B4a3fe6:L4a3fe6:{c.instructions+=3;NFSU2_TR(0x4a3fe6);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4a3feb:{NFSU2_TR(0x4a3feb);
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
B4a3fed:{NFSU2_TR(0x4a3fed);
if(r1(R+518)){TAIL_STATIC(0x4a4017u,4a4);}
}
B4a3fef:L4a3fef:{c.instructions+=3;NFSU2_TR(0x4a3fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a3ff2:{NFSU2_TR(0x4a3ff2);
u8 U[4];
w4(U+0,u32(0xc03f9f19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a3ff7:{NFSU2_TR(0x4a3ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a3ffcull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4a3ffc:L4a3ffc:{c.instructions+=2;NFSU2_TR(0x4a3ffc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a3fff:{NFSU2_TR(0x4a3fff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4a4000u,4a4);
}
XIT:NFSU2_TR_EXIT(0x4a3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
