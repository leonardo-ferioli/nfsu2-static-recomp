#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b1(u8* __restrict R,Cpu& c);
u32 body_6b2(u8* __restrict R,Cpu& c);
u32 body_6b4(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b3(u8* __restrict R,Cpu& c);
u32 page_6b3(Cpu& c){return body_6b3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b3003:goto L6b3003;
case 0x6b3005:goto L6b3005;
case 0x6b3007:goto L6b3007;
case 0x6b300a:c.instructions+=1;goto B6b300a;
case 0x6b300c:goto L6b300c;
case 0x6b300e:goto L6b300e;
case 0x6b3011:c.instructions+=1;goto B6b3011;
case 0x6b3013:goto L6b3013;
case 0x6b3015:goto L6b3015;
case 0x6b3018:c.instructions+=5;goto B6b3018;
case 0x6b301e:c.instructions+=4;goto B6b301e;
case 0x6b3024:c.instructions+=3;goto B6b3024;
case 0x6b3027:c.instructions+=2;goto B6b3027;
case 0x6b302a:c.instructions+=1;goto B6b302a;
case 0x6b3030:goto L6b3030;
case 0x6b3033:c.instructions+=1;goto B6b3033;
case 0x6b3039:goto L6b3039;
case 0x6b303c:c.instructions+=7;goto B6b303c;
case 0x6b303f:c.instructions+=6;goto B6b303f;
case 0x6b3042:c.instructions+=5;goto B6b3042;
case 0x6b3044:c.instructions+=4;goto B6b3044;
case 0x6b3046:c.instructions+=3;goto B6b3046;
case 0x6b304c:c.instructions+=2;goto B6b304c;
case 0x6b3052:c.instructions+=1;goto B6b3052;
case 0x6b3054:goto L6b3054;
case 0x6b305a:c.instructions+=1;goto B6b305a;
case 0x6b305c:goto L6b305c;
case 0x6b3062:c.instructions+=1;goto B6b3062;
case 0x6b3064:goto L6b3064;
case 0x6b306a:c.instructions+=1;goto B6b306a;
case 0x6b306c:goto L6b306c;
case 0x6b3072:c.instructions+=1;goto B6b3072;
case 0x6b3074:goto L6b3074;
case 0x6b307a:c.instructions+=1;goto B6b307a;
case 0x6b307c:goto L6b307c;
case 0x6b3082:c.instructions+=1;goto B6b3082;
case 0x6b3088:goto L6b3088;
case 0x6b308e:c.instructions+=3;goto B6b308e;
case 0x6b3094:c.instructions+=2;goto B6b3094;
case 0x6b3097:c.instructions+=1;goto B6b3097;
case 0x6b3099:goto L6b3099;
case 0x6b309b:c.instructions+=1;goto B6b309b;
case 0x6b309e:goto L6b309e;
case 0x6b30a1:c.instructions+=7;goto B6b30a1;
case 0x6b30a4:c.instructions+=6;goto B6b30a4;
case 0x6b30a7:c.instructions+=5;goto B6b30a7;
case 0x6b30a9:c.instructions+=4;goto B6b30a9;
case 0x6b30ac:c.instructions+=3;goto B6b30ac;
case 0x6b30af:c.instructions+=2;goto B6b30af;
case 0x6b30b5:c.instructions+=1;goto B6b30b5;
case 0x6b30b7:goto L6b30b7;
case 0x6b30bb:c.instructions+=1;goto B6b30bb;
case 0x6b30bd:goto L6b30bd;
case 0x6b30c3:c.instructions+=1;goto B6b30c3;
case 0x6b30c5:goto L6b30c5;
case 0x6b30c9:c.instructions+=1;goto B6b30c9;
case 0x6b30cf:goto L6b30cf;
case 0x6b30d3:c.instructions+=2;goto B6b30d3;
case 0x6b30d8:c.instructions+=1;goto B6b30d8;
case 0x6b30da:goto L6b30da;
case 0x6b30e0:c.instructions+=3;goto B6b30e0;
case 0x6b30e5:c.instructions+=2;goto B6b30e5;
case 0x6b30ea:c.instructions+=1;goto B6b30ea;
case 0x6b30ec:goto L6b30ec;
case 0x6b30f1:c.instructions+=2;goto B6b30f1;
case 0x6b30f6:c.instructions+=1;goto B6b30f6;
case 0x6b30fb:goto L6b30fb;
case 0x6b30fe:c.instructions+=8;goto B6b30fe;
case 0x6b3101:c.instructions+=7;goto B6b3101;
case 0x6b3104:c.instructions+=6;goto B6b3104;
case 0x6b3105:c.instructions+=5;goto B6b3105;
case 0x6b3108:c.instructions+=4;goto B6b3108;
case 0x6b310a:c.instructions+=3;goto B6b310a;
case 0x6b310b:c.instructions+=2;goto B6b310b;
case 0x6b310c:c.instructions+=1;goto B6b310c;
case 0x6b3111:goto L6b3111;
case 0x6b3113:c.instructions+=2;goto B6b3113;
case 0x6b3115:c.instructions+=1;goto B6b3115;
case 0x6b311b:goto L6b311b;
case 0x6b311e:c.instructions+=3;goto B6b311e;
case 0x6b3121:c.instructions+=2;goto B6b3121;
case 0x6b3124:c.instructions+=1;goto B6b3124;
case 0x6b312a:goto L6b312a;
case 0x6b312c:c.instructions+=3;goto B6b312c;
case 0x6b312e:c.instructions+=2;goto B6b312e;
case 0x6b3131:c.instructions+=1;goto B6b3131;
case 0x6b3133:goto L6b3133;
case 0x6b3136:c.instructions+=2;goto B6b3136;
case 0x6b3139:c.instructions+=1;goto B6b3139;
case 0x6b313b:goto L6b313b;
case 0x6b313d:c.instructions+=6;goto B6b313d;
case 0x6b3140:c.instructions+=5;goto B6b3140;
case 0x6b3142:c.instructions+=4;goto B6b3142;
case 0x6b3143:c.instructions+=3;goto B6b3143;
case 0x6b3146:c.instructions+=2;goto B6b3146;
case 0x6b3149:c.instructions+=1;goto B6b3149;
case 0x6b314b:goto L6b314b;
case 0x6b314c:c.instructions+=8;goto B6b314c;
case 0x6b314d:c.instructions+=7;goto B6b314d;
case 0x6b3150:c.instructions+=6;goto B6b3150;
case 0x6b3156:c.instructions+=5;goto B6b3156;
case 0x6b3159:c.instructions+=4;goto B6b3159;
case 0x6b315b:c.instructions+=3;goto B6b315b;
case 0x6b315c:c.instructions+=2;goto B6b315c;
case 0x6b3162:c.instructions+=1;goto B6b3162;
case 0x6b3167:goto L6b3167;
case 0x6b3169:c.instructions+=2;goto B6b3169;
case 0x6b316b:c.instructions+=1;goto B6b316b;
case 0x6b316d:goto L6b316d;
case 0x6b316f:c.instructions+=2;goto B6b316f;
case 0x6b3172:c.instructions+=1;goto B6b3172;
case 0x6b3174:goto L6b3174;
case 0x6b3177:c.instructions+=5;goto B6b3177;
case 0x6b317a:c.instructions+=4;goto B6b317a;
case 0x6b317e:c.instructions+=3;goto B6b317e;
case 0x6b317f:c.instructions+=2;goto B6b317f;
case 0x6b3182:c.instructions+=1;goto B6b3182;
case 0x6b3184:goto L6b3184;
case 0x6b3187:c.instructions+=8;goto B6b3187;
case 0x6b318d:c.instructions+=7;goto B6b318d;
case 0x6b3193:c.instructions+=6;goto B6b3193;
case 0x6b3195:c.instructions+=5;goto B6b3195;
case 0x6b3198:c.instructions+=4;goto B6b3198;
case 0x6b319b:c.instructions+=3;goto B6b319b;
case 0x6b319c:c.instructions+=2;goto B6b319c;
case 0x6b31a2:c.instructions+=1;goto B6b31a2;
case 0x6b31a7:goto L6b31a7;
case 0x6b31a9:c.instructions+=2;goto B6b31a9;
case 0x6b31ab:c.instructions+=1;goto B6b31ab;
case 0x6b31ad:goto L6b31ad;
case 0x6b31af:c.instructions+=3;goto B6b31af;
case 0x6b31b1:c.instructions+=2;goto B6b31b1;
case 0x6b31b4:c.instructions+=1;goto B6b31b4;
case 0x6b31b6:goto L6b31b6;
case 0x6b31b9:c.instructions+=3;goto B6b31b9;
case 0x6b31bc:c.instructions+=2;goto B6b31bc;
case 0x6b31c0:c.instructions+=1;goto B6b31c0;
case 0x6b31c2:goto L6b31c2;
case 0x6b31c5:c.instructions+=1;goto B6b31c5;
case 0x6b31c8:goto L6b31c8;
case 0x6b31c9:c.instructions+=2;goto B6b31c9;
case 0x6b31cc:c.instructions+=1;goto B6b31cc;
case 0x6b31ce:goto L6b31ce;
case 0x6b31d2:c.instructions+=1;goto B6b31d2;
case 0x6b31d4:goto L6b31d4;
case 0x6b31d7:c.instructions+=1;goto B6b31d7;
case 0x6b31dc:goto L6b31dc;
case 0x6b31dd:goto L6b31dd;
case 0x6b31e1:c.instructions+=1;goto B6b31e1;
case 0x6b31e3:goto L6b31e3;
case 0x6b31e6:c.instructions+=1;goto B6b31e6;
case 0x6b31eb:goto L6b31eb;
case 0x6b31ec:goto L6b31ec;
case 0x6b31ee:goto L6b31ee;
case 0x6b31ef:c.instructions+=4;goto B6b31ef;
case 0x6b31f0:c.instructions+=3;goto B6b31f0;
case 0x6b31f1:c.instructions+=2;goto B6b31f1;
case 0x6b31f2:c.instructions+=1;goto B6b31f2;
case 0x6b31f3:goto L6b31f3;
case 0x6b31f8:c.instructions+=4;goto B6b31f8;
case 0x6b31fd:c.instructions+=3;goto B6b31fd;
case 0x6b31ff:c.instructions+=2;goto B6b31ff;
case 0x6b3200:c.instructions+=1;goto B6b3200;
case 0x6b3205:goto L6b3205;
case 0x6b3208:c.instructions+=2;goto B6b3208;
case 0x6b320d:c.instructions+=1;goto B6b320d;
case 0x6b320f:goto L6b320f;
case 0x6b3214:c.instructions+=1;goto B6b3214;
case 0x6b3219:goto L6b3219;
case 0x6b321b:c.instructions+=2;goto B6b321b;
case 0x6b321c:c.instructions+=1;goto B6b321c;
case 0x6b3221:goto L6b3221;
case 0x6b3224:c.instructions+=2;goto B6b3224;
case 0x6b3229:c.instructions+=1;goto B6b3229;
case 0x6b322b:goto L6b322b;
case 0x6b322d:c.instructions+=11;goto B6b322d;
case 0x6b322e:c.instructions+=10;goto B6b322e;
case 0x6b3230:c.instructions+=9;goto B6b3230;
case 0x6b3231:c.instructions+=8;goto B6b3231;
case 0x6b3232:c.instructions+=7;goto B6b3232;
case 0x6b3235:c.instructions+=6;goto B6b3235;
case 0x6b3239:c.instructions+=5;goto B6b3239;
case 0x6b323c:c.instructions+=4;goto B6b323c;
case 0x6b323f:c.instructions+=3;goto B6b323f;
case 0x6b3242:c.instructions+=2;goto B6b3242;
case 0x6b3245:c.instructions+=1;goto B6b3245;
case 0x6b3247:goto L6b3247;
case 0x6b3248:c.instructions+=2;goto B6b3248;
case 0x6b3249:c.instructions+=1;goto B6b3249;
case 0x6b324a:goto L6b324a;
case 0x6b324d:c.instructions+=4;goto B6b324d;
case 0x6b3250:c.instructions+=3;goto B6b3250;
case 0x6b3252:c.instructions+=2;goto B6b3252;
case 0x6b3254:c.instructions+=1;goto B6b3254;
case 0x6b3256:goto L6b3256;
case 0x6b3259:c.instructions+=1;goto B6b3259;
case 0x6b325b:goto L6b325b;
case 0x6b325e:c.instructions+=6;goto B6b325e;
case 0x6b3261:c.instructions+=5;goto B6b3261;
case 0x6b3264:c.instructions+=4;goto B6b3264;
case 0x6b3267:c.instructions+=3;goto B6b3267;
case 0x6b326a:c.instructions+=2;goto B6b326a;
case 0x6b326d:c.instructions+=1;goto B6b326d;
case 0x6b326f:goto L6b326f;
case 0x6b3272:c.instructions+=2;goto B6b3272;
case 0x6b3275:c.instructions+=1;goto B6b3275;
case 0x6b3277:goto L6b3277;
case 0x6b327a:c.instructions+=7;goto B6b327a;
case 0x6b327d:c.instructions+=6;goto B6b327d;
case 0x6b3280:c.instructions+=5;goto B6b3280;
case 0x6b3283:c.instructions+=4;goto B6b3283;
case 0x6b3286:c.instructions+=3;goto B6b3286;
case 0x6b3289:c.instructions+=2;goto B6b3289;
case 0x6b328c:c.instructions+=1;goto B6b328c;
case 0x6b3292:goto L6b3292;
case 0x6b3293:c.instructions+=2;goto B6b3293;
case 0x6b3296:c.instructions+=1;goto B6b3296;
case 0x6b3298:goto L6b3298;
case 0x6b3299:c.instructions+=2;goto B6b3299;
case 0x6b329c:c.instructions+=1;goto B6b329c;
case 0x6b329e:goto L6b329e;
case 0x6b329f:c.instructions+=2;goto B6b329f;
case 0x6b32a0:c.instructions+=1;goto B6b32a0;
case 0x6b32a1:goto L6b32a1;
case 0x6b32a4:c.instructions+=2;goto B6b32a4;
case 0x6b32a5:c.instructions+=1;goto B6b32a5;
case 0x6b32a8:goto L6b32a8;
case 0x6b32aa:c.instructions+=10;goto B6b32aa;
case 0x6b32ab:c.instructions+=9;goto B6b32ab;
case 0x6b32ac:c.instructions+=8;goto B6b32ac;
case 0x6b32ae:c.instructions+=7;goto B6b32ae;
case 0x6b32b1:c.instructions+=6;goto B6b32b1;
case 0x6b32b2:c.instructions+=5;goto B6b32b2;
case 0x6b32b5:c.instructions+=4;goto B6b32b5;
case 0x6b32b6:c.instructions+=3;goto B6b32b6;
case 0x6b32b8:c.instructions+=2;goto B6b32b8;
case 0x6b32ba:c.instructions+=1;goto B6b32ba;
case 0x6b32bf:goto L6b32bf;
case 0x6b32c5:c.instructions+=4;goto B6b32c5;
case 0x6b32c8:c.instructions+=3;goto B6b32c8;
case 0x6b32cb:c.instructions+=2;goto B6b32cb;
case 0x6b32cc:c.instructions+=1;goto B6b32cc;
case 0x6b32d1:goto L6b32d1;
case 0x6b32d7:c.instructions+=4;goto B6b32d7;
case 0x6b32d8:c.instructions+=3;goto B6b32d8;
case 0x6b32d9:c.instructions+=2;goto B6b32d9;
case 0x6b32df:c.instructions+=1;goto B6b32df;
case 0x6b32e5:goto L6b32e5;
case 0x6b32e7:c.instructions+=1;goto B6b32e7;
case 0x6b32ed:goto L6b32ed;
case 0x6b32f0:c.instructions+=1;goto B6b32f0;
case 0x6b32f2:goto L6b32f2;
case 0x6b32f4:c.instructions+=1;goto B6b32f4;
case 0x6b32f9:goto L6b32f9;
case 0x6b32fb:c.instructions+=1;goto B6b32fb;
case 0x6b32fd:goto L6b32fd;
case 0x6b32ff:c.instructions+=1;goto B6b32ff;
case 0x6b3304:goto L6b3304;
case 0x6b3306:goto L6b3306;
case 0x6b3308:goto L6b3308;
case 0x6b330e:c.instructions+=5;goto B6b330e;
case 0x6b3311:c.instructions+=4;goto B6b3311;
case 0x6b3317:c.instructions+=3;goto B6b3317;
case 0x6b331a:c.instructions+=2;goto B6b331a;
case 0x6b331c:c.instructions+=1;goto B6b331c;
case 0x6b331e:goto L6b331e;
case 0x6b3321:c.instructions+=2;goto B6b3321;
case 0x6b3324:c.instructions+=1;goto B6b3324;
case 0x6b3329:goto L6b3329;
case 0x6b332b:c.instructions+=2;goto B6b332b;
case 0x6b332d:c.instructions+=1;goto B6b332d;
case 0x6b332f:goto L6b332f;
case 0x6b3330:c.instructions+=2;goto B6b3330;
case 0x6b3333:c.instructions+=1;goto B6b3333;
case 0x6b3335:goto L6b3335;
case 0x6b3337:c.instructions+=2;goto B6b3337;
case 0x6b333a:c.instructions+=1;goto B6b333a;
case 0x6b333c:goto L6b333c;
case 0x6b3341:c.instructions+=1;goto B6b3341;
case 0x6b3346:goto L6b3346;
case 0x6b3348:c.instructions+=1;goto B6b3348;
case 0x6b334a:goto L6b334a;
case 0x6b334c:c.instructions+=1;goto B6b334c;
case 0x6b3351:goto L6b3351;
case 0x6b3353:goto L6b3353;
case 0x6b3355:goto L6b3355;
case 0x6b335b:c.instructions+=5;goto B6b335b;
case 0x6b335e:c.instructions+=4;goto B6b335e;
case 0x6b3364:c.instructions+=3;goto B6b3364;
case 0x6b3367:c.instructions+=2;goto B6b3367;
case 0x6b3369:c.instructions+=1;goto B6b3369;
case 0x6b336b:goto L6b336b;
case 0x6b336e:c.instructions+=2;goto B6b336e;
case 0x6b3371:c.instructions+=1;goto B6b3371;
case 0x6b3376:goto L6b3376;
case 0x6b3378:c.instructions+=2;goto B6b3378;
case 0x6b337a:c.instructions+=1;goto B6b337a;
case 0x6b337c:goto L6b337c;
case 0x6b337d:c.instructions+=2;goto B6b337d;
case 0x6b3380:c.instructions+=1;goto B6b3380;
case 0x6b3382:goto L6b3382;
case 0x6b3385:c.instructions+=4;goto B6b3385;
case 0x6b338b:c.instructions+=3;goto B6b338b;
case 0x6b338e:c.instructions+=2;goto B6b338e;
case 0x6b3394:c.instructions+=1;goto B6b3394;
case 0x6b3396:goto L6b3396;
case 0x6b339b:goto L6b339b;
case 0x6b339c:c.instructions+=4;goto B6b339c;
case 0x6b339d:c.instructions+=3;goto B6b339d;
case 0x6b339f:c.instructions+=2;goto B6b339f;
case 0x6b33a0:c.instructions+=1;goto B6b33a0;
case 0x6b33a1:goto L6b33a1;
case 0x6b33a3:c.instructions+=8;goto B6b33a3;
case 0x6b33a4:c.instructions+=7;goto B6b33a4;
case 0x6b33a6:c.instructions+=6;goto B6b33a6;
case 0x6b33a7:c.instructions+=5;goto B6b33a7;
case 0x6b33ab:c.instructions+=4;goto B6b33ab;
case 0x6b33ad:c.instructions+=3;goto B6b33ad;
case 0x6b33b4:c.instructions+=2;goto B6b33b4;
case 0x6b33b5:c.instructions+=1;goto B6b33b5;
case 0x6b33b7:goto L6b33b7;
case 0x6b33b8:c.instructions+=1;goto B6b33b8;
case 0x6b33b9:goto L6b33b9;
case 0x6b33bf:c.instructions+=11;goto B6b33bf;
case 0x6b33c2:c.instructions+=10;goto B6b33c2;
case 0x6b33c5:c.instructions+=9;goto B6b33c5;
case 0x6b33c8:c.instructions+=8;goto B6b33c8;
case 0x6b33cb:c.instructions+=7;goto B6b33cb;
case 0x6b33ce:c.instructions+=6;goto B6b33ce;
case 0x6b33d1:c.instructions+=5;goto B6b33d1;
case 0x6b33d4:c.instructions+=4;goto B6b33d4;
case 0x6b33d7:c.instructions+=3;goto B6b33d7;
case 0x6b33da:c.instructions+=2;goto B6b33da;
case 0x6b33dc:c.instructions+=1;goto B6b33dc;
case 0x6b33df:goto L6b33df;
case 0x6b33e1:goto L6b33e1;
case 0x6b33e3:c.instructions+=1;goto B6b33e3;
case 0x6b33e6:goto L6b33e6;
case 0x6b33e8:goto L6b33e8;
case 0x6b33ee:c.instructions+=9;goto B6b33ee;
case 0x6b33f1:c.instructions+=8;goto B6b33f1;
case 0x6b33f4:c.instructions+=7;goto B6b33f4;
case 0x6b33f7:c.instructions+=6;goto B6b33f7;
case 0x6b33fa:c.instructions+=5;goto B6b33fa;
case 0x6b33fd:c.instructions+=4;goto B6b33fd;
case 0x6b3400:c.instructions+=3;goto B6b3400;
case 0x6b3403:c.instructions+=2;goto B6b3403;
case 0x6b3405:c.instructions+=1;goto B6b3405;
case 0x6b3408:goto L6b3408;
case 0x6b340a:goto L6b340a;
case 0x6b340c:c.instructions+=2;goto B6b340c;
case 0x6b340f:c.instructions+=1;goto B6b340f;
case 0x6b3412:goto L6b3412;
case 0x6b3414:goto L6b3414;
case 0x6b3417:c.instructions+=2;goto B6b3417;
case 0x6b341d:c.instructions+=1;goto B6b341d;
case 0x6b341f:goto L6b341f;
case 0x6b3420:c.instructions+=1;goto B6b3420;
case 0x6b3421:goto L6b3421;
case 0x6b3423:c.instructions+=2;goto B6b3423;
case 0x6b3429:c.instructions+=1;goto B6b3429;
case 0x6b342b:goto L6b342b;
case 0x6b3431:c.instructions+=8;goto B6b3431;
case 0x6b3434:c.instructions+=7;goto B6b3434;
case 0x6b3437:c.instructions+=6;goto B6b3437;
case 0x6b343a:c.instructions+=5;goto B6b343a;
case 0x6b343d:c.instructions+=4;goto B6b343d;
case 0x6b343e:c.instructions+=3;goto B6b343e;
case 0x6b3441:c.instructions+=2;goto B6b3441;
case 0x6b3447:c.instructions+=1;goto B6b3447;
case 0x6b3449:goto L6b3449;
case 0x6b344b:c.instructions+=3;goto B6b344b;
case 0x6b344c:c.instructions+=2;goto B6b344c;
case 0x6b344d:c.instructions+=1;goto B6b344d;
case 0x6b344e:goto L6b344e;
case 0x6b3450:c.instructions+=11;goto B6b3450;
case 0x6b3451:c.instructions+=10;goto B6b3451;
case 0x6b3453:c.instructions+=9;goto B6b3453;
case 0x6b3456:c.instructions+=8;goto B6b3456;
case 0x6b3457:c.instructions+=7;goto B6b3457;
case 0x6b3458:c.instructions+=6;goto B6b3458;
case 0x6b3459:c.instructions+=5;goto B6b3459;
case 0x6b345b:c.instructions+=4;goto B6b345b;
case 0x6b345d:c.instructions+=3;goto B6b345d;
case 0x6b345f:c.instructions+=2;goto B6b345f;
case 0x6b3460:c.instructions+=1;goto B6b3460;
case 0x6b3463:goto L6b3463;
case 0x6b3465:goto L6b3465;
case 0x6b3468:c.instructions+=3;goto B6b3468;
case 0x6b346a:c.instructions+=2;goto B6b346a;
case 0x6b346d:c.instructions+=1;goto B6b346d;
case 0x6b3473:goto L6b3473;
case 0x6b3476:c.instructions+=2;goto B6b3476;
case 0x6b3479:c.instructions+=1;goto B6b3479;
case 0x6b347c:goto L6b347c;
case 0x6b347f:c.instructions+=3;goto B6b347f;
case 0x6b3481:c.instructions+=2;goto B6b3481;
case 0x6b3483:c.instructions+=1;goto B6b3483;
case 0x6b3489:goto L6b3489;
case 0x6b348b:c.instructions+=3;goto B6b348b;
case 0x6b348d:c.instructions+=2;goto B6b348d;
case 0x6b3490:c.instructions+=1;goto B6b3490;
case 0x6b3496:goto L6b3496;
case 0x6b3499:c.instructions+=4;goto B6b3499;
case 0x6b349d:c.instructions+=3;goto B6b349d;
case 0x6b349f:c.instructions+=2;goto B6b349f;
case 0x6b34a2:c.instructions+=1;goto B6b34a2;
case 0x6b34a4:goto L6b34a4;
case 0x6b34a7:goto L6b34a7;
case 0x6b34aa:c.instructions+=5;goto B6b34aa;
case 0x6b34ac:c.instructions+=4;goto B6b34ac;
case 0x6b34af:c.instructions+=3;goto B6b34af;
case 0x6b34b5:c.instructions+=2;goto B6b34b5;
case 0x6b34b8:c.instructions+=1;goto B6b34b8;
case 0x6b34ba:goto L6b34ba;
case 0x6b34be:c.instructions+=2;goto B6b34be;
case 0x6b34c1:c.instructions+=1;goto B6b34c1;
case 0x6b34c3:goto L6b34c3;
case 0x6b34c7:c.instructions+=1;goto B6b34c7;
case 0x6b34c9:goto L6b34c9;
case 0x6b34cc:c.instructions+=3;goto B6b34cc;
case 0x6b34d2:c.instructions+=2;goto B6b34d2;
case 0x6b34d3:c.instructions+=1;goto B6b34d3;
case 0x6b34d8:goto L6b34d8;
case 0x6b34da:c.instructions+=1;goto B6b34da;
case 0x6b34dc:goto L6b34dc;
case 0x6b34e2:c.instructions+=1;goto B6b34e2;
case 0x6b34e4:goto L6b34e4;
case 0x6b34e7:c.instructions+=4;goto B6b34e7;
case 0x6b34eb:c.instructions+=3;goto B6b34eb;
case 0x6b34ec:c.instructions+=2;goto B6b34ec;
case 0x6b34ee:c.instructions+=1;goto B6b34ee;
case 0x6b34f0:goto L6b34f0;
case 0x6b34f2:c.instructions+=1;goto B6b34f2;
case 0x6b34f4:goto L6b34f4;
case 0x6b34f8:c.instructions+=4;goto B6b34f8;
case 0x6b34fb:c.instructions+=3;goto B6b34fb;
case 0x6b34fc:c.instructions+=2;goto B6b34fc;
case 0x6b34fe:c.instructions+=1;goto B6b34fe;
case 0x6b3500:goto L6b3500;
case 0x6b3504:c.instructions+=1;goto B6b3504;
case 0x6b3506:goto L6b3506;
case 0x6b3508:goto L6b3508;
case 0x6b350b:c.instructions+=4;goto B6b350b;
case 0x6b350e:c.instructions+=3;goto B6b350e;
case 0x6b3511:c.instructions+=2;goto B6b3511;
case 0x6b3514:c.instructions+=1;goto B6b3514;
case 0x6b3516:goto L6b3516;
case 0x6b351a:c.instructions+=2;goto B6b351a;
case 0x6b351d:c.instructions+=1;goto B6b351d;
case 0x6b3523:goto L6b3523;
case 0x6b3527:c.instructions+=2;goto B6b3527;
case 0x6b352a:c.instructions+=1;goto B6b352a;
case 0x6b352d:goto L6b352d;
case 0x6b3530:c.instructions+=2;goto B6b3530;
case 0x6b3533:c.instructions+=1;goto B6b3533;
case 0x6b3539:goto L6b3539;
case 0x6b353b:c.instructions+=1;goto B6b353b;
case 0x6b3540:goto L6b3540;
case 0x6b3542:c.instructions+=1;goto B6b3542;
case 0x6b3544:goto L6b3544;
case 0x6b3546:c.instructions+=1;goto B6b3546;
case 0x6b354b:goto L6b354b;
case 0x6b354d:c.instructions+=1;goto B6b354d;
case 0x6b354f:goto L6b354f;
case 0x6b3551:goto L6b3551;
case 0x6b3553:c.instructions+=1;goto B6b3553;
case 0x6b3559:goto L6b3559;
case 0x6b355c:c.instructions+=9;goto B6b355c;
case 0x6b355e:c.instructions+=8;goto B6b355e;
case 0x6b3560:c.instructions+=7;goto B6b3560;
case 0x6b3561:c.instructions+=6;goto B6b3561;
case 0x6b3562:c.instructions+=5;goto B6b3562;
case 0x6b3567:c.instructions+=4;goto B6b3567;
case 0x6b356c:c.instructions+=3;goto B6b356c;
case 0x6b356d:c.instructions+=2;goto B6b356d;
case 0x6b356f:c.instructions+=1;goto B6b356f;
case 0x6b3574:goto L6b3574;
case 0x6b3576:c.instructions+=2;goto B6b3576;
case 0x6b3578:c.instructions+=1;goto B6b3578;
case 0x6b357e:goto L6b357e;
case 0x6b3581:c.instructions+=3;goto B6b3581;
case 0x6b3583:c.instructions+=2;goto B6b3583;
case 0x6b3585:c.instructions+=1;goto B6b3585;
case 0x6b3587:goto L6b3587;
case 0x6b3588:c.instructions+=8;goto B6b3588;
case 0x6b358a:c.instructions+=7;goto B6b358a;
case 0x6b358b:c.instructions+=6;goto B6b358b;
case 0x6b358e:c.instructions+=5;goto B6b358e;
case 0x6b358f:c.instructions+=4;goto B6b358f;
case 0x6b3591:c.instructions+=3;goto B6b3591;
case 0x6b3597:c.instructions+=2;goto B6b3597;
case 0x6b3599:c.instructions+=1;goto B6b3599;
case 0x6b359e:goto L6b359e;
case 0x6b35a1:c.instructions+=4;goto B6b35a1;
case 0x6b35a4:c.instructions+=3;goto B6b35a4;
case 0x6b35a7:c.instructions+=2;goto B6b35a7;
case 0x6b35ab:c.instructions+=1;goto B6b35ab;
case 0x6b35b1:goto L6b35b1;
case 0x6b35b4:c.instructions+=3;goto B6b35b4;
case 0x6b35b5:c.instructions+=2;goto B6b35b5;
case 0x6b35b7:c.instructions+=1;goto B6b35b7;
case 0x6b35b9:goto L6b35b9;
case 0x6b35bc:c.instructions+=8;goto B6b35bc;
case 0x6b35bf:c.instructions+=7;goto B6b35bf;
case 0x6b35c1:c.instructions+=6;goto B6b35c1;
case 0x6b35c3:c.instructions+=5;goto B6b35c3;
case 0x6b35c6:c.instructions+=4;goto B6b35c6;
case 0x6b35c8:c.instructions+=3;goto B6b35c8;
case 0x6b35cb:c.instructions+=2;goto B6b35cb;
case 0x6b35ce:c.instructions+=1;goto B6b35ce;
case 0x6b35d3:goto L6b35d3;
case 0x6b35d5:c.instructions+=2;goto B6b35d5;
case 0x6b35d7:c.instructions+=1;goto B6b35d7;
case 0x6b35dd:goto L6b35dd;
case 0x6b35e0:c.instructions+=3;goto B6b35e0;
case 0x6b35e2:c.instructions+=2;goto B6b35e2;
case 0x6b35e4:c.instructions+=1;goto B6b35e4;
case 0x6b35e6:goto L6b35e6;
case 0x6b35e7:c.instructions+=8;goto B6b35e7;
case 0x6b35e9:c.instructions+=7;goto B6b35e9;
case 0x6b35ea:c.instructions+=6;goto B6b35ea;
case 0x6b35ed:c.instructions+=5;goto B6b35ed;
case 0x6b35ee:c.instructions+=4;goto B6b35ee;
case 0x6b35f1:c.instructions+=3;goto B6b35f1;
case 0x6b35f3:c.instructions+=2;goto B6b35f3;
case 0x6b35f9:c.instructions+=1;goto B6b35f9;
case 0x6b35fe:goto L6b35fe;
case 0x6b3601:c.instructions+=1;goto B6b3601;
case 0x6b3607:goto L6b3607;
case 0x6b360a:c.instructions+=12;goto B6b360a;
case 0x6b360d:c.instructions+=11;goto B6b360d;
case 0x6b3610:c.instructions+=10;goto B6b3610;
case 0x6b3614:c.instructions+=9;goto B6b3614;
case 0x6b3617:c.instructions+=8;goto B6b3617;
case 0x6b361a:c.instructions+=7;goto B6b361a;
case 0x6b361d:c.instructions+=6;goto B6b361d;
case 0x6b3620:c.instructions+=5;goto B6b3620;
case 0x6b3623:c.instructions+=4;goto B6b3623;
case 0x6b3626:c.instructions+=3;goto B6b3626;
case 0x6b3627:c.instructions+=2;goto B6b3627;
case 0x6b3629:c.instructions+=1;goto B6b3629;
case 0x6b362b:goto L6b362b;
case 0x6b362c:c.instructions+=2;goto B6b362c;
case 0x6b362e:c.instructions+=1;goto B6b362e;
case 0x6b3633:goto L6b3633;
case 0x6b3635:c.instructions+=3;goto B6b3635;
case 0x6b3637:c.instructions+=2;goto B6b3637;
case 0x6b363a:c.instructions+=1;goto B6b363a;
case 0x6b3640:goto L6b3640;
case 0x6b3643:c.instructions+=3;goto B6b3643;
case 0x6b3647:c.instructions+=2;goto B6b3647;
case 0x6b364b:c.instructions+=1;goto B6b364b;
case 0x6b3651:goto L6b3651;
case 0x6b3655:c.instructions+=2;goto B6b3655;
case 0x6b3659:c.instructions+=1;goto B6b3659;
case 0x6b365f:goto L6b365f;
case 0x6b3662:c.instructions+=10;goto B6b3662;
case 0x6b3665:c.instructions+=9;goto B6b3665;
case 0x6b3668:c.instructions+=8;goto B6b3668;
case 0x6b366a:c.instructions+=7;goto B6b366a;
case 0x6b366c:c.instructions+=6;goto B6b366c;
case 0x6b366e:c.instructions+=5;goto B6b366e;
case 0x6b3674:c.instructions+=4;goto B6b3674;
case 0x6b367a:c.instructions+=3;goto B6b367a;
case 0x6b367b:c.instructions+=2;goto B6b367b;
case 0x6b367e:c.instructions+=1;goto B6b367e;
case 0x6b3683:goto L6b3683;
case 0x6b3685:c.instructions+=1;goto B6b3685;
case 0x6b3687:goto L6b3687;
case 0x6b368d:c.instructions+=1;goto B6b368d;
case 0x6b3693:goto L6b3693;
case 0x6b3699:c.instructions+=2;goto B6b3699;
case 0x6b369c:c.instructions+=1;goto B6b369c;
case 0x6b369e:goto L6b369e;
case 0x6b36a0:c.instructions+=1;goto B6b36a0;
case 0x6b36a2:goto L6b36a2;
case 0x6b36a4:c.instructions+=2;goto B6b36a4;
case 0x6b36a6:c.instructions+=1;goto B6b36a6;
case 0x6b36ab:goto L6b36ab;
case 0x6b36b0:c.instructions+=1;goto B6b36b0;
case 0x6b36b5:goto L6b36b5;
case 0x6b36b7:c.instructions+=2;goto B6b36b7;
case 0x6b36b9:c.instructions+=1;goto B6b36b9;
case 0x6b36be:goto L6b36be;
case 0x6b36c3:goto L6b36c3;
case 0x6b36c5:c.instructions+=2;goto B6b36c5;
case 0x6b36c7:c.instructions+=1;goto B6b36c7;
case 0x6b36cc:goto L6b36cc;
case 0x6b36d1:c.instructions+=1;goto B6b36d1;
case 0x6b36d6:goto L6b36d6;
case 0x6b36d9:goto L6b36d9;
case 0x6b36dc:c.instructions+=3;goto B6b36dc;
case 0x6b36df:c.instructions+=2;goto B6b36df;
case 0x6b36e3:c.instructions+=1;goto B6b36e3;
case 0x6b36e9:goto L6b36e9;
case 0x6b36ec:c.instructions+=2;goto B6b36ec;
case 0x6b36f2:c.instructions+=1;goto B6b36f2;
case 0x6b36f8:goto L6b36f8;
case 0x6b36fa:c.instructions+=1;goto B6b36fa;
case 0x6b36ff:goto L6b36ff;
case 0x6b3701:c.instructions+=1;goto B6b3701;
case 0x6b3703:goto L6b3703;
case 0x6b3705:c.instructions+=1;goto B6b3705;
case 0x6b370a:goto L6b370a;
case 0x6b370c:c.instructions+=1;goto B6b370c;
case 0x6b370e:goto L6b370e;
case 0x6b3710:goto L6b3710;
case 0x6b3712:c.instructions+=1;goto B6b3712;
case 0x6b3718:goto L6b3718;
case 0x6b371b:c.instructions+=8;goto B6b371b;
case 0x6b371d:c.instructions+=7;goto B6b371d;
case 0x6b3720:c.instructions+=6;goto B6b3720;
case 0x6b3725:c.instructions+=5;goto B6b3725;
case 0x6b3728:c.instructions+=4;goto B6b3728;
case 0x6b372d:c.instructions+=3;goto B6b372d;
case 0x6b372e:c.instructions+=2;goto B6b372e;
case 0x6b3730:c.instructions+=1;goto B6b3730;
case 0x6b3735:goto L6b3735;
case 0x6b3737:c.instructions+=2;goto B6b3737;
case 0x6b373a:c.instructions+=1;goto B6b373a;
case 0x6b3740:goto L6b3740;
case 0x6b3742:c.instructions+=5;goto B6b3742;
case 0x6b3744:c.instructions+=4;goto B6b3744;
case 0x6b3749:c.instructions+=3;goto B6b3749;
case 0x6b374f:c.instructions+=2;goto B6b374f;
case 0x6b3754:c.instructions+=1;goto B6b3754;
case 0x6b3756:goto L6b3756;
case 0x6b3758:goto L6b3758;
case 0x6b375c:c.instructions+=2;goto B6b375c;
case 0x6b3760:c.instructions+=1;goto B6b3760;
case 0x6b3762:goto L6b3762;
case 0x6b3764:c.instructions+=2;goto B6b3764;
case 0x6b3767:c.instructions+=1;goto B6b3767;
case 0x6b376a:goto L6b376a;
case 0x6b376d:c.instructions+=18;goto B6b376d;
case 0x6b376f:c.instructions+=17;goto B6b376f;
case 0x6b3772:c.instructions+=16;goto B6b3772;
case 0x6b3775:c.instructions+=15;goto B6b3775;
case 0x6b3778:c.instructions+=14;goto B6b3778;
case 0x6b377b:c.instructions+=13;goto B6b377b;
case 0x6b377e:c.instructions+=12;goto B6b377e;
case 0x6b3781:c.instructions+=11;goto B6b3781;
case 0x6b3784:c.instructions+=10;goto B6b3784;
case 0x6b3785:c.instructions+=9;goto B6b3785;
case 0x6b3786:c.instructions+=8;goto B6b3786;
case 0x6b3789:c.instructions+=7;goto B6b3789;
case 0x6b378c:c.instructions+=6;goto B6b378c;
case 0x6b378f:c.instructions+=5;goto B6b378f;
case 0x6b3792:c.instructions+=4;goto B6b3792;
case 0x6b3794:c.instructions+=3;goto B6b3794;
case 0x6b3796:c.instructions+=2;goto B6b3796;
case 0x6b379c:c.instructions+=1;goto B6b379c;
case 0x6b37a1:goto L6b37a1;
case 0x6b37a4:c.instructions+=12;goto B6b37a4;
case 0x6b37a7:c.instructions+=11;goto B6b37a7;
case 0x6b37aa:c.instructions+=10;goto B6b37aa;
case 0x6b37ad:c.instructions+=9;goto B6b37ad;
case 0x6b37b0:c.instructions+=8;goto B6b37b0;
case 0x6b37b3:c.instructions+=7;goto B6b37b3;
case 0x6b37b6:c.instructions+=6;goto B6b37b6;
case 0x6b37b9:c.instructions+=5;goto B6b37b9;
case 0x6b37bd:c.instructions+=4;goto B6b37bd;
case 0x6b37c0:c.instructions+=3;goto B6b37c0;
case 0x6b37c3:c.instructions+=2;goto B6b37c3;
case 0x6b37c6:c.instructions+=1;goto B6b37c6;
case 0x6b37c8:goto L6b37c8;
case 0x6b37c9:c.instructions+=2;goto B6b37c9;
case 0x6b37cb:c.instructions+=1;goto B6b37cb;
case 0x6b37d0:goto L6b37d0;
case 0x6b37d2:c.instructions+=2;goto B6b37d2;
case 0x6b37d5:c.instructions+=1;goto B6b37d5;
case 0x6b37db:goto L6b37db;
case 0x6b37de:c.instructions+=3;goto B6b37de;
case 0x6b37e1:c.instructions+=2;goto B6b37e1;
case 0x6b37e4:c.instructions+=1;goto B6b37e4;
case 0x6b37ea:goto L6b37ea;
case 0x6b37ec:c.instructions+=2;goto B6b37ec;
case 0x6b37ef:c.instructions+=1;goto B6b37ef;
case 0x6b37f1:goto L6b37f1;
case 0x6b37f4:c.instructions+=3;goto B6b37f4;
case 0x6b37f7:c.instructions+=2;goto B6b37f7;
case 0x6b37f9:c.instructions+=1;goto B6b37f9;
case 0x6b37fe:goto L6b37fe;
case 0x6b3800:c.instructions+=2;goto B6b3800;
case 0x6b3802:c.instructions+=1;goto B6b3802;
case 0x6b3808:goto L6b3808;
case 0x6b380b:c.instructions+=5;goto B6b380b;
case 0x6b380e:c.instructions+=4;goto B6b380e;
case 0x6b3811:c.instructions+=3;goto B6b3811;
case 0x6b3812:c.instructions+=2;goto B6b3812;
case 0x6b3815:c.instructions+=1;goto B6b3815;
case 0x6b3817:goto L6b3817;
case 0x6b381a:c.instructions+=4;goto B6b381a;
case 0x6b381e:c.instructions+=3;goto B6b381e;
case 0x6b3820:c.instructions+=2;goto B6b3820;
case 0x6b3823:c.instructions+=1;goto B6b3823;
case 0x6b3829:goto L6b3829;
case 0x6b382c:c.instructions+=5;goto B6b382c;
case 0x6b382f:c.instructions+=4;goto B6b382f;
case 0x6b3832:c.instructions+=3;goto B6b3832;
case 0x6b3834:c.instructions+=2;goto B6b3834;
case 0x6b3836:c.instructions+=1;goto B6b3836;
case 0x6b383c:goto L6b383c;
case 0x6b383e:c.instructions+=5;goto B6b383e;
case 0x6b3844:c.instructions+=4;goto B6b3844;
case 0x6b3849:c.instructions+=3;goto B6b3849;
case 0x6b384a:c.instructions+=2;goto B6b384a;
case 0x6b384d:c.instructions+=1;goto B6b384d;
case 0x6b3852:goto L6b3852;
case 0x6b3854:c.instructions+=1;goto B6b3854;
case 0x6b3856:goto L6b3856;
case 0x6b385c:c.instructions+=1;goto B6b385c;
case 0x6b3862:goto L6b3862;
case 0x6b3865:c.instructions+=16;goto B6b3865;
case 0x6b386b:c.instructions+=15;goto B6b386b;
case 0x6b386d:c.instructions+=14;goto B6b386d;
case 0x6b386f:c.instructions+=13;goto B6b386f;
case 0x6b3872:c.instructions+=12;goto B6b3872;
case 0x6b3874:c.instructions+=11;goto B6b3874;
case 0x6b3877:c.instructions+=10;goto B6b3877;
case 0x6b387a:c.instructions+=9;goto B6b387a;
case 0x6b387d:c.instructions+=8;goto B6b387d;
case 0x6b3880:c.instructions+=7;goto B6b3880;
case 0x6b3883:c.instructions+=6;goto B6b3883;
case 0x6b3886:c.instructions+=5;goto B6b3886;
case 0x6b3889:c.instructions+=4;goto B6b3889;
case 0x6b388c:c.instructions+=3;goto B6b388c;
case 0x6b388f:c.instructions+=2;goto B6b388f;
case 0x6b3892:c.instructions+=1;goto B6b3892;
case 0x6b3894:goto L6b3894;
case 0x6b3897:c.instructions+=1;goto B6b3897;
case 0x6b389d:goto L6b389d;
case 0x6b38a1:c.instructions+=1;goto B6b38a1;
case 0x6b38a7:goto L6b38a7;
case 0x6b38a9:c.instructions+=1;goto B6b38a9;
case 0x6b38ae:goto L6b38ae;
case 0x6b38b0:c.instructions+=1;goto B6b38b0;
case 0x6b38b2:goto L6b38b2;
case 0x6b38b4:c.instructions+=1;goto B6b38b4;
case 0x6b38b9:goto L6b38b9;
case 0x6b38bc:c.instructions+=1;goto B6b38bc;
case 0x6b38be:goto L6b38be;
case 0x6b38c5:goto L6b38c5;
case 0x6b38c8:goto L6b38c8;
case 0x6b38ca:goto L6b38ca;
case 0x6b38cb:c.instructions+=4;goto B6b38cb;
case 0x6b38cc:c.instructions+=3;goto B6b38cc;
case 0x6b38cd:c.instructions+=2;goto B6b38cd;
case 0x6b38ce:c.instructions+=1;goto B6b38ce;
case 0x6b38cf:goto L6b38cf;
case 0x6b38d3:goto L6b38d3;
case 0x6b38d7:c.instructions+=1;goto B6b38d7;
case 0x6b38dd:goto L6b38dd;
case 0x6b38e0:c.instructions+=8;goto B6b38e0;
case 0x6b38e3:c.instructions+=7;goto B6b38e3;
case 0x6b38e5:c.instructions+=6;goto B6b38e5;
case 0x6b38e8:c.instructions+=5;goto B6b38e8;
case 0x6b38ed:c.instructions+=4;goto B6b38ed;
case 0x6b38f0:c.instructions+=3;goto B6b38f0;
case 0x6b38f5:c.instructions+=2;goto B6b38f5;
case 0x6b38f6:c.instructions+=1;goto B6b38f6;
case 0x6b38fb:goto L6b38fb;
case 0x6b38fd:c.instructions+=2;goto B6b38fd;
case 0x6b38ff:c.instructions+=1;goto B6b38ff;
case 0x6b3901:goto L6b3901;
case 0x6b3904:c.instructions+=2;goto B6b3904;
case 0x6b3905:c.instructions+=1;goto B6b3905;
case 0x6b390a:goto L6b390a;
case 0x6b390c:c.instructions+=2;goto B6b390c;
case 0x6b390e:c.instructions+=1;goto B6b390e;
case 0x6b3910:goto L6b3910;
case 0x6b3914:c.instructions+=2;goto B6b3914;
case 0x6b3918:c.instructions+=1;goto B6b3918;
case 0x6b391a:goto L6b391a;
case 0x6b391d:c.instructions+=1;goto B6b391d;
case 0x6b3920:goto L6b3920;
case 0x6b3923:c.instructions+=13;goto B6b3923;
case 0x6b3925:c.instructions+=12;goto B6b3925;
case 0x6b3928:c.instructions+=11;goto B6b3928;
case 0x6b392b:c.instructions+=10;goto B6b392b;
case 0x6b392e:c.instructions+=9;goto B6b392e;
case 0x6b392f:c.instructions+=8;goto B6b392f;
case 0x6b3930:c.instructions+=7;goto B6b3930;
case 0x6b3933:c.instructions+=6;goto B6b3933;
case 0x6b3934:c.instructions+=5;goto B6b3934;
case 0x6b3937:c.instructions+=4;goto B6b3937;
case 0x6b3939:c.instructions+=3;goto B6b3939;
case 0x6b393f:c.instructions+=2;goto B6b393f;
case 0x6b3941:c.instructions+=1;goto B6b3941;
case 0x6b3946:goto L6b3946;
case 0x6b3949:c.instructions+=11;goto B6b3949;
case 0x6b394c:c.instructions+=10;goto B6b394c;
case 0x6b394f:c.instructions+=9;goto B6b394f;
case 0x6b3952:c.instructions+=8;goto B6b3952;
case 0x6b3955:c.instructions+=7;goto B6b3955;
case 0x6b3958:c.instructions+=6;goto B6b3958;
case 0x6b395b:c.instructions+=5;goto B6b395b;
case 0x6b395e:c.instructions+=4;goto B6b395e;
case 0x6b3961:c.instructions+=3;goto B6b3961;
case 0x6b3964:c.instructions+=2;goto B6b3964;
case 0x6b3968:c.instructions+=1;goto B6b3968;
case 0x6b396e:goto L6b396e;
case 0x6b3971:c.instructions+=4;goto B6b3971;
case 0x6b3974:c.instructions+=3;goto B6b3974;
case 0x6b3977:c.instructions+=2;goto B6b3977;
case 0x6b397a:c.instructions+=1;goto B6b397a;
case 0x6b397c:goto L6b397c;
case 0x6b397f:c.instructions+=2;goto B6b397f;
case 0x6b3981:c.instructions+=1;goto B6b3981;
case 0x6b3986:goto L6b3986;
case 0x6b3987:c.instructions+=2;goto B6b3987;
case 0x6b3989:c.instructions+=1;goto B6b3989;
case 0x6b398e:goto L6b398e;
case 0x6b3991:goto L6b3991;
case 0x6b3994:c.instructions+=3;goto B6b3994;
case 0x6b3997:c.instructions+=2;goto B6b3997;
case 0x6b399a:c.instructions+=1;goto B6b399a;
case 0x6b39a0:goto L6b39a0;
case 0x6b39a2:c.instructions+=1;goto B6b39a2;
case 0x6b39a7:goto L6b39a7;
case 0x6b39a9:c.instructions+=1;goto B6b39a9;
case 0x6b39ae:goto L6b39ae;
case 0x6b39b0:c.instructions+=9;goto B6b39b0;
case 0x6b39b1:c.instructions+=8;goto B6b39b1;
case 0x6b39b3:c.instructions+=7;goto B6b39b3;
case 0x6b39b4:c.instructions+=6;goto B6b39b4;
case 0x6b39b5:c.instructions+=5;goto B6b39b5;
case 0x6b39b6:c.instructions+=4;goto B6b39b6;
case 0x6b39b8:c.instructions+=3;goto B6b39b8;
case 0x6b39bb:c.instructions+=2;goto B6b39bb;
case 0x6b39be:c.instructions+=1;goto B6b39be;
case 0x6b39c3:goto L6b39c3;
case 0x6b39c5:c.instructions+=3;goto B6b39c5;
case 0x6b39c7:c.instructions+=2;goto B6b39c7;
case 0x6b39ca:c.instructions+=1;goto B6b39ca;
case 0x6b39cc:goto L6b39cc;
case 0x6b39ce:c.instructions+=2;goto B6b39ce;
case 0x6b39d1:c.instructions+=1;goto B6b39d1;
case 0x6b39d3:goto L6b39d3;
case 0x6b39d6:c.instructions+=8;goto B6b39d6;
case 0x6b39d9:c.instructions+=7;goto B6b39d9;
case 0x6b39dc:c.instructions+=6;goto B6b39dc;
case 0x6b39df:c.instructions+=5;goto B6b39df;
case 0x6b39e2:c.instructions+=4;goto B6b39e2;
case 0x6b39e3:c.instructions+=3;goto B6b39e3;
case 0x6b39e6:c.instructions+=2;goto B6b39e6;
case 0x6b39e9:c.instructions+=1;goto B6b39e9;
case 0x6b39eb:goto L6b39eb;
case 0x6b39ee:c.instructions+=2;goto B6b39ee;
case 0x6b39f1:c.instructions+=1;goto B6b39f1;
case 0x6b39f3:goto L6b39f3;
case 0x6b39f4:c.instructions+=1;goto B6b39f4;
case 0x6b39f5:goto L6b39f5;
case 0x6b39f8:c.instructions+=6;goto B6b39f8;
case 0x6b39fb:c.instructions+=5;goto B6b39fb;
case 0x6b39fe:c.instructions+=4;goto B6b39fe;
case 0x6b3a00:c.instructions+=3;goto B6b3a00;
case 0x6b3a06:c.instructions+=2;goto B6b3a06;
case 0x6b3a07:c.instructions+=1;goto B6b3a07;
case 0x6b3a0c:goto L6b3a0c;
case 0x6b3a0e:c.instructions+=1;goto B6b3a0e;
case 0x6b3a10:goto L6b3a10;
case 0x6b3a16:c.instructions+=1;goto B6b3a16;
case 0x6b3a18:goto L6b3a18;
case 0x6b3a1b:c.instructions+=5;goto B6b3a1b;
case 0x6b3a1d:c.instructions+=4;goto B6b3a1d;
case 0x6b3a1e:c.instructions+=3;goto B6b3a1e;
case 0x6b3a1f:c.instructions+=2;goto B6b3a1f;
case 0x6b3a21:c.instructions+=1;goto B6b3a21;
case 0x6b3a26:goto L6b3a26;
case 0x6b3a29:goto L6b3a29;
case 0x6b3a2c:c.instructions+=3;goto B6b3a2c;
case 0x6b3a2f:c.instructions+=2;goto B6b3a2f;
case 0x6b3a32:c.instructions+=1;goto B6b3a32;
case 0x6b3a34:goto L6b3a34;
case 0x6b3a35:c.instructions+=1;goto B6b3a35;
case 0x6b3a36:goto L6b3a36;
case 0x6b3a39:c.instructions+=3;goto B6b3a39;
case 0x6b3a3a:c.instructions+=2;goto B6b3a3a;
case 0x6b3a3b:c.instructions+=1;goto B6b3a3b;
case 0x6b3a3c:goto L6b3a3c;
case 0x6b3a3e:c.instructions+=7;goto B6b3a3e;
case 0x6b3a3f:c.instructions+=6;goto B6b3a3f;
case 0x6b3a40:c.instructions+=5;goto B6b3a40;
case 0x6b3a42:c.instructions+=4;goto B6b3a42;
case 0x6b3a44:c.instructions+=3;goto B6b3a44;
case 0x6b3a47:c.instructions+=2;goto B6b3a47;
case 0x6b3a48:c.instructions+=1;goto B6b3a48;
case 0x6b3a4a:goto L6b3a4a;
case 0x6b3a50:goto L6b3a50;
case 0x6b3a53:c.instructions+=5;goto B6b3a53;
case 0x6b3a56:c.instructions+=4;goto B6b3a56;
case 0x6b3a58:c.instructions+=3;goto B6b3a58;
case 0x6b3a5e:c.instructions+=2;goto B6b3a5e;
case 0x6b3a5f:c.instructions+=1;goto B6b3a5f;
case 0x6b3a64:goto L6b3a64;
case 0x6b3a66:c.instructions+=1;goto B6b3a66;
case 0x6b3a68:goto L6b3a68;
case 0x6b3a6e:c.instructions+=1;goto B6b3a6e;
case 0x6b3a70:goto L6b3a70;
case 0x6b3a76:c.instructions+=1;goto B6b3a76;
case 0x6b3a78:goto L6b3a78;
case 0x6b3a7b:c.instructions+=1;goto B6b3a7b;
case 0x6b3a7d:goto L6b3a7d;
case 0x6b3a7f:c.instructions+=2;goto B6b3a7f;
case 0x6b3a80:c.instructions+=1;goto B6b3a80;
case 0x6b3a83:goto L6b3a83;
case 0x6b3a84:c.instructions+=2;goto B6b3a84;
case 0x6b3a87:c.instructions+=1;goto B6b3a87;
case 0x6b3a89:goto L6b3a89;
case 0x6b3a8b:c.instructions+=4;goto B6b3a8b;
case 0x6b3a91:c.instructions+=3;goto B6b3a91;
case 0x6b3a92:c.instructions+=2;goto B6b3a92;
case 0x6b3a94:c.instructions+=1;goto B6b3a94;
case 0x6b3a96:goto L6b3a96;
case 0x6b3a97:c.instructions+=3;goto B6b3a97;
case 0x6b3a98:c.instructions+=2;goto B6b3a98;
case 0x6b3a99:c.instructions+=1;goto B6b3a99;
case 0x6b3a9a:goto L6b3a9a;
case 0x6b3a9d:c.instructions+=1;goto B6b3a9d;
case 0x6b3a9f:goto L6b3a9f;
case 0x6b3aa1:c.instructions+=11;goto B6b3aa1;
case 0x6b3aa2:c.instructions+=10;goto B6b3aa2;
case 0x6b3aa4:c.instructions+=9;goto B6b3aa4;
case 0x6b3aa5:c.instructions+=8;goto B6b3aa5;
case 0x6b3aa6:c.instructions+=7;goto B6b3aa6;
case 0x6b3aa9:c.instructions+=6;goto B6b3aa9;
case 0x6b3aab:c.instructions+=5;goto B6b3aab;
case 0x6b3aac:c.instructions+=4;goto B6b3aac;
case 0x6b3ab1:c.instructions+=3;goto B6b3ab1;
case 0x6b3ab2:c.instructions+=2;goto B6b3ab2;
case 0x6b3ab4:c.instructions+=1;goto B6b3ab4;
case 0x6b3ab9:goto L6b3ab9;
case 0x6b3abb:c.instructions+=2;goto B6b3abb;
case 0x6b3abd:c.instructions+=1;goto B6b3abd;
case 0x6b3abf:goto L6b3abf;
case 0x6b3ac2:c.instructions+=1;goto B6b3ac2;
case 0x6b3ac4:goto L6b3ac4;
case 0x6b3ac8:c.instructions+=1;goto B6b3ac8;
case 0x6b3aca:goto L6b3aca;
case 0x6b3acf:c.instructions+=4;goto B6b3acf;
case 0x6b3ad4:c.instructions+=3;goto B6b3ad4;
case 0x6b3ad7:c.instructions+=2;goto B6b3ad7;
case 0x6b3ad8:c.instructions+=1;goto B6b3ad8;
case 0x6b3add:goto L6b3add;
case 0x6b3ae0:goto L6b3ae0;
case 0x6b3ae2:c.instructions+=1;goto B6b3ae2;
case 0x6b3ae4:goto L6b3ae4;
case 0x6b3ae7:goto L6b3ae7;
case 0x6b3aea:c.instructions+=1;goto B6b3aea;
case 0x6b3aec:goto L6b3aec;
case 0x6b3aef:c.instructions+=6;goto B6b3aef;
case 0x6b3af2:c.instructions+=5;goto B6b3af2;
case 0x6b3af5:c.instructions+=4;goto B6b3af5;
case 0x6b3af8:c.instructions+=3;goto B6b3af8;
case 0x6b3afb:c.instructions+=2;goto B6b3afb;
case 0x6b3afd:c.instructions+=1;goto B6b3afd;
case 0x6b3b02:goto L6b3b02;
case 0x6b3b04:c.instructions+=1;goto B6b3b04;
case 0x6b3b06:goto L6b3b06;
case 0x6b3b07:c.instructions+=2;goto B6b3b07;
case 0x6b3b0a:c.instructions+=1;goto B6b3b0a;
case 0x6b3b0c:goto L6b3b0c;
case 0x6b3b0e:c.instructions+=1;goto B6b3b0e;
case 0x6b3b0f:goto L6b3b0f;
case 0x6b3b10:c.instructions+=4;goto B6b3b10;
case 0x6b3b11:c.instructions+=3;goto B6b3b11;
case 0x6b3b12:c.instructions+=2;goto B6b3b12;
case 0x6b3b13:c.instructions+=1;goto B6b3b13;
case 0x6b3b16:goto L6b3b16;
case 0x6b3b18:c.instructions+=11;goto B6b3b18;
case 0x6b3b19:c.instructions+=10;goto B6b3b19;
case 0x6b3b1b:c.instructions+=9;goto B6b3b1b;
case 0x6b3b1c:c.instructions+=8;goto B6b3b1c;
case 0x6b3b1d:c.instructions+=7;goto B6b3b1d;
case 0x6b3b1f:c.instructions+=6;goto B6b3b1f;
case 0x6b3b22:c.instructions+=5;goto B6b3b22;
case 0x6b3b23:c.instructions+=4;goto B6b3b23;
case 0x6b3b25:c.instructions+=3;goto B6b3b25;
case 0x6b3b28:c.instructions+=2;goto B6b3b28;
case 0x6b3b2b:c.instructions+=1;goto B6b3b2b;
case 0x6b3b2d:goto L6b3b2d;
case 0x6b3b32:c.instructions+=4;goto B6b3b32;
case 0x6b3b37:c.instructions+=3;goto B6b3b37;
case 0x6b3b38:c.instructions+=2;goto B6b3b38;
case 0x6b3b39:c.instructions+=1;goto B6b3b39;
case 0x6b3b3e:goto L6b3b3e;
case 0x6b3b40:c.instructions+=3;goto B6b3b40;
case 0x6b3b43:c.instructions+=2;goto B6b3b43;
case 0x6b3b44:c.instructions+=1;goto B6b3b44;
case 0x6b3b49:goto L6b3b49;
case 0x6b3b4b:c.instructions+=2;goto B6b3b4b;
case 0x6b3b4d:c.instructions+=1;goto B6b3b4d;
case 0x6b3b4f:goto L6b3b4f;
case 0x6b3b52:c.instructions+=5;goto B6b3b52;
case 0x6b3b55:c.instructions+=4;goto B6b3b55;
case 0x6b3b56:c.instructions+=3;goto B6b3b56;
case 0x6b3b59:c.instructions+=2;goto B6b3b59;
case 0x6b3b5c:c.instructions+=1;goto B6b3b5c;
case 0x6b3b5e:goto L6b3b5e;
case 0x6b3b5f:c.instructions+=3;goto B6b3b5f;
case 0x6b3b61:c.instructions+=2;goto B6b3b61;
case 0x6b3b64:c.instructions+=1;goto B6b3b64;
case 0x6b3b66:goto L6b3b66;
case 0x6b3b69:c.instructions+=4;goto B6b3b69;
case 0x6b3b6c:c.instructions+=3;goto B6b3b6c;
case 0x6b3b72:c.instructions+=2;goto B6b3b72;
case 0x6b3b75:c.instructions+=1;goto B6b3b75;
case 0x6b3b77:goto L6b3b77;
case 0x6b3b7b:c.instructions+=1;goto B6b3b7b;
case 0x6b3b7d:goto L6b3b7d;
case 0x6b3b83:c.instructions+=6;goto B6b3b83;
case 0x6b3b86:c.instructions+=5;goto B6b3b86;
case 0x6b3b89:c.instructions+=4;goto B6b3b89;
case 0x6b3b8c:c.instructions+=3;goto B6b3b8c;
case 0x6b3b8f:c.instructions+=2;goto B6b3b8f;
case 0x6b3b93:c.instructions+=1;goto B6b3b93;
case 0x6b3b95:goto L6b3b95;
case 0x6b3b9a:c.instructions+=4;goto B6b3b9a;
case 0x6b3b9f:c.instructions+=3;goto B6b3b9f;
case 0x6b3ba2:c.instructions+=2;goto B6b3ba2;
case 0x6b3ba3:c.instructions+=1;goto B6b3ba3;
case 0x6b3ba8:goto L6b3ba8;
case 0x6b3bab:c.instructions+=1;goto B6b3bab;
case 0x6b3bb2:goto L6b3bb2;
case 0x6b3bb8:c.instructions+=3;goto B6b3bb8;
case 0x6b3bb9:c.instructions+=2;goto B6b3bb9;
case 0x6b3bbc:c.instructions+=1;goto B6b3bbc;
case 0x6b3bbe:goto L6b3bbe;
case 0x6b3bc0:c.instructions+=4;goto B6b3bc0;
case 0x6b3bc1:c.instructions+=3;goto B6b3bc1;
case 0x6b3bc7:c.instructions+=2;goto B6b3bc7;
case 0x6b3bc9:c.instructions+=1;goto B6b3bc9;
case 0x6b3bce:goto L6b3bce;
case 0x6b3bd0:c.instructions+=1;goto B6b3bd0;
case 0x6b3bd2:goto L6b3bd2;
case 0x6b3bd3:c.instructions+=2;goto B6b3bd3;
case 0x6b3bd6:c.instructions+=1;goto B6b3bd6;
case 0x6b3bd8:goto L6b3bd8;
case 0x6b3bda:goto L6b3bda;
case 0x6b3be1:goto L6b3be1;
case 0x6b3be4:c.instructions+=1;goto B6b3be4;
case 0x6b3be5:goto L6b3be5;
case 0x6b3be6:c.instructions+=3;goto B6b3be6;
case 0x6b3be7:c.instructions+=2;goto B6b3be7;
case 0x6b3be8:c.instructions+=1;goto B6b3be8;
case 0x6b3be9:goto L6b3be9;
case 0x6b3beb:c.instructions+=11;goto B6b3beb;
case 0x6b3bec:c.instructions+=10;goto B6b3bec;
case 0x6b3bee:c.instructions+=9;goto B6b3bee;
case 0x6b3bef:c.instructions+=8;goto B6b3bef;
case 0x6b3bf0:c.instructions+=7;goto B6b3bf0;
case 0x6b3bf1:c.instructions+=6;goto B6b3bf1;
case 0x6b3bf2:c.instructions+=5;goto B6b3bf2;
case 0x6b3bf4:c.instructions+=4;goto B6b3bf4;
case 0x6b3bf7:c.instructions+=3;goto B6b3bf7;
case 0x6b3bf9:c.instructions+=2;goto B6b3bf9;
case 0x6b3bfc:c.instructions+=1;goto B6b3bfc;
case 0x6b3c02:goto L6b3c02;
case 0x6b3c04:c.instructions+=3;goto B6b3c04;
case 0x6b3c07:c.instructions+=2;goto B6b3c07;
case 0x6b3c0a:c.instructions+=1;goto B6b3c0a;
case 0x6b3c0c:goto L6b3c0c;
case 0x6b3c0e:c.instructions+=1;goto B6b3c0e;
case 0x6b3c0f:goto L6b3c0f;
case 0x6b3c10:c.instructions+=4;goto B6b3c10;
case 0x6b3c11:c.instructions+=3;goto B6b3c11;
case 0x6b3c12:c.instructions+=2;goto B6b3c12;
case 0x6b3c13:c.instructions+=1;goto B6b3c13;
case 0x6b3c16:goto L6b3c16;
case 0x6b3c19:goto L6b3c19;
case 0x6b3c1c:c.instructions+=6;goto B6b3c1c;
case 0x6b3c1f:c.instructions+=5;goto B6b3c1f;
case 0x6b3c21:c.instructions+=4;goto B6b3c21;
case 0x6b3c23:c.instructions+=3;goto B6b3c23;
case 0x6b3c28:c.instructions+=2;goto B6b3c28;
case 0x6b3c2d:c.instructions+=1;goto B6b3c2d;
case 0x6b3c2f:goto L6b3c2f;
case 0x6b3c34:c.instructions+=1;goto B6b3c34;
case 0x6b3c36:goto L6b3c36;
case 0x6b3c39:c.instructions+=8;goto B6b3c39;
case 0x6b3c3b:c.instructions+=7;goto B6b3c3b;
case 0x6b3c3e:c.instructions+=6;goto B6b3c3e;
case 0x6b3c41:c.instructions+=5;goto B6b3c41;
case 0x6b3c44:c.instructions+=4;goto B6b3c44;
case 0x6b3c47:c.instructions+=3;goto B6b3c47;
case 0x6b3c4a:c.instructions+=2;goto B6b3c4a;
case 0x6b3c50:c.instructions+=1;goto B6b3c50;
case 0x6b3c52:goto L6b3c52;
case 0x6b3c55:c.instructions+=2;goto B6b3c55;
case 0x6b3c58:c.instructions+=1;goto B6b3c58;
case 0x6b3c5e:goto L6b3c5e;
case 0x6b3c61:c.instructions+=4;goto B6b3c61;
case 0x6b3c64:c.instructions+=3;goto B6b3c64;
case 0x6b3c66:c.instructions+=2;goto B6b3c66;
case 0x6b3c69:c.instructions+=1;goto B6b3c69;
case 0x6b3c6f:goto L6b3c6f;
case 0x6b3c72:c.instructions+=4;goto B6b3c72;
case 0x6b3c74:c.instructions+=3;goto B6b3c74;
case 0x6b3c76:c.instructions+=2;goto B6b3c76;
case 0x6b3c79:c.instructions+=1;goto B6b3c79;
case 0x6b3c7b:goto L6b3c7b;
case 0x6b3c7d:c.instructions+=1;goto B6b3c7d;
case 0x6b3c7f:goto L6b3c7f;
case 0x6b3c81:c.instructions+=1;goto B6b3c81;
case 0x6b3c87:goto L6b3c87;
case 0x6b3c89:c.instructions+=4;goto B6b3c89;
case 0x6b3c8c:c.instructions+=3;goto B6b3c8c;
case 0x6b3c8f:c.instructions+=2;goto B6b3c8f;
case 0x6b3c91:c.instructions+=1;goto B6b3c91;
case 0x6b3c93:goto L6b3c93;
case 0x6b3c96:c.instructions+=4;goto B6b3c96;
case 0x6b3c97:c.instructions+=3;goto B6b3c97;
case 0x6b3c9a:c.instructions+=2;goto B6b3c9a;
case 0x6b3c9d:c.instructions+=1;goto B6b3c9d;
case 0x6b3ca3:goto L6b3ca3;
case 0x6b3ca8:goto L6b3ca8;
case 0x6b3cac:c.instructions+=1;goto B6b3cac;
case 0x6b3cb2:goto L6b3cb2;
case 0x6b3cb4:c.instructions+=3;goto B6b3cb4;
case 0x6b3cb7:c.instructions+=2;goto B6b3cb7;
case 0x6b3cba:c.instructions+=1;goto B6b3cba;
case 0x6b3cc0:goto L6b3cc0;
case 0x6b3cc3:goto L6b3cc3;
case 0x6b3cc6:c.instructions+=4;goto B6b3cc6;
case 0x6b3cc9:c.instructions+=3;goto B6b3cc9;
case 0x6b3ccb:c.instructions+=2;goto B6b3ccb;
case 0x6b3ccd:c.instructions+=1;goto B6b3ccd;
case 0x6b3ccf:goto L6b3ccf;
case 0x6b3cd1:c.instructions+=3;goto B6b3cd1;
case 0x6b3cd7:c.instructions+=2;goto B6b3cd7;
case 0x6b3cdd:c.instructions+=1;goto B6b3cdd;
case 0x6b3cdf:goto L6b3cdf;
case 0x6b3ce5:c.instructions+=1;goto B6b3ce5;
case 0x6b3ce7:goto L6b3ce7;
case 0x6b3cea:c.instructions+=4;goto B6b3cea;
case 0x6b3cec:c.instructions+=3;goto B6b3cec;
case 0x6b3cee:c.instructions+=2;goto B6b3cee;
case 0x6b3cf1:c.instructions+=1;goto B6b3cf1;
case 0x6b3cf3:goto L6b3cf3;
case 0x6b3cf6:goto L6b3cf6;
case 0x6b3cfa:c.instructions+=1;goto B6b3cfa;
case 0x6b3cfc:goto L6b3cfc;
case 0x6b3cfe:c.instructions+=3;goto B6b3cfe;
case 0x6b3d01:c.instructions+=2;goto B6b3d01;
case 0x6b3d03:c.instructions+=1;goto B6b3d03;
case 0x6b3d05:goto L6b3d05;
case 0x6b3d08:c.instructions+=1;goto B6b3d08;
case 0x6b3d0a:goto L6b3d0a;
case 0x6b3d0b:c.instructions+=3;goto B6b3d0b;
case 0x6b3d0e:c.instructions+=2;goto B6b3d0e;
case 0x6b3d11:c.instructions+=1;goto B6b3d11;
case 0x6b3d13:goto L6b3d13;
case 0x6b3d16:c.instructions+=1;goto B6b3d16;
case 0x6b3d1c:goto L6b3d1c;
case 0x6b3d1f:c.instructions+=7;goto B6b3d1f;
case 0x6b3d21:c.instructions+=6;goto B6b3d21;
case 0x6b3d24:c.instructions+=5;goto B6b3d24;
case 0x6b3d27:c.instructions+=4;goto B6b3d27;
case 0x6b3d2a:c.instructions+=3;goto B6b3d2a;
case 0x6b3d2d:c.instructions+=2;goto B6b3d2d;
case 0x6b3d30:c.instructions+=1;goto B6b3d30;
case 0x6b3d33:goto L6b3d33;
case 0x6b3d36:c.instructions+=4;goto B6b3d36;
case 0x6b3d37:c.instructions+=3;goto B6b3d37;
case 0x6b3d3a:c.instructions+=2;goto B6b3d3a;
case 0x6b3d3d:c.instructions+=1;goto B6b3d3d;
case 0x6b3d3f:goto L6b3d3f;
case 0x6b3d44:goto L6b3d44;
case 0x6b3d48:c.instructions+=1;goto B6b3d48;
case 0x6b3d4e:goto L6b3d4e;
case 0x6b3d50:c.instructions+=3;goto B6b3d50;
case 0x6b3d53:c.instructions+=2;goto B6b3d53;
case 0x6b3d56:c.instructions+=1;goto B6b3d56;
case 0x6b3d5c:goto L6b3d5c;
case 0x6b3d5f:goto L6b3d5f;
case 0x6b3d62:c.instructions+=4;goto B6b3d62;
case 0x6b3d65:c.instructions+=3;goto B6b3d65;
case 0x6b3d67:c.instructions+=2;goto B6b3d67;
case 0x6b3d69:c.instructions+=1;goto B6b3d69;
case 0x6b3d6b:goto L6b3d6b;
case 0x6b3d6d:c.instructions+=3;goto B6b3d6d;
case 0x6b3d72:c.instructions+=2;goto B6b3d72;
case 0x6b3d77:c.instructions+=1;goto B6b3d77;
case 0x6b3d79:goto L6b3d79;
case 0x6b3d7e:c.instructions+=1;goto B6b3d7e;
case 0x6b3d80:goto L6b3d80;
case 0x6b3d82:goto L6b3d82;
case 0x6b3d85:c.instructions+=1;goto B6b3d85;
case 0x6b3d87:goto L6b3d87;
case 0x6b3d88:c.instructions+=2;goto B6b3d88;
case 0x6b3d8b:c.instructions+=1;goto B6b3d8b;
case 0x6b3d8d:goto L6b3d8d;
case 0x6b3d90:c.instructions+=1;goto B6b3d90;
case 0x6b3d92:goto L6b3d92;
case 0x6b3d95:c.instructions+=7;goto B6b3d95;
case 0x6b3d97:c.instructions+=6;goto B6b3d97;
case 0x6b3d9a:c.instructions+=5;goto B6b3d9a;
case 0x6b3d9d:c.instructions+=4;goto B6b3d9d;
case 0x6b3da0:c.instructions+=3;goto B6b3da0;
case 0x6b3da2:c.instructions+=2;goto B6b3da2;
case 0x6b3da5:c.instructions+=1;goto B6b3da5;
case 0x6b3da7:goto L6b3da7;
case 0x6b3daa:c.instructions+=4;goto B6b3daa;
case 0x6b3dab:c.instructions+=3;goto B6b3dab;
case 0x6b3dae:c.instructions+=2;goto B6b3dae;
case 0x6b3db1:c.instructions+=1;goto B6b3db1;
case 0x6b3db3:goto L6b3db3;
case 0x6b3db8:goto L6b3db8;
case 0x6b3dba:c.instructions+=1;goto B6b3dba;
case 0x6b3dbf:goto L6b3dbf;
case 0x6b3dc1:c.instructions+=10;goto B6b3dc1;
case 0x6b3dc2:c.instructions+=9;goto B6b3dc2;
case 0x6b3dc4:c.instructions+=8;goto B6b3dc4;
case 0x6b3dc7:c.instructions+=7;goto B6b3dc7;
case 0x6b3dca:c.instructions+=6;goto B6b3dca;
case 0x6b3dcb:c.instructions+=5;goto B6b3dcb;
case 0x6b3dcc:c.instructions+=4;goto B6b3dcc;
case 0x6b3dce:c.instructions+=3;goto B6b3dce;
case 0x6b3dd0:c.instructions+=2;goto B6b3dd0;
case 0x6b3dd1:c.instructions+=1;goto B6b3dd1;
case 0x6b3dd3:goto L6b3dd3;
case 0x6b3dd5:c.instructions+=1;goto B6b3dd5;
case 0x6b3dd7:goto L6b3dd7;
case 0x6b3dda:c.instructions+=4;goto B6b3dda;
case 0x6b3ddb:c.instructions+=3;goto B6b3ddb;
case 0x6b3ddd:c.instructions+=2;goto B6b3ddd;
case 0x6b3de0:c.instructions+=1;goto B6b3de0;
case 0x6b3de2:goto L6b3de2;
case 0x6b3de5:c.instructions+=1;goto B6b3de5;
case 0x6b3deb:goto L6b3deb;
case 0x6b3df1:c.instructions+=4;goto B6b3df1;
case 0x6b3df3:c.instructions+=3;goto B6b3df3;
case 0x6b3df5:c.instructions+=2;goto B6b3df5;
case 0x6b3df8:c.instructions+=1;goto B6b3df8;
case 0x6b3dfe:goto L6b3dfe;
case 0x6b3e00:c.instructions+=4;goto B6b3e00;
case 0x6b3e03:c.instructions+=3;goto B6b3e03;
case 0x6b3e06:c.instructions+=2;goto B6b3e06;
case 0x6b3e09:c.instructions+=1;goto B6b3e09;
case 0x6b3e0f:goto L6b3e0f;
case 0x6b3e15:c.instructions+=1;goto B6b3e15;
case 0x6b3e18:goto L6b3e18;
case 0x6b3e1b:c.instructions+=13;goto B6b3e1b;
case 0x6b3e1d:c.instructions+=12;goto B6b3e1d;
case 0x6b3e20:c.instructions+=11;goto B6b3e20;
case 0x6b3e23:c.instructions+=10;goto B6b3e23;
case 0x6b3e26:c.instructions+=9;goto B6b3e26;
case 0x6b3e28:c.instructions+=8;goto B6b3e28;
case 0x6b3e2a:c.instructions+=7;goto B6b3e2a;
case 0x6b3e2b:c.instructions+=6;goto B6b3e2b;
case 0x6b3e2d:c.instructions+=5;goto B6b3e2d;
case 0x6b3e30:c.instructions+=4;goto B6b3e30;
case 0x6b3e32:c.instructions+=3;goto B6b3e32;
case 0x6b3e38:c.instructions+=2;goto B6b3e38;
case 0x6b3e3a:c.instructions+=1;goto B6b3e3a;
case 0x6b3e3c:goto L6b3e3c;
case 0x6b3e40:c.instructions+=1;goto B6b3e40;
case 0x6b3e46:goto L6b3e46;
case 0x6b3e49:c.instructions+=3;goto B6b3e49;
case 0x6b3e4c:c.instructions+=2;goto B6b3e4c;
case 0x6b3e50:c.instructions+=1;goto B6b3e50;
case 0x6b3e52:goto L6b3e52;
case 0x6b3e58:c.instructions+=1;goto B6b3e58;
case 0x6b3e5e:goto L6b3e5e;
case 0x6b3e64:c.instructions+=1;goto B6b3e64;
case 0x6b3e66:goto L6b3e66;
case 0x6b3e69:c.instructions+=6;goto B6b3e69;
case 0x6b3e6f:c.instructions+=5;goto B6b3e6f;
case 0x6b3e72:c.instructions+=4;goto B6b3e72;
case 0x6b3e75:c.instructions+=3;goto B6b3e75;
case 0x6b3e78:c.instructions+=2;goto B6b3e78;
case 0x6b3e7c:c.instructions+=1;goto B6b3e7c;
case 0x6b3e82:goto L6b3e82;
case 0x6b3e86:c.instructions+=1;goto B6b3e86;
case 0x6b3e8c:goto L6b3e8c;
case 0x6b3e8f:c.instructions+=2;goto B6b3e8f;
case 0x6b3e92:c.instructions+=1;goto B6b3e92;
case 0x6b3e96:goto L6b3e96;
case 0x6b3e99:c.instructions+=4;goto B6b3e99;
case 0x6b3e9c:c.instructions+=3;goto B6b3e9c;
case 0x6b3ea0:c.instructions+=2;goto B6b3ea0;
case 0x6b3ea6:c.instructions+=1;goto B6b3ea6;
case 0x6b3eac:goto L6b3eac;
case 0x6b3eae:goto L6b3eae;
case 0x6b3eb0:c.instructions+=5;goto B6b3eb0;
case 0x6b3eb1:c.instructions+=4;goto B6b3eb1;
case 0x6b3eb2:c.instructions+=3;goto B6b3eb2;
case 0x6b3eb5:c.instructions+=2;goto B6b3eb5;
case 0x6b3eb8:c.instructions+=1;goto B6b3eb8;
case 0x6b3ebb:goto L6b3ebb;
case 0x6b3ebd:goto L6b3ebd;
case 0x6b3ec0:c.instructions+=6;goto B6b3ec0;
case 0x6b3ec1:c.instructions+=5;goto B6b3ec1;
case 0x6b3ec4:c.instructions+=4;goto B6b3ec4;
case 0x6b3ec5:c.instructions+=3;goto B6b3ec5;
case 0x6b3ecb:c.instructions+=2;goto B6b3ecb;
case 0x6b3ecd:c.instructions+=1;goto B6b3ecd;
case 0x6b3ed2:goto L6b3ed2;
case 0x6b3ed4:c.instructions+=1;goto B6b3ed4;
case 0x6b3eda:goto L6b3eda;
case 0x6b3edb:c.instructions+=8;goto B6b3edb;
case 0x6b3ede:c.instructions+=7;goto B6b3ede;
case 0x6b3ee1:c.instructions+=6;goto B6b3ee1;
case 0x6b3ee2:c.instructions+=5;goto B6b3ee2;
case 0x6b3ee5:c.instructions+=4;goto B6b3ee5;
case 0x6b3ee6:c.instructions+=3;goto B6b3ee6;
case 0x6b3eec:c.instructions+=2;goto B6b3eec;
case 0x6b3eee:c.instructions+=1;goto B6b3eee;
case 0x6b3ef3:goto L6b3ef3;
case 0x6b3ef5:c.instructions+=1;goto B6b3ef5;
case 0x6b3efb:goto L6b3efb;
case 0x6b3efd:c.instructions+=8;goto B6b3efd;
case 0x6b3f00:c.instructions+=7;goto B6b3f00;
case 0x6b3f03:c.instructions+=6;goto B6b3f03;
case 0x6b3f04:c.instructions+=5;goto B6b3f04;
case 0x6b3f07:c.instructions+=4;goto B6b3f07;
case 0x6b3f08:c.instructions+=3;goto B6b3f08;
case 0x6b3f0e:c.instructions+=2;goto B6b3f0e;
case 0x6b3f10:c.instructions+=1;goto B6b3f10;
case 0x6b3f15:goto L6b3f15;
case 0x6b3f17:c.instructions+=1;goto B6b3f17;
case 0x6b3f1d:goto L6b3f1d;
case 0x6b3f1f:c.instructions+=8;goto B6b3f1f;
case 0x6b3f22:c.instructions+=7;goto B6b3f22;
case 0x6b3f25:c.instructions+=6;goto B6b3f25;
case 0x6b3f26:c.instructions+=5;goto B6b3f26;
case 0x6b3f29:c.instructions+=4;goto B6b3f29;
case 0x6b3f2a:c.instructions+=3;goto B6b3f2a;
case 0x6b3f30:c.instructions+=2;goto B6b3f30;
case 0x6b3f32:c.instructions+=1;goto B6b3f32;
case 0x6b3f37:goto L6b3f37;
case 0x6b3f39:c.instructions+=1;goto B6b3f39;
case 0x6b3f3f:goto L6b3f3f;
case 0x6b3f41:c.instructions+=8;goto B6b3f41;
case 0x6b3f44:c.instructions+=7;goto B6b3f44;
case 0x6b3f47:c.instructions+=6;goto B6b3f47;
case 0x6b3f48:c.instructions+=5;goto B6b3f48;
case 0x6b3f4b:c.instructions+=4;goto B6b3f4b;
case 0x6b3f4c:c.instructions+=3;goto B6b3f4c;
case 0x6b3f52:c.instructions+=2;goto B6b3f52;
case 0x6b3f54:c.instructions+=1;goto B6b3f54;
case 0x6b3f59:goto L6b3f59;
case 0x6b3f5b:c.instructions+=1;goto B6b3f5b;
case 0x6b3f61:goto L6b3f61;
case 0x6b3f63:c.instructions+=8;goto B6b3f63;
case 0x6b3f66:c.instructions+=7;goto B6b3f66;
case 0x6b3f69:c.instructions+=6;goto B6b3f69;
case 0x6b3f6a:c.instructions+=5;goto B6b3f6a;
case 0x6b3f6d:c.instructions+=4;goto B6b3f6d;
case 0x6b3f6e:c.instructions+=3;goto B6b3f6e;
case 0x6b3f74:c.instructions+=2;goto B6b3f74;
case 0x6b3f76:c.instructions+=1;goto B6b3f76;
case 0x6b3f7b:goto L6b3f7b;
case 0x6b3f7d:c.instructions+=1;goto B6b3f7d;
case 0x6b3f83:goto L6b3f83;
case 0x6b3f86:c.instructions+=1;goto B6b3f86;
case 0x6b3f8c:goto L6b3f8c;
case 0x6b3f8e:c.instructions+=3;goto B6b3f8e;
case 0x6b3f8f:c.instructions+=2;goto B6b3f8f;
case 0x6b3f91:c.instructions+=1;goto B6b3f91;
case 0x6b3f94:goto L6b3f94;
case 0x6b3f96:goto L6b3f96;
case 0x6b3f98:c.instructions+=2;goto B6b3f98;
case 0x6b3f99:c.instructions+=1;goto B6b3f99;
case 0x6b3f9c:goto L6b3f9c;
case 0x6b3f9e:goto L6b3f9e;
case 0x6b3fa1:c.instructions+=5;goto B6b3fa1;
case 0x6b3fa3:c.instructions+=4;goto B6b3fa3;
case 0x6b3fa9:c.instructions+=3;goto B6b3fa9;
case 0x6b3fac:c.instructions+=2;goto B6b3fac;
case 0x6b3fae:c.instructions+=1;goto B6b3fae;
case 0x6b3fb0:goto L6b3fb0;
case 0x6b3fb6:c.instructions+=2;goto B6b3fb6;
case 0x6b3fb9:c.instructions+=1;goto B6b3fb9;
case 0x6b3fbf:goto L6b3fbf;
case 0x6b3fc1:c.instructions+=3;goto B6b3fc1;
case 0x6b3fc3:c.instructions+=2;goto B6b3fc3;
case 0x6b3fc6:c.instructions+=1;goto B6b3fc6;
case 0x6b3fc8:goto L6b3fc8;
case 0x6b3fca:c.instructions+=1;goto B6b3fca;
case 0x6b3fd0:goto L6b3fd0;
case 0x6b3fd6:c.instructions+=3;goto B6b3fd6;
case 0x6b3fd9:c.instructions+=2;goto B6b3fd9;
case 0x6b3fdb:c.instructions+=1;goto B6b3fdb;
case 0x6b3fdd:goto L6b3fdd;
case 0x6b3fdf:c.instructions+=2;goto B6b3fdf;
case 0x6b3fe4:c.instructions+=1;goto B6b3fe4;
case 0x6b3fe7:goto L6b3fe7;
case 0x6b3fe8:c.instructions+=1;goto B6b3fe8;
case 0x6b3fed:goto L6b3fed;
case 0x6b3fef:c.instructions+=2;goto B6b3fef;
case 0x6b3ff2:c.instructions+=1;goto B6b3ff2;
case 0x6b3ff4:goto L6b3ff4;
case 0x6b3ff7:c.instructions+=1;goto B6b3ff7;
case 0x6b3ffc:goto L6b3ffc;
case 0x6b3ffe:c.instructions+=1;goto B6b3ffe;
default:missing_instruction(c.pc);}
B6b3003:L6b3003:{c.instructions+=1;NFSU2_TR(0x6b3003);
__builtin_memmove((R+4),(R+12),4);
}
B6b3005:L6b3005:{c.instructions+=1;NFSU2_TR(0x6b3005);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b3007;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3005u);}goto L6b3005;}
}
B6b3007:L6b3007:{c.instructions+=2;NFSU2_TR(0x6b3007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b300a:{NFSU2_TR(0x6b300a);
__builtin_memmove((R+4),(R+12),4);
}
B6b300c:L6b300c:{c.instructions+=1;NFSU2_TR(0x6b300c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b300e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b300cu);}goto L6b300c;}
}
B6b300e:L6b300e:{c.instructions+=2;NFSU2_TR(0x6b300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b3011:{NFSU2_TR(0x6b3011);
__builtin_memmove((R+4),(R+12),4);
}
B6b3013:L6b3013:{c.instructions+=1;NFSU2_TR(0x6b3013);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b3015;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3013u);}goto L6b3013;}
}
B6b3015:L6b3015:{c.instructions+=6;NFSU2_TR(0x6b3015);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3018:{NFSU2_TR(0x6b3018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b301e:{NFSU2_TR(0x6b301e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3024:{NFSU2_TR(0x6b3024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3027:{NFSU2_TR(0x6b3027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b302a:{NFSU2_TR(0x6b302a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b312a;}}
}
B6b3030:L6b3030:{c.instructions+=2;NFSU2_TR(0x6b3030);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6b3033:{NFSU2_TR(0x6b3033);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b31f3;}}
}
B6b3039:L6b3039:{c.instructions+=8;NFSU2_TR(0x6b3039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b303c:{NFSU2_TR(0x6b303c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b303f:{NFSU2_TR(0x6b303f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3042:{NFSU2_TR(0x6b3042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3044:{NFSU2_TR(0x6b3044);
__builtin_memmove((R+8),(R+4),4);
}
B6b3046:{NFSU2_TR(0x6b3046);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b304c:{NFSU2_TR(0x6b304c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3052:{NFSU2_TR(0x6b3052);
if(r1(R+518)){{goto L6b3088;}}
}
B6b3054:L6b3054:{c.instructions+=2;NFSU2_TR(0x6b3054);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b305a:{NFSU2_TR(0x6b305a);
if(r1(R+518)){{goto L6b3088;}}
}
B6b305c:L6b305c:{c.instructions+=2;NFSU2_TR(0x6b305c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3062:{NFSU2_TR(0x6b3062);
if(r1(R+518)){{goto L6b3088;}}
}
B6b3064:L6b3064:{c.instructions+=2;NFSU2_TR(0x6b3064);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b306a:{NFSU2_TR(0x6b306a);
if(r1(R+518)){{goto L6b3088;}}
}
B6b306c:L6b306c:{c.instructions+=2;NFSU2_TR(0x6b306c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3072:{NFSU2_TR(0x6b3072);
if(r1(R+518)){{goto L6b3088;}}
}
B6b3074:L6b3074:{c.instructions+=2;NFSU2_TR(0x6b3074);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b307a:{NFSU2_TR(0x6b307a);
if(r1(R+518)){{goto L6b3088;}}
}
B6b307c:L6b307c:{c.instructions+=2;NFSU2_TR(0x6b307c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3082:{NFSU2_TR(0x6b3082);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b311b;}}
}
B6b3088:L6b3088:{c.instructions+=4;NFSU2_TR(0x6b3088);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b308e:{NFSU2_TR(0x6b308e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3094:{NFSU2_TR(0x6b3094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3097:{NFSU2_TR(0x6b3097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b309e;}}
}
B6b3099:L6b3099:{c.instructions+=2;NFSU2_TR(0x6b3099);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b309b:{NFSU2_TR(0x6b309b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b309e:L6b309e:{c.instructions+=8;NFSU2_TR(0x6b309e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b30a1:{NFSU2_TR(0x6b30a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b30a4:{NFSU2_TR(0x6b30a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b30a7:{NFSU2_TR(0x6b30a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b30a9:{NFSU2_TR(0x6b30a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b30ac:{NFSU2_TR(0x6b30ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b30af:{NFSU2_TR(0x6b30af);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b30b5:{NFSU2_TR(0x6b30b5);
if(r1(R+518)){{goto L6b30fb;}}
}
B6b30b7:L6b30b7:{c.instructions+=2;NFSU2_TR(0x6b30b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b30bb:{NFSU2_TR(0x6b30bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b30fb;}}
}
B6b30bd:L6b30bd:{c.instructions+=2;NFSU2_TR(0x6b30bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b30c3:{NFSU2_TR(0x6b30c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b311b;}}
}
B6b30c5:L6b30c5:{c.instructions+=2;NFSU2_TR(0x6b30c5);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b30c9:{NFSU2_TR(0x6b30c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b320f;}}
}
B6b30cf:L6b30cf:{c.instructions+=3;NFSU2_TR(0x6b30cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6b30d3:{NFSU2_TR(0x6b30d3);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b30d8:{NFSU2_TR(0x6b30d8);
if(r1(R+518)){{goto L6b311b;}}
}
B6b30da:L6b30da:{c.instructions+=4;NFSU2_TR(0x6b30da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b30e0:{NFSU2_TR(0x6b30e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b30e5:{NFSU2_TR(0x6b30e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b30ea:{NFSU2_TR(0x6b30ea);
if(r1(R+518)){{goto L6b311b;}}
}
B6b30ec:L6b30ec:{c.instructions+=3;NFSU2_TR(0x6b30ec);
u8 U[4];
w4(U+0,u32(0x7bc5e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b30f1:{NFSU2_TR(0x6b30f1);
u8 U[4];
w4(U+0,u32(0x11a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b30f6:{NFSU2_TR(0x6b30f6);
{goto L6b3219;}
}
B6b30fb:L6b30fb:{c.instructions+=9;NFSU2_TR(0x6b30fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b30fe:{NFSU2_TR(0x6b30fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6b3101:{NFSU2_TR(0x6b3101);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b3104:{NFSU2_TR(0x6b3104);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3105:{NFSU2_TR(0x6b3105);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3108:{NFSU2_TR(0x6b3108);
__builtin_memmove((R+4),(R+24),4);
}
B6b310a:{NFSU2_TR(0x6b310a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b310b:{NFSU2_TR(0x6b310b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b310c:{NFSU2_TR(0x6b310c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3111ull));
TAIL_STATIC(0x6b2374u,6b2);
}
B6b3111:L6b3111:{c.instructions+=3;NFSU2_TR(0x6b3111);
__builtin_memmove((R+28),(R+0),4);
}
B6b3113:{NFSU2_TR(0x6b3113);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b3115:{NFSU2_TR(0x6b3115);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b31ce;}}
}
B6b311b:L6b311b:{c.instructions+=4;NFSU2_TR(0x6b311b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b311e:{NFSU2_TR(0x6b311e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3121:{NFSU2_TR(0x6b3121);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3124:{NFSU2_TR(0x6b3124);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3030u);}goto L6b3030;}}
}
B6b312a:L6b312a:{c.instructions+=4;NFSU2_TR(0x6b312a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b312c:{NFSU2_TR(0x6b312c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b312e:{NFSU2_TR(0x6b312e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3131:{NFSU2_TR(0x6b3131);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b314b;}}
}
B6b3133:L6b3133:{c.instructions+=3;NFSU2_TR(0x6b3133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3136:{NFSU2_TR(0x6b3136);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3139:{NFSU2_TR(0x6b3139);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6b313b:L6b313b:{c.instructions+=7;NFSU2_TR(0x6b313b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b313d:{NFSU2_TR(0x6b313d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3140:{NFSU2_TR(0x6b3140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b3142:{NFSU2_TR(0x6b3142);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b3143:{NFSU2_TR(0x6b3143);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b3146:{NFSU2_TR(0x6b3146);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b3149:{NFSU2_TR(0x6b3149);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b313bu);}goto L6b313b;}}
}
B6b314b:L6b314b:{c.instructions+=9;NFSU2_TR(0x6b314b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b314c:{NFSU2_TR(0x6b314c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b314d:{NFSU2_TR(0x6b314d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3150:{NFSU2_TR(0x6b3150);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3156:{NFSU2_TR(0x6b3156);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3159:{NFSU2_TR(0x6b3159);
__builtin_memmove((R+4),(R+24),4);
}
B6b315b:{NFSU2_TR(0x6b315b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b315c:{NFSU2_TR(0x6b315c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3162:{NFSU2_TR(0x6b3162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3167ull));
TAIL_STATIC(0x6b2554u,6b2);
}
B6b3167:L6b3167:{c.instructions+=3;NFSU2_TR(0x6b3167);
__builtin_memmove((R+28),(R+0),4);
}
B6b3169:{NFSU2_TR(0x6b3169);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6b316b:{NFSU2_TR(0x6b316b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b31ce;}}
}
B6b316d:L6b316d:{c.instructions+=3;NFSU2_TR(0x6b316d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b316f:{NFSU2_TR(0x6b316f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3172:{NFSU2_TR(0x6b3172);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3184;}}
}
B6b3174:L6b3174:{c.instructions+=6;NFSU2_TR(0x6b3174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3177:{NFSU2_TR(0x6b3177);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b317a:{NFSU2_TR(0x6b317a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b317e:{NFSU2_TR(0x6b317e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b317f:{NFSU2_TR(0x6b317f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3182:{NFSU2_TR(0x6b3182);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3174u);}goto L6b3174;}}
}
B6b3184:L6b3184:{c.instructions+=9;NFSU2_TR(0x6b3184);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3187:{NFSU2_TR(0x6b3187);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b318d:{NFSU2_TR(0x6b318d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3193:{NFSU2_TR(0x6b3193);
__builtin_memmove((R+4),(R+24),4);
}
B6b3195:{NFSU2_TR(0x6b3195);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3198:{NFSU2_TR(0x6b3198);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b319b:{NFSU2_TR(0x6b319b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b319c:{NFSU2_TR(0x6b319c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b31a2:{NFSU2_TR(0x6b31a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b31a7ull));
TAIL_STATIC(0x6b2554u,6b2);
}
B6b31a7:L6b31a7:{c.instructions+=3;NFSU2_TR(0x6b31a7);
__builtin_memmove((R+28),(R+0),4);
}
B6b31a9:{NFSU2_TR(0x6b31a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b31ab:{NFSU2_TR(0x6b31ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b31ce;}}
}
B6b31ad:L6b31ad:{c.instructions+=4;NFSU2_TR(0x6b31ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b31af:{NFSU2_TR(0x6b31af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b31b1:{NFSU2_TR(0x6b31b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b31b4:{NFSU2_TR(0x6b31b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b31ce;}}
}
B6b31b6:L6b31b6:{c.instructions+=4;NFSU2_TR(0x6b31b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b31b9:{NFSU2_TR(0x6b31b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b31bc:{NFSU2_TR(0x6b31bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b31c0:{NFSU2_TR(0x6b31c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b31c8;}}
}
B6b31c2:L6b31c2:{c.instructions+=2;NFSU2_TR(0x6b31c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b31c5:{NFSU2_TR(0x6b31c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b31c8:L6b31c8:{c.instructions+=3;NFSU2_TR(0x6b31c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b31c9:{NFSU2_TR(0x6b31c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b31cc:{NFSU2_TR(0x6b31cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b31b6u);}goto L6b31b6;}}
}
B6b31ce:L6b31ce:{c.instructions+=2;NFSU2_TR(0x6b31ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b31d2:{NFSU2_TR(0x6b31d2);
if(r1(R+518)){{goto L6b31dd;}}
}
B6b31d4:L6b31d4:{c.instructions+=2;NFSU2_TR(0x6b31d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b31d7:{NFSU2_TR(0x6b31d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b31dcull));
TAIL_STATIC(0x575630u,575);
}
B6b31dc:L6b31dc:{c.instructions+=1;NFSU2_TR(0x6b31dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b31dd:L6b31dd:{c.instructions+=2;NFSU2_TR(0x6b31dd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b31e1:{NFSU2_TR(0x6b31e1);
if(r1(R+518)){{goto L6b31ec;}}
}
B6b31e3:L6b31e3:{c.instructions+=2;NFSU2_TR(0x6b31e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b31e6:{NFSU2_TR(0x6b31e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b31ebull));
TAIL_STATIC(0x575630u,575);
}
B6b31eb:L6b31eb:{c.instructions+=1;NFSU2_TR(0x6b31eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b31ec:L6b31ec:{c.instructions+=1;NFSU2_TR(0x6b31ec);
__builtin_memmove((R+0),(R+28),4);
}
B6b31ee:L6b31ee:{c.instructions+=5;NFSU2_TR(0x6b31ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b31ef:{NFSU2_TR(0x6b31ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b31f0:{NFSU2_TR(0x6b31f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b31f1:{NFSU2_TR(0x6b31f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b31f2:{NFSU2_TR(0x6b31f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b31f3:L6b31f3:{c.instructions+=5;NFSU2_TR(0x6b31f3);
u8 U[4];
w4(U+0,u32(0x7bc4a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b31f8:{NFSU2_TR(0x6b31f8);
u8 U[4];
w4(U+0,u32(0x11a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b31fd:{NFSU2_TR(0x6b31fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b31ff:{NFSU2_TR(0x6b31ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3200:{NFSU2_TR(0x6b3200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3205ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b3205:L6b3205:{c.instructions+=3;NFSU2_TR(0x6b3205);
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
B6b3208:{NFSU2_TR(0x6b3208);
w4(R+0,u32(0x80004005ull));
}
B6b320d:{NFSU2_TR(0x6b320d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b31eeu);}goto L6b31ee;}
}
B6b320f:L6b320f:{c.instructions+=2;NFSU2_TR(0x6b320f);
u8 U[4];
w4(U+0,u32(0x7bc2b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3214:{NFSU2_TR(0x6b3214);
u8 U[4];
w4(U+0,u32(0x11a1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3219:L6b3219:{c.instructions+=3;NFSU2_TR(0x6b3219);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b321b:{NFSU2_TR(0x6b321b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b321c:{NFSU2_TR(0x6b321c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3221ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b3221:L6b3221:{c.instructions+=3;NFSU2_TR(0x6b3221);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b3224:{NFSU2_TR(0x6b3224);
w4(R+28,u32(0x80004005ull));
}
B6b3229:{NFSU2_TR(0x6b3229);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b31ceu);}goto L6b31ce;}
}
B6b322b:L6b322b:{c.instructions+=12;NFSU2_TR(0x6b322b);
__builtin_memmove((R+28),(R+28),4);
}
B6b322d:{NFSU2_TR(0x6b322d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b322e:{NFSU2_TR(0x6b322e);
__builtin_memmove((R+20),(R+16),4);
}
B6b3230:{NFSU2_TR(0x6b3230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3231:{NFSU2_TR(0x6b3231);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3232:{NFSU2_TR(0x6b3232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3235:{NFSU2_TR(0x6b3235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3239:{NFSU2_TR(0x6b3239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b323c:{NFSU2_TR(0x6b323c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b323f:{NFSU2_TR(0x6b323f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3242:{NFSU2_TR(0x6b3242);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b3245:{NFSU2_TR(0x6b3245);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b32a1;}}
}
B6b3247:L6b3247:{c.instructions+=3;NFSU2_TR(0x6b3247);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3248:{NFSU2_TR(0x6b3248);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3249:{NFSU2_TR(0x6b3249);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b324a:L6b324a:{c.instructions+=5;NFSU2_TR(0x6b324a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b324d:{NFSU2_TR(0x6b324d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b3250:{NFSU2_TR(0x6b3250);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3252:{NFSU2_TR(0x6b3252);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3254:{NFSU2_TR(0x6b3254);
if(r1(R+518)){{goto L6b3298;}}
}
B6b3256:L6b3256:{c.instructions+=2;NFSU2_TR(0x6b3256);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3259:{NFSU2_TR(0x6b3259);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3298;}}
}
B6b325b:L6b325b:{c.instructions+=7;NFSU2_TR(0x6b325b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b325e:{NFSU2_TR(0x6b325e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b3261:{NFSU2_TR(0x6b3261);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3264:{NFSU2_TR(0x6b3264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b3267:{NFSU2_TR(0x6b3267);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b326a:{NFSU2_TR(0x6b326a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b326d:{NFSU2_TR(0x6b326d);
if(r1(R+518)){{goto L6b3277;}}
}
B6b326f:L6b326f:{c.instructions+=3;NFSU2_TR(0x6b326f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3272:{NFSU2_TR(0x6b3272);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3275:{NFSU2_TR(0x6b3275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3292;}}
}
B6b3277:L6b3277:{c.instructions+=8;NFSU2_TR(0x6b3277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b327a:{NFSU2_TR(0x6b327a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b327d:{NFSU2_TR(0x6b327d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3280:{NFSU2_TR(0x6b3280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3283:{NFSU2_TR(0x6b3283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3286:{NFSU2_TR(0x6b3286);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3289:{NFSU2_TR(0x6b3289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b328c:{NFSU2_TR(0x6b328c);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6b3292:L6b3292:{c.instructions+=3;NFSU2_TR(0x6b3292);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b3293:{NFSU2_TR(0x6b3293);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b3296:{NFSU2_TR(0x6b3296);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b325bu);}goto L6b325b;}}
}
B6b3298:L6b3298:{c.instructions+=3;NFSU2_TR(0x6b3298);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b3299:{NFSU2_TR(0x6b3299);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b329c:{NFSU2_TR(0x6b329c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b324au);}goto L6b324a;}}
}
B6b329e:L6b329e:{c.instructions+=3;NFSU2_TR(0x6b329e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b329f:{NFSU2_TR(0x6b329f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b32a0:{NFSU2_TR(0x6b32a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b32a1:L6b32a1:{c.instructions+=3;NFSU2_TR(0x6b32a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b32a4:{NFSU2_TR(0x6b32a4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b32a5:{NFSU2_TR(0x6b32a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b32a8:L6b32a8:{c.instructions+=11;NFSU2_TR(0x6b32a8);
__builtin_memmove((R+28),(R+28),4);
}
B6b32aa:{NFSU2_TR(0x6b32aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b32ab:{NFSU2_TR(0x6b32ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b32ac:{NFSU2_TR(0x6b32ac);
__builtin_memmove((R+24),(R+4),4);
}
B6b32ae:{NFSU2_TR(0x6b32ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b32b1:{NFSU2_TR(0x6b32b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b32b2:{NFSU2_TR(0x6b32b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b32b5:{NFSU2_TR(0x6b32b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b32b6:{NFSU2_TR(0x6b32b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b32b8:{NFSU2_TR(0x6b32b8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b32ba:{NFSU2_TR(0x6b32ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b32bfull));
TAIL_STATIC(0x575620u,575);
}
B6b32bf:L6b32bf:{c.instructions+=5;NFSU2_TR(0x6b32bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b32c5:{NFSU2_TR(0x6b32c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b32c8:{NFSU2_TR(0x6b32c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b32cb:{NFSU2_TR(0x6b32cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b32cc:{NFSU2_TR(0x6b32cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b32d1ull));
TAIL_STATIC(0x575620u,575);
}
B6b32d1:L6b32d1:{c.instructions+=5;NFSU2_TR(0x6b32d1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
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
B6b32d7:{NFSU2_TR(0x6b32d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b32d8:{NFSU2_TR(0x6b32d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b32d9:{NFSU2_TR(0x6b32d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b32df:{NFSU2_TR(0x6b32df);
if(r1(R+518)){{goto L6b3396;}}
}
B6b32e5:L6b32e5:{c.instructions+=2;NFSU2_TR(0x6b32e5);
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
B6b32e7:{NFSU2_TR(0x6b32e7);
if(r1(R+518)){{goto L6b3396;}}
}
B6b32ed:L6b32ed:{c.instructions+=2;NFSU2_TR(0x6b32ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b32f0:{NFSU2_TR(0x6b32f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3335;}}
}
B6b32f2:L6b32f2:{c.instructions+=2;NFSU2_TR(0x6b32f2);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b32f4:{NFSU2_TR(0x6b32f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b32f9ull));
TAIL_STATIC(0x699317u,699);
}
B6b32f9:L6b32f9:{c.instructions+=2;NFSU2_TR(0x6b32f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b32fb:{NFSU2_TR(0x6b32fb);
if(r1(R+518)){{goto L6b3306;}}
}
B6b32fd:L6b32fd:{c.instructions+=2;NFSU2_TR(0x6b32fd);
__builtin_memmove((R+4),(R+0),4);
}
B6b32ff:{NFSU2_TR(0x6b32ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3304ull));
TAIL_STATIC(0x698e7du,698);
}
B6b3304:L6b3304:{c.instructions+=1;NFSU2_TR(0x6b3304);
{goto L6b3308;}
}
B6b3306:L6b3306:{c.instructions+=1;NFSU2_TR(0x6b3306);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3308:L6b3308:{c.instructions+=6;NFSU2_TR(0x6b3308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b330e:{NFSU2_TR(0x6b330e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3311:{NFSU2_TR(0x6b3311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3317:{NFSU2_TR(0x6b3317);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b331a:{NFSU2_TR(0x6b331a);
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
B6b331c:{NFSU2_TR(0x6b331c);
if(r1(R+518)){{goto L6b3396;}}
}
B6b331e:L6b331e:{c.instructions+=3;NFSU2_TR(0x6b331e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3321:{NFSU2_TR(0x6b3321);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b3324:{NFSU2_TR(0x6b3324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3329ull));
TAIL_STATIC(0x6995c1u,699);
}
B6b3329:L6b3329:{c.instructions+=3;NFSU2_TR(0x6b3329);
__builtin_memmove((R+12),(R+0),4);
}
B6b332b:{NFSU2_TR(0x6b332b);
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
B6b332d:{NFSU2_TR(0x6b332d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b339b;}}
}
B6b332f:L6b332f:{c.instructions+=3;NFSU2_TR(0x6b332f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b3330:{NFSU2_TR(0x6b3330);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b3333:{NFSU2_TR(0x6b3333);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b32f2u);}goto L6b32f2;}}
}
B6b3335:L6b3335:{c.instructions+=3;NFSU2_TR(0x6b3335);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3337:{NFSU2_TR(0x6b3337);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B6b333a:{NFSU2_TR(0x6b333a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3382;}}
}
B6b333c:L6b333c:{c.instructions+=2;NFSU2_TR(0x6b333c);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3341:{NFSU2_TR(0x6b3341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3346ull));
TAIL_STATIC(0x699876u,699);
}
B6b3346:L6b3346:{c.instructions+=2;NFSU2_TR(0x6b3346);
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
B6b3348:{NFSU2_TR(0x6b3348);
if(r1(R+518)){{goto L6b3353;}}
}
B6b334a:L6b334a:{c.instructions+=2;NFSU2_TR(0x6b334a);
__builtin_memmove((R+4),(R+0),4);
}
B6b334c:{NFSU2_TR(0x6b334c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3351ull));
TAIL_STATIC(0x6d4918u,6d4);
}
B6b3351:L6b3351:{c.instructions+=1;NFSU2_TR(0x6b3351);
{goto L6b3355;}
}
B6b3353:L6b3353:{c.instructions+=1;NFSU2_TR(0x6b3353);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3355:L6b3355:{c.instructions+=6;NFSU2_TR(0x6b3355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b335b:{NFSU2_TR(0x6b335b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b335e:{NFSU2_TR(0x6b335e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3364:{NFSU2_TR(0x6b3364);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b3367:{NFSU2_TR(0x6b3367);
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
B6b3369:{NFSU2_TR(0x6b3369);
if(r1(R+518)){{goto L6b3396;}}
}
B6b336b:L6b336b:{c.instructions+=3;NFSU2_TR(0x6b336b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b336e:{NFSU2_TR(0x6b336e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b3371:{NFSU2_TR(0x6b3371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3376ull));
TAIL_STATIC(0x699765u,699);
}
B6b3376:L6b3376:{c.instructions+=3;NFSU2_TR(0x6b3376);
__builtin_memmove((R+12),(R+0),4);
}
B6b3378:{NFSU2_TR(0x6b3378);
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
B6b337a:{NFSU2_TR(0x6b337a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b339b;}}
}
B6b337c:L6b337c:{c.instructions+=3;NFSU2_TR(0x6b337c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b337d:{NFSU2_TR(0x6b337d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B6b3380:{NFSU2_TR(0x6b3380);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b333cu);}goto L6b333c;}}
}
B6b3382:L6b3382:{c.instructions+=5;NFSU2_TR(0x6b3382);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3385:{NFSU2_TR(0x6b3385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b338b:{NFSU2_TR(0x6b338b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b338e:{NFSU2_TR(0x6b338e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3394:{NFSU2_TR(0x6b3394);
{goto L6b339b;}
}
B6b3396:L6b3396:{c.instructions+=1;NFSU2_TR(0x6b3396);
w4(R+12,u32(0x8007000eull));
}
B6b339b:L6b339b:{c.instructions+=5;NFSU2_TR(0x6b339b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b339c:{NFSU2_TR(0x6b339c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b339d:{NFSU2_TR(0x6b339d);
__builtin_memmove((R+0),(R+12),4);
}
B6b339f:{NFSU2_TR(0x6b339f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b33a0:{NFSU2_TR(0x6b33a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b33a1:L6b33a1:{c.instructions+=9;NFSU2_TR(0x6b33a1);
__builtin_memmove((R+28),(R+28),4);
}
B6b33a3:{NFSU2_TR(0x6b33a3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b33a4:{NFSU2_TR(0x6b33a4);
__builtin_memmove((R+20),(R+16),4);
}
B6b33a6:{NFSU2_TR(0x6b33a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b33a7:{NFSU2_TR(0x6b33a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b33ab:{NFSU2_TR(0x6b33ab);
__builtin_memmove((R+0),(R+4),4);
}
B6b33ad:{NFSU2_TR(0x6b33ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b33b4:{NFSU2_TR(0x6b33b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b33b5:{NFSU2_TR(0x6b33b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3421;}}
}
B6b33b7:L6b33b7:{c.instructions+=2;NFSU2_TR(0x6b33b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b33b8:{NFSU2_TR(0x6b33b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b33b9:L6b33b9:{c.instructions+=12;NFSU2_TR(0x6b33b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b33bf:{NFSU2_TR(0x6b33bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b33c2:{NFSU2_TR(0x6b33c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b33c5:{NFSU2_TR(0x6b33c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b33c8:{NFSU2_TR(0x6b33c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b33cb:{NFSU2_TR(0x6b33cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b33ce:{NFSU2_TR(0x6b33ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b33d1:{NFSU2_TR(0x6b33d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b33d4:{NFSU2_TR(0x6b33d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b33d7:{NFSU2_TR(0x6b33d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b33da:{NFSU2_TR(0x6b33da);
__builtin_memmove((R+12),(R+4),4);
}
B6b33dc:{NFSU2_TR(0x6b33dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6b33df:L6b33df:{c.instructions+=1;NFSU2_TR(0x6b33df);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b33e1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b33dfu);}goto L6b33df;}
}
B6b33e1:L6b33e1:{c.instructions+=2;NFSU2_TR(0x6b33e1);
__builtin_memmove((R+4),(R+12),4);
}
B6b33e3:{NFSU2_TR(0x6b33e3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6b33e6:L6b33e6:{c.instructions+=1;NFSU2_TR(0x6b33e6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6b33e8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b33e6u);}goto L6b33e6;}
}
B6b33e8:L6b33e8:{c.instructions+=10;NFSU2_TR(0x6b33e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b33ee:{NFSU2_TR(0x6b33ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b33f1:{NFSU2_TR(0x6b33f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b33f4:{NFSU2_TR(0x6b33f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b33f7:{NFSU2_TR(0x6b33f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b33fa:{NFSU2_TR(0x6b33fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b33fd:{NFSU2_TR(0x6b33fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3400:{NFSU2_TR(0x6b3400);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b3403:{NFSU2_TR(0x6b3403);
__builtin_memmove((R+8),(R+4),4);
}
B6b3405:{NFSU2_TR(0x6b3405);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6b3408:L6b3408:{c.instructions+=1;NFSU2_TR(0x6b3408);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6b340a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3408u);}goto L6b3408;}
}
B6b340a:L6b340a:{c.instructions+=3;NFSU2_TR(0x6b340a);
__builtin_memmove((R+4),(R+8),4);
}
B6b340c:{NFSU2_TR(0x6b340c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6b340f:{NFSU2_TR(0x6b340f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3412:L6b3412:{c.instructions+=1;NFSU2_TR(0x6b3412);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6b3414;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3412u);}goto L6b3412;}
}
B6b3414:L6b3414:{c.instructions+=3;NFSU2_TR(0x6b3414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3417:{NFSU2_TR(0x6b3417);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b341d:{NFSU2_TR(0x6b341d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b33b9u);}goto L6b33b9;}}
}
B6b341f:L6b341f:{c.instructions+=2;NFSU2_TR(0x6b341f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3420:{NFSU2_TR(0x6b3420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b3421:L6b3421:{c.instructions+=3;NFSU2_TR(0x6b3421);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b3423:{NFSU2_TR(0x6b3423);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3429:{NFSU2_TR(0x6b3429);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3449;}}
}
B6b342b:L6b342b:{c.instructions+=9;NFSU2_TR(0x6b342b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b3431:{NFSU2_TR(0x6b3431);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b3434:{NFSU2_TR(0x6b3434);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3437:{NFSU2_TR(0x6b3437);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b343a:{NFSU2_TR(0x6b343a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b343d:{NFSU2_TR(0x6b343d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b343e:{NFSU2_TR(0x6b343e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3441:{NFSU2_TR(0x6b3441);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b3447:{NFSU2_TR(0x6b3447);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b342bu);}goto L6b342b;}}
}
B6b3449:L6b3449:{c.instructions+=4;NFSU2_TR(0x6b3449);
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
B6b344b:{NFSU2_TR(0x6b344b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b344c:{NFSU2_TR(0x6b344c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b344d:{NFSU2_TR(0x6b344d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b344e:L6b344e:{c.instructions+=12;NFSU2_TR(0x6b344e);
__builtin_memmove((R+28),(R+28),4);
}
B6b3450:{NFSU2_TR(0x6b3450);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3451:{NFSU2_TR(0x6b3451);
__builtin_memmove((R+20),(R+16),4);
}
B6b3453:{NFSU2_TR(0x6b3453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6b3456:{NFSU2_TR(0x6b3456);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3457:{NFSU2_TR(0x6b3457);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3458:{NFSU2_TR(0x6b3458);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3459:{NFSU2_TR(0x6b3459);
__builtin_memmove((R+24),(R+4),4);
}
B6b345b:{NFSU2_TR(0x6b345b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b345d:{NFSU2_TR(0x6b345d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b345f:{NFSU2_TR(0x6b345f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b3460:{NFSU2_TR(0x6b3460);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3463:L6b3463:{c.instructions+=1;NFSU2_TR(0x6b3463);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b3465;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3463u);}goto L6b3463;}
}
B6b3465:L6b3465:{c.instructions+=4;NFSU2_TR(0x6b3465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3468:{NFSU2_TR(0x6b3468);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b346a:{NFSU2_TR(0x6b346a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b346d:{NFSU2_TR(0x6b346d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3523;}}
}
B6b3473:L6b3473:{c.instructions+=3;NFSU2_TR(0x6b3473);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3476:{NFSU2_TR(0x6b3476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3479:{NFSU2_TR(0x6b3479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b347c:L6b347c:{c.instructions+=4;NFSU2_TR(0x6b347c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b347f:{NFSU2_TR(0x6b347f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3481:{NFSU2_TR(0x6b3481);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3483:{NFSU2_TR(0x6b3483);
if(r1(R+518)){{goto L6b3516;}}
}
B6b3489:L6b3489:{c.instructions+=4;NFSU2_TR(0x6b3489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b348b:{NFSU2_TR(0x6b348b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b348d:{NFSU2_TR(0x6b348d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3490:{NFSU2_TR(0x6b3490);
if(r1(R+518)){{goto L6b3516;}}
}
B6b3496:L6b3496:{c.instructions+=5;NFSU2_TR(0x6b3496);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3499:{NFSU2_TR(0x6b3499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b349d:{NFSU2_TR(0x6b349d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b349f:{NFSU2_TR(0x6b349f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b34a2:{NFSU2_TR(0x6b34a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3516;}}
}
B6b34a4:L6b34a4:{c.instructions+=1;NFSU2_TR(0x6b34a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b34a7:L6b34a7:{c.instructions+=6;NFSU2_TR(0x6b34a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b34aa:{NFSU2_TR(0x6b34aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b34ac:{NFSU2_TR(0x6b34ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b34af:{NFSU2_TR(0x6b34af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b34b5:{NFSU2_TR(0x6b34b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b34b8:{NFSU2_TR(0x6b34b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3508;}}
}
B6b34ba:L6b34ba:{c.instructions+=3;NFSU2_TR(0x6b34ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6b34be:{NFSU2_TR(0x6b34be);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b34c1:{NFSU2_TR(0x6b34c1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b3516;}}
}
B6b34c3:L6b34c3:{c.instructions+=2;NFSU2_TR(0x6b34c3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b34c7:{NFSU2_TR(0x6b34c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3508;}}
}
B6b34c9:L6b34c9:{c.instructions+=4;NFSU2_TR(0x6b34c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b34cc:{NFSU2_TR(0x6b34cc);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6b34d2:{NFSU2_TR(0x6b34d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b34d3:{NFSU2_TR(0x6b34d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b34d8ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b34d8:L6b34d8:{c.instructions+=2;NFSU2_TR(0x6b34d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b34da:{NFSU2_TR(0x6b34da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b34f4;}}
}
B6b34dc:L6b34dc:{c.instructions+=2;NFSU2_TR(0x6b34dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b34e2:{NFSU2_TR(0x6b34e2);
if(r1(R+518)){{goto L6b34f4;}}
}
B6b34e4:L6b34e4:{c.instructions+=5;NFSU2_TR(0x6b34e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b34e7:{NFSU2_TR(0x6b34e7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b34eb:{NFSU2_TR(0x6b34eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b34ec:{NFSU2_TR(0x6b34ec);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b34ee:{NFSU2_TR(0x6b34ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3508;}}
}
B6b34f0:L6b34f0:{c.instructions+=2;NFSU2_TR(0x6b34f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b34f2:{NFSU2_TR(0x6b34f2);
{goto L6b3508;}
}
B6b34f4:L6b34f4:{c.instructions+=5;NFSU2_TR(0x6b34f4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b34f8:{NFSU2_TR(0x6b34f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b34fb:{NFSU2_TR(0x6b34fb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b34fc:{NFSU2_TR(0x6b34fc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+4))));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b34fe:{NFSU2_TR(0x6b34fe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3508;}}
}
B6b3500:L6b3500:{c.instructions+=2;NFSU2_TR(0x6b3500);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3504:{NFSU2_TR(0x6b3504);
if(r1(R+518)){{goto L6b3508;}}
}
B6b3506:L6b3506:{c.instructions+=1;NFSU2_TR(0x6b3506);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b3508:L6b3508:{c.instructions+=5;NFSU2_TR(0x6b3508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b350b:{NFSU2_TR(0x6b350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b350e:{NFSU2_TR(0x6b350e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6b3511:{NFSU2_TR(0x6b3511);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3514:{NFSU2_TR(0x6b3514);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b34a7u);}goto L6b34a7;}}
}
B6b3516:L6b3516:{c.instructions+=3;NFSU2_TR(0x6b3516);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b351a:{NFSU2_TR(0x6b351a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b351d:{NFSU2_TR(0x6b351d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b347cu);}goto L6b347c;}}
}
B6b3523:L6b3523:{c.instructions+=3;NFSU2_TR(0x6b3523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3527:{NFSU2_TR(0x6b3527);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b352a:{NFSU2_TR(0x6b352a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b352d:L6b352d:{c.instructions+=3;NFSU2_TR(0x6b352d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3530:{NFSU2_TR(0x6b3530);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b3533:{NFSU2_TR(0x6b3533);
if(r1(R+518)){{goto L6b3640;}}
}
B6b3539:L6b3539:{c.instructions+=2;NFSU2_TR(0x6b3539);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b353b:{NFSU2_TR(0x6b353b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3540ull));
TAIL_STATIC(0x699317u,699);
}
B6b3540:L6b3540:{c.instructions+=2;NFSU2_TR(0x6b3540);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3542:{NFSU2_TR(0x6b3542);
if(r1(R+518)){{goto L6b354f;}}
}
B6b3544:L6b3544:{c.instructions+=2;NFSU2_TR(0x6b3544);
__builtin_memmove((R+4),(R+0),4);
}
B6b3546:{NFSU2_TR(0x6b3546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b354bull));
TAIL_STATIC(0x698e7du,698);
}
B6b354b:L6b354b:{c.instructions+=2;NFSU2_TR(0x6b354b);
__builtin_memmove((R+28),(R+0),4);
}
B6b354d:{NFSU2_TR(0x6b354d);
{goto L6b3551;}
}
B6b354f:L6b354f:{c.instructions+=1;NFSU2_TR(0x6b354f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3551:L6b3551:{c.instructions+=2;NFSU2_TR(0x6b3551);
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
B6b3553:{NFSU2_TR(0x6b3553);
if(r1(R+518)){{goto L6b36ab;}}
}
B6b3559:L6b3559:{c.instructions+=10;NFSU2_TR(0x6b3559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b355c:{NFSU2_TR(0x6b355c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b355e:{NFSU2_TR(0x6b355e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3560:{NFSU2_TR(0x6b3560);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3561:{NFSU2_TR(0x6b3561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3562:{NFSU2_TR(0x6b3562);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b3567:{NFSU2_TR(0x6b3567);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x72100000ull))));
}
B6b356c:{NFSU2_TR(0x6b356c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b356d:{NFSU2_TR(0x6b356d);
__builtin_memmove((R+4),(R+28),4);
}
B6b356f:{NFSU2_TR(0x6b356f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3574ull));
TAIL_STATIC(0x699362u,699);
}
B6b3574:L6b3574:{c.instructions+=3;NFSU2_TR(0x6b3574);
__builtin_memmove((R+12),(R+0),4);
}
B6b3576:{NFSU2_TR(0x6b3576);
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
B6b3578:{NFSU2_TR(0x6b3578);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b38c8;}}
}
B6b357e:L6b357e:{c.instructions+=4;NFSU2_TR(0x6b357e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3581:{NFSU2_TR(0x6b3581);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3583:{NFSU2_TR(0x6b3583);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+12))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b3585:{NFSU2_TR(0x6b3585);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b35b9;}}
}
B6b3587:L6b3587:{c.instructions+=9;NFSU2_TR(0x6b3587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3588:{NFSU2_TR(0x6b3588);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b358a:{NFSU2_TR(0x6b358a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b358b:{NFSU2_TR(0x6b358b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b358e:{NFSU2_TR(0x6b358e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b358f:{NFSU2_TR(0x6b358f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3591:{NFSU2_TR(0x6b3591);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3597:{NFSU2_TR(0x6b3597);
__builtin_memmove((R+4),(R+24),4);
}
B6b3599:{NFSU2_TR(0x6b3599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b359eull));
TAIL_STATIC(0x699c39u,699);
}
B6b359e:L6b359e:{c.instructions+=5;NFSU2_TR(0x6b359e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b35a1:{NFSU2_TR(0x6b35a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b35a4:{NFSU2_TR(0x6b35a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b35a7:{NFSU2_TR(0x6b35a7);
u8 U[26];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6b35ab:{NFSU2_TR(0x6b35ab);
if(r1(R+518)){{goto L6b36a2;}}
}
B6b35b1:L6b35b1:{c.instructions+=4;NFSU2_TR(0x6b35b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b35b4:{NFSU2_TR(0x6b35b4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b35b5:{NFSU2_TR(0x6b35b5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+4))));
}
B6b35b7:{NFSU2_TR(0x6b35b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3587u);}goto L6b3587;}}
}
B6b35b9:L6b35b9:{c.instructions+=9;NFSU2_TR(0x6b35b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b35bc:{NFSU2_TR(0x6b35bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b35bf:{NFSU2_TR(0x6b35bf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6b35c1:{NFSU2_TR(0x6b35c1);
__builtin_memmove((R+4),(R+24),4);
}
B6b35c3:{NFSU2_TR(0x6b35c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b35c6:{NFSU2_TR(0x6b35c6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b35c8:{NFSU2_TR(0x6b35c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b35cb:{NFSU2_TR(0x6b35cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b35ce:{NFSU2_TR(0x6b35ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b35d3ull));
TAIL_STATIC(0x6b20eeu,6b2);
}
B6b35d3:L6b35d3:{c.instructions+=3;NFSU2_TR(0x6b35d3);
__builtin_memmove((R+12),(R+0),4);
}
B6b35d5:{NFSU2_TR(0x6b35d5);
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
B6b35d7:{NFSU2_TR(0x6b35d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b36b5;}}
}
B6b35dd:L6b35dd:{c.instructions+=4;NFSU2_TR(0x6b35dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b35e0:{NFSU2_TR(0x6b35e0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b35e2:{NFSU2_TR(0x6b35e2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+12))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b35e4:{NFSU2_TR(0x6b35e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b362b;}}
}
B6b35e6:L6b35e6:{c.instructions+=9;NFSU2_TR(0x6b35e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b35e7:{NFSU2_TR(0x6b35e7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b35e9:{NFSU2_TR(0x6b35e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b35ea:{NFSU2_TR(0x6b35ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b35ed:{NFSU2_TR(0x6b35ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b35ee:{NFSU2_TR(0x6b35ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b35f1:{NFSU2_TR(0x6b35f1);
__builtin_memmove((R+4),(R+24),4);
}
B6b35f3:{NFSU2_TR(0x6b35f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b35f9:{NFSU2_TR(0x6b35f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b35feull));
TAIL_STATIC(0x699c39u,699);
}
B6b35fe:L6b35fe:{c.instructions+=2;NFSU2_TR(0x6b35fe);
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
B6b3601:{NFSU2_TR(0x6b3601);
if(r1(R+518)){{goto L6b36c3;}}
}
B6b3607:L6b3607:{c.instructions+=13;NFSU2_TR(0x6b3607);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b360a:{NFSU2_TR(0x6b360a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b360d:{NFSU2_TR(0x6b360d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b3610:{NFSU2_TR(0x6b3610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3614:{NFSU2_TR(0x6b3614);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b3617:{NFSU2_TR(0x6b3617);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x3ull))));
}
B6b361a:{NFSU2_TR(0x6b361a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b361d:{NFSU2_TR(0x6b361d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3620:{NFSU2_TR(0x6b3620);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3623:{NFSU2_TR(0x6b3623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3626:{NFSU2_TR(0x6b3626);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b3627:{NFSU2_TR(0x6b3627);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+4))));
}
B6b3629:{NFSU2_TR(0x6b3629);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b35e6u);}goto L6b35e6;}}
}
B6b362b:L6b362b:{c.instructions+=3;NFSU2_TR(0x6b362b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b362c:{NFSU2_TR(0x6b362c);
__builtin_memmove((R+4),(R+24),4);
}
B6b362e:{NFSU2_TR(0x6b362e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3633ull));
TAIL_STATIC(0x699b26u,699);
}
B6b3633:L6b3633:{c.instructions+=4;NFSU2_TR(0x6b3633);
__builtin_memmove((R+12),(R+0),4);
}
B6b3635:{NFSU2_TR(0x6b3635);
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
B6b3637:{NFSU2_TR(0x6b3637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b363a:{NFSU2_TR(0x6b363a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b38c8;}}
}
B6b3640:L6b3640:{c.instructions+=4;NFSU2_TR(0x6b3640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3643:{NFSU2_TR(0x6b3643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3647:{NFSU2_TR(0x6b3647);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x6ull))));
}
B6b364b:{NFSU2_TR(0x6b364b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b352du);}goto L6b352d;}}
}
B6b3651:L6b3651:{c.instructions+=3;NFSU2_TR(0x6b3651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3655:{NFSU2_TR(0x6b3655);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3659:{NFSU2_TR(0x6b3659);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b37ea;}}
}
B6b365f:L6b365f:{c.instructions+=11;NFSU2_TR(0x6b365f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3662:{NFSU2_TR(0x6b3662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3665:{NFSU2_TR(0x6b3665);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b3668:{NFSU2_TR(0x6b3668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b366a:{NFSU2_TR(0x6b366a);
__builtin_memmove((R+8),(R+0),4);
}
B6b366c:{NFSU2_TR(0x6b366c);
__builtin_memmove((R+4),(R+0),4);
}
B6b366e:{NFSU2_TR(0x6b366e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b3674:{NFSU2_TR(0x6b3674);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b367a:{NFSU2_TR(0x6b367a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b367b:{NFSU2_TR(0x6b367b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b367e:{NFSU2_TR(0x6b367e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3683ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3683:L6b3683:{c.instructions+=2;NFSU2_TR(0x6b3683);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3685:{NFSU2_TR(0x6b3685);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3693;}}
}
B6b3687:L6b3687:{c.instructions+=2;NFSU2_TR(0x6b3687);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b368d:{NFSU2_TR(0x6b368d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b37db;}}
}
B6b3693:L6b3693:{c.instructions+=3;NFSU2_TR(0x6b3693);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3699:{NFSU2_TR(0x6b3699);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b369c:{NFSU2_TR(0x6b369c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b36d6;}}
}
B6b369e:L6b369e:{c.instructions+=2;NFSU2_TR(0x6b369e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b36a0:{NFSU2_TR(0x6b36a0);
{goto L6b36d9;}
}
B6b36a2:L6b36a2:{c.instructions+=3;NFSU2_TR(0x6b36a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b36a4:{NFSU2_TR(0x6b36a4);
__builtin_memmove((R+4),(R+28),4);
}
B6b36a6:{NFSU2_TR(0x6b36a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b36abull));
TAIL_STATIC(0x6739efu,673);
}
B6b36ab:L6b36ab:{c.instructions+=2;NFSU2_TR(0x6b36ab);
w4(R+12,u32(0x8007000eull));
}
B6b36b0:{NFSU2_TR(0x6b36b0);
{goto L6b38c8;}
}
B6b36b5:L6b36b5:{c.instructions+=3;NFSU2_TR(0x6b36b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b36b7:{NFSU2_TR(0x6b36b7);
__builtin_memmove((R+4),(R+28),4);
}
B6b36b9:{NFSU2_TR(0x6b36b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b36beull));
TAIL_STATIC(0x6739efu,673);
}
B6b36be:L6b36be:{c.instructions+=1;NFSU2_TR(0x6b36be);
{goto L6b38c8;}
}
B6b36c3:L6b36c3:{c.instructions+=3;NFSU2_TR(0x6b36c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b36c5:{NFSU2_TR(0x6b36c5);
__builtin_memmove((R+4),(R+28),4);
}
B6b36c7:{NFSU2_TR(0x6b36c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b36ccull));
TAIL_STATIC(0x6739efu,673);
}
B6b36cc:L6b36cc:{c.instructions+=2;NFSU2_TR(0x6b36cc);
w4(R+0,u32(0x8007000eull));
}
B6b36d1:{NFSU2_TR(0x6b36d1);
{goto L6b38ca;}
}
B6b36d6:L6b36d6:{c.instructions+=1;NFSU2_TR(0x6b36d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b36d9:L6b36d9:{c.instructions+=4;NFSU2_TR(0x6b36d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b36dc:{NFSU2_TR(0x6b36dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b36df:{NFSU2_TR(0x6b36df);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1full))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b36e3:{NFSU2_TR(0x6b36e3);
if(r1(R+518)){{goto L6b37db;}}
}
B6b36e9:L6b36e9:{c.instructions+=3;NFSU2_TR(0x6b36e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b36ec:{NFSU2_TR(0x6b36ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b36f2:{NFSU2_TR(0x6b36f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b37db;}}
}
B6b36f8:L6b36f8:{c.instructions+=2;NFSU2_TR(0x6b36f8);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b36fa:{NFSU2_TR(0x6b36fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b36ffull));
TAIL_STATIC(0x699317u,699);
}
B6b36ff:L6b36ff:{c.instructions+=2;NFSU2_TR(0x6b36ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3701:{NFSU2_TR(0x6b3701);
if(r1(R+518)){{goto L6b370e;}}
}
B6b3703:L6b3703:{c.instructions+=2;NFSU2_TR(0x6b3703);
__builtin_memmove((R+4),(R+0),4);
}
B6b3705:{NFSU2_TR(0x6b3705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b370aull));
TAIL_STATIC(0x698e7du,698);
}
B6b370a:L6b370a:{c.instructions+=2;NFSU2_TR(0x6b370a);
__builtin_memmove((R+12),(R+0),4);
}
B6b370c:{NFSU2_TR(0x6b370c);
{goto L6b3710;}
}
B6b370e:L6b370e:{c.instructions+=1;NFSU2_TR(0x6b370e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3710:L6b3710:{c.instructions+=2;NFSU2_TR(0x6b3710);
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
B6b3712:{NFSU2_TR(0x6b3712);
if(r1(R+518)){{goto L6b38be;}}
}
B6b3718:L6b3718:{c.instructions+=9;NFSU2_TR(0x6b3718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b371b:{NFSU2_TR(0x6b371b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b371d:{NFSU2_TR(0x6b371d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3720:{NFSU2_TR(0x6b3720);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b3725:{NFSU2_TR(0x6b3725);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3728:{NFSU2_TR(0x6b3728);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6b372d:{NFSU2_TR(0x6b372d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b372e:{NFSU2_TR(0x6b372e);
__builtin_memmove((R+4),(R+12),4);
}
B6b3730:{NFSU2_TR(0x6b3730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3735ull));
TAIL_STATIC(0x699362u,699);
}
B6b3735:L6b3735:{c.instructions+=3;NFSU2_TR(0x6b3735);
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
B6b3737:{NFSU2_TR(0x6b3737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b373a:{NFSU2_TR(0x6b373a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b38c5;}}
}
B6b3740:L6b3740:{c.instructions+=6;NFSU2_TR(0x6b3740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3742:{NFSU2_TR(0x6b3742);
__builtin_memmove((R+4),(R+0),4);
}
B6b3744:{NFSU2_TR(0x6b3744);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b3749:{NFSU2_TR(0x6b3749);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6b374f:{NFSU2_TR(0x6b374f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3754:{NFSU2_TR(0x6b3754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3758;}}
}
B6b3756:L6b3756:{c.instructions+=1;NFSU2_TR(0x6b3756);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b3758:L6b3758:{c.instructions+=3;NFSU2_TR(0x6b3758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b375c:{NFSU2_TR(0x6b375c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3760:{NFSU2_TR(0x6b3760);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b37c8;}}
}
B6b3762:L6b3762:{c.instructions+=3;NFSU2_TR(0x6b3762);
__builtin_memmove((R+0),(R+4),4);
}
B6b3764:{NFSU2_TR(0x6b3764);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b3767:{NFSU2_TR(0x6b3767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b376a:L6b376a:{c.instructions+=19;NFSU2_TR(0x6b376a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b376d:{NFSU2_TR(0x6b376d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b376f:{NFSU2_TR(0x6b376f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3772:{NFSU2_TR(0x6b3772);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3775:{NFSU2_TR(0x6b3775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3778:{NFSU2_TR(0x6b3778);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b377b:{NFSU2_TR(0x6b377b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b377e:{NFSU2_TR(0x6b377e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3781:{NFSU2_TR(0x6b3781);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3784:{NFSU2_TR(0x6b3784);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3785:{NFSU2_TR(0x6b3785);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3786:{NFSU2_TR(0x6b3786);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3789:{NFSU2_TR(0x6b3789);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b378c:{NFSU2_TR(0x6b378c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b378f:{NFSU2_TR(0x6b378f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3792:{NFSU2_TR(0x6b3792);
__builtin_memmove((R+4),(R+24),4);
}
B6b3794:{NFSU2_TR(0x6b3794);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3796:{NFSU2_TR(0x6b3796);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b379c:{NFSU2_TR(0x6b379c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b37a1ull));
TAIL_STATIC(0x699c39u,699);
}
B6b37a1:L6b37a1:{c.instructions+=13;NFSU2_TR(0x6b37a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b37a4:{NFSU2_TR(0x6b37a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b37a7:{NFSU2_TR(0x6b37a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b37aa:{NFSU2_TR(0x6b37aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b37ad:{NFSU2_TR(0x6b37ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b37b0:{NFSU2_TR(0x6b37b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b37b3:{NFSU2_TR(0x6b37b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b37b6:{NFSU2_TR(0x6b37b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b37b9:{NFSU2_TR(0x6b37b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b37bd:{NFSU2_TR(0x6b37bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b37c0:{NFSU2_TR(0x6b37c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b37c3:{NFSU2_TR(0x6b37c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b37c6:{NFSU2_TR(0x6b37c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b376au);}goto L6b376a;}}
}
B6b37c8:L6b37c8:{c.instructions+=3;NFSU2_TR(0x6b37c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b37c9:{NFSU2_TR(0x6b37c9);
__builtin_memmove((R+4),(R+24),4);
}
B6b37cb:{NFSU2_TR(0x6b37cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b37d0ull));
TAIL_STATIC(0x699b26u,699);
}
B6b37d0:L6b37d0:{c.instructions+=3;NFSU2_TR(0x6b37d0);
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
B6b37d2:{NFSU2_TR(0x6b37d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b37d5:{NFSU2_TR(0x6b37d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b38c5;}}
}
B6b37db:L6b37db:{c.instructions+=4;NFSU2_TR(0x6b37db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b37de:{NFSU2_TR(0x6b37de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b37e1:{NFSU2_TR(0x6b37e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b37e4:{NFSU2_TR(0x6b37e4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b365fu);}goto L6b365f;}}
}
B6b37ea:L6b37ea:{c.instructions+=3;NFSU2_TR(0x6b37ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b37ec:{NFSU2_TR(0x6b37ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b37ef:{NFSU2_TR(0x6b37ef);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3817;}}
}
B6b37f1:L6b37f1:{c.instructions+=4;NFSU2_TR(0x6b37f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b37f4:{NFSU2_TR(0x6b37f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b37f7:{NFSU2_TR(0x6b37f7);
__builtin_memmove((R+4),(R+24),4);
}
B6b37f9:{NFSU2_TR(0x6b37f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b37feull));
TAIL_STATIC(0x699d92u,699);
}
B6b37fe:L6b37fe:{c.instructions+=3;NFSU2_TR(0x6b37fe);
__builtin_memmove((R+12),(R+0),4);
}
B6b3800:{NFSU2_TR(0x6b3800);
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
B6b3802:{NFSU2_TR(0x6b3802);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b38c8;}}
}
B6b3808:L6b3808:{c.instructions+=6;NFSU2_TR(0x6b3808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b380b:{NFSU2_TR(0x6b380b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b380e:{NFSU2_TR(0x6b380e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b3811:{NFSU2_TR(0x6b3811);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b3812:{NFSU2_TR(0x6b3812);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b3815:{NFSU2_TR(0x6b3815);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b37f1u);}goto L6b37f1;}}
}
B6b3817:L6b3817:{c.instructions+=5;NFSU2_TR(0x6b3817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b381a:{NFSU2_TR(0x6b381a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b381e:{NFSU2_TR(0x6b381e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3820:{NFSU2_TR(0x6b3820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3823:{NFSU2_TR(0x6b3823);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b39a0;}}
}
B6b3829:L6b3829:{c.instructions+=6;NFSU2_TR(0x6b3829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b382c:{NFSU2_TR(0x6b382c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b382f:{NFSU2_TR(0x6b382f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b3832:{NFSU2_TR(0x6b3832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3834:{NFSU2_TR(0x6b3834);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3836:{NFSU2_TR(0x6b3836);
if(r1(R+518)){{goto L6b3991;}}
}
B6b383c:L6b383c:{c.instructions+=6;NFSU2_TR(0x6b383c);
__builtin_memmove((R+4),(R+0),4);
}
B6b383e:{NFSU2_TR(0x6b383e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b3844:{NFSU2_TR(0x6b3844);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b3849:{NFSU2_TR(0x6b3849);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b384a:{NFSU2_TR(0x6b384a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b384d:{NFSU2_TR(0x6b384d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3852ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3852:L6b3852:{c.instructions+=2;NFSU2_TR(0x6b3852);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3854:{NFSU2_TR(0x6b3854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3862;}}
}
B6b3856:L6b3856:{c.instructions+=2;NFSU2_TR(0x6b3856);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b385c:{NFSU2_TR(0x6b385c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3986;}}
}
B6b3862:L6b3862:{c.instructions+=17;NFSU2_TR(0x6b3862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b3865:{NFSU2_TR(0x6b3865);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x11000000ull))));
}
B6b386b:{NFSU2_TR(0x6b386b);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6b386d:{NFSU2_TR(0x6b386d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b386f:{NFSU2_TR(0x6b386f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B6b3872:{NFSU2_TR(0x6b3872);
__builtin_memmove((R+0),(R+4),4);
}
B6b3874:{NFSU2_TR(0x6b3874);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3877:{NFSU2_TR(0x6b3877);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b387a:{NFSU2_TR(0x6b387a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b387d:{NFSU2_TR(0x6b387d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3880:{NFSU2_TR(0x6b3880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3883:{NFSU2_TR(0x6b3883);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3886:{NFSU2_TR(0x6b3886);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3889:{NFSU2_TR(0x6b3889);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b388c:{NFSU2_TR(0x6b388c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b388f:{NFSU2_TR(0x6b388f);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b3892:{NFSU2_TR(0x6b3892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b38a7;}}
}
B6b3894:L6b3894:{c.instructions+=2;NFSU2_TR(0x6b3894);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b3897:{NFSU2_TR(0x6b3897);
if(r1(R+518)){{goto L6b3986;}}
}
B6b389d:L6b389d:{c.instructions+=2;NFSU2_TR(0x6b389d);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b38a1:{NFSU2_TR(0x6b38a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3986;}}
}
B6b38a7:L6b38a7:{c.instructions+=2;NFSU2_TR(0x6b38a7);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b38a9:{NFSU2_TR(0x6b38a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b38aeull));
TAIL_STATIC(0x699317u,699);
}
B6b38ae:L6b38ae:{c.instructions+=2;NFSU2_TR(0x6b38ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b38b0:{NFSU2_TR(0x6b38b0);
if(r1(R+518)){{goto L6b38cf;}}
}
B6b38b2:L6b38b2:{c.instructions+=2;NFSU2_TR(0x6b38b2);
__builtin_memmove((R+4),(R+0),4);
}
B6b38b4:{NFSU2_TR(0x6b38b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b38b9ull));
TAIL_STATIC(0x698e7du,698);
}
B6b38b9:L6b38b9:{c.instructions+=2;NFSU2_TR(0x6b38b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b38bc:{NFSU2_TR(0x6b38bc);
{goto L6b38d3;}
}
B6b38be:L6b38be:{c.instructions+=1;NFSU2_TR(0x6b38be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b38c5:L6b38c5:{c.instructions+=1;NFSU2_TR(0x6b38c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b38c8:L6b38c8:{c.instructions+=1;NFSU2_TR(0x6b38c8);
__builtin_memmove((R+0),(R+12),4);
}
B6b38ca:L6b38ca:{c.instructions+=5;NFSU2_TR(0x6b38ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b38cb:{NFSU2_TR(0x6b38cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b38cc:{NFSU2_TR(0x6b38cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b38cd:{NFSU2_TR(0x6b38cd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b38ce:{NFSU2_TR(0x6b38ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b38cf:L6b38cf:{c.instructions+=1;NFSU2_TR(0x6b38cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b38d3:L6b38d3:{c.instructions+=2;NFSU2_TR(0x6b38d3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b38d7:{NFSU2_TR(0x6b38d7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b36abu);}goto L6b36ab;}}
}
B6b38dd:L6b38dd:{c.instructions+=9;NFSU2_TR(0x6b38dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b38e0:{NFSU2_TR(0x6b38e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b38e3:{NFSU2_TR(0x6b38e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b38e5:{NFSU2_TR(0x6b38e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b38e8:{NFSU2_TR(0x6b38e8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b38ed:{NFSU2_TR(0x6b38ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b38f0:{NFSU2_TR(0x6b38f0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6b38f5:{NFSU2_TR(0x6b38f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b38f6:{NFSU2_TR(0x6b38f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b38fbull));
TAIL_STATIC(0x699362u,699);
}
B6b38fb:L6b38fb:{c.instructions+=3;NFSU2_TR(0x6b38fb);
__builtin_memmove((R+12),(R+0),4);
}
B6b38fd:{NFSU2_TR(0x6b38fd);
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
B6b38ff:{NFSU2_TR(0x6b38ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b38c8u);}goto L6b38c8;}}
}
B6b3901:L6b3901:{c.instructions+=3;NFSU2_TR(0x6b3901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3904:{NFSU2_TR(0x6b3904);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3905:{NFSU2_TR(0x6b3905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b390aull));
TAIL_STATIC(0x698eb3u,698);
}
B6b390a:L6b390a:{c.instructions+=3;NFSU2_TR(0x6b390a);
__builtin_memmove((R+12),(R+0),4);
}
B6b390c:{NFSU2_TR(0x6b390c);
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
B6b390e:{NFSU2_TR(0x6b390e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b38c8u);}goto L6b38c8;}}
}
B6b3910:L6b3910:{c.instructions+=3;NFSU2_TR(0x6b3910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3914:{NFSU2_TR(0x6b3914);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3918:{NFSU2_TR(0x6b3918);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b397c;}}
}
B6b391a:L6b391a:{c.instructions+=2;NFSU2_TR(0x6b391a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b391d:{NFSU2_TR(0x6b391d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b3920:L6b3920:{c.instructions+=14;NFSU2_TR(0x6b3920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3923:{NFSU2_TR(0x6b3923);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b3925:{NFSU2_TR(0x6b3925);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3928:{NFSU2_TR(0x6b3928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b392b:{NFSU2_TR(0x6b392b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b392e:{NFSU2_TR(0x6b392e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b392f:{NFSU2_TR(0x6b392f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3930:{NFSU2_TR(0x6b3930);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b3933:{NFSU2_TR(0x6b3933);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3934:{NFSU2_TR(0x6b3934);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3937:{NFSU2_TR(0x6b3937);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3939:{NFSU2_TR(0x6b3939);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b393f:{NFSU2_TR(0x6b393f);
__builtin_memmove((R+4),(R+24),4);
}
B6b3941:{NFSU2_TR(0x6b3941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3946ull));
TAIL_STATIC(0x699c39u,699);
}
B6b3946:L6b3946:{c.instructions+=12;NFSU2_TR(0x6b3946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3949:{NFSU2_TR(0x6b3949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b394c:{NFSU2_TR(0x6b394c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b394f:{NFSU2_TR(0x6b394f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3952:{NFSU2_TR(0x6b3952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3955:{NFSU2_TR(0x6b3955);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3958:{NFSU2_TR(0x6b3958);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b395b:{NFSU2_TR(0x6b395b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b395e:{NFSU2_TR(0x6b395e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3961:{NFSU2_TR(0x6b3961);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3964:{NFSU2_TR(0x6b3964);
u8 U[26];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6b3968:{NFSU2_TR(0x6b3968);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b36abu);}goto L6b36ab;}}
}
B6b396e:L6b396e:{c.instructions+=5;NFSU2_TR(0x6b396e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3971:{NFSU2_TR(0x6b3971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3974:{NFSU2_TR(0x6b3974);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6b3977:{NFSU2_TR(0x6b3977);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b397a:{NFSU2_TR(0x6b397a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3920u);}goto L6b3920;}}
}
B6b397c:L6b397c:{c.instructions+=3;NFSU2_TR(0x6b397c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b397f:{NFSU2_TR(0x6b397f);
__builtin_memmove((R+4),(R+24),4);
}
B6b3981:{NFSU2_TR(0x6b3981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3986ull));
TAIL_STATIC(0x699b26u,699);
}
B6b3986:L6b3986:{c.instructions+=3;NFSU2_TR(0x6b3986);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3987:{NFSU2_TR(0x6b3987);
__builtin_memmove((R+4),(R+24),4);
}
B6b3989:{NFSU2_TR(0x6b3989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b398eull));
TAIL_STATIC(0x699d92u,699);
}
B6b398e:L6b398e:{c.instructions+=1;NFSU2_TR(0x6b398e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b3991:L6b3991:{c.instructions+=4;NFSU2_TR(0x6b3991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3994:{NFSU2_TR(0x6b3994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3997:{NFSU2_TR(0x6b3997);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b399a:{NFSU2_TR(0x6b399a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3829u);}goto L6b3829;}}
}
B6b39a0:L6b39a0:{c.instructions+=2;NFSU2_TR(0x6b39a0);
__builtin_memmove((R+4),(R+24),4);
}
B6b39a2:{NFSU2_TR(0x6b39a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b39a7ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6b39a7:L6b39a7:{c.instructions+=2;NFSU2_TR(0x6b39a7);
__builtin_memmove((R+12),(R+0),4);
}
B6b39a9:{NFSU2_TR(0x6b39a9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b38c8u);}goto L6b38c8;}
}
B6b39ae:L6b39ae:{c.instructions+=10;NFSU2_TR(0x6b39ae);
__builtin_memmove((R+28),(R+28),4);
}
B6b39b0:{NFSU2_TR(0x6b39b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b39b1:{NFSU2_TR(0x6b39b1);
__builtin_memmove((R+20),(R+16),4);
}
B6b39b3:{NFSU2_TR(0x6b39b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b39b4:{NFSU2_TR(0x6b39b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b39b5:{NFSU2_TR(0x6b39b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b39b6:{NFSU2_TR(0x6b39b6);
__builtin_memmove((R+24),(R+4),4);
}
B6b39b8:{NFSU2_TR(0x6b39b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b39bb:{NFSU2_TR(0x6b39bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b39be:{NFSU2_TR(0x6b39be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b39c3ull));
TAIL_STATIC(0x6b19efu,6b1);
}
B6b39c3:L6b39c3:{c.instructions+=4;NFSU2_TR(0x6b39c3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b39c5:{NFSU2_TR(0x6b39c5);
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
B6b39c7:{NFSU2_TR(0x6b39c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b39ca:{NFSU2_TR(0x6b39ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b3a36;}}
}
B6b39cc:L6b39cc:{c.instructions+=3;NFSU2_TR(0x6b39cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b39ce:{NFSU2_TR(0x6b39ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b39d1:{NFSU2_TR(0x6b39d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b39eb;}}
}
B6b39d3:L6b39d3:{c.instructions+=9;NFSU2_TR(0x6b39d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b39d6:{NFSU2_TR(0x6b39d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b39d9:{NFSU2_TR(0x6b39d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b39dc:{NFSU2_TR(0x6b39dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b39df:{NFSU2_TR(0x6b39df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b39e2:{NFSU2_TR(0x6b39e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b39e3:{NFSU2_TR(0x6b39e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b39e6:{NFSU2_TR(0x6b39e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b39e9:{NFSU2_TR(0x6b39e9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b39d3u);}goto L6b39d3;}}
}
B6b39eb:L6b39eb:{c.instructions+=3;NFSU2_TR(0x6b39eb);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6b39ee:{NFSU2_TR(0x6b39ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b39f1:{NFSU2_TR(0x6b39f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3a36;}}
}
B6b39f3:L6b39f3:{c.instructions+=2;NFSU2_TR(0x6b39f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b39f4:{NFSU2_TR(0x6b39f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b39f5:L6b39f5:{c.instructions+=7;NFSU2_TR(0x6b39f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b39f8:{NFSU2_TR(0x6b39f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b39fb:{NFSU2_TR(0x6b39fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b39fe:{NFSU2_TR(0x6b39fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b3a00:{NFSU2_TR(0x6b3a00);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b3a06:{NFSU2_TR(0x6b3a06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a07:{NFSU2_TR(0x6b3a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3a0cull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3a0c:L6b3a0c:{c.instructions+=2;NFSU2_TR(0x6b3a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3a0e:{NFSU2_TR(0x6b3a0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3a18;}}
}
B6b3a10:L6b3a10:{c.instructions+=2;NFSU2_TR(0x6b3a10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3a16:{NFSU2_TR(0x6b3a16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3a29;}}
}
B6b3a18:L6b3a18:{c.instructions+=6;NFSU2_TR(0x6b3a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b3a1b:{NFSU2_TR(0x6b3a1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a1d:{NFSU2_TR(0x6b3a1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a1e:{NFSU2_TR(0x6b3a1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a1f:{NFSU2_TR(0x6b3a1f);
__builtin_memmove((R+4),(R+24),4);
}
B6b3a21:{NFSU2_TR(0x6b3a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3a26ull));
TAIL_STATIC(0x6c21d7u,6c2);
}
B6b3a26:L6b3a26:{c.instructions+=1;NFSU2_TR(0x6b3a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3a29:L6b3a29:{c.instructions+=4;NFSU2_TR(0x6b3a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3a2c:{NFSU2_TR(0x6b3a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3a2f:{NFSU2_TR(0x6b3a2f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6b3a32:{NFSU2_TR(0x6b3a32);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b39f5u);}goto L6b39f5;}}
}
B6b3a34:L6b3a34:{c.instructions+=2;NFSU2_TR(0x6b3a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3a35:{NFSU2_TR(0x6b3a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b3a36:L6b3a36:{c.instructions+=4;NFSU2_TR(0x6b3a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3a39:{NFSU2_TR(0x6b3a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b3a3a:{NFSU2_TR(0x6b3a3a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b3a3b:{NFSU2_TR(0x6b3a3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b3a3c:L6b3a3c:{c.instructions+=8;NFSU2_TR(0x6b3a3c);
__builtin_memmove((R+28),(R+28),4);
}
B6b3a3e:{NFSU2_TR(0x6b3a3e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a3f:{NFSU2_TR(0x6b3a3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a40:{NFSU2_TR(0x6b3a40);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3a42:{NFSU2_TR(0x6b3a42);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b3a44:{NFSU2_TR(0x6b3a44);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3a47:{NFSU2_TR(0x6b3a47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a48:{NFSU2_TR(0x6b3a48);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3a89;}}
}
B6b3a4a:L6b3a4a:{c.instructions+=1;NFSU2_TR(0x6b3a4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x450ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3a50:L6b3a50:{c.instructions+=6;NFSU2_TR(0x6b3a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3a53:{NFSU2_TR(0x6b3a53);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3a56:{NFSU2_TR(0x6b3a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b3a58:{NFSU2_TR(0x6b3a58);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b3a5e:{NFSU2_TR(0x6b3a5e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3a5f:{NFSU2_TR(0x6b3a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3a64ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3a64:L6b3a64:{c.instructions+=2;NFSU2_TR(0x6b3a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3a66:{NFSU2_TR(0x6b3a66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3a78;}}
}
B6b3a68:L6b3a68:{c.instructions+=2;NFSU2_TR(0x6b3a68);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3a6e:{NFSU2_TR(0x6b3a6e);
if(r1(R+518)){{goto L6b3a78;}}
}
B6b3a70:L6b3a70:{c.instructions+=2;NFSU2_TR(0x6b3a70);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3a76:{NFSU2_TR(0x6b3a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3a83;}}
}
B6b3a78:L6b3a78:{c.instructions+=2;NFSU2_TR(0x6b3a78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0xcull))));
}
B6b3a7b:{NFSU2_TR(0x6b3a7b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b3a9a;}}
}
B6b3a7d:L6b3a7d:{c.instructions+=3;NFSU2_TR(0x6b3a7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6b3a7f:{NFSU2_TR(0x6b3a7f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b3a80:{NFSU2_TR(0x6b3a80);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b3a83:L6b3a83:{c.instructions+=3;NFSU2_TR(0x6b3a83);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b3a84:{NFSU2_TR(0x6b3a84);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6b3a87:{NFSU2_TR(0x6b3a87);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3a50u);}goto L6b3a50;}}
}
B6b3a89:L6b3a89:{c.instructions+=5;NFSU2_TR(0x6b3a89);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3a8b:{NFSU2_TR(0x6b3a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x480ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3a91:{NFSU2_TR(0x6b3a91);
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
B6b3a92:{NFSU2_TR(0x6b3a92);
__builtin_memmove((R+4),(R+12),4);
}
B6b3a94:{NFSU2_TR(0x6b3a94);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+34))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6b3a96:L6b3a96:{c.instructions+=4;NFSU2_TR(0x6b3a96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3a97:{NFSU2_TR(0x6b3a97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b3a98:{NFSU2_TR(0x6b3a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b3a99:{NFSU2_TR(0x6b3a99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b3a9a:L6b3a9a:{c.instructions+=2;NFSU2_TR(0x6b3a9a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b3a9d:{NFSU2_TR(0x6b3a9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3a96u);}goto L6b3a96;}
}
B6b3a9f:L6b3a9f:{c.instructions+=12;NFSU2_TR(0x6b3a9f);
__builtin_memmove((R+28),(R+28),4);
}
B6b3aa1:{NFSU2_TR(0x6b3aa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3aa2:{NFSU2_TR(0x6b3aa2);
__builtin_memmove((R+20),(R+16),4);
}
B6b3aa4:{NFSU2_TR(0x6b3aa4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3aa5:{NFSU2_TR(0x6b3aa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3aa6:{NFSU2_TR(0x6b3aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3aa9:{NFSU2_TR(0x6b3aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3aab:{NFSU2_TR(0x6b3aab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3aac:{NFSU2_TR(0x6b3aac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b3ab1:{NFSU2_TR(0x6b3ab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ab2:{NFSU2_TR(0x6b3ab2);
__builtin_memmove((R+12),(R+4),4);
}
B6b3ab4:{NFSU2_TR(0x6b3ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3ab9ull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3ab9:L6b3ab9:{c.instructions+=3;NFSU2_TR(0x6b3ab9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3abb:{NFSU2_TR(0x6b3abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3abd:{NFSU2_TR(0x6b3abd);
if(r1(R+518)){{goto L6b3ae7;}}
}
B6b3abf:L6b3abf:{c.instructions+=2;NFSU2_TR(0x6b3abf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3ac2:{NFSU2_TR(0x6b3ac2);
if(r1(R+518)){{goto L6b3b0c;}}
}
B6b3ac4:L6b3ac4:{c.instructions+=2;NFSU2_TR(0x6b3ac4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6b3ac8:{NFSU2_TR(0x6b3ac8);
if(r1(R+512)){{goto L6b3ae4;}}
}
B6b3aca:L6b3aca:{c.instructions+=5;NFSU2_TR(0x6b3aca);
u8 U[4];
w4(U+0,u32(0x7bc674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3acf:{NFSU2_TR(0x6b3acf);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ad4:{NFSU2_TR(0x6b3ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3ad7:{NFSU2_TR(0x6b3ad7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ad8:{NFSU2_TR(0x6b3ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3addull));
TAIL_STATIC(0x69e936u,69e);
}
B6b3add:L6b3add:{c.instructions+=1;NFSU2_TR(0x6b3add);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b3ae0:L6b3ae0:{c.instructions+=2;NFSU2_TR(0x6b3ae0);
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
B6b3ae2:{NFSU2_TR(0x6b3ae2);
{goto L6b3b0f;}
}
B6b3ae4:L6b3ae4:{c.instructions+=1;NFSU2_TR(0x6b3ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3ae7:L6b3ae7:{c.instructions+=2;NFSU2_TR(0x6b3ae7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3aea:{NFSU2_TR(0x6b3aea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3b0c;}}
}
B6b3aec:L6b3aec:{c.instructions+=7;NFSU2_TR(0x6b3aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3aef:{NFSU2_TR(0x6b3aef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3af2:{NFSU2_TR(0x6b3af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3af5:{NFSU2_TR(0x6b3af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3af8:{NFSU2_TR(0x6b3af8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b3afb:{NFSU2_TR(0x6b3afb);
__builtin_memmove((R+4),(R+12),4);
}
B6b3afd:{NFSU2_TR(0x6b3afd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3b02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3a9fu);}goto L6b3a9f;}
}
B6b3b02:L6b3b02:{c.instructions+=2;NFSU2_TR(0x6b3b02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3b04:{NFSU2_TR(0x6b3b04);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3ae0u);}goto L6b3ae0;}}
}
B6b3b06:L6b3b06:{c.instructions+=3;NFSU2_TR(0x6b3b06);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b3b07:{NFSU2_TR(0x6b3b07);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b3b0a:{NFSU2_TR(0x6b3b0a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3aecu);}goto L6b3aec;}}
}
B6b3b0c:L6b3b0c:{c.instructions+=2;NFSU2_TR(0x6b3b0c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3b0e:{NFSU2_TR(0x6b3b0e);
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
B6b3b0f:L6b3b0f:{c.instructions+=5;NFSU2_TR(0x6b3b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3b10:{NFSU2_TR(0x6b3b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b3b11:{NFSU2_TR(0x6b3b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b3b12:{NFSU2_TR(0x6b3b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b3b13:{NFSU2_TR(0x6b3b13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b3b16:L6b3b16:{c.instructions+=12;NFSU2_TR(0x6b3b16);
__builtin_memmove((R+28),(R+28),4);
}
B6b3b18:{NFSU2_TR(0x6b3b18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b19:{NFSU2_TR(0x6b3b19);
__builtin_memmove((R+20),(R+16),4);
}
B6b3b1b:{NFSU2_TR(0x6b3b1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b1c:{NFSU2_TR(0x6b3b1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b1d:{NFSU2_TR(0x6b3b1d);
__builtin_memmove((R+24),(R+4),4);
}
B6b3b1f:{NFSU2_TR(0x6b3b1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3b22:{NFSU2_TR(0x6b3b22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b23:{NFSU2_TR(0x6b3b23);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3b25:{NFSU2_TR(0x6b3b25);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3b28:{NFSU2_TR(0x6b3b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3b2b:{NFSU2_TR(0x6b3b2b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3b49;}}
}
B6b3b2d:L6b3b2d:{c.instructions+=5;NFSU2_TR(0x6b3b2d);
u8 U[4];
w4(U+0,u32(0x7bc6fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b32:{NFSU2_TR(0x6b3b32);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b37:{NFSU2_TR(0x6b3b37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b38:{NFSU2_TR(0x6b3b38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b39:{NFSU2_TR(0x6b3b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3b3eull));
TAIL_STATIC(0x69e936u,69e);
}
B6b3b3e:L6b3b3e:{c.instructions+=4;NFSU2_TR(0x6b3b3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3b40:{NFSU2_TR(0x6b3b40);
w1(R+512,carry<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b3b43:{NFSU2_TR(0x6b3b43);
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
B6b3b44:{NFSU2_TR(0x6b3b44);
{goto L6b3be5;}
}
B6b3b49:L6b3b49:{c.instructions+=3;NFSU2_TR(0x6b3b49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3b4b:{NFSU2_TR(0x6b3b4b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3b4d:{NFSU2_TR(0x6b3b4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3b5e;}}
}
B6b3b4f:L6b3b4f:{c.instructions+=6;NFSU2_TR(0x6b3b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3b52:{NFSU2_TR(0x6b3b52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b3b55:{NFSU2_TR(0x6b3b55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b3b56:{NFSU2_TR(0x6b3b56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3b59:{NFSU2_TR(0x6b3b59);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3b5c:{NFSU2_TR(0x6b3b5c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3b4fu);}goto L6b3b4f;}}
}
B6b3b5e:L6b3b5e:{c.instructions+=4;NFSU2_TR(0x6b3b5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b5f:{NFSU2_TR(0x6b3b5f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3b61:{NFSU2_TR(0x6b3b61);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B6b3b64:{NFSU2_TR(0x6b3b64);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3be1;}}
}
B6b3b66:L6b3b66:{c.instructions+=5;NFSU2_TR(0x6b3b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3b69:{NFSU2_TR(0x6b3b69);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3b6c:{NFSU2_TR(0x6b3b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3b72:{NFSU2_TR(0x6b3b72);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3b75:{NFSU2_TR(0x6b3b75);
if(r1(R+518)){{goto L6b3bbe;}}
}
B6b3b77:L6b3b77:{c.instructions+=2;NFSU2_TR(0x6b3b77);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3b7b:{NFSU2_TR(0x6b3b7b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3bbe;}}
}
B6b3b7d:L6b3b7d:{c.instructions+=7;NFSU2_TR(0x6b3b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3b83:{NFSU2_TR(0x6b3b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3b86:{NFSU2_TR(0x6b3b86);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b3b89:{NFSU2_TR(0x6b3b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b3b8c:{NFSU2_TR(0x6b3b8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b3b8f:{NFSU2_TR(0x6b3b8f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b3b93:{NFSU2_TR(0x6b3b93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3bb2;}}
}
B6b3b95:L6b3b95:{c.instructions+=5;NFSU2_TR(0x6b3b95);
u8 U[4];
w4(U+0,u32(0x7bc6b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b9a:{NFSU2_TR(0x6b3b9a);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3b9f:{NFSU2_TR(0x6b3b9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3ba2:{NFSU2_TR(0x6b3ba2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ba3:{NFSU2_TR(0x6b3ba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3ba8ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b3ba8:L6b3ba8:{c.instructions+=2;NFSU2_TR(0x6b3ba8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6b3bab:{NFSU2_TR(0x6b3bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3bb2:L6b3bb2:{c.instructions+=4;NFSU2_TR(0x6b3bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3bb8:{NFSU2_TR(0x6b3bb8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b3bb9:{NFSU2_TR(0x6b3bb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b3bbc:{NFSU2_TR(0x6b3bbc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3b7du);}goto L6b3b7d;}}
}
B6b3bbe:L6b3bbe:{c.instructions+=5;NFSU2_TR(0x6b3bbe);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3bc0:{NFSU2_TR(0x6b3bc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3bc1:{NFSU2_TR(0x6b3bc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3bc7:{NFSU2_TR(0x6b3bc7);
__builtin_memmove((R+4),(R+24),4);
}
B6b3bc9:{NFSU2_TR(0x6b3bc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3bceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3a9fu);}goto L6b3a9f;}
}
B6b3bce:L6b3bce:{c.instructions+=2;NFSU2_TR(0x6b3bce);
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
B6b3bd0:{NFSU2_TR(0x6b3bd0);
if(r1(R+518)){{goto L6b3bda;}}
}
B6b3bd2:L6b3bd2:{c.instructions+=3;NFSU2_TR(0x6b3bd2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b3bd3:{NFSU2_TR(0x6b3bd3);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6b3bd6:{NFSU2_TR(0x6b3bd6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3b66u);}goto L6b3b66;}}
}
B6b3bd8:L6b3bd8:{c.instructions+=1;NFSU2_TR(0x6b3bd8);
{goto L6b3be1;}
}
B6b3bda:L6b3bda:{c.instructions+=1;NFSU2_TR(0x6b3bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3be1:L6b3be1:{c.instructions+=2;NFSU2_TR(0x6b3be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3be4:{NFSU2_TR(0x6b3be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b3be5:L6b3be5:{c.instructions+=4;NFSU2_TR(0x6b3be5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3be6:{NFSU2_TR(0x6b3be6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b3be7:{NFSU2_TR(0x6b3be7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b3be8:{NFSU2_TR(0x6b3be8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b3be9:L6b3be9:{c.instructions+=12;NFSU2_TR(0x6b3be9);
__builtin_memmove((R+28),(R+28),4);
}
B6b3beb:{NFSU2_TR(0x6b3beb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3bec:{NFSU2_TR(0x6b3bec);
__builtin_memmove((R+20),(R+16),4);
}
B6b3bee:{NFSU2_TR(0x6b3bee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3bef:{NFSU2_TR(0x6b3bef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3bf0:{NFSU2_TR(0x6b3bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3bf1:{NFSU2_TR(0x6b3bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3bf2:{NFSU2_TR(0x6b3bf2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3bf4:{NFSU2_TR(0x6b3bf4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3bf7:{NFSU2_TR(0x6b3bf7);
__builtin_memmove((R+24),(R+4),4);
}
B6b3bf9:{NFSU2_TR(0x6b3bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3bfc:{NFSU2_TR(0x6b3bfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3ca8;}}
}
B6b3c02:L6b3c02:{c.instructions+=4;NFSU2_TR(0x6b3c02);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3c04:{NFSU2_TR(0x6b3c04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3c07:{NFSU2_TR(0x6b3c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3c0a:{NFSU2_TR(0x6b3c0a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b3c19;}}
}
B6b3c0c:L6b3c0c:{c.instructions+=2;NFSU2_TR(0x6b3c0c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3c0e:{NFSU2_TR(0x6b3c0e);
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
B6b3c0f:L6b3c0f:{c.instructions+=5;NFSU2_TR(0x6b3c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3c10:{NFSU2_TR(0x6b3c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b3c11:{NFSU2_TR(0x6b3c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b3c12:{NFSU2_TR(0x6b3c12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b3c13:{NFSU2_TR(0x6b3c13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b3c16:L6b3c16:{c.instructions+=1;NFSU2_TR(0x6b3c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3c19:L6b3c19:{c.instructions+=7;NFSU2_TR(0x6b3c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3c1c:{NFSU2_TR(0x6b3c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6b3c1f:{NFSU2_TR(0x6b3c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b3c21:{NFSU2_TR(0x6b3c21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3c23:{NFSU2_TR(0x6b3c23);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b3c28:{NFSU2_TR(0x6b3c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3c2d:{NFSU2_TR(0x6b3c2d);
if(r1(R+518)){{goto L6b3c93;}}
}
B6b3c2f:L6b3c2f:{c.instructions+=2;NFSU2_TR(0x6b3c2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3c34:{NFSU2_TR(0x6b3c34);
if(r1(R+518)){{goto L6b3c93;}}
}
B6b3c36:L6b3c36:{c.instructions+=9;NFSU2_TR(0x6b3c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3c39:{NFSU2_TR(0x6b3c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3c3b:{NFSU2_TR(0x6b3c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3c3e:{NFSU2_TR(0x6b3c3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3c41:{NFSU2_TR(0x6b3c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b3c44:{NFSU2_TR(0x6b3c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3c47:{NFSU2_TR(0x6b3c47);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b3c4a:{NFSU2_TR(0x6b3c4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x840ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6b3c50:{NFSU2_TR(0x6b3c50);
if(r1(R+518)){{goto L6b3c93;}}
}
B6b3c52:L6b3c52:{c.instructions+=3;NFSU2_TR(0x6b3c52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3c55:{NFSU2_TR(0x6b3c55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b3c58:{NFSU2_TR(0x6b3c58);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b3db8;}}
}
B6b3c5e:L6b3c5e:{c.instructions+=5;NFSU2_TR(0x6b3c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3c61:{NFSU2_TR(0x6b3c61);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b3c64:{NFSU2_TR(0x6b3c64);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6b3c66:{NFSU2_TR(0x6b3c66);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b3c69:{NFSU2_TR(0x6b3c69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3db8;}}
}
B6b3c6f:L6b3c6f:{c.instructions+=5;NFSU2_TR(0x6b3c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b3c72:{NFSU2_TR(0x6b3c72);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6b3c74:{NFSU2_TR(0x6b3c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b3c76:{NFSU2_TR(0x6b3c76);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3c79:{NFSU2_TR(0x6b3c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3c7f;}}
}
B6b3c7b:L6b3c7b:{c.instructions+=2;NFSU2_TR(0x6b3c7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b3c7d:{NFSU2_TR(0x6b3c7d);
{goto L6b3c87;}
}
B6b3c7f:L6b3c7f:{c.instructions+=2;NFSU2_TR(0x6b3c7f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3c81:{NFSU2_TR(0x6b3c81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3db8;}}
}
B6b3c87:L6b3c87:{c.instructions+=5;NFSU2_TR(0x6b3c87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6b3c89:{NFSU2_TR(0x6b3c89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b3c8c:{NFSU2_TR(0x6b3c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3c8f:{NFSU2_TR(0x6b3c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3c91:{NFSU2_TR(0x6b3c91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b3c93:L6b3c93:{c.instructions+=5;NFSU2_TR(0x6b3c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3c96:{NFSU2_TR(0x6b3c96);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b3c97:{NFSU2_TR(0x6b3c97);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3c9a:{NFSU2_TR(0x6b3c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3c9d:{NFSU2_TR(0x6b3c9d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c16u);}goto L6b3c16;}}
}
B6b3ca3:L6b3ca3:{c.instructions+=1;NFSU2_TR(0x6b3ca3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0cu);}goto L6b3c0c;}
}
B6b3ca8:L6b3ca8:{c.instructions+=2;NFSU2_TR(0x6b3ca8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3cac:{NFSU2_TR(0x6b3cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3d44;}}
}
B6b3cb2:L6b3cb2:{c.instructions+=4;NFSU2_TR(0x6b3cb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3cb4:{NFSU2_TR(0x6b3cb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3cb7:{NFSU2_TR(0x6b3cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3cba:{NFSU2_TR(0x6b3cba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0cu);}goto L6b3c0c;}}
}
B6b3cc0:L6b3cc0:{c.instructions+=1;NFSU2_TR(0x6b3cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3cc3:L6b3cc3:{c.instructions+=5;NFSU2_TR(0x6b3cc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3cc6:{NFSU2_TR(0x6b3cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b3cc9:{NFSU2_TR(0x6b3cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3ccb:{NFSU2_TR(0x6b3ccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3ccd:{NFSU2_TR(0x6b3ccd);
if(r1(R+518)){{goto L6b3d33;}}
}
B6b3ccf:L6b3ccf:{c.instructions+=4;NFSU2_TR(0x6b3ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3cd1:{NFSU2_TR(0x6b3cd1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b3cd7:{NFSU2_TR(0x6b3cd7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3cdd:{NFSU2_TR(0x6b3cdd);
if(r1(R+518)){{goto L6b3d33;}}
}
B6b3cdf:L6b3cdf:{c.instructions+=2;NFSU2_TR(0x6b3cdf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3ce5:{NFSU2_TR(0x6b3ce5);
if(r1(R+518)){{goto L6b3d33;}}
}
B6b3ce7:L6b3ce7:{c.instructions+=5;NFSU2_TR(0x6b3ce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b3cea:{NFSU2_TR(0x6b3cea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b3cec:{NFSU2_TR(0x6b3cec);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B6b3cee:{NFSU2_TR(0x6b3cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3cf1:{NFSU2_TR(0x6b3cf1);
{goto L6b3cf6;}
}
B6b3cf3:L6b3cf3:{c.instructions+=1;NFSU2_TR(0x6b3cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b3cf6:L6b3cf6:{c.instructions+=2;NFSU2_TR(0x6b3cf6);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b3cfa:{NFSU2_TR(0x6b3cfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3d0a;}}
}
B6b3cfc:L6b3cfc:{c.instructions+=4;NFSU2_TR(0x6b3cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b3cfe:{NFSU2_TR(0x6b3cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b3d01:{NFSU2_TR(0x6b3d01);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b3d03:{NFSU2_TR(0x6b3d03);
if(r1(R+518)){{goto L6b3d13;}}
}
B6b3d05:L6b3d05:{c.instructions+=2;NFSU2_TR(0x6b3d05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3d08:{NFSU2_TR(0x6b3d08);
if(r1(R+518)){{goto L6b3d13;}}
}
B6b3d0a:L6b3d0a:{c.instructions+=4;NFSU2_TR(0x6b3d0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b3d0b:{NFSU2_TR(0x6b3d0b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6b3d0e:{NFSU2_TR(0x6b3d0e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b3d11:{NFSU2_TR(0x6b3d11);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3cf3u);}goto L6b3cf3;}}
}
B6b3d13:L6b3d13:{c.instructions+=2;NFSU2_TR(0x6b3d13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3d16:{NFSU2_TR(0x6b3d16);
if(r1(R+518)){{goto L6b3db8;}}
}
B6b3d1c:L6b3d1c:{c.instructions+=8;NFSU2_TR(0x6b3d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3d1f:{NFSU2_TR(0x6b3d1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b3d21:{NFSU2_TR(0x6b3d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3d24:{NFSU2_TR(0x6b3d24);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b3d27:{NFSU2_TR(0x6b3d27);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3d2a:{NFSU2_TR(0x6b3d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b3d2d:{NFSU2_TR(0x6b3d2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3d30:{NFSU2_TR(0x6b3d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6b3d33:L6b3d33:{c.instructions+=5;NFSU2_TR(0x6b3d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3d36:{NFSU2_TR(0x6b3d36);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b3d37:{NFSU2_TR(0x6b3d37);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3d3a:{NFSU2_TR(0x6b3d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3d3d:{NFSU2_TR(0x6b3d3d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3cc3u);}goto L6b3cc3;}}
}
B6b3d3f:L6b3d3f:{c.instructions+=1;NFSU2_TR(0x6b3d3f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0cu);}goto L6b3c0c;}
}
B6b3d44:L6b3d44:{c.instructions+=2;NFSU2_TR(0x6b3d44);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3d48:{NFSU2_TR(0x6b3d48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0cu);}goto L6b3c0c;}}
}
B6b3d4e:L6b3d4e:{c.instructions+=4;NFSU2_TR(0x6b3d4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3d50:{NFSU2_TR(0x6b3d50);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3d53:{NFSU2_TR(0x6b3d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3d56:{NFSU2_TR(0x6b3d56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0cu);}goto L6b3c0c;}}
}
B6b3d5c:L6b3d5c:{c.instructions+=1;NFSU2_TR(0x6b3d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b3d5f:L6b3d5f:{c.instructions+=5;NFSU2_TR(0x6b3d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3d62:{NFSU2_TR(0x6b3d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6b3d65:{NFSU2_TR(0x6b3d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3d67:{NFSU2_TR(0x6b3d67);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3d69:{NFSU2_TR(0x6b3d69);
if(r1(R+518)){{goto L6b3da7;}}
}
B6b3d6b:L6b3d6b:{c.instructions+=4;NFSU2_TR(0x6b3d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3d6d:{NFSU2_TR(0x6b3d6d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b3d72:{NFSU2_TR(0x6b3d72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3d77:{NFSU2_TR(0x6b3d77);
if(r1(R+518)){{goto L6b3d80;}}
}
B6b3d79:L6b3d79:{c.instructions+=2;NFSU2_TR(0x6b3d79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3d7e:{NFSU2_TR(0x6b3d7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3da7;}}
}
B6b3d80:L6b3d80:{c.instructions+=1;NFSU2_TR(0x6b3d80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3d82:L6b3d82:{c.instructions+=2;NFSU2_TR(0x6b3d82);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b3d85:{NFSU2_TR(0x6b3d85);
if(r1(R+518)){{goto L6b3d8d;}}
}
B6b3d87:L6b3d87:{c.instructions+=3;NFSU2_TR(0x6b3d87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b3d88:{NFSU2_TR(0x6b3d88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B6b3d8b:{NFSU2_TR(0x6b3d8b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3d82u);}goto L6b3d82;}}
}
B6b3d8d:L6b3d8d:{c.instructions+=2;NFSU2_TR(0x6b3d8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3d90:{NFSU2_TR(0x6b3d90);
if(r1(R+518)){{goto L6b3db8;}}
}
B6b3d92:L6b3d92:{c.instructions+=8;NFSU2_TR(0x6b3d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b3d95:{NFSU2_TR(0x6b3d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b3d97:{NFSU2_TR(0x6b3d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b3d9a:{NFSU2_TR(0x6b3d9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b3d9d:{NFSU2_TR(0x6b3d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3da0:{NFSU2_TR(0x6b3da0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3da2:{NFSU2_TR(0x6b3da2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6b3da5:{NFSU2_TR(0x6b3da5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b3da7:L6b3da7:{c.instructions+=5;NFSU2_TR(0x6b3da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3daa:{NFSU2_TR(0x6b3daa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b3dab:{NFSU2_TR(0x6b3dab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3dae:{NFSU2_TR(0x6b3dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3db1:{NFSU2_TR(0x6b3db1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3d5fu);}goto L6b3d5f;}}
}
B6b3db3:L6b3db3:{c.instructions+=1;NFSU2_TR(0x6b3db3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0cu);}goto L6b3c0c;}
}
B6b3db8:L6b3db8:{c.instructions+=2;NFSU2_TR(0x6b3db8);
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
B6b3dba:{NFSU2_TR(0x6b3dba);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3c0fu);}goto L6b3c0f;}
}
B6b3dbf:L6b3dbf:{c.instructions+=11;NFSU2_TR(0x6b3dbf);
__builtin_memmove((R+28),(R+28),4);
}
B6b3dc1:{NFSU2_TR(0x6b3dc1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3dc2:{NFSU2_TR(0x6b3dc2);
__builtin_memmove((R+20),(R+16),4);
}
B6b3dc4:{NFSU2_TR(0x6b3dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B6b3dc7:{NFSU2_TR(0x6b3dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3dca:{NFSU2_TR(0x6b3dca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3dcb:{NFSU2_TR(0x6b3dcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3dcc:{NFSU2_TR(0x6b3dcc);
__builtin_memmove((R+24),(R+4),4);
}
B6b3dce:{NFSU2_TR(0x6b3dce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3dd0:{NFSU2_TR(0x6b3dd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3dd1:{NFSU2_TR(0x6b3dd1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b3dd3:L6b3dd3:{c.instructions+=2;NFSU2_TR(0x6b3dd3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3dd5:{NFSU2_TR(0x6b3dd5);
if(r1(R+518)){{goto L6b3de2;}}
}
B6b3dd7:L6b3dd7:{c.instructions+=5;NFSU2_TR(0x6b3dd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6b3dda:{NFSU2_TR(0x6b3dda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b3ddb:{NFSU2_TR(0x6b3ddb);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B6b3ddd:{NFSU2_TR(0x6b3ddd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x7ull))));
}
B6b3de0:{NFSU2_TR(0x6b3de0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3dd3u);}goto L6b3dd3;}}
}
B6b3de2:L6b3de2:{c.instructions+=2;NFSU2_TR(0x6b3de2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3de5:{NFSU2_TR(0x6b3de5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3deb:L6b3deb:{c.instructions+=5;NFSU2_TR(0x6b3deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3df1:{NFSU2_TR(0x6b3df1);
__builtin_memmove((R+8),(R+0),4);
}
B6b3df3:{NFSU2_TR(0x6b3df3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6b3df5:{NFSU2_TR(0x6b3df5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3df8:{NFSU2_TR(0x6b3df8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3dfe:L6b3dfe:{c.instructions+=5;NFSU2_TR(0x6b3dfe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3e00:{NFSU2_TR(0x6b3e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e03:{NFSU2_TR(0x6b3e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e06:{NFSU2_TR(0x6b3e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e09:{NFSU2_TR(0x6b3e09);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b3eae;}}
}
B6b3e0f:L6b3e0f:{c.instructions+=2;NFSU2_TR(0x6b3e0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x450ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3e15:{NFSU2_TR(0x6b3e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e18:L6b3e18:{c.instructions+=14;NFSU2_TR(0x6b3e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3e1b:{NFSU2_TR(0x6b3e1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3e1d:{NFSU2_TR(0x6b3e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3e20:{NFSU2_TR(0x6b3e20);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3e23:{NFSU2_TR(0x6b3e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3e26:{NFSU2_TR(0x6b3e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b3e28:{NFSU2_TR(0x6b3e28);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3e2a:{NFSU2_TR(0x6b3e2a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b3e2b:{NFSU2_TR(0x6b3e2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6b3e2d:{NFSU2_TR(0x6b3e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3e30:{NFSU2_TR(0x6b3e30);
__builtin_memmove((R+28),(R+8),4);
}
B6b3e32:{NFSU2_TR(0x6b3e32);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6b3e38:{NFSU2_TR(0x6b3e38);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3e3a:{NFSU2_TR(0x6b3e3a);
if(r1(R+518)){{goto L6b3e52;}}
}
B6b3e3c:L6b3e3c:{c.instructions+=2;NFSU2_TR(0x6b3e3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3e40:{NFSU2_TR(0x6b3e40);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3e46:L6b3e46:{c.instructions+=4;NFSU2_TR(0x6b3e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3e49:{NFSU2_TR(0x6b3e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e4c:{NFSU2_TR(0x6b3e4c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b3e50:{NFSU2_TR(0x6b3e50);
{goto L6b3e96;}
}
B6b3e52:L6b3e52:{c.instructions+=2;NFSU2_TR(0x6b3e52);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3e58:{NFSU2_TR(0x6b3e58);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3e5e:L6b3e5e:{c.instructions+=2;NFSU2_TR(0x6b3e5e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3e64:{NFSU2_TR(0x6b3e64);
if(r1(R+518)){{goto L6b3e8c;}}
}
B6b3e66:L6b3e66:{c.instructions+=7;NFSU2_TR(0x6b3e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3e69:{NFSU2_TR(0x6b3e69);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6b3e6f:{NFSU2_TR(0x6b3e6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b3e72:{NFSU2_TR(0x6b3e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b3e75:{NFSU2_TR(0x6b3e75);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b3e78:{NFSU2_TR(0x6b3e78);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b3e7c:{NFSU2_TR(0x6b3e7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3e82:L6b3e82:{c.instructions+=2;NFSU2_TR(0x6b3e82);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3e86:{NFSU2_TR(0x6b3e86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3e8c:L6b3e8c:{c.instructions+=3;NFSU2_TR(0x6b3e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b3e8f:{NFSU2_TR(0x6b3e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e92:{NFSU2_TR(0x6b3e92);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b3e96:L6b3e96:{c.instructions+=5;NFSU2_TR(0x6b3e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3e99:{NFSU2_TR(0x6b3e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3e9c:{NFSU2_TR(0x6b3e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b3ea0:{NFSU2_TR(0x6b3ea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b3ea6:{NFSU2_TR(0x6b3ea6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3e18u);}goto L6b3e18;}}
}
B6b3eac:L6b3eac:{c.instructions+=1;NFSU2_TR(0x6b3eac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b3eae:L6b3eae:{c.instructions+=6;NFSU2_TR(0x6b3eae);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3eb0:{NFSU2_TR(0x6b3eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b3eb1:{NFSU2_TR(0x6b3eb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3eb2:{NFSU2_TR(0x6b3eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3eb5:{NFSU2_TR(0x6b3eb5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b3eb8:{NFSU2_TR(0x6b3eb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3ebb:L6b3ebb:{c.instructions+=1;NFSU2_TR(0x6b3ebb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b3ebd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3ebbu);}goto L6b3ebb;}
}
B6b3ebd:L6b3ebd:{c.instructions+=7;NFSU2_TR(0x6b3ebd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3ec0:{NFSU2_TR(0x6b3ec0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ec1:{NFSU2_TR(0x6b3ec1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3ec4:{NFSU2_TR(0x6b3ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ec5:{NFSU2_TR(0x6b3ec5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3ecb:{NFSU2_TR(0x6b3ecb);
__builtin_memmove((R+4),(R+24),4);
}
B6b3ecd:{NFSU2_TR(0x6b3ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3ed2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3be9u);}goto L6b3be9;}
}
B6b3ed2:L6b3ed2:{c.instructions+=2;NFSU2_TR(0x6b3ed2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3ed4:{NFSU2_TR(0x6b3ed4);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3eda:L6b3eda:{c.instructions+=9;NFSU2_TR(0x6b3eda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3edb:{NFSU2_TR(0x6b3edb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3ede:{NFSU2_TR(0x6b3ede);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3ee1:{NFSU2_TR(0x6b3ee1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ee2:{NFSU2_TR(0x6b3ee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3ee5:{NFSU2_TR(0x6b3ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3ee6:{NFSU2_TR(0x6b3ee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3eec:{NFSU2_TR(0x6b3eec);
__builtin_memmove((R+4),(R+24),4);
}
B6b3eee:{NFSU2_TR(0x6b3eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3ef3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3be9u);}goto L6b3be9;}
}
B6b3ef3:L6b3ef3:{c.instructions+=2;NFSU2_TR(0x6b3ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3ef5:{NFSU2_TR(0x6b3ef5);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3efb:L6b3efb:{c.instructions+=9;NFSU2_TR(0x6b3efb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3efd:{NFSU2_TR(0x6b3efd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f00:{NFSU2_TR(0x6b3f00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f03:{NFSU2_TR(0x6b3f03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f04:{NFSU2_TR(0x6b3f04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f07:{NFSU2_TR(0x6b3f07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f08:{NFSU2_TR(0x6b3f08);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f0e:{NFSU2_TR(0x6b3f0e);
__builtin_memmove((R+4),(R+24),4);
}
B6b3f10:{NFSU2_TR(0x6b3f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3f15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3be9u);}goto L6b3be9;}
}
B6b3f15:L6b3f15:{c.instructions+=2;NFSU2_TR(0x6b3f15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3f17:{NFSU2_TR(0x6b3f17);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3f1d:L6b3f1d:{c.instructions+=9;NFSU2_TR(0x6b3f1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f1f:{NFSU2_TR(0x6b3f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f22:{NFSU2_TR(0x6b3f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f25:{NFSU2_TR(0x6b3f25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f26:{NFSU2_TR(0x6b3f26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f29:{NFSU2_TR(0x6b3f29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f2a:{NFSU2_TR(0x6b3f2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f30:{NFSU2_TR(0x6b3f30);
__builtin_memmove((R+4),(R+24),4);
}
B6b3f32:{NFSU2_TR(0x6b3f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3f37ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3be9u);}goto L6b3be9;}
}
B6b3f37:L6b3f37:{c.instructions+=2;NFSU2_TR(0x6b3f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3f39:{NFSU2_TR(0x6b3f39);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3f3f:L6b3f3f:{c.instructions+=9;NFSU2_TR(0x6b3f3f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f41:{NFSU2_TR(0x6b3f41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f44:{NFSU2_TR(0x6b3f44);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f47:{NFSU2_TR(0x6b3f47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f48:{NFSU2_TR(0x6b3f48);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f4b:{NFSU2_TR(0x6b3f4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f4c:{NFSU2_TR(0x6b3f4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f52:{NFSU2_TR(0x6b3f52);
__builtin_memmove((R+4),(R+24),4);
}
B6b3f54:{NFSU2_TR(0x6b3f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3f59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3be9u);}goto L6b3be9;}
}
B6b3f59:L6b3f59:{c.instructions+=2;NFSU2_TR(0x6b3f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3f5b:{NFSU2_TR(0x6b3f5b);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3f61:L6b3f61:{c.instructions+=9;NFSU2_TR(0x6b3f61);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f63:{NFSU2_TR(0x6b3f63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f66:{NFSU2_TR(0x6b3f66);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f69:{NFSU2_TR(0x6b3f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f6a:{NFSU2_TR(0x6b3f6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b3f6d:{NFSU2_TR(0x6b3f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f6e:{NFSU2_TR(0x6b3f6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3f74:{NFSU2_TR(0x6b3f74);
__builtin_memmove((R+4),(R+24),4);
}
B6b3f76:{NFSU2_TR(0x6b3f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3f7bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3be9u);}goto L6b3be9;}
}
B6b3f7b:L6b3f7b:{c.instructions+=2;NFSU2_TR(0x6b3f7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3f7d:{NFSU2_TR(0x6b3f7d);
if(r1(R+518)){TAIL_STATIC(0x6b4195u,6b4);}
}
B6b3f83:L6b3f83:{c.instructions+=2;NFSU2_TR(0x6b3f83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b3f86:{NFSU2_TR(0x6b3f86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b4181u,6b4);}
}
B6b3f8c:L6b3f8c:{c.instructions+=4;NFSU2_TR(0x6b3f8c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f8e:{NFSU2_TR(0x6b3f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b3f8f:{NFSU2_TR(0x6b3f8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b3f91:{NFSU2_TR(0x6b3f91);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3f94:L6b3f94:{c.instructions+=1;NFSU2_TR(0x6b3f94);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b3f96;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3f94u);}goto L6b3f94;}
}
B6b3f96:L6b3f96:{c.instructions+=3;NFSU2_TR(0x6b3f96);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3f98:{NFSU2_TR(0x6b3f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b3f99:{NFSU2_TR(0x6b3f99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b3f9c:L6b3f9c:{c.instructions+=1;NFSU2_TR(0x6b3f9c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6b3f9e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b3f9cu);}goto L6b3f9c;}
}
B6b3f9e:L6b3f9e:{c.instructions+=6;NFSU2_TR(0x6b3f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3fa1:{NFSU2_TR(0x6b3fa1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b3fa3:{NFSU2_TR(0x6b3fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3fa9:{NFSU2_TR(0x6b3fa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b3fac:{NFSU2_TR(0x6b3fac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3fae:{NFSU2_TR(0x6b3fae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b3fbf;}}
}
B6b3fb0:L6b3fb0:{c.instructions+=3;NFSU2_TR(0x6b3fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3fb6:{NFSU2_TR(0x6b3fb6);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6b3fb9:{NFSU2_TR(0x6b3fb9);
if(r1(R+518)){TAIL_STATIC(0x6b414cu,6b4);}
}
B6b3fbf:L6b3fbf:{c.instructions+=4;NFSU2_TR(0x6b3fbf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b3fc1:{NFSU2_TR(0x6b3fc1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3fc3:{NFSU2_TR(0x6b3fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3fc6:{NFSU2_TR(0x6b3fc6);
if(r1(R+518)){{goto L6b3fd0;}}
}
B6b3fc8:L6b3fc8:{c.instructions+=2;NFSU2_TR(0x6b3fc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b3fca:{NFSU2_TR(0x6b3fca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6b3fd0:L6b3fd0:{c.instructions+=4;NFSU2_TR(0x6b3fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b3fd6:{NFSU2_TR(0x6b3fd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b3fd9:{NFSU2_TR(0x6b3fd9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3fdb:{NFSU2_TR(0x6b3fdb);
if(r1(R+518)){{goto L6b3fe7;}}
}
B6b3fdd:L6b3fdd:{c.instructions+=3;NFSU2_TR(0x6b3fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b3fdf:{NFSU2_TR(0x6b3fdf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b3fe4:{NFSU2_TR(0x6b3fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3fe7:L6b3fe7:{c.instructions+=2;NFSU2_TR(0x6b3fe7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b3fe8:{NFSU2_TR(0x6b3fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3fedull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3fed:L6b3fed:{c.instructions+=3;NFSU2_TR(0x6b3fed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b3fef:{NFSU2_TR(0x6b3fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b3ff2:{NFSU2_TR(0x6b3ff2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b4004u,6b4);}
}
B6b3ff4:L6b3ff4:{c.instructions+=2;NFSU2_TR(0x6b3ff4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b3ff7:{NFSU2_TR(0x6b3ff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b3ffcull));
TAIL_STATIC(0x6af0ecu,6af);
}
B6b3ffc:L6b3ffc:{c.instructions+=2;NFSU2_TR(0x6b3ffc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b3ffe:{NFSU2_TR(0x6b3ffe);
if(r1(R+518)){TAIL_STATIC(0x6b414cu,6b4);}
TAIL_STATIC(0x6b4004u,6b4);
}
XIT:NFSU2_TR_EXIT(0x6b3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
