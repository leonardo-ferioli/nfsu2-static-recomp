#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 page_6c3(Cpu& c){return body_6c3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c3001:goto L6c3001;
case 0x6c3007:goto L6c3007;
case 0x6c300a:c.instructions+=1;goto B6c300a;
case 0x6c300d:goto L6c300d;
case 0x6c3013:c.instructions+=1;goto B6c3013;
case 0x6c3015:goto L6c3015;
case 0x6c3017:c.instructions+=1;goto B6c3017;
case 0x6c3019:goto L6c3019;
case 0x6c301c:c.instructions+=5;goto B6c301c;
case 0x6c3020:c.instructions+=4;goto B6c3020;
case 0x6c3022:c.instructions+=3;goto B6c3022;
case 0x6c3028:c.instructions+=2;goto B6c3028;
case 0x6c302e:c.instructions+=1;goto B6c302e;
case 0x6c3030:goto L6c3030;
case 0x6c3033:c.instructions+=5;goto B6c3033;
case 0x6c3036:c.instructions+=4;goto B6c3036;
case 0x6c3039:c.instructions+=3;goto B6c3039;
case 0x6c303b:c.instructions+=2;goto B6c303b;
case 0x6c303c:c.instructions+=1;goto B6c303c;
case 0x6c303e:goto L6c303e;
case 0x6c3041:c.instructions+=9;goto B6c3041;
case 0x6c3044:c.instructions+=8;goto B6c3044;
case 0x6c304a:c.instructions+=7;goto B6c304a;
case 0x6c3051:c.instructions+=6;goto B6c3051;
case 0x6c3054:c.instructions+=5;goto B6c3054;
case 0x6c3056:c.instructions+=4;goto B6c3056;
case 0x6c3059:c.instructions+=3;goto B6c3059;
case 0x6c305c:c.instructions+=2;goto B6c305c;
case 0x6c3060:c.instructions+=1;goto B6c3060;
case 0x6c3066:goto L6c3066;
case 0x6c3068:c.instructions+=2;goto B6c3068;
case 0x6c306b:c.instructions+=1;goto B6c306b;
case 0x6c306e:goto L6c306e;
case 0x6c306f:c.instructions+=4;goto B6c306f;
case 0x6c3070:c.instructions+=3;goto B6c3070;
case 0x6c3071:c.instructions+=2;goto B6c3071;
case 0x6c3072:c.instructions+=1;goto B6c3072;
case 0x6c3073:goto L6c3073;
case 0x6c3078:c.instructions+=1;goto B6c3078;
case 0x6c307a:goto L6c307a;
case 0x6c307c:c.instructions+=17;goto B6c307c;
case 0x6c307d:c.instructions+=16;goto B6c307d;
case 0x6c307f:c.instructions+=15;goto B6c307f;
case 0x6c3082:c.instructions+=14;goto B6c3082;
case 0x6c3083:c.instructions+=13;goto B6c3083;
case 0x6c3084:c.instructions+=12;goto B6c3084;
case 0x6c3086:c.instructions+=11;goto B6c3086;
case 0x6c308c:c.instructions+=10;goto B6c308c;
case 0x6c308f:c.instructions+=9;goto B6c308f;
case 0x6c3092:c.instructions+=8;goto B6c3092;
case 0x6c3094:c.instructions+=7;goto B6c3094;
case 0x6c3097:c.instructions+=6;goto B6c3097;
case 0x6c309a:c.instructions+=5;goto B6c309a;
case 0x6c309b:c.instructions+=4;goto B6c309b;
case 0x6c309e:c.instructions+=3;goto B6c309e;
case 0x6c30a1:c.instructions+=2;goto B6c30a1;
case 0x6c30a5:c.instructions+=1;goto B6c30a5;
case 0x6c30a7:goto L6c30a7;
case 0x6c30ab:c.instructions+=1;goto B6c30ab;
case 0x6c30ad:goto L6c30ad;
case 0x6c30b0:c.instructions+=3;goto B6c30b0;
case 0x6c30b3:c.instructions+=2;goto B6c30b3;
case 0x6c30b7:c.instructions+=1;goto B6c30b7;
case 0x6c30bd:goto L6c30bd;
case 0x6c30c1:c.instructions+=2;goto B6c30c1;
case 0x6c30c5:c.instructions+=1;goto B6c30c5;
case 0x6c30c7:goto L6c30c7;
case 0x6c30cd:c.instructions+=1;goto B6c30cd;
case 0x6c30d0:goto L6c30d0;
case 0x6c30d2:c.instructions+=2;goto B6c30d2;
case 0x6c30d5:c.instructions+=1;goto B6c30d5;
case 0x6c30d7:goto L6c30d7;
case 0x6c30da:c.instructions+=2;goto B6c30da;
case 0x6c30dd:c.instructions+=1;goto B6c30dd;
case 0x6c30df:goto L6c30df;
case 0x6c30e0:c.instructions+=1;goto B6c30e0;
case 0x6c30e3:goto L6c30e3;
case 0x6c30e6:c.instructions+=2;goto B6c30e6;
case 0x6c30e7:c.instructions+=1;goto B6c30e7;
case 0x6c30e9:goto L6c30e9;
case 0x6c30eb:c.instructions+=4;goto B6c30eb;
case 0x6c30ed:c.instructions+=3;goto B6c30ed;
case 0x6c30f2:c.instructions+=2;goto B6c30f2;
case 0x6c30f4:c.instructions+=1;goto B6c30f4;
case 0x6c30f9:goto L6c30f9;
case 0x6c30fc:c.instructions+=1;goto B6c30fc;
case 0x6c3102:goto L6c3102;
case 0x6c3105:c.instructions+=5;goto B6c3105;
case 0x6c3108:c.instructions+=4;goto B6c3108;
case 0x6c310e:c.instructions+=3;goto B6c310e;
case 0x6c3110:c.instructions+=2;goto B6c3110;
case 0x6c3113:c.instructions+=1;goto B6c3113;
case 0x6c3118:goto L6c3118;
case 0x6c311a:c.instructions+=1;goto B6c311a;
case 0x6c3120:goto L6c3120;
case 0x6c3124:goto L6c3124;
case 0x6c3127:c.instructions+=9;goto B6c3127;
case 0x6c3129:c.instructions+=8;goto B6c3129;
case 0x6c312a:c.instructions+=7;goto B6c312a;
case 0x6c312b:c.instructions+=6;goto B6c312b;
case 0x6c312e:c.instructions+=5;goto B6c312e;
case 0x6c312f:c.instructions+=4;goto B6c312f;
case 0x6c3132:c.instructions+=3;goto B6c3132;
case 0x6c3134:c.instructions+=2;goto B6c3134;
case 0x6c313a:c.instructions+=1;goto B6c313a;
case 0x6c313f:goto L6c313f;
case 0x6c3141:c.instructions+=2;goto B6c3141;
case 0x6c3144:c.instructions+=1;goto B6c3144;
case 0x6c314a:goto L6c314a;
case 0x6c3150:c.instructions+=7;goto B6c3150;
case 0x6c3153:c.instructions+=6;goto B6c3153;
case 0x6c3156:c.instructions+=5;goto B6c3156;
case 0x6c3159:c.instructions+=4;goto B6c3159;
case 0x6c315c:c.instructions+=3;goto B6c315c;
case 0x6c315f:c.instructions+=2;goto B6c315f;
case 0x6c3162:c.instructions+=1;goto B6c3162;
case 0x6c3167:goto L6c3167;
case 0x6c3169:c.instructions+=1;goto B6c3169;
case 0x6c316f:goto L6c316f;
case 0x6c3175:c.instructions+=29;goto B6c3175;
case 0x6c3178:c.instructions+=28;goto B6c3178;
case 0x6c317b:c.instructions+=27;goto B6c317b;
case 0x6c317e:c.instructions+=26;goto B6c317e;
case 0x6c3181:c.instructions+=25;goto B6c3181;
case 0x6c3184:c.instructions+=24;goto B6c3184;
case 0x6c3187:c.instructions+=23;goto B6c3187;
case 0x6c318a:c.instructions+=22;goto B6c318a;
case 0x6c3190:c.instructions+=21;goto B6c3190;
case 0x6c3193:c.instructions+=20;goto B6c3193;
case 0x6c3196:c.instructions+=19;goto B6c3196;
case 0x6c3199:c.instructions+=18;goto B6c3199;
case 0x6c319c:c.instructions+=17;goto B6c319c;
case 0x6c319f:c.instructions+=16;goto B6c319f;
case 0x6c31a2:c.instructions+=15;goto B6c31a2;
case 0x6c31a5:c.instructions+=14;goto B6c31a5;
case 0x6c31a9:c.instructions+=13;goto B6c31a9;
case 0x6c31ac:c.instructions+=12;goto B6c31ac;
case 0x6c31b2:c.instructions+=11;goto B6c31b2;
case 0x6c31b5:c.instructions+=10;goto B6c31b5;
case 0x6c31b8:c.instructions+=9;goto B6c31b8;
case 0x6c31bb:c.instructions+=8;goto B6c31bb;
case 0x6c31be:c.instructions+=7;goto B6c31be;
case 0x6c31c1:c.instructions+=6;goto B6c31c1;
case 0x6c31c7:c.instructions+=5;goto B6c31c7;
case 0x6c31ca:c.instructions+=4;goto B6c31ca;
case 0x6c31cd:c.instructions+=3;goto B6c31cd;
case 0x6c31d0:c.instructions+=2;goto B6c31d0;
case 0x6c31d3:c.instructions+=1;goto B6c31d3;
case 0x6c31d9:goto L6c31d9;
case 0x6c31dc:c.instructions+=4;goto B6c31dc;
case 0x6c31dd:c.instructions+=3;goto B6c31dd;
case 0x6c31de:c.instructions+=2;goto B6c31de;
case 0x6c31e4:c.instructions+=1;goto B6c31e4;
case 0x6c31e6:goto L6c31e6;
case 0x6c31eb:c.instructions+=1;goto B6c31eb;
case 0x6c31ed:goto L6c31ed;
case 0x6c31f0:c.instructions+=4;goto B6c31f0;
case 0x6c31f3:c.instructions+=3;goto B6c31f3;
case 0x6c31f5:c.instructions+=2;goto B6c31f5;
case 0x6c31f8:c.instructions+=1;goto B6c31f8;
case 0x6c31f9:goto L6c31f9;
case 0x6c31fb:c.instructions+=1;goto B6c31fb;
case 0x6c31fd:goto L6c31fd;
case 0x6c31ff:c.instructions+=3;goto B6c31ff;
case 0x6c3202:c.instructions+=2;goto B6c3202;
case 0x6c3205:c.instructions+=1;goto B6c3205;
case 0x6c3209:goto L6c3209;
case 0x6c3213:c.instructions+=1;goto B6c3213;
case 0x6c3215:goto L6c3215;
case 0x6c3216:c.instructions+=4;goto B6c3216;
case 0x6c3217:c.instructions+=3;goto B6c3217;
case 0x6c3218:c.instructions+=2;goto B6c3218;
case 0x6c3219:c.instructions+=1;goto B6c3219;
case 0x6c321a:goto L6c321a;
case 0x6c321c:c.instructions+=13;goto B6c321c;
case 0x6c321d:c.instructions+=12;goto B6c321d;
case 0x6c321f:c.instructions+=11;goto B6c321f;
case 0x6c3222:c.instructions+=10;goto B6c3222;
case 0x6c3225:c.instructions+=9;goto B6c3225;
case 0x6c3226:c.instructions+=8;goto B6c3226;
case 0x6c3228:c.instructions+=7;goto B6c3228;
case 0x6c322e:c.instructions+=6;goto B6c322e;
case 0x6c3230:c.instructions+=5;goto B6c3230;
case 0x6c3232:c.instructions+=4;goto B6c3232;
case 0x6c3233:c.instructions+=3;goto B6c3233;
case 0x6c3236:c.instructions+=2;goto B6c3236;
case 0x6c3238:c.instructions+=1;goto B6c3238;
case 0x6c323a:goto L6c323a;
case 0x6c323c:c.instructions+=6;goto B6c323c;
case 0x6c323f:c.instructions+=5;goto B6c323f;
case 0x6c3242:c.instructions+=4;goto B6c3242;
case 0x6c3244:c.instructions+=3;goto B6c3244;
case 0x6c3247:c.instructions+=2;goto B6c3247;
case 0x6c324a:c.instructions+=1;goto B6c324a;
case 0x6c324b:goto L6c324b;
case 0x6c324e:c.instructions+=9;goto B6c324e;
case 0x6c3250:c.instructions+=8;goto B6c3250;
case 0x6c3253:c.instructions+=7;goto B6c3253;
case 0x6c3255:c.instructions+=6;goto B6c3255;
case 0x6c3257:c.instructions+=5;goto B6c3257;
case 0x6c325a:c.instructions+=4;goto B6c325a;
case 0x6c325e:c.instructions+=3;goto B6c325e;
case 0x6c3261:c.instructions+=2;goto B6c3261;
case 0x6c3264:c.instructions+=1;goto B6c3264;
case 0x6c3266:goto L6c3266;
case 0x6c3267:goto L6c3267;
case 0x6c326a:c.instructions+=12;goto B6c326a;
case 0x6c326c:c.instructions+=11;goto B6c326c;
case 0x6c326f:c.instructions+=10;goto B6c326f;
case 0x6c3271:c.instructions+=9;goto B6c3271;
case 0x6c3274:c.instructions+=8;goto B6c3274;
case 0x6c3276:c.instructions+=7;goto B6c3276;
case 0x6c3278:c.instructions+=6;goto B6c3278;
case 0x6c327b:c.instructions+=5;goto B6c327b;
case 0x6c327c:c.instructions+=4;goto B6c327c;
case 0x6c3280:c.instructions+=3;goto B6c3280;
case 0x6c3281:c.instructions+=2;goto B6c3281;
case 0x6c3282:c.instructions+=1;goto B6c3282;
case 0x6c3285:goto L6c3285;
case 0x6c3287:c.instructions+=12;goto B6c3287;
case 0x6c3288:c.instructions+=11;goto B6c3288;
case 0x6c328a:c.instructions+=10;goto B6c328a;
case 0x6c328b:c.instructions+=9;goto B6c328b;
case 0x6c328c:c.instructions+=8;goto B6c328c;
case 0x6c328d:c.instructions+=7;goto B6c328d;
case 0x6c328e:c.instructions+=6;goto B6c328e;
case 0x6c3290:c.instructions+=5;goto B6c3290;
case 0x6c3296:c.instructions+=4;goto B6c3296;
case 0x6c3298:c.instructions+=3;goto B6c3298;
case 0x6c329e:c.instructions+=2;goto B6c329e;
case 0x6c32a1:c.instructions+=1;goto B6c32a1;
case 0x6c32a7:goto L6c32a7;
case 0x6c32a9:c.instructions+=1;goto B6c32a9;
case 0x6c32ae:goto L6c32ae;
case 0x6c32b0:c.instructions+=1;goto B6c32b0;
case 0x6c32b2:goto L6c32b2;
case 0x6c32b8:c.instructions+=1;goto B6c32b8;
case 0x6c32bd:goto L6c32bd;
case 0x6c32bf:c.instructions+=1;goto B6c32bf;
case 0x6c32c1:goto L6c32c1;
case 0x6c32c7:c.instructions+=1;goto B6c32c7;
case 0x6c32cc:goto L6c32cc;
case 0x6c32ce:c.instructions+=1;goto B6c32ce;
case 0x6c32d0:goto L6c32d0;
case 0x6c32d3:c.instructions+=1;goto B6c32d3;
case 0x6c32d5:goto L6c32d5;
case 0x6c32d7:c.instructions+=1;goto B6c32d7;
case 0x6c32d9:goto L6c32d9;
case 0x6c32dd:c.instructions+=2;goto B6c32dd;
case 0x6c32df:c.instructions+=1;goto B6c32df;
case 0x6c32e1:goto L6c32e1;
case 0x6c32e2:goto L6c32e2;
case 0x6c32e4:c.instructions+=5;goto B6c32e4;
case 0x6c32e7:c.instructions+=4;goto B6c32e7;
case 0x6c32e9:c.instructions+=3;goto B6c32e9;
case 0x6c32ea:c.instructions+=2;goto B6c32ea;
case 0x6c32ed:c.instructions+=1;goto B6c32ed;
case 0x6c32ef:goto L6c32ef;
case 0x6c32f5:c.instructions+=10;goto B6c32f5;
case 0x6c32f8:c.instructions+=9;goto B6c32f8;
case 0x6c32fb:c.instructions+=8;goto B6c32fb;
case 0x6c32fe:c.instructions+=7;goto B6c32fe;
case 0x6c3301:c.instructions+=6;goto B6c3301;
case 0x6c3303:c.instructions+=5;goto B6c3303;
case 0x6c3306:c.instructions+=4;goto B6c3306;
case 0x6c3309:c.instructions+=3;goto B6c3309;
case 0x6c330c:c.instructions+=2;goto B6c330c;
case 0x6c330f:c.instructions+=1;goto B6c330f;
case 0x6c3311:goto L6c3311;
case 0x6c3312:c.instructions+=2;goto B6c3312;
case 0x6c3318:c.instructions+=1;goto B6c3318;
case 0x6c331d:goto L6c331d;
case 0x6c331e:c.instructions+=2;goto B6c331e;
case 0x6c3321:c.instructions+=1;goto B6c3321;
case 0x6c3323:goto L6c3323;
case 0x6c3326:c.instructions+=2;goto B6c3326;
case 0x6c3329:c.instructions+=1;goto B6c3329;
case 0x6c332b:goto L6c332b;
case 0x6c332c:goto L6c332c;
case 0x6c332e:c.instructions+=1;goto B6c332e;
case 0x6c3330:goto L6c3330;
case 0x6c3332:c.instructions+=1;goto B6c3332;
case 0x6c3333:goto L6c3333;
case 0x6c3334:c.instructions+=3;goto B6c3334;
case 0x6c3335:c.instructions+=2;goto B6c3335;
case 0x6c3336:c.instructions+=1;goto B6c3336;
case 0x6c3337:goto L6c3337;
case 0x6c3339:c.instructions+=12;goto B6c3339;
case 0x6c333a:c.instructions+=11;goto B6c333a;
case 0x6c333c:c.instructions+=10;goto B6c333c;
case 0x6c333f:c.instructions+=9;goto B6c333f;
case 0x6c3340:c.instructions+=8;goto B6c3340;
case 0x6c3342:c.instructions+=7;goto B6c3342;
case 0x6c3348:c.instructions+=6;goto B6c3348;
case 0x6c3349:c.instructions+=5;goto B6c3349;
case 0x6c334a:c.instructions+=4;goto B6c334a;
case 0x6c334c:c.instructions+=3;goto B6c334c;
case 0x6c3352:c.instructions+=2;goto B6c3352;
case 0x6c3355:c.instructions+=1;goto B6c3355;
case 0x6c335b:goto L6c335b;
case 0x6c335e:c.instructions+=2;goto B6c335e;
case 0x6c3360:c.instructions+=1;goto B6c3360;
case 0x6c3366:goto L6c3366;
case 0x6c336a:c.instructions+=1;goto B6c336a;
case 0x6c3370:goto L6c3370;
case 0x6c3372:c.instructions+=5;goto B6c3372;
case 0x6c3374:c.instructions+=4;goto B6c3374;
case 0x6c3378:c.instructions+=3;goto B6c3378;
case 0x6c337a:c.instructions+=2;goto B6c337a;
case 0x6c337d:c.instructions+=1;goto B6c337d;
case 0x6c3383:goto L6c3383;
case 0x6c3386:c.instructions+=3;goto B6c3386;
case 0x6c3389:c.instructions+=2;goto B6c3389;
case 0x6c338c:c.instructions+=1;goto B6c338c;
case 0x6c338f:goto L6c338f;
case 0x6c3391:c.instructions+=4;goto B6c3391;
case 0x6c3394:c.instructions+=3;goto B6c3394;
case 0x6c3397:c.instructions+=2;goto B6c3397;
case 0x6c339a:c.instructions+=1;goto B6c339a;
case 0x6c339c:goto L6c339c;
case 0x6c339f:c.instructions+=6;goto B6c339f;
case 0x6c33a2:c.instructions+=5;goto B6c33a2;
case 0x6c33a5:c.instructions+=4;goto B6c33a5;
case 0x6c33a8:c.instructions+=3;goto B6c33a8;
case 0x6c33ac:c.instructions+=2;goto B6c33ac;
case 0x6c33af:c.instructions+=1;goto B6c33af;
case 0x6c33b1:goto L6c33b1;
case 0x6c33b4:c.instructions+=2;goto B6c33b4;
case 0x6c33b7:c.instructions+=1;goto B6c33b7;
case 0x6c33bb:goto L6c33bb;
case 0x6c33bd:c.instructions+=4;goto B6c33bd;
case 0x6c33c0:c.instructions+=3;goto B6c33c0;
case 0x6c33c2:c.instructions+=2;goto B6c33c2;
case 0x6c33c5:c.instructions+=1;goto B6c33c5;
case 0x6c33c7:goto L6c33c7;
case 0x6c33c9:c.instructions+=2;goto B6c33c9;
case 0x6c33cc:c.instructions+=1;goto B6c33cc;
case 0x6c33d2:goto L6c33d2;
case 0x6c33d5:c.instructions+=1;goto B6c33d5;
case 0x6c33d7:goto L6c33d7;
case 0x6c33db:c.instructions+=1;goto B6c33db;
case 0x6c33dd:goto L6c33dd;
case 0x6c33df:c.instructions+=2;goto B6c33df;
case 0x6c33e0:c.instructions+=1;goto B6c33e0;
case 0x6c33e2:goto L6c33e2;
case 0x6c33e4:goto L6c33e4;
case 0x6c33e5:c.instructions+=8;goto B6c33e5;
case 0x6c33e7:c.instructions+=7;goto B6c33e7;
case 0x6c33e8:c.instructions+=6;goto B6c33e8;
case 0x6c33eb:c.instructions+=5;goto B6c33eb;
case 0x6c33ec:c.instructions+=4;goto B6c33ec;
case 0x6c33ee:c.instructions+=3;goto B6c33ee;
case 0x6c33f4:c.instructions+=2;goto B6c33f4;
case 0x6c33f6:c.instructions+=1;goto B6c33f6;
case 0x6c33fb:goto L6c33fb;
case 0x6c33fe:c.instructions+=2;goto B6c33fe;
case 0x6c3402:c.instructions+=1;goto B6c3402;
case 0x6c3408:goto L6c3408;
case 0x6c340e:c.instructions+=17;goto B6c340e;
case 0x6c3411:c.instructions+=16;goto B6c3411;
case 0x6c3414:c.instructions+=15;goto B6c3414;
case 0x6c3417:c.instructions+=14;goto B6c3417;
case 0x6c3419:c.instructions+=13;goto B6c3419;
case 0x6c341c:c.instructions+=12;goto B6c341c;
case 0x6c341f:c.instructions+=11;goto B6c341f;
case 0x6c3422:c.instructions+=10;goto B6c3422;
case 0x6c3428:c.instructions+=9;goto B6c3428;
case 0x6c342b:c.instructions+=8;goto B6c342b;
case 0x6c342d:c.instructions+=7;goto B6c342d;
case 0x6c3430:c.instructions+=6;goto B6c3430;
case 0x6c3433:c.instructions+=5;goto B6c3433;
case 0x6c3436:c.instructions+=4;goto B6c3436;
case 0x6c3437:c.instructions+=3;goto B6c3437;
case 0x6c343a:c.instructions+=2;goto B6c343a;
case 0x6c343d:c.instructions+=1;goto B6c343d;
case 0x6c343f:goto L6c343f;
case 0x6c3441:c.instructions+=3;goto B6c3441;
case 0x6c3444:c.instructions+=2;goto B6c3444;
case 0x6c3447:c.instructions+=1;goto B6c3447;
case 0x6c344a:goto L6c344a;
case 0x6c3450:c.instructions+=8;goto B6c3450;
case 0x6c3453:c.instructions+=7;goto B6c3453;
case 0x6c3456:c.instructions+=6;goto B6c3456;
case 0x6c3459:c.instructions+=5;goto B6c3459;
case 0x6c345c:c.instructions+=4;goto B6c345c;
case 0x6c345f:c.instructions+=3;goto B6c345f;
case 0x6c3462:c.instructions+=2;goto B6c3462;
case 0x6c3465:c.instructions+=1;goto B6c3465;
case 0x6c346b:goto L6c346b;
case 0x6c346e:c.instructions+=5;goto B6c346e;
case 0x6c3471:c.instructions+=4;goto B6c3471;
case 0x6c3474:c.instructions+=3;goto B6c3474;
case 0x6c3477:c.instructions+=2;goto B6c3477;
case 0x6c347b:c.instructions+=1;goto B6c347b;
case 0x6c3481:goto L6c3481;
case 0x6c3485:c.instructions+=2;goto B6c3485;
case 0x6c3487:c.instructions+=1;goto B6c3487;
case 0x6c348d:goto L6c348d;
case 0x6c348f:c.instructions+=1;goto B6c348f;
case 0x6c3492:goto L6c3492;
case 0x6c3498:c.instructions+=16;goto B6c3498;
case 0x6c349a:c.instructions+=15;goto B6c349a;
case 0x6c349d:c.instructions+=14;goto B6c349d;
case 0x6c34a0:c.instructions+=13;goto B6c34a0;
case 0x6c34a3:c.instructions+=12;goto B6c34a3;
case 0x6c34a6:c.instructions+=11;goto B6c34a6;
case 0x6c34a9:c.instructions+=10;goto B6c34a9;
case 0x6c34aa:c.instructions+=9;goto B6c34aa;
case 0x6c34ab:c.instructions+=8;goto B6c34ab;
case 0x6c34ae:c.instructions+=7;goto B6c34ae;
case 0x6c34b1:c.instructions+=6;goto B6c34b1;
case 0x6c34b3:c.instructions+=5;goto B6c34b3;
case 0x6c34b4:c.instructions+=4;goto B6c34b4;
case 0x6c34b5:c.instructions+=3;goto B6c34b5;
case 0x6c34b6:c.instructions+=2;goto B6c34b6;
case 0x6c34b8:c.instructions+=1;goto B6c34b8;
case 0x6c34bd:goto L6c34bd;
case 0x6c34bf:c.instructions+=3;goto B6c34bf;
case 0x6c34c2:c.instructions+=2;goto B6c34c2;
case 0x6c34c5:c.instructions+=1;goto B6c34c5;
case 0x6c34cb:goto L6c34cb;
case 0x6c34ce:c.instructions+=4;goto B6c34ce;
case 0x6c34d1:c.instructions+=3;goto B6c34d1;
case 0x6c34d4:c.instructions+=2;goto B6c34d4;
case 0x6c34d6:c.instructions+=1;goto B6c34d6;
case 0x6c34db:goto L6c34db;
case 0x6c34dd:c.instructions+=2;goto B6c34dd;
case 0x6c34df:c.instructions+=1;goto B6c34df;
case 0x6c34e5:goto L6c34e5;
case 0x6c34e9:c.instructions+=1;goto B6c34e9;
case 0x6c34eb:goto L6c34eb;
case 0x6c34ec:c.instructions+=8;goto B6c34ec;
case 0x6c34ee:c.instructions+=7;goto B6c34ee;
case 0x6c34ef:c.instructions+=6;goto B6c34ef;
case 0x6c34f2:c.instructions+=5;goto B6c34f2;
case 0x6c34f3:c.instructions+=4;goto B6c34f3;
case 0x6c34f4:c.instructions+=3;goto B6c34f4;
case 0x6c34f5:c.instructions+=2;goto B6c34f5;
case 0x6c34f7:c.instructions+=1;goto B6c34f7;
case 0x6c34fc:goto L6c34fc;
case 0x6c34fe:c.instructions+=2;goto B6c34fe;
case 0x6c3501:c.instructions+=1;goto B6c3501;
case 0x6c3507:goto L6c3507;
case 0x6c350a:c.instructions+=6;goto B6c350a;
case 0x6c350d:c.instructions+=5;goto B6c350d;
case 0x6c3510:c.instructions+=4;goto B6c3510;
case 0x6c3513:c.instructions+=3;goto B6c3513;
case 0x6c3516:c.instructions+=2;goto B6c3516;
case 0x6c3519:c.instructions+=1;goto B6c3519;
case 0x6c351e:goto L6c351e;
case 0x6c3521:c.instructions+=5;goto B6c3521;
case 0x6c3525:c.instructions+=4;goto B6c3525;
case 0x6c3528:c.instructions+=3;goto B6c3528;
case 0x6c352b:c.instructions+=2;goto B6c352b;
case 0x6c352e:c.instructions+=1;goto B6c352e;
case 0x6c3531:goto L6c3531;
case 0x6c3534:c.instructions+=11;goto B6c3534;
case 0x6c3538:c.instructions+=10;goto B6c3538;
case 0x6c353b:c.instructions+=9;goto B6c353b;
case 0x6c353e:c.instructions+=8;goto B6c353e;
case 0x6c3542:c.instructions+=7;goto B6c3542;
case 0x6c3545:c.instructions+=6;goto B6c3545;
case 0x6c354b:c.instructions+=5;goto B6c354b;
case 0x6c354e:c.instructions+=4;goto B6c354e;
case 0x6c3551:c.instructions+=3;goto B6c3551;
case 0x6c3554:c.instructions+=2;goto B6c3554;
case 0x6c3557:c.instructions+=1;goto B6c3557;
case 0x6c355d:goto L6c355d;
case 0x6c3560:goto L6c3560;
case 0x6c3563:goto L6c3563;
case 0x6c3566:c.instructions+=6;goto B6c3566;
case 0x6c3568:c.instructions+=5;goto B6c3568;
case 0x6c356b:c.instructions+=4;goto B6c356b;
case 0x6c356e:c.instructions+=3;goto B6c356e;
case 0x6c3571:c.instructions+=2;goto B6c3571;
case 0x6c3574:c.instructions+=1;goto B6c3574;
case 0x6c357a:goto L6c357a;
case 0x6c357c:c.instructions+=1;goto B6c357c;
case 0x6c3581:goto L6c3581;
case 0x6c3583:c.instructions+=1;goto B6c3583;
case 0x6c3585:goto L6c3585;
case 0x6c3587:c.instructions+=1;goto B6c3587;
case 0x6c358c:goto L6c358c;
case 0x6c358e:c.instructions+=2;goto B6c358e;
case 0x6c3591:c.instructions+=1;goto B6c3591;
case 0x6c3593:goto L6c3593;
case 0x6c3597:c.instructions+=1;goto B6c3597;
case 0x6c359a:goto L6c359a;
case 0x6c359c:c.instructions+=1;goto B6c359c;
case 0x6c359e:goto L6c359e;
case 0x6c35a3:c.instructions+=1;goto B6c35a3;
case 0x6c35a8:goto L6c35a8;
case 0x6c35ab:c.instructions+=8;goto B6c35ab;
case 0x6c35ad:c.instructions+=7;goto B6c35ad;
case 0x6c35b0:c.instructions+=6;goto B6c35b0;
case 0x6c35b5:c.instructions+=5;goto B6c35b5;
case 0x6c35b8:c.instructions+=4;goto B6c35b8;
case 0x6c35bd:c.instructions+=3;goto B6c35bd;
case 0x6c35be:c.instructions+=2;goto B6c35be;
case 0x6c35c0:c.instructions+=1;goto B6c35c0;
case 0x6c35c5:goto L6c35c5;
case 0x6c35c7:c.instructions+=3;goto B6c35c7;
case 0x6c35c9:c.instructions+=2;goto B6c35c9;
case 0x6c35cb:c.instructions+=1;goto B6c35cb;
case 0x6c35cd:goto L6c35cd;
case 0x6c35d3:c.instructions+=1;goto B6c35d3;
case 0x6c35d8:goto L6c35d8;
case 0x6c35da:c.instructions+=2;goto B6c35da;
case 0x6c35dc:c.instructions+=1;goto B6c35dc;
case 0x6c35de:goto L6c35de;
case 0x6c35e0:c.instructions+=1;goto B6c35e0;
case 0x6c35e2:goto L6c35e2;
case 0x6c35e5:c.instructions+=6;goto B6c35e5;
case 0x6c35e8:c.instructions+=5;goto B6c35e8;
case 0x6c35eb:c.instructions+=4;goto B6c35eb;
case 0x6c35ed:c.instructions+=3;goto B6c35ed;
case 0x6c35ef:c.instructions+=2;goto B6c35ef;
case 0x6c35f2:c.instructions+=1;goto B6c35f2;
case 0x6c35f5:goto L6c35f5;
case 0x6c35f7:goto L6c35f7;
case 0x6c35f9:c.instructions+=1;goto B6c35f9;
case 0x6c35fc:goto L6c35fc;
case 0x6c35fe:goto L6c35fe;
case 0x6c3600:c.instructions+=4;goto B6c3600;
case 0x6c3603:c.instructions+=3;goto B6c3603;
case 0x6c3606:c.instructions+=2;goto B6c3606;
case 0x6c3609:c.instructions+=1;goto B6c3609;
case 0x6c360c:goto L6c360c;
case 0x6c360e:goto L6c360e;
case 0x6c3610:c.instructions+=1;goto B6c3610;
case 0x6c3613:goto L6c3613;
case 0x6c3615:goto L6c3615;
case 0x6c3616:c.instructions+=2;goto B6c3616;
case 0x6c3618:c.instructions+=1;goto B6c3618;
case 0x6c361d:goto L6c361d;
case 0x6c361f:c.instructions+=2;goto B6c361f;
case 0x6c3621:c.instructions+=1;goto B6c3621;
case 0x6c3623:goto L6c3623;
case 0x6c3626:goto L6c3626;
case 0x6c3628:c.instructions+=1;goto B6c3628;
case 0x6c362d:goto L6c362d;
case 0x6c362f:c.instructions+=1;goto B6c362f;
case 0x6c3631:goto L6c3631;
case 0x6c3633:c.instructions+=1;goto B6c3633;
case 0x6c3635:goto L6c3635;
case 0x6c3637:c.instructions+=1;goto B6c3637;
case 0x6c3638:goto L6c3638;
case 0x6c3639:c.instructions+=4;goto B6c3639;
case 0x6c363a:c.instructions+=3;goto B6c363a;
case 0x6c363b:c.instructions+=2;goto B6c363b;
case 0x6c363c:c.instructions+=1;goto B6c363c;
case 0x6c363d:goto L6c363d;
case 0x6c363f:c.instructions+=20;goto B6c363f;
case 0x6c3640:c.instructions+=19;goto B6c3640;
case 0x6c3642:c.instructions+=18;goto B6c3642;
case 0x6c3648:c.instructions+=17;goto B6c3648;
case 0x6c364c:c.instructions+=16;goto B6c364c;
case 0x6c364d:c.instructions+=15;goto B6c364d;
case 0x6c364f:c.instructions+=14;goto B6c364f;
case 0x6c3655:c.instructions+=13;goto B6c3655;
case 0x6c3657:c.instructions+=12;goto B6c3657;
case 0x6c3658:c.instructions+=11;goto B6c3658;
case 0x6c365a:c.instructions+=10;goto B6c365a;
case 0x6c365f:c.instructions+=9;goto B6c365f;
case 0x6c3660:c.instructions+=8;goto B6c3660;
case 0x6c3662:c.instructions+=7;goto B6c3662;
case 0x6c3664:c.instructions+=6;goto B6c3664;
case 0x6c3667:c.instructions+=5;goto B6c3667;
case 0x6c366a:c.instructions+=4;goto B6c366a;
case 0x6c3671:c.instructions+=3;goto B6c3671;
case 0x6c3678:c.instructions+=2;goto B6c3678;
case 0x6c367b:c.instructions+=1;goto B6c367b;
case 0x6c367d:goto L6c367d;
case 0x6c367f:c.instructions+=1;goto B6c367f;
case 0x6c3684:goto L6c3684;
case 0x6c3687:c.instructions+=9;goto B6c3687;
case 0x6c3689:c.instructions+=8;goto B6c3689;
case 0x6c368a:c.instructions+=7;goto B6c368a;
case 0x6c368d:c.instructions+=6;goto B6c368d;
case 0x6c3690:c.instructions+=5;goto B6c3690;
case 0x6c3693:c.instructions+=4;goto B6c3693;
case 0x6c3696:c.instructions+=3;goto B6c3696;
case 0x6c3699:c.instructions+=2;goto B6c3699;
case 0x6c369d:c.instructions+=1;goto B6c369d;
case 0x6c369f:goto L6c369f;
case 0x6c36a1:c.instructions+=4;goto B6c36a1;
case 0x6c36a4:c.instructions+=3;goto B6c36a4;
case 0x6c36a7:c.instructions+=2;goto B6c36a7;
case 0x6c36aa:c.instructions+=1;goto B6c36aa;
case 0x6c36ac:goto L6c36ac;
case 0x6c36ae:c.instructions+=1;goto B6c36ae;
case 0x6c36b3:goto L6c36b3;
case 0x6c36b8:c.instructions+=2;goto B6c36b8;
case 0x6c36bd:c.instructions+=1;goto B6c36bd;
case 0x6c36bf:goto L6c36bf;
case 0x6c36c3:goto L6c36c3;
case 0x6c36c7:goto L6c36c7;
case 0x6c36c9:c.instructions+=5;goto B6c36c9;
case 0x6c36cb:c.instructions+=4;goto B6c36cb;
case 0x6c36cc:c.instructions+=3;goto B6c36cc;
case 0x6c36cf:c.instructions+=2;goto B6c36cf;
case 0x6c36d5:c.instructions+=1;goto B6c36d5;
case 0x6c36db:goto L6c36db;
case 0x6c36dd:goto L6c36dd;
case 0x6c36df:c.instructions+=4;goto B6c36df;
case 0x6c36e1:c.instructions+=3;goto B6c36e1;
case 0x6c36e2:c.instructions+=2;goto B6c36e2;
case 0x6c36e8:c.instructions+=1;goto B6c36e8;
case 0x6c36ee:goto L6c36ee;
case 0x6c36f0:goto L6c36f0;
case 0x6c36f3:c.instructions+=2;goto B6c36f3;
case 0x6c36f6:c.instructions+=1;goto B6c36f6;
case 0x6c36f9:goto L6c36f9;
case 0x6c36fd:c.instructions+=1;goto B6c36fd;
case 0x6c36ff:goto L6c36ff;
case 0x6c3701:c.instructions+=3;goto B6c3701;
case 0x6c3702:c.instructions+=2;goto B6c3702;
case 0x6c3705:c.instructions+=1;goto B6c3705;
case 0x6c3707:goto L6c3707;
case 0x6c370a:goto L6c370a;
case 0x6c370d:c.instructions+=9;goto B6c370d;
case 0x6c3710:c.instructions+=8;goto B6c3710;
case 0x6c3713:c.instructions+=7;goto B6c3713;
case 0x6c371a:c.instructions+=6;goto B6c371a;
case 0x6c371d:c.instructions+=5;goto B6c371d;
case 0x6c3720:c.instructions+=4;goto B6c3720;
case 0x6c3723:c.instructions+=3;goto B6c3723;
case 0x6c3725:c.instructions+=2;goto B6c3725;
case 0x6c3728:c.instructions+=1;goto B6c3728;
case 0x6c372a:goto L6c372a;
case 0x6c372d:c.instructions+=2;goto B6c372d;
case 0x6c3730:c.instructions+=1;goto B6c3730;
case 0x6c3736:goto L6c3736;
case 0x6c3739:c.instructions+=15;goto B6c3739;
case 0x6c373b:c.instructions+=14;goto B6c373b;
case 0x6c373e:c.instructions+=13;goto B6c373e;
case 0x6c3741:c.instructions+=12;goto B6c3741;
case 0x6c3744:c.instructions+=11;goto B6c3744;
case 0x6c3747:c.instructions+=10;goto B6c3747;
case 0x6c3749:c.instructions+=9;goto B6c3749;
case 0x6c374f:c.instructions+=8;goto B6c374f;
case 0x6c3755:c.instructions+=7;goto B6c3755;
case 0x6c3756:c.instructions+=6;goto B6c3756;
case 0x6c3759:c.instructions+=5;goto B6c3759;
case 0x6c375a:c.instructions+=4;goto B6c375a;
case 0x6c375d:c.instructions+=3;goto B6c375d;
case 0x6c375e:c.instructions+=2;goto B6c375e;
case 0x6c375f:c.instructions+=1;goto B6c375f;
case 0x6c3764:goto L6c3764;
case 0x6c3766:c.instructions+=1;goto B6c3766;
case 0x6c3768:goto L6c3768;
case 0x6c376b:c.instructions+=14;goto B6c376b;
case 0x6c376c:c.instructions+=13;goto B6c376c;
case 0x6c376e:c.instructions+=12;goto B6c376e;
case 0x6c3774:c.instructions+=11;goto B6c3774;
case 0x6c3775:c.instructions+=10;goto B6c3775;
case 0x6c377b:c.instructions+=9;goto B6c377b;
case 0x6c377c:c.instructions+=8;goto B6c377c;
case 0x6c377f:c.instructions+=7;goto B6c377f;
case 0x6c3780:c.instructions+=6;goto B6c3780;
case 0x6c3786:c.instructions+=5;goto B6c3786;
case 0x6c3787:c.instructions+=4;goto B6c3787;
case 0x6c378d:c.instructions+=3;goto B6c378d;
case 0x6c378e:c.instructions+=2;goto B6c378e;
case 0x6c378f:c.instructions+=1;goto B6c378f;
case 0x6c3794:goto L6c3794;
case 0x6c3797:c.instructions+=1;goto B6c3797;
case 0x6c3799:goto L6c3799;
case 0x6c379c:c.instructions+=3;goto B6c379c;
case 0x6c379e:c.instructions+=2;goto B6c379e;
case 0x6c37a1:c.instructions+=1;goto B6c37a1;
case 0x6c37a8:goto L6c37a8;
case 0x6c37ac:c.instructions+=2;goto B6c37ac;
case 0x6c37af:c.instructions+=1;goto B6c37af;
case 0x6c37b1:goto L6c37b1;
case 0x6c37b3:c.instructions+=3;goto B6c37b3;
case 0x6c37b6:c.instructions+=2;goto B6c37b6;
case 0x6c37b8:c.instructions+=1;goto B6c37b8;
case 0x6c37ba:goto L6c37ba;
case 0x6c37bd:goto L6c37bd;
case 0x6c37be:c.instructions+=3;goto B6c37be;
case 0x6c37c1:c.instructions+=2;goto B6c37c1;
case 0x6c37c4:c.instructions+=1;goto B6c37c4;
case 0x6c37c6:goto L6c37c6;
case 0x6c37ca:c.instructions+=1;goto B6c37ca;
case 0x6c37cc:goto L6c37cc;
case 0x6c37cf:c.instructions+=3;goto B6c37cf;
case 0x6c37d2:c.instructions+=2;goto B6c37d2;
case 0x6c37d6:c.instructions+=1;goto B6c37d6;
case 0x6c37dc:goto L6c37dc;
case 0x6c37de:goto L6c37de;
case 0x6c37e5:goto L6c37e5;
case 0x6c37e7:c.instructions+=4;goto B6c37e7;
case 0x6c37ea:c.instructions+=3;goto B6c37ea;
case 0x6c37ed:c.instructions+=2;goto B6c37ed;
case 0x6c37f5:c.instructions+=1;goto B6c37f5;
case 0x6c37f7:goto L6c37f7;
case 0x6c37fb:c.instructions+=2;goto B6c37fb;
case 0x6c37ff:c.instructions+=1;goto B6c37ff;
case 0x6c3801:goto L6c3801;
case 0x6c3803:c.instructions+=2;goto B6c3803;
case 0x6c3806:c.instructions+=1;goto B6c3806;
case 0x6c3808:goto L6c3808;
case 0x6c380b:c.instructions+=2;goto B6c380b;
case 0x6c3812:c.instructions+=1;goto B6c3812;
case 0x6c3815:goto L6c3815;
case 0x6c3819:c.instructions+=2;goto B6c3819;
case 0x6c381b:c.instructions+=1;goto B6c381b;
case 0x6c381d:goto L6c381d;
case 0x6c3820:c.instructions+=3;goto B6c3820;
case 0x6c3823:c.instructions+=2;goto B6c3823;
case 0x6c3826:c.instructions+=1;goto B6c3826;
case 0x6c3829:goto L6c3829;
case 0x6c382b:c.instructions+=1;goto B6c382b;
case 0x6c382d:goto L6c382d;
case 0x6c3830:c.instructions+=3;goto B6c3830;
case 0x6c3833:c.instructions+=2;goto B6c3833;
case 0x6c3836:c.instructions+=1;goto B6c3836;
case 0x6c3838:goto L6c3838;
case 0x6c3839:c.instructions+=2;goto B6c3839;
case 0x6c383c:c.instructions+=1;goto B6c383c;
case 0x6c383e:goto L6c383e;
case 0x6c3840:goto L6c3840;
case 0x6c3847:goto L6c3847;
case 0x6c384a:c.instructions+=3;goto B6c384a;
case 0x6c384d:c.instructions+=2;goto B6c384d;
case 0x6c3850:c.instructions+=1;goto B6c3850;
case 0x6c3852:goto L6c3852;
case 0x6c3854:c.instructions+=2;goto B6c3854;
case 0x6c3857:c.instructions+=1;goto B6c3857;
case 0x6c385d:goto L6c385d;
case 0x6c3860:c.instructions+=1;goto B6c3860;
case 0x6c3866:goto L6c3866;
case 0x6c3868:c.instructions+=3;goto B6c3868;
case 0x6c386b:c.instructions+=2;goto B6c386b;
case 0x6c386e:c.instructions+=1;goto B6c386e;
case 0x6c3874:goto L6c3874;
case 0x6c387b:c.instructions+=5;goto B6c387b;
case 0x6c387e:c.instructions+=4;goto B6c387e;
case 0x6c3880:c.instructions+=3;goto B6c3880;
case 0x6c3883:c.instructions+=2;goto B6c3883;
case 0x6c3886:c.instructions+=1;goto B6c3886;
case 0x6c388c:goto L6c388c;
case 0x6c388f:c.instructions+=3;goto B6c388f;
case 0x6c3892:c.instructions+=2;goto B6c3892;
case 0x6c3894:c.instructions+=1;goto B6c3894;
case 0x6c389a:goto L6c389a;
case 0x6c389d:c.instructions+=2;goto B6c389d;
case 0x6c38a0:c.instructions+=1;goto B6c38a0;
case 0x6c38a3:goto L6c38a3;
case 0x6c38a5:c.instructions+=2;goto B6c38a5;
case 0x6c38a7:c.instructions+=1;goto B6c38a7;
case 0x6c38a9:goto L6c38a9;
case 0x6c38ab:c.instructions+=1;goto B6c38ab;
case 0x6c38ad:goto L6c38ad;
case 0x6c38b0:c.instructions+=3;goto B6c38b0;
case 0x6c38b2:c.instructions+=2;goto B6c38b2;
case 0x6c38b5:c.instructions+=1;goto B6c38b5;
case 0x6c38b7:goto L6c38b7;
case 0x6c38ba:c.instructions+=6;goto B6c38ba;
case 0x6c38c1:c.instructions+=5;goto B6c38c1;
case 0x6c38c4:c.instructions+=4;goto B6c38c4;
case 0x6c38c7:c.instructions+=3;goto B6c38c7;
case 0x6c38ca:c.instructions+=2;goto B6c38ca;
case 0x6c38cd:c.instructions+=1;goto B6c38cd;
case 0x6c38cf:goto L6c38cf;
case 0x6c38d1:c.instructions+=2;goto B6c38d1;
case 0x6c38d3:c.instructions+=1;goto B6c38d3;
case 0x6c38d5:goto L6c38d5;
case 0x6c38d8:c.instructions+=4;goto B6c38d8;
case 0x6c38db:c.instructions+=3;goto B6c38db;
case 0x6c38de:c.instructions+=2;goto B6c38de;
case 0x6c38e1:c.instructions+=1;goto B6c38e1;
case 0x6c38e3:goto L6c38e3;
case 0x6c38ea:goto L6c38ea;
case 0x6c38ed:c.instructions+=2;goto B6c38ed;
case 0x6c38ee:c.instructions+=1;goto B6c38ee;
case 0x6c38f0:goto L6c38f0;
case 0x6c38f2:goto L6c38f2;
case 0x6c38f5:c.instructions+=1;goto B6c38f5;
case 0x6c38f7:goto L6c38f7;
case 0x6c38f9:c.instructions+=1;goto B6c38f9;
case 0x6c38fb:goto L6c38fb;
case 0x6c38fe:goto L6c38fe;
case 0x6c3900:c.instructions+=1;goto B6c3900;
case 0x6c3902:goto L6c3902;
case 0x6c3904:goto L6c3904;
case 0x6c390b:c.instructions+=1;goto B6c390b;
case 0x6c390d:goto L6c390d;
case 0x6c390f:goto L6c390f;
case 0x6c3910:c.instructions+=2;goto B6c3910;
case 0x6c3913:c.instructions+=1;goto B6c3913;
case 0x6c3915:goto L6c3915;
case 0x6c3917:c.instructions+=1;goto B6c3917;
case 0x6c3919:goto L6c3919;
case 0x6c3920:goto L6c3920;
case 0x6c3923:c.instructions+=4;goto B6c3923;
case 0x6c3926:c.instructions+=3;goto B6c3926;
case 0x6c3929:c.instructions+=2;goto B6c3929;
case 0x6c392c:c.instructions+=1;goto B6c392c;
case 0x6c3932:goto L6c3932;
case 0x6c3935:c.instructions+=3;goto B6c3935;
case 0x6c3938:c.instructions+=2;goto B6c3938;
case 0x6c393b:c.instructions+=1;goto B6c393b;
case 0x6c3941:goto L6c3941;
case 0x6c3944:c.instructions+=4;goto B6c3944;
case 0x6c3945:c.instructions+=3;goto B6c3945;
case 0x6c3948:c.instructions+=2;goto B6c3948;
case 0x6c394b:c.instructions+=1;goto B6c394b;
case 0x6c3951:goto L6c3951;
case 0x6c3954:goto L6c3954;
case 0x6c3957:c.instructions+=3;goto B6c3957;
case 0x6c395e:c.instructions+=2;goto B6c395e;
case 0x6c3961:c.instructions+=1;goto B6c3961;
case 0x6c3963:goto L6c3963;
case 0x6c3965:c.instructions+=2;goto B6c3965;
case 0x6c3968:c.instructions+=1;goto B6c3968;
case 0x6c396a:goto L6c396a;
case 0x6c396d:c.instructions+=2;goto B6c396d;
case 0x6c3970:c.instructions+=1;goto B6c3970;
case 0x6c3973:goto L6c3973;
case 0x6c397a:c.instructions+=3;goto B6c397a;
case 0x6c397d:c.instructions+=2;goto B6c397d;
case 0x6c397f:c.instructions+=1;goto B6c397f;
case 0x6c3981:goto L6c3981;
case 0x6c3984:goto L6c3984;
case 0x6c3986:c.instructions+=2;goto B6c3986;
case 0x6c3988:c.instructions+=1;goto B6c3988;
case 0x6c398a:goto L6c398a;
case 0x6c398d:c.instructions+=1;goto B6c398d;
case 0x6c398f:goto L6c398f;
case 0x6c3996:goto L6c3996;
case 0x6c3999:c.instructions+=2;goto B6c3999;
case 0x6c399a:c.instructions+=1;goto B6c399a;
case 0x6c399c:goto L6c399c;
case 0x6c399d:c.instructions+=2;goto B6c399d;
case 0x6c39a0:c.instructions+=1;goto B6c39a0;
case 0x6c39a2:goto L6c39a2;
case 0x6c39a5:c.instructions+=2;goto B6c39a5;
case 0x6c39a9:c.instructions+=1;goto B6c39a9;
case 0x6c39ab:goto L6c39ab;
case 0x6c39af:c.instructions+=1;goto B6c39af;
case 0x6c39b1:goto L6c39b1;
case 0x6c39b4:c.instructions+=2;goto B6c39b4;
case 0x6c39b8:c.instructions+=1;goto B6c39b8;
case 0x6c39be:goto L6c39be;
case 0x6c39c2:c.instructions+=1;goto B6c39c2;
case 0x6c39c4:goto L6c39c4;
case 0x6c39c7:c.instructions+=2;goto B6c39c7;
case 0x6c39cb:c.instructions+=1;goto B6c39cb;
case 0x6c39d1:goto L6c39d1;
case 0x6c39d3:goto L6c39d3;
case 0x6c39d6:c.instructions+=3;goto B6c39d6;
case 0x6c39d9:c.instructions+=2;goto B6c39d9;
case 0x6c39e0:c.instructions+=1;goto B6c39e0;
case 0x6c39e2:goto L6c39e2;
case 0x6c39e9:c.instructions+=2;goto B6c39e9;
case 0x6c39ec:c.instructions+=1;goto B6c39ec;
case 0x6c39ee:goto L6c39ee;
case 0x6c39f5:c.instructions+=2;goto B6c39f5;
case 0x6c39f8:c.instructions+=1;goto B6c39f8;
case 0x6c39fa:goto L6c39fa;
case 0x6c3a01:goto L6c3a01;
case 0x6c3a04:c.instructions+=2;goto B6c3a04;
case 0x6c3a09:c.instructions+=1;goto B6c3a09;
case 0x6c3a0b:goto L6c3a0b;
case 0x6c3a0f:goto L6c3a0f;
case 0x6c3a12:c.instructions+=2;goto B6c3a12;
case 0x6c3a14:c.instructions+=1;goto B6c3a14;
case 0x6c3a1a:goto L6c3a1a;
case 0x6c3a1c:c.instructions+=1;goto B6c3a1c;
case 0x6c3a21:goto L6c3a21;
case 0x6c3a23:c.instructions+=1;goto B6c3a23;
case 0x6c3a25:goto L6c3a25;
case 0x6c3a27:c.instructions+=1;goto B6c3a27;
case 0x6c3a2c:goto L6c3a2c;
case 0x6c3a2e:c.instructions+=1;goto B6c3a2e;
case 0x6c3a30:goto L6c3a30;
case 0x6c3a32:goto L6c3a32;
case 0x6c3a34:c.instructions+=1;goto B6c3a34;
case 0x6c3a36:goto L6c3a36;
case 0x6c3a3b:c.instructions+=1;goto B6c3a3b;
case 0x6c3a40:goto L6c3a40;
case 0x6c3a42:c.instructions+=5;goto B6c3a42;
case 0x6c3a44:c.instructions+=4;goto B6c3a44;
case 0x6c3a46:c.instructions+=3;goto B6c3a46;
case 0x6c3a4b:c.instructions+=2;goto B6c3a4b;
case 0x6c3a4d:c.instructions+=1;goto B6c3a4d;
case 0x6c3a52:goto L6c3a52;
case 0x6c3a54:c.instructions+=3;goto B6c3a54;
case 0x6c3a56:c.instructions+=2;goto B6c3a56;
case 0x6c3a58:c.instructions+=1;goto B6c3a58;
case 0x6c3a5a:goto L6c3a5a;
case 0x6c3a5d:c.instructions+=2;goto B6c3a5d;
case 0x6c3a63:c.instructions+=1;goto B6c3a63;
case 0x6c3a68:goto L6c3a68;
case 0x6c3a6a:c.instructions+=2;goto B6c3a6a;
case 0x6c3a6c:c.instructions+=1;goto B6c3a6c;
case 0x6c3a6e:goto L6c3a6e;
case 0x6c3a71:c.instructions+=7;goto B6c3a71;
case 0x6c3a77:c.instructions+=6;goto B6c3a77;
case 0x6c3a7a:c.instructions+=5;goto B6c3a7a;
case 0x6c3a7d:c.instructions+=4;goto B6c3a7d;
case 0x6c3a80:c.instructions+=3;goto B6c3a80;
case 0x6c3a83:c.instructions+=2;goto B6c3a83;
case 0x6c3a85:c.instructions+=1;goto B6c3a85;
case 0x6c3a88:goto L6c3a88;
case 0x6c3a8a:goto L6c3a8a;
case 0x6c3a8c:c.instructions+=1;goto B6c3a8c;
case 0x6c3a8f:goto L6c3a8f;
case 0x6c3a91:goto L6c3a91;
case 0x6c3a94:c.instructions+=9;goto B6c3a94;
case 0x6c3a9a:c.instructions+=8;goto B6c3a9a;
case 0x6c3a9b:c.instructions+=7;goto B6c3a9b;
case 0x6c3a9e:c.instructions+=6;goto B6c3a9e;
case 0x6c3aa1:c.instructions+=5;goto B6c3aa1;
case 0x6c3aa7:c.instructions+=4;goto B6c3aa7;
case 0x6c3aa8:c.instructions+=3;goto B6c3aa8;
case 0x6c3aae:c.instructions+=2;goto B6c3aae;
case 0x6c3aaf:c.instructions+=1;goto B6c3aaf;
case 0x6c3ab4:goto L6c3ab4;
case 0x6c3ab6:goto L6c3ab6;
case 0x6c3ab8:goto L6c3ab8;
case 0x6c3aba:c.instructions+=1;goto B6c3aba;
case 0x6c3abf:goto L6c3abf;
case 0x6c3ac1:goto L6c3ac1;
case 0x6c3ac2:goto L6c3ac2;
case 0x6c3ac3:c.instructions+=3;goto B6c3ac3;
case 0x6c3ac4:c.instructions+=2;goto B6c3ac4;
case 0x6c3ac5:c.instructions+=1;goto B6c3ac5;
case 0x6c3ac6:goto L6c3ac6;
case 0x6c3ac8:c.instructions+=18;goto B6c3ac8;
case 0x6c3ac9:c.instructions+=17;goto B6c3ac9;
case 0x6c3acb:c.instructions+=16;goto B6c3acb;
case 0x6c3acc:c.instructions+=15;goto B6c3acc;
case 0x6c3ad2:c.instructions+=14;goto B6c3ad2;
case 0x6c3ad5:c.instructions+=13;goto B6c3ad5;
case 0x6c3ad6:c.instructions+=12;goto B6c3ad6;
case 0x6c3ad8:c.instructions+=11;goto B6c3ad8;
case 0x6c3adb:c.instructions+=10;goto B6c3adb;
case 0x6c3add:c.instructions+=9;goto B6c3add;
case 0x6c3ae0:c.instructions+=8;goto B6c3ae0;
case 0x6c3ae3:c.instructions+=7;goto B6c3ae3;
case 0x6c3ae6:c.instructions+=6;goto B6c3ae6;
case 0x6c3ae9:c.instructions+=5;goto B6c3ae9;
case 0x6c3aec:c.instructions+=4;goto B6c3aec;
case 0x6c3aef:c.instructions+=3;goto B6c3aef;
case 0x6c3af5:c.instructions+=2;goto B6c3af5;
case 0x6c3af9:c.instructions+=1;goto B6c3af9;
case 0x6c3afb:goto L6c3afb;
case 0x6c3afd:c.instructions+=2;goto B6c3afd;
case 0x6c3afe:c.instructions+=1;goto B6c3afe;
case 0x6c3b00:goto L6c3b00;
case 0x6c3b04:c.instructions+=2;goto B6c3b04;
case 0x6c3b06:c.instructions+=1;goto B6c3b06;
case 0x6c3b08:goto L6c3b08;
case 0x6c3b09:c.instructions+=1;goto B6c3b09;
case 0x6c3b0a:goto L6c3b0a;
case 0x6c3b10:c.instructions+=14;goto B6c3b10;
case 0x6c3b13:c.instructions+=13;goto B6c3b13;
case 0x6c3b16:c.instructions+=12;goto B6c3b16;
case 0x6c3b19:c.instructions+=11;goto B6c3b19;
case 0x6c3b1c:c.instructions+=10;goto B6c3b1c;
case 0x6c3b1f:c.instructions+=9;goto B6c3b1f;
case 0x6c3b22:c.instructions+=8;goto B6c3b22;
case 0x6c3b25:c.instructions+=7;goto B6c3b25;
case 0x6c3b28:c.instructions+=6;goto B6c3b28;
case 0x6c3b2b:c.instructions+=5;goto B6c3b2b;
case 0x6c3b2e:c.instructions+=4;goto B6c3b2e;
case 0x6c3b31:c.instructions+=3;goto B6c3b31;
case 0x6c3b34:c.instructions+=2;goto B6c3b34;
case 0x6c3b37:c.instructions+=1;goto B6c3b37;
case 0x6c3b39:goto L6c3b39;
case 0x6c3b3a:c.instructions+=1;goto B6c3b3a;
case 0x6c3b3b:goto L6c3b3b;
case 0x6c3b41:c.instructions+=2;goto B6c3b41;
case 0x6c3b44:c.instructions+=1;goto B6c3b44;
case 0x6c3b46:goto L6c3b46;
case 0x6c3b47:c.instructions+=2;goto B6c3b47;
case 0x6c3b48:c.instructions+=1;goto B6c3b48;
case 0x6c3b49:goto L6c3b49;
case 0x6c3b4b:c.instructions+=23;goto B6c3b4b;
case 0x6c3b4c:c.instructions+=22;goto B6c3b4c;
case 0x6c3b4e:c.instructions+=21;goto B6c3b4e;
case 0x6c3b54:c.instructions+=20;goto B6c3b54;
case 0x6c3b55:c.instructions+=19;goto B6c3b55;
case 0x6c3b57:c.instructions+=18;goto B6c3b57;
case 0x6c3b5d:c.instructions+=17;goto B6c3b5d;
case 0x6c3b5f:c.instructions+=16;goto B6c3b5f;
case 0x6c3b60:c.instructions+=15;goto B6c3b60;
case 0x6c3b62:c.instructions+=14;goto B6c3b62;
case 0x6c3b64:c.instructions+=13;goto B6c3b64;
case 0x6c3b65:c.instructions+=12;goto B6c3b65;
case 0x6c3b67:c.instructions+=11;goto B6c3b67;
case 0x6c3b68:c.instructions+=10;goto B6c3b68;
case 0x6c3b6d:c.instructions+=9;goto B6c3b6d;
case 0x6c3b73:c.instructions+=8;goto B6c3b73;
case 0x6c3b78:c.instructions+=7;goto B6c3b78;
case 0x6c3b7b:c.instructions+=6;goto B6c3b7b;
case 0x6c3b7e:c.instructions+=5;goto B6c3b7e;
case 0x6c3b81:c.instructions+=4;goto B6c3b81;
case 0x6c3b84:c.instructions+=3;goto B6c3b84;
case 0x6c3b8b:c.instructions+=2;goto B6c3b8b;
case 0x6c3b92:c.instructions+=1;goto B6c3b92;
case 0x6c3b94:goto L6c3b94;
case 0x6c3b96:c.instructions+=1;goto B6c3b96;
case 0x6c3b9b:goto L6c3b9b;
case 0x6c3b9d:c.instructions+=6;goto B6c3b9d;
case 0x6c3ba0:c.instructions+=5;goto B6c3ba0;
case 0x6c3ba3:c.instructions+=4;goto B6c3ba3;
case 0x6c3ba6:c.instructions+=3;goto B6c3ba6;
case 0x6c3ba9:c.instructions+=2;goto B6c3ba9;
case 0x6c3bac:c.instructions+=1;goto B6c3bac;
case 0x6c3bb2:goto L6c3bb2;
case 0x6c3bb8:c.instructions+=10;goto B6c3bb8;
case 0x6c3bbe:c.instructions+=9;goto B6c3bbe;
case 0x6c3bc1:c.instructions+=8;goto B6c3bc1;
case 0x6c3bc3:c.instructions+=7;goto B6c3bc3;
case 0x6c3bc6:c.instructions+=6;goto B6c3bc6;
case 0x6c3bc9:c.instructions+=5;goto B6c3bc9;
case 0x6c3bcc:c.instructions+=4;goto B6c3bcc;
case 0x6c3bce:c.instructions+=3;goto B6c3bce;
case 0x6c3bd1:c.instructions+=2;goto B6c3bd1;
case 0x6c3bd4:c.instructions+=1;goto B6c3bd4;
case 0x6c3bd7:goto L6c3bd7;
case 0x6c3bda:c.instructions+=15;goto B6c3bda;
case 0x6c3bdd:c.instructions+=14;goto B6c3bdd;
case 0x6c3be0:c.instructions+=13;goto B6c3be0;
case 0x6c3be3:c.instructions+=12;goto B6c3be3;
case 0x6c3be6:c.instructions+=11;goto B6c3be6;
case 0x6c3be9:c.instructions+=10;goto B6c3be9;
case 0x6c3bec:c.instructions+=9;goto B6c3bec;
case 0x6c3bef:c.instructions+=8;goto B6c3bef;
case 0x6c3bf2:c.instructions+=7;goto B6c3bf2;
case 0x6c3bf5:c.instructions+=6;goto B6c3bf5;
case 0x6c3bf8:c.instructions+=5;goto B6c3bf8;
case 0x6c3bfb:c.instructions+=4;goto B6c3bfb;
case 0x6c3bfe:c.instructions+=3;goto B6c3bfe;
case 0x6c3c01:c.instructions+=2;goto B6c3c01;
case 0x6c3c05:c.instructions+=1;goto B6c3c05;
case 0x6c3c07:goto L6c3c07;
case 0x6c3c09:c.instructions+=5;goto B6c3c09;
case 0x6c3c0c:c.instructions+=4;goto B6c3c0c;
case 0x6c3c0e:c.instructions+=3;goto B6c3c0e;
case 0x6c3c10:c.instructions+=2;goto B6c3c10;
case 0x6c3c13:c.instructions+=1;goto B6c3c13;
case 0x6c3c15:goto L6c3c15;
case 0x6c3c19:c.instructions+=1;goto B6c3c19;
case 0x6c3c1b:goto L6c3c1b;
case 0x6c3c21:c.instructions+=6;goto B6c3c21;
case 0x6c3c24:c.instructions+=5;goto B6c3c24;
case 0x6c3c27:c.instructions+=4;goto B6c3c27;
case 0x6c3c2a:c.instructions+=3;goto B6c3c2a;
case 0x6c3c2d:c.instructions+=2;goto B6c3c2d;
case 0x6c3c30:c.instructions+=1;goto B6c3c30;
case 0x6c3c32:goto L6c3c32;
case 0x6c3c39:c.instructions+=1;goto B6c3c39;
case 0x6c3c3b:goto L6c3c3b;
case 0x6c3c42:goto L6c3c42;
case 0x6c3c45:c.instructions+=2;goto B6c3c45;
case 0x6c3c49:c.instructions+=1;goto B6c3c49;
case 0x6c3c4b:goto L6c3c4b;
case 0x6c3c4e:c.instructions+=6;goto B6c3c4e;
case 0x6c3c50:c.instructions+=5;goto B6c3c50;
case 0x6c3c53:c.instructions+=4;goto B6c3c53;
case 0x6c3c55:c.instructions+=3;goto B6c3c55;
case 0x6c3c57:c.instructions+=2;goto B6c3c57;
case 0x6c3c5a:c.instructions+=1;goto B6c3c5a;
case 0x6c3c5c:goto L6c3c5c;
case 0x6c3c60:c.instructions+=1;goto B6c3c60;
case 0x6c3c62:goto L6c3c62;
case 0x6c3c68:c.instructions+=6;goto B6c3c68;
case 0x6c3c6b:c.instructions+=5;goto B6c3c6b;
case 0x6c3c6e:c.instructions+=4;goto B6c3c6e;
case 0x6c3c71:c.instructions+=3;goto B6c3c71;
case 0x6c3c74:c.instructions+=2;goto B6c3c74;
case 0x6c3c77:c.instructions+=1;goto B6c3c77;
case 0x6c3c79:goto L6c3c79;
case 0x6c3c80:c.instructions+=1;goto B6c3c80;
case 0x6c3c82:goto L6c3c82;
case 0x6c3c89:goto L6c3c89;
case 0x6c3c8c:c.instructions+=4;goto B6c3c8c;
case 0x6c3c90:c.instructions+=3;goto B6c3c90;
case 0x6c3c94:c.instructions+=2;goto B6c3c94;
case 0x6c3c97:c.instructions+=1;goto B6c3c97;
case 0x6c3c9d:goto L6c3c9d;
case 0x6c3c9f:c.instructions+=3;goto B6c3c9f;
case 0x6c3ca1:c.instructions+=2;goto B6c3ca1;
case 0x6c3ca4:c.instructions+=1;goto B6c3ca4;
case 0x6c3ca6:goto L6c3ca6;
case 0x6c3ca9:c.instructions+=1;goto B6c3ca9;
case 0x6c3cab:goto L6c3cab;
case 0x6c3cad:c.instructions+=1;goto B6c3cad;
case 0x6c3cb2:goto L6c3cb2;
case 0x6c3cb4:c.instructions+=1;goto B6c3cb4;
case 0x6c3cb6:goto L6c3cb6;
case 0x6c3cb8:c.instructions+=1;goto B6c3cb8;
case 0x6c3cbd:goto L6c3cbd;
case 0x6c3cbf:goto L6c3cbf;
case 0x6c3cc1:goto L6c3cc1;
case 0x6c3cc3:c.instructions+=2;goto B6c3cc3;
case 0x6c3cc6:c.instructions+=1;goto B6c3cc6;
case 0x6c3cc8:goto L6c3cc8;
case 0x6c3cc9:c.instructions+=5;goto B6c3cc9;
case 0x6c3cca:c.instructions+=4;goto B6c3cca;
case 0x6c3ccd:c.instructions+=3;goto B6c3ccd;
case 0x6c3cd3:c.instructions+=2;goto B6c3cd3;
case 0x6c3cd9:c.instructions+=1;goto B6c3cd9;
case 0x6c3cdb:goto L6c3cdb;
case 0x6c3cde:c.instructions+=1;goto B6c3cde;
case 0x6c3ce4:goto L6c3ce4;
case 0x6c3ce7:c.instructions+=1;goto B6c3ce7;
case 0x6c3ced:goto L6c3ced;
case 0x6c3cf0:c.instructions+=1;goto B6c3cf0;
case 0x6c3cf2:goto L6c3cf2;
case 0x6c3cf4:c.instructions+=2;goto B6c3cf4;
case 0x6c3cf5:c.instructions+=1;goto B6c3cf5;
case 0x6c3cfa:goto L6c3cfa;
case 0x6c3cfc:c.instructions+=1;goto B6c3cfc;
case 0x6c3d01:goto L6c3d01;
case 0x6c3d03:c.instructions+=1;goto B6c3d03;
case 0x6c3d05:goto L6c3d05;
case 0x6c3d07:c.instructions+=1;goto B6c3d07;
case 0x6c3d0c:goto L6c3d0c;
case 0x6c3d0e:goto L6c3d0e;
case 0x6c3d10:goto L6c3d10;
case 0x6c3d12:c.instructions+=2;goto B6c3d12;
case 0x6c3d15:c.instructions+=1;goto B6c3d15;
case 0x6c3d17:goto L6c3d17;
case 0x6c3d1c:c.instructions+=1;goto B6c3d1c;
case 0x6c3d21:goto L6c3d21;
case 0x6c3d22:c.instructions+=4;goto B6c3d22;
case 0x6c3d23:c.instructions+=3;goto B6c3d23;
case 0x6c3d26:c.instructions+=2;goto B6c3d26;
case 0x6c3d2c:c.instructions+=1;goto B6c3d2c;
case 0x6c3d32:goto L6c3d32;
case 0x6c3d33:c.instructions+=3;goto B6c3d33;
case 0x6c3d35:c.instructions+=2;goto B6c3d35;
case 0x6c3d36:c.instructions+=1;goto B6c3d36;
case 0x6c3d3b:goto L6c3d3b;
case 0x6c3d3d:c.instructions+=2;goto B6c3d3d;
case 0x6c3d40:c.instructions+=1;goto B6c3d40;
case 0x6c3d46:goto L6c3d46;
case 0x6c3d4c:c.instructions+=2;goto B6c3d4c;
case 0x6c3d4f:c.instructions+=1;goto B6c3d4f;
case 0x6c3d54:goto L6c3d54;
case 0x6c3d56:c.instructions+=2;goto B6c3d56;
case 0x6c3d59:c.instructions+=1;goto B6c3d59;
case 0x6c3d5f:goto L6c3d5f;
case 0x6c3d65:c.instructions+=6;goto B6c3d65;
case 0x6c3d68:c.instructions+=5;goto B6c3d68;
case 0x6c3d6b:c.instructions+=4;goto B6c3d6b;
case 0x6c3d6e:c.instructions+=3;goto B6c3d6e;
case 0x6c3d71:c.instructions+=2;goto B6c3d71;
case 0x6c3d73:c.instructions+=1;goto B6c3d73;
case 0x6c3d76:goto L6c3d76;
case 0x6c3d78:goto L6c3d78;
case 0x6c3d7a:c.instructions+=1;goto B6c3d7a;
case 0x6c3d7d:goto L6c3d7d;
case 0x6c3d7f:goto L6c3d7f;
case 0x6c3d82:c.instructions+=5;goto B6c3d82;
case 0x6c3d84:c.instructions+=4;goto B6c3d84;
case 0x6c3d8a:c.instructions+=3;goto B6c3d8a;
case 0x6c3d8d:c.instructions+=2;goto B6c3d8d;
case 0x6c3d8f:c.instructions+=1;goto B6c3d8f;
case 0x6c3d92:goto L6c3d92;
case 0x6c3d94:goto L6c3d94;
case 0x6c3d96:c.instructions+=1;goto B6c3d96;
case 0x6c3d99:goto L6c3d99;
case 0x6c3d9b:goto L6c3d9b;
case 0x6c3d9e:c.instructions+=6;goto B6c3d9e;
case 0x6c3da1:c.instructions+=5;goto B6c3da1;
case 0x6c3da7:c.instructions+=4;goto B6c3da7;
case 0x6c3daa:c.instructions+=3;goto B6c3daa;
case 0x6c3dac:c.instructions+=2;goto B6c3dac;
case 0x6c3db0:c.instructions+=1;goto B6c3db0;
case 0x6c3db2:goto L6c3db2;
case 0x6c3db4:c.instructions+=1;goto B6c3db4;
case 0x6c3db6:goto L6c3db6;
case 0x6c3db9:goto L6c3db9;
case 0x6c3dbb:c.instructions+=1;goto B6c3dbb;
case 0x6c3dbe:goto L6c3dbe;
case 0x6c3dc0:goto L6c3dc0;
case 0x6c3dc2:c.instructions+=1;goto B6c3dc2;
case 0x6c3dc5:goto L6c3dc5;
case 0x6c3dc7:goto L6c3dc7;
case 0x6c3dcd:c.instructions+=4;goto B6c3dcd;
case 0x6c3dd0:c.instructions+=3;goto B6c3dd0;
case 0x6c3dd3:c.instructions+=2;goto B6c3dd3;
case 0x6c3dd6:c.instructions+=1;goto B6c3dd6;
case 0x6c3ddb:goto L6c3ddb;
case 0x6c3dde:c.instructions+=1;goto B6c3dde;
case 0x6c3de3:goto L6c3de3;
case 0x6c3de5:c.instructions+=16;goto B6c3de5;
case 0x6c3de8:c.instructions+=15;goto B6c3de8;
case 0x6c3dea:c.instructions+=14;goto B6c3dea;
case 0x6c3ded:c.instructions+=13;goto B6c3ded;
case 0x6c3dee:c.instructions+=12;goto B6c3dee;
case 0x6c3def:c.instructions+=11;goto B6c3def;
case 0x6c3df2:c.instructions+=10;goto B6c3df2;
case 0x6c3df3:c.instructions+=9;goto B6c3df3;
case 0x6c3df9:c.instructions+=8;goto B6c3df9;
case 0x6c3dfa:c.instructions+=7;goto B6c3dfa;
case 0x6c3dfd:c.instructions+=6;goto B6c3dfd;
case 0x6c3dfe:c.instructions+=5;goto B6c3dfe;
case 0x6c3e04:c.instructions+=4;goto B6c3e04;
case 0x6c3e05:c.instructions+=3;goto B6c3e05;
case 0x6c3e0a:c.instructions+=2;goto B6c3e0a;
case 0x6c3e10:c.instructions+=1;goto B6c3e10;
case 0x6c3e15:goto L6c3e15;
case 0x6c3e17:c.instructions+=2;goto B6c3e17;
case 0x6c3e1a:c.instructions+=1;goto B6c3e1a;
case 0x6c3e20:goto L6c3e20;
case 0x6c3e22:c.instructions+=2;goto B6c3e22;
case 0x6c3e25:c.instructions+=1;goto B6c3e25;
case 0x6c3e28:goto L6c3e28;
case 0x6c3e2c:goto L6c3e2c;
case 0x6c3e2e:c.instructions+=3;goto B6c3e2e;
case 0x6c3e30:c.instructions+=2;goto B6c3e30;
case 0x6c3e33:c.instructions+=1;goto B6c3e33;
case 0x6c3e39:goto L6c3e39;
case 0x6c3e3c:goto L6c3e3c;
case 0x6c3e3f:c.instructions+=32;goto B6c3e3f;
case 0x6c3e42:c.instructions+=31;goto B6c3e42;
case 0x6c3e45:c.instructions+=30;goto B6c3e45;
case 0x6c3e4c:c.instructions+=29;goto B6c3e4c;
case 0x6c3e4f:c.instructions+=28;goto B6c3e4f;
case 0x6c3e51:c.instructions+=27;goto B6c3e51;
case 0x6c3e53:c.instructions+=26;goto B6c3e53;
case 0x6c3e5a:c.instructions+=25;goto B6c3e5a;
case 0x6c3e5d:c.instructions+=24;goto B6c3e5d;
case 0x6c3e60:c.instructions+=23;goto B6c3e60;
case 0x6c3e63:c.instructions+=22;goto B6c3e63;
case 0x6c3e65:c.instructions+=21;goto B6c3e65;
case 0x6c3e6c:c.instructions+=20;goto B6c3e6c;
case 0x6c3e6f:c.instructions+=19;goto B6c3e6f;
case 0x6c3e72:c.instructions+=18;goto B6c3e72;
case 0x6c3e75:c.instructions+=17;goto B6c3e75;
case 0x6c3e7c:c.instructions+=16;goto B6c3e7c;
case 0x6c3e7f:c.instructions+=15;goto B6c3e7f;
case 0x6c3e82:c.instructions+=14;goto B6c3e82;
case 0x6c3e85:c.instructions+=13;goto B6c3e85;
case 0x6c3e88:c.instructions+=12;goto B6c3e88;
case 0x6c3e8b:c.instructions+=11;goto B6c3e8b;
case 0x6c3e8e:c.instructions+=10;goto B6c3e8e;
case 0x6c3e91:c.instructions+=9;goto B6c3e91;
case 0x6c3e94:c.instructions+=8;goto B6c3e94;
case 0x6c3e97:c.instructions+=7;goto B6c3e97;
case 0x6c3e9a:c.instructions+=6;goto B6c3e9a;
case 0x6c3e9d:c.instructions+=5;goto B6c3e9d;
case 0x6c3ea0:c.instructions+=4;goto B6c3ea0;
case 0x6c3ea3:c.instructions+=3;goto B6c3ea3;
case 0x6c3ea5:c.instructions+=2;goto B6c3ea5;
case 0x6c3ea8:c.instructions+=1;goto B6c3ea8;
case 0x6c3eaa:goto L6c3eaa;
case 0x6c3ead:c.instructions+=3;goto B6c3ead;
case 0x6c3eb0:c.instructions+=2;goto B6c3eb0;
case 0x6c3eb2:c.instructions+=1;goto B6c3eb2;
case 0x6c3eb4:goto L6c3eb4;
case 0x6c3eb8:c.instructions+=1;goto B6c3eb8;
case 0x6c3eba:goto L6c3eba;
case 0x6c3ebd:c.instructions+=1;goto B6c3ebd;
case 0x6c3ebf:goto L6c3ebf;
case 0x6c3ec2:c.instructions+=5;goto B6c3ec2;
case 0x6c3ec5:c.instructions+=4;goto B6c3ec5;
case 0x6c3ec8:c.instructions+=3;goto B6c3ec8;
case 0x6c3ece:c.instructions+=2;goto B6c3ece;
case 0x6c3ed1:c.instructions+=1;goto B6c3ed1;
case 0x6c3ed3:goto L6c3ed3;
case 0x6c3ed6:c.instructions+=2;goto B6c3ed6;
case 0x6c3ed9:c.instructions+=1;goto B6c3ed9;
case 0x6c3edb:goto L6c3edb;
case 0x6c3edd:c.instructions+=2;goto B6c3edd;
case 0x6c3ede:c.instructions+=1;goto B6c3ede;
case 0x6c3ee0:goto L6c3ee0;
case 0x6c3ee3:c.instructions+=1;goto B6c3ee3;
case 0x6c3ee5:goto L6c3ee5;
case 0x6c3ee8:c.instructions+=4;goto B6c3ee8;
case 0x6c3eeb:c.instructions+=3;goto B6c3eeb;
case 0x6c3eee:c.instructions+=2;goto B6c3eee;
case 0x6c3ef1:c.instructions+=1;goto B6c3ef1;
case 0x6c3ef3:goto L6c3ef3;
case 0x6c3ef6:c.instructions+=3;goto B6c3ef6;
case 0x6c3ef9:c.instructions+=2;goto B6c3ef9;
case 0x6c3efc:c.instructions+=1;goto B6c3efc;
case 0x6c3efe:goto L6c3efe;
case 0x6c3f01:c.instructions+=1;goto B6c3f01;
case 0x6c3f03:goto L6c3f03;
case 0x6c3f05:c.instructions+=1;goto B6c3f05;
case 0x6c3f07:goto L6c3f07;
case 0x6c3f0a:c.instructions+=4;goto B6c3f0a;
case 0x6c3f0d:c.instructions+=3;goto B6c3f0d;
case 0x6c3f13:c.instructions+=2;goto B6c3f13;
case 0x6c3f16:c.instructions+=1;goto B6c3f16;
case 0x6c3f18:goto L6c3f18;
case 0x6c3f1b:c.instructions+=3;goto B6c3f1b;
case 0x6c3f20:c.instructions+=2;goto B6c3f20;
case 0x6c3f23:c.instructions+=1;goto B6c3f23;
case 0x6c3f25:goto L6c3f25;
case 0x6c3f28:c.instructions+=2;goto B6c3f28;
case 0x6c3f2b:c.instructions+=1;goto B6c3f2b;
case 0x6c3f2d:goto L6c3f2d;
case 0x6c3f30:c.instructions+=7;goto B6c3f30;
case 0x6c3f33:c.instructions+=6;goto B6c3f33;
case 0x6c3f35:c.instructions+=5;goto B6c3f35;
case 0x6c3f38:c.instructions+=4;goto B6c3f38;
case 0x6c3f3a:c.instructions+=3;goto B6c3f3a;
case 0x6c3f3c:c.instructions+=2;goto B6c3f3c;
case 0x6c3f3f:c.instructions+=1;goto B6c3f3f;
case 0x6c3f41:goto L6c3f41;
case 0x6c3f43:c.instructions+=3;goto B6c3f43;
case 0x6c3f44:c.instructions+=2;goto B6c3f44;
case 0x6c3f46:c.instructions+=1;goto B6c3f46;
case 0x6c3f48:goto L6c3f48;
case 0x6c3f4a:goto L6c3f4a;
case 0x6c3f4c:goto L6c3f4c;
case 0x6c3f4f:c.instructions+=2;goto B6c3f4f;
case 0x6c3f51:c.instructions+=1;goto B6c3f51;
case 0x6c3f53:goto L6c3f53;
case 0x6c3f56:c.instructions+=1;goto B6c3f56;
case 0x6c3f58:goto L6c3f58;
case 0x6c3f5b:c.instructions+=1;goto B6c3f5b;
case 0x6c3f5d:goto L6c3f5d;
case 0x6c3f5f:goto L6c3f5f;
case 0x6c3f61:c.instructions+=1;goto B6c3f61;
case 0x6c3f63:goto L6c3f63;
case 0x6c3f64:c.instructions+=3;goto B6c3f64;
case 0x6c3f66:c.instructions+=2;goto B6c3f66;
case 0x6c3f69:c.instructions+=1;goto B6c3f69;
case 0x6c3f6f:goto L6c3f6f;
case 0x6c3f71:c.instructions+=1;goto B6c3f71;
case 0x6c3f73:goto L6c3f73;
case 0x6c3f77:c.instructions+=2;goto B6c3f77;
case 0x6c3f7b:c.instructions+=1;goto B6c3f7b;
case 0x6c3f81:goto L6c3f81;
case 0x6c3f84:c.instructions+=2;goto B6c3f84;
case 0x6c3f88:c.instructions+=1;goto B6c3f88;
case 0x6c3f8e:goto L6c3f8e;
case 0x6c3f95:goto L6c3f95;
case 0x6c3f98:c.instructions+=2;goto B6c3f98;
case 0x6c3f9a:c.instructions+=1;goto B6c3f9a;
case 0x6c3f9c:goto L6c3f9c;
case 0x6c3f9e:c.instructions+=1;goto B6c3f9e;
case 0x6c3fa3:goto L6c3fa3;
case 0x6c3fa6:goto L6c3fa6;
case 0x6c3fa7:c.instructions+=4;goto B6c3fa7;
case 0x6c3fa8:c.instructions+=3;goto B6c3fa8;
case 0x6c3fa9:c.instructions+=2;goto B6c3fa9;
case 0x6c3faa:c.instructions+=1;goto B6c3faa;
case 0x6c3fad:goto L6c3fad;
case 0x6c3faf:c.instructions+=1;goto B6c3faf;
case 0x6c3fb4:goto L6c3fb4;
case 0x6c3fb6:c.instructions+=2;goto B6c3fb6;
case 0x6c3fb8:c.instructions+=1;goto B6c3fb8;
case 0x6c3fba:goto L6c3fba;
case 0x6c3fbc:c.instructions+=1;goto B6c3fbc;
case 0x6c3fc1:goto L6c3fc1;
case 0x6c3fc3:c.instructions+=1;goto B6c3fc3;
case 0x6c3fc5:goto L6c3fc5;
case 0x6c3fc7:goto L6c3fc7;
case 0x6c3fc9:c.instructions+=2;goto B6c3fc9;
case 0x6c3fcc:c.instructions+=1;goto B6c3fcc;
case 0x6c3fce:goto L6c3fce;
case 0x6c3fd5:c.instructions+=1;goto B6c3fd5;
case 0x6c3fd7:goto L6c3fd7;
case 0x6c3fda:c.instructions+=1;goto B6c3fda;
case 0x6c3fe0:goto L6c3fe0;
case 0x6c3fe4:c.instructions+=1;goto B6c3fe4;
case 0x6c3fea:goto L6c3fea;
case 0x6c3fed:c.instructions+=1;goto B6c3fed;
case 0x6c3fef:goto L6c3fef;
case 0x6c3ff2:c.instructions+=7;goto B6c3ff2;
case 0x6c3ff3:c.instructions+=6;goto B6c3ff3;
case 0x6c3ff4:c.instructions+=5;goto B6c3ff4;
case 0x6c3ff7:c.instructions+=4;goto B6c3ff7;
case 0x6c3ff8:c.instructions+=3;goto B6c3ff8;
case 0x6c3ffa:c.instructions+=2;goto B6c3ffa;
case 0x6c3fff:c.instructions+=1;goto B6c3fff;
default:missing_instruction(c.pc);}
B6c3001:L6c3001:{c.instructions+=1;NFSU2_TR(0x6c3001);
if(r1(R+512)){TAIL_STATIC(0x6c2f5cu,6c2);}
}
B6c3007:L6c3007:{c.instructions+=2;NFSU2_TR(0x6c3007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c300a:{NFSU2_TR(0x6c300a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c300d:L6c300d:{c.instructions+=2;NFSU2_TR(0x6c300d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3013:{NFSU2_TR(0x6c3013);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c3030;}}
}
B6c3015:L6c3015:{c.instructions+=2;NFSU2_TR(0x6c3015);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3017:{NFSU2_TR(0x6c3017);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c303e;}}
}
B6c3019:L6c3019:{c.instructions+=6;NFSU2_TR(0x6c3019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c301c:{NFSU2_TR(0x6c301c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c3020:{NFSU2_TR(0x6c3020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c3022:{NFSU2_TR(0x6c3022);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6c3028:{NFSU2_TR(0x6c3028);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c302e:{NFSU2_TR(0x6c302e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c303e;}}
}
B6c3030:L6c3030:{c.instructions+=6;NFSU2_TR(0x6c3030);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3033:{NFSU2_TR(0x6c3033);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c3036:{NFSU2_TR(0x6c3036);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3039:{NFSU2_TR(0x6c3039);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c303b:{NFSU2_TR(0x6c303b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6c303c:{NFSU2_TR(0x6c303c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c300du);}goto L6c300d;}
}
B6c303e:L6c303e:{c.instructions+=10;NFSU2_TR(0x6c303e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3041:{NFSU2_TR(0x6c3041);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c3044:{NFSU2_TR(0x6c3044);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c304a:{NFSU2_TR(0x6c304a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3051:{NFSU2_TR(0x6c3051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3054:{NFSU2_TR(0x6c3054);
__builtin_memmove((R+0),(R+28),4);
}
B6c3056:{NFSU2_TR(0x6c3056);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c3059:{NFSU2_TR(0x6c3059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c305c:{NFSU2_TR(0x6c305c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c3060:{NFSU2_TR(0x6c3060);
if(r1(R+512)){TAIL_STATIC(0x6c2ec0u,6c2);}
}
B6c3066:L6c3066:{c.instructions+=3;NFSU2_TR(0x6c3066);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3068:{NFSU2_TR(0x6c3068);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c306b:{NFSU2_TR(0x6c306b);
__builtin_memmove((R+0),(R+518),1);
}
B6c306e:L6c306e:{c.instructions+=5;NFSU2_TR(0x6c306e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c306f:{NFSU2_TR(0x6c306f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3070:{NFSU2_TR(0x6c3070);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3071:{NFSU2_TR(0x6c3071);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c3072:{NFSU2_TR(0x6c3072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c3073:L6c3073:{c.instructions+=2;NFSU2_TR(0x6c3073);
w4(R+0,u32(0x8007000eull));
}
B6c3078:{NFSU2_TR(0x6c3078);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c306eu);}goto L6c306e;}
}
B6c307a:L6c307a:{c.instructions+=18;NFSU2_TR(0x6c307a);
__builtin_memmove((R+28),(R+28),4);
}
B6c307c:{NFSU2_TR(0x6c307c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c307d:{NFSU2_TR(0x6c307d);
__builtin_memmove((R+20),(R+16),4);
}
B6c307f:{NFSU2_TR(0x6c307f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6c3082:{NFSU2_TR(0x6c3082);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3083:{NFSU2_TR(0x6c3083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3084:{NFSU2_TR(0x6c3084);
__builtin_memmove((R+24),(R+4),4);
}
B6c3086:{NFSU2_TR(0x6c3086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c308c:{NFSU2_TR(0x6c308c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c308f:{NFSU2_TR(0x6c308f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3092:{NFSU2_TR(0x6c3092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c3094:{NFSU2_TR(0x6c3094);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3097:{NFSU2_TR(0x6c3097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c309a:{NFSU2_TR(0x6c309a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c309b:{NFSU2_TR(0x6c309b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c309e:{NFSU2_TR(0x6c309e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c30a1:{NFSU2_TR(0x6c30a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c30a5:{NFSU2_TR(0x6c30a5);
if(r1(R+518)){{goto L6c30bd;}}
}
B6c30a7:L6c30a7:{c.instructions+=2;NFSU2_TR(0x6c30a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c30ab:{NFSU2_TR(0x6c30ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c30bd;}}
}
B6c30ad:L6c30ad:{c.instructions+=4;NFSU2_TR(0x6c30ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c30b0:{NFSU2_TR(0x6c30b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c30b3:{NFSU2_TR(0x6c30b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c30b7:{NFSU2_TR(0x6c30b7);
if(r1(R+518)){{goto L6c3209;}}
}
B6c30bd:L6c30bd:{c.instructions+=3;NFSU2_TR(0x6c30bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c30c1:{NFSU2_TR(0x6c30c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c30c5:{NFSU2_TR(0x6c30c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c30e9;}}
}
B6c30c7:L6c30c7:{c.instructions+=2;NFSU2_TR(0x6c30c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c30cd:{NFSU2_TR(0x6c30cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c30d0:L6c30d0:{c.instructions+=3;NFSU2_TR(0x6c30d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c30d2:{NFSU2_TR(0x6c30d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c30d5:{NFSU2_TR(0x6c30d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c30e3;}}
}
B6c30d7:L6c30d7:{c.instructions+=3;NFSU2_TR(0x6c30d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c30da:{NFSU2_TR(0x6c30da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c30dd:{NFSU2_TR(0x6c30dd);
if(r1(R+512)){{goto L6c30e3;}}
}
B6c30df:L6c30df:{c.instructions+=2;NFSU2_TR(0x6c30df);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c30e0:{NFSU2_TR(0x6c30e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c30e3:L6c30e3:{c.instructions+=3;NFSU2_TR(0x6c30e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c30e6:{NFSU2_TR(0x6c30e6);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6c30e7:{NFSU2_TR(0x6c30e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c30d0u);}goto L6c30d0;}}
}
B6c30e9:L6c30e9:{c.instructions+=5;NFSU2_TR(0x6c30e9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c30eb:{NFSU2_TR(0x6c30eb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c30ed:{NFSU2_TR(0x6c30ed);
u8 U[4];
w4(U+0,u32(0x10000004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c30f2:{NFSU2_TR(0x6c30f2);
__builtin_memmove((R+4),(R+24),4);
}
B6c30f4:{NFSU2_TR(0x6c30f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c30f9ull));
TAIL_STATIC(0x699c99u,699);
}
B6c30f9:L6c30f9:{c.instructions+=2;NFSU2_TR(0x6c30f9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c30fc:{NFSU2_TR(0x6c30fc);
if(r1(R+518)){{goto L6c31e6;}}
}
B6c3102:L6c3102:{c.instructions+=6;NFSU2_TR(0x6c3102);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3105:{NFSU2_TR(0x6c3105);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3108:{NFSU2_TR(0x6c3108);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c310e:{NFSU2_TR(0x6c310e);
__builtin_memmove((R+4),(R+0),4);
}
B6c3110:{NFSU2_TR(0x6c3110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3113:{NFSU2_TR(0x6c3113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3118ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c3118:L6c3118:{c.instructions+=2;NFSU2_TR(0x6c3118);
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
B6c311a:{NFSU2_TR(0x6c311a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3215;}}
}
B6c3120:L6c3120:{c.instructions+=1;NFSU2_TR(0x6c3120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3124:L6c3124:{c.instructions+=10;NFSU2_TR(0x6c3124);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3127:{NFSU2_TR(0x6c3127);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c3129:{NFSU2_TR(0x6c3129);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c312a:{NFSU2_TR(0x6c312a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c312b:{NFSU2_TR(0x6c312b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c312e:{NFSU2_TR(0x6c312e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c312f:{NFSU2_TR(0x6c312f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c3132:{NFSU2_TR(0x6c3132);
__builtin_memmove((R+4),(R+24),4);
}
B6c3134:{NFSU2_TR(0x6c3134);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c313a:{NFSU2_TR(0x6c313a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c313full));
TAIL_STATIC(0x699c39u,699);
}
B6c313f:L6c313f:{c.instructions+=3;NFSU2_TR(0x6c313f);
__builtin_memmove((R+12),(R+0),4);
}
B6c3141:{NFSU2_TR(0x6c3141);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3144:{NFSU2_TR(0x6c3144);
if(r1(R+518)){{goto L6c31e6;}}
}
B6c314a:L6c314a:{c.instructions+=8;NFSU2_TR(0x6c314a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3150:{NFSU2_TR(0x6c3150);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3153:{NFSU2_TR(0x6c3153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3156:{NFSU2_TR(0x6c3156);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6c3159:{NFSU2_TR(0x6c3159);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c315c:{NFSU2_TR(0x6c315c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c315f:{NFSU2_TR(0x6c315f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3162:{NFSU2_TR(0x6c3162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3167ull));
TAIL_STATIC(0x699821u,699);
}
B6c3167:L6c3167:{c.instructions+=2;NFSU2_TR(0x6c3167);
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
B6c3169:{NFSU2_TR(0x6c3169);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3215;}}
}
B6c316f:L6c316f:{c.instructions+=30;NFSU2_TR(0x6c316f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3175:{NFSU2_TR(0x6c3175);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3178:{NFSU2_TR(0x6c3178);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c317b:{NFSU2_TR(0x6c317b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c317e:{NFSU2_TR(0x6c317e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3181:{NFSU2_TR(0x6c3181);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3184:{NFSU2_TR(0x6c3184);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3187:{NFSU2_TR(0x6c3187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c318a:{NFSU2_TR(0x6c318a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3190:{NFSU2_TR(0x6c3190);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3193:{NFSU2_TR(0x6c3193);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3196:{NFSU2_TR(0x6c3196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3199:{NFSU2_TR(0x6c3199);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c319c:{NFSU2_TR(0x6c319c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c319f:{NFSU2_TR(0x6c319f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c31a2:{NFSU2_TR(0x6c31a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c31a5:{NFSU2_TR(0x6c31a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6c31a9:{NFSU2_TR(0x6c31a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c31ac:{NFSU2_TR(0x6c31ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c31b2:{NFSU2_TR(0x6c31b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c31b5:{NFSU2_TR(0x6c31b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c31b8:{NFSU2_TR(0x6c31b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c31bb:{NFSU2_TR(0x6c31bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c31be:{NFSU2_TR(0x6c31be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c31c1:{NFSU2_TR(0x6c31c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c31c7:{NFSU2_TR(0x6c31c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c31ca:{NFSU2_TR(0x6c31ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c31cd:{NFSU2_TR(0x6c31cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c31d0:{NFSU2_TR(0x6c31d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c31d3:{NFSU2_TR(0x6c31d3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3124u);}goto L6c3124;}}
}
B6c31d9:L6c31d9:{c.instructions+=5;NFSU2_TR(0x6c31d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c31dc:{NFSU2_TR(0x6c31dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6c31dd:{NFSU2_TR(0x6c31dd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6c31de:{NFSU2_TR(0x6c31de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c31e4:{NFSU2_TR(0x6c31e4);
{goto L6c31f9;}
}
B6c31e6:L6c31e6:{c.instructions+=2;NFSU2_TR(0x6c31e6);
w4(R+0,u32(0x8007000eull));
}
B6c31eb:{NFSU2_TR(0x6c31eb);
{goto L6c3215;}
}
B6c31ed:L6c31ed:{c.instructions+=5;NFSU2_TR(0x6c31ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c31f0:{NFSU2_TR(0x6c31f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c31f3:{NFSU2_TR(0x6c31f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c31f5:{NFSU2_TR(0x6c31f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c31f8:{NFSU2_TR(0x6c31f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6c31f9:L6c31f9:{c.instructions+=2;NFSU2_TR(0x6c31f9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c31fb:{NFSU2_TR(0x6c31fb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c31edu);}goto L6c31ed;}}
}
B6c31fd:L6c31fd:{c.instructions+=4;NFSU2_TR(0x6c31fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c31ff:{NFSU2_TR(0x6c31ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3202:{NFSU2_TR(0x6c3202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3205:{NFSU2_TR(0x6c3205);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c3209:L6c3209:{c.instructions+=2;NFSU2_TR(0x6c3209);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3213:{NFSU2_TR(0x6c3213);
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
B6c3215:L6c3215:{c.instructions+=5;NFSU2_TR(0x6c3215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3216:{NFSU2_TR(0x6c3216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3217:{NFSU2_TR(0x6c3217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c3218:{NFSU2_TR(0x6c3218);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c3219:{NFSU2_TR(0x6c3219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c321a:L6c321a:{c.instructions+=14;NFSU2_TR(0x6c321a);
__builtin_memmove((R+28),(R+28),4);
}
B6c321c:{NFSU2_TR(0x6c321c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c321d:{NFSU2_TR(0x6c321d);
__builtin_memmove((R+20),(R+16),4);
}
B6c321f:{NFSU2_TR(0x6c321f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3222:{NFSU2_TR(0x6c3222);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3225:{NFSU2_TR(0x6c3225);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3226:{NFSU2_TR(0x6c3226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c3228:{NFSU2_TR(0x6c3228);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c322e:{NFSU2_TR(0x6c322e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c3230:{NFSU2_TR(0x6c3230);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c3230);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c3230);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6c3232:{NFSU2_TR(0x6c3232);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3233:{NFSU2_TR(0x6c3233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3236:{NFSU2_TR(0x6c3236);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3238:{NFSU2_TR(0x6c3238);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3267;}}
}
B6c323a:L6c323a:{c.instructions+=7;NFSU2_TR(0x6c323a);
__builtin_memmove((R+8),(R+24),4);
}
B6c323c:{NFSU2_TR(0x6c323c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c323f:{NFSU2_TR(0x6c323f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3242:{NFSU2_TR(0x6c3242);
__builtin_memmove((R+8),(R+28),4);
}
B6c3244:{NFSU2_TR(0x6c3244);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c3247:{NFSU2_TR(0x6c3247);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c324a:{NFSU2_TR(0x6c324a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c324b:L6c324b:{c.instructions+=10;NFSU2_TR(0x6c324b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c324e:{NFSU2_TR(0x6c324e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6c3250:{NFSU2_TR(0x6c3250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c3253:{NFSU2_TR(0x6c3253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c3255:{NFSU2_TR(0x6c3255);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c3257:{NFSU2_TR(0x6c3257);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c325a:{NFSU2_TR(0x6c325a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c325e:{NFSU2_TR(0x6c325e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6c3261:{NFSU2_TR(0x6c3261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3264:{NFSU2_TR(0x6c3264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c324bu);}goto L6c324b;}}
}
B6c3266:L6c3266:{c.instructions+=1;NFSU2_TR(0x6c3266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c3267:L6c3267:{c.instructions+=13;NFSU2_TR(0x6c3267);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c326a:{NFSU2_TR(0x6c326a);
__builtin_memmove((R+8),(R+28),4);
}
B6c326c:{NFSU2_TR(0x6c326c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c326f:{NFSU2_TR(0x6c326f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3271:{NFSU2_TR(0x6c3271);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3274:{NFSU2_TR(0x6c3274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c3276:{NFSU2_TR(0x6c3276);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6c3278:{NFSU2_TR(0x6c3278);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c327b:{NFSU2_TR(0x6c327b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c327c:{NFSU2_TR(0x6c327c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c3280:{NFSU2_TR(0x6c3280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3281:{NFSU2_TR(0x6c3281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6c3282:{NFSU2_TR(0x6c3282);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c3285:L6c3285:{c.instructions+=13;NFSU2_TR(0x6c3285);
__builtin_memmove((R+28),(R+28),4);
}
B6c3287:{NFSU2_TR(0x6c3287);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3288:{NFSU2_TR(0x6c3288);
__builtin_memmove((R+20),(R+16),4);
}
B6c328a:{NFSU2_TR(0x6c328a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c328b:{NFSU2_TR(0x6c328b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c328c:{NFSU2_TR(0x6c328c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c328d:{NFSU2_TR(0x6c328d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c328e:{NFSU2_TR(0x6c328e);
__builtin_memmove((R+28),(R+4),4);
}
B6c3290:{NFSU2_TR(0x6c3290);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3296:{NFSU2_TR(0x6c3296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c3298:{NFSU2_TR(0x6c3298);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c329e:{NFSU2_TR(0x6c329e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c32a1:{NFSU2_TR(0x6c32a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3330;}}
}
B6c32a7:L6c32a7:{c.instructions+=2;NFSU2_TR(0x6c32a7);
__builtin_memmove((R+4),(R+0),4);
}
B6c32a9:{NFSU2_TR(0x6c32a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c32aeull));
TAIL_STATIC(0x698f0fu,698);
}
B6c32ae:L6c32ae:{c.instructions+=2;NFSU2_TR(0x6c32ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c32b0:{NFSU2_TR(0x6c32b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3330;}}
}
B6c32b2:L6c32b2:{c.instructions+=2;NFSU2_TR(0x6c32b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c32b8:{NFSU2_TR(0x6c32b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c32bdull));
TAIL_STATIC(0x699107u,699);
}
B6c32bd:L6c32bd:{c.instructions+=2;NFSU2_TR(0x6c32bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c32bf:{NFSU2_TR(0x6c32bf);
if(r1(R+518)){{goto L6c32d0;}}
}
B6c32c1:L6c32c1:{c.instructions+=2;NFSU2_TR(0x6c32c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c32c7:{NFSU2_TR(0x6c32c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c32ccull));
TAIL_STATIC(0x698f9du,698);
}
B6c32cc:L6c32cc:{c.instructions+=2;NFSU2_TR(0x6c32cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c32ce:{NFSU2_TR(0x6c32ce);
if(r1(R+518)){{goto L6c3330;}}
}
B6c32d0:L6c32d0:{c.instructions+=2;NFSU2_TR(0x6c32d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c32d3:{NFSU2_TR(0x6c32d3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c3330;}}
}
B6c32d5:L6c32d5:{c.instructions+=2;NFSU2_TR(0x6c32d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c32d7:{NFSU2_TR(0x6c32d7);
if(r1(R+518)){{goto L6c3330;}}
}
B6c32d9:L6c32d9:{c.instructions+=3;NFSU2_TR(0x6c32d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c32dd:{NFSU2_TR(0x6c32dd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c32df:{NFSU2_TR(0x6c32df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c332c;}}
}
B6c32e1:L6c32e1:{c.instructions+=1;NFSU2_TR(0x6c32e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c32e2:L6c32e2:{c.instructions+=6;NFSU2_TR(0x6c32e2);
__builtin_memmove((R+0),(R+24),4);
}
B6c32e4:{NFSU2_TR(0x6c32e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6c32e7:{NFSU2_TR(0x6c32e7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c32e9:{NFSU2_TR(0x6c32e9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c32ea:{NFSU2_TR(0x6c32ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c32ed:{NFSU2_TR(0x6c32ed);
if(r1(R+518)){{goto L6c3323;}}
}
B6c32ef:L6c32ef:{c.instructions+=11;NFSU2_TR(0x6c32ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c32f5:{NFSU2_TR(0x6c32f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c32f8:{NFSU2_TR(0x6c32f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c32fb:{NFSU2_TR(0x6c32fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c32fe:{NFSU2_TR(0x6c32fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3301:{NFSU2_TR(0x6c3301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c3303:{NFSU2_TR(0x6c3303);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3306:{NFSU2_TR(0x6c3306);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3309:{NFSU2_TR(0x6c3309);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c330c:{NFSU2_TR(0x6c330c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c330f:{NFSU2_TR(0x6c330f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c331d;}}
}
B6c3311:L6c3311:{c.instructions+=3;NFSU2_TR(0x6c3311);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3312:{NFSU2_TR(0x6c3312);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c3318:{NFSU2_TR(0x6c3318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c331dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c321au);}goto L6c321a;}
}
B6c331d:L6c331d:{c.instructions+=3;NFSU2_TR(0x6c331d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c331e:{NFSU2_TR(0x6c331e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6c3321:{NFSU2_TR(0x6c3321);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c32efu);}goto L6c32ef;}}
}
B6c3323:L6c3323:{c.instructions+=3;NFSU2_TR(0x6c3323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3326:{NFSU2_TR(0x6c3326);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c3329:{NFSU2_TR(0x6c3329);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c32e2u);}goto L6c32e2;}}
}
B6c332b:L6c332b:{c.instructions+=1;NFSU2_TR(0x6c332b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c332c:L6c332c:{c.instructions+=2;NFSU2_TR(0x6c332c);
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
B6c332e:{NFSU2_TR(0x6c332e);
{goto L6c3333;}
}
B6c3330:L6c3330:{c.instructions+=2;NFSU2_TR(0x6c3330);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3332:{NFSU2_TR(0x6c3332);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3333:L6c3333:{c.instructions+=4;NFSU2_TR(0x6c3333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3334:{NFSU2_TR(0x6c3334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3335:{NFSU2_TR(0x6c3335);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c3336:{NFSU2_TR(0x6c3336);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c3337:L6c3337:{c.instructions+=13;NFSU2_TR(0x6c3337);
__builtin_memmove((R+28),(R+28),4);
}
B6c3339:{NFSU2_TR(0x6c3339);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c333a:{NFSU2_TR(0x6c333a);
__builtin_memmove((R+20),(R+16),4);
}
B6c333c:{NFSU2_TR(0x6c333c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B6c333f:{NFSU2_TR(0x6c333f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3340:{NFSU2_TR(0x6c3340);
__builtin_memmove((R+12),(R+4),4);
}
B6c3342:{NFSU2_TR(0x6c3342);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3348:{NFSU2_TR(0x6c3348);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3349:{NFSU2_TR(0x6c3349);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c334a:{NFSU2_TR(0x6c334a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c334c:{NFSU2_TR(0x6c334c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6c3352:{NFSU2_TR(0x6c3352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3355:{NFSU2_TR(0x6c3355);
if(r1(R+518)){{goto L6c3635;}}
}
B6c335b:L6c335b:{c.instructions+=3;NFSU2_TR(0x6c335b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c335e:{NFSU2_TR(0x6c335e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3360:{NFSU2_TR(0x6c3360);
if(r1(R+518)){{goto L6c3635;}}
}
B6c3366:L6c3366:{c.instructions+=2;NFSU2_TR(0x6c3366);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c336a:{NFSU2_TR(0x6c336a);
if(r1(R+518)){{goto L6c3635;}}
}
B6c3370:L6c3370:{c.instructions+=6;NFSU2_TR(0x6c3370);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c3372:{NFSU2_TR(0x6c3372);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c3372);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6c3372);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6c3374:{NFSU2_TR(0x6c3374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3378:{NFSU2_TR(0x6c3378);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c337a:{NFSU2_TR(0x6c337a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c337d:{NFSU2_TR(0x6c337d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3635;}}
}
B6c3383:L6c3383:{c.instructions+=4;NFSU2_TR(0x6c3383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3386:{NFSU2_TR(0x6c3386);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3389:{NFSU2_TR(0x6c3389);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c338c:{NFSU2_TR(0x6c338c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c338f:L6c338f:{c.instructions+=5;NFSU2_TR(0x6c338f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c3391:{NFSU2_TR(0x6c3391);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3394:{NFSU2_TR(0x6c3394);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3397:{NFSU2_TR(0x6c3397);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c339a:{NFSU2_TR(0x6c339a);
if(r1(R+518)){{goto L6c33bb;}}
}
B6c339c:L6c339c:{c.instructions+=7;NFSU2_TR(0x6c339c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c339f:{NFSU2_TR(0x6c339f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c33a2:{NFSU2_TR(0x6c33a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c33a5:{NFSU2_TR(0x6c33a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c33a8:{NFSU2_TR(0x6c33a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c33ac:{NFSU2_TR(0x6c33ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c33af:{NFSU2_TR(0x6c33af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c33bb;}}
}
B6c33b1:L6c33b1:{c.instructions+=3;NFSU2_TR(0x6c33b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c33b4:{NFSU2_TR(0x6c33b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c33b7:{NFSU2_TR(0x6c33b7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c33bb:L6c33bb:{c.instructions+=5;NFSU2_TR(0x6c33bb);
__builtin_memmove((R+8),(R+28),4);
}
B6c33bd:{NFSU2_TR(0x6c33bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6c33c0:{NFSU2_TR(0x6c33c0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6c33c2:{NFSU2_TR(0x6c33c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c33c5:{NFSU2_TR(0x6c33c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c338fu);}goto L6c338f;}}
}
B6c33c7:L6c33c7:{c.instructions+=3;NFSU2_TR(0x6c33c7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c33c9:{NFSU2_TR(0x6c33c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c33cc:{NFSU2_TR(0x6c33cc);
if(r1(R+518)){{goto L6c3635;}}
}
B6c33d2:L6c33d2:{c.instructions+=2;NFSU2_TR(0x6c33d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c33d5:{NFSU2_TR(0x6c33d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c343f;}}
}
B6c33d7:L6c33d7:{c.instructions+=2;NFSU2_TR(0x6c33d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c33db:{NFSU2_TR(0x6c33db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c33e2;}}
}
B6c33dd:L6c33dd:{c.instructions+=3;NFSU2_TR(0x6c33dd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c33df:{NFSU2_TR(0x6c33df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c33e0:{NFSU2_TR(0x6c33e0);
{goto L6c33e4;}
}
B6c33e2:L6c33e2:{c.instructions+=1;NFSU2_TR(0x6c33e2);
__builtin_memmove((R+0),(R+24),4);
}
B6c33e4:L6c33e4:{c.instructions+=9;NFSU2_TR(0x6c33e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c33e5:{NFSU2_TR(0x6c33e5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c33e7:{NFSU2_TR(0x6c33e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c33e8:{NFSU2_TR(0x6c33e8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c33eb:{NFSU2_TR(0x6c33eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c33ec:{NFSU2_TR(0x6c33ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c33ee:{NFSU2_TR(0x6c33ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c33f4:{NFSU2_TR(0x6c33f4);
__builtin_memmove((R+4),(R+12),4);
}
B6c33f6:{NFSU2_TR(0x6c33f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c33fbull));
TAIL_STATIC(0x699c39u,699);
}
B6c33fb:L6c33fb:{c.instructions+=3;NFSU2_TR(0x6c33fb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c33fe:{NFSU2_TR(0x6c33fe);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c3402:{NFSU2_TR(0x6c3402);
if(r1(R+518)){{goto L6c359e;}}
}
B6c3408:L6c3408:{c.instructions+=18;NFSU2_TR(0x6c3408);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c340e:{NFSU2_TR(0x6c340e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3411:{NFSU2_TR(0x6c3411);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3414:{NFSU2_TR(0x6c3414);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3417:{NFSU2_TR(0x6c3417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c3419:{NFSU2_TR(0x6c3419);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c341c:{NFSU2_TR(0x6c341c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c341f:{NFSU2_TR(0x6c341f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3422:{NFSU2_TR(0x6c3422);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3428:{NFSU2_TR(0x6c3428);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c342b:{NFSU2_TR(0x6c342b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c342d:{NFSU2_TR(0x6c342d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3430:{NFSU2_TR(0x6c3430);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3433:{NFSU2_TR(0x6c3433);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3436:{NFSU2_TR(0x6c3436);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6c3437:{NFSU2_TR(0x6c3437);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6c343a:{NFSU2_TR(0x6c343a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c343d:{NFSU2_TR(0x6c343d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c33d7u);}goto L6c33d7;}}
}
B6c343f:L6c343f:{c.instructions+=4;NFSU2_TR(0x6c343f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3441:{NFSU2_TR(0x6c3441);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3444:{NFSU2_TR(0x6c3444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3447:{NFSU2_TR(0x6c3447);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c344a:L6c344a:{c.instructions+=9;NFSU2_TR(0x6c344a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3450:{NFSU2_TR(0x6c3450);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3453:{NFSU2_TR(0x6c3453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3456:{NFSU2_TR(0x6c3456);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3459:{NFSU2_TR(0x6c3459);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c345c:{NFSU2_TR(0x6c345c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c345f:{NFSU2_TR(0x6c345f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3462:{NFSU2_TR(0x6c3462);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3465:{NFSU2_TR(0x6c3465);
if(r1(R+518)){{goto L6c3563;}}
}
B6c346b:L6c346b:{c.instructions+=6;NFSU2_TR(0x6c346b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c346e:{NFSU2_TR(0x6c346e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3471:{NFSU2_TR(0x6c3471);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3474:{NFSU2_TR(0x6c3474);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3477:{NFSU2_TR(0x6c3477);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c347b:{NFSU2_TR(0x6c347b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3563;}}
}
B6c3481:L6c3481:{c.instructions+=3;NFSU2_TR(0x6c3481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3485:{NFSU2_TR(0x6c3485);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3487:{NFSU2_TR(0x6c3487);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3560;}}
}
B6c348d:L6c348d:{c.instructions+=2;NFSU2_TR(0x6c348d);
__builtin_memmove((R+0),(R+8),4);
}
B6c348f:{NFSU2_TR(0x6c348f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3492:L6c3492:{c.instructions+=17;NFSU2_TR(0x6c3492);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3498:{NFSU2_TR(0x6c3498);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c349a:{NFSU2_TR(0x6c349a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c349d:{NFSU2_TR(0x6c349d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c34a0:{NFSU2_TR(0x6c34a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c34a3:{NFSU2_TR(0x6c34a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c34a6:{NFSU2_TR(0x6c34a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c34a9:{NFSU2_TR(0x6c34a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34aa:{NFSU2_TR(0x6c34aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34ab:{NFSU2_TR(0x6c34ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c34ae:{NFSU2_TR(0x6c34ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c34b1:{NFSU2_TR(0x6c34b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c34b3:{NFSU2_TR(0x6c34b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34b4:{NFSU2_TR(0x6c34b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34b5:{NFSU2_TR(0x6c34b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34b6:{NFSU2_TR(0x6c34b6);
__builtin_memmove((R+4),(R+12),4);
}
B6c34b8:{NFSU2_TR(0x6c34b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c34bdull));
TAIL_STATIC(0x699c39u,699);
}
B6c34bd:L6c34bd:{c.instructions+=4;NFSU2_TR(0x6c34bd);
__builtin_memmove((R+28),(R+0),4);
}
B6c34bf:{NFSU2_TR(0x6c34bf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c34c2:{NFSU2_TR(0x6c34c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c34c5:{NFSU2_TR(0x6c34c5);
if(r1(R+518)){{goto L6c359e;}}
}
B6c34cb:L6c34cb:{c.instructions+=5;NFSU2_TR(0x6c34cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c34ce:{NFSU2_TR(0x6c34ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c34d1:{NFSU2_TR(0x6c34d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c34d4:{NFSU2_TR(0x6c34d4);
__builtin_memmove((R+4),(R+24),4);
}
B6c34d6:{NFSU2_TR(0x6c34d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c34dbull));
TAIL_STATIC(0x699765u,699);
}
B6c34db:L6c34db:{c.instructions+=3;NFSU2_TR(0x6c34db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c34dd:{NFSU2_TR(0x6c34dd);
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
B6c34df:{NFSU2_TR(0x6c34df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3638;}}
}
B6c34e5:L6c34e5:{c.instructions+=2;NFSU2_TR(0x6c34e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c34e9:{NFSU2_TR(0x6c34e9);
if(r1(R+518)){{goto L6c3531;}}
}
B6c34eb:L6c34eb:{c.instructions+=9;NFSU2_TR(0x6c34eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34ec:{NFSU2_TR(0x6c34ec);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c34ee:{NFSU2_TR(0x6c34ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34ef:{NFSU2_TR(0x6c34ef);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c34f2:{NFSU2_TR(0x6c34f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34f3:{NFSU2_TR(0x6c34f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34f4:{NFSU2_TR(0x6c34f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c34f5:{NFSU2_TR(0x6c34f5);
__builtin_memmove((R+4),(R+12),4);
}
B6c34f7:{NFSU2_TR(0x6c34f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c34fcull));
TAIL_STATIC(0x699c39u,699);
}
B6c34fc:L6c34fc:{c.instructions+=3;NFSU2_TR(0x6c34fc);
__builtin_memmove((R+28),(R+0),4);
}
B6c34fe:{NFSU2_TR(0x6c34fe);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3501:{NFSU2_TR(0x6c3501);
if(r1(R+518)){{goto L6c359e;}}
}
B6c3507:L6c3507:{c.instructions+=7;NFSU2_TR(0x6c3507);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c350a:{NFSU2_TR(0x6c350a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c350d:{NFSU2_TR(0x6c350d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3510:{NFSU2_TR(0x6c3510);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3513:{NFSU2_TR(0x6c3513);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6c3516:{NFSU2_TR(0x6c3516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3519:{NFSU2_TR(0x6c3519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c351eull));
TAIL_STATIC(0x699765u,699);
}
B6c351e:L6c351e:{c.instructions+=6;NFSU2_TR(0x6c351e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3521:{NFSU2_TR(0x6c3521);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c3525:{NFSU2_TR(0x6c3525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3528:{NFSU2_TR(0x6c3528);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c352b:{NFSU2_TR(0x6c352b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c352e:{NFSU2_TR(0x6c352e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3531:L6c3531:{c.instructions+=12;NFSU2_TR(0x6c3531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3534:{NFSU2_TR(0x6c3534);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c3538:{NFSU2_TR(0x6c3538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c353b:{NFSU2_TR(0x6c353b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c353e:{NFSU2_TR(0x6c353e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3542:{NFSU2_TR(0x6c3542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3545:{NFSU2_TR(0x6c3545);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c354b:{NFSU2_TR(0x6c354b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c354e:{NFSU2_TR(0x6c354e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c3551:{NFSU2_TR(0x6c3551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3554:{NFSU2_TR(0x6c3554);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c3557:{NFSU2_TR(0x6c3557);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3492u);}goto L6c3492;}}
}
B6c355d:L6c355d:{c.instructions+=1;NFSU2_TR(0x6c355d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3560:L6c3560:{c.instructions+=1;NFSU2_TR(0x6c3560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3563:L6c3563:{c.instructions+=7;NFSU2_TR(0x6c3563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3566:{NFSU2_TR(0x6c3566);
__builtin_memmove((R+0),(R+28),4);
}
B6c3568:{NFSU2_TR(0x6c3568);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c356b:{NFSU2_TR(0x6c356b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c356e:{NFSU2_TR(0x6c356e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3571:{NFSU2_TR(0x6c3571);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c3574:{NFSU2_TR(0x6c3574);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c344au);}goto L6c344a;}}
}
B6c357a:L6c357a:{c.instructions+=2;NFSU2_TR(0x6c357a);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c357c:{NFSU2_TR(0x6c357c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3581ull));
TAIL_STATIC(0x699317u,699);
}
B6c3581:L6c3581:{c.instructions+=2;NFSU2_TR(0x6c3581);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3583:{NFSU2_TR(0x6c3583);
if(r1(R+518)){{goto L6c3593;}}
}
B6c3585:L6c3585:{c.instructions+=2;NFSU2_TR(0x6c3585);
__builtin_memmove((R+4),(R+0),4);
}
B6c3587:{NFSU2_TR(0x6c3587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c358cull));
TAIL_STATIC(0x698e7du,698);
}
B6c358c:L6c358c:{c.instructions+=3;NFSU2_TR(0x6c358c);
__builtin_memmove((R+28),(R+0),4);
}
B6c358e:{NFSU2_TR(0x6c358e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3591:{NFSU2_TR(0x6c3591);
{goto L6c359a;}
}
B6c3593:L6c3593:{c.instructions+=2;NFSU2_TR(0x6c3593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3597:{NFSU2_TR(0x6c3597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c359a:L6c359a:{c.instructions+=2;NFSU2_TR(0x6c359a);
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
B6c359c:{NFSU2_TR(0x6c359c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c35a8;}}
}
B6c359e:L6c359e:{c.instructions+=2;NFSU2_TR(0x6c359e);
w4(R+0,u32(0x8007000eull));
}
B6c35a3:{NFSU2_TR(0x6c35a3);
{goto L6c3638;}
}
B6c35a8:L6c35a8:{c.instructions+=9;NFSU2_TR(0x6c35a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c35ab:{NFSU2_TR(0x6c35ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c35ad:{NFSU2_TR(0x6c35ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c35b0:{NFSU2_TR(0x6c35b0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c35b5:{NFSU2_TR(0x6c35b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c35b8:{NFSU2_TR(0x6c35b8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6c35bd:{NFSU2_TR(0x6c35bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c35be:{NFSU2_TR(0x6c35be);
__builtin_memmove((R+4),(R+28),4);
}
B6c35c0:{NFSU2_TR(0x6c35c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c35c5ull));
TAIL_STATIC(0x699362u,699);
}
B6c35c5:L6c35c5:{c.instructions+=4;NFSU2_TR(0x6c35c5);
__builtin_memmove((R+24),(R+0),4);
}
B6c35c7:{NFSU2_TR(0x6c35c7);
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
B6c35c9:{NFSU2_TR(0x6c35c9);
__builtin_memmove((R+4),(R+28),4);
}
B6c35cb:{NFSU2_TR(0x6c35cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3626;}}
}
B6c35cd:L6c35cd:{c.instructions+=2;NFSU2_TR(0x6c35cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c35d3:{NFSU2_TR(0x6c35d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c35d8ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c35d8:L6c35d8:{c.instructions+=3;NFSU2_TR(0x6c35d8);
__builtin_memmove((R+24),(R+0),4);
}
B6c35da:{NFSU2_TR(0x6c35da);
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
B6c35dc:{NFSU2_TR(0x6c35dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c35e2;}}
}
B6c35de:L6c35de:{c.instructions+=2;NFSU2_TR(0x6c35de);
__builtin_memmove((R+4),(R+28),4);
}
B6c35e0:{NFSU2_TR(0x6c35e0);
{goto L6c3626;}
}
B6c35e2:L6c35e2:{c.instructions+=7;NFSU2_TR(0x6c35e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c35e5:{NFSU2_TR(0x6c35e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c35e8:{NFSU2_TR(0x6c35e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c35eb:{NFSU2_TR(0x6c35eb);
__builtin_memmove((R+4),(R+0),4);
}
B6c35ed:{NFSU2_TR(0x6c35ed);
__builtin_memmove((R+8),(R+4),4);
}
B6c35ef:{NFSU2_TR(0x6c35ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c35f2:{NFSU2_TR(0x6c35f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c35f5:L6c35f5:{c.instructions+=1;NFSU2_TR(0x6c35f5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c35f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c35f5u);}goto L6c35f5;}
}
B6c35f7:L6c35f7:{c.instructions+=2;NFSU2_TR(0x6c35f7);
__builtin_memmove((R+4),(R+8),4);
}
B6c35f9:{NFSU2_TR(0x6c35f9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c35fc:L6c35fc:{c.instructions+=1;NFSU2_TR(0x6c35fc);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c35fe;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c35fcu);}goto L6c35fc;}
}
B6c35fe:L6c35fe:{c.instructions+=5;NFSU2_TR(0x6c35fe);
__builtin_memmove((R+4),(R+0),4);
}
B6c3600:{NFSU2_TR(0x6c3600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3603:{NFSU2_TR(0x6c3603);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3606:{NFSU2_TR(0x6c3606);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3609:{NFSU2_TR(0x6c3609);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c360c:L6c360c:{c.instructions+=1;NFSU2_TR(0x6c360c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c360e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c360cu);}goto L6c360c;}
}
B6c360e:L6c360e:{c.instructions+=2;NFSU2_TR(0x6c360e);
__builtin_memmove((R+4),(R+8),4);
}
B6c3610:{NFSU2_TR(0x6c3610);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c3613:L6c3613:{c.instructions+=1;NFSU2_TR(0x6c3613);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c3615;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3613u);}goto L6c3613;}
}
B6c3615:L6c3615:{c.instructions+=3;NFSU2_TR(0x6c3615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3616:{NFSU2_TR(0x6c3616);
__builtin_memmove((R+4),(R+12),4);
}
B6c3618:{NFSU2_TR(0x6c3618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c361dull));
TAIL_STATIC(0x699b26u,699);
}
B6c361d:L6c361d:{c.instructions+=3;NFSU2_TR(0x6c361d);
__builtin_memmove((R+24),(R+0),4);
}
B6c361f:{NFSU2_TR(0x6c361f);
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
B6c3621:{NFSU2_TR(0x6c3621);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c3631;}}
}
B6c3623:L6c3623:{c.instructions+=1;NFSU2_TR(0x6c3623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3626:L6c3626:{c.instructions+=2;NFSU2_TR(0x6c3626);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3628:{NFSU2_TR(0x6c3628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c362dull));
TAIL_STATIC(0x6739efu,673);
}
B6c362d:L6c362d:{c.instructions+=2;NFSU2_TR(0x6c362d);
__builtin_memmove((R+0),(R+24),4);
}
B6c362f:{NFSU2_TR(0x6c362f);
{goto L6c3638;}
}
B6c3631:L6c3631:{c.instructions+=2;NFSU2_TR(0x6c3631);
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
B6c3633:{NFSU2_TR(0x6c3633);
{goto L6c3638;}
}
B6c3635:L6c3635:{c.instructions+=2;NFSU2_TR(0x6c3635);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3637:{NFSU2_TR(0x6c3637);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3638:L6c3638:{c.instructions+=5;NFSU2_TR(0x6c3638);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3639:{NFSU2_TR(0x6c3639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c363a:{NFSU2_TR(0x6c363a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c363b:{NFSU2_TR(0x6c363b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c363c:{NFSU2_TR(0x6c363c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c363d:L6c363d:{c.instructions+=21;NFSU2_TR(0x6c363d);
__builtin_memmove((R+28),(R+28),4);
}
B6c363f:{NFSU2_TR(0x6c363f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3640:{NFSU2_TR(0x6c3640);
__builtin_memmove((R+20),(R+16),4);
}
B6c3642:{NFSU2_TR(0x6c3642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x274ull))));
}
B6c3648:{NFSU2_TR(0x6c3648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c364c:{NFSU2_TR(0x6c364c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c364d:{NFSU2_TR(0x6c364d);
__builtin_memmove((R+24),(R+4),4);
}
B6c364f:{NFSU2_TR(0x6c364f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3655:{NFSU2_TR(0x6c3655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c3657:{NFSU2_TR(0x6c3657);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3658:{NFSU2_TR(0x6c3658);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c365a:{NFSU2_TR(0x6c365a);
w4(R+4,u32(0xfffffull));
}
B6c365f:{NFSU2_TR(0x6c365f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c3660:{NFSU2_TR(0x6c3660);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6c3662:{NFSU2_TR(0x6c3662);
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
B6c3664:{NFSU2_TR(0x6c3664);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3667:{NFSU2_TR(0x6c3667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c366a:{NFSU2_TR(0x6c366a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3671:{NFSU2_TR(0x6c3671);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3678:{NFSU2_TR(0x6c3678);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c367b:{NFSU2_TR(0x6c367b);
if(r1(R+518)){{goto L6c3684;}}
}
B6c367d:L6c367d:{c.instructions+=2;NFSU2_TR(0x6c367d);
__builtin_memmove((R+0),(R+28),4);
}
B6c367f:{NFSU2_TR(0x6c367f);
{goto L6c3ac2;}
}
B6c3684:L6c3684:{c.instructions+=10;NFSU2_TR(0x6c3684);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3687:{NFSU2_TR(0x6c3687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c3689:{NFSU2_TR(0x6c3689);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c368a:{NFSU2_TR(0x6c368a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c368d:{NFSU2_TR(0x6c368d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3690:{NFSU2_TR(0x6c3690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3693:{NFSU2_TR(0x6c3693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c3696:{NFSU2_TR(0x6c3696);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3699:{NFSU2_TR(0x6c3699);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6c369d:{NFSU2_TR(0x6c369d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c36ac;}}
}
B6c369f:L6c369f:{c.instructions+=5;NFSU2_TR(0x6c369f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c36a1:{NFSU2_TR(0x6c36a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c36a4:{NFSU2_TR(0x6c36a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c36a7:{NFSU2_TR(0x6c36a7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6c36aa:{NFSU2_TR(0x6c36aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c36b3;}}
}
B6c36ac:L6c36ac:{c.instructions+=2;NFSU2_TR(0x6c36ac);
__builtin_memmove((R+0),(R+28),4);
}
B6c36ae:{NFSU2_TR(0x6c36ae);
{goto L6c3ac1;}
}
B6c36b3:L6c36b3:{c.instructions+=3;NFSU2_TR(0x6c36b3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c36b8:{NFSU2_TR(0x6c36b8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10500000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10500000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c36bd:{NFSU2_TR(0x6c36bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c36acu);}goto L6c36ac;}}
}
B6c36bf:L6c36bf:{c.instructions+=1;NFSU2_TR(0x6c36bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c36c3:L6c36c3:{c.instructions+=1;NFSU2_TR(0x6c36c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c36c7:L6c36c7:{c.instructions+=6;NFSU2_TR(0x6c36c7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c36c9:{NFSU2_TR(0x6c36c9);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c36cb:{NFSU2_TR(0x6c36cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c36cc:{NFSU2_TR(0x6c36cc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c36cf:{NFSU2_TR(0x6c36cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c36d5:{NFSU2_TR(0x6c36d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c36db:L6c36db:{c.instructions+=1;NFSU2_TR(0x6c36db);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c36dd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c36dbu);}goto L6c36db;}
}
B6c36dd:L6c36dd:{c.instructions+=5;NFSU2_TR(0x6c36dd);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c36df:{NFSU2_TR(0x6c36df);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c36e1:{NFSU2_TR(0x6c36e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c36e2:{NFSU2_TR(0x6c36e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c36e8:{NFSU2_TR(0x6c36e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c36ee:L6c36ee:{c.instructions+=1;NFSU2_TR(0x6c36ee);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c36f0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c36eeu);}goto L6c36ee;}
}
B6c36f0:L6c36f0:{c.instructions+=3;NFSU2_TR(0x6c36f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c36f3:{NFSU2_TR(0x6c36f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c36f6:{NFSU2_TR(0x6c36f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c36f9:L6c36f9:{c.instructions+=2;NFSU2_TR(0x6c36f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c36fd:{NFSU2_TR(0x6c36fd);
if(r1(R+518)){{goto L6c3707;}}
}
B6c36ff:L6c36ff:{c.instructions+=4;NFSU2_TR(0x6c36ff);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c3701:{NFSU2_TR(0x6c3701);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c3702:{NFSU2_TR(0x6c3702);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6c3705:{NFSU2_TR(0x6c3705);
{goto L6c370a;}
}
B6c3707:L6c3707:{c.instructions+=1;NFSU2_TR(0x6c3707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c370a:L6c370a:{c.instructions+=10;NFSU2_TR(0x6c370a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c370d:{NFSU2_TR(0x6c370d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c3710:{NFSU2_TR(0x6c3710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3713:{NFSU2_TR(0x6c3713);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7be54cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c371a:{NFSU2_TR(0x6c371a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6c371d:{NFSU2_TR(0x6c371d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3720:{NFSU2_TR(0x6c3720);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c3723:{NFSU2_TR(0x6c3723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c3725:{NFSU2_TR(0x6c3725);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c3728:{NFSU2_TR(0x6c3728);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c3799;}}
}
B6c372a:L6c372a:{c.instructions+=3;NFSU2_TR(0x6c372a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c372d:{NFSU2_TR(0x6c372d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3730:{NFSU2_TR(0x6c3730);
if(r1(R+518)){{goto L6c37de;}}
}
B6c3736:L6c3736:{c.instructions+=16;NFSU2_TR(0x6c3736);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3739:{NFSU2_TR(0x6c3739);
__builtin_memmove((R+24),(R+4),4);
}
B6c373b:{NFSU2_TR(0x6c373b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c373e:{NFSU2_TR(0x6c373e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3741:{NFSU2_TR(0x6c3741);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c3744:{NFSU2_TR(0x6c3744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3747:{NFSU2_TR(0x6c3747);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3749:{NFSU2_TR(0x6c3749);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7be558ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c374f:{NFSU2_TR(0x6c374f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3755:{NFSU2_TR(0x6c3755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3756:{NFSU2_TR(0x6c3756);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3759:{NFSU2_TR(0x6c3759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c375a:{NFSU2_TR(0x6c375a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c375d:{NFSU2_TR(0x6c375d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c375e:{NFSU2_TR(0x6c375e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c375f:{NFSU2_TR(0x6c375f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3764ull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6c3764:L6c3764:{c.instructions+=2;NFSU2_TR(0x6c3764);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3766:{NFSU2_TR(0x6c3766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c37de;}}
}
B6c3768:L6c3768:{c.instructions+=15;NFSU2_TR(0x6c3768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c376b:{NFSU2_TR(0x6c376b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c376c:{NFSU2_TR(0x6c376c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c376e:{NFSU2_TR(0x6c376e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3774:{NFSU2_TR(0x6c3774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3775:{NFSU2_TR(0x6c3775);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c377b:{NFSU2_TR(0x6c377b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c377c:{NFSU2_TR(0x6c377c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c377f:{NFSU2_TR(0x6c377f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3780:{NFSU2_TR(0x6c3780);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3786:{NFSU2_TR(0x6c3786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3787:{NFSU2_TR(0x6c3787);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7be540ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c378d:{NFSU2_TR(0x6c378d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c378e:{NFSU2_TR(0x6c378e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c378f:{NFSU2_TR(0x6c378f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3794ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c3794:L6c3794:{c.instructions+=2;NFSU2_TR(0x6c3794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3797:{NFSU2_TR(0x6c3797);
{goto L6c37c6;}
}
B6c3799:L6c3799:{c.instructions+=4;NFSU2_TR(0x6c3799);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6c379c:{NFSU2_TR(0x6c379c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c379e:{NFSU2_TR(0x6c379e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c37a1:{NFSU2_TR(0x6c37a1);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe2cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6c37a8:L6c37a8:{c.instructions+=3;NFSU2_TR(0x6c37a8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c37ac:{NFSU2_TR(0x6c37ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c37af:{NFSU2_TR(0x6c37af);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c37ba;}}
}
B6c37b1:L6c37b1:{c.instructions+=4;NFSU2_TR(0x6c37b1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6c37b3:{NFSU2_TR(0x6c37b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c37b6:{NFSU2_TR(0x6c37b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6c37b8:{NFSU2_TR(0x6c37b8);
{goto L6c37bd;}
}
B6c37ba:L6c37ba:{c.instructions+=1;NFSU2_TR(0x6c37ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6c37bd:L6c37bd:{c.instructions+=4;NFSU2_TR(0x6c37bd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c37be:{NFSU2_TR(0x6c37be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c37c1:{NFSU2_TR(0x6c37c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c37c4:{NFSU2_TR(0x6c37c4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c37a8u);}goto L6c37a8;}}
}
B6c37c6:L6c37c6:{c.instructions+=2;NFSU2_TR(0x6c37c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c37ca:{NFSU2_TR(0x6c37ca);
if(r1(R+518)){{goto L6c37e5;}}
}
B6c37cc:L6c37cc:{c.instructions+=4;NFSU2_TR(0x6c37cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c37cf:{NFSU2_TR(0x6c37cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6c37d2:{NFSU2_TR(0x6c37d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c37d6:{NFSU2_TR(0x6c37d6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c36f9u);}goto L6c36f9;}}
}
B6c37dc:L6c37dc:{c.instructions+=1;NFSU2_TR(0x6c37dc);
{goto L6c37e5;}
}
B6c37de:L6c37de:{c.instructions+=1;NFSU2_TR(0x6c37de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c37e5:L6c37e5:{c.instructions+=5;NFSU2_TR(0x6c37e5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c37e7:{NFSU2_TR(0x6c37e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c37ea:{NFSU2_TR(0x6c37ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6c37ed:{NFSU2_TR(0x6c37ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7be54cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6c37f5:{NFSU2_TR(0x6c37f5);
if(r1(R+512)){{goto L6c3852;}}
}
B6c37f7:L6c37f7:{c.instructions+=3;NFSU2_TR(0x6c37f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c37fb:{NFSU2_TR(0x6c37fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c37ff:{NFSU2_TR(0x6c37ff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3852;}}
}
B6c3801:L6c3801:{c.instructions+=3;NFSU2_TR(0x6c3801);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3803:{NFSU2_TR(0x6c3803);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3806:{NFSU2_TR(0x6c3806);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3847;}}
}
B6c3808:L6c3808:{c.instructions+=3;NFSU2_TR(0x6c3808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c380b:{NFSU2_TR(0x6c380b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c3812:{NFSU2_TR(0x6c3812);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c3815:L6c3815:{c.instructions+=3;NFSU2_TR(0x6c3815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3819:{NFSU2_TR(0x6c3819);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c381b:{NFSU2_TR(0x6c381b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3838;}}
}
B6c381d:L6c381d:{c.instructions+=4;NFSU2_TR(0x6c381d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3820:{NFSU2_TR(0x6c3820);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3823:{NFSU2_TR(0x6c3823);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c3826:{NFSU2_TR(0x6c3826);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3829:L6c3829:{c.instructions+=2;NFSU2_TR(0x6c3829);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c382b:{NFSU2_TR(0x6c382b);
if(r1(R+518)){{goto L6c3840;}}
}
B6c382d:L6c382d:{c.instructions+=4;NFSU2_TR(0x6c382d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3830:{NFSU2_TR(0x6c3830);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c3833:{NFSU2_TR(0x6c3833);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6c3836:{NFSU2_TR(0x6c3836);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3829u);}goto L6c3829;}}
}
B6c3838:L6c3838:{c.instructions+=3;NFSU2_TR(0x6c3838);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c3839:{NFSU2_TR(0x6c3839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c383c:{NFSU2_TR(0x6c383c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3815u);}goto L6c3815;}}
}
B6c383e:L6c383e:{c.instructions+=1;NFSU2_TR(0x6c383e);
{goto L6c3847;}
}
B6c3840:L6c3840:{c.instructions+=1;NFSU2_TR(0x6c3840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3847:L6c3847:{c.instructions+=4;NFSU2_TR(0x6c3847);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c384a:{NFSU2_TR(0x6c384a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c384d:{NFSU2_TR(0x6c384d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c3850:{NFSU2_TR(0x6c3850);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3801u);}goto L6c3801;}}
}
B6c3852:L6c3852:{c.instructions+=3;NFSU2_TR(0x6c3852);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c3854:{NFSU2_TR(0x6c3854);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3857:{NFSU2_TR(0x6c3857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c39b1;}}
}
B6c385d:L6c385d:{c.instructions+=2;NFSU2_TR(0x6c385d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3860:{NFSU2_TR(0x6c3860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c39d3;}}
}
B6c3866:L6c3866:{c.instructions+=4;NFSU2_TR(0x6c3866);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3868:{NFSU2_TR(0x6c3868);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c386b:{NFSU2_TR(0x6c386b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c386e:{NFSU2_TR(0x6c386e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3951;}}
}
B6c3874:L6c3874:{c.instructions+=6;NFSU2_TR(0x6c3874);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c387b:{NFSU2_TR(0x6c387b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c387e:{NFSU2_TR(0x6c387e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3880:{NFSU2_TR(0x6c3880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3883:{NFSU2_TR(0x6c3883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3886:{NFSU2_TR(0x6c3886);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3941;}}
}
B6c388c:L6c388c:{c.instructions+=4;NFSU2_TR(0x6c388c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c388f:{NFSU2_TR(0x6c388f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3892:{NFSU2_TR(0x6c3892);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3894:{NFSU2_TR(0x6c3894);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3932;}}
}
B6c389a:L6c389a:{c.instructions+=3;NFSU2_TR(0x6c389a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c389d:{NFSU2_TR(0x6c389d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c38a0:{NFSU2_TR(0x6c38a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c38a3:L6c38a3:{c.instructions+=3;NFSU2_TR(0x6c38a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c38a5:{NFSU2_TR(0x6c38a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c38a7:{NFSU2_TR(0x6c38a7);
if(r1(R+518)){{goto L6c3920;}}
}
B6c38a9:L6c38a9:{c.instructions+=2;NFSU2_TR(0x6c38a9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c38ab:{NFSU2_TR(0x6c38ab);
if(r1(R+518)){{goto L6c3920;}}
}
B6c38ad:L6c38ad:{c.instructions+=4;NFSU2_TR(0x6c38ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c38b0:{NFSU2_TR(0x6c38b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c38b2:{NFSU2_TR(0x6c38b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c38b5:{NFSU2_TR(0x6c38b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c38f2;}}
}
B6c38b7:L6c38b7:{c.instructions+=7;NFSU2_TR(0x6c38b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c38ba:{NFSU2_TR(0x6c38ba);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c38c1:{NFSU2_TR(0x6c38c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c38c4:{NFSU2_TR(0x6c38c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c38c7:{NFSU2_TR(0x6c38c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6c38ca:{NFSU2_TR(0x6c38ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c38cd:{NFSU2_TR(0x6c38cd);
__builtin_memmove((R+0),(R+28),4);
}
B6c38cf:L6c38cf:{c.instructions+=3;NFSU2_TR(0x6c38cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c38d1:{NFSU2_TR(0x6c38d1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c38d3:{NFSU2_TR(0x6c38d3);
if(r1(R+518)){{goto L6c38e3;}}
}
B6c38d5:L6c38d5:{c.instructions+=5;NFSU2_TR(0x6c38d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c38d8:{NFSU2_TR(0x6c38d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c38db:{NFSU2_TR(0x6c38db);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c38de:{NFSU2_TR(0x6c38de);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c38e1:{NFSU2_TR(0x6c38e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c38ea;}}
}
B6c38e3:L6c38e3:{c.instructions+=1;NFSU2_TR(0x6c38e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c38ea:L6c38ea:{c.instructions+=3;NFSU2_TR(0x6c38ea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c38ed:{NFSU2_TR(0x6c38ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6c38ee:{NFSU2_TR(0x6c38ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c38cfu);}goto L6c38cf;}}
}
B6c38f0:L6c38f0:{c.instructions+=1;NFSU2_TR(0x6c38f0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6c38f2:L6c38f2:{c.instructions+=2;NFSU2_TR(0x6c38f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c38f5:{NFSU2_TR(0x6c38f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c38fb;}}
}
B6c38f7:L6c38f7:{c.instructions+=2;NFSU2_TR(0x6c38f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c38f9:{NFSU2_TR(0x6c38f9);
{goto L6c38fe;}
}
B6c38fb:L6c38fb:{c.instructions+=1;NFSU2_TR(0x6c38fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c38fe:L6c38fe:{c.instructions+=2;NFSU2_TR(0x6c38fe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3900:{NFSU2_TR(0x6c3900);
if(r1(R+518)){{goto L6c3920;}}
}
B6c3902:L6c3902:{c.instructions+=1;NFSU2_TR(0x6c3902);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c3904:L6c3904:{c.instructions+=2;NFSU2_TR(0x6c3904);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6c390b:{NFSU2_TR(0x6c390b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c390f;}}
}
B6c390d:L6c390d:{c.instructions+=1;NFSU2_TR(0x6c390d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c390f:L6c390f:{c.instructions+=3;NFSU2_TR(0x6c390f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c3910:{NFSU2_TR(0x6c3910);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6c3913:{NFSU2_TR(0x6c3913);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3904u);}goto L6c3904;}}
}
B6c3915:L6c3915:{c.instructions+=2;NFSU2_TR(0x6c3915);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3917:{NFSU2_TR(0x6c3917);
if(r1(R+518)){{goto L6c3920;}}
}
B6c3919:L6c3919:{c.instructions+=1;NFSU2_TR(0x6c3919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3920:L6c3920:{c.instructions+=5;NFSU2_TR(0x6c3920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3923:{NFSU2_TR(0x6c3923);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c3926:{NFSU2_TR(0x6c3926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3929:{NFSU2_TR(0x6c3929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c392c:{NFSU2_TR(0x6c392c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c38a3u);}goto L6c38a3;}}
}
B6c3932:L6c3932:{c.instructions+=4;NFSU2_TR(0x6c3932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3935:{NFSU2_TR(0x6c3935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3938:{NFSU2_TR(0x6c3938);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c393b:{NFSU2_TR(0x6c393b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c388cu);}goto L6c388c;}}
}
B6c3941:L6c3941:{c.instructions+=5;NFSU2_TR(0x6c3941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3944:{NFSU2_TR(0x6c3944);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c3945:{NFSU2_TR(0x6c3945);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c3948:{NFSU2_TR(0x6c3948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c394b:{NFSU2_TR(0x6c394b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3874u);}goto L6c3874;}}
}
B6c3951:L6c3951:{c.instructions+=1;NFSU2_TR(0x6c3951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3954:L6c3954:{c.instructions+=4;NFSU2_TR(0x6c3954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3957:{NFSU2_TR(0x6c3957);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe2cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c395e:{NFSU2_TR(0x6c395e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3961:{NFSU2_TR(0x6c3961);
if(r1(R+518)){{goto L6c39a2;}}
}
B6c3963:L6c3963:{c.instructions+=3;NFSU2_TR(0x6c3963);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3965:{NFSU2_TR(0x6c3965);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3968:{NFSU2_TR(0x6c3968);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c39a2;}}
}
B6c396a:L6c396a:{c.instructions+=3;NFSU2_TR(0x6c396a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c396d:{NFSU2_TR(0x6c396d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3970:{NFSU2_TR(0x6c3970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c3973:L6c3973:{c.instructions+=4;NFSU2_TR(0x6c3973);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c397a:{NFSU2_TR(0x6c397a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c397d:{NFSU2_TR(0x6c397d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c397f:{NFSU2_TR(0x6c397f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c399c;}}
}
B6c3981:L6c3981:{c.instructions+=1;NFSU2_TR(0x6c3981);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3984:L6c3984:{c.instructions+=3;NFSU2_TR(0x6c3984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c3986:{NFSU2_TR(0x6c3986);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3988:{NFSU2_TR(0x6c3988);
if(r1(R+518)){{goto L6c398f;}}
}
B6c398a:L6c398a:{c.instructions+=2;NFSU2_TR(0x6c398a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c398d:{NFSU2_TR(0x6c398d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3996;}}
}
B6c398f:L6c398f:{c.instructions+=1;NFSU2_TR(0x6c398f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3996:L6c3996:{c.instructions+=3;NFSU2_TR(0x6c3996);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c3999:{NFSU2_TR(0x6c3999);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6c399a:{NFSU2_TR(0x6c399a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3984u);}goto L6c3984;}}
}
B6c399c:L6c399c:{c.instructions+=3;NFSU2_TR(0x6c399c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c399d:{NFSU2_TR(0x6c399d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c39a0:{NFSU2_TR(0x6c39a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3973u);}goto L6c3973;}}
}
B6c39a2:L6c39a2:{c.instructions+=3;NFSU2_TR(0x6c39a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c39a5:{NFSU2_TR(0x6c39a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6c39a9:{NFSU2_TR(0x6c39a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3954u);}goto L6c3954;}}
}
B6c39ab:L6c39ab:{c.instructions+=2;NFSU2_TR(0x6c39ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c39af:{NFSU2_TR(0x6c39af);
if(r1(R+518)){{goto L6c39d3;}}
}
B6c39b1:L6c39b1:{c.instructions+=3;NFSU2_TR(0x6c39b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c39b4:{NFSU2_TR(0x6c39b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c39b8:{NFSU2_TR(0x6c39b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c36c7u);}goto L6c36c7;}}
}
B6c39be:L6c39be:{c.instructions+=2;NFSU2_TR(0x6c39be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c39c2:{NFSU2_TR(0x6c39c2);
if(r1(R+518)){{goto L6c39d3;}}
}
B6c39c4:L6c39c4:{c.instructions+=3;NFSU2_TR(0x6c39c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c39c7:{NFSU2_TR(0x6c39c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6c39cb:{NFSU2_TR(0x6c39cb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c36c3u);}goto L6c36c3;}}
}
B6c39d1:L6c39d1:{c.instructions+=1;NFSU2_TR(0x6c39d1);
{goto L6c3a0f;}
}
B6c39d3:L6c39d3:{c.instructions+=4;NFSU2_TR(0x6c39d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c39d6:{NFSU2_TR(0x6c39d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c39d9:{NFSU2_TR(0x6c39d9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c39e0:{NFSU2_TR(0x6c39e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c39e2:L6c39e2:{c.instructions+=3;NFSU2_TR(0x6c39e2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe2cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c39e9:{NFSU2_TR(0x6c39e9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c39ec:{NFSU2_TR(0x6c39ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c39fa;}}
}
B6c39ee:L6c39ee:{c.instructions+=3;NFSU2_TR(0x6c39ee);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c39f5:{NFSU2_TR(0x6c39f5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c39f8:{NFSU2_TR(0x6c39f8);
if(r1(R+518)){{goto L6c3a01;}}
}
B6c39fa:L6c39fa:{c.instructions+=1;NFSU2_TR(0x6c39fa);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffeccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c3a01:L6c3a01:{c.instructions+=3;NFSU2_TR(0x6c3a01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6c3a04:{NFSU2_TR(0x6c3a04);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6c3a09:{NFSU2_TR(0x6c3a09);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c39e2u);}goto L6c39e2;}}
}
B6c3a0b:L6c3a0b:{c.instructions+=1;NFSU2_TR(0x6c3a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3a0f:L6c3a0f:{c.instructions+=3;NFSU2_TR(0x6c3a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3a12:{NFSU2_TR(0x6c3a12);
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
B6c3a14:{NFSU2_TR(0x6c3a14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3ac1;}}
}
B6c3a1a:L6c3a1a:{c.instructions+=2;NFSU2_TR(0x6c3a1a);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3a1c:{NFSU2_TR(0x6c3a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3a21ull));
TAIL_STATIC(0x699317u,699);
}
B6c3a21:L6c3a21:{c.instructions+=2;NFSU2_TR(0x6c3a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3a23:{NFSU2_TR(0x6c3a23);
if(r1(R+518)){{goto L6c3a30;}}
}
B6c3a25:L6c3a25:{c.instructions+=2;NFSU2_TR(0x6c3a25);
__builtin_memmove((R+4),(R+0),4);
}
B6c3a27:{NFSU2_TR(0x6c3a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3a2cull));
TAIL_STATIC(0x698e7du,698);
}
B6c3a2c:L6c3a2c:{c.instructions+=2;NFSU2_TR(0x6c3a2c);
__builtin_memmove((R+12),(R+0),4);
}
B6c3a2e:{NFSU2_TR(0x6c3a2e);
{goto L6c3a32;}
}
B6c3a30:L6c3a30:{c.instructions+=1;NFSU2_TR(0x6c3a30);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c3a32:L6c3a32:{c.instructions+=2;NFSU2_TR(0x6c3a32);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3a34:{NFSU2_TR(0x6c3a34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3a40;}}
}
B6c3a36:L6c3a36:{c.instructions+=2;NFSU2_TR(0x6c3a36);
w4(R+0,u32(0x8007000eull));
}
B6c3a3b:{NFSU2_TR(0x6c3a3b);
{goto L6c3ac1;}
}
B6c3a40:L6c3a40:{c.instructions+=6;NFSU2_TR(0x6c3a40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3a42:{NFSU2_TR(0x6c3a42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3a44:{NFSU2_TR(0x6c3a44);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3a46:{NFSU2_TR(0x6c3a46);
u8 U[4];
w4(U+0,u32(0x70d00001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3a4b:{NFSU2_TR(0x6c3a4b);
__builtin_memmove((R+4),(R+12),4);
}
B6c3a4d:{NFSU2_TR(0x6c3a4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3a52ull));
TAIL_STATIC(0x699362u,699);
}
B6c3a52:L6c3a52:{c.instructions+=4;NFSU2_TR(0x6c3a52);
__builtin_memmove((R+24),(R+0),4);
}
B6c3a54:{NFSU2_TR(0x6c3a54);
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
B6c3a56:{NFSU2_TR(0x6c3a56);
__builtin_memmove((R+4),(R+12),4);
}
B6c3a58:{NFSU2_TR(0x6c3a58);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3ab8;}}
}
B6c3a5a:L6c3a5a:{c.instructions+=3;NFSU2_TR(0x6c3a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3a5d:{NFSU2_TR(0x6c3a5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c3a63:{NFSU2_TR(0x6c3a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3a68ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c3a68:L6c3a68:{c.instructions+=3;NFSU2_TR(0x6c3a68);
__builtin_memmove((R+24),(R+0),4);
}
B6c3a6a:{NFSU2_TR(0x6c3a6a);
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
B6c3a6c:{NFSU2_TR(0x6c3a6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3ab6;}}
}
B6c3a6e:L6c3a6e:{c.instructions+=8;NFSU2_TR(0x6c3a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3a71:{NFSU2_TR(0x6c3a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3a77:{NFSU2_TR(0x6c3a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3a7a:{NFSU2_TR(0x6c3a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c3a7d:{NFSU2_TR(0x6c3a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3a80:{NFSU2_TR(0x6c3a80);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3a83:{NFSU2_TR(0x6c3a83);
__builtin_memmove((R+0),(R+4),4);
}
B6c3a85:{NFSU2_TR(0x6c3a85);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3a88:L6c3a88:{c.instructions+=1;NFSU2_TR(0x6c3a88);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c3a8a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3a88u);}goto L6c3a88;}
}
B6c3a8a:L6c3a8a:{c.instructions+=2;NFSU2_TR(0x6c3a8a);
__builtin_memmove((R+4),(R+0),4);
}
B6c3a8c:{NFSU2_TR(0x6c3a8c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c3a8f:L6c3a8f:{c.instructions+=1;NFSU2_TR(0x6c3a8f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c3a91;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3a8fu);}goto L6c3a8f;}
}
B6c3a91:L6c3a91:{c.instructions+=10;NFSU2_TR(0x6c3a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3a94:{NFSU2_TR(0x6c3a94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3a9a:{NFSU2_TR(0x6c3a9a);
u8 U[40];
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
}
B6c3a9b:{NFSU2_TR(0x6c3a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3a9e:{NFSU2_TR(0x6c3a9e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6c3aa1:{NFSU2_TR(0x6c3aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3aa7:{NFSU2_TR(0x6c3aa7);
u8 U[40];
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
}
B6c3aa8:{NFSU2_TR(0x6c3aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3aae:{NFSU2_TR(0x6c3aae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3aaf:{NFSU2_TR(0x6c3aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3ab4ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c3ab4:L6c3ab4:{c.instructions+=1;NFSU2_TR(0x6c3ab4);
__builtin_memmove((R+24),(R+0),4);
}
B6c3ab6:L6c3ab6:{c.instructions+=1;NFSU2_TR(0x6c3ab6);
__builtin_memmove((R+4),(R+12),4);
}
B6c3ab8:L6c3ab8:{c.instructions+=2;NFSU2_TR(0x6c3ab8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3aba:{NFSU2_TR(0x6c3aba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3abfull));
TAIL_STATIC(0x6739efu,673);
}
B6c3abf:L6c3abf:{c.instructions+=1;NFSU2_TR(0x6c3abf);
__builtin_memmove((R+0),(R+24),4);
}
B6c3ac1:L6c3ac1:{c.instructions+=1;NFSU2_TR(0x6c3ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c3ac2:L6c3ac2:{c.instructions+=4;NFSU2_TR(0x6c3ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3ac3:{NFSU2_TR(0x6c3ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3ac4:{NFSU2_TR(0x6c3ac4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c3ac5:{NFSU2_TR(0x6c3ac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c3ac6:L6c3ac6:{c.instructions+=19;NFSU2_TR(0x6c3ac6);
__builtin_memmove((R+28),(R+28),4);
}
B6c3ac8:{NFSU2_TR(0x6c3ac8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3ac9:{NFSU2_TR(0x6c3ac9);
__builtin_memmove((R+20),(R+16),4);
}
B6c3acb:{NFSU2_TR(0x6c3acb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3acc:{NFSU2_TR(0x6c3acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3ad2:{NFSU2_TR(0x6c3ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3ad5:{NFSU2_TR(0x6c3ad5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3ad6:{NFSU2_TR(0x6c3ad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c3ad8:{NFSU2_TR(0x6c3ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3adb:{NFSU2_TR(0x6c3adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c3add:{NFSU2_TR(0x6c3add);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3ae0:{NFSU2_TR(0x6c3ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3ae3:{NFSU2_TR(0x6c3ae3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3ae6:{NFSU2_TR(0x6c3ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3ae9:{NFSU2_TR(0x6c3ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3aec:{NFSU2_TR(0x6c3aec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3aef:{NFSU2_TR(0x6c3aef);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c3af5:{NFSU2_TR(0x6c3af5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3af9:{NFSU2_TR(0x6c3af9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3b00;}}
}
B6c3afb:L6c3afb:{c.instructions+=3;NFSU2_TR(0x6c3afb);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3afd:{NFSU2_TR(0x6c3afd);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3afe:{NFSU2_TR(0x6c3afe);
{goto L6c3b46;}
}
B6c3b00:L6c3b00:{c.instructions+=3;NFSU2_TR(0x6c3b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b04:{NFSU2_TR(0x6c3b04);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3b06:{NFSU2_TR(0x6c3b06);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3b3b;}}
}
B6c3b08:L6c3b08:{c.instructions+=2;NFSU2_TR(0x6c3b08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3b09:{NFSU2_TR(0x6c3b09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3b0a:L6c3b0a:{c.instructions+=15;NFSU2_TR(0x6c3b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3b10:{NFSU2_TR(0x6c3b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c3b13:{NFSU2_TR(0x6c3b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3b16:{NFSU2_TR(0x6c3b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3b19:{NFSU2_TR(0x6c3b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3b1c:{NFSU2_TR(0x6c3b1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6c3b1f:{NFSU2_TR(0x6c3b1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c3b22:{NFSU2_TR(0x6c3b22);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3b25:{NFSU2_TR(0x6c3b25);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c3b28:{NFSU2_TR(0x6c3b28);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3b2b:{NFSU2_TR(0x6c3b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b2e:{NFSU2_TR(0x6c3b2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c3b31:{NFSU2_TR(0x6c3b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3b34:{NFSU2_TR(0x6c3b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b37:{NFSU2_TR(0x6c3b37);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3b0au);}goto L6c3b0a;}}
}
B6c3b39:L6c3b39:{c.instructions+=2;NFSU2_TR(0x6c3b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3b3a:{NFSU2_TR(0x6c3b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c3b3b:L6c3b3b:{c.instructions+=3;NFSU2_TR(0x6c3b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3b41:{NFSU2_TR(0x6c3b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6c3b44:{NFSU2_TR(0x6c3b44);
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
B6c3b46:L6c3b46:{c.instructions+=3;NFSU2_TR(0x6c3b46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3b47:{NFSU2_TR(0x6c3b47);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c3b48:{NFSU2_TR(0x6c3b48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c3b49:L6c3b49:{c.instructions+=24;NFSU2_TR(0x6c3b49);
__builtin_memmove((R+28),(R+28),4);
}
B6c3b4b:{NFSU2_TR(0x6c3b4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3b4c:{NFSU2_TR(0x6c3b4c);
__builtin_memmove((R+20),(R+16),4);
}
B6c3b4e:{NFSU2_TR(0x6c3b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x124ull))));
}
B6c3b54:{NFSU2_TR(0x6c3b54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3b55:{NFSU2_TR(0x6c3b55);
__builtin_memmove((R+12),(R+4),4);
}
B6c3b57:{NFSU2_TR(0x6c3b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3b5d:{NFSU2_TR(0x6c3b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c3b5f:{NFSU2_TR(0x6c3b5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3b60:{NFSU2_TR(0x6c3b60);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c3b62:{NFSU2_TR(0x6c3b62);
__builtin_memmove((R+24),(R+0),4);
}
B6c3b64:{NFSU2_TR(0x6c3b64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3b65:{NFSU2_TR(0x6c3b65);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3b67:{NFSU2_TR(0x6c3b67);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c3b68:{NFSU2_TR(0x6c3b68);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c3b6d:{NFSU2_TR(0x6c3b6d);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c3b73:{NFSU2_TR(0x6c3b73);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x30000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x30000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3b78:{NFSU2_TR(0x6c3b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b7b:{NFSU2_TR(0x6c3b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b7e:{NFSU2_TR(0x6c3b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b81:{NFSU2_TR(0x6c3b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b84:{NFSU2_TR(0x6c3b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b8b:{NFSU2_TR(0x6c3b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3b92:{NFSU2_TR(0x6c3b92);
if(r1(R+518)){{goto L6c3b9b;}}
}
B6c3b94:L6c3b94:{c.instructions+=2;NFSU2_TR(0x6c3b94);
__builtin_memmove((R+0),(R+4),4);
}
B6c3b96:{NFSU2_TR(0x6c3b96);
{goto L6c3fa6;}
}
B6c3b9b:L6c3b9b:{c.instructions+=7;NFSU2_TR(0x6c3b9b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3b9d:{NFSU2_TR(0x6c3b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3ba0:{NFSU2_TR(0x6c3ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3ba3:{NFSU2_TR(0x6c3ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3ba6:{NFSU2_TR(0x6c3ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3ba9:{NFSU2_TR(0x6c3ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bac:{NFSU2_TR(0x6c3bac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3de3;}}
}
B6c3bb2:L6c3bb2:{c.instructions+=11;NFSU2_TR(0x6c3bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3bb8:{NFSU2_TR(0x6c3bb8);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c3bbe:{NFSU2_TR(0x6c3bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3bc1:{NFSU2_TR(0x6c3bc1);
__builtin_memmove((R+0),(R+24),4);
}
B6c3bc3:{NFSU2_TR(0x6c3bc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c3bc6:{NFSU2_TR(0x6c3bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bc9:{NFSU2_TR(0x6c3bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bcc:{NFSU2_TR(0x6c3bcc);
__builtin_memmove((R+0),(R+24),4);
}
B6c3bce:{NFSU2_TR(0x6c3bce);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c3bd1:{NFSU2_TR(0x6c3bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bd4:{NFSU2_TR(0x6c3bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bd7:L6c3bd7:{c.instructions+=16;NFSU2_TR(0x6c3bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3bda:{NFSU2_TR(0x6c3bda);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3bdd:{NFSU2_TR(0x6c3bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3be0:{NFSU2_TR(0x6c3be0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3be3:{NFSU2_TR(0x6c3be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3be6:{NFSU2_TR(0x6c3be6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c3be9:{NFSU2_TR(0x6c3be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3bec:{NFSU2_TR(0x6c3bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3bef:{NFSU2_TR(0x6c3bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bf2:{NFSU2_TR(0x6c3bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3bf5:{NFSU2_TR(0x6c3bf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c3bf8:{NFSU2_TR(0x6c3bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3bfb:{NFSU2_TR(0x6c3bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3bfe:{NFSU2_TR(0x6c3bfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3c01:{NFSU2_TR(0x6c3c01);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3c05:{NFSU2_TR(0x6c3c05);
if(r1(R+518)){{goto L6c3c3b;}}
}
B6c3c07:L6c3c07:{c.instructions+=6;NFSU2_TR(0x6c3c07);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6c3c09:{NFSU2_TR(0x6c3c09);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c3c0c:{NFSU2_TR(0x6c3c0c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c3c0e:{NFSU2_TR(0x6c3c0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c3c10:{NFSU2_TR(0x6c3c10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c3c13:{NFSU2_TR(0x6c3c13);
if(r1(R+514)){{goto L6c3c3b;}}
}
B6c3c15:L6c3c15:{c.instructions+=2;NFSU2_TR(0x6c3c15);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3c19:{NFSU2_TR(0x6c3c19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3c3b;}}
}
B6c3c1b:L6c3c1b:{c.instructions+=7;NFSU2_TR(0x6c3c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3c21:{NFSU2_TR(0x6c3c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3c24:{NFSU2_TR(0x6c3c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3c27:{NFSU2_TR(0x6c3c27);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3c2a:{NFSU2_TR(0x6c3c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3c2d:{NFSU2_TR(0x6c3c2d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c3c30:{NFSU2_TR(0x6c3c30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3c3b;}}
}
B6c3c32:L6c3c32:{c.instructions+=2;NFSU2_TR(0x6c3c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c39:{NFSU2_TR(0x6c3c39);
{goto L6c3c42;}
}
B6c3c3b:L6c3c3b:{c.instructions+=1;NFSU2_TR(0x6c3c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c42:L6c3c42:{c.instructions+=3;NFSU2_TR(0x6c3c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3c45:{NFSU2_TR(0x6c3c45);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3c49:{NFSU2_TR(0x6c3c49);
if(r1(R+518)){{goto L6c3c82;}}
}
B6c3c4b:L6c3c4b:{c.instructions+=7;NFSU2_TR(0x6c3c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3c4e:{NFSU2_TR(0x6c3c4e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6c3c50:{NFSU2_TR(0x6c3c50);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c3c53:{NFSU2_TR(0x6c3c53);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c3c55:{NFSU2_TR(0x6c3c55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c3c57:{NFSU2_TR(0x6c3c57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c3c5a:{NFSU2_TR(0x6c3c5a);
if(r1(R+514)){{goto L6c3c82;}}
}
B6c3c5c:L6c3c5c:{c.instructions+=2;NFSU2_TR(0x6c3c5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3c60:{NFSU2_TR(0x6c3c60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3c82;}}
}
B6c3c62:L6c3c62:{c.instructions+=7;NFSU2_TR(0x6c3c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3c68:{NFSU2_TR(0x6c3c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3c6b:{NFSU2_TR(0x6c3c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3c6e:{NFSU2_TR(0x6c3c6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3c71:{NFSU2_TR(0x6c3c71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3c74:{NFSU2_TR(0x6c3c74);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6c3c77:{NFSU2_TR(0x6c3c77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3c82;}}
}
B6c3c79:L6c3c79:{c.instructions+=2;NFSU2_TR(0x6c3c79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c80:{NFSU2_TR(0x6c3c80);
{goto L6c3c89;}
}
B6c3c82:L6c3c82:{c.instructions+=1;NFSU2_TR(0x6c3c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c89:L6c3c89:{c.instructions+=5;NFSU2_TR(0x6c3c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c8c:{NFSU2_TR(0x6c3c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c90:{NFSU2_TR(0x6c3c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3c94:{NFSU2_TR(0x6c3c94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c3c97:{NFSU2_TR(0x6c3c97);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3bd7u);}goto L6c3bd7;}}
}
B6c3c9d:L6c3c9d:{c.instructions+=4;NFSU2_TR(0x6c3c9d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3c9f:{NFSU2_TR(0x6c3c9f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6c3ca1:{NFSU2_TR(0x6c3ca1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ca4:{NFSU2_TR(0x6c3ca4);
if(r1(R+518)){{goto L6c3cdb;}}
}
B6c3ca6:L6c3ca6:{c.instructions+=2;NFSU2_TR(0x6c3ca6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ca9:{NFSU2_TR(0x6c3ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3cdb;}}
}
B6c3cab:L6c3cab:{c.instructions+=2;NFSU2_TR(0x6c3cab);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3cad:{NFSU2_TR(0x6c3cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3cb2ull));
TAIL_STATIC(0x699317u,699);
}
B6c3cb2:L6c3cb2:{c.instructions+=2;NFSU2_TR(0x6c3cb2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3cb4:{NFSU2_TR(0x6c3cb4);
if(r1(R+518)){{goto L6c3cbf;}}
}
B6c3cb6:L6c3cb6:{c.instructions+=2;NFSU2_TR(0x6c3cb6);
__builtin_memmove((R+4),(R+0),4);
}
B6c3cb8:{NFSU2_TR(0x6c3cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3cbdull));
TAIL_STATIC(0x698e7du,698);
}
B6c3cbd:L6c3cbd:{c.instructions+=1;NFSU2_TR(0x6c3cbd);
{goto L6c3cc1;}
}
B6c3cbf:L6c3cbf:{c.instructions+=1;NFSU2_TR(0x6c3cbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3cc1:L6c3cc1:{c.instructions+=3;NFSU2_TR(0x6c3cc1);
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
B6c3cc3:{NFSU2_TR(0x6c3cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3cc6:{NFSU2_TR(0x6c3cc6);
if(r1(R+518)){{goto L6c3d17;}}
}
B6c3cc8:L6c3cc8:{c.instructions+=6;NFSU2_TR(0x6c3cc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3cc9:{NFSU2_TR(0x6c3cc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3cca:{NFSU2_TR(0x6c3cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c3ccd:{NFSU2_TR(0x6c3ccd);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c3cd3:{NFSU2_TR(0x6c3cd3);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x70b00000ull))));
}
B6c3cd9:{NFSU2_TR(0x6c3cd9);
{goto L6c3d32;}
}
B6c3cdb:L6c3cdb:{c.instructions+=2;NFSU2_TR(0x6c3cdb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3cde:{NFSU2_TR(0x6c3cde);
if(r1(R+518)){{goto L6c3de3;}}
}
B6c3ce4:L6c3ce4:{c.instructions+=2;NFSU2_TR(0x6c3ce4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ce7:{NFSU2_TR(0x6c3ce7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3de3;}}
}
B6c3ced:L6c3ced:{c.instructions+=2;NFSU2_TR(0x6c3ced);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3cf0:{NFSU2_TR(0x6c3cf0);
if(r1(R+518)){{goto L6c3cfa;}}
}
B6c3cf2:L6c3cf2:{c.instructions+=3;NFSU2_TR(0x6c3cf2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3cf4:{NFSU2_TR(0x6c3cf4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c3cf5:{NFSU2_TR(0x6c3cf5);
{goto L6c3fa6;}
}
B6c3cfa:L6c3cfa:{c.instructions+=2;NFSU2_TR(0x6c3cfa);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3cfc:{NFSU2_TR(0x6c3cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3d01ull));
TAIL_STATIC(0x699317u,699);
}
B6c3d01:L6c3d01:{c.instructions+=2;NFSU2_TR(0x6c3d01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3d03:{NFSU2_TR(0x6c3d03);
if(r1(R+518)){{goto L6c3d0e;}}
}
B6c3d05:L6c3d05:{c.instructions+=2;NFSU2_TR(0x6c3d05);
__builtin_memmove((R+4),(R+0),4);
}
B6c3d07:{NFSU2_TR(0x6c3d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3d0cull));
TAIL_STATIC(0x698e7du,698);
}
B6c3d0c:L6c3d0c:{c.instructions+=1;NFSU2_TR(0x6c3d0c);
{goto L6c3d10;}
}
B6c3d0e:L6c3d0e:{c.instructions+=1;NFSU2_TR(0x6c3d0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3d10:L6c3d10:{c.instructions+=3;NFSU2_TR(0x6c3d10);
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
B6c3d12:{NFSU2_TR(0x6c3d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3d15:{NFSU2_TR(0x6c3d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3d21;}}
}
B6c3d17:L6c3d17:{c.instructions+=2;NFSU2_TR(0x6c3d17);
w4(R+0,u32(0x8007000eull));
}
B6c3d1c:{NFSU2_TR(0x6c3d1c);
{goto L6c3fa6;}
}
B6c3d21:L6c3d21:{c.instructions+=5;NFSU2_TR(0x6c3d21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3d22:{NFSU2_TR(0x6c3d22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3d23:{NFSU2_TR(0x6c3d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c3d26:{NFSU2_TR(0x6c3d26);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c3d2c:{NFSU2_TR(0x6c3d2c);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x70c00000ull))));
}
B6c3d32:L6c3d32:{c.instructions+=4;NFSU2_TR(0x6c3d32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3d33:{NFSU2_TR(0x6c3d33);
__builtin_memmove((R+4),(R+0),4);
}
B6c3d35:{NFSU2_TR(0x6c3d35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3d36:{NFSU2_TR(0x6c3d36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3d3bull));
TAIL_STATIC(0x699362u,699);
}
B6c3d3b:L6c3d3b:{c.instructions+=3;NFSU2_TR(0x6c3d3b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6c3d3d:{NFSU2_TR(0x6c3d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3d40:{NFSU2_TR(0x6c3d40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3f95;}}
}
B6c3d46:L6c3d46:{c.instructions+=3;NFSU2_TR(0x6c3d46);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c3d4c:{NFSU2_TR(0x6c3d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3d4f:{NFSU2_TR(0x6c3d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3d54ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c3d54:L6c3d54:{c.instructions+=3;NFSU2_TR(0x6c3d54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c3d56:{NFSU2_TR(0x6c3d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3d59:{NFSU2_TR(0x6c3d59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c3f95;}}
}
B6c3d5f:L6c3d5f:{c.instructions+=7;NFSU2_TR(0x6c3d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3d65:{NFSU2_TR(0x6c3d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c3d68:{NFSU2_TR(0x6c3d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3d6b:{NFSU2_TR(0x6c3d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3d6e:{NFSU2_TR(0x6c3d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3d71:{NFSU2_TR(0x6c3d71);
__builtin_memmove((R+8),(R+4),4);
}
B6c3d73:{NFSU2_TR(0x6c3d73);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3d76:L6c3d76:{c.instructions+=1;NFSU2_TR(0x6c3d76);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c3d78;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3d76u);}goto L6c3d76;}
}
B6c3d78:L6c3d78:{c.instructions+=2;NFSU2_TR(0x6c3d78);
__builtin_memmove((R+4),(R+8),4);
}
B6c3d7a:{NFSU2_TR(0x6c3d7a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c3d7d:L6c3d7d:{c.instructions+=1;NFSU2_TR(0x6c3d7d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c3d7f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3d7du);}goto L6c3d7d;}
}
B6c3d7f:L6c3d7f:{c.instructions+=6;NFSU2_TR(0x6c3d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3d82:{NFSU2_TR(0x6c3d82);
__builtin_memmove((R+4),(R+8),4);
}
B6c3d84:{NFSU2_TR(0x6c3d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3d8a:{NFSU2_TR(0x6c3d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c3d8d:{NFSU2_TR(0x6c3d8d);
__builtin_memmove((R+8),(R+4),4);
}
B6c3d8f:{NFSU2_TR(0x6c3d8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3d92:L6c3d92:{c.instructions+=1;NFSU2_TR(0x6c3d92);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c3d94;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3d92u);}goto L6c3d92;}
}
B6c3d94:L6c3d94:{c.instructions+=2;NFSU2_TR(0x6c3d94);
__builtin_memmove((R+4),(R+8),4);
}
B6c3d96:{NFSU2_TR(0x6c3d96);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c3d99:L6c3d99:{c.instructions+=1;NFSU2_TR(0x6c3d99);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c3d9b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3d99u);}goto L6c3d99;}
}
B6c3d9b:L6c3d9b:{c.instructions+=7;NFSU2_TR(0x6c3d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3d9e:{NFSU2_TR(0x6c3d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3da1:{NFSU2_TR(0x6c3da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3da7:{NFSU2_TR(0x6c3da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c3daa:{NFSU2_TR(0x6c3daa);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6c3dac:{NFSU2_TR(0x6c3dac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3db0:{NFSU2_TR(0x6c3db0);
if(r1(R+518)){{goto L6c3db6;}}
}
B6c3db2:L6c3db2:{c.instructions+=2;NFSU2_TR(0x6c3db2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6c3db4:{NFSU2_TR(0x6c3db4);
{goto L6c3db9;}
}
B6c3db6:L6c3db6:{c.instructions+=1;NFSU2_TR(0x6c3db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6c3db9:L6c3db9:{c.instructions+=2;NFSU2_TR(0x6c3db9);
__builtin_memmove((R+0),(R+4),4);
}
B6c3dbb:{NFSU2_TR(0x6c3dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c3dbe:L6c3dbe:{c.instructions+=1;NFSU2_TR(0x6c3dbe);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c3dc0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3dbeu);}goto L6c3dbe;}
}
B6c3dc0:L6c3dc0:{c.instructions+=2;NFSU2_TR(0x6c3dc0);
__builtin_memmove((R+4),(R+0),4);
}
B6c3dc2:{NFSU2_TR(0x6c3dc2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c3dc5:L6c3dc5:{c.instructions+=1;NFSU2_TR(0x6c3dc5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c3dc7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3dc5u);}goto L6c3dc5;}
}
B6c3dc7:L6c3dc7:{c.instructions+=5;NFSU2_TR(0x6c3dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3dcd:{NFSU2_TR(0x6c3dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3dd0:{NFSU2_TR(0x6c3dd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c3dd3:{NFSU2_TR(0x6c3dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c3dd6:{NFSU2_TR(0x6c3dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3ddbull));
TAIL_STATIC(0x6995c1u,699);
}
B6c3ddb:L6c3ddb:{c.instructions+=2;NFSU2_TR(0x6c3ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3dde:{NFSU2_TR(0x6c3dde);
{goto L6c3f95;}
}
B6c3de3:L6c3de3:{c.instructions+=17;NFSU2_TR(0x6c3de3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3de5:{NFSU2_TR(0x6c3de5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3de8:{NFSU2_TR(0x6c3de8);
__builtin_memmove((R+4),(R+12),4);
}
B6c3dea:{NFSU2_TR(0x6c3dea);
__builtin_memmove((R+0),(R+518),1);
}
B6c3ded:{NFSU2_TR(0x6c3ded);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3dee:{NFSU2_TR(0x6c3dee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3def:{NFSU2_TR(0x6c3def);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3df2:{NFSU2_TR(0x6c3df2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3df3:{NFSU2_TR(0x6c3df3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3df9:{NFSU2_TR(0x6c3df9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3dfa:{NFSU2_TR(0x6c3dfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3dfd:{NFSU2_TR(0x6c3dfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3dfe:{NFSU2_TR(0x6c3dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c3e04:{NFSU2_TR(0x6c3e04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3e05:{NFSU2_TR(0x6c3e05);
u8 U[4];
w4(U+0,u32(0x7bda00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3e0a:{NFSU2_TR(0x6c3e0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c3e10:{NFSU2_TR(0x6c3e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3e15ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c3e15:L6c3e15:{c.instructions+=3;NFSU2_TR(0x6c3e15);
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
B6c3e17:{NFSU2_TR(0x6c3e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e1a:{NFSU2_TR(0x6c3e1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3fa3;}}
}
B6c3e20:L6c3e20:{c.instructions+=3;NFSU2_TR(0x6c3e20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3e22:{NFSU2_TR(0x6c3e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e25:{NFSU2_TR(0x6c3e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e28:L6c3e28:{c.instructions+=1;NFSU2_TR(0x6c3e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e2c:L6c3e2c:{c.instructions+=4;NFSU2_TR(0x6c3e2c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c3e2e:{NFSU2_TR(0x6c3e2e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3e30:{NFSU2_TR(0x6c3e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e33:{NFSU2_TR(0x6c3e33);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c3f6f;}}
}
B6c3e39:L6c3e39:{c.instructions+=1;NFSU2_TR(0x6c3e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3e3c:L6c3e3c:{c.instructions+=33;NFSU2_TR(0x6c3e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3e3f:{NFSU2_TR(0x6c3e3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c3e42:{NFSU2_TR(0x6c3e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6c3e45:{NFSU2_TR(0x6c3e45);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff1cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6c3e4c:{NFSU2_TR(0x6c3e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e4f:{NFSU2_TR(0x6c3e4f);
__builtin_memmove((R+28),(R+8),4);
}
B6c3e51:{NFSU2_TR(0x6c3e51);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6c3e53:{NFSU2_TR(0x6c3e53);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff2cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c3e5a:{NFSU2_TR(0x6c3e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3e5d:{NFSU2_TR(0x6c3e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e60:{NFSU2_TR(0x6c3e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c3e63:{NFSU2_TR(0x6c3e63);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6c3e65:{NFSU2_TR(0x6c3e65);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff4cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6c3e6c:{NFSU2_TR(0x6c3e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3e6f:{NFSU2_TR(0x6c3e6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c3e72:{NFSU2_TR(0x6c3e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3e75:{NFSU2_TR(0x6c3e75);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff3cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c3e7c:{NFSU2_TR(0x6c3e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e7f:{NFSU2_TR(0x6c3e7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3e82:{NFSU2_TR(0x6c3e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e85:{NFSU2_TR(0x6c3e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3e88:{NFSU2_TR(0x6c3e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c3e8b:{NFSU2_TR(0x6c3e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e8e:{NFSU2_TR(0x6c3e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3e91:{NFSU2_TR(0x6c3e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3e94:{NFSU2_TR(0x6c3e94);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3e97:{NFSU2_TR(0x6c3e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3e9a:{NFSU2_TR(0x6c3e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3e9d:{NFSU2_TR(0x6c3e9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3ea0:{NFSU2_TR(0x6c3ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3ea3:{NFSU2_TR(0x6c3ea3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3ea5:{NFSU2_TR(0x6c3ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3ea8:{NFSU2_TR(0x6c3ea8);
if(r1(R+518)){{goto L6c3ebf;}}
}
B6c3eaa:L6c3eaa:{c.instructions+=4;NFSU2_TR(0x6c3eaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3ead:{NFSU2_TR(0x6c3ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3eb0:{NFSU2_TR(0x6c3eb0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3eb2:{NFSU2_TR(0x6c3eb2);
if(r1(R+518)){{goto L6c3ebf;}}
}
B6c3eb4:L6c3eb4:{c.instructions+=2;NFSU2_TR(0x6c3eb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3eb8:{NFSU2_TR(0x6c3eb8);
if(r1(R+518)){{goto L6c3ee0;}}
}
B6c3eba:L6c3eba:{c.instructions+=2;NFSU2_TR(0x6c3eba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ebd:{NFSU2_TR(0x6c3ebd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3ee0;}}
}
B6c3ebf:L6c3ebf:{c.instructions+=6;NFSU2_TR(0x6c3ebf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3ec2:{NFSU2_TR(0x6c3ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3ec5:{NFSU2_TR(0x6c3ec5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c3ec8:{NFSU2_TR(0x6c3ec8);
w4(R+28,u32(u32(r4(R+28))^u32(u32(0x80000ull))));
}
B6c3ece:{NFSU2_TR(0x6c3ece);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ed1:{NFSU2_TR(0x6c3ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3ee0;}}
}
B6c3ed3:L6c3ed3:{c.instructions+=3;NFSU2_TR(0x6c3ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3ed6:{NFSU2_TR(0x6c3ed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ed9:{NFSU2_TR(0x6c3ed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3ee0;}}
}
B6c3edb:L6c3edb:{c.instructions+=3;NFSU2_TR(0x6c3edb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3edd:{NFSU2_TR(0x6c3edd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c3ede:{NFSU2_TR(0x6c3ede);
{goto L6c3f4a;}
}
B6c3ee0:L6c3ee0:{c.instructions+=2;NFSU2_TR(0x6c3ee0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ee3:{NFSU2_TR(0x6c3ee3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3f48;}}
}
B6c3ee5:L6c3ee5:{c.instructions+=5;NFSU2_TR(0x6c3ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3ee8:{NFSU2_TR(0x6c3ee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c3eeb:{NFSU2_TR(0x6c3eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3eee:{NFSU2_TR(0x6c3eee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3ef1:{NFSU2_TR(0x6c3ef1);
if(r1(R+518)){{goto L6c3f07;}}
}
B6c3ef3:L6c3ef3:{c.instructions+=4;NFSU2_TR(0x6c3ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3ef6:{NFSU2_TR(0x6c3ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3ef9:{NFSU2_TR(0x6c3ef9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3efc:{NFSU2_TR(0x6c3efc);
if(r1(R+518)){{goto L6c3f07;}}
}
B6c3efe:L6c3efe:{c.instructions+=2;NFSU2_TR(0x6c3efe);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3f01:{NFSU2_TR(0x6c3f01);
if(r1(R+518)){{goto L6c3f18;}}
}
B6c3f03:L6c3f03:{c.instructions+=2;NFSU2_TR(0x6c3f03);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3f05:{NFSU2_TR(0x6c3f05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3f18;}}
}
B6c3f07:L6c3f07:{c.instructions+=5;NFSU2_TR(0x6c3f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3f0a:{NFSU2_TR(0x6c3f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3f0d:{NFSU2_TR(0x6c3f0d);
w4(R+8,u32(u32(r4(R+8))^u32(u32(0x80000ull))));
}
B6c3f13:{NFSU2_TR(0x6c3f13);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3f16:{NFSU2_TR(0x6c3f16);
if(r1(R+518)){{goto L6c3f41;}}
}
B6c3f18:L6c3f18:{c.instructions+=4;NFSU2_TR(0x6c3f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3f1b:{NFSU2_TR(0x6c3f1b);
w4(R+8,u32(0x100ull));
}
B6c3f20:{NFSU2_TR(0x6c3f20);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c3f23:{NFSU2_TR(0x6c3f23);
if(r1(R+518)){{goto L6c3f48;}}
}
B6c3f25:L6c3f25:{c.instructions+=3;NFSU2_TR(0x6c3f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c3f28:{NFSU2_TR(0x6c3f28);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c3f2b:{NFSU2_TR(0x6c3f2b);
if(r1(R+518)){{goto L6c3f48;}}
}
B6c3f2d:L6c3f2d:{c.instructions+=8;NFSU2_TR(0x6c3f2d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c3f30:{NFSU2_TR(0x6c3f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3f33:{NFSU2_TR(0x6c3f33);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6c3f35:{NFSU2_TR(0x6c3f35);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c3f38:{NFSU2_TR(0x6c3f38);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c3f3a:{NFSU2_TR(0x6c3f3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c3f3c:{NFSU2_TR(0x6c3f3c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c3f3f:{NFSU2_TR(0x6c3f3f);
if(r1(R+514)){{goto L6c3f48;}}
}
B6c3f41:L6c3f41:{c.instructions+=4;NFSU2_TR(0x6c3f41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3f43:{NFSU2_TR(0x6c3f43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c3f44:{NFSU2_TR(0x6c3f44);
__builtin_memmove((R+28),(R+0),4);
}
B6c3f46:{NFSU2_TR(0x6c3f46);
{goto L6c3f4c;}
}
B6c3f48:L6c3f48:{c.instructions+=1;NFSU2_TR(0x6c3f48);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3f4a:L6c3f4a:{c.instructions+=1;NFSU2_TR(0x6c3f4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c3f4c:L6c3f4c:{c.instructions+=3;NFSU2_TR(0x6c3f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c3f4f:{NFSU2_TR(0x6c3f4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3f51:{NFSU2_TR(0x6c3f51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3f58;}}
}
B6c3f53:L6c3f53:{c.instructions+=2;NFSU2_TR(0x6c3f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3f56:{NFSU2_TR(0x6c3f56);
{goto L6c3f5f;}
}
B6c3f58:L6c3f58:{c.instructions+=2;NFSU2_TR(0x6c3f58);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3f5b:{NFSU2_TR(0x6c3f5b);
if(r1(R+518)){{goto L6c3f5f;}}
}
B6c3f5d:L6c3f5d:{c.instructions+=1;NFSU2_TR(0x6c3f5d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3f5f:L6c3f5f:{c.instructions+=2;NFSU2_TR(0x6c3f5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3f61:{NFSU2_TR(0x6c3f61);
if(r1(R+518)){{goto L6c3f73;}}
}
B6c3f63:L6c3f63:{c.instructions+=4;NFSU2_TR(0x6c3f63);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6c3f64:{NFSU2_TR(0x6c3f64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6c3f66:{NFSU2_TR(0x6c3f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3f69:{NFSU2_TR(0x6c3f69);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3e3cu);}goto L6c3e3c;}}
}
B6c3f6f:L6c3f6f:{c.instructions+=2;NFSU2_TR(0x6c3f6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c3f71:{NFSU2_TR(0x6c3f71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3fad;}}
}
B6c3f73:L6c3f73:{c.instructions+=3;NFSU2_TR(0x6c3f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3f77:{NFSU2_TR(0x6c3f77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
}
B6c3f7b:{NFSU2_TR(0x6c3f7b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3e2cu);}goto L6c3e2c;}}
}
B6c3f81:L6c3f81:{c.instructions+=3;NFSU2_TR(0x6c3f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3f84:{NFSU2_TR(0x6c3f84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6c3f88:{NFSU2_TR(0x6c3f88);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3e28u);}goto L6c3e28;}}
}
B6c3f8e:L6c3f8e:{c.instructions+=1;NFSU2_TR(0x6c3f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3f95:L6c3f95:{c.instructions+=3;NFSU2_TR(0x6c3f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3f98:{NFSU2_TR(0x6c3f98);
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
B6c3f9a:{NFSU2_TR(0x6c3f9a);
if(r1(R+518)){{goto L6c3fa3;}}
}
B6c3f9c:L6c3f9c:{c.instructions+=2;NFSU2_TR(0x6c3f9c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3f9e:{NFSU2_TR(0x6c3f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3fa3ull));
TAIL_STATIC(0x6739efu,673);
}
B6c3fa3:L6c3fa3:{c.instructions+=1;NFSU2_TR(0x6c3fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c3fa6:L6c3fa6:{c.instructions+=5;NFSU2_TR(0x6c3fa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c3fa7:{NFSU2_TR(0x6c3fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c3fa8:{NFSU2_TR(0x6c3fa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c3fa9:{NFSU2_TR(0x6c3fa9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c3faa:{NFSU2_TR(0x6c3faa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c3fad:L6c3fad:{c.instructions+=2;NFSU2_TR(0x6c3fad);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3faf:{NFSU2_TR(0x6c3faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3fb4ull));
TAIL_STATIC(0x699317u,699);
}
B6c3fb4:L6c3fb4:{c.instructions+=3;NFSU2_TR(0x6c3fb4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c3fb6:{NFSU2_TR(0x6c3fb6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c3fb8:{NFSU2_TR(0x6c3fb8);
if(r1(R+518)){{goto L6c3fc5;}}
}
B6c3fba:L6c3fba:{c.instructions+=2;NFSU2_TR(0x6c3fba);
__builtin_memmove((R+4),(R+0),4);
}
B6c3fbc:{NFSU2_TR(0x6c3fbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c3fc1ull));
TAIL_STATIC(0x698e7du,698);
}
B6c3fc1:L6c3fc1:{c.instructions+=2;NFSU2_TR(0x6c3fc1);
__builtin_memmove((R+4),(R+0),4);
}
B6c3fc3:{NFSU2_TR(0x6c3fc3);
{goto L6c3fc7;}
}
B6c3fc5:L6c3fc5:{c.instructions+=1;NFSU2_TR(0x6c3fc5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c3fc7:L6c3fc7:{c.instructions+=3;NFSU2_TR(0x6c3fc7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6c3fc9:{NFSU2_TR(0x6c3fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c3fcc:{NFSU2_TR(0x6c3fcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c3fd7;}}
}
B6c3fce:L6c3fce:{c.instructions+=2;NFSU2_TR(0x6c3fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c3fd5:{NFSU2_TR(0x6c3fd5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c3fa3u);}goto L6c3fa3;}
}
B6c3fd7:L6c3fd7:{c.instructions+=2;NFSU2_TR(0x6c3fd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3fda:{NFSU2_TR(0x6c3fda);
if(r1(R+518)){TAIL_STATIC(0x6c4103u,6c4);}
}
B6c3fe0:L6c3fe0:{c.instructions+=2;NFSU2_TR(0x6c3fe0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3fe4:{NFSU2_TR(0x6c3fe4);
if(r1(R+518)){TAIL_STATIC(0x6c4108u,6c4);}
}
B6c3fea:L6c3fea:{c.instructions+=2;NFSU2_TR(0x6c3fea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c3fed:{NFSU2_TR(0x6c3fed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c4011u,6c4);}
}
B6c3fef:L6c3fef:{c.instructions+=8;NFSU2_TR(0x6c3fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c3ff2:{NFSU2_TR(0x6c3ff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3ff3:{NFSU2_TR(0x6c3ff3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3ff4:{NFSU2_TR(0x6c3ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c3ff7:{NFSU2_TR(0x6c3ff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c3ff8:{NFSU2_TR(0x6c3ff8);
__builtin_memmove((R+0),(R+24),4);
}
B6c3ffa:{NFSU2_TR(0x6c3ffa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c3fff:{NFSU2_TR(0x6c3fff);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70c00000ull))));
TAIL_STATIC(0x6c4004u,6c4);
}
XIT:NFSU2_TR_EXIT(0x6c3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
