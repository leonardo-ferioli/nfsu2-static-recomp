#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e3(u8* __restrict R,Cpu& c);
u32 page_5e3(Cpu& c){return body_5e3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e3000:goto L5e3000;
case 0x5e3004:c.instructions+=1;goto B5e3004;
case 0x5e3006:goto L5e3006;
case 0x5e3008:goto L5e3008;
case 0x5e300e:c.instructions+=1;goto B5e300e;
case 0x5e3013:goto L5e3013;
case 0x5e3018:c.instructions+=3;goto B5e3018;
case 0x5e301a:c.instructions+=2;goto B5e301a;
case 0x5e301c:c.instructions+=1;goto B5e301c;
case 0x5e301e:goto L5e301e;
case 0x5e3020:goto L5e3020;
case 0x5e3024:c.instructions+=4;goto B5e3024;
case 0x5e3028:c.instructions+=3;goto B5e3028;
case 0x5e3029:c.instructions+=2;goto B5e3029;
case 0x5e302b:c.instructions+=1;goto B5e302b;
case 0x5e3031:goto L5e3031;
case 0x5e3035:c.instructions+=6;goto B5e3035;
case 0x5e3036:c.instructions+=5;goto B5e3036;
case 0x5e3037:c.instructions+=4;goto B5e3037;
case 0x5e3038:c.instructions+=3;goto B5e3038;
case 0x5e303a:c.instructions+=2;goto B5e303a;
case 0x5e303b:c.instructions+=1;goto B5e303b;
case 0x5e3040:goto L5e3040;
case 0x5e3043:c.instructions+=10;goto B5e3043;
case 0x5e3044:c.instructions+=9;goto B5e3044;
case 0x5e3045:c.instructions+=8;goto B5e3045;
case 0x5e3046:c.instructions+=7;goto B5e3046;
case 0x5e304a:c.instructions+=6;goto B5e304a;
case 0x5e304b:c.instructions+=5;goto B5e304b;
case 0x5e304d:c.instructions+=4;goto B5e304d;
case 0x5e304e:c.instructions+=3;goto B5e304e;
case 0x5e3052:c.instructions+=2;goto B5e3052;
case 0x5e3056:c.instructions+=1;goto B5e3056;
case 0x5e305b:goto L5e305b;
case 0x5e305f:c.instructions+=4;goto B5e305f;
case 0x5e3061:c.instructions+=3;goto B5e3061;
case 0x5e3067:c.instructions+=2;goto B5e3067;
case 0x5e306b:c.instructions+=1;goto B5e306b;
case 0x5e306d:goto L5e306d;
case 0x5e3070:c.instructions+=3;goto B5e3070;
case 0x5e3075:c.instructions+=2;goto B5e3075;
case 0x5e307c:c.instructions+=1;goto B5e307c;
case 0x5e307e:goto L5e307e;
case 0x5e3080:goto L5e3080;
case 0x5e3084:c.instructions+=3;goto B5e3084;
case 0x5e3085:c.instructions+=2;goto B5e3085;
case 0x5e3086:c.instructions+=1;goto B5e3086;
case 0x5e308b:goto L5e308b;
case 0x5e308d:c.instructions+=2;goto B5e308d;
case 0x5e308f:c.instructions+=1;goto B5e308f;
case 0x5e3095:goto L5e3095;
case 0x5e3099:goto L5e3099;
case 0x5e309c:c.instructions+=13;goto B5e309c;
case 0x5e30a2:c.instructions+=12;goto B5e30a2;
case 0x5e30a6:c.instructions+=11;goto B5e30a6;
case 0x5e30a8:c.instructions+=10;goto B5e30a8;
case 0x5e30aa:c.instructions+=9;goto B5e30aa;
case 0x5e30ae:c.instructions+=8;goto B5e30ae;
case 0x5e30b0:c.instructions+=7;goto B5e30b0;
case 0x5e30b2:c.instructions+=6;goto B5e30b2;
case 0x5e30b4:c.instructions+=5;goto B5e30b4;
case 0x5e30b6:c.instructions+=4;goto B5e30b6;
case 0x5e30ba:c.instructions+=3;goto B5e30ba;
case 0x5e30bc:c.instructions+=2;goto B5e30bc;
case 0x5e30bf:c.instructions+=1;goto B5e30bf;
case 0x5e30c1:goto L5e30c1;
case 0x5e30c3:c.instructions+=5;goto B5e30c3;
case 0x5e30c4:c.instructions+=4;goto B5e30c4;
case 0x5e30c8:c.instructions+=3;goto B5e30c8;
case 0x5e30c9:c.instructions+=2;goto B5e30c9;
case 0x5e30ce:c.instructions+=1;goto B5e30ce;
case 0x5e30d3:goto L5e30d3;
case 0x5e30d9:goto L5e30d9;
case 0x5e30db:c.instructions+=4;goto B5e30db;
case 0x5e30df:c.instructions+=3;goto B5e30df;
case 0x5e30e5:c.instructions+=2;goto B5e30e5;
case 0x5e30e9:c.instructions+=1;goto B5e30e9;
case 0x5e30eb:goto L5e30eb;
case 0x5e30f1:c.instructions+=3;goto B5e30f1;
case 0x5e30f3:c.instructions+=2;goto B5e30f3;
case 0x5e30f6:c.instructions+=1;goto B5e30f6;
case 0x5e30f8:goto L5e30f8;
case 0x5e30fe:c.instructions+=1;goto B5e30fe;
case 0x5e3100:goto L5e3100;
case 0x5e3106:c.instructions+=3;goto B5e3106;
case 0x5e3108:c.instructions+=2;goto B5e3108;
case 0x5e310b:c.instructions+=1;goto B5e310b;
case 0x5e310d:goto L5e310d;
case 0x5e3113:goto L5e3113;
case 0x5e3115:c.instructions+=3;goto B5e3115;
case 0x5e3119:c.instructions+=2;goto B5e3119;
case 0x5e311d:c.instructions+=1;goto B5e311d;
case 0x5e311f:goto L5e311f;
case 0x5e3125:c.instructions+=3;goto B5e3125;
case 0x5e3127:c.instructions+=2;goto B5e3127;
case 0x5e312a:c.instructions+=1;goto B5e312a;
case 0x5e312c:goto L5e312c;
case 0x5e3132:c.instructions+=1;goto B5e3132;
case 0x5e3134:goto L5e3134;
case 0x5e313a:c.instructions+=3;goto B5e313a;
case 0x5e313c:c.instructions+=2;goto B5e313c;
case 0x5e313f:c.instructions+=1;goto B5e313f;
case 0x5e3141:goto L5e3141;
case 0x5e3147:goto L5e3147;
case 0x5e314b:c.instructions+=7;goto B5e314b;
case 0x5e314d:c.instructions+=6;goto B5e314d;
case 0x5e3153:c.instructions+=5;goto B5e3153;
case 0x5e3155:c.instructions+=4;goto B5e3155;
case 0x5e3157:c.instructions+=3;goto B5e3157;
case 0x5e3159:c.instructions+=2;goto B5e3159;
case 0x5e315c:c.instructions+=1;goto B5e315c;
case 0x5e315e:goto L5e315e;
case 0x5e3161:c.instructions+=1;goto B5e3161;
case 0x5e3167:goto L5e3167;
case 0x5e3169:c.instructions+=3;goto B5e3169;
case 0x5e316d:c.instructions+=2;goto B5e316d;
case 0x5e3173:c.instructions+=1;goto B5e3173;
case 0x5e3175:goto L5e3175;
case 0x5e317b:c.instructions+=3;goto B5e317b;
case 0x5e317d:c.instructions+=2;goto B5e317d;
case 0x5e3180:c.instructions+=1;goto B5e3180;
case 0x5e3182:goto L5e3182;
case 0x5e3188:c.instructions+=1;goto B5e3188;
case 0x5e318a:goto L5e318a;
case 0x5e3190:c.instructions+=3;goto B5e3190;
case 0x5e3192:c.instructions+=2;goto B5e3192;
case 0x5e3195:c.instructions+=1;goto B5e3195;
case 0x5e3197:goto L5e3197;
case 0x5e319d:goto L5e319d;
case 0x5e319f:c.instructions+=3;goto B5e319f;
case 0x5e31a3:c.instructions+=2;goto B5e31a3;
case 0x5e31a9:c.instructions+=1;goto B5e31a9;
case 0x5e31ab:goto L5e31ab;
case 0x5e31b1:c.instructions+=3;goto B5e31b1;
case 0x5e31b3:c.instructions+=2;goto B5e31b3;
case 0x5e31b6:c.instructions+=1;goto B5e31b6;
case 0x5e31b8:goto L5e31b8;
case 0x5e31be:c.instructions+=1;goto B5e31be;
case 0x5e31c0:goto L5e31c0;
case 0x5e31c6:c.instructions+=3;goto B5e31c6;
case 0x5e31c8:c.instructions+=2;goto B5e31c8;
case 0x5e31cb:c.instructions+=1;goto B5e31cb;
case 0x5e31cd:goto L5e31cd;
case 0x5e31d3:goto L5e31d3;
case 0x5e31d5:c.instructions+=4;goto B5e31d5;
case 0x5e31db:c.instructions+=3;goto B5e31db;
case 0x5e31dd:c.instructions+=2;goto B5e31dd;
case 0x5e31e0:c.instructions+=1;goto B5e31e0;
case 0x5e31e2:goto L5e31e2;
case 0x5e31e5:c.instructions+=1;goto B5e31e5;
case 0x5e31eb:goto L5e31eb;
case 0x5e31ef:c.instructions+=5;goto B5e31ef;
case 0x5e31f5:c.instructions+=4;goto B5e31f5;
case 0x5e31f8:c.instructions+=3;goto B5e31f8;
case 0x5e31fc:c.instructions+=2;goto B5e31fc;
case 0x5e3200:c.instructions+=1;goto B5e3200;
case 0x5e3202:goto L5e3202;
case 0x5e3208:c.instructions+=3;goto B5e3208;
case 0x5e320a:c.instructions+=2;goto B5e320a;
case 0x5e320d:c.instructions+=1;goto B5e320d;
case 0x5e320f:goto L5e320f;
case 0x5e3211:c.instructions+=1;goto B5e3211;
case 0x5e3217:goto L5e3217;
case 0x5e321b:c.instructions+=16;goto B5e321b;
case 0x5e321f:c.instructions+=15;goto B5e321f;
case 0x5e3223:c.instructions+=14;goto B5e3223;
case 0x5e3227:c.instructions+=13;goto B5e3227;
case 0x5e3229:c.instructions+=12;goto B5e3229;
case 0x5e322b:c.instructions+=11;goto B5e322b;
case 0x5e322d:c.instructions+=10;goto B5e322d;
case 0x5e322f:c.instructions+=9;goto B5e322f;
case 0x5e3231:c.instructions+=8;goto B5e3231;
case 0x5e3233:c.instructions+=7;goto B5e3233;
case 0x5e3235:c.instructions+=6;goto B5e3235;
case 0x5e3237:c.instructions+=5;goto B5e3237;
case 0x5e3239:c.instructions+=4;goto B5e3239;
case 0x5e323b:c.instructions+=3;goto B5e323b;
case 0x5e323d:c.instructions+=2;goto B5e323d;
case 0x5e3240:c.instructions+=1;goto B5e3240;
case 0x5e3246:goto L5e3246;
case 0x5e324c:c.instructions+=9;goto B5e324c;
case 0x5e3252:c.instructions+=8;goto B5e3252;
case 0x5e3258:c.instructions+=7;goto B5e3258;
case 0x5e325c:c.instructions+=6;goto B5e325c;
case 0x5e325e:c.instructions+=5;goto B5e325e;
case 0x5e3262:c.instructions+=4;goto B5e3262;
case 0x5e3264:c.instructions+=3;goto B5e3264;
case 0x5e3266:c.instructions+=2;goto B5e3266;
case 0x5e3269:c.instructions+=1;goto B5e3269;
case 0x5e326b:goto L5e326b;
case 0x5e326d:c.instructions+=1;goto B5e326d;
case 0x5e3271:goto L5e3271;
case 0x5e3277:c.instructions+=4;goto B5e3277;
case 0x5e3279:c.instructions+=3;goto B5e3279;
case 0x5e327b:c.instructions+=2;goto B5e327b;
case 0x5e327e:c.instructions+=1;goto B5e327e;
case 0x5e3280:goto L5e3280;
case 0x5e3282:c.instructions+=1;goto B5e3282;
case 0x5e3288:goto L5e3288;
case 0x5e328c:c.instructions+=5;goto B5e328c;
case 0x5e328e:c.instructions+=4;goto B5e328e;
case 0x5e3290:c.instructions+=3;goto B5e3290;
case 0x5e3292:c.instructions+=2;goto B5e3292;
case 0x5e3295:c.instructions+=1;goto B5e3295;
case 0x5e3297:goto L5e3297;
case 0x5e3299:c.instructions+=1;goto B5e3299;
case 0x5e329b:goto L5e329b;
case 0x5e329e:c.instructions+=3;goto B5e329e;
case 0x5e32a1:c.instructions+=2;goto B5e32a1;
case 0x5e32a3:c.instructions+=1;goto B5e32a3;
case 0x5e32a5:goto L5e32a5;
case 0x5e32a8:c.instructions+=1;goto B5e32a8;
case 0x5e32aa:goto L5e32aa;
case 0x5e32ad:c.instructions+=1;goto B5e32ad;
case 0x5e32b3:goto L5e32b3;
case 0x5e32b9:c.instructions+=3;goto B5e32b9;
case 0x5e32bb:c.instructions+=2;goto B5e32bb;
case 0x5e32be:c.instructions+=1;goto B5e32be;
case 0x5e32c0:goto L5e32c0;
case 0x5e32c2:c.instructions+=1;goto B5e32c2;
case 0x5e32c4:goto L5e32c4;
case 0x5e32ca:goto L5e32ca;
case 0x5e32ce:c.instructions+=4;goto B5e32ce;
case 0x5e32d0:c.instructions+=3;goto B5e32d0;
case 0x5e32d2:c.instructions+=2;goto B5e32d2;
case 0x5e32d5:c.instructions+=1;goto B5e32d5;
case 0x5e32d7:goto L5e32d7;
case 0x5e32d9:c.instructions+=1;goto B5e32d9;
case 0x5e32dd:goto L5e32dd;
case 0x5e32df:c.instructions+=5;goto B5e32df;
case 0x5e32e1:c.instructions+=4;goto B5e32e1;
case 0x5e32e3:c.instructions+=3;goto B5e32e3;
case 0x5e32e5:c.instructions+=2;goto B5e32e5;
case 0x5e32e8:c.instructions+=1;goto B5e32e8;
case 0x5e32ea:goto L5e32ea;
case 0x5e32ec:c.instructions+=1;goto B5e32ec;
case 0x5e32ee:goto L5e32ee;
case 0x5e32f1:c.instructions+=3;goto B5e32f1;
case 0x5e32f4:c.instructions+=2;goto B5e32f4;
case 0x5e32f7:c.instructions+=1;goto B5e32f7;
case 0x5e32f9:goto L5e32f9;
case 0x5e32fc:c.instructions+=1;goto B5e32fc;
case 0x5e32fe:goto L5e32fe;
case 0x5e3301:goto L5e3301;
case 0x5e3303:c.instructions+=1;goto B5e3303;
case 0x5e3305:goto L5e3305;
case 0x5e3309:c.instructions+=3;goto B5e3309;
case 0x5e330b:c.instructions+=2;goto B5e330b;
case 0x5e3310:c.instructions+=1;goto B5e3310;
case 0x5e3312:goto L5e3312;
case 0x5e3318:c.instructions+=1;goto B5e3318;
case 0x5e331a:goto L5e331a;
case 0x5e331f:goto L5e331f;
case 0x5e3323:c.instructions+=2;goto B5e3323;
case 0x5e3328:c.instructions+=1;goto B5e3328;
case 0x5e332a:goto L5e332a;
case 0x5e3330:c.instructions+=1;goto B5e3330;
case 0x5e3332:goto L5e3332;
case 0x5e3333:goto L5e3333;
case 0x5e3335:c.instructions+=1;goto B5e3335;
case 0x5e333b:goto L5e333b;
case 0x5e333c:c.instructions+=2;goto B5e333c;
case 0x5e333e:c.instructions+=1;goto B5e333e;
case 0x5e3343:goto L5e3343;
case 0x5e3347:c.instructions+=2;goto B5e3347;
case 0x5e334a:c.instructions+=1;goto B5e334a;
case 0x5e334c:goto L5e334c;
case 0x5e334d:c.instructions+=1;goto B5e334d;
case 0x5e334f:goto L5e334f;
case 0x5e3350:c.instructions+=1;goto B5e3350;
case 0x5e3352:goto L5e3352;
case 0x5e3355:c.instructions+=2;goto B5e3355;
case 0x5e3358:c.instructions+=1;goto B5e3358;
case 0x5e335b:goto L5e335b;
case 0x5e335e:c.instructions+=2;goto B5e335e;
case 0x5e3360:c.instructions+=1;goto B5e3360;
case 0x5e3362:goto L5e3362;
case 0x5e3365:c.instructions+=6;goto B5e3365;
case 0x5e3369:c.instructions+=5;goto B5e3369;
case 0x5e336b:c.instructions+=4;goto B5e336b;
case 0x5e336e:c.instructions+=3;goto B5e336e;
case 0x5e3371:c.instructions+=2;goto B5e3371;
case 0x5e3373:c.instructions+=1;goto B5e3373;
case 0x5e3375:goto L5e3375;
case 0x5e3378:c.instructions+=2;goto B5e3378;
case 0x5e337b:c.instructions+=1;goto B5e337b;
case 0x5e337d:goto L5e337d;
case 0x5e3381:c.instructions+=1;goto B5e3381;
case 0x5e3383:goto L5e3383;
case 0x5e3386:c.instructions+=4;goto B5e3386;
case 0x5e3389:c.instructions+=3;goto B5e3389;
case 0x5e338c:c.instructions+=2;goto B5e338c;
case 0x5e338f:c.instructions+=1;goto B5e338f;
case 0x5e3391:goto L5e3391;
case 0x5e3394:c.instructions+=3;goto B5e3394;
case 0x5e3397:c.instructions+=2;goto B5e3397;
case 0x5e339a:c.instructions+=1;goto B5e339a;
case 0x5e339c:goto L5e339c;
case 0x5e339f:c.instructions+=1;goto B5e339f;
case 0x5e33a1:goto L5e33a1;
case 0x5e33a5:c.instructions+=2;goto B5e33a5;
case 0x5e33a6:c.instructions+=1;goto B5e33a6;
case 0x5e33ab:goto L5e33ab;
case 0x5e33af:goto L5e33af;
case 0x5e33b2:c.instructions+=2;goto B5e33b2;
case 0x5e33b4:c.instructions+=1;goto B5e33b4;
case 0x5e33b6:goto L5e33b6;
case 0x5e33bd:c.instructions+=1;goto B5e33bd;
case 0x5e33bf:goto L5e33bf;
case 0x5e33c1:goto L5e33c1;
case 0x5e33c5:c.instructions+=1;goto B5e33c5;
case 0x5e33c7:goto L5e33c7;
case 0x5e33c9:goto L5e33c9;
case 0x5e33cd:c.instructions+=2;goto B5e33cd;
case 0x5e33ce:c.instructions+=1;goto B5e33ce;
case 0x5e33d3:goto L5e33d3;
case 0x5e33d5:c.instructions+=1;goto B5e33d5;
case 0x5e33db:goto L5e33db;
case 0x5e33de:c.instructions+=8;goto B5e33de;
case 0x5e33e3:c.instructions+=7;goto B5e33e3;
case 0x5e33ea:c.instructions+=6;goto B5e33ea;
case 0x5e33ee:c.instructions+=5;goto B5e33ee;
case 0x5e33f0:c.instructions+=4;goto B5e33f0;
case 0x5e33f6:c.instructions+=3;goto B5e33f6;
case 0x5e33f8:c.instructions+=2;goto B5e33f8;
case 0x5e33fd:c.instructions+=1;goto B5e33fd;
case 0x5e33ff:goto L5e33ff;
case 0x5e3401:c.instructions+=9;goto B5e3401;
case 0x5e3403:c.instructions+=8;goto B5e3403;
case 0x5e3406:c.instructions+=7;goto B5e3406;
case 0x5e3408:c.instructions+=6;goto B5e3408;
case 0x5e340b:c.instructions+=5;goto B5e340b;
case 0x5e340d:c.instructions+=4;goto B5e340d;
case 0x5e3411:c.instructions+=3;goto B5e3411;
case 0x5e3414:c.instructions+=2;goto B5e3414;
case 0x5e3416:c.instructions+=1;goto B5e3416;
case 0x5e3418:goto L5e3418;
case 0x5e341b:c.instructions+=2;goto B5e341b;
case 0x5e3422:c.instructions+=1;goto B5e3422;
case 0x5e3424:goto L5e3424;
case 0x5e3426:c.instructions+=6;goto B5e3426;
case 0x5e3428:c.instructions+=5;goto B5e3428;
case 0x5e342b:c.instructions+=4;goto B5e342b;
case 0x5e342d:c.instructions+=3;goto B5e342d;
case 0x5e3430:c.instructions+=2;goto B5e3430;
case 0x5e3432:c.instructions+=1;goto B5e3432;
case 0x5e3434:goto L5e3434;
case 0x5e3437:c.instructions+=1;goto B5e3437;
case 0x5e343b:goto L5e343b;
case 0x5e343d:c.instructions+=1;goto B5e343d;
case 0x5e343f:goto L5e343f;
case 0x5e3443:c.instructions+=1;goto B5e3443;
case 0x5e3448:goto L5e3448;
case 0x5e344a:goto L5e344a;
case 0x5e344e:c.instructions+=1;goto B5e344e;
case 0x5e3453:goto L5e3453;
case 0x5e3454:c.instructions+=6;goto B5e3454;
case 0x5e3455:c.instructions+=5;goto B5e3455;
case 0x5e3456:c.instructions+=4;goto B5e3456;
case 0x5e3458:c.instructions+=3;goto B5e3458;
case 0x5e3459:c.instructions+=2;goto B5e3459;
case 0x5e345c:c.instructions+=1;goto B5e345c;
case 0x5e345f:goto L5e345f;
case 0x5e3463:c.instructions+=1;goto B5e3463;
case 0x5e3468:goto L5e3468;
case 0x5e3469:c.instructions+=6;goto B5e3469;
case 0x5e346a:c.instructions+=5;goto B5e346a;
case 0x5e346c:c.instructions+=4;goto B5e346c;
case 0x5e346d:c.instructions+=3;goto B5e346d;
case 0x5e346e:c.instructions+=2;goto B5e346e;
case 0x5e3471:c.instructions+=1;goto B5e3471;
case 0x5e3480:goto L5e3480;
case 0x5e3481:c.instructions+=10;goto B5e3481;
case 0x5e3482:c.instructions+=9;goto B5e3482;
case 0x5e3484:c.instructions+=8;goto B5e3484;
case 0x5e3487:c.instructions+=7;goto B5e3487;
case 0x5e3489:c.instructions+=6;goto B5e3489;
case 0x5e348b:c.instructions+=5;goto B5e348b;
case 0x5e348c:c.instructions+=4;goto B5e348c;
case 0x5e3490:c.instructions+=3;goto B5e3490;
case 0x5e3491:c.instructions+=2;goto B5e3491;
case 0x5e3492:c.instructions+=1;goto B5e3492;
case 0x5e3497:goto L5e3497;
case 0x5e349b:c.instructions+=5;goto B5e349b;
case 0x5e349d:c.instructions+=4;goto B5e349d;
case 0x5e34a1:c.instructions+=3;goto B5e34a1;
case 0x5e34a3:c.instructions+=2;goto B5e34a3;
case 0x5e34a6:c.instructions+=1;goto B5e34a6;
case 0x5e34a8:goto L5e34a8;
case 0x5e34ae:c.instructions+=4;goto B5e34ae;
case 0x5e34af:c.instructions+=3;goto B5e34af;
case 0x5e34b0:c.instructions+=2;goto B5e34b0;
case 0x5e34b1:c.instructions+=1;goto B5e34b1;
case 0x5e34b4:goto L5e34b4;
case 0x5e34b7:c.instructions+=5;goto B5e34b7;
case 0x5e34b9:c.instructions+=4;goto B5e34b9;
case 0x5e34bb:c.instructions+=3;goto B5e34bb;
case 0x5e34bc:c.instructions+=2;goto B5e34bc;
case 0x5e34bd:c.instructions+=1;goto B5e34bd;
case 0x5e34c2:goto L5e34c2;
case 0x5e34c6:c.instructions+=12;goto B5e34c6;
case 0x5e34ca:c.instructions+=11;goto B5e34ca;
case 0x5e34cd:c.instructions+=10;goto B5e34cd;
case 0x5e34d1:c.instructions+=9;goto B5e34d1;
case 0x5e34d3:c.instructions+=8;goto B5e34d3;
case 0x5e34d7:c.instructions+=7;goto B5e34d7;
case 0x5e34d8:c.instructions+=6;goto B5e34d8;
case 0x5e34dc:c.instructions+=5;goto B5e34dc;
case 0x5e34de:c.instructions+=4;goto B5e34de;
case 0x5e34e0:c.instructions+=3;goto B5e34e0;
case 0x5e34e2:c.instructions+=2;goto B5e34e2;
case 0x5e34e6:c.instructions+=1;goto B5e34e6;
case 0x5e34eb:goto L5e34eb;
case 0x5e34ef:c.instructions+=16;goto B5e34ef;
case 0x5e34f3:c.instructions+=15;goto B5e34f3;
case 0x5e34f5:c.instructions+=14;goto B5e34f5;
case 0x5e34f9:c.instructions+=13;goto B5e34f9;
case 0x5e34fd:c.instructions+=12;goto B5e34fd;
case 0x5e3501:c.instructions+=11;goto B5e3501;
case 0x5e3503:c.instructions+=10;goto B5e3503;
case 0x5e3507:c.instructions+=9;goto B5e3507;
case 0x5e3509:c.instructions+=8;goto B5e3509;
case 0x5e350b:c.instructions+=7;goto B5e350b;
case 0x5e350d:c.instructions+=6;goto B5e350d;
case 0x5e350f:c.instructions+=5;goto B5e350f;
case 0x5e3511:c.instructions+=4;goto B5e3511;
case 0x5e3513:c.instructions+=3;goto B5e3513;
case 0x5e3515:c.instructions+=2;goto B5e3515;
case 0x5e3518:c.instructions+=1;goto B5e3518;
case 0x5e351a:goto L5e351a;
case 0x5e351c:c.instructions+=1;goto B5e351c;
case 0x5e3520:goto L5e3520;
case 0x5e3521:c.instructions+=3;goto B5e3521;
case 0x5e3522:c.instructions+=2;goto B5e3522;
case 0x5e3523:c.instructions+=1;goto B5e3523;
case 0x5e3530:goto L5e3530;
case 0x5e3533:c.instructions+=10;goto B5e3533;
case 0x5e3534:c.instructions+=9;goto B5e3534;
case 0x5e3536:c.instructions+=8;goto B5e3536;
case 0x5e3539:c.instructions+=7;goto B5e3539;
case 0x5e353b:c.instructions+=6;goto B5e353b;
case 0x5e353d:c.instructions+=5;goto B5e353d;
case 0x5e353e:c.instructions+=4;goto B5e353e;
case 0x5e3542:c.instructions+=3;goto B5e3542;
case 0x5e3543:c.instructions+=2;goto B5e3543;
case 0x5e3544:c.instructions+=1;goto B5e3544;
case 0x5e3549:goto L5e3549;
case 0x5e354c:c.instructions+=6;goto B5e354c;
case 0x5e354e:c.instructions+=5;goto B5e354e;
case 0x5e3550:c.instructions+=4;goto B5e3550;
case 0x5e3551:c.instructions+=3;goto B5e3551;
case 0x5e3555:c.instructions+=2;goto B5e3555;
case 0x5e3556:c.instructions+=1;goto B5e3556;
case 0x5e355b:goto L5e355b;
case 0x5e355e:c.instructions+=7;goto B5e355e;
case 0x5e3560:c.instructions+=6;goto B5e3560;
case 0x5e3564:c.instructions+=5;goto B5e3564;
case 0x5e3565:c.instructions+=4;goto B5e3565;
case 0x5e3567:c.instructions+=3;goto B5e3567;
case 0x5e356b:c.instructions+=2;goto B5e356b;
case 0x5e356c:c.instructions+=1;goto B5e356c;
case 0x5e3571:goto L5e3571;
case 0x5e3574:c.instructions+=6;goto B5e3574;
case 0x5e3576:c.instructions+=5;goto B5e3576;
case 0x5e3578:c.instructions+=4;goto B5e3578;
case 0x5e3579:c.instructions+=3;goto B5e3579;
case 0x5e357d:c.instructions+=2;goto B5e357d;
case 0x5e357e:c.instructions+=1;goto B5e357e;
case 0x5e3583:goto L5e3583;
case 0x5e3587:c.instructions+=11;goto B5e3587;
case 0x5e358b:c.instructions+=10;goto B5e358b;
case 0x5e358c:c.instructions+=9;goto B5e358c;
case 0x5e3590:c.instructions+=8;goto B5e3590;
case 0x5e3592:c.instructions+=7;goto B5e3592;
case 0x5e3593:c.instructions+=6;goto B5e3593;
case 0x5e3595:c.instructions+=5;goto B5e3595;
case 0x5e3597:c.instructions+=4;goto B5e3597;
case 0x5e359d:c.instructions+=3;goto B5e359d;
case 0x5e359f:c.instructions+=2;goto B5e359f;
case 0x5e35a2:c.instructions+=1;goto B5e35a2;
case 0x5e35a4:goto L5e35a4;
case 0x5e35a6:c.instructions+=5;goto B5e35a6;
case 0x5e35a8:c.instructions+=4;goto B5e35a8;
case 0x5e35ac:c.instructions+=3;goto B5e35ac;
case 0x5e35b2:c.instructions+=2;goto B5e35b2;
case 0x5e35b5:c.instructions+=1;goto B5e35b5;
case 0x5e35b8:goto L5e35b8;
case 0x5e35ba:c.instructions+=5;goto B5e35ba;
case 0x5e35be:c.instructions+=4;goto B5e35be;
case 0x5e35c0:c.instructions+=3;goto B5e35c0;
case 0x5e35c2:c.instructions+=2;goto B5e35c2;
case 0x5e35c5:c.instructions+=1;goto B5e35c5;
case 0x5e35d0:goto L5e35d0;
case 0x5e35d3:c.instructions+=13;goto B5e35d3;
case 0x5e35d9:c.instructions+=12;goto B5e35d9;
case 0x5e35dd:c.instructions+=11;goto B5e35dd;
case 0x5e35df:c.instructions+=10;goto B5e35df;
case 0x5e35e5:c.instructions+=9;goto B5e35e5;
case 0x5e35e6:c.instructions+=8;goto B5e35e6;
case 0x5e35ea:c.instructions+=7;goto B5e35ea;
case 0x5e35eb:c.instructions+=6;goto B5e35eb;
case 0x5e35ef:c.instructions+=5;goto B5e35ef;
case 0x5e35f3:c.instructions+=4;goto B5e35f3;
case 0x5e35f4:c.instructions+=3;goto B5e35f4;
case 0x5e35f5:c.instructions+=2;goto B5e35f5;
case 0x5e35f7:c.instructions+=1;goto B5e35f7;
case 0x5e35f9:goto L5e35f9;
case 0x5e35fc:c.instructions+=2;goto B5e35fc;
case 0x5e35fe:c.instructions+=1;goto B5e35fe;
case 0x5e3600:goto L5e3600;
case 0x5e3606:c.instructions+=3;goto B5e3606;
case 0x5e360a:c.instructions+=2;goto B5e360a;
case 0x5e360e:c.instructions+=1;goto B5e360e;
case 0x5e3610:goto L5e3610;
case 0x5e3613:c.instructions+=11;goto B5e3613;
case 0x5e3617:c.instructions+=10;goto B5e3617;
case 0x5e361a:c.instructions+=9;goto B5e361a;
case 0x5e361b:c.instructions+=8;goto B5e361b;
case 0x5e361c:c.instructions+=7;goto B5e361c;
case 0x5e361d:c.instructions+=6;goto B5e361d;
case 0x5e3621:c.instructions+=5;goto B5e3621;
case 0x5e3624:c.instructions+=4;goto B5e3624;
case 0x5e3626:c.instructions+=3;goto B5e3626;
case 0x5e3629:c.instructions+=2;goto B5e3629;
case 0x5e362d:c.instructions+=1;goto B5e362d;
case 0x5e3632:goto L5e3632;
case 0x5e3636:c.instructions+=15;goto B5e3636;
case 0x5e363a:c.instructions+=14;goto B5e363a;
case 0x5e363e:c.instructions+=13;goto B5e363e;
case 0x5e3640:c.instructions+=12;goto B5e3640;
case 0x5e3644:c.instructions+=11;goto B5e3644;
case 0x5e3648:c.instructions+=10;goto B5e3648;
case 0x5e364a:c.instructions+=9;goto B5e364a;
case 0x5e364e:c.instructions+=8;goto B5e364e;
case 0x5e3654:c.instructions+=7;goto B5e3654;
case 0x5e3656:c.instructions+=6;goto B5e3656;
case 0x5e3659:c.instructions+=5;goto B5e3659;
case 0x5e365c:c.instructions+=4;goto B5e365c;
case 0x5e365f:c.instructions+=3;goto B5e365f;
case 0x5e3665:c.instructions+=2;goto B5e3665;
case 0x5e3668:c.instructions+=1;goto B5e3668;
case 0x5e366a:goto L5e366a;
case 0x5e366d:c.instructions+=2;goto B5e366d;
case 0x5e366f:c.instructions+=1;goto B5e366f;
case 0x5e3671:goto L5e3671;
case 0x5e3675:c.instructions+=2;goto B5e3675;
case 0x5e3677:c.instructions+=1;goto B5e3677;
case 0x5e3679:goto L5e3679;
case 0x5e367c:c.instructions+=2;goto B5e367c;
case 0x5e367e:c.instructions+=1;goto B5e367e;
case 0x5e3680:goto L5e3680;
case 0x5e3686:c.instructions+=3;goto B5e3686;
case 0x5e368a:c.instructions+=2;goto B5e368a;
case 0x5e368e:c.instructions+=1;goto B5e368e;
case 0x5e3690:goto L5e3690;
case 0x5e3693:c.instructions+=11;goto B5e3693;
case 0x5e3697:c.instructions+=10;goto B5e3697;
case 0x5e369a:c.instructions+=9;goto B5e369a;
case 0x5e369b:c.instructions+=8;goto B5e369b;
case 0x5e369c:c.instructions+=7;goto B5e369c;
case 0x5e369d:c.instructions+=6;goto B5e369d;
case 0x5e36a1:c.instructions+=5;goto B5e36a1;
case 0x5e36a4:c.instructions+=4;goto B5e36a4;
case 0x5e36a6:c.instructions+=3;goto B5e36a6;
case 0x5e36a9:c.instructions+=2;goto B5e36a9;
case 0x5e36ad:c.instructions+=1;goto B5e36ad;
case 0x5e36b2:goto L5e36b2;
case 0x5e36b6:c.instructions+=15;goto B5e36b6;
case 0x5e36ba:c.instructions+=14;goto B5e36ba;
case 0x5e36be:c.instructions+=13;goto B5e36be;
case 0x5e36c0:c.instructions+=12;goto B5e36c0;
case 0x5e36c4:c.instructions+=11;goto B5e36c4;
case 0x5e36c8:c.instructions+=10;goto B5e36c8;
case 0x5e36ca:c.instructions+=9;goto B5e36ca;
case 0x5e36ce:c.instructions+=8;goto B5e36ce;
case 0x5e36d4:c.instructions+=7;goto B5e36d4;
case 0x5e36d6:c.instructions+=6;goto B5e36d6;
case 0x5e36d9:c.instructions+=5;goto B5e36d9;
case 0x5e36dc:c.instructions+=4;goto B5e36dc;
case 0x5e36df:c.instructions+=3;goto B5e36df;
case 0x5e36e5:c.instructions+=2;goto B5e36e5;
case 0x5e36e8:c.instructions+=1;goto B5e36e8;
case 0x5e36ea:goto L5e36ea;
case 0x5e36ed:c.instructions+=2;goto B5e36ed;
case 0x5e36ef:c.instructions+=1;goto B5e36ef;
case 0x5e36f1:goto L5e36f1;
case 0x5e36f2:c.instructions+=5;goto B5e36f2;
case 0x5e36f3:c.instructions+=4;goto B5e36f3;
case 0x5e36f4:c.instructions+=3;goto B5e36f4;
case 0x5e36f5:c.instructions+=2;goto B5e36f5;
case 0x5e36f8:c.instructions+=1;goto B5e36f8;
case 0x5e3700:goto L5e3700;
case 0x5e3701:c.instructions+=13;goto B5e3701;
case 0x5e3705:c.instructions+=12;goto B5e3705;
case 0x5e3706:c.instructions+=11;goto B5e3706;
case 0x5e370a:c.instructions+=10;goto B5e370a;
case 0x5e370b:c.instructions+=9;goto B5e370b;
case 0x5e370f:c.instructions+=8;goto B5e370f;
case 0x5e3710:c.instructions+=7;goto B5e3710;
case 0x5e3711:c.instructions+=6;goto B5e3711;
case 0x5e3712:c.instructions+=5;goto B5e3712;
case 0x5e3713:c.instructions+=4;goto B5e3713;
case 0x5e3714:c.instructions+=3;goto B5e3714;
case 0x5e3716:c.instructions+=2;goto B5e3716;
case 0x5e371e:c.instructions+=1;goto B5e371e;
case 0x5e3723:goto L5e3723;
case 0x5e3729:c.instructions+=5;goto B5e3729;
case 0x5e372c:c.instructions+=4;goto B5e372c;
case 0x5e3730:c.instructions+=3;goto B5e3730;
case 0x5e3732:c.instructions+=2;goto B5e3732;
case 0x5e3735:c.instructions+=1;goto B5e3735;
case 0x5e3737:goto L5e3737;
case 0x5e3739:c.instructions+=5;goto B5e3739;
case 0x5e373f:c.instructions+=4;goto B5e373f;
case 0x5e3741:c.instructions+=3;goto B5e3741;
case 0x5e3743:c.instructions+=2;goto B5e3743;
case 0x5e3746:c.instructions+=1;goto B5e3746;
case 0x5e3748:goto L5e3748;
case 0x5e374a:c.instructions+=1;goto B5e374a;
case 0x5e3750:goto L5e3750;
case 0x5e3752:c.instructions+=5;goto B5e3752;
case 0x5e3754:c.instructions+=4;goto B5e3754;
case 0x5e3756:c.instructions+=3;goto B5e3756;
case 0x5e3758:c.instructions+=2;goto B5e3758;
case 0x5e375b:c.instructions+=1;goto B5e375b;
case 0x5e375d:goto L5e375d;
case 0x5e3761:c.instructions+=6;goto B5e3761;
case 0x5e3764:c.instructions+=5;goto B5e3764;
case 0x5e3766:c.instructions+=4;goto B5e3766;
case 0x5e3767:c.instructions+=3;goto B5e3767;
case 0x5e3769:c.instructions+=2;goto B5e3769;
case 0x5e376a:c.instructions+=1;goto B5e376a;
case 0x5e376f:goto L5e376f;
case 0x5e3770:c.instructions+=3;goto B5e3770;
case 0x5e3773:c.instructions+=2;goto B5e3773;
case 0x5e3775:c.instructions+=1;goto B5e3775;
case 0x5e377a:goto L5e377a;
case 0x5e377e:c.instructions+=6;goto B5e377e;
case 0x5e3780:c.instructions+=5;goto B5e3780;
case 0x5e3786:c.instructions+=4;goto B5e3786;
case 0x5e3788:c.instructions+=3;goto B5e3788;
case 0x5e378a:c.instructions+=2;goto B5e378a;
case 0x5e378d:c.instructions+=1;goto B5e378d;
case 0x5e378f:goto L5e378f;
case 0x5e3793:c.instructions+=1;goto B5e3793;
case 0x5e3795:goto L5e3795;
case 0x5e379b:c.instructions+=1;goto B5e379b;
case 0x5e379d:goto L5e379d;
case 0x5e379f:goto L5e379f;
case 0x5e37a3:c.instructions+=2;goto B5e37a3;
case 0x5e37a5:c.instructions+=1;goto B5e37a5;
case 0x5e37a7:goto L5e37a7;
case 0x5e37ab:c.instructions+=4;goto B5e37ab;
case 0x5e37b1:c.instructions+=3;goto B5e37b1;
case 0x5e37b3:c.instructions+=2;goto B5e37b3;
case 0x5e37b6:c.instructions+=1;goto B5e37b6;
case 0x5e37b8:goto L5e37b8;
case 0x5e37bd:c.instructions+=1;goto B5e37bd;
case 0x5e37bf:goto L5e37bf;
case 0x5e37c1:goto L5e37c1;
case 0x5e37c3:goto L5e37c3;
case 0x5e37c6:c.instructions+=2;goto B5e37c6;
case 0x5e37c8:c.instructions+=1;goto B5e37c8;
case 0x5e37ce:goto L5e37ce;
case 0x5e37d0:goto L5e37d0;
case 0x5e37d4:c.instructions+=6;goto B5e37d4;
case 0x5e37d7:c.instructions+=5;goto B5e37d7;
case 0x5e37d8:c.instructions+=4;goto B5e37d8;
case 0x5e37d9:c.instructions+=3;goto B5e37d9;
case 0x5e37da:c.instructions+=2;goto B5e37da;
case 0x5e37dc:c.instructions+=1;goto B5e37dc;
case 0x5e37e1:goto L5e37e1;
case 0x5e37e7:c.instructions+=5;goto B5e37e7;
case 0x5e37ea:c.instructions+=4;goto B5e37ea;
case 0x5e37ee:c.instructions+=3;goto B5e37ee;
case 0x5e37f0:c.instructions+=2;goto B5e37f0;
case 0x5e37f3:c.instructions+=1;goto B5e37f3;
case 0x5e37f9:goto L5e37f9;
case 0x5e37fb:c.instructions+=5;goto B5e37fb;
case 0x5e3801:c.instructions+=4;goto B5e3801;
case 0x5e3803:c.instructions+=3;goto B5e3803;
case 0x5e3805:c.instructions+=2;goto B5e3805;
case 0x5e3808:c.instructions+=1;goto B5e3808;
case 0x5e380a:goto L5e380a;
case 0x5e380c:c.instructions+=1;goto B5e380c;
case 0x5e3812:goto L5e3812;
case 0x5e3814:c.instructions+=5;goto B5e3814;
case 0x5e3816:c.instructions+=4;goto B5e3816;
case 0x5e3818:c.instructions+=3;goto B5e3818;
case 0x5e381a:c.instructions+=2;goto B5e381a;
case 0x5e381d:c.instructions+=1;goto B5e381d;
case 0x5e3823:goto L5e3823;
case 0x5e3825:c.instructions+=17;goto B5e3825;
case 0x5e3827:c.instructions+=16;goto B5e3827;
case 0x5e382b:c.instructions+=15;goto B5e382b;
case 0x5e382e:c.instructions+=14;goto B5e382e;
case 0x5e3832:c.instructions+=13;goto B5e3832;
case 0x5e3836:c.instructions+=12;goto B5e3836;
case 0x5e383a:c.instructions+=11;goto B5e383a;
case 0x5e383d:c.instructions+=10;goto B5e383d;
case 0x5e3840:c.instructions+=9;goto B5e3840;
case 0x5e3844:c.instructions+=8;goto B5e3844;
case 0x5e384a:c.instructions+=7;goto B5e384a;
case 0x5e384e:c.instructions+=6;goto B5e384e;
case 0x5e3854:c.instructions+=5;goto B5e3854;
case 0x5e3858:c.instructions+=4;goto B5e3858;
case 0x5e385a:c.instructions+=3;goto B5e385a;
case 0x5e385c:c.instructions+=2;goto B5e385c;
case 0x5e385f:c.instructions+=1;goto B5e385f;
case 0x5e3861:goto L5e3861;
case 0x5e3863:c.instructions+=1;goto B5e3863;
case 0x5e3867:goto L5e3867;
case 0x5e386c:c.instructions+=12;goto B5e386c;
case 0x5e3870:c.instructions+=11;goto B5e3870;
case 0x5e3873:c.instructions+=10;goto B5e3873;
case 0x5e3877:c.instructions+=9;goto B5e3877;
case 0x5e3878:c.instructions+=8;goto B5e3878;
case 0x5e3879:c.instructions+=7;goto B5e3879;
case 0x5e387d:c.instructions+=6;goto B5e387d;
case 0x5e387f:c.instructions+=5;goto B5e387f;
case 0x5e3885:c.instructions+=4;goto B5e3885;
case 0x5e3887:c.instructions+=3;goto B5e3887;
case 0x5e388a:c.instructions+=2;goto B5e388a;
case 0x5e388c:c.instructions+=1;goto B5e388c;
case 0x5e3891:goto L5e3891;
case 0x5e3895:c.instructions+=6;goto B5e3895;
case 0x5e3897:c.instructions+=5;goto B5e3897;
case 0x5e389b:c.instructions+=4;goto B5e389b;
case 0x5e389d:c.instructions+=3;goto B5e389d;
case 0x5e389f:c.instructions+=2;goto B5e389f;
case 0x5e38a2:c.instructions+=1;goto B5e38a2;
case 0x5e38a4:goto L5e38a4;
case 0x5e38a8:c.instructions+=1;goto B5e38a8;
case 0x5e38aa:goto L5e38aa;
case 0x5e38b0:c.instructions+=1;goto B5e38b0;
case 0x5e38b5:goto L5e38b5;
case 0x5e38b7:goto L5e38b7;
case 0x5e38ba:c.instructions+=1;goto B5e38ba;
case 0x5e38c0:goto L5e38c0;
case 0x5e38c3:c.instructions+=2;goto B5e38c3;
case 0x5e38c5:c.instructions+=1;goto B5e38c5;
case 0x5e38cb:goto L5e38cb;
case 0x5e38d0:goto L5e38d0;
case 0x5e38d3:c.instructions+=6;goto B5e38d3;
case 0x5e38d7:c.instructions+=5;goto B5e38d7;
case 0x5e38d8:c.instructions+=4;goto B5e38d8;
case 0x5e38d9:c.instructions+=3;goto B5e38d9;
case 0x5e38da:c.instructions+=2;goto B5e38da;
case 0x5e38dc:c.instructions+=1;goto B5e38dc;
case 0x5e38e1:goto L5e38e1;
case 0x5e38e7:c.instructions+=5;goto B5e38e7;
case 0x5e38ea:c.instructions+=4;goto B5e38ea;
case 0x5e38ee:c.instructions+=3;goto B5e38ee;
case 0x5e38f0:c.instructions+=2;goto B5e38f0;
case 0x5e38f3:c.instructions+=1;goto B5e38f3;
case 0x5e38f9:goto L5e38f9;
case 0x5e38fb:c.instructions+=5;goto B5e38fb;
case 0x5e3901:c.instructions+=4;goto B5e3901;
case 0x5e3903:c.instructions+=3;goto B5e3903;
case 0x5e3905:c.instructions+=2;goto B5e3905;
case 0x5e3908:c.instructions+=1;goto B5e3908;
case 0x5e390a:goto L5e390a;
case 0x5e390c:c.instructions+=1;goto B5e390c;
case 0x5e3912:goto L5e3912;
case 0x5e3914:c.instructions+=5;goto B5e3914;
case 0x5e3916:c.instructions+=4;goto B5e3916;
case 0x5e3918:c.instructions+=3;goto B5e3918;
case 0x5e391a:c.instructions+=2;goto B5e391a;
case 0x5e391d:c.instructions+=1;goto B5e391d;
case 0x5e3923:goto L5e3923;
case 0x5e3925:c.instructions+=17;goto B5e3925;
case 0x5e3927:c.instructions+=16;goto B5e3927;
case 0x5e392b:c.instructions+=15;goto B5e392b;
case 0x5e392e:c.instructions+=14;goto B5e392e;
case 0x5e3932:c.instructions+=13;goto B5e3932;
case 0x5e3936:c.instructions+=12;goto B5e3936;
case 0x5e393a:c.instructions+=11;goto B5e393a;
case 0x5e393d:c.instructions+=10;goto B5e393d;
case 0x5e3940:c.instructions+=9;goto B5e3940;
case 0x5e3944:c.instructions+=8;goto B5e3944;
case 0x5e394a:c.instructions+=7;goto B5e394a;
case 0x5e394e:c.instructions+=6;goto B5e394e;
case 0x5e3954:c.instructions+=5;goto B5e3954;
case 0x5e3958:c.instructions+=4;goto B5e3958;
case 0x5e395a:c.instructions+=3;goto B5e395a;
case 0x5e395c:c.instructions+=2;goto B5e395c;
case 0x5e395f:c.instructions+=1;goto B5e395f;
case 0x5e3961:goto L5e3961;
case 0x5e3963:c.instructions+=1;goto B5e3963;
case 0x5e3967:goto L5e3967;
case 0x5e396c:c.instructions+=12;goto B5e396c;
case 0x5e3970:c.instructions+=11;goto B5e3970;
case 0x5e3973:c.instructions+=10;goto B5e3973;
case 0x5e3977:c.instructions+=9;goto B5e3977;
case 0x5e3978:c.instructions+=8;goto B5e3978;
case 0x5e3979:c.instructions+=7;goto B5e3979;
case 0x5e397d:c.instructions+=6;goto B5e397d;
case 0x5e397f:c.instructions+=5;goto B5e397f;
case 0x5e3985:c.instructions+=4;goto B5e3985;
case 0x5e3987:c.instructions+=3;goto B5e3987;
case 0x5e398a:c.instructions+=2;goto B5e398a;
case 0x5e398c:c.instructions+=1;goto B5e398c;
case 0x5e3991:goto L5e3991;
case 0x5e3995:c.instructions+=6;goto B5e3995;
case 0x5e3997:c.instructions+=5;goto B5e3997;
case 0x5e399b:c.instructions+=4;goto B5e399b;
case 0x5e399d:c.instructions+=3;goto B5e399d;
case 0x5e399f:c.instructions+=2;goto B5e399f;
case 0x5e39a2:c.instructions+=1;goto B5e39a2;
case 0x5e39a4:goto L5e39a4;
case 0x5e39a8:c.instructions+=1;goto B5e39a8;
case 0x5e39aa:goto L5e39aa;
case 0x5e39b0:c.instructions+=1;goto B5e39b0;
case 0x5e39b5:goto L5e39b5;
case 0x5e39b7:goto L5e39b7;
case 0x5e39ba:c.instructions+=1;goto B5e39ba;
case 0x5e39c0:goto L5e39c0;
case 0x5e39c4:c.instructions+=6;goto B5e39c4;
case 0x5e39c5:c.instructions+=5;goto B5e39c5;
case 0x5e39c6:c.instructions+=4;goto B5e39c6;
case 0x5e39c7:c.instructions+=3;goto B5e39c7;
case 0x5e39c8:c.instructions+=2;goto B5e39c8;
case 0x5e39c9:c.instructions+=1;goto B5e39c9;
case 0x5e39d0:goto L5e39d0;
case 0x5e39d1:c.instructions+=15;goto B5e39d1;
case 0x5e39d3:c.instructions+=14;goto B5e39d3;
case 0x5e39d6:c.instructions+=13;goto B5e39d6;
case 0x5e39d9:c.instructions+=12;goto B5e39d9;
case 0x5e39da:c.instructions+=11;goto B5e39da;
case 0x5e39db:c.instructions+=10;goto B5e39db;
case 0x5e39dd:c.instructions+=9;goto B5e39dd;
case 0x5e39e0:c.instructions+=8;goto B5e39e0;
case 0x5e39e1:c.instructions+=7;goto B5e39e1;
case 0x5e39e3:c.instructions+=6;goto B5e39e3;
case 0x5e39e5:c.instructions+=5;goto B5e39e5;
case 0x5e39e9:c.instructions+=4;goto B5e39e9;
case 0x5e39ef:c.instructions+=3;goto B5e39ef;
case 0x5e39f1:c.instructions+=2;goto B5e39f1;
case 0x5e39f4:c.instructions+=1;goto B5e39f4;
case 0x5e39fa:goto L5e39fa;
case 0x5e39fd:c.instructions+=26;goto B5e39fd;
case 0x5e3a00:c.instructions+=25;goto B5e3a00;
case 0x5e3a03:c.instructions+=24;goto B5e3a03;
case 0x5e3a06:c.instructions+=23;goto B5e3a06;
case 0x5e3a0a:c.instructions+=22;goto B5e3a0a;
case 0x5e3a0d:c.instructions+=21;goto B5e3a0d;
case 0x5e3a11:c.instructions+=20;goto B5e3a11;
case 0x5e3a13:c.instructions+=19;goto B5e3a13;
case 0x5e3a16:c.instructions+=18;goto B5e3a16;
case 0x5e3a18:c.instructions+=17;goto B5e3a18;
case 0x5e3a1c:c.instructions+=16;goto B5e3a1c;
case 0x5e3a1d:c.instructions+=15;goto B5e3a1d;
case 0x5e3a21:c.instructions+=14;goto B5e3a21;
case 0x5e3a27:c.instructions+=13;goto B5e3a27;
case 0x5e3a28:c.instructions+=12;goto B5e3a28;
case 0x5e3a2c:c.instructions+=11;goto B5e3a2c;
case 0x5e3a2f:c.instructions+=10;goto B5e3a2f;
case 0x5e3a32:c.instructions+=9;goto B5e3a32;
case 0x5e3a38:c.instructions+=8;goto B5e3a38;
case 0x5e3a3c:c.instructions+=7;goto B5e3a3c;
case 0x5e3a40:c.instructions+=6;goto B5e3a40;
case 0x5e3a43:c.instructions+=5;goto B5e3a43;
case 0x5e3a47:c.instructions+=4;goto B5e3a47;
case 0x5e3a4a:c.instructions+=3;goto B5e3a4a;
case 0x5e3a4e:c.instructions+=2;goto B5e3a4e;
case 0x5e3a52:c.instructions+=1;goto B5e3a52;
case 0x5e3a57:goto L5e3a57;
case 0x5e3a5a:c.instructions+=12;goto B5e3a5a;
case 0x5e3a5d:c.instructions+=11;goto B5e3a5d;
case 0x5e3a60:c.instructions+=10;goto B5e3a60;
case 0x5e3a63:c.instructions+=9;goto B5e3a63;
case 0x5e3a67:c.instructions+=8;goto B5e3a67;
case 0x5e3a6b:c.instructions+=7;goto B5e3a6b;
case 0x5e3a6e:c.instructions+=6;goto B5e3a6e;
case 0x5e3a72:c.instructions+=5;goto B5e3a72;
case 0x5e3a75:c.instructions+=4;goto B5e3a75;
case 0x5e3a7b:c.instructions+=3;goto B5e3a7b;
case 0x5e3a7d:c.instructions+=2;goto B5e3a7d;
case 0x5e3a80:c.instructions+=1;goto B5e3a80;
case 0x5e3a86:goto L5e3a86;
case 0x5e3a8a:c.instructions+=5;goto B5e3a8a;
case 0x5e3a8d:c.instructions+=4;goto B5e3a8d;
case 0x5e3a93:c.instructions+=3;goto B5e3a93;
case 0x5e3a95:c.instructions+=2;goto B5e3a95;
case 0x5e3a98:c.instructions+=1;goto B5e3a98;
case 0x5e3a9e:goto L5e3a9e;
case 0x5e3aa2:c.instructions+=8;goto B5e3aa2;
case 0x5e3aa6:c.instructions+=7;goto B5e3aa6;
case 0x5e3aaa:c.instructions+=6;goto B5e3aaa;
case 0x5e3aae:c.instructions+=5;goto B5e3aae;
case 0x5e3ab2:c.instructions+=4;goto B5e3ab2;
case 0x5e3ab6:c.instructions+=3;goto B5e3ab6;
case 0x5e3ab8:c.instructions+=2;goto B5e3ab8;
case 0x5e3abb:c.instructions+=1;goto B5e3abb;
case 0x5e3abd:goto L5e3abd;
case 0x5e3abf:c.instructions+=1;goto B5e3abf;
case 0x5e3ac3:goto L5e3ac3;
case 0x5e3ac7:c.instructions+=4;goto B5e3ac7;
case 0x5e3ac9:c.instructions+=3;goto B5e3ac9;
case 0x5e3acb:c.instructions+=2;goto B5e3acb;
case 0x5e3ace:c.instructions+=1;goto B5e3ace;
case 0x5e3ad0:goto L5e3ad0;
case 0x5e3ad2:c.instructions+=1;goto B5e3ad2;
case 0x5e3ad6:goto L5e3ad6;
case 0x5e3ada:c.instructions+=13;goto B5e3ada;
case 0x5e3adc:c.instructions+=12;goto B5e3adc;
case 0x5e3ae0:c.instructions+=11;goto B5e3ae0;
case 0x5e3ae2:c.instructions+=10;goto B5e3ae2;
case 0x5e3ae8:c.instructions+=9;goto B5e3ae8;
case 0x5e3aeb:c.instructions+=8;goto B5e3aeb;
case 0x5e3aed:c.instructions+=7;goto B5e3aed;
case 0x5e3af1:c.instructions+=6;goto B5e3af1;
case 0x5e3af7:c.instructions+=5;goto B5e3af7;
case 0x5e3afd:c.instructions+=4;goto B5e3afd;
case 0x5e3b03:c.instructions+=3;goto B5e3b03;
case 0x5e3b05:c.instructions+=2;goto B5e3b05;
case 0x5e3b08:c.instructions+=1;goto B5e3b08;
case 0x5e3b0a:goto L5e3b0a;
case 0x5e3b0e:c.instructions+=1;goto B5e3b0e;
case 0x5e3b10:goto L5e3b10;
case 0x5e3b16:goto L5e3b16;
case 0x5e3b1a:c.instructions+=46;goto B5e3b1a;
case 0x5e3b1b:c.instructions+=45;goto B5e3b1b;
case 0x5e3b1f:c.instructions+=44;goto B5e3b1f;
case 0x5e3b23:c.instructions+=43;goto B5e3b23;
case 0x5e3b27:c.instructions+=42;goto B5e3b27;
case 0x5e3b2b:c.instructions+=41;goto B5e3b2b;
case 0x5e3b2f:c.instructions+=40;goto B5e3b2f;
case 0x5e3b33:c.instructions+=39;goto B5e3b33;
case 0x5e3b37:c.instructions+=38;goto B5e3b37;
case 0x5e3b39:c.instructions+=37;goto B5e3b39;
case 0x5e3b3b:c.instructions+=36;goto B5e3b3b;
case 0x5e3b3e:c.instructions+=35;goto B5e3b3e;
case 0x5e3b41:c.instructions+=34;goto B5e3b41;
case 0x5e3b43:c.instructions+=33;goto B5e3b43;
case 0x5e3b45:c.instructions+=32;goto B5e3b45;
case 0x5e3b47:c.instructions+=31;goto B5e3b47;
case 0x5e3b49:c.instructions+=30;goto B5e3b49;
case 0x5e3b4b:c.instructions+=29;goto B5e3b4b;
case 0x5e3b4d:c.instructions+=28;goto B5e3b4d;
case 0x5e3b4f:c.instructions+=27;goto B5e3b4f;
case 0x5e3b51:c.instructions+=26;goto B5e3b51;
case 0x5e3b57:c.instructions+=25;goto B5e3b57;
case 0x5e3b59:c.instructions+=24;goto B5e3b59;
case 0x5e3b5b:c.instructions+=23;goto B5e3b5b;
case 0x5e3b5f:c.instructions+=22;goto B5e3b5f;
case 0x5e3b63:c.instructions+=21;goto B5e3b63;
case 0x5e3b65:c.instructions+=20;goto B5e3b65;
case 0x5e3b67:c.instructions+=19;goto B5e3b67;
case 0x5e3b6b:c.instructions+=18;goto B5e3b6b;
case 0x5e3b6f:c.instructions+=17;goto B5e3b6f;
case 0x5e3b73:c.instructions+=16;goto B5e3b73;
case 0x5e3b75:c.instructions+=15;goto B5e3b75;
case 0x5e3b77:c.instructions+=14;goto B5e3b77;
case 0x5e3b79:c.instructions+=13;goto B5e3b79;
case 0x5e3b7b:c.instructions+=12;goto B5e3b7b;
case 0x5e3b7d:c.instructions+=11;goto B5e3b7d;
case 0x5e3b81:c.instructions+=10;goto B5e3b81;
case 0x5e3b83:c.instructions+=9;goto B5e3b83;
case 0x5e3b89:c.instructions+=8;goto B5e3b89;
case 0x5e3b8d:c.instructions+=7;goto B5e3b8d;
case 0x5e3b91:c.instructions+=6;goto B5e3b91;
case 0x5e3b95:c.instructions+=5;goto B5e3b95;
case 0x5e3b98:c.instructions+=4;goto B5e3b98;
case 0x5e3b99:c.instructions+=3;goto B5e3b99;
case 0x5e3b9a:c.instructions+=2;goto B5e3b9a;
case 0x5e3b9b:c.instructions+=1;goto B5e3b9b;
case 0x5e3ba0:goto L5e3ba0;
case 0x5e3ba4:c.instructions+=10;goto B5e3ba4;
case 0x5e3ba7:c.instructions+=9;goto B5e3ba7;
case 0x5e3bab:c.instructions+=8;goto B5e3bab;
case 0x5e3bac:c.instructions+=7;goto B5e3bac;
case 0x5e3baf:c.instructions+=6;goto B5e3baf;
case 0x5e3bb0:c.instructions+=5;goto B5e3bb0;
case 0x5e3bb4:c.instructions+=4;goto B5e3bb4;
case 0x5e3bb5:c.instructions+=3;goto B5e3bb5;
case 0x5e3bb6:c.instructions+=2;goto B5e3bb6;
case 0x5e3bb8:c.instructions+=1;goto B5e3bb8;
case 0x5e3bbd:goto L5e3bbd;
case 0x5e3bc3:c.instructions+=3;goto B5e3bc3;
case 0x5e3bc5:c.instructions+=2;goto B5e3bc5;
case 0x5e3bc8:c.instructions+=1;goto B5e3bc8;
case 0x5e3bce:goto L5e3bce;
case 0x5e3bd2:c.instructions+=14;goto B5e3bd2;
case 0x5e3bd6:c.instructions+=13;goto B5e3bd6;
case 0x5e3bd7:c.instructions+=12;goto B5e3bd7;
case 0x5e3bdb:c.instructions+=11;goto B5e3bdb;
case 0x5e3bdf:c.instructions+=10;goto B5e3bdf;
case 0x5e3be3:c.instructions+=9;goto B5e3be3;
case 0x5e3be7:c.instructions+=8;goto B5e3be7;
case 0x5e3beb:c.instructions+=7;goto B5e3beb;
case 0x5e3bef:c.instructions+=6;goto B5e3bef;
case 0x5e3bf3:c.instructions+=5;goto B5e3bf3;
case 0x5e3bf6:c.instructions+=4;goto B5e3bf6;
case 0x5e3bf7:c.instructions+=3;goto B5e3bf7;
case 0x5e3bf8:c.instructions+=2;goto B5e3bf8;
case 0x5e3bf9:c.instructions+=1;goto B5e3bf9;
case 0x5e3bfe:goto L5e3bfe;
case 0x5e3c02:c.instructions+=3;goto B5e3c02;
case 0x5e3c05:c.instructions+=2;goto B5e3c05;
case 0x5e3c07:c.instructions+=1;goto B5e3c07;
case 0x5e3c0d:goto L5e3c0d;
case 0x5e3c11:c.instructions+=9;goto B5e3c11;
case 0x5e3c15:c.instructions+=8;goto B5e3c15;
case 0x5e3c16:c.instructions+=7;goto B5e3c16;
case 0x5e3c1a:c.instructions+=6;goto B5e3c1a;
case 0x5e3c1b:c.instructions+=5;goto B5e3c1b;
case 0x5e3c1c:c.instructions+=4;goto B5e3c1c;
case 0x5e3c20:c.instructions+=3;goto B5e3c20;
case 0x5e3c21:c.instructions+=2;goto B5e3c21;
case 0x5e3c23:c.instructions+=1;goto B5e3c23;
case 0x5e3c28:goto L5e3c28;
case 0x5e3c2c:c.instructions+=2;goto B5e3c2c;
case 0x5e3c2e:c.instructions+=1;goto B5e3c2e;
case 0x5e3c34:goto L5e3c34;
case 0x5e3c38:c.instructions+=2;goto B5e3c38;
case 0x5e3c3a:c.instructions+=1;goto B5e3c3a;
case 0x5e3c40:goto L5e3c40;
case 0x5e3c43:c.instructions+=14;goto B5e3c43;
case 0x5e3c46:c.instructions+=13;goto B5e3c46;
case 0x5e3c48:c.instructions+=12;goto B5e3c48;
case 0x5e3c4a:c.instructions+=11;goto B5e3c4a;
case 0x5e3c4e:c.instructions+=10;goto B5e3c4e;
case 0x5e3c52:c.instructions+=9;goto B5e3c52;
case 0x5e3c54:c.instructions+=8;goto B5e3c54;
case 0x5e3c56:c.instructions+=7;goto B5e3c56;
case 0x5e3c5a:c.instructions+=6;goto B5e3c5a;
case 0x5e3c5e:c.instructions+=5;goto B5e3c5e;
case 0x5e3c5f:c.instructions+=4;goto B5e3c5f;
case 0x5e3c61:c.instructions+=3;goto B5e3c61;
case 0x5e3c62:c.instructions+=2;goto B5e3c62;
case 0x5e3c64:c.instructions+=1;goto B5e3c64;
case 0x5e3c69:goto L5e3c69;
case 0x5e3c6d:c.instructions+=4;goto B5e3c6d;
case 0x5e3c71:c.instructions+=3;goto B5e3c71;
case 0x5e3c74:c.instructions+=2;goto B5e3c74;
case 0x5e3c75:c.instructions+=1;goto B5e3c75;
case 0x5e3c7a:goto L5e3c7a;
case 0x5e3c80:c.instructions+=27;goto B5e3c80;
case 0x5e3c82:c.instructions+=26;goto B5e3c82;
case 0x5e3c86:c.instructions+=25;goto B5e3c86;
case 0x5e3c87:c.instructions+=24;goto B5e3c87;
case 0x5e3c8b:c.instructions+=23;goto B5e3c8b;
case 0x5e3c8c:c.instructions+=22;goto B5e3c8c;
case 0x5e3c90:c.instructions+=21;goto B5e3c90;
case 0x5e3c92:c.instructions+=20;goto B5e3c92;
case 0x5e3c96:c.instructions+=19;goto B5e3c96;
case 0x5e3c9a:c.instructions+=18;goto B5e3c9a;
case 0x5e3c9e:c.instructions+=17;goto B5e3c9e;
case 0x5e3ca2:c.instructions+=16;goto B5e3ca2;
case 0x5e3ca6:c.instructions+=15;goto B5e3ca6;
case 0x5e3caa:c.instructions+=14;goto B5e3caa;
case 0x5e3cae:c.instructions+=13;goto B5e3cae;
case 0x5e3cb1:c.instructions+=12;goto B5e3cb1;
case 0x5e3cb4:c.instructions+=11;goto B5e3cb4;
case 0x5e3cb7:c.instructions+=10;goto B5e3cb7;
case 0x5e3cba:c.instructions+=9;goto B5e3cba;
case 0x5e3cbe:c.instructions+=8;goto B5e3cbe;
case 0x5e3cc2:c.instructions+=7;goto B5e3cc2;
case 0x5e3cc5:c.instructions+=6;goto B5e3cc5;
case 0x5e3cc8:c.instructions+=5;goto B5e3cc8;
case 0x5e3ccb:c.instructions+=4;goto B5e3ccb;
case 0x5e3cce:c.instructions+=3;goto B5e3cce;
case 0x5e3cd2:c.instructions+=2;goto B5e3cd2;
case 0x5e3cd6:c.instructions+=1;goto B5e3cd6;
case 0x5e3cdb:goto L5e3cdb;
case 0x5e3cdf:c.instructions+=4;goto B5e3cdf;
case 0x5e3ce0:c.instructions+=3;goto B5e3ce0;
case 0x5e3ce4:c.instructions+=2;goto B5e3ce4;
case 0x5e3ce5:c.instructions+=1;goto B5e3ce5;
case 0x5e3cea:goto L5e3cea;
case 0x5e3cee:c.instructions+=16;goto B5e3cee;
case 0x5e3cf2:c.instructions+=15;goto B5e3cf2;
case 0x5e3cf5:c.instructions+=14;goto B5e3cf5;
case 0x5e3cf9:c.instructions+=13;goto B5e3cf9;
case 0x5e3cfd:c.instructions+=12;goto B5e3cfd;
case 0x5e3d01:c.instructions+=11;goto B5e3d01;
case 0x5e3d05:c.instructions+=10;goto B5e3d05;
case 0x5e3d09:c.instructions+=9;goto B5e3d09;
case 0x5e3d0d:c.instructions+=8;goto B5e3d0d;
case 0x5e3d11:c.instructions+=7;goto B5e3d11;
case 0x5e3d15:c.instructions+=6;goto B5e3d15;
case 0x5e3d19:c.instructions+=5;goto B5e3d19;
case 0x5e3d1c:c.instructions+=4;goto B5e3d1c;
case 0x5e3d1d:c.instructions+=3;goto B5e3d1d;
case 0x5e3d1e:c.instructions+=2;goto B5e3d1e;
case 0x5e3d1f:c.instructions+=1;goto B5e3d1f;
case 0x5e3d24:goto L5e3d24;
case 0x5e3d28:c.instructions+=10;goto B5e3d28;
case 0x5e3d2c:c.instructions+=9;goto B5e3d2c;
case 0x5e3d2f:c.instructions+=8;goto B5e3d2f;
case 0x5e3d33:c.instructions+=7;goto B5e3d33;
case 0x5e3d37:c.instructions+=6;goto B5e3d37;
case 0x5e3d3a:c.instructions+=5;goto B5e3d3a;
case 0x5e3d3b:c.instructions+=4;goto B5e3d3b;
case 0x5e3d3c:c.instructions+=3;goto B5e3d3c;
case 0x5e3d40:c.instructions+=2;goto B5e3d40;
case 0x5e3d41:c.instructions+=1;goto B5e3d41;
case 0x5e3d46:goto L5e3d46;
case 0x5e3d4a:c.instructions+=4;goto B5e3d4a;
case 0x5e3d4b:c.instructions+=3;goto B5e3d4b;
case 0x5e3d4f:c.instructions+=2;goto B5e3d4f;
case 0x5e3d50:c.instructions+=1;goto B5e3d50;
case 0x5e3d55:goto L5e3d55;
case 0x5e3d59:c.instructions+=10;goto B5e3d59;
case 0x5e3d5d:c.instructions+=9;goto B5e3d5d;
case 0x5e3d60:c.instructions+=8;goto B5e3d60;
case 0x5e3d64:c.instructions+=7;goto B5e3d64;
case 0x5e3d67:c.instructions+=6;goto B5e3d67;
case 0x5e3d6a:c.instructions+=5;goto B5e3d6a;
case 0x5e3d6b:c.instructions+=4;goto B5e3d6b;
case 0x5e3d6c:c.instructions+=3;goto B5e3d6c;
case 0x5e3d70:c.instructions+=2;goto B5e3d70;
case 0x5e3d71:c.instructions+=1;goto B5e3d71;
case 0x5e3d76:goto L5e3d76;
case 0x5e3d7a:c.instructions+=9;goto B5e3d7a;
case 0x5e3d7d:c.instructions+=8;goto B5e3d7d;
case 0x5e3d80:c.instructions+=7;goto B5e3d80;
case 0x5e3d82:c.instructions+=6;goto B5e3d82;
case 0x5e3d83:c.instructions+=5;goto B5e3d83;
case 0x5e3d87:c.instructions+=4;goto B5e3d87;
case 0x5e3d88:c.instructions+=3;goto B5e3d88;
case 0x5e3d89:c.instructions+=2;goto B5e3d89;
case 0x5e3d8b:c.instructions+=1;goto B5e3d8b;
case 0x5e3d90:goto L5e3d90;
case 0x5e3d92:c.instructions+=10;goto B5e3d92;
case 0x5e3d96:c.instructions+=9;goto B5e3d96;
case 0x5e3d99:c.instructions+=8;goto B5e3d99;
case 0x5e3d9a:c.instructions+=7;goto B5e3d9a;
case 0x5e3d9b:c.instructions+=6;goto B5e3d9b;
case 0x5e3d9c:c.instructions+=5;goto B5e3d9c;
case 0x5e3da0:c.instructions+=4;goto B5e3da0;
case 0x5e3da1:c.instructions+=3;goto B5e3da1;
case 0x5e3da2:c.instructions+=2;goto B5e3da2;
case 0x5e3da4:c.instructions+=1;goto B5e3da4;
case 0x5e3da9:goto L5e3da9;
case 0x5e3dac:c.instructions+=3;goto B5e3dac;
case 0x5e3dad:c.instructions+=2;goto B5e3dad;
case 0x5e3daf:c.instructions+=1;goto B5e3daf;
case 0x5e3db4:goto L5e3db4;
case 0x5e3db5:c.instructions+=5;goto B5e3db5;
case 0x5e3db6:c.instructions+=4;goto B5e3db6;
case 0x5e3db7:c.instructions+=3;goto B5e3db7;
case 0x5e3db9:c.instructions+=2;goto B5e3db9;
case 0x5e3dba:c.instructions+=1;goto B5e3dba;
case 0x5e3dbd:goto L5e3dbd;
case 0x5e3dc1:c.instructions+=8;goto B5e3dc1;
case 0x5e3dc4:c.instructions+=7;goto B5e3dc4;
case 0x5e3dc6:c.instructions+=6;goto B5e3dc6;
case 0x5e3dc7:c.instructions+=5;goto B5e3dc7;
case 0x5e3dcb:c.instructions+=4;goto B5e3dcb;
case 0x5e3dcc:c.instructions+=3;goto B5e3dcc;
case 0x5e3dcd:c.instructions+=2;goto B5e3dcd;
case 0x5e3dcf:c.instructions+=1;goto B5e3dcf;
case 0x5e3dd4:goto L5e3dd4;
case 0x5e3dd6:c.instructions+=4;goto B5e3dd6;
case 0x5e3dd9:c.instructions+=3;goto B5e3dd9;
case 0x5e3dda:c.instructions+=2;goto B5e3dda;
case 0x5e3ddc:c.instructions+=1;goto B5e3ddc;
case 0x5e3de1:goto L5e3de1;
case 0x5e3de2:c.instructions+=5;goto B5e3de2;
case 0x5e3de3:c.instructions+=4;goto B5e3de3;
case 0x5e3de4:c.instructions+=3;goto B5e3de4;
case 0x5e3de6:c.instructions+=2;goto B5e3de6;
case 0x5e3de7:c.instructions+=1;goto B5e3de7;
case 0x5e3dea:goto L5e3dea;
case 0x5e3ded:c.instructions+=4;goto B5e3ded;
case 0x5e3def:c.instructions+=3;goto B5e3def;
case 0x5e3df0:c.instructions+=2;goto B5e3df0;
case 0x5e3df2:c.instructions+=1;goto B5e3df2;
case 0x5e3df7:goto L5e3df7;
case 0x5e3df8:c.instructions+=5;goto B5e3df8;
case 0x5e3df9:c.instructions+=4;goto B5e3df9;
case 0x5e3dfa:c.instructions+=3;goto B5e3dfa;
case 0x5e3dfc:c.instructions+=2;goto B5e3dfc;
case 0x5e3dfd:c.instructions+=1;goto B5e3dfd;
case 0x5e3e00:goto L5e3e00;
case 0x5e3e03:c.instructions+=4;goto B5e3e03;
case 0x5e3e05:c.instructions+=3;goto B5e3e05;
case 0x5e3e06:c.instructions+=2;goto B5e3e06;
case 0x5e3e08:c.instructions+=1;goto B5e3e08;
case 0x5e3e0d:goto L5e3e0d;
case 0x5e3e0e:c.instructions+=4;goto B5e3e0e;
case 0x5e3e12:c.instructions+=3;goto B5e3e12;
case 0x5e3e13:c.instructions+=2;goto B5e3e13;
case 0x5e3e15:c.instructions+=1;goto B5e3e15;
case 0x5e3e1a:goto L5e3e1a;
case 0x5e3e1e:c.instructions+=6;goto B5e3e1e;
case 0x5e3e24:c.instructions+=5;goto B5e3e24;
case 0x5e3e27:c.instructions+=4;goto B5e3e27;
case 0x5e3e2a:c.instructions+=3;goto B5e3e2a;
case 0x5e3e2d:c.instructions+=2;goto B5e3e2d;
case 0x5e3e33:c.instructions+=1;goto B5e3e33;
case 0x5e3e36:goto L5e3e36;
case 0x5e3e37:c.instructions+=5;goto B5e3e37;
case 0x5e3e38:c.instructions+=4;goto B5e3e38;
case 0x5e3e39:c.instructions+=3;goto B5e3e39;
case 0x5e3e3b:c.instructions+=2;goto B5e3e3b;
case 0x5e3e3c:c.instructions+=1;goto B5e3e3c;
case 0x5e3e40:goto L5e3e40;
case 0x5e3e43:c.instructions+=10;goto B5e3e43;
case 0x5e3e44:c.instructions+=9;goto B5e3e44;
case 0x5e3e45:c.instructions+=8;goto B5e3e45;
case 0x5e3e49:c.instructions+=7;goto B5e3e49;
case 0x5e3e4a:c.instructions+=6;goto B5e3e4a;
case 0x5e3e4b:c.instructions+=5;goto B5e3e4b;
case 0x5e3e4e:c.instructions+=4;goto B5e3e4e;
case 0x5e3e52:c.instructions+=3;goto B5e3e52;
case 0x5e3e55:c.instructions+=2;goto B5e3e55;
case 0x5e3e5d:c.instructions+=1;goto B5e3e5d;
case 0x5e3e60:goto L5e3e60;
case 0x5e3e62:c.instructions+=2;goto B5e3e62;
case 0x5e3e65:c.instructions+=1;goto B5e3e65;
case 0x5e3e67:goto L5e3e67;
case 0x5e3e68:c.instructions+=2;goto B5e3e68;
case 0x5e3e6a:c.instructions+=1;goto B5e3e6a;
case 0x5e3e6f:goto L5e3e6f;
case 0x5e3e72:c.instructions+=4;goto B5e3e72;
case 0x5e3e73:c.instructions+=3;goto B5e3e73;
case 0x5e3e76:c.instructions+=2;goto B5e3e76;
case 0x5e3e78:c.instructions+=1;goto B5e3e78;
case 0x5e3e7a:goto L5e3e7a;
case 0x5e3e7e:c.instructions+=7;goto B5e3e7e;
case 0x5e3e82:c.instructions+=6;goto B5e3e82;
case 0x5e3e88:c.instructions+=5;goto B5e3e88;
case 0x5e3e8b:c.instructions+=4;goto B5e3e8b;
case 0x5e3e8c:c.instructions+=3;goto B5e3e8c;
case 0x5e3e90:c.instructions+=2;goto B5e3e90;
case 0x5e3e94:c.instructions+=1;goto B5e3e94;
case 0x5e3e96:goto L5e3e96;
case 0x5e3e97:c.instructions+=5;goto B5e3e97;
case 0x5e3e98:c.instructions+=4;goto B5e3e98;
case 0x5e3e99:c.instructions+=3;goto B5e3e99;
case 0x5e3e9a:c.instructions+=2;goto B5e3e9a;
case 0x5e3e9d:c.instructions+=1;goto B5e3e9d;
case 0x5e3ea0:goto L5e3ea0;
case 0x5e3ea3:c.instructions+=10;goto B5e3ea3;
case 0x5e3ea4:c.instructions+=9;goto B5e3ea4;
case 0x5e3ea5:c.instructions+=8;goto B5e3ea5;
case 0x5e3ea7:c.instructions+=7;goto B5e3ea7;
case 0x5e3ea8:c.instructions+=6;goto B5e3ea8;
case 0x5e3eab:c.instructions+=5;goto B5e3eab;
case 0x5e3eac:c.instructions+=4;goto B5e3eac;
case 0x5e3eb0:c.instructions+=3;goto B5e3eb0;
case 0x5e3eb3:c.instructions+=2;goto B5e3eb3;
case 0x5e3ebb:c.instructions+=1;goto B5e3ebb;
case 0x5e3ec0:goto L5e3ec0;
case 0x5e3ec2:c.instructions+=2;goto B5e3ec2;
case 0x5e3ec5:c.instructions+=1;goto B5e3ec5;
case 0x5e3ecb:goto L5e3ecb;
case 0x5e3ed0:goto L5e3ed0;
case 0x5e3ed3:c.instructions+=16;goto B5e3ed3;
case 0x5e3ed7:c.instructions+=15;goto B5e3ed7;
case 0x5e3eda:c.instructions+=14;goto B5e3eda;
case 0x5e3ede:c.instructions+=13;goto B5e3ede;
case 0x5e3ee2:c.instructions+=12;goto B5e3ee2;
case 0x5e3ee6:c.instructions+=11;goto B5e3ee6;
case 0x5e3ee8:c.instructions+=10;goto B5e3ee8;
case 0x5e3eeb:c.instructions+=9;goto B5e3eeb;
case 0x5e3eef:c.instructions+=8;goto B5e3eef;
case 0x5e3ef5:c.instructions+=7;goto B5e3ef5;
case 0x5e3ef9:c.instructions+=6;goto B5e3ef9;
case 0x5e3eff:c.instructions+=5;goto B5e3eff;
case 0x5e3f03:c.instructions+=4;goto B5e3f03;
case 0x5e3f05:c.instructions+=3;goto B5e3f05;
case 0x5e3f07:c.instructions+=2;goto B5e3f07;
case 0x5e3f0a:c.instructions+=1;goto B5e3f0a;
case 0x5e3f0c:goto L5e3f0c;
case 0x5e3f0e:c.instructions+=1;goto B5e3f0e;
case 0x5e3f12:goto L5e3f12;
case 0x5e3f17:c.instructions+=14;goto B5e3f17;
case 0x5e3f1a:c.instructions+=13;goto B5e3f1a;
case 0x5e3f1e:c.instructions+=12;goto B5e3f1e;
case 0x5e3f20:c.instructions+=11;goto B5e3f20;
case 0x5e3f23:c.instructions+=10;goto B5e3f23;
case 0x5e3f27:c.instructions+=9;goto B5e3f27;
case 0x5e3f2d:c.instructions+=8;goto B5e3f2d;
case 0x5e3f2f:c.instructions+=7;goto B5e3f2f;
case 0x5e3f33:c.instructions+=6;goto B5e3f33;
case 0x5e3f37:c.instructions+=5;goto B5e3f37;
case 0x5e3f38:c.instructions+=4;goto B5e3f38;
case 0x5e3f3a:c.instructions+=3;goto B5e3f3a;
case 0x5e3f3c:c.instructions+=2;goto B5e3f3c;
case 0x5e3f3d:c.instructions+=1;goto B5e3f3d;
case 0x5e3f3f:goto L5e3f3f;
case 0x5e3f44:goto L5e3f44;
case 0x5e3f46:goto L5e3f46;
case 0x5e3f4b:goto L5e3f4b;
case 0x5e3f4e:c.instructions+=4;goto B5e3f4e;
case 0x5e3f4f:c.instructions+=3;goto B5e3f4f;
case 0x5e3f52:c.instructions+=2;goto B5e3f52;
case 0x5e3f54:c.instructions+=1;goto B5e3f54;
case 0x5e3f5a:goto L5e3f5a;
case 0x5e3f5e:c.instructions+=7;goto B5e3f5e;
case 0x5e3f62:c.instructions+=6;goto B5e3f62;
case 0x5e3f68:c.instructions+=5;goto B5e3f68;
case 0x5e3f6b:c.instructions+=4;goto B5e3f6b;
case 0x5e3f6c:c.instructions+=3;goto B5e3f6c;
case 0x5e3f70:c.instructions+=2;goto B5e3f70;
case 0x5e3f74:c.instructions+=1;goto B5e3f74;
case 0x5e3f7a:goto L5e3f7a;
case 0x5e3f7b:c.instructions+=5;goto B5e3f7b;
case 0x5e3f7c:c.instructions+=4;goto B5e3f7c;
case 0x5e3f7d:c.instructions+=3;goto B5e3f7d;
case 0x5e3f7e:c.instructions+=2;goto B5e3f7e;
case 0x5e3f81:c.instructions+=1;goto B5e3f81;
case 0x5e3f90:goto L5e3f90;
case 0x5e3f92:c.instructions+=18;goto B5e3f92;
case 0x5e3f95:c.instructions+=17;goto B5e3f95;
case 0x5e3f97:c.instructions+=16;goto B5e3f97;
case 0x5e3f9a:c.instructions+=15;goto B5e3f9a;
case 0x5e3f9c:c.instructions+=14;goto B5e3f9c;
case 0x5e3f9f:c.instructions+=13;goto B5e3f9f;
case 0x5e3fa0:c.instructions+=12;goto B5e3fa0;
case 0x5e3fa2:c.instructions+=11;goto B5e3fa2;
case 0x5e3fa7:c.instructions+=10;goto B5e3fa7;
case 0x5e3fa8:c.instructions+=9;goto B5e3fa8;
case 0x5e3fae:c.instructions+=8;goto B5e3fae;
case 0x5e3fb4:c.instructions+=7;goto B5e3fb4;
case 0x5e3fb6:c.instructions+=6;goto B5e3fb6;
case 0x5e3fbc:c.instructions+=5;goto B5e3fbc;
case 0x5e3fc2:c.instructions+=4;goto B5e3fc2;
case 0x5e3fc8:c.instructions+=3;goto B5e3fc8;
case 0x5e3fcd:c.instructions+=2;goto B5e3fcd;
case 0x5e3fd0:c.instructions+=1;goto B5e3fd0;
case 0x5e3fda:goto L5e3fda;
case 0x5e3fdc:goto L5e3fdc;
case 0x5e3fdd:c.instructions+=6;goto B5e3fdd;
case 0x5e3fe3:c.instructions+=5;goto B5e3fe3;
case 0x5e3fe9:c.instructions+=4;goto B5e3fe9;
case 0x5e3fec:c.instructions+=3;goto B5e3fec;
case 0x5e3fee:c.instructions+=2;goto B5e3fee;
case 0x5e3fef:c.instructions+=1;goto B5e3fef;
case 0x5e3ff0:goto L5e3ff0;
case 0x5e3ff1:c.instructions+=6;goto B5e3ff1;
case 0x5e3ff2:c.instructions+=5;goto B5e3ff2;
case 0x5e3ff4:c.instructions+=4;goto B5e3ff4;
case 0x5e3ff5:c.instructions+=3;goto B5e3ff5;
case 0x5e3ff7:c.instructions+=2;goto B5e3ff7;
case 0x5e3ffa:c.instructions+=1;goto B5e3ffa;
default:missing_instruction(c.pc);}
B5e3000:L5e3000:{c.instructions+=2;NFSU2_TR(0x5e3000);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3004:{NFSU2_TR(0x5e3004);
{goto L5e3008;}
}
B5e3006:L5e3006:{c.instructions+=1;NFSU2_TR(0x5e3006);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3008:L5e3008:{c.instructions+=2;NFSU2_TR(0x5e3008);
{u32 ea_=u32(u32(7885484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e300e:{NFSU2_TR(0x5e300e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3013ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5e3013:L5e3013:{c.instructions+=4;NFSU2_TR(0x5e3013);
w4(R+4,u32(0xfffffffeull));
}
B5e3018:{NFSU2_TR(0x5e3018);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5e301a:{NFSU2_TR(0x5e301a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e301c:{NFSU2_TR(0x5e301c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e3020;}}
}
B5e301e:L5e301e:{c.instructions+=1;NFSU2_TR(0x5e301e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B5e3020:L5e3020:{c.instructions+=5;NFSU2_TR(0x5e3020);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3024:{NFSU2_TR(0x5e3024);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5e3028:{NFSU2_TR(0x5e3028);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e3029:{NFSU2_TR(0x5e3029);
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
B5e302b:{NFSU2_TR(0x5e302b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5e2eb4u,5e2);}
}
B5e3031:L5e3031:{c.instructions+=7;NFSU2_TR(0x5e3031);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3035:{NFSU2_TR(0x5e3035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3036:{NFSU2_TR(0x5e3036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3037:{NFSU2_TR(0x5e3037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3038:{NFSU2_TR(0x5e3038);
__builtin_memmove((R+16),(R+20),4);
}
B5e303a:{NFSU2_TR(0x5e303a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e303b:{NFSU2_TR(0x5e303b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3040:L5e3040:{c.instructions+=11;NFSU2_TR(0x5e3040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B5e3043:{NFSU2_TR(0x5e3043);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3044:{NFSU2_TR(0x5e3044);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3045:{NFSU2_TR(0x5e3045);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3046:{NFSU2_TR(0x5e3046);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e304a:{NFSU2_TR(0x5e304a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e304b:{NFSU2_TR(0x5e304b);
__builtin_memmove((R+28),(R+4),4);
}
B5e304d:{NFSU2_TR(0x5e304d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e304e:{NFSU2_TR(0x5e304e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3052:{NFSU2_TR(0x5e3052);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3056:{NFSU2_TR(0x5e3056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e305bull));
TAIL_STATIC(0x5ded90u,5de);
}
B5e305b:L5e305b:{c.instructions+=5;NFSU2_TR(0x5e305b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e305f:{NFSU2_TR(0x5e305f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3061:{NFSU2_TR(0x5e3061);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3067:{NFSU2_TR(0x5e3067);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e306b:{NFSU2_TR(0x5e306b);
if(r1(R+518)){{goto L5e307e;}}
}
B5e306d:L5e306d:{c.instructions+=4;NFSU2_TR(0x5e306d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3070:{NFSU2_TR(0x5e3070);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e3075:{NFSU2_TR(0x5e3075);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e307c:{NFSU2_TR(0x5e307c);
{goto L5e3080;}
}
B5e307e:L5e307e:{c.instructions+=1;NFSU2_TR(0x5e307e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e3080:L5e3080:{c.instructions+=4;NFSU2_TR(0x5e3080);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3084:{NFSU2_TR(0x5e3084);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3085:{NFSU2_TR(0x5e3085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3086:{NFSU2_TR(0x5e3086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e308bull));
TAIL_STATIC(0x401cc0u,401);
}
B5e308b:L5e308b:{c.instructions+=3;NFSU2_TR(0x5e308b);
__builtin_memmove((R+24),(R+0),4);
}
B5e308d:{NFSU2_TR(0x5e308d);
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
B5e308f:{NFSU2_TR(0x5e308f);
if(r1(R+518)){{goto L5e344a;}}
}
B5e3095:L5e3095:{c.instructions+=1;NFSU2_TR(0x5e3095);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e3099:L5e3099:{c.instructions+=14;NFSU2_TR(0x5e3099);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e309c:{NFSU2_TR(0x5e309c);
__builtin_memmove((R+4),gp(0x88f2bc),1);
}
B5e30a2:{NFSU2_TR(0x5e30a2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e30a6:{NFSU2_TR(0x5e30a6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e30a8:{NFSU2_TR(0x5e30a8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e30aa:{NFSU2_TR(0x5e30aa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e30ae:{NFSU2_TR(0x5e30ae);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e30b0:{NFSU2_TR(0x5e30b0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e30b2:{NFSU2_TR(0x5e30b2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e30b4:{NFSU2_TR(0x5e30b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e30b6:{NFSU2_TR(0x5e30b6);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e30ba:{NFSU2_TR(0x5e30ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e30bc:{NFSU2_TR(0x5e30bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e30bf:{NFSU2_TR(0x5e30bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e30d9;}}
}
B5e30c1:L5e30c1:{c.instructions+=6;NFSU2_TR(0x5e30c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e30c3:{NFSU2_TR(0x5e30c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e30c4:{NFSU2_TR(0x5e30c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e30c8:{NFSU2_TR(0x5e30c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e30c9:{NFSU2_TR(0x5e30c9);
w4(R+4,u32(0x88f298ull));
}
B5e30ce:{NFSU2_TR(0x5e30ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e30d3ull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5e30d3:L5e30d3:{c.instructions+=1;NFSU2_TR(0x5e30d3);
__builtin_memmove((R+4),gp(0x88f2bc),1);
}
B5e30d9:L5e30d9:{c.instructions+=5;NFSU2_TR(0x5e30d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e30db:{NFSU2_TR(0x5e30db);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e30df:{NFSU2_TR(0x5e30df);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e30e5:{NFSU2_TR(0x5e30e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e30e9:{NFSU2_TR(0x5e30e9);
if(r1(R+518)){{goto L5e3113;}}
}
B5e30eb:L5e30eb:{c.instructions+=4;NFSU2_TR(0x5e30eb);
{u32 ea_=u32(u32(8016320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e30f1:{NFSU2_TR(0x5e30f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e30f3:{NFSU2_TR(0x5e30f3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e30f6:{NFSU2_TR(0x5e30f6);
if(r1(R+514)){{goto L5e3100;}}
}
B5e30f8:L5e30f8:{c.instructions+=2;NFSU2_TR(0x5e30f8);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e30fe:{NFSU2_TR(0x5e30fe);
{goto L5e3113;}
}
B5e3100:L5e3100:{c.instructions+=4;NFSU2_TR(0x5e3100);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3106:{NFSU2_TR(0x5e3106);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3108:{NFSU2_TR(0x5e3108);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e310b:{NFSU2_TR(0x5e310b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3113;}}
}
B5e310d:L5e310d:{c.instructions+=1;NFSU2_TR(0x5e310d);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3113:L5e3113:{c.instructions+=4;NFSU2_TR(0x5e3113);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3115:{NFSU2_TR(0x5e3115);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3119:{NFSU2_TR(0x5e3119);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e311d:{NFSU2_TR(0x5e311d);
if(r1(R+518)){{goto L5e3147;}}
}
B5e311f:L5e311f:{c.instructions+=4;NFSU2_TR(0x5e311f);
{u32 ea_=u32(u32(8016320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3125:{NFSU2_TR(0x5e3125);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3127:{NFSU2_TR(0x5e3127);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e312a:{NFSU2_TR(0x5e312a);
if(r1(R+514)){{goto L5e3134;}}
}
B5e312c:L5e312c:{c.instructions+=2;NFSU2_TR(0x5e312c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3132:{NFSU2_TR(0x5e3132);
{goto L5e3147;}
}
B5e3134:L5e3134:{c.instructions+=4;NFSU2_TR(0x5e3134);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e313a:{NFSU2_TR(0x5e313a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e313c:{NFSU2_TR(0x5e313c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e313f:{NFSU2_TR(0x5e313f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3147;}}
}
B5e3141:L5e3141:{c.instructions+=1;NFSU2_TR(0x5e3141);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3147:L5e3147:{c.instructions+=8;NFSU2_TR(0x5e3147);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e314b:{NFSU2_TR(0x5e314b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e314d:{NFSU2_TR(0x5e314d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3153:{NFSU2_TR(0x5e3153);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e3155:{NFSU2_TR(0x5e3155);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3157:{NFSU2_TR(0x5e3157);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3159:{NFSU2_TR(0x5e3159);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e315c:{NFSU2_TR(0x5e315c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3167;}}
}
B5e315e:L5e315e:{c.instructions+=2;NFSU2_TR(0x5e315e);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+12)),r1(U+0));
}
B5e3161:{NFSU2_TR(0x5e3161);
__builtin_memmove((R+4),gp(0x88f2bc),1);
}
B5e3167:L5e3167:{c.instructions+=4;NFSU2_TR(0x5e3167);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3169:{NFSU2_TR(0x5e3169);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e316d:{NFSU2_TR(0x5e316d);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3173:{NFSU2_TR(0x5e3173);
if(r1(R+518)){{goto L5e319d;}}
}
B5e3175:L5e3175:{c.instructions+=4;NFSU2_TR(0x5e3175);
{u32 ea_=u32(u32(8016320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e317b:{NFSU2_TR(0x5e317b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e317d:{NFSU2_TR(0x5e317d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3180:{NFSU2_TR(0x5e3180);
if(r1(R+514)){{goto L5e318a;}}
}
B5e3182:L5e3182:{c.instructions+=2;NFSU2_TR(0x5e3182);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3188:{NFSU2_TR(0x5e3188);
{goto L5e319d;}
}
B5e318a:L5e318a:{c.instructions+=4;NFSU2_TR(0x5e318a);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3190:{NFSU2_TR(0x5e3190);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3192:{NFSU2_TR(0x5e3192);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3195:{NFSU2_TR(0x5e3195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e319d;}}
}
B5e3197:L5e3197:{c.instructions+=1;NFSU2_TR(0x5e3197);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e319d:L5e319d:{c.instructions+=4;NFSU2_TR(0x5e319d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e319f:{NFSU2_TR(0x5e319f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e31a3:{NFSU2_TR(0x5e31a3);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e31a9:{NFSU2_TR(0x5e31a9);
if(r1(R+518)){{goto L5e31d3;}}
}
B5e31ab:L5e31ab:{c.instructions+=4;NFSU2_TR(0x5e31ab);
{u32 ea_=u32(u32(8016320u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e31b1:{NFSU2_TR(0x5e31b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e31b3:{NFSU2_TR(0x5e31b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e31b6:{NFSU2_TR(0x5e31b6);
if(r1(R+514)){{goto L5e31c0;}}
}
B5e31b8:L5e31b8:{c.instructions+=2;NFSU2_TR(0x5e31b8);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e31be:{NFSU2_TR(0x5e31be);
{goto L5e31d3;}
}
B5e31c0:L5e31c0:{c.instructions+=4;NFSU2_TR(0x5e31c0);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e31c6:{NFSU2_TR(0x5e31c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e31c8:{NFSU2_TR(0x5e31c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e31cb:{NFSU2_TR(0x5e31cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e31d3;}}
}
B5e31cd:L5e31cd:{c.instructions+=1;NFSU2_TR(0x5e31cd);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e31d3:L5e31d3:{c.instructions+=5;NFSU2_TR(0x5e31d3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e31d5:{NFSU2_TR(0x5e31d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e31db:{NFSU2_TR(0x5e31db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e31dd:{NFSU2_TR(0x5e31dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e31e0:{NFSU2_TR(0x5e31e0);
if(r1(R+514)){{goto L5e31eb;}}
}
B5e31e2:L5e31e2:{c.instructions+=2;NFSU2_TR(0x5e31e2);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+12)),r1(U+0));
}
B5e31e5:{NFSU2_TR(0x5e31e5);
__builtin_memmove((R+4),gp(0x88f2bc),1);
}
B5e31eb:L5e31eb:{c.instructions+=6;NFSU2_TR(0x5e31eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e31ef:{NFSU2_TR(0x5e31ef);
{u32 ea_=u32(u32(8975032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e31f5:{NFSU2_TR(0x5e31f5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e31f8:{NFSU2_TR(0x5e31f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e31fc:{NFSU2_TR(0x5e31fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3200:{NFSU2_TR(0x5e3200);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3217;}}
}
B5e3202:L5e3202:{c.instructions+=4;NFSU2_TR(0x5e3202);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3208:{NFSU2_TR(0x5e3208);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e320a:{NFSU2_TR(0x5e320a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e320d:{NFSU2_TR(0x5e320d);
if(r1(R+518)){{goto L5e3217;}}
}
B5e320f:L5e320f:{c.instructions+=2;NFSU2_TR(0x5e320f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3211:{NFSU2_TR(0x5e3211);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3217:L5e3217:{c.instructions+=17;NFSU2_TR(0x5e3217);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e321b:{NFSU2_TR(0x5e321b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e321f:{NFSU2_TR(0x5e321f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3223:{NFSU2_TR(0x5e3223);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3227:{NFSU2_TR(0x5e3227);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e3229:{NFSU2_TR(0x5e3229);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e322b:{NFSU2_TR(0x5e322b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5e322d:{NFSU2_TR(0x5e322d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5e322f:{NFSU2_TR(0x5e322f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e3231:{NFSU2_TR(0x5e3231);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e3233:{NFSU2_TR(0x5e3233);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5e3235:{NFSU2_TR(0x5e3235);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3237:{NFSU2_TR(0x5e3237);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3239:{NFSU2_TR(0x5e3239);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e323b:{NFSU2_TR(0x5e323b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e323d:{NFSU2_TR(0x5e323d);
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
B5e3240:{NFSU2_TR(0x5e3240);
if(r1(R+518)){{goto L5e3448;}}
}
B5e3246:L5e3246:{c.instructions+=10;NFSU2_TR(0x5e3246);
{u32 ea_=u32(u32(8013400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e324c:{NFSU2_TR(0x5e324c);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e3252:{NFSU2_TR(0x5e3252);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3258:{NFSU2_TR(0x5e3258);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e325c:{NFSU2_TR(0x5e325c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e325e:{NFSU2_TR(0x5e325e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3262:{NFSU2_TR(0x5e3262);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3264:{NFSU2_TR(0x5e3264);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3266:{NFSU2_TR(0x5e3266);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3269:{NFSU2_TR(0x5e3269);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3271;}}
}
B5e326b:L5e326b:{c.instructions+=2;NFSU2_TR(0x5e326b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e326d:{NFSU2_TR(0x5e326d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3271:L5e3271:{c.instructions+=5;NFSU2_TR(0x5e3271);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3277:{NFSU2_TR(0x5e3277);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3279:{NFSU2_TR(0x5e3279);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e327b:{NFSU2_TR(0x5e327b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e327e:{NFSU2_TR(0x5e327e);
if(r1(R+514)){{goto L5e3288;}}
}
B5e3280:L5e3280:{c.instructions+=2;NFSU2_TR(0x5e3280);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3282:{NFSU2_TR(0x5e3282);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3288:L5e3288:{c.instructions+=6;NFSU2_TR(0x5e3288);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e328c:{NFSU2_TR(0x5e328c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e328e:{NFSU2_TR(0x5e328e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3290:{NFSU2_TR(0x5e3290);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3292:{NFSU2_TR(0x5e3292);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3295:{NFSU2_TR(0x5e3295);
if(r1(R+514)){{goto L5e32b3;}}
}
B5e3297:L5e3297:{c.instructions+=2;NFSU2_TR(0x5e3297);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3299:{NFSU2_TR(0x5e3299);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e32b3;}}
}
B5e329b:L5e329b:{c.instructions+=4;NFSU2_TR(0x5e329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e329e:{NFSU2_TR(0x5e329e);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e32a1:{NFSU2_TR(0x5e32a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e32a3:{NFSU2_TR(0x5e32a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e32b3;}}
}
B5e32a5:L5e32a5:{c.instructions+=2;NFSU2_TR(0x5e32a5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5e32a8:{NFSU2_TR(0x5e32a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e32b3;}}
}
B5e32aa:L5e32aa:{c.instructions+=2;NFSU2_TR(0x5e32aa);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+12)),r1(U+0));
}
B5e32ad:{NFSU2_TR(0x5e32ad);
__builtin_memmove((R+4),gp(0x88f2bc),1);
}
B5e32b3:L5e32b3:{c.instructions+=4;NFSU2_TR(0x5e32b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e32b9:{NFSU2_TR(0x5e32b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e32bb:{NFSU2_TR(0x5e32bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e32be:{NFSU2_TR(0x5e32be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e32c4;}}
}
B5e32c0:L5e32c0:{c.instructions+=2;NFSU2_TR(0x5e32c0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e32c2:{NFSU2_TR(0x5e32c2);
{goto L5e32ca;}
}
B5e32c4:L5e32c4:{c.instructions+=1;NFSU2_TR(0x5e32c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e32ca:L5e32ca:{c.instructions+=5;NFSU2_TR(0x5e32ca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e32ce:{NFSU2_TR(0x5e32ce);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e32d0:{NFSU2_TR(0x5e32d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e32d2:{NFSU2_TR(0x5e32d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e32d5:{NFSU2_TR(0x5e32d5);
if(r1(R+514)){{goto L5e32dd;}}
}
B5e32d7:L5e32d7:{c.instructions+=2;NFSU2_TR(0x5e32d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e32d9:{NFSU2_TR(0x5e32d9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e32dd:L5e32dd:{c.instructions+=6;NFSU2_TR(0x5e32dd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e32df:{NFSU2_TR(0x5e32df);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e32e1:{NFSU2_TR(0x5e32e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e32e3:{NFSU2_TR(0x5e32e3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e32e5:{NFSU2_TR(0x5e32e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e32e8:{NFSU2_TR(0x5e32e8);
if(r1(R+514)){{goto L5e3301;}}
}
B5e32ea:L5e32ea:{c.instructions+=2;NFSU2_TR(0x5e32ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e32ec:{NFSU2_TR(0x5e32ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3301;}}
}
B5e32ee:L5e32ee:{c.instructions+=4;NFSU2_TR(0x5e32ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e32f1:{NFSU2_TR(0x5e32f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e32f4:{NFSU2_TR(0x5e32f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e32f7:{NFSU2_TR(0x5e32f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3301;}}
}
B5e32f9:L5e32f9:{c.instructions+=2;NFSU2_TR(0x5e32f9);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5e32fc:{NFSU2_TR(0x5e32fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3301;}}
}
B5e32fe:L5e32fe:{c.instructions+=1;NFSU2_TR(0x5e32fe);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+12)),r1(U+0));
}
B5e3301:L5e3301:{c.instructions+=2;NFSU2_TR(0x5e3301);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e3303:{NFSU2_TR(0x5e3303);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e3305:L5e3305:{c.instructions+=4;NFSU2_TR(0x5e3305);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e3309:{NFSU2_TR(0x5e3309);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e330b:{NFSU2_TR(0x5e330b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3310:{NFSU2_TR(0x5e3310);
if(r1(R+518)){{goto L5e331f;}}
}
B5e3312:L5e3312:{c.instructions+=2;NFSU2_TR(0x5e3312);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e3318:{NFSU2_TR(0x5e3318);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e331f;}}
}
B5e331a:L5e331a:{c.instructions+=1;NFSU2_TR(0x5e331a);
w4(R+4,u32(0x1ull));
}
B5e331f:L5e331f:{c.instructions+=3;NFSU2_TR(0x5e331f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e3323:{NFSU2_TR(0x5e3323);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3328:{NFSU2_TR(0x5e3328);
if(r1(R+518)){{goto L5e3333;}}
}
B5e332a:L5e332a:{c.instructions+=2;NFSU2_TR(0x5e332a);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e3330:{NFSU2_TR(0x5e3330);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e3333;}}
}
B5e3332:L5e3332:{c.instructions+=1;NFSU2_TR(0x5e3332);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e3333:L5e3333:{c.instructions+=2;NFSU2_TR(0x5e3333);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e3335:{NFSU2_TR(0x5e3335);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e33d3;}}
}
B5e333b:L5e333b:{c.instructions+=3;NFSU2_TR(0x5e333b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e333c:{NFSU2_TR(0x5e333c);
__builtin_memmove((R+4),(R+24),4);
}
B5e333e:{NFSU2_TR(0x5e333e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3343ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5e3343:L5e3343:{c.instructions+=3;NFSU2_TR(0x5e3343);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3347:{NFSU2_TR(0x5e3347);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e334a:{NFSU2_TR(0x5e334a);
if(r1(R+518)){{goto L5e3391;}}
}
B5e334c:L5e334c:{c.instructions+=2;NFSU2_TR(0x5e334c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e334d:{NFSU2_TR(0x5e334d);
if(r1(R+518)){{goto L5e3383;}}
}
B5e334f:L5e334f:{c.instructions+=2;NFSU2_TR(0x5e334f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e3350:{NFSU2_TR(0x5e3350);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3362;}}
}
B5e3352:L5e3352:{c.instructions+=3;NFSU2_TR(0x5e3352);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e3355:{NFSU2_TR(0x5e3355);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e3358:{NFSU2_TR(0x5e3358);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e335b:L5e335b:{c.instructions+=3;NFSU2_TR(0x5e335b);
__builtin_memmove((R+4),(R+518),1);
}
B5e335e:{NFSU2_TR(0x5e335e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3360:{NFSU2_TR(0x5e3360);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e33c9;}}
}
B5e3362:L5e3362:{c.instructions+=7;NFSU2_TR(0x5e3362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3365:{NFSU2_TR(0x5e3365);
u8 U[5];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5e3369:{NFSU2_TR(0x5e3369);
__builtin_memmove((R+8),(R+4),4);
}
B5e336b:{NFSU2_TR(0x5e336b);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e336e:{NFSU2_TR(0x5e336e);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5e3371:{NFSU2_TR(0x5e3371);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e3373:{NFSU2_TR(0x5e3373);
if(r1(R+518)){{goto L5e33c9;}}
}
B5e3375:L5e3375:{c.instructions+=3;NFSU2_TR(0x5e3375);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e3378:{NFSU2_TR(0x5e3378);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e337b:{NFSU2_TR(0x5e337b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e33ab;}}
}
B5e337d:L5e337d:{c.instructions+=2;NFSU2_TR(0x5e337d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e3381:{NFSU2_TR(0x5e3381);
{goto L5e33af;}
}
B5e3383:L5e3383:{c.instructions+=5;NFSU2_TR(0x5e3383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3386:{NFSU2_TR(0x5e3386);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e3389:{NFSU2_TR(0x5e3389);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e338c:{NFSU2_TR(0x5e338c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e338f:{NFSU2_TR(0x5e338f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e335bu);}goto L5e335b;}
}
B5e3391:L5e3391:{c.instructions+=4;NFSU2_TR(0x5e3391);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e3394:{NFSU2_TR(0x5e3394);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e3397:{NFSU2_TR(0x5e3397);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e339a:{NFSU2_TR(0x5e339a);
if(r1(R+518)){{goto L5e33c9;}}
}
B5e339c:L5e339c:{c.instructions+=2;NFSU2_TR(0x5e339c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e339f:{NFSU2_TR(0x5e339f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3362u);}goto L5e3362;}}
}
B5e33a1:L5e33a1:{c.instructions+=3;NFSU2_TR(0x5e33a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e33a5:{NFSU2_TR(0x5e33a5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e33a6:{NFSU2_TR(0x5e33a6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3305u);}goto L5e3305;}
}
B5e33ab:L5e33ab:{c.instructions+=1;NFSU2_TR(0x5e33ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e33af:L5e33af:{c.instructions+=3;NFSU2_TR(0x5e33af);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5e33b2:{NFSU2_TR(0x5e33b2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e33b4:{NFSU2_TR(0x5e33b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e33bf;}}
}
B5e33b6:L5e33b6:{c.instructions+=2;NFSU2_TR(0x5e33b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e33bd:{NFSU2_TR(0x5e33bd);
{goto L5e33c1;}
}
B5e33bf:L5e33bf:{c.instructions+=1;NFSU2_TR(0x5e33bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e33c1:L5e33c1:{c.instructions+=2;NFSU2_TR(0x5e33c1);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e33c5:{NFSU2_TR(0x5e33c5);
if(r1(R+518)){{goto L5e33c9;}}
}
B5e33c7:L5e33c7:{c.instructions+=1;NFSU2_TR(0x5e33c7);
__builtin_memmove((R+20),(R+0),4);
}
B5e33c9:L5e33c9:{c.instructions+=3;NFSU2_TR(0x5e33c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e33cd:{NFSU2_TR(0x5e33cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e33ce:{NFSU2_TR(0x5e33ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3305u);}goto L5e3305;}
}
B5e33d3:L5e33d3:{c.instructions+=2;NFSU2_TR(0x5e33d3);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e33d5:{NFSU2_TR(0x5e33d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e345f;}}
}
B5e33db:L5e33db:{c.instructions+=9;NFSU2_TR(0x5e33db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e33de:{NFSU2_TR(0x5e33de);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5e33e3:{NFSU2_TR(0x5e33e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5e33ea:{NFSU2_TR(0x5e33ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e33ee:{NFSU2_TR(0x5e33ee);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5e33f0:{NFSU2_TR(0x5e33f0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B5e33f6:{NFSU2_TR(0x5e33f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e33f8:{NFSU2_TR(0x5e33f8);
w4(R+0,u32(0x92492493ull));
}
B5e33fd:{NFSU2_TR(0x5e33fd);
if(r1(R+518)){{goto L5e3424;}}
}
B5e33ff:L5e33ff:{c.instructions+=10;NFSU2_TR(0x5e33ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e3401:{NFSU2_TR(0x5e3401);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e3403:{NFSU2_TR(0x5e3403);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e3406:{NFSU2_TR(0x5e3406);
__builtin_memmove((R+0),(R+8),4);
}
B5e3408:{NFSU2_TR(0x5e3408);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e340b:{NFSU2_TR(0x5e340b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5e340d:{NFSU2_TR(0x5e340d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e3411:{NFSU2_TR(0x5e3411);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3414:{NFSU2_TR(0x5e3414);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e3416:{NFSU2_TR(0x5e3416);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e344a;}}
}
B5e3418:L5e3418:{c.instructions+=3;NFSU2_TR(0x5e3418);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e341b:{NFSU2_TR(0x5e341b);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e3422:{NFSU2_TR(0x5e3422);
{goto L5e343b;}
}
B5e3424:L5e3424:{c.instructions+=7;NFSU2_TR(0x5e3424);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5e3426:{NFSU2_TR(0x5e3426);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e3428:{NFSU2_TR(0x5e3428);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5e342b:{NFSU2_TR(0x5e342b);
__builtin_memmove((R+0),(R+8),4);
}
B5e342d:{NFSU2_TR(0x5e342d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e3430:{NFSU2_TR(0x5e3430);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e3432:{NFSU2_TR(0x5e3432);
if(r1(R+518)){{goto L5e344a;}}
}
B5e3434:L5e3434:{c.instructions+=2;NFSU2_TR(0x5e3434);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e3437:{NFSU2_TR(0x5e3437);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5e343b:L5e343b:{c.instructions+=2;NFSU2_TR(0x5e343b);
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
B5e343d:{NFSU2_TR(0x5e343d);
if(r1(R+518)){{goto L5e344a;}}
}
B5e343f:L5e343f:{c.instructions+=2;NFSU2_TR(0x5e343f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3443:{NFSU2_TR(0x5e3443);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3099u);}goto L5e3099;}
}
B5e3448:L5e3448:{c.instructions+=1;NFSU2_TR(0x5e3448);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e344a:L5e344a:{c.instructions+=2;NFSU2_TR(0x5e344a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e344e:{NFSU2_TR(0x5e344e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3453ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e3453:L5e3453:{c.instructions+=7;NFSU2_TR(0x5e3453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3454:{NFSU2_TR(0x5e3454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3455:{NFSU2_TR(0x5e3455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3456:{NFSU2_TR(0x5e3456);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e3458:{NFSU2_TR(0x5e3458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3459:{NFSU2_TR(0x5e3459);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e345c:{NFSU2_TR(0x5e345c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e345f:L5e345f:{c.instructions+=2;NFSU2_TR(0x5e345f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3463:{NFSU2_TR(0x5e3463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3468ull));
TAIL_STATIC(0x4022c0u,402);
}
B5e3468:L5e3468:{c.instructions+=7;NFSU2_TR(0x5e3468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3469:{NFSU2_TR(0x5e3469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e346a:{NFSU2_TR(0x5e346a);
__builtin_memmove((R+0),(R+20),4);
}
B5e346c:{NFSU2_TR(0x5e346c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e346d:{NFSU2_TR(0x5e346d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e346e:{NFSU2_TR(0x5e346e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x48ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x48ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e3471:{NFSU2_TR(0x5e3471);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3480:L5e3480:{c.instructions+=11;NFSU2_TR(0x5e3480);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3481:{NFSU2_TR(0x5e3481);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3482:{NFSU2_TR(0x5e3482);
__builtin_memmove((R+24),(R+4),4);
}
B5e3484:{NFSU2_TR(0x5e3484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3487:{NFSU2_TR(0x5e3487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3489:{NFSU2_TR(0x5e3489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e348b:{NFSU2_TR(0x5e348b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e348c:{NFSU2_TR(0x5e348c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3490:{NFSU2_TR(0x5e3490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3491:{NFSU2_TR(0x5e3491);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3492:{NFSU2_TR(0x5e3492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3497ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5e3497:L5e3497:{c.instructions+=6;NFSU2_TR(0x5e3497);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e349b:{NFSU2_TR(0x5e349b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e349d:{NFSU2_TR(0x5e349d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e34a1:{NFSU2_TR(0x5e34a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e34a3:{NFSU2_TR(0x5e34a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e34a6:{NFSU2_TR(0x5e34a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e34b4;}}
}
B5e34a8:L5e34a8:{c.instructions+=5;NFSU2_TR(0x5e34a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e34ae:{NFSU2_TR(0x5e34ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e34af:{NFSU2_TR(0x5e34af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e34b0:{NFSU2_TR(0x5e34b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e34b1:{NFSU2_TR(0x5e34b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e34b4:L5e34b4:{c.instructions+=6;NFSU2_TR(0x5e34b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e34b7:{NFSU2_TR(0x5e34b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e34b9:{NFSU2_TR(0x5e34b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e34bb:{NFSU2_TR(0x5e34bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e34bc:{NFSU2_TR(0x5e34bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e34bd:{NFSU2_TR(0x5e34bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e34c2ull));
TAIL_STATIC(0x40cc40u,40c);
}
B5e34c2:L5e34c2:{c.instructions+=13;NFSU2_TR(0x5e34c2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e34c6:{NFSU2_TR(0x5e34c6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e34ca:{NFSU2_TR(0x5e34ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e34cd:{NFSU2_TR(0x5e34cd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e34d1:{NFSU2_TR(0x5e34d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e34d3:{NFSU2_TR(0x5e34d3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e34d7:{NFSU2_TR(0x5e34d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e34d8:{NFSU2_TR(0x5e34d8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e34dc:{NFSU2_TR(0x5e34dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e34de:{NFSU2_TR(0x5e34de);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5e34e0:{NFSU2_TR(0x5e34e0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e34e2:{NFSU2_TR(0x5e34e2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e34e6:{NFSU2_TR(0x5e34e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e34ebull));
TAIL_STATIC(0x401c40u,401);
}
B5e34eb:L5e34eb:{c.instructions+=17;NFSU2_TR(0x5e34eb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e34ef:{NFSU2_TR(0x5e34ef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e34f3:{NFSU2_TR(0x5e34f3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5e34f5:{NFSU2_TR(0x5e34f5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e34f9:{NFSU2_TR(0x5e34f9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e34fd:{NFSU2_TR(0x5e34fd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3501:{NFSU2_TR(0x5e3501);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B5e3503:{NFSU2_TR(0x5e3503);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3507:{NFSU2_TR(0x5e3507);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e3509:{NFSU2_TR(0x5e3509);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e350b:{NFSU2_TR(0x5e350b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e350d:{NFSU2_TR(0x5e350d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e350f:{NFSU2_TR(0x5e350f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3511:{NFSU2_TR(0x5e3511);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5e3513:{NFSU2_TR(0x5e3513);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3515:{NFSU2_TR(0x5e3515);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3518:{NFSU2_TR(0x5e3518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3520;}}
}
B5e351a:L5e351a:{c.instructions+=2;NFSU2_TR(0x5e351a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e351c:{NFSU2_TR(0x5e351c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3520:L5e3520:{c.instructions+=4;NFSU2_TR(0x5e3520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3521:{NFSU2_TR(0x5e3521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3522:{NFSU2_TR(0x5e3522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3523:{NFSU2_TR(0x5e3523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3530:L5e3530:{c.instructions+=11;NFSU2_TR(0x5e3530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5e3533:{NFSU2_TR(0x5e3533);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3534:{NFSU2_TR(0x5e3534);
__builtin_memmove((R+24),(R+4),4);
}
B5e3536:{NFSU2_TR(0x5e3536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3539:{NFSU2_TR(0x5e3539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e353b:{NFSU2_TR(0x5e353b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e353d:{NFSU2_TR(0x5e353d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e353e:{NFSU2_TR(0x5e353e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3542:{NFSU2_TR(0x5e3542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3543:{NFSU2_TR(0x5e3543);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3544:{NFSU2_TR(0x5e3544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3549ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5e3549:L5e3549:{c.instructions+=7;NFSU2_TR(0x5e3549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e354c:{NFSU2_TR(0x5e354c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e354e:{NFSU2_TR(0x5e354e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3550:{NFSU2_TR(0x5e3550);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3551:{NFSU2_TR(0x5e3551);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3555:{NFSU2_TR(0x5e3555);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3556:{NFSU2_TR(0x5e3556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e355bull));
TAIL_STATIC(0x40cc40u,40c);
}
B5e355b:L5e355b:{c.instructions+=8;NFSU2_TR(0x5e355b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e355e:{NFSU2_TR(0x5e355e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e3560:{NFSU2_TR(0x5e3560);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3564:{NFSU2_TR(0x5e3564);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3565:{NFSU2_TR(0x5e3565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3567:{NFSU2_TR(0x5e3567);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e356b:{NFSU2_TR(0x5e356b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e356c:{NFSU2_TR(0x5e356c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3571ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B5e3571:L5e3571:{c.instructions+=7;NFSU2_TR(0x5e3571);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3574:{NFSU2_TR(0x5e3574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3576:{NFSU2_TR(0x5e3576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3578:{NFSU2_TR(0x5e3578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3579:{NFSU2_TR(0x5e3579);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e357d:{NFSU2_TR(0x5e357d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e357e:{NFSU2_TR(0x5e357e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3583ull));
TAIL_STATIC(0x40cc40u,40c);
}
B5e3583:L5e3583:{c.instructions+=12;NFSU2_TR(0x5e3583);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3587:{NFSU2_TR(0x5e3587);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e358b:{NFSU2_TR(0x5e358b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e358c:{NFSU2_TR(0x5e358c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3590:{NFSU2_TR(0x5e3590);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5e3592:{NFSU2_TR(0x5e3592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3593:{NFSU2_TR(0x5e3593);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e3595:{NFSU2_TR(0x5e3595);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e3597:{NFSU2_TR(0x5e3597);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e359d:{NFSU2_TR(0x5e359d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e359f:{NFSU2_TR(0x5e359f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e35a2:{NFSU2_TR(0x5e35a2);
if(r1(R+514)){{goto L5e35b8;}}
}
B5e35a4:L5e35a4:{c.instructions+=6;NFSU2_TR(0x5e35a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e35a6:{NFSU2_TR(0x5e35a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e35a8:{NFSU2_TR(0x5e35a8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e35ac:{NFSU2_TR(0x5e35ac);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e35b2:{NFSU2_TR(0x5e35b2);
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
B5e35b5:{NFSU2_TR(0x5e35b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e35b8:L5e35b8:{c.instructions+=6;NFSU2_TR(0x5e35b8);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5e35ba:{NFSU2_TR(0x5e35ba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e35be:{NFSU2_TR(0x5e35be);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B5e35c0:{NFSU2_TR(0x5e35c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e35c2:{NFSU2_TR(0x5e35c2);
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
B5e35c5:{NFSU2_TR(0x5e35c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e35d0:L5e35d0:{c.instructions+=14;NFSU2_TR(0x5e35d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e35d3:{NFSU2_TR(0x5e35d3);
{u32 ea_=u32(u32(8875296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e35d9:{NFSU2_TR(0x5e35d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e35dd:{NFSU2_TR(0x5e35dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e35df:{NFSU2_TR(0x5e35df);
{u32 ea_=u32(u32(8875296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e35e5:{NFSU2_TR(0x5e35e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e35e6:{NFSU2_TR(0x5e35e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e35ea:{NFSU2_TR(0x5e35ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e35eb:{NFSU2_TR(0x5e35eb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e35ef:{NFSU2_TR(0x5e35ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e35f3:{NFSU2_TR(0x5e35f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e35f4:{NFSU2_TR(0x5e35f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e35f5:{NFSU2_TR(0x5e35f5);
__builtin_memmove((R+28),(R+4),4);
}
B5e35f7:{NFSU2_TR(0x5e35f7);
if(r1(R+518)){{goto L5e3671;}}
}
B5e35f9:L5e35f9:{c.instructions+=3;NFSU2_TR(0x5e35f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e35fc:{NFSU2_TR(0x5e35fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e35fe:{NFSU2_TR(0x5e35fe);
if(r1(R+518)){{goto L5e3671;}}
}
B5e3600:L5e3600:{c.instructions+=4;NFSU2_TR(0x5e3600);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3606:{NFSU2_TR(0x5e3606);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e360a:{NFSU2_TR(0x5e360a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e360e:{NFSU2_TR(0x5e360e);
__builtin_memmove((R+28),(R+28),4);
}
B5e3610:L5e3610:{c.instructions+=12;NFSU2_TR(0x5e3610);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3613:{NFSU2_TR(0x5e3613);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3617:{NFSU2_TR(0x5e3617);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e361a:{NFSU2_TR(0x5e361a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e361b:{NFSU2_TR(0x5e361b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e361c:{NFSU2_TR(0x5e361c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e361d:{NFSU2_TR(0x5e361d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3621:{NFSU2_TR(0x5e3621);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3624:{NFSU2_TR(0x5e3624);
__builtin_memmove((R+4),(R+24),4);
}
B5e3626:{NFSU2_TR(0x5e3626);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e3629:{NFSU2_TR(0x5e3629);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e362d:{NFSU2_TR(0x5e362d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3632ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3480u);}goto L5e3480;}
}
B5e3632:L5e3632:{c.instructions+=16;NFSU2_TR(0x5e3632);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3636:{NFSU2_TR(0x5e3636);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e363a:{NFSU2_TR(0x5e363a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e363e:{NFSU2_TR(0x5e363e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e3640:{NFSU2_TR(0x5e3640);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3644:{NFSU2_TR(0x5e3644);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3648:{NFSU2_TR(0x5e3648);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e364a:{NFSU2_TR(0x5e364a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e364e:{NFSU2_TR(0x5e364e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e3654:{NFSU2_TR(0x5e3654);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5e3656:{NFSU2_TR(0x5e3656);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3659:{NFSU2_TR(0x5e3659);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e365c:{NFSU2_TR(0x5e365c);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e365f:{NFSU2_TR(0x5e365f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3665:{NFSU2_TR(0x5e3665);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3668:{NFSU2_TR(0x5e3668);
if(r1(R+518)){{goto L5e3671;}}
}
B5e366a:L5e366a:{c.instructions+=3;NFSU2_TR(0x5e366a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e366d:{NFSU2_TR(0x5e366d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e366f:{NFSU2_TR(0x5e366f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3610u);}goto L5e3610;}}
}
B5e3671:L5e3671:{c.instructions+=3;NFSU2_TR(0x5e3671);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3675:{NFSU2_TR(0x5e3675);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3677:{NFSU2_TR(0x5e3677);
if(r1(R+518)){{goto L5e36f1;}}
}
B5e3679:L5e3679:{c.instructions+=3;NFSU2_TR(0x5e3679);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e367c:{NFSU2_TR(0x5e367c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e367e:{NFSU2_TR(0x5e367e);
if(r1(R+518)){{goto L5e36f1;}}
}
B5e3680:L5e3680:{c.instructions+=4;NFSU2_TR(0x5e3680);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3686:{NFSU2_TR(0x5e3686);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e368a:{NFSU2_TR(0x5e368a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e368e:{NFSU2_TR(0x5e368e);
__builtin_memmove((R+28),(R+28),4);
}
B5e3690:L5e3690:{c.instructions+=12;NFSU2_TR(0x5e3690);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3693:{NFSU2_TR(0x5e3693);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3697:{NFSU2_TR(0x5e3697);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e369a:{NFSU2_TR(0x5e369a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e369b:{NFSU2_TR(0x5e369b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e369c:{NFSU2_TR(0x5e369c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e369d:{NFSU2_TR(0x5e369d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e36a1:{NFSU2_TR(0x5e36a1);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e36a4:{NFSU2_TR(0x5e36a4);
__builtin_memmove((R+4),(R+24),4);
}
B5e36a6:{NFSU2_TR(0x5e36a6);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e36a9:{NFSU2_TR(0x5e36a9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e36ad:{NFSU2_TR(0x5e36ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e36b2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3480u);}goto L5e3480;}
}
B5e36b2:L5e36b2:{c.instructions+=16;NFSU2_TR(0x5e36b2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e36b6:{NFSU2_TR(0x5e36b6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e36ba:{NFSU2_TR(0x5e36ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e36be:{NFSU2_TR(0x5e36be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e36c0:{NFSU2_TR(0x5e36c0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e36c4:{NFSU2_TR(0x5e36c4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e36c8:{NFSU2_TR(0x5e36c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5e36ca:{NFSU2_TR(0x5e36ca);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e36ce:{NFSU2_TR(0x5e36ce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e36d4:{NFSU2_TR(0x5e36d4);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5e36d6:{NFSU2_TR(0x5e36d6);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e36d9:{NFSU2_TR(0x5e36d9);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e36dc:{NFSU2_TR(0x5e36dc);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e36df:{NFSU2_TR(0x5e36df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e36e5:{NFSU2_TR(0x5e36e5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e36e8:{NFSU2_TR(0x5e36e8);
if(r1(R+518)){{goto L5e36f1;}}
}
B5e36ea:L5e36ea:{c.instructions+=3;NFSU2_TR(0x5e36ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e36ed:{NFSU2_TR(0x5e36ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e36ef:{NFSU2_TR(0x5e36ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3690u);}goto L5e3690;}}
}
B5e36f1:L5e36f1:{c.instructions+=6;NFSU2_TR(0x5e36f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e36f2:{NFSU2_TR(0x5e36f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e36f3:{NFSU2_TR(0x5e36f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e36f4:{NFSU2_TR(0x5e36f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e36f5:{NFSU2_TR(0x5e36f5);
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
B5e36f8:{NFSU2_TR(0x5e36f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3700:L5e3700:{c.instructions+=14;NFSU2_TR(0x5e3700);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3701:{NFSU2_TR(0x5e3701);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3705:{NFSU2_TR(0x5e3705);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3706:{NFSU2_TR(0x5e3706);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e370a:{NFSU2_TR(0x5e370a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e370b:{NFSU2_TR(0x5e370b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e370f:{NFSU2_TR(0x5e370f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3710:{NFSU2_TR(0x5e3710);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3711:{NFSU2_TR(0x5e3711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3712:{NFSU2_TR(0x5e3712);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3713:{NFSU2_TR(0x5e3713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3714:{NFSU2_TR(0x5e3714);
__builtin_memmove((R+28),(R+4),4);
}
B5e3716:{NFSU2_TR(0x5e3716);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e371e:{NFSU2_TR(0x5e371e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3723ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3480u);}goto L5e3480;}
}
B5e3723:L5e3723:{c.instructions+=6;NFSU2_TR(0x5e3723);
{u32 ea_=u32(u32(8016324u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3729:{NFSU2_TR(0x5e3729);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e372c:{NFSU2_TR(0x5e372c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3730:{NFSU2_TR(0x5e3730);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3732:{NFSU2_TR(0x5e3732);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3735:{NFSU2_TR(0x5e3735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3795;}}
}
B5e3737:L5e3737:{c.instructions+=6;NFSU2_TR(0x5e3737);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e3739:{NFSU2_TR(0x5e3739);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e373f:{NFSU2_TR(0x5e373f);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5e3741:{NFSU2_TR(0x5e3741);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3743:{NFSU2_TR(0x5e3743);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3746:{NFSU2_TR(0x5e3746);
if(r1(R+514)){{goto L5e3750;}}
}
B5e3748:L5e3748:{c.instructions+=2;NFSU2_TR(0x5e3748);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e374a:{NFSU2_TR(0x5e374a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3750:L5e3750:{c.instructions+=6;NFSU2_TR(0x5e3750);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3752:{NFSU2_TR(0x5e3752);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3754:{NFSU2_TR(0x5e3754);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3756:{NFSU2_TR(0x5e3756);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3758:{NFSU2_TR(0x5e3758);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e375b:{NFSU2_TR(0x5e375b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e37c3;}}
}
B5e375d:L5e375d:{c.instructions+=7;NFSU2_TR(0x5e375d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3761:{NFSU2_TR(0x5e3761);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3764:{NFSU2_TR(0x5e3764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e3766:{NFSU2_TR(0x5e3766);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3767:{NFSU2_TR(0x5e3767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3769:{NFSU2_TR(0x5e3769);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e376a:{NFSU2_TR(0x5e376a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e376full));
TAIL_STATIC(0x401c40u,401);
}
B5e376f:L5e376f:{c.instructions+=4;NFSU2_TR(0x5e376f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3770:{NFSU2_TR(0x5e3770);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3773:{NFSU2_TR(0x5e3773);
__builtin_memmove((R+4),(R+28),4);
}
B5e3775:{NFSU2_TR(0x5e3775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e377aull));
TAIL_STATIC(0x5d8dc0u,5d8);
}
B5e377a:L5e377a:{c.instructions+=7;NFSU2_TR(0x5e377a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e377e:{NFSU2_TR(0x5e377e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e3780:{NFSU2_TR(0x5e3780);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3786:{NFSU2_TR(0x5e3786);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3788:{NFSU2_TR(0x5e3788);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e378a:{NFSU2_TR(0x5e378a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e378d:{NFSU2_TR(0x5e378d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e379d;}}
}
B5e378f:L5e378f:{c.instructions+=2;NFSU2_TR(0x5e378f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3793:{NFSU2_TR(0x5e3793);
{goto L5e379f;}
}
B5e3795:L5e3795:{c.instructions+=2;NFSU2_TR(0x5e3795);
{u32 ea_=u32(u32(8016324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e379b:{NFSU2_TR(0x5e379b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3750u);}goto L5e3750;}
}
B5e379d:L5e379d:{c.instructions+=1;NFSU2_TR(0x5e379d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e379f:L5e379f:{c.instructions+=3;NFSU2_TR(0x5e379f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e37a3:{NFSU2_TR(0x5e37a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e37a5:{NFSU2_TR(0x5e37a5);
if(r1(R+518)){{goto L5e37c3;}}
}
B5e37a7:L5e37a7:{c.instructions+=5;NFSU2_TR(0x5e37a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e37ab:{NFSU2_TR(0x5e37ab);
{u32 ea_=u32(u32(7909640u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e37b1:{NFSU2_TR(0x5e37b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e37b3:{NFSU2_TR(0x5e37b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e37b6:{NFSU2_TR(0x5e37b6);
if(r1(R+514)){{goto L5e37bf;}}
}
B5e37b8:L5e37b8:{c.instructions+=2;NFSU2_TR(0x5e37b8);
w4(R+0,u32(0x1ull));
}
B5e37bd:{NFSU2_TR(0x5e37bd);
{goto L5e37c1;}
}
B5e37bf:L5e37bf:{c.instructions+=1;NFSU2_TR(0x5e37bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e37c1:L5e37c1:{c.instructions+=1;NFSU2_TR(0x5e37c1);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5e37c3:L5e37c3:{c.instructions+=3;NFSU2_TR(0x5e37c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e37c6:{NFSU2_TR(0x5e37c6);
__builtin_memmove((R+24),(R+28),4);
}
B5e37c8:{NFSU2_TR(0x5e37c8);
if(r1(R+518)){{goto L5e38c0;}}
}
B5e37ce:L5e37ce:{c.instructions+=1;NFSU2_TR(0x5e37ce);
__builtin_memmove((R+28),(R+28),4);
}
B5e37d0:L5e37d0:{c.instructions+=7;NFSU2_TR(0x5e37d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e37d4:{NFSU2_TR(0x5e37d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e37d7:{NFSU2_TR(0x5e37d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e37d8:{NFSU2_TR(0x5e37d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e37d9:{NFSU2_TR(0x5e37d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e37da:{NFSU2_TR(0x5e37da);
__builtin_memmove((R+4),(R+24),4);
}
B5e37dc:{NFSU2_TR(0x5e37dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e37e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3480u);}goto L5e3480;}
}
B5e37e1:L5e37e1:{c.instructions+=6;NFSU2_TR(0x5e37e1);
{u32 ea_=u32(u32(8016324u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e37e7:{NFSU2_TR(0x5e37e7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e37ea:{NFSU2_TR(0x5e37ea);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e37ee:{NFSU2_TR(0x5e37ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e37f0:{NFSU2_TR(0x5e37f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e37f3:{NFSU2_TR(0x5e37f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e38aa;}}
}
B5e37f9:L5e37f9:{c.instructions+=6;NFSU2_TR(0x5e37f9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e37fb:{NFSU2_TR(0x5e37fb);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3801:{NFSU2_TR(0x5e3801);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5e3803:{NFSU2_TR(0x5e3803);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3805:{NFSU2_TR(0x5e3805);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3808:{NFSU2_TR(0x5e3808);
if(r1(R+514)){{goto L5e3812;}}
}
B5e380a:L5e380a:{c.instructions+=2;NFSU2_TR(0x5e380a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e380c:{NFSU2_TR(0x5e380c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3812:L5e3812:{c.instructions+=6;NFSU2_TR(0x5e3812);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3814:{NFSU2_TR(0x5e3814);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3816:{NFSU2_TR(0x5e3816);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3818:{NFSU2_TR(0x5e3818);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e381a:{NFSU2_TR(0x5e381a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e381d:{NFSU2_TR(0x5e381d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e38b7;}}
}
B5e3823:L5e3823:{c.instructions+=18;NFSU2_TR(0x5e3823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e3825:{NFSU2_TR(0x5e3825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3827:{NFSU2_TR(0x5e3827);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e382b:{NFSU2_TR(0x5e382b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e382e:{NFSU2_TR(0x5e382e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3832:{NFSU2_TR(0x5e3832);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e3836:{NFSU2_TR(0x5e3836);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e383a:{NFSU2_TR(0x5e383a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e383d:{NFSU2_TR(0x5e383d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e3840:{NFSU2_TR(0x5e3840);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3844:{NFSU2_TR(0x5e3844);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e384a:{NFSU2_TR(0x5e384a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e384e:{NFSU2_TR(0x5e384e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3854:{NFSU2_TR(0x5e3854);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3858:{NFSU2_TR(0x5e3858);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e385a:{NFSU2_TR(0x5e385a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e385c:{NFSU2_TR(0x5e385c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e385f:{NFSU2_TR(0x5e385f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3867;}}
}
B5e3861:L5e3861:{c.instructions+=2;NFSU2_TR(0x5e3861);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3863:{NFSU2_TR(0x5e3863);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3867:L5e3867:{c.instructions+=13;NFSU2_TR(0x5e3867);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B5e386c:{NFSU2_TR(0x5e386c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3870:{NFSU2_TR(0x5e3870);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e3873:{NFSU2_TR(0x5e3873);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3877:{NFSU2_TR(0x5e3877);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3878:{NFSU2_TR(0x5e3878);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3879:{NFSU2_TR(0x5e3879);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e387d:{NFSU2_TR(0x5e387d);
__builtin_memmove((R+4),(R+24),4);
}
B5e387f:{NFSU2_TR(0x5e387f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3885:{NFSU2_TR(0x5e3885);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e3887:{NFSU2_TR(0x5e3887);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e388a:{NFSU2_TR(0x5e388a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e388c:{NFSU2_TR(0x5e388c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3891ull));
TAIL_STATIC(0x5d8dc0u,5d8);
}
B5e3891:L5e3891:{c.instructions+=7;NFSU2_TR(0x5e3891);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e3895:{NFSU2_TR(0x5e3895);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e3897:{NFSU2_TR(0x5e3897);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e389b:{NFSU2_TR(0x5e389b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e389d:{NFSU2_TR(0x5e389d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e389f:{NFSU2_TR(0x5e389f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e38a2:{NFSU2_TR(0x5e38a2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e38b5;}}
}
B5e38a4:L5e38a4:{c.instructions+=2;NFSU2_TR(0x5e38a4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e38a8:{NFSU2_TR(0x5e38a8);
{goto L5e38b7;}
}
B5e38aa:L5e38aa:{c.instructions+=2;NFSU2_TR(0x5e38aa);
{u32 ea_=u32(u32(8016324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e38b0:{NFSU2_TR(0x5e38b0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3812u);}goto L5e3812;}
}
B5e38b5:L5e38b5:{c.instructions+=1;NFSU2_TR(0x5e38b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e38b7:L5e38b7:{c.instructions+=2;NFSU2_TR(0x5e38b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e38ba:{NFSU2_TR(0x5e38ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e37d0u);}goto L5e37d0;}}
}
B5e38c0:L5e38c0:{c.instructions+=3;NFSU2_TR(0x5e38c0);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e38c3:{NFSU2_TR(0x5e38c3);
__builtin_memmove((R+24),(R+28),4);
}
B5e38c5:{NFSU2_TR(0x5e38c5);
if(r1(R+518)){{goto L5e39c0;}}
}
B5e38cb:L5e38cb:{c.instructions+=1;NFSU2_TR(0x5e38cb);
{goto L5e38d0;}
}
B5e38d0:L5e38d0:{c.instructions+=7;NFSU2_TR(0x5e38d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e38d3:{NFSU2_TR(0x5e38d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e38d7:{NFSU2_TR(0x5e38d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e38d8:{NFSU2_TR(0x5e38d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e38d9:{NFSU2_TR(0x5e38d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e38da:{NFSU2_TR(0x5e38da);
__builtin_memmove((R+4),(R+24),4);
}
B5e38dc:{NFSU2_TR(0x5e38dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e38e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3480u);}goto L5e3480;}
}
B5e38e1:L5e38e1:{c.instructions+=6;NFSU2_TR(0x5e38e1);
{u32 ea_=u32(u32(8016324u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e38e7:{NFSU2_TR(0x5e38e7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e38ea:{NFSU2_TR(0x5e38ea);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e38ee:{NFSU2_TR(0x5e38ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e38f0:{NFSU2_TR(0x5e38f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e38f3:{NFSU2_TR(0x5e38f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e39aa;}}
}
B5e38f9:L5e38f9:{c.instructions+=6;NFSU2_TR(0x5e38f9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e38fb:{NFSU2_TR(0x5e38fb);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3901:{NFSU2_TR(0x5e3901);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5e3903:{NFSU2_TR(0x5e3903);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3905:{NFSU2_TR(0x5e3905);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3908:{NFSU2_TR(0x5e3908);
if(r1(R+514)){{goto L5e3912;}}
}
B5e390a:L5e390a:{c.instructions+=2;NFSU2_TR(0x5e390a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e390c:{NFSU2_TR(0x5e390c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3912:L5e3912:{c.instructions+=6;NFSU2_TR(0x5e3912);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3914:{NFSU2_TR(0x5e3914);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3916:{NFSU2_TR(0x5e3916);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3918:{NFSU2_TR(0x5e3918);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e391a:{NFSU2_TR(0x5e391a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e391d:{NFSU2_TR(0x5e391d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e39b7;}}
}
B5e3923:L5e3923:{c.instructions+=18;NFSU2_TR(0x5e3923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e3925:{NFSU2_TR(0x5e3925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3927:{NFSU2_TR(0x5e3927);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e392b:{NFSU2_TR(0x5e392b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e392e:{NFSU2_TR(0x5e392e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3932:{NFSU2_TR(0x5e3932);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e3936:{NFSU2_TR(0x5e3936);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e393a:{NFSU2_TR(0x5e393a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e393d:{NFSU2_TR(0x5e393d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e3940:{NFSU2_TR(0x5e3940);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3944:{NFSU2_TR(0x5e3944);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e394a:{NFSU2_TR(0x5e394a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e394e:{NFSU2_TR(0x5e394e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3954:{NFSU2_TR(0x5e3954);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3958:{NFSU2_TR(0x5e3958);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e395a:{NFSU2_TR(0x5e395a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e395c:{NFSU2_TR(0x5e395c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e395f:{NFSU2_TR(0x5e395f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3967;}}
}
B5e3961:L5e3961:{c.instructions+=2;NFSU2_TR(0x5e3961);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3963:{NFSU2_TR(0x5e3963);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3967:L5e3967:{c.instructions+=13;NFSU2_TR(0x5e3967);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(s32(s8(r1(U+12)))));
}
B5e396c:{NFSU2_TR(0x5e396c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3970:{NFSU2_TR(0x5e3970);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e3973:{NFSU2_TR(0x5e3973);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3977:{NFSU2_TR(0x5e3977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3978:{NFSU2_TR(0x5e3978);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3979:{NFSU2_TR(0x5e3979);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e397d:{NFSU2_TR(0x5e397d);
__builtin_memmove((R+4),(R+24),4);
}
B5e397f:{NFSU2_TR(0x5e397f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3985:{NFSU2_TR(0x5e3985);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e3987:{NFSU2_TR(0x5e3987);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e398a:{NFSU2_TR(0x5e398a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e398c:{NFSU2_TR(0x5e398c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3991ull));
TAIL_STATIC(0x5d8dc0u,5d8);
}
B5e3991:L5e3991:{c.instructions+=7;NFSU2_TR(0x5e3991);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e3995:{NFSU2_TR(0x5e3995);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e3997:{NFSU2_TR(0x5e3997);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e399b:{NFSU2_TR(0x5e399b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e399d:{NFSU2_TR(0x5e399d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e399f:{NFSU2_TR(0x5e399f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e39a2:{NFSU2_TR(0x5e39a2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e39b5;}}
}
B5e39a4:L5e39a4:{c.instructions+=2;NFSU2_TR(0x5e39a4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e39a8:{NFSU2_TR(0x5e39a8);
{goto L5e39b7;}
}
B5e39aa:L5e39aa:{c.instructions+=2;NFSU2_TR(0x5e39aa);
{u32 ea_=u32(u32(8016324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e39b0:{NFSU2_TR(0x5e39b0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3912u);}goto L5e3912;}
}
B5e39b5:L5e39b5:{c.instructions+=1;NFSU2_TR(0x5e39b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e39b7:L5e39b7:{c.instructions+=2;NFSU2_TR(0x5e39b7);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5e39ba:{NFSU2_TR(0x5e39ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e38d0u);}goto L5e38d0;}}
}
B5e39c0:L5e39c0:{c.instructions+=7;NFSU2_TR(0x5e39c0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e39c4:{NFSU2_TR(0x5e39c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e39c5:{NFSU2_TR(0x5e39c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e39c6:{NFSU2_TR(0x5e39c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e39c7:{NFSU2_TR(0x5e39c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e39c8:{NFSU2_TR(0x5e39c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e39c9:{NFSU2_TR(0x5e39c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e39d0:L5e39d0:{c.instructions+=16;NFSU2_TR(0x5e39d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e39d1:{NFSU2_TR(0x5e39d1);
__builtin_memmove((R+20),(R+16),4);
}
B5e39d3:{NFSU2_TR(0x5e39d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5e39d6:{NFSU2_TR(0x5e39d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B5e39d9:{NFSU2_TR(0x5e39d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e39da:{NFSU2_TR(0x5e39da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e39db:{NFSU2_TR(0x5e39db);
__builtin_memmove((R+24),(R+4),4);
}
B5e39dd:{NFSU2_TR(0x5e39dd);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e39e0:{NFSU2_TR(0x5e39e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e39e1:{NFSU2_TR(0x5e39e1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e39e3:{NFSU2_TR(0x5e39e3);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5e39e5:{NFSU2_TR(0x5e39e5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e39e9:{NFSU2_TR(0x5e39e9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e39ef:{NFSU2_TR(0x5e39ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e39f1:{NFSU2_TR(0x5e39f1);
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
B5e39f4:{NFSU2_TR(0x5e39f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3e36;}}
}
B5e39fa:L5e39fa:{c.instructions+=27;NFSU2_TR(0x5e39fa);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e39fd:{NFSU2_TR(0x5e39fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e3a00:{NFSU2_TR(0x5e3a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3a03:{NFSU2_TR(0x5e3a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3a06:{NFSU2_TR(0x5e3a06);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3a0a:{NFSU2_TR(0x5e3a0a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B5e3a0d:{NFSU2_TR(0x5e3a0d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3a11:{NFSU2_TR(0x5e3a11);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3a13:{NFSU2_TR(0x5e3a13);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B5e3a16:{NFSU2_TR(0x5e3a16);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3a18:{NFSU2_TR(0x5e3a18);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3a1c:{NFSU2_TR(0x5e3a1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3a1d:{NFSU2_TR(0x5e3a1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3a21:{NFSU2_TR(0x5e3a21);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3a27:{NFSU2_TR(0x5e3a27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3a28:{NFSU2_TR(0x5e3a28);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3a2c:{NFSU2_TR(0x5e3a2c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3a2f:{NFSU2_TR(0x5e3a2f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3a32:{NFSU2_TR(0x5e3a32);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3a38:{NFSU2_TR(0x5e3a38);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3a3c:{NFSU2_TR(0x5e3a3c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3a40:{NFSU2_TR(0x5e3a40);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3a43:{NFSU2_TR(0x5e3a43);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3a47:{NFSU2_TR(0x5e3a47);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3a4a:{NFSU2_TR(0x5e3a4a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e3a4e:{NFSU2_TR(0x5e3a4e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3a52:{NFSU2_TR(0x5e3a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3a57ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e3a57:L5e3a57:{c.instructions+=13;NFSU2_TR(0x5e3a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3a5a:{NFSU2_TR(0x5e3a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3a5d:{NFSU2_TR(0x5e3a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3a60:{NFSU2_TR(0x5e3a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3a63:{NFSU2_TR(0x5e3a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3a67:{NFSU2_TR(0x5e3a67);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3a6b:{NFSU2_TR(0x5e3a6b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3a6e:{NFSU2_TR(0x5e3a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3a72:{NFSU2_TR(0x5e3a72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e3a75:{NFSU2_TR(0x5e3a75);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e3a7b:{NFSU2_TR(0x5e3a7b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3a7d:{NFSU2_TR(0x5e3a7d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3a80:{NFSU2_TR(0x5e3a80);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e3e00;}}
}
B5e3a86:L5e3a86:{c.instructions+=6;NFSU2_TR(0x5e3a86);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3a8a:{NFSU2_TR(0x5e3a8a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3a8d:{NFSU2_TR(0x5e3a8d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e3a93:{NFSU2_TR(0x5e3a93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3a95:{NFSU2_TR(0x5e3a95);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3a98:{NFSU2_TR(0x5e3a98);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e3e00;}}
}
B5e3a9e:L5e3a9e:{c.instructions+=9;NFSU2_TR(0x5e3a9e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3aa2:{NFSU2_TR(0x5e3aa2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3aa6:{NFSU2_TR(0x5e3aa6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3aaa:{NFSU2_TR(0x5e3aaa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3aae:{NFSU2_TR(0x5e3aae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3ab2:{NFSU2_TR(0x5e3ab2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3ab6:{NFSU2_TR(0x5e3ab6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3ab8:{NFSU2_TR(0x5e3ab8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3abb:{NFSU2_TR(0x5e3abb);
if(r1(R+518)){{goto L5e3ac3;}}
}
B5e3abd:L5e3abd:{c.instructions+=2;NFSU2_TR(0x5e3abd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3abf:{NFSU2_TR(0x5e3abf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ac3:L5e3ac3:{c.instructions+=5;NFSU2_TR(0x5e3ac3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ac7:{NFSU2_TR(0x5e3ac7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3ac9:{NFSU2_TR(0x5e3ac9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3acb:{NFSU2_TR(0x5e3acb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3ace:{NFSU2_TR(0x5e3ace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3ad6;}}
}
B5e3ad0:L5e3ad0:{c.instructions+=2;NFSU2_TR(0x5e3ad0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3ad2:{NFSU2_TR(0x5e3ad2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ad6:L5e3ad6:{c.instructions+=14;NFSU2_TR(0x5e3ad6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ada:{NFSU2_TR(0x5e3ada);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5e3adc:{NFSU2_TR(0x5e3adc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3ae0:{NFSU2_TR(0x5e3ae0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3ae2:{NFSU2_TR(0x5e3ae2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ae8:{NFSU2_TR(0x5e3ae8);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e3aeb:{NFSU2_TR(0x5e3aeb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5e3aed:{NFSU2_TR(0x5e3aed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3af1:{NFSU2_TR(0x5e3af1);
{u32 ea_=u32(u32(8013724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3af7:{NFSU2_TR(0x5e3af7);
{u32 ea_=u32(u32(8875292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3afd:{NFSU2_TR(0x5e3afd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5e3b03:{NFSU2_TR(0x5e3b03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3b05:{NFSU2_TR(0x5e3b05);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e3b08:{NFSU2_TR(0x5e3b08);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e3b10;}}
}
B5e3b0a:L5e3b0a:{c.instructions+=2;NFSU2_TR(0x5e3b0a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3b0e:{NFSU2_TR(0x5e3b0e);
{goto L5e3b16;}
}
B5e3b10:L5e3b10:{c.instructions+=1;NFSU2_TR(0x5e3b10);
{u32 ea_=u32(u32(8013728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3b16:L5e3b16:{c.instructions+=47;NFSU2_TR(0x5e3b16);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3b1a:{NFSU2_TR(0x5e3b1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3b1b:{NFSU2_TR(0x5e3b1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3b1f:{NFSU2_TR(0x5e3b1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3b23:{NFSU2_TR(0x5e3b23);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3b27:{NFSU2_TR(0x5e3b27);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3b2b:{NFSU2_TR(0x5e3b2b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3b2f:{NFSU2_TR(0x5e3b2f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3b33:{NFSU2_TR(0x5e3b33);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3b37:{NFSU2_TR(0x5e3b37);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3b39:{NFSU2_TR(0x5e3b39);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3b3b:{NFSU2_TR(0x5e3b3b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3b3e:{NFSU2_TR(0x5e3b3e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3b41:{NFSU2_TR(0x5e3b41);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e3b43:{NFSU2_TR(0x5e3b43);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5e3b45:{NFSU2_TR(0x5e3b45);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e3b47:{NFSU2_TR(0x5e3b47);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e3b49:{NFSU2_TR(0x5e3b49);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5e3b4b:{NFSU2_TR(0x5e3b4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3b4d:{NFSU2_TR(0x5e3b4d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e3b4f:{NFSU2_TR(0x5e3b4f);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5e3b51:{NFSU2_TR(0x5e3b51);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3b57:{NFSU2_TR(0x5e3b57);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e3b59:{NFSU2_TR(0x5e3b59);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5e3b5b:{NFSU2_TR(0x5e3b5b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3b5f:{NFSU2_TR(0x5e3b5f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3b63:{NFSU2_TR(0x5e3b63);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5e3b65:{NFSU2_TR(0x5e3b65);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e3b67:{NFSU2_TR(0x5e3b67);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e3b6b:{NFSU2_TR(0x5e3b6b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3b6f:{NFSU2_TR(0x5e3b6f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3b73:{NFSU2_TR(0x5e3b73);
__asm__ volatile(".byte 0xde,0xe2":::"memory");
}
B5e3b75:{NFSU2_TR(0x5e3b75);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3b77:{NFSU2_TR(0x5e3b77);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5e3b79:{NFSU2_TR(0x5e3b79);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3b7b:{NFSU2_TR(0x5e3b7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e3b7d:{NFSU2_TR(0x5e3b7d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5e3b81:{NFSU2_TR(0x5e3b81);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5e3b83:{NFSU2_TR(0x5e3b83);
{u32 ea_=u32(u32(8875288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3b89:{NFSU2_TR(0x5e3b89);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3b8d:{NFSU2_TR(0x5e3b8d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3b91:{NFSU2_TR(0x5e3b91);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3b95:{NFSU2_TR(0x5e3b95);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3b98:{NFSU2_TR(0x5e3b98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3b99:{NFSU2_TR(0x5e3b99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3b9a:{NFSU2_TR(0x5e3b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3b9b:{NFSU2_TR(0x5e3b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3ba0ull));
TAIL_STATIC(0x43d090u,43d);
}
B5e3ba0:L5e3ba0:{c.instructions+=11;NFSU2_TR(0x5e3ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3ba4:{NFSU2_TR(0x5e3ba4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e3ba7:{NFSU2_TR(0x5e3ba7);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3bab:{NFSU2_TR(0x5e3bab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bac:{NFSU2_TR(0x5e3bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3baf:{NFSU2_TR(0x5e3baf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bb0:{NFSU2_TR(0x5e3bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3bb4:{NFSU2_TR(0x5e3bb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bb5:{NFSU2_TR(0x5e3bb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bb6:{NFSU2_TR(0x5e3bb6);
__builtin_memmove((R+4),(R+24),4);
}
B5e3bb8:{NFSU2_TR(0x5e3bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3bbdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3700u);}goto L5e3700;}
}
B5e3bbd:L5e3bbd:{c.instructions+=4;NFSU2_TR(0x5e3bbd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5e3bc3:{NFSU2_TR(0x5e3bc3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3bc5:{NFSU2_TR(0x5e3bc5);
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
B5e3bc8:{NFSU2_TR(0x5e3bc8);
if(r1(R+514)){{goto L5e3dea;}}
}
B5e3bce:L5e3bce:{c.instructions+=15;NFSU2_TR(0x5e3bce);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3bd2:{NFSU2_TR(0x5e3bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3bd6:{NFSU2_TR(0x5e3bd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bd7:{NFSU2_TR(0x5e3bd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3bdb:{NFSU2_TR(0x5e3bdb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3bdf:{NFSU2_TR(0x5e3bdf);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3be3:{NFSU2_TR(0x5e3be3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3be7:{NFSU2_TR(0x5e3be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3beb:{NFSU2_TR(0x5e3beb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3bef:{NFSU2_TR(0x5e3bef);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3bf3:{NFSU2_TR(0x5e3bf3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3bf6:{NFSU2_TR(0x5e3bf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bf7:{NFSU2_TR(0x5e3bf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bf8:{NFSU2_TR(0x5e3bf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3bf9:{NFSU2_TR(0x5e3bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3bfeull));
TAIL_STATIC(0x43d090u,43d);
}
B5e3bfe:L5e3bfe:{c.instructions+=4;NFSU2_TR(0x5e3bfe);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e3c02:{NFSU2_TR(0x5e3c02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e3c05:{NFSU2_TR(0x5e3c05);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3c07:{NFSU2_TR(0x5e3c07);
if(r1(R+518)){{goto L5e3dbd;}}
}
B5e3c0d:L5e3c0d:{c.instructions+=10;NFSU2_TR(0x5e3c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3c11:{NFSU2_TR(0x5e3c11);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3c15:{NFSU2_TR(0x5e3c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c16:{NFSU2_TR(0x5e3c16);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3c1a:{NFSU2_TR(0x5e3c1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c1b:{NFSU2_TR(0x5e3c1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c1c:{NFSU2_TR(0x5e3c1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3c20:{NFSU2_TR(0x5e3c20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c21:{NFSU2_TR(0x5e3c21);
__builtin_memmove((R+4),(R+24),4);
}
B5e3c23:{NFSU2_TR(0x5e3c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3c28ull));
TAIL_STATIC(0x5d4900u,5d4);
}
B5e3c28:L5e3c28:{c.instructions+=3;NFSU2_TR(0x5e3c28);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3c2c:{NFSU2_TR(0x5e3c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3c2e:{NFSU2_TR(0x5e3c2e);
if(r1(R+518)){{goto L5e3dbd;}}
}
B5e3c34:L5e3c34:{c.instructions+=3;NFSU2_TR(0x5e3c34);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e3c38:{NFSU2_TR(0x5e3c38);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3c3a:{NFSU2_TR(0x5e3c3a);
if(r1(R+518)){{goto L5e3dbd;}}
}
B5e3c40:L5e3c40:{c.instructions+=15;NFSU2_TR(0x5e3c40);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3c43:{NFSU2_TR(0x5e3c43);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3c46:{NFSU2_TR(0x5e3c46);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5e3c48:{NFSU2_TR(0x5e3c48);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e3c4a:{NFSU2_TR(0x5e3c4a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3c4e:{NFSU2_TR(0x5e3c4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3c52:{NFSU2_TR(0x5e3c52);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5e3c54:{NFSU2_TR(0x5e3c54);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e3c56:{NFSU2_TR(0x5e3c56);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3c5a:{NFSU2_TR(0x5e3c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3c5e:{NFSU2_TR(0x5e3c5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c5f:{NFSU2_TR(0x5e3c5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3c61:{NFSU2_TR(0x5e3c61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c62:{NFSU2_TR(0x5e3c62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3c64:{NFSU2_TR(0x5e3c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3c69ull));
TAIL_STATIC(0x401050u,401);
}
B5e3c69:L5e3c69:{c.instructions+=5;NFSU2_TR(0x5e3c69);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3c6d:{NFSU2_TR(0x5e3c6d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3c71:{NFSU2_TR(0x5e3c71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e3c74:{NFSU2_TR(0x5e3c74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c75:{NFSU2_TR(0x5e3c75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3c7aull));
TAIL_STATIC(0x401050u,401);
}
B5e3c7a:L5e3c7a:{c.instructions+=28;NFSU2_TR(0x5e3c7a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3c80:{NFSU2_TR(0x5e3c80);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5e3c82:{NFSU2_TR(0x5e3c82);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3c86:{NFSU2_TR(0x5e3c86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c87:{NFSU2_TR(0x5e3c87);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3c8b:{NFSU2_TR(0x5e3c8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3c8c:{NFSU2_TR(0x5e3c8c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3c90:{NFSU2_TR(0x5e3c90);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3c92:{NFSU2_TR(0x5e3c92);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3c96:{NFSU2_TR(0x5e3c96);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3c9a:{NFSU2_TR(0x5e3c9a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3c9e:{NFSU2_TR(0x5e3c9e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ca2:{NFSU2_TR(0x5e3ca2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3ca6:{NFSU2_TR(0x5e3ca6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3caa:{NFSU2_TR(0x5e3caa);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3cae:{NFSU2_TR(0x5e3cae);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3cb1:{NFSU2_TR(0x5e3cb1);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3cb4:{NFSU2_TR(0x5e3cb4);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3cb7:{NFSU2_TR(0x5e3cb7);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3cba:{NFSU2_TR(0x5e3cba);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3cbe:{NFSU2_TR(0x5e3cbe);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3cc2:{NFSU2_TR(0x5e3cc2);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3cc5:{NFSU2_TR(0x5e3cc5);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3cc8:{NFSU2_TR(0x5e3cc8);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3ccb:{NFSU2_TR(0x5e3ccb);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3cce:{NFSU2_TR(0x5e3cce);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3cd2:{NFSU2_TR(0x5e3cd2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3cd6:{NFSU2_TR(0x5e3cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3cdbull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e3cdb:L5e3cdb:{c.instructions+=5;NFSU2_TR(0x5e3cdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3cdf:{NFSU2_TR(0x5e3cdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ce0:{NFSU2_TR(0x5e3ce0);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3ce4:{NFSU2_TR(0x5e3ce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ce5:{NFSU2_TR(0x5e3ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3ceaull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e3cea:L5e3cea:{c.instructions+=17;NFSU2_TR(0x5e3cea);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3cee:{NFSU2_TR(0x5e3cee);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3cf2:{NFSU2_TR(0x5e3cf2);
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
B5e3cf5:{NFSU2_TR(0x5e3cf5);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3cf9:{NFSU2_TR(0x5e3cf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3cfd:{NFSU2_TR(0x5e3cfd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3d01:{NFSU2_TR(0x5e3d01);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3d05:{NFSU2_TR(0x5e3d05);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3d09:{NFSU2_TR(0x5e3d09);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3d0d:{NFSU2_TR(0x5e3d0d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3d11:{NFSU2_TR(0x5e3d11);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3d15:{NFSU2_TR(0x5e3d15);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3d19:{NFSU2_TR(0x5e3d19);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3d1c:{NFSU2_TR(0x5e3d1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d1d:{NFSU2_TR(0x5e3d1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d1e:{NFSU2_TR(0x5e3d1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d1f:{NFSU2_TR(0x5e3d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3d24ull));
TAIL_STATIC(0x43d090u,43d);
}
B5e3d24:L5e3d24:{c.instructions+=11;NFSU2_TR(0x5e3d24);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3d28:{NFSU2_TR(0x5e3d28);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3d2c:{NFSU2_TR(0x5e3d2c);
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
B5e3d2f:{NFSU2_TR(0x5e3d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3d33:{NFSU2_TR(0x5e3d33);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3d37:{NFSU2_TR(0x5e3d37);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3d3a:{NFSU2_TR(0x5e3d3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d3b:{NFSU2_TR(0x5e3d3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d3c:{NFSU2_TR(0x5e3d3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3d40:{NFSU2_TR(0x5e3d40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d41:{NFSU2_TR(0x5e3d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3d46ull));
TAIL_STATIC(0x43d090u,43d);
}
B5e3d46:L5e3d46:{c.instructions+=5;NFSU2_TR(0x5e3d46);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3d4a:{NFSU2_TR(0x5e3d4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d4b:{NFSU2_TR(0x5e3d4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3d4f:{NFSU2_TR(0x5e3d4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d50:{NFSU2_TR(0x5e3d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3d55ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5e3d55:L5e3d55:{c.instructions+=11;NFSU2_TR(0x5e3d55);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3d59:{NFSU2_TR(0x5e3d59);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3d5d:{NFSU2_TR(0x5e3d5d);
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
B5e3d60:{NFSU2_TR(0x5e3d60);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3d64:{NFSU2_TR(0x5e3d64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3d67:{NFSU2_TR(0x5e3d67);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3d6a:{NFSU2_TR(0x5e3d6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d6b:{NFSU2_TR(0x5e3d6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d6c:{NFSU2_TR(0x5e3d6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e3d70:{NFSU2_TR(0x5e3d70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d71:{NFSU2_TR(0x5e3d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3d76ull));
TAIL_STATIC(0x43d090u,43d);
}
B5e3d76:L5e3d76:{c.instructions+=10;NFSU2_TR(0x5e3d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3d7a:{NFSU2_TR(0x5e3d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3d7d:{NFSU2_TR(0x5e3d7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5e3d80:{NFSU2_TR(0x5e3d80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d82:{NFSU2_TR(0x5e3d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d83:{NFSU2_TR(0x5e3d83);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3d87:{NFSU2_TR(0x5e3d87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d88:{NFSU2_TR(0x5e3d88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d89:{NFSU2_TR(0x5e3d89);
__builtin_memmove((R+4),(R+24),4);
}
B5e3d8b:{NFSU2_TR(0x5e3d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3d90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3700u);}goto L5e3700;}
}
B5e3d90:L5e3d90:{c.instructions+=11;NFSU2_TR(0x5e3d90);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3d92:{NFSU2_TR(0x5e3d92);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3d96:{NFSU2_TR(0x5e3d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3d99:{NFSU2_TR(0x5e3d99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d9a:{NFSU2_TR(0x5e3d9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d9b:{NFSU2_TR(0x5e3d9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3d9c:{NFSU2_TR(0x5e3d9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3da0:{NFSU2_TR(0x5e3da0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3da1:{NFSU2_TR(0x5e3da1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3da2:{NFSU2_TR(0x5e3da2);
__builtin_memmove((R+4),(R+24),4);
}
B5e3da4:{NFSU2_TR(0x5e3da4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3da9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e35d0u);}goto L5e35d0;}
}
B5e3da9:L5e3da9:{c.instructions+=4;NFSU2_TR(0x5e3da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3dac:{NFSU2_TR(0x5e3dac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3dad:{NFSU2_TR(0x5e3dad);
__builtin_memmove((R+4),(R+24),4);
}
B5e3daf:{NFSU2_TR(0x5e3daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3db4ull));
TAIL_STATIC(0x5d4890u,5d4);
}
B5e3db4:L5e3db4:{c.instructions+=6;NFSU2_TR(0x5e3db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3db5:{NFSU2_TR(0x5e3db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3db6:{NFSU2_TR(0x5e3db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3db7:{NFSU2_TR(0x5e3db7);
__builtin_memmove((R+16),(R+20),4);
}
B5e3db9:{NFSU2_TR(0x5e3db9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3dba:{NFSU2_TR(0x5e3dba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3dbd:L5e3dbd:{c.instructions+=9;NFSU2_TR(0x5e3dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3dc1:{NFSU2_TR(0x5e3dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3dc4:{NFSU2_TR(0x5e3dc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3dc6:{NFSU2_TR(0x5e3dc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3dc7:{NFSU2_TR(0x5e3dc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e3dcb:{NFSU2_TR(0x5e3dcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3dcc:{NFSU2_TR(0x5e3dcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3dcd:{NFSU2_TR(0x5e3dcd);
__builtin_memmove((R+4),(R+24),4);
}
B5e3dcf:{NFSU2_TR(0x5e3dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3dd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3700u);}goto L5e3700;}
}
B5e3dd4:L5e3dd4:{c.instructions+=5;NFSU2_TR(0x5e3dd4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3dd6:{NFSU2_TR(0x5e3dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3dd9:{NFSU2_TR(0x5e3dd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3dda:{NFSU2_TR(0x5e3dda);
__builtin_memmove((R+4),(R+24),4);
}
B5e3ddc:{NFSU2_TR(0x5e3ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3de1ull));
TAIL_STATIC(0x5d4890u,5d4);
}
B5e3de1:L5e3de1:{c.instructions+=6;NFSU2_TR(0x5e3de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3de2:{NFSU2_TR(0x5e3de2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3de3:{NFSU2_TR(0x5e3de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3de4:{NFSU2_TR(0x5e3de4);
__builtin_memmove((R+16),(R+20),4);
}
B5e3de6:{NFSU2_TR(0x5e3de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3de7:{NFSU2_TR(0x5e3de7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3dea:L5e3dea:{c.instructions+=5;NFSU2_TR(0x5e3dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3ded:{NFSU2_TR(0x5e3ded);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3def:{NFSU2_TR(0x5e3def);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3df0:{NFSU2_TR(0x5e3df0);
__builtin_memmove((R+4),(R+24),4);
}
B5e3df2:{NFSU2_TR(0x5e3df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3df7ull));
TAIL_STATIC(0x5d4890u,5d4);
}
B5e3df7:L5e3df7:{c.instructions+=6;NFSU2_TR(0x5e3df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3df8:{NFSU2_TR(0x5e3df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3df9:{NFSU2_TR(0x5e3df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3dfa:{NFSU2_TR(0x5e3dfa);
__builtin_memmove((R+16),(R+20),4);
}
B5e3dfc:{NFSU2_TR(0x5e3dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3dfd:{NFSU2_TR(0x5e3dfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3e00:L5e3e00:{c.instructions+=5;NFSU2_TR(0x5e3e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e3e03:{NFSU2_TR(0x5e3e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e3e05:{NFSU2_TR(0x5e3e05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e06:{NFSU2_TR(0x5e3e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3e08:{NFSU2_TR(0x5e3e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3e0dull));
TAIL_STATIC(0x401c40u,401);
}
B5e3e0d:L5e3e0d:{c.instructions+=5;NFSU2_TR(0x5e3e0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e0e:{NFSU2_TR(0x5e3e0e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3e12:{NFSU2_TR(0x5e3e12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e13:{NFSU2_TR(0x5e3e13);
__builtin_memmove((R+4),(R+24),4);
}
B5e3e15:{NFSU2_TR(0x5e3e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3e1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3530u);}goto L5e3530;}
}
B5e3e1a:L5e3e1a:{c.instructions+=7;NFSU2_TR(0x5e3e1a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e3e1e:{NFSU2_TR(0x5e3e1e);
{u32 ea_=u32(u32(8875284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3e24:{NFSU2_TR(0x5e3e24);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3e27:{NFSU2_TR(0x5e3e27);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3e2a:{NFSU2_TR(0x5e3e2a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3e2d:{NFSU2_TR(0x5e3e2d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e3e33:{NFSU2_TR(0x5e3e33);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3e36:L5e3e36:{c.instructions+=6;NFSU2_TR(0x5e3e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3e37:{NFSU2_TR(0x5e3e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3e38:{NFSU2_TR(0x5e3e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3e39:{NFSU2_TR(0x5e3e39);
__builtin_memmove((R+16),(R+20),4);
}
B5e3e3b:{NFSU2_TR(0x5e3e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3e3c:{NFSU2_TR(0x5e3e3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3e40:L5e3e40:{c.instructions+=11;NFSU2_TR(0x5e3e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5e3e43:{NFSU2_TR(0x5e3e43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e44:{NFSU2_TR(0x5e3e44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e45:{NFSU2_TR(0x5e3e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e3e49:{NFSU2_TR(0x5e3e49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e4a:{NFSU2_TR(0x5e3e4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e4b:{NFSU2_TR(0x5e3e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3e4e:{NFSU2_TR(0x5e3e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3e52:{NFSU2_TR(0x5e3e52);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3e55:{NFSU2_TR(0x5e3e55);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e3e5d:{NFSU2_TR(0x5e3e5d);
__builtin_memmove((R+4),(R+4),4);
}
B5e3e60:L5e3e60:{c.instructions+=3;NFSU2_TR(0x5e3e60);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e3e62:{NFSU2_TR(0x5e3e62);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+523,sborrow<u16>(r2(U+2),r2(R+24)));
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+24))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e3e65:{NFSU2_TR(0x5e3e65);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e3e7a;}}
}
B5e3e67:L5e3e67:{c.instructions+=3;NFSU2_TR(0x5e3e67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3e68:{NFSU2_TR(0x5e3e68);
__builtin_memmove((R+4),(R+28),4);
}
B5e3e6a:{NFSU2_TR(0x5e3e6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3e6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e39d0u);}goto L5e39d0;}
}
B5e3e6f:L5e3e6f:{c.instructions+=5;NFSU2_TR(0x5e3e6f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B5e3e72:{NFSU2_TR(0x5e3e72);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e3e73:{NFSU2_TR(0x5e3e73);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B5e3e76:{NFSU2_TR(0x5e3e76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e3e78:{NFSU2_TR(0x5e3e78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3e67u);}goto L5e3e67;}}
}
B5e3e7a:L5e3e7a:{c.instructions+=8;NFSU2_TR(0x5e3e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e3e7e:{NFSU2_TR(0x5e3e7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3e82:{NFSU2_TR(0x5e3e82);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
}
B5e3e88:{NFSU2_TR(0x5e3e88);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B5e3e8b:{NFSU2_TR(0x5e3e8b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e3e8c:{NFSU2_TR(0x5e3e8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3e90:{NFSU2_TR(0x5e3e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3e94:{NFSU2_TR(0x5e3e94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3e60u);}goto L5e3e60;}}
}
B5e3e96:L5e3e96:{c.instructions+=6;NFSU2_TR(0x5e3e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3e97:{NFSU2_TR(0x5e3e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3e98:{NFSU2_TR(0x5e3e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3e99:{NFSU2_TR(0x5e3e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3e9a:{NFSU2_TR(0x5e3e9a);
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
B5e3e9d:{NFSU2_TR(0x5e3e9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3ea0:L5e3ea0:{c.instructions+=11;NFSU2_TR(0x5e3ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5e3ea3:{NFSU2_TR(0x5e3ea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ea4:{NFSU2_TR(0x5e3ea4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ea5:{NFSU2_TR(0x5e3ea5);
__builtin_memmove((R+20),(R+4),4);
}
B5e3ea7:{NFSU2_TR(0x5e3ea7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ea8:{NFSU2_TR(0x5e3ea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3eab:{NFSU2_TR(0x5e3eab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3eac:{NFSU2_TR(0x5e3eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3eb0:{NFSU2_TR(0x5e3eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3eb3:{NFSU2_TR(0x5e3eb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e3ebb:{NFSU2_TR(0x5e3ebb);
{goto L5e3ec0;}
}
B5e3ec0:L5e3ec0:{c.instructions+=3;NFSU2_TR(0x5e3ec0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e3ec2:{NFSU2_TR(0x5e3ec2);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+523,sborrow<u16>(r2(U+2),r2(R+28)));
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5e3ec5:{NFSU2_TR(0x5e3ec5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e3f5a;}}
}
B5e3ecb:L5e3ecb:{c.instructions+=1;NFSU2_TR(0x5e3ecb);
{goto L5e3ed0;}
}
B5e3ed0:L5e3ed0:{c.instructions+=17;NFSU2_TR(0x5e3ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e3ed3:{NFSU2_TR(0x5e3ed3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e3ed7:{NFSU2_TR(0x5e3ed7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e3eda:{NFSU2_TR(0x5e3eda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3ede:{NFSU2_TR(0x5e3ede);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5e3ee2:{NFSU2_TR(0x5e3ee2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e3ee6:{NFSU2_TR(0x5e3ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e3ee8:{NFSU2_TR(0x5e3ee8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e3eeb:{NFSU2_TR(0x5e3eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3eef:{NFSU2_TR(0x5e3eef);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3ef5:{NFSU2_TR(0x5e3ef5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e3ef9:{NFSU2_TR(0x5e3ef9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3eff:{NFSU2_TR(0x5e3eff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5e3f03:{NFSU2_TR(0x5e3f03);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e3f05:{NFSU2_TR(0x5e3f05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e3f07:{NFSU2_TR(0x5e3f07);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e3f0a:{NFSU2_TR(0x5e3f0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3f12;}}
}
B5e3f0c:L5e3f0c:{c.instructions+=2;NFSU2_TR(0x5e3f0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3f0e:{NFSU2_TR(0x5e3f0e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e3f12:L5e3f12:{c.instructions+=15;NFSU2_TR(0x5e3f12);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B5e3f17:{NFSU2_TR(0x5e3f17);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e3f1a:{NFSU2_TR(0x5e3f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3f1e:{NFSU2_TR(0x5e3f1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e3f20:{NFSU2_TR(0x5e3f20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3f23:{NFSU2_TR(0x5e3f23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e3f27:{NFSU2_TR(0x5e3f27);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e3f2d:{NFSU2_TR(0x5e3f2d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e3f2f:{NFSU2_TR(0x5e3f2f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e3f33:{NFSU2_TR(0x5e3f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e3f37:{NFSU2_TR(0x5e3f37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3f38:{NFSU2_TR(0x5e3f38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e3f3a:{NFSU2_TR(0x5e3f3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3f3c:{NFSU2_TR(0x5e3f3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3f3d:{NFSU2_TR(0x5e3f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e3f46;}}
}
B5e3f3f:L5e3f3f:{c.instructions+=1;NFSU2_TR(0x5e3f3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3f44ull));
TAIL_STATIC(0x5dd360u,5dd);
}
B5e3f44:L5e3f44:{c.instructions+=1;NFSU2_TR(0x5e3f44);
{goto L5e3f4b;}
}
B5e3f46:L5e3f46:{c.instructions+=1;NFSU2_TR(0x5e3f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e3f4bull));
TAIL_STATIC(0x5dd490u,5dd);
}
B5e3f4b:L5e3f4b:{c.instructions+=5;NFSU2_TR(0x5e3f4b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B5e3f4e:{NFSU2_TR(0x5e3f4e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e3f4f:{NFSU2_TR(0x5e3f4f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5e3f52:{NFSU2_TR(0x5e3f52);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e3f54:{NFSU2_TR(0x5e3f54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3ed0u);}goto L5e3ed0;}}
}
B5e3f5a:L5e3f5a:{c.instructions+=8;NFSU2_TR(0x5e3f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e3f5e:{NFSU2_TR(0x5e3f5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e3f62:{NFSU2_TR(0x5e3f62);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
}
B5e3f68:{NFSU2_TR(0x5e3f68);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B5e3f6b:{NFSU2_TR(0x5e3f6b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5e3f6c:{NFSU2_TR(0x5e3f6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3f70:{NFSU2_TR(0x5e3f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3f74:{NFSU2_TR(0x5e3f74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3ec0u);}goto L5e3ec0;}}
}
B5e3f7a:L5e3f7a:{c.instructions+=6;NFSU2_TR(0x5e3f7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3f7b:{NFSU2_TR(0x5e3f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3f7c:{NFSU2_TR(0x5e3f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3f7d:{NFSU2_TR(0x5e3f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e3f7e:{NFSU2_TR(0x5e3f7e);
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
B5e3f81:{NFSU2_TR(0x5e3f81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3f90:L5e3f90:{c.instructions+=19;NFSU2_TR(0x5e3f90);
__builtin_memmove((R+8),(R+4),4);
}
B5e3f92:{NFSU2_TR(0x5e3f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e3f95:{NFSU2_TR(0x5e3f95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e3f97:{NFSU2_TR(0x5e3f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3f9a:{NFSU2_TR(0x5e3f9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e3f9c:{NFSU2_TR(0x5e3f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3f9f:{NFSU2_TR(0x5e3f9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3fa0:{NFSU2_TR(0x5e3fa0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e3fa2:{NFSU2_TR(0x5e3fa2);
w4(R+0,u32(0x32ull));
}
B5e3fa7:{NFSU2_TR(0x5e3fa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3fa8:{NFSU2_TR(0x5e3fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x468cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fae:{NFSU2_TR(0x5e3fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4690ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fb4:{NFSU2_TR(0x5e3fb4);
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
B5e3fb6:{NFSU2_TR(0x5e3fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x467cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fbc:{NFSU2_TR(0x5e3fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4680ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fc2:{NFSU2_TR(0x5e3fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4684ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fc8:{NFSU2_TR(0x5e3fc8);
w4(R+4,u32(0x5dcull));
}
B5e3fcd:{NFSU2_TR(0x5e3fcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3fd0:{NFSU2_TR(0x5e3fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4688ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fda:L5e3fda:{c.instructions+=1;NFSU2_TR(0x5e3fda);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e3fdc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e3fdau);}goto L5e3fda;}
}
B5e3fdc:L5e3fdc:{c.instructions+=7;NFSU2_TR(0x5e3fdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e3fdd:{NFSU2_TR(0x5e3fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4674ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fe3:{NFSU2_TR(0x5e3fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4670ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fe9:{NFSU2_TR(0x5e3fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e3fec:{NFSU2_TR(0x5e3fec);
__builtin_memmove((R+0),(R+8),4);
}
B5e3fee:{NFSU2_TR(0x5e3fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e3fef:{NFSU2_TR(0x5e3fef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e3ff0:L5e3ff0:{c.instructions+=7;NFSU2_TR(0x5e3ff0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ff1:{NFSU2_TR(0x5e3ff1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ff2:{NFSU2_TR(0x5e3ff2);
__builtin_memmove((R+24),(R+4),4);
}
B5e3ff4:{NFSU2_TR(0x5e3ff4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e3ff5:{NFSU2_TR(0x5e3ff5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e3ff7:{NFSU2_TR(0x5e3ff7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e3ffa:{NFSU2_TR(0x5e3ffa);
__builtin_memmove((R+12),(R+12),4);
TAIL_STATIC(0x5e4000u,5e4);
}
XIT:NFSU2_TR_EXIT(0x5e3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
