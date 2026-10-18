#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_6f0(u8* __restrict R,Cpu& c);
u32 body_6f1(u8* __restrict R,Cpu& c);
u32 body_6f2(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6f3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6f3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6f3(u8* __restrict R,Cpu& c);
u32 page_6f3(Cpu& c){return body_6f3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6f3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6f3003:goto L6f3003;
case 0x6f3007:c.instructions+=50;goto B6f3007;
case 0x6f3009:c.instructions+=49;goto B6f3009;
case 0x6f300d:c.instructions+=48;goto B6f300d;
case 0x6f3013:c.instructions+=47;goto B6f3013;
case 0x6f3015:c.instructions+=46;goto B6f3015;
case 0x6f3019:c.instructions+=45;goto B6f3019;
case 0x6f301c:c.instructions+=44;goto B6f301c;
case 0x6f3020:c.instructions+=43;goto B6f3020;
case 0x6f3022:c.instructions+=42;goto B6f3022;
case 0x6f3028:c.instructions+=41;goto B6f3028;
case 0x6f302a:c.instructions+=40;goto B6f302a;
case 0x6f3030:c.instructions+=39;goto B6f3030;
case 0x6f3032:c.instructions+=38;goto B6f3032;
case 0x6f3035:c.instructions+=37;goto B6f3035;
case 0x6f3038:c.instructions+=36;goto B6f3038;
case 0x6f303c:c.instructions+=35;goto B6f303c;
case 0x6f303e:c.instructions+=34;goto B6f303e;
case 0x6f3044:c.instructions+=33;goto B6f3044;
case 0x6f3046:c.instructions+=32;goto B6f3046;
case 0x6f304c:c.instructions+=31;goto B6f304c;
case 0x6f304e:c.instructions+=30;goto B6f304e;
case 0x6f3052:c.instructions+=29;goto B6f3052;
case 0x6f3055:c.instructions+=28;goto B6f3055;
case 0x6f3058:c.instructions+=27;goto B6f3058;
case 0x6f305b:c.instructions+=26;goto B6f305b;
case 0x6f305f:c.instructions+=25;goto B6f305f;
case 0x6f3063:c.instructions+=24;goto B6f3063;
case 0x6f3067:c.instructions+=23;goto B6f3067;
case 0x6f306b:c.instructions+=22;goto B6f306b;
case 0x6f306f:c.instructions+=21;goto B6f306f;
case 0x6f3073:c.instructions+=20;goto B6f3073;
case 0x6f3077:c.instructions+=19;goto B6f3077;
case 0x6f307b:c.instructions+=18;goto B6f307b;
case 0x6f307f:c.instructions+=17;goto B6f307f;
case 0x6f3083:c.instructions+=16;goto B6f3083;
case 0x6f3087:c.instructions+=15;goto B6f3087;
case 0x6f308b:c.instructions+=14;goto B6f308b;
case 0x6f308f:c.instructions+=13;goto B6f308f;
case 0x6f3093:c.instructions+=12;goto B6f3093;
case 0x6f3097:c.instructions+=11;goto B6f3097;
case 0x6f309b:c.instructions+=10;goto B6f309b;
case 0x6f309f:c.instructions+=9;goto B6f309f;
case 0x6f30a3:c.instructions+=8;goto B6f30a3;
case 0x6f30a7:c.instructions+=7;goto B6f30a7;
case 0x6f30ab:c.instructions+=6;goto B6f30ab;
case 0x6f30ac:c.instructions+=5;goto B6f30ac;
case 0x6f30af:c.instructions+=4;goto B6f30af;
case 0x6f30b2:c.instructions+=3;goto B6f30b2;
case 0x6f30b4:c.instructions+=2;goto B6f30b4;
case 0x6f30b8:c.instructions+=1;goto B6f30b8;
case 0x6f30be:goto L6f30be;
case 0x6f30c2:c.instructions+=1;goto B6f30c2;
case 0x6f30c7:goto L6f30c7;
case 0x6f30c9:c.instructions+=3;goto B6f30c9;
case 0x6f30cb:c.instructions+=2;goto B6f30cb;
case 0x6f30cf:c.instructions+=1;goto B6f30cf;
case 0x6f30d5:goto L6f30d5;
case 0x6f30d8:c.instructions+=1;goto B6f30d8;
case 0x6f30da:goto L6f30da;
case 0x6f30de:c.instructions+=1;goto B6f30de;
case 0x6f30e0:goto L6f30e0;
case 0x6f30e4:c.instructions+=9;goto B6f30e4;
case 0x6f30e8:c.instructions+=8;goto B6f30e8;
case 0x6f30ea:c.instructions+=7;goto B6f30ea;
case 0x6f30ed:c.instructions+=6;goto B6f30ed;
case 0x6f30f2:c.instructions+=5;goto B6f30f2;
case 0x6f30f4:c.instructions+=4;goto B6f30f4;
case 0x6f30f6:c.instructions+=3;goto B6f30f6;
case 0x6f30f9:c.instructions+=2;goto B6f30f9;
case 0x6f30fd:c.instructions+=1;goto B6f30fd;
case 0x6f30ff:goto L6f30ff;
case 0x6f3102:c.instructions+=35;goto B6f3102;
case 0x6f3106:c.instructions+=34;goto B6f3106;
case 0x6f3108:c.instructions+=33;goto B6f3108;
case 0x6f310e:c.instructions+=32;goto B6f310e;
case 0x6f3110:c.instructions+=31;goto B6f3110;
case 0x6f3116:c.instructions+=30;goto B6f3116;
case 0x6f3118:c.instructions+=29;goto B6f3118;
case 0x6f311b:c.instructions+=28;goto B6f311b;
case 0x6f311e:c.instructions+=27;goto B6f311e;
case 0x6f3122:c.instructions+=26;goto B6f3122;
case 0x6f3126:c.instructions+=25;goto B6f3126;
case 0x6f3128:c.instructions+=24;goto B6f3128;
case 0x6f312e:c.instructions+=23;goto B6f312e;
case 0x6f3130:c.instructions+=22;goto B6f3130;
case 0x6f3136:c.instructions+=21;goto B6f3136;
case 0x6f3138:c.instructions+=20;goto B6f3138;
case 0x6f313b:c.instructions+=19;goto B6f313b;
case 0x6f313f:c.instructions+=18;goto B6f313f;
case 0x6f3142:c.instructions+=17;goto B6f3142;
case 0x6f3143:c.instructions+=16;goto B6f3143;
case 0x6f3145:c.instructions+=15;goto B6f3145;
case 0x6f314b:c.instructions+=14;goto B6f314b;
case 0x6f314d:c.instructions+=13;goto B6f314d;
case 0x6f3153:c.instructions+=12;goto B6f3153;
case 0x6f3155:c.instructions+=11;goto B6f3155;
case 0x6f3158:c.instructions+=10;goto B6f3158;
case 0x6f315c:c.instructions+=9;goto B6f315c;
case 0x6f3160:c.instructions+=8;goto B6f3160;
case 0x6f3161:c.instructions+=7;goto B6f3161;
case 0x6f3163:c.instructions+=6;goto B6f3163;
case 0x6f3169:c.instructions+=5;goto B6f3169;
case 0x6f316b:c.instructions+=4;goto B6f316b;
case 0x6f3171:c.instructions+=3;goto B6f3171;
case 0x6f3173:c.instructions+=2;goto B6f3173;
case 0x6f3176:c.instructions+=1;goto B6f3176;
case 0x6f317a:goto L6f317a;
case 0x6f317e:c.instructions+=6;goto B6f317e;
case 0x6f3182:c.instructions+=5;goto B6f3182;
case 0x6f3183:c.instructions+=4;goto B6f3183;
case 0x6f3186:c.instructions+=3;goto B6f3186;
case 0x6f3188:c.instructions+=2;goto B6f3188;
case 0x6f318c:c.instructions+=1;goto B6f318c;
case 0x6f3192:goto L6f3192;
case 0x6f3196:c.instructions+=3;goto B6f3196;
case 0x6f3198:c.instructions+=2;goto B6f3198;
case 0x6f319c:c.instructions+=1;goto B6f319c;
case 0x6f31a2:goto L6f31a2;
case 0x6f31a6:c.instructions+=9;goto B6f31a6;
case 0x6f31aa:c.instructions+=8;goto B6f31aa;
case 0x6f31ad:c.instructions+=7;goto B6f31ad;
case 0x6f31b0:c.instructions+=6;goto B6f31b0;
case 0x6f31b2:c.instructions+=5;goto B6f31b2;
case 0x6f31b4:c.instructions+=4;goto B6f31b4;
case 0x6f31b6:c.instructions+=3;goto B6f31b6;
case 0x6f31ba:c.instructions+=2;goto B6f31ba;
case 0x6f31be:c.instructions+=1;goto B6f31be;
case 0x6f31c4:goto L6f31c4;
case 0x6f31c8:c.instructions+=9;goto B6f31c8;
case 0x6f31cc:c.instructions+=8;goto B6f31cc;
case 0x6f31ce:c.instructions+=7;goto B6f31ce;
case 0x6f31d1:c.instructions+=6;goto B6f31d1;
case 0x6f31d6:c.instructions+=5;goto B6f31d6;
case 0x6f31d8:c.instructions+=4;goto B6f31d8;
case 0x6f31da:c.instructions+=3;goto B6f31da;
case 0x6f31dd:c.instructions+=2;goto B6f31dd;
case 0x6f31e1:c.instructions+=1;goto B6f31e1;
case 0x6f31e7:goto L6f31e7;
case 0x6f31ea:c.instructions+=39;goto B6f31ea;
case 0x6f31ed:c.instructions+=38;goto B6f31ed;
case 0x6f31ef:c.instructions+=37;goto B6f31ef;
case 0x6f31f5:c.instructions+=36;goto B6f31f5;
case 0x6f31f7:c.instructions+=35;goto B6f31f7;
case 0x6f31fd:c.instructions+=34;goto B6f31fd;
case 0x6f31ff:c.instructions+=33;goto B6f31ff;
case 0x6f3202:c.instructions+=32;goto B6f3202;
case 0x6f3205:c.instructions+=31;goto B6f3205;
case 0x6f3208:c.instructions+=30;goto B6f3208;
case 0x6f320c:c.instructions+=29;goto B6f320c;
case 0x6f320f:c.instructions+=28;goto B6f320f;
case 0x6f3211:c.instructions+=27;goto B6f3211;
case 0x6f3217:c.instructions+=26;goto B6f3217;
case 0x6f3219:c.instructions+=25;goto B6f3219;
case 0x6f321f:c.instructions+=24;goto B6f321f;
case 0x6f3221:c.instructions+=23;goto B6f3221;
case 0x6f3224:c.instructions+=22;goto B6f3224;
case 0x6f3228:c.instructions+=21;goto B6f3228;
case 0x6f322c:c.instructions+=20;goto B6f322c;
case 0x6f322d:c.instructions+=19;goto B6f322d;
case 0x6f3230:c.instructions+=18;goto B6f3230;
case 0x6f3232:c.instructions+=17;goto B6f3232;
case 0x6f3238:c.instructions+=16;goto B6f3238;
case 0x6f323a:c.instructions+=15;goto B6f323a;
case 0x6f3240:c.instructions+=14;goto B6f3240;
case 0x6f3242:c.instructions+=13;goto B6f3242;
case 0x6f3245:c.instructions+=12;goto B6f3245;
case 0x6f3249:c.instructions+=11;goto B6f3249;
case 0x6f324d:c.instructions+=10;goto B6f324d;
case 0x6f324e:c.instructions+=9;goto B6f324e;
case 0x6f3251:c.instructions+=8;goto B6f3251;
case 0x6f3253:c.instructions+=7;goto B6f3253;
case 0x6f3259:c.instructions+=6;goto B6f3259;
case 0x6f325b:c.instructions+=5;goto B6f325b;
case 0x6f3261:c.instructions+=4;goto B6f3261;
case 0x6f3263:c.instructions+=3;goto B6f3263;
case 0x6f3266:c.instructions+=2;goto B6f3266;
case 0x6f326a:c.instructions+=1;goto B6f326a;
case 0x6f326d:goto L6f326d;
case 0x6f3271:c.instructions+=5;goto B6f3271;
case 0x6f3275:c.instructions+=4;goto B6f3275;
case 0x6f3276:c.instructions+=3;goto B6f3276;
case 0x6f3278:c.instructions+=2;goto B6f3278;
case 0x6f327c:c.instructions+=1;goto B6f327c;
case 0x6f3282:goto L6f3282;
case 0x6f3283:c.instructions+=6;goto B6f3283;
case 0x6f3284:c.instructions+=5;goto B6f3284;
case 0x6f3285:c.instructions+=4;goto B6f3285;
case 0x6f3287:c.instructions+=3;goto B6f3287;
case 0x6f3288:c.instructions+=2;goto B6f3288;
case 0x6f328b:c.instructions+=1;goto B6f328b;
case 0x6f3290:goto L6f3290;
case 0x6f3294:c.instructions+=6;goto B6f3294;
case 0x6f3295:c.instructions+=5;goto B6f3295;
case 0x6f3297:c.instructions+=4;goto B6f3297;
case 0x6f329a:c.instructions+=3;goto B6f329a;
case 0x6f329c:c.instructions+=2;goto B6f329c;
case 0x6f329f:c.instructions+=1;goto B6f329f;
case 0x6f32a1:goto L6f32a1;
case 0x6f32a3:c.instructions+=1;goto B6f32a3;
case 0x6f32a5:goto L6f32a5;
case 0x6f32a7:c.instructions+=2;goto B6f32a7;
case 0x6f32a9:c.instructions+=1;goto B6f32a9;
case 0x6f32ac:goto L6f32ac;
case 0x6f32ae:c.instructions+=1;goto B6f32ae;
case 0x6f32b0:goto L6f32b0;
case 0x6f32b4:c.instructions+=6;goto B6f32b4;
case 0x6f32b5:c.instructions+=5;goto B6f32b5;
case 0x6f32b6:c.instructions+=4;goto B6f32b6;
case 0x6f32b8:c.instructions+=3;goto B6f32b8;
case 0x6f32bd:c.instructions+=2;goto B6f32bd;
case 0x6f32bf:c.instructions+=1;goto B6f32bf;
case 0x6f32c4:goto L6f32c4;
case 0x6f32c6:c.instructions+=1;goto B6f32c6;
case 0x6f32c8:goto L6f32c8;
case 0x6f32cc:c.instructions+=1;goto B6f32cc;
case 0x6f32cf:goto L6f32cf;
case 0x6f32d0:c.instructions+=1;goto B6f32d0;
case 0x6f32e0:goto L6f32e0;
case 0x6f32e1:c.instructions+=9;goto B6f32e1;
case 0x6f32e5:c.instructions+=8;goto B6f32e5;
case 0x6f32e6:c.instructions+=7;goto B6f32e6;
case 0x6f32ea:c.instructions+=6;goto B6f32ea;
case 0x6f32eb:c.instructions+=5;goto B6f32eb;
case 0x6f32ec:c.instructions+=4;goto B6f32ec;
case 0x6f32ef:c.instructions+=3;goto B6f32ef;
case 0x6f32f3:c.instructions+=2;goto B6f32f3;
case 0x6f32f4:c.instructions+=1;goto B6f32f4;
case 0x6f32f6:goto L6f32f6;
case 0x6f32f9:c.instructions+=9;goto B6f32f9;
case 0x6f32fd:c.instructions+=8;goto B6f32fd;
case 0x6f32ff:c.instructions+=7;goto B6f32ff;
case 0x6f3302:c.instructions+=6;goto B6f3302;
case 0x6f3307:c.instructions+=5;goto B6f3307;
case 0x6f3309:c.instructions+=4;goto B6f3309;
case 0x6f330b:c.instructions+=3;goto B6f330b;
case 0x6f330e:c.instructions+=2;goto B6f330e;
case 0x6f3311:c.instructions+=1;goto B6f3311;
case 0x6f3313:goto L6f3313;
case 0x6f3317:c.instructions+=1;goto B6f3317;
case 0x6f3319:goto L6f3319;
case 0x6f331d:c.instructions+=2;goto B6f331d;
case 0x6f331f:c.instructions+=1;goto B6f331f;
case 0x6f3321:goto L6f3321;
case 0x6f3325:c.instructions+=2;goto B6f3325;
case 0x6f3327:c.instructions+=1;goto B6f3327;
case 0x6f3329:goto L6f3329;
case 0x6f332b:goto L6f332b;
case 0x6f332f:c.instructions+=2;goto B6f332f;
case 0x6f3331:c.instructions+=1;goto B6f3331;
case 0x6f3333:goto L6f3333;
case 0x6f3337:c.instructions+=1;goto B6f3337;
case 0x6f3339:goto L6f3339;
case 0x6f333c:c.instructions+=6;goto B6f333c;
case 0x6f333d:c.instructions+=5;goto B6f333d;
case 0x6f333f:c.instructions+=4;goto B6f333f;
case 0x6f3342:c.instructions+=3;goto B6f3342;
case 0x6f3343:c.instructions+=2;goto B6f3343;
case 0x6f3345:c.instructions+=1;goto B6f3345;
case 0x6f334a:goto L6f334a;
case 0x6f334b:c.instructions+=1;goto B6f334b;
case 0x6f334d:goto L6f334d;
case 0x6f3350:c.instructions+=2;goto B6f3350;
case 0x6f3352:c.instructions+=1;goto B6f3352;
case 0x6f3354:goto L6f3354;
case 0x6f3358:c.instructions+=7;goto B6f3358;
case 0x6f335a:c.instructions+=6;goto B6f335a;
case 0x6f335b:c.instructions+=5;goto B6f335b;
case 0x6f335f:c.instructions+=4;goto B6f335f;
case 0x6f3360:c.instructions+=3;goto B6f3360;
case 0x6f3361:c.instructions+=2;goto B6f3361;
case 0x6f3362:c.instructions+=1;goto B6f3362;
case 0x6f3365:goto L6f3365;
case 0x6f3366:c.instructions+=4;goto B6f3366;
case 0x6f3367:c.instructions+=3;goto B6f3367;
case 0x6f3368:c.instructions+=2;goto B6f3368;
case 0x6f3369:c.instructions+=1;goto B6f3369;
case 0x6f336c:goto L6f336c;
case 0x6f336d:c.instructions+=5;goto B6f336d;
case 0x6f336e:c.instructions+=4;goto B6f336e;
case 0x6f336f:c.instructions+=3;goto B6f336f;
case 0x6f3371:c.instructions+=2;goto B6f3371;
case 0x6f3372:c.instructions+=1;goto B6f3372;
case 0x6f3380:goto L6f3380;
case 0x6f3381:c.instructions+=3;goto B6f3381;
case 0x6f3383:c.instructions+=2;goto B6f3383;
case 0x6f3389:c.instructions+=1;goto B6f3389;
case 0x6f338e:goto L6f338e;
case 0x6f3393:c.instructions+=1;goto B6f3393;
case 0x6f3395:goto L6f3395;
case 0x6f3397:c.instructions+=2;goto B6f3397;
case 0x6f3398:c.instructions+=1;goto B6f3398;
case 0x6f339e:goto L6f339e;
case 0x6f33a1:goto L6f33a1;
case 0x6f33a3:c.instructions+=2;goto B6f33a3;
case 0x6f33a4:c.instructions+=1;goto B6f33a4;
case 0x6f33b0:goto L6f33b0;
case 0x6f33b3:c.instructions+=4;goto B6f33b3;
case 0x6f33b7:c.instructions+=3;goto B6f33b7;
case 0x6f33ba:c.instructions+=2;goto B6f33ba;
case 0x6f33bc:c.instructions+=1;goto B6f33bc;
case 0x6f33be:goto L6f33be;
case 0x6f33c2:c.instructions+=4;goto B6f33c2;
case 0x6f33c6:c.instructions+=3;goto B6f33c6;
case 0x6f33ca:c.instructions+=2;goto B6f33ca;
case 0x6f33ce:c.instructions+=1;goto B6f33ce;
case 0x6f33d2:goto L6f33d2;
case 0x6f33d6:c.instructions+=10;goto B6f33d6;
case 0x6f33d7:c.instructions+=9;goto B6f33d7;
case 0x6f33dd:c.instructions+=8;goto B6f33dd;
case 0x6f33e0:c.instructions+=7;goto B6f33e0;
case 0x6f33e4:c.instructions+=6;goto B6f33e4;
case 0x6f33e5:c.instructions+=5;goto B6f33e5;
case 0x6f33e6:c.instructions+=4;goto B6f33e6;
case 0x6f33ea:c.instructions+=3;goto B6f33ea;
case 0x6f33ec:c.instructions+=2;goto B6f33ec;
case 0x6f33ef:c.instructions+=1;goto B6f33ef;
case 0x6f33f1:goto L6f33f1;
case 0x6f33f7:c.instructions+=4;goto B6f33f7;
case 0x6f33fb:c.instructions+=3;goto B6f33fb;
case 0x6f33ff:c.instructions+=2;goto B6f33ff;
case 0x6f3403:c.instructions+=1;goto B6f3403;
case 0x6f3405:goto L6f3405;
case 0x6f340b:c.instructions+=3;goto B6f340b;
case 0x6f340f:c.instructions+=2;goto B6f340f;
case 0x6f3413:c.instructions+=1;goto B6f3413;
case 0x6f3417:goto L6f3417;
case 0x6f341b:c.instructions+=6;goto B6f341b;
case 0x6f341c:c.instructions+=5;goto B6f341c;
case 0x6f341f:c.instructions+=4;goto B6f341f;
case 0x6f3421:c.instructions+=3;goto B6f3421;
case 0x6f3425:c.instructions+=2;goto B6f3425;
case 0x6f342d:c.instructions+=1;goto B6f342d;
case 0x6f342f:goto L6f342f;
case 0x6f3431:c.instructions+=1;goto B6f3431;
case 0x6f3433:goto L6f3433;
case 0x6f3435:c.instructions+=1;goto B6f3435;
case 0x6f3437:goto L6f3437;
case 0x6f343b:c.instructions+=2;goto B6f343b;
case 0x6f343d:c.instructions+=1;goto B6f343d;
case 0x6f343f:goto L6f343f;
case 0x6f3440:c.instructions+=1;goto B6f3440;
case 0x6f3442:goto L6f3442;
case 0x6f3444:goto L6f3444;
case 0x6f3448:c.instructions+=6;goto B6f3448;
case 0x6f344c:c.instructions+=5;goto B6f344c;
case 0x6f3450:c.instructions+=4;goto B6f3450;
case 0x6f3452:c.instructions+=3;goto B6f3452;
case 0x6f3454:c.instructions+=2;goto B6f3454;
case 0x6f3457:c.instructions+=1;goto B6f3457;
case 0x6f3459:goto L6f3459;
case 0x6f345b:c.instructions+=1;goto B6f345b;
case 0x6f345d:goto L6f345d;
case 0x6f345f:goto L6f345f;
case 0x6f3463:c.instructions+=8;goto B6f3463;
case 0x6f3467:c.instructions+=7;goto B6f3467;
case 0x6f3469:c.instructions+=6;goto B6f3469;
case 0x6f346a:c.instructions+=5;goto B6f346a;
case 0x6f346e:c.instructions+=4;goto B6f346e;
case 0x6f3470:c.instructions+=3;goto B6f3470;
case 0x6f3474:c.instructions+=2;goto B6f3474;
case 0x6f3476:c.instructions+=1;goto B6f3476;
case 0x6f347b:goto L6f347b;
case 0x6f347f:c.instructions+=3;goto B6f347f;
case 0x6f3481:c.instructions+=2;goto B6f3481;
case 0x6f3485:c.instructions+=1;goto B6f3485;
case 0x6f3487:goto L6f3487;
case 0x6f3489:c.instructions+=2;goto B6f3489;
case 0x6f348d:c.instructions+=1;goto B6f348d;
case 0x6f348f:goto L6f348f;
case 0x6f3493:c.instructions+=3;goto B6f3493;
case 0x6f3497:c.instructions+=2;goto B6f3497;
case 0x6f349b:c.instructions+=1;goto B6f349b;
case 0x6f349d:goto L6f349d;
case 0x6f349f:c.instructions+=1;goto B6f349f;
case 0x6f34a1:goto L6f34a1;
case 0x6f34a4:c.instructions+=1;goto B6f34a4;
case 0x6f34a5:goto L6f34a5;
case 0x6f34aa:c.instructions+=3;goto B6f34aa;
case 0x6f34ac:c.instructions+=2;goto B6f34ac;
case 0x6f34b0:c.instructions+=1;goto B6f34b0;
case 0x6f34b2:goto L6f34b2;
case 0x6f34b6:c.instructions+=3;goto B6f34b6;
case 0x6f34b9:c.instructions+=2;goto B6f34b9;
case 0x6f34bb:c.instructions+=1;goto B6f34bb;
case 0x6f34bd:goto L6f34bd;
case 0x6f34c0:goto L6f34c0;
case 0x6f34c3:c.instructions+=2;goto B6f34c3;
case 0x6f34c5:c.instructions+=1;goto B6f34c5;
case 0x6f34c7:goto L6f34c7;
case 0x6f34c8:c.instructions+=3;goto B6f34c8;
case 0x6f34cb:c.instructions+=2;goto B6f34cb;
case 0x6f34cd:c.instructions+=1;goto B6f34cd;
case 0x6f34cf:goto L6f34cf;
case 0x6f34d1:goto L6f34d1;
case 0x6f34d3:c.instructions+=1;goto B6f34d3;
case 0x6f34d5:goto L6f34d5;
case 0x6f34d8:c.instructions+=2;goto B6f34d8;
case 0x6f34da:c.instructions+=1;goto B6f34da;
case 0x6f34dc:goto L6f34dc;
case 0x6f34dd:c.instructions+=3;goto B6f34dd;
case 0x6f34e0:c.instructions+=2;goto B6f34e0;
case 0x6f34e2:c.instructions+=1;goto B6f34e2;
case 0x6f34e4:goto L6f34e4;
case 0x6f34e7:c.instructions+=3;goto B6f34e7;
case 0x6f34e9:c.instructions+=2;goto B6f34e9;
case 0x6f34ed:c.instructions+=1;goto B6f34ed;
case 0x6f34ef:goto L6f34ef;
case 0x6f34f3:c.instructions+=4;goto B6f34f3;
case 0x6f34f9:c.instructions+=3;goto B6f34f9;
case 0x6f34fb:c.instructions+=2;goto B6f34fb;
case 0x6f34fe:c.instructions+=1;goto B6f34fe;
case 0x6f3500:goto L6f3500;
case 0x6f3504:c.instructions+=5;goto B6f3504;
case 0x6f3506:c.instructions+=4;goto B6f3506;
case 0x6f350a:c.instructions+=3;goto B6f350a;
case 0x6f350e:c.instructions+=2;goto B6f350e;
case 0x6f3512:c.instructions+=1;goto B6f3512;
case 0x6f3514:goto L6f3514;
case 0x6f3516:c.instructions+=2;goto B6f3516;
case 0x6f351a:c.instructions+=1;goto B6f351a;
case 0x6f351c:goto L6f351c;
case 0x6f3521:c.instructions+=7;goto B6f3521;
case 0x6f3525:c.instructions+=6;goto B6f3525;
case 0x6f3529:c.instructions+=5;goto B6f3529;
case 0x6f352d:c.instructions+=4;goto B6f352d;
case 0x6f352f:c.instructions+=3;goto B6f352f;
case 0x6f3531:c.instructions+=2;goto B6f3531;
case 0x6f3534:c.instructions+=1;goto B6f3534;
case 0x6f353a:goto L6f353a;
case 0x6f353f:c.instructions+=9;goto B6f353f;
case 0x6f3543:c.instructions+=8;goto B6f3543;
case 0x6f3545:c.instructions+=7;goto B6f3545;
case 0x6f3549:c.instructions+=6;goto B6f3549;
case 0x6f354d:c.instructions+=5;goto B6f354d;
case 0x6f354f:c.instructions+=4;goto B6f354f;
case 0x6f3553:c.instructions+=3;goto B6f3553;
case 0x6f3555:c.instructions+=2;goto B6f3555;
case 0x6f3557:c.instructions+=1;goto B6f3557;
case 0x6f355b:goto L6f355b;
case 0x6f355d:goto L6f355d;
case 0x6f3561:c.instructions+=2;goto B6f3561;
case 0x6f3562:c.instructions+=1;goto B6f3562;
case 0x6f3564:goto L6f3564;
case 0x6f3566:goto L6f3566;
case 0x6f3568:c.instructions+=1;goto B6f3568;
case 0x6f356c:goto L6f356c;
case 0x6f3570:c.instructions+=4;goto B6f3570;
case 0x6f3574:c.instructions+=3;goto B6f3574;
case 0x6f3578:c.instructions+=2;goto B6f3578;
case 0x6f357a:c.instructions+=1;goto B6f357a;
case 0x6f3580:goto L6f3580;
case 0x6f3584:c.instructions+=3;goto B6f3584;
case 0x6f3587:c.instructions+=2;goto B6f3587;
case 0x6f3589:c.instructions+=1;goto B6f3589;
case 0x6f358b:goto L6f358b;
case 0x6f3592:goto L6f3592;
case 0x6f3596:c.instructions+=10;goto B6f3596;
case 0x6f359a:c.instructions+=9;goto B6f359a;
case 0x6f359d:c.instructions+=8;goto B6f359d;
case 0x6f359f:c.instructions+=7;goto B6f359f;
case 0x6f35a2:c.instructions+=6;goto B6f35a2;
case 0x6f35a5:c.instructions+=5;goto B6f35a5;
case 0x6f35a7:c.instructions+=4;goto B6f35a7;
case 0x6f35ab:c.instructions+=3;goto B6f35ab;
case 0x6f35af:c.instructions+=2;goto B6f35af;
case 0x6f35b3:c.instructions+=1;goto B6f35b3;
case 0x6f35b9:goto L6f35b9;
case 0x6f35bd:c.instructions+=3;goto B6f35bd;
case 0x6f35be:c.instructions+=2;goto B6f35be;
case 0x6f35c0:c.instructions+=1;goto B6f35c0;
case 0x6f35c6:goto L6f35c6;
case 0x6f35c9:c.instructions+=5;goto B6f35c9;
case 0x6f35cc:c.instructions+=4;goto B6f35cc;
case 0x6f35d0:c.instructions+=3;goto B6f35d0;
case 0x6f35d2:c.instructions+=2;goto B6f35d2;
case 0x6f35d5:c.instructions+=1;goto B6f35d5;
case 0x6f35db:goto L6f35db;
case 0x6f35df:c.instructions+=5;goto B6f35df;
case 0x6f35e1:c.instructions+=4;goto B6f35e1;
case 0x6f35e6:c.instructions+=3;goto B6f35e6;
case 0x6f35e7:c.instructions+=2;goto B6f35e7;
case 0x6f35e9:c.instructions+=1;goto B6f35e9;
case 0x6f35ed:goto L6f35ed;
case 0x6f35f0:c.instructions+=386;goto B6f35f0;
case 0x6f35f2:c.instructions+=385;goto B6f35f2;
case 0x6f35f8:c.instructions+=384;goto B6f35f8;
case 0x6f35fa:c.instructions+=383;goto B6f35fa;
case 0x6f3600:c.instructions+=382;goto B6f3600;
case 0x6f3602:c.instructions+=381;goto B6f3602;
case 0x6f3606:c.instructions+=380;goto B6f3606;
case 0x6f3609:c.instructions+=379;goto B6f3609;
case 0x6f360d:c.instructions+=378;goto B6f360d;
case 0x6f360f:c.instructions+=377;goto B6f360f;
case 0x6f3615:c.instructions+=376;goto B6f3615;
case 0x6f3617:c.instructions+=375;goto B6f3617;
case 0x6f361d:c.instructions+=374;goto B6f361d;
case 0x6f361f:c.instructions+=373;goto B6f361f;
case 0x6f3622:c.instructions+=372;goto B6f3622;
case 0x6f3626:c.instructions+=371;goto B6f3626;
case 0x6f3629:c.instructions+=370;goto B6f3629;
case 0x6f362d:c.instructions+=369;goto B6f362d;
case 0x6f362f:c.instructions+=368;goto B6f362f;
case 0x6f3635:c.instructions+=367;goto B6f3635;
case 0x6f3637:c.instructions+=366;goto B6f3637;
case 0x6f363a:c.instructions+=365;goto B6f363a;
case 0x6f3640:c.instructions+=364;goto B6f3640;
case 0x6f3642:c.instructions+=363;goto B6f3642;
case 0x6f3646:c.instructions+=362;goto B6f3646;
case 0x6f3649:c.instructions+=361;goto B6f3649;
case 0x6f364d:c.instructions+=360;goto B6f364d;
case 0x6f364f:c.instructions+=359;goto B6f364f;
case 0x6f3655:c.instructions+=358;goto B6f3655;
case 0x6f3657:c.instructions+=357;goto B6f3657;
case 0x6f365a:c.instructions+=356;goto B6f365a;
case 0x6f3660:c.instructions+=355;goto B6f3660;
case 0x6f3662:c.instructions+=354;goto B6f3662;
case 0x6f3665:c.instructions+=353;goto B6f3665;
case 0x6f3668:c.instructions+=352;goto B6f3668;
case 0x6f366c:c.instructions+=351;goto B6f366c;
case 0x6f366e:c.instructions+=350;goto B6f366e;
case 0x6f3674:c.instructions+=349;goto B6f3674;
case 0x6f3676:c.instructions+=348;goto B6f3676;
case 0x6f367c:c.instructions+=347;goto B6f367c;
case 0x6f367e:c.instructions+=346;goto B6f367e;
case 0x6f3682:c.instructions+=345;goto B6f3682;
case 0x6f3685:c.instructions+=344;goto B6f3685;
case 0x6f3689:c.instructions+=343;goto B6f3689;
case 0x6f368c:c.instructions+=342;goto B6f368c;
case 0x6f368e:c.instructions+=341;goto B6f368e;
case 0x6f3694:c.instructions+=340;goto B6f3694;
case 0x6f3698:c.instructions+=339;goto B6f3698;
case 0x6f369c:c.instructions+=338;goto B6f369c;
case 0x6f369e:c.instructions+=337;goto B6f369e;
case 0x6f36a4:c.instructions+=336;goto B6f36a4;
case 0x6f36a6:c.instructions+=335;goto B6f36a6;
case 0x6f36aa:c.instructions+=334;goto B6f36aa;
case 0x6f36ad:c.instructions+=333;goto B6f36ad;
case 0x6f36b1:c.instructions+=332;goto B6f36b1;
case 0x6f36b4:c.instructions+=331;goto B6f36b4;
case 0x6f36b6:c.instructions+=330;goto B6f36b6;
case 0x6f36bc:c.instructions+=329;goto B6f36bc;
case 0x6f36be:c.instructions+=328;goto B6f36be;
case 0x6f36c4:c.instructions+=327;goto B6f36c4;
case 0x6f36c6:c.instructions+=326;goto B6f36c6;
case 0x6f36ca:c.instructions+=325;goto B6f36ca;
case 0x6f36cd:c.instructions+=324;goto B6f36cd;
case 0x6f36d0:c.instructions+=323;goto B6f36d0;
case 0x6f36d4:c.instructions+=322;goto B6f36d4;
case 0x6f36d6:c.instructions+=321;goto B6f36d6;
case 0x6f36dc:c.instructions+=320;goto B6f36dc;
case 0x6f36e2:c.instructions+=319;goto B6f36e2;
case 0x6f36e4:c.instructions+=318;goto B6f36e4;
case 0x6f36e6:c.instructions+=317;goto B6f36e6;
case 0x6f36ea:c.instructions+=316;goto B6f36ea;
case 0x6f36ed:c.instructions+=315;goto B6f36ed;
case 0x6f36f1:c.instructions+=314;goto B6f36f1;
case 0x6f36f4:c.instructions+=313;goto B6f36f4;
case 0x6f36f7:c.instructions+=312;goto B6f36f7;
case 0x6f36fa:c.instructions+=311;goto B6f36fa;
case 0x6f36fe:c.instructions+=310;goto B6f36fe;
case 0x6f3701:c.instructions+=309;goto B6f3701;
case 0x6f3705:c.instructions+=308;goto B6f3705;
case 0x6f3708:c.instructions+=307;goto B6f3708;
case 0x6f370c:c.instructions+=306;goto B6f370c;
case 0x6f370f:c.instructions+=305;goto B6f370f;
case 0x6f3713:c.instructions+=304;goto B6f3713;
case 0x6f3716:c.instructions+=303;goto B6f3716;
case 0x6f3719:c.instructions+=302;goto B6f3719;
case 0x6f371c:c.instructions+=301;goto B6f371c;
case 0x6f3720:c.instructions+=300;goto B6f3720;
case 0x6f3723:c.instructions+=299;goto B6f3723;
case 0x6f3726:c.instructions+=298;goto B6f3726;
case 0x6f372a:c.instructions+=297;goto B6f372a;
case 0x6f372e:c.instructions+=296;goto B6f372e;
case 0x6f3732:c.instructions+=295;goto B6f3732;
case 0x6f3736:c.instructions+=294;goto B6f3736;
case 0x6f373a:c.instructions+=293;goto B6f373a;
case 0x6f373e:c.instructions+=292;goto B6f373e;
case 0x6f3742:c.instructions+=291;goto B6f3742;
case 0x6f3746:c.instructions+=290;goto B6f3746;
case 0x6f374a:c.instructions+=289;goto B6f374a;
case 0x6f374e:c.instructions+=288;goto B6f374e;
case 0x6f3752:c.instructions+=287;goto B6f3752;
case 0x6f3756:c.instructions+=286;goto B6f3756;
case 0x6f375a:c.instructions+=285;goto B6f375a;
case 0x6f375c:c.instructions+=284;goto B6f375c;
case 0x6f3762:c.instructions+=283;goto B6f3762;
case 0x6f3764:c.instructions+=282;goto B6f3764;
case 0x6f376a:c.instructions+=281;goto B6f376a;
case 0x6f376c:c.instructions+=280;goto B6f376c;
case 0x6f3770:c.instructions+=279;goto B6f3770;
case 0x6f3773:c.instructions+=278;goto B6f3773;
case 0x6f3777:c.instructions+=277;goto B6f3777;
case 0x6f3779:c.instructions+=276;goto B6f3779;
case 0x6f377f:c.instructions+=275;goto B6f377f;
case 0x6f3781:c.instructions+=274;goto B6f3781;
case 0x6f3787:c.instructions+=273;goto B6f3787;
case 0x6f3789:c.instructions+=272;goto B6f3789;
case 0x6f378d:c.instructions+=271;goto B6f378d;
case 0x6f3790:c.instructions+=270;goto B6f3790;
case 0x6f3794:c.instructions+=269;goto B6f3794;
case 0x6f3796:c.instructions+=268;goto B6f3796;
case 0x6f379c:c.instructions+=267;goto B6f379c;
case 0x6f379e:c.instructions+=266;goto B6f379e;
case 0x6f37a4:c.instructions+=265;goto B6f37a4;
case 0x6f37a6:c.instructions+=264;goto B6f37a6;
case 0x6f37aa:c.instructions+=263;goto B6f37aa;
case 0x6f37ad:c.instructions+=262;goto B6f37ad;
case 0x6f37b1:c.instructions+=261;goto B6f37b1;
case 0x6f37b3:c.instructions+=260;goto B6f37b3;
case 0x6f37b9:c.instructions+=259;goto B6f37b9;
case 0x6f37bb:c.instructions+=258;goto B6f37bb;
case 0x6f37c1:c.instructions+=257;goto B6f37c1;
case 0x6f37c3:c.instructions+=256;goto B6f37c3;
case 0x6f37c7:c.instructions+=255;goto B6f37c7;
case 0x6f37ca:c.instructions+=254;goto B6f37ca;
case 0x6f37ce:c.instructions+=253;goto B6f37ce;
case 0x6f37d0:c.instructions+=252;goto B6f37d0;
case 0x6f37d6:c.instructions+=251;goto B6f37d6;
case 0x6f37d8:c.instructions+=250;goto B6f37d8;
case 0x6f37de:c.instructions+=249;goto B6f37de;
case 0x6f37e0:c.instructions+=248;goto B6f37e0;
case 0x6f37e4:c.instructions+=247;goto B6f37e4;
case 0x6f37e7:c.instructions+=246;goto B6f37e7;
case 0x6f37eb:c.instructions+=245;goto B6f37eb;
case 0x6f37ed:c.instructions+=244;goto B6f37ed;
case 0x6f37f3:c.instructions+=243;goto B6f37f3;
case 0x6f37f5:c.instructions+=242;goto B6f37f5;
case 0x6f37fb:c.instructions+=241;goto B6f37fb;
case 0x6f37fd:c.instructions+=240;goto B6f37fd;
case 0x6f3800:c.instructions+=239;goto B6f3800;
case 0x6f3803:c.instructions+=238;goto B6f3803;
case 0x6f3807:c.instructions+=237;goto B6f3807;
case 0x6f3809:c.instructions+=236;goto B6f3809;
case 0x6f380f:c.instructions+=235;goto B6f380f;
case 0x6f3811:c.instructions+=234;goto B6f3811;
case 0x6f3817:c.instructions+=233;goto B6f3817;
case 0x6f3819:c.instructions+=232;goto B6f3819;
case 0x6f381c:c.instructions+=231;goto B6f381c;
case 0x6f3820:c.instructions+=230;goto B6f3820;
case 0x6f3823:c.instructions+=229;goto B6f3823;
case 0x6f3826:c.instructions+=228;goto B6f3826;
case 0x6f382a:c.instructions+=227;goto B6f382a;
case 0x6f382e:c.instructions+=226;goto B6f382e;
case 0x6f3830:c.instructions+=225;goto B6f3830;
case 0x6f3836:c.instructions+=224;goto B6f3836;
case 0x6f3838:c.instructions+=223;goto B6f3838;
case 0x6f383e:c.instructions+=222;goto B6f383e;
case 0x6f3840:c.instructions+=221;goto B6f3840;
case 0x6f3843:c.instructions+=220;goto B6f3843;
case 0x6f3846:c.instructions+=219;goto B6f3846;
case 0x6f3849:c.instructions+=218;goto B6f3849;
case 0x6f384c:c.instructions+=217;goto B6f384c;
case 0x6f3850:c.instructions+=216;goto B6f3850;
case 0x6f3854:c.instructions+=215;goto B6f3854;
case 0x6f3857:c.instructions+=214;goto B6f3857;
case 0x6f385a:c.instructions+=213;goto B6f385a;
case 0x6f385e:c.instructions+=212;goto B6f385e;
case 0x6f3861:c.instructions+=211;goto B6f3861;
case 0x6f3864:c.instructions+=210;goto B6f3864;
case 0x6f3867:c.instructions+=209;goto B6f3867;
case 0x6f386a:c.instructions+=208;goto B6f386a;
case 0x6f386e:c.instructions+=207;goto B6f386e;
case 0x6f3872:c.instructions+=206;goto B6f3872;
case 0x6f3876:c.instructions+=205;goto B6f3876;
case 0x6f387a:c.instructions+=204;goto B6f387a;
case 0x6f387e:c.instructions+=203;goto B6f387e;
case 0x6f3882:c.instructions+=202;goto B6f3882;
case 0x6f3886:c.instructions+=201;goto B6f3886;
case 0x6f388a:c.instructions+=200;goto B6f388a;
case 0x6f388e:c.instructions+=199;goto B6f388e;
case 0x6f3892:c.instructions+=198;goto B6f3892;
case 0x6f3896:c.instructions+=197;goto B6f3896;
case 0x6f389a:c.instructions+=196;goto B6f389a;
case 0x6f389e:c.instructions+=195;goto B6f389e;
case 0x6f38a2:c.instructions+=194;goto B6f38a2;
case 0x6f38a6:c.instructions+=193;goto B6f38a6;
case 0x6f38aa:c.instructions+=192;goto B6f38aa;
case 0x6f38ac:c.instructions+=191;goto B6f38ac;
case 0x6f38b2:c.instructions+=190;goto B6f38b2;
case 0x6f38b4:c.instructions+=189;goto B6f38b4;
case 0x6f38ba:c.instructions+=188;goto B6f38ba;
case 0x6f38bc:c.instructions+=187;goto B6f38bc;
case 0x6f38c0:c.instructions+=186;goto B6f38c0;
case 0x6f38c3:c.instructions+=185;goto B6f38c3;
case 0x6f38c7:c.instructions+=184;goto B6f38c7;
case 0x6f38c9:c.instructions+=183;goto B6f38c9;
case 0x6f38cf:c.instructions+=182;goto B6f38cf;
case 0x6f38d1:c.instructions+=181;goto B6f38d1;
case 0x6f38d7:c.instructions+=180;goto B6f38d7;
case 0x6f38d9:c.instructions+=179;goto B6f38d9;
case 0x6f38dd:c.instructions+=178;goto B6f38dd;
case 0x6f38e0:c.instructions+=177;goto B6f38e0;
case 0x6f38e4:c.instructions+=176;goto B6f38e4;
case 0x6f38e6:c.instructions+=175;goto B6f38e6;
case 0x6f38ec:c.instructions+=174;goto B6f38ec;
case 0x6f38ee:c.instructions+=173;goto B6f38ee;
case 0x6f38f4:c.instructions+=172;goto B6f38f4;
case 0x6f38f6:c.instructions+=171;goto B6f38f6;
case 0x6f38fa:c.instructions+=170;goto B6f38fa;
case 0x6f38fd:c.instructions+=169;goto B6f38fd;
case 0x6f3901:c.instructions+=168;goto B6f3901;
case 0x6f3903:c.instructions+=167;goto B6f3903;
case 0x6f3909:c.instructions+=166;goto B6f3909;
case 0x6f390b:c.instructions+=165;goto B6f390b;
case 0x6f3911:c.instructions+=164;goto B6f3911;
case 0x6f3913:c.instructions+=163;goto B6f3913;
case 0x6f3916:c.instructions+=162;goto B6f3916;
case 0x6f3919:c.instructions+=161;goto B6f3919;
case 0x6f391d:c.instructions+=160;goto B6f391d;
case 0x6f391f:c.instructions+=159;goto B6f391f;
case 0x6f3925:c.instructions+=158;goto B6f3925;
case 0x6f3927:c.instructions+=157;goto B6f3927;
case 0x6f392d:c.instructions+=156;goto B6f392d;
case 0x6f392f:c.instructions+=155;goto B6f392f;
case 0x6f3932:c.instructions+=154;goto B6f3932;
case 0x6f3936:c.instructions+=153;goto B6f3936;
case 0x6f3939:c.instructions+=152;goto B6f3939;
case 0x6f393c:c.instructions+=151;goto B6f393c;
case 0x6f3940:c.instructions+=150;goto B6f3940;
case 0x6f3944:c.instructions+=149;goto B6f3944;
case 0x6f3946:c.instructions+=148;goto B6f3946;
case 0x6f394c:c.instructions+=147;goto B6f394c;
case 0x6f394e:c.instructions+=146;goto B6f394e;
case 0x6f3954:c.instructions+=145;goto B6f3954;
case 0x6f3956:c.instructions+=144;goto B6f3956;
case 0x6f395a:c.instructions+=143;goto B6f395a;
case 0x6f395d:c.instructions+=142;goto B6f395d;
case 0x6f3961:c.instructions+=141;goto B6f3961;
case 0x6f3963:c.instructions+=140;goto B6f3963;
case 0x6f3969:c.instructions+=139;goto B6f3969;
case 0x6f396b:c.instructions+=138;goto B6f396b;
case 0x6f396e:c.instructions+=137;goto B6f396e;
case 0x6f3974:c.instructions+=136;goto B6f3974;
case 0x6f3976:c.instructions+=135;goto B6f3976;
case 0x6f397a:c.instructions+=134;goto B6f397a;
case 0x6f397d:c.instructions+=133;goto B6f397d;
case 0x6f3981:c.instructions+=132;goto B6f3981;
case 0x6f3983:c.instructions+=131;goto B6f3983;
case 0x6f3989:c.instructions+=130;goto B6f3989;
case 0x6f398b:c.instructions+=129;goto B6f398b;
case 0x6f398e:c.instructions+=128;goto B6f398e;
case 0x6f3994:c.instructions+=127;goto B6f3994;
case 0x6f3996:c.instructions+=126;goto B6f3996;
case 0x6f399a:c.instructions+=125;goto B6f399a;
case 0x6f399d:c.instructions+=124;goto B6f399d;
case 0x6f39a0:c.instructions+=123;goto B6f39a0;
case 0x6f39a3:c.instructions+=122;goto B6f39a3;
case 0x6f39a7:c.instructions+=121;goto B6f39a7;
case 0x6f39ab:c.instructions+=120;goto B6f39ab;
case 0x6f39ae:c.instructions+=119;goto B6f39ae;
case 0x6f39b1:c.instructions+=118;goto B6f39b1;
case 0x6f39b5:c.instructions+=117;goto B6f39b5;
case 0x6f39b8:c.instructions+=116;goto B6f39b8;
case 0x6f39bb:c.instructions+=115;goto B6f39bb;
case 0x6f39bf:c.instructions+=114;goto B6f39bf;
case 0x6f39c3:c.instructions+=113;goto B6f39c3;
case 0x6f39c7:c.instructions+=112;goto B6f39c7;
case 0x6f39cb:c.instructions+=111;goto B6f39cb;
case 0x6f39cf:c.instructions+=110;goto B6f39cf;
case 0x6f39d3:c.instructions+=109;goto B6f39d3;
case 0x6f39d7:c.instructions+=108;goto B6f39d7;
case 0x6f39db:c.instructions+=107;goto B6f39db;
case 0x6f39df:c.instructions+=106;goto B6f39df;
case 0x6f39e3:c.instructions+=105;goto B6f39e3;
case 0x6f39e7:c.instructions+=104;goto B6f39e7;
case 0x6f39eb:c.instructions+=103;goto B6f39eb;
case 0x6f39ef:c.instructions+=102;goto B6f39ef;
case 0x6f39f3:c.instructions+=101;goto B6f39f3;
case 0x6f39f7:c.instructions+=100;goto B6f39f7;
case 0x6f39fb:c.instructions+=99;goto B6f39fb;
case 0x6f39fd:c.instructions+=98;goto B6f39fd;
case 0x6f3a03:c.instructions+=97;goto B6f3a03;
case 0x6f3a05:c.instructions+=96;goto B6f3a05;
case 0x6f3a0b:c.instructions+=95;goto B6f3a0b;
case 0x6f3a0d:c.instructions+=94;goto B6f3a0d;
case 0x6f3a11:c.instructions+=93;goto B6f3a11;
case 0x6f3a14:c.instructions+=92;goto B6f3a14;
case 0x6f3a18:c.instructions+=91;goto B6f3a18;
case 0x6f3a1a:c.instructions+=90;goto B6f3a1a;
case 0x6f3a20:c.instructions+=89;goto B6f3a20;
case 0x6f3a22:c.instructions+=88;goto B6f3a22;
case 0x6f3a28:c.instructions+=87;goto B6f3a28;
case 0x6f3a2a:c.instructions+=86;goto B6f3a2a;
case 0x6f3a2d:c.instructions+=85;goto B6f3a2d;
case 0x6f3a30:c.instructions+=84;goto B6f3a30;
case 0x6f3a34:c.instructions+=83;goto B6f3a34;
case 0x6f3a36:c.instructions+=82;goto B6f3a36;
case 0x6f3a3c:c.instructions+=81;goto B6f3a3c;
case 0x6f3a3e:c.instructions+=80;goto B6f3a3e;
case 0x6f3a44:c.instructions+=79;goto B6f3a44;
case 0x6f3a46:c.instructions+=78;goto B6f3a46;
case 0x6f3a49:c.instructions+=77;goto B6f3a49;
case 0x6f3a4d:c.instructions+=76;goto B6f3a4d;
case 0x6f3a50:c.instructions+=75;goto B6f3a50;
case 0x6f3a53:c.instructions+=74;goto B6f3a53;
case 0x6f3a55:c.instructions+=73;goto B6f3a55;
case 0x6f3a5b:c.instructions+=72;goto B6f3a5b;
case 0x6f3a5d:c.instructions+=71;goto B6f3a5d;
case 0x6f3a63:c.instructions+=70;goto B6f3a63;
case 0x6f3a65:c.instructions+=69;goto B6f3a65;
case 0x6f3a68:c.instructions+=68;goto B6f3a68;
case 0x6f3a6b:c.instructions+=67;goto B6f3a6b;
case 0x6f3a6f:c.instructions+=66;goto B6f3a6f;
case 0x6f3a71:c.instructions+=65;goto B6f3a71;
case 0x6f3a77:c.instructions+=64;goto B6f3a77;
case 0x6f3a79:c.instructions+=63;goto B6f3a79;
case 0x6f3a7f:c.instructions+=62;goto B6f3a7f;
case 0x6f3a81:c.instructions+=61;goto B6f3a81;
case 0x6f3a85:c.instructions+=60;goto B6f3a85;
case 0x6f3a88:c.instructions+=59;goto B6f3a88;
case 0x6f3a8c:c.instructions+=58;goto B6f3a8c;
case 0x6f3a8f:c.instructions+=57;goto B6f3a8f;
case 0x6f3a91:c.instructions+=56;goto B6f3a91;
case 0x6f3a97:c.instructions+=55;goto B6f3a97;
case 0x6f3a9b:c.instructions+=54;goto B6f3a9b;
case 0x6f3a9f:c.instructions+=53;goto B6f3a9f;
case 0x6f3aa1:c.instructions+=52;goto B6f3aa1;
case 0x6f3aa7:c.instructions+=51;goto B6f3aa7;
case 0x6f3aa9:c.instructions+=50;goto B6f3aa9;
case 0x6f3aad:c.instructions+=49;goto B6f3aad;
case 0x6f3ab0:c.instructions+=48;goto B6f3ab0;
case 0x6f3ab4:c.instructions+=47;goto B6f3ab4;
case 0x6f3ab7:c.instructions+=46;goto B6f3ab7;
case 0x6f3ab9:c.instructions+=45;goto B6f3ab9;
case 0x6f3abf:c.instructions+=44;goto B6f3abf;
case 0x6f3ac1:c.instructions+=43;goto B6f3ac1;
case 0x6f3ac7:c.instructions+=42;goto B6f3ac7;
case 0x6f3ac9:c.instructions+=41;goto B6f3ac9;
case 0x6f3acd:c.instructions+=40;goto B6f3acd;
case 0x6f3ad0:c.instructions+=39;goto B6f3ad0;
case 0x6f3ad3:c.instructions+=38;goto B6f3ad3;
case 0x6f3ad7:c.instructions+=37;goto B6f3ad7;
case 0x6f3ad9:c.instructions+=36;goto B6f3ad9;
case 0x6f3adf:c.instructions+=35;goto B6f3adf;
case 0x6f3ae5:c.instructions+=34;goto B6f3ae5;
case 0x6f3ae7:c.instructions+=33;goto B6f3ae7;
case 0x6f3ae9:c.instructions+=32;goto B6f3ae9;
case 0x6f3aed:c.instructions+=31;goto B6f3aed;
case 0x6f3af0:c.instructions+=30;goto B6f3af0;
case 0x6f3af4:c.instructions+=29;goto B6f3af4;
case 0x6f3af7:c.instructions+=28;goto B6f3af7;
case 0x6f3afa:c.instructions+=27;goto B6f3afa;
case 0x6f3afe:c.instructions+=26;goto B6f3afe;
case 0x6f3b02:c.instructions+=25;goto B6f3b02;
case 0x6f3b06:c.instructions+=24;goto B6f3b06;
case 0x6f3b09:c.instructions+=23;goto B6f3b09;
case 0x6f3b0c:c.instructions+=22;goto B6f3b0c;
case 0x6f3b0f:c.instructions+=21;goto B6f3b0f;
case 0x6f3b12:c.instructions+=20;goto B6f3b12;
case 0x6f3b16:c.instructions+=19;goto B6f3b16;
case 0x6f3b19:c.instructions+=18;goto B6f3b19;
case 0x6f3b1d:c.instructions+=17;goto B6f3b1d;
case 0x6f3b21:c.instructions+=16;goto B6f3b21;
case 0x6f3b25:c.instructions+=15;goto B6f3b25;
case 0x6f3b29:c.instructions+=14;goto B6f3b29;
case 0x6f3b2d:c.instructions+=13;goto B6f3b2d;
case 0x6f3b31:c.instructions+=12;goto B6f3b31;
case 0x6f3b35:c.instructions+=11;goto B6f3b35;
case 0x6f3b39:c.instructions+=10;goto B6f3b39;
case 0x6f3b3d:c.instructions+=9;goto B6f3b3d;
case 0x6f3b41:c.instructions+=8;goto B6f3b41;
case 0x6f3b45:c.instructions+=7;goto B6f3b45;
case 0x6f3b49:c.instructions+=6;goto B6f3b49;
case 0x6f3b4d:c.instructions+=5;goto B6f3b4d;
case 0x6f3b51:c.instructions+=4;goto B6f3b51;
case 0x6f3b55:c.instructions+=3;goto B6f3b55;
case 0x6f3b57:c.instructions+=2;goto B6f3b57;
case 0x6f3b59:c.instructions+=1;goto B6f3b59;
case 0x6f3b5f:goto L6f3b5f;
case 0x6f3b63:goto L6f3b63;
case 0x6f3b65:c.instructions+=1;goto B6f3b65;
case 0x6f3b6b:goto L6f3b6b;
case 0x6f3b70:goto L6f3b70;
case 0x6f3b73:c.instructions+=98;goto B6f3b73;
case 0x6f3b75:c.instructions+=97;goto B6f3b75;
case 0x6f3b7b:c.instructions+=96;goto B6f3b7b;
case 0x6f3b7d:c.instructions+=95;goto B6f3b7d;
case 0x6f3b83:c.instructions+=94;goto B6f3b83;
case 0x6f3b85:c.instructions+=93;goto B6f3b85;
case 0x6f3b89:c.instructions+=92;goto B6f3b89;
case 0x6f3b8c:c.instructions+=91;goto B6f3b8c;
case 0x6f3b90:c.instructions+=90;goto B6f3b90;
case 0x6f3b92:c.instructions+=89;goto B6f3b92;
case 0x6f3b98:c.instructions+=88;goto B6f3b98;
case 0x6f3b9a:c.instructions+=87;goto B6f3b9a;
case 0x6f3ba0:c.instructions+=86;goto B6f3ba0;
case 0x6f3ba2:c.instructions+=85;goto B6f3ba2;
case 0x6f3ba5:c.instructions+=84;goto B6f3ba5;
case 0x6f3ba9:c.instructions+=83;goto B6f3ba9;
case 0x6f3bac:c.instructions+=82;goto B6f3bac;
case 0x6f3bb0:c.instructions+=81;goto B6f3bb0;
case 0x6f3bb2:c.instructions+=80;goto B6f3bb2;
case 0x6f3bb8:c.instructions+=79;goto B6f3bb8;
case 0x6f3bba:c.instructions+=78;goto B6f3bba;
case 0x6f3bc0:c.instructions+=77;goto B6f3bc0;
case 0x6f3bc2:c.instructions+=76;goto B6f3bc2;
case 0x6f3bc5:c.instructions+=75;goto B6f3bc5;
case 0x6f3bc9:c.instructions+=74;goto B6f3bc9;
case 0x6f3bcc:c.instructions+=73;goto B6f3bcc;
case 0x6f3bd0:c.instructions+=72;goto B6f3bd0;
case 0x6f3bd2:c.instructions+=71;goto B6f3bd2;
case 0x6f3bd8:c.instructions+=70;goto B6f3bd8;
case 0x6f3bda:c.instructions+=69;goto B6f3bda;
case 0x6f3bdd:c.instructions+=68;goto B6f3bdd;
case 0x6f3be3:c.instructions+=67;goto B6f3be3;
case 0x6f3be5:c.instructions+=66;goto B6f3be5;
case 0x6f3be8:c.instructions+=65;goto B6f3be8;
case 0x6f3beb:c.instructions+=64;goto B6f3beb;
case 0x6f3bef:c.instructions+=63;goto B6f3bef;
case 0x6f3bf1:c.instructions+=62;goto B6f3bf1;
case 0x6f3bf7:c.instructions+=61;goto B6f3bf7;
case 0x6f3bf9:c.instructions+=60;goto B6f3bf9;
case 0x6f3bff:c.instructions+=59;goto B6f3bff;
case 0x6f3c01:c.instructions+=58;goto B6f3c01;
case 0x6f3c05:c.instructions+=57;goto B6f3c05;
case 0x6f3c08:c.instructions+=56;goto B6f3c08;
case 0x6f3c0c:c.instructions+=55;goto B6f3c0c;
case 0x6f3c0f:c.instructions+=54;goto B6f3c0f;
case 0x6f3c11:c.instructions+=53;goto B6f3c11;
case 0x6f3c17:c.instructions+=52;goto B6f3c17;
case 0x6f3c1b:c.instructions+=51;goto B6f3c1b;
case 0x6f3c1d:c.instructions+=50;goto B6f3c1d;
case 0x6f3c21:c.instructions+=49;goto B6f3c21;
case 0x6f3c27:c.instructions+=48;goto B6f3c27;
case 0x6f3c29:c.instructions+=47;goto B6f3c29;
case 0x6f3c2d:c.instructions+=46;goto B6f3c2d;
case 0x6f3c30:c.instructions+=45;goto B6f3c30;
case 0x6f3c34:c.instructions+=44;goto B6f3c34;
case 0x6f3c37:c.instructions+=43;goto B6f3c37;
case 0x6f3c39:c.instructions+=42;goto B6f3c39;
case 0x6f3c3f:c.instructions+=41;goto B6f3c3f;
case 0x6f3c41:c.instructions+=40;goto B6f3c41;
case 0x6f3c47:c.instructions+=39;goto B6f3c47;
case 0x6f3c49:c.instructions+=38;goto B6f3c49;
case 0x6f3c4d:c.instructions+=37;goto B6f3c4d;
case 0x6f3c50:c.instructions+=36;goto B6f3c50;
case 0x6f3c53:c.instructions+=35;goto B6f3c53;
case 0x6f3c57:c.instructions+=34;goto B6f3c57;
case 0x6f3c59:c.instructions+=33;goto B6f3c59;
case 0x6f3c5f:c.instructions+=32;goto B6f3c5f;
case 0x6f3c65:c.instructions+=31;goto B6f3c65;
case 0x6f3c67:c.instructions+=30;goto B6f3c67;
case 0x6f3c69:c.instructions+=29;goto B6f3c69;
case 0x6f3c6d:c.instructions+=28;goto B6f3c6d;
case 0x6f3c71:c.instructions+=27;goto B6f3c71;
case 0x6f3c74:c.instructions+=26;goto B6f3c74;
case 0x6f3c78:c.instructions+=25;goto B6f3c78;
case 0x6f3c7b:c.instructions+=24;goto B6f3c7b;
case 0x6f3c7e:c.instructions+=23;goto B6f3c7e;
case 0x6f3c81:c.instructions+=22;goto B6f3c81;
case 0x6f3c85:c.instructions+=21;goto B6f3c85;
case 0x6f3c89:c.instructions+=20;goto B6f3c89;
case 0x6f3c8c:c.instructions+=19;goto B6f3c8c;
case 0x6f3c8f:c.instructions+=18;goto B6f3c8f;
case 0x6f3c90:c.instructions+=17;goto B6f3c90;
case 0x6f3c92:c.instructions+=16;goto B6f3c92;
case 0x6f3c96:c.instructions+=15;goto B6f3c96;
case 0x6f3c9a:c.instructions+=14;goto B6f3c9a;
case 0x6f3c9e:c.instructions+=13;goto B6f3c9e;
case 0x6f3ca2:c.instructions+=12;goto B6f3ca2;
case 0x6f3ca6:c.instructions+=11;goto B6f3ca6;
case 0x6f3caa:c.instructions+=10;goto B6f3caa;
case 0x6f3cae:c.instructions+=9;goto B6f3cae;
case 0x6f3cb2:c.instructions+=8;goto B6f3cb2;
case 0x6f3cb6:c.instructions+=7;goto B6f3cb6;
case 0x6f3cba:c.instructions+=6;goto B6f3cba;
case 0x6f3cbe:c.instructions+=5;goto B6f3cbe;
case 0x6f3cc2:c.instructions+=4;goto B6f3cc2;
case 0x6f3cc6:c.instructions+=3;goto B6f3cc6;
case 0x6f3cca:c.instructions+=2;goto B6f3cca;
case 0x6f3cce:c.instructions+=1;goto B6f3cce;
case 0x6f3cd4:goto L6f3cd4;
case 0x6f3cd9:goto L6f3cd9;
case 0x6f3cdb:c.instructions+=2;goto B6f3cdb;
case 0x6f3cdf:c.instructions+=1;goto B6f3cdf;
case 0x6f3ce4:goto L6f3ce4;
case 0x6f3ce6:c.instructions+=2;goto B6f3ce6;
case 0x6f3ce8:c.instructions+=1;goto B6f3ce8;
case 0x6f3cee:goto L6f3cee;
case 0x6f3cf0:goto L6f3cf0;
case 0x6f3cf3:c.instructions+=44;goto B6f3cf3;
case 0x6f3cf7:c.instructions+=43;goto B6f3cf7;
case 0x6f3cfb:c.instructions+=42;goto B6f3cfb;
case 0x6f3cfd:c.instructions+=41;goto B6f3cfd;
case 0x6f3d03:c.instructions+=40;goto B6f3d03;
case 0x6f3d05:c.instructions+=39;goto B6f3d05;
case 0x6f3d0b:c.instructions+=38;goto B6f3d0b;
case 0x6f3d0d:c.instructions+=37;goto B6f3d0d;
case 0x6f3d10:c.instructions+=36;goto B6f3d10;
case 0x6f3d13:c.instructions+=35;goto B6f3d13;
case 0x6f3d16:c.instructions+=34;goto B6f3d16;
case 0x6f3d19:c.instructions+=33;goto B6f3d19;
case 0x6f3d1c:c.instructions+=32;goto B6f3d1c;
case 0x6f3d1f:c.instructions+=31;goto B6f3d1f;
case 0x6f3d21:c.instructions+=30;goto B6f3d21;
case 0x6f3d27:c.instructions+=29;goto B6f3d27;
case 0x6f3d29:c.instructions+=28;goto B6f3d29;
case 0x6f3d2f:c.instructions+=27;goto B6f3d2f;
case 0x6f3d31:c.instructions+=26;goto B6f3d31;
case 0x6f3d34:c.instructions+=25;goto B6f3d34;
case 0x6f3d38:c.instructions+=24;goto B6f3d38;
case 0x6f3d3c:c.instructions+=23;goto B6f3d3c;
case 0x6f3d3f:c.instructions+=22;goto B6f3d3f;
case 0x6f3d40:c.instructions+=21;goto B6f3d40;
case 0x6f3d42:c.instructions+=20;goto B6f3d42;
case 0x6f3d48:c.instructions+=19;goto B6f3d48;
case 0x6f3d4a:c.instructions+=18;goto B6f3d4a;
case 0x6f3d50:c.instructions+=17;goto B6f3d50;
case 0x6f3d52:c.instructions+=16;goto B6f3d52;
case 0x6f3d55:c.instructions+=15;goto B6f3d55;
case 0x6f3d59:c.instructions+=14;goto B6f3d59;
case 0x6f3d5d:c.instructions+=13;goto B6f3d5d;
case 0x6f3d5e:c.instructions+=12;goto B6f3d5e;
case 0x6f3d61:c.instructions+=11;goto B6f3d61;
case 0x6f3d63:c.instructions+=10;goto B6f3d63;
case 0x6f3d69:c.instructions+=9;goto B6f3d69;
case 0x6f3d6b:c.instructions+=8;goto B6f3d6b;
case 0x6f3d71:c.instructions+=7;goto B6f3d71;
case 0x6f3d73:c.instructions+=6;goto B6f3d73;
case 0x6f3d76:c.instructions+=5;goto B6f3d76;
case 0x6f3d79:c.instructions+=4;goto B6f3d79;
case 0x6f3d7a:c.instructions+=3;goto B6f3d7a;
case 0x6f3d7c:c.instructions+=2;goto B6f3d7c;
case 0x6f3d80:c.instructions+=1;goto B6f3d80;
case 0x6f3d86:goto L6f3d86;
case 0x6f3d8a:goto L6f3d8a;
case 0x6f3d8e:goto L6f3d8e;
case 0x6f3d92:c.instructions+=3;goto B6f3d92;
case 0x6f3d94:c.instructions+=2;goto B6f3d94;
case 0x6f3d98:c.instructions+=1;goto B6f3d98;
case 0x6f3d9e:goto L6f3d9e;
case 0x6f3da2:c.instructions+=8;goto B6f3da2;
case 0x6f3da6:c.instructions+=7;goto B6f3da6;
case 0x6f3da9:c.instructions+=6;goto B6f3da9;
case 0x6f3dac:c.instructions+=5;goto B6f3dac;
case 0x6f3db0:c.instructions+=4;goto B6f3db0;
case 0x6f3db2:c.instructions+=3;goto B6f3db2;
case 0x6f3db4:c.instructions+=2;goto B6f3db4;
case 0x6f3db6:c.instructions+=1;goto B6f3db6;
case 0x6f3dbc:goto L6f3dbc;
case 0x6f3dc0:goto L6f3dc0;
case 0x6f3dc3:c.instructions+=44;goto B6f3dc3;
case 0x6f3dc7:c.instructions+=43;goto B6f3dc7;
case 0x6f3dc9:c.instructions+=42;goto B6f3dc9;
case 0x6f3dcf:c.instructions+=41;goto B6f3dcf;
case 0x6f3dd1:c.instructions+=40;goto B6f3dd1;
case 0x6f3dd7:c.instructions+=39;goto B6f3dd7;
case 0x6f3dd9:c.instructions+=38;goto B6f3dd9;
case 0x6f3ddc:c.instructions+=37;goto B6f3ddc;
case 0x6f3ddf:c.instructions+=36;goto B6f3ddf;
case 0x6f3de2:c.instructions+=35;goto B6f3de2;
case 0x6f3de5:c.instructions+=34;goto B6f3de5;
case 0x6f3de8:c.instructions+=33;goto B6f3de8;
case 0x6f3deb:c.instructions+=32;goto B6f3deb;
case 0x6f3ded:c.instructions+=31;goto B6f3ded;
case 0x6f3df3:c.instructions+=30;goto B6f3df3;
case 0x6f3df5:c.instructions+=29;goto B6f3df5;
case 0x6f3dfb:c.instructions+=28;goto B6f3dfb;
case 0x6f3dfd:c.instructions+=27;goto B6f3dfd;
case 0x6f3e00:c.instructions+=26;goto B6f3e00;
case 0x6f3e04:c.instructions+=25;goto B6f3e04;
case 0x6f3e08:c.instructions+=24;goto B6f3e08;
case 0x6f3e09:c.instructions+=23;goto B6f3e09;
case 0x6f3e0c:c.instructions+=22;goto B6f3e0c;
case 0x6f3e0e:c.instructions+=21;goto B6f3e0e;
case 0x6f3e14:c.instructions+=20;goto B6f3e14;
case 0x6f3e16:c.instructions+=19;goto B6f3e16;
case 0x6f3e1c:c.instructions+=18;goto B6f3e1c;
case 0x6f3e1e:c.instructions+=17;goto B6f3e1e;
case 0x6f3e21:c.instructions+=16;goto B6f3e21;
case 0x6f3e25:c.instructions+=15;goto B6f3e25;
case 0x6f3e29:c.instructions+=14;goto B6f3e29;
case 0x6f3e2a:c.instructions+=13;goto B6f3e2a;
case 0x6f3e2d:c.instructions+=12;goto B6f3e2d;
case 0x6f3e2f:c.instructions+=11;goto B6f3e2f;
case 0x6f3e35:c.instructions+=10;goto B6f3e35;
case 0x6f3e37:c.instructions+=9;goto B6f3e37;
case 0x6f3e3d:c.instructions+=8;goto B6f3e3d;
case 0x6f3e3f:c.instructions+=7;goto B6f3e3f;
case 0x6f3e42:c.instructions+=6;goto B6f3e42;
case 0x6f3e45:c.instructions+=5;goto B6f3e45;
case 0x6f3e49:c.instructions+=4;goto B6f3e49;
case 0x6f3e4d:c.instructions+=3;goto B6f3e4d;
case 0x6f3e4e:c.instructions+=2;goto B6f3e4e;
case 0x6f3e50:c.instructions+=1;goto B6f3e50;
case 0x6f3e56:goto L6f3e56;
case 0x6f3e5a:goto L6f3e5a;
case 0x6f3e5e:goto L6f3e5e;
case 0x6f3e61:c.instructions+=3;goto B6f3e61;
case 0x6f3e63:c.instructions+=2;goto B6f3e63;
case 0x6f3e64:c.instructions+=1;goto B6f3e64;
case 0x6f3e66:goto L6f3e66;
case 0x6f3e6a:c.instructions+=12;goto B6f3e6a;
case 0x6f3e6e:c.instructions+=11;goto B6f3e6e;
case 0x6f3e72:c.instructions+=10;goto B6f3e72;
case 0x6f3e73:c.instructions+=9;goto B6f3e73;
case 0x6f3e77:c.instructions+=8;goto B6f3e77;
case 0x6f3e78:c.instructions+=7;goto B6f3e78;
case 0x6f3e79:c.instructions+=6;goto B6f3e79;
case 0x6f3e7d:c.instructions+=5;goto B6f3e7d;
case 0x6f3e7e:c.instructions+=4;goto B6f3e7e;
case 0x6f3e7f:c.instructions+=3;goto B6f3e7f;
case 0x6f3e80:c.instructions+=2;goto B6f3e80;
case 0x6f3e82:c.instructions+=1;goto B6f3e82;
case 0x6f3e87:goto L6f3e87;
case 0x6f3e88:c.instructions+=5;goto B6f3e88;
case 0x6f3e89:c.instructions+=4;goto B6f3e89;
case 0x6f3e8b:c.instructions+=3;goto B6f3e8b;
case 0x6f3e8c:c.instructions+=2;goto B6f3e8c;
case 0x6f3e8f:c.instructions+=1;goto B6f3e8f;
case 0x6f3e92:goto L6f3e92;
case 0x6f3e96:c.instructions+=11;goto B6f3e96;
case 0x6f3e9a:c.instructions+=10;goto B6f3e9a;
case 0x6f3e9b:c.instructions+=9;goto B6f3e9b;
case 0x6f3e9f:c.instructions+=8;goto B6f3e9f;
case 0x6f3ea0:c.instructions+=7;goto B6f3ea0;
case 0x6f3ea1:c.instructions+=6;goto B6f3ea1;
case 0x6f3ea5:c.instructions+=5;goto B6f3ea5;
case 0x6f3ea6:c.instructions+=4;goto B6f3ea6;
case 0x6f3eaa:c.instructions+=3;goto B6f3eaa;
case 0x6f3eab:c.instructions+=2;goto B6f3eab;
case 0x6f3eac:c.instructions+=1;goto B6f3eac;
case 0x6f3eb1:goto L6f3eb1;
case 0x6f3ec0:goto L6f3ec0;
case 0x6f3ec3:c.instructions+=12;goto B6f3ec3;
case 0x6f3ec4:c.instructions+=11;goto B6f3ec4;
case 0x6f3ec8:c.instructions+=10;goto B6f3ec8;
case 0x6f3ec9:c.instructions+=9;goto B6f3ec9;
case 0x6f3ecd:c.instructions+=8;goto B6f3ecd;
case 0x6f3ed3:c.instructions+=7;goto B6f3ed3;
case 0x6f3ed4:c.instructions+=6;goto B6f3ed4;
case 0x6f3ed6:c.instructions+=5;goto B6f3ed6;
case 0x6f3ed7:c.instructions+=4;goto B6f3ed7;
case 0x6f3edd:c.instructions+=3;goto B6f3edd;
case 0x6f3edf:c.instructions+=2;goto B6f3edf;
case 0x6f3ee0:c.instructions+=1;goto B6f3ee0;
case 0x6f3ee3:goto L6f3ee3;
case 0x6f3ee5:c.instructions+=4;goto B6f3ee5;
case 0x6f3ee7:c.instructions+=3;goto B6f3ee7;
case 0x6f3eeb:c.instructions+=2;goto B6f3eeb;
case 0x6f3eef:c.instructions+=1;goto B6f3eef;
case 0x6f3ef5:goto L6f3ef5;
case 0x6f3ef6:c.instructions+=2;goto B6f3ef6;
case 0x6f3efc:c.instructions+=1;goto B6f3efc;
case 0x6f3efe:goto L6f3efe;
case 0x6f3f02:c.instructions+=1;goto B6f3f02;
case 0x6f3f06:goto L6f3f06;
case 0x6f3f08:c.instructions+=7;goto B6f3f08;
case 0x6f3f0c:c.instructions+=6;goto B6f3f0c;
case 0x6f3f0d:c.instructions+=5;goto B6f3f0d;
case 0x6f3f0e:c.instructions+=4;goto B6f3f0e;
case 0x6f3f14:c.instructions+=3;goto B6f3f14;
case 0x6f3f15:c.instructions+=2;goto B6f3f15;
case 0x6f3f16:c.instructions+=1;goto B6f3f16;
case 0x6f3f19:goto L6f3f19;
case 0x6f3f1f:c.instructions+=1;goto B6f3f1f;
case 0x6f3f21:goto L6f3f21;
case 0x6f3f25:c.instructions+=5;goto B6f3f25;
case 0x6f3f29:c.instructions+=4;goto B6f3f29;
case 0x6f3f2d:c.instructions+=3;goto B6f3f2d;
case 0x6f3f2f:c.instructions+=2;goto B6f3f2f;
case 0x6f3f31:c.instructions+=1;goto B6f3f31;
case 0x6f3f33:goto L6f3f33;
case 0x6f3f37:c.instructions+=2;goto B6f3f37;
case 0x6f3f3c:c.instructions+=1;goto B6f3f3c;
case 0x6f3f40:goto L6f3f40;
case 0x6f3f44:c.instructions+=1;goto B6f3f44;
case 0x6f3f46:goto L6f3f46;
case 0x6f3f48:c.instructions+=1;goto B6f3f48;
case 0x6f3f4a:goto L6f3f4a;
case 0x6f3f4d:c.instructions+=1;goto B6f3f4d;
case 0x6f3f4f:goto L6f3f4f;
case 0x6f3f52:c.instructions+=1;goto B6f3f52;
case 0x6f3f54:goto L6f3f54;
case 0x6f3f55:c.instructions+=3;goto B6f3f55;
case 0x6f3f58:c.instructions+=2;goto B6f3f58;
case 0x6f3f5a:c.instructions+=1;goto B6f3f5a;
case 0x6f3f5c:goto L6f3f5c;
case 0x6f3f60:c.instructions+=8;goto B6f3f60;
case 0x6f3f67:c.instructions+=7;goto B6f3f67;
case 0x6f3f69:c.instructions+=6;goto B6f3f69;
case 0x6f3f6c:c.instructions+=5;goto B6f3f6c;
case 0x6f3f6f:c.instructions+=4;goto B6f3f6f;
case 0x6f3f72:c.instructions+=3;goto B6f3f72;
case 0x6f3f75:c.instructions+=2;goto B6f3f75;
case 0x6f3f76:c.instructions+=1;goto B6f3f76;
case 0x6f3f79:goto L6f3f79;
case 0x6f3f7d:c.instructions+=5;goto B6f3f7d;
case 0x6f3f81:c.instructions+=4;goto B6f3f81;
case 0x6f3f82:c.instructions+=3;goto B6f3f82;
case 0x6f3f84:c.instructions+=2;goto B6f3f84;
case 0x6f3f88:c.instructions+=1;goto B6f3f88;
case 0x6f3f8e:goto L6f3f8e;
case 0x6f3f92:c.instructions+=7;goto B6f3f92;
case 0x6f3f93:c.instructions+=6;goto B6f3f93;
case 0x6f3f99:c.instructions+=5;goto B6f3f99;
case 0x6f3f9a:c.instructions+=4;goto B6f3f9a;
case 0x6f3f9b:c.instructions+=3;goto B6f3f9b;
case 0x6f3f9c:c.instructions+=2;goto B6f3f9c;
case 0x6f3f9f:c.instructions+=1;goto B6f3f9f;
case 0x6f3fa0:goto L6f3fa0;
case 0x6f3fa4:c.instructions+=5;goto B6f3fa4;
case 0x6f3fa7:c.instructions+=4;goto B6f3fa7;
case 0x6f3fab:c.instructions+=3;goto B6f3fab;
case 0x6f3fae:c.instructions+=2;goto B6f3fae;
case 0x6f3fb4:c.instructions+=1;goto B6f3fb4;
case 0x6f3fb6:goto L6f3fb6;
case 0x6f3fbc:goto L6f3fbc;
case 0x6f3fc2:c.instructions+=1;goto B6f3fc2;
case 0x6f3fc4:goto L6f3fc4;
case 0x6f3fca:c.instructions+=1;goto B6f3fca;
case 0x6f3fcc:goto L6f3fcc;
case 0x6f3fd2:c.instructions+=5;goto B6f3fd2;
case 0x6f3fd3:c.instructions+=4;goto B6f3fd3;
case 0x6f3fd4:c.instructions+=3;goto B6f3fd4;
case 0x6f3fd5:c.instructions+=2;goto B6f3fd5;
case 0x6f3fd8:c.instructions+=1;goto B6f3fd8;
case 0x6f3fe0:goto L6f3fe0;
case 0x6f3fe1:c.instructions+=10;goto B6f3fe1;
case 0x6f3fe2:c.instructions+=9;goto B6f3fe2;
case 0x6f3fe6:c.instructions+=8;goto B6f3fe6;
case 0x6f3fe7:c.instructions+=7;goto B6f3fe7;
case 0x6f3fe8:c.instructions+=6;goto B6f3fe8;
case 0x6f3fed:c.instructions+=5;goto B6f3fed;
case 0x6f3ff3:c.instructions+=4;goto B6f3ff3;
case 0x6f3ff7:c.instructions+=3;goto B6f3ff7;
case 0x6f3ffd:c.instructions+=2;goto B6f3ffd;
case 0x6f3fff:c.instructions+=1;goto B6f3fff;
default:missing_instruction(c.pc);}
B6f3003:L6f3003:{c.instructions+=51;NFSU2_TR(0x6f3003);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3007:{NFSU2_TR(0x6f3007);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f3009:{NFSU2_TR(0x6f3009);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f300d:{NFSU2_TR(0x6f300d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f3013:{NFSU2_TR(0x6f3013);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f3015:{NFSU2_TR(0x6f3015);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f3019:{NFSU2_TR(0x6f3019);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f301c:{NFSU2_TR(0x6f301c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3020:{NFSU2_TR(0x6f3020);
__builtin_memmove((R+12),(R+4),4);
}
B6f3022:{NFSU2_TR(0x6f3022);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f3028:{NFSU2_TR(0x6f3028);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f302a:{NFSU2_TR(0x6f302a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f3030:{NFSU2_TR(0x6f3030);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f3032:{NFSU2_TR(0x6f3032);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6f3035:{NFSU2_TR(0x6f3035);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f3038:{NFSU2_TR(0x6f3038);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f303c:{NFSU2_TR(0x6f303c);
__builtin_memmove((R+12),(R+4),4);
}
B6f303e:{NFSU2_TR(0x6f303e);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f3044:{NFSU2_TR(0x6f3044);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f3046:{NFSU2_TR(0x6f3046);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffull))));
}
B6f304c:{NFSU2_TR(0x6f304c);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B6f304e:{NFSU2_TR(0x6f304e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3052:{NFSU2_TR(0x6f3052);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f3055:{NFSU2_TR(0x6f3055);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f3058:{NFSU2_TR(0x6f3058);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f305b:{NFSU2_TR(0x6f305b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f305f:{NFSU2_TR(0x6f305f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3063:{NFSU2_TR(0x6f3063);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3067:{NFSU2_TR(0x6f3067);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f306b:{NFSU2_TR(0x6f306b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f306f:{NFSU2_TR(0x6f306f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3073:{NFSU2_TR(0x6f3073);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3077:{NFSU2_TR(0x6f3077);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f307b:{NFSU2_TR(0x6f307b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f307f:{NFSU2_TR(0x6f307f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3083:{NFSU2_TR(0x6f3083);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3087:{NFSU2_TR(0x6f3087);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f308b:{NFSU2_TR(0x6f308b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f308f:{NFSU2_TR(0x6f308f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3093:{NFSU2_TR(0x6f3093);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3097:{NFSU2_TR(0x6f3097);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f309b:{NFSU2_TR(0x6f309b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f309f:{NFSU2_TR(0x6f309f);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f30a3:{NFSU2_TR(0x6f30a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f30a7:{NFSU2_TR(0x6f30a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f30ab:{NFSU2_TR(0x6f30ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f30ac:{NFSU2_TR(0x6f30ac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6f30af:{NFSU2_TR(0x6f30af);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B6f30b2:{NFSU2_TR(0x6f30b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f30b4:{NFSU2_TR(0x6f30b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f30b8:{NFSU2_TR(0x6f30b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6f2f36u,6f2);}
}
B6f30be:L6f30be:{c.instructions+=2;NFSU2_TR(0x6f30be);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f30c2:{NFSU2_TR(0x6f30c2);
{goto L6f3192;}
}
B6f30c7:L6f30c7:{c.instructions+=4;NFSU2_TR(0x6f30c7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f30c9:{NFSU2_TR(0x6f30c9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f30cb:{NFSU2_TR(0x6f30cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f30cf:{NFSU2_TR(0x6f30cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3192;}}
}
B6f30d5:L6f30d5:{c.instructions+=2;NFSU2_TR(0x6f30d5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6f30d8:{NFSU2_TR(0x6f30d8);
{goto L6f30e0;}
}
B6f30da:L6f30da:{c.instructions+=2;NFSU2_TR(0x6f30da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f30de:{NFSU2_TR(0x6f30de);
__builtin_memmove((R+28),(R+28),4);
}
B6f30e0:L6f30e0:{c.instructions+=10;NFSU2_TR(0x6f30e0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B6f30e4:{NFSU2_TR(0x6f30e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f30e8:{NFSU2_TR(0x6f30e8);
__builtin_memmove((R+4),(R+8),4);
}
B6f30ea:{NFSU2_TR(0x6f30ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f30ed:{NFSU2_TR(0x6f30ed);
w4(R+12,u32(0x1ull));
}
B6f30f2:{NFSU2_TR(0x6f30f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6f30f4:{NFSU2_TR(0x6f30f4);
__builtin_memmove((R+4),(R+8),4);
}
B6f30f6:{NFSU2_TR(0x6f30f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f30f9:{NFSU2_TR(0x6f30f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f30fd:{NFSU2_TR(0x6f30fd);
if(r1(R+518)){{goto L6f317a;}}
}
B6f30ff:L6f30ff:{c.instructions+=36;NFSU2_TR(0x6f30ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f3102:{NFSU2_TR(0x6f3102);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f3106:{NFSU2_TR(0x6f3106);
__builtin_memmove((R+12),(R+8),4);
}
B6f3108:{NFSU2_TR(0x6f3108);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f310e:{NFSU2_TR(0x6f310e);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f3110:{NFSU2_TR(0x6f3110);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B6f3116:{NFSU2_TR(0x6f3116);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6f3118:{NFSU2_TR(0x6f3118);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f311b:{NFSU2_TR(0x6f311b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f311e:{NFSU2_TR(0x6f311e);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3122:{NFSU2_TR(0x6f3122);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f3126:{NFSU2_TR(0x6f3126);
__builtin_memmove((R+12),(R+8),4);
}
B6f3128:{NFSU2_TR(0x6f3128);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f312e:{NFSU2_TR(0x6f312e);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f3130:{NFSU2_TR(0x6f3130);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B6f3136:{NFSU2_TR(0x6f3136);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6f3138:{NFSU2_TR(0x6f3138);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f313b:{NFSU2_TR(0x6f313b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f313f:{NFSU2_TR(0x6f313f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B6f3142:{NFSU2_TR(0x6f3142);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3143:{NFSU2_TR(0x6f3143);
__builtin_memmove((R+12),(R+8),4);
}
B6f3145:{NFSU2_TR(0x6f3145);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f314b:{NFSU2_TR(0x6f314b);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f314d:{NFSU2_TR(0x6f314d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B6f3153:{NFSU2_TR(0x6f3153);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6f3155:{NFSU2_TR(0x6f3155);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f3158:{NFSU2_TR(0x6f3158);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f315c:{NFSU2_TR(0x6f315c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f3160:{NFSU2_TR(0x6f3160);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3161:{NFSU2_TR(0x6f3161);
__builtin_memmove((R+12),(R+8),4);
}
B6f3163:{NFSU2_TR(0x6f3163);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff8000ull))));
}
B6f3169:{NFSU2_TR(0x6f3169);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B6f316b:{NFSU2_TR(0x6f316b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffull))));
}
B6f3171:{NFSU2_TR(0x6f3171);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+8))));
}
B6f3173:{NFSU2_TR(0x6f3173);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6f3176:{NFSU2_TR(0x6f3176);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f317a:L6f317a:{c.instructions+=7;NFSU2_TR(0x6f317a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f317e:{NFSU2_TR(0x6f317e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3182:{NFSU2_TR(0x6f3182);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3183:{NFSU2_TR(0x6f3183);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6f3186:{NFSU2_TR(0x6f3186);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3188:{NFSU2_TR(0x6f3188);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f318c:{NFSU2_TR(0x6f318c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f30dau);}goto L6f30da;}}
}
B6f3192:L6f3192:{c.instructions+=4;NFSU2_TR(0x6f3192);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f3196:{NFSU2_TR(0x6f3196);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3198:{NFSU2_TR(0x6f3198);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f319c:{NFSU2_TR(0x6f319c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3282;}}
}
B6f31a2:L6f31a2:{c.instructions+=10;NFSU2_TR(0x6f31a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6f31a6:{NFSU2_TR(0x6f31a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f31aa:{NFSU2_TR(0x6f31aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f31ad:{NFSU2_TR(0x6f31ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6f31b0:{NFSU2_TR(0x6f31b0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6f31b2:{NFSU2_TR(0x6f31b2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f31b4:{NFSU2_TR(0x6f31b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f31b6:{NFSU2_TR(0x6f31b6);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6f31ba:{NFSU2_TR(0x6f31ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f31be:{NFSU2_TR(0x6f31be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3282;}}
}
B6f31c4:L6f31c4:{c.instructions+=10;NFSU2_TR(0x6f31c4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B6f31c8:{NFSU2_TR(0x6f31c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f31cc:{NFSU2_TR(0x6f31cc);
__builtin_memmove((R+4),(R+24),4);
}
B6f31ce:{NFSU2_TR(0x6f31ce);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f31d1:{NFSU2_TR(0x6f31d1);
w4(R+28,u32(0x1ull));
}
B6f31d6:{NFSU2_TR(0x6f31d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6f31d8:{NFSU2_TR(0x6f31d8);
__builtin_memmove((R+4),(R+24),4);
}
B6f31da:{NFSU2_TR(0x6f31da);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f31dd:{NFSU2_TR(0x6f31dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f31e1:{NFSU2_TR(0x6f31e1);
if(r1(R+518)){{goto L6f326d;}}
}
B6f31e7:L6f31e7:{c.instructions+=40;NFSU2_TR(0x6f31e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f31ea:{NFSU2_TR(0x6f31ea);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(r2(U+0)));
}
B6f31ed:{NFSU2_TR(0x6f31ed);
__builtin_memmove((R+28),(R+24),4);
}
B6f31ef:{NFSU2_TR(0x6f31ef);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f31f5:{NFSU2_TR(0x6f31f5);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f31f7:{NFSU2_TR(0x6f31f7);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f31fd:{NFSU2_TR(0x6f31fd);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f31ff:{NFSU2_TR(0x6f31ff);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3202:{NFSU2_TR(0x6f3202);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f3205:{NFSU2_TR(0x6f3205);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f3208:{NFSU2_TR(0x6f3208);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f320c:{NFSU2_TR(0x6f320c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(r2(U+0)));
}
B6f320f:{NFSU2_TR(0x6f320f);
__builtin_memmove((R+28),(R+24),4);
}
B6f3211:{NFSU2_TR(0x6f3211);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3217:{NFSU2_TR(0x6f3217);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3219:{NFSU2_TR(0x6f3219);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f321f:{NFSU2_TR(0x6f321f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3221:{NFSU2_TR(0x6f3221);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3224:{NFSU2_TR(0x6f3224);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3228:{NFSU2_TR(0x6f3228);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f322c:{NFSU2_TR(0x6f322c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f322d:{NFSU2_TR(0x6f322d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f3230:{NFSU2_TR(0x6f3230);
__builtin_memmove((R+28),(R+24),4);
}
B6f3232:{NFSU2_TR(0x6f3232);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3238:{NFSU2_TR(0x6f3238);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f323a:{NFSU2_TR(0x6f323a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3240:{NFSU2_TR(0x6f3240);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3242:{NFSU2_TR(0x6f3242);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3245:{NFSU2_TR(0x6f3245);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3249:{NFSU2_TR(0x6f3249);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f324d:{NFSU2_TR(0x6f324d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f324e:{NFSU2_TR(0x6f324e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f3251:{NFSU2_TR(0x6f3251);
__builtin_memmove((R+28),(R+24),4);
}
B6f3253:{NFSU2_TR(0x6f3253);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3259:{NFSU2_TR(0x6f3259);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f325b:{NFSU2_TR(0x6f325b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3261:{NFSU2_TR(0x6f3261);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3263:{NFSU2_TR(0x6f3263);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3266:{NFSU2_TR(0x6f3266);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f326a:{NFSU2_TR(0x6f326a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6f326d:L6f326d:{c.instructions+=6;NFSU2_TR(0x6f326d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3271:{NFSU2_TR(0x6f3271);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f3275:{NFSU2_TR(0x6f3275);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3276:{NFSU2_TR(0x6f3276);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3278:{NFSU2_TR(0x6f3278);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f327c:{NFSU2_TR(0x6f327c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f31c4u);}goto L6f31c4;}}
}
B6f3282:L6f3282:{c.instructions+=7;NFSU2_TR(0x6f3282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f3283:{NFSU2_TR(0x6f3283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f3284:{NFSU2_TR(0x6f3284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f3285:{NFSU2_TR(0x6f3285);
w1(R+0,u8(0x1ull));
}
B6f3287:{NFSU2_TR(0x6f3287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3288:{NFSU2_TR(0x6f3288);
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
B6f328b:{NFSU2_TR(0x6f328b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f3290:L6f3290:{c.instructions+=7;NFSU2_TR(0x6f3290);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f3294:{NFSU2_TR(0x6f3294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3295:{NFSU2_TR(0x6f3295);
__builtin_memmove((R+24),(R+4),4);
}
B6f3297:{NFSU2_TR(0x6f3297);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6f329a:{NFSU2_TR(0x6f329a);
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
B6f329c:{NFSU2_TR(0x6f329c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f329f:{NFSU2_TR(0x6f329f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f32cf;}}
}
B6f32a1:L6f32a1:{c.instructions+=2;NFSU2_TR(0x6f32a1);
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
B6f32a3:{NFSU2_TR(0x6f32a3);
if(r1(R+518)){{goto L6f32cf;}}
}
B6f32a5:L6f32a5:{c.instructions+=3;NFSU2_TR(0x6f32a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f32a7:{NFSU2_TR(0x6f32a7);
__builtin_memmove((R+4),(R+24),4);
}
B6f32a9:{NFSU2_TR(0x6f32a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f32acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f32ac:L6f32ac:{c.instructions+=2;NFSU2_TR(0x6f32ac);
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
B6f32ae:{NFSU2_TR(0x6f32ae);
if(r1(R+518)){{goto L6f32cf;}}
}
B6f32b0:L6f32b0:{c.instructions+=7;NFSU2_TR(0x6f32b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6f32b4:{NFSU2_TR(0x6f32b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f32b5:{NFSU2_TR(0x6f32b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f32b6:{NFSU2_TR(0x6f32b6);
__builtin_memmove((R+4),(R+16),4);
}
B6f32b8:{NFSU2_TR(0x6f32b8);
u8 U[2];
w2(U+0,u16(0x1ull));
s2(u32(r4(R+4)),r2(U+0));
}
B6f32bd:{NFSU2_TR(0x6f32bd);
__builtin_memmove((R+4),(R+0),4);
}
B6f32bf:{NFSU2_TR(0x6f32bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f32c4ull));
TAIL_STATIC(0x6f0c40u,6f0);
}
B6f32c4:L6f32c4:{c.instructions+=2;NFSU2_TR(0x6f32c4);
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
B6f32c6:{NFSU2_TR(0x6f32c6);
if(r1(R+518)){{goto L6f32cf;}}
}
B6f32c8:L6f32c8:{c.instructions+=2;NFSU2_TR(0x6f32c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6f32cc:{NFSU2_TR(0x6f32cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f32cf:L6f32cf:{c.instructions+=2;NFSU2_TR(0x6f32cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f32d0:{NFSU2_TR(0x6f32d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f32e0:L6f32e0:{c.instructions+=10;NFSU2_TR(0x6f32e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f32e1:{NFSU2_TR(0x6f32e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f32e5:{NFSU2_TR(0x6f32e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f32e6:{NFSU2_TR(0x6f32e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f32ea:{NFSU2_TR(0x6f32ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f32eb:{NFSU2_TR(0x6f32eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f32ec:{NFSU2_TR(0x6f32ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f32ef:{NFSU2_TR(0x6f32ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f32f3:{NFSU2_TR(0x6f32f3);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B6f32f4:{NFSU2_TR(0x6f32f4);
if(r1(R+519)){{goto L6f334d;}}
}
B6f32f6:L6f32f6:{c.instructions+=10;NFSU2_TR(0x6f32f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f32f9:{NFSU2_TR(0x6f32f9);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6f32fd:{NFSU2_TR(0x6f32fd);
__builtin_memmove((R+4),(R+0),4);
}
B6f32ff:{NFSU2_TR(0x6f32ff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6f3302:{NFSU2_TR(0x6f3302);
w4(R+8,u32(0x1ull));
}
B6f3307:{NFSU2_TR(0x6f3307);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6f3309:{NFSU2_TR(0x6f3309);
__builtin_memmove((R+4),(R+0),4);
}
B6f330b:{NFSU2_TR(0x6f330b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6f330e:{NFSU2_TR(0x6f330e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f3311:{NFSU2_TR(0x6f3311);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f334a;}}
}
B6f3313:L6f3313:{c.instructions+=2;NFSU2_TR(0x6f3313);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f3317:{NFSU2_TR(0x6f3317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f3321;}}
}
B6f3319:L6f3319:{c.instructions+=3;NFSU2_TR(0x6f3319);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f331d:{NFSU2_TR(0x6f331d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6f331f:{NFSU2_TR(0x6f331f);
{goto L6f3333;}
}
B6f3321:L6f3321:{c.instructions+=3;NFSU2_TR(0x6f3321);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3325:{NFSU2_TR(0x6f3325);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6f3327:{NFSU2_TR(0x6f3327);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f332b;}}
}
B6f3329:L6f3329:{c.instructions+=1;NFSU2_TR(0x6f3329);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f332b:L6f332b:{c.instructions+=3;NFSU2_TR(0x6f332b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f332f:{NFSU2_TR(0x6f332f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f3331:{NFSU2_TR(0x6f3331);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3339;}}
}
B6f3333:L6f3333:{c.instructions+=2;NFSU2_TR(0x6f3333);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3337:{NFSU2_TR(0x6f3337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6f3339:L6f3339:{c.instructions+=7;NFSU2_TR(0x6f3339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6f333c:{NFSU2_TR(0x6f333c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f333d:{NFSU2_TR(0x6f333d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f333f:{NFSU2_TR(0x6f333f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6f3342:{NFSU2_TR(0x6f3342);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3343:{NFSU2_TR(0x6f3343);
__builtin_memmove((R+4),(R+12),4);
}
B6f3345:{NFSU2_TR(0x6f3345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f334aull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6f334a:L6f334a:{c.instructions+=2;NFSU2_TR(0x6f334a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B6f334b:{NFSU2_TR(0x6f334b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f32f6u);}goto L6f32f6;}}
}
B6f334d:L6f334d:{c.instructions+=3;NFSU2_TR(0x6f334d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3350:{NFSU2_TR(0x6f3350);
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
B6f3352:{NFSU2_TR(0x6f3352);
if(r1(R+518)){{goto L6f336c;}}
}
B6f3354:L6f3354:{c.instructions+=8;NFSU2_TR(0x6f3354);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3358:{NFSU2_TR(0x6f3358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f335a:{NFSU2_TR(0x6f335a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f335b:{NFSU2_TR(0x6f335b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f335f:{NFSU2_TR(0x6f335f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3360:{NFSU2_TR(0x6f3360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3361:{NFSU2_TR(0x6f3361);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3362:{NFSU2_TR(0x6f3362);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f3365ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f3365:L6f3365:{c.instructions+=5;NFSU2_TR(0x6f3365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f3366:{NFSU2_TR(0x6f3366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f3367:{NFSU2_TR(0x6f3367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f3368:{NFSU2_TR(0x6f3368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3369:{NFSU2_TR(0x6f3369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f336c:L6f336c:{c.instructions+=6;NFSU2_TR(0x6f336c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f336d:{NFSU2_TR(0x6f336d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f336e:{NFSU2_TR(0x6f336e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f336f:{NFSU2_TR(0x6f336f);
w1(R+0,u8(0x1ull));
}
B6f3371:{NFSU2_TR(0x6f3371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3372:{NFSU2_TR(0x6f3372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f3380:L6f3380:{c.instructions+=4;NFSU2_TR(0x6f3380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3381:{NFSU2_TR(0x6f3381);
__builtin_memmove((R+24),(R+4),4);
}
B6f3383:{NFSU2_TR(0x6f3383);
u8 U[4];
w4(U+0,u32(0x7c2250ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6f3389:{NFSU2_TR(0x6f3389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f338eull));
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6f338e:L6f338e:{c.instructions+=2;NFSU2_TR(0x6f338e);
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
B6f3393:{NFSU2_TR(0x6f3393);
if(r1(R+518)){{goto L6f33a1;}}
}
B6f3395:L6f3395:{c.instructions+=3;NFSU2_TR(0x6f3395);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3397:{NFSU2_TR(0x6f3397);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3398:{NFSU2_TR(0x6f3398);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f339eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6f339e:L6f339e:{c.instructions+=1;NFSU2_TR(0x6f339e);
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
B6f33a1:L6f33a1:{c.instructions+=3;NFSU2_TR(0x6f33a1);
__builtin_memmove((R+0),(R+24),4);
}
B6f33a3:{NFSU2_TR(0x6f33a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f33a4:{NFSU2_TR(0x6f33a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f33b0:L6f33b0:{c.instructions+=5;NFSU2_TR(0x6f33b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6f33b3:{NFSU2_TR(0x6f33b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f33b7:{NFSU2_TR(0x6f33b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6f33ba:{NFSU2_TR(0x6f33ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f33bc:{NFSU2_TR(0x6f33bc);
if(r1(R+518)){{goto L6f33d2;}}
}
B6f33be:L6f33be:{c.instructions+=5;NFSU2_TR(0x6f33be);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f33c2:{NFSU2_TR(0x6f33c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f33c6:{NFSU2_TR(0x6f33c6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f33ca:{NFSU2_TR(0x6f33ca);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f33ce:{NFSU2_TR(0x6f33ce);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f33d2:L6f33d2:{c.instructions+=11;NFSU2_TR(0x6f33d2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f33d6:{NFSU2_TR(0x6f33d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f33d7:{NFSU2_TR(0x6f33d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f33dd:{NFSU2_TR(0x6f33dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f33e0:{NFSU2_TR(0x6f33e0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f33e4:{NFSU2_TR(0x6f33e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f33e5:{NFSU2_TR(0x6f33e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f33e6:{NFSU2_TR(0x6f33e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f33ea:{NFSU2_TR(0x6f33ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f33ec:{NFSU2_TR(0x6f33ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f33ef:{NFSU2_TR(0x6f33ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f3405;}}
}
B6f33f1:L6f33f1:{c.instructions+=5;NFSU2_TR(0x6f33f1);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f33f7:{NFSU2_TR(0x6f33f7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f33fb:{NFSU2_TR(0x6f33fb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f33ff:{NFSU2_TR(0x6f33ff);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6f3403:{NFSU2_TR(0x6f3403);
{goto L6f3417;}
}
B6f3405:L6f3405:{c.instructions+=4;NFSU2_TR(0x6f3405);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f340b:{NFSU2_TR(0x6f340b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f340f:{NFSU2_TR(0x6f340f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3413:{NFSU2_TR(0x6f3413);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6f3417:L6f3417:{c.instructions+=7;NFSU2_TR(0x6f3417);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f341b:{NFSU2_TR(0x6f341b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f341c:{NFSU2_TR(0x6f341c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f341f:{NFSU2_TR(0x6f341f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3421:{NFSU2_TR(0x6f3421);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3425:{NFSU2_TR(0x6f3425);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f342d:{NFSU2_TR(0x6f342d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f347b;}}
}
B6f342f:L6f342f:{c.instructions+=2;NFSU2_TR(0x6f342f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6f3431:{NFSU2_TR(0x6f3431);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f3437;}}
}
B6f3433:L6f3433:{c.instructions+=2;NFSU2_TR(0x6f3433);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f3435:{NFSU2_TR(0x6f3435);
{goto L6f3444;}
}
B6f3437:L6f3437:{c.instructions+=3;NFSU2_TR(0x6f3437);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6f343b:{NFSU2_TR(0x6f343b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f343d:{NFSU2_TR(0x6f343d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f3442;}}
}
B6f343f:L6f343f:{c.instructions+=2;NFSU2_TR(0x6f343f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6f3440:{NFSU2_TR(0x6f3440);
{goto L6f3444;}
}
B6f3442:L6f3442:{c.instructions+=1;NFSU2_TR(0x6f3442);
__builtin_memmove((R+28),(R+24),4);
}
B6f3444:L6f3444:{c.instructions+=7;NFSU2_TR(0x6f3444);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f3448:{NFSU2_TR(0x6f3448);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f344c:{NFSU2_TR(0x6f344c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3450:{NFSU2_TR(0x6f3450);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6f3452:{NFSU2_TR(0x6f3452);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f3454:{NFSU2_TR(0x6f3454);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f3457:{NFSU2_TR(0x6f3457);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f345d;}}
}
B6f3459:L6f3459:{c.instructions+=2;NFSU2_TR(0x6f3459);
w1(R+4,u8(0x1ull));
}
B6f345b:{NFSU2_TR(0x6f345b);
{goto L6f345f;}
}
B6f345d:L6f345d:{c.instructions+=1;NFSU2_TR(0x6f345d);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6f345f:L6f345f:{c.instructions+=9;NFSU2_TR(0x6f345f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3463:{NFSU2_TR(0x6f3463);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f3467:{NFSU2_TR(0x6f3467);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f3469:{NFSU2_TR(0x6f3469);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6f346a:{NFSU2_TR(0x6f346a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f346e:{NFSU2_TR(0x6f346e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3470:{NFSU2_TR(0x6f3470);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3474:{NFSU2_TR(0x6f3474);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f3476:{NFSU2_TR(0x6f3476);
{goto L6f3564;}
}
B6f347b:L6f347b:{c.instructions+=4;NFSU2_TR(0x6f347b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+0,u32(r2(U+0)));
}
B6f347f:{NFSU2_TR(0x6f347f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3481:{NFSU2_TR(0x6f3481);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3485:{NFSU2_TR(0x6f3485);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f348f;}}
}
B6f3487:L6f3487:{c.instructions+=3;NFSU2_TR(0x6f3487);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6f3489:{NFSU2_TR(0x6f3489);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f348d:{NFSU2_TR(0x6f348d);
{goto L6f34ef;}
}
B6f348f:L6f348f:{c.instructions+=4;NFSU2_TR(0x6f348f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3493:{NFSU2_TR(0x6f3493);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6f3497:{NFSU2_TR(0x6f3497);
w1(R+512,u8((r2(R+0))<(u16(0x1ull))));
}
B6f349b:{NFSU2_TR(0x6f349b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6f34a1;}}
}
B6f349d:L6f349d:{c.instructions+=2;NFSU2_TR(0x6f349d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6f349f:{NFSU2_TR(0x6f349f);
{goto L6f34a5;}
}
B6f34a1:L6f34a1:{c.instructions+=2;NFSU2_TR(0x6f34a1);
w4(R+0,u32(r2(R+0)));
}
B6f34a4:{NFSU2_TR(0x6f34a4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f34a5:L6f34a5:{c.instructions+=4;NFSU2_TR(0x6f34a5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6f34aa:{NFSU2_TR(0x6f34aa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f34ac:{NFSU2_TR(0x6f34ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f34b0:{NFSU2_TR(0x6f34b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f34d1;}}
}
B6f34b2:L6f34b2:{c.instructions+=4;NFSU2_TR(0x6f34b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6f34b6:{NFSU2_TR(0x6f34b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B6f34b9:{NFSU2_TR(0x6f34b9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f34bb:{NFSU2_TR(0x6f34bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f34e4;}}
}
B6f34bd:L6f34bd:{c.instructions+=1;NFSU2_TR(0x6f34bd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f34c0:L6f34c0:{c.instructions+=3;NFSU2_TR(0x6f34c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(r2(U+0)));
}
B6f34c3:{NFSU2_TR(0x6f34c3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f34c5:{NFSU2_TR(0x6f34c5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6f34e4;}}
}
B6f34c7:L6f34c7:{c.instructions+=4;NFSU2_TR(0x6f34c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f34c8:{NFSU2_TR(0x6f34c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f34cb:{NFSU2_TR(0x6f34cb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f34cd:{NFSU2_TR(0x6f34cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f34c0u);}goto L6f34c0;}}
}
B6f34cf:L6f34cf:{c.instructions+=1;NFSU2_TR(0x6f34cf);
{goto L6f34e4;}
}
B6f34d1:L6f34d1:{c.instructions+=2;NFSU2_TR(0x6f34d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f34d3:{NFSU2_TR(0x6f34d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f34e4;}}
}
B6f34d5:L6f34d5:{c.instructions+=3;NFSU2_TR(0x6f34d5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6f34d8:{NFSU2_TR(0x6f34d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6f34da:{NFSU2_TR(0x6f34da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f34e4;}}
}
B6f34dc:L6f34dc:{c.instructions+=4;NFSU2_TR(0x6f34dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f34dd:{NFSU2_TR(0x6f34dd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6f34e0:{NFSU2_TR(0x6f34e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f34e2:{NFSU2_TR(0x6f34e2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f34d5u);}goto L6f34d5;}}
}
B6f34e4:L6f34e4:{c.instructions+=4;NFSU2_TR(0x6f34e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f34e7:{NFSU2_TR(0x6f34e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f34e9:{NFSU2_TR(0x6f34e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f34ed:{NFSU2_TR(0x6f34ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f351c;}}
}
B6f34ef:L6f34ef:{c.instructions+=5;NFSU2_TR(0x6f34ef);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f34f3:{NFSU2_TR(0x6f34f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6f34f9:{NFSU2_TR(0x6f34f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f34fb:{NFSU2_TR(0x6f34fb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f34fe:{NFSU2_TR(0x6f34fe);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f3514;}}
}
B6f3500:L6f3500:{c.instructions+=6;NFSU2_TR(0x6f3500);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f3504:{NFSU2_TR(0x6f3504);
w1(R+4,u8(0x1ull));
}
B6f3506:{NFSU2_TR(0x6f3506);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f350a:{NFSU2_TR(0x6f350a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6f350e:{NFSU2_TR(0x6f350e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3512:{NFSU2_TR(0x6f3512);
{goto L6f355d;}
}
B6f3514:L6f3514:{c.instructions+=3;NFSU2_TR(0x6f3514);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6f3516:{NFSU2_TR(0x6f3516);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f351a:{NFSU2_TR(0x6f351a);
{goto L6f355d;}
}
B6f351c:L6f351c:{c.instructions+=8;NFSU2_TR(0x6f351c);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6f3521:{NFSU2_TR(0x6f3521);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3525:{NFSU2_TR(0x6f3525);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f3529:{NFSU2_TR(0x6f3529);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f352d:{NFSU2_TR(0x6f352d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6f352f:{NFSU2_TR(0x6f352f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6f3531:{NFSU2_TR(0x6f3531);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6f3534:{NFSU2_TR(0x6f3534);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6f3cd9;}}
}
B6f353a:L6f353a:{c.instructions+=10;NFSU2_TR(0x6f353a);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6f353f:{NFSU2_TR(0x6f353f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3543:{NFSU2_TR(0x6f3543);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6f3545:{NFSU2_TR(0x6f3545);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3549:{NFSU2_TR(0x6f3549);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6f354d:{NFSU2_TR(0x6f354d);
w1(R+4,u8(0x1ull));
}
B6f354f:{NFSU2_TR(0x6f354f);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f3553:{NFSU2_TR(0x6f3553);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6f3555:{NFSU2_TR(0x6f3555);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6f3557:{NFSU2_TR(0x6f3557);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f355b:L6f355b:{c.instructions+=1;NFSU2_TR(0x6f355b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6f355d:L6f355d:{c.instructions+=3;NFSU2_TR(0x6f355d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6f3561:{NFSU2_TR(0x6f3561);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6f3562:{NFSU2_TR(0x6f3562);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3564:L6f3564:{c.instructions+=1;NFSU2_TR(0x6f3564);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f356c;}}
}
B6f3566:L6f3566:{c.instructions+=2;NFSU2_TR(0x6f3566);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6f3568:{NFSU2_TR(0x6f3568);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f356c:L6f356c:{c.instructions+=5;NFSU2_TR(0x6f356c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3570:{NFSU2_TR(0x6f3570);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6f3574:{NFSU2_TR(0x6f3574);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3578:{NFSU2_TR(0x6f3578);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f357a:{NFSU2_TR(0x6f357a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f3e92;}}
}
B6f3580:L6f3580:{c.instructions+=4;NFSU2_TR(0x6f3580);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3584:{NFSU2_TR(0x6f3584);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3587:{NFSU2_TR(0x6f3587);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3589:{NFSU2_TR(0x6f3589);
if(r1(R+518)){{goto L6f3592;}}
}
B6f358b:L6f358b:{c.instructions+=1;NFSU2_TR(0x6f358b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f3592:L6f3592:{c.instructions+=11;NFSU2_TR(0x6f3592);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6f3596:{NFSU2_TR(0x6f3596);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f359a:{NFSU2_TR(0x6f359a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f359d:{NFSU2_TR(0x6f359d);
__builtin_memmove((R+0),(R+20),4);
}
B6f359f:{NFSU2_TR(0x6f359f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6f35a2:{NFSU2_TR(0x6f35a2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6f35a5:{NFSU2_TR(0x6f35a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6f35a7:{NFSU2_TR(0x6f35a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f35ab:{NFSU2_TR(0x6f35ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6f35af:{NFSU2_TR(0x6f35af);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f35b3:{NFSU2_TR(0x6f35b3);
if(r1(R+518)){{goto L6f3ce4;}}
}
B6f35b9:L6f35b9:{c.instructions+=4;NFSU2_TR(0x6f35b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f35bd:{NFSU2_TR(0x6f35bd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6f35be:{NFSU2_TR(0x6f35be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f35c0:{NFSU2_TR(0x6f35c0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f3ce4;}}
}
B6f35c6:L6f35c6:{c.instructions+=6;NFSU2_TR(0x6f35c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6f35c9:{NFSU2_TR(0x6f35c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f35cc:{NFSU2_TR(0x6f35cc);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f35d0:{NFSU2_TR(0x6f35d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f35d2:{NFSU2_TR(0x6f35d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f35d5:{NFSU2_TR(0x6f35d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6f3b63;}}
}
B6f35db:L6f35db:{c.instructions+=6;NFSU2_TR(0x6f35db);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f35df:{NFSU2_TR(0x6f35df);
__builtin_memmove((R+28),(R+24),4);
}
B6f35e1:{NFSU2_TR(0x6f35e1);
w4(R+24,u32(0x2ull));
}
B6f35e6:{NFSU2_TR(0x6f35e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f35e7:{NFSU2_TR(0x6f35e7);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B6f35e9:{NFSU2_TR(0x6f35e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f35ed:L6f35ed:{c.instructions+=387;NFSU2_TR(0x6f35ed);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B6f35f0:{NFSU2_TR(0x6f35f0);
__builtin_memmove((R+20),(R+24),4);
}
B6f35f2:{NFSU2_TR(0x6f35f2);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f35f8:{NFSU2_TR(0x6f35f8);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f35fa:{NFSU2_TR(0x6f35fa);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3600:{NFSU2_TR(0x6f3600);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3602:{NFSU2_TR(0x6f3602);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3606:{NFSU2_TR(0x6f3606);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3609:{NFSU2_TR(0x6f3609);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f360d:{NFSU2_TR(0x6f360d);
__builtin_memmove((R+20),(R+24),4);
}
B6f360f:{NFSU2_TR(0x6f360f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3615:{NFSU2_TR(0x6f3615);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3617:{NFSU2_TR(0x6f3617);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f361d:{NFSU2_TR(0x6f361d);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f361f:{NFSU2_TR(0x6f361f);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3622:{NFSU2_TR(0x6f3622);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3626:{NFSU2_TR(0x6f3626);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3629:{NFSU2_TR(0x6f3629);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f362d:{NFSU2_TR(0x6f362d);
__builtin_memmove((R+20),(R+24),4);
}
B6f362f:{NFSU2_TR(0x6f362f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3635:{NFSU2_TR(0x6f3635);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3637:{NFSU2_TR(0x6f3637);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f363a:{NFSU2_TR(0x6f363a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3640:{NFSU2_TR(0x6f3640);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3642:{NFSU2_TR(0x6f3642);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3646:{NFSU2_TR(0x6f3646);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3649:{NFSU2_TR(0x6f3649);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f364d:{NFSU2_TR(0x6f364d);
__builtin_memmove((R+20),(R+24),4);
}
B6f364f:{NFSU2_TR(0x6f364f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3655:{NFSU2_TR(0x6f3655);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3657:{NFSU2_TR(0x6f3657);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f365a:{NFSU2_TR(0x6f365a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3660:{NFSU2_TR(0x6f3660);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3662:{NFSU2_TR(0x6f3662);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3665:{NFSU2_TR(0x6f3665);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3668:{NFSU2_TR(0x6f3668);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f366c:{NFSU2_TR(0x6f366c);
__builtin_memmove((R+20),(R+24),4);
}
B6f366e:{NFSU2_TR(0x6f366e);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3674:{NFSU2_TR(0x6f3674);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3676:{NFSU2_TR(0x6f3676);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f367c:{NFSU2_TR(0x6f367c);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f367e:{NFSU2_TR(0x6f367e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3682:{NFSU2_TR(0x6f3682);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3685:{NFSU2_TR(0x6f3685);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3689:{NFSU2_TR(0x6f3689);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f368c:{NFSU2_TR(0x6f368c);
__builtin_memmove((R+20),(R+24),4);
}
B6f368e:{NFSU2_TR(0x6f368e);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3694:{NFSU2_TR(0x6f3694);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3698:{NFSU2_TR(0x6f3698);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f369c:{NFSU2_TR(0x6f369c);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f369e:{NFSU2_TR(0x6f369e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f36a4:{NFSU2_TR(0x6f36a4);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f36a6:{NFSU2_TR(0x6f36a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f36aa:{NFSU2_TR(0x6f36aa);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f36ad:{NFSU2_TR(0x6f36ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f36b1:{NFSU2_TR(0x6f36b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f36b4:{NFSU2_TR(0x6f36b4);
__builtin_memmove((R+20),(R+24),4);
}
B6f36b6:{NFSU2_TR(0x6f36b6);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f36bc:{NFSU2_TR(0x6f36bc);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f36be:{NFSU2_TR(0x6f36be);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f36c4:{NFSU2_TR(0x6f36c4);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f36c6:{NFSU2_TR(0x6f36c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f36ca:{NFSU2_TR(0x6f36ca);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f36cd:{NFSU2_TR(0x6f36cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f36d0:{NFSU2_TR(0x6f36d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f36d4:{NFSU2_TR(0x6f36d4);
__builtin_memmove((R+20),(R+24),4);
}
B6f36d6:{NFSU2_TR(0x6f36d6);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f36dc:{NFSU2_TR(0x6f36dc);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f36e2:{NFSU2_TR(0x6f36e2);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f36e4:{NFSU2_TR(0x6f36e4);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f36e6:{NFSU2_TR(0x6f36e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f36ea:{NFSU2_TR(0x6f36ea);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f36ed:{NFSU2_TR(0x6f36ed);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f36f1:{NFSU2_TR(0x6f36f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f36f4:{NFSU2_TR(0x6f36f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f36f7:{NFSU2_TR(0x6f36f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f36fa:{NFSU2_TR(0x6f36fa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f36fe:{NFSU2_TR(0x6f36fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f3701:{NFSU2_TR(0x6f3701);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3705:{NFSU2_TR(0x6f3705);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3708:{NFSU2_TR(0x6f3708);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f370c:{NFSU2_TR(0x6f370c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f370f:{NFSU2_TR(0x6f370f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3713:{NFSU2_TR(0x6f3713);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3716:{NFSU2_TR(0x6f3716);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3719:{NFSU2_TR(0x6f3719);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f371c:{NFSU2_TR(0x6f371c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3720:{NFSU2_TR(0x6f3720);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3723:{NFSU2_TR(0x6f3723);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3726:{NFSU2_TR(0x6f3726);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f372a:{NFSU2_TR(0x6f372a);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f372e:{NFSU2_TR(0x6f372e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3732:{NFSU2_TR(0x6f3732);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3736:{NFSU2_TR(0x6f3736);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f373a:{NFSU2_TR(0x6f373a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f373e:{NFSU2_TR(0x6f373e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3742:{NFSU2_TR(0x6f3742);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3746:{NFSU2_TR(0x6f3746);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f374a:{NFSU2_TR(0x6f374a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f374e:{NFSU2_TR(0x6f374e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3752:{NFSU2_TR(0x6f3752);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3756:{NFSU2_TR(0x6f3756);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f375a:{NFSU2_TR(0x6f375a);
__builtin_memmove((R+20),(R+24),4);
}
B6f375c:{NFSU2_TR(0x6f375c);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3762:{NFSU2_TR(0x6f3762);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3764:{NFSU2_TR(0x6f3764);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f376a:{NFSU2_TR(0x6f376a);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f376c:{NFSU2_TR(0x6f376c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3770:{NFSU2_TR(0x6f3770);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3773:{NFSU2_TR(0x6f3773);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3777:{NFSU2_TR(0x6f3777);
__builtin_memmove((R+20),(R+24),4);
}
B6f3779:{NFSU2_TR(0x6f3779);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f377f:{NFSU2_TR(0x6f377f);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3781:{NFSU2_TR(0x6f3781);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3787:{NFSU2_TR(0x6f3787);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3789:{NFSU2_TR(0x6f3789);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f378d:{NFSU2_TR(0x6f378d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3790:{NFSU2_TR(0x6f3790);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3794:{NFSU2_TR(0x6f3794);
__builtin_memmove((R+20),(R+24),4);
}
B6f3796:{NFSU2_TR(0x6f3796);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f379c:{NFSU2_TR(0x6f379c);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f379e:{NFSU2_TR(0x6f379e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f37a4:{NFSU2_TR(0x6f37a4);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f37a6:{NFSU2_TR(0x6f37a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f37aa:{NFSU2_TR(0x6f37aa);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f37ad:{NFSU2_TR(0x6f37ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f37b1:{NFSU2_TR(0x6f37b1);
__builtin_memmove((R+20),(R+24),4);
}
B6f37b3:{NFSU2_TR(0x6f37b3);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f37b9:{NFSU2_TR(0x6f37b9);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f37bb:{NFSU2_TR(0x6f37bb);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f37c1:{NFSU2_TR(0x6f37c1);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f37c3:{NFSU2_TR(0x6f37c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f37c7:{NFSU2_TR(0x6f37c7);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f37ca:{NFSU2_TR(0x6f37ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f37ce:{NFSU2_TR(0x6f37ce);
__builtin_memmove((R+20),(R+24),4);
}
B6f37d0:{NFSU2_TR(0x6f37d0);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f37d6:{NFSU2_TR(0x6f37d6);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f37d8:{NFSU2_TR(0x6f37d8);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f37de:{NFSU2_TR(0x6f37de);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f37e0:{NFSU2_TR(0x6f37e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f37e4:{NFSU2_TR(0x6f37e4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f37e7:{NFSU2_TR(0x6f37e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f37eb:{NFSU2_TR(0x6f37eb);
__builtin_memmove((R+20),(R+24),4);
}
B6f37ed:{NFSU2_TR(0x6f37ed);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f37f3:{NFSU2_TR(0x6f37f3);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f37f5:{NFSU2_TR(0x6f37f5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f37fb:{NFSU2_TR(0x6f37fb);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f37fd:{NFSU2_TR(0x6f37fd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3800:{NFSU2_TR(0x6f3800);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3803:{NFSU2_TR(0x6f3803);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3807:{NFSU2_TR(0x6f3807);
__builtin_memmove((R+20),(R+24),4);
}
B6f3809:{NFSU2_TR(0x6f3809);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f380f:{NFSU2_TR(0x6f380f);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3811:{NFSU2_TR(0x6f3811);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3817:{NFSU2_TR(0x6f3817);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3819:{NFSU2_TR(0x6f3819);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f381c:{NFSU2_TR(0x6f381c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3820:{NFSU2_TR(0x6f3820);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3823:{NFSU2_TR(0x6f3823);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3826:{NFSU2_TR(0x6f3826);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f382a:{NFSU2_TR(0x6f382a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f382e:{NFSU2_TR(0x6f382e);
__builtin_memmove((R+20),(R+24),4);
}
B6f3830:{NFSU2_TR(0x6f3830);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3836:{NFSU2_TR(0x6f3836);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3838:{NFSU2_TR(0x6f3838);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f383e:{NFSU2_TR(0x6f383e);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3840:{NFSU2_TR(0x6f3840);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+24,u32(r1(U+0)));
}
B6f3843:{NFSU2_TR(0x6f3843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f3846:{NFSU2_TR(0x6f3846);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f3849:{NFSU2_TR(0x6f3849);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f384c:{NFSU2_TR(0x6f384c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3850:{NFSU2_TR(0x6f3850);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3854:{NFSU2_TR(0x6f3854);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3857:{NFSU2_TR(0x6f3857);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f385a:{NFSU2_TR(0x6f385a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f385e:{NFSU2_TR(0x6f385e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3861:{NFSU2_TR(0x6f3861);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3864:{NFSU2_TR(0x6f3864);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3867:{NFSU2_TR(0x6f3867);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f386a:{NFSU2_TR(0x6f386a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f386e:{NFSU2_TR(0x6f386e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3872:{NFSU2_TR(0x6f3872);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3876:{NFSU2_TR(0x6f3876);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f387a:{NFSU2_TR(0x6f387a);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f387e:{NFSU2_TR(0x6f387e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3882:{NFSU2_TR(0x6f3882);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3886:{NFSU2_TR(0x6f3886);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f388a:{NFSU2_TR(0x6f388a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f388e:{NFSU2_TR(0x6f388e);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3892:{NFSU2_TR(0x6f3892);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3896:{NFSU2_TR(0x6f3896);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f389a:{NFSU2_TR(0x6f389a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f389e:{NFSU2_TR(0x6f389e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f38a2:{NFSU2_TR(0x6f38a2);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f38a6:{NFSU2_TR(0x6f38a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f38aa:{NFSU2_TR(0x6f38aa);
__builtin_memmove((R+20),(R+24),4);
}
B6f38ac:{NFSU2_TR(0x6f38ac);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f38b2:{NFSU2_TR(0x6f38b2);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f38b4:{NFSU2_TR(0x6f38b4);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f38ba:{NFSU2_TR(0x6f38ba);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f38bc:{NFSU2_TR(0x6f38bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f38c0:{NFSU2_TR(0x6f38c0);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f38c3:{NFSU2_TR(0x6f38c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f38c7:{NFSU2_TR(0x6f38c7);
__builtin_memmove((R+20),(R+24),4);
}
B6f38c9:{NFSU2_TR(0x6f38c9);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f38cf:{NFSU2_TR(0x6f38cf);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f38d1:{NFSU2_TR(0x6f38d1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f38d7:{NFSU2_TR(0x6f38d7);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f38d9:{NFSU2_TR(0x6f38d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f38dd:{NFSU2_TR(0x6f38dd);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f38e0:{NFSU2_TR(0x6f38e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f38e4:{NFSU2_TR(0x6f38e4);
__builtin_memmove((R+20),(R+24),4);
}
B6f38e6:{NFSU2_TR(0x6f38e6);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f38ec:{NFSU2_TR(0x6f38ec);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f38ee:{NFSU2_TR(0x6f38ee);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f38f4:{NFSU2_TR(0x6f38f4);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f38f6:{NFSU2_TR(0x6f38f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f38fa:{NFSU2_TR(0x6f38fa);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f38fd:{NFSU2_TR(0x6f38fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3901:{NFSU2_TR(0x6f3901);
__builtin_memmove((R+20),(R+24),4);
}
B6f3903:{NFSU2_TR(0x6f3903);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3909:{NFSU2_TR(0x6f3909);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f390b:{NFSU2_TR(0x6f390b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3911:{NFSU2_TR(0x6f3911);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3913:{NFSU2_TR(0x6f3913);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3916:{NFSU2_TR(0x6f3916);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3919:{NFSU2_TR(0x6f3919);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f391d:{NFSU2_TR(0x6f391d);
__builtin_memmove((R+20),(R+24),4);
}
B6f391f:{NFSU2_TR(0x6f391f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3925:{NFSU2_TR(0x6f3925);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3927:{NFSU2_TR(0x6f3927);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f392d:{NFSU2_TR(0x6f392d);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f392f:{NFSU2_TR(0x6f392f);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3932:{NFSU2_TR(0x6f3932);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3936:{NFSU2_TR(0x6f3936);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3939:{NFSU2_TR(0x6f3939);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f393c:{NFSU2_TR(0x6f393c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3940:{NFSU2_TR(0x6f3940);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3944:{NFSU2_TR(0x6f3944);
__builtin_memmove((R+20),(R+24),4);
}
B6f3946:{NFSU2_TR(0x6f3946);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f394c:{NFSU2_TR(0x6f394c);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f394e:{NFSU2_TR(0x6f394e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3954:{NFSU2_TR(0x6f3954);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3956:{NFSU2_TR(0x6f3956);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f395a:{NFSU2_TR(0x6f395a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f395d:{NFSU2_TR(0x6f395d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3961:{NFSU2_TR(0x6f3961);
__builtin_memmove((R+20),(R+24),4);
}
B6f3963:{NFSU2_TR(0x6f3963);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3969:{NFSU2_TR(0x6f3969);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f396b:{NFSU2_TR(0x6f396b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f396e:{NFSU2_TR(0x6f396e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3974:{NFSU2_TR(0x6f3974);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3976:{NFSU2_TR(0x6f3976);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f397a:{NFSU2_TR(0x6f397a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f397d:{NFSU2_TR(0x6f397d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3981:{NFSU2_TR(0x6f3981);
__builtin_memmove((R+20),(R+24),4);
}
B6f3983:{NFSU2_TR(0x6f3983);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3989:{NFSU2_TR(0x6f3989);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f398b:{NFSU2_TR(0x6f398b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f398e:{NFSU2_TR(0x6f398e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3994:{NFSU2_TR(0x6f3994);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3996:{NFSU2_TR(0x6f3996);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f399a:{NFSU2_TR(0x6f399a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f399d:{NFSU2_TR(0x6f399d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f39a0:{NFSU2_TR(0x6f39a0);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f39a3:{NFSU2_TR(0x6f39a3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f39a7:{NFSU2_TR(0x6f39a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f39ab:{NFSU2_TR(0x6f39ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f39ae:{NFSU2_TR(0x6f39ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f39b1:{NFSU2_TR(0x6f39b1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f39b5:{NFSU2_TR(0x6f39b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f39b8:{NFSU2_TR(0x6f39b8);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f39bb:{NFSU2_TR(0x6f39bb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f39bf:{NFSU2_TR(0x6f39bf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f39c3:{NFSU2_TR(0x6f39c3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f39c7:{NFSU2_TR(0x6f39c7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f39cb:{NFSU2_TR(0x6f39cb);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f39cf:{NFSU2_TR(0x6f39cf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f39d3:{NFSU2_TR(0x6f39d3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f39d7:{NFSU2_TR(0x6f39d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f39db:{NFSU2_TR(0x6f39db);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f39df:{NFSU2_TR(0x6f39df);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f39e3:{NFSU2_TR(0x6f39e3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f39e7:{NFSU2_TR(0x6f39e7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f39eb:{NFSU2_TR(0x6f39eb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f39ef:{NFSU2_TR(0x6f39ef);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f39f3:{NFSU2_TR(0x6f39f3);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f39f7:{NFSU2_TR(0x6f39f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f39fb:{NFSU2_TR(0x6f39fb);
__builtin_memmove((R+20),(R+24),4);
}
B6f39fd:{NFSU2_TR(0x6f39fd);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3a03:{NFSU2_TR(0x6f3a03);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3a05:{NFSU2_TR(0x6f3a05);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3a0b:{NFSU2_TR(0x6f3a0b);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3a0d:{NFSU2_TR(0x6f3a0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3a11:{NFSU2_TR(0x6f3a11);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3a14:{NFSU2_TR(0x6f3a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3a18:{NFSU2_TR(0x6f3a18);
__builtin_memmove((R+20),(R+24),4);
}
B6f3a1a:{NFSU2_TR(0x6f3a1a);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3a20:{NFSU2_TR(0x6f3a20);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3a22:{NFSU2_TR(0x6f3a22);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3a28:{NFSU2_TR(0x6f3a28);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3a2a:{NFSU2_TR(0x6f3a2a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3a2d:{NFSU2_TR(0x6f3a2d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3a30:{NFSU2_TR(0x6f3a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3a34:{NFSU2_TR(0x6f3a34);
__builtin_memmove((R+20),(R+24),4);
}
B6f3a36:{NFSU2_TR(0x6f3a36);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3a3c:{NFSU2_TR(0x6f3a3c);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3a3e:{NFSU2_TR(0x6f3a3e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3a44:{NFSU2_TR(0x6f3a44);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3a46:{NFSU2_TR(0x6f3a46);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3a49:{NFSU2_TR(0x6f3a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3a4d:{NFSU2_TR(0x6f3a4d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3a50:{NFSU2_TR(0x6f3a50);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3a53:{NFSU2_TR(0x6f3a53);
__builtin_memmove((R+20),(R+24),4);
}
B6f3a55:{NFSU2_TR(0x6f3a55);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3a5b:{NFSU2_TR(0x6f3a5b);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3a5d:{NFSU2_TR(0x6f3a5d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3a63:{NFSU2_TR(0x6f3a63);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3a65:{NFSU2_TR(0x6f3a65);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3a68:{NFSU2_TR(0x6f3a68);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3a6b:{NFSU2_TR(0x6f3a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3a6f:{NFSU2_TR(0x6f3a6f);
__builtin_memmove((R+20),(R+24),4);
}
B6f3a71:{NFSU2_TR(0x6f3a71);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3a77:{NFSU2_TR(0x6f3a77);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3a79:{NFSU2_TR(0x6f3a79);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3a7f:{NFSU2_TR(0x6f3a7f);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3a81:{NFSU2_TR(0x6f3a81);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3a85:{NFSU2_TR(0x6f3a85);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3a88:{NFSU2_TR(0x6f3a88);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3a8c:{NFSU2_TR(0x6f3a8c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3a8f:{NFSU2_TR(0x6f3a8f);
__builtin_memmove((R+20),(R+24),4);
}
B6f3a91:{NFSU2_TR(0x6f3a91);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3a97:{NFSU2_TR(0x6f3a97);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3a9b:{NFSU2_TR(0x6f3a9b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3a9f:{NFSU2_TR(0x6f3a9f);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3aa1:{NFSU2_TR(0x6f3aa1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3aa7:{NFSU2_TR(0x6f3aa7);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3aa9:{NFSU2_TR(0x6f3aa9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3aad:{NFSU2_TR(0x6f3aad);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3ab0:{NFSU2_TR(0x6f3ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3ab4:{NFSU2_TR(0x6f3ab4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3ab7:{NFSU2_TR(0x6f3ab7);
__builtin_memmove((R+20),(R+24),4);
}
B6f3ab9:{NFSU2_TR(0x6f3ab9);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3abf:{NFSU2_TR(0x6f3abf);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3ac1:{NFSU2_TR(0x6f3ac1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3ac7:{NFSU2_TR(0x6f3ac7);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3ac9:{NFSU2_TR(0x6f3ac9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3acd:{NFSU2_TR(0x6f3acd);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3ad0:{NFSU2_TR(0x6f3ad0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3ad3:{NFSU2_TR(0x6f3ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3ad7:{NFSU2_TR(0x6f3ad7);
__builtin_memmove((R+20),(R+24),4);
}
B6f3ad9:{NFSU2_TR(0x6f3ad9);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffff8000ull))));
}
B6f3adf:{NFSU2_TR(0x6f3adf);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3ae5:{NFSU2_TR(0x6f3ae5);
w4(R+20,shl<u32>(r4(R+20),u64(u32(0x1ull))));
}
B6f3ae7:{NFSU2_TR(0x6f3ae7);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+24))));
}
B6f3ae9:{NFSU2_TR(0x6f3ae9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f3aed:{NFSU2_TR(0x6f3aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f3af0:{NFSU2_TR(0x6f3af0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3af4:{NFSU2_TR(0x6f3af4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f3af7:{NFSU2_TR(0x6f3af7);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B6f3afa:{NFSU2_TR(0x6f3afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3afe:{NFSU2_TR(0x6f3afe);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3b02:{NFSU2_TR(0x6f3b02);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f3b06:{NFSU2_TR(0x6f3b06);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6f3b09:{NFSU2_TR(0x6f3b09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3b0c:{NFSU2_TR(0x6f3b0c);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3b0f:{NFSU2_TR(0x6f3b0f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3b12:{NFSU2_TR(0x6f3b12);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3b16:{NFSU2_TR(0x6f3b16);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6f3b19:{NFSU2_TR(0x6f3b19);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3b1d:{NFSU2_TR(0x6f3b1d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3b21:{NFSU2_TR(0x6f3b21);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3b25:{NFSU2_TR(0x6f3b25);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3b29:{NFSU2_TR(0x6f3b29);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3b2d:{NFSU2_TR(0x6f3b2d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3b31:{NFSU2_TR(0x6f3b31);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3b35:{NFSU2_TR(0x6f3b35);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3b39:{NFSU2_TR(0x6f3b39);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3b3d:{NFSU2_TR(0x6f3b3d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3b41:{NFSU2_TR(0x6f3b41);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3b45:{NFSU2_TR(0x6f3b45);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3b49:{NFSU2_TR(0x6f3b49);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3b4d:{NFSU2_TR(0x6f3b4d);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3b51:{NFSU2_TR(0x6f3b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f3b55:{NFSU2_TR(0x6f3b55);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B6f3b57:{NFSU2_TR(0x6f3b57);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3b59:{NFSU2_TR(0x6f3b59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f35edu);}goto L6f35ed;}}
}
B6f3b5f:L6f3b5f:{c.instructions+=1;NFSU2_TR(0x6f3b5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f3b63:L6f3b63:{c.instructions+=2;NFSU2_TR(0x6f3b63);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3b65:{NFSU2_TR(0x6f3b65);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f3d8a;}}
}
B6f3b6b:L6f3b6b:{c.instructions+=1;NFSU2_TR(0x6f3b6b);
{goto L6f3b70;}
}
B6f3b70:L6f3b70:{c.instructions+=99;NFSU2_TR(0x6f3b70);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3b73:{NFSU2_TR(0x6f3b73);
__builtin_memmove((R+28),(R+24),4);
}
B6f3b75:{NFSU2_TR(0x6f3b75);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3b7b:{NFSU2_TR(0x6f3b7b);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3b7d:{NFSU2_TR(0x6f3b7d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3b83:{NFSU2_TR(0x6f3b83);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3b85:{NFSU2_TR(0x6f3b85);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3b89:{NFSU2_TR(0x6f3b89);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3b8c:{NFSU2_TR(0x6f3b8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3b90:{NFSU2_TR(0x6f3b90);
__builtin_memmove((R+28),(R+24),4);
}
B6f3b92:{NFSU2_TR(0x6f3b92);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3b98:{NFSU2_TR(0x6f3b98);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3b9a:{NFSU2_TR(0x6f3b9a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3ba0:{NFSU2_TR(0x6f3ba0);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3ba2:{NFSU2_TR(0x6f3ba2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3ba5:{NFSU2_TR(0x6f3ba5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3ba9:{NFSU2_TR(0x6f3ba9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3bac:{NFSU2_TR(0x6f3bac);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3bb0:{NFSU2_TR(0x6f3bb0);
__builtin_memmove((R+28),(R+24),4);
}
B6f3bb2:{NFSU2_TR(0x6f3bb2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3bb8:{NFSU2_TR(0x6f3bb8);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3bba:{NFSU2_TR(0x6f3bba);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3bc0:{NFSU2_TR(0x6f3bc0);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3bc2:{NFSU2_TR(0x6f3bc2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3bc5:{NFSU2_TR(0x6f3bc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3bc9:{NFSU2_TR(0x6f3bc9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3bcc:{NFSU2_TR(0x6f3bcc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3bd0:{NFSU2_TR(0x6f3bd0);
__builtin_memmove((R+28),(R+24),4);
}
B6f3bd2:{NFSU2_TR(0x6f3bd2);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3bd8:{NFSU2_TR(0x6f3bd8);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3bda:{NFSU2_TR(0x6f3bda);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3bdd:{NFSU2_TR(0x6f3bdd);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3be3:{NFSU2_TR(0x6f3be3);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3be5:{NFSU2_TR(0x6f3be5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3be8:{NFSU2_TR(0x6f3be8);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3beb:{NFSU2_TR(0x6f3beb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3bef:{NFSU2_TR(0x6f3bef);
__builtin_memmove((R+28),(R+24),4);
}
B6f3bf1:{NFSU2_TR(0x6f3bf1);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3bf7:{NFSU2_TR(0x6f3bf7);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3bf9:{NFSU2_TR(0x6f3bf9);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3bff:{NFSU2_TR(0x6f3bff);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3c01:{NFSU2_TR(0x6f3c01);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3c05:{NFSU2_TR(0x6f3c05);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3c08:{NFSU2_TR(0x6f3c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3c0c:{NFSU2_TR(0x6f3c0c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3c0f:{NFSU2_TR(0x6f3c0f);
__builtin_memmove((R+28),(R+24),4);
}
B6f3c11:{NFSU2_TR(0x6f3c11);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3c17:{NFSU2_TR(0x6f3c17);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3c1b:{NFSU2_TR(0x6f3c1b);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3c1d:{NFSU2_TR(0x6f3c1d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3c21:{NFSU2_TR(0x6f3c21);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3c27:{NFSU2_TR(0x6f3c27);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3c29:{NFSU2_TR(0x6f3c29);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3c2d:{NFSU2_TR(0x6f3c2d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3c30:{NFSU2_TR(0x6f3c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3c34:{NFSU2_TR(0x6f3c34);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3c37:{NFSU2_TR(0x6f3c37);
__builtin_memmove((R+28),(R+24),4);
}
B6f3c39:{NFSU2_TR(0x6f3c39);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3c3f:{NFSU2_TR(0x6f3c3f);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3c41:{NFSU2_TR(0x6f3c41);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3c47:{NFSU2_TR(0x6f3c47);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3c49:{NFSU2_TR(0x6f3c49);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3c4d:{NFSU2_TR(0x6f3c4d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3c50:{NFSU2_TR(0x6f3c50);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3c53:{NFSU2_TR(0x6f3c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3c57:{NFSU2_TR(0x6f3c57);
__builtin_memmove((R+28),(R+24),4);
}
B6f3c59:{NFSU2_TR(0x6f3c59);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3c5f:{NFSU2_TR(0x6f3c5f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3c65:{NFSU2_TR(0x6f3c65);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3c67:{NFSU2_TR(0x6f3c67);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3c69:{NFSU2_TR(0x6f3c69);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6f3c6d:{NFSU2_TR(0x6f3c6d);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B6f3c71:{NFSU2_TR(0x6f3c71);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3c74:{NFSU2_TR(0x6f3c74);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3c78:{NFSU2_TR(0x6f3c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6f3c7b:{NFSU2_TR(0x6f3c7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3c7e:{NFSU2_TR(0x6f3c7e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3c81:{NFSU2_TR(0x6f3c81);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3c85:{NFSU2_TR(0x6f3c85);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3c89:{NFSU2_TR(0x6f3c89);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6f3c8c:{NFSU2_TR(0x6f3c8c);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3c8f:{NFSU2_TR(0x6f3c8f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f3c90:{NFSU2_TR(0x6f3c90);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3c92:{NFSU2_TR(0x6f3c92);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3c96:{NFSU2_TR(0x6f3c96);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3c9a:{NFSU2_TR(0x6f3c9a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3c9e:{NFSU2_TR(0x6f3c9e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3ca2:{NFSU2_TR(0x6f3ca2);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3ca6:{NFSU2_TR(0x6f3ca6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3caa:{NFSU2_TR(0x6f3caa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3cae:{NFSU2_TR(0x6f3cae);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3cb2:{NFSU2_TR(0x6f3cb2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3cb6:{NFSU2_TR(0x6f3cb6);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3cba:{NFSU2_TR(0x6f3cba);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6f3cbe:{NFSU2_TR(0x6f3cbe);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6f3cc2:{NFSU2_TR(0x6f3cc2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6f3cc6:{NFSU2_TR(0x6f3cc6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6f3cca:{NFSU2_TR(0x6f3cca);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6f3cce:{NFSU2_TR(0x6f3cce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3b70u);}goto L6f3b70;}}
}
B6f3cd4:L6f3cd4:{c.instructions+=1;NFSU2_TR(0x6f3cd4);
{goto L6f3d86;}
}
B6f3cd9:L6f3cd9:{c.instructions+=3;NFSU2_TR(0x6f3cd9);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6f3cdb:{NFSU2_TR(0x6f3cdb);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6f3cdf:{NFSU2_TR(0x6f3cdf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f355bu);}goto L6f355b;}
}
B6f3ce4:L6f3ce4:{c.instructions+=3;NFSU2_TR(0x6f3ce4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6f3ce6:{NFSU2_TR(0x6f3ce6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3ce8:{NFSU2_TR(0x6f3ce8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3d8e;}}
}
B6f3cee:L6f3cee:{c.instructions+=1;NFSU2_TR(0x6f3cee);
__builtin_memmove((R+28),(R+28),4);
}
B6f3cf0:L6f3cf0:{c.instructions+=45;NFSU2_TR(0x6f3cf0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(r2(U+0)));
}
B6f3cf3:{NFSU2_TR(0x6f3cf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3cf7:{NFSU2_TR(0x6f3cf7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B6f3cfb:{NFSU2_TR(0x6f3cfb);
__builtin_memmove((R+28),(R+12),4);
}
B6f3cfd:{NFSU2_TR(0x6f3cfd);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3d03:{NFSU2_TR(0x6f3d03);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3d05:{NFSU2_TR(0x6f3d05);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B6f3d0b:{NFSU2_TR(0x6f3d0b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B6f3d0d:{NFSU2_TR(0x6f3d0d);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3d10:{NFSU2_TR(0x6f3d10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3d13:{NFSU2_TR(0x6f3d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6f3d16:{NFSU2_TR(0x6f3d16);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6f3d19:{NFSU2_TR(0x6f3d19);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f3d1c:{NFSU2_TR(0x6f3d1c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+12,u32(r2(U+0)));
}
B6f3d1f:{NFSU2_TR(0x6f3d1f);
__builtin_memmove((R+28),(R+12),4);
}
B6f3d21:{NFSU2_TR(0x6f3d21);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3d27:{NFSU2_TR(0x6f3d27);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3d29:{NFSU2_TR(0x6f3d29);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B6f3d2f:{NFSU2_TR(0x6f3d2f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B6f3d31:{NFSU2_TR(0x6f3d31);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3d34:{NFSU2_TR(0x6f3d34);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3d38:{NFSU2_TR(0x6f3d38);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f3d3c:{NFSU2_TR(0x6f3d3c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3d3f:{NFSU2_TR(0x6f3d3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3d40:{NFSU2_TR(0x6f3d40);
__builtin_memmove((R+28),(R+12),4);
}
B6f3d42:{NFSU2_TR(0x6f3d42);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3d48:{NFSU2_TR(0x6f3d48);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3d4a:{NFSU2_TR(0x6f3d4a);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B6f3d50:{NFSU2_TR(0x6f3d50);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B6f3d52:{NFSU2_TR(0x6f3d52);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3d55:{NFSU2_TR(0x6f3d55);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3d59:{NFSU2_TR(0x6f3d59);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6f3d5d:{NFSU2_TR(0x6f3d5d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3d5e:{NFSU2_TR(0x6f3d5e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3d61:{NFSU2_TR(0x6f3d61);
__builtin_memmove((R+28),(R+12),4);
}
B6f3d63:{NFSU2_TR(0x6f3d63);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3d69:{NFSU2_TR(0x6f3d69);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3d6b:{NFSU2_TR(0x6f3d6b);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B6f3d71:{NFSU2_TR(0x6f3d71);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B6f3d73:{NFSU2_TR(0x6f3d73);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3d76:{NFSU2_TR(0x6f3d76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6f3d79:{NFSU2_TR(0x6f3d79);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6f3d7a:{NFSU2_TR(0x6f3d7a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3d7c:{NFSU2_TR(0x6f3d7c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3d80:{NFSU2_TR(0x6f3d80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3cf0u);}goto L6f3cf0;}}
}
B6f3d86:L6f3d86:{c.instructions+=1;NFSU2_TR(0x6f3d86);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f3d8a:L6f3d8a:{c.instructions+=1;NFSU2_TR(0x6f3d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f3d8e:L6f3d8e:{c.instructions+=4;NFSU2_TR(0x6f3d8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6f3d92:{NFSU2_TR(0x6f3d92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3d94:{NFSU2_TR(0x6f3d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3d98:{NFSU2_TR(0x6f3d98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3e5e;}}
}
B6f3d9e:L6f3d9e:{c.instructions+=9;NFSU2_TR(0x6f3d9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6f3da2:{NFSU2_TR(0x6f3da2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6f3da6:{NFSU2_TR(0x6f3da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f3da9:{NFSU2_TR(0x6f3da9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6f3dac:{NFSU2_TR(0x6f3dac);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6f3db0:{NFSU2_TR(0x6f3db0);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B6f3db2:{NFSU2_TR(0x6f3db2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6f3db4:{NFSU2_TR(0x6f3db4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3db6:{NFSU2_TR(0x6f3db6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3e5a;}}
}
B6f3dbc:L6f3dbc:{c.instructions+=1;NFSU2_TR(0x6f3dbc);
__builtin_memmove((R+16),(R+16),4);
}
B6f3dc0:L6f3dc0:{c.instructions+=45;NFSU2_TR(0x6f3dc0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3dc3:{NFSU2_TR(0x6f3dc3);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6f3dc7:{NFSU2_TR(0x6f3dc7);
__builtin_memmove((R+28),(R+24),4);
}
B6f3dc9:{NFSU2_TR(0x6f3dc9);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3dcf:{NFSU2_TR(0x6f3dcf);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3dd1:{NFSU2_TR(0x6f3dd1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3dd7:{NFSU2_TR(0x6f3dd7);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3dd9:{NFSU2_TR(0x6f3dd9);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3ddc:{NFSU2_TR(0x6f3ddc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3ddf:{NFSU2_TR(0x6f3ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f3de2:{NFSU2_TR(0x6f3de2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6f3de5:{NFSU2_TR(0x6f3de5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6f3de8:{NFSU2_TR(0x6f3de8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+24,u32(r2(U+0)));
}
B6f3deb:{NFSU2_TR(0x6f3deb);
__builtin_memmove((R+28),(R+24),4);
}
B6f3ded:{NFSU2_TR(0x6f3ded);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3df3:{NFSU2_TR(0x6f3df3);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3df5:{NFSU2_TR(0x6f3df5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3dfb:{NFSU2_TR(0x6f3dfb);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3dfd:{NFSU2_TR(0x6f3dfd);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3e00:{NFSU2_TR(0x6f3e00);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3e04:{NFSU2_TR(0x6f3e04);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3e08:{NFSU2_TR(0x6f3e08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f3e09:{NFSU2_TR(0x6f3e09);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3e0c:{NFSU2_TR(0x6f3e0c);
__builtin_memmove((R+28),(R+24),4);
}
B6f3e0e:{NFSU2_TR(0x6f3e0e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3e14:{NFSU2_TR(0x6f3e14);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3e16:{NFSU2_TR(0x6f3e16);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3e1c:{NFSU2_TR(0x6f3e1c);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3e1e:{NFSU2_TR(0x6f3e1e);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3e21:{NFSU2_TR(0x6f3e21);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3e25:{NFSU2_TR(0x6f3e25);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6f3e29:{NFSU2_TR(0x6f3e29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6f3e2a:{NFSU2_TR(0x6f3e2a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3e2d:{NFSU2_TR(0x6f3e2d);
__builtin_memmove((R+28),(R+24),4);
}
B6f3e2f:{NFSU2_TR(0x6f3e2f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffff8000ull))));
}
B6f3e35:{NFSU2_TR(0x6f3e35);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B6f3e37:{NFSU2_TR(0x6f3e37);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7fffull))));
}
B6f3e3d:{NFSU2_TR(0x6f3e3d);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B6f3e3f:{NFSU2_TR(0x6f3e3f);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6f3e42:{NFSU2_TR(0x6f3e42);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6f3e45:{NFSU2_TR(0x6f3e45);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6f3e49:{NFSU2_TR(0x6f3e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3e4d:{NFSU2_TR(0x6f3e4d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6f3e4e:{NFSU2_TR(0x6f3e4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3e50:{NFSU2_TR(0x6f3e50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3dc0u);}goto L6f3dc0;}}
}
B6f3e56:L6f3e56:{c.instructions+=1;NFSU2_TR(0x6f3e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6f3e5a:L6f3e5a:{c.instructions+=1;NFSU2_TR(0x6f3e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f3e5e:L6f3e5e:{c.instructions+=4;NFSU2_TR(0x6f3e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f3e61:{NFSU2_TR(0x6f3e61);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3e63:{NFSU2_TR(0x6f3e63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f3e64:{NFSU2_TR(0x6f3e64);
if(r1(R+518)){{goto L6f3e87;}}
}
B6f3e66:L6f3e66:{c.instructions+=13;NFSU2_TR(0x6f3e66);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3e6a:{NFSU2_TR(0x6f3e6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3e6e:{NFSU2_TR(0x6f3e6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3e72:{NFSU2_TR(0x6f3e72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e73:{NFSU2_TR(0x6f3e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3e77:{NFSU2_TR(0x6f3e77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e78:{NFSU2_TR(0x6f3e78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e79:{NFSU2_TR(0x6f3e79);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3e7d:{NFSU2_TR(0x6f3e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e7e:{NFSU2_TR(0x6f3e7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e7f:{NFSU2_TR(0x6f3e7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e80:{NFSU2_TR(0x6f3e80);
__builtin_memmove((R+4),(R+12),4);
}
B6f3e82:{NFSU2_TR(0x6f3e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f3e87ull));
TAIL_STATIC(0x6f18e0u,6f1);
}
B6f3e87:L6f3e87:{c.instructions+=6;NFSU2_TR(0x6f3e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f3e88:{NFSU2_TR(0x6f3e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f3e89:{NFSU2_TR(0x6f3e89);
w1(R+0,u8(0x1ull));
}
B6f3e8b:{NFSU2_TR(0x6f3e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3e8c:{NFSU2_TR(0x6f3e8c);
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
B6f3e8f:{NFSU2_TR(0x6f3e8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f3e92:L6f3e92:{c.instructions+=12;NFSU2_TR(0x6f3e92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3e96:{NFSU2_TR(0x6f3e96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3e9a:{NFSU2_TR(0x6f3e9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3e9b:{NFSU2_TR(0x6f3e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3e9f:{NFSU2_TR(0x6f3e9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ea0:{NFSU2_TR(0x6f3ea0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ea1:{NFSU2_TR(0x6f3ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3ea5:{NFSU2_TR(0x6f3ea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ea6:{NFSU2_TR(0x6f3ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3eaa:{NFSU2_TR(0x6f3eaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3eab:{NFSU2_TR(0x6f3eab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3eac:{NFSU2_TR(0x6f3eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f3eb1ull));
TAIL_STATIC(0x6f28c0u,6f2);
}
B6f3eb1:L6f3eb1:{c.instructions+=1;NFSU2_TR(0x6f3eb1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3e5eu);}goto L6f3e5e;}
}
B6f3ec0:L6f3ec0:{c.instructions+=13;NFSU2_TR(0x6f3ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6f3ec3:{NFSU2_TR(0x6f3ec3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ec4:{NFSU2_TR(0x6f3ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f3ec8:{NFSU2_TR(0x6f3ec8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ec9:{NFSU2_TR(0x6f3ec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f3ecd:{NFSU2_TR(0x6f3ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3ed3:{NFSU2_TR(0x6f3ed3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ed4:{NFSU2_TR(0x6f3ed4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6f3ed6:{NFSU2_TR(0x6f3ed6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ed7:{NFSU2_TR(0x6f3ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3edd:{NFSU2_TR(0x6f3edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6f3edf:{NFSU2_TR(0x6f3edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ee0:{NFSU2_TR(0x6f3ee0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f3ee3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f3ee3:L6f3ee3:{c.instructions+=5;NFSU2_TR(0x6f3ee3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f3ee5:{NFSU2_TR(0x6f3ee5);
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
B6f3ee7:{NFSU2_TR(0x6f3ee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3eeb:{NFSU2_TR(0x6f3eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3eef:{NFSU2_TR(0x6f3eef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3fcc;}}
}
B6f3ef5:L6f3ef5:{c.instructions+=3;NFSU2_TR(0x6f3ef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3ef6:{NFSU2_TR(0x6f3ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x304ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f3efc:{NFSU2_TR(0x6f3efc);
{goto L6f3f06;}
}
B6f3efe:L6f3efe:{c.instructions+=2;NFSU2_TR(0x6f3efe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f3f02:{NFSU2_TR(0x6f3f02);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f3f06:L6f3f06:{c.instructions+=8;NFSU2_TR(0x6f3f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6f3f08:{NFSU2_TR(0x6f3f08);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6f3f0c:{NFSU2_TR(0x6f3f0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3f0d:{NFSU2_TR(0x6f3f0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3f0e:{NFSU2_TR(0x6f3f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3f14:{NFSU2_TR(0x6f3f14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3f15:{NFSU2_TR(0x6f3f15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3f16:{NFSU2_TR(0x6f3f16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6f3f19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6f3f19:L6f3f19:{c.instructions+=2;NFSU2_TR(0x6f3f19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3f1f:{NFSU2_TR(0x6f3f1f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6f3f79;}}
}
B6f3f21:L6f3f21:{c.instructions+=6;NFSU2_TR(0x6f3f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6f3f25:{NFSU2_TR(0x6f3f25);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6f3f29:{NFSU2_TR(0x6f3f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f3f2d:{NFSU2_TR(0x6f3f2d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6f3f2f:{NFSU2_TR(0x6f3f2f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6f3f31:{NFSU2_TR(0x6f3f31);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3f5c;}}
}
B6f3f33:L6f3f33:{c.instructions+=3;NFSU2_TR(0x6f3f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3f37:{NFSU2_TR(0x6f3f37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x304ull))));
}
B6f3f3c:{NFSU2_TR(0x6f3f3c);
__builtin_memmove((R+16),(R+16),4);
}
B6f3f40:L6f3f40:{c.instructions+=2;NFSU2_TR(0x6f3f40);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f3f44:{NFSU2_TR(0x6f3f44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f3f54;}}
}
B6f3f46:L6f3f46:{c.instructions+=2;NFSU2_TR(0x6f3f46);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6f3f48:{NFSU2_TR(0x6f3f48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f3f54;}}
}
B6f3f4a:L6f3f4a:{c.instructions+=2;NFSU2_TR(0x6f3f4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f3f4d:{NFSU2_TR(0x6f3f4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6f3f54;}}
}
B6f3f4f:L6f3f4f:{c.instructions+=2;NFSU2_TR(0x6f3f4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f3f52:{NFSU2_TR(0x6f3f52);
if(r1(R+518)){{goto L6f3fa0;}}
}
B6f3f54:L6f3f54:{c.instructions+=4;NFSU2_TR(0x6f3f54);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3f55:{NFSU2_TR(0x6f3f55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B6f3f58:{NFSU2_TR(0x6f3f58);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6f3f5a:{NFSU2_TR(0x6f3f5a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3f40u);}goto L6f3f40;}}
}
B6f3f5c:L6f3f5c:{c.instructions+=9;NFSU2_TR(0x6f3f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3f60:{NFSU2_TR(0x6f3f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f67:{NFSU2_TR(0x6f3f67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6f3f69:{NFSU2_TR(0x6f3f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f6c:{NFSU2_TR(0x6f3f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f6f:{NFSU2_TR(0x6f3f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f72:{NFSU2_TR(0x6f3f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f75:{NFSU2_TR(0x6f3f75);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6f3f76:{NFSU2_TR(0x6f3f76);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B6f3f79:L6f3f79:{c.instructions+=6;NFSU2_TR(0x6f3f79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3f7d:{NFSU2_TR(0x6f3f7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3f81:{NFSU2_TR(0x6f3f81);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6f3f82:{NFSU2_TR(0x6f3f82);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6f3f84:{NFSU2_TR(0x6f3f84);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f88:{NFSU2_TR(0x6f3f88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3efeu);}goto L6f3efe;}}
}
B6f3f8e:L6f3f8e:{c.instructions+=8;NFSU2_TR(0x6f3f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3f92:{NFSU2_TR(0x6f3f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6f3f93:{NFSU2_TR(0x6f3f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3f99:{NFSU2_TR(0x6f3f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f3f9a:{NFSU2_TR(0x6f3f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f3f9b:{NFSU2_TR(0x6f3f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3f9c:{NFSU2_TR(0x6f3f9c);
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
B6f3f9f:{NFSU2_TR(0x6f3f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f3fa0:L6f3fa0:{c.instructions+=6;NFSU2_TR(0x6f3fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3fa4:{NFSU2_TR(0x6f3fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6f3fa7:{NFSU2_TR(0x6f3fa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6f3fab:{NFSU2_TR(0x6f3fab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6f3fae:{NFSU2_TR(0x6f3fae);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6f3fb4:{NFSU2_TR(0x6f3fb4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6f3fbc;}}
}
B6f3fb6:L6f3fb6:{c.instructions+=1;NFSU2_TR(0x6f3fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3fbc:L6f3fbc:{c.instructions+=2;NFSU2_TR(0x6f3fbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x310ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6f3fc2:{NFSU2_TR(0x6f3fc2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3f79u);}goto L6f3f79;}}
}
B6f3fc4:L6f3fc4:{c.instructions+=2;NFSU2_TR(0x6f3fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3fca:{NFSU2_TR(0x6f3fca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6f3f79u);}goto L6f3f79;}
}
B6f3fcc:L6f3fcc:{c.instructions+=6;NFSU2_TR(0x6f3fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6f3fd2:{NFSU2_TR(0x6f3fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6f3fd3:{NFSU2_TR(0x6f3fd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6f3fd4:{NFSU2_TR(0x6f3fd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3fd5:{NFSU2_TR(0x6f3fd5);
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
B6f3fd8:{NFSU2_TR(0x6f3fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6f3fe0:L6f3fe0:{c.instructions+=11;NFSU2_TR(0x6f3fe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3fe1:{NFSU2_TR(0x6f3fe1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3fe2:{NFSU2_TR(0x6f3fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6f3fe6:{NFSU2_TR(0x6f3fe6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3fe7:{NFSU2_TR(0x6f3fe7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6f3fe8:{NFSU2_TR(0x6f3fe8);
w4(R+28,u32(0x813a08ull));
}
B6f3fed:{NFSU2_TR(0x6f3fed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1b00ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6f3ff3:{NFSU2_TR(0x6f3ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6f3ff7:{NFSU2_TR(0x6f3ff7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6f3ffd:{NFSU2_TR(0x6f3ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6f3fff:{NFSU2_TR(0x6f3fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x6f4005u,6f4);
}
XIT:NFSU2_TR_EXIT(0x6f3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
