#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_5f2(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c3(u8* __restrict R,Cpu& c);
u32 page_4c3(Cpu& c){return body_4c3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c3000:goto L4c3000;
case 0x4c3002:c.instructions+=13;goto B4c3002;
case 0x4c3007:c.instructions+=12;goto B4c3007;
case 0x4c300d:c.instructions+=11;goto B4c300d;
case 0x4c300e:c.instructions+=10;goto B4c300e;
case 0x4c3015:c.instructions+=9;goto B4c3015;
case 0x4c3016:c.instructions+=8;goto B4c3016;
case 0x4c3017:c.instructions+=7;goto B4c3017;
case 0x4c3018:c.instructions+=6;goto B4c3018;
case 0x4c3019:c.instructions+=5;goto B4c3019;
case 0x4c301b:c.instructions+=4;goto B4c301b;
case 0x4c301e:c.instructions+=3;goto B4c301e;
case 0x4c3023:c.instructions+=2;goto B4c3023;
case 0x4c3028:c.instructions+=1;goto B4c3028;
case 0x4c302d:goto L4c302d;
case 0x4c302e:c.instructions+=2;goto B4c302e;
case 0x4c302f:c.instructions+=1;goto B4c302f;
case 0x4c3034:goto L4c3034;
case 0x4c3037:c.instructions+=2;goto B4c3037;
case 0x4c3038:c.instructions+=1;goto B4c3038;
case 0x4c303d:goto L4c303d;
case 0x4c3040:c.instructions+=4;goto B4c3040;
case 0x4c3043:c.instructions+=3;goto B4c3043;
case 0x4c3048:c.instructions+=2;goto B4c3048;
case 0x4c304d:c.instructions+=1;goto B4c304d;
case 0x4c3052:goto L4c3052;
case 0x4c3053:c.instructions+=2;goto B4c3053;
case 0x4c3054:c.instructions+=1;goto B4c3054;
case 0x4c3059:goto L4c3059;
case 0x4c305c:c.instructions+=2;goto B4c305c;
case 0x4c305d:c.instructions+=1;goto B4c305d;
case 0x4c3062:goto L4c3062;
case 0x4c3065:c.instructions+=4;goto B4c3065;
case 0x4c3068:c.instructions+=3;goto B4c3068;
case 0x4c306d:c.instructions+=2;goto B4c306d;
case 0x4c3072:c.instructions+=1;goto B4c3072;
case 0x4c3077:goto L4c3077;
case 0x4c3078:c.instructions+=2;goto B4c3078;
case 0x4c3079:c.instructions+=1;goto B4c3079;
case 0x4c307e:goto L4c307e;
case 0x4c3081:c.instructions+=2;goto B4c3081;
case 0x4c3082:c.instructions+=1;goto B4c3082;
case 0x4c3087:goto L4c3087;
case 0x4c3089:c.instructions+=1;goto B4c3089;
case 0x4c308e:goto L4c308e;
case 0x4c3090:c.instructions+=5;goto B4c3090;
case 0x4c3093:c.instructions+=4;goto B4c3093;
case 0x4c3097:c.instructions+=3;goto B4c3097;
case 0x4c3099:c.instructions+=2;goto B4c3099;
case 0x4c30a1:c.instructions+=1;goto B4c30a1;
case 0x4c30a3:goto L4c30a3;
case 0x4c30a5:c.instructions+=4;goto B4c30a5;
case 0x4c30aa:c.instructions+=3;goto B4c30aa;
case 0x4c30af:c.instructions+=2;goto B4c30af;
case 0x4c30b1:c.instructions+=1;goto B4c30b1;
case 0x4c30b6:goto L4c30b6;
case 0x4c30bc:c.instructions+=1;goto B4c30bc;
case 0x4c30be:goto L4c30be;
case 0x4c30c0:goto L4c30c0;
case 0x4c30c2:c.instructions+=5;goto B4c30c2;
case 0x4c30c5:c.instructions+=4;goto B4c30c5;
case 0x4c30c6:c.instructions+=3;goto B4c30c6;
case 0x4c30c8:c.instructions+=2;goto B4c30c8;
case 0x4c30cc:c.instructions+=1;goto B4c30cc;
case 0x4c30cf:goto L4c30cf;
case 0x4c30d1:c.instructions+=1;goto B4c30d1;
case 0x4c30d6:goto L4c30d6;
case 0x4c30d8:c.instructions+=5;goto B4c30d8;
case 0x4c30db:c.instructions+=4;goto B4c30db;
case 0x4c30df:c.instructions+=3;goto B4c30df;
case 0x4c30e1:c.instructions+=2;goto B4c30e1;
case 0x4c30e9:c.instructions+=1;goto B4c30e9;
case 0x4c30eb:goto L4c30eb;
case 0x4c30ed:c.instructions+=4;goto B4c30ed;
case 0x4c30f2:c.instructions+=3;goto B4c30f2;
case 0x4c30f7:c.instructions+=2;goto B4c30f7;
case 0x4c30f9:c.instructions+=1;goto B4c30f9;
case 0x4c30fe:goto L4c30fe;
case 0x4c3104:c.instructions+=1;goto B4c3104;
case 0x4c3106:goto L4c3106;
case 0x4c3108:goto L4c3108;
case 0x4c310a:c.instructions+=4;goto B4c310a;
case 0x4c310b:c.instructions+=3;goto B4c310b;
case 0x4c310d:c.instructions+=2;goto B4c310d;
case 0x4c3111:c.instructions+=1;goto B4c3111;
case 0x4c3114:goto L4c3114;
case 0x4c3116:c.instructions+=1;goto B4c3116;
case 0x4c311b:goto L4c311b;
case 0x4c311d:c.instructions+=5;goto B4c311d;
case 0x4c3120:c.instructions+=4;goto B4c3120;
case 0x4c3124:c.instructions+=3;goto B4c3124;
case 0x4c3126:c.instructions+=2;goto B4c3126;
case 0x4c312e:c.instructions+=1;goto B4c312e;
case 0x4c3130:goto L4c3130;
case 0x4c3132:c.instructions+=4;goto B4c3132;
case 0x4c3137:c.instructions+=3;goto B4c3137;
case 0x4c313c:c.instructions+=2;goto B4c313c;
case 0x4c313e:c.instructions+=1;goto B4c313e;
case 0x4c3143:goto L4c3143;
case 0x4c3149:c.instructions+=1;goto B4c3149;
case 0x4c314b:goto L4c314b;
case 0x4c314d:goto L4c314d;
case 0x4c314f:c.instructions+=4;goto B4c314f;
case 0x4c3150:c.instructions+=3;goto B4c3150;
case 0x4c3152:c.instructions+=2;goto B4c3152;
case 0x4c3156:c.instructions+=1;goto B4c3156;
case 0x4c3159:goto L4c3159;
case 0x4c315b:c.instructions+=1;goto B4c315b;
case 0x4c3160:goto L4c3160;
case 0x4c3162:c.instructions+=5;goto B4c3162;
case 0x4c3165:c.instructions+=4;goto B4c3165;
case 0x4c3169:c.instructions+=3;goto B4c3169;
case 0x4c316b:c.instructions+=2;goto B4c316b;
case 0x4c3173:c.instructions+=1;goto B4c3173;
case 0x4c3175:goto L4c3175;
case 0x4c3177:c.instructions+=4;goto B4c3177;
case 0x4c317c:c.instructions+=3;goto B4c317c;
case 0x4c3181:c.instructions+=2;goto B4c3181;
case 0x4c3183:c.instructions+=1;goto B4c3183;
case 0x4c3188:goto L4c3188;
case 0x4c318e:c.instructions+=1;goto B4c318e;
case 0x4c3190:goto L4c3190;
case 0x4c3192:goto L4c3192;
case 0x4c3194:c.instructions+=4;goto B4c3194;
case 0x4c3195:c.instructions+=3;goto B4c3195;
case 0x4c3197:c.instructions+=2;goto B4c3197;
case 0x4c319b:c.instructions+=1;goto B4c319b;
case 0x4c319e:goto L4c319e;
case 0x4c31a1:c.instructions+=4;goto B4c31a1;
case 0x4c31a4:c.instructions+=3;goto B4c31a4;
case 0x4c31a7:c.instructions+=2;goto B4c31a7;
case 0x4c31a8:c.instructions+=1;goto B4c31a8;
case 0x4c31ad:goto L4c31ad;
case 0x4c31b0:c.instructions+=3;goto B4c31b0;
case 0x4c31b1:c.instructions+=2;goto B4c31b1;
case 0x4c31b3:c.instructions+=1;goto B4c31b3;
case 0x4c31b6:goto L4c31b6;
case 0x4c31b8:c.instructions+=2;goto B4c31b8;
case 0x4c31ba:c.instructions+=1;goto B4c31ba;
case 0x4c31bd:goto L4c31bd;
case 0x4c31c1:c.instructions+=6;goto B4c31c1;
case 0x4c31c2:c.instructions+=5;goto B4c31c2;
case 0x4c31c3:c.instructions+=4;goto B4c31c3;
case 0x4c31c4:c.instructions+=3;goto B4c31c4;
case 0x4c31cb:c.instructions+=2;goto B4c31cb;
case 0x4c31ce:c.instructions+=1;goto B4c31ce;
case 0x4c31d0:goto L4c31d0;
case 0x4c31d1:c.instructions+=6;goto B4c31d1;
case 0x4c31d5:c.instructions+=5;goto B4c31d5;
case 0x4c31da:c.instructions+=4;goto B4c31da;
case 0x4c31db:c.instructions+=3;goto B4c31db;
case 0x4c31dd:c.instructions+=2;goto B4c31dd;
case 0x4c31e1:c.instructions+=1;goto B4c31e1;
case 0x4c31e3:goto L4c31e3;
case 0x4c31e8:c.instructions+=1;goto B4c31e8;
case 0x4c31ee:goto L4c31ee;
case 0x4c31f4:c.instructions+=7;goto B4c31f4;
case 0x4c31f5:c.instructions+=6;goto B4c31f5;
case 0x4c31f6:c.instructions+=5;goto B4c31f6;
case 0x4c31f9:c.instructions+=4;goto B4c31f9;
case 0x4c31fa:c.instructions+=3;goto B4c31fa;
case 0x4c3200:c.instructions+=2;goto B4c3200;
case 0x4c3202:c.instructions+=1;goto B4c3202;
case 0x4c3204:goto L4c3204;
case 0x4c3207:c.instructions+=1;goto B4c3207;
case 0x4c3209:goto L4c3209;
case 0x4c320c:goto L4c320c;
case 0x4c320e:c.instructions+=2;goto B4c320e;
case 0x4c3214:c.instructions+=1;goto B4c3214;
case 0x4c3216:goto L4c3216;
case 0x4c3218:c.instructions+=1;goto B4c3218;
case 0x4c321a:goto L4c321a;
case 0x4c321c:c.instructions+=1;goto B4c321c;
case 0x4c321e:goto L4c321e;
case 0x4c3221:c.instructions+=1;goto B4c3221;
case 0x4c3223:goto L4c3223;
case 0x4c3226:goto L4c3226;
case 0x4c3228:c.instructions+=3;goto B4c3228;
case 0x4c322a:c.instructions+=2;goto B4c322a;
case 0x4c322d:c.instructions+=1;goto B4c322d;
case 0x4c322f:goto L4c322f;
case 0x4c3232:c.instructions+=3;goto B4c3232;
case 0x4c323a:c.instructions+=2;goto B4c323a;
case 0x4c323c:c.instructions+=1;goto B4c323c;
case 0x4c323e:goto L4c323e;
case 0x4c3243:c.instructions+=1;goto B4c3243;
case 0x4c3245:goto L4c3245;
case 0x4c3248:c.instructions+=1;goto B4c3248;
case 0x4c324a:goto L4c324a;
case 0x4c324c:goto L4c324c;
case 0x4c324e:c.instructions+=1;goto B4c324e;
case 0x4c3250:goto L4c3250;
case 0x4c3253:c.instructions+=1;goto B4c3253;
case 0x4c3255:goto L4c3255;
case 0x4c3258:goto L4c3258;
case 0x4c325a:c.instructions+=1;goto B4c325a;
case 0x4c325c:goto L4c325c;
case 0x4c325e:c.instructions+=1;goto B4c325e;
case 0x4c3260:goto L4c3260;
case 0x4c3262:c.instructions+=1;goto B4c3262;
case 0x4c3264:goto L4c3264;
case 0x4c3267:c.instructions+=1;goto B4c3267;
case 0x4c3269:goto L4c3269;
case 0x4c326c:goto L4c326c;
case 0x4c326e:c.instructions+=4;goto B4c326e;
case 0x4c3270:c.instructions+=3;goto B4c3270;
case 0x4c3273:c.instructions+=2;goto B4c3273;
case 0x4c3275:c.instructions+=1;goto B4c3275;
case 0x4c3279:goto L4c3279;
case 0x4c327b:c.instructions+=4;goto B4c327b;
case 0x4c327e:c.instructions+=3;goto B4c327e;
case 0x4c3285:c.instructions+=2;goto B4c3285;
case 0x4c3288:c.instructions+=1;goto B4c3288;
case 0x4c328a:goto L4c328a;
case 0x4c328d:c.instructions+=1;goto B4c328d;
case 0x4c328f:goto L4c328f;
case 0x4c3292:goto L4c3292;
case 0x4c3294:c.instructions+=1;goto B4c3294;
case 0x4c3296:goto L4c3296;
case 0x4c3298:c.instructions+=1;goto B4c3298;
case 0x4c329a:goto L4c329a;
case 0x4c329c:c.instructions+=1;goto B4c329c;
case 0x4c329e:goto L4c329e;
case 0x4c32a1:c.instructions+=1;goto B4c32a1;
case 0x4c32a3:goto L4c32a3;
case 0x4c32a6:goto L4c32a6;
case 0x4c32a8:c.instructions+=4;goto B4c32a8;
case 0x4c32aa:c.instructions+=3;goto B4c32aa;
case 0x4c32ad:c.instructions+=2;goto B4c32ad;
case 0x4c32af:c.instructions+=1;goto B4c32af;
case 0x4c32b3:goto L4c32b3;
case 0x4c32b9:c.instructions+=5;goto B4c32b9;
case 0x4c32bb:c.instructions+=4;goto B4c32bb;
case 0x4c32bc:c.instructions+=3;goto B4c32bc;
case 0x4c32bd:c.instructions+=2;goto B4c32bd;
case 0x4c32bf:c.instructions+=1;goto B4c32bf;
case 0x4c32c4:goto L4c32c4;
case 0x4c32c8:c.instructions+=3;goto B4c32c8;
case 0x4c32c9:c.instructions+=2;goto B4c32c9;
case 0x4c32ca:c.instructions+=1;goto B4c32ca;
case 0x4c32cb:goto L4c32cb;
case 0x4c32cd:c.instructions+=3;goto B4c32cd;
case 0x4c32ce:c.instructions+=2;goto B4c32ce;
case 0x4c32d0:c.instructions+=1;goto B4c32d0;
case 0x4c32d3:goto L4c32d3;
case 0x4c32d5:c.instructions+=2;goto B4c32d5;
case 0x4c32d7:c.instructions+=1;goto B4c32d7;
case 0x4c32da:goto L4c32da;
case 0x4c32db:c.instructions+=2;goto B4c32db;
case 0x4c32dc:c.instructions+=1;goto B4c32dc;
case 0x4c32e0:goto L4c32e0;
case 0x4c32e1:c.instructions+=6;goto B4c32e1;
case 0x4c32e2:c.instructions+=5;goto B4c32e2;
case 0x4c32e4:c.instructions+=4;goto B4c32e4;
case 0x4c32e7:c.instructions+=3;goto B4c32e7;
case 0x4c32ec:c.instructions+=2;goto B4c32ec;
case 0x4c32ed:c.instructions+=1;goto B4c32ed;
case 0x4c32f2:goto L4c32f2;
case 0x4c32f7:c.instructions+=6;goto B4c32f7;
case 0x4c32fd:c.instructions+=5;goto B4c32fd;
case 0x4c3300:c.instructions+=4;goto B4c3300;
case 0x4c3303:c.instructions+=3;goto B4c3303;
case 0x4c3305:c.instructions+=2;goto B4c3305;
case 0x4c3307:c.instructions+=1;goto B4c3307;
case 0x4c3309:goto L4c3309;
case 0x4c330c:c.instructions+=1;goto B4c330c;
case 0x4c330e:goto L4c330e;
case 0x4c3311:goto L4c3311;
case 0x4c3313:c.instructions+=1;goto B4c3313;
case 0x4c3315:goto L4c3315;
case 0x4c3317:c.instructions+=1;goto B4c3317;
case 0x4c3319:goto L4c3319;
case 0x4c331e:c.instructions+=2;goto B4c331e;
case 0x4c3320:c.instructions+=1;goto B4c3320;
case 0x4c3322:goto L4c3322;
case 0x4c3325:c.instructions+=1;goto B4c3325;
case 0x4c3327:goto L4c3327;
case 0x4c332a:goto L4c332a;
case 0x4c332c:c.instructions+=3;goto B4c332c;
case 0x4c332e:c.instructions+=2;goto B4c332e;
case 0x4c3331:c.instructions+=1;goto B4c3331;
case 0x4c3333:goto L4c3333;
case 0x4c3336:c.instructions+=3;goto B4c3336;
case 0x4c333e:c.instructions+=2;goto B4c333e;
case 0x4c3341:c.instructions+=1;goto B4c3341;
case 0x4c3343:goto L4c3343;
case 0x4c3344:c.instructions+=1;goto B4c3344;
case 0x4c3346:goto L4c3346;
case 0x4c3349:c.instructions+=4;goto B4c3349;
case 0x4c334e:c.instructions+=3;goto B4c334e;
case 0x4c334f:c.instructions+=2;goto B4c334f;
case 0x4c3350:c.instructions+=1;goto B4c3350;
case 0x4c3355:goto L4c3355;
case 0x4c3358:c.instructions+=3;goto B4c3358;
case 0x4c3359:c.instructions+=2;goto B4c3359;
case 0x4c335a:c.instructions+=1;goto B4c335a;
case 0x4c335b:goto L4c335b;
case 0x4c3360:goto L4c3360;
case 0x4c3363:c.instructions+=3;goto B4c3363;
case 0x4c3364:c.instructions+=2;goto B4c3364;
case 0x4c3365:c.instructions+=1;goto B4c3365;
case 0x4c336a:goto L4c336a;
case 0x4c336d:c.instructions+=3;goto B4c336d;
case 0x4c336e:c.instructions+=2;goto B4c336e;
case 0x4c336f:c.instructions+=1;goto B4c336f;
case 0x4c3370:goto L4c3370;
case 0x4c3372:c.instructions+=13;goto B4c3372;
case 0x4c3377:c.instructions+=12;goto B4c3377;
case 0x4c337d:c.instructions+=11;goto B4c337d;
case 0x4c337e:c.instructions+=10;goto B4c337e;
case 0x4c3385:c.instructions+=9;goto B4c3385;
case 0x4c3386:c.instructions+=8;goto B4c3386;
case 0x4c3387:c.instructions+=7;goto B4c3387;
case 0x4c3388:c.instructions+=6;goto B4c3388;
case 0x4c3389:c.instructions+=5;goto B4c3389;
case 0x4c338b:c.instructions+=4;goto B4c338b;
case 0x4c338e:c.instructions+=3;goto B4c338e;
case 0x4c3393:c.instructions+=2;goto B4c3393;
case 0x4c3398:c.instructions+=1;goto B4c3398;
case 0x4c339d:goto L4c339d;
case 0x4c339e:c.instructions+=2;goto B4c339e;
case 0x4c339f:c.instructions+=1;goto B4c339f;
case 0x4c33a4:goto L4c33a4;
case 0x4c33a7:c.instructions+=2;goto B4c33a7;
case 0x4c33a8:c.instructions+=1;goto B4c33a8;
case 0x4c33ad:goto L4c33ad;
case 0x4c33b0:c.instructions+=4;goto B4c33b0;
case 0x4c33b3:c.instructions+=3;goto B4c33b3;
case 0x4c33b8:c.instructions+=2;goto B4c33b8;
case 0x4c33bd:c.instructions+=1;goto B4c33bd;
case 0x4c33c2:goto L4c33c2;
case 0x4c33c3:c.instructions+=2;goto B4c33c3;
case 0x4c33c4:c.instructions+=1;goto B4c33c4;
case 0x4c33c9:goto L4c33c9;
case 0x4c33cc:c.instructions+=2;goto B4c33cc;
case 0x4c33cd:c.instructions+=1;goto B4c33cd;
case 0x4c33d2:goto L4c33d2;
case 0x4c33d5:c.instructions+=4;goto B4c33d5;
case 0x4c33d8:c.instructions+=3;goto B4c33d8;
case 0x4c33dd:c.instructions+=2;goto B4c33dd;
case 0x4c33e2:c.instructions+=1;goto B4c33e2;
case 0x4c33e7:goto L4c33e7;
case 0x4c33e8:c.instructions+=2;goto B4c33e8;
case 0x4c33e9:c.instructions+=1;goto B4c33e9;
case 0x4c33ee:goto L4c33ee;
case 0x4c33f1:c.instructions+=2;goto B4c33f1;
case 0x4c33f2:c.instructions+=1;goto B4c33f2;
case 0x4c33f7:goto L4c33f7;
case 0x4c33fa:c.instructions+=4;goto B4c33fa;
case 0x4c33fd:c.instructions+=3;goto B4c33fd;
case 0x4c3402:c.instructions+=2;goto B4c3402;
case 0x4c3407:c.instructions+=1;goto B4c3407;
case 0x4c340c:goto L4c340c;
case 0x4c340d:c.instructions+=2;goto B4c340d;
case 0x4c340e:c.instructions+=1;goto B4c340e;
case 0x4c3413:goto L4c3413;
case 0x4c3416:c.instructions+=2;goto B4c3416;
case 0x4c3417:c.instructions+=1;goto B4c3417;
case 0x4c341c:goto L4c341c;
case 0x4c3421:c.instructions+=1;goto B4c3421;
case 0x4c3426:goto L4c3426;
case 0x4c3428:c.instructions+=5;goto B4c3428;
case 0x4c342b:c.instructions+=4;goto B4c342b;
case 0x4c342f:c.instructions+=3;goto B4c342f;
case 0x4c3431:c.instructions+=2;goto B4c3431;
case 0x4c3439:c.instructions+=1;goto B4c3439;
case 0x4c343b:goto L4c343b;
case 0x4c343d:c.instructions+=10;goto B4c343d;
case 0x4c3443:c.instructions+=9;goto B4c3443;
case 0x4c3444:c.instructions+=8;goto B4c3444;
case 0x4c344a:c.instructions+=7;goto B4c344a;
case 0x4c344b:c.instructions+=6;goto B4c344b;
case 0x4c3451:c.instructions+=5;goto B4c3451;
case 0x4c3452:c.instructions+=4;goto B4c3452;
case 0x4c3458:c.instructions+=3;goto B4c3458;
case 0x4c3459:c.instructions+=2;goto B4c3459;
case 0x4c345b:c.instructions+=1;goto B4c345b;
case 0x4c3460:goto L4c3460;
case 0x4c3466:c.instructions+=1;goto B4c3466;
case 0x4c3468:goto L4c3468;
case 0x4c346a:goto L4c346a;
case 0x4c346c:c.instructions+=5;goto B4c346c;
case 0x4c346f:c.instructions+=4;goto B4c346f;
case 0x4c3470:c.instructions+=3;goto B4c3470;
case 0x4c3472:c.instructions+=2;goto B4c3472;
case 0x4c3476:c.instructions+=1;goto B4c3476;
case 0x4c347b:goto L4c347b;
case 0x4c3480:c.instructions+=1;goto B4c3480;
case 0x4c3485:goto L4c3485;
case 0x4c3487:c.instructions+=5;goto B4c3487;
case 0x4c348a:c.instructions+=4;goto B4c348a;
case 0x4c348e:c.instructions+=3;goto B4c348e;
case 0x4c3490:c.instructions+=2;goto B4c3490;
case 0x4c3498:c.instructions+=1;goto B4c3498;
case 0x4c349a:goto L4c349a;
case 0x4c349c:c.instructions+=10;goto B4c349c;
case 0x4c34a2:c.instructions+=9;goto B4c34a2;
case 0x4c34a3:c.instructions+=8;goto B4c34a3;
case 0x4c34a9:c.instructions+=7;goto B4c34a9;
case 0x4c34aa:c.instructions+=6;goto B4c34aa;
case 0x4c34b0:c.instructions+=5;goto B4c34b0;
case 0x4c34b1:c.instructions+=4;goto B4c34b1;
case 0x4c34b7:c.instructions+=3;goto B4c34b7;
case 0x4c34b8:c.instructions+=2;goto B4c34b8;
case 0x4c34ba:c.instructions+=1;goto B4c34ba;
case 0x4c34bf:goto L4c34bf;
case 0x4c34c5:c.instructions+=1;goto B4c34c5;
case 0x4c34c7:goto L4c34c7;
case 0x4c34c9:goto L4c34c9;
case 0x4c34cb:c.instructions+=4;goto B4c34cb;
case 0x4c34cc:c.instructions+=3;goto B4c34cc;
case 0x4c34ce:c.instructions+=2;goto B4c34ce;
case 0x4c34d2:c.instructions+=1;goto B4c34d2;
case 0x4c34d7:goto L4c34d7;
case 0x4c34dc:c.instructions+=1;goto B4c34dc;
case 0x4c34e1:goto L4c34e1;
case 0x4c34e3:c.instructions+=5;goto B4c34e3;
case 0x4c34e6:c.instructions+=4;goto B4c34e6;
case 0x4c34ea:c.instructions+=3;goto B4c34ea;
case 0x4c34ec:c.instructions+=2;goto B4c34ec;
case 0x4c34f4:c.instructions+=1;goto B4c34f4;
case 0x4c34f6:goto L4c34f6;
case 0x4c34f8:c.instructions+=10;goto B4c34f8;
case 0x4c34fe:c.instructions+=9;goto B4c34fe;
case 0x4c34ff:c.instructions+=8;goto B4c34ff;
case 0x4c3505:c.instructions+=7;goto B4c3505;
case 0x4c3506:c.instructions+=6;goto B4c3506;
case 0x4c350c:c.instructions+=5;goto B4c350c;
case 0x4c350d:c.instructions+=4;goto B4c350d;
case 0x4c3513:c.instructions+=3;goto B4c3513;
case 0x4c3514:c.instructions+=2;goto B4c3514;
case 0x4c3516:c.instructions+=1;goto B4c3516;
case 0x4c351b:goto L4c351b;
case 0x4c3521:c.instructions+=1;goto B4c3521;
case 0x4c3523:goto L4c3523;
case 0x4c3525:goto L4c3525;
case 0x4c3527:c.instructions+=4;goto B4c3527;
case 0x4c3528:c.instructions+=3;goto B4c3528;
case 0x4c352a:c.instructions+=2;goto B4c352a;
case 0x4c352e:c.instructions+=1;goto B4c352e;
case 0x4c3533:goto L4c3533;
case 0x4c3538:c.instructions+=1;goto B4c3538;
case 0x4c353d:goto L4c353d;
case 0x4c353f:c.instructions+=5;goto B4c353f;
case 0x4c3542:c.instructions+=4;goto B4c3542;
case 0x4c3546:c.instructions+=3;goto B4c3546;
case 0x4c3548:c.instructions+=2;goto B4c3548;
case 0x4c3550:c.instructions+=1;goto B4c3550;
case 0x4c3552:goto L4c3552;
case 0x4c3554:c.instructions+=10;goto B4c3554;
case 0x4c355a:c.instructions+=9;goto B4c355a;
case 0x4c355b:c.instructions+=8;goto B4c355b;
case 0x4c3561:c.instructions+=7;goto B4c3561;
case 0x4c3562:c.instructions+=6;goto B4c3562;
case 0x4c3568:c.instructions+=5;goto B4c3568;
case 0x4c3569:c.instructions+=4;goto B4c3569;
case 0x4c356f:c.instructions+=3;goto B4c356f;
case 0x4c3570:c.instructions+=2;goto B4c3570;
case 0x4c3572:c.instructions+=1;goto B4c3572;
case 0x4c3577:goto L4c3577;
case 0x4c357d:c.instructions+=1;goto B4c357d;
case 0x4c357f:goto L4c357f;
case 0x4c3581:goto L4c3581;
case 0x4c3583:c.instructions+=4;goto B4c3583;
case 0x4c3584:c.instructions+=3;goto B4c3584;
case 0x4c3586:c.instructions+=2;goto B4c3586;
case 0x4c358a:c.instructions+=1;goto B4c358a;
case 0x4c358f:goto L4c358f;
case 0x4c3594:c.instructions+=1;goto B4c3594;
case 0x4c3599:goto L4c3599;
case 0x4c359b:c.instructions+=5;goto B4c359b;
case 0x4c359e:c.instructions+=4;goto B4c359e;
case 0x4c35a2:c.instructions+=3;goto B4c35a2;
case 0x4c35a4:c.instructions+=2;goto B4c35a4;
case 0x4c35ac:c.instructions+=1;goto B4c35ac;
case 0x4c35ae:goto L4c35ae;
case 0x4c35b0:c.instructions+=10;goto B4c35b0;
case 0x4c35b6:c.instructions+=9;goto B4c35b6;
case 0x4c35b7:c.instructions+=8;goto B4c35b7;
case 0x4c35bd:c.instructions+=7;goto B4c35bd;
case 0x4c35be:c.instructions+=6;goto B4c35be;
case 0x4c35c4:c.instructions+=5;goto B4c35c4;
case 0x4c35c5:c.instructions+=4;goto B4c35c5;
case 0x4c35cb:c.instructions+=3;goto B4c35cb;
case 0x4c35cc:c.instructions+=2;goto B4c35cc;
case 0x4c35ce:c.instructions+=1;goto B4c35ce;
case 0x4c35d3:goto L4c35d3;
case 0x4c35d9:c.instructions+=1;goto B4c35d9;
case 0x4c35db:goto L4c35db;
case 0x4c35dd:goto L4c35dd;
case 0x4c35df:c.instructions+=4;goto B4c35df;
case 0x4c35e0:c.instructions+=3;goto B4c35e0;
case 0x4c35e2:c.instructions+=2;goto B4c35e2;
case 0x4c35e6:c.instructions+=1;goto B4c35e6;
case 0x4c35eb:goto L4c35eb;
case 0x4c35f0:c.instructions+=1;goto B4c35f0;
case 0x4c35f5:goto L4c35f5;
case 0x4c35f7:c.instructions+=5;goto B4c35f7;
case 0x4c35fa:c.instructions+=4;goto B4c35fa;
case 0x4c35fe:c.instructions+=3;goto B4c35fe;
case 0x4c3600:c.instructions+=2;goto B4c3600;
case 0x4c3608:c.instructions+=1;goto B4c3608;
case 0x4c360a:goto L4c360a;
case 0x4c360c:c.instructions+=10;goto B4c360c;
case 0x4c3612:c.instructions+=9;goto B4c3612;
case 0x4c3613:c.instructions+=8;goto B4c3613;
case 0x4c3619:c.instructions+=7;goto B4c3619;
case 0x4c361a:c.instructions+=6;goto B4c361a;
case 0x4c3620:c.instructions+=5;goto B4c3620;
case 0x4c3621:c.instructions+=4;goto B4c3621;
case 0x4c3627:c.instructions+=3;goto B4c3627;
case 0x4c3628:c.instructions+=2;goto B4c3628;
case 0x4c362a:c.instructions+=1;goto B4c362a;
case 0x4c362f:goto L4c362f;
case 0x4c3635:c.instructions+=1;goto B4c3635;
case 0x4c3637:goto L4c3637;
case 0x4c3639:goto L4c3639;
case 0x4c363b:c.instructions+=4;goto B4c363b;
case 0x4c363c:c.instructions+=3;goto B4c363c;
case 0x4c363e:c.instructions+=2;goto B4c363e;
case 0x4c3642:c.instructions+=1;goto B4c3642;
case 0x4c3647:goto L4c3647;
case 0x4c364c:c.instructions+=1;goto B4c364c;
case 0x4c3651:goto L4c3651;
case 0x4c3653:c.instructions+=5;goto B4c3653;
case 0x4c3656:c.instructions+=4;goto B4c3656;
case 0x4c365a:c.instructions+=3;goto B4c365a;
case 0x4c365c:c.instructions+=2;goto B4c365c;
case 0x4c3664:c.instructions+=1;goto B4c3664;
case 0x4c3666:goto L4c3666;
case 0x4c3668:c.instructions+=10;goto B4c3668;
case 0x4c366e:c.instructions+=9;goto B4c366e;
case 0x4c366f:c.instructions+=8;goto B4c366f;
case 0x4c3675:c.instructions+=7;goto B4c3675;
case 0x4c3676:c.instructions+=6;goto B4c3676;
case 0x4c367c:c.instructions+=5;goto B4c367c;
case 0x4c367d:c.instructions+=4;goto B4c367d;
case 0x4c3683:c.instructions+=3;goto B4c3683;
case 0x4c3684:c.instructions+=2;goto B4c3684;
case 0x4c3686:c.instructions+=1;goto B4c3686;
case 0x4c368b:goto L4c368b;
case 0x4c3691:c.instructions+=1;goto B4c3691;
case 0x4c3693:goto L4c3693;
case 0x4c3695:goto L4c3695;
case 0x4c3697:c.instructions+=4;goto B4c3697;
case 0x4c3698:c.instructions+=3;goto B4c3698;
case 0x4c369a:c.instructions+=2;goto B4c369a;
case 0x4c369e:c.instructions+=1;goto B4c369e;
case 0x4c36a3:goto L4c36a3;
case 0x4c36a7:c.instructions+=6;goto B4c36a7;
case 0x4c36a8:c.instructions+=5;goto B4c36a8;
case 0x4c36a9:c.instructions+=4;goto B4c36a9;
case 0x4c36aa:c.instructions+=3;goto B4c36aa;
case 0x4c36b1:c.instructions+=2;goto B4c36b1;
case 0x4c36b4:c.instructions+=1;goto B4c36b4;
case 0x4c36c0:goto L4c36c0;
case 0x4c36c2:c.instructions+=13;goto B4c36c2;
case 0x4c36c7:c.instructions+=12;goto B4c36c7;
case 0x4c36cd:c.instructions+=11;goto B4c36cd;
case 0x4c36ce:c.instructions+=10;goto B4c36ce;
case 0x4c36d5:c.instructions+=9;goto B4c36d5;
case 0x4c36d6:c.instructions+=8;goto B4c36d6;
case 0x4c36d7:c.instructions+=7;goto B4c36d7;
case 0x4c36d8:c.instructions+=6;goto B4c36d8;
case 0x4c36d9:c.instructions+=5;goto B4c36d9;
case 0x4c36db:c.instructions+=4;goto B4c36db;
case 0x4c36de:c.instructions+=3;goto B4c36de;
case 0x4c36e3:c.instructions+=2;goto B4c36e3;
case 0x4c36e8:c.instructions+=1;goto B4c36e8;
case 0x4c36ed:goto L4c36ed;
case 0x4c36ee:c.instructions+=2;goto B4c36ee;
case 0x4c36ef:c.instructions+=1;goto B4c36ef;
case 0x4c36f4:goto L4c36f4;
case 0x4c36f7:c.instructions+=2;goto B4c36f7;
case 0x4c36f8:c.instructions+=1;goto B4c36f8;
case 0x4c36fd:goto L4c36fd;
case 0x4c3700:c.instructions+=4;goto B4c3700;
case 0x4c3703:c.instructions+=3;goto B4c3703;
case 0x4c3708:c.instructions+=2;goto B4c3708;
case 0x4c370d:c.instructions+=1;goto B4c370d;
case 0x4c3712:goto L4c3712;
case 0x4c3713:c.instructions+=2;goto B4c3713;
case 0x4c3714:c.instructions+=1;goto B4c3714;
case 0x4c3719:goto L4c3719;
case 0x4c371c:c.instructions+=2;goto B4c371c;
case 0x4c371d:c.instructions+=1;goto B4c371d;
case 0x4c3722:goto L4c3722;
case 0x4c3725:c.instructions+=4;goto B4c3725;
case 0x4c3728:c.instructions+=3;goto B4c3728;
case 0x4c372d:c.instructions+=2;goto B4c372d;
case 0x4c3732:c.instructions+=1;goto B4c3732;
case 0x4c3737:goto L4c3737;
case 0x4c3738:c.instructions+=2;goto B4c3738;
case 0x4c3739:c.instructions+=1;goto B4c3739;
case 0x4c373e:goto L4c373e;
case 0x4c3741:c.instructions+=2;goto B4c3741;
case 0x4c3742:c.instructions+=1;goto B4c3742;
case 0x4c3747:goto L4c3747;
case 0x4c374a:c.instructions+=4;goto B4c374a;
case 0x4c374d:c.instructions+=3;goto B4c374d;
case 0x4c3752:c.instructions+=2;goto B4c3752;
case 0x4c3757:c.instructions+=1;goto B4c3757;
case 0x4c375c:goto L4c375c;
case 0x4c375d:c.instructions+=2;goto B4c375d;
case 0x4c375e:c.instructions+=1;goto B4c375e;
case 0x4c3763:goto L4c3763;
case 0x4c3766:c.instructions+=2;goto B4c3766;
case 0x4c3767:c.instructions+=1;goto B4c3767;
case 0x4c376c:goto L4c376c;
case 0x4c376e:c.instructions+=1;goto B4c376e;
case 0x4c3773:goto L4c3773;
case 0x4c3775:c.instructions+=5;goto B4c3775;
case 0x4c3778:c.instructions+=4;goto B4c3778;
case 0x4c377c:c.instructions+=3;goto B4c377c;
case 0x4c377e:c.instructions+=2;goto B4c377e;
case 0x4c3786:c.instructions+=1;goto B4c3786;
case 0x4c3788:goto L4c3788;
case 0x4c378a:c.instructions+=10;goto B4c378a;
case 0x4c3790:c.instructions+=9;goto B4c3790;
case 0x4c3791:c.instructions+=8;goto B4c3791;
case 0x4c3797:c.instructions+=7;goto B4c3797;
case 0x4c3798:c.instructions+=6;goto B4c3798;
case 0x4c379e:c.instructions+=5;goto B4c379e;
case 0x4c379f:c.instructions+=4;goto B4c379f;
case 0x4c37a5:c.instructions+=3;goto B4c37a5;
case 0x4c37a6:c.instructions+=2;goto B4c37a6;
case 0x4c37a8:c.instructions+=1;goto B4c37a8;
case 0x4c37ad:goto L4c37ad;
case 0x4c37b3:c.instructions+=2;goto B4c37b3;
case 0x4c37b5:c.instructions+=1;goto B4c37b5;
case 0x4c37b7:goto L4c37b7;
case 0x4c37b9:goto L4c37b9;
case 0x4c37bb:c.instructions+=4;goto B4c37bb;
case 0x4c37bc:c.instructions+=3;goto B4c37bc;
case 0x4c37be:c.instructions+=2;goto B4c37be;
case 0x4c37c6:c.instructions+=1;goto B4c37c6;
case 0x4c37cb:goto L4c37cb;
case 0x4c37d0:c.instructions+=1;goto B4c37d0;
case 0x4c37d5:goto L4c37d5;
case 0x4c37d7:c.instructions+=5;goto B4c37d7;
case 0x4c37da:c.instructions+=4;goto B4c37da;
case 0x4c37de:c.instructions+=3;goto B4c37de;
case 0x4c37e0:c.instructions+=2;goto B4c37e0;
case 0x4c37e8:c.instructions+=1;goto B4c37e8;
case 0x4c37ea:goto L4c37ea;
case 0x4c37ec:c.instructions+=10;goto B4c37ec;
case 0x4c37f2:c.instructions+=9;goto B4c37f2;
case 0x4c37f3:c.instructions+=8;goto B4c37f3;
case 0x4c37f9:c.instructions+=7;goto B4c37f9;
case 0x4c37fa:c.instructions+=6;goto B4c37fa;
case 0x4c3800:c.instructions+=5;goto B4c3800;
case 0x4c3801:c.instructions+=4;goto B4c3801;
case 0x4c3807:c.instructions+=3;goto B4c3807;
case 0x4c3808:c.instructions+=2;goto B4c3808;
case 0x4c380a:c.instructions+=1;goto B4c380a;
case 0x4c380f:goto L4c380f;
case 0x4c3815:c.instructions+=2;goto B4c3815;
case 0x4c381f:c.instructions+=1;goto B4c381f;
case 0x4c3821:goto L4c3821;
case 0x4c3823:goto L4c3823;
case 0x4c3825:c.instructions+=4;goto B4c3825;
case 0x4c3826:c.instructions+=3;goto B4c3826;
case 0x4c3828:c.instructions+=2;goto B4c3828;
case 0x4c3830:c.instructions+=1;goto B4c3830;
case 0x4c3835:goto L4c3835;
case 0x4c3837:c.instructions+=2;goto B4c3837;
case 0x4c383d:c.instructions+=1;goto B4c383d;
case 0x4c3842:goto L4c3842;
case 0x4c3844:c.instructions+=5;goto B4c3844;
case 0x4c3847:c.instructions+=4;goto B4c3847;
case 0x4c384b:c.instructions+=3;goto B4c384b;
case 0x4c384d:c.instructions+=2;goto B4c384d;
case 0x4c3855:c.instructions+=1;goto B4c3855;
case 0x4c3857:goto L4c3857;
case 0x4c3859:c.instructions+=6;goto B4c3859;
case 0x4c385f:c.instructions+=5;goto B4c385f;
case 0x4c3860:c.instructions+=4;goto B4c3860;
case 0x4c3866:c.instructions+=3;goto B4c3866;
case 0x4c3867:c.instructions+=2;goto B4c3867;
case 0x4c3869:c.instructions+=1;goto B4c3869;
case 0x4c386e:goto L4c386e;
case 0x4c3874:c.instructions+=1;goto B4c3874;
case 0x4c3876:goto L4c3876;
case 0x4c3878:goto L4c3878;
case 0x4c387b:c.instructions+=4;goto B4c387b;
case 0x4c387c:c.instructions+=3;goto B4c387c;
case 0x4c387e:c.instructions+=2;goto B4c387e;
case 0x4c3882:c.instructions+=1;goto B4c3882;
case 0x4c3887:goto L4c3887;
case 0x4c3889:c.instructions+=1;goto B4c3889;
case 0x4c388e:goto L4c388e;
case 0x4c3890:c.instructions+=5;goto B4c3890;
case 0x4c3893:c.instructions+=4;goto B4c3893;
case 0x4c3897:c.instructions+=3;goto B4c3897;
case 0x4c3899:c.instructions+=2;goto B4c3899;
case 0x4c38a1:c.instructions+=1;goto B4c38a1;
case 0x4c38a3:goto L4c38a3;
case 0x4c38a5:c.instructions+=6;goto B4c38a5;
case 0x4c38ab:c.instructions+=5;goto B4c38ab;
case 0x4c38ac:c.instructions+=4;goto B4c38ac;
case 0x4c38b2:c.instructions+=3;goto B4c38b2;
case 0x4c38b3:c.instructions+=2;goto B4c38b3;
case 0x4c38b5:c.instructions+=1;goto B4c38b5;
case 0x4c38ba:goto L4c38ba;
case 0x4c38c0:c.instructions+=1;goto B4c38c0;
case 0x4c38c2:goto L4c38c2;
case 0x4c38c4:goto L4c38c4;
case 0x4c38c5:c.instructions+=3;goto B4c38c5;
case 0x4c38c7:c.instructions+=2;goto B4c38c7;
case 0x4c38cb:c.instructions+=1;goto B4c38cb;
case 0x4c38d0:goto L4c38d0;
case 0x4c38d4:c.instructions+=6;goto B4c38d4;
case 0x4c38d5:c.instructions+=5;goto B4c38d5;
case 0x4c38d6:c.instructions+=4;goto B4c38d6;
case 0x4c38d7:c.instructions+=3;goto B4c38d7;
case 0x4c38de:c.instructions+=2;goto B4c38de;
case 0x4c38e1:c.instructions+=1;goto B4c38e1;
case 0x4c38f0:goto L4c38f0;
case 0x4c38f2:c.instructions+=17;goto B4c38f2;
case 0x4c38f7:c.instructions+=16;goto B4c38f7;
case 0x4c38fd:c.instructions+=15;goto B4c38fd;
case 0x4c38fe:c.instructions+=14;goto B4c38fe;
case 0x4c3905:c.instructions+=13;goto B4c3905;
case 0x4c3906:c.instructions+=12;goto B4c3906;
case 0x4c390b:c.instructions+=11;goto B4c390b;
case 0x4c390c:c.instructions+=10;goto B4c390c;
case 0x4c390d:c.instructions+=9;goto B4c390d;
case 0x4c390f:c.instructions+=8;goto B4c390f;
case 0x4c3910:c.instructions+=7;goto B4c3910;
case 0x4c3913:c.instructions+=6;goto B4c3913;
case 0x4c3919:c.instructions+=5;goto B4c3919;
case 0x4c391f:c.instructions+=4;goto B4c391f;
case 0x4c3924:c.instructions+=3;goto B4c3924;
case 0x4c3929:c.instructions+=2;goto B4c3929;
case 0x4c392f:c.instructions+=1;goto B4c392f;
case 0x4c3934:goto L4c3934;
case 0x4c3935:c.instructions+=2;goto B4c3935;
case 0x4c3936:c.instructions+=1;goto B4c3936;
case 0x4c393b:goto L4c393b;
case 0x4c393e:c.instructions+=2;goto B4c393e;
case 0x4c393f:c.instructions+=1;goto B4c393f;
case 0x4c3944:goto L4c3944;
case 0x4c3947:c.instructions+=4;goto B4c3947;
case 0x4c394a:c.instructions+=3;goto B4c394a;
case 0x4c394f:c.instructions+=2;goto B4c394f;
case 0x4c3954:c.instructions+=1;goto B4c3954;
case 0x4c3959:goto L4c3959;
case 0x4c395a:c.instructions+=2;goto B4c395a;
case 0x4c395b:c.instructions+=1;goto B4c395b;
case 0x4c3960:goto L4c3960;
case 0x4c3963:c.instructions+=2;goto B4c3963;
case 0x4c3964:c.instructions+=1;goto B4c3964;
case 0x4c3969:goto L4c3969;
case 0x4c396c:c.instructions+=4;goto B4c396c;
case 0x4c396f:c.instructions+=3;goto B4c396f;
case 0x4c3974:c.instructions+=2;goto B4c3974;
case 0x4c3979:c.instructions+=1;goto B4c3979;
case 0x4c397e:goto L4c397e;
case 0x4c397f:c.instructions+=2;goto B4c397f;
case 0x4c3980:c.instructions+=1;goto B4c3980;
case 0x4c3985:goto L4c3985;
case 0x4c3988:c.instructions+=2;goto B4c3988;
case 0x4c3989:c.instructions+=1;goto B4c3989;
case 0x4c398e:goto L4c398e;
case 0x4c3991:c.instructions+=4;goto B4c3991;
case 0x4c3994:c.instructions+=3;goto B4c3994;
case 0x4c3999:c.instructions+=2;goto B4c3999;
case 0x4c399e:c.instructions+=1;goto B4c399e;
case 0x4c39a3:goto L4c39a3;
case 0x4c39a4:c.instructions+=2;goto B4c39a4;
case 0x4c39a5:c.instructions+=1;goto B4c39a5;
case 0x4c39aa:goto L4c39aa;
case 0x4c39ad:c.instructions+=2;goto B4c39ad;
case 0x4c39ae:c.instructions+=1;goto B4c39ae;
case 0x4c39b3:goto L4c39b3;
case 0x4c39b6:c.instructions+=2;goto B4c39b6;
case 0x4c39bb:c.instructions+=1;goto B4c39bb;
case 0x4c39c0:goto L4c39c0;
case 0x4c39c3:c.instructions+=2;goto B4c39c3;
case 0x4c39c5:c.instructions+=1;goto B4c39c5;
case 0x4c39c7:goto L4c39c7;
case 0x4c39c9:c.instructions+=1;goto B4c39c9;
case 0x4c39ce:goto L4c39ce;
case 0x4c39d0:c.instructions+=5;goto B4c39d0;
case 0x4c39d3:c.instructions+=4;goto B4c39d3;
case 0x4c39d7:c.instructions+=3;goto B4c39d7;
case 0x4c39d9:c.instructions+=2;goto B4c39d9;
case 0x4c39e1:c.instructions+=1;goto B4c39e1;
case 0x4c39e3:goto L4c39e3;
case 0x4c39e5:c.instructions+=10;goto B4c39e5;
case 0x4c39eb:c.instructions+=9;goto B4c39eb;
case 0x4c39ec:c.instructions+=8;goto B4c39ec;
case 0x4c39f2:c.instructions+=7;goto B4c39f2;
case 0x4c39f3:c.instructions+=6;goto B4c39f3;
case 0x4c39f9:c.instructions+=5;goto B4c39f9;
case 0x4c39fa:c.instructions+=4;goto B4c39fa;
case 0x4c3a00:c.instructions+=3;goto B4c3a00;
case 0x4c3a01:c.instructions+=2;goto B4c3a01;
case 0x4c3a03:c.instructions+=1;goto B4c3a03;
case 0x4c3a08:goto L4c3a08;
case 0x4c3a0e:c.instructions+=1;goto B4c3a0e;
case 0x4c3a10:goto L4c3a10;
case 0x4c3a12:goto L4c3a12;
case 0x4c3a14:c.instructions+=4;goto B4c3a14;
case 0x4c3a15:c.instructions+=3;goto B4c3a15;
case 0x4c3a17:c.instructions+=2;goto B4c3a17;
case 0x4c3a1b:c.instructions+=1;goto B4c3a1b;
case 0x4c3a20:goto L4c3a20;
case 0x4c3a22:c.instructions+=1;goto B4c3a22;
case 0x4c3a27:goto L4c3a27;
case 0x4c3a29:c.instructions+=5;goto B4c3a29;
case 0x4c3a2c:c.instructions+=4;goto B4c3a2c;
case 0x4c3a30:c.instructions+=3;goto B4c3a30;
case 0x4c3a32:c.instructions+=2;goto B4c3a32;
case 0x4c3a3a:c.instructions+=1;goto B4c3a3a;
case 0x4c3a3c:goto L4c3a3c;
case 0x4c3a3e:c.instructions+=10;goto B4c3a3e;
case 0x4c3a44:c.instructions+=9;goto B4c3a44;
case 0x4c3a45:c.instructions+=8;goto B4c3a45;
case 0x4c3a4b:c.instructions+=7;goto B4c3a4b;
case 0x4c3a4c:c.instructions+=6;goto B4c3a4c;
case 0x4c3a52:c.instructions+=5;goto B4c3a52;
case 0x4c3a53:c.instructions+=4;goto B4c3a53;
case 0x4c3a59:c.instructions+=3;goto B4c3a59;
case 0x4c3a5a:c.instructions+=2;goto B4c3a5a;
case 0x4c3a5c:c.instructions+=1;goto B4c3a5c;
case 0x4c3a61:goto L4c3a61;
case 0x4c3a67:c.instructions+=1;goto B4c3a67;
case 0x4c3a69:goto L4c3a69;
case 0x4c3a6b:goto L4c3a6b;
case 0x4c3a6d:c.instructions+=4;goto B4c3a6d;
case 0x4c3a6e:c.instructions+=3;goto B4c3a6e;
case 0x4c3a70:c.instructions+=2;goto B4c3a70;
case 0x4c3a74:c.instructions+=1;goto B4c3a74;
case 0x4c3a79:goto L4c3a79;
case 0x4c3a7e:c.instructions+=1;goto B4c3a7e;
case 0x4c3a83:goto L4c3a83;
case 0x4c3a86:c.instructions+=1;goto B4c3a86;
case 0x4c3a88:goto L4c3a88;
case 0x4c3a8a:c.instructions+=1;goto B4c3a8a;
case 0x4c3a8f:goto L4c3a8f;
case 0x4c3a91:c.instructions+=5;goto B4c3a91;
case 0x4c3a94:c.instructions+=4;goto B4c3a94;
case 0x4c3a98:c.instructions+=3;goto B4c3a98;
case 0x4c3a9a:c.instructions+=2;goto B4c3a9a;
case 0x4c3aa2:c.instructions+=1;goto B4c3aa2;
case 0x4c3aa4:goto L4c3aa4;
case 0x4c3aa6:c.instructions+=10;goto B4c3aa6;
case 0x4c3aac:c.instructions+=9;goto B4c3aac;
case 0x4c3aad:c.instructions+=8;goto B4c3aad;
case 0x4c3ab3:c.instructions+=7;goto B4c3ab3;
case 0x4c3ab4:c.instructions+=6;goto B4c3ab4;
case 0x4c3aba:c.instructions+=5;goto B4c3aba;
case 0x4c3abb:c.instructions+=4;goto B4c3abb;
case 0x4c3ac1:c.instructions+=3;goto B4c3ac1;
case 0x4c3ac2:c.instructions+=2;goto B4c3ac2;
case 0x4c3ac4:c.instructions+=1;goto B4c3ac4;
case 0x4c3ac9:goto L4c3ac9;
case 0x4c3acf:c.instructions+=1;goto B4c3acf;
case 0x4c3ad1:goto L4c3ad1;
case 0x4c3ad3:goto L4c3ad3;
case 0x4c3ad5:c.instructions+=4;goto B4c3ad5;
case 0x4c3ad6:c.instructions+=3;goto B4c3ad6;
case 0x4c3ad8:c.instructions+=2;goto B4c3ad8;
case 0x4c3adc:c.instructions+=1;goto B4c3adc;
case 0x4c3ae1:goto L4c3ae1;
case 0x4c3ae3:c.instructions+=1;goto B4c3ae3;
case 0x4c3ae8:goto L4c3ae8;
case 0x4c3aea:c.instructions+=5;goto B4c3aea;
case 0x4c3aed:c.instructions+=4;goto B4c3aed;
case 0x4c3af1:c.instructions+=3;goto B4c3af1;
case 0x4c3af3:c.instructions+=2;goto B4c3af3;
case 0x4c3afb:c.instructions+=1;goto B4c3afb;
case 0x4c3afd:goto L4c3afd;
case 0x4c3aff:c.instructions+=10;goto B4c3aff;
case 0x4c3b05:c.instructions+=9;goto B4c3b05;
case 0x4c3b06:c.instructions+=8;goto B4c3b06;
case 0x4c3b0c:c.instructions+=7;goto B4c3b0c;
case 0x4c3b0d:c.instructions+=6;goto B4c3b0d;
case 0x4c3b13:c.instructions+=5;goto B4c3b13;
case 0x4c3b14:c.instructions+=4;goto B4c3b14;
case 0x4c3b1a:c.instructions+=3;goto B4c3b1a;
case 0x4c3b1b:c.instructions+=2;goto B4c3b1b;
case 0x4c3b1d:c.instructions+=1;goto B4c3b1d;
case 0x4c3b22:goto L4c3b22;
case 0x4c3b28:c.instructions+=1;goto B4c3b28;
case 0x4c3b2a:goto L4c3b2a;
case 0x4c3b2c:goto L4c3b2c;
case 0x4c3b2e:c.instructions+=4;goto B4c3b2e;
case 0x4c3b2f:c.instructions+=3;goto B4c3b2f;
case 0x4c3b31:c.instructions+=2;goto B4c3b31;
case 0x4c3b35:c.instructions+=1;goto B4c3b35;
case 0x4c3b3a:goto L4c3b3a;
case 0x4c3b3f:c.instructions+=1;goto B4c3b3f;
case 0x4c3b44:goto L4c3b44;
case 0x4c3b47:c.instructions+=1;goto B4c3b47;
case 0x4c3b49:goto L4c3b49;
case 0x4c3b4b:c.instructions+=1;goto B4c3b4b;
case 0x4c3b50:goto L4c3b50;
case 0x4c3b52:c.instructions+=5;goto B4c3b52;
case 0x4c3b55:c.instructions+=4;goto B4c3b55;
case 0x4c3b59:c.instructions+=3;goto B4c3b59;
case 0x4c3b5b:c.instructions+=2;goto B4c3b5b;
case 0x4c3b63:c.instructions+=1;goto B4c3b63;
case 0x4c3b65:goto L4c3b65;
case 0x4c3b67:c.instructions+=10;goto B4c3b67;
case 0x4c3b6d:c.instructions+=9;goto B4c3b6d;
case 0x4c3b6e:c.instructions+=8;goto B4c3b6e;
case 0x4c3b74:c.instructions+=7;goto B4c3b74;
case 0x4c3b75:c.instructions+=6;goto B4c3b75;
case 0x4c3b7b:c.instructions+=5;goto B4c3b7b;
case 0x4c3b7c:c.instructions+=4;goto B4c3b7c;
case 0x4c3b82:c.instructions+=3;goto B4c3b82;
case 0x4c3b83:c.instructions+=2;goto B4c3b83;
case 0x4c3b85:c.instructions+=1;goto B4c3b85;
case 0x4c3b8a:goto L4c3b8a;
case 0x4c3b90:c.instructions+=1;goto B4c3b90;
case 0x4c3b92:goto L4c3b92;
case 0x4c3b94:goto L4c3b94;
case 0x4c3b96:c.instructions+=4;goto B4c3b96;
case 0x4c3b97:c.instructions+=3;goto B4c3b97;
case 0x4c3b99:c.instructions+=2;goto B4c3b99;
case 0x4c3b9d:c.instructions+=1;goto B4c3b9d;
case 0x4c3ba2:goto L4c3ba2;
case 0x4c3ba4:c.instructions+=1;goto B4c3ba4;
case 0x4c3ba9:goto L4c3ba9;
case 0x4c3bab:c.instructions+=5;goto B4c3bab;
case 0x4c3bae:c.instructions+=4;goto B4c3bae;
case 0x4c3bb2:c.instructions+=3;goto B4c3bb2;
case 0x4c3bb4:c.instructions+=2;goto B4c3bb4;
case 0x4c3bbc:c.instructions+=1;goto B4c3bbc;
case 0x4c3bbe:goto L4c3bbe;
case 0x4c3bc0:c.instructions+=10;goto B4c3bc0;
case 0x4c3bc6:c.instructions+=9;goto B4c3bc6;
case 0x4c3bc7:c.instructions+=8;goto B4c3bc7;
case 0x4c3bcd:c.instructions+=7;goto B4c3bcd;
case 0x4c3bce:c.instructions+=6;goto B4c3bce;
case 0x4c3bd4:c.instructions+=5;goto B4c3bd4;
case 0x4c3bd5:c.instructions+=4;goto B4c3bd5;
case 0x4c3bdb:c.instructions+=3;goto B4c3bdb;
case 0x4c3bdc:c.instructions+=2;goto B4c3bdc;
case 0x4c3bde:c.instructions+=1;goto B4c3bde;
case 0x4c3be3:goto L4c3be3;
case 0x4c3be9:c.instructions+=1;goto B4c3be9;
case 0x4c3beb:goto L4c3beb;
case 0x4c3bed:goto L4c3bed;
case 0x4c3bef:c.instructions+=4;goto B4c3bef;
case 0x4c3bf0:c.instructions+=3;goto B4c3bf0;
case 0x4c3bf2:c.instructions+=2;goto B4c3bf2;
case 0x4c3bf6:c.instructions+=1;goto B4c3bf6;
case 0x4c3bfb:goto L4c3bfb;
case 0x4c3bfd:c.instructions+=1;goto B4c3bfd;
case 0x4c3c02:goto L4c3c02;
case 0x4c3c04:c.instructions+=5;goto B4c3c04;
case 0x4c3c07:c.instructions+=4;goto B4c3c07;
case 0x4c3c0b:c.instructions+=3;goto B4c3c0b;
case 0x4c3c0d:c.instructions+=2;goto B4c3c0d;
case 0x4c3c15:c.instructions+=1;goto B4c3c15;
case 0x4c3c17:goto L4c3c17;
case 0x4c3c19:c.instructions+=10;goto B4c3c19;
case 0x4c3c1f:c.instructions+=9;goto B4c3c1f;
case 0x4c3c20:c.instructions+=8;goto B4c3c20;
case 0x4c3c26:c.instructions+=7;goto B4c3c26;
case 0x4c3c27:c.instructions+=6;goto B4c3c27;
case 0x4c3c2d:c.instructions+=5;goto B4c3c2d;
case 0x4c3c2e:c.instructions+=4;goto B4c3c2e;
case 0x4c3c34:c.instructions+=3;goto B4c3c34;
case 0x4c3c35:c.instructions+=2;goto B4c3c35;
case 0x4c3c37:c.instructions+=1;goto B4c3c37;
case 0x4c3c3c:goto L4c3c3c;
case 0x4c3c42:c.instructions+=1;goto B4c3c42;
case 0x4c3c44:goto L4c3c44;
case 0x4c3c46:goto L4c3c46;
case 0x4c3c48:c.instructions+=4;goto B4c3c48;
case 0x4c3c49:c.instructions+=3;goto B4c3c49;
case 0x4c3c4b:c.instructions+=2;goto B4c3c4b;
case 0x4c3c4f:c.instructions+=1;goto B4c3c4f;
case 0x4c3c54:goto L4c3c54;
case 0x4c3c58:c.instructions+=6;goto B4c3c58;
case 0x4c3c59:c.instructions+=5;goto B4c3c59;
case 0x4c3c5a:c.instructions+=4;goto B4c3c5a;
case 0x4c3c5b:c.instructions+=3;goto B4c3c5b;
case 0x4c3c62:c.instructions+=2;goto B4c3c62;
case 0x4c3c65:c.instructions+=1;goto B4c3c65;
case 0x4c3c70:goto L4c3c70;
case 0x4c3c71:c.instructions+=6;goto B4c3c71;
case 0x4c3c75:c.instructions+=5;goto B4c3c75;
case 0x4c3c7a:c.instructions+=4;goto B4c3c7a;
case 0x4c3c7b:c.instructions+=3;goto B4c3c7b;
case 0x4c3c7d:c.instructions+=2;goto B4c3c7d;
case 0x4c3c81:c.instructions+=1;goto B4c3c81;
case 0x4c3c83:goto L4c3c83;
case 0x4c3c88:c.instructions+=1;goto B4c3c88;
case 0x4c3c8e:goto L4c3c8e;
case 0x4c3c94:c.instructions+=7;goto B4c3c94;
case 0x4c3c95:c.instructions+=6;goto B4c3c95;
case 0x4c3c96:c.instructions+=5;goto B4c3c96;
case 0x4c3c99:c.instructions+=4;goto B4c3c99;
case 0x4c3c9a:c.instructions+=3;goto B4c3c9a;
case 0x4c3ca0:c.instructions+=2;goto B4c3ca0;
case 0x4c3ca2:c.instructions+=1;goto B4c3ca2;
case 0x4c3ca4:goto L4c3ca4;
case 0x4c3ca7:c.instructions+=1;goto B4c3ca7;
case 0x4c3ca9:goto L4c3ca9;
case 0x4c3cac:goto L4c3cac;
case 0x4c3cae:c.instructions+=2;goto B4c3cae;
case 0x4c3cb4:c.instructions+=1;goto B4c3cb4;
case 0x4c3cb6:goto L4c3cb6;
case 0x4c3cb8:c.instructions+=1;goto B4c3cb8;
case 0x4c3cba:goto L4c3cba;
case 0x4c3cbc:c.instructions+=1;goto B4c3cbc;
case 0x4c3cbe:goto L4c3cbe;
case 0x4c3cc1:c.instructions+=1;goto B4c3cc1;
case 0x4c3cc3:goto L4c3cc3;
case 0x4c3cc6:goto L4c3cc6;
case 0x4c3cc8:c.instructions+=3;goto B4c3cc8;
case 0x4c3cca:c.instructions+=2;goto B4c3cca;
case 0x4c3ccd:c.instructions+=1;goto B4c3ccd;
case 0x4c3ccf:goto L4c3ccf;
case 0x4c3cd2:c.instructions+=3;goto B4c3cd2;
case 0x4c3cda:c.instructions+=2;goto B4c3cda;
case 0x4c3cdc:c.instructions+=1;goto B4c3cdc;
case 0x4c3cde:goto L4c3cde;
case 0x4c3ce3:c.instructions+=1;goto B4c3ce3;
case 0x4c3ce5:goto L4c3ce5;
case 0x4c3ce8:c.instructions+=1;goto B4c3ce8;
case 0x4c3cea:goto L4c3cea;
case 0x4c3cec:goto L4c3cec;
case 0x4c3cee:c.instructions+=1;goto B4c3cee;
case 0x4c3cf0:goto L4c3cf0;
case 0x4c3cf3:c.instructions+=1;goto B4c3cf3;
case 0x4c3cf5:goto L4c3cf5;
case 0x4c3cf8:goto L4c3cf8;
case 0x4c3cfa:c.instructions+=1;goto B4c3cfa;
case 0x4c3cfc:goto L4c3cfc;
case 0x4c3cfe:c.instructions+=1;goto B4c3cfe;
case 0x4c3d00:goto L4c3d00;
case 0x4c3d02:c.instructions+=1;goto B4c3d02;
case 0x4c3d04:goto L4c3d04;
case 0x4c3d07:c.instructions+=1;goto B4c3d07;
case 0x4c3d09:goto L4c3d09;
case 0x4c3d0c:goto L4c3d0c;
case 0x4c3d0e:c.instructions+=4;goto B4c3d0e;
case 0x4c3d10:c.instructions+=3;goto B4c3d10;
case 0x4c3d13:c.instructions+=2;goto B4c3d13;
case 0x4c3d15:c.instructions+=1;goto B4c3d15;
case 0x4c3d19:goto L4c3d19;
case 0x4c3d1b:c.instructions+=4;goto B4c3d1b;
case 0x4c3d1e:c.instructions+=3;goto B4c3d1e;
case 0x4c3d25:c.instructions+=2;goto B4c3d25;
case 0x4c3d28:c.instructions+=1;goto B4c3d28;
case 0x4c3d2a:goto L4c3d2a;
case 0x4c3d2d:c.instructions+=1;goto B4c3d2d;
case 0x4c3d2f:goto L4c3d2f;
case 0x4c3d32:goto L4c3d32;
case 0x4c3d34:c.instructions+=1;goto B4c3d34;
case 0x4c3d36:goto L4c3d36;
case 0x4c3d38:c.instructions+=1;goto B4c3d38;
case 0x4c3d3a:goto L4c3d3a;
case 0x4c3d3c:c.instructions+=1;goto B4c3d3c;
case 0x4c3d3e:goto L4c3d3e;
case 0x4c3d41:c.instructions+=1;goto B4c3d41;
case 0x4c3d43:goto L4c3d43;
case 0x4c3d46:goto L4c3d46;
case 0x4c3d48:c.instructions+=4;goto B4c3d48;
case 0x4c3d4a:c.instructions+=3;goto B4c3d4a;
case 0x4c3d4d:c.instructions+=2;goto B4c3d4d;
case 0x4c3d4f:c.instructions+=1;goto B4c3d4f;
case 0x4c3d53:goto L4c3d53;
case 0x4c3d59:c.instructions+=5;goto B4c3d59;
case 0x4c3d5b:c.instructions+=4;goto B4c3d5b;
case 0x4c3d5c:c.instructions+=3;goto B4c3d5c;
case 0x4c3d5d:c.instructions+=2;goto B4c3d5d;
case 0x4c3d5f:c.instructions+=1;goto B4c3d5f;
case 0x4c3d64:goto L4c3d64;
case 0x4c3d68:c.instructions+=3;goto B4c3d68;
case 0x4c3d69:c.instructions+=2;goto B4c3d69;
case 0x4c3d6a:c.instructions+=1;goto B4c3d6a;
case 0x4c3d6b:goto L4c3d6b;
case 0x4c3d6d:c.instructions+=3;goto B4c3d6d;
case 0x4c3d6e:c.instructions+=2;goto B4c3d6e;
case 0x4c3d70:c.instructions+=1;goto B4c3d70;
case 0x4c3d73:goto L4c3d73;
case 0x4c3d75:c.instructions+=2;goto B4c3d75;
case 0x4c3d77:c.instructions+=1;goto B4c3d77;
case 0x4c3d7a:goto L4c3d7a;
case 0x4c3d7b:c.instructions+=2;goto B4c3d7b;
case 0x4c3d7c:c.instructions+=1;goto B4c3d7c;
case 0x4c3d80:goto L4c3d80;
case 0x4c3d81:c.instructions+=6;goto B4c3d81;
case 0x4c3d82:c.instructions+=5;goto B4c3d82;
case 0x4c3d84:c.instructions+=4;goto B4c3d84;
case 0x4c3d87:c.instructions+=3;goto B4c3d87;
case 0x4c3d8c:c.instructions+=2;goto B4c3d8c;
case 0x4c3d8d:c.instructions+=1;goto B4c3d8d;
case 0x4c3d92:goto L4c3d92;
case 0x4c3d97:c.instructions+=6;goto B4c3d97;
case 0x4c3d9d:c.instructions+=5;goto B4c3d9d;
case 0x4c3da0:c.instructions+=4;goto B4c3da0;
case 0x4c3da3:c.instructions+=3;goto B4c3da3;
case 0x4c3da5:c.instructions+=2;goto B4c3da5;
case 0x4c3da7:c.instructions+=1;goto B4c3da7;
case 0x4c3da9:goto L4c3da9;
case 0x4c3dac:c.instructions+=1;goto B4c3dac;
case 0x4c3dae:goto L4c3dae;
case 0x4c3db1:goto L4c3db1;
case 0x4c3db3:c.instructions+=1;goto B4c3db3;
case 0x4c3db5:goto L4c3db5;
case 0x4c3db7:c.instructions+=1;goto B4c3db7;
case 0x4c3db9:goto L4c3db9;
case 0x4c3dbe:c.instructions+=2;goto B4c3dbe;
case 0x4c3dc0:c.instructions+=1;goto B4c3dc0;
case 0x4c3dc2:goto L4c3dc2;
case 0x4c3dc5:c.instructions+=1;goto B4c3dc5;
case 0x4c3dc7:goto L4c3dc7;
case 0x4c3dca:goto L4c3dca;
case 0x4c3dcc:c.instructions+=3;goto B4c3dcc;
case 0x4c3dce:c.instructions+=2;goto B4c3dce;
case 0x4c3dd1:c.instructions+=1;goto B4c3dd1;
case 0x4c3dd3:goto L4c3dd3;
case 0x4c3dd6:c.instructions+=3;goto B4c3dd6;
case 0x4c3dde:c.instructions+=2;goto B4c3dde;
case 0x4c3de1:c.instructions+=1;goto B4c3de1;
case 0x4c3de3:goto L4c3de3;
case 0x4c3de4:c.instructions+=1;goto B4c3de4;
case 0x4c3de6:goto L4c3de6;
case 0x4c3de9:c.instructions+=4;goto B4c3de9;
case 0x4c3dee:c.instructions+=3;goto B4c3dee;
case 0x4c3def:c.instructions+=2;goto B4c3def;
case 0x4c3df0:c.instructions+=1;goto B4c3df0;
case 0x4c3df5:goto L4c3df5;
case 0x4c3df8:c.instructions+=3;goto B4c3df8;
case 0x4c3df9:c.instructions+=2;goto B4c3df9;
case 0x4c3dfa:c.instructions+=1;goto B4c3dfa;
case 0x4c3dfb:goto L4c3dfb;
case 0x4c3e00:goto L4c3e00;
case 0x4c3e03:c.instructions+=3;goto B4c3e03;
case 0x4c3e04:c.instructions+=2;goto B4c3e04;
case 0x4c3e05:c.instructions+=1;goto B4c3e05;
case 0x4c3e0a:goto L4c3e0a;
case 0x4c3e0d:c.instructions+=3;goto B4c3e0d;
case 0x4c3e0e:c.instructions+=2;goto B4c3e0e;
case 0x4c3e0f:c.instructions+=1;goto B4c3e0f;
case 0x4c3e10:goto L4c3e10;
case 0x4c3e11:c.instructions+=5;goto B4c3e11;
case 0x4c3e12:c.instructions+=4;goto B4c3e12;
case 0x4c3e16:c.instructions+=3;goto B4c3e16;
case 0x4c3e1c:c.instructions+=2;goto B4c3e1c;
case 0x4c3e1e:c.instructions+=1;goto B4c3e1e;
case 0x4c3e20:goto L4c3e20;
case 0x4c3e22:c.instructions+=1;goto B4c3e22;
case 0x4c3e24:goto L4c3e24;
case 0x4c3e2a:c.instructions+=1;goto B4c3e2a;
case 0x4c3e2c:goto L4c3e2c;
case 0x4c3e2e:goto L4c3e2e;
case 0x4c3e33:goto L4c3e33;
case 0x4c3e3a:c.instructions+=1;goto B4c3e3a;
case 0x4c3e3f:goto L4c3e3f;
case 0x4c3e41:c.instructions+=3;goto B4c3e41;
case 0x4c3e42:c.instructions+=2;goto B4c3e42;
case 0x4c3e44:c.instructions+=1;goto B4c3e44;
case 0x4c3e47:goto L4c3e47;
case 0x4c3e49:c.instructions+=2;goto B4c3e49;
case 0x4c3e4b:c.instructions+=1;goto B4c3e4b;
case 0x4c3e4e:goto L4c3e4e;
case 0x4c3e4f:c.instructions+=2;goto B4c3e4f;
case 0x4c3e50:c.instructions+=1;goto B4c3e50;
case 0x4c3e60:goto L4c3e60;
case 0x4c3e61:c.instructions+=6;goto B4c3e61;
case 0x4c3e62:c.instructions+=5;goto B4c3e62;
case 0x4c3e64:c.instructions+=4;goto B4c3e64;
case 0x4c3e67:c.instructions+=3;goto B4c3e67;
case 0x4c3e6c:c.instructions+=2;goto B4c3e6c;
case 0x4c3e6d:c.instructions+=1;goto B4c3e6d;
case 0x4c3e72:goto L4c3e72;
case 0x4c3e77:c.instructions+=6;goto B4c3e77;
case 0x4c3e7d:c.instructions+=5;goto B4c3e7d;
case 0x4c3e80:c.instructions+=4;goto B4c3e80;
case 0x4c3e83:c.instructions+=3;goto B4c3e83;
case 0x4c3e85:c.instructions+=2;goto B4c3e85;
case 0x4c3e87:c.instructions+=1;goto B4c3e87;
case 0x4c3e89:goto L4c3e89;
case 0x4c3e8c:c.instructions+=1;goto B4c3e8c;
case 0x4c3e8e:goto L4c3e8e;
case 0x4c3e91:goto L4c3e91;
case 0x4c3e93:c.instructions+=1;goto B4c3e93;
case 0x4c3e95:goto L4c3e95;
case 0x4c3e97:c.instructions+=1;goto B4c3e97;
case 0x4c3e99:goto L4c3e99;
case 0x4c3e9e:c.instructions+=2;goto B4c3e9e;
case 0x4c3ea0:c.instructions+=1;goto B4c3ea0;
case 0x4c3ea2:goto L4c3ea2;
case 0x4c3ea5:c.instructions+=1;goto B4c3ea5;
case 0x4c3ea7:goto L4c3ea7;
case 0x4c3eaa:goto L4c3eaa;
case 0x4c3eac:c.instructions+=3;goto B4c3eac;
case 0x4c3eae:c.instructions+=2;goto B4c3eae;
case 0x4c3eb1:c.instructions+=1;goto B4c3eb1;
case 0x4c3eb3:goto L4c3eb3;
case 0x4c3eb6:c.instructions+=3;goto B4c3eb6;
case 0x4c3ebd:c.instructions+=2;goto B4c3ebd;
case 0x4c3ec0:c.instructions+=1;goto B4c3ec0;
case 0x4c3ec2:goto L4c3ec2;
case 0x4c3ec9:goto L4c3ec9;
case 0x4c3ecc:c.instructions+=4;goto B4c3ecc;
case 0x4c3ed1:c.instructions+=3;goto B4c3ed1;
case 0x4c3ed2:c.instructions+=2;goto B4c3ed2;
case 0x4c3ed3:c.instructions+=1;goto B4c3ed3;
case 0x4c3ed8:goto L4c3ed8;
case 0x4c3edb:c.instructions+=3;goto B4c3edb;
case 0x4c3edc:c.instructions+=2;goto B4c3edc;
case 0x4c3edd:c.instructions+=1;goto B4c3edd;
case 0x4c3ede:goto L4c3ede;
case 0x4c3ee1:c.instructions+=4;goto B4c3ee1;
case 0x4c3ee6:c.instructions+=3;goto B4c3ee6;
case 0x4c3ee7:c.instructions+=2;goto B4c3ee7;
case 0x4c3ee8:c.instructions+=1;goto B4c3ee8;
case 0x4c3eed:goto L4c3eed;
case 0x4c3ef0:c.instructions+=3;goto B4c3ef0;
case 0x4c3ef1:c.instructions+=2;goto B4c3ef1;
case 0x4c3ef2:c.instructions+=1;goto B4c3ef2;
case 0x4c3ef3:goto L4c3ef3;
case 0x4c3ef6:c.instructions+=4;goto B4c3ef6;
case 0x4c3efb:c.instructions+=3;goto B4c3efb;
case 0x4c3efc:c.instructions+=2;goto B4c3efc;
case 0x4c3efd:c.instructions+=1;goto B4c3efd;
case 0x4c3f02:goto L4c3f02;
case 0x4c3f05:c.instructions+=3;goto B4c3f05;
case 0x4c3f06:c.instructions+=2;goto B4c3f06;
case 0x4c3f07:c.instructions+=1;goto B4c3f07;
case 0x4c3f08:goto L4c3f08;
case 0x4c3f0b:c.instructions+=4;goto B4c3f0b;
case 0x4c3f10:c.instructions+=3;goto B4c3f10;
case 0x4c3f11:c.instructions+=2;goto B4c3f11;
case 0x4c3f12:c.instructions+=1;goto B4c3f12;
case 0x4c3f17:goto L4c3f17;
case 0x4c3f1a:c.instructions+=3;goto B4c3f1a;
case 0x4c3f1b:c.instructions+=2;goto B4c3f1b;
case 0x4c3f1c:c.instructions+=1;goto B4c3f1c;
case 0x4c3f1d:goto L4c3f1d;
case 0x4c3f22:goto L4c3f22;
case 0x4c3f25:c.instructions+=3;goto B4c3f25;
case 0x4c3f26:c.instructions+=2;goto B4c3f26;
case 0x4c3f27:c.instructions+=1;goto B4c3f27;
case 0x4c3f2c:goto L4c3f2c;
case 0x4c3f2f:c.instructions+=3;goto B4c3f2f;
case 0x4c3f30:c.instructions+=2;goto B4c3f30;
case 0x4c3f31:c.instructions+=1;goto B4c3f31;
case 0x4c3f50:goto L4c3f50;
case 0x4c3f54:c.instructions+=4;goto B4c3f54;
case 0x4c3f59:c.instructions+=3;goto B4c3f59;
case 0x4c3f5a:c.instructions+=2;goto B4c3f5a;
case 0x4c3f5c:c.instructions+=1;goto B4c3f5c;
case 0x4c3f5e:goto L4c3f5e;
case 0x4c3f63:c.instructions+=1;goto B4c3f63;
case 0x4c3f69:goto L4c3f69;
case 0x4c3f6e:c.instructions+=7;goto B4c3f6e;
case 0x4c3f71:c.instructions+=6;goto B4c3f71;
case 0x4c3f72:c.instructions+=5;goto B4c3f72;
case 0x4c3f73:c.instructions+=4;goto B4c3f73;
case 0x4c3f79:c.instructions+=3;goto B4c3f79;
case 0x4c3f7b:c.instructions+=2;goto B4c3f7b;
case 0x4c3f7c:c.instructions+=1;goto B4c3f7c;
case 0x4c3f7e:goto L4c3f7e;
case 0x4c3f81:c.instructions+=1;goto B4c3f81;
case 0x4c3f83:goto L4c3f83;
case 0x4c3f86:goto L4c3f86;
case 0x4c3f88:c.instructions+=2;goto B4c3f88;
case 0x4c3f8e:c.instructions+=1;goto B4c3f8e;
case 0x4c3f90:goto L4c3f90;
case 0x4c3f92:c.instructions+=1;goto B4c3f92;
case 0x4c3f94:goto L4c3f94;
case 0x4c3f96:c.instructions+=1;goto B4c3f96;
case 0x4c3f98:goto L4c3f98;
case 0x4c3f9b:c.instructions+=1;goto B4c3f9b;
case 0x4c3f9d:goto L4c3f9d;
case 0x4c3fa0:goto L4c3fa0;
case 0x4c3fa2:c.instructions+=3;goto B4c3fa2;
case 0x4c3fa4:c.instructions+=2;goto B4c3fa4;
case 0x4c3fa7:c.instructions+=1;goto B4c3fa7;
case 0x4c3fa9:goto L4c3fa9;
case 0x4c3fab:c.instructions+=1;goto B4c3fab;
case 0x4c3fad:goto L4c3fad;
case 0x4c3fb0:c.instructions+=1;goto B4c3fb0;
case 0x4c3fb2:goto L4c3fb2;
case 0x4c3fb5:goto L4c3fb5;
case 0x4c3fb7:c.instructions+=1;goto B4c3fb7;
case 0x4c3fb9:goto L4c3fb9;
case 0x4c3fbb:c.instructions+=1;goto B4c3fbb;
case 0x4c3fbd:goto L4c3fbd;
case 0x4c3fbf:c.instructions+=1;goto B4c3fbf;
case 0x4c3fc1:goto L4c3fc1;
case 0x4c3fc4:c.instructions+=1;goto B4c3fc4;
case 0x4c3fc6:goto L4c3fc6;
case 0x4c3fc9:goto L4c3fc9;
case 0x4c3fcb:c.instructions+=3;goto B4c3fcb;
case 0x4c3fcd:c.instructions+=2;goto B4c3fcd;
case 0x4c3fd0:c.instructions+=1;goto B4c3fd0;
case 0x4c3fd2:goto L4c3fd2;
case 0x4c3fd5:c.instructions+=9;goto B4c3fd5;
case 0x4c3fdc:c.instructions+=8;goto B4c3fdc;
case 0x4c3fde:c.instructions+=7;goto B4c3fde;
case 0x4c3fdf:c.instructions+=6;goto B4c3fdf;
case 0x4c3fe2:c.instructions+=5;goto B4c3fe2;
case 0x4c3fe5:c.instructions+=4;goto B4c3fe5;
case 0x4c3fe6:c.instructions+=3;goto B4c3fe6;
case 0x4c3fed:c.instructions+=2;goto B4c3fed;
case 0x4c3ff1:c.instructions+=1;goto B4c3ff1;
case 0x4c3ff2:goto L4c3ff2;
case 0x4c3ff4:c.instructions+=3;goto B4c3ff4;
case 0x4c3ff5:c.instructions+=2;goto B4c3ff5;
case 0x4c3ff7:c.instructions+=1;goto B4c3ff7;
case 0x4c3ffa:goto L4c3ffa;
case 0x4c3ffc:c.instructions+=2;goto B4c3ffc;
case 0x4c3ffe:c.instructions+=1;goto B4c3ffe;
default:missing_instruction(c.pc);}
B4c3000:L4c3000:{c.instructions+=14;NFSU2_TR(0x4c3000);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3002:{NFSU2_TR(0x4c3002);
u8 U[4];
w4(U+0,u32(0x773d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3007:{NFSU2_TR(0x4c3007);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c300d:{NFSU2_TR(0x4c300d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c300e:{NFSU2_TR(0x4c300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3015:{NFSU2_TR(0x4c3015);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3016:{NFSU2_TR(0x4c3016);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3017:{NFSU2_TR(0x4c3017);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3018:{NFSU2_TR(0x4c3018);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3019:{NFSU2_TR(0x4c3019);
__builtin_memmove((R+24),(R+4),4);
}
B4c301b:{NFSU2_TR(0x4c301b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c301e:{NFSU2_TR(0x4c301e);
u8 U[4];
w4(U+0,u32(0x1d7bb6c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3023:{NFSU2_TR(0x4c3023);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3028:{NFSU2_TR(0x4c3028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c302dull));
TAIL_STATIC(0x505450u,505);
}
B4c302d:L4c302d:{c.instructions+=3;NFSU2_TR(0x4c302d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c302e:{NFSU2_TR(0x4c302e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c302f:{NFSU2_TR(0x4c302f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3034ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3034:L4c3034:{c.instructions+=3;NFSU2_TR(0x4c3034);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3037:{NFSU2_TR(0x4c3037);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3038:{NFSU2_TR(0x4c3038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c303dull));
TAIL_STATIC(0x50c900u,50c);
}
B4c303d:L4c303d:{c.instructions+=5;NFSU2_TR(0x4c303d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3040:{NFSU2_TR(0x4c3040);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3043:{NFSU2_TR(0x4c3043);
u8 U[4];
w4(U+0,u32(0x933dd695ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3048:{NFSU2_TR(0x4c3048);
u8 U[4];
w4(U+0,u32(0x7955e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c304d:{NFSU2_TR(0x4c304d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3052ull));
TAIL_STATIC(0x505450u,505);
}
B4c3052:L4c3052:{c.instructions+=3;NFSU2_TR(0x4c3052);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3053:{NFSU2_TR(0x4c3053);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3054:{NFSU2_TR(0x4c3054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3059ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3059:L4c3059:{c.instructions+=3;NFSU2_TR(0x4c3059);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c305c:{NFSU2_TR(0x4c305c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c305d:{NFSU2_TR(0x4c305d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3062ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3062:L4c3062:{c.instructions+=5;NFSU2_TR(0x4c3062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3065:{NFSU2_TR(0x4c3065);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3068:{NFSU2_TR(0x4c3068);
u8 U[4];
w4(U+0,u32(0x8202c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c306d:{NFSU2_TR(0x4c306d);
u8 U[4];
w4(U+0,u32(0x7955d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3072:{NFSU2_TR(0x4c3072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3077ull));
TAIL_STATIC(0x505450u,505);
}
B4c3077:L4c3077:{c.instructions+=3;NFSU2_TR(0x4c3077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3078:{NFSU2_TR(0x4c3078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3079:{NFSU2_TR(0x4c3079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c307eull));
TAIL_STATIC(0x537a10u,537);
}
B4c307e:L4c307e:{c.instructions+=3;NFSU2_TR(0x4c307e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3081:{NFSU2_TR(0x4c3081);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3082:{NFSU2_TR(0x4c3082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3087ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3087:L4c3087:{c.instructions+=2;NFSU2_TR(0x4c3087);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3089:{NFSU2_TR(0x4c3089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c308eull));
TAIL_STATIC(0x575620u,575);
}
B4c308e:L4c308e:{c.instructions+=6;NFSU2_TR(0x4c308e);
__builtin_memmove((R+28),(R+0),4);
}
B4c3090:{NFSU2_TR(0x4c3090);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3093:{NFSU2_TR(0x4c3093);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3097:{NFSU2_TR(0x4c3097);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3099:{NFSU2_TR(0x4c3099);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c30a1:{NFSU2_TR(0x4c30a1);
if(r1(R+518)){{goto L4c30be;}}
}
B4c30a3:L4c30a3:{c.instructions+=5;NFSU2_TR(0x4c30a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30a5:{NFSU2_TR(0x4c30a5);
u8 U[4];
w4(U+0,u32(0xe76cd783ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30aa:{NFSU2_TR(0x4c30aa);
u8 U[4];
w4(U+0,u32(0xf37af144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30af:{NFSU2_TR(0x4c30af);
__builtin_memmove((R+4),(R+28),4);
}
B4c30b1:{NFSU2_TR(0x4c30b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c30b6ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c30b6:L4c30b6:{c.instructions+=2;NFSU2_TR(0x4c30b6);
u8 U[4];
w4(U+0,u32(0x7918b8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c30bc:{NFSU2_TR(0x4c30bc);
{goto L4c30c0;}
}
B4c30be:L4c30be:{c.instructions+=1;NFSU2_TR(0x4c30be);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c30c0:L4c30c0:{c.instructions+=6;NFSU2_TR(0x4c30c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c30c2:{NFSU2_TR(0x4c30c2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c30c5:{NFSU2_TR(0x4c30c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30c6:{NFSU2_TR(0x4c30c6);
__builtin_memmove((R+4),(R+24),4);
}
B4c30c8:{NFSU2_TR(0x4c30c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c30cc:{NFSU2_TR(0x4c30cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c30cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c30cf:L4c30cf:{c.instructions+=2;NFSU2_TR(0x4c30cf);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30d1:{NFSU2_TR(0x4c30d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c30d6ull));
TAIL_STATIC(0x575620u,575);
}
B4c30d6:L4c30d6:{c.instructions+=6;NFSU2_TR(0x4c30d6);
__builtin_memmove((R+28),(R+0),4);
}
B4c30d8:{NFSU2_TR(0x4c30d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c30db:{NFSU2_TR(0x4c30db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c30df:{NFSU2_TR(0x4c30df);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c30e1:{NFSU2_TR(0x4c30e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c30e9:{NFSU2_TR(0x4c30e9);
if(r1(R+518)){{goto L4c3106;}}
}
B4c30eb:L4c30eb:{c.instructions+=5;NFSU2_TR(0x4c30eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30ed:{NFSU2_TR(0x4c30ed);
u8 U[4];
w4(U+0,u32(0x4204d527ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30f2:{NFSU2_TR(0x4c30f2);
u8 U[4];
w4(U+0,u32(0x8a006328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c30f7:{NFSU2_TR(0x4c30f7);
__builtin_memmove((R+4),(R+28),4);
}
B4c30f9:{NFSU2_TR(0x4c30f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c30feull));
TAIL_STATIC(0x51f670u,51f);
}
B4c30fe:L4c30fe:{c.instructions+=2;NFSU2_TR(0x4c30fe);
u8 U[4];
w4(U+0,u32(0x7918c0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3104:{NFSU2_TR(0x4c3104);
{goto L4c3108;}
}
B4c3106:L4c3106:{c.instructions+=1;NFSU2_TR(0x4c3106);
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
B4c3108:L4c3108:{c.instructions+=5;NFSU2_TR(0x4c3108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c310a:{NFSU2_TR(0x4c310a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c310b:{NFSU2_TR(0x4c310b);
__builtin_memmove((R+4),(R+24),4);
}
B4c310d:{NFSU2_TR(0x4c310d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3111:{NFSU2_TR(0x4c3111);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3114ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3114:L4c3114:{c.instructions+=2;NFSU2_TR(0x4c3114);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3116:{NFSU2_TR(0x4c3116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c311bull));
TAIL_STATIC(0x575620u,575);
}
B4c311b:L4c311b:{c.instructions+=6;NFSU2_TR(0x4c311b);
__builtin_memmove((R+28),(R+0),4);
}
B4c311d:{NFSU2_TR(0x4c311d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3120:{NFSU2_TR(0x4c3120);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3124:{NFSU2_TR(0x4c3124);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3126:{NFSU2_TR(0x4c3126);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c312e:{NFSU2_TR(0x4c312e);
if(r1(R+518)){{goto L4c314b;}}
}
B4c3130:L4c3130:{c.instructions+=5;NFSU2_TR(0x4c3130);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3132:{NFSU2_TR(0x4c3132);
u8 U[4];
w4(U+0,u32(0xd0cf6ee1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3137:{NFSU2_TR(0x4c3137);
u8 U[4];
w4(U+0,u32(0x4df98fb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c313c:{NFSU2_TR(0x4c313c);
__builtin_memmove((R+4),(R+28),4);
}
B4c313e:{NFSU2_TR(0x4c313e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3143ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c3143:L4c3143:{c.instructions+=2;NFSU2_TR(0x4c3143);
u8 U[4];
w4(U+0,u32(0x7918c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3149:{NFSU2_TR(0x4c3149);
{goto L4c314d;}
}
B4c314b:L4c314b:{c.instructions+=1;NFSU2_TR(0x4c314b);
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
B4c314d:L4c314d:{c.instructions+=5;NFSU2_TR(0x4c314d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c314f:{NFSU2_TR(0x4c314f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3150:{NFSU2_TR(0x4c3150);
__builtin_memmove((R+4),(R+24),4);
}
B4c3152:{NFSU2_TR(0x4c3152);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3156:{NFSU2_TR(0x4c3156);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3159ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3159:L4c3159:{c.instructions+=2;NFSU2_TR(0x4c3159);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c315b:{NFSU2_TR(0x4c315b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3160ull));
TAIL_STATIC(0x575620u,575);
}
B4c3160:L4c3160:{c.instructions+=6;NFSU2_TR(0x4c3160);
__builtin_memmove((R+28),(R+0),4);
}
B4c3162:{NFSU2_TR(0x4c3162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3165:{NFSU2_TR(0x4c3165);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3169:{NFSU2_TR(0x4c3169);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c316b:{NFSU2_TR(0x4c316b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3173:{NFSU2_TR(0x4c3173);
if(r1(R+518)){{goto L4c3190;}}
}
B4c3175:L4c3175:{c.instructions+=5;NFSU2_TR(0x4c3175);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3177:{NFSU2_TR(0x4c3177);
u8 U[4];
w4(U+0,u32(0xf760eabeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c317c:{NFSU2_TR(0x4c317c);
u8 U[4];
w4(U+0,u32(0xd708efefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3181:{NFSU2_TR(0x4c3181);
__builtin_memmove((R+4),(R+28),4);
}
B4c3183:{NFSU2_TR(0x4c3183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3188ull));
TAIL_STATIC(0x51f670u,51f);
}
B4c3188:L4c3188:{c.instructions+=2;NFSU2_TR(0x4c3188);
u8 U[4];
w4(U+0,u32(0x7918d0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c318e:{NFSU2_TR(0x4c318e);
{goto L4c3192;}
}
B4c3190:L4c3190:{c.instructions+=1;NFSU2_TR(0x4c3190);
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
B4c3192:L4c3192:{c.instructions+=5;NFSU2_TR(0x4c3192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c3194:{NFSU2_TR(0x4c3194);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3195:{NFSU2_TR(0x4c3195);
__builtin_memmove((R+4),(R+24),4);
}
B4c3197:{NFSU2_TR(0x4c3197);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c319b:{NFSU2_TR(0x4c319b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c319eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c319e:L4c319e:{c.instructions+=5;NFSU2_TR(0x4c319e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c31a1:{NFSU2_TR(0x4c31a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c31a4:{NFSU2_TR(0x4c31a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c31a7:{NFSU2_TR(0x4c31a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31a8:{NFSU2_TR(0x4c31a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c31adull));
TAIL_STATIC(0x50b8a0u,50b);
}
B4c31ad:L4c31ad:{c.instructions+=4;NFSU2_TR(0x4c31ad);
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
B4c31b0:{NFSU2_TR(0x4c31b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31b1:{NFSU2_TR(0x4c31b1);
__builtin_memmove((R+4),(R+28),4);
}
B4c31b3:{NFSU2_TR(0x4c31b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c31b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c31b6:L4c31b6:{c.instructions+=3;NFSU2_TR(0x4c31b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c31b8:{NFSU2_TR(0x4c31b8);
__builtin_memmove((R+4),(R+24),4);
}
B4c31ba:{NFSU2_TR(0x4c31ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c31bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c31bd:L4c31bd:{c.instructions+=7;NFSU2_TR(0x4c31bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c31c1:{NFSU2_TR(0x4c31c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c31c2:{NFSU2_TR(0x4c31c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c31c3:{NFSU2_TR(0x4c31c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c31c4:{NFSU2_TR(0x4c31c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c31cb:{NFSU2_TR(0x4c31cb);
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
B4c31ce:{NFSU2_TR(0x4c31ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c31d0:L4c31d0:{c.instructions+=7;NFSU2_TR(0x4c31d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31d1:{NFSU2_TR(0x4c31d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c31d5:{NFSU2_TR(0x4c31d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c31da:{NFSU2_TR(0x4c31da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31db:{NFSU2_TR(0x4c31db);
__builtin_memmove((R+12),(R+4),4);
}
B4c31dd:{NFSU2_TR(0x4c31dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c31e1:{NFSU2_TR(0x4c31e1);
if(r1(R+518)){{goto L4c31ee;}}
}
B4c31e3:L4c31e3:{c.instructions+=2;NFSU2_TR(0x4c31e3);
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
B4c31e8:{NFSU2_TR(0x4c31e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c32cb;}}
}
B4c31ee:L4c31ee:{c.instructions+=8;NFSU2_TR(0x4c31ee);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c31f4:{NFSU2_TR(0x4c31f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31f5:{NFSU2_TR(0x4c31f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31f6:{NFSU2_TR(0x4c31f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c31f9:{NFSU2_TR(0x4c31f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c31fa:{NFSU2_TR(0x4c31fa);
__builtin_memmove((R+28),gp(0x8900ac),4);
}
B4c3200:{NFSU2_TR(0x4c3200);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3202:{NFSU2_TR(0x4c3202);
if(r1(R+518)){{goto L4c3209;}}
}
B4c3204:L4c3204:{c.instructions+=2;NFSU2_TR(0x4c3204);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3207:{NFSU2_TR(0x4c3207);
{goto L4c320c;}
}
B4c3209:L4c3209:{c.instructions+=1;NFSU2_TR(0x4c3209);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c320c:L4c320c:{c.instructions+=3;NFSU2_TR(0x4c320c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c320e:{NFSU2_TR(0x4c320e);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c3214:{NFSU2_TR(0x4c3214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c321a;}}
}
B4c3216:L4c3216:{c.instructions+=2;NFSU2_TR(0x4c3216);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3218:{NFSU2_TR(0x4c3218);
{goto L4c322f;}
}
B4c321a:L4c321a:{c.instructions+=2;NFSU2_TR(0x4c321a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c321c:{NFSU2_TR(0x4c321c);
if(r1(R+518)){{goto L4c3223;}}
}
B4c321e:L4c321e:{c.instructions+=2;NFSU2_TR(0x4c321e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3221:{NFSU2_TR(0x4c3221);
{goto L4c3226;}
}
B4c3223:L4c3223:{c.instructions+=1;NFSU2_TR(0x4c3223);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3226:L4c3226:{c.instructions+=4;NFSU2_TR(0x4c3226);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3228:{NFSU2_TR(0x4c3228);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c322a:{NFSU2_TR(0x4c322a);
__builtin_memmove((R+8),(R+518),1);
}
B4c322d:{NFSU2_TR(0x4c322d);
__builtin_memmove((R+0),(R+8),4);
}
B4c322f:L4c322f:{c.instructions+=4;NFSU2_TR(0x4c322f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3232:{NFSU2_TR(0x4c3232);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa7aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B4c323a:{NFSU2_TR(0x4c323a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c323c:{NFSU2_TR(0x4c323c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3245;}}
}
B4c323e:L4c323e:{c.instructions+=2;NFSU2_TR(0x4c323e);
w4(R+8,u32(0x1ull));
}
B4c3243:{NFSU2_TR(0x4c3243);
{goto L4c324c;}
}
B4c3245:L4c3245:{c.instructions+=2;NFSU2_TR(0x4c3245);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3248:{NFSU2_TR(0x4c3248);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c324c;}}
}
B4c324a:L4c324a:{c.instructions+=1;NFSU2_TR(0x4c324a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c324c:L4c324c:{c.instructions+=2;NFSU2_TR(0x4c324c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c324e:{NFSU2_TR(0x4c324e);
if(r1(R+518)){{goto L4c3255;}}
}
B4c3250:L4c3250:{c.instructions+=2;NFSU2_TR(0x4c3250);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3253:{NFSU2_TR(0x4c3253);
{goto L4c3258;}
}
B4c3255:L4c3255:{c.instructions+=1;NFSU2_TR(0x4c3255);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3258:L4c3258:{c.instructions+=2;NFSU2_TR(0x4c3258);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c325a:{NFSU2_TR(0x4c325a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3260;}}
}
B4c325c:L4c325c:{c.instructions+=2;NFSU2_TR(0x4c325c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c325e:{NFSU2_TR(0x4c325e);
{goto L4c3279;}
}
B4c3260:L4c3260:{c.instructions+=2;NFSU2_TR(0x4c3260);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3262:{NFSU2_TR(0x4c3262);
if(r1(R+518)){{goto L4c3269;}}
}
B4c3264:L4c3264:{c.instructions+=2;NFSU2_TR(0x4c3264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3267:{NFSU2_TR(0x4c3267);
{goto L4c326c;}
}
B4c3269:L4c3269:{c.instructions+=1;NFSU2_TR(0x4c3269);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c326c:L4c326c:{c.instructions+=5;NFSU2_TR(0x4c326c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c326e:{NFSU2_TR(0x4c326e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3270:{NFSU2_TR(0x4c3270);
__builtin_memmove((R+12),(R+518),1);
}
B4c3273:{NFSU2_TR(0x4c3273);
__builtin_memmove((R+0),(R+12),4);
}
B4c3275:{NFSU2_TR(0x4c3275);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c3279:L4c3279:{c.instructions+=5;NFSU2_TR(0x4c3279);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c327b:{NFSU2_TR(0x4c327b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c327e:{NFSU2_TR(0x4c327e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa7aull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c3285:{NFSU2_TR(0x4c3285);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3288:{NFSU2_TR(0x4c3288);
if(r1(R+518)){{goto L4c328f;}}
}
B4c328a:L4c328a:{c.instructions+=2;NFSU2_TR(0x4c328a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c328d:{NFSU2_TR(0x4c328d);
{goto L4c3292;}
}
B4c328f:L4c328f:{c.instructions+=1;NFSU2_TR(0x4c328f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3292:L4c3292:{c.instructions+=2;NFSU2_TR(0x4c3292);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3294:{NFSU2_TR(0x4c3294);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c329a;}}
}
B4c3296:L4c3296:{c.instructions+=2;NFSU2_TR(0x4c3296);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3298:{NFSU2_TR(0x4c3298);
{goto L4c32b3;}
}
B4c329a:L4c329a:{c.instructions+=2;NFSU2_TR(0x4c329a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c329c:{NFSU2_TR(0x4c329c);
if(r1(R+518)){{goto L4c32a3;}}
}
B4c329e:L4c329e:{c.instructions+=2;NFSU2_TR(0x4c329e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c32a1:{NFSU2_TR(0x4c32a1);
{goto L4c32a6;}
}
B4c32a3:L4c32a3:{c.instructions+=1;NFSU2_TR(0x4c32a3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c32a6:L4c32a6:{c.instructions+=5;NFSU2_TR(0x4c32a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c32a8:{NFSU2_TR(0x4c32a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c32aa:{NFSU2_TR(0x4c32aa);
__builtin_memmove((R+12),(R+518),1);
}
B4c32ad:{NFSU2_TR(0x4c32ad);
__builtin_memmove((R+0),(R+12),4);
}
B4c32af:{NFSU2_TR(0x4c32af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c32b3:L4c32b3:{c.instructions+=6;NFSU2_TR(0x4c32b3);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c32b9:{NFSU2_TR(0x4c32b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32bb:{NFSU2_TR(0x4c32bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32bc:{NFSU2_TR(0x4c32bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32bd:{NFSU2_TR(0x4c32bd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32bf:{NFSU2_TR(0x4c32bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c32c4ull));
TAIL_STATIC(0x578ef0u,578);
}
B4c32c4:L4c32c4:{c.instructions+=4;NFSU2_TR(0x4c32c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c32c8:{NFSU2_TR(0x4c32c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c32c9:{NFSU2_TR(0x4c32c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c32ca:{NFSU2_TR(0x4c32ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c32cb:L4c32cb:{c.instructions+=4;NFSU2_TR(0x4c32cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c32cd:{NFSU2_TR(0x4c32cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32ce:{NFSU2_TR(0x4c32ce);
__builtin_memmove((R+4),(R+12),4);
}
B4c32d0:{NFSU2_TR(0x4c32d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c32d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c32d3:L4c32d3:{c.instructions+=3;NFSU2_TR(0x4c32d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c32d5:{NFSU2_TR(0x4c32d5);
__builtin_memmove((R+4),(R+12),4);
}
B4c32d7:{NFSU2_TR(0x4c32d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c32daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c32da:L4c32da:{c.instructions+=3;NFSU2_TR(0x4c32da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c32db:{NFSU2_TR(0x4c32db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c32dc:{NFSU2_TR(0x4c32dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c32e0:L4c32e0:{c.instructions+=7;NFSU2_TR(0x4c32e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32e1:{NFSU2_TR(0x4c32e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32e2:{NFSU2_TR(0x4c32e2);
__builtin_memmove((R+24),(R+4),4);
}
B4c32e4:{NFSU2_TR(0x4c32e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c32e7:{NFSU2_TR(0x4c32e7);
u8 U[4];
w4(U+0,u32(0xdf06ed22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32ec:{NFSU2_TR(0x4c32ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c32ed:{NFSU2_TR(0x4c32ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c32f2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c32f2:L4c32f2:{c.instructions+=7;NFSU2_TR(0x4c32f2);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c32f7:{NFSU2_TR(0x4c32f7);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c32fd:{NFSU2_TR(0x4c32fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3300:{NFSU2_TR(0x4c3300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3303:{NFSU2_TR(0x4c3303);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3305:{NFSU2_TR(0x4c3305);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3307:{NFSU2_TR(0x4c3307);
if(r1(R+518)){{goto L4c330e;}}
}
B4c3309:L4c3309:{c.instructions+=2;NFSU2_TR(0x4c3309);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c330c:{NFSU2_TR(0x4c330c);
{goto L4c3311;}
}
B4c330e:L4c330e:{c.instructions+=1;NFSU2_TR(0x4c330e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3311:L4c3311:{c.instructions+=2;NFSU2_TR(0x4c3311);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3313:{NFSU2_TR(0x4c3313);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3319;}}
}
B4c3315:L4c3315:{c.instructions+=2;NFSU2_TR(0x4c3315);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3317:{NFSU2_TR(0x4c3317);
{goto L4c3333;}
}
B4c3319:L4c3319:{c.instructions+=3;NFSU2_TR(0x4c3319);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c331e:{NFSU2_TR(0x4c331e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3320:{NFSU2_TR(0x4c3320);
if(r1(R+518)){{goto L4c3327;}}
}
B4c3322:L4c3322:{c.instructions+=2;NFSU2_TR(0x4c3322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3325:{NFSU2_TR(0x4c3325);
{goto L4c332a;}
}
B4c3327:L4c3327:{c.instructions+=1;NFSU2_TR(0x4c3327);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c332a:L4c332a:{c.instructions+=4;NFSU2_TR(0x4c332a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c332c:{NFSU2_TR(0x4c332c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c332e:{NFSU2_TR(0x4c332e);
__builtin_memmove((R+8),(R+518),1);
}
B4c3331:{NFSU2_TR(0x4c3331);
__builtin_memmove((R+0),(R+8),4);
}
B4c3333:L4c3333:{c.instructions+=4;NFSU2_TR(0x4c3333);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3336:{NFSU2_TR(0x4c3336);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa7aull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B4c333e:{NFSU2_TR(0x4c333e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c3341:{NFSU2_TR(0x4c3341);
if(r1(R+518)){{goto L4c335b;}}
}
B4c3343:L4c3343:{c.instructions+=2;NFSU2_TR(0x4c3343);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c3344:{NFSU2_TR(0x4c3344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3360;}}
}
B4c3346:L4c3346:{c.instructions+=5;NFSU2_TR(0x4c3346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3349:{NFSU2_TR(0x4c3349);
w4(R+28,u32(0xccfaull));
}
B4c334e:{NFSU2_TR(0x4c334e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c334f:{NFSU2_TR(0x4c334f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3350:{NFSU2_TR(0x4c3350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3355ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3355:L4c3355:{c.instructions+=4;NFSU2_TR(0x4c3355);
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
B4c3358:{NFSU2_TR(0x4c3358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3359:{NFSU2_TR(0x4c3359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c335a:{NFSU2_TR(0x4c335a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c335b:L4c335b:{c.instructions+=1;NFSU2_TR(0x4c335b);
w4(R+28,u32(0x63cull));
}
B4c3360:L4c3360:{c.instructions+=4;NFSU2_TR(0x4c3360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3363:{NFSU2_TR(0x4c3363);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3364:{NFSU2_TR(0x4c3364);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3365:{NFSU2_TR(0x4c3365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c336aull));
TAIL_STATIC(0x50c900u,50c);
}
B4c336a:L4c336a:{c.instructions+=4;NFSU2_TR(0x4c336a);
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
B4c336d:{NFSU2_TR(0x4c336d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c336e:{NFSU2_TR(0x4c336e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c336f:{NFSU2_TR(0x4c336f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3370:L4c3370:{c.instructions+=14;NFSU2_TR(0x4c3370);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3372:{NFSU2_TR(0x4c3372);
u8 U[4];
w4(U+0,u32(0x773dccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3377:{NFSU2_TR(0x4c3377);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c337d:{NFSU2_TR(0x4c337d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c337e:{NFSU2_TR(0x4c337e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3385:{NFSU2_TR(0x4c3385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3386:{NFSU2_TR(0x4c3386);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3387:{NFSU2_TR(0x4c3387);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3388:{NFSU2_TR(0x4c3388);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3389:{NFSU2_TR(0x4c3389);
__builtin_memmove((R+24),(R+4),4);
}
B4c338b:{NFSU2_TR(0x4c338b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c338e:{NFSU2_TR(0x4c338e);
u8 U[4];
w4(U+0,u32(0x1d7bb6c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3393:{NFSU2_TR(0x4c3393);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3398:{NFSU2_TR(0x4c3398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c339dull));
TAIL_STATIC(0x505450u,505);
}
B4c339d:L4c339d:{c.instructions+=3;NFSU2_TR(0x4c339d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c339e:{NFSU2_TR(0x4c339e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c339f:{NFSU2_TR(0x4c339f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33a4ull));
TAIL_STATIC(0x537a10u,537);
}
B4c33a4:L4c33a4:{c.instructions+=3;NFSU2_TR(0x4c33a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c33a7:{NFSU2_TR(0x4c33a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33a8:{NFSU2_TR(0x4c33a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33adull));
TAIL_STATIC(0x50c900u,50c);
}
B4c33ad:L4c33ad:{c.instructions+=5;NFSU2_TR(0x4c33ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c33b0:{NFSU2_TR(0x4c33b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c33b3:{NFSU2_TR(0x4c33b3);
u8 U[4];
w4(U+0,u32(0x737d1b97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33b8:{NFSU2_TR(0x4c33b8);
u8 U[4];
w4(U+0,u32(0x795640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33bd:{NFSU2_TR(0x4c33bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33c2ull));
TAIL_STATIC(0x505450u,505);
}
B4c33c2:L4c33c2:{c.instructions+=3;NFSU2_TR(0x4c33c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33c3:{NFSU2_TR(0x4c33c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33c4:{NFSU2_TR(0x4c33c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33c9ull));
TAIL_STATIC(0x537a10u,537);
}
B4c33c9:L4c33c9:{c.instructions+=3;NFSU2_TR(0x4c33c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c33cc:{NFSU2_TR(0x4c33cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33cd:{NFSU2_TR(0x4c33cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33d2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c33d2:L4c33d2:{c.instructions+=5;NFSU2_TR(0x4c33d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c33d5:{NFSU2_TR(0x4c33d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c33d8:{NFSU2_TR(0x4c33d8);
u8 U[4];
w4(U+0,u32(0x933dd695ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33dd:{NFSU2_TR(0x4c33dd);
u8 U[4];
w4(U+0,u32(0x7955e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33e2:{NFSU2_TR(0x4c33e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33e7ull));
TAIL_STATIC(0x505450u,505);
}
B4c33e7:L4c33e7:{c.instructions+=3;NFSU2_TR(0x4c33e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33e8:{NFSU2_TR(0x4c33e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33e9:{NFSU2_TR(0x4c33e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33eeull));
TAIL_STATIC(0x537a10u,537);
}
B4c33ee:L4c33ee:{c.instructions+=3;NFSU2_TR(0x4c33ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c33f1:{NFSU2_TR(0x4c33f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c33f2:{NFSU2_TR(0x4c33f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c33f7ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c33f7:L4c33f7:{c.instructions+=5;NFSU2_TR(0x4c33f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c33fa:{NFSU2_TR(0x4c33fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c33fd:{NFSU2_TR(0x4c33fd);
u8 U[4];
w4(U+0,u32(0x8202c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3402:{NFSU2_TR(0x4c3402);
u8 U[4];
w4(U+0,u32(0x7955d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3407:{NFSU2_TR(0x4c3407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c340cull));
TAIL_STATIC(0x505450u,505);
}
B4c340c:L4c340c:{c.instructions+=3;NFSU2_TR(0x4c340c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c340d:{NFSU2_TR(0x4c340d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c340e:{NFSU2_TR(0x4c340e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3413ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3413:L4c3413:{c.instructions+=3;NFSU2_TR(0x4c3413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3416:{NFSU2_TR(0x4c3416);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3417:{NFSU2_TR(0x4c3417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c341cull));
TAIL_STATIC(0x50c900u,50c);
}
B4c341c:L4c341c:{c.instructions+=2;NFSU2_TR(0x4c341c);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3421:{NFSU2_TR(0x4c3421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3426ull));
TAIL_STATIC(0x575620u,575);
}
B4c3426:L4c3426:{c.instructions+=6;NFSU2_TR(0x4c3426);
__builtin_memmove((R+28),(R+0),4);
}
B4c3428:{NFSU2_TR(0x4c3428);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c342b:{NFSU2_TR(0x4c342b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c342f:{NFSU2_TR(0x4c342f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3431:{NFSU2_TR(0x4c3431);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3439:{NFSU2_TR(0x4c3439);
if(r1(R+518)){{goto L4c3468;}}
}
B4c343b:L4c343b:{c.instructions+=11;NFSU2_TR(0x4c343b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c343d:{NFSU2_TR(0x4c343d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3443:{NFSU2_TR(0x4c3443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3444:{NFSU2_TR(0x4c3444);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c344a:{NFSU2_TR(0x4c344a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c344b:{NFSU2_TR(0x4c344b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3451:{NFSU2_TR(0x4c3451);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3452:{NFSU2_TR(0x4c3452);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3458:{NFSU2_TR(0x4c3458);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3459:{NFSU2_TR(0x4c3459);
__builtin_memmove((R+4),(R+28),4);
}
B4c345b:{NFSU2_TR(0x4c345b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3460ull));
TAIL_STATIC(0x51e840u,51e);
}
B4c3460:L4c3460:{c.instructions+=2;NFSU2_TR(0x4c3460);
u8 U[4];
w4(U+0,u32(0x7918f8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3466:{NFSU2_TR(0x4c3466);
{goto L4c346a;}
}
B4c3468:L4c3468:{c.instructions+=1;NFSU2_TR(0x4c3468);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c346a:L4c346a:{c.instructions+=6;NFSU2_TR(0x4c346a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c346c:{NFSU2_TR(0x4c346c);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4c346f:{NFSU2_TR(0x4c346f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3470:{NFSU2_TR(0x4c3470);
__builtin_memmove((R+4),(R+24),4);
}
B4c3472:{NFSU2_TR(0x4c3472);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3476:{NFSU2_TR(0x4c3476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c347bull));
TAIL_STATIC(0x54f800u,54f);
}
B4c347b:L4c347b:{c.instructions+=2;NFSU2_TR(0x4c347b);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3480:{NFSU2_TR(0x4c3480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3485ull));
TAIL_STATIC(0x575620u,575);
}
B4c3485:L4c3485:{c.instructions+=6;NFSU2_TR(0x4c3485);
__builtin_memmove((R+28),(R+0),4);
}
B4c3487:{NFSU2_TR(0x4c3487);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c348a:{NFSU2_TR(0x4c348a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c348e:{NFSU2_TR(0x4c348e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3490:{NFSU2_TR(0x4c3490);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3498:{NFSU2_TR(0x4c3498);
if(r1(R+518)){{goto L4c34c7;}}
}
B4c349a:L4c349a:{c.instructions+=11;NFSU2_TR(0x4c349a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c349c:{NFSU2_TR(0x4c349c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c34a2:{NFSU2_TR(0x4c34a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34a3:{NFSU2_TR(0x4c34a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c34a9:{NFSU2_TR(0x4c34a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34aa:{NFSU2_TR(0x4c34aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c34b0:{NFSU2_TR(0x4c34b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34b1:{NFSU2_TR(0x4c34b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c34b7:{NFSU2_TR(0x4c34b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34b8:{NFSU2_TR(0x4c34b8);
__builtin_memmove((R+4),(R+28),4);
}
B4c34ba:{NFSU2_TR(0x4c34ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c34bfull));
TAIL_STATIC(0x51e840u,51e);
}
B4c34bf:L4c34bf:{c.instructions+=2;NFSU2_TR(0x4c34bf);
u8 U[4];
w4(U+0,u32(0x791a88ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c34c5:{NFSU2_TR(0x4c34c5);
{goto L4c34c9;}
}
B4c34c7:L4c34c7:{c.instructions+=1;NFSU2_TR(0x4c34c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c34c9:L4c34c9:{c.instructions+=5;NFSU2_TR(0x4c34c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34cb:{NFSU2_TR(0x4c34cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34cc:{NFSU2_TR(0x4c34cc);
__builtin_memmove((R+4),(R+24),4);
}
B4c34ce:{NFSU2_TR(0x4c34ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c34d2:{NFSU2_TR(0x4c34d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c34d7ull));
TAIL_STATIC(0x54f800u,54f);
}
B4c34d7:L4c34d7:{c.instructions+=2;NFSU2_TR(0x4c34d7);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34dc:{NFSU2_TR(0x4c34dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c34e1ull));
TAIL_STATIC(0x575620u,575);
}
B4c34e1:L4c34e1:{c.instructions+=6;NFSU2_TR(0x4c34e1);
__builtin_memmove((R+28),(R+0),4);
}
B4c34e3:{NFSU2_TR(0x4c34e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c34e6:{NFSU2_TR(0x4c34e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c34ea:{NFSU2_TR(0x4c34ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c34ec:{NFSU2_TR(0x4c34ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c34f4:{NFSU2_TR(0x4c34f4);
if(r1(R+518)){{goto L4c3523;}}
}
B4c34f6:L4c34f6:{c.instructions+=11;NFSU2_TR(0x4c34f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34f8:{NFSU2_TR(0x4c34f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c34fe:{NFSU2_TR(0x4c34fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c34ff:{NFSU2_TR(0x4c34ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3505:{NFSU2_TR(0x4c3505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3506:{NFSU2_TR(0x4c3506);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c350c:{NFSU2_TR(0x4c350c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c350d:{NFSU2_TR(0x4c350d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3513:{NFSU2_TR(0x4c3513);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3514:{NFSU2_TR(0x4c3514);
__builtin_memmove((R+4),(R+28),4);
}
B4c3516:{NFSU2_TR(0x4c3516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c351bull));
TAIL_STATIC(0x51e840u,51e);
}
B4c351b:L4c351b:{c.instructions+=2;NFSU2_TR(0x4c351b);
u8 U[4];
w4(U+0,u32(0x791ad8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3521:{NFSU2_TR(0x4c3521);
{goto L4c3525;}
}
B4c3523:L4c3523:{c.instructions+=1;NFSU2_TR(0x4c3523);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3525:L4c3525:{c.instructions+=5;NFSU2_TR(0x4c3525);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3527:{NFSU2_TR(0x4c3527);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3528:{NFSU2_TR(0x4c3528);
__builtin_memmove((R+4),(R+24),4);
}
B4c352a:{NFSU2_TR(0x4c352a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c352e:{NFSU2_TR(0x4c352e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3533ull));
TAIL_STATIC(0x54f800u,54f);
}
B4c3533:L4c3533:{c.instructions+=2;NFSU2_TR(0x4c3533);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3538:{NFSU2_TR(0x4c3538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c353dull));
TAIL_STATIC(0x575620u,575);
}
B4c353d:L4c353d:{c.instructions+=6;NFSU2_TR(0x4c353d);
__builtin_memmove((R+28),(R+0),4);
}
B4c353f:{NFSU2_TR(0x4c353f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3542:{NFSU2_TR(0x4c3542);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3546:{NFSU2_TR(0x4c3546);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3548:{NFSU2_TR(0x4c3548);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3550:{NFSU2_TR(0x4c3550);
if(r1(R+518)){{goto L4c357f;}}
}
B4c3552:L4c3552:{c.instructions+=11;NFSU2_TR(0x4c3552);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3554:{NFSU2_TR(0x4c3554);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c355a:{NFSU2_TR(0x4c355a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c355b:{NFSU2_TR(0x4c355b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3561:{NFSU2_TR(0x4c3561);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3562:{NFSU2_TR(0x4c3562);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3568:{NFSU2_TR(0x4c3568);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3569:{NFSU2_TR(0x4c3569);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c356f:{NFSU2_TR(0x4c356f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3570:{NFSU2_TR(0x4c3570);
__builtin_memmove((R+4),(R+28),4);
}
B4c3572:{NFSU2_TR(0x4c3572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3577ull));
TAIL_STATIC(0x51e840u,51e);
}
B4c3577:L4c3577:{c.instructions+=2;NFSU2_TR(0x4c3577);
u8 U[4];
w4(U+0,u32(0x791a38ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c357d:{NFSU2_TR(0x4c357d);
{goto L4c3581;}
}
B4c357f:L4c357f:{c.instructions+=1;NFSU2_TR(0x4c357f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3581:L4c3581:{c.instructions+=5;NFSU2_TR(0x4c3581);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3583:{NFSU2_TR(0x4c3583);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3584:{NFSU2_TR(0x4c3584);
__builtin_memmove((R+4),(R+24),4);
}
B4c3586:{NFSU2_TR(0x4c3586);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c358a:{NFSU2_TR(0x4c358a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c358full));
TAIL_STATIC(0x54f800u,54f);
}
B4c358f:L4c358f:{c.instructions+=2;NFSU2_TR(0x4c358f);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3594:{NFSU2_TR(0x4c3594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3599ull));
TAIL_STATIC(0x575620u,575);
}
B4c3599:L4c3599:{c.instructions+=6;NFSU2_TR(0x4c3599);
__builtin_memmove((R+28),(R+0),4);
}
B4c359b:{NFSU2_TR(0x4c359b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c359e:{NFSU2_TR(0x4c359e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c35a2:{NFSU2_TR(0x4c35a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c35a4:{NFSU2_TR(0x4c35a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c35ac:{NFSU2_TR(0x4c35ac);
if(r1(R+518)){{goto L4c35db;}}
}
B4c35ae:L4c35ae:{c.instructions+=11;NFSU2_TR(0x4c35ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35b0:{NFSU2_TR(0x4c35b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c35b6:{NFSU2_TR(0x4c35b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35b7:{NFSU2_TR(0x4c35b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c35bd:{NFSU2_TR(0x4c35bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35be:{NFSU2_TR(0x4c35be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c35c4:{NFSU2_TR(0x4c35c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35c5:{NFSU2_TR(0x4c35c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c35cb:{NFSU2_TR(0x4c35cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35cc:{NFSU2_TR(0x4c35cc);
__builtin_memmove((R+4),(R+28),4);
}
B4c35ce:{NFSU2_TR(0x4c35ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c35d3ull));
TAIL_STATIC(0x51e840u,51e);
}
B4c35d3:L4c35d3:{c.instructions+=2;NFSU2_TR(0x4c35d3);
u8 U[4];
w4(U+0,u32(0x791948ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c35d9:{NFSU2_TR(0x4c35d9);
{goto L4c35dd;}
}
B4c35db:L4c35db:{c.instructions+=1;NFSU2_TR(0x4c35db);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c35dd:L4c35dd:{c.instructions+=5;NFSU2_TR(0x4c35dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35df:{NFSU2_TR(0x4c35df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35e0:{NFSU2_TR(0x4c35e0);
__builtin_memmove((R+4),(R+24),4);
}
B4c35e2:{NFSU2_TR(0x4c35e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c35e6:{NFSU2_TR(0x4c35e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c35ebull));
TAIL_STATIC(0x54f800u,54f);
}
B4c35eb:L4c35eb:{c.instructions+=2;NFSU2_TR(0x4c35eb);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c35f0:{NFSU2_TR(0x4c35f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c35f5ull));
TAIL_STATIC(0x575620u,575);
}
B4c35f5:L4c35f5:{c.instructions+=6;NFSU2_TR(0x4c35f5);
__builtin_memmove((R+28),(R+0),4);
}
B4c35f7:{NFSU2_TR(0x4c35f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c35fa:{NFSU2_TR(0x4c35fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c35fe:{NFSU2_TR(0x4c35fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3600:{NFSU2_TR(0x4c3600);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3608:{NFSU2_TR(0x4c3608);
if(r1(R+518)){{goto L4c3637;}}
}
B4c360a:L4c360a:{c.instructions+=11;NFSU2_TR(0x4c360a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c360c:{NFSU2_TR(0x4c360c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3612:{NFSU2_TR(0x4c3612);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3613:{NFSU2_TR(0x4c3613);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3619:{NFSU2_TR(0x4c3619);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c361a:{NFSU2_TR(0x4c361a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3620:{NFSU2_TR(0x4c3620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3621:{NFSU2_TR(0x4c3621);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3627:{NFSU2_TR(0x4c3627);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3628:{NFSU2_TR(0x4c3628);
__builtin_memmove((R+4),(R+28),4);
}
B4c362a:{NFSU2_TR(0x4c362a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c362full));
TAIL_STATIC(0x51e840u,51e);
}
B4c362f:L4c362f:{c.instructions+=2;NFSU2_TR(0x4c362f);
u8 U[4];
w4(U+0,u32(0x791998ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3635:{NFSU2_TR(0x4c3635);
{goto L4c3639;}
}
B4c3637:L4c3637:{c.instructions+=1;NFSU2_TR(0x4c3637);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3639:L4c3639:{c.instructions+=5;NFSU2_TR(0x4c3639);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c363b:{NFSU2_TR(0x4c363b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c363c:{NFSU2_TR(0x4c363c);
__builtin_memmove((R+4),(R+24),4);
}
B4c363e:{NFSU2_TR(0x4c363e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3642:{NFSU2_TR(0x4c3642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3647ull));
TAIL_STATIC(0x54f800u,54f);
}
B4c3647:L4c3647:{c.instructions+=2;NFSU2_TR(0x4c3647);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c364c:{NFSU2_TR(0x4c364c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3651ull));
TAIL_STATIC(0x575620u,575);
}
B4c3651:L4c3651:{c.instructions+=6;NFSU2_TR(0x4c3651);
__builtin_memmove((R+28),(R+0),4);
}
B4c3653:{NFSU2_TR(0x4c3653);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3656:{NFSU2_TR(0x4c3656);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c365a:{NFSU2_TR(0x4c365a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c365c:{NFSU2_TR(0x4c365c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3664:{NFSU2_TR(0x4c3664);
if(r1(R+518)){{goto L4c3693;}}
}
B4c3666:L4c3666:{c.instructions+=11;NFSU2_TR(0x4c3666);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3668:{NFSU2_TR(0x4c3668);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c366e:{NFSU2_TR(0x4c366e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c366f:{NFSU2_TR(0x4c366f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3675:{NFSU2_TR(0x4c3675);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3676:{NFSU2_TR(0x4c3676);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c367c:{NFSU2_TR(0x4c367c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c367d:{NFSU2_TR(0x4c367d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3683:{NFSU2_TR(0x4c3683);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3684:{NFSU2_TR(0x4c3684);
__builtin_memmove((R+4),(R+28),4);
}
B4c3686:{NFSU2_TR(0x4c3686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c368bull));
TAIL_STATIC(0x51e840u,51e);
}
B4c368b:L4c368b:{c.instructions+=2;NFSU2_TR(0x4c368b);
u8 U[4];
w4(U+0,u32(0x7919e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3691:{NFSU2_TR(0x4c3691);
{goto L4c3695;}
}
B4c3693:L4c3693:{c.instructions+=1;NFSU2_TR(0x4c3693);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3695:L4c3695:{c.instructions+=5;NFSU2_TR(0x4c3695);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3697:{NFSU2_TR(0x4c3697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3698:{NFSU2_TR(0x4c3698);
__builtin_memmove((R+4),(R+24),4);
}
B4c369a:{NFSU2_TR(0x4c369a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c369e:{NFSU2_TR(0x4c369e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c36a3ull));
TAIL_STATIC(0x54f800u,54f);
}
B4c36a3:L4c36a3:{c.instructions+=7;NFSU2_TR(0x4c36a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c36a7:{NFSU2_TR(0x4c36a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c36a8:{NFSU2_TR(0x4c36a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c36a9:{NFSU2_TR(0x4c36a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c36aa:{NFSU2_TR(0x4c36aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c36b1:{NFSU2_TR(0x4c36b1);
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
B4c36b4:{NFSU2_TR(0x4c36b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c36c0:L4c36c0:{c.instructions+=14;NFSU2_TR(0x4c36c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36c2:{NFSU2_TR(0x4c36c2);
u8 U[4];
w4(U+0,u32(0x773e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36c7:{NFSU2_TR(0x4c36c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c36cd:{NFSU2_TR(0x4c36cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36ce:{NFSU2_TR(0x4c36ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c36d5:{NFSU2_TR(0x4c36d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36d6:{NFSU2_TR(0x4c36d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36d7:{NFSU2_TR(0x4c36d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36d8:{NFSU2_TR(0x4c36d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36d9:{NFSU2_TR(0x4c36d9);
__builtin_memmove((R+24),(R+4),4);
}
B4c36db:{NFSU2_TR(0x4c36db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c36de:{NFSU2_TR(0x4c36de);
u8 U[4];
w4(U+0,u32(0x1d7bb6c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36e3:{NFSU2_TR(0x4c36e3);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36e8:{NFSU2_TR(0x4c36e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c36edull));
TAIL_STATIC(0x505450u,505);
}
B4c36ed:L4c36ed:{c.instructions+=3;NFSU2_TR(0x4c36ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36ee:{NFSU2_TR(0x4c36ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36ef:{NFSU2_TR(0x4c36ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c36f4ull));
TAIL_STATIC(0x537a10u,537);
}
B4c36f4:L4c36f4:{c.instructions+=3;NFSU2_TR(0x4c36f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c36f7:{NFSU2_TR(0x4c36f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c36f8:{NFSU2_TR(0x4c36f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c36fdull));
TAIL_STATIC(0x50c900u,50c);
}
B4c36fd:L4c36fd:{c.instructions+=5;NFSU2_TR(0x4c36fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3700:{NFSU2_TR(0x4c3700);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3703:{NFSU2_TR(0x4c3703);
u8 U[4];
w4(U+0,u32(0xef1bb23bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3708:{NFSU2_TR(0x4c3708);
u8 U[4];
w4(U+0,u32(0x795640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c370d:{NFSU2_TR(0x4c370d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3712ull));
TAIL_STATIC(0x505450u,505);
}
B4c3712:L4c3712:{c.instructions+=3;NFSU2_TR(0x4c3712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3713:{NFSU2_TR(0x4c3713);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3714:{NFSU2_TR(0x4c3714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3719ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3719:L4c3719:{c.instructions+=3;NFSU2_TR(0x4c3719);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c371c:{NFSU2_TR(0x4c371c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c371d:{NFSU2_TR(0x4c371d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3722ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3722:L4c3722:{c.instructions+=5;NFSU2_TR(0x4c3722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3725:{NFSU2_TR(0x4c3725);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3728:{NFSU2_TR(0x4c3728);
u8 U[4];
w4(U+0,u32(0x933dd695ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c372d:{NFSU2_TR(0x4c372d);
u8 U[4];
w4(U+0,u32(0x7955e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3732:{NFSU2_TR(0x4c3732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3737ull));
TAIL_STATIC(0x505450u,505);
}
B4c3737:L4c3737:{c.instructions+=3;NFSU2_TR(0x4c3737);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3738:{NFSU2_TR(0x4c3738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3739:{NFSU2_TR(0x4c3739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c373eull));
TAIL_STATIC(0x537a10u,537);
}
B4c373e:L4c373e:{c.instructions+=3;NFSU2_TR(0x4c373e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3741:{NFSU2_TR(0x4c3741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3742:{NFSU2_TR(0x4c3742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3747ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3747:L4c3747:{c.instructions+=5;NFSU2_TR(0x4c3747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c374a:{NFSU2_TR(0x4c374a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c374d:{NFSU2_TR(0x4c374d);
u8 U[4];
w4(U+0,u32(0x8202c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3752:{NFSU2_TR(0x4c3752);
u8 U[4];
w4(U+0,u32(0x7955d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3757:{NFSU2_TR(0x4c3757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c375cull));
TAIL_STATIC(0x505450u,505);
}
B4c375c:L4c375c:{c.instructions+=3;NFSU2_TR(0x4c375c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c375d:{NFSU2_TR(0x4c375d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c375e:{NFSU2_TR(0x4c375e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3763ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3763:L4c3763:{c.instructions+=3;NFSU2_TR(0x4c3763);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3766:{NFSU2_TR(0x4c3766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3767:{NFSU2_TR(0x4c3767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c376cull));
TAIL_STATIC(0x50c900u,50c);
}
B4c376c:L4c376c:{c.instructions+=2;NFSU2_TR(0x4c376c);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c376e:{NFSU2_TR(0x4c376e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3773ull));
TAIL_STATIC(0x575620u,575);
}
B4c3773:L4c3773:{c.instructions+=6;NFSU2_TR(0x4c3773);
__builtin_memmove((R+28),(R+0),4);
}
B4c3775:{NFSU2_TR(0x4c3775);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3778:{NFSU2_TR(0x4c3778);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c377c:{NFSU2_TR(0x4c377c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c377e:{NFSU2_TR(0x4c377e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3786:{NFSU2_TR(0x4c3786);
if(r1(R+518)){{goto L4c37b7;}}
}
B4c3788:L4c3788:{c.instructions+=11;NFSU2_TR(0x4c3788);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c378a:{NFSU2_TR(0x4c378a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3790:{NFSU2_TR(0x4c3790);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3791:{NFSU2_TR(0x4c3791);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3797:{NFSU2_TR(0x4c3797);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3798:{NFSU2_TR(0x4c3798);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c379e:{NFSU2_TR(0x4c379e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c379f:{NFSU2_TR(0x4c379f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c37a5:{NFSU2_TR(0x4c37a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37a6:{NFSU2_TR(0x4c37a6);
__builtin_memmove((R+4),(R+28),4);
}
B4c37a8:{NFSU2_TR(0x4c37a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c37adull));
TAIL_STATIC(0x51e230u,51e);
}
B4c37ad:L4c37ad:{c.instructions+=3;NFSU2_TR(0x4c37ad);
u8 U[4];
w4(U+0,u32(0x791f30ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c37b3:{NFSU2_TR(0x4c37b3);
__builtin_memmove((R+12),(R+28),4);
}
B4c37b5:{NFSU2_TR(0x4c37b5);
{goto L4c37b9;}
}
B4c37b7:L4c37b7:{c.instructions+=1;NFSU2_TR(0x4c37b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c37b9:L4c37b9:{c.instructions+=5;NFSU2_TR(0x4c37b9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37bb:{NFSU2_TR(0x4c37bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37bc:{NFSU2_TR(0x4c37bc);
__builtin_memmove((R+4),(R+24),4);
}
B4c37be:{NFSU2_TR(0x4c37be);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c37c6:{NFSU2_TR(0x4c37c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c37cbull));
TAIL_STATIC(0x54ef30u,54e);
}
B4c37cb:L4c37cb:{c.instructions+=2;NFSU2_TR(0x4c37cb);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37d0:{NFSU2_TR(0x4c37d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c37d5ull));
TAIL_STATIC(0x575620u,575);
}
B4c37d5:L4c37d5:{c.instructions+=6;NFSU2_TR(0x4c37d5);
__builtin_memmove((R+28),(R+0),4);
}
B4c37d7:{NFSU2_TR(0x4c37d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c37da:{NFSU2_TR(0x4c37da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c37de:{NFSU2_TR(0x4c37de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c37e0:{NFSU2_TR(0x4c37e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c37e8:{NFSU2_TR(0x4c37e8);
if(r1(R+518)){{goto L4c3821;}}
}
B4c37ea:L4c37ea:{c.instructions+=11;NFSU2_TR(0x4c37ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37ec:{NFSU2_TR(0x4c37ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c37f2:{NFSU2_TR(0x4c37f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37f3:{NFSU2_TR(0x4c37f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c37f9:{NFSU2_TR(0x4c37f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c37fa:{NFSU2_TR(0x4c37fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3800:{NFSU2_TR(0x4c3800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3801:{NFSU2_TR(0x4c3801);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3807:{NFSU2_TR(0x4c3807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3808:{NFSU2_TR(0x4c3808);
__builtin_memmove((R+4),(R+28),4);
}
B4c380a:{NFSU2_TR(0x4c380a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c380full));
TAIL_STATIC(0x51e840u,51e);
}
B4c380f:L4c380f:{c.instructions+=3;NFSU2_TR(0x4c380f);
u8 U[4];
w4(U+0,u32(0x791f78ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3815:{NFSU2_TR(0x4c3815);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c381f:{NFSU2_TR(0x4c381f);
{goto L4c3823;}
}
B4c3821:L4c3821:{c.instructions+=1;NFSU2_TR(0x4c3821);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3823:L4c3823:{c.instructions+=5;NFSU2_TR(0x4c3823);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3825:{NFSU2_TR(0x4c3825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3826:{NFSU2_TR(0x4c3826);
__builtin_memmove((R+4),(R+24),4);
}
B4c3828:{NFSU2_TR(0x4c3828);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3830:{NFSU2_TR(0x4c3830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3835ull));
TAIL_STATIC(0x54f410u,54f);
}
B4c3835:L4c3835:{c.instructions+=3;NFSU2_TR(0x4c3835);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3837:{NFSU2_TR(0x4c3837);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c383d:{NFSU2_TR(0x4c383d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3842ull));
TAIL_STATIC(0x575620u,575);
}
B4c3842:L4c3842:{c.instructions+=6;NFSU2_TR(0x4c3842);
__builtin_memmove((R+28),(R+0),4);
}
B4c3844:{NFSU2_TR(0x4c3844);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3847:{NFSU2_TR(0x4c3847);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c384b:{NFSU2_TR(0x4c384b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c384d:{NFSU2_TR(0x4c384d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3855:{NFSU2_TR(0x4c3855);
if(r1(R+518)){{goto L4c3876;}}
}
B4c3857:L4c3857:{c.instructions+=7;NFSU2_TR(0x4c3857);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3859:{NFSU2_TR(0x4c3859);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c385f:{NFSU2_TR(0x4c385f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3860:{NFSU2_TR(0x4c3860);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3866:{NFSU2_TR(0x4c3866);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3867:{NFSU2_TR(0x4c3867);
__builtin_memmove((R+4),(R+28),4);
}
B4c3869:{NFSU2_TR(0x4c3869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c386eull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4c386e:L4c386e:{c.instructions+=2;NFSU2_TR(0x4c386e);
u8 U[4];
w4(U+0,u32(0x792060ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3874:{NFSU2_TR(0x4c3874);
{goto L4c3878;}
}
B4c3876:L4c3876:{c.instructions+=1;NFSU2_TR(0x4c3876);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3878:L4c3878:{c.instructions+=5;NFSU2_TR(0x4c3878);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4c387b:{NFSU2_TR(0x4c387b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c387c:{NFSU2_TR(0x4c387c);
__builtin_memmove((R+4),(R+24),4);
}
B4c387e:{NFSU2_TR(0x4c387e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3882:{NFSU2_TR(0x4c3882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3887ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4c3887:L4c3887:{c.instructions+=2;NFSU2_TR(0x4c3887);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3889:{NFSU2_TR(0x4c3889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c388eull));
TAIL_STATIC(0x575620u,575);
}
B4c388e:L4c388e:{c.instructions+=6;NFSU2_TR(0x4c388e);
__builtin_memmove((R+28),(R+0),4);
}
B4c3890:{NFSU2_TR(0x4c3890);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3893:{NFSU2_TR(0x4c3893);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3897:{NFSU2_TR(0x4c3897);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3899:{NFSU2_TR(0x4c3899);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c38a1:{NFSU2_TR(0x4c38a1);
if(r1(R+518)){{goto L4c38c2;}}
}
B4c38a3:L4c38a3:{c.instructions+=7;NFSU2_TR(0x4c38a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38a5:{NFSU2_TR(0x4c38a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c38ab:{NFSU2_TR(0x4c38ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38ac:{NFSU2_TR(0x4c38ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c38b2:{NFSU2_TR(0x4c38b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38b3:{NFSU2_TR(0x4c38b3);
__builtin_memmove((R+4),(R+28),4);
}
B4c38b5:{NFSU2_TR(0x4c38b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c38baull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4c38ba:L4c38ba:{c.instructions+=2;NFSU2_TR(0x4c38ba);
u8 U[4];
w4(U+0,u32(0x7920a0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c38c0:{NFSU2_TR(0x4c38c0);
{goto L4c38c4;}
}
B4c38c2:L4c38c2:{c.instructions+=1;NFSU2_TR(0x4c38c2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c38c4:L4c38c4:{c.instructions+=4;NFSU2_TR(0x4c38c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38c5:{NFSU2_TR(0x4c38c5);
__builtin_memmove((R+4),(R+24),4);
}
B4c38c7:{NFSU2_TR(0x4c38c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c38cb:{NFSU2_TR(0x4c38cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c38d0ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4c38d0:L4c38d0:{c.instructions+=7;NFSU2_TR(0x4c38d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c38d4:{NFSU2_TR(0x4c38d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c38d5:{NFSU2_TR(0x4c38d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c38d6:{NFSU2_TR(0x4c38d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c38d7:{NFSU2_TR(0x4c38d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c38de:{NFSU2_TR(0x4c38de);
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
B4c38e1:{NFSU2_TR(0x4c38e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c38f0:L4c38f0:{c.instructions+=18;NFSU2_TR(0x4c38f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38f2:{NFSU2_TR(0x4c38f2);
u8 U[4];
w4(U+0,u32(0x773eccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38f7:{NFSU2_TR(0x4c38f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c38fd:{NFSU2_TR(0x4c38fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c38fe:{NFSU2_TR(0x4c38fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3905:{NFSU2_TR(0x4c3905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3906:{NFSU2_TR(0x4c3906);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B4c390b:{NFSU2_TR(0x4c390b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c390c:{NFSU2_TR(0x4c390c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c390d:{NFSU2_TR(0x4c390d);
__builtin_memmove((R+24),(R+4),4);
}
B4c390f:{NFSU2_TR(0x4c390f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3910:{NFSU2_TR(0x4c3910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3913:{NFSU2_TR(0x4c3913);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x159ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c3919:{NFSU2_TR(0x4c3919);
__builtin_memmove((R+4),gp(0x844ad9),1);
}
B4c391f:{NFSU2_TR(0x4c391f);
u8 U[4];
w4(U+0,u32(0x1d7bb6c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3924:{NFSU2_TR(0x4c3924);
u8 U[4];
w4(U+0,u32(0x78fc4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3929:{NFSU2_TR(0x4c3929);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c392f:{NFSU2_TR(0x4c392f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3934ull));
TAIL_STATIC(0x505450u,505);
}
B4c3934:L4c3934:{c.instructions+=3;NFSU2_TR(0x4c3934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3935:{NFSU2_TR(0x4c3935);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3936:{NFSU2_TR(0x4c3936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c393bull));
TAIL_STATIC(0x537a10u,537);
}
B4c393b:L4c393b:{c.instructions+=3;NFSU2_TR(0x4c393b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c393e:{NFSU2_TR(0x4c393e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c393f:{NFSU2_TR(0x4c393f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3944ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3944:L4c3944:{c.instructions+=5;NFSU2_TR(0x4c3944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3947:{NFSU2_TR(0x4c3947);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c394a:{NFSU2_TR(0x4c394a);
u8 U[4];
w4(U+0,u32(0xe8647e75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c394f:{NFSU2_TR(0x4c394f);
u8 U[4];
w4(U+0,u32(0x795640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3954:{NFSU2_TR(0x4c3954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3959ull));
TAIL_STATIC(0x505450u,505);
}
B4c3959:L4c3959:{c.instructions+=3;NFSU2_TR(0x4c3959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c395a:{NFSU2_TR(0x4c395a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c395b:{NFSU2_TR(0x4c395b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3960ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3960:L4c3960:{c.instructions+=3;NFSU2_TR(0x4c3960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3963:{NFSU2_TR(0x4c3963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3964:{NFSU2_TR(0x4c3964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3969ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3969:L4c3969:{c.instructions+=5;NFSU2_TR(0x4c3969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c396c:{NFSU2_TR(0x4c396c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c396f:{NFSU2_TR(0x4c396f);
u8 U[4];
w4(U+0,u32(0x933dd695ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3974:{NFSU2_TR(0x4c3974);
u8 U[4];
w4(U+0,u32(0x7955e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3979:{NFSU2_TR(0x4c3979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c397eull));
TAIL_STATIC(0x505450u,505);
}
B4c397e:L4c397e:{c.instructions+=3;NFSU2_TR(0x4c397e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c397f:{NFSU2_TR(0x4c397f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3980:{NFSU2_TR(0x4c3980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3985ull));
TAIL_STATIC(0x537a10u,537);
}
B4c3985:L4c3985:{c.instructions+=3;NFSU2_TR(0x4c3985);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c3988:{NFSU2_TR(0x4c3988);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3989:{NFSU2_TR(0x4c3989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c398eull));
TAIL_STATIC(0x50c900u,50c);
}
B4c398e:L4c398e:{c.instructions+=5;NFSU2_TR(0x4c398e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3991:{NFSU2_TR(0x4c3991);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3994:{NFSU2_TR(0x4c3994);
u8 U[4];
w4(U+0,u32(0x8202c364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3999:{NFSU2_TR(0x4c3999);
u8 U[4];
w4(U+0,u32(0x7955d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c399e:{NFSU2_TR(0x4c399e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c39a3ull));
TAIL_STATIC(0x505450u,505);
}
B4c39a3:L4c39a3:{c.instructions+=3;NFSU2_TR(0x4c39a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39a4:{NFSU2_TR(0x4c39a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39a5:{NFSU2_TR(0x4c39a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c39aaull));
TAIL_STATIC(0x537a10u,537);
}
B4c39aa:L4c39aa:{c.instructions+=3;NFSU2_TR(0x4c39aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c39ad:{NFSU2_TR(0x4c39ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39ae:{NFSU2_TR(0x4c39ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c39b3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c39b3:L4c39b3:{c.instructions+=3;NFSU2_TR(0x4c39b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c39b6:{NFSU2_TR(0x4c39b6);
w4(R+4,u32(0x85ad40ull));
}
B4c39bb:{NFSU2_TR(0x4c39bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c39c0ull));
TAIL_STATIC(0x500b60u,500);
}
B4c39c0:L4c39c0:{c.instructions+=3;NFSU2_TR(0x4c39c0);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4c39c3:{NFSU2_TR(0x4c39c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c39c5:{NFSU2_TR(0x4c39c5);
if(r1(R+518)){{goto L4c3a20;}}
}
B4c39c7:L4c39c7:{c.instructions+=2;NFSU2_TR(0x4c39c7);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39c9:{NFSU2_TR(0x4c39c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c39ceull));
TAIL_STATIC(0x575620u,575);
}
B4c39ce:L4c39ce:{c.instructions+=6;NFSU2_TR(0x4c39ce);
__builtin_memmove((R+28),(R+0),4);
}
B4c39d0:{NFSU2_TR(0x4c39d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c39d3:{NFSU2_TR(0x4c39d3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c39d7:{NFSU2_TR(0x4c39d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c39d9:{NFSU2_TR(0x4c39d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c39e1:{NFSU2_TR(0x4c39e1);
if(r1(R+518)){{goto L4c3a10;}}
}
B4c39e3:L4c39e3:{c.instructions+=11;NFSU2_TR(0x4c39e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39e5:{NFSU2_TR(0x4c39e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c39eb:{NFSU2_TR(0x4c39eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39ec:{NFSU2_TR(0x4c39ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c39f2:{NFSU2_TR(0x4c39f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39f3:{NFSU2_TR(0x4c39f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c39f9:{NFSU2_TR(0x4c39f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c39fa:{NFSU2_TR(0x4c39fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3a00:{NFSU2_TR(0x4c3a00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a01:{NFSU2_TR(0x4c3a01);
__builtin_memmove((R+4),(R+28),4);
}
B4c3a03:{NFSU2_TR(0x4c3a03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a08ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3a08:L4c3a08:{c.instructions+=2;NFSU2_TR(0x4c3a08);
u8 U[4];
w4(U+0,u32(0x791d20ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3a0e:{NFSU2_TR(0x4c3a0e);
{goto L4c3a12;}
}
B4c3a10:L4c3a10:{c.instructions+=1;NFSU2_TR(0x4c3a10);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3a12:L4c3a12:{c.instructions+=5;NFSU2_TR(0x4c3a12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a14:{NFSU2_TR(0x4c3a14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a15:{NFSU2_TR(0x4c3a15);
__builtin_memmove((R+4),(R+24),4);
}
B4c3a17:{NFSU2_TR(0x4c3a17);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3a1b:{NFSU2_TR(0x4c3a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a20ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4c3a20:L4c3a20:{c.instructions+=2;NFSU2_TR(0x4c3a20);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a22:{NFSU2_TR(0x4c3a22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a27ull));
TAIL_STATIC(0x575620u,575);
}
B4c3a27:L4c3a27:{c.instructions+=6;NFSU2_TR(0x4c3a27);
__builtin_memmove((R+28),(R+0),4);
}
B4c3a29:{NFSU2_TR(0x4c3a29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3a2c:{NFSU2_TR(0x4c3a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3a30:{NFSU2_TR(0x4c3a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3a32:{NFSU2_TR(0x4c3a32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3a3a:{NFSU2_TR(0x4c3a3a);
if(r1(R+518)){{goto L4c3a69;}}
}
B4c3a3c:L4c3a3c:{c.instructions+=11;NFSU2_TR(0x4c3a3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a3e:{NFSU2_TR(0x4c3a3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3a44:{NFSU2_TR(0x4c3a44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a45:{NFSU2_TR(0x4c3a45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3a4b:{NFSU2_TR(0x4c3a4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a4c:{NFSU2_TR(0x4c3a4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3a52:{NFSU2_TR(0x4c3a52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a53:{NFSU2_TR(0x4c3a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3a59:{NFSU2_TR(0x4c3a59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a5a:{NFSU2_TR(0x4c3a5a);
__builtin_memmove((R+4),(R+28),4);
}
B4c3a5c:{NFSU2_TR(0x4c3a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a61ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3a61:L4c3a61:{c.instructions+=2;NFSU2_TR(0x4c3a61);
u8 U[4];
w4(U+0,u32(0x791c00ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3a67:{NFSU2_TR(0x4c3a67);
{goto L4c3a6b;}
}
B4c3a69:L4c3a69:{c.instructions+=1;NFSU2_TR(0x4c3a69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3a6b:L4c3a6b:{c.instructions+=5;NFSU2_TR(0x4c3a6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a6d:{NFSU2_TR(0x4c3a6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a6e:{NFSU2_TR(0x4c3a6e);
__builtin_memmove((R+4),(R+24),4);
}
B4c3a70:{NFSU2_TR(0x4c3a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3a74:{NFSU2_TR(0x4c3a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a79ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c3a79:L4c3a79:{c.instructions+=2;NFSU2_TR(0x4c3a79);
w4(R+4,u32(0x83aab4ull));
}
B4c3a7e:{NFSU2_TR(0x4c3a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a83ull));
TAIL_STATIC(0x5026f0u,502);
}
B4c3a83:L4c3a83:{c.instructions+=2;NFSU2_TR(0x4c3a83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3a86:{NFSU2_TR(0x4c3a86);
if(r1(R+518)){{goto L4c3ae1;}}
}
B4c3a88:L4c3a88:{c.instructions+=2;NFSU2_TR(0x4c3a88);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3a8a:{NFSU2_TR(0x4c3a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3a8full));
TAIL_STATIC(0x575620u,575);
}
B4c3a8f:L4c3a8f:{c.instructions+=6;NFSU2_TR(0x4c3a8f);
__builtin_memmove((R+28),(R+0),4);
}
B4c3a91:{NFSU2_TR(0x4c3a91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3a94:{NFSU2_TR(0x4c3a94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3a98:{NFSU2_TR(0x4c3a98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3a9a:{NFSU2_TR(0x4c3a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3aa2:{NFSU2_TR(0x4c3aa2);
if(r1(R+518)){{goto L4c3ad1;}}
}
B4c3aa4:L4c3aa4:{c.instructions+=11;NFSU2_TR(0x4c3aa4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3aa6:{NFSU2_TR(0x4c3aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3aac:{NFSU2_TR(0x4c3aac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3aad:{NFSU2_TR(0x4c3aad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3ab3:{NFSU2_TR(0x4c3ab3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ab4:{NFSU2_TR(0x4c3ab4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3aba:{NFSU2_TR(0x4c3aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3abb:{NFSU2_TR(0x4c3abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3ac1:{NFSU2_TR(0x4c3ac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ac2:{NFSU2_TR(0x4c3ac2);
__builtin_memmove((R+4),(R+28),4);
}
B4c3ac4:{NFSU2_TR(0x4c3ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ac9ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3ac9:L4c3ac9:{c.instructions+=2;NFSU2_TR(0x4c3ac9);
u8 U[4];
w4(U+0,u32(0x791c48ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3acf:{NFSU2_TR(0x4c3acf);
{goto L4c3ad3;}
}
B4c3ad1:L4c3ad1:{c.instructions+=1;NFSU2_TR(0x4c3ad1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3ad3:L4c3ad3:{c.instructions+=5;NFSU2_TR(0x4c3ad3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ad5:{NFSU2_TR(0x4c3ad5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ad6:{NFSU2_TR(0x4c3ad6);
__builtin_memmove((R+4),(R+24),4);
}
B4c3ad8:{NFSU2_TR(0x4c3ad8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3adc:{NFSU2_TR(0x4c3adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ae1ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c3ae1:L4c3ae1:{c.instructions+=2;NFSU2_TR(0x4c3ae1);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ae3:{NFSU2_TR(0x4c3ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ae8ull));
TAIL_STATIC(0x575620u,575);
}
B4c3ae8:L4c3ae8:{c.instructions+=6;NFSU2_TR(0x4c3ae8);
__builtin_memmove((R+28),(R+0),4);
}
B4c3aea:{NFSU2_TR(0x4c3aea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3aed:{NFSU2_TR(0x4c3aed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3af1:{NFSU2_TR(0x4c3af1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3af3:{NFSU2_TR(0x4c3af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3afb:{NFSU2_TR(0x4c3afb);
if(r1(R+518)){{goto L4c3b2a;}}
}
B4c3afd:L4c3afd:{c.instructions+=11;NFSU2_TR(0x4c3afd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3aff:{NFSU2_TR(0x4c3aff);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3b05:{NFSU2_TR(0x4c3b05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b06:{NFSU2_TR(0x4c3b06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3b0c:{NFSU2_TR(0x4c3b0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b0d:{NFSU2_TR(0x4c3b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3b13:{NFSU2_TR(0x4c3b13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b14:{NFSU2_TR(0x4c3b14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3b1a:{NFSU2_TR(0x4c3b1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b1b:{NFSU2_TR(0x4c3b1b);
__builtin_memmove((R+4),(R+28),4);
}
B4c3b1d:{NFSU2_TR(0x4c3b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3b22ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3b22:L4c3b22:{c.instructions+=2;NFSU2_TR(0x4c3b22);
u8 U[4];
w4(U+0,u32(0x791c90ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3b28:{NFSU2_TR(0x4c3b28);
{goto L4c3b2c;}
}
B4c3b2a:L4c3b2a:{c.instructions+=1;NFSU2_TR(0x4c3b2a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3b2c:L4c3b2c:{c.instructions+=5;NFSU2_TR(0x4c3b2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b2e:{NFSU2_TR(0x4c3b2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b2f:{NFSU2_TR(0x4c3b2f);
__builtin_memmove((R+4),(R+24),4);
}
B4c3b31:{NFSU2_TR(0x4c3b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3b35:{NFSU2_TR(0x4c3b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3b3aull));
TAIL_STATIC(0x54f170u,54f);
}
B4c3b3a:L4c3b3a:{c.instructions+=2;NFSU2_TR(0x4c3b3a);
w4(R+4,u32(0x83aab4ull));
}
B4c3b3f:{NFSU2_TR(0x4c3b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3b44ull));
TAIL_STATIC(0x5026f0u,502);
}
B4c3b44:L4c3b44:{c.instructions+=2;NFSU2_TR(0x4c3b44);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3b47:{NFSU2_TR(0x4c3b47);
if(r1(R+518)){{goto L4c3ba2;}}
}
B4c3b49:L4c3b49:{c.instructions+=2;NFSU2_TR(0x4c3b49);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b4b:{NFSU2_TR(0x4c3b4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3b50ull));
TAIL_STATIC(0x575620u,575);
}
B4c3b50:L4c3b50:{c.instructions+=6;NFSU2_TR(0x4c3b50);
__builtin_memmove((R+28),(R+0),4);
}
B4c3b52:{NFSU2_TR(0x4c3b52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3b55:{NFSU2_TR(0x4c3b55);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3b59:{NFSU2_TR(0x4c3b59);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3b5b:{NFSU2_TR(0x4c3b5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3b63:{NFSU2_TR(0x4c3b63);
if(r1(R+518)){{goto L4c3b92;}}
}
B4c3b65:L4c3b65:{c.instructions+=11;NFSU2_TR(0x4c3b65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b67:{NFSU2_TR(0x4c3b67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3b6d:{NFSU2_TR(0x4c3b6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b6e:{NFSU2_TR(0x4c3b6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3b74:{NFSU2_TR(0x4c3b74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b75:{NFSU2_TR(0x4c3b75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3b7b:{NFSU2_TR(0x4c3b7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b7c:{NFSU2_TR(0x4c3b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3b82:{NFSU2_TR(0x4c3b82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b83:{NFSU2_TR(0x4c3b83);
__builtin_memmove((R+4),(R+28),4);
}
B4c3b85:{NFSU2_TR(0x4c3b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3b8aull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3b8a:L4c3b8a:{c.instructions+=2;NFSU2_TR(0x4c3b8a);
u8 U[4];
w4(U+0,u32(0x791d68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3b90:{NFSU2_TR(0x4c3b90);
{goto L4c3b94;}
}
B4c3b92:L4c3b92:{c.instructions+=1;NFSU2_TR(0x4c3b92);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3b94:L4c3b94:{c.instructions+=5;NFSU2_TR(0x4c3b94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b96:{NFSU2_TR(0x4c3b96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3b97:{NFSU2_TR(0x4c3b97);
__builtin_memmove((R+4),(R+24),4);
}
B4c3b99:{NFSU2_TR(0x4c3b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3b9d:{NFSU2_TR(0x4c3b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ba2ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c3ba2:L4c3ba2:{c.instructions+=2;NFSU2_TR(0x4c3ba2);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ba4:{NFSU2_TR(0x4c3ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ba9ull));
TAIL_STATIC(0x575620u,575);
}
B4c3ba9:L4c3ba9:{c.instructions+=6;NFSU2_TR(0x4c3ba9);
__builtin_memmove((R+28),(R+0),4);
}
B4c3bab:{NFSU2_TR(0x4c3bab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3bae:{NFSU2_TR(0x4c3bae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3bb2:{NFSU2_TR(0x4c3bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3bb4:{NFSU2_TR(0x4c3bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3bbc:{NFSU2_TR(0x4c3bbc);
if(r1(R+518)){{goto L4c3beb;}}
}
B4c3bbe:L4c3bbe:{c.instructions+=11;NFSU2_TR(0x4c3bbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bc0:{NFSU2_TR(0x4c3bc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3bc6:{NFSU2_TR(0x4c3bc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bc7:{NFSU2_TR(0x4c3bc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3bcd:{NFSU2_TR(0x4c3bcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bce:{NFSU2_TR(0x4c3bce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3bd4:{NFSU2_TR(0x4c3bd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bd5:{NFSU2_TR(0x4c3bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3bdb:{NFSU2_TR(0x4c3bdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bdc:{NFSU2_TR(0x4c3bdc);
__builtin_memmove((R+4),(R+28),4);
}
B4c3bde:{NFSU2_TR(0x4c3bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3be3ull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3be3:L4c3be3:{c.instructions+=2;NFSU2_TR(0x4c3be3);
u8 U[4];
w4(U+0,u32(0x791cd8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3be9:{NFSU2_TR(0x4c3be9);
{goto L4c3bed;}
}
B4c3beb:L4c3beb:{c.instructions+=1;NFSU2_TR(0x4c3beb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3bed:L4c3bed:{c.instructions+=5;NFSU2_TR(0x4c3bed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bef:{NFSU2_TR(0x4c3bef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bf0:{NFSU2_TR(0x4c3bf0);
__builtin_memmove((R+4),(R+24),4);
}
B4c3bf2:{NFSU2_TR(0x4c3bf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3bf6:{NFSU2_TR(0x4c3bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3bfbull));
TAIL_STATIC(0x54f170u,54f);
}
B4c3bfb:L4c3bfb:{c.instructions+=2;NFSU2_TR(0x4c3bfb);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3bfd:{NFSU2_TR(0x4c3bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3c02ull));
TAIL_STATIC(0x575620u,575);
}
B4c3c02:L4c3c02:{c.instructions+=6;NFSU2_TR(0x4c3c02);
__builtin_memmove((R+28),(R+0),4);
}
B4c3c04:{NFSU2_TR(0x4c3c04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c3c07:{NFSU2_TR(0x4c3c07);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3c0b:{NFSU2_TR(0x4c3c0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3c0d:{NFSU2_TR(0x4c3c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c3c15:{NFSU2_TR(0x4c3c15);
if(r1(R+518)){{goto L4c3c44;}}
}
B4c3c17:L4c3c17:{c.instructions+=11;NFSU2_TR(0x4c3c17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c19:{NFSU2_TR(0x4c3c19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3c1f:{NFSU2_TR(0x4c3c1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c20:{NFSU2_TR(0x4c3c20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c3c26:{NFSU2_TR(0x4c3c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c27:{NFSU2_TR(0x4c3c27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3c2d:{NFSU2_TR(0x4c3c2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c2e:{NFSU2_TR(0x4c3c2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c3c34:{NFSU2_TR(0x4c3c34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c35:{NFSU2_TR(0x4c3c35);
__builtin_memmove((R+4),(R+28),4);
}
B4c3c37:{NFSU2_TR(0x4c3c37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3c3cull));
TAIL_STATIC(0x51e230u,51e);
}
B4c3c3c:L4c3c3c:{c.instructions+=2;NFSU2_TR(0x4c3c3c);
u8 U[4];
w4(U+0,u32(0x793d68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4c3c42:{NFSU2_TR(0x4c3c42);
{goto L4c3c46;}
}
B4c3c44:L4c3c44:{c.instructions+=1;NFSU2_TR(0x4c3c44);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3c46:L4c3c46:{c.instructions+=5;NFSU2_TR(0x4c3c46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c48:{NFSU2_TR(0x4c3c48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c49:{NFSU2_TR(0x4c3c49);
__builtin_memmove((R+4),(R+24),4);
}
B4c3c4b:{NFSU2_TR(0x4c3c4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3c4f:{NFSU2_TR(0x4c3c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3c54ull));
TAIL_STATIC(0x54f170u,54f);
}
B4c3c54:L4c3c54:{c.instructions+=7;NFSU2_TR(0x4c3c54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3c58:{NFSU2_TR(0x4c3c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3c59:{NFSU2_TR(0x4c3c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3c5a:{NFSU2_TR(0x4c3c5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c3c5b:{NFSU2_TR(0x4c3c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3c62:{NFSU2_TR(0x4c3c62);
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
B4c3c65:{NFSU2_TR(0x4c3c65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3c70:L4c3c70:{c.instructions+=7;NFSU2_TR(0x4c3c70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c71:{NFSU2_TR(0x4c3c71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3c75:{NFSU2_TR(0x4c3c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3c7a:{NFSU2_TR(0x4c3c7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c7b:{NFSU2_TR(0x4c3c7b);
__builtin_memmove((R+12),(R+4),4);
}
B4c3c7d:{NFSU2_TR(0x4c3c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c3c81:{NFSU2_TR(0x4c3c81);
if(r1(R+518)){{goto L4c3c8e;}}
}
B4c3c83:L4c3c83:{c.instructions+=2;NFSU2_TR(0x4c3c83);
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
B4c3c88:{NFSU2_TR(0x4c3c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3d6b;}}
}
B4c3c8e:L4c3c8e:{c.instructions+=8;NFSU2_TR(0x4c3c8e);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c3c94:{NFSU2_TR(0x4c3c94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c95:{NFSU2_TR(0x4c3c95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c96:{NFSU2_TR(0x4c3c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c3c99:{NFSU2_TR(0x4c3c99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3c9a:{NFSU2_TR(0x4c3c9a);
__builtin_memmove((R+28),gp(0x8900ac),4);
}
B4c3ca0:{NFSU2_TR(0x4c3ca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3ca2:{NFSU2_TR(0x4c3ca2);
if(r1(R+518)){{goto L4c3ca9;}}
}
B4c3ca4:L4c3ca4:{c.instructions+=2;NFSU2_TR(0x4c3ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3ca7:{NFSU2_TR(0x4c3ca7);
{goto L4c3cac;}
}
B4c3ca9:L4c3ca9:{c.instructions+=1;NFSU2_TR(0x4c3ca9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3cac:L4c3cac:{c.instructions+=3;NFSU2_TR(0x4c3cac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3cae:{NFSU2_TR(0x4c3cae);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c3cb4:{NFSU2_TR(0x4c3cb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3cba;}}
}
B4c3cb6:L4c3cb6:{c.instructions+=2;NFSU2_TR(0x4c3cb6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3cb8:{NFSU2_TR(0x4c3cb8);
{goto L4c3ccf;}
}
B4c3cba:L4c3cba:{c.instructions+=2;NFSU2_TR(0x4c3cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3cbc:{NFSU2_TR(0x4c3cbc);
if(r1(R+518)){{goto L4c3cc3;}}
}
B4c3cbe:L4c3cbe:{c.instructions+=2;NFSU2_TR(0x4c3cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3cc1:{NFSU2_TR(0x4c3cc1);
{goto L4c3cc6;}
}
B4c3cc3:L4c3cc3:{c.instructions+=1;NFSU2_TR(0x4c3cc3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3cc6:L4c3cc6:{c.instructions+=4;NFSU2_TR(0x4c3cc6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3cc8:{NFSU2_TR(0x4c3cc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3cca:{NFSU2_TR(0x4c3cca);
__builtin_memmove((R+8),(R+518),1);
}
B4c3ccd:{NFSU2_TR(0x4c3ccd);
__builtin_memmove((R+0),(R+8),4);
}
B4c3ccf:L4c3ccf:{c.instructions+=4;NFSU2_TR(0x4c3ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3cd2:{NFSU2_TR(0x4c3cd2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B4c3cda:{NFSU2_TR(0x4c3cda);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3cdc:{NFSU2_TR(0x4c3cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3ce5;}}
}
B4c3cde:L4c3cde:{c.instructions+=2;NFSU2_TR(0x4c3cde);
w4(R+8,u32(0x1ull));
}
B4c3ce3:{NFSU2_TR(0x4c3ce3);
{goto L4c3cec;}
}
B4c3ce5:L4c3ce5:{c.instructions+=2;NFSU2_TR(0x4c3ce5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3ce8:{NFSU2_TR(0x4c3ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3cec;}}
}
B4c3cea:L4c3cea:{c.instructions+=1;NFSU2_TR(0x4c3cea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3cec:L4c3cec:{c.instructions+=2;NFSU2_TR(0x4c3cec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3cee:{NFSU2_TR(0x4c3cee);
if(r1(R+518)){{goto L4c3cf5;}}
}
B4c3cf0:L4c3cf0:{c.instructions+=2;NFSU2_TR(0x4c3cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3cf3:{NFSU2_TR(0x4c3cf3);
{goto L4c3cf8;}
}
B4c3cf5:L4c3cf5:{c.instructions+=1;NFSU2_TR(0x4c3cf5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3cf8:L4c3cf8:{c.instructions+=2;NFSU2_TR(0x4c3cf8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3cfa:{NFSU2_TR(0x4c3cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3d00;}}
}
B4c3cfc:L4c3cfc:{c.instructions+=2;NFSU2_TR(0x4c3cfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3cfe:{NFSU2_TR(0x4c3cfe);
{goto L4c3d19;}
}
B4c3d00:L4c3d00:{c.instructions+=2;NFSU2_TR(0x4c3d00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3d02:{NFSU2_TR(0x4c3d02);
if(r1(R+518)){{goto L4c3d09;}}
}
B4c3d04:L4c3d04:{c.instructions+=2;NFSU2_TR(0x4c3d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3d07:{NFSU2_TR(0x4c3d07);
{goto L4c3d0c;}
}
B4c3d09:L4c3d09:{c.instructions+=1;NFSU2_TR(0x4c3d09);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3d0c:L4c3d0c:{c.instructions+=5;NFSU2_TR(0x4c3d0c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c3d0e:{NFSU2_TR(0x4c3d0e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3d10:{NFSU2_TR(0x4c3d10);
__builtin_memmove((R+12),(R+518),1);
}
B4c3d13:{NFSU2_TR(0x4c3d13);
__builtin_memmove((R+0),(R+12),4);
}
B4c3d15:{NFSU2_TR(0x4c3d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c3d19:L4c3d19:{c.instructions+=5;NFSU2_TR(0x4c3d19);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3d1b:{NFSU2_TR(0x4c3d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3d1e:{NFSU2_TR(0x4c3d1e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c3d25:{NFSU2_TR(0x4c3d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3d28:{NFSU2_TR(0x4c3d28);
if(r1(R+518)){{goto L4c3d2f;}}
}
B4c3d2a:L4c3d2a:{c.instructions+=2;NFSU2_TR(0x4c3d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3d2d:{NFSU2_TR(0x4c3d2d);
{goto L4c3d32;}
}
B4c3d2f:L4c3d2f:{c.instructions+=1;NFSU2_TR(0x4c3d2f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3d32:L4c3d32:{c.instructions+=2;NFSU2_TR(0x4c3d32);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3d34:{NFSU2_TR(0x4c3d34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3d3a;}}
}
B4c3d36:L4c3d36:{c.instructions+=2;NFSU2_TR(0x4c3d36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3d38:{NFSU2_TR(0x4c3d38);
{goto L4c3d53;}
}
B4c3d3a:L4c3d3a:{c.instructions+=2;NFSU2_TR(0x4c3d3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3d3c:{NFSU2_TR(0x4c3d3c);
if(r1(R+518)){{goto L4c3d43;}}
}
B4c3d3e:L4c3d3e:{c.instructions+=2;NFSU2_TR(0x4c3d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3d41:{NFSU2_TR(0x4c3d41);
{goto L4c3d46;}
}
B4c3d43:L4c3d43:{c.instructions+=1;NFSU2_TR(0x4c3d43);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3d46:L4c3d46:{c.instructions+=5;NFSU2_TR(0x4c3d46);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c3d48:{NFSU2_TR(0x4c3d48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3d4a:{NFSU2_TR(0x4c3d4a);
__builtin_memmove((R+12),(R+518),1);
}
B4c3d4d:{NFSU2_TR(0x4c3d4d);
__builtin_memmove((R+0),(R+12),4);
}
B4c3d4f:{NFSU2_TR(0x4c3d4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c3d53:L4c3d53:{c.instructions+=6;NFSU2_TR(0x4c3d53);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B4c3d59:{NFSU2_TR(0x4c3d59);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d5b:{NFSU2_TR(0x4c3d5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d5c:{NFSU2_TR(0x4c3d5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d5d:{NFSU2_TR(0x4c3d5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d5f:{NFSU2_TR(0x4c3d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3d64ull));
TAIL_STATIC(0x578ef0u,578);
}
B4c3d64:L4c3d64:{c.instructions+=4;NFSU2_TR(0x4c3d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3d68:{NFSU2_TR(0x4c3d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3d69:{NFSU2_TR(0x4c3d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3d6a:{NFSU2_TR(0x4c3d6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c3d6b:L4c3d6b:{c.instructions+=4;NFSU2_TR(0x4c3d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c3d6d:{NFSU2_TR(0x4c3d6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d6e:{NFSU2_TR(0x4c3d6e);
__builtin_memmove((R+4),(R+12),4);
}
B4c3d70:{NFSU2_TR(0x4c3d70);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3d73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3d73:L4c3d73:{c.instructions+=3;NFSU2_TR(0x4c3d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c3d75:{NFSU2_TR(0x4c3d75);
__builtin_memmove((R+4),(R+12),4);
}
B4c3d77:{NFSU2_TR(0x4c3d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3d7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3d7a:L4c3d7a:{c.instructions+=3;NFSU2_TR(0x4c3d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c3d7b:{NFSU2_TR(0x4c3d7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c3d7c:{NFSU2_TR(0x4c3d7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3d80:L4c3d80:{c.instructions+=7;NFSU2_TR(0x4c3d80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d81:{NFSU2_TR(0x4c3d81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d82:{NFSU2_TR(0x4c3d82);
__builtin_memmove((R+24),(R+4),4);
}
B4c3d84:{NFSU2_TR(0x4c3d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3d87:{NFSU2_TR(0x4c3d87);
u8 U[4];
w4(U+0,u32(0xd31407e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d8c:{NFSU2_TR(0x4c3d8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3d8d:{NFSU2_TR(0x4c3d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3d92ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3d92:L4c3d92:{c.instructions+=7;NFSU2_TR(0x4c3d92);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c3d97:{NFSU2_TR(0x4c3d97);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c3d9d:{NFSU2_TR(0x4c3d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3da0:{NFSU2_TR(0x4c3da0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3da3:{NFSU2_TR(0x4c3da3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3da5:{NFSU2_TR(0x4c3da5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3da7:{NFSU2_TR(0x4c3da7);
if(r1(R+518)){{goto L4c3dae;}}
}
B4c3da9:L4c3da9:{c.instructions+=2;NFSU2_TR(0x4c3da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3dac:{NFSU2_TR(0x4c3dac);
{goto L4c3db1;}
}
B4c3dae:L4c3dae:{c.instructions+=1;NFSU2_TR(0x4c3dae);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3db1:L4c3db1:{c.instructions+=2;NFSU2_TR(0x4c3db1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3db3:{NFSU2_TR(0x4c3db3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3db9;}}
}
B4c3db5:L4c3db5:{c.instructions+=2;NFSU2_TR(0x4c3db5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3db7:{NFSU2_TR(0x4c3db7);
{goto L4c3dd3;}
}
B4c3db9:L4c3db9:{c.instructions+=3;NFSU2_TR(0x4c3db9);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c3dbe:{NFSU2_TR(0x4c3dbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3dc0:{NFSU2_TR(0x4c3dc0);
if(r1(R+518)){{goto L4c3dc7;}}
}
B4c3dc2:L4c3dc2:{c.instructions+=2;NFSU2_TR(0x4c3dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3dc5:{NFSU2_TR(0x4c3dc5);
{goto L4c3dca;}
}
B4c3dc7:L4c3dc7:{c.instructions+=1;NFSU2_TR(0x4c3dc7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3dca:L4c3dca:{c.instructions+=4;NFSU2_TR(0x4c3dca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3dcc:{NFSU2_TR(0x4c3dcc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3dce:{NFSU2_TR(0x4c3dce);
__builtin_memmove((R+8),(R+518),1);
}
B4c3dd1:{NFSU2_TR(0x4c3dd1);
__builtin_memmove((R+0),(R+8),4);
}
B4c3dd3:L4c3dd3:{c.instructions+=4;NFSU2_TR(0x4c3dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3dd6:{NFSU2_TR(0x4c3dd6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa79ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B4c3dde:{NFSU2_TR(0x4c3dde);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c3de1:{NFSU2_TR(0x4c3de1);
if(r1(R+518)){{goto L4c3dfb;}}
}
B4c3de3:L4c3de3:{c.instructions+=2;NFSU2_TR(0x4c3de3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c3de4:{NFSU2_TR(0x4c3de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3e00;}}
}
B4c3de6:L4c3de6:{c.instructions+=5;NFSU2_TR(0x4c3de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3de9:{NFSU2_TR(0x4c3de9);
w4(R+28,u32(0x1b3a2485ull));
}
B4c3dee:{NFSU2_TR(0x4c3dee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3def:{NFSU2_TR(0x4c3def);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3df0:{NFSU2_TR(0x4c3df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3df5ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3df5:L4c3df5:{c.instructions+=4;NFSU2_TR(0x4c3df5);
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
B4c3df8:{NFSU2_TR(0x4c3df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3df9:{NFSU2_TR(0x4c3df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3dfa:{NFSU2_TR(0x4c3dfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3dfb:L4c3dfb:{c.instructions+=1;NFSU2_TR(0x4c3dfb);
w4(R+28,u32(0x61cb0720ull));
}
B4c3e00:L4c3e00:{c.instructions+=4;NFSU2_TR(0x4c3e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3e03:{NFSU2_TR(0x4c3e03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e04:{NFSU2_TR(0x4c3e04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e05:{NFSU2_TR(0x4c3e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3e0aull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3e0a:L4c3e0a:{c.instructions+=4;NFSU2_TR(0x4c3e0a);
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
B4c3e0d:{NFSU2_TR(0x4c3e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3e0e:{NFSU2_TR(0x4c3e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3e0f:{NFSU2_TR(0x4c3e0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3e10:L4c3e10:{c.instructions+=6;NFSU2_TR(0x4c3e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e11:{NFSU2_TR(0x4c3e11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e12:{NFSU2_TR(0x4c3e12);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c3e16:{NFSU2_TR(0x4c3e16);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3e1c:{NFSU2_TR(0x4c3e1c);
__builtin_memmove((R+24),(R+4),4);
}
B4c3e1e:{NFSU2_TR(0x4c3e1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3e24;}}
}
B4c3e20:L4c3e20:{c.instructions+=2;NFSU2_TR(0x4c3e20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e22:{NFSU2_TR(0x4c3e22);
{goto L4c3e2e;}
}
B4c3e24:L4c3e24:{c.instructions+=2;NFSU2_TR(0x4c3e24);
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
B4c3e2a:{NFSU2_TR(0x4c3e2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3e3f;}}
}
B4c3e2c:L4c3e2c:{c.instructions+=1;NFSU2_TR(0x4c3e2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e2e:L4c3e2e:{c.instructions+=1;NFSU2_TR(0x4c3e2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3e33ull));
TAIL_STATIC(0x4a7ae0u,4a7);
}
B4c3e33:L4c3e33:{c.instructions+=2;NFSU2_TR(0x4c3e33);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4c3e3a:{NFSU2_TR(0x4c3e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3e3full));
TAIL_STATIC(0x5f2fa0u,5f2);
}
B4c3e3f:L4c3e3f:{c.instructions+=4;NFSU2_TR(0x4c3e3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c3e41:{NFSU2_TR(0x4c3e41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e42:{NFSU2_TR(0x4c3e42);
__builtin_memmove((R+4),(R+24),4);
}
B4c3e44:{NFSU2_TR(0x4c3e44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3e47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3e47:L4c3e47:{c.instructions+=3;NFSU2_TR(0x4c3e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c3e49:{NFSU2_TR(0x4c3e49);
__builtin_memmove((R+4),(R+24),4);
}
B4c3e4b:{NFSU2_TR(0x4c3e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3e4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3e4e:L4c3e4e:{c.instructions+=3;NFSU2_TR(0x4c3e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3e4f:{NFSU2_TR(0x4c3e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3e50:{NFSU2_TR(0x4c3e50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3e60:L4c3e60:{c.instructions+=7;NFSU2_TR(0x4c3e60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e61:{NFSU2_TR(0x4c3e61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e62:{NFSU2_TR(0x4c3e62);
__builtin_memmove((R+28),(R+4),4);
}
B4c3e64:{NFSU2_TR(0x4c3e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3e67:{NFSU2_TR(0x4c3e67);
u8 U[4];
w4(U+0,u32(0xf6ccdc5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e6c:{NFSU2_TR(0x4c3e6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3e6d:{NFSU2_TR(0x4c3e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3e72ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3e72:L4c3e72:{c.instructions+=7;NFSU2_TR(0x4c3e72);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4c3e77:{NFSU2_TR(0x4c3e77);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4c3e7d:{NFSU2_TR(0x4c3e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3e80:{NFSU2_TR(0x4c3e80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c3e83:{NFSU2_TR(0x4c3e83);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4c3e85:{NFSU2_TR(0x4c3e85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3e87:{NFSU2_TR(0x4c3e87);
if(r1(R+518)){{goto L4c3e8e;}}
}
B4c3e89:L4c3e89:{c.instructions+=2;NFSU2_TR(0x4c3e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3e8c:{NFSU2_TR(0x4c3e8c);
{goto L4c3e91;}
}
B4c3e8e:L4c3e8e:{c.instructions+=1;NFSU2_TR(0x4c3e8e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3e91:L4c3e91:{c.instructions+=2;NFSU2_TR(0x4c3e91);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3e93:{NFSU2_TR(0x4c3e93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3e99;}}
}
B4c3e95:L4c3e95:{c.instructions+=2;NFSU2_TR(0x4c3e95);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3e97:{NFSU2_TR(0x4c3e97);
{goto L4c3eb3;}
}
B4c3e99:L4c3e99:{c.instructions+=3;NFSU2_TR(0x4c3e99);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4c3e9e:{NFSU2_TR(0x4c3e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3ea0:{NFSU2_TR(0x4c3ea0);
if(r1(R+518)){{goto L4c3ea7;}}
}
B4c3ea2:L4c3ea2:{c.instructions+=2;NFSU2_TR(0x4c3ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3ea5:{NFSU2_TR(0x4c3ea5);
{goto L4c3eaa;}
}
B4c3ea7:L4c3ea7:{c.instructions+=1;NFSU2_TR(0x4c3ea7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3eaa:L4c3eaa:{c.instructions+=4;NFSU2_TR(0x4c3eaa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3eac:{NFSU2_TR(0x4c3eac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3eae:{NFSU2_TR(0x4c3eae);
__builtin_memmove((R+8),(R+518),1);
}
B4c3eb1:{NFSU2_TR(0x4c3eb1);
__builtin_memmove((R+0),(R+8),4);
}
B4c3eb3:L4c3eb3:{c.instructions+=4;NFSU2_TR(0x4c3eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3eb6:{NFSU2_TR(0x4c3eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4c3ebd:{NFSU2_TR(0x4c3ebd);
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
B4c3ec0:{NFSU2_TR(0x4c3ec0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c3f22;}}
}
B4c3ec2:L4c3ec2:{c.instructions+=1;NFSU2_TR(0x4c3ec2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c3f34ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3ec9:L4c3ec9:{c.instructions+=5;NFSU2_TR(0x4c3ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3ecc:{NFSU2_TR(0x4c3ecc);
w4(R+24,u32(0x1ea4cec2ull));
}
B4c3ed1:{NFSU2_TR(0x4c3ed1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ed2:{NFSU2_TR(0x4c3ed2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ed3:{NFSU2_TR(0x4c3ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ed8ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3ed8:L4c3ed8:{c.instructions+=4;NFSU2_TR(0x4c3ed8);
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
B4c3edb:{NFSU2_TR(0x4c3edb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3edc:{NFSU2_TR(0x4c3edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3edd:{NFSU2_TR(0x4c3edd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3ede:L4c3ede:{c.instructions+=5;NFSU2_TR(0x4c3ede);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3ee1:{NFSU2_TR(0x4c3ee1);
w4(R+24,u32(0x5ae3441full));
}
B4c3ee6:{NFSU2_TR(0x4c3ee6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ee7:{NFSU2_TR(0x4c3ee7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ee8:{NFSU2_TR(0x4c3ee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3eedull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3eed:L4c3eed:{c.instructions+=4;NFSU2_TR(0x4c3eed);
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
B4c3ef0:{NFSU2_TR(0x4c3ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3ef1:{NFSU2_TR(0x4c3ef1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3ef2:{NFSU2_TR(0x4c3ef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3ef3:L4c3ef3:{c.instructions+=5;NFSU2_TR(0x4c3ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3ef6:{NFSU2_TR(0x4c3ef6);
w4(R+24,u32(0x414f19d7ull));
}
B4c3efb:{NFSU2_TR(0x4c3efb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3efc:{NFSU2_TR(0x4c3efc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3efd:{NFSU2_TR(0x4c3efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3f02ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3f02:L4c3f02:{c.instructions+=4;NFSU2_TR(0x4c3f02);
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
B4c3f05:{NFSU2_TR(0x4c3f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3f06:{NFSU2_TR(0x4c3f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3f07:{NFSU2_TR(0x4c3f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3f08:L4c3f08:{c.instructions+=5;NFSU2_TR(0x4c3f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3f0b:{NFSU2_TR(0x4c3f0b);
w4(R+24,u32(0xc3e9ae58ull));
}
B4c3f10:{NFSU2_TR(0x4c3f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f11:{NFSU2_TR(0x4c3f11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f12:{NFSU2_TR(0x4c3f12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3f17ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3f17:L4c3f17:{c.instructions+=4;NFSU2_TR(0x4c3f17);
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
B4c3f1a:{NFSU2_TR(0x4c3f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3f1b:{NFSU2_TR(0x4c3f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3f1c:{NFSU2_TR(0x4c3f1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3f1d:L4c3f1d:{c.instructions+=1;NFSU2_TR(0x4c3f1d);
w4(R+24,u32(0x916039b4ull));
}
B4c3f22:L4c3f22:{c.instructions+=4;NFSU2_TR(0x4c3f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3f25:{NFSU2_TR(0x4c3f25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f26:{NFSU2_TR(0x4c3f26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f27:{NFSU2_TR(0x4c3f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3f2cull));
TAIL_STATIC(0x50c900u,50c);
}
B4c3f2c:L4c3f2c:{c.instructions+=4;NFSU2_TR(0x4c3f2c);
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
B4c3f2f:{NFSU2_TR(0x4c3f2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3f30:{NFSU2_TR(0x4c3f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3f31:{NFSU2_TR(0x4c3f31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c3f50:L4c3f50:{c.instructions+=5;NFSU2_TR(0x4c3f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3f54:{NFSU2_TR(0x4c3f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3f59:{NFSU2_TR(0x4c3f59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f5a:{NFSU2_TR(0x4c3f5a);
__builtin_memmove((R+12),(R+4),4);
}
B4c3f5c:{NFSU2_TR(0x4c3f5c);
if(r1(R+518)){{goto L4c3f69;}}
}
B4c3f5e:L4c3f5e:{c.instructions+=2;NFSU2_TR(0x4c3f5e);
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
B4c3f63:{NFSU2_TR(0x4c3f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3ff2;}}
}
B4c3f69:L4c3f69:{c.instructions+=8;NFSU2_TR(0x4c3f69);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4c3f6e:{NFSU2_TR(0x4c3f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c3f71:{NFSU2_TR(0x4c3f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f72:{NFSU2_TR(0x4c3f72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f73:{NFSU2_TR(0x4c3f73);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B4c3f79:{NFSU2_TR(0x4c3f79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3f7b:{NFSU2_TR(0x4c3f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3f7c:{NFSU2_TR(0x4c3f7c);
if(r1(R+518)){{goto L4c3f83;}}
}
B4c3f7e:L4c3f7e:{c.instructions+=2;NFSU2_TR(0x4c3f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3f81:{NFSU2_TR(0x4c3f81);
{goto L4c3f86;}
}
B4c3f83:L4c3f83:{c.instructions+=1;NFSU2_TR(0x4c3f83);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3f86:L4c3f86:{c.instructions+=3;NFSU2_TR(0x4c3f86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3f88:{NFSU2_TR(0x4c3f88);
__builtin_memmove((R+20),gp(0x8900b0),4);
}
B4c3f8e:{NFSU2_TR(0x4c3f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3f94;}}
}
B4c3f90:L4c3f90:{c.instructions+=2;NFSU2_TR(0x4c3f90);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4c3f92:{NFSU2_TR(0x4c3f92);
{goto L4c3fa9;}
}
B4c3f94:L4c3f94:{c.instructions+=2;NFSU2_TR(0x4c3f94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3f96:{NFSU2_TR(0x4c3f96);
if(r1(R+518)){{goto L4c3f9d;}}
}
B4c3f98:L4c3f98:{c.instructions+=2;NFSU2_TR(0x4c3f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3f9b:{NFSU2_TR(0x4c3f9b);
{goto L4c3fa0;}
}
B4c3f9d:L4c3f9d:{c.instructions+=1;NFSU2_TR(0x4c3f9d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3fa0:L4c3fa0:{c.instructions+=4;NFSU2_TR(0x4c3fa0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3fa2:{NFSU2_TR(0x4c3fa2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3fa4:{NFSU2_TR(0x4c3fa4);
__builtin_memmove((R+8),(R+518),1);
}
B4c3fa7:{NFSU2_TR(0x4c3fa7);
__builtin_memmove((R+28),(R+8),4);
}
B4c3fa9:L4c3fa9:{c.instructions+=2;NFSU2_TR(0x4c3fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3fab:{NFSU2_TR(0x4c3fab);
if(r1(R+518)){{goto L4c3fb2;}}
}
B4c3fad:L4c3fad:{c.instructions+=2;NFSU2_TR(0x4c3fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3fb0:{NFSU2_TR(0x4c3fb0);
{goto L4c3fb5;}
}
B4c3fb2:L4c3fb2:{c.instructions+=1;NFSU2_TR(0x4c3fb2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3fb5:L4c3fb5:{c.instructions+=2;NFSU2_TR(0x4c3fb5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3fb7:{NFSU2_TR(0x4c3fb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c3fbd;}}
}
B4c3fb9:L4c3fb9:{c.instructions+=2;NFSU2_TR(0x4c3fb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c3fbb:{NFSU2_TR(0x4c3fbb);
{goto L4c3fd2;}
}
B4c3fbd:L4c3fbd:{c.instructions+=2;NFSU2_TR(0x4c3fbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c3fbf:{NFSU2_TR(0x4c3fbf);
if(r1(R+518)){{goto L4c3fc6;}}
}
B4c3fc1:L4c3fc1:{c.instructions+=2;NFSU2_TR(0x4c3fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3fc4:{NFSU2_TR(0x4c3fc4);
{goto L4c3fc9;}
}
B4c3fc6:L4c3fc6:{c.instructions+=1;NFSU2_TR(0x4c3fc6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4c3fc9:L4c3fc9:{c.instructions+=4;NFSU2_TR(0x4c3fc9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4c3fcb:{NFSU2_TR(0x4c3fcb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c3fcd:{NFSU2_TR(0x4c3fcd);
__builtin_memmove((R+8),(R+518),1);
}
B4c3fd0:{NFSU2_TR(0x4c3fd0);
__builtin_memmove((R+0),(R+8),4);
}
B4c3fd2:L4c3fd2:{c.instructions+=10;NFSU2_TR(0x4c3fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4c3fd5:{NFSU2_TR(0x4c3fd5);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4c3fdc:{NFSU2_TR(0x4c3fdc);
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
B4c3fde:{NFSU2_TR(0x4c3fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c3fdf:{NFSU2_TR(0x4c3fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4c3fe2:{NFSU2_TR(0x4c3fe2);
__builtin_memmove((R+8),(R+518),1);
}
B4c3fe5:{NFSU2_TR(0x4c3fe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c3fe6:{NFSU2_TR(0x4c3fe6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B4c3fed:{NFSU2_TR(0x4c3fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c3ff1:{NFSU2_TR(0x4c3ff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c3ff2:L4c3ff2:{c.instructions+=4;NFSU2_TR(0x4c3ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c3ff4:{NFSU2_TR(0x4c3ff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c3ff5:{NFSU2_TR(0x4c3ff5);
__builtin_memmove((R+4),(R+12),4);
}
B4c3ff7:{NFSU2_TR(0x4c3ff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c3ffaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c3ffa:L4c3ffa:{c.instructions+=3;NFSU2_TR(0x4c3ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c3ffc:{NFSU2_TR(0x4c3ffc);
__builtin_memmove((R+4),(R+12),4);
}
B4c3ffe:{NFSU2_TR(0x4c3ffe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c4001ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4c3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
