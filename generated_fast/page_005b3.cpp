#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_595(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5af(u8* __restrict R,Cpu& c);
u32 body_5b1(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 page_5b3(Cpu& c){return body_5b3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b3001:goto L5b3001;
case 0x5b3003:goto L5b3003;
case 0x5b3007:c.instructions+=4;goto B5b3007;
case 0x5b300b:c.instructions+=3;goto B5b300b;
case 0x5b300c:c.instructions+=2;goto B5b300c;
case 0x5b300d:c.instructions+=1;goto B5b300d;
case 0x5b3012:goto L5b3012;
case 0x5b3015:c.instructions+=1;goto B5b3015;
case 0x5b3019:goto L5b3019;
case 0x5b301d:c.instructions+=4;goto B5b301d;
case 0x5b3021:c.instructions+=3;goto B5b3021;
case 0x5b3023:c.instructions+=2;goto B5b3023;
case 0x5b3026:c.instructions+=1;goto B5b3026;
case 0x5b3028:goto L5b3028;
case 0x5b302c:c.instructions+=5;goto B5b302c;
case 0x5b302d:c.instructions+=4;goto B5b302d;
case 0x5b302e:c.instructions+=3;goto B5b302e;
case 0x5b302f:c.instructions+=2;goto B5b302f;
case 0x5b3031:c.instructions+=1;goto B5b3031;
case 0x5b3036:goto L5b3036;
case 0x5b303a:c.instructions+=1;goto B5b303a;
case 0x5b303e:goto L5b303e;
case 0x5b303f:c.instructions+=9;goto B5b303f;
case 0x5b3043:c.instructions+=8;goto B5b3043;
case 0x5b3047:c.instructions+=7;goto B5b3047;
case 0x5b304b:c.instructions+=6;goto B5b304b;
case 0x5b304c:c.instructions+=5;goto B5b304c;
case 0x5b3050:c.instructions+=4;goto B5b3050;
case 0x5b3051:c.instructions+=3;goto B5b3051;
case 0x5b3052:c.instructions+=2;goto B5b3052;
case 0x5b3055:c.instructions+=1;goto B5b3055;
case 0x5b3060:goto L5b3060;
case 0x5b3063:c.instructions+=8;goto B5b3063;
case 0x5b3064:c.instructions+=7;goto B5b3064;
case 0x5b3065:c.instructions+=6;goto B5b3065;
case 0x5b3066:c.instructions+=5;goto B5b3066;
case 0x5b3068:c.instructions+=4;goto B5b3068;
case 0x5b306b:c.instructions+=3;goto B5b306b;
case 0x5b306c:c.instructions+=2;goto B5b306c;
case 0x5b3071:c.instructions+=1;goto B5b3071;
case 0x5b3075:goto L5b3075;
case 0x5b3077:c.instructions+=4;goto B5b3077;
case 0x5b3078:c.instructions+=3;goto B5b3078;
case 0x5b3079:c.instructions+=2;goto B5b3079;
case 0x5b307b:c.instructions+=1;goto B5b307b;
case 0x5b3080:goto L5b3080;
case 0x5b3082:c.instructions+=5;goto B5b3082;
case 0x5b3084:c.instructions+=4;goto B5b3084;
case 0x5b3085:c.instructions+=3;goto B5b3085;
case 0x5b3088:c.instructions+=2;goto B5b3088;
case 0x5b308b:c.instructions+=1;goto B5b308b;
case 0x5b308d:goto L5b308d;
case 0x5b3091:c.instructions+=7;goto B5b3091;
case 0x5b3095:c.instructions+=6;goto B5b3095;
case 0x5b3099:c.instructions+=5;goto B5b3099;
case 0x5b309a:c.instructions+=4;goto B5b309a;
case 0x5b309b:c.instructions+=3;goto B5b309b;
case 0x5b309c:c.instructions+=2;goto B5b309c;
case 0x5b309e:c.instructions+=1;goto B5b309e;
case 0x5b30a3:goto L5b30a3;
case 0x5b30a5:c.instructions+=5;goto B5b30a5;
case 0x5b30a8:c.instructions+=4;goto B5b30a8;
case 0x5b30ae:c.instructions+=3;goto B5b30ae;
case 0x5b30b1:c.instructions+=2;goto B5b30b1;
case 0x5b30b4:c.instructions+=1;goto B5b30b4;
case 0x5b30b6:goto L5b30b6;
case 0x5b30bb:c.instructions+=3;goto B5b30bb;
case 0x5b30bf:c.instructions+=2;goto B5b30bf;
case 0x5b30c1:c.instructions+=1;goto B5b30c1;
case 0x5b30c3:goto L5b30c3;
case 0x5b30c5:goto L5b30c5;
case 0x5b30ca:c.instructions+=2;goto B5b30ca;
case 0x5b30ce:c.instructions+=1;goto B5b30ce;
case 0x5b30d0:goto L5b30d0;
case 0x5b30d3:c.instructions+=5;goto B5b30d3;
case 0x5b30d5:c.instructions+=4;goto B5b30d5;
case 0x5b30d6:c.instructions+=3;goto B5b30d6;
case 0x5b30d7:c.instructions+=2;goto B5b30d7;
case 0x5b30d9:c.instructions+=1;goto B5b30d9;
case 0x5b30de:goto L5b30de;
case 0x5b30e0:c.instructions+=5;goto B5b30e0;
case 0x5b30e1:c.instructions+=4;goto B5b30e1;
case 0x5b30e4:c.instructions+=3;goto B5b30e4;
case 0x5b30e7:c.instructions+=2;goto B5b30e7;
case 0x5b30e9:c.instructions+=1;goto B5b30e9;
case 0x5b30eb:goto L5b30eb;
case 0x5b30ec:c.instructions+=5;goto B5b30ec;
case 0x5b30ed:c.instructions+=4;goto B5b30ed;
case 0x5b30ee:c.instructions+=3;goto B5b30ee;
case 0x5b30ef:c.instructions+=2;goto B5b30ef;
case 0x5b30f2:c.instructions+=1;goto B5b30f2;
case 0x5b3100:goto L5b3100;
case 0x5b3103:c.instructions+=18;goto B5b3103;
case 0x5b3104:c.instructions+=17;goto B5b3104;
case 0x5b3105:c.instructions+=16;goto B5b3105;
case 0x5b3106:c.instructions+=15;goto B5b3106;
case 0x5b310a:c.instructions+=14;goto B5b310a;
case 0x5b310c:c.instructions+=13;goto B5b310c;
case 0x5b310e:c.instructions+=12;goto B5b310e;
case 0x5b3111:c.instructions+=11;goto B5b3111;
case 0x5b3113:c.instructions+=10;goto B5b3113;
case 0x5b3116:c.instructions+=9;goto B5b3116;
case 0x5b3118:c.instructions+=8;goto B5b3118;
case 0x5b311c:c.instructions+=7;goto B5b311c;
case 0x5b311d:c.instructions+=6;goto B5b311d;
case 0x5b3121:c.instructions+=5;goto B5b3121;
case 0x5b3122:c.instructions+=4;goto B5b3122;
case 0x5b3123:c.instructions+=3;goto B5b3123;
case 0x5b3125:c.instructions+=2;goto B5b3125;
case 0x5b3128:c.instructions+=1;goto B5b3128;
case 0x5b312d:goto L5b312d;
case 0x5b312f:c.instructions+=8;goto B5b312f;
case 0x5b3131:c.instructions+=7;goto B5b3131;
case 0x5b3135:c.instructions+=6;goto B5b3135;
case 0x5b3136:c.instructions+=5;goto B5b3136;
case 0x5b313a:c.instructions+=4;goto B5b313a;
case 0x5b313b:c.instructions+=3;goto B5b313b;
case 0x5b313c:c.instructions+=2;goto B5b313c;
case 0x5b313e:c.instructions+=1;goto B5b313e;
case 0x5b3143:goto L5b3143;
case 0x5b3149:c.instructions+=2;goto B5b3149;
case 0x5b314c:c.instructions+=1;goto B5b314c;
case 0x5b314e:goto L5b314e;
case 0x5b3150:c.instructions+=2;goto B5b3150;
case 0x5b3154:c.instructions+=1;goto B5b3154;
case 0x5b3156:goto L5b3156;
case 0x5b3158:goto L5b3158;
case 0x5b315a:c.instructions+=2;goto B5b315a;
case 0x5b3160:c.instructions+=1;goto B5b3160;
case 0x5b3162:goto L5b3162;
case 0x5b3165:c.instructions+=1;goto B5b3165;
case 0x5b3167:goto L5b3167;
case 0x5b3169:c.instructions+=1;goto B5b3169;
case 0x5b316f:goto L5b316f;
case 0x5b3172:c.instructions+=6;goto B5b3172;
case 0x5b3176:c.instructions+=5;goto B5b3176;
case 0x5b317a:c.instructions+=4;goto B5b317a;
case 0x5b317e:c.instructions+=3;goto B5b317e;
case 0x5b3180:c.instructions+=2;goto B5b3180;
case 0x5b3186:c.instructions+=1;goto B5b3186;
case 0x5b3188:goto L5b3188;
case 0x5b318a:c.instructions+=2;goto B5b318a;
case 0x5b318e:c.instructions+=1;goto B5b318e;
case 0x5b3190:goto L5b3190;
case 0x5b3192:goto L5b3192;
case 0x5b3194:c.instructions+=2;goto B5b3194;
case 0x5b319a:c.instructions+=1;goto B5b319a;
case 0x5b319c:goto L5b319c;
case 0x5b319f:c.instructions+=1;goto B5b319f;
case 0x5b31a1:goto L5b31a1;
case 0x5b31a3:c.instructions+=1;goto B5b31a3;
case 0x5b31a9:goto L5b31a9;
case 0x5b31ac:c.instructions+=5;goto B5b31ac;
case 0x5b31ae:c.instructions+=4;goto B5b31ae;
case 0x5b31af:c.instructions+=3;goto B5b31af;
case 0x5b31b0:c.instructions+=2;goto B5b31b0;
case 0x5b31b2:c.instructions+=1;goto B5b31b2;
case 0x5b31b7:goto L5b31b7;
case 0x5b31bb:c.instructions+=11;goto B5b31bb;
case 0x5b31bf:c.instructions+=10;goto B5b31bf;
case 0x5b31c3:c.instructions+=9;goto B5b31c3;
case 0x5b31c5:c.instructions+=8;goto B5b31c5;
case 0x5b31c7:c.instructions+=7;goto B5b31c7;
case 0x5b31ca:c.instructions+=6;goto B5b31ca;
case 0x5b31cc:c.instructions+=5;goto B5b31cc;
case 0x5b31cd:c.instructions+=4;goto B5b31cd;
case 0x5b31ce:c.instructions+=3;goto B5b31ce;
case 0x5b31d0:c.instructions+=2;goto B5b31d0;
case 0x5b31d2:c.instructions+=1;goto B5b31d2;
case 0x5b31d7:goto L5b31d7;
case 0x5b31d9:c.instructions+=7;goto B5b31d9;
case 0x5b31da:c.instructions+=6;goto B5b31da;
case 0x5b31dc:c.instructions+=5;goto B5b31dc;
case 0x5b31dd:c.instructions+=4;goto B5b31dd;
case 0x5b31df:c.instructions+=3;goto B5b31df;
case 0x5b31e0:c.instructions+=2;goto B5b31e0;
case 0x5b31e3:c.instructions+=1;goto B5b31e3;
case 0x5b31f0:goto L5b31f0;
case 0x5b31f1:c.instructions+=4;goto B5b31f1;
case 0x5b31f5:c.instructions+=3;goto B5b31f5;
case 0x5b31f6:c.instructions+=2;goto B5b31f6;
case 0x5b31f8:c.instructions+=1;goto B5b31f8;
case 0x5b31fd:goto L5b31fd;
case 0x5b31ff:c.instructions+=2;goto B5b31ff;
case 0x5b3201:c.instructions+=1;goto B5b3201;
case 0x5b3203:goto L5b3203;
case 0x5b3205:c.instructions+=3;goto B5b3205;
case 0x5b3207:c.instructions+=2;goto B5b3207;
case 0x5b3209:c.instructions+=1;goto B5b3209;
case 0x5b320b:goto L5b320b;
case 0x5b320d:c.instructions+=3;goto B5b320d;
case 0x5b320e:c.instructions+=2;goto B5b320e;
case 0x5b320f:c.instructions+=1;goto B5b320f;
case 0x5b3210:goto L5b3210;
case 0x5b3211:c.instructions+=2;goto B5b3211;
case 0x5b3213:c.instructions+=1;goto B5b3213;
case 0x5b3218:goto L5b3218;
case 0x5b321d:c.instructions+=1;goto B5b321d;
case 0x5b321f:goto L5b321f;
case 0x5b3224:c.instructions+=3;goto B5b3224;
case 0x5b3225:c.instructions+=2;goto B5b3225;
case 0x5b3226:c.instructions+=1;goto B5b3226;
case 0x5b322b:goto L5b322b;
case 0x5b322e:goto L5b322e;
case 0x5b3230:c.instructions+=2;goto B5b3230;
case 0x5b3231:c.instructions+=1;goto B5b3231;
case 0x5b3240:goto L5b3240;
case 0x5b3242:c.instructions+=16;goto B5b3242;
case 0x5b3247:c.instructions+=15;goto B5b3247;
case 0x5b324d:c.instructions+=14;goto B5b324d;
case 0x5b324e:c.instructions+=13;goto B5b324e;
case 0x5b3255:c.instructions+=12;goto B5b3255;
case 0x5b3256:c.instructions+=11;goto B5b3256;
case 0x5b325a:c.instructions+=10;goto B5b325a;
case 0x5b325b:c.instructions+=9;goto B5b325b;
case 0x5b325c:c.instructions+=8;goto B5b325c;
case 0x5b325d:c.instructions+=7;goto B5b325d;
case 0x5b325f:c.instructions+=6;goto B5b325f;
case 0x5b3265:c.instructions+=5;goto B5b3265;
case 0x5b3266:c.instructions+=4;goto B5b3266;
case 0x5b3268:c.instructions+=3;goto B5b3268;
case 0x5b3269:c.instructions+=2;goto B5b3269;
case 0x5b326d:c.instructions+=1;goto B5b326d;
case 0x5b3272:goto L5b3272;
case 0x5b3278:c.instructions+=14;goto B5b3278;
case 0x5b327a:c.instructions+=13;goto B5b327a;
case 0x5b3284:c.instructions+=12;goto B5b3284;
case 0x5b3286:c.instructions+=11;goto B5b3286;
case 0x5b3289:c.instructions+=10;goto B5b3289;
case 0x5b328d:c.instructions+=9;goto B5b328d;
case 0x5b3293:c.instructions+=8;goto B5b3293;
case 0x5b3299:c.instructions+=7;goto B5b3299;
case 0x5b32a3:c.instructions+=6;goto B5b32a3;
case 0x5b32a9:c.instructions+=5;goto B5b32a9;
case 0x5b32af:c.instructions+=4;goto B5b32af;
case 0x5b32b1:c.instructions+=3;goto B5b32b1;
case 0x5b32b6:c.instructions+=2;goto B5b32b6;
case 0x5b32bc:c.instructions+=1;goto B5b32bc;
case 0x5b32c1:goto L5b32c1;
case 0x5b32c5:c.instructions+=6;goto B5b32c5;
case 0x5b32c6:c.instructions+=5;goto B5b32c6;
case 0x5b32c7:c.instructions+=4;goto B5b32c7;
case 0x5b32c8:c.instructions+=3;goto B5b32c8;
case 0x5b32ce:c.instructions+=2;goto B5b32ce;
case 0x5b32d3:c.instructions+=1;goto B5b32d3;
case 0x5b32d8:goto L5b32d8;
case 0x5b32de:c.instructions+=10;goto B5b32de;
case 0x5b32e0:c.instructions+=9;goto B5b32e0;
case 0x5b32e3:c.instructions+=8;goto B5b32e3;
case 0x5b32e9:c.instructions+=7;goto B5b32e9;
case 0x5b32eb:c.instructions+=6;goto B5b32eb;
case 0x5b32ee:c.instructions+=5;goto B5b32ee;
case 0x5b32f2:c.instructions+=4;goto B5b32f2;
case 0x5b32f3:c.instructions+=3;goto B5b32f3;
case 0x5b32f5:c.instructions+=2;goto B5b32f5;
case 0x5b32fa:c.instructions+=1;goto B5b32fa;
case 0x5b32ff:goto L5b32ff;
case 0x5b3303:c.instructions+=7;goto B5b3303;
case 0x5b3304:c.instructions+=6;goto B5b3304;
case 0x5b3306:c.instructions+=5;goto B5b3306;
case 0x5b3307:c.instructions+=4;goto B5b3307;
case 0x5b3308:c.instructions+=3;goto B5b3308;
case 0x5b330f:c.instructions+=2;goto B5b330f;
case 0x5b3312:c.instructions+=1;goto B5b3312;
case 0x5b3320:goto L5b3320;
case 0x5b3321:c.instructions+=5;goto B5b3321;
case 0x5b3322:c.instructions+=4;goto B5b3322;
case 0x5b3324:c.instructions+=3;goto B5b3324;
case 0x5b3326:c.instructions+=2;goto B5b3326;
case 0x5b3328:c.instructions+=1;goto B5b3328;
case 0x5b332a:goto L5b332a;
case 0x5b3330:goto L5b3330;
case 0x5b3333:c.instructions+=5;goto B5b3333;
case 0x5b3335:c.instructions+=4;goto B5b3335;
case 0x5b3337:c.instructions+=3;goto B5b3337;
case 0x5b333a:c.instructions+=2;goto B5b333a;
case 0x5b333c:c.instructions+=1;goto B5b333c;
case 0x5b3341:goto L5b3341;
case 0x5b3342:c.instructions+=1;goto B5b3342;
case 0x5b3347:goto L5b3347;
case 0x5b3349:c.instructions+=3;goto B5b3349;
case 0x5b334c:c.instructions+=2;goto B5b334c;
case 0x5b334e:c.instructions+=1;goto B5b334e;
case 0x5b3350:goto L5b3350;
case 0x5b3351:c.instructions+=2;goto B5b3351;
case 0x5b3352:c.instructions+=1;goto B5b3352;
case 0x5b3360:goto L5b3360;
case 0x5b3361:c.instructions+=2;goto B5b3361;
case 0x5b3363:c.instructions+=1;goto B5b3363;
case 0x5b3368:goto L5b3368;
case 0x5b336d:c.instructions+=1;goto B5b336d;
case 0x5b336f:goto L5b336f;
case 0x5b3374:c.instructions+=3;goto B5b3374;
case 0x5b3375:c.instructions+=2;goto B5b3375;
case 0x5b3376:c.instructions+=1;goto B5b3376;
case 0x5b337b:goto L5b337b;
case 0x5b337e:goto L5b337e;
case 0x5b3380:c.instructions+=2;goto B5b3380;
case 0x5b3381:c.instructions+=1;goto B5b3381;
case 0x5b3390:goto L5b3390;
case 0x5b3391:c.instructions+=9;goto B5b3391;
case 0x5b3393:c.instructions+=8;goto B5b3393;
case 0x5b3396:c.instructions+=7;goto B5b3396;
case 0x5b339c:c.instructions+=6;goto B5b339c;
case 0x5b339d:c.instructions+=5;goto B5b339d;
case 0x5b339e:c.instructions+=4;goto B5b339e;
case 0x5b33a0:c.instructions+=3;goto B5b33a0;
case 0x5b33a1:c.instructions+=2;goto B5b33a1;
case 0x5b33a5:c.instructions+=1;goto B5b33a5;
case 0x5b33aa:goto L5b33aa;
case 0x5b33ae:c.instructions+=1;goto B5b33ae;
case 0x5b33b3:goto L5b33b3;
case 0x5b33b9:c.instructions+=2;goto B5b33b9;
case 0x5b33bb:c.instructions+=1;goto B5b33bb;
case 0x5b33c1:goto L5b33c1;
case 0x5b33c7:c.instructions+=4;goto B5b33c7;
case 0x5b33cb:c.instructions+=3;goto B5b33cb;
case 0x5b33cc:c.instructions+=2;goto B5b33cc;
case 0x5b33ce:c.instructions+=1;goto B5b33ce;
case 0x5b33d3:goto L5b33d3;
case 0x5b33d6:c.instructions+=6;goto B5b33d6;
case 0x5b33d7:c.instructions+=5;goto B5b33d7;
case 0x5b33dd:c.instructions+=4;goto B5b33dd;
case 0x5b33e4:c.instructions+=3;goto B5b33e4;
case 0x5b33e5:c.instructions+=2;goto B5b33e5;
case 0x5b33e6:c.instructions+=1;goto B5b33e6;
case 0x5b33eb:goto L5b33eb;
case 0x5b33f1:c.instructions+=5;goto B5b33f1;
case 0x5b33f4:c.instructions+=4;goto B5b33f4;
case 0x5b33f8:c.instructions+=3;goto B5b33f8;
case 0x5b33f9:c.instructions+=2;goto B5b33f9;
case 0x5b33fb:c.instructions+=1;goto B5b33fb;
case 0x5b3400:goto L5b3400;
case 0x5b3403:c.instructions+=6;goto B5b3403;
case 0x5b3404:c.instructions+=5;goto B5b3404;
case 0x5b340a:c.instructions+=4;goto B5b340a;
case 0x5b340e:c.instructions+=3;goto B5b340e;
case 0x5b340f:c.instructions+=2;goto B5b340f;
case 0x5b3410:c.instructions+=1;goto B5b3410;
case 0x5b3415:goto L5b3415;
case 0x5b3419:c.instructions+=27;goto B5b3419;
case 0x5b3420:c.instructions+=26;goto B5b3420;
case 0x5b3423:c.instructions+=25;goto B5b3423;
case 0x5b3429:c.instructions+=24;goto B5b3429;
case 0x5b3430:c.instructions+=23;goto B5b3430;
case 0x5b3434:c.instructions+=22;goto B5b3434;
case 0x5b343b:c.instructions+=21;goto B5b343b;
case 0x5b3442:c.instructions+=20;goto B5b3442;
case 0x5b3446:c.instructions+=19;goto B5b3446;
case 0x5b344d:c.instructions+=18;goto B5b344d;
case 0x5b3454:c.instructions+=17;goto B5b3454;
case 0x5b345b:c.instructions+=16;goto B5b345b;
case 0x5b345d:c.instructions+=15;goto B5b345d;
case 0x5b3464:c.instructions+=14;goto B5b3464;
case 0x5b3466:c.instructions+=13;goto B5b3466;
case 0x5b346d:c.instructions+=12;goto B5b346d;
case 0x5b346f:c.instructions+=11;goto B5b346f;
case 0x5b3476:c.instructions+=10;goto B5b3476;
case 0x5b347d:c.instructions+=9;goto B5b347d;
case 0x5b347f:c.instructions+=8;goto B5b347f;
case 0x5b3483:c.instructions+=7;goto B5b3483;
case 0x5b3489:c.instructions+=6;goto B5b3489;
case 0x5b348d:c.instructions+=5;goto B5b348d;
case 0x5b3491:c.instructions+=4;goto B5b3491;
case 0x5b3494:c.instructions+=3;goto B5b3494;
case 0x5b3495:c.instructions+=2;goto B5b3495;
case 0x5b3498:c.instructions+=1;goto B5b3498;
case 0x5b349e:goto L5b349e;
case 0x5b34a5:goto L5b34a5;
case 0x5b34a9:c.instructions+=8;goto B5b34a9;
case 0x5b34aa:c.instructions+=7;goto B5b34aa;
case 0x5b34ab:c.instructions+=6;goto B5b34ab;
case 0x5b34ac:c.instructions+=5;goto B5b34ac;
case 0x5b34b0:c.instructions+=4;goto B5b34b0;
case 0x5b34b1:c.instructions+=3;goto B5b34b1;
case 0x5b34b8:c.instructions+=2;goto B5b34b8;
case 0x5b34b9:c.instructions+=1;goto B5b34b9;
case 0x5b34be:goto L5b34be;
case 0x5b34c0:goto L5b34c0;
case 0x5b34c4:c.instructions+=8;goto B5b34c4;
case 0x5b34c5:c.instructions+=7;goto B5b34c5;
case 0x5b34c6:c.instructions+=6;goto B5b34c6;
case 0x5b34c7:c.instructions+=5;goto B5b34c7;
case 0x5b34cb:c.instructions+=4;goto B5b34cb;
case 0x5b34cc:c.instructions+=3;goto B5b34cc;
case 0x5b34d3:c.instructions+=2;goto B5b34d3;
case 0x5b34d4:c.instructions+=1;goto B5b34d4;
case 0x5b34d9:goto L5b34d9;
case 0x5b34db:goto L5b34db;
case 0x5b34df:c.instructions+=8;goto B5b34df;
case 0x5b34e0:c.instructions+=7;goto B5b34e0;
case 0x5b34e1:c.instructions+=6;goto B5b34e1;
case 0x5b34e2:c.instructions+=5;goto B5b34e2;
case 0x5b34e6:c.instructions+=4;goto B5b34e6;
case 0x5b34e7:c.instructions+=3;goto B5b34e7;
case 0x5b34ee:c.instructions+=2;goto B5b34ee;
case 0x5b34ef:c.instructions+=1;goto B5b34ef;
case 0x5b34f4:goto L5b34f4;
case 0x5b34f6:goto L5b34f6;
case 0x5b34fa:c.instructions+=8;goto B5b34fa;
case 0x5b34fb:c.instructions+=7;goto B5b34fb;
case 0x5b34fc:c.instructions+=6;goto B5b34fc;
case 0x5b34fd:c.instructions+=5;goto B5b34fd;
case 0x5b3501:c.instructions+=4;goto B5b3501;
case 0x5b3502:c.instructions+=3;goto B5b3502;
case 0x5b3509:c.instructions+=2;goto B5b3509;
case 0x5b350a:c.instructions+=1;goto B5b350a;
case 0x5b350f:goto L5b350f;
case 0x5b3511:goto L5b3511;
case 0x5b3515:c.instructions+=8;goto B5b3515;
case 0x5b3516:c.instructions+=7;goto B5b3516;
case 0x5b3517:c.instructions+=6;goto B5b3517;
case 0x5b3518:c.instructions+=5;goto B5b3518;
case 0x5b351c:c.instructions+=4;goto B5b351c;
case 0x5b351d:c.instructions+=3;goto B5b351d;
case 0x5b3524:c.instructions+=2;goto B5b3524;
case 0x5b3525:c.instructions+=1;goto B5b3525;
case 0x5b352a:goto L5b352a;
case 0x5b3530:c.instructions+=5;goto B5b3530;
case 0x5b3533:c.instructions+=4;goto B5b3533;
case 0x5b3534:c.instructions+=3;goto B5b3534;
case 0x5b3537:c.instructions+=2;goto B5b3537;
case 0x5b353d:c.instructions+=1;goto B5b353d;
case 0x5b353f:goto L5b353f;
case 0x5b3546:goto L5b3546;
case 0x5b354a:c.instructions+=8;goto B5b354a;
case 0x5b354b:c.instructions+=7;goto B5b354b;
case 0x5b354c:c.instructions+=6;goto B5b354c;
case 0x5b354d:c.instructions+=5;goto B5b354d;
case 0x5b3551:c.instructions+=4;goto B5b3551;
case 0x5b3552:c.instructions+=3;goto B5b3552;
case 0x5b3556:c.instructions+=2;goto B5b3556;
case 0x5b3557:c.instructions+=1;goto B5b3557;
case 0x5b355c:goto L5b355c;
case 0x5b355e:goto L5b355e;
case 0x5b3562:c.instructions+=8;goto B5b3562;
case 0x5b3563:c.instructions+=7;goto B5b3563;
case 0x5b3564:c.instructions+=6;goto B5b3564;
case 0x5b3565:c.instructions+=5;goto B5b3565;
case 0x5b3569:c.instructions+=4;goto B5b3569;
case 0x5b356a:c.instructions+=3;goto B5b356a;
case 0x5b356e:c.instructions+=2;goto B5b356e;
case 0x5b356f:c.instructions+=1;goto B5b356f;
case 0x5b3574:goto L5b3574;
case 0x5b3576:goto L5b3576;
case 0x5b357a:c.instructions+=8;goto B5b357a;
case 0x5b357b:c.instructions+=7;goto B5b357b;
case 0x5b357c:c.instructions+=6;goto B5b357c;
case 0x5b357d:c.instructions+=5;goto B5b357d;
case 0x5b3581:c.instructions+=4;goto B5b3581;
case 0x5b3582:c.instructions+=3;goto B5b3582;
case 0x5b3586:c.instructions+=2;goto B5b3586;
case 0x5b3587:c.instructions+=1;goto B5b3587;
case 0x5b358c:goto L5b358c;
case 0x5b358e:goto L5b358e;
case 0x5b3592:c.instructions+=8;goto B5b3592;
case 0x5b3593:c.instructions+=7;goto B5b3593;
case 0x5b3594:c.instructions+=6;goto B5b3594;
case 0x5b3595:c.instructions+=5;goto B5b3595;
case 0x5b3599:c.instructions+=4;goto B5b3599;
case 0x5b359a:c.instructions+=3;goto B5b359a;
case 0x5b359e:c.instructions+=2;goto B5b359e;
case 0x5b359f:c.instructions+=1;goto B5b359f;
case 0x5b35a4:goto L5b35a4;
case 0x5b35a6:goto L5b35a6;
case 0x5b35aa:c.instructions+=8;goto B5b35aa;
case 0x5b35ab:c.instructions+=7;goto B5b35ab;
case 0x5b35ac:c.instructions+=6;goto B5b35ac;
case 0x5b35ad:c.instructions+=5;goto B5b35ad;
case 0x5b35b1:c.instructions+=4;goto B5b35b1;
case 0x5b35b2:c.instructions+=3;goto B5b35b2;
case 0x5b35b6:c.instructions+=2;goto B5b35b6;
case 0x5b35b7:c.instructions+=1;goto B5b35b7;
case 0x5b35bc:goto L5b35bc;
case 0x5b35c3:c.instructions+=57;goto B5b35c3;
case 0x5b35ca:c.instructions+=56;goto B5b35ca;
case 0x5b35d1:c.instructions+=55;goto B5b35d1;
case 0x5b35d4:c.instructions+=54;goto B5b35d4;
case 0x5b35d8:c.instructions+=53;goto B5b35d8;
case 0x5b35db:c.instructions+=52;goto B5b35db;
case 0x5b35df:c.instructions+=51;goto B5b35df;
case 0x5b35e2:c.instructions+=50;goto B5b35e2;
case 0x5b35e6:c.instructions+=49;goto B5b35e6;
case 0x5b35ec:c.instructions+=48;goto B5b35ec;
case 0x5b35f1:c.instructions+=47;goto B5b35f1;
case 0x5b35f7:c.instructions+=46;goto B5b35f7;
case 0x5b35fc:c.instructions+=45;goto B5b35fc;
case 0x5b3602:c.instructions+=44;goto B5b3602;
case 0x5b3608:c.instructions+=43;goto B5b3608;
case 0x5b360e:c.instructions+=42;goto B5b360e;
case 0x5b3613:c.instructions+=41;goto B5b3613;
case 0x5b3619:c.instructions+=40;goto B5b3619;
case 0x5b361f:c.instructions+=39;goto B5b361f;
case 0x5b3622:c.instructions+=38;goto B5b3622;
case 0x5b3625:c.instructions+=37;goto B5b3625;
case 0x5b3628:c.instructions+=36;goto B5b3628;
case 0x5b362e:c.instructions+=35;goto B5b362e;
case 0x5b3630:c.instructions+=34;goto B5b3630;
case 0x5b3636:c.instructions+=33;goto B5b3636;
case 0x5b363c:c.instructions+=32;goto B5b363c;
case 0x5b3642:c.instructions+=31;goto B5b3642;
case 0x5b3648:c.instructions+=30;goto B5b3648;
case 0x5b364e:c.instructions+=29;goto B5b364e;
case 0x5b3654:c.instructions+=28;goto B5b3654;
case 0x5b3656:c.instructions+=27;goto B5b3656;
case 0x5b365c:c.instructions+=26;goto B5b365c;
case 0x5b3662:c.instructions+=25;goto B5b3662;
case 0x5b3668:c.instructions+=24;goto B5b3668;
case 0x5b366e:c.instructions+=23;goto B5b366e;
case 0x5b3674:c.instructions+=22;goto B5b3674;
case 0x5b367a:c.instructions+=21;goto B5b367a;
case 0x5b3680:c.instructions+=20;goto B5b3680;
case 0x5b3686:c.instructions+=19;goto B5b3686;
case 0x5b368d:c.instructions+=18;goto B5b368d;
case 0x5b3694:c.instructions+=17;goto B5b3694;
case 0x5b3696:c.instructions+=16;goto B5b3696;
case 0x5b369a:c.instructions+=15;goto B5b369a;
case 0x5b369e:c.instructions+=14;goto B5b369e;
case 0x5b36a2:c.instructions+=13;goto B5b36a2;
case 0x5b36a6:c.instructions+=12;goto B5b36a6;
case 0x5b36aa:c.instructions+=11;goto B5b36aa;
case 0x5b36ae:c.instructions+=10;goto B5b36ae;
case 0x5b36b2:c.instructions+=9;goto B5b36b2;
case 0x5b36b4:c.instructions+=8;goto B5b36b4;
case 0x5b36b8:c.instructions+=7;goto B5b36b8;
case 0x5b36bc:c.instructions+=6;goto B5b36bc;
case 0x5b36be:c.instructions+=5;goto B5b36be;
case 0x5b36c2:c.instructions+=4;goto B5b36c2;
case 0x5b36c8:c.instructions+=3;goto B5b36c8;
case 0x5b36ca:c.instructions+=2;goto B5b36ca;
case 0x5b36cd:c.instructions+=1;goto B5b36cd;
case 0x5b36d3:goto L5b36d3;
case 0x5b36d9:c.instructions+=1;goto B5b36d9;
case 0x5b36de:goto L5b36de;
case 0x5b36e4:c.instructions+=3;goto B5b36e4;
case 0x5b36e6:c.instructions+=2;goto B5b36e6;
case 0x5b36e8:c.instructions+=1;goto B5b36e8;
case 0x5b36ee:goto L5b36ee;
case 0x5b36f4:c.instructions+=3;goto B5b36f4;
case 0x5b36f7:c.instructions+=2;goto B5b36f7;
case 0x5b36fb:c.instructions+=1;goto B5b36fb;
case 0x5b3700:goto L5b3700;
case 0x5b3704:c.instructions+=6;goto B5b3704;
case 0x5b3706:c.instructions+=5;goto B5b3706;
case 0x5b370a:c.instructions+=4;goto B5b370a;
case 0x5b370b:c.instructions+=3;goto B5b370b;
case 0x5b370c:c.instructions+=2;goto B5b370c;
case 0x5b3712:c.instructions+=1;goto B5b3712;
case 0x5b3717:goto L5b3717;
case 0x5b371d:c.instructions+=2;goto B5b371d;
case 0x5b3721:c.instructions+=1;goto B5b3721;
case 0x5b3723:goto L5b3723;
case 0x5b372a:c.instructions+=5;goto B5b372a;
case 0x5b372b:c.instructions+=4;goto B5b372b;
case 0x5b3731:c.instructions+=3;goto B5b3731;
case 0x5b3732:c.instructions+=2;goto B5b3732;
case 0x5b3733:c.instructions+=1;goto B5b3733;
case 0x5b3738:goto L5b3738;
case 0x5b373b:c.instructions+=1;goto B5b373b;
case 0x5b373d:goto L5b373d;
case 0x5b3744:c.instructions+=5;goto B5b3744;
case 0x5b374b:c.instructions+=4;goto B5b374b;
case 0x5b3752:c.instructions+=3;goto B5b3752;
case 0x5b3754:c.instructions+=2;goto B5b3754;
case 0x5b3757:c.instructions+=1;goto B5b3757;
case 0x5b375a:goto L5b375a;
case 0x5b375e:c.instructions+=7;goto B5b375e;
case 0x5b3764:c.instructions+=6;goto B5b3764;
case 0x5b3765:c.instructions+=5;goto B5b3765;
case 0x5b3768:c.instructions+=4;goto B5b3768;
case 0x5b376b:c.instructions+=3;goto B5b376b;
case 0x5b376d:c.instructions+=2;goto B5b376d;
case 0x5b3771:c.instructions+=1;goto B5b3771;
case 0x5b3773:goto L5b3773;
case 0x5b3779:c.instructions+=3;goto B5b3779;
case 0x5b377b:c.instructions+=2;goto B5b377b;
case 0x5b3783:c.instructions+=1;goto B5b3783;
case 0x5b3789:goto L5b3789;
case 0x5b378f:c.instructions+=1;goto B5b378f;
case 0x5b3795:goto L5b3795;
case 0x5b379b:c.instructions+=5;goto B5b379b;
case 0x5b379e:c.instructions+=4;goto B5b379e;
case 0x5b37a0:c.instructions+=3;goto B5b37a0;
case 0x5b37a1:c.instructions+=2;goto B5b37a1;
case 0x5b37a4:c.instructions+=1;goto B5b37a4;
case 0x5b37aa:goto L5b37aa;
case 0x5b37b1:goto L5b37b1;
case 0x5b37b5:c.instructions+=3;goto B5b37b5;
case 0x5b37b6:c.instructions+=2;goto B5b37b6;
case 0x5b37b7:c.instructions+=1;goto B5b37b7;
case 0x5b37bc:goto L5b37bc;
case 0x5b37c1:goto L5b37c1;
case 0x5b37c4:c.instructions+=10;goto B5b37c4;
case 0x5b37c7:c.instructions+=9;goto B5b37c7;
case 0x5b37ca:c.instructions+=8;goto B5b37ca;
case 0x5b37ce:c.instructions+=7;goto B5b37ce;
case 0x5b37d0:c.instructions+=6;goto B5b37d0;
case 0x5b37d8:c.instructions+=5;goto B5b37d8;
case 0x5b37dc:c.instructions+=4;goto B5b37dc;
case 0x5b37e0:c.instructions+=3;goto B5b37e0;
case 0x5b37e4:c.instructions+=2;goto B5b37e4;
case 0x5b37e9:c.instructions+=1;goto B5b37e9;
case 0x5b37eb:goto L5b37eb;
case 0x5b37ef:c.instructions+=3;goto B5b37ef;
case 0x5b37f0:c.instructions+=2;goto B5b37f0;
case 0x5b37f1:c.instructions+=1;goto B5b37f1;
case 0x5b37f6:goto L5b37f6;
case 0x5b37f8:goto L5b37f8;
case 0x5b37fb:c.instructions+=18;goto B5b37fb;
case 0x5b37fe:c.instructions+=17;goto B5b37fe;
case 0x5b3802:c.instructions+=16;goto B5b3802;
case 0x5b3806:c.instructions+=15;goto B5b3806;
case 0x5b380b:c.instructions+=14;goto B5b380b;
case 0x5b380f:c.instructions+=13;goto B5b380f;
case 0x5b3814:c.instructions+=12;goto B5b3814;
case 0x5b3818:c.instructions+=11;goto B5b3818;
case 0x5b381d:c.instructions+=10;goto B5b381d;
case 0x5b3821:c.instructions+=9;goto B5b3821;
case 0x5b3826:c.instructions+=8;goto B5b3826;
case 0x5b3829:c.instructions+=7;goto B5b3829;
case 0x5b382c:c.instructions+=6;goto B5b382c;
case 0x5b382f:c.instructions+=5;goto B5b382f;
case 0x5b3831:c.instructions+=4;goto B5b3831;
case 0x5b3835:c.instructions+=3;goto B5b3835;
case 0x5b3839:c.instructions+=2;goto B5b3839;
case 0x5b383d:c.instructions+=1;goto B5b383d;
case 0x5b383f:goto L5b383f;
case 0x5b3843:c.instructions+=3;goto B5b3843;
case 0x5b3844:c.instructions+=2;goto B5b3844;
case 0x5b3845:c.instructions+=1;goto B5b3845;
case 0x5b384a:goto L5b384a;
case 0x5b3850:c.instructions+=2;goto B5b3850;
case 0x5b3854:c.instructions+=1;goto B5b3854;
case 0x5b3856:goto L5b3856;
case 0x5b385a:c.instructions+=5;goto B5b385a;
case 0x5b385b:c.instructions+=4;goto B5b385b;
case 0x5b3861:c.instructions+=3;goto B5b3861;
case 0x5b3862:c.instructions+=2;goto B5b3862;
case 0x5b3863:c.instructions+=1;goto B5b3863;
case 0x5b3868:goto L5b3868;
case 0x5b386b:c.instructions+=1;goto B5b386b;
case 0x5b386d:goto L5b386d;
case 0x5b3871:c.instructions+=5;goto B5b3871;
case 0x5b3875:c.instructions+=4;goto B5b3875;
case 0x5b3879:c.instructions+=3;goto B5b3879;
case 0x5b387b:c.instructions+=2;goto B5b387b;
case 0x5b387e:c.instructions+=1;goto B5b387e;
case 0x5b3881:goto L5b3881;
case 0x5b3885:c.instructions+=7;goto B5b3885;
case 0x5b388b:c.instructions+=6;goto B5b388b;
case 0x5b388c:c.instructions+=5;goto B5b388c;
case 0x5b388f:c.instructions+=4;goto B5b388f;
case 0x5b3892:c.instructions+=3;goto B5b3892;
case 0x5b3894:c.instructions+=2;goto B5b3894;
case 0x5b3898:c.instructions+=1;goto B5b3898;
case 0x5b389e:goto L5b389e;
case 0x5b38a2:c.instructions+=3;goto B5b38a2;
case 0x5b38a5:c.instructions+=2;goto B5b38a5;
case 0x5b38a6:c.instructions+=1;goto B5b38a6;
case 0x5b38ab:goto L5b38ab;
case 0x5b38af:c.instructions+=4;goto B5b38af;
case 0x5b38b5:c.instructions+=3;goto B5b38b5;
case 0x5b38b7:c.instructions+=2;goto B5b38b7;
case 0x5b38ba:c.instructions+=1;goto B5b38ba;
case 0x5b38c0:goto L5b38c0;
case 0x5b38c4:c.instructions+=5;goto B5b38c4;
case 0x5b38c7:c.instructions+=4;goto B5b38c7;
case 0x5b38cb:c.instructions+=3;goto B5b38cb;
case 0x5b38cc:c.instructions+=2;goto B5b38cc;
case 0x5b38d3:c.instructions+=1;goto B5b38d3;
case 0x5b38d8:goto L5b38d8;
case 0x5b38de:c.instructions+=1;goto B5b38de;
case 0x5b38e0:goto L5b38e0;
case 0x5b38e4:c.instructions+=16;goto B5b38e4;
case 0x5b38ea:c.instructions+=15;goto B5b38ea;
case 0x5b38ec:c.instructions+=14;goto B5b38ec;
case 0x5b38f0:c.instructions+=13;goto B5b38f0;
case 0x5b38f2:c.instructions+=12;goto B5b38f2;
case 0x5b38f6:c.instructions+=11;goto B5b38f6;
case 0x5b38f8:c.instructions+=10;goto B5b38f8;
case 0x5b38ff:c.instructions+=9;goto B5b38ff;
case 0x5b3906:c.instructions+=8;goto B5b3906;
case 0x5b3908:c.instructions+=7;goto B5b3908;
case 0x5b390c:c.instructions+=6;goto B5b390c;
case 0x5b3910:c.instructions+=5;goto B5b3910;
case 0x5b3914:c.instructions+=4;goto B5b3914;
case 0x5b3917:c.instructions+=3;goto B5b3917;
case 0x5b3918:c.instructions+=2;goto B5b3918;
case 0x5b391b:c.instructions+=1;goto B5b391b;
case 0x5b3921:goto L5b3921;
case 0x5b3928:goto L5b3928;
case 0x5b392c:c.instructions+=11;goto B5b392c;
case 0x5b392d:c.instructions+=10;goto B5b392d;
case 0x5b3933:c.instructions+=9;goto B5b3933;
case 0x5b3934:c.instructions+=8;goto B5b3934;
case 0x5b393a:c.instructions+=7;goto B5b393a;
case 0x5b393b:c.instructions+=6;goto B5b393b;
case 0x5b393f:c.instructions+=5;goto B5b393f;
case 0x5b3940:c.instructions+=4;goto B5b3940;
case 0x5b3944:c.instructions+=3;goto B5b3944;
case 0x5b3945:c.instructions+=2;goto B5b3945;
case 0x5b3947:c.instructions+=1;goto B5b3947;
case 0x5b394c:goto L5b394c;
case 0x5b3951:goto L5b3951;
case 0x5b3954:c.instructions+=12;goto B5b3954;
case 0x5b3957:c.instructions+=11;goto B5b3957;
case 0x5b395e:c.instructions+=10;goto B5b395e;
case 0x5b3965:c.instructions+=9;goto B5b3965;
case 0x5b3966:c.instructions+=8;goto B5b3966;
case 0x5b396c:c.instructions+=7;goto B5b396c;
case 0x5b3973:c.instructions+=6;goto B5b3973;
case 0x5b3976:c.instructions+=5;goto B5b3976;
case 0x5b3977:c.instructions+=4;goto B5b3977;
case 0x5b397e:c.instructions+=3;goto B5b397e;
case 0x5b3985:c.instructions+=2;goto B5b3985;
case 0x5b3986:c.instructions+=1;goto B5b3986;
case 0x5b398b:goto L5b398b;
case 0x5b3992:c.instructions+=10;goto B5b3992;
case 0x5b3999:c.instructions+=9;goto B5b3999;
case 0x5b39a0:c.instructions+=8;goto B5b39a0;
case 0x5b39a7:c.instructions+=7;goto B5b39a7;
case 0x5b39ae:c.instructions+=6;goto B5b39ae;
case 0x5b39b5:c.instructions+=5;goto B5b39b5;
case 0x5b39c0:c.instructions+=4;goto B5b39c0;
case 0x5b39c4:c.instructions+=3;goto B5b39c4;
case 0x5b39c7:c.instructions+=2;goto B5b39c7;
case 0x5b39cc:c.instructions+=1;goto B5b39cc;
case 0x5b39ce:goto L5b39ce;
case 0x5b39d2:c.instructions+=11;goto B5b39d2;
case 0x5b39d3:c.instructions+=10;goto B5b39d3;
case 0x5b39d9:c.instructions+=9;goto B5b39d9;
case 0x5b39da:c.instructions+=8;goto B5b39da;
case 0x5b39e0:c.instructions+=7;goto B5b39e0;
case 0x5b39e1:c.instructions+=6;goto B5b39e1;
case 0x5b39e5:c.instructions+=5;goto B5b39e5;
case 0x5b39e6:c.instructions+=4;goto B5b39e6;
case 0x5b39ea:c.instructions+=3;goto B5b39ea;
case 0x5b39eb:c.instructions+=2;goto B5b39eb;
case 0x5b39ed:c.instructions+=1;goto B5b39ed;
case 0x5b39f2:goto L5b39f2;
case 0x5b39f4:goto L5b39f4;
case 0x5b39f8:c.instructions+=11;goto B5b39f8;
case 0x5b39f9:c.instructions+=10;goto B5b39f9;
case 0x5b39ff:c.instructions+=9;goto B5b39ff;
case 0x5b3a00:c.instructions+=8;goto B5b3a00;
case 0x5b3a06:c.instructions+=7;goto B5b3a06;
case 0x5b3a07:c.instructions+=6;goto B5b3a07;
case 0x5b3a0b:c.instructions+=5;goto B5b3a0b;
case 0x5b3a0c:c.instructions+=4;goto B5b3a0c;
case 0x5b3a10:c.instructions+=3;goto B5b3a10;
case 0x5b3a11:c.instructions+=2;goto B5b3a11;
case 0x5b3a13:c.instructions+=1;goto B5b3a13;
case 0x5b3a18:goto L5b3a18;
case 0x5b3a1a:goto L5b3a1a;
case 0x5b3a1e:c.instructions+=11;goto B5b3a1e;
case 0x5b3a1f:c.instructions+=10;goto B5b3a1f;
case 0x5b3a25:c.instructions+=9;goto B5b3a25;
case 0x5b3a26:c.instructions+=8;goto B5b3a26;
case 0x5b3a2c:c.instructions+=7;goto B5b3a2c;
case 0x5b3a2d:c.instructions+=6;goto B5b3a2d;
case 0x5b3a31:c.instructions+=5;goto B5b3a31;
case 0x5b3a32:c.instructions+=4;goto B5b3a32;
case 0x5b3a36:c.instructions+=3;goto B5b3a36;
case 0x5b3a37:c.instructions+=2;goto B5b3a37;
case 0x5b3a39:c.instructions+=1;goto B5b3a39;
case 0x5b3a3e:goto L5b3a3e;
case 0x5b3a44:c.instructions+=4;goto B5b3a44;
case 0x5b3a47:c.instructions+=3;goto B5b3a47;
case 0x5b3a48:c.instructions+=2;goto B5b3a48;
case 0x5b3a4b:c.instructions+=1;goto B5b3a4b;
case 0x5b3a51:goto L5b3a51;
case 0x5b3a58:goto L5b3a58;
case 0x5b3a5c:c.instructions+=10;goto B5b3a5c;
case 0x5b3a5d:c.instructions+=9;goto B5b3a5d;
case 0x5b3a63:c.instructions+=8;goto B5b3a63;
case 0x5b3a64:c.instructions+=7;goto B5b3a64;
case 0x5b3a65:c.instructions+=6;goto B5b3a65;
case 0x5b3a69:c.instructions+=5;goto B5b3a69;
case 0x5b3a6a:c.instructions+=4;goto B5b3a6a;
case 0x5b3a6e:c.instructions+=3;goto B5b3a6e;
case 0x5b3a6f:c.instructions+=2;goto B5b3a6f;
case 0x5b3a71:c.instructions+=1;goto B5b3a71;
case 0x5b3a76:goto L5b3a76;
case 0x5b3a7b:goto L5b3a7b;
case 0x5b3a7e:c.instructions+=11;goto B5b3a7e;
case 0x5b3a81:c.instructions+=10;goto B5b3a81;
case 0x5b3a88:c.instructions+=9;goto B5b3a88;
case 0x5b3a89:c.instructions+=8;goto B5b3a89;
case 0x5b3a90:c.instructions+=7;goto B5b3a90;
case 0x5b3a93:c.instructions+=6;goto B5b3a93;
case 0x5b3a9a:c.instructions+=5;goto B5b3a9a;
case 0x5b3a9b:c.instructions+=4;goto B5b3a9b;
case 0x5b3aa2:c.instructions+=3;goto B5b3aa2;
case 0x5b3aa3:c.instructions+=2;goto B5b3aa3;
case 0x5b3aaa:c.instructions+=1;goto B5b3aaa;
case 0x5b3aaf:goto L5b3aaf;
case 0x5b3ab6:c.instructions+=10;goto B5b3ab6;
case 0x5b3abd:c.instructions+=9;goto B5b3abd;
case 0x5b3ac4:c.instructions+=8;goto B5b3ac4;
case 0x5b3ac8:c.instructions+=7;goto B5b3ac8;
case 0x5b3acc:c.instructions+=6;goto B5b3acc;
case 0x5b3ad0:c.instructions+=5;goto B5b3ad0;
case 0x5b3ad8:c.instructions+=4;goto B5b3ad8;
case 0x5b3adc:c.instructions+=3;goto B5b3adc;
case 0x5b3adf:c.instructions+=2;goto B5b3adf;
case 0x5b3ae4:c.instructions+=1;goto B5b3ae4;
case 0x5b3ae6:goto L5b3ae6;
case 0x5b3aea:c.instructions+=10;goto B5b3aea;
case 0x5b3aeb:c.instructions+=9;goto B5b3aeb;
case 0x5b3af1:c.instructions+=8;goto B5b3af1;
case 0x5b3af2:c.instructions+=7;goto B5b3af2;
case 0x5b3af3:c.instructions+=6;goto B5b3af3;
case 0x5b3af7:c.instructions+=5;goto B5b3af7;
case 0x5b3af8:c.instructions+=4;goto B5b3af8;
case 0x5b3afc:c.instructions+=3;goto B5b3afc;
case 0x5b3afd:c.instructions+=2;goto B5b3afd;
case 0x5b3aff:c.instructions+=1;goto B5b3aff;
case 0x5b3b04:goto L5b3b04;
case 0x5b3b06:goto L5b3b06;
case 0x5b3b0a:c.instructions+=10;goto B5b3b0a;
case 0x5b3b0b:c.instructions+=9;goto B5b3b0b;
case 0x5b3b11:c.instructions+=8;goto B5b3b11;
case 0x5b3b12:c.instructions+=7;goto B5b3b12;
case 0x5b3b13:c.instructions+=6;goto B5b3b13;
case 0x5b3b17:c.instructions+=5;goto B5b3b17;
case 0x5b3b18:c.instructions+=4;goto B5b3b18;
case 0x5b3b1c:c.instructions+=3;goto B5b3b1c;
case 0x5b3b1d:c.instructions+=2;goto B5b3b1d;
case 0x5b3b1f:c.instructions+=1;goto B5b3b1f;
case 0x5b3b24:goto L5b3b24;
case 0x5b3b26:goto L5b3b26;
case 0x5b3b2a:c.instructions+=10;goto B5b3b2a;
case 0x5b3b2b:c.instructions+=9;goto B5b3b2b;
case 0x5b3b31:c.instructions+=8;goto B5b3b31;
case 0x5b3b32:c.instructions+=7;goto B5b3b32;
case 0x5b3b33:c.instructions+=6;goto B5b3b33;
case 0x5b3b37:c.instructions+=5;goto B5b3b37;
case 0x5b3b38:c.instructions+=4;goto B5b3b38;
case 0x5b3b3c:c.instructions+=3;goto B5b3b3c;
case 0x5b3b3d:c.instructions+=2;goto B5b3b3d;
case 0x5b3b3f:c.instructions+=1;goto B5b3b3f;
case 0x5b3b44:goto L5b3b44;
case 0x5b3b4a:c.instructions+=4;goto B5b3b4a;
case 0x5b3b4f:c.instructions+=3;goto B5b3b4f;
case 0x5b3b51:c.instructions+=2;goto B5b3b51;
case 0x5b3b53:c.instructions+=1;goto B5b3b53;
case 0x5b3b55:goto L5b3b55;
case 0x5b3b60:goto L5b3b60;
case 0x5b3b67:c.instructions+=1;goto B5b3b67;
case 0x5b3b6d:goto L5b3b6d;
case 0x5b3b73:c.instructions+=3;goto B5b3b73;
case 0x5b3b74:c.instructions+=2;goto B5b3b74;
case 0x5b3b76:c.instructions+=1;goto B5b3b76;
case 0x5b3b78:goto L5b3b78;
case 0x5b3b7f:c.instructions+=15;goto B5b3b7f;
case 0x5b3b86:c.instructions+=14;goto B5b3b86;
case 0x5b3b8c:c.instructions+=13;goto B5b3b8c;
case 0x5b3b93:c.instructions+=12;goto B5b3b93;
case 0x5b3b9a:c.instructions+=11;goto B5b3b9a;
case 0x5b3b9c:c.instructions+=10;goto B5b3b9c;
case 0x5b3b9f:c.instructions+=9;goto B5b3b9f;
case 0x5b3ba2:c.instructions+=8;goto B5b3ba2;
case 0x5b3ba4:c.instructions+=7;goto B5b3ba4;
case 0x5b3ba7:c.instructions+=6;goto B5b3ba7;
case 0x5b3ba9:c.instructions+=5;goto B5b3ba9;
case 0x5b3bae:c.instructions+=4;goto B5b3bae;
case 0x5b3bb1:c.instructions+=3;goto B5b3bb1;
case 0x5b3bb7:c.instructions+=2;goto B5b3bb7;
case 0x5b3bb8:c.instructions+=1;goto B5b3bb8;
case 0x5b3bbe:goto L5b3bbe;
case 0x5b3bc4:c.instructions+=4;goto B5b3bc4;
case 0x5b3bc9:c.instructions+=3;goto B5b3bc9;
case 0x5b3bcb:c.instructions+=2;goto B5b3bcb;
case 0x5b3bcd:c.instructions+=1;goto B5b3bcd;
case 0x5b3bcf:goto L5b3bcf;
case 0x5b3bd0:goto L5b3bd0;
case 0x5b3bd7:c.instructions+=1;goto B5b3bd7;
case 0x5b3bdd:goto L5b3bdd;
case 0x5b3bde:c.instructions+=2;goto B5b3bde;
case 0x5b3be4:c.instructions+=1;goto B5b3be4;
case 0x5b3be6:goto L5b3be6;
case 0x5b3bed:c.instructions+=15;goto B5b3bed;
case 0x5b3bf1:c.instructions+=14;goto B5b3bf1;
case 0x5b3bf7:c.instructions+=13;goto B5b3bf7;
case 0x5b3bfb:c.instructions+=12;goto B5b3bfb;
case 0x5b3bff:c.instructions+=11;goto B5b3bff;
case 0x5b3c01:c.instructions+=10;goto B5b3c01;
case 0x5b3c04:c.instructions+=9;goto B5b3c04;
case 0x5b3c07:c.instructions+=8;goto B5b3c07;
case 0x5b3c09:c.instructions+=7;goto B5b3c09;
case 0x5b3c0c:c.instructions+=6;goto B5b3c0c;
case 0x5b3c0e:c.instructions+=5;goto B5b3c0e;
case 0x5b3c11:c.instructions+=4;goto B5b3c11;
case 0x5b3c17:c.instructions+=3;goto B5b3c17;
case 0x5b3c18:c.instructions+=2;goto B5b3c18;
case 0x5b3c1e:c.instructions+=1;goto B5b3c1e;
case 0x5b3c23:goto L5b3c23;
case 0x5b3c25:c.instructions+=1;goto B5b3c25;
case 0x5b3c27:goto L5b3c27;
case 0x5b3c2b:c.instructions+=4;goto B5b3c2b;
case 0x5b3c2e:c.instructions+=3;goto B5b3c2e;
case 0x5b3c2f:c.instructions+=2;goto B5b3c2f;
case 0x5b3c31:c.instructions+=1;goto B5b3c31;
case 0x5b3c36:goto L5b3c36;
case 0x5b3c3a:c.instructions+=4;goto B5b3c3a;
case 0x5b3c40:c.instructions+=3;goto B5b3c40;
case 0x5b3c42:c.instructions+=2;goto B5b3c42;
case 0x5b3c45:c.instructions+=1;goto B5b3c45;
case 0x5b3c47:goto L5b3c47;
case 0x5b3c4b:c.instructions+=4;goto B5b3c4b;
case 0x5b3c4f:c.instructions+=3;goto B5b3c4f;
case 0x5b3c51:c.instructions+=2;goto B5b3c51;
case 0x5b3c54:c.instructions+=1;goto B5b3c54;
case 0x5b3c56:goto L5b3c56;
case 0x5b3c5a:c.instructions+=4;goto B5b3c5a;
case 0x5b3c5b:c.instructions+=3;goto B5b3c5b;
case 0x5b3c62:c.instructions+=2;goto B5b3c62;
case 0x5b3c66:c.instructions+=1;goto B5b3c66;
case 0x5b3c6b:goto L5b3c6b;
case 0x5b3c70:goto L5b3c70;
case 0x5b3c72:c.instructions+=1;goto B5b3c72;
case 0x5b3c77:goto L5b3c77;
case 0x5b3c79:c.instructions+=1;goto B5b3c79;
case 0x5b3c7b:goto L5b3c7b;
case 0x5b3c81:c.instructions+=6;goto B5b3c81;
case 0x5b3c82:c.instructions+=5;goto B5b3c82;
case 0x5b3c83:c.instructions+=4;goto B5b3c83;
case 0x5b3c84:c.instructions+=3;goto B5b3c84;
case 0x5b3c86:c.instructions+=2;goto B5b3c86;
case 0x5b3c87:c.instructions+=1;goto B5b3c87;
case 0x5b3c88:goto L5b3c88;
case 0x5b3c8c:c.instructions+=5;goto B5b3c8c;
case 0x5b3c93:c.instructions+=4;goto B5b3c93;
case 0x5b3c97:c.instructions+=3;goto B5b3c97;
case 0x5b3c98:c.instructions+=2;goto B5b3c98;
case 0x5b3c9a:c.instructions+=1;goto B5b3c9a;
case 0x5b3c9f:goto L5b3c9f;
case 0x5b3ca5:c.instructions+=3;goto B5b3ca5;
case 0x5b3ca6:c.instructions+=2;goto B5b3ca6;
case 0x5b3ca7:c.instructions+=1;goto B5b3ca7;
case 0x5b3cac:goto L5b3cac;
case 0x5b3cb0:c.instructions+=8;goto B5b3cb0;
case 0x5b3cb2:c.instructions+=7;goto B5b3cb2;
case 0x5b3cb5:c.instructions+=6;goto B5b3cb5;
case 0x5b3cb6:c.instructions+=5;goto B5b3cb6;
case 0x5b3cb7:c.instructions+=4;goto B5b3cb7;
case 0x5b3cb8:c.instructions+=3;goto B5b3cb8;
case 0x5b3cba:c.instructions+=2;goto B5b3cba;
case 0x5b3cbb:c.instructions+=1;goto B5b3cbb;
case 0x5b3d20:goto L5b3d20;
case 0x5b3d21:c.instructions+=4;goto B5b3d21;
case 0x5b3d23:c.instructions+=3;goto B5b3d23;
case 0x5b3d29:c.instructions+=2;goto B5b3d29;
case 0x5b3d2b:c.instructions+=1;goto B5b3d2b;
case 0x5b3d2d:goto L5b3d2d;
case 0x5b3d30:c.instructions+=2;goto B5b3d30;
case 0x5b3d31:c.instructions+=1;goto B5b3d31;
case 0x5b3d32:goto L5b3d32;
case 0x5b3d38:c.instructions+=4;goto B5b3d38;
case 0x5b3d3b:c.instructions+=3;goto B5b3d3b;
case 0x5b3d40:c.instructions+=2;goto B5b3d40;
case 0x5b3d42:c.instructions+=1;goto B5b3d42;
case 0x5b3d44:goto L5b3d44;
case 0x5b3d4a:c.instructions+=2;goto B5b3d4a;
case 0x5b3d4c:c.instructions+=1;goto B5b3d4c;
case 0x5b3d4e:goto L5b3d4e;
case 0x5b3d54:c.instructions+=4;goto B5b3d54;
case 0x5b3d5a:c.instructions+=3;goto B5b3d5a;
case 0x5b3d5c:c.instructions+=2;goto B5b3d5c;
case 0x5b3d5f:c.instructions+=1;goto B5b3d5f;
case 0x5b3d61:goto L5b3d61;
case 0x5b3d66:c.instructions+=1;goto B5b3d66;
case 0x5b3d68:goto L5b3d68;
case 0x5b3d6a:goto L5b3d6a;
case 0x5b3d70:c.instructions+=1;goto B5b3d70;
case 0x5b3d72:goto L5b3d72;
case 0x5b3d78:c.instructions+=2;goto B5b3d78;
case 0x5b3d7a:c.instructions+=1;goto B5b3d7a;
case 0x5b3d7c:goto L5b3d7c;
case 0x5b3d82:c.instructions+=4;goto B5b3d82;
case 0x5b3d88:c.instructions+=3;goto B5b3d88;
case 0x5b3d8a:c.instructions+=2;goto B5b3d8a;
case 0x5b3d8d:c.instructions+=1;goto B5b3d8d;
case 0x5b3d8f:goto L5b3d8f;
case 0x5b3d94:c.instructions+=1;goto B5b3d94;
case 0x5b3d96:goto L5b3d96;
case 0x5b3d98:c.instructions+=1;goto B5b3d98;
case 0x5b3d9a:goto L5b3d9a;
case 0x5b3da0:c.instructions+=2;goto B5b3da0;
case 0x5b3da3:c.instructions+=1;goto B5b3da3;
case 0x5b3da5:goto L5b3da5;
case 0x5b3dab:c.instructions+=2;goto B5b3dab;
case 0x5b3dad:c.instructions+=1;goto B5b3dad;
case 0x5b3daf:goto L5b3daf;
case 0x5b3db5:c.instructions+=4;goto B5b3db5;
case 0x5b3dbb:c.instructions+=3;goto B5b3dbb;
case 0x5b3dbd:c.instructions+=2;goto B5b3dbd;
case 0x5b3dc0:c.instructions+=1;goto B5b3dc0;
case 0x5b3dc2:goto L5b3dc2;
case 0x5b3dc7:c.instructions+=1;goto B5b3dc7;
case 0x5b3dc9:goto L5b3dc9;
case 0x5b3dcb:goto L5b3dcb;
case 0x5b3dd1:c.instructions+=1;goto B5b3dd1;
case 0x5b3dd3:goto L5b3dd3;
case 0x5b3dd8:goto L5b3dd8;
case 0x5b3dde:c.instructions+=1;goto B5b3dde;
case 0x5b3de8:goto L5b3de8;
case 0x5b3dea:c.instructions+=1;goto B5b3dea;
case 0x5b3def:goto L5b3def;
case 0x5b3df5:c.instructions+=4;goto B5b3df5;
case 0x5b3df8:c.instructions+=3;goto B5b3df8;
case 0x5b3dfa:c.instructions+=2;goto B5b3dfa;
case 0x5b3dfd:c.instructions+=1;goto B5b3dfd;
case 0x5b3dff:goto L5b3dff;
case 0x5b3e04:c.instructions+=1;goto B5b3e04;
case 0x5b3e06:goto L5b3e06;
case 0x5b3e08:goto L5b3e08;
case 0x5b3e0e:c.instructions+=4;goto B5b3e0e;
case 0x5b3e11:c.instructions+=3;goto B5b3e11;
case 0x5b3e13:c.instructions+=2;goto B5b3e13;
case 0x5b3e16:c.instructions+=1;goto B5b3e16;
case 0x5b3e18:goto L5b3e18;
case 0x5b3e1d:c.instructions+=4;goto B5b3e1d;
case 0x5b3e20:c.instructions+=3;goto B5b3e20;
case 0x5b3e27:c.instructions+=2;goto B5b3e27;
case 0x5b3e28:c.instructions+=1;goto B5b3e28;
case 0x5b3e29:goto L5b3e29;
case 0x5b3e2b:c.instructions+=4;goto B5b3e2b;
case 0x5b3e2e:c.instructions+=3;goto B5b3e2e;
case 0x5b3e34:c.instructions+=2;goto B5b3e34;
case 0x5b3e35:c.instructions+=1;goto B5b3e35;
case 0x5b3e40:goto L5b3e40;
case 0x5b3e41:c.instructions+=9;goto B5b3e41;
case 0x5b3e42:c.instructions+=8;goto B5b3e42;
case 0x5b3e46:c.instructions+=7;goto B5b3e46;
case 0x5b3e47:c.instructions+=6;goto B5b3e47;
case 0x5b3e48:c.instructions+=5;goto B5b3e48;
case 0x5b3e4c:c.instructions+=4;goto B5b3e4c;
case 0x5b3e4f:c.instructions+=3;goto B5b3e4f;
case 0x5b3e51:c.instructions+=2;goto B5b3e51;
case 0x5b3e59:c.instructions+=1;goto B5b3e59;
case 0x5b3e5b:goto L5b3e5b;
case 0x5b3e5f:c.instructions+=1;goto B5b3e5f;
case 0x5b3e61:goto L5b3e61;
case 0x5b3e63:goto L5b3e63;
case 0x5b3e6a:c.instructions+=1;goto B5b3e6a;
case 0x5b3e6c:goto L5b3e6c;
case 0x5b3e6f:c.instructions+=1;goto B5b3e6f;
case 0x5b3e71:goto L5b3e71;
case 0x5b3e78:goto L5b3e78;
case 0x5b3e7c:goto L5b3e7c;
case 0x5b3e7e:c.instructions+=8;goto B5b3e7e;
case 0x5b3e7f:c.instructions+=7;goto B5b3e7f;
case 0x5b3e83:c.instructions+=6;goto B5b3e83;
case 0x5b3e84:c.instructions+=5;goto B5b3e84;
case 0x5b3e88:c.instructions+=4;goto B5b3e88;
case 0x5b3e89:c.instructions+=3;goto B5b3e89;
case 0x5b3e8a:c.instructions+=2;goto B5b3e8a;
case 0x5b3e8c:c.instructions+=1;goto B5b3e8c;
case 0x5b3e91:goto L5b3e91;
case 0x5b3e92:c.instructions+=3;goto B5b3e92;
case 0x5b3e93:c.instructions+=2;goto B5b3e93;
case 0x5b3e96:c.instructions+=1;goto B5b3e96;
case 0x5b3e9b:goto L5b3e9b;
case 0x5b3e9f:c.instructions+=7;goto B5b3e9f;
case 0x5b3ea3:c.instructions+=6;goto B5b3ea3;
case 0x5b3ea7:c.instructions+=5;goto B5b3ea7;
case 0x5b3ea9:c.instructions+=4;goto B5b3ea9;
case 0x5b3eab:c.instructions+=3;goto B5b3eab;
case 0x5b3eaf:c.instructions+=2;goto B5b3eaf;
case 0x5b3eb3:c.instructions+=1;goto B5b3eb3;
case 0x5b3eb5:goto L5b3eb5;
case 0x5b3eb9:c.instructions+=5;goto B5b3eb9;
case 0x5b3ebb:c.instructions+=4;goto B5b3ebb;
case 0x5b3ebc:c.instructions+=3;goto B5b3ebc;
case 0x5b3ebd:c.instructions+=2;goto B5b3ebd;
case 0x5b3ebf:c.instructions+=1;goto B5b3ebf;
case 0x5b3ec4:goto L5b3ec4;
case 0x5b3ec5:c.instructions+=4;goto B5b3ec5;
case 0x5b3ec6:c.instructions+=3;goto B5b3ec6;
case 0x5b3ec7:c.instructions+=2;goto B5b3ec7;
case 0x5b3ec8:c.instructions+=1;goto B5b3ec8;
case 0x5b3ecb:goto L5b3ecb;
case 0x5b3ecf:c.instructions+=5;goto B5b3ecf;
case 0x5b3ed0:c.instructions+=4;goto B5b3ed0;
case 0x5b3ed1:c.instructions+=3;goto B5b3ed1;
case 0x5b3ed2:c.instructions+=2;goto B5b3ed2;
case 0x5b3ed3:c.instructions+=1;goto B5b3ed3;
case 0x5b3ee0:goto L5b3ee0;
case 0x5b3ee1:c.instructions+=9;goto B5b3ee1;
case 0x5b3ee2:c.instructions+=8;goto B5b3ee2;
case 0x5b3ee6:c.instructions+=7;goto B5b3ee6;
case 0x5b3ee7:c.instructions+=6;goto B5b3ee7;
case 0x5b3ee8:c.instructions+=5;goto B5b3ee8;
case 0x5b3eec:c.instructions+=4;goto B5b3eec;
case 0x5b3eef:c.instructions+=3;goto B5b3eef;
case 0x5b3ef1:c.instructions+=2;goto B5b3ef1;
case 0x5b3ef9:c.instructions+=1;goto B5b3ef9;
case 0x5b3efb:goto L5b3efb;
case 0x5b3eff:c.instructions+=1;goto B5b3eff;
case 0x5b3f01:goto L5b3f01;
case 0x5b3f03:goto L5b3f03;
case 0x5b3f0a:c.instructions+=1;goto B5b3f0a;
case 0x5b3f0c:goto L5b3f0c;
case 0x5b3f0f:c.instructions+=1;goto B5b3f0f;
case 0x5b3f11:goto L5b3f11;
case 0x5b3f18:goto L5b3f18;
case 0x5b3f1c:goto L5b3f1c;
case 0x5b3f1e:c.instructions+=8;goto B5b3f1e;
case 0x5b3f1f:c.instructions+=7;goto B5b3f1f;
case 0x5b3f23:c.instructions+=6;goto B5b3f23;
case 0x5b3f24:c.instructions+=5;goto B5b3f24;
case 0x5b3f28:c.instructions+=4;goto B5b3f28;
case 0x5b3f29:c.instructions+=3;goto B5b3f29;
case 0x5b3f2a:c.instructions+=2;goto B5b3f2a;
case 0x5b3f2c:c.instructions+=1;goto B5b3f2c;
case 0x5b3f31:goto L5b3f31;
case 0x5b3f35:c.instructions+=4;goto B5b3f35;
case 0x5b3f39:c.instructions+=3;goto B5b3f39;
case 0x5b3f3b:c.instructions+=2;goto B5b3f3b;
case 0x5b3f3e:c.instructions+=1;goto B5b3f3e;
case 0x5b3f40:goto L5b3f40;
case 0x5b3f44:c.instructions+=1;goto B5b3f44;
case 0x5b3f46:goto L5b3f46;
case 0x5b3f4a:goto L5b3f4a;
case 0x5b3f4e:c.instructions+=4;goto B5b3f4e;
case 0x5b3f50:c.instructions+=3;goto B5b3f50;
case 0x5b3f52:c.instructions+=2;goto B5b3f52;
case 0x5b3f55:c.instructions+=1;goto B5b3f55;
case 0x5b3f57:goto L5b3f57;
case 0x5b3f5b:c.instructions+=3;goto B5b3f5b;
case 0x5b3f5d:c.instructions+=2;goto B5b3f5d;
case 0x5b3f61:c.instructions+=1;goto B5b3f61;
case 0x5b3f63:goto L5b3f63;
case 0x5b3f67:goto L5b3f67;
case 0x5b3f6b:c.instructions+=10;goto B5b3f6b;
case 0x5b3f6c:c.instructions+=9;goto B5b3f6c;
case 0x5b3f70:c.instructions+=8;goto B5b3f70;
case 0x5b3f71:c.instructions+=7;goto B5b3f71;
case 0x5b3f75:c.instructions+=6;goto B5b3f75;
case 0x5b3f76:c.instructions+=5;goto B5b3f76;
case 0x5b3f7a:c.instructions+=4;goto B5b3f7a;
case 0x5b3f7d:c.instructions+=3;goto B5b3f7d;
case 0x5b3f7f:c.instructions+=2;goto B5b3f7f;
case 0x5b3f82:c.instructions+=1;goto B5b3f82;
case 0x5b3f87:goto L5b3f87;
case 0x5b3f8b:c.instructions+=5;goto B5b3f8b;
case 0x5b3f8c:c.instructions+=4;goto B5b3f8c;
case 0x5b3f8d:c.instructions+=3;goto B5b3f8d;
case 0x5b3f8e:c.instructions+=2;goto B5b3f8e;
case 0x5b3f8f:c.instructions+=1;goto B5b3f8f;
case 0x5b3fa0:goto L5b3fa0;
case 0x5b3fa3:c.instructions+=5;goto B5b3fa3;
case 0x5b3fa4:c.instructions+=4;goto B5b3fa4;
case 0x5b3fa6:c.instructions+=3;goto B5b3fa6;
case 0x5b3fac:c.instructions+=2;goto B5b3fac;
case 0x5b3fae:c.instructions+=1;goto B5b3fae;
case 0x5b3fb0:goto L5b3fb0;
case 0x5b3fb2:c.instructions+=8;goto B5b3fb2;
case 0x5b3fb5:c.instructions+=7;goto B5b3fb5;
case 0x5b3fbb:c.instructions+=6;goto B5b3fbb;
case 0x5b3fbe:c.instructions+=5;goto B5b3fbe;
case 0x5b3fbf:c.instructions+=4;goto B5b3fbf;
case 0x5b3fc4:c.instructions+=3;goto B5b3fc4;
case 0x5b3fc5:c.instructions+=2;goto B5b3fc5;
case 0x5b3fcc:c.instructions+=1;goto B5b3fcc;
case 0x5b3fd1:goto L5b3fd1;
case 0x5b3fd7:c.instructions+=8;goto B5b3fd7;
case 0x5b3fd8:c.instructions+=7;goto B5b3fd8;
case 0x5b3fd9:c.instructions+=6;goto B5b3fd9;
case 0x5b3fdd:c.instructions+=5;goto B5b3fdd;
case 0x5b3fde:c.instructions+=4;goto B5b3fde;
case 0x5b3fe1:c.instructions+=3;goto B5b3fe1;
case 0x5b3fe4:c.instructions+=2;goto B5b3fe4;
case 0x5b3fea:c.instructions+=1;goto B5b3fea;
case 0x5b3ff0:goto L5b3ff0;
case 0x5b3ff7:c.instructions+=1;goto B5b3ff7;
case 0x5b3ffe:goto L5b3ffe;
default:missing_instruction(c.pc);}
B5b3001:L5b3001:{c.instructions+=1;NFSU2_TR(0x5b3001);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b3019;}}
}
B5b3003:L5b3003:{c.instructions+=5;NFSU2_TR(0x5b3003);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3007:{NFSU2_TR(0x5b3007);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b300b:{NFSU2_TR(0x5b300b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b300c:{NFSU2_TR(0x5b300c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b300d:{NFSU2_TR(0x5b300d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3012ull));
TAIL_STATIC(0x401050u,401);
}
B5b3012:L5b3012:{c.instructions+=2;NFSU2_TR(0x5b3012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b3015:{NFSU2_TR(0x5b3015);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3019:L5b3019:{c.instructions+=5;NFSU2_TR(0x5b3019);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b301d:{NFSU2_TR(0x5b301d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3021:{NFSU2_TR(0x5b3021);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3023:{NFSU2_TR(0x5b3023);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b3026:{NFSU2_TR(0x5b3026);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b303e;}}
}
B5b3028:L5b3028:{c.instructions+=6;NFSU2_TR(0x5b3028);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b302c:{NFSU2_TR(0x5b302c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b302d:{NFSU2_TR(0x5b302d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b302e:{NFSU2_TR(0x5b302e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b302f:{NFSU2_TR(0x5b302f);
__builtin_memmove((R+4),(R+20),4);
}
B5b3031:{NFSU2_TR(0x5b3031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3036ull));
TAIL_STATIC(0x5b2ed0u,5b2);
}
B5b3036:L5b3036:{c.instructions+=2;NFSU2_TR(0x5b3036);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b303a:{NFSU2_TR(0x5b303a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b303e:L5b303e:{c.instructions+=10;NFSU2_TR(0x5b303e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b303f:{NFSU2_TR(0x5b303f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3043:{NFSU2_TR(0x5b3043);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b3047:{NFSU2_TR(0x5b3047);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+12)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b304b:{NFSU2_TR(0x5b304b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b304c:{NFSU2_TR(0x5b304c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3050:{NFSU2_TR(0x5b3050);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b3051:{NFSU2_TR(0x5b3051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3052:{NFSU2_TR(0x5b3052);
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
B5b3055:{NFSU2_TR(0x5b3055);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3060:L5b3060:{c.instructions+=9;NFSU2_TR(0x5b3060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5b3063:{NFSU2_TR(0x5b3063);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3064:{NFSU2_TR(0x5b3064);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3065:{NFSU2_TR(0x5b3065);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3066:{NFSU2_TR(0x5b3066);
__builtin_memmove((R+24),(R+4),4);
}
B5b3068:{NFSU2_TR(0x5b3068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b306b:{NFSU2_TR(0x5b306b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b306c:{NFSU2_TR(0x5b306c);
w4(R+28,u32(0xaull));
}
B5b3071:{NFSU2_TR(0x5b3071);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3075:L5b3075:{c.instructions+=5;NFSU2_TR(0x5b3075);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3077:{NFSU2_TR(0x5b3077);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3078:{NFSU2_TR(0x5b3078);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3079:{NFSU2_TR(0x5b3079);
__builtin_memmove((R+4),(R+24),4);
}
B5b307b:{NFSU2_TR(0x5b307b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3080ull));
TAIL_STATIC(0x59b200u,59b);
}
B5b3080:L5b3080:{c.instructions+=6;NFSU2_TR(0x5b3080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b3082:{NFSU2_TR(0x5b3082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b3084:{NFSU2_TR(0x5b3084);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b3085:{NFSU2_TR(0x5b3085);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5b3088:{NFSU2_TR(0x5b3088);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b308b:{NFSU2_TR(0x5b308b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3075u);}goto L5b3075;}}
}
B5b308d:L5b308d:{c.instructions+=8;NFSU2_TR(0x5b308d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3091:{NFSU2_TR(0x5b3091);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3095:{NFSU2_TR(0x5b3095);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3099:{NFSU2_TR(0x5b3099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b309a:{NFSU2_TR(0x5b309a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b309b:{NFSU2_TR(0x5b309b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b309c:{NFSU2_TR(0x5b309c);
__builtin_memmove((R+4),(R+24),4);
}
B5b309e:{NFSU2_TR(0x5b309e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b30a3ull));
TAIL_STATIC(0x5b2ed0u,5b2);
}
B5b30a3:L5b30a3:{c.instructions+=6;NFSU2_TR(0x5b30a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b30a5:{NFSU2_TR(0x5b30a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b30a8:{NFSU2_TR(0x5b30a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b30ae:{NFSU2_TR(0x5b30ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B5b30b1:{NFSU2_TR(0x5b30b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b30b4:{NFSU2_TR(0x5b30b4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5b30c5;}}
}
B5b30b6:L5b30b6:{c.instructions+=4;NFSU2_TR(0x5b30b6);
w4(R+4,u32(0x8ull));
}
B5b30bb:{NFSU2_TR(0x5b30bb);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5b30bf:{NFSU2_TR(0x5b30bf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5b30c1:{NFSU2_TR(0x5b30c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b30c3:L5b30c3:{c.instructions+=1;NFSU2_TR(0x5b30c3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b30c5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b30c3u);}goto L5b30c3;}
}
B5b30c5:L5b30c5:{c.instructions+=3;NFSU2_TR(0x5b30c5);
w4(R+28,u32(0xaull));
}
B5b30ca:{NFSU2_TR(0x5b30ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B5b30ce:{NFSU2_TR(0x5b30ce);
__builtin_memmove((R+28),(R+28),4);
}
B5b30d0:L5b30d0:{c.instructions+=6;NFSU2_TR(0x5b30d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b30d3:{NFSU2_TR(0x5b30d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b30d5:{NFSU2_TR(0x5b30d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b30d6:{NFSU2_TR(0x5b30d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b30d7:{NFSU2_TR(0x5b30d7);
__builtin_memmove((R+4),(R+24),4);
}
B5b30d9:{NFSU2_TR(0x5b30d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b30deull));
TAIL_STATIC(0x59b200u,59b);
}
B5b30de:L5b30de:{c.instructions+=6;NFSU2_TR(0x5b30de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b30e0:{NFSU2_TR(0x5b30e0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b30e1:{NFSU2_TR(0x5b30e1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5b30e4:{NFSU2_TR(0x5b30e4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b30e7:{NFSU2_TR(0x5b30e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b30e9:{NFSU2_TR(0x5b30e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b30d0u);}goto L5b30d0;}}
}
B5b30eb:L5b30eb:{c.instructions+=6;NFSU2_TR(0x5b30eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b30ec:{NFSU2_TR(0x5b30ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b30ed:{NFSU2_TR(0x5b30ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b30ee:{NFSU2_TR(0x5b30ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b30ef:{NFSU2_TR(0x5b30ef);
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
B5b30f2:{NFSU2_TR(0x5b30f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3100:L5b3100:{c.instructions+=19;NFSU2_TR(0x5b3100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b3103:{NFSU2_TR(0x5b3103);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3104:{NFSU2_TR(0x5b3104);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3105:{NFSU2_TR(0x5b3105);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3106:{NFSU2_TR(0x5b3106);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b310a:{NFSU2_TR(0x5b310a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b310c:{NFSU2_TR(0x5b310c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b310e:{NFSU2_TR(0x5b310e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3111:{NFSU2_TR(0x5b3111);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3113:{NFSU2_TR(0x5b3113);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B5b3116:{NFSU2_TR(0x5b3116);
__builtin_memmove((R+24),(R+4),4);
}
B5b3118:{NFSU2_TR(0x5b3118);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b311c:{NFSU2_TR(0x5b311c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b311d:{NFSU2_TR(0x5b311d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3121:{NFSU2_TR(0x5b3121);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3122:{NFSU2_TR(0x5b3122);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3123:{NFSU2_TR(0x5b3123);
__builtin_memmove((R+4),(R+24),4);
}
B5b3125:{NFSU2_TR(0x5b3125);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5b3128:{NFSU2_TR(0x5b3128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b312dull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b312d:L5b312d:{c.instructions+=9;NFSU2_TR(0x5b312d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b312f:{NFSU2_TR(0x5b312f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3131:{NFSU2_TR(0x5b3131);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3135:{NFSU2_TR(0x5b3135);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3136:{NFSU2_TR(0x5b3136);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b313a:{NFSU2_TR(0x5b313a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b313b:{NFSU2_TR(0x5b313b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b313c:{NFSU2_TR(0x5b313c);
__builtin_memmove((R+4),(R+24),4);
}
B5b313e:{NFSU2_TR(0x5b313e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3143ull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b3143:L5b3143:{c.instructions+=3;NFSU2_TR(0x5b3143);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3149:{NFSU2_TR(0x5b3149);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b314c:{NFSU2_TR(0x5b314c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b3156;}}
}
B5b314e:L5b314e:{c.instructions+=3;NFSU2_TR(0x5b314e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b3150:{NFSU2_TR(0x5b3150);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3154:{NFSU2_TR(0x5b3154);
{goto L5b316f;}
}
B5b3156:L5b3156:{c.instructions+=1;NFSU2_TR(0x5b3156);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3162;}}
}
B5b3158:L5b3158:{c.instructions+=3;NFSU2_TR(0x5b3158);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b315a:{NFSU2_TR(0x5b315a);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3160:{NFSU2_TR(0x5b3160);
{goto L5b316f;}
}
B5b3162:L5b3162:{c.instructions+=2;NFSU2_TR(0x5b3162);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3165:{NFSU2_TR(0x5b3165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b316f;}}
}
B5b3167:L5b3167:{c.instructions+=2;NFSU2_TR(0x5b3167);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b3169:{NFSU2_TR(0x5b3169);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b316f:L5b316f:{c.instructions+=7;NFSU2_TR(0x5b316f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3172:{NFSU2_TR(0x5b3172);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5b3176:{NFSU2_TR(0x5b3176);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b317a:{NFSU2_TR(0x5b317a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b317e:{NFSU2_TR(0x5b317e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b3180:{NFSU2_TR(0x5b3180);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3186:{NFSU2_TR(0x5b3186);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b3190;}}
}
B5b3188:L5b3188:{c.instructions+=3;NFSU2_TR(0x5b3188);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b318a:{NFSU2_TR(0x5b318a);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b318e:{NFSU2_TR(0x5b318e);
{goto L5b31a9;}
}
B5b3190:L5b3190:{c.instructions+=1;NFSU2_TR(0x5b3190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b319c;}}
}
B5b3192:L5b3192:{c.instructions+=3;NFSU2_TR(0x5b3192);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b3194:{NFSU2_TR(0x5b3194);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b319a:{NFSU2_TR(0x5b319a);
{goto L5b31a9;}
}
B5b319c:L5b319c:{c.instructions+=2;NFSU2_TR(0x5b319c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b319f:{NFSU2_TR(0x5b319f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b31a9;}}
}
B5b31a1:L5b31a1:{c.instructions+=2;NFSU2_TR(0x5b31a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b31a3:{NFSU2_TR(0x5b31a3);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b31a9:L5b31a9:{c.instructions+=6;NFSU2_TR(0x5b31a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b31ac:{NFSU2_TR(0x5b31ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31ae:{NFSU2_TR(0x5b31ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31af:{NFSU2_TR(0x5b31af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31b0:{NFSU2_TR(0x5b31b0);
__builtin_memmove((R+4),(R+24),4);
}
B5b31b2:{NFSU2_TR(0x5b31b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b31b7ull));
TAIL_STATIC(0x59b200u,59b);
}
B5b31b7:L5b31b7:{c.instructions+=12;NFSU2_TR(0x5b31b7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b31bb:{NFSU2_TR(0x5b31bb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b31bf:{NFSU2_TR(0x5b31bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b31c3:{NFSU2_TR(0x5b31c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31c5:{NFSU2_TR(0x5b31c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b31c7:{NFSU2_TR(0x5b31c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b31ca:{NFSU2_TR(0x5b31ca);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5b31cc:{NFSU2_TR(0x5b31cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31cd:{NFSU2_TR(0x5b31cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31ce:{NFSU2_TR(0x5b31ce);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5b31d0:{NFSU2_TR(0x5b31d0);
__builtin_memmove((R+4),(R+24),4);
}
B5b31d2:{NFSU2_TR(0x5b31d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b31d7ull));
TAIL_STATIC(0x59b200u,59b);
}
B5b31d7:L5b31d7:{c.instructions+=8;NFSU2_TR(0x5b31d7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b31d9:{NFSU2_TR(0x5b31d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b31da:{NFSU2_TR(0x5b31da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b31dc:{NFSU2_TR(0x5b31dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b31dd:{NFSU2_TR(0x5b31dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b31df:{NFSU2_TR(0x5b31df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b31e0:{NFSU2_TR(0x5b31e0);
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
B5b31e3:{NFSU2_TR(0x5b31e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b31f0:L5b31f0:{c.instructions+=5;NFSU2_TR(0x5b31f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31f1:{NFSU2_TR(0x5b31f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b31f5:{NFSU2_TR(0x5b31f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b31f6:{NFSU2_TR(0x5b31f6);
__builtin_memmove((R+4),(R+24),4);
}
B5b31f8:{NFSU2_TR(0x5b31f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b31fdull));
TAIL_STATIC(0x5b1390u,5b1);
}
B5b31fd:L5b31fd:{c.instructions+=3;NFSU2_TR(0x5b31fd);
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
B5b31ff:{NFSU2_TR(0x5b31ff);
__builtin_memmove((R+28),(R+0),4);
}
B5b3201:{NFSU2_TR(0x5b3201);
if(r1(R+518)){{goto L5b320b;}}
}
B5b3203:L5b3203:{c.instructions+=4;NFSU2_TR(0x5b3203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b3205:{NFSU2_TR(0x5b3205);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3207:{NFSU2_TR(0x5b3207);
__builtin_memmove((R+4),(R+24),4);
}
B5b3209:{NFSU2_TR(0x5b3209);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b320bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5b320b:L5b320b:{c.instructions+=4;NFSU2_TR(0x5b320b);
__builtin_memmove((R+0),(R+28),4);
}
B5b320d:{NFSU2_TR(0x5b320d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b320e:{NFSU2_TR(0x5b320e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b320f:{NFSU2_TR(0x5b320f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3210:L5b3210:{c.instructions+=3;NFSU2_TR(0x5b3210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3211:{NFSU2_TR(0x5b3211);
__builtin_memmove((R+24),(R+4),4);
}
B5b3213:{NFSU2_TR(0x5b3213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3218ull));
TAIL_STATIC(0x5b19b0u,5b1);
}
B5b3218:L5b3218:{c.instructions+=2;NFSU2_TR(0x5b3218);
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
B5b321d:{NFSU2_TR(0x5b321d);
if(r1(R+518)){{goto L5b322e;}}
}
B5b321f:L5b321f:{c.instructions+=4;NFSU2_TR(0x5b321f);
__builtin_memmove((R+0),gp(0x86b374),4);
}
B5b3224:{NFSU2_TR(0x5b3224);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3225:{NFSU2_TR(0x5b3225);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3226:{NFSU2_TR(0x5b3226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b322bull));
TAIL_STATIC(0x43f920u,43f);
}
B5b322b:L5b322b:{c.instructions+=1;NFSU2_TR(0x5b322b);
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
B5b322e:L5b322e:{c.instructions+=3;NFSU2_TR(0x5b322e);
__builtin_memmove((R+0),(R+24),4);
}
B5b3230:{NFSU2_TR(0x5b3230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3231:{NFSU2_TR(0x5b3231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3240:L5b3240:{c.instructions+=17;NFSU2_TR(0x5b3240);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3242:{NFSU2_TR(0x5b3242);
u8 U[4];
w4(U+0,u32(0x77901eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3247:{NFSU2_TR(0x5b3247);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b324d:{NFSU2_TR(0x5b324d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b324e:{NFSU2_TR(0x5b324e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3255:{NFSU2_TR(0x5b3255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3256:{NFSU2_TR(0x5b3256);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b325a:{NFSU2_TR(0x5b325a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b325b:{NFSU2_TR(0x5b325b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b325c:{NFSU2_TR(0x5b325c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b325d:{NFSU2_TR(0x5b325d);
__builtin_memmove((R+24),(R+4),4);
}
B5b325f:{NFSU2_TR(0x5b325f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3265:{NFSU2_TR(0x5b3265);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3266:{NFSU2_TR(0x5b3266);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3268:{NFSU2_TR(0x5b3268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3269:{NFSU2_TR(0x5b3269);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b326d:{NFSU2_TR(0x5b326d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3272ull));
TAIL_STATIC(0x5a9ce0u,5a9);
}
B5b3272:L5b3272:{c.instructions+=15;NFSU2_TR(0x5b3272);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3278:{NFSU2_TR(0x5b3278);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b327a:{NFSU2_TR(0x5b327a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w4(U+4,u32(0x7a2350ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b3284:{NFSU2_TR(0x5b3284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b3286:{NFSU2_TR(0x5b3286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3289:{NFSU2_TR(0x5b3289);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b328d:{NFSU2_TR(0x5b328d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3293:{NFSU2_TR(0x5b3293);
u8 U[4];
w4(U+0,u32(0x7a2698ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b3299:{NFSU2_TR(0x5b3299);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
w4(U+4,u32(0x7a268cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b32a3:{NFSU2_TR(0x5b32a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b32a9:{NFSU2_TR(0x5b32a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b32af:{NFSU2_TR(0x5b32af);
__builtin_memmove((R+4),(R+28),4);
}
B5b32b1:{NFSU2_TR(0x5b32b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b32b6:{NFSU2_TR(0x5b32b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b32bc:{NFSU2_TR(0x5b32bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b32c1ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B5b32c1:L5b32c1:{c.instructions+=7;NFSU2_TR(0x5b32c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b32c5:{NFSU2_TR(0x5b32c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b32c6:{NFSU2_TR(0x5b32c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b32c7:{NFSU2_TR(0x5b32c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b32c8:{NFSU2_TR(0x5b32c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b32ce:{NFSU2_TR(0x5b32ce);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b32d3:{NFSU2_TR(0x5b32d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b32d8ull));
TAIL_STATIC(0x637db0u,637);
}
B5b32d8:L5b32d8:{c.instructions+=11;NFSU2_TR(0x5b32d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b32de:{NFSU2_TR(0x5b32de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b32e0:{NFSU2_TR(0x5b32e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b32e3:{NFSU2_TR(0x5b32e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b32e9:{NFSU2_TR(0x5b32e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b32eb:{NFSU2_TR(0x5b32eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b32ee:{NFSU2_TR(0x5b32ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b32f2:{NFSU2_TR(0x5b32f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b32f3:{NFSU2_TR(0x5b32f3);
__builtin_memmove((R+4),(R+24),4);
}
B5b32f5:{NFSU2_TR(0x5b32f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b32fa:{NFSU2_TR(0x5b32fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b32ffull));
TAIL_STATIC(0x5b1540u,5b1);
}
B5b32ff:L5b32ff:{c.instructions+=8;NFSU2_TR(0x5b32ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3303:{NFSU2_TR(0x5b3303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3304:{NFSU2_TR(0x5b3304);
__builtin_memmove((R+0),(R+24),4);
}
B5b3306:{NFSU2_TR(0x5b3306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3307:{NFSU2_TR(0x5b3307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3308:{NFSU2_TR(0x5b3308);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b330f:{NFSU2_TR(0x5b330f);
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
B5b3312:{NFSU2_TR(0x5b3312);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3320:L5b3320:{c.instructions+=6;NFSU2_TR(0x5b3320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3321:{NFSU2_TR(0x5b3321);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3322:{NFSU2_TR(0x5b3322);
__builtin_memmove((R+28),(R+4),4);
}
B5b3324:{NFSU2_TR(0x5b3324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b3326:{NFSU2_TR(0x5b3326);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b3328:{NFSU2_TR(0x5b3328);
if(r1(R+518)){{goto L5b3350;}}
}
B5b332a:L5b332a:{c.instructions+=1;NFSU2_TR(0x5b332a);
__builtin_memmove((R+12),(R+12),4);
}
B5b3330:L5b3330:{c.instructions+=6;NFSU2_TR(0x5b3330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3333:{NFSU2_TR(0x5b3333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b3335:{NFSU2_TR(0x5b3335);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b3337:{NFSU2_TR(0x5b3337);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b333a:{NFSU2_TR(0x5b333a);
__builtin_memmove((R+4),(R+24),4);
}
B5b333c:{NFSU2_TR(0x5b333c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3341ull));
TAIL_STATIC(0x5ae0e0u,5ae);
}
B5b3341:L5b3341:{c.instructions+=2;NFSU2_TR(0x5b3341);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3342:{NFSU2_TR(0x5b3342);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3347ull));
TAIL_STATIC(0x575630u,575);
}
B5b3347:L5b3347:{c.instructions+=4;NFSU2_TR(0x5b3347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b3349:{NFSU2_TR(0x5b3349);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b334c:{NFSU2_TR(0x5b334c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5b334e:{NFSU2_TR(0x5b334e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3330u);}goto L5b3330;}}
}
B5b3350:L5b3350:{c.instructions+=3;NFSU2_TR(0x5b3350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3351:{NFSU2_TR(0x5b3351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3352:{NFSU2_TR(0x5b3352);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3360:L5b3360:{c.instructions+=3;NFSU2_TR(0x5b3360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3361:{NFSU2_TR(0x5b3361);
__builtin_memmove((R+24),(R+4),4);
}
B5b3363:{NFSU2_TR(0x5b3363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3368ull));
TAIL_STATIC(0x5b22b0u,5b2);
}
B5b3368:L5b3368:{c.instructions+=2;NFSU2_TR(0x5b3368);
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
B5b336d:{NFSU2_TR(0x5b336d);
if(r1(R+518)){{goto L5b337e;}}
}
B5b336f:L5b336f:{c.instructions+=4;NFSU2_TR(0x5b336f);
__builtin_memmove((R+0),gp(0x86b0bc),4);
}
B5b3374:{NFSU2_TR(0x5b3374);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3375:{NFSU2_TR(0x5b3375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3376:{NFSU2_TR(0x5b3376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b337bull));
TAIL_STATIC(0x43f920u,43f);
}
B5b337b:L5b337b:{c.instructions+=1;NFSU2_TR(0x5b337b);
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
B5b337e:L5b337e:{c.instructions+=3;NFSU2_TR(0x5b337e);
__builtin_memmove((R+0),(R+24),4);
}
B5b3380:{NFSU2_TR(0x5b3380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3381:{NFSU2_TR(0x5b3381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3390:L5b3390:{c.instructions+=10;NFSU2_TR(0x5b3390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3391:{NFSU2_TR(0x5b3391);
__builtin_memmove((R+20),(R+16),4);
}
B5b3393:{NFSU2_TR(0x5b3393);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5b3396:{NFSU2_TR(0x5b3396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1b4ull))));
}
B5b339c:{NFSU2_TR(0x5b339c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b339d:{NFSU2_TR(0x5b339d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b339e:{NFSU2_TR(0x5b339e);
__builtin_memmove((R+24),(R+4),4);
}
B5b33a0:{NFSU2_TR(0x5b33a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33a1:{NFSU2_TR(0x5b33a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b33a5:{NFSU2_TR(0x5b33a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b33aaull));
TAIL_STATIC(0x59fb50u,59f);
}
B5b33aa:L5b33aa:{c.instructions+=2;NFSU2_TR(0x5b33aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b33ae:{NFSU2_TR(0x5b33ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b33b3ull));
TAIL_STATIC(0x59fb50u,59f);
}
B5b33b3:L5b33b3:{c.instructions+=3;NFSU2_TR(0x5b33b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b33b9:{NFSU2_TR(0x5b33b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b33bb:{NFSU2_TR(0x5b33bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b36de;}}
}
B5b33c1:L5b33c1:{c.instructions+=5;NFSU2_TR(0x5b33c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b33c7:{NFSU2_TR(0x5b33c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b33cb:{NFSU2_TR(0x5b33cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33cc:{NFSU2_TR(0x5b33cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33ce:{NFSU2_TR(0x5b33ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b33d3ull));
TAIL_STATIC(0x5aad20u,5aa);
}
B5b33d3:L5b33d3:{c.instructions+=7;NFSU2_TR(0x5b33d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5b33d6:{NFSU2_TR(0x5b33d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33d7:{NFSU2_TR(0x5b33d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b33dd:{NFSU2_TR(0x5b33dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b33e4:{NFSU2_TR(0x5b33e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33e5:{NFSU2_TR(0x5b33e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33e6:{NFSU2_TR(0x5b33e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b33ebull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b33eb:L5b33eb:{c.instructions+=6;NFSU2_TR(0x5b33eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b33f1:{NFSU2_TR(0x5b33f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b33f4:{NFSU2_TR(0x5b33f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b33f8:{NFSU2_TR(0x5b33f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33f9:{NFSU2_TR(0x5b33f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b33fb:{NFSU2_TR(0x5b33fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3400ull));
TAIL_STATIC(0x5aad20u,5aa);
}
B5b3400:L5b3400:{c.instructions+=7;NFSU2_TR(0x5b3400);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5b3403:{NFSU2_TR(0x5b3403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3404:{NFSU2_TR(0x5b3404);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b340a:{NFSU2_TR(0x5b340a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b340e:{NFSU2_TR(0x5b340e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b340f:{NFSU2_TR(0x5b340f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3410:{NFSU2_TR(0x5b3410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3415ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b3415:L5b3415:{c.instructions+=28;NFSU2_TR(0x5b3415);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3419:{NFSU2_TR(0x5b3419);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b3420:{NFSU2_TR(0x5b3420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b3423:{NFSU2_TR(0x5b3423);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3429:{NFSU2_TR(0x5b3429);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3430:{NFSU2_TR(0x5b3430);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3434:{NFSU2_TR(0x5b3434);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b343b:{NFSU2_TR(0x5b343b);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3442:{NFSU2_TR(0x5b3442);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3446:{NFSU2_TR(0x5b3446);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b344d:{NFSU2_TR(0x5b344d);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3454:{NFSU2_TR(0x5b3454);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b345b:{NFSU2_TR(0x5b345b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b345d:{NFSU2_TR(0x5b345d);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3464:{NFSU2_TR(0x5b3464);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b3466:{NFSU2_TR(0x5b3466);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b346d:{NFSU2_TR(0x5b346d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b346f:{NFSU2_TR(0x5b346f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3476:{NFSU2_TR(0x5b3476);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b347d:{NFSU2_TR(0x5b347d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b347f:{NFSU2_TR(0x5b347f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3483:{NFSU2_TR(0x5b3483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3489:{NFSU2_TR(0x5b3489);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b348d:{NFSU2_TR(0x5b348d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3491:{NFSU2_TR(0x5b3491);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3494:{NFSU2_TR(0x5b3494);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b3495:{NFSU2_TR(0x5b3495);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5b3498:{NFSU2_TR(0x5b3498);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b352a;}}
}
B5b349e:L5b349e:{c.instructions+=1;NFSU2_TR(0x5b349e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b3cbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b34a5:L5b34a5:{c.instructions+=9;NFSU2_TR(0x5b34a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34a9:{NFSU2_TR(0x5b34a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34aa:{NFSU2_TR(0x5b34aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34ab:{NFSU2_TR(0x5b34ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34ac:{NFSU2_TR(0x5b34ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b34b0:{NFSU2_TR(0x5b34b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34b1:{NFSU2_TR(0x5b34b1);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34b8:{NFSU2_TR(0x5b34b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34b9:{NFSU2_TR(0x5b34b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b34beull));
TAIL_STATIC(0x5afba0u,5af);
}
B5b34be:L5b34be:{c.instructions+=1;NFSU2_TR(0x5b34be);
{goto L5b352a;}
}
B5b34c0:L5b34c0:{c.instructions+=9;NFSU2_TR(0x5b34c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34c4:{NFSU2_TR(0x5b34c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34c5:{NFSU2_TR(0x5b34c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34c6:{NFSU2_TR(0x5b34c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34c7:{NFSU2_TR(0x5b34c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b34cb:{NFSU2_TR(0x5b34cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34cc:{NFSU2_TR(0x5b34cc);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34d3:{NFSU2_TR(0x5b34d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34d4:{NFSU2_TR(0x5b34d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b34d9ull));
TAIL_STATIC(0x5a2360u,5a2);
}
B5b34d9:L5b34d9:{c.instructions+=1;NFSU2_TR(0x5b34d9);
{goto L5b352a;}
}
B5b34db:L5b34db:{c.instructions+=9;NFSU2_TR(0x5b34db);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34df:{NFSU2_TR(0x5b34df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34e0:{NFSU2_TR(0x5b34e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34e1:{NFSU2_TR(0x5b34e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34e2:{NFSU2_TR(0x5b34e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b34e6:{NFSU2_TR(0x5b34e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34e7:{NFSU2_TR(0x5b34e7);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34ee:{NFSU2_TR(0x5b34ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34ef:{NFSU2_TR(0x5b34ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b34f4ull));
TAIL_STATIC(0x5a2280u,5a2);
}
B5b34f4:L5b34f4:{c.instructions+=1;NFSU2_TR(0x5b34f4);
{goto L5b352a;}
}
B5b34f6:L5b34f6:{c.instructions+=9;NFSU2_TR(0x5b34f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b34fa:{NFSU2_TR(0x5b34fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34fb:{NFSU2_TR(0x5b34fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34fc:{NFSU2_TR(0x5b34fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b34fd:{NFSU2_TR(0x5b34fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3501:{NFSU2_TR(0x5b3501);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3502:{NFSU2_TR(0x5b3502);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3509:{NFSU2_TR(0x5b3509);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b350a:{NFSU2_TR(0x5b350a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b350full));
TAIL_STATIC(0x5a2060u,5a2);
}
B5b350f:L5b350f:{c.instructions+=1;NFSU2_TR(0x5b350f);
{goto L5b352a;}
}
B5b3511:L5b3511:{c.instructions+=9;NFSU2_TR(0x5b3511);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3515:{NFSU2_TR(0x5b3515);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3516:{NFSU2_TR(0x5b3516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3517:{NFSU2_TR(0x5b3517);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3518:{NFSU2_TR(0x5b3518);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b351c:{NFSU2_TR(0x5b351c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b351d:{NFSU2_TR(0x5b351d);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3524:{NFSU2_TR(0x5b3524);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3525:{NFSU2_TR(0x5b3525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b352aull));
TAIL_STATIC(0x5a23d0u,5a2);
}
B5b352a:L5b352a:{c.instructions+=6;NFSU2_TR(0x5b352a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3530:{NFSU2_TR(0x5b3530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3533:{NFSU2_TR(0x5b3533);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b3534:{NFSU2_TR(0x5b3534);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5b3537:{NFSU2_TR(0x5b3537);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b353d:{NFSU2_TR(0x5b353d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b35bc;}}
}
B5b353f:L5b353f:{c.instructions+=1;NFSU2_TR(0x5b353f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b3cd0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b3546:L5b3546:{c.instructions+=9;NFSU2_TR(0x5b3546);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b354a:{NFSU2_TR(0x5b354a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b354b:{NFSU2_TR(0x5b354b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b354c:{NFSU2_TR(0x5b354c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b354d:{NFSU2_TR(0x5b354d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3551:{NFSU2_TR(0x5b3551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3552:{NFSU2_TR(0x5b3552);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3556:{NFSU2_TR(0x5b3556);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3557:{NFSU2_TR(0x5b3557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b355cull));
TAIL_STATIC(0x5afba0u,5af);
}
B5b355c:L5b355c:{c.instructions+=1;NFSU2_TR(0x5b355c);
{goto L5b35bc;}
}
B5b355e:L5b355e:{c.instructions+=9;NFSU2_TR(0x5b355e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3562:{NFSU2_TR(0x5b3562);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3563:{NFSU2_TR(0x5b3563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3564:{NFSU2_TR(0x5b3564);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3565:{NFSU2_TR(0x5b3565);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3569:{NFSU2_TR(0x5b3569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b356a:{NFSU2_TR(0x5b356a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b356e:{NFSU2_TR(0x5b356e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b356f:{NFSU2_TR(0x5b356f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3574ull));
TAIL_STATIC(0x5a2360u,5a2);
}
B5b3574:L5b3574:{c.instructions+=1;NFSU2_TR(0x5b3574);
{goto L5b35bc;}
}
B5b3576:L5b3576:{c.instructions+=9;NFSU2_TR(0x5b3576);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b357a:{NFSU2_TR(0x5b357a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b357b:{NFSU2_TR(0x5b357b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b357c:{NFSU2_TR(0x5b357c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b357d:{NFSU2_TR(0x5b357d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3581:{NFSU2_TR(0x5b3581);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3582:{NFSU2_TR(0x5b3582);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3586:{NFSU2_TR(0x5b3586);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3587:{NFSU2_TR(0x5b3587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b358cull));
TAIL_STATIC(0x5a2280u,5a2);
}
B5b358c:L5b358c:{c.instructions+=1;NFSU2_TR(0x5b358c);
{goto L5b35bc;}
}
B5b358e:L5b358e:{c.instructions+=9;NFSU2_TR(0x5b358e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3592:{NFSU2_TR(0x5b3592);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3593:{NFSU2_TR(0x5b3593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3594:{NFSU2_TR(0x5b3594);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3595:{NFSU2_TR(0x5b3595);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3599:{NFSU2_TR(0x5b3599);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b359a:{NFSU2_TR(0x5b359a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b359e:{NFSU2_TR(0x5b359e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b359f:{NFSU2_TR(0x5b359f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b35a4ull));
TAIL_STATIC(0x5a2060u,5a2);
}
B5b35a4:L5b35a4:{c.instructions+=1;NFSU2_TR(0x5b35a4);
{goto L5b35bc;}
}
B5b35a6:L5b35a6:{c.instructions+=9;NFSU2_TR(0x5b35a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b35aa:{NFSU2_TR(0x5b35aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b35ab:{NFSU2_TR(0x5b35ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b35ac:{NFSU2_TR(0x5b35ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b35ad:{NFSU2_TR(0x5b35ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b35b1:{NFSU2_TR(0x5b35b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b35b2:{NFSU2_TR(0x5b35b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b35b6:{NFSU2_TR(0x5b35b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b35b7:{NFSU2_TR(0x5b35b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b35bcull));
TAIL_STATIC(0x5a23d0u,5a2);
}
B5b35bc:L5b35bc:{c.instructions+=58;NFSU2_TR(0x5b35bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b35c3:{NFSU2_TR(0x5b35c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b35ca:{NFSU2_TR(0x5b35ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b35d1:{NFSU2_TR(0x5b35d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b35d4:{NFSU2_TR(0x5b35d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b35d8:{NFSU2_TR(0x5b35d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b35db:{NFSU2_TR(0x5b35db);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b35df:{NFSU2_TR(0x5b35df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b35e2:{NFSU2_TR(0x5b35e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b35e6:{NFSU2_TR(0x5b35e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b35ec:{NFSU2_TR(0x5b35ec);
u8 U[6];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5b35f1:{NFSU2_TR(0x5b35f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b35f7:{NFSU2_TR(0x5b35f7);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5b35fc:{NFSU2_TR(0x5b35fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3602:{NFSU2_TR(0x5b3602);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3608:{NFSU2_TR(0x5b3608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b360e:{NFSU2_TR(0x5b360e);
w4(R+4,u32(0x1ull));
}
B5b3613:{NFSU2_TR(0x5b3613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3619:{NFSU2_TR(0x5b3619);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b361f:{NFSU2_TR(0x5b361f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3622:{NFSU2_TR(0x5b3622);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3625:{NFSU2_TR(0x5b3625);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3628:{NFSU2_TR(0x5b3628);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b362e:{NFSU2_TR(0x5b362e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3630:{NFSU2_TR(0x5b3630);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3636:{NFSU2_TR(0x5b3636);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b363c:{NFSU2_TR(0x5b363c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3642:{NFSU2_TR(0x5b3642);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3648:{NFSU2_TR(0x5b3648);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b364e:{NFSU2_TR(0x5b364e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3654:{NFSU2_TR(0x5b3654);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3656:{NFSU2_TR(0x5b3656);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b365c:{NFSU2_TR(0x5b365c);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3662:{NFSU2_TR(0x5b3662);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3668:{NFSU2_TR(0x5b3668);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b366e:{NFSU2_TR(0x5b366e);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3674:{NFSU2_TR(0x5b3674);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b367a:{NFSU2_TR(0x5b367a);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3680:{NFSU2_TR(0x5b3680);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b3686:{NFSU2_TR(0x5b3686);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b368d:{NFSU2_TR(0x5b368d);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3694:{NFSU2_TR(0x5b3694);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3696:{NFSU2_TR(0x5b3696);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b369a:{NFSU2_TR(0x5b369a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b369e:{NFSU2_TR(0x5b369e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b36a2:{NFSU2_TR(0x5b36a2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b36a6:{NFSU2_TR(0x5b36a6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b36aa:{NFSU2_TR(0x5b36aa);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b36ae:{NFSU2_TR(0x5b36ae);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b36b2:{NFSU2_TR(0x5b36b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b36b4:{NFSU2_TR(0x5b36b4);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b36b8:{NFSU2_TR(0x5b36b8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b36bc:{NFSU2_TR(0x5b36bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5b36be:{NFSU2_TR(0x5b36be);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b36c2:{NFSU2_TR(0x5b36c2);
{u32 ea_=u32(u32(8001836u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b36c8:{NFSU2_TR(0x5b36c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b36ca:{NFSU2_TR(0x5b36ca);
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
B5b36cd:{NFSU2_TR(0x5b36cd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b3c7b;}}
}
B5b36d3:L5b36d3:{c.instructions+=2;NFSU2_TR(0x5b36d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b36d9:{NFSU2_TR(0x5b36d9);
{goto L5b38c0;}
}
B5b36de:L5b36de:{c.instructions+=4;NFSU2_TR(0x5b36de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b36e4:{NFSU2_TR(0x5b36e4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b36e6:{NFSU2_TR(0x5b36e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b36e8:{NFSU2_TR(0x5b36e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b3773;}}
}
B5b36ee:L5b36ee:{c.instructions+=4;NFSU2_TR(0x5b36ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b36f4:{NFSU2_TR(0x5b36f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b36f7:{NFSU2_TR(0x5b36f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b36fb:{NFSU2_TR(0x5b36fb);
{goto L5b3700;}
}
B5b3700:L5b3700:{c.instructions+=7;NFSU2_TR(0x5b3700);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3704:{NFSU2_TR(0x5b3704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b3706:{NFSU2_TR(0x5b3706);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b370a:{NFSU2_TR(0x5b370a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b370b:{NFSU2_TR(0x5b370b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b370c:{NFSU2_TR(0x5b370c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3712:{NFSU2_TR(0x5b3712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3717ull));
TAIL_STATIC(0x5aad20u,5aa);
}
B5b3717:L5b3717:{c.instructions+=3;NFSU2_TR(0x5b3717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b371d:{NFSU2_TR(0x5b371d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b3721:{NFSU2_TR(0x5b3721);
if(r1(R+518)){{goto L5b373d;}}
}
B5b3723:L5b3723:{c.instructions+=6;NFSU2_TR(0x5b3723);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b372a:{NFSU2_TR(0x5b372a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b372b:{NFSU2_TR(0x5b372b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3731:{NFSU2_TR(0x5b3731);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3732:{NFSU2_TR(0x5b3732);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3733:{NFSU2_TR(0x5b3733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3738ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b3738:L5b3738:{c.instructions+=2;NFSU2_TR(0x5b3738);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b373b:{NFSU2_TR(0x5b373b);
{goto L5b375a;}
}
B5b373d:L5b373d:{c.instructions+=6;NFSU2_TR(0x5b373d);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3744:{NFSU2_TR(0x5b3744);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b374b:{NFSU2_TR(0x5b374b);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3752:{NFSU2_TR(0x5b3752);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b3754:{NFSU2_TR(0x5b3754);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3757:{NFSU2_TR(0x5b3757);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b375a:L5b375a:{c.instructions+=8;NFSU2_TR(0x5b375a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b375e:{NFSU2_TR(0x5b375e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3764:{NFSU2_TR(0x5b3764);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b3765:{NFSU2_TR(0x5b3765);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5b3768:{NFSU2_TR(0x5b3768);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5b376b:{NFSU2_TR(0x5b376b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b376d:{NFSU2_TR(0x5b376d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3771:{NFSU2_TR(0x5b3771);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3700u);}goto L5b3700;}}
}
B5b3773:L5b3773:{c.instructions+=4;NFSU2_TR(0x5b3773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3779:{NFSU2_TR(0x5b3779);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b377b:{NFSU2_TR(0x5b377b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b3783:{NFSU2_TR(0x5b3783);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b389e;}}
}
B5b3789:L5b3789:{c.instructions+=2;NFSU2_TR(0x5b3789);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b378f:{NFSU2_TR(0x5b378f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3795:L5b3795:{c.instructions+=6;NFSU2_TR(0x5b3795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b379b:{NFSU2_TR(0x5b379b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b379e:{NFSU2_TR(0x5b379e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5b37a0:{NFSU2_TR(0x5b37a0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5b37a1:{NFSU2_TR(0x5b37a1);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5b37a4:{NFSU2_TR(0x5b37a4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b384a;}}
}
B5b37aa:L5b37aa:{c.instructions+=1;NFSU2_TR(0x5b37aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b3ce4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b37b1:L5b37b1:{c.instructions+=4;NFSU2_TR(0x5b37b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b37b5:{NFSU2_TR(0x5b37b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b37b6:{NFSU2_TR(0x5b37b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b37b7:{NFSU2_TR(0x5b37b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b37bcull));
TAIL_STATIC(0x5a1970u,5a1);
}
B5b37bc:L5b37bc:{c.instructions+=1;NFSU2_TR(0x5b37bc);
{goto L5b384a;}
}
B5b37c1:L5b37c1:{c.instructions+=11;NFSU2_TR(0x5b37c1);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b37c4:{NFSU2_TR(0x5b37c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b37c7:{NFSU2_TR(0x5b37c7);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b37ca:{NFSU2_TR(0x5b37ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b37ce:{NFSU2_TR(0x5b37ce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b37d0:{NFSU2_TR(0x5b37d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b37d8:{NFSU2_TR(0x5b37d8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b37dc:{NFSU2_TR(0x5b37dc);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b37e0:{NFSU2_TR(0x5b37e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5b37e4:{NFSU2_TR(0x5b37e4);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b37e9:{NFSU2_TR(0x5b37e9);
{goto L5b384a;}
}
B5b37eb:L5b37eb:{c.instructions+=4;NFSU2_TR(0x5b37eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b37ef:{NFSU2_TR(0x5b37ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b37f0:{NFSU2_TR(0x5b37f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b37f1:{NFSU2_TR(0x5b37f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b37f6ull));
TAIL_STATIC(0x5987d0u,598);
}
B5b37f6:L5b37f6:{c.instructions+=1;NFSU2_TR(0x5b37f6);
{goto L5b384a;}
}
B5b37f8:L5b37f8:{c.instructions+=19;NFSU2_TR(0x5b37f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5b37fb:{NFSU2_TR(0x5b37fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b37fe:{NFSU2_TR(0x5b37fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5b3802:{NFSU2_TR(0x5b3802);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5b3806:{NFSU2_TR(0x5b3806);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b380b:{NFSU2_TR(0x5b380b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5b380f:{NFSU2_TR(0x5b380f);
u8 U[6];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b3814:{NFSU2_TR(0x5b3814);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5b3818:{NFSU2_TR(0x5b3818);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b381d:{NFSU2_TR(0x5b381d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5b3821:{NFSU2_TR(0x5b3821);
u8 U[6];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b3826:{NFSU2_TR(0x5b3826);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3829:{NFSU2_TR(0x5b3829);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b382c:{NFSU2_TR(0x5b382c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b382f:{NFSU2_TR(0x5b382f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3831:{NFSU2_TR(0x5b3831);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3835:{NFSU2_TR(0x5b3835);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3839:{NFSU2_TR(0x5b3839);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b383d:{NFSU2_TR(0x5b383d);
{goto L5b384a;}
}
B5b383f:L5b383f:{c.instructions+=4;NFSU2_TR(0x5b383f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3843:{NFSU2_TR(0x5b3843);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3844:{NFSU2_TR(0x5b3844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3845:{NFSU2_TR(0x5b3845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b384aull));
TAIL_STATIC(0x5a2780u,5a2);
}
B5b384a:L5b384a:{c.instructions+=3;NFSU2_TR(0x5b384a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3850:{NFSU2_TR(0x5b3850);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b3854:{NFSU2_TR(0x5b3854);
if(r1(R+518)){{goto L5b386d;}}
}
B5b3856:L5b3856:{c.instructions+=6;NFSU2_TR(0x5b3856);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b385a:{NFSU2_TR(0x5b385a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b385b:{NFSU2_TR(0x5b385b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3861:{NFSU2_TR(0x5b3861);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3862:{NFSU2_TR(0x5b3862);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3863:{NFSU2_TR(0x5b3863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3868ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b3868:L5b3868:{c.instructions+=2;NFSU2_TR(0x5b3868);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b386b:{NFSU2_TR(0x5b386b);
{goto L5b3881;}
}
B5b386d:L5b386d:{c.instructions+=6;NFSU2_TR(0x5b386d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3871:{NFSU2_TR(0x5b3871);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3875:{NFSU2_TR(0x5b3875);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3879:{NFSU2_TR(0x5b3879);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5b387b:{NFSU2_TR(0x5b387b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b387e:{NFSU2_TR(0x5b387e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3881:L5b3881:{c.instructions+=8;NFSU2_TR(0x5b3881);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3885:{NFSU2_TR(0x5b3885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b388b:{NFSU2_TR(0x5b388b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b388c:{NFSU2_TR(0x5b388c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b388f:{NFSU2_TR(0x5b388f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5b3892:{NFSU2_TR(0x5b3892);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b3894:{NFSU2_TR(0x5b3894);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3898:{NFSU2_TR(0x5b3898);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3795u);}goto L5b3795;}}
}
B5b389e:L5b389e:{c.instructions+=4;NFSU2_TR(0x5b389e);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b38a2:{NFSU2_TR(0x5b38a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b38a5:{NFSU2_TR(0x5b38a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b38a6:{NFSU2_TR(0x5b38a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b38abull));
TAIL_STATIC(0x595040u,595);
}
B5b38ab:L5b38ab:{c.instructions+=5;NFSU2_TR(0x5b38ab);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b38af:{NFSU2_TR(0x5b38af);
{u32 ea_=u32(u32(8001836u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b38b5:{NFSU2_TR(0x5b38b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b38b7:{NFSU2_TR(0x5b38b7);
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
B5b38ba:{NFSU2_TR(0x5b38ba);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b3c7b;}}
}
B5b38c0:L5b38c0:{c.instructions+=6;NFSU2_TR(0x5b38c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b38c4:{NFSU2_TR(0x5b38c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b38c7:{NFSU2_TR(0x5b38c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b38cb:{NFSU2_TR(0x5b38cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b38cc:{NFSU2_TR(0x5b38cc);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b38d3:{NFSU2_TR(0x5b38d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b38d8ull));
TAIL_STATIC(0x598130u,598);
}
B5b38d8:L5b38d8:{c.instructions+=2;NFSU2_TR(0x5b38d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b38de:{NFSU2_TR(0x5b38de);
__builtin_memmove((R+28),(R+28),4);
}
B5b38e0:L5b38e0:{c.instructions+=17;NFSU2_TR(0x5b38e0);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b38e4:{NFSU2_TR(0x5b38e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b38ea:{NFSU2_TR(0x5b38ea);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b38ec:{NFSU2_TR(0x5b38ec);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b38f0:{NFSU2_TR(0x5b38f0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b38f2:{NFSU2_TR(0x5b38f2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b38f6:{NFSU2_TR(0x5b38f6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5b38f8:{NFSU2_TR(0x5b38f8);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b38ff:{NFSU2_TR(0x5b38ff);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3906:{NFSU2_TR(0x5b3906);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3908:{NFSU2_TR(0x5b3908);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b390c:{NFSU2_TR(0x5b390c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3910:{NFSU2_TR(0x5b3910);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3914:{NFSU2_TR(0x5b3914);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3917:{NFSU2_TR(0x5b3917);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b3918:{NFSU2_TR(0x5b3918);
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
B5b391b:{NFSU2_TR(0x5b391b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b3a3e;}}
}
B5b3921:L5b3921:{c.instructions+=1;NFSU2_TR(0x5b3921);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b3cf8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b3928:L5b3928:{c.instructions+=12;NFSU2_TR(0x5b3928);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b392c:{NFSU2_TR(0x5b392c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b392d:{NFSU2_TR(0x5b392d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3933:{NFSU2_TR(0x5b3933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3934:{NFSU2_TR(0x5b3934);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b393a:{NFSU2_TR(0x5b393a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b393b:{NFSU2_TR(0x5b393b);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b393f:{NFSU2_TR(0x5b393f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3940:{NFSU2_TR(0x5b3940);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3944:{NFSU2_TR(0x5b3944);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3945:{NFSU2_TR(0x5b3945);
__builtin_memmove((R+4),(R+28),4);
}
B5b3947:{NFSU2_TR(0x5b3947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b394cull));
TAIL_STATIC(0x5afba0u,5af);
}
B5b394c:L5b394c:{c.instructions+=1;NFSU2_TR(0x5b394c);
{goto L5b3a3e;}
}
B5b3951:L5b3951:{c.instructions+=13;NFSU2_TR(0x5b3951);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3954:{NFSU2_TR(0x5b3954);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3957:{NFSU2_TR(0x5b3957);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b395e:{NFSU2_TR(0x5b395e);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3965:{NFSU2_TR(0x5b3965);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3966:{NFSU2_TR(0x5b3966);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b396c:{NFSU2_TR(0x5b396c);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3973:{NFSU2_TR(0x5b3973);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3976:{NFSU2_TR(0x5b3976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3977:{NFSU2_TR(0x5b3977);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b397e:{NFSU2_TR(0x5b397e);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3985:{NFSU2_TR(0x5b3985);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3986:{NFSU2_TR(0x5b3986);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b398bull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b398b:L5b398b:{c.instructions+=11;NFSU2_TR(0x5b398b);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3992:{NFSU2_TR(0x5b3992);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3999:{NFSU2_TR(0x5b3999);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b39a0:{NFSU2_TR(0x5b39a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b39a7:{NFSU2_TR(0x5b39a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b39ae:{NFSU2_TR(0x5b39ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b39b5:{NFSU2_TR(0x5b39b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b39c0:{NFSU2_TR(0x5b39c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5b39c4:{NFSU2_TR(0x5b39c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b39c7:{NFSU2_TR(0x5b39c7);
u8 U[6];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b39cc:{NFSU2_TR(0x5b39cc);
{goto L5b3a3e;}
}
B5b39ce:L5b39ce:{c.instructions+=12;NFSU2_TR(0x5b39ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b39d2:{NFSU2_TR(0x5b39d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b39d3:{NFSU2_TR(0x5b39d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b39d9:{NFSU2_TR(0x5b39d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b39da:{NFSU2_TR(0x5b39da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b39e0:{NFSU2_TR(0x5b39e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b39e1:{NFSU2_TR(0x5b39e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b39e5:{NFSU2_TR(0x5b39e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b39e6:{NFSU2_TR(0x5b39e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b39ea:{NFSU2_TR(0x5b39ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b39eb:{NFSU2_TR(0x5b39eb);
__builtin_memmove((R+4),(R+28),4);
}
B5b39ed:{NFSU2_TR(0x5b39ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b39f2ull));
TAIL_STATIC(0x5a2280u,5a2);
}
B5b39f2:L5b39f2:{c.instructions+=1;NFSU2_TR(0x5b39f2);
{goto L5b3a3e;}
}
B5b39f4:L5b39f4:{c.instructions+=12;NFSU2_TR(0x5b39f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b39f8:{NFSU2_TR(0x5b39f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b39f9:{NFSU2_TR(0x5b39f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b39ff:{NFSU2_TR(0x5b39ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a00:{NFSU2_TR(0x5b3a00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a06:{NFSU2_TR(0x5b3a06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a07:{NFSU2_TR(0x5b3a07);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3a0b:{NFSU2_TR(0x5b3a0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a0c:{NFSU2_TR(0x5b3a0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a10:{NFSU2_TR(0x5b3a10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a11:{NFSU2_TR(0x5b3a11);
__builtin_memmove((R+4),(R+28),4);
}
B5b3a13:{NFSU2_TR(0x5b3a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3a18ull));
TAIL_STATIC(0x5a2060u,5a2);
}
B5b3a18:L5b3a18:{c.instructions+=1;NFSU2_TR(0x5b3a18);
{goto L5b3a3e;}
}
B5b3a1a:L5b3a1a:{c.instructions+=12;NFSU2_TR(0x5b3a1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3a1e:{NFSU2_TR(0x5b3a1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a1f:{NFSU2_TR(0x5b3a1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a25:{NFSU2_TR(0x5b3a25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a26:{NFSU2_TR(0x5b3a26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a2c:{NFSU2_TR(0x5b3a2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a2d:{NFSU2_TR(0x5b3a2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3a31:{NFSU2_TR(0x5b3a31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a32:{NFSU2_TR(0x5b3a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a36:{NFSU2_TR(0x5b3a36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a37:{NFSU2_TR(0x5b3a37);
__builtin_memmove((R+4),(R+28),4);
}
B5b3a39:{NFSU2_TR(0x5b3a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3a3eull));
TAIL_STATIC(0x5a23d0u,5a2);
}
B5b3a3e:L5b3a3e:{c.instructions+=5;NFSU2_TR(0x5b3a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b3a44:{NFSU2_TR(0x5b3a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3a47:{NFSU2_TR(0x5b3a47);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b3a48:{NFSU2_TR(0x5b3a48);
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
B5b3a4b:{NFSU2_TR(0x5b3a4b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b3b44;}}
}
B5b3a51:L5b3a51:{c.instructions+=1;NFSU2_TR(0x5b3a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b3d0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b3a58:L5b3a58:{c.instructions+=11;NFSU2_TR(0x5b3a58);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3a5c:{NFSU2_TR(0x5b3a5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a5d:{NFSU2_TR(0x5b3a5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a63:{NFSU2_TR(0x5b3a63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a64:{NFSU2_TR(0x5b3a64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a65:{NFSU2_TR(0x5b3a65);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3a69:{NFSU2_TR(0x5b3a69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a6a:{NFSU2_TR(0x5b3a6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a6e:{NFSU2_TR(0x5b3a6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a6f:{NFSU2_TR(0x5b3a6f);
__builtin_memmove((R+4),(R+28),4);
}
B5b3a71:{NFSU2_TR(0x5b3a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3a76ull));
TAIL_STATIC(0x5afba0u,5af);
}
B5b3a76:L5b3a76:{c.instructions+=1;NFSU2_TR(0x5b3a76);
{goto L5b3b44;}
}
B5b3a7b:L5b3a7b:{c.instructions+=12;NFSU2_TR(0x5b3a7b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3a7e:{NFSU2_TR(0x5b3a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3a81:{NFSU2_TR(0x5b3a81);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3a88:{NFSU2_TR(0x5b3a88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a89:{NFSU2_TR(0x5b3a89);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3a90:{NFSU2_TR(0x5b3a90);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3a93:{NFSU2_TR(0x5b3a93);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3a9a:{NFSU2_TR(0x5b3a9a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3a9b:{NFSU2_TR(0x5b3a9b);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3aa2:{NFSU2_TR(0x5b3aa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3aa3:{NFSU2_TR(0x5b3aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3aaa:{NFSU2_TR(0x5b3aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3aafull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5b3aaf:L5b3aaf:{c.instructions+=11;NFSU2_TR(0x5b3aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3ab6:{NFSU2_TR(0x5b3ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3abd:{NFSU2_TR(0x5b3abd);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3ac4:{NFSU2_TR(0x5b3ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3ac8:{NFSU2_TR(0x5b3ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3acc:{NFSU2_TR(0x5b3acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3ad0:{NFSU2_TR(0x5b3ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b3ad8:{NFSU2_TR(0x5b3ad8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5b3adc:{NFSU2_TR(0x5b3adc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b3adf:{NFSU2_TR(0x5b3adf);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5b3ae4:{NFSU2_TR(0x5b3ae4);
{goto L5b3b44;}
}
B5b3ae6:L5b3ae6:{c.instructions+=11;NFSU2_TR(0x5b3ae6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3aea:{NFSU2_TR(0x5b3aea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3aeb:{NFSU2_TR(0x5b3aeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3af1:{NFSU2_TR(0x5b3af1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3af2:{NFSU2_TR(0x5b3af2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3af3:{NFSU2_TR(0x5b3af3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3af7:{NFSU2_TR(0x5b3af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3af8:{NFSU2_TR(0x5b3af8);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3afc:{NFSU2_TR(0x5b3afc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3afd:{NFSU2_TR(0x5b3afd);
__builtin_memmove((R+4),(R+28),4);
}
B5b3aff:{NFSU2_TR(0x5b3aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3b04ull));
TAIL_STATIC(0x5a2280u,5a2);
}
B5b3b04:L5b3b04:{c.instructions+=1;NFSU2_TR(0x5b3b04);
{goto L5b3b44;}
}
B5b3b06:L5b3b06:{c.instructions+=11;NFSU2_TR(0x5b3b06);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3b0a:{NFSU2_TR(0x5b3b0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b0b:{NFSU2_TR(0x5b3b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3b11:{NFSU2_TR(0x5b3b11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b12:{NFSU2_TR(0x5b3b12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b13:{NFSU2_TR(0x5b3b13);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3b17:{NFSU2_TR(0x5b3b17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b18:{NFSU2_TR(0x5b3b18);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3b1c:{NFSU2_TR(0x5b3b1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b1d:{NFSU2_TR(0x5b3b1d);
__builtin_memmove((R+4),(R+28),4);
}
B5b3b1f:{NFSU2_TR(0x5b3b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3b24ull));
TAIL_STATIC(0x5a2060u,5a2);
}
B5b3b24:L5b3b24:{c.instructions+=1;NFSU2_TR(0x5b3b24);
{goto L5b3b44;}
}
B5b3b26:L5b3b26:{c.instructions+=11;NFSU2_TR(0x5b3b26);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3b2a:{NFSU2_TR(0x5b3b2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b2b:{NFSU2_TR(0x5b3b2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3b31:{NFSU2_TR(0x5b3b31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b32:{NFSU2_TR(0x5b3b32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b33:{NFSU2_TR(0x5b3b33);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3b37:{NFSU2_TR(0x5b3b37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b38:{NFSU2_TR(0x5b3b38);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3b3c:{NFSU2_TR(0x5b3b3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3b3d:{NFSU2_TR(0x5b3b3d);
__builtin_memmove((R+4),(R+28),4);
}
B5b3b3f:{NFSU2_TR(0x5b3b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3b44ull));
TAIL_STATIC(0x5a23d0u,5a2);
}
B5b3b44:L5b3b44:{c.instructions+=5;NFSU2_TR(0x5b3b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3b4a:{NFSU2_TR(0x5b3b4a);
u8 U[6];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5b3b4f:{NFSU2_TR(0x5b3b4f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3b51:{NFSU2_TR(0x5b3b51);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b3b53:{NFSU2_TR(0x5b3b53);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b3b78;}}
}
B5b3b55:L5b3b55:{c.instructions+=1;NFSU2_TR(0x5b3b55);
{goto L5b3b60;}
}
B5b3b60:L5b3b60:{c.instructions+=2;NFSU2_TR(0x5b3b60);
u8 U[24];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5b3b67:{NFSU2_TR(0x5b3b67);
if(r1(R+518)){{goto L5b3c70;}}
}
B5b3b6d:L5b3b6d:{c.instructions+=4;NFSU2_TR(0x5b3b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b3b73:{NFSU2_TR(0x5b3b73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b3b74:{NFSU2_TR(0x5b3b74);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b3b76:{NFSU2_TR(0x5b3b76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3b60u);}goto L5b3b60;}}
}
B5b3b78:L5b3b78:{c.instructions+=16;NFSU2_TR(0x5b3b78);
u8 U[16];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b3b7f:{NFSU2_TR(0x5b3b7f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3b86:{NFSU2_TR(0x5b3b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3b8c:{NFSU2_TR(0x5b3b8c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3b93:{NFSU2_TR(0x5b3b93);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3b9a:{NFSU2_TR(0x5b3b9a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3b9c:{NFSU2_TR(0x5b3b9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b3b9f:{NFSU2_TR(0x5b3b9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b3ba2:{NFSU2_TR(0x5b3ba2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5b3ba4:{NFSU2_TR(0x5b3ba4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3ba7:{NFSU2_TR(0x5b3ba7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b3ba9:{NFSU2_TR(0x5b3ba9);
w4(R+28,u32(0x1ull));
}
B5b3bae:{NFSU2_TR(0x5b3bae);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3bb1:{NFSU2_TR(0x5b3bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3bb7:{NFSU2_TR(0x5b3bb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b3bb8:{NFSU2_TR(0x5b3bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3bbe:L5b3bbe:{c.instructions+=5;NFSU2_TR(0x5b3bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3bc4:{NFSU2_TR(0x5b3bc4);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5b3bc9:{NFSU2_TR(0x5b3bc9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3bcb:{NFSU2_TR(0x5b3bcb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b3bcd:{NFSU2_TR(0x5b3bcd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b3be6;}}
}
B5b3bcf:L5b3bcf:{c.instructions+=1;NFSU2_TR(0x5b3bcf);
}
B5b3bd0:L5b3bd0:{c.instructions+=2;NFSU2_TR(0x5b3bd0);
u8 U[24];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5b3bd7:{NFSU2_TR(0x5b3bd7);
if(r1(R+518)){{goto L5b3c77;}}
}
B5b3bdd:L5b3bdd:{c.instructions+=3;NFSU2_TR(0x5b3bdd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b3bde:{NFSU2_TR(0x5b3bde);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5b3be4:{NFSU2_TR(0x5b3be4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3bd0u);}goto L5b3bd0;}}
}
B5b3be6:L5b3be6:{c.instructions+=16;NFSU2_TR(0x5b3be6);
u8 U[16];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b3bed:{NFSU2_TR(0x5b3bed);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3bf1:{NFSU2_TR(0x5b3bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3bf7:{NFSU2_TR(0x5b3bf7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3bfb:{NFSU2_TR(0x5b3bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3bff:{NFSU2_TR(0x5b3bff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b3c01:{NFSU2_TR(0x5b3c01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5b3c04:{NFSU2_TR(0x5b3c04);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b3c07:{NFSU2_TR(0x5b3c07);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5b3c09:{NFSU2_TR(0x5b3c09);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3c0c:{NFSU2_TR(0x5b3c0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5b3c0e:{NFSU2_TR(0x5b3c0e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3c11:{NFSU2_TR(0x5b3c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3c17:{NFSU2_TR(0x5b3c17);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b3c18:{NFSU2_TR(0x5b3c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3c1e:{NFSU2_TR(0x5b3c1e);
w4(R+0,u32(0x1ull));
}
B5b3c23:L5b3c23:{c.instructions+=2;NFSU2_TR(0x5b3c23);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5b3c25:{NFSU2_TR(0x5b3c25);
if(r1(R+518)){{goto L5b3c9f;}}
}
B5b3c27:L5b3c27:{c.instructions+=5;NFSU2_TR(0x5b3c27);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3c2b:{NFSU2_TR(0x5b3c2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3c2e:{NFSU2_TR(0x5b3c2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3c2f:{NFSU2_TR(0x5b3c2f);
__builtin_memmove((R+4),(R+28),4);
}
B5b3c31:{NFSU2_TR(0x5b3c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3c36ull));
TAIL_STATIC(0x595040u,595);
}
B5b3c36:L5b3c36:{c.instructions+=5;NFSU2_TR(0x5b3c36);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b3c3a:{NFSU2_TR(0x5b3c3a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3c40:{NFSU2_TR(0x5b3c40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3c42:{NFSU2_TR(0x5b3c42);
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
B5b3c45:{NFSU2_TR(0x5b3c45);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5b3c7b;}}
}
B5b3c47:L5b3c47:{c.instructions+=5;NFSU2_TR(0x5b3c47);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3c4b:{NFSU2_TR(0x5b3c4b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3c4f:{NFSU2_TR(0x5b3c4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3c51:{NFSU2_TR(0x5b3c51);
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
B5b3c54:{NFSU2_TR(0x5b3c54);
if(r1(R+518)){{goto L5b3c88;}}
}
B5b3c56:L5b3c56:{c.instructions+=5;NFSU2_TR(0x5b3c56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3c5a:{NFSU2_TR(0x5b3c5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3c5b:{NFSU2_TR(0x5b3c5b);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3c62:{NFSU2_TR(0x5b3c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3c66:{NFSU2_TR(0x5b3c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3c6bull));
TAIL_STATIC(0x598240u,598);
}
B5b3c6b:L5b3c6b:{c.instructions+=1;NFSU2_TR(0x5b3c6b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b38e0u);}goto L5b38e0;}
}
B5b3c70:L5b3c70:{c.instructions+=2;NFSU2_TR(0x5b3c70);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b3c72:{NFSU2_TR(0x5b3c72);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3bbeu);}goto L5b3bbe;}
}
B5b3c77:L5b3c77:{c.instructions+=2;NFSU2_TR(0x5b3c77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3c79:{NFSU2_TR(0x5b3c79);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3c23u);}goto L5b3c23;}
}
B5b3c7b:L5b3c7b:{c.instructions+=7;NFSU2_TR(0x5b3c7b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3c81:{NFSU2_TR(0x5b3c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3c82:{NFSU2_TR(0x5b3c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3c83:{NFSU2_TR(0x5b3c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3c84:{NFSU2_TR(0x5b3c84);
__builtin_memmove((R+16),(R+20),4);
}
B5b3c86:{NFSU2_TR(0x5b3c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b3c87:{NFSU2_TR(0x5b3c87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3c88:L5b3c88:{c.instructions+=6;NFSU2_TR(0x5b3c88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3c8c:{NFSU2_TR(0x5b3c8c);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b3c93:{NFSU2_TR(0x5b3c93);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3c97:{NFSU2_TR(0x5b3c97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3c98:{NFSU2_TR(0x5b3c98);
__builtin_memmove((R+4),(R+28),4);
}
B5b3c9a:{NFSU2_TR(0x5b3c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3c9full));
TAIL_STATIC(0x598240u,598);
}
B5b3c9f:L5b3c9f:{c.instructions+=4;NFSU2_TR(0x5b3c9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3ca5:{NFSU2_TR(0x5b3ca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ca6:{NFSU2_TR(0x5b3ca6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ca7:{NFSU2_TR(0x5b3ca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3cacull));
TAIL_STATIC(0x43cf10u,43c);
}
B5b3cac:L5b3cac:{c.instructions+=9;NFSU2_TR(0x5b3cac);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3cb0:{NFSU2_TR(0x5b3cb0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5b3cb2:{NFSU2_TR(0x5b3cb2);
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
B5b3cb5:{NFSU2_TR(0x5b3cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3cb6:{NFSU2_TR(0x5b3cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3cb7:{NFSU2_TR(0x5b3cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3cb8:{NFSU2_TR(0x5b3cb8);
__builtin_memmove((R+16),(R+20),4);
}
B5b3cba:{NFSU2_TR(0x5b3cba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b3cbb:{NFSU2_TR(0x5b3cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3d20:L5b3d20:{c.instructions+=5;NFSU2_TR(0x5b3d20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3d21:{NFSU2_TR(0x5b3d21);
__builtin_memmove((R+24),(R+4),4);
}
B5b3d23:{NFSU2_TR(0x5b3d23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b3d29:{NFSU2_TR(0x5b3d29);
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
B5b3d2b:{NFSU2_TR(0x5b3d2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3d32;}}
}
B5b3d2d:L5b3d2d:{c.instructions+=3;NFSU2_TR(0x5b3d2d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3d30:{NFSU2_TR(0x5b3d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3d31:{NFSU2_TR(0x5b3d31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3d32:L5b3d32:{c.instructions+=5;NFSU2_TR(0x5b3d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3d38:{NFSU2_TR(0x5b3d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3d3b:{NFSU2_TR(0x5b3d3b);
w4(R+8,u32(0x2ull));
}
B5b3d40:{NFSU2_TR(0x5b3d40);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3d42:{NFSU2_TR(0x5b3d42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3d9a;}}
}
B5b3d44:L5b3d44:{c.instructions+=3;NFSU2_TR(0x5b3d44);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b3d4a:{NFSU2_TR(0x5b3d4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3d4c:{NFSU2_TR(0x5b3d4c);
if(r1(R+518)){{goto L5b3d68;}}
}
B5b3d4e:L5b3d4e:{c.instructions+=5;NFSU2_TR(0x5b3d4e);
{u32 ea_=u32(r4(R+4)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3d54:{NFSU2_TR(0x5b3d54);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3d5a:{NFSU2_TR(0x5b3d5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3d5c:{NFSU2_TR(0x5b3d5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3d5f:{NFSU2_TR(0x5b3d5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3d68;}}
}
B5b3d61:L5b3d61:{c.instructions+=2;NFSU2_TR(0x5b3d61);
w4(R+0,u32(0x1ull));
}
B5b3d66:{NFSU2_TR(0x5b3d66);
{goto L5b3d6a;}
}
B5b3d68:L5b3d68:{c.instructions+=1;NFSU2_TR(0x5b3d68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3d6a:L5b3d6a:{c.instructions+=2;NFSU2_TR(0x5b3d6a);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x221ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b3d70:{NFSU2_TR(0x5b3d70);
if(r1(R+518)){{goto L5b3d9a;}}
}
B5b3d72:L5b3d72:{c.instructions+=3;NFSU2_TR(0x5b3d72);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b3d78:{NFSU2_TR(0x5b3d78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3d7a:{NFSU2_TR(0x5b3d7a);
if(r1(R+518)){{goto L5b3d96;}}
}
B5b3d7c:L5b3d7c:{c.instructions+=5;NFSU2_TR(0x5b3d7c);
{u32 ea_=u32(r4(R+4)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3d82:{NFSU2_TR(0x5b3d82);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3d88:{NFSU2_TR(0x5b3d88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3d8a:{NFSU2_TR(0x5b3d8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3d8d:{NFSU2_TR(0x5b3d8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3d96;}}
}
B5b3d8f:L5b3d8f:{c.instructions+=2;NFSU2_TR(0x5b3d8f);
w4(R+0,u32(0x1ull));
}
B5b3d94:{NFSU2_TR(0x5b3d94);
{goto L5b3dd8;}
}
B5b3d96:L5b3d96:{c.instructions+=2;NFSU2_TR(0x5b3d96);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3d98:{NFSU2_TR(0x5b3d98);
{goto L5b3dd8;}
}
B5b3d9a:L5b3d9a:{c.instructions+=3;NFSU2_TR(0x5b3d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3da0:{NFSU2_TR(0x5b3da0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b3da3:{NFSU2_TR(0x5b3da3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3de8;}}
}
B5b3da5:L5b3da5:{c.instructions+=3;NFSU2_TR(0x5b3da5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b3dab:{NFSU2_TR(0x5b3dab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3dad:{NFSU2_TR(0x5b3dad);
if(r1(R+518)){{goto L5b3dc9;}}
}
B5b3daf:L5b3daf:{c.instructions+=5;NFSU2_TR(0x5b3daf);
{u32 ea_=u32(r4(R+4)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3db5:{NFSU2_TR(0x5b3db5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3dbb:{NFSU2_TR(0x5b3dbb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3dbd:{NFSU2_TR(0x5b3dbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3dc0:{NFSU2_TR(0x5b3dc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3dc9;}}
}
B5b3dc2:L5b3dc2:{c.instructions+=2;NFSU2_TR(0x5b3dc2);
w4(R+0,u32(0x1ull));
}
B5b3dc7:{NFSU2_TR(0x5b3dc7);
{goto L5b3dcb;}
}
B5b3dc9:L5b3dc9:{c.instructions+=1;NFSU2_TR(0x5b3dc9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3dcb:L5b3dcb:{c.instructions+=2;NFSU2_TR(0x5b3dcb);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x221ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5b3dd1:{NFSU2_TR(0x5b3dd1);
if(r1(R+518)){{goto L5b3de8;}}
}
B5b3dd3:L5b3dd3:{c.instructions+=1;NFSU2_TR(0x5b3dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3dd8ull));
TAIL_STATIC(0x5928e0u,592);
}
B5b3dd8:L5b3dd8:{c.instructions+=2;NFSU2_TR(0x5b3dd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x221ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b3dde:{NFSU2_TR(0x5b3dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b3de8:L5b3de8:{c.instructions+=2;NFSU2_TR(0x5b3de8);
__builtin_memmove((R+4),(R+24),4);
}
B5b3dea:{NFSU2_TR(0x5b3dea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3defull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b3390u);}goto L5b3390;}
}
B5b3def:L5b3def:{c.instructions+=5;NFSU2_TR(0x5b3def);
{u32 ea_=u32(u32(8001836u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b3df5:{NFSU2_TR(0x5b3df5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b3df8:{NFSU2_TR(0x5b3df8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3dfa:{NFSU2_TR(0x5b3dfa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b3dfd:{NFSU2_TR(0x5b3dfd);
if(r1(R+514)){{goto L5b3e06;}}
}
B5b3dff:L5b3dff:{c.instructions+=2;NFSU2_TR(0x5b3dff);
w4(R+0,u32(0x1ull));
}
B5b3e04:{NFSU2_TR(0x5b3e04);
{goto L5b3e08;}
}
B5b3e06:L5b3e06:{c.instructions+=1;NFSU2_TR(0x5b3e06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b3e08:L5b3e08:{c.instructions+=5;NFSU2_TR(0x5b3e08);
{u32 ea_=u32(u32(8001832u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5b3e0e:{NFSU2_TR(0x5b3e0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b3e11:{NFSU2_TR(0x5b3e11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3e13:{NFSU2_TR(0x5b3e13);
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
B5b3e16:{NFSU2_TR(0x5b3e16);
if(r1(R+514)){{goto L5b3e29;}}
}
B5b3e18:L5b3e18:{c.instructions+=5;NFSU2_TR(0x5b3e18);
w4(R+0,u32(0x1ull));
}
B5b3e1d:{NFSU2_TR(0x5b3e1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b3e20:{NFSU2_TR(0x5b3e20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b3e27:{NFSU2_TR(0x5b3e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3e28:{NFSU2_TR(0x5b3e28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3e29:L5b3e29:{c.instructions+=5;NFSU2_TR(0x5b3e29);
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
B5b3e2b:{NFSU2_TR(0x5b3e2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b3e2e:{NFSU2_TR(0x5b3e2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b3e34:{NFSU2_TR(0x5b3e34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3e35:{NFSU2_TR(0x5b3e35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3e40:L5b3e40:{c.instructions+=10;NFSU2_TR(0x5b3e40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e41:{NFSU2_TR(0x5b3e41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e42:{NFSU2_TR(0x5b3e42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b3e46:{NFSU2_TR(0x5b3e46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e47:{NFSU2_TR(0x5b3e47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e48:{NFSU2_TR(0x5b3e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b3e4c:{NFSU2_TR(0x5b3e4c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3e4f:{NFSU2_TR(0x5b3e4f);
__builtin_memmove((R+24),(R+4),4);
}
B5b3e51:{NFSU2_TR(0x5b3e51);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b3e59:{NFSU2_TR(0x5b3e59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b3e61;}}
}
B5b3e5b:L5b3e5b:{c.instructions+=2;NFSU2_TR(0x5b3e5b);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3e5f:{NFSU2_TR(0x5b3e5f);
{goto L5b3e78;}
}
B5b3e61:L5b3e61:{c.instructions+=1;NFSU2_TR(0x5b3e61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3e6c;}}
}
B5b3e63:L5b3e63:{c.instructions+=2;NFSU2_TR(0x5b3e63);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3e6a:{NFSU2_TR(0x5b3e6a);
{goto L5b3e78;}
}
B5b3e6c:L5b3e6c:{c.instructions+=2;NFSU2_TR(0x5b3e6c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3e6f:{NFSU2_TR(0x5b3e6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3e7c;}}
}
B5b3e71:L5b3e71:{c.instructions+=1;NFSU2_TR(0x5b3e71);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3e78:L5b3e78:{c.instructions+=1;NFSU2_TR(0x5b3e78);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3e7c:L5b3e7c:{c.instructions+=9;NFSU2_TR(0x5b3e7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e7e:{NFSU2_TR(0x5b3e7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e7f:{NFSU2_TR(0x5b3e7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3e83:{NFSU2_TR(0x5b3e83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e84:{NFSU2_TR(0x5b3e84);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3e88:{NFSU2_TR(0x5b3e88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e89:{NFSU2_TR(0x5b3e89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e8a:{NFSU2_TR(0x5b3e8a);
__builtin_memmove((R+4),(R+24),4);
}
B5b3e8c:{NFSU2_TR(0x5b3e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3e91ull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b3e91:L5b3e91:{c.instructions+=4;NFSU2_TR(0x5b3e91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e92:{NFSU2_TR(0x5b3e92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3e93:{NFSU2_TR(0x5b3e93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3e96:{NFSU2_TR(0x5b3e96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3e9bull));
TAIL_STATIC(0x59aee0u,59a);
}
B5b3e9b:L5b3e9b:{c.instructions+=8;NFSU2_TR(0x5b3e9b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3e9f:{NFSU2_TR(0x5b3e9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b3ea3:{NFSU2_TR(0x5b3ea3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b3ea7:{NFSU2_TR(0x5b3ea7);
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
B5b3ea9:{NFSU2_TR(0x5b3ea9);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5b3eab:{NFSU2_TR(0x5b3eab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b3eaf:{NFSU2_TR(0x5b3eaf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3eb3:{NFSU2_TR(0x5b3eb3);
if(r1(R+518)){{goto L5b3ecb;}}
}
B5b3eb5:L5b3eb5:{c.instructions+=6;NFSU2_TR(0x5b3eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3eb9:{NFSU2_TR(0x5b3eb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ebb:{NFSU2_TR(0x5b3ebb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ebc:{NFSU2_TR(0x5b3ebc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ebd:{NFSU2_TR(0x5b3ebd);
__builtin_memmove((R+4),(R+24),4);
}
B5b3ebf:{NFSU2_TR(0x5b3ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3ec4ull));
TAIL_STATIC(0x5b2800u,5b2);
}
B5b3ec4:L5b3ec4:{c.instructions+=5;NFSU2_TR(0x5b3ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3ec5:{NFSU2_TR(0x5b3ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3ec6:{NFSU2_TR(0x5b3ec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3ec7:{NFSU2_TR(0x5b3ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3ec8:{NFSU2_TR(0x5b3ec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3ecb:L5b3ecb:{c.instructions+=6;NFSU2_TR(0x5b3ecb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3ecf:{NFSU2_TR(0x5b3ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3ed0:{NFSU2_TR(0x5b3ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3ed1:{NFSU2_TR(0x5b3ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3ed2:{NFSU2_TR(0x5b3ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3ed3:{NFSU2_TR(0x5b3ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3ee0:L5b3ee0:{c.instructions+=10;NFSU2_TR(0x5b3ee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ee1:{NFSU2_TR(0x5b3ee1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ee2:{NFSU2_TR(0x5b3ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b3ee6:{NFSU2_TR(0x5b3ee6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ee7:{NFSU2_TR(0x5b3ee7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3ee8:{NFSU2_TR(0x5b3ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b3eec:{NFSU2_TR(0x5b3eec);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3eef:{NFSU2_TR(0x5b3eef);
__builtin_memmove((R+24),(R+4),4);
}
B5b3ef1:{NFSU2_TR(0x5b3ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b3ef9:{NFSU2_TR(0x5b3ef9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b3f01;}}
}
B5b3efb:L5b3efb:{c.instructions+=2;NFSU2_TR(0x5b3efb);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3eff:{NFSU2_TR(0x5b3eff);
{goto L5b3f18;}
}
B5b3f01:L5b3f01:{c.instructions+=1;NFSU2_TR(0x5b3f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3f0c;}}
}
B5b3f03:L5b3f03:{c.instructions+=2;NFSU2_TR(0x5b3f03);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f0a:{NFSU2_TR(0x5b3f0a);
{goto L5b3f18;}
}
B5b3f0c:L5b3f0c:{c.instructions+=2;NFSU2_TR(0x5b3f0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b3f0f:{NFSU2_TR(0x5b3f0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3f1c;}}
}
B5b3f11:L5b3f11:{c.instructions+=1;NFSU2_TR(0x5b3f11);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f18:L5b3f18:{c.instructions+=1;NFSU2_TR(0x5b3f18);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3f1c:L5b3f1c:{c.instructions+=9;NFSU2_TR(0x5b3f1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f1e:{NFSU2_TR(0x5b3f1e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f1f:{NFSU2_TR(0x5b3f1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3f23:{NFSU2_TR(0x5b3f23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f24:{NFSU2_TR(0x5b3f24);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3f28:{NFSU2_TR(0x5b3f28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f29:{NFSU2_TR(0x5b3f29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f2a:{NFSU2_TR(0x5b3f2a);
__builtin_memmove((R+4),(R+24),4);
}
B5b3f2c:{NFSU2_TR(0x5b3f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3f31ull));
TAIL_STATIC(0x5b2980u,5b2);
}
B5b3f31:L5b3f31:{c.instructions+=5;NFSU2_TR(0x5b3f31);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f35:{NFSU2_TR(0x5b3f35);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b3f39:{NFSU2_TR(0x5b3f39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3f3b:{NFSU2_TR(0x5b3f3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b3f3e:{NFSU2_TR(0x5b3f3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3f46;}}
}
B5b3f40:L5b3f40:{c.instructions+=2;NFSU2_TR(0x5b3f40);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f44:{NFSU2_TR(0x5b3f44);
{goto L5b3f4a;}
}
B5b3f46:L5b3f46:{c.instructions+=1;NFSU2_TR(0x5b3f46);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f4a:L5b3f4a:{c.instructions+=5;NFSU2_TR(0x5b3f4a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f4e:{NFSU2_TR(0x5b3f4e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5b3f50:{NFSU2_TR(0x5b3f50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b3f52:{NFSU2_TR(0x5b3f52);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b3f55:{NFSU2_TR(0x5b3f55);
if(r1(R+514)){{goto L5b3f63;}}
}
B5b3f57:L5b3f57:{c.instructions+=4;NFSU2_TR(0x5b3f57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3f5b:{NFSU2_TR(0x5b3f5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b3f5d:{NFSU2_TR(0x5b3f5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3f61:{NFSU2_TR(0x5b3f61);
{goto L5b3f67;}
}
B5b3f63:L5b3f63:{c.instructions+=1;NFSU2_TR(0x5b3f63);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3f67:L5b3f67:{c.instructions+=11;NFSU2_TR(0x5b3f67);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f6b:{NFSU2_TR(0x5b3f6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f6c:{NFSU2_TR(0x5b3f6c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b3f70:{NFSU2_TR(0x5b3f70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f71:{NFSU2_TR(0x5b3f71);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f75:{NFSU2_TR(0x5b3f75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3f76:{NFSU2_TR(0x5b3f76);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5b3f7a:{NFSU2_TR(0x5b3f7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3f7d:{NFSU2_TR(0x5b3f7d);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5b3f7f:{NFSU2_TR(0x5b3f7f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b3f82:{NFSU2_TR(0x5b3f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3f87ull));
TAIL_STATIC(0x59af80u,59a);
}
B5b3f87:L5b3f87:{c.instructions+=6;NFSU2_TR(0x5b3f87);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b3f8b:{NFSU2_TR(0x5b3f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b3f8c:{NFSU2_TR(0x5b3f8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b3f8d:{NFSU2_TR(0x5b3f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b3f8e:{NFSU2_TR(0x5b3f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b3f8f:{NFSU2_TR(0x5b3f8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b3fa0:L5b3fa0:{c.instructions+=6;NFSU2_TR(0x5b3fa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b3fa3:{NFSU2_TR(0x5b3fa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3fa4:{NFSU2_TR(0x5b3fa4);
__builtin_memmove((R+24),(R+4),4);
}
B5b3fa6:{NFSU2_TR(0x5b3fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3fac:{NFSU2_TR(0x5b3fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b3fae:{NFSU2_TR(0x5b3fae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b3fd1;}}
}
B5b3fb0:L5b3fb0:{c.instructions+=9;NFSU2_TR(0x5b3fb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b3fb2:{NFSU2_TR(0x5b3fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b3fb5:{NFSU2_TR(0x5b3fb5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5b3fbb:{NFSU2_TR(0x5b3fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b3fbe:{NFSU2_TR(0x5b3fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3fbf:{NFSU2_TR(0x5b3fbf);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B5b3fc4:{NFSU2_TR(0x5b3fc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3fc5:{NFSU2_TR(0x5b3fc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5b3fcc:{NFSU2_TR(0x5b3fcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b3fd1ull));
TAIL_STATIC(0x599d90u,599);
}
B5b3fd1:L5b3fd1:{c.instructions+=9;NFSU2_TR(0x5b3fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b3fd7:{NFSU2_TR(0x5b3fd7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3fd8:{NFSU2_TR(0x5b3fd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b3fd9:{NFSU2_TR(0x5b3fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b3fdd:{NFSU2_TR(0x5b3fdd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5b3fde:{NFSU2_TR(0x5b3fde);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5b3fe1:{NFSU2_TR(0x5b3fe1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x17ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x17ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b3fe4:{NFSU2_TR(0x5b3fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b3fea:{NFSU2_TR(0x5b3fea);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5b4127u,5b4);}
}
B5b3ff0:L5b3ff0:{c.instructions+=2;NFSU2_TR(0x5b3ff0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5b3ff7:{NFSU2_TR(0x5b3ff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b4178ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b3ffe:L5b3ffe:{c.instructions+=1;NFSU2_TR(0x5b3ffe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x5b4000u,5b4);
}
XIT:NFSU2_TR_EXIT(0x5b3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
