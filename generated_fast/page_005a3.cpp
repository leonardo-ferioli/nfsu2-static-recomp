#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59e(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a3(u8* __restrict R,Cpu& c);
u32 page_5a3(Cpu& c){return body_5a3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a3000:goto L5a3000;
case 0x5a3002:c.instructions+=2;goto B5a3002;
case 0x5a3005:c.instructions+=1;goto B5a3005;
case 0x5a3007:goto L5a3007;
case 0x5a300d:c.instructions+=4;goto B5a300d;
case 0x5a3013:c.instructions+=3;goto B5a3013;
case 0x5a3015:c.instructions+=2;goto B5a3015;
case 0x5a3018:c.instructions+=1;goto B5a3018;
case 0x5a301a:goto L5a301a;
case 0x5a301c:c.instructions+=1;goto B5a301c;
case 0x5a301e:goto L5a301e;
case 0x5a3024:c.instructions+=4;goto B5a3024;
case 0x5a302a:c.instructions+=3;goto B5a302a;
case 0x5a302c:c.instructions+=2;goto B5a302c;
case 0x5a302f:c.instructions+=1;goto B5a302f;
case 0x5a3031:goto L5a3031;
case 0x5a3037:c.instructions+=4;goto B5a3037;
case 0x5a303d:c.instructions+=3;goto B5a303d;
case 0x5a303f:c.instructions+=2;goto B5a303f;
case 0x5a3042:c.instructions+=1;goto B5a3042;
case 0x5a3044:goto L5a3044;
case 0x5a3046:c.instructions+=1;goto B5a3046;
case 0x5a3048:goto L5a3048;
case 0x5a304e:c.instructions+=4;goto B5a304e;
case 0x5a3054:c.instructions+=3;goto B5a3054;
case 0x5a3056:c.instructions+=2;goto B5a3056;
case 0x5a3059:c.instructions+=1;goto B5a3059;
case 0x5a305b:goto L5a305b;
case 0x5a3061:c.instructions+=4;goto B5a3061;
case 0x5a3067:c.instructions+=3;goto B5a3067;
case 0x5a3069:c.instructions+=2;goto B5a3069;
case 0x5a306c:c.instructions+=1;goto B5a306c;
case 0x5a306e:goto L5a306e;
case 0x5a3074:c.instructions+=4;goto B5a3074;
case 0x5a307a:c.instructions+=3;goto B5a307a;
case 0x5a307c:c.instructions+=2;goto B5a307c;
case 0x5a307f:c.instructions+=1;goto B5a307f;
case 0x5a3081:goto L5a3081;
case 0x5a3087:c.instructions+=4;goto B5a3087;
case 0x5a308d:c.instructions+=3;goto B5a308d;
case 0x5a308f:c.instructions+=2;goto B5a308f;
case 0x5a3092:c.instructions+=1;goto B5a3092;
case 0x5a3094:goto L5a3094;
case 0x5a3096:goto L5a3096;
case 0x5a3098:c.instructions+=9;goto B5a3098;
case 0x5a309b:c.instructions+=8;goto B5a309b;
case 0x5a30a0:c.instructions+=7;goto B5a30a0;
case 0x5a30a5:c.instructions+=6;goto B5a30a5;
case 0x5a30a7:c.instructions+=5;goto B5a30a7;
case 0x5a30af:c.instructions+=4;goto B5a30af;
case 0x5a30b3:c.instructions+=3;goto B5a30b3;
case 0x5a30b8:c.instructions+=2;goto B5a30b8;
case 0x5a30bc:c.instructions+=1;goto B5a30bc;
case 0x5a30be:goto L5a30be;
case 0x5a30c2:goto L5a30c2;
case 0x5a30c5:c.instructions+=11;goto B5a30c5;
case 0x5a30cc:c.instructions+=10;goto B5a30cc;
case 0x5a30ce:c.instructions+=9;goto B5a30ce;
case 0x5a30d1:c.instructions+=8;goto B5a30d1;
case 0x5a30d5:c.instructions+=7;goto B5a30d5;
case 0x5a30d9:c.instructions+=6;goto B5a30d9;
case 0x5a30de:c.instructions+=5;goto B5a30de;
case 0x5a30e0:c.instructions+=4;goto B5a30e0;
case 0x5a30e6:c.instructions+=3;goto B5a30e6;
case 0x5a30ec:c.instructions+=2;goto B5a30ec;
case 0x5a30ee:c.instructions+=1;goto B5a30ee;
case 0x5a30f0:goto L5a30f0;
case 0x5a30f6:c.instructions+=3;goto B5a30f6;
case 0x5a30f8:c.instructions+=2;goto B5a30f8;
case 0x5a30fb:c.instructions+=1;goto B5a30fb;
case 0x5a30fd:goto L5a30fd;
case 0x5a30ff:c.instructions+=1;goto B5a30ff;
case 0x5a3105:goto L5a3105;
case 0x5a3108:c.instructions+=5;goto B5a3108;
case 0x5a310b:c.instructions+=4;goto B5a310b;
case 0x5a310e:c.instructions+=3;goto B5a310e;
case 0x5a3110:c.instructions+=2;goto B5a3110;
case 0x5a3113:c.instructions+=1;goto B5a3113;
case 0x5a3115:goto L5a3115;
case 0x5a311b:c.instructions+=7;goto B5a311b;
case 0x5a3121:c.instructions+=6;goto B5a3121;
case 0x5a3123:c.instructions+=5;goto B5a3123;
case 0x5a3127:c.instructions+=4;goto B5a3127;
case 0x5a312b:c.instructions+=3;goto B5a312b;
case 0x5a312d:c.instructions+=2;goto B5a312d;
case 0x5a3130:c.instructions+=1;goto B5a3130;
case 0x5a3132:goto L5a3132;
case 0x5a3134:c.instructions+=1;goto B5a3134;
case 0x5a3138:goto L5a3138;
case 0x5a313a:c.instructions+=2;goto B5a313a;
case 0x5a3140:c.instructions+=1;goto B5a3140;
case 0x5a3142:goto L5a3142;
case 0x5a3144:c.instructions+=3;goto B5a3144;
case 0x5a3146:c.instructions+=2;goto B5a3146;
case 0x5a3149:c.instructions+=1;goto B5a3149;
case 0x5a314b:goto L5a314b;
case 0x5a3151:c.instructions+=7;goto B5a3151;
case 0x5a3157:c.instructions+=6;goto B5a3157;
case 0x5a3159:c.instructions+=5;goto B5a3159;
case 0x5a315f:c.instructions+=4;goto B5a315f;
case 0x5a3161:c.instructions+=3;goto B5a3161;
case 0x5a3163:c.instructions+=2;goto B5a3163;
case 0x5a3166:c.instructions+=1;goto B5a3166;
case 0x5a3168:goto L5a3168;
case 0x5a316a:c.instructions+=1;goto B5a316a;
case 0x5a3170:goto L5a3170;
case 0x5a3172:c.instructions+=2;goto B5a3172;
case 0x5a3178:c.instructions+=1;goto B5a3178;
case 0x5a317a:goto L5a317a;
case 0x5a3180:goto L5a3180;
case 0x5a3182:c.instructions+=1;goto B5a3182;
case 0x5a3184:goto L5a3184;
case 0x5a3187:c.instructions+=5;goto B5a3187;
case 0x5a318a:c.instructions+=4;goto B5a318a;
case 0x5a3190:c.instructions+=3;goto B5a3190;
case 0x5a3192:c.instructions+=2;goto B5a3192;
case 0x5a3195:c.instructions+=1;goto B5a3195;
case 0x5a3197:goto L5a3197;
case 0x5a319c:goto L5a319c;
case 0x5a31a0:c.instructions+=5;goto B5a31a0;
case 0x5a31a1:c.instructions+=4;goto B5a31a1;
case 0x5a31a4:c.instructions+=3;goto B5a31a4;
case 0x5a31aa:c.instructions+=2;goto B5a31aa;
case 0x5a31ae:c.instructions+=1;goto B5a31ae;
case 0x5a31b4:goto L5a31b4;
case 0x5a31b7:c.instructions+=2;goto B5a31b7;
case 0x5a31bc:c.instructions+=1;goto B5a31bc;
case 0x5a31c2:goto L5a31c2;
case 0x5a31c4:c.instructions+=4;goto B5a31c4;
case 0x5a31ca:c.instructions+=3;goto B5a31ca;
case 0x5a31cc:c.instructions+=2;goto B5a31cc;
case 0x5a31cf:c.instructions+=1;goto B5a31cf;
case 0x5a31d1:goto L5a31d1;
case 0x5a31d4:c.instructions+=5;goto B5a31d4;
case 0x5a31d7:c.instructions+=4;goto B5a31d7;
case 0x5a31dd:c.instructions+=3;goto B5a31dd;
case 0x5a31df:c.instructions+=2;goto B5a31df;
case 0x5a31e2:c.instructions+=1;goto B5a31e2;
case 0x5a31e8:goto L5a31e8;
case 0x5a31eb:c.instructions+=3;goto B5a31eb;
case 0x5a31ee:c.instructions+=2;goto B5a31ee;
case 0x5a31f1:c.instructions+=1;goto B5a31f1;
case 0x5a31f3:goto L5a31f3;
case 0x5a31f7:c.instructions+=2;goto B5a31f7;
case 0x5a31f9:c.instructions+=1;goto B5a31f9;
case 0x5a31ff:goto L5a31ff;
case 0x5a3201:c.instructions+=4;goto B5a3201;
case 0x5a3205:c.instructions+=3;goto B5a3205;
case 0x5a3209:c.instructions+=2;goto B5a3209;
case 0x5a320e:c.instructions+=1;goto B5a320e;
case 0x5a3213:goto L5a3213;
case 0x5a3216:c.instructions+=5;goto B5a3216;
case 0x5a3219:c.instructions+=4;goto B5a3219;
case 0x5a321f:c.instructions+=3;goto B5a321f;
case 0x5a3221:c.instructions+=2;goto B5a3221;
case 0x5a3224:c.instructions+=1;goto B5a3224;
case 0x5a322a:goto L5a322a;
case 0x5a322d:c.instructions+=33;goto B5a322d;
case 0x5a3233:c.instructions+=32;goto B5a3233;
case 0x5a3236:c.instructions+=31;goto B5a3236;
case 0x5a3238:c.instructions+=30;goto B5a3238;
case 0x5a323c:c.instructions+=29;goto B5a323c;
case 0x5a3242:c.instructions+=28;goto B5a3242;
case 0x5a3246:c.instructions+=27;goto B5a3246;
case 0x5a3248:c.instructions+=26;goto B5a3248;
case 0x5a324c:c.instructions+=25;goto B5a324c;
case 0x5a324f:c.instructions+=24;goto B5a324f;
case 0x5a3255:c.instructions+=23;goto B5a3255;
case 0x5a3257:c.instructions+=22;goto B5a3257;
case 0x5a325b:c.instructions+=21;goto B5a325b;
case 0x5a325d:c.instructions+=20;goto B5a325d;
case 0x5a3260:c.instructions+=19;goto B5a3260;
case 0x5a3264:c.instructions+=18;goto B5a3264;
case 0x5a3267:c.instructions+=17;goto B5a3267;
case 0x5a326a:c.instructions+=16;goto B5a326a;
case 0x5a326e:c.instructions+=15;goto B5a326e;
case 0x5a3272:c.instructions+=14;goto B5a3272;
case 0x5a3276:c.instructions+=13;goto B5a3276;
case 0x5a3278:c.instructions+=12;goto B5a3278;
case 0x5a327c:c.instructions+=11;goto B5a327c;
case 0x5a3280:c.instructions+=10;goto B5a3280;
case 0x5a3284:c.instructions+=9;goto B5a3284;
case 0x5a3288:c.instructions+=8;goto B5a3288;
case 0x5a3289:c.instructions+=7;goto B5a3289;
case 0x5a3290:c.instructions+=6;goto B5a3290;
case 0x5a3291:c.instructions+=5;goto B5a3291;
case 0x5a3295:c.instructions+=4;goto B5a3295;
case 0x5a3299:c.instructions+=3;goto B5a3299;
case 0x5a329a:c.instructions+=2;goto B5a329a;
case 0x5a329e:c.instructions+=1;goto B5a329e;
case 0x5a32a3:goto L5a32a3;
case 0x5a32a6:c.instructions+=9;goto B5a32a6;
case 0x5a32aa:c.instructions+=8;goto B5a32aa;
case 0x5a32ab:c.instructions+=7;goto B5a32ab;
case 0x5a32b1:c.instructions+=6;goto B5a32b1;
case 0x5a32b2:c.instructions+=5;goto B5a32b2;
case 0x5a32b7:c.instructions+=4;goto B5a32b7;
case 0x5a32b8:c.instructions+=3;goto B5a32b8;
case 0x5a32bc:c.instructions+=2;goto B5a32bc;
case 0x5a32bd:c.instructions+=1;goto B5a32bd;
case 0x5a32c2:goto L5a32c2;
case 0x5a32c6:c.instructions+=14;goto B5a32c6;
case 0x5a32c9:c.instructions+=13;goto B5a32c9;
case 0x5a32cd:c.instructions+=12;goto B5a32cd;
case 0x5a32cf:c.instructions+=11;goto B5a32cf;
case 0x5a32d3:c.instructions+=10;goto B5a32d3;
case 0x5a32d6:c.instructions+=9;goto B5a32d6;
case 0x5a32d9:c.instructions+=8;goto B5a32d9;
case 0x5a32db:c.instructions+=7;goto B5a32db;
case 0x5a32df:c.instructions+=6;goto B5a32df;
case 0x5a32e1:c.instructions+=5;goto B5a32e1;
case 0x5a32e3:c.instructions+=4;goto B5a32e3;
case 0x5a32e9:c.instructions+=3;goto B5a32e9;
case 0x5a32eb:c.instructions+=2;goto B5a32eb;
case 0x5a32ee:c.instructions+=1;goto B5a32ee;
case 0x5a32f0:goto L5a32f0;
case 0x5a32f6:c.instructions+=7;goto B5a32f6;
case 0x5a32f9:c.instructions+=6;goto B5a32f9;
case 0x5a32ff:c.instructions+=5;goto B5a32ff;
case 0x5a3302:c.instructions+=4;goto B5a3302;
case 0x5a3308:c.instructions+=3;goto B5a3308;
case 0x5a330a:c.instructions+=2;goto B5a330a;
case 0x5a330d:c.instructions+=1;goto B5a330d;
case 0x5a330f:goto L5a330f;
case 0x5a3312:c.instructions+=14;goto B5a3312;
case 0x5a3318:c.instructions+=13;goto B5a3318;
case 0x5a331c:c.instructions+=12;goto B5a331c;
case 0x5a331e:c.instructions+=11;goto B5a331e;
case 0x5a3320:c.instructions+=10;goto B5a3320;
case 0x5a3324:c.instructions+=9;goto B5a3324;
case 0x5a3326:c.instructions+=8;goto B5a3326;
case 0x5a3329:c.instructions+=7;goto B5a3329;
case 0x5a332d:c.instructions+=6;goto B5a332d;
case 0x5a3330:c.instructions+=5;goto B5a3330;
case 0x5a3334:c.instructions+=4;goto B5a3334;
case 0x5a3335:c.instructions+=3;goto B5a3335;
case 0x5a3336:c.instructions+=2;goto B5a3336;
case 0x5a333a:c.instructions+=1;goto B5a333a;
case 0x5a333f:goto L5a333f;
case 0x5a3342:c.instructions+=3;goto B5a3342;
case 0x5a3346:c.instructions+=2;goto B5a3346;
case 0x5a334e:c.instructions+=1;goto B5a334e;
case 0x5a3350:goto L5a3350;
case 0x5a3352:goto L5a3352;
case 0x5a3356:c.instructions+=7;goto B5a3356;
case 0x5a335a:c.instructions+=6;goto B5a335a;
case 0x5a335d:c.instructions+=5;goto B5a335d;
case 0x5a3360:c.instructions+=4;goto B5a3360;
case 0x5a3363:c.instructions+=3;goto B5a3363;
case 0x5a3369:c.instructions+=2;goto B5a3369;
case 0x5a336d:c.instructions+=1;goto B5a336d;
case 0x5a3373:goto L5a3373;
case 0x5a3374:c.instructions+=5;goto B5a3374;
case 0x5a3375:c.instructions+=4;goto B5a3375;
case 0x5a3376:c.instructions+=3;goto B5a3376;
case 0x5a3378:c.instructions+=2;goto B5a3378;
case 0x5a3379:c.instructions+=1;goto B5a3379;
case 0x5a3380:goto L5a3380;
case 0x5a3385:c.instructions+=2;goto B5a3385;
case 0x5a3387:c.instructions+=1;goto B5a3387;
case 0x5a3389:goto L5a3389;
case 0x5a338f:c.instructions+=1;goto B5a338f;
case 0x5a3391:goto L5a3391;
case 0x5a3395:goto L5a3395;
case 0x5a3398:c.instructions+=18;goto B5a3398;
case 0x5a339e:c.instructions+=17;goto B5a339e;
case 0x5a33a1:c.instructions+=16;goto B5a33a1;
case 0x5a33a4:c.instructions+=15;goto B5a33a4;
case 0x5a33a7:c.instructions+=14;goto B5a33a7;
case 0x5a33ad:c.instructions+=13;goto B5a33ad;
case 0x5a33b0:c.instructions+=12;goto B5a33b0;
case 0x5a33b6:c.instructions+=11;goto B5a33b6;
case 0x5a33b9:c.instructions+=10;goto B5a33b9;
case 0x5a33bc:c.instructions+=9;goto B5a33bc;
case 0x5a33c2:c.instructions+=8;goto B5a33c2;
case 0x5a33c5:c.instructions+=7;goto B5a33c5;
case 0x5a33c7:c.instructions+=6;goto B5a33c7;
case 0x5a33cd:c.instructions+=5;goto B5a33cd;
case 0x5a33d3:c.instructions+=4;goto B5a33d3;
case 0x5a33d9:c.instructions+=3;goto B5a33d9;
case 0x5a33db:c.instructions+=2;goto B5a33db;
case 0x5a33de:c.instructions+=1;goto B5a33de;
case 0x5a33e0:goto L5a33e0;
case 0x5a33e7:c.instructions+=1;goto B5a33e7;
case 0x5a33e9:goto L5a33e9;
case 0x5a33eb:c.instructions+=2;goto B5a33eb;
case 0x5a33f1:c.instructions+=1;goto B5a33f1;
case 0x5a33f3:goto L5a33f3;
case 0x5a33f6:c.instructions+=4;goto B5a33f6;
case 0x5a33fc:c.instructions+=3;goto B5a33fc;
case 0x5a33ff:c.instructions+=2;goto B5a33ff;
case 0x5a3405:c.instructions+=1;goto B5a3405;
case 0x5a3410:goto L5a3410;
case 0x5a3411:c.instructions+=9;goto B5a3411;
case 0x5a3413:c.instructions+=8;goto B5a3413;
case 0x5a3416:c.instructions+=7;goto B5a3416;
case 0x5a3419:c.instructions+=6;goto B5a3419;
case 0x5a341a:c.instructions+=5;goto B5a341a;
case 0x5a341c:c.instructions+=4;goto B5a341c;
case 0x5a341f:c.instructions+=3;goto B5a341f;
case 0x5a3423:c.instructions+=2;goto B5a3423;
case 0x5a3424:c.instructions+=1;goto B5a3424;
case 0x5a342a:goto L5a342a;
case 0x5a342d:c.instructions+=3;goto B5a342d;
case 0x5a3433:c.instructions+=2;goto B5a3433;
case 0x5a3435:c.instructions+=1;goto B5a3435;
case 0x5a343b:goto L5a343b;
case 0x5a3441:c.instructions+=2;goto B5a3441;
case 0x5a3444:c.instructions+=1;goto B5a3444;
case 0x5a344a:goto L5a344a;
case 0x5a344d:c.instructions+=21;goto B5a344d;
case 0x5a3453:c.instructions+=20;goto B5a3453;
case 0x5a3459:c.instructions+=19;goto B5a3459;
case 0x5a345f:c.instructions+=18;goto B5a345f;
case 0x5a3460:c.instructions+=17;goto B5a3460;
case 0x5a3466:c.instructions+=16;goto B5a3466;
case 0x5a346b:c.instructions+=15;goto B5a346b;
case 0x5a346d:c.instructions+=14;goto B5a346d;
case 0x5a3471:c.instructions+=13;goto B5a3471;
case 0x5a3473:c.instructions+=12;goto B5a3473;
case 0x5a3475:c.instructions+=11;goto B5a3475;
case 0x5a3477:c.instructions+=10;goto B5a3477;
case 0x5a3479:c.instructions+=9;goto B5a3479;
case 0x5a347b:c.instructions+=8;goto B5a347b;
case 0x5a347d:c.instructions+=7;goto B5a347d;
case 0x5a347f:c.instructions+=6;goto B5a347f;
case 0x5a3481:c.instructions+=5;goto B5a3481;
case 0x5a3483:c.instructions+=4;goto B5a3483;
case 0x5a3485:c.instructions+=3;goto B5a3485;
case 0x5a3487:c.instructions+=2;goto B5a3487;
case 0x5a348a:c.instructions+=1;goto B5a348a;
case 0x5a348f:goto L5a348f;
case 0x5a3493:c.instructions+=19;goto B5a3493;
case 0x5a3496:c.instructions+=18;goto B5a3496;
case 0x5a3498:c.instructions+=17;goto B5a3498;
case 0x5a349a:c.instructions+=16;goto B5a349a;
case 0x5a34a0:c.instructions+=15;goto B5a34a0;
case 0x5a34a6:c.instructions+=14;goto B5a34a6;
case 0x5a34a8:c.instructions+=13;goto B5a34a8;
case 0x5a34ac:c.instructions+=12;goto B5a34ac;
case 0x5a34b2:c.instructions+=11;goto B5a34b2;
case 0x5a34b4:c.instructions+=10;goto B5a34b4;
case 0x5a34b8:c.instructions+=9;goto B5a34b8;
case 0x5a34be:c.instructions+=8;goto B5a34be;
case 0x5a34c4:c.instructions+=7;goto B5a34c4;
case 0x5a34c6:c.instructions+=6;goto B5a34c6;
case 0x5a34ca:c.instructions+=5;goto B5a34ca;
case 0x5a34d0:c.instructions+=4;goto B5a34d0;
case 0x5a34d6:c.instructions+=3;goto B5a34d6;
case 0x5a34da:c.instructions+=2;goto B5a34da;
case 0x5a34e0:c.instructions+=1;goto B5a34e0;
case 0x5a34e6:goto L5a34e6;
case 0x5a34e8:c.instructions+=1;goto B5a34e8;
case 0x5a34ee:goto L5a34ee;
case 0x5a34f1:c.instructions+=5;goto B5a34f1;
case 0x5a34f7:c.instructions+=4;goto B5a34f7;
case 0x5a34fd:c.instructions+=3;goto B5a34fd;
case 0x5a34ff:c.instructions+=2;goto B5a34ff;
case 0x5a3502:c.instructions+=1;goto B5a3502;
case 0x5a3508:goto L5a3508;
case 0x5a350b:c.instructions+=15;goto B5a350b;
case 0x5a350e:c.instructions+=14;goto B5a350e;
case 0x5a3512:c.instructions+=13;goto B5a3512;
case 0x5a3516:c.instructions+=12;goto B5a3516;
case 0x5a351a:c.instructions+=11;goto B5a351a;
case 0x5a3522:c.instructions+=10;goto B5a3522;
case 0x5a3526:c.instructions+=9;goto B5a3526;
case 0x5a3528:c.instructions+=8;goto B5a3528;
case 0x5a352a:c.instructions+=7;goto B5a352a;
case 0x5a352c:c.instructions+=6;goto B5a352c;
case 0x5a352e:c.instructions+=5;goto B5a352e;
case 0x5a3530:c.instructions+=4;goto B5a3530;
case 0x5a3536:c.instructions+=3;goto B5a3536;
case 0x5a3538:c.instructions+=2;goto B5a3538;
case 0x5a353b:c.instructions+=1;goto B5a353b;
case 0x5a3541:goto L5a3541;
case 0x5a3547:c.instructions+=9;goto B5a3547;
case 0x5a3548:c.instructions+=8;goto B5a3548;
case 0x5a354a:c.instructions+=7;goto B5a354a;
case 0x5a354e:c.instructions+=6;goto B5a354e;
case 0x5a3552:c.instructions+=5;goto B5a3552;
case 0x5a3555:c.instructions+=4;goto B5a3555;
case 0x5a3556:c.instructions+=3;goto B5a3556;
case 0x5a3557:c.instructions+=2;goto B5a3557;
case 0x5a3559:c.instructions+=1;goto B5a3559;
case 0x5a355e:goto L5a355e;
case 0x5a3564:c.instructions+=6;goto B5a3564;
case 0x5a3565:c.instructions+=5;goto B5a3565;
case 0x5a3569:c.instructions+=4;goto B5a3569;
case 0x5a356a:c.instructions+=3;goto B5a356a;
case 0x5a356e:c.instructions+=2;goto B5a356e;
case 0x5a356f:c.instructions+=1;goto B5a356f;
case 0x5a3574:goto L5a3574;
case 0x5a3578:c.instructions+=19;goto B5a3578;
case 0x5a357b:c.instructions+=18;goto B5a357b;
case 0x5a3581:c.instructions+=17;goto B5a3581;
case 0x5a3584:c.instructions+=16;goto B5a3584;
case 0x5a3588:c.instructions+=15;goto B5a3588;
case 0x5a358d:c.instructions+=14;goto B5a358d;
case 0x5a3590:c.instructions+=13;goto B5a3590;
case 0x5a3593:c.instructions+=12;goto B5a3593;
case 0x5a3595:c.instructions+=11;goto B5a3595;
case 0x5a3599:c.instructions+=10;goto B5a3599;
case 0x5a359b:c.instructions+=9;goto B5a359b;
case 0x5a359d:c.instructions+=8;goto B5a359d;
case 0x5a35a3:c.instructions+=7;goto B5a35a3;
case 0x5a35a9:c.instructions+=6;goto B5a35a9;
case 0x5a35af:c.instructions+=5;goto B5a35af;
case 0x5a35b3:c.instructions+=4;goto B5a35b3;
case 0x5a35b9:c.instructions+=3;goto B5a35b9;
case 0x5a35bb:c.instructions+=2;goto B5a35bb;
case 0x5a35be:c.instructions+=1;goto B5a35be;
case 0x5a35c0:goto L5a35c0;
case 0x5a35c8:c.instructions+=3;goto B5a35c8;
case 0x5a35d0:c.instructions+=2;goto B5a35d0;
case 0x5a35d8:c.instructions+=1;goto B5a35d8;
case 0x5a35da:goto L5a35da;
case 0x5a35de:c.instructions+=6;goto B5a35de;
case 0x5a35df:c.instructions+=5;goto B5a35df;
case 0x5a35e3:c.instructions+=4;goto B5a35e3;
case 0x5a35e4:c.instructions+=3;goto B5a35e4;
case 0x5a35e8:c.instructions+=2;goto B5a35e8;
case 0x5a35e9:c.instructions+=1;goto B5a35e9;
case 0x5a35ee:goto L5a35ee;
case 0x5a35f1:goto L5a35f1;
case 0x5a35f4:c.instructions+=3;goto B5a35f4;
case 0x5a35f8:c.instructions+=2;goto B5a35f8;
case 0x5a35f9:c.instructions+=1;goto B5a35f9;
case 0x5a35fe:goto L5a35fe;
case 0x5a3601:c.instructions+=10;goto B5a3601;
case 0x5a3607:c.instructions+=9;goto B5a3607;
case 0x5a3608:c.instructions+=8;goto B5a3608;
case 0x5a360c:c.instructions+=7;goto B5a360c;
case 0x5a360d:c.instructions+=6;goto B5a360d;
case 0x5a3611:c.instructions+=5;goto B5a3611;
case 0x5a3612:c.instructions+=4;goto B5a3612;
case 0x5a361a:c.instructions+=3;goto B5a361a;
case 0x5a3622:c.instructions+=2;goto B5a3622;
case 0x5a362a:c.instructions+=1;goto B5a362a;
case 0x5a362f:goto L5a362f;
case 0x5a3633:c.instructions+=4;goto B5a3633;
case 0x5a3634:c.instructions+=3;goto B5a3634;
case 0x5a3638:c.instructions+=2;goto B5a3638;
case 0x5a3639:c.instructions+=1;goto B5a3639;
case 0x5a363e:goto L5a363e;
case 0x5a3641:c.instructions+=7;goto B5a3641;
case 0x5a3646:c.instructions+=6;goto B5a3646;
case 0x5a3647:c.instructions+=5;goto B5a3647;
case 0x5a364b:c.instructions+=4;goto B5a364b;
case 0x5a364c:c.instructions+=3;goto B5a364c;
case 0x5a3650:c.instructions+=2;goto B5a3650;
case 0x5a3651:c.instructions+=1;goto B5a3651;
case 0x5a3656:goto L5a3656;
case 0x5a365a:c.instructions+=19;goto B5a365a;
case 0x5a365d:c.instructions+=18;goto B5a365d;
case 0x5a3663:c.instructions+=17;goto B5a3663;
case 0x5a3668:c.instructions+=16;goto B5a3668;
case 0x5a366c:c.instructions+=15;goto B5a366c;
case 0x5a366f:c.instructions+=14;goto B5a366f;
case 0x5a3672:c.instructions+=13;goto B5a3672;
case 0x5a3674:c.instructions+=12;goto B5a3674;
case 0x5a3678:c.instructions+=11;goto B5a3678;
case 0x5a367a:c.instructions+=10;goto B5a367a;
case 0x5a367d:c.instructions+=9;goto B5a367d;
case 0x5a367f:c.instructions+=8;goto B5a367f;
case 0x5a3685:c.instructions+=7;goto B5a3685;
case 0x5a368b:c.instructions+=6;goto B5a368b;
case 0x5a3691:c.instructions+=5;goto B5a3691;
case 0x5a3695:c.instructions+=4;goto B5a3695;
case 0x5a369b:c.instructions+=3;goto B5a369b;
case 0x5a369d:c.instructions+=2;goto B5a369d;
case 0x5a36a0:c.instructions+=1;goto B5a36a0;
case 0x5a36a2:goto L5a36a2;
case 0x5a36a6:c.instructions+=6;goto B5a36a6;
case 0x5a36a7:c.instructions+=5;goto B5a36a7;
case 0x5a36aa:c.instructions+=4;goto B5a36aa;
case 0x5a36b2:c.instructions+=3;goto B5a36b2;
case 0x5a36ba:c.instructions+=2;goto B5a36ba;
case 0x5a36c2:c.instructions+=1;goto B5a36c2;
case 0x5a36c7:goto L5a36c7;
case 0x5a36c8:c.instructions+=4;goto B5a36c8;
case 0x5a36c9:c.instructions+=3;goto B5a36c9;
case 0x5a36cb:c.instructions+=2;goto B5a36cb;
case 0x5a36cc:c.instructions+=1;goto B5a36cc;
case 0x5a36cd:goto L5a36cd;
case 0x5a36d1:c.instructions+=6;goto B5a36d1;
case 0x5a36d2:c.instructions+=5;goto B5a36d2;
case 0x5a36d6:c.instructions+=4;goto B5a36d6;
case 0x5a36d7:c.instructions+=3;goto B5a36d7;
case 0x5a36db:c.instructions+=2;goto B5a36db;
case 0x5a36dc:c.instructions+=1;goto B5a36dc;
case 0x5a36e1:goto L5a36e1;
case 0x5a36e4:c.instructions+=4;goto B5a36e4;
case 0x5a36e8:c.instructions+=3;goto B5a36e8;
case 0x5a36e9:c.instructions+=2;goto B5a36e9;
case 0x5a36ec:c.instructions+=1;goto B5a36ec;
case 0x5a36f1:goto L5a36f1;
case 0x5a36f2:c.instructions+=4;goto B5a36f2;
case 0x5a36f3:c.instructions+=3;goto B5a36f3;
case 0x5a36f5:c.instructions+=2;goto B5a36f5;
case 0x5a36f6:c.instructions+=1;goto B5a36f6;
case 0x5a36f7:goto L5a36f7;
case 0x5a36f9:goto L5a36f9;
case 0x5a36fa:c.instructions+=4;goto B5a36fa;
case 0x5a36fb:c.instructions+=3;goto B5a36fb;
case 0x5a36fd:c.instructions+=2;goto B5a36fd;
case 0x5a36fe:c.instructions+=1;goto B5a36fe;
case 0x5a3700:goto L5a3700;
case 0x5a3703:c.instructions+=10;goto B5a3703;
case 0x5a3704:c.instructions+=9;goto B5a3704;
case 0x5a3705:c.instructions+=8;goto B5a3705;
case 0x5a3706:c.instructions+=7;goto B5a3706;
case 0x5a3707:c.instructions+=6;goto B5a3707;
case 0x5a3709:c.instructions+=5;goto B5a3709;
case 0x5a370d:c.instructions+=4;goto B5a370d;
case 0x5a370e:c.instructions+=3;goto B5a370e;
case 0x5a3714:c.instructions+=2;goto B5a3714;
case 0x5a3715:c.instructions+=1;goto B5a3715;
case 0x5a371a:goto L5a371a;
case 0x5a371c:c.instructions+=7;goto B5a371c;
case 0x5a371e:c.instructions+=6;goto B5a371e;
case 0x5a3721:c.instructions+=5;goto B5a3721;
case 0x5a3725:c.instructions+=4;goto B5a3725;
case 0x5a3728:c.instructions+=3;goto B5a3728;
case 0x5a372c:c.instructions+=2;goto B5a372c;
case 0x5a3732:c.instructions+=1;goto B5a3732;
case 0x5a3734:goto L5a3734;
case 0x5a3738:c.instructions+=1;goto B5a3738;
case 0x5a3740:goto L5a3740;
case 0x5a3743:c.instructions+=13;goto B5a3743;
case 0x5a3746:c.instructions+=12;goto B5a3746;
case 0x5a3749:c.instructions+=11;goto B5a3749;
case 0x5a374c:c.instructions+=10;goto B5a374c;
case 0x5a374f:c.instructions+=9;goto B5a374f;
case 0x5a3752:c.instructions+=8;goto B5a3752;
case 0x5a3754:c.instructions+=7;goto B5a3754;
case 0x5a3757:c.instructions+=6;goto B5a3757;
case 0x5a3759:c.instructions+=5;goto B5a3759;
case 0x5a375b:c.instructions+=4;goto B5a375b;
case 0x5a3761:c.instructions+=3;goto B5a3761;
case 0x5a3763:c.instructions+=2;goto B5a3763;
case 0x5a3766:c.instructions+=1;goto B5a3766;
case 0x5a3768:goto L5a3768;
case 0x5a376a:c.instructions+=2;goto B5a376a;
case 0x5a3770:c.instructions+=1;goto B5a3770;
case 0x5a3772:goto L5a3772;
case 0x5a3776:c.instructions+=3;goto B5a3776;
case 0x5a377a:c.instructions+=2;goto B5a377a;
case 0x5a377c:c.instructions+=1;goto B5a377c;
case 0x5a377e:goto L5a377e;
case 0x5a3780:c.instructions+=13;goto B5a3780;
case 0x5a3783:c.instructions+=12;goto B5a3783;
case 0x5a3787:c.instructions+=11;goto B5a3787;
case 0x5a378b:c.instructions+=10;goto B5a378b;
case 0x5a378d:c.instructions+=9;goto B5a378d;
case 0x5a378e:c.instructions+=8;goto B5a378e;
case 0x5a3790:c.instructions+=7;goto B5a3790;
case 0x5a3792:c.instructions+=6;goto B5a3792;
case 0x5a3795:c.instructions+=5;goto B5a3795;
case 0x5a379c:c.instructions+=4;goto B5a379c;
case 0x5a379f:c.instructions+=3;goto B5a379f;
case 0x5a37a1:c.instructions+=2;goto B5a37a1;
case 0x5a37a4:c.instructions+=1;goto B5a37a4;
case 0x5a37a6:goto L5a37a6;
case 0x5a37a9:c.instructions+=6;goto B5a37a9;
case 0x5a37ab:c.instructions+=5;goto B5a37ab;
case 0x5a37ad:c.instructions+=4;goto B5a37ad;
case 0x5a37af:c.instructions+=3;goto B5a37af;
case 0x5a37b2:c.instructions+=2;goto B5a37b2;
case 0x5a37b8:c.instructions+=1;goto B5a37b8;
case 0x5a37ba:goto L5a37ba;
case 0x5a37bd:c.instructions+=3;goto B5a37bd;
case 0x5a37bf:c.instructions+=2;goto B5a37bf;
case 0x5a37c2:c.instructions+=1;goto B5a37c2;
case 0x5a37c4:goto L5a37c4;
case 0x5a37c7:c.instructions+=4;goto B5a37c7;
case 0x5a37c9:c.instructions+=3;goto B5a37c9;
case 0x5a37cb:c.instructions+=2;goto B5a37cb;
case 0x5a37d1:c.instructions+=1;goto B5a37d1;
case 0x5a37d3:goto L5a37d3;
case 0x5a37d5:c.instructions+=1;goto B5a37d5;
case 0x5a37df:goto L5a37df;
case 0x5a37e6:goto L5a37e6;
case 0x5a37ec:c.instructions+=4;goto B5a37ec;
case 0x5a37f2:c.instructions+=3;goto B5a37f2;
case 0x5a37f4:c.instructions+=2;goto B5a37f4;
case 0x5a37f7:c.instructions+=1;goto B5a37f7;
case 0x5a37f9:goto L5a37f9;
case 0x5a37ff:c.instructions+=1;goto B5a37ff;
case 0x5a3801:goto L5a3801;
case 0x5a3807:goto L5a3807;
case 0x5a3809:c.instructions+=10;goto B5a3809;
case 0x5a380b:c.instructions+=9;goto B5a380b;
case 0x5a380f:c.instructions+=8;goto B5a380f;
case 0x5a3813:c.instructions+=7;goto B5a3813;
case 0x5a3816:c.instructions+=6;goto B5a3816;
case 0x5a3818:c.instructions+=5;goto B5a3818;
case 0x5a381a:c.instructions+=4;goto B5a381a;
case 0x5a381e:c.instructions+=3;goto B5a381e;
case 0x5a3821:c.instructions+=2;goto B5a3821;
case 0x5a3827:c.instructions+=1;goto B5a3827;
case 0x5a3829:goto L5a3829;
case 0x5a382b:c.instructions+=5;goto B5a382b;
case 0x5a382f:c.instructions+=4;goto B5a382f;
case 0x5a3835:c.instructions+=3;goto B5a3835;
case 0x5a3837:c.instructions+=2;goto B5a3837;
case 0x5a383a:c.instructions+=1;goto B5a383a;
case 0x5a383c:goto L5a383c;
case 0x5a3840:c.instructions+=1;goto B5a3840;
case 0x5a3842:goto L5a3842;
case 0x5a3848:goto L5a3848;
case 0x5a384a:c.instructions+=8;goto B5a384a;
case 0x5a3850:c.instructions+=7;goto B5a3850;
case 0x5a3853:c.instructions+=6;goto B5a3853;
case 0x5a3859:c.instructions+=5;goto B5a3859;
case 0x5a385d:c.instructions+=4;goto B5a385d;
case 0x5a3863:c.instructions+=3;goto B5a3863;
case 0x5a3865:c.instructions+=2;goto B5a3865;
case 0x5a3868:c.instructions+=1;goto B5a3868;
case 0x5a386a:goto L5a386a;
case 0x5a386c:c.instructions+=1;goto B5a386c;
case 0x5a386e:goto L5a386e;
case 0x5a3873:goto L5a3873;
case 0x5a3879:c.instructions+=10;goto B5a3879;
case 0x5a387d:c.instructions+=9;goto B5a387d;
case 0x5a3881:c.instructions+=8;goto B5a3881;
case 0x5a3883:c.instructions+=7;goto B5a3883;
case 0x5a3887:c.instructions+=6;goto B5a3887;
case 0x5a3889:c.instructions+=5;goto B5a3889;
case 0x5a388f:c.instructions+=4;goto B5a388f;
case 0x5a3895:c.instructions+=3;goto B5a3895;
case 0x5a3897:c.instructions+=2;goto B5a3897;
case 0x5a389a:c.instructions+=1;goto B5a389a;
case 0x5a389c:goto L5a389c;
case 0x5a389e:c.instructions+=1;goto B5a389e;
case 0x5a38a4:goto L5a38a4;
case 0x5a38a8:c.instructions+=11;goto B5a38a8;
case 0x5a38ab:c.instructions+=10;goto B5a38ab;
case 0x5a38ac:c.instructions+=9;goto B5a38ac;
case 0x5a38b0:c.instructions+=8;goto B5a38b0;
case 0x5a38b4:c.instructions+=7;goto B5a38b4;
case 0x5a38b7:c.instructions+=6;goto B5a38b7;
case 0x5a38ba:c.instructions+=5;goto B5a38ba;
case 0x5a38bd:c.instructions+=4;goto B5a38bd;
case 0x5a38c0:c.instructions+=3;goto B5a38c0;
case 0x5a38c6:c.instructions+=2;goto B5a38c6;
case 0x5a38ca:c.instructions+=1;goto B5a38ca;
case 0x5a38d0:goto L5a38d0;
case 0x5a38d1:c.instructions+=5;goto B5a38d1;
case 0x5a38d2:c.instructions+=4;goto B5a38d2;
case 0x5a38d3:c.instructions+=3;goto B5a38d3;
case 0x5a38d4:c.instructions+=2;goto B5a38d4;
case 0x5a38d7:c.instructions+=1;goto B5a38d7;
case 0x5a38e0:goto L5a38e0;
case 0x5a38e1:c.instructions+=14;goto B5a38e1;
case 0x5a38e3:c.instructions+=13;goto B5a38e3;
case 0x5a38e6:c.instructions+=12;goto B5a38e6;
case 0x5a38ec:c.instructions+=11;goto B5a38ec;
case 0x5a38f1:c.instructions+=10;goto B5a38f1;
case 0x5a38f2:c.instructions+=9;goto B5a38f2;
case 0x5a38f6:c.instructions+=8;goto B5a38f6;
case 0x5a38fb:c.instructions+=7;goto B5a38fb;
case 0x5a38fc:c.instructions+=6;goto B5a38fc;
case 0x5a38fe:c.instructions+=5;goto B5a38fe;
case 0x5a3900:c.instructions+=4;goto B5a3900;
case 0x5a3901:c.instructions+=3;goto B5a3901;
case 0x5a3903:c.instructions+=2;goto B5a3903;
case 0x5a3907:c.instructions+=1;goto B5a3907;
case 0x5a3909:goto L5a3909;
case 0x5a390f:c.instructions+=1;goto B5a390f;
case 0x5a3911:goto L5a3911;
case 0x5a3917:c.instructions+=1;goto B5a3917;
case 0x5a391b:goto L5a391b;
case 0x5a3920:c.instructions+=2;goto B5a3920;
case 0x5a3922:c.instructions+=1;goto B5a3922;
case 0x5a3924:goto L5a3924;
case 0x5a392a:c.instructions+=2;goto B5a392a;
case 0x5a392d:c.instructions+=1;goto B5a392d;
case 0x5a392f:goto L5a392f;
case 0x5a3935:c.instructions+=1;goto B5a3935;
case 0x5a3939:goto L5a3939;
case 0x5a393f:c.instructions+=8;goto B5a393f;
case 0x5a3943:c.instructions+=7;goto B5a3943;
case 0x5a394a:c.instructions+=6;goto B5a394a;
case 0x5a3950:c.instructions+=5;goto B5a3950;
case 0x5a3953:c.instructions+=4;goto B5a3953;
case 0x5a3957:c.instructions+=3;goto B5a3957;
case 0x5a395a:c.instructions+=2;goto B5a395a;
case 0x5a395e:c.instructions+=1;goto B5a395e;
case 0x5a3962:goto L5a3962;
case 0x5a3965:c.instructions+=28;goto B5a3965;
case 0x5a396b:c.instructions+=27;goto B5a396b;
case 0x5a396e:c.instructions+=26;goto B5a396e;
case 0x5a3970:c.instructions+=25;goto B5a3970;
case 0x5a3974:c.instructions+=24;goto B5a3974;
case 0x5a397a:c.instructions+=23;goto B5a397a;
case 0x5a397d:c.instructions+=22;goto B5a397d;
case 0x5a397f:c.instructions+=21;goto B5a397f;
case 0x5a3983:c.instructions+=20;goto B5a3983;
case 0x5a3989:c.instructions+=19;goto B5a3989;
case 0x5a398b:c.instructions+=18;goto B5a398b;
case 0x5a398f:c.instructions+=17;goto B5a398f;
case 0x5a3991:c.instructions+=16;goto B5a3991;
case 0x5a3994:c.instructions+=15;goto B5a3994;
case 0x5a3998:c.instructions+=14;goto B5a3998;
case 0x5a399b:c.instructions+=13;goto B5a399b;
case 0x5a39a2:c.instructions+=12;goto B5a39a2;
case 0x5a39a6:c.instructions+=11;goto B5a39a6;
case 0x5a39a7:c.instructions+=10;goto B5a39a7;
case 0x5a39a8:c.instructions+=9;goto B5a39a8;
case 0x5a39af:c.instructions+=8;goto B5a39af;
case 0x5a39b6:c.instructions+=7;goto B5a39b6;
case 0x5a39b8:c.instructions+=6;goto B5a39b8;
case 0x5a39bf:c.instructions+=5;goto B5a39bf;
case 0x5a39c6:c.instructions+=4;goto B5a39c6;
case 0x5a39ca:c.instructions+=3;goto B5a39ca;
case 0x5a39cb:c.instructions+=2;goto B5a39cb;
case 0x5a39d2:c.instructions+=1;goto B5a39d2;
case 0x5a39d7:goto L5a39d7;
case 0x5a39db:c.instructions+=5;goto B5a39db;
case 0x5a39de:c.instructions+=4;goto B5a39de;
case 0x5a39e1:c.instructions+=3;goto B5a39e1;
case 0x5a39e4:c.instructions+=2;goto B5a39e4;
case 0x5a39e6:c.instructions+=1;goto B5a39e6;
case 0x5a39ec:goto L5a39ec;
case 0x5a39ef:c.instructions+=13;goto B5a39ef;
case 0x5a39f3:c.instructions+=12;goto B5a39f3;
case 0x5a39f9:c.instructions+=11;goto B5a39f9;
case 0x5a39fc:c.instructions+=10;goto B5a39fc;
case 0x5a39ff:c.instructions+=9;goto B5a39ff;
case 0x5a3a00:c.instructions+=8;goto B5a3a00;
case 0x5a3a06:c.instructions+=7;goto B5a3a06;
case 0x5a3a07:c.instructions+=6;goto B5a3a07;
case 0x5a3a0b:c.instructions+=5;goto B5a3a0b;
case 0x5a3a0f:c.instructions+=4;goto B5a3a0f;
case 0x5a3a15:c.instructions+=3;goto B5a3a15;
case 0x5a3a1b:c.instructions+=2;goto B5a3a1b;
case 0x5a3a1f:c.instructions+=1;goto B5a3a1f;
case 0x5a3a24:goto L5a3a24;
case 0x5a3a27:c.instructions+=7;goto B5a3a27;
case 0x5a3a2b:c.instructions+=6;goto B5a3a2b;
case 0x5a3a2e:c.instructions+=5;goto B5a3a2e;
case 0x5a3a31:c.instructions+=4;goto B5a3a31;
case 0x5a3a35:c.instructions+=3;goto B5a3a35;
case 0x5a3a3b:c.instructions+=2;goto B5a3a3b;
case 0x5a3a3f:c.instructions+=1;goto B5a3a3f;
case 0x5a3a41:goto L5a3a41;
case 0x5a3a48:c.instructions+=5;goto B5a3a48;
case 0x5a3a4c:c.instructions+=4;goto B5a3a4c;
case 0x5a3a50:c.instructions+=3;goto B5a3a50;
case 0x5a3a56:c.instructions+=2;goto B5a3a56;
case 0x5a3a5a:c.instructions+=1;goto B5a3a5a;
case 0x5a3a5e:goto L5a3a5e;
case 0x5a3a62:c.instructions+=4;goto B5a3a62;
case 0x5a3a63:c.instructions+=3;goto B5a3a63;
case 0x5a3a69:c.instructions+=2;goto B5a3a69;
case 0x5a3a6c:c.instructions+=1;goto B5a3a6c;
case 0x5a3a71:goto L5a3a71;
case 0x5a3a75:c.instructions+=3;goto B5a3a75;
case 0x5a3a79:c.instructions+=2;goto B5a3a79;
case 0x5a3a7a:c.instructions+=1;goto B5a3a7a;
case 0x5a3a7f:goto L5a3a7f;
case 0x5a3a83:c.instructions+=33;goto B5a3a83;
case 0x5a3a87:c.instructions+=32;goto B5a3a87;
case 0x5a3a8a:c.instructions+=31;goto B5a3a8a;
case 0x5a3a8c:c.instructions+=30;goto B5a3a8c;
case 0x5a3a8f:c.instructions+=29;goto B5a3a8f;
case 0x5a3a93:c.instructions+=28;goto B5a3a93;
case 0x5a3a95:c.instructions+=27;goto B5a3a95;
case 0x5a3a99:c.instructions+=26;goto B5a3a99;
case 0x5a3a9d:c.instructions+=25;goto B5a3a9d;
case 0x5a3aa1:c.instructions+=24;goto B5a3aa1;
case 0x5a3aa5:c.instructions+=23;goto B5a3aa5;
case 0x5a3aa9:c.instructions+=22;goto B5a3aa9;
case 0x5a3aab:c.instructions+=21;goto B5a3aab;
case 0x5a3aaf:c.instructions+=20;goto B5a3aaf;
case 0x5a3ab3:c.instructions+=19;goto B5a3ab3;
case 0x5a3ab6:c.instructions+=18;goto B5a3ab6;
case 0x5a3ab9:c.instructions+=17;goto B5a3ab9;
case 0x5a3abb:c.instructions+=16;goto B5a3abb;
case 0x5a3abd:c.instructions+=15;goto B5a3abd;
case 0x5a3ac0:c.instructions+=14;goto B5a3ac0;
case 0x5a3ac6:c.instructions+=13;goto B5a3ac6;
case 0x5a3ac8:c.instructions+=12;goto B5a3ac8;
case 0x5a3aca:c.instructions+=11;goto B5a3aca;
case 0x5a3ace:c.instructions+=10;goto B5a3ace;
case 0x5a3ad2:c.instructions+=9;goto B5a3ad2;
case 0x5a3ad4:c.instructions+=8;goto B5a3ad4;
case 0x5a3ad6:c.instructions+=7;goto B5a3ad6;
case 0x5a3ada:c.instructions+=6;goto B5a3ada;
case 0x5a3ae0:c.instructions+=5;goto B5a3ae0;
case 0x5a3ae6:c.instructions+=4;goto B5a3ae6;
case 0x5a3aea:c.instructions+=3;goto B5a3aea;
case 0x5a3aec:c.instructions+=2;goto B5a3aec;
case 0x5a3aef:c.instructions+=1;goto B5a3aef;
case 0x5a3af1:goto L5a3af1;
case 0x5a3af3:c.instructions+=2;goto B5a3af3;
case 0x5a3af9:c.instructions+=1;goto B5a3af9;
case 0x5a3aff:goto L5a3aff;
case 0x5a3b03:c.instructions+=5;goto B5a3b03;
case 0x5a3b05:c.instructions+=4;goto B5a3b05;
case 0x5a3b0b:c.instructions+=3;goto B5a3b0b;
case 0x5a3b0d:c.instructions+=2;goto B5a3b0d;
case 0x5a3b10:c.instructions+=1;goto B5a3b10;
case 0x5a3b12:goto L5a3b12;
case 0x5a3b18:goto L5a3b18;
case 0x5a3b1e:c.instructions+=10;goto B5a3b1e;
case 0x5a3b24:c.instructions+=9;goto B5a3b24;
case 0x5a3b28:c.instructions+=8;goto B5a3b28;
case 0x5a3b2c:c.instructions+=7;goto B5a3b2c;
case 0x5a3b32:c.instructions+=6;goto B5a3b32;
case 0x5a3b36:c.instructions+=5;goto B5a3b36;
case 0x5a3b3c:c.instructions+=4;goto B5a3b3c;
case 0x5a3b40:c.instructions+=3;goto B5a3b40;
case 0x5a3b42:c.instructions+=2;goto B5a3b42;
case 0x5a3b45:c.instructions+=1;goto B5a3b45;
case 0x5a3b47:goto L5a3b47;
case 0x5a3b4d:c.instructions+=1;goto B5a3b4d;
case 0x5a3b4f:goto L5a3b4f;
case 0x5a3b53:c.instructions+=5;goto B5a3b53;
case 0x5a3b57:c.instructions+=4;goto B5a3b57;
case 0x5a3b5d:c.instructions+=3;goto B5a3b5d;
case 0x5a3b5f:c.instructions+=2;goto B5a3b5f;
case 0x5a3b62:c.instructions+=1;goto B5a3b62;
case 0x5a3b64:goto L5a3b64;
case 0x5a3b6a:c.instructions+=4;goto B5a3b6a;
case 0x5a3b72:c.instructions+=3;goto B5a3b72;
case 0x5a3b78:c.instructions+=2;goto B5a3b78;
case 0x5a3b7a:c.instructions+=1;goto B5a3b7a;
case 0x5a3b7c:goto L5a3b7c;
case 0x5a3b7e:goto L5a3b7e;
case 0x5a3b82:c.instructions+=4;goto B5a3b82;
case 0x5a3b88:c.instructions+=3;goto B5a3b88;
case 0x5a3b8a:c.instructions+=2;goto B5a3b8a;
case 0x5a3b8d:c.instructions+=1;goto B5a3b8d;
case 0x5a3b8f:goto L5a3b8f;
case 0x5a3b93:c.instructions+=1;goto B5a3b93;
case 0x5a3b96:goto L5a3b96;
case 0x5a3b99:c.instructions+=13;goto B5a3b99;
case 0x5a3b9b:c.instructions+=12;goto B5a3b9b;
case 0x5a3ba3:c.instructions+=11;goto B5a3ba3;
case 0x5a3ba5:c.instructions+=10;goto B5a3ba5;
case 0x5a3ba7:c.instructions+=9;goto B5a3ba7;
case 0x5a3bad:c.instructions+=8;goto B5a3bad;
case 0x5a3baf:c.instructions+=7;goto B5a3baf;
case 0x5a3bb3:c.instructions+=6;goto B5a3bb3;
case 0x5a3bb7:c.instructions+=5;goto B5a3bb7;
case 0x5a3bbd:c.instructions+=4;goto B5a3bbd;
case 0x5a3bbf:c.instructions+=3;goto B5a3bbf;
case 0x5a3bc3:c.instructions+=2;goto B5a3bc3;
case 0x5a3bc5:c.instructions+=1;goto B5a3bc5;
case 0x5a3bc7:goto L5a3bc7;
case 0x5a3bce:c.instructions+=4;goto B5a3bce;
case 0x5a3bd2:c.instructions+=3;goto B5a3bd2;
case 0x5a3bd6:c.instructions+=2;goto B5a3bd6;
case 0x5a3bdc:c.instructions+=1;goto B5a3bdc;
case 0x5a3be0:goto L5a3be0;
case 0x5a3be4:c.instructions+=4;goto B5a3be4;
case 0x5a3be5:c.instructions+=3;goto B5a3be5;
case 0x5a3beb:c.instructions+=2;goto B5a3beb;
case 0x5a3bee:c.instructions+=1;goto B5a3bee;
case 0x5a3bf3:goto L5a3bf3;
case 0x5a3bf7:c.instructions+=3;goto B5a3bf7;
case 0x5a3bfb:c.instructions+=2;goto B5a3bfb;
case 0x5a3bfc:c.instructions+=1;goto B5a3bfc;
case 0x5a3c01:goto L5a3c01;
case 0x5a3c05:c.instructions+=15;goto B5a3c05;
case 0x5a3c09:c.instructions+=14;goto B5a3c09;
case 0x5a3c0d:c.instructions+=13;goto B5a3c0d;
case 0x5a3c11:c.instructions+=12;goto B5a3c11;
case 0x5a3c14:c.instructions+=11;goto B5a3c14;
case 0x5a3c16:c.instructions+=10;goto B5a3c16;
case 0x5a3c18:c.instructions+=9;goto B5a3c18;
case 0x5a3c1a:c.instructions+=8;goto B5a3c1a;
case 0x5a3c1e:c.instructions+=7;goto B5a3c1e;
case 0x5a3c20:c.instructions+=6;goto B5a3c20;
case 0x5a3c24:c.instructions+=5;goto B5a3c24;
case 0x5a3c28:c.instructions+=4;goto B5a3c28;
case 0x5a3c2a:c.instructions+=3;goto B5a3c2a;
case 0x5a3c2d:c.instructions+=2;goto B5a3c2d;
case 0x5a3c2f:c.instructions+=1;goto B5a3c2f;
case 0x5a3c31:goto L5a3c31;
case 0x5a3c35:c.instructions+=2;goto B5a3c35;
case 0x5a3c3b:c.instructions+=1;goto B5a3c3b;
case 0x5a3c42:goto L5a3c42;
case 0x5a3c44:c.instructions+=9;goto B5a3c44;
case 0x5a3c46:c.instructions+=8;goto B5a3c46;
case 0x5a3c49:c.instructions+=7;goto B5a3c49;
case 0x5a3c4d:c.instructions+=6;goto B5a3c4d;
case 0x5a3c50:c.instructions+=5;goto B5a3c50;
case 0x5a3c53:c.instructions+=4;goto B5a3c53;
case 0x5a3c55:c.instructions+=3;goto B5a3c55;
case 0x5a3c5b:c.instructions+=2;goto B5a3c5b;
case 0x5a3c5d:c.instructions+=1;goto B5a3c5d;
case 0x5a3c5f:goto L5a3c5f;
case 0x5a3c65:c.instructions+=1;goto B5a3c65;
case 0x5a3c6c:goto L5a3c6c;
case 0x5a3c6d:c.instructions+=6;goto B5a3c6d;
case 0x5a3c70:c.instructions+=5;goto B5a3c70;
case 0x5a3c73:c.instructions+=4;goto B5a3c73;
case 0x5a3c74:c.instructions+=3;goto B5a3c74;
case 0x5a3c78:c.instructions+=2;goto B5a3c78;
case 0x5a3c79:c.instructions+=1;goto B5a3c79;
case 0x5a3c7e:goto L5a3c7e;
case 0x5a3c81:c.instructions+=3;goto B5a3c81;
case 0x5a3c84:c.instructions+=2;goto B5a3c84;
case 0x5a3c86:c.instructions+=1;goto B5a3c86;
case 0x5a3c8c:goto L5a3c8c;
case 0x5a3c90:c.instructions+=17;goto B5a3c90;
case 0x5a3c94:c.instructions+=16;goto B5a3c94;
case 0x5a3c96:c.instructions+=15;goto B5a3c96;
case 0x5a3c98:c.instructions+=14;goto B5a3c98;
case 0x5a3c9a:c.instructions+=13;goto B5a3c9a;
case 0x5a3c9c:c.instructions+=12;goto B5a3c9c;
case 0x5a3c9e:c.instructions+=11;goto B5a3c9e;
case 0x5a3ca0:c.instructions+=10;goto B5a3ca0;
case 0x5a3ca4:c.instructions+=9;goto B5a3ca4;
case 0x5a3ca8:c.instructions+=8;goto B5a3ca8;
case 0x5a3caa:c.instructions+=7;goto B5a3caa;
case 0x5a3cb0:c.instructions+=6;goto B5a3cb0;
case 0x5a3cb4:c.instructions+=5;goto B5a3cb4;
case 0x5a3cb8:c.instructions+=4;goto B5a3cb8;
case 0x5a3cbc:c.instructions+=3;goto B5a3cbc;
case 0x5a3cbe:c.instructions+=2;goto B5a3cbe;
case 0x5a3cc1:c.instructions+=1;goto B5a3cc1;
case 0x5a3cc3:goto L5a3cc3;
case 0x5a3cc7:c.instructions+=4;goto B5a3cc7;
case 0x5a3ccb:c.instructions+=3;goto B5a3ccb;
case 0x5a3ccd:c.instructions+=2;goto B5a3ccd;
case 0x5a3ccf:c.instructions+=1;goto B5a3ccf;
case 0x5a3cd1:goto L5a3cd1;
case 0x5a3cd7:c.instructions+=5;goto B5a3cd7;
case 0x5a3cdd:c.instructions+=4;goto B5a3cdd;
case 0x5a3ce3:c.instructions+=3;goto B5a3ce3;
case 0x5a3ce5:c.instructions+=2;goto B5a3ce5;
case 0x5a3ce8:c.instructions+=1;goto B5a3ce8;
case 0x5a3cea:goto L5a3cea;
case 0x5a3cf0:c.instructions+=2;goto B5a3cf0;
case 0x5a3cf6:c.instructions+=1;goto B5a3cf6;
case 0x5a3cf8:goto L5a3cf8;
case 0x5a3cfa:c.instructions+=1;goto B5a3cfa;
case 0x5a3d00:goto L5a3d00;
case 0x5a3d03:c.instructions+=8;goto B5a3d03;
case 0x5a3d05:c.instructions+=7;goto B5a3d05;
case 0x5a3d07:c.instructions+=6;goto B5a3d07;
case 0x5a3d09:c.instructions+=5;goto B5a3d09;
case 0x5a3d0d:c.instructions+=4;goto B5a3d0d;
case 0x5a3d0f:c.instructions+=3;goto B5a3d0f;
case 0x5a3d13:c.instructions+=2;goto B5a3d13;
case 0x5a3d15:c.instructions+=1;goto B5a3d15;
case 0x5a3d1b:goto L5a3d1b;
case 0x5a3d21:c.instructions+=4;goto B5a3d21;
case 0x5a3d27:c.instructions+=3;goto B5a3d27;
case 0x5a3d29:c.instructions+=2;goto B5a3d29;
case 0x5a3d2c:c.instructions+=1;goto B5a3d2c;
case 0x5a3d2e:goto L5a3d2e;
case 0x5a3d31:c.instructions+=20;goto B5a3d31;
case 0x5a3d37:c.instructions+=19;goto B5a3d37;
case 0x5a3d3c:c.instructions+=18;goto B5a3d3c;
case 0x5a3d3f:c.instructions+=17;goto B5a3d3f;
case 0x5a3d41:c.instructions+=16;goto B5a3d41;
case 0x5a3d43:c.instructions+=15;goto B5a3d43;
case 0x5a3d45:c.instructions+=14;goto B5a3d45;
case 0x5a3d47:c.instructions+=13;goto B5a3d47;
case 0x5a3d49:c.instructions+=12;goto B5a3d49;
case 0x5a3d4b:c.instructions+=11;goto B5a3d4b;
case 0x5a3d4d:c.instructions+=10;goto B5a3d4d;
case 0x5a3d4f:c.instructions+=9;goto B5a3d4f;
case 0x5a3d51:c.instructions+=8;goto B5a3d51;
case 0x5a3d53:c.instructions+=7;goto B5a3d53;
case 0x5a3d55:c.instructions+=6;goto B5a3d55;
case 0x5a3d57:c.instructions+=5;goto B5a3d57;
case 0x5a3d59:c.instructions+=4;goto B5a3d59;
case 0x5a3d5f:c.instructions+=3;goto B5a3d5f;
case 0x5a3d61:c.instructions+=2;goto B5a3d61;
case 0x5a3d64:c.instructions+=1;goto B5a3d64;
case 0x5a3d66:goto L5a3d66;
case 0x5a3d6a:c.instructions+=4;goto B5a3d6a;
case 0x5a3d6e:c.instructions+=3;goto B5a3d6e;
case 0x5a3d70:c.instructions+=2;goto B5a3d70;
case 0x5a3d73:c.instructions+=1;goto B5a3d73;
case 0x5a3d75:goto L5a3d75;
case 0x5a3d78:c.instructions+=18;goto B5a3d78;
case 0x5a3d7a:c.instructions+=17;goto B5a3d7a;
case 0x5a3d7d:c.instructions+=16;goto B5a3d7d;
case 0x5a3d80:c.instructions+=15;goto B5a3d80;
case 0x5a3d82:c.instructions+=14;goto B5a3d82;
case 0x5a3d85:c.instructions+=13;goto B5a3d85;
case 0x5a3d87:c.instructions+=12;goto B5a3d87;
case 0x5a3d89:c.instructions+=11;goto B5a3d89;
case 0x5a3d8d:c.instructions+=10;goto B5a3d8d;
case 0x5a3d91:c.instructions+=9;goto B5a3d91;
case 0x5a3d94:c.instructions+=8;goto B5a3d94;
case 0x5a3d96:c.instructions+=7;goto B5a3d96;
case 0x5a3d99:c.instructions+=6;goto B5a3d99;
case 0x5a3d9b:c.instructions+=5;goto B5a3d9b;
case 0x5a3d9d:c.instructions+=4;goto B5a3d9d;
case 0x5a3da1:c.instructions+=3;goto B5a3da1;
case 0x5a3da5:c.instructions+=2;goto B5a3da5;
case 0x5a3da7:c.instructions+=1;goto B5a3da7;
case 0x5a3da9:goto L5a3da9;
case 0x5a3dac:c.instructions+=11;goto B5a3dac;
case 0x5a3dae:c.instructions+=10;goto B5a3dae;
case 0x5a3db1:c.instructions+=9;goto B5a3db1;
case 0x5a3db3:c.instructions+=8;goto B5a3db3;
case 0x5a3db6:c.instructions+=7;goto B5a3db6;
case 0x5a3db8:c.instructions+=6;goto B5a3db8;
case 0x5a3dbc:c.instructions+=5;goto B5a3dbc;
case 0x5a3dc0:c.instructions+=4;goto B5a3dc0;
case 0x5a3dc3:c.instructions+=3;goto B5a3dc3;
case 0x5a3dc5:c.instructions+=2;goto B5a3dc5;
case 0x5a3dc9:c.instructions+=1;goto B5a3dc9;
case 0x5a3dcd:goto L5a3dcd;
case 0x5a3dd1:c.instructions+=2;goto B5a3dd1;
case 0x5a3dd3:c.instructions+=1;goto B5a3dd3;
case 0x5a3dd5:goto L5a3dd5;
case 0x5a3ddd:c.instructions+=1;goto B5a3ddd;
case 0x5a3de5:goto L5a3de5;
case 0x5a3de8:c.instructions+=5;goto B5a3de8;
case 0x5a3dec:c.instructions+=4;goto B5a3dec;
case 0x5a3ded:c.instructions+=3;goto B5a3ded;
case 0x5a3df1:c.instructions+=2;goto B5a3df1;
case 0x5a3df2:c.instructions+=1;goto B5a3df2;
case 0x5a3df7:goto L5a3df7;
case 0x5a3dfb:c.instructions+=14;goto B5a3dfb;
case 0x5a3dfe:c.instructions+=13;goto B5a3dfe;
case 0x5a3e00:c.instructions+=12;goto B5a3e00;
case 0x5a3e02:c.instructions+=11;goto B5a3e02;
case 0x5a3e04:c.instructions+=10;goto B5a3e04;
case 0x5a3e06:c.instructions+=9;goto B5a3e06;
case 0x5a3e08:c.instructions+=8;goto B5a3e08;
case 0x5a3e0a:c.instructions+=7;goto B5a3e0a;
case 0x5a3e0c:c.instructions+=6;goto B5a3e0c;
case 0x5a3e0e:c.instructions+=5;goto B5a3e0e;
case 0x5a3e10:c.instructions+=4;goto B5a3e10;
case 0x5a3e16:c.instructions+=3;goto B5a3e16;
case 0x5a3e18:c.instructions+=2;goto B5a3e18;
case 0x5a3e1b:c.instructions+=1;goto B5a3e1b;
case 0x5a3e1d:goto L5a3e1d;
case 0x5a3e23:c.instructions+=6;goto B5a3e23;
case 0x5a3e25:c.instructions+=5;goto B5a3e25;
case 0x5a3e27:c.instructions+=4;goto B5a3e27;
case 0x5a3e2a:c.instructions+=3;goto B5a3e2a;
case 0x5a3e2d:c.instructions+=2;goto B5a3e2d;
case 0x5a3e2f:c.instructions+=1;goto B5a3e2f;
case 0x5a3e31:goto L5a3e31;
case 0x5a3e35:c.instructions+=16;goto B5a3e35;
case 0x5a3e37:c.instructions+=15;goto B5a3e37;
case 0x5a3e3a:c.instructions+=14;goto B5a3e3a;
case 0x5a3e3d:c.instructions+=13;goto B5a3e3d;
case 0x5a3e40:c.instructions+=12;goto B5a3e40;
case 0x5a3e41:c.instructions+=11;goto B5a3e41;
case 0x5a3e45:c.instructions+=10;goto B5a3e45;
case 0x5a3e49:c.instructions+=9;goto B5a3e49;
case 0x5a3e4d:c.instructions+=8;goto B5a3e4d;
case 0x5a3e51:c.instructions+=7;goto B5a3e51;
case 0x5a3e56:c.instructions+=6;goto B5a3e56;
case 0x5a3e58:c.instructions+=5;goto B5a3e58;
case 0x5a3e5a:c.instructions+=4;goto B5a3e5a;
case 0x5a3e60:c.instructions+=3;goto B5a3e60;
case 0x5a3e64:c.instructions+=2;goto B5a3e64;
case 0x5a3e68:c.instructions+=1;goto B5a3e68;
case 0x5a3e6e:goto L5a3e6e;
case 0x5a3e6f:c.instructions+=5;goto B5a3e6f;
case 0x5a3e70:c.instructions+=4;goto B5a3e70;
case 0x5a3e71:c.instructions+=3;goto B5a3e71;
case 0x5a3e73:c.instructions+=2;goto B5a3e73;
case 0x5a3e74:c.instructions+=1;goto B5a3e74;
case 0x5a3e80:goto L5a3e80;
case 0x5a3e81:c.instructions+=17;goto B5a3e81;
case 0x5a3e83:c.instructions+=16;goto B5a3e83;
case 0x5a3e86:c.instructions+=15;goto B5a3e86;
case 0x5a3e8c:c.instructions+=14;goto B5a3e8c;
case 0x5a3e8f:c.instructions+=13;goto B5a3e8f;
case 0x5a3e90:c.instructions+=12;goto B5a3e90;
case 0x5a3e92:c.instructions+=11;goto B5a3e92;
case 0x5a3e94:c.instructions+=10;goto B5a3e94;
case 0x5a3e95:c.instructions+=9;goto B5a3e95;
case 0x5a3e9a:c.instructions+=8;goto B5a3e9a;
case 0x5a3e9d:c.instructions+=7;goto B5a3e9d;
case 0x5a3e9e:c.instructions+=6;goto B5a3e9e;
case 0x5a3ea6:c.instructions+=5;goto B5a3ea6;
case 0x5a3eaa:c.instructions+=4;goto B5a3eaa;
case 0x5a3eae:c.instructions+=3;goto B5a3eae;
case 0x5a3eb2:c.instructions+=2;goto B5a3eb2;
case 0x5a3eb8:c.instructions+=1;goto B5a3eb8;
case 0x5a3ec0:goto L5a3ec0;
case 0x5a3ec6:c.instructions+=4;goto B5a3ec6;
case 0x5a3ecc:c.instructions+=3;goto B5a3ecc;
case 0x5a3ece:c.instructions+=2;goto B5a3ece;
case 0x5a3ed1:c.instructions+=1;goto B5a3ed1;
case 0x5a3ed7:goto L5a3ed7;
case 0x5a3eda:c.instructions+=29;goto B5a3eda;
case 0x5a3ee0:c.instructions+=28;goto B5a3ee0;
case 0x5a3ee3:c.instructions+=27;goto B5a3ee3;
case 0x5a3ee5:c.instructions+=26;goto B5a3ee5;
case 0x5a3ee9:c.instructions+=25;goto B5a3ee9;
case 0x5a3eef:c.instructions+=24;goto B5a3eef;
case 0x5a3ef2:c.instructions+=23;goto B5a3ef2;
case 0x5a3ef4:c.instructions+=22;goto B5a3ef4;
case 0x5a3ef8:c.instructions+=21;goto B5a3ef8;
case 0x5a3efe:c.instructions+=20;goto B5a3efe;
case 0x5a3f00:c.instructions+=19;goto B5a3f00;
case 0x5a3f04:c.instructions+=18;goto B5a3f04;
case 0x5a3f06:c.instructions+=17;goto B5a3f06;
case 0x5a3f09:c.instructions+=16;goto B5a3f09;
case 0x5a3f0d:c.instructions+=15;goto B5a3f0d;
case 0x5a3f10:c.instructions+=14;goto B5a3f10;
case 0x5a3f14:c.instructions+=13;goto B5a3f14;
case 0x5a3f18:c.instructions+=12;goto B5a3f18;
case 0x5a3f19:c.instructions+=11;goto B5a3f19;
case 0x5a3f1a:c.instructions+=10;goto B5a3f1a;
case 0x5a3f21:c.instructions+=9;goto B5a3f21;
case 0x5a3f23:c.instructions+=8;goto B5a3f23;
case 0x5a3f27:c.instructions+=7;goto B5a3f27;
case 0x5a3f2b:c.instructions+=6;goto B5a3f2b;
case 0x5a3f32:c.instructions+=5;goto B5a3f32;
case 0x5a3f34:c.instructions+=4;goto B5a3f34;
case 0x5a3f38:c.instructions+=3;goto B5a3f38;
case 0x5a3f39:c.instructions+=2;goto B5a3f39;
case 0x5a3f3d:c.instructions+=1;goto B5a3f3d;
case 0x5a3f42:goto L5a3f42;
case 0x5a3f45:c.instructions+=7;goto B5a3f45;
case 0x5a3f49:c.instructions+=6;goto B5a3f49;
case 0x5a3f4a:c.instructions+=5;goto B5a3f4a;
case 0x5a3f50:c.instructions+=4;goto B5a3f50;
case 0x5a3f51:c.instructions+=3;goto B5a3f51;
case 0x5a3f55:c.instructions+=2;goto B5a3f55;
case 0x5a3f56:c.instructions+=1;goto B5a3f56;
case 0x5a3f5b:goto L5a3f5b;
case 0x5a3f5f:c.instructions+=31;goto B5a3f5f;
case 0x5a3f65:c.instructions+=30;goto B5a3f65;
case 0x5a3f67:c.instructions+=29;goto B5a3f67;
case 0x5a3f6d:c.instructions+=28;goto B5a3f6d;
case 0x5a3f71:c.instructions+=27;goto B5a3f71;
case 0x5a3f75:c.instructions+=26;goto B5a3f75;
case 0x5a3f7b:c.instructions+=25;goto B5a3f7b;
case 0x5a3f7e:c.instructions+=24;goto B5a3f7e;
case 0x5a3f82:c.instructions+=23;goto B5a3f82;
case 0x5a3f89:c.instructions+=22;goto B5a3f89;
case 0x5a3f8b:c.instructions+=21;goto B5a3f8b;
case 0x5a3f92:c.instructions+=20;goto B5a3f92;
case 0x5a3f99:c.instructions+=19;goto B5a3f99;
case 0x5a3f9c:c.instructions+=18;goto B5a3f9c;
case 0x5a3fa0:c.instructions+=17;goto B5a3fa0;
case 0x5a3fa3:c.instructions+=16;goto B5a3fa3;
case 0x5a3fa7:c.instructions+=15;goto B5a3fa7;
case 0x5a3fab:c.instructions+=14;goto B5a3fab;
case 0x5a3fad:c.instructions+=13;goto B5a3fad;
case 0x5a3fb1:c.instructions+=12;goto B5a3fb1;
case 0x5a3fb3:c.instructions+=11;goto B5a3fb3;
case 0x5a3fb5:c.instructions+=10;goto B5a3fb5;
case 0x5a3fb9:c.instructions+=9;goto B5a3fb9;
case 0x5a3fc0:c.instructions+=8;goto B5a3fc0;
case 0x5a3fc2:c.instructions+=7;goto B5a3fc2;
case 0x5a3fc4:c.instructions+=6;goto B5a3fc4;
case 0x5a3fc6:c.instructions+=5;goto B5a3fc6;
case 0x5a3fc8:c.instructions+=4;goto B5a3fc8;
case 0x5a3fce:c.instructions+=3;goto B5a3fce;
case 0x5a3fd0:c.instructions+=2;goto B5a3fd0;
case 0x5a3fd3:c.instructions+=1;goto B5a3fd3;
case 0x5a3fd5:goto L5a3fd5;
case 0x5a3fdb:c.instructions+=12;goto B5a3fdb;
case 0x5a3fde:c.instructions+=11;goto B5a3fde;
case 0x5a3fe0:c.instructions+=10;goto B5a3fe0;
case 0x5a3fe4:c.instructions+=9;goto B5a3fe4;
case 0x5a3fe5:c.instructions+=8;goto B5a3fe5;
case 0x5a3fe9:c.instructions+=7;goto B5a3fe9;
case 0x5a3fef:c.instructions+=6;goto B5a3fef;
case 0x5a3ff0:c.instructions+=5;goto B5a3ff0;
case 0x5a3ff4:c.instructions+=4;goto B5a3ff4;
case 0x5a3ff6:c.instructions+=3;goto B5a3ff6;
case 0x5a3ffa:c.instructions+=2;goto B5a3ffa;
case 0x5a3ffe:c.instructions+=1;goto B5a3ffe;
default:missing_instruction(c.pc);}
B5a3000:L5a3000:{c.instructions+=3;NFSU2_TR(0x5a3000);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3002:{NFSU2_TR(0x5a3002);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3005:{NFSU2_TR(0x5a3005);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a301e;}}
}
B5a3007:L5a3007:{c.instructions+=5;NFSU2_TR(0x5a3007);
{u32 ea_=u32(r4(R+8)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a300d:{NFSU2_TR(0x5a300d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3013:{NFSU2_TR(0x5a3013);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3015:{NFSU2_TR(0x5a3015);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3018:{NFSU2_TR(0x5a3018);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a301e;}}
}
B5a301a:L5a301a:{c.instructions+=2;NFSU2_TR(0x5a301a);
w1(R+4,u8(0xcull));
}
B5a301c:{NFSU2_TR(0x5a301c);
{goto L5a3096;}
}
B5a301e:L5a301e:{c.instructions+=5;NFSU2_TR(0x5a301e);
{u32 ea_=u32(r4(R+8)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3024:{NFSU2_TR(0x5a3024);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a302a:{NFSU2_TR(0x5a302a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a302c:{NFSU2_TR(0x5a302c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a302f:{NFSU2_TR(0x5a302f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3048;}}
}
B5a3031:L5a3031:{c.instructions+=5;NFSU2_TR(0x5a3031);
{u32 ea_=u32(r4(R+8)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3037:{NFSU2_TR(0x5a3037);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a303d:{NFSU2_TR(0x5a303d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a303f:{NFSU2_TR(0x5a303f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3042:{NFSU2_TR(0x5a3042);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3048;}}
}
B5a3044:L5a3044:{c.instructions+=2;NFSU2_TR(0x5a3044);
w1(R+4,u8(0x3ull));
}
B5a3046:{NFSU2_TR(0x5a3046);
{goto L5a3096;}
}
B5a3048:L5a3048:{c.instructions+=5;NFSU2_TR(0x5a3048);
{u32 ea_=u32(r4(R+8)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a304e:{NFSU2_TR(0x5a304e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3054:{NFSU2_TR(0x5a3054);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3056:{NFSU2_TR(0x5a3056);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3059:{NFSU2_TR(0x5a3059);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a306e;}}
}
B5a305b:L5a305b:{c.instructions+=5;NFSU2_TR(0x5a305b);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3061:{NFSU2_TR(0x5a3061);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3067:{NFSU2_TR(0x5a3067);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3069:{NFSU2_TR(0x5a3069);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a306c:{NFSU2_TR(0x5a306c);
if(r1(R+514)){{goto L5a3094;}}
}
B5a306e:L5a306e:{c.instructions+=5;NFSU2_TR(0x5a306e);
{u32 ea_=u32(r4(R+8)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3074:{NFSU2_TR(0x5a3074);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a307a:{NFSU2_TR(0x5a307a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a307c:{NFSU2_TR(0x5a307c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a307f:{NFSU2_TR(0x5a307f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3096;}}
}
B5a3081:L5a3081:{c.instructions+=5;NFSU2_TR(0x5a3081);
{u32 ea_=u32(r4(R+8)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3087:{NFSU2_TR(0x5a3087);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a308d:{NFSU2_TR(0x5a308d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a308f:{NFSU2_TR(0x5a308f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3092:{NFSU2_TR(0x5a3092);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3096;}}
}
B5a3094:L5a3094:{c.instructions+=1;NFSU2_TR(0x5a3094);
w1(R+4,u8(0x20ull));
}
B5a3096:L5a3096:{c.instructions+=10;NFSU2_TR(0x5a3096);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3098:{NFSU2_TR(0x5a3098);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B5a309b:{NFSU2_TR(0x5a309b);
w4(R+0,u32(0x1b4ull));
}
B5a30a0:{NFSU2_TR(0x5a30a0);
u8 U[6];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a30a5:{NFSU2_TR(0x5a30a5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5a30a7:{NFSU2_TR(0x5a30a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a30af:{NFSU2_TR(0x5a30af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a30b3:{NFSU2_TR(0x5a30b3);
w4(R+12,u32(0x3b8ull));
}
B5a30b8:{NFSU2_TR(0x5a30b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a30bc:{NFSU2_TR(0x5a30bc);
{goto L5a30c2;}
}
B5a30be:L5a30be:{c.instructions+=1;NFSU2_TR(0x5a30be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a30c2:L5a30c2:{c.instructions+=12;NFSU2_TR(0x5a30c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a30c5:{NFSU2_TR(0x5a30c5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffc90ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a30cc:{NFSU2_TR(0x5a30cc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5a30ce:{NFSU2_TR(0x5a30ce);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a30d1:{NFSU2_TR(0x5a30d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a30d5:{NFSU2_TR(0x5a30d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a30d9:{NFSU2_TR(0x5a30d9);
w4(R+28,u32(0x1ull));
}
B5a30de:{NFSU2_TR(0x5a30de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B5a30e0:{NFSU2_TR(0x5a30e0);
{u32 ea_=u32(u32(8372380u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a30e6:{NFSU2_TR(0x5a30e6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a30ec:{NFSU2_TR(0x5a30ec);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5a30ee:{NFSU2_TR(0x5a30ee);
if(r1(R+518)){{goto L5a3105;}}
}
B5a30f0:L5a30f0:{c.instructions+=4;NFSU2_TR(0x5a30f0);
{u32 ea_=u32(u32(8372364u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a30f6:{NFSU2_TR(0x5a30f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a30f8:{NFSU2_TR(0x5a30f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a30fb:{NFSU2_TR(0x5a30fb);
if(r1(R+518)){{goto L5a3105;}}
}
B5a30fd:L5a30fd:{c.instructions+=2;NFSU2_TR(0x5a30fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a30ff:{NFSU2_TR(0x5a30ff);
{u32 ea_=u32(u32(8372364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3105:L5a3105:{c.instructions+=6;NFSU2_TR(0x5a3105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3108:{NFSU2_TR(0x5a3108);
{u32 ea_=u32(r4(R+0)+r4(R+12));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a310b:{NFSU2_TR(0x5a310b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a310e:{NFSU2_TR(0x5a310e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3110:{NFSU2_TR(0x5a3110);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3113:{NFSU2_TR(0x5a3113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3142;}}
}
B5a3115:L5a3115:{c.instructions+=8;NFSU2_TR(0x5a3115);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a311b:{NFSU2_TR(0x5a311b);
{u32 ea_=u32(u32(8372376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3121:{NFSU2_TR(0x5a3121);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3123:{NFSU2_TR(0x5a3123);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3127:{NFSU2_TR(0x5a3127);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a312b:{NFSU2_TR(0x5a312b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a312d:{NFSU2_TR(0x5a312d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3130:{NFSU2_TR(0x5a3130);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3138;}}
}
B5a3132:L5a3132:{c.instructions+=2;NFSU2_TR(0x5a3132);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3134:{NFSU2_TR(0x5a3134);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3138:L5a3138:{c.instructions+=3;NFSU2_TR(0x5a3138);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a313a:{NFSU2_TR(0x5a313a);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a3140:{NFSU2_TR(0x5a3140);
{goto L5a3180;}
}
B5a3142:L5a3142:{c.instructions+=4;NFSU2_TR(0x5a3142);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3144:{NFSU2_TR(0x5a3144);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3146:{NFSU2_TR(0x5a3146);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3149:{NFSU2_TR(0x5a3149);
if(r1(R+514)){{goto L5a317a;}}
}
B5a314b:L5a314b:{c.instructions+=8;NFSU2_TR(0x5a314b);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3151:{NFSU2_TR(0x5a3151);
{u32 ea_=u32(u32(8372376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3157:{NFSU2_TR(0x5a3157);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a3159:{NFSU2_TR(0x5a3159);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a315f:{NFSU2_TR(0x5a315f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a3161:{NFSU2_TR(0x5a3161);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3163:{NFSU2_TR(0x5a3163);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3166:{NFSU2_TR(0x5a3166);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3170;}}
}
B5a3168:L5a3168:{c.instructions+=2;NFSU2_TR(0x5a3168);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a316a:{NFSU2_TR(0x5a316a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3170:L5a3170:{c.instructions+=3;NFSU2_TR(0x5a3170);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3172:{NFSU2_TR(0x5a3172);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a3178:{NFSU2_TR(0x5a3178);
{goto L5a3180;}
}
B5a317a:L5a317a:{c.instructions+=1;NFSU2_TR(0x5a317a);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a3180:L5a3180:{c.instructions+=2;NFSU2_TR(0x5a3180);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a3182:{NFSU2_TR(0x5a3182);
if(r1(R+518)){{goto L5a319c;}}
}
B5a3184:L5a3184:{c.instructions+=6;NFSU2_TR(0x5a3184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3187:{NFSU2_TR(0x5a3187);
{u32 ea_=u32(r4(R+4)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a318a:{NFSU2_TR(0x5a318a);
{u32 ea_=u32(u32(8372364u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3190:{NFSU2_TR(0x5a3190);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3192:{NFSU2_TR(0x5a3192);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3195:{NFSU2_TR(0x5a3195);
if(r1(R+514)){{goto L5a319c;}}
}
B5a3197:L5a3197:{c.instructions+=1;NFSU2_TR(0x5a3197);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a319c:L5a319c:{c.instructions+=6;NFSU2_TR(0x5a319c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a31a0:{NFSU2_TR(0x5a31a0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a31a1:{NFSU2_TR(0x5a31a1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a31a4:{NFSU2_TR(0x5a31a4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3c8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3c8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a31aa:{NFSU2_TR(0x5a31aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a31ae:{NFSU2_TR(0x5a31ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a30beu);}goto L5a30be;}}
}
B5a31b4:L5a31b4:{c.instructions+=3;NFSU2_TR(0x5a31b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a31b7:{NFSU2_TR(0x5a31b7);
w4(R+4,u32(0x30ull));
}
B5a31bc:{NFSU2_TR(0x5a31bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ecull))));
}
B5a31c2:L5a31c2:{c.instructions+=5;NFSU2_TR(0x5a31c2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a31c4:{NFSU2_TR(0x5a31c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a31ca:{NFSU2_TR(0x5a31ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a31cc:{NFSU2_TR(0x5a31cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a31cf:{NFSU2_TR(0x5a31cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a31e8;}}
}
B5a31d1:L5a31d1:{c.instructions+=6;NFSU2_TR(0x5a31d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a31d4:{NFSU2_TR(0x5a31d4);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a31d7:{NFSU2_TR(0x5a31d7);
{u32 ea_=u32(u32(8372368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a31dd:{NFSU2_TR(0x5a31dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a31df:{NFSU2_TR(0x5a31df);
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
B5a31e2:{NFSU2_TR(0x5a31e2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3373;}}
}
B5a31e8:L5a31e8:{c.instructions+=4;NFSU2_TR(0x5a31e8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a31eb:{NFSU2_TR(0x5a31eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5a31ee:{NFSU2_TR(0x5a31ee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a31f1:{NFSU2_TR(0x5a31f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a31c2u);}goto L5a31c2;}}
}
B5a31f3:L5a31f3:{c.instructions+=3;NFSU2_TR(0x5a31f3);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a31f7:{NFSU2_TR(0x5a31f7);
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
B5a31f9:{NFSU2_TR(0x5a31f9);
if(r1(R+518)){{goto L5a3373;}}
}
B5a31ff:L5a31ff:{c.instructions+=5;NFSU2_TR(0x5a31ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a3201:{NFSU2_TR(0x5a3201);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3205:{NFSU2_TR(0x5a3205);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3209:{NFSU2_TR(0x5a3209);
w4(R+12,u32(0x1ecull));
}
B5a320e:{NFSU2_TR(0x5a320e);
w4(R+28,u32(0xe0ull));
}
B5a3213:L5a3213:{c.instructions+=6;NFSU2_TR(0x5a3213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3216:{NFSU2_TR(0x5a3216);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3219:{NFSU2_TR(0x5a3219);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a321f:{NFSU2_TR(0x5a321f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3221:{NFSU2_TR(0x5a3221);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3224:{NFSU2_TR(0x5a3224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3352;}}
}
B5a322a:L5a322a:{c.instructions+=34;NFSU2_TR(0x5a322a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a322d:{NFSU2_TR(0x5a322d);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3233:{NFSU2_TR(0x5a3233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3236:{NFSU2_TR(0x5a3236);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3238:{NFSU2_TR(0x5a3238);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a323c:{NFSU2_TR(0x5a323c);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3242:{NFSU2_TR(0x5a3242);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a3246:{NFSU2_TR(0x5a3246);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3248:{NFSU2_TR(0x5a3248);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a324c:{NFSU2_TR(0x5a324c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a324f:{NFSU2_TR(0x5a324f);
{u32 ea_=u32(r4(R+0)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3255:{NFSU2_TR(0x5a3255);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3257:{NFSU2_TR(0x5a3257);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a325b:{NFSU2_TR(0x5a325b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a325d:{NFSU2_TR(0x5a325d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3260:{NFSU2_TR(0x5a3260);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3264:{NFSU2_TR(0x5a3264);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3267:{NFSU2_TR(0x5a3267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a326a:{NFSU2_TR(0x5a326a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a326e:{NFSU2_TR(0x5a326e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3272:{NFSU2_TR(0x5a3272);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3276:{NFSU2_TR(0x5a3276);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a3278:{NFSU2_TR(0x5a3278);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a327c:{NFSU2_TR(0x5a327c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3280:{NFSU2_TR(0x5a3280);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3284:{NFSU2_TR(0x5a3284);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3288:{NFSU2_TR(0x5a3288);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3289:{NFSU2_TR(0x5a3289);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(4294966852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3290:{NFSU2_TR(0x5a3290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3291:{NFSU2_TR(0x5a3291);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3295:{NFSU2_TR(0x5a3295);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3299:{NFSU2_TR(0x5a3299);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a329a:{NFSU2_TR(0x5a329a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a329e:{NFSU2_TR(0x5a329e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a32a3ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a32a3:L5a32a3:{c.instructions+=10;NFSU2_TR(0x5a32a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a32a6:{NFSU2_TR(0x5a32a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a32aa:{NFSU2_TR(0x5a32aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a32ab:{NFSU2_TR(0x5a32ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a32b1:{NFSU2_TR(0x5a32b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a32b2:{NFSU2_TR(0x5a32b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5a32b7:{NFSU2_TR(0x5a32b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a32b8:{NFSU2_TR(0x5a32b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a32bc:{NFSU2_TR(0x5a32bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a32bd:{NFSU2_TR(0x5a32bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a32c2ull));
TAIL_STATIC(0x59e150u,59e);
}
B5a32c2:L5a32c2:{c.instructions+=15;NFSU2_TR(0x5a32c2);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a32c6:{NFSU2_TR(0x5a32c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a32c9:{NFSU2_TR(0x5a32c9);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a32cd:{NFSU2_TR(0x5a32cd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5a32cf:{NFSU2_TR(0x5a32cf);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a32d3:{NFSU2_TR(0x5a32d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5a32d6:{NFSU2_TR(0x5a32d6);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a32d9:{NFSU2_TR(0x5a32d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a32db:{NFSU2_TR(0x5a32db);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a32df:{NFSU2_TR(0x5a32df);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a32e1:{NFSU2_TR(0x5a32e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a32e3:{NFSU2_TR(0x5a32e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a32e9:{NFSU2_TR(0x5a32e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a32eb:{NFSU2_TR(0x5a32eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a32ee:{NFSU2_TR(0x5a32ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3350;}}
}
B5a32f0:L5a32f0:{c.instructions+=8;NFSU2_TR(0x5a32f0);
{u32 ea_=u32(u32(8372360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a32f6:{NFSU2_TR(0x5a32f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a32f9:{NFSU2_TR(0x5a32f9);
{u32 ea_=u32(u32(8372372u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a32ff:{NFSU2_TR(0x5a32ff);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3302:{NFSU2_TR(0x5a3302);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3308:{NFSU2_TR(0x5a3308);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a330a:{NFSU2_TR(0x5a330a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a330d:{NFSU2_TR(0x5a330d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3350;}}
}
B5a330f:L5a330f:{c.instructions+=15;NFSU2_TR(0x5a330f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3312:{NFSU2_TR(0x5a3312);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3318:{NFSU2_TR(0x5a3318);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a331c:{NFSU2_TR(0x5a331c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a331e:{NFSU2_TR(0x5a331e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3320:{NFSU2_TR(0x5a3320);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3324:{NFSU2_TR(0x5a3324);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3326:{NFSU2_TR(0x5a3326);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3329:{NFSU2_TR(0x5a3329);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a332d:{NFSU2_TR(0x5a332d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3330:{NFSU2_TR(0x5a3330);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3334:{NFSU2_TR(0x5a3334);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3335:{NFSU2_TR(0x5a3335);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3336:{NFSU2_TR(0x5a3336);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a333a:{NFSU2_TR(0x5a333a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a333full));
TAIL_STATIC(0x59bc60u,59b);
}
B5a333f:L5a333f:{c.instructions+=4;NFSU2_TR(0x5a333f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3342:{NFSU2_TR(0x5a3342);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3346:{NFSU2_TR(0x5a3346);
u8 U[13];
w4(U+0,u32(u32(u32(0x3c8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B5a334e:{NFSU2_TR(0x5a334e);
{goto L5a3352;}
}
B5a3350:L5a3350:{c.instructions+=1;NFSU2_TR(0x5a3350);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3352:L5a3352:{c.instructions+=8;NFSU2_TR(0x5a3352);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3356:{NFSU2_TR(0x5a3356);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a335a:{NFSU2_TR(0x5a335a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5a335d:{NFSU2_TR(0x5a335d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B5a3360:{NFSU2_TR(0x5a3360);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a3363:{NFSU2_TR(0x5a3363);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x120ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x120ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x120ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a3369:{NFSU2_TR(0x5a3369);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a336d:{NFSU2_TR(0x5a336d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a3213u);}goto L5a3213;}}
}
B5a3373:L5a3373:{c.instructions+=6;NFSU2_TR(0x5a3373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a3374:{NFSU2_TR(0x5a3374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a3375:{NFSU2_TR(0x5a3375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a3376:{NFSU2_TR(0x5a3376);
__builtin_memmove((R+16),(R+20),4);
}
B5a3378:{NFSU2_TR(0x5a3378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a3379:{NFSU2_TR(0x5a3379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a3380:L5a3380:{c.instructions+=3;NFSU2_TR(0x5a3380);
__builtin_memmove((R+0),gp(0x7fc0a0),4);
}
B5a3385:{NFSU2_TR(0x5a3385);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a3387:{NFSU2_TR(0x5a3387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3391;}}
}
B5a3389:L5a3389:{c.instructions+=2;NFSU2_TR(0x5a3389);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a338f:{NFSU2_TR(0x5a338f);
{goto L5a3395;}
}
B5a3391:L5a3391:{c.instructions+=1;NFSU2_TR(0x5a3391);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3395:L5a3395:{c.instructions+=19;NFSU2_TR(0x5a3395);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3398:{NFSU2_TR(0x5a3398);
{u32 ea_=u32(r4(R+0)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a339e:{NFSU2_TR(0x5a339e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a33a1:{NFSU2_TR(0x5a33a1);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a33a4:{NFSU2_TR(0x5a33a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a33a7:{NFSU2_TR(0x5a33a7);
{u32 ea_=u32(r4(R+0)+u32(1244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a33ad:{NFSU2_TR(0x5a33ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a33b0:{NFSU2_TR(0x5a33b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a33b6:{NFSU2_TR(0x5a33b6);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a33b9:{NFSU2_TR(0x5a33b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a33bc:{NFSU2_TR(0x5a33bc);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a33c2:{NFSU2_TR(0x5a33c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a33c5:{NFSU2_TR(0x5a33c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a33c7:{NFSU2_TR(0x5a33c7);
{u32 ea_=u32(r4(R+8)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a33cd:{NFSU2_TR(0x5a33cd);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a33d3:{NFSU2_TR(0x5a33d3);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a33d9:{NFSU2_TR(0x5a33d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a33db:{NFSU2_TR(0x5a33db);
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
B5a33de:{NFSU2_TR(0x5a33de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a33f3;}}
}
B5a33e0:L5a33e0:{c.instructions+=2;NFSU2_TR(0x5a33e0);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x464ull))));
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
B5a33e7:{NFSU2_TR(0x5a33e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a33f3;}}
}
B5a33e9:L5a33e9:{c.instructions+=3;NFSU2_TR(0x5a33e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a33eb:{NFSU2_TR(0x5a33eb);
{u32 ea_=u32(u32(8001936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a33f1:{NFSU2_TR(0x5a33f1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a33f3:L5a33f3:{c.instructions+=5;NFSU2_TR(0x5a33f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a33f6:{NFSU2_TR(0x5a33f6);
{u32 ea_=u32(r4(R+8)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a33fc:{NFSU2_TR(0x5a33fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a33ff:{NFSU2_TR(0x5a33ff);
{u32 ea_=u32(r4(R+0)+u32(316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3405:{NFSU2_TR(0x5a3405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a3410:L5a3410:{c.instructions+=10;NFSU2_TR(0x5a3410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3411:{NFSU2_TR(0x5a3411);
__builtin_memmove((R+20),(R+16),4);
}
B5a3413:{NFSU2_TR(0x5a3413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a3416:{NFSU2_TR(0x5a3416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B5a3419:{NFSU2_TR(0x5a3419);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a341a:{NFSU2_TR(0x5a341a);
__builtin_memmove((R+24),(R+4),4);
}
B5a341c:{NFSU2_TR(0x5a341c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a341f:{NFSU2_TR(0x5a341f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
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
B5a3423:{NFSU2_TR(0x5a3423);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3424:{NFSU2_TR(0x5a3424);
if(r1(R+518)){{goto L5a36f9;}}
}
B5a342a:L5a342a:{c.instructions+=4;NFSU2_TR(0x5a342a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a342d:{NFSU2_TR(0x5a342d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5a3433:{NFSU2_TR(0x5a3433);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3435:{NFSU2_TR(0x5a3435);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a36f9;}}
}
B5a343b:L5a343b:{c.instructions+=3;NFSU2_TR(0x5a343b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a3441:{NFSU2_TR(0x5a3441);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a3444:{NFSU2_TR(0x5a3444);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a34e6;}}
}
B5a344a:L5a344a:{c.instructions+=22;NFSU2_TR(0x5a344a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a344d:{NFSU2_TR(0x5a344d);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3453:{NFSU2_TR(0x5a3453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3459:{NFSU2_TR(0x5a3459);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a345f:{NFSU2_TR(0x5a345f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3460:{NFSU2_TR(0x5a3460);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3466:{NFSU2_TR(0x5a3466);
w4(R+4,u32(0x86b498ull));
}
B5a346b:{NFSU2_TR(0x5a346b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a346d:{NFSU2_TR(0x5a346d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3471:{NFSU2_TR(0x5a3471);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3473:{NFSU2_TR(0x5a3473);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a3475:{NFSU2_TR(0x5a3475);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a3477:{NFSU2_TR(0x5a3477);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3479:{NFSU2_TR(0x5a3479);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a347b:{NFSU2_TR(0x5a347b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a347d:{NFSU2_TR(0x5a347d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a347f:{NFSU2_TR(0x5a347f);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a3481:{NFSU2_TR(0x5a3481);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3483:{NFSU2_TR(0x5a3483);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3485:{NFSU2_TR(0x5a3485);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a3487:{NFSU2_TR(0x5a3487);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a348a:{NFSU2_TR(0x5a348a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a348full));
TAIL_STATIC(0x576790u,576);
}
B5a348f:L5a348f:{c.instructions+=20;NFSU2_TR(0x5a348f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3493:{NFSU2_TR(0x5a3493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3496:{NFSU2_TR(0x5a3496);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3498:{NFSU2_TR(0x5a3498);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a349a:{NFSU2_TR(0x5a349a);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a34a0:{NFSU2_TR(0x5a34a0);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a34a6:{NFSU2_TR(0x5a34a6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a34a8:{NFSU2_TR(0x5a34a8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a34ac:{NFSU2_TR(0x5a34ac);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a34b2:{NFSU2_TR(0x5a34b2);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a34b4:{NFSU2_TR(0x5a34b4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a34b8:{NFSU2_TR(0x5a34b8);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a34be:{NFSU2_TR(0x5a34be);
{u32 ea_=u32(r4(R+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a34c4:{NFSU2_TR(0x5a34c4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a34c6:{NFSU2_TR(0x5a34c6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a34ca:{NFSU2_TR(0x5a34ca);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a34d0:{NFSU2_TR(0x5a34d0);
{u32 ea_=u32(r4(R+0)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a34d6:{NFSU2_TR(0x5a34d6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a34da:{NFSU2_TR(0x5a34da);
{u32 ea_=u32(r4(R+0)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a34e0:{NFSU2_TR(0x5a34e0);
{u32 ea_=u32(r4(R+0)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a34e6:L5a34e6:{c.instructions+=2;NFSU2_TR(0x5a34e6);
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
B5a34e8:{NFSU2_TR(0x5a34e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a36f9;}}
}
B5a34ee:L5a34ee:{c.instructions+=6;NFSU2_TR(0x5a34ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a34f1:{NFSU2_TR(0x5a34f1);
{u32 ea_=u32(r4(R+28)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a34f7:{NFSU2_TR(0x5a34f7);
{u32 ea_=u32(u32(8001948u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a34fd:{NFSU2_TR(0x5a34fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a34ff:{NFSU2_TR(0x5a34ff);
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
B5a3502:{NFSU2_TR(0x5a3502);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a36f9;}}
}
B5a3508:L5a3508:{c.instructions+=16;NFSU2_TR(0x5a3508);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a350b:{NFSU2_TR(0x5a350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a350e:{NFSU2_TR(0x5a350e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a3512:{NFSU2_TR(0x5a3512);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3516:{NFSU2_TR(0x5a3516);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a351a:{NFSU2_TR(0x5a351a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3522:{NFSU2_TR(0x5a3522);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3526:{NFSU2_TR(0x5a3526);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a3528:{NFSU2_TR(0x5a3528);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a352a:{NFSU2_TR(0x5a352a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a352c:{NFSU2_TR(0x5a352c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a352e:{NFSU2_TR(0x5a352e);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5a3530:{NFSU2_TR(0x5a3530);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3536:{NFSU2_TR(0x5a3536);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3538:{NFSU2_TR(0x5a3538);
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
B5a353b:{NFSU2_TR(0x5a353b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a36f7;}}
}
B5a3541:L5a3541:{c.instructions+=10;NFSU2_TR(0x5a3541);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3547:{NFSU2_TR(0x5a3547);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3548:{NFSU2_TR(0x5a3548);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5a354a:{NFSU2_TR(0x5a354a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a354e:{NFSU2_TR(0x5a354e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3552:{NFSU2_TR(0x5a3552);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3555:{NFSU2_TR(0x5a3555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3556:{NFSU2_TR(0x5a3556);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3557:{NFSU2_TR(0x5a3557);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3559:{NFSU2_TR(0x5a3559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a355eull));
TAIL_STATIC(0x4011f0u,401);
}
B5a355e:L5a355e:{c.instructions+=7;NFSU2_TR(0x5a355e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x90ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a3564:{NFSU2_TR(0x5a3564);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3565:{NFSU2_TR(0x5a3565);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3569:{NFSU2_TR(0x5a3569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a356a:{NFSU2_TR(0x5a356a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a356e:{NFSU2_TR(0x5a356e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a356f:{NFSU2_TR(0x5a356f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3574ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5a3574:L5a3574:{c.instructions+=20;NFSU2_TR(0x5a3574);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3578:{NFSU2_TR(0x5a3578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a357b:{NFSU2_TR(0x5a357b);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3581:{NFSU2_TR(0x5a3581);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3584:{NFSU2_TR(0x5a3584);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3588:{NFSU2_TR(0x5a3588);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B5a358d:{NFSU2_TR(0x5a358d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3590:{NFSU2_TR(0x5a3590);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5a3593:{NFSU2_TR(0x5a3593);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3595:{NFSU2_TR(0x5a3595);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3599:{NFSU2_TR(0x5a3599);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a359b:{NFSU2_TR(0x5a359b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a359d:{NFSU2_TR(0x5a359d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a35a3:{NFSU2_TR(0x5a35a3);
{u32 ea_=u32(r4(R+8)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a35a9:{NFSU2_TR(0x5a35a9);
{u32 ea_=u32(u32(8001944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a35af:{NFSU2_TR(0x5a35af);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a35b3:{NFSU2_TR(0x5a35b3);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a35b9:{NFSU2_TR(0x5a35b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a35bb:{NFSU2_TR(0x5a35bb);
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
B5a35be:{NFSU2_TR(0x5a35be);
if(r1(R+514)){{goto L5a35da;}}
}
B5a35c0:L5a35c0:{c.instructions+=4;NFSU2_TR(0x5a35c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a35c8:{NFSU2_TR(0x5a35c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a35d0:{NFSU2_TR(0x5a35d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a35d8:{NFSU2_TR(0x5a35d8);
{goto L5a35f1;}
}
B5a35da:L5a35da:{c.instructions+=7;NFSU2_TR(0x5a35da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a35de:{NFSU2_TR(0x5a35de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a35df:{NFSU2_TR(0x5a35df);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a35e3:{NFSU2_TR(0x5a35e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a35e4:{NFSU2_TR(0x5a35e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a35e8:{NFSU2_TR(0x5a35e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a35e9:{NFSU2_TR(0x5a35e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a35eeull));
TAIL_STATIC(0x43cf90u,43c);
}
B5a35ee:L5a35ee:{c.instructions+=1;NFSU2_TR(0x5a35ee);
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
B5a35f1:L5a35f1:{c.instructions+=4;NFSU2_TR(0x5a35f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a35f4:{NFSU2_TR(0x5a35f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a35f8:{NFSU2_TR(0x5a35f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a35f9:{NFSU2_TR(0x5a35f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a35feull));
TAIL_STATIC(0x59bc20u,59b);
}
B5a35fe:L5a35fe:{c.instructions+=11;NFSU2_TR(0x5a35fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3601:{NFSU2_TR(0x5a3601);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x90ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a3607:{NFSU2_TR(0x5a3607);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3608:{NFSU2_TR(0x5a3608);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a360c:{NFSU2_TR(0x5a360c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a360d:{NFSU2_TR(0x5a360d);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3611:{NFSU2_TR(0x5a3611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3612:{NFSU2_TR(0x5a3612);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a361a:{NFSU2_TR(0x5a361a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3622:{NFSU2_TR(0x5a3622);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a362a:{NFSU2_TR(0x5a362a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a362full));
TAIL_STATIC(0x43d1e0u,43d);
}
B5a362f:L5a362f:{c.instructions+=5;NFSU2_TR(0x5a362f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a3633:{NFSU2_TR(0x5a3633);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3634:{NFSU2_TR(0x5a3634);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3638:{NFSU2_TR(0x5a3638);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3639:{NFSU2_TR(0x5a3639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a363eull));
TAIL_STATIC(0x43cf10u,43c);
}
B5a363e:L5a363e:{c.instructions+=8;NFSU2_TR(0x5a363e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3641:{NFSU2_TR(0x5a3641);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xa0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a3646:{NFSU2_TR(0x5a3646);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3647:{NFSU2_TR(0x5a3647);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a364b:{NFSU2_TR(0x5a364b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a364c:{NFSU2_TR(0x5a364c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3650:{NFSU2_TR(0x5a3650);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3651:{NFSU2_TR(0x5a3651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3656ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5a3656:L5a3656:{c.instructions+=20;NFSU2_TR(0x5a3656);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a365a:{NFSU2_TR(0x5a365a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a365d:{NFSU2_TR(0x5a365d);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3663:{NFSU2_TR(0x5a3663);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5a3668:{NFSU2_TR(0x5a3668);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a366c:{NFSU2_TR(0x5a366c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5a366f:{NFSU2_TR(0x5a366f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3672:{NFSU2_TR(0x5a3672);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3674:{NFSU2_TR(0x5a3674);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3678:{NFSU2_TR(0x5a3678);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a367a:{NFSU2_TR(0x5a367a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a367d:{NFSU2_TR(0x5a367d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a367f:{NFSU2_TR(0x5a367f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a3685:{NFSU2_TR(0x5a3685);
{u32 ea_=u32(r4(R+0)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a368b:{NFSU2_TR(0x5a368b);
{u32 ea_=u32(u32(8001944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3691:{NFSU2_TR(0x5a3691);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a3695:{NFSU2_TR(0x5a3695);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a369b:{NFSU2_TR(0x5a369b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a369d:{NFSU2_TR(0x5a369d);
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
B5a36a0:{NFSU2_TR(0x5a36a0);
if(r1(R+514)){{goto L5a36cd;}}
}
B5a36a2:L5a36a2:{c.instructions+=7;NFSU2_TR(0x5a36a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a36a6:{NFSU2_TR(0x5a36a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a36a7:{NFSU2_TR(0x5a36a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a36aa:{NFSU2_TR(0x5a36aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a36b2:{NFSU2_TR(0x5a36b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a36ba:{NFSU2_TR(0x5a36ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a36c2:{NFSU2_TR(0x5a36c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a36c7ull));
TAIL_STATIC(0x59bc20u,59b);
}
B5a36c7:L5a36c7:{c.instructions+=5;NFSU2_TR(0x5a36c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a36c8:{NFSU2_TR(0x5a36c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a36c9:{NFSU2_TR(0x5a36c9);
__builtin_memmove((R+16),(R+20),4);
}
B5a36cb:{NFSU2_TR(0x5a36cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a36cc:{NFSU2_TR(0x5a36cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a36cd:L5a36cd:{c.instructions+=7;NFSU2_TR(0x5a36cd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a36d1:{NFSU2_TR(0x5a36d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a36d2:{NFSU2_TR(0x5a36d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a36d6:{NFSU2_TR(0x5a36d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a36d7:{NFSU2_TR(0x5a36d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a36db:{NFSU2_TR(0x5a36db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a36dc:{NFSU2_TR(0x5a36dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a36e1ull));
TAIL_STATIC(0x43cf90u,43c);
}
B5a36e1:L5a36e1:{c.instructions+=5;NFSU2_TR(0x5a36e1);
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
B5a36e4:{NFSU2_TR(0x5a36e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a36e8:{NFSU2_TR(0x5a36e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a36e9:{NFSU2_TR(0x5a36e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a36ec:{NFSU2_TR(0x5a36ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a36f1ull));
TAIL_STATIC(0x59bc20u,59b);
}
B5a36f1:L5a36f1:{c.instructions+=5;NFSU2_TR(0x5a36f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a36f2:{NFSU2_TR(0x5a36f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a36f3:{NFSU2_TR(0x5a36f3);
__builtin_memmove((R+16),(R+20),4);
}
B5a36f5:{NFSU2_TR(0x5a36f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a36f6:{NFSU2_TR(0x5a36f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a36f7:L5a36f7:{c.instructions+=1;NFSU2_TR(0x5a36f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a36f9:L5a36f9:{c.instructions+=5;NFSU2_TR(0x5a36f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a36fa:{NFSU2_TR(0x5a36fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a36fb:{NFSU2_TR(0x5a36fb);
__builtin_memmove((R+16),(R+20),4);
}
B5a36fd:{NFSU2_TR(0x5a36fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a36fe:{NFSU2_TR(0x5a36fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a3700:L5a3700:{c.instructions+=11;NFSU2_TR(0x5a3700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5a3703:{NFSU2_TR(0x5a3703);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3704:{NFSU2_TR(0x5a3704);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3705:{NFSU2_TR(0x5a3705);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3706:{NFSU2_TR(0x5a3706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3707:{NFSU2_TR(0x5a3707);
__builtin_memmove((R+12),(R+4),4);
}
B5a3709:{NFSU2_TR(0x5a3709);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a370d:{NFSU2_TR(0x5a370d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a370e:{NFSU2_TR(0x5a370e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x210ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a3714:{NFSU2_TR(0x5a3714);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3715:{NFSU2_TR(0x5a3715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a371aull));
TAIL_STATIC(0x598d50u,598);
}
B5a371a:L5a371a:{c.instructions+=8;NFSU2_TR(0x5a371a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5a371c:{NFSU2_TR(0x5a371c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a371e:{NFSU2_TR(0x5a371e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5a3721:{NFSU2_TR(0x5a3721);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3725:{NFSU2_TR(0x5a3725);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a3728:{NFSU2_TR(0x5a3728);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a372c:{NFSU2_TR(0x5a372c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a3732:{NFSU2_TR(0x5a3732);
{goto L5a3740;}
}
B5a3734:L5a3734:{c.instructions+=2;NFSU2_TR(0x5a3734);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3738:{NFSU2_TR(0x5a3738);
{goto L5a3740;}
}
B5a3740:L5a3740:{c.instructions+=14;NFSU2_TR(0x5a3740);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3743:{NFSU2_TR(0x5a3743);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3746:{NFSU2_TR(0x5a3746);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3749:{NFSU2_TR(0x5a3749);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5a374c:{NFSU2_TR(0x5a374c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a374f:{NFSU2_TR(0x5a374f);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3752:{NFSU2_TR(0x5a3752);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3754:{NFSU2_TR(0x5a3754);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3757:{NFSU2_TR(0x5a3757);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3759:{NFSU2_TR(0x5a3759);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a375b:{NFSU2_TR(0x5a375b);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3761:{NFSU2_TR(0x5a3761);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3763:{NFSU2_TR(0x5a3763);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3766:{NFSU2_TR(0x5a3766);
if(r1(R+514)){{goto L5a3772;}}
}
B5a3768:L5a3768:{c.instructions+=3;NFSU2_TR(0x5a3768);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a376a:{NFSU2_TR(0x5a376a);
{u32 ea_=u32(u32(8003244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3770:{NFSU2_TR(0x5a3770);
{goto L5a377e;}
}
B5a3772:L5a3772:{c.instructions+=4;NFSU2_TR(0x5a3772);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3776:{NFSU2_TR(0x5a3776);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a377a:{NFSU2_TR(0x5a377a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a377c:{NFSU2_TR(0x5a377c);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B5a377e:L5a377e:{c.instructions+=14;NFSU2_TR(0x5a377e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a3780:{NFSU2_TR(0x5a3780);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a3783:{NFSU2_TR(0x5a3783);
{u32 ea_=u32(r4(R+24)+r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3787:{NFSU2_TR(0x5a3787);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a378b:{NFSU2_TR(0x5a378b);
__builtin_memmove((R+0),(R+8),4);
}
B5a378d:{NFSU2_TR(0x5a378d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5a378e:{NFSU2_TR(0x5a378e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5a3790:{NFSU2_TR(0x5a3790);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5a3792:{NFSU2_TR(0x5a3792);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a3795:{NFSU2_TR(0x5a3795);
u8 U[12];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a379c:{NFSU2_TR(0x5a379c);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a379f:{NFSU2_TR(0x5a379f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a37a1:{NFSU2_TR(0x5a37a1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a37a4:{NFSU2_TR(0x5a37a4);
if(r1(R+514)){{goto L5a37ba;}}
}
B5a37a6:L5a37a6:{c.instructions+=7;NFSU2_TR(0x5a37a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a37a9:{NFSU2_TR(0x5a37a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a37ab:{NFSU2_TR(0x5a37ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a37ad:{NFSU2_TR(0x5a37ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a37af:{NFSU2_TR(0x5a37af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a37b2:{NFSU2_TR(0x5a37b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a37b8:{NFSU2_TR(0x5a37b8);
{goto L5a37e6;}
}
B5a37ba:L5a37ba:{c.instructions+=4;NFSU2_TR(0x5a37ba);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a37bd:{NFSU2_TR(0x5a37bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a37bf:{NFSU2_TR(0x5a37bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a37c2:{NFSU2_TR(0x5a37c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a37d3;}}
}
B5a37c4:L5a37c4:{c.instructions+=5;NFSU2_TR(0x5a37c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a37c7:{NFSU2_TR(0x5a37c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a37c9:{NFSU2_TR(0x5a37c9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a37cb:{NFSU2_TR(0x5a37cb);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a37d1:{NFSU2_TR(0x5a37d1);
{goto L5a37df;}
}
B5a37d3:L5a37d3:{c.instructions+=2;NFSU2_TR(0x5a37d3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a37d5:{NFSU2_TR(0x5a37d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a37df:L5a37df:{c.instructions+=1;NFSU2_TR(0x5a37df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a37e6:L5a37e6:{c.instructions+=5;NFSU2_TR(0x5a37e6);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a37ec:{NFSU2_TR(0x5a37ec);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a37f2:{NFSU2_TR(0x5a37f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a37f4:{NFSU2_TR(0x5a37f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a37f7:{NFSU2_TR(0x5a37f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3801;}}
}
B5a37f9:L5a37f9:{c.instructions+=2;NFSU2_TR(0x5a37f9);
{u32 ea_=u32(u32(8374272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a37ff:{NFSU2_TR(0x5a37ff);
{goto L5a3807;}
}
B5a3801:L5a3801:{c.instructions+=1;NFSU2_TR(0x5a3801);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3807:L5a3807:{c.instructions+=11;NFSU2_TR(0x5a3807);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3809:{NFSU2_TR(0x5a3809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a380b:{NFSU2_TR(0x5a380b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a380f:{NFSU2_TR(0x5a380f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3813:{NFSU2_TR(0x5a3813);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3816:{NFSU2_TR(0x5a3816);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a3818:{NFSU2_TR(0x5a3818);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B5a381a:{NFSU2_TR(0x5a381a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a381e:{NFSU2_TR(0x5a381e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3821:{NFSU2_TR(0x5a3821);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3827:{NFSU2_TR(0x5a3827);
if(r1(R+518)){{goto L5a38a4;}}
}
B5a3829:L5a3829:{c.instructions+=6;NFSU2_TR(0x5a3829);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a382b:{NFSU2_TR(0x5a382b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a382f:{NFSU2_TR(0x5a382f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3835:{NFSU2_TR(0x5a3835);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3837:{NFSU2_TR(0x5a3837);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a383a:{NFSU2_TR(0x5a383a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3842;}}
}
B5a383c:L5a383c:{c.instructions+=2;NFSU2_TR(0x5a383c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3840:{NFSU2_TR(0x5a3840);
{goto L5a3848;}
}
B5a3842:L5a3842:{c.instructions+=1;NFSU2_TR(0x5a3842);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3848:L5a3848:{c.instructions+=9;NFSU2_TR(0x5a3848);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a384a:{NFSU2_TR(0x5a384a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3850:{NFSU2_TR(0x5a3850);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3853:{NFSU2_TR(0x5a3853);
{u32 ea_=u32(u32(8001952u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3859:{NFSU2_TR(0x5a3859);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a385d:{NFSU2_TR(0x5a385d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3863:{NFSU2_TR(0x5a3863);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3865:{NFSU2_TR(0x5a3865);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3868:{NFSU2_TR(0x5a3868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a386e;}}
}
B5a386a:L5a386a:{c.instructions+=2;NFSU2_TR(0x5a386a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a386c:{NFSU2_TR(0x5a386c);
{goto L5a3873;}
}
B5a386e:L5a386e:{c.instructions+=1;NFSU2_TR(0x5a386e);
w4(R+0,u32(0x1ull));
}
B5a3873:L5a3873:{c.instructions+=11;NFSU2_TR(0x5a3873);
{u32 ea_=u32(u32(8001956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3879:{NFSU2_TR(0x5a3879);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a387d:{NFSU2_TR(0x5a387d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3881:{NFSU2_TR(0x5a3881);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a3883:{NFSU2_TR(0x5a3883);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3887:{NFSU2_TR(0x5a3887);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3889:{NFSU2_TR(0x5a3889);
{u32 ea_=u32(r4(R+4)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a388f:{NFSU2_TR(0x5a388f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3895:{NFSU2_TR(0x5a3895);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3897:{NFSU2_TR(0x5a3897);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a389a:{NFSU2_TR(0x5a389a);
if(r1(R+514)){{goto L5a38a4;}}
}
B5a389c:L5a389c:{c.instructions+=2;NFSU2_TR(0x5a389c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a389e:{NFSU2_TR(0x5a389e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a38a4:L5a38a4:{c.instructions+=12;NFSU2_TR(0x5a38a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a38a8:{NFSU2_TR(0x5a38a8);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a38ab:{NFSU2_TR(0x5a38ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a38ac:{NFSU2_TR(0x5a38ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a38b0:{NFSU2_TR(0x5a38b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a38b4:{NFSU2_TR(0x5a38b4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5a38b7:{NFSU2_TR(0x5a38b7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B5a38ba:{NFSU2_TR(0x5a38ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5a38bd:{NFSU2_TR(0x5a38bd);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5a38c0:{NFSU2_TR(0x5a38c0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a38c6:{NFSU2_TR(0x5a38c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a38ca:{NFSU2_TR(0x5a38ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a3734u);}goto L5a3734;}}
}
B5a38d0:L5a38d0:{c.instructions+=6;NFSU2_TR(0x5a38d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a38d1:{NFSU2_TR(0x5a38d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a38d2:{NFSU2_TR(0x5a38d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a38d3:{NFSU2_TR(0x5a38d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a38d4:{NFSU2_TR(0x5a38d4);
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
B5a38d7:{NFSU2_TR(0x5a38d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a38e0:L5a38e0:{c.instructions+=15;NFSU2_TR(0x5a38e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a38e1:{NFSU2_TR(0x5a38e1);
__builtin_memmove((R+20),(R+16),4);
}
B5a38e3:{NFSU2_TR(0x5a38e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a38e6:{NFSU2_TR(0x5a38e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B5a38ec:{NFSU2_TR(0x5a38ec);
__builtin_memmove((R+0),gp(0x7a1970),4);
}
B5a38f1:{NFSU2_TR(0x5a38f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a38f2:{NFSU2_TR(0x5a38f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a38f6:{NFSU2_TR(0x5a38f6);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B5a38fb:{NFSU2_TR(0x5a38fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a38fc:{NFSU2_TR(0x5a38fc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a38fe:{NFSU2_TR(0x5a38fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3900:{NFSU2_TR(0x5a3900);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3901:{NFSU2_TR(0x5a3901);
__builtin_memmove((R+24),(R+4),4);
}
B5a3903:{NFSU2_TR(0x5a3903);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3907:{NFSU2_TR(0x5a3907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3911;}}
}
B5a3909:L5a3909:{c.instructions+=2;NFSU2_TR(0x5a3909);
u8 U[8];
__builtin_memmove((U+0),gp(0x89010c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a390f:{NFSU2_TR(0x5a390f);
if(r1(R+518)){{goto L5a391b;}}
}
B5a3911:L5a3911:{c.instructions+=2;NFSU2_TR(0x5a3911);
__builtin_memmove((R+4),gp(0x7a1974),4);
}
B5a3917:{NFSU2_TR(0x5a3917);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a391b:L5a391b:{c.instructions+=3;NFSU2_TR(0x5a391b);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B5a3920:{NFSU2_TR(0x5a3920);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a3922:{NFSU2_TR(0x5a3922);
if(r1(R+518)){{goto L5a3939;}}
}
B5a3924:L5a3924:{c.instructions+=3;NFSU2_TR(0x5a3924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a392a:{NFSU2_TR(0x5a392a);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a392d:{NFSU2_TR(0x5a392d);
if(r1(R+518)){{goto L5a3939;}}
}
B5a392f:L5a392f:{c.instructions+=2;NFSU2_TR(0x5a392f);
__builtin_memmove((R+8),gp(0x7a1978),4);
}
B5a3935:{NFSU2_TR(0x5a3935);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3939:L5a3939:{c.instructions+=9;NFSU2_TR(0x5a3939);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a393f:{NFSU2_TR(0x5a393f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3943:{NFSU2_TR(0x5a3943);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a394a:{NFSU2_TR(0x5a394a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3950:{NFSU2_TR(0x5a3950);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3953:{NFSU2_TR(0x5a3953);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3957:{NFSU2_TR(0x5a3957);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a395a:{NFSU2_TR(0x5a395a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a395e:{NFSU2_TR(0x5a395e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3962:L5a3962:{c.instructions+=29;NFSU2_TR(0x5a3962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3965:{NFSU2_TR(0x5a3965);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a396b:{NFSU2_TR(0x5a396b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a396e:{NFSU2_TR(0x5a396e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3970:{NFSU2_TR(0x5a3970);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a3974:{NFSU2_TR(0x5a3974);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a397a:{NFSU2_TR(0x5a397a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a397d:{NFSU2_TR(0x5a397d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a397f:{NFSU2_TR(0x5a397f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3983:{NFSU2_TR(0x5a3983);
{u32 ea_=u32(r4(R+0)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3989:{NFSU2_TR(0x5a3989);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a398b:{NFSU2_TR(0x5a398b);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a398f:{NFSU2_TR(0x5a398f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3991:{NFSU2_TR(0x5a3991);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3994:{NFSU2_TR(0x5a3994);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3998:{NFSU2_TR(0x5a3998);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a399b:{NFSU2_TR(0x5a399b);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a39a2:{NFSU2_TR(0x5a39a2);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a39a6:{NFSU2_TR(0x5a39a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a39a7:{NFSU2_TR(0x5a39a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a39a8:{NFSU2_TR(0x5a39a8);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a39af:{NFSU2_TR(0x5a39af);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a39b6:{NFSU2_TR(0x5a39b6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a39b8:{NFSU2_TR(0x5a39b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a39bf:{NFSU2_TR(0x5a39bf);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a39c6:{NFSU2_TR(0x5a39c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a39ca:{NFSU2_TR(0x5a39ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a39cb:{NFSU2_TR(0x5a39cb);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a39d2:{NFSU2_TR(0x5a39d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a39d7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a39d7:L5a39d7:{c.instructions+=6;NFSU2_TR(0x5a39d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a39db:{NFSU2_TR(0x5a39db);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B5a39de:{NFSU2_TR(0x5a39de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a39e1:{NFSU2_TR(0x5a39e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a39e4:{NFSU2_TR(0x5a39e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a39e6:{NFSU2_TR(0x5a39e6);
if(r1(R+518)){{goto L5a3c31;}}
}
B5a39ec:L5a39ec:{c.instructions+=14;NFSU2_TR(0x5a39ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a39ef:{NFSU2_TR(0x5a39ef);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a39f3:{NFSU2_TR(0x5a39f3);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a39f9:{NFSU2_TR(0x5a39f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a39fc:{NFSU2_TR(0x5a39fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a39ff:{NFSU2_TR(0x5a39ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3a00:{NFSU2_TR(0x5a3a00);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a3a06:{NFSU2_TR(0x5a3a06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3a07:{NFSU2_TR(0x5a3a07);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a0b:{NFSU2_TR(0x5a3a0b);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3a0f:{NFSU2_TR(0x5a3a0f);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3a15:{NFSU2_TR(0x5a3a15);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3a1b:{NFSU2_TR(0x5a3a1b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a1f:{NFSU2_TR(0x5a3a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3a24ull));
TAIL_STATIC(0x43c570u,43c);
}
B5a3a24:L5a3a24:{c.instructions+=8;NFSU2_TR(0x5a3a24);
w4(R+0,u32(r2(R+0)));
}
B5a3a27:{NFSU2_TR(0x5a3a27);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3a2b:{NFSU2_TR(0x5a3a2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a3a2e:{NFSU2_TR(0x5a3a2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a3a31:{NFSU2_TR(0x5a3a31);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a3a35:{NFSU2_TR(0x5a3a35);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3a3b:{NFSU2_TR(0x5a3a3b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a3f:{NFSU2_TR(0x5a3a3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a3a5e;}}
}
B5a3a41:L5a3a41:{c.instructions+=6;NFSU2_TR(0x5a3a41);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5a3a48:{NFSU2_TR(0x5a3a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3a4c:{NFSU2_TR(0x5a3a4c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a3a50:{NFSU2_TR(0x5a3a50);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3a56:{NFSU2_TR(0x5a3a56);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3a5a:{NFSU2_TR(0x5a3a5a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a5e:L5a3a5e:{c.instructions+=5;NFSU2_TR(0x5a3a5e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3a62:{NFSU2_TR(0x5a3a62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3a63:{NFSU2_TR(0x5a3a63);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3a69:{NFSU2_TR(0x5a3a69);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a6c:{NFSU2_TR(0x5a3a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3a71ull));
TAIL_STATIC(0x43c350u,43c);
}
B5a3a71:L5a3a71:{c.instructions+=4;NFSU2_TR(0x5a3a71);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3a75:{NFSU2_TR(0x5a3a75);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a79:{NFSU2_TR(0x5a3a79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3a7a:{NFSU2_TR(0x5a3a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3a7full));
TAIL_STATIC(0x43c350u,43c);
}
B5a3a7f:L5a3a7f:{c.instructions+=34;NFSU2_TR(0x5a3a7f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3a83:{NFSU2_TR(0x5a3a83);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3a87:{NFSU2_TR(0x5a3a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3a8a:{NFSU2_TR(0x5a3a8a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a3a8c:{NFSU2_TR(0x5a3a8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a3a8f:{NFSU2_TR(0x5a3a8f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3a93:{NFSU2_TR(0x5a3a93);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5a3a95:{NFSU2_TR(0x5a3a95);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3a99:{NFSU2_TR(0x5a3a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3a9d:{NFSU2_TR(0x5a3a9d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3aa1:{NFSU2_TR(0x5a3aa1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3aa5:{NFSU2_TR(0x5a3aa5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3aa9:{NFSU2_TR(0x5a3aa9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3aab:{NFSU2_TR(0x5a3aab);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3aaf:{NFSU2_TR(0x5a3aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3ab3:{NFSU2_TR(0x5a3ab3);
{u32 ea_=u32(r4(R+28)+u32(4294967248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3ab6:{NFSU2_TR(0x5a3ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3ab9:{NFSU2_TR(0x5a3ab9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5a3abb:{NFSU2_TR(0x5a3abb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3abd:{NFSU2_TR(0x5a3abd);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3ac0:{NFSU2_TR(0x5a3ac0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ac6:{NFSU2_TR(0x5a3ac6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a3ac8:{NFSU2_TR(0x5a3ac8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a3aca:{NFSU2_TR(0x5a3aca);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ace:{NFSU2_TR(0x5a3ace);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3ad2:{NFSU2_TR(0x5a3ad2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3ad4:{NFSU2_TR(0x5a3ad4);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a3ad6:{NFSU2_TR(0x5a3ad6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3ada:{NFSU2_TR(0x5a3ada);
{u32 ea_=u32(u32(8001900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ae0:{NFSU2_TR(0x5a3ae0);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3ae6:{NFSU2_TR(0x5a3ae6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3aea:{NFSU2_TR(0x5a3aea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3aec:{NFSU2_TR(0x5a3aec);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3aef:{NFSU2_TR(0x5a3aef);
if(r1(R+514)){{goto L5a3aff;}}
}
B5a3af1:L5a3af1:{c.instructions+=3;NFSU2_TR(0x5a3af1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3af3:{NFSU2_TR(0x5a3af3);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3af9:{NFSU2_TR(0x5a3af9);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3aff:L5a3aff:{c.instructions+=6;NFSU2_TR(0x5a3aff);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3b03:{NFSU2_TR(0x5a3b03);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3b05:{NFSU2_TR(0x5a3b05);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3b0b:{NFSU2_TR(0x5a3b0b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3b0d:{NFSU2_TR(0x5a3b0d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3b10:{NFSU2_TR(0x5a3b10);
if(r1(R+514)){{goto L5a3b18;}}
}
B5a3b12:L5a3b12:{c.instructions+=1;NFSU2_TR(0x5a3b12);
{u32 ea_=u32(u32(8001976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3b18:L5a3b18:{c.instructions+=11;NFSU2_TR(0x5a3b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3b1e:{NFSU2_TR(0x5a3b1e);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x86518c))));
}
B5a3b24:{NFSU2_TR(0x5a3b24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3b28:{NFSU2_TR(0x5a3b28);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a3b2c:{NFSU2_TR(0x5a3b2c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3b32:{NFSU2_TR(0x5a3b32);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3b36:{NFSU2_TR(0x5a3b36);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3b3c:{NFSU2_TR(0x5a3b3c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3b40:{NFSU2_TR(0x5a3b40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3b42:{NFSU2_TR(0x5a3b42);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3b45:{NFSU2_TR(0x5a3b45);
if(r1(R+514)){{goto L5a3b4f;}}
}
B5a3b47:L5a3b47:{c.instructions+=2;NFSU2_TR(0x5a3b47);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3b4d:{NFSU2_TR(0x5a3b4d);
{goto L5a3b64;}
}
B5a3b4f:L5a3b4f:{c.instructions+=6;NFSU2_TR(0x5a3b4f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3b53:{NFSU2_TR(0x5a3b53);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3b57:{NFSU2_TR(0x5a3b57);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3b5d:{NFSU2_TR(0x5a3b5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3b5f:{NFSU2_TR(0x5a3b5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3b62:{NFSU2_TR(0x5a3b62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3b7c;}}
}
B5a3b64:L5a3b64:{c.instructions+=5;NFSU2_TR(0x5a3b64);
{u32 ea_=u32(u32(8001980u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3b6a:{NFSU2_TR(0x5a3b6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3b72:{NFSU2_TR(0x5a3b72);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3b78:{NFSU2_TR(0x5a3b78);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a3b7a:{NFSU2_TR(0x5a3b7a);
{goto L5a3b7e;}
}
B5a3b7c:L5a3b7c:{c.instructions+=1;NFSU2_TR(0x5a3b7c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3b7e:L5a3b7e:{c.instructions+=5;NFSU2_TR(0x5a3b7e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3b82:{NFSU2_TR(0x5a3b82);
{u32 ea_=u32(u32(8001940u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3b88:{NFSU2_TR(0x5a3b88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3b8a:{NFSU2_TR(0x5a3b8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3b8d:{NFSU2_TR(0x5a3b8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3b96;}}
}
B5a3b8f:L5a3b8f:{c.instructions+=2;NFSU2_TR(0x5a3b8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3b93:{NFSU2_TR(0x5a3b93);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5a3b96:L5a3b96:{c.instructions+=14;NFSU2_TR(0x5a3b96);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a3b99:{NFSU2_TR(0x5a3b99);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3b9b:{NFSU2_TR(0x5a3b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3ba3:{NFSU2_TR(0x5a3ba3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3ba5:{NFSU2_TR(0x5a3ba5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a3ba7:{NFSU2_TR(0x5a3ba7);
{u32 ea_=u32(u32(8001884u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3bad:{NFSU2_TR(0x5a3bad);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3baf:{NFSU2_TR(0x5a3baf);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3bb3:{NFSU2_TR(0x5a3bb3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3bb7:{NFSU2_TR(0x5a3bb7);
{u32 ea_=u32(u32(8001888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3bbd:{NFSU2_TR(0x5a3bbd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3bbf:{NFSU2_TR(0x5a3bbf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3bc3:{NFSU2_TR(0x5a3bc3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3bc5:{NFSU2_TR(0x5a3bc5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a3be0;}}
}
B5a3bc7:L5a3bc7:{c.instructions+=5;NFSU2_TR(0x5a3bc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5a3bce:{NFSU2_TR(0x5a3bce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3bd2:{NFSU2_TR(0x5a3bd2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a3bd6:{NFSU2_TR(0x5a3bd6);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3bdc:{NFSU2_TR(0x5a3bdc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3be0:L5a3be0:{c.instructions+=5;NFSU2_TR(0x5a3be0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3be4:{NFSU2_TR(0x5a3be4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3be5:{NFSU2_TR(0x5a3be5);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3beb:{NFSU2_TR(0x5a3beb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3bee:{NFSU2_TR(0x5a3bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3bf3ull));
TAIL_STATIC(0x43c350u,43c);
}
B5a3bf3:L5a3bf3:{c.instructions+=4;NFSU2_TR(0x5a3bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3bf7:{NFSU2_TR(0x5a3bf7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3bfb:{NFSU2_TR(0x5a3bfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3bfc:{NFSU2_TR(0x5a3bfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3c01ull));
TAIL_STATIC(0x43c350u,43c);
}
B5a3c01:L5a3c01:{c.instructions+=16;NFSU2_TR(0x5a3c01);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3c05:{NFSU2_TR(0x5a3c05);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3c09:{NFSU2_TR(0x5a3c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3c0d:{NFSU2_TR(0x5a3c0d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3c11:{NFSU2_TR(0x5a3c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5a3c14:{NFSU2_TR(0x5a3c14);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a3c16:{NFSU2_TR(0x5a3c16);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5a3c18:{NFSU2_TR(0x5a3c18);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3c1a:{NFSU2_TR(0x5a3c1a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3c1e:{NFSU2_TR(0x5a3c1e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3c20:{NFSU2_TR(0x5a3c20);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3c24:{NFSU2_TR(0x5a3c24);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3c28:{NFSU2_TR(0x5a3c28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3c2a:{NFSU2_TR(0x5a3c2a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3c2d:{NFSU2_TR(0x5a3c2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3c2f:{NFSU2_TR(0x5a3c2f);
{goto L5a3c42;}
}
B5a3c31:L5a3c31:{c.instructions+=3;NFSU2_TR(0x5a3c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3c35:{NFSU2_TR(0x5a3c35);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5a3c3b:{NFSU2_TR(0x5a3c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3c42:L5a3c42:{c.instructions+=10;NFSU2_TR(0x5a3c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a3c44:{NFSU2_TR(0x5a3c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a3c46:{NFSU2_TR(0x5a3c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3c49:{NFSU2_TR(0x5a3c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3c4d:{NFSU2_TR(0x5a3c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3c50:{NFSU2_TR(0x5a3c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3c53:{NFSU2_TR(0x5a3c53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a3c55:{NFSU2_TR(0x5a3c55);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a3c5b:{NFSU2_TR(0x5a3c5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3c5d:{NFSU2_TR(0x5a3c5d);
if(r1(R+518)){{goto L5a3c6c;}}
}
B5a3c5f:L5a3c5f:{c.instructions+=2;NFSU2_TR(0x5a3c5f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5a3c65:{NFSU2_TR(0x5a3c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3c6c:L5a3c6c:{c.instructions+=7;NFSU2_TR(0x5a3c6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3c6d:{NFSU2_TR(0x5a3c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3c70:{NFSU2_TR(0x5a3c70);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a3c73:{NFSU2_TR(0x5a3c73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3c74:{NFSU2_TR(0x5a3c74);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a3c78:{NFSU2_TR(0x5a3c78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3c79:{NFSU2_TR(0x5a3c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3c7eull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a3c7e:L5a3c7e:{c.instructions+=4;NFSU2_TR(0x5a3c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3c81:{NFSU2_TR(0x5a3c81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5a3c84:{NFSU2_TR(0x5a3c84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a3c86:{NFSU2_TR(0x5a3c86);
if(r1(R+518)){{goto L5a3dcd;}}
}
B5a3c8c:L5a3c8c:{c.instructions+=18;NFSU2_TR(0x5a3c8c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3c90:{NFSU2_TR(0x5a3c90);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3c94:{NFSU2_TR(0x5a3c94);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3c96:{NFSU2_TR(0x5a3c96);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3c98:{NFSU2_TR(0x5a3c98);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a3c9a:{NFSU2_TR(0x5a3c9a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a3c9c:{NFSU2_TR(0x5a3c9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3c9e:{NFSU2_TR(0x5a3c9e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a3ca0:{NFSU2_TR(0x5a3ca0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3ca4:{NFSU2_TR(0x5a3ca4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ca8:{NFSU2_TR(0x5a3ca8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3caa:{NFSU2_TR(0x5a3caa);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3cb0:{NFSU2_TR(0x5a3cb0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3cb4:{NFSU2_TR(0x5a3cb4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3cb8:{NFSU2_TR(0x5a3cb8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3cbc:{NFSU2_TR(0x5a3cbc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3cbe:{NFSU2_TR(0x5a3cbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3cc1:{NFSU2_TR(0x5a3cc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3cd1;}}
}
B5a3cc3:L5a3cc3:{c.instructions+=5;NFSU2_TR(0x5a3cc3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3cc7:{NFSU2_TR(0x5a3cc7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a3ccb:{NFSU2_TR(0x5a3ccb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3ccd:{NFSU2_TR(0x5a3ccd);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B5a3ccf:{NFSU2_TR(0x5a3ccf);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a3cd1:L5a3cd1:{c.instructions+=6;NFSU2_TR(0x5a3cd1);
{u32 ea_=u32(r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3cd7:{NFSU2_TR(0x5a3cd7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a3cdd:{NFSU2_TR(0x5a3cdd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3ce3:{NFSU2_TR(0x5a3ce3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3ce5:{NFSU2_TR(0x5a3ce5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3ce8:{NFSU2_TR(0x5a3ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3cf8;}}
}
B5a3cea:L5a3cea:{c.instructions+=3;NFSU2_TR(0x5a3cea);
{u32 ea_=u32(u32(8001932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3cf0:{NFSU2_TR(0x5a3cf0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3cf6:{NFSU2_TR(0x5a3cf6);
{goto L5a3d00;}
}
B5a3cf8:L5a3cf8:{c.instructions+=2;NFSU2_TR(0x5a3cf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3cfa:{NFSU2_TR(0x5a3cfa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d00:L5a3d00:{c.instructions+=9;NFSU2_TR(0x5a3d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3d03:{NFSU2_TR(0x5a3d03);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a3d05:{NFSU2_TR(0x5a3d05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a3d07:{NFSU2_TR(0x5a3d07);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a3d09:{NFSU2_TR(0x5a3d09);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3d0d:{NFSU2_TR(0x5a3d0d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3d0f:{NFSU2_TR(0x5a3d0f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3d13:{NFSU2_TR(0x5a3d13);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3d15:{NFSU2_TR(0x5a3d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3da9;}}
}
B5a3d1b:L5a3d1b:{c.instructions+=5;NFSU2_TR(0x5a3d1b);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d21:{NFSU2_TR(0x5a3d21);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3d27:{NFSU2_TR(0x5a3d27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3d29:{NFSU2_TR(0x5a3d29);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3d2c:{NFSU2_TR(0x5a3d2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3d66;}}
}
B5a3d2e:L5a3d2e:{c.instructions+=21;NFSU2_TR(0x5a3d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3d31:{NFSU2_TR(0x5a3d31);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d37:{NFSU2_TR(0x5a3d37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B5a3d3c:{NFSU2_TR(0x5a3d3c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d3f:{NFSU2_TR(0x5a3d3f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d41:{NFSU2_TR(0x5a3d41);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3d43:{NFSU2_TR(0x5a3d43);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3d45:{NFSU2_TR(0x5a3d45);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a3d47:{NFSU2_TR(0x5a3d47);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a3d49:{NFSU2_TR(0x5a3d49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3d4b:{NFSU2_TR(0x5a3d4b);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a3d4d:{NFSU2_TR(0x5a3d4d);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a3d4f:{NFSU2_TR(0x5a3d4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3d51:{NFSU2_TR(0x5a3d51);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a3d53:{NFSU2_TR(0x5a3d53);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a3d55:{NFSU2_TR(0x5a3d55);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3d57:{NFSU2_TR(0x5a3d57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3d59:{NFSU2_TR(0x5a3d59);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3d5f:{NFSU2_TR(0x5a3d5f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3d61:{NFSU2_TR(0x5a3d61);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3d64:{NFSU2_TR(0x5a3d64);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a3da9;}}
}
B5a3d66:L5a3d66:{c.instructions+=5;NFSU2_TR(0x5a3d66);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d6a:{NFSU2_TR(0x5a3d6a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3d6e:{NFSU2_TR(0x5a3d6e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3d70:{NFSU2_TR(0x5a3d70);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a3d73:{NFSU2_TR(0x5a3d73);
if(r1(R+514)){{goto L5a3dcd;}}
}
B5a3d75:L5a3d75:{c.instructions+=19;NFSU2_TR(0x5a3d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3d78:{NFSU2_TR(0x5a3d78);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d7a:{NFSU2_TR(0x5a3d7a);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a3d7d:{NFSU2_TR(0x5a3d7d);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d80:{NFSU2_TR(0x5a3d80);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a3d82:{NFSU2_TR(0x5a3d82);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3d85:{NFSU2_TR(0x5a3d85);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3d87:{NFSU2_TR(0x5a3d87);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3d89:{NFSU2_TR(0x5a3d89);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3d8d:{NFSU2_TR(0x5a3d8d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3d91:{NFSU2_TR(0x5a3d91);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3d94:{NFSU2_TR(0x5a3d94);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a3d96:{NFSU2_TR(0x5a3d96);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3d99:{NFSU2_TR(0x5a3d99);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3d9b:{NFSU2_TR(0x5a3d9b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3d9d:{NFSU2_TR(0x5a3d9d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3da1:{NFSU2_TR(0x5a3da1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3da5:{NFSU2_TR(0x5a3da5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3da7:{NFSU2_TR(0x5a3da7);
{goto L5a3dcd;}
}
B5a3da9:L5a3da9:{c.instructions+=12;NFSU2_TR(0x5a3da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3dac:{NFSU2_TR(0x5a3dac);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3dae:{NFSU2_TR(0x5a3dae);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5a3db1:{NFSU2_TR(0x5a3db1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3db3:{NFSU2_TR(0x5a3db3);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3db6:{NFSU2_TR(0x5a3db6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3db8:{NFSU2_TR(0x5a3db8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3dbc:{NFSU2_TR(0x5a3dbc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3dc0:{NFSU2_TR(0x5a3dc0);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3dc3:{NFSU2_TR(0x5a3dc3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3dc5:{NFSU2_TR(0x5a3dc5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3dc9:{NFSU2_TR(0x5a3dc9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3dcd:L5a3dcd:{c.instructions+=3;NFSU2_TR(0x5a3dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3dd1:{NFSU2_TR(0x5a3dd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a3dd3:{NFSU2_TR(0x5a3dd3);
if(r1(R+518)){{goto L5a3de5;}}
}
B5a3dd5:L5a3dd5:{c.instructions+=2;NFSU2_TR(0x5a3dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3ddd:{NFSU2_TR(0x5a3ddd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3de5:L5a3de5:{c.instructions+=6;NFSU2_TR(0x5a3de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3de8:{NFSU2_TR(0x5a3de8);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3dec:{NFSU2_TR(0x5a3dec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3ded:{NFSU2_TR(0x5a3ded);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3df1:{NFSU2_TR(0x5a3df1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3df2:{NFSU2_TR(0x5a3df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3df7ull));
TAIL_STATIC(0x59bb00u,59b);
}
B5a3df7:L5a3df7:{c.instructions+=15;NFSU2_TR(0x5a3df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3dfb:{NFSU2_TR(0x5a3dfb);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3dfe:{NFSU2_TR(0x5a3dfe);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3e00:{NFSU2_TR(0x5a3e00);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a3e02:{NFSU2_TR(0x5a3e02);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3e04:{NFSU2_TR(0x5a3e04);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a3e06:{NFSU2_TR(0x5a3e06);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a3e08:{NFSU2_TR(0x5a3e08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3e0a:{NFSU2_TR(0x5a3e0a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a3e0c:{NFSU2_TR(0x5a3e0c);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a3e0e:{NFSU2_TR(0x5a3e0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3e10:{NFSU2_TR(0x5a3e10);
{u32 ea_=u32(u32(8001972u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3e16:{NFSU2_TR(0x5a3e16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3e18:{NFSU2_TR(0x5a3e18);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3e1b:{NFSU2_TR(0x5a3e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a3e31;}}
}
B5a3e1d:L5a3e1d:{c.instructions+=7;NFSU2_TR(0x5a3e1d);
{u32 ea_=u32(u32(8001972u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a3e23:{NFSU2_TR(0x5a3e23);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3e25:{NFSU2_TR(0x5a3e25);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a3e27:{NFSU2_TR(0x5a3e27);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3e2a:{NFSU2_TR(0x5a3e2a);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3e2d:{NFSU2_TR(0x5a3e2d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3e2f:{NFSU2_TR(0x5a3e2f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3e31:L5a3e31:{c.instructions+=17;NFSU2_TR(0x5a3e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3e35:{NFSU2_TR(0x5a3e35);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3e37:{NFSU2_TR(0x5a3e37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5a3e3a:{NFSU2_TR(0x5a3e3a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a3e3d:{NFSU2_TR(0x5a3e3d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B5a3e40:{NFSU2_TR(0x5a3e40);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a3e41:{NFSU2_TR(0x5a3e41);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3e45:{NFSU2_TR(0x5a3e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a3e49:{NFSU2_TR(0x5a3e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3e4d:{NFSU2_TR(0x5a3e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3e51:{NFSU2_TR(0x5a3e51);
w4(R+0,u32(0x10ull));
}
B5a3e56:{NFSU2_TR(0x5a3e56);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5a3e58:{NFSU2_TR(0x5a3e58);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5a3e5a:{NFSU2_TR(0x5a3e5a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a3e60:{NFSU2_TR(0x5a3e60);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3e64:{NFSU2_TR(0x5a3e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3e68:{NFSU2_TR(0x5a3e68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a3962u);}goto L5a3962;}}
}
B5a3e6e:L5a3e6e:{c.instructions+=6;NFSU2_TR(0x5a3e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a3e6f:{NFSU2_TR(0x5a3e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a3e70:{NFSU2_TR(0x5a3e70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a3e71:{NFSU2_TR(0x5a3e71);
__builtin_memmove((R+16),(R+20),4);
}
B5a3e73:{NFSU2_TR(0x5a3e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a3e74:{NFSU2_TR(0x5a3e74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a3e80:L5a3e80:{c.instructions+=18;NFSU2_TR(0x5a3e80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3e81:{NFSU2_TR(0x5a3e81);
__builtin_memmove((R+20),(R+16),4);
}
B5a3e83:{NFSU2_TR(0x5a3e83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5a3e86:{NFSU2_TR(0x5a3e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B5a3e8c:{NFSU2_TR(0x5a3e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3e8f:{NFSU2_TR(0x5a3e8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3e90:{NFSU2_TR(0x5a3e90);
__builtin_memmove((R+12),(R+4),4);
}
B5a3e92:{NFSU2_TR(0x5a3e92);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a3e94:{NFSU2_TR(0x5a3e94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3e95:{NFSU2_TR(0x5a3e95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
}
B5a3e9a:{NFSU2_TR(0x5a3e9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3e9d:{NFSU2_TR(0x5a3e9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3e9e:{NFSU2_TR(0x5a3e9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a3ea6:{NFSU2_TR(0x5a3ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3eaa:{NFSU2_TR(0x5a3eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3eae:{NFSU2_TR(0x5a3eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3eb2:{NFSU2_TR(0x5a3eb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a3eb8:{NFSU2_TR(0x5a3eb8);
{goto L5a3ec0;}
}
B5a3ec0:L5a3ec0:{c.instructions+=5;NFSU2_TR(0x5a3ec0);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ec6:{NFSU2_TR(0x5a3ec6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a3ecc:{NFSU2_TR(0x5a3ecc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3ece:{NFSU2_TR(0x5a3ece);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3ed1:{NFSU2_TR(0x5a3ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a403bu,5a4);}
}
B5a3ed7:L5a3ed7:{c.instructions+=30;NFSU2_TR(0x5a3ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a3eda:{NFSU2_TR(0x5a3eda);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ee0:{NFSU2_TR(0x5a3ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a3ee3:{NFSU2_TR(0x5a3ee3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3ee5:{NFSU2_TR(0x5a3ee5);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a3ee9:{NFSU2_TR(0x5a3ee9);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3eef:{NFSU2_TR(0x5a3eef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5a3ef2:{NFSU2_TR(0x5a3ef2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3ef4:{NFSU2_TR(0x5a3ef4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3ef8:{NFSU2_TR(0x5a3ef8);
{u32 ea_=u32(r4(R+0)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3efe:{NFSU2_TR(0x5a3efe);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3f00:{NFSU2_TR(0x5a3f00);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f04:{NFSU2_TR(0x5a3f04);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f06:{NFSU2_TR(0x5a3f06);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f09:{NFSU2_TR(0x5a3f09);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f0d:{NFSU2_TR(0x5a3f0d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f10:{NFSU2_TR(0x5a3f10);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a3f14:{NFSU2_TR(0x5a3f14);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f18:{NFSU2_TR(0x5a3f18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3f19:{NFSU2_TR(0x5a3f19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3f1a:{NFSU2_TR(0x5a3f1a);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f21:{NFSU2_TR(0x5a3f21);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a3f23:{NFSU2_TR(0x5a3f23);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f27:{NFSU2_TR(0x5a3f27);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f2b:{NFSU2_TR(0x5a3f2b);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f32:{NFSU2_TR(0x5a3f32);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f34:{NFSU2_TR(0x5a3f34);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3f38:{NFSU2_TR(0x5a3f38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3f39:{NFSU2_TR(0x5a3f39);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f3d:{NFSU2_TR(0x5a3f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3f42ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5a3f42:L5a3f42:{c.instructions+=8;NFSU2_TR(0x5a3f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a3f45:{NFSU2_TR(0x5a3f45);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3f49:{NFSU2_TR(0x5a3f49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3f4a:{NFSU2_TR(0x5a3f4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a3f50:{NFSU2_TR(0x5a3f50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3f51:{NFSU2_TR(0x5a3f51);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3f55:{NFSU2_TR(0x5a3f55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3f56:{NFSU2_TR(0x5a3f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a3f5bull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5a3f5b:L5a3f5b:{c.instructions+=32;NFSU2_TR(0x5a3f5b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f5f:{NFSU2_TR(0x5a3f5f);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f65:{NFSU2_TR(0x5a3f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a3f67:{NFSU2_TR(0x5a3f67);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f6d:{NFSU2_TR(0x5a3f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a3f71:{NFSU2_TR(0x5a3f71);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f75:{NFSU2_TR(0x5a3f75);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f7b:{NFSU2_TR(0x5a3f7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5a3f7e:{NFSU2_TR(0x5a3f7e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a3f82:{NFSU2_TR(0x5a3f82);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f89:{NFSU2_TR(0x5a3f89);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a3f8b:{NFSU2_TR(0x5a3f8b);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3f92:{NFSU2_TR(0x5a3f92);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f99:{NFSU2_TR(0x5a3f99);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3f9c:{NFSU2_TR(0x5a3f9c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3fa0:{NFSU2_TR(0x5a3fa0);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3fa3:{NFSU2_TR(0x5a3fa3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3fa7:{NFSU2_TR(0x5a3fa7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3fab:{NFSU2_TR(0x5a3fab);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3fad:{NFSU2_TR(0x5a3fad);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3fb1:{NFSU2_TR(0x5a3fb1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a3fb3:{NFSU2_TR(0x5a3fb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3fb5:{NFSU2_TR(0x5a3fb5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3fb9:{NFSU2_TR(0x5a3fb9);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3fc0:{NFSU2_TR(0x5a3fc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a3fc2:{NFSU2_TR(0x5a3fc2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a3fc4:{NFSU2_TR(0x5a3fc4);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a3fc6:{NFSU2_TR(0x5a3fc6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3fc8:{NFSU2_TR(0x5a3fc8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a3fce:{NFSU2_TR(0x5a3fce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a3fd0:{NFSU2_TR(0x5a3fd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a3fd3:{NFSU2_TR(0x5a3fd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5a4039u,5a4);}
}
B5a3fd5:L5a3fd5:{c.instructions+=13;NFSU2_TR(0x5a3fd5);
{u32 ea_=u32(u32(8001960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3fdb:{NFSU2_TR(0x5a3fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a3fde:{NFSU2_TR(0x5a3fde);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a3fe0:{NFSU2_TR(0x5a3fe0);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a3fe4:{NFSU2_TR(0x5a3fe4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3fe5:{NFSU2_TR(0x5a3fe5);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a3fe9:{NFSU2_TR(0x5a3fe9);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3fef:{NFSU2_TR(0x5a3fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a3ff0:{NFSU2_TR(0x5a3ff0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a3ff4:{NFSU2_TR(0x5a3ff4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a3ff6:{NFSU2_TR(0x5a3ff6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a3ffa:{NFSU2_TR(0x5a3ffa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a3ffe:{NFSU2_TR(0x5a3ffe);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x5a4002u,5a4);
}
XIT:NFSU2_TR_EXIT(0x5a3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
