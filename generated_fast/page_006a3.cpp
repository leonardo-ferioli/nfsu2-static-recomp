#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69c(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a3(u8* __restrict R,Cpu& c);
u32 page_6a3(Cpu& c){return body_6a3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a3001:goto L6a3001;
case 0x6a3004:c.instructions+=5;goto B6a3004;
case 0x6a3007:c.instructions+=4;goto B6a3007;
case 0x6a3009:c.instructions+=3;goto B6a3009;
case 0x6a300b:c.instructions+=2;goto B6a300b;
case 0x6a300e:c.instructions+=1;goto B6a300e;
case 0x6a3010:goto L6a3010;
case 0x6a3012:c.instructions+=2;goto B6a3012;
case 0x6a3015:c.instructions+=1;goto B6a3015;
case 0x6a3018:goto L6a3018;
case 0x6a301b:c.instructions+=16;goto B6a301b;
case 0x6a301e:c.instructions+=15;goto B6a301e;
case 0x6a3021:c.instructions+=14;goto B6a3021;
case 0x6a3023:c.instructions+=13;goto B6a3023;
case 0x6a3025:c.instructions+=12;goto B6a3025;
case 0x6a3029:c.instructions+=11;goto B6a3029;
case 0x6a302b:c.instructions+=10;goto B6a302b;
case 0x6a302e:c.instructions+=9;goto B6a302e;
case 0x6a3031:c.instructions+=8;goto B6a3031;
case 0x6a3034:c.instructions+=7;goto B6a3034;
case 0x6a3037:c.instructions+=6;goto B6a3037;
case 0x6a303b:c.instructions+=5;goto B6a303b;
case 0x6a303e:c.instructions+=4;goto B6a303e;
case 0x6a3041:c.instructions+=3;goto B6a3041;
case 0x6a3044:c.instructions+=2;goto B6a3044;
case 0x6a3047:c.instructions+=1;goto B6a3047;
case 0x6a3049:goto L6a3049;
case 0x6a304b:c.instructions+=3;goto B6a304b;
case 0x6a304d:c.instructions+=2;goto B6a304d;
case 0x6a3050:c.instructions+=1;goto B6a3050;
case 0x6a3052:goto L6a3052;
case 0x6a3055:c.instructions+=5;goto B6a3055;
case 0x6a3058:c.instructions+=4;goto B6a3058;
case 0x6a3059:c.instructions+=3;goto B6a3059;
case 0x6a305c:c.instructions+=2;goto B6a305c;
case 0x6a305e:c.instructions+=1;goto B6a305e;
case 0x6a3060:goto L6a3060;
case 0x6a3062:c.instructions+=1;goto B6a3062;
case 0x6a3067:goto L6a3067;
case 0x6a3069:c.instructions+=1;goto B6a3069;
case 0x6a306f:goto L6a306f;
case 0x6a3071:c.instructions+=2;goto B6a3071;
case 0x6a3074:c.instructions+=1;goto B6a3074;
case 0x6a3076:goto L6a3076;
case 0x6a3079:c.instructions+=3;goto B6a3079;
case 0x6a307c:c.instructions+=2;goto B6a307c;
case 0x6a3080:c.instructions+=1;goto B6a3080;
case 0x6a3082:goto L6a3082;
case 0x6a3085:goto L6a3085;
case 0x6a3086:c.instructions+=2;goto B6a3086;
case 0x6a3089:c.instructions+=1;goto B6a3089;
case 0x6a308b:goto L6a308b;
case 0x6a308e:c.instructions+=2;goto B6a308e;
case 0x6a3091:c.instructions+=1;goto B6a3091;
case 0x6a3093:goto L6a3093;
case 0x6a3095:goto L6a3095;
case 0x6a3097:goto L6a3097;
case 0x6a309a:c.instructions+=4;goto B6a309a;
case 0x6a309d:c.instructions+=3;goto B6a309d;
case 0x6a30a0:c.instructions+=2;goto B6a30a0;
case 0x6a30a6:c.instructions+=1;goto B6a30a6;
case 0x6a30a8:goto L6a30a8;
case 0x6a30ab:c.instructions+=2;goto B6a30ab;
case 0x6a30ad:c.instructions+=1;goto B6a30ad;
case 0x6a30af:goto L6a30af;
case 0x6a30b2:c.instructions+=8;goto B6a30b2;
case 0x6a30b4:c.instructions+=7;goto B6a30b4;
case 0x6a30b7:c.instructions+=6;goto B6a30b7;
case 0x6a30ba:c.instructions+=5;goto B6a30ba;
case 0x6a30bd:c.instructions+=4;goto B6a30bd;
case 0x6a30c0:c.instructions+=3;goto B6a30c0;
case 0x6a30c3:c.instructions+=2;goto B6a30c3;
case 0x6a30c7:c.instructions+=1;goto B6a30c7;
case 0x6a30c9:goto L6a30c9;
case 0x6a30cb:c.instructions+=2;goto B6a30cb;
case 0x6a30cd:c.instructions+=1;goto B6a30cd;
case 0x6a30cf:goto L6a30cf;
case 0x6a30d2:c.instructions+=9;goto B6a30d2;
case 0x6a30d5:c.instructions+=8;goto B6a30d5;
case 0x6a30d8:c.instructions+=7;goto B6a30d8;
case 0x6a30db:c.instructions+=6;goto B6a30db;
case 0x6a30de:c.instructions+=5;goto B6a30de;
case 0x6a30e1:c.instructions+=4;goto B6a30e1;
case 0x6a30e2:c.instructions+=3;goto B6a30e2;
case 0x6a30e5:c.instructions+=2;goto B6a30e5;
case 0x6a30e8:c.instructions+=1;goto B6a30e8;
case 0x6a30ea:goto L6a30ea;
case 0x6a30ed:goto L6a30ed;
case 0x6a30f0:c.instructions+=3;goto B6a30f0;
case 0x6a30f3:c.instructions+=2;goto B6a30f3;
case 0x6a30f6:c.instructions+=1;goto B6a30f6;
case 0x6a30f8:goto L6a30f8;
case 0x6a30fa:goto L6a30fa;
case 0x6a30fb:c.instructions+=4;goto B6a30fb;
case 0x6a30fc:c.instructions+=3;goto B6a30fc;
case 0x6a30fd:c.instructions+=2;goto B6a30fd;
case 0x6a30fe:c.instructions+=1;goto B6a30fe;
case 0x6a30ff:goto L6a30ff;
case 0x6a3101:c.instructions+=10;goto B6a3101;
case 0x6a3102:c.instructions+=9;goto B6a3102;
case 0x6a3104:c.instructions+=8;goto B6a3104;
case 0x6a310a:c.instructions+=7;goto B6a310a;
case 0x6a310b:c.instructions+=6;goto B6a310b;
case 0x6a310c:c.instructions+=5;goto B6a310c;
case 0x6a310e:c.instructions+=4;goto B6a310e;
case 0x6a310f:c.instructions+=3;goto B6a310f;
case 0x6a3111:c.instructions+=2;goto B6a3111;
case 0x6a3114:c.instructions+=1;goto B6a3114;
case 0x6a3119:goto L6a3119;
case 0x6a311c:c.instructions+=3;goto B6a311c;
case 0x6a311f:c.instructions+=2;goto B6a311f;
case 0x6a3122:c.instructions+=1;goto B6a3122;
case 0x6a3124:goto L6a3124;
case 0x6a312a:c.instructions+=2;goto B6a312a;
case 0x6a312d:c.instructions+=1;goto B6a312d;
case 0x6a3130:goto L6a3130;
case 0x6a3132:c.instructions+=2;goto B6a3132;
case 0x6a3135:c.instructions+=1;goto B6a3135;
case 0x6a3137:goto L6a3137;
case 0x6a313a:c.instructions+=2;goto B6a313a;
case 0x6a313d:c.instructions+=1;goto B6a313d;
case 0x6a313f:goto L6a313f;
case 0x6a3140:c.instructions+=1;goto B6a3140;
case 0x6a3143:goto L6a3143;
case 0x6a3146:c.instructions+=2;goto B6a3146;
case 0x6a3147:c.instructions+=1;goto B6a3147;
case 0x6a3149:goto L6a3149;
case 0x6a314b:goto L6a314b;
case 0x6a314f:c.instructions+=1;goto B6a314f;
case 0x6a3155:goto L6a3155;
case 0x6a3158:c.instructions+=2;goto B6a3158;
case 0x6a315b:c.instructions+=1;goto B6a315b;
case 0x6a3161:goto L6a3161;
case 0x6a3164:c.instructions+=5;goto B6a3164;
case 0x6a3167:c.instructions+=4;goto B6a3167;
case 0x6a316a:c.instructions+=3;goto B6a316a;
case 0x6a3170:c.instructions+=2;goto B6a3170;
case 0x6a3173:c.instructions+=1;goto B6a3173;
case 0x6a3179:goto L6a3179;
case 0x6a317c:c.instructions+=5;goto B6a317c;
case 0x6a317d:c.instructions+=4;goto B6a317d;
case 0x6a317e:c.instructions+=3;goto B6a317e;
case 0x6a3183:c.instructions+=2;goto B6a3183;
case 0x6a3185:c.instructions+=1;goto B6a3185;
case 0x6a318a:goto L6a318a;
case 0x6a318c:c.instructions+=2;goto B6a318c;
case 0x6a318e:c.instructions+=1;goto B6a318e;
case 0x6a3194:goto L6a3194;
case 0x6a3195:c.instructions+=4;goto B6a3195;
case 0x6a3196:c.instructions+=3;goto B6a3196;
case 0x6a319b:c.instructions+=2;goto B6a319b;
case 0x6a319d:c.instructions+=1;goto B6a319d;
case 0x6a31a2:goto L6a31a2;
case 0x6a31a4:c.instructions+=1;goto B6a31a4;
case 0x6a31aa:goto L6a31aa;
case 0x6a31ad:c.instructions+=8;goto B6a31ad;
case 0x6a31b0:c.instructions+=7;goto B6a31b0;
case 0x6a31b3:c.instructions+=6;goto B6a31b3;
case 0x6a31b6:c.instructions+=5;goto B6a31b6;
case 0x6a31b7:c.instructions+=4;goto B6a31b7;
case 0x6a31b9:c.instructions+=3;goto B6a31b9;
case 0x6a31bc:c.instructions+=2;goto B6a31bc;
case 0x6a31bf:c.instructions+=1;goto B6a31bf;
case 0x6a31c4:goto L6a31c4;
case 0x6a31c7:c.instructions+=2;goto B6a31c7;
case 0x6a31c8:c.instructions+=1;goto B6a31c8;
case 0x6a31cd:goto L6a31cd;
case 0x6a31d0:c.instructions+=13;goto B6a31d0;
case 0x6a31d3:c.instructions+=12;goto B6a31d3;
case 0x6a31d6:c.instructions+=11;goto B6a31d6;
case 0x6a31d9:c.instructions+=10;goto B6a31d9;
case 0x6a31dd:c.instructions+=9;goto B6a31dd;
case 0x6a31de:c.instructions+=8;goto B6a31de;
case 0x6a31df:c.instructions+=7;goto B6a31df;
case 0x6a31e0:c.instructions+=6;goto B6a31e0;
case 0x6a31e1:c.instructions+=5;goto B6a31e1;
case 0x6a31e4:c.instructions+=4;goto B6a31e4;
case 0x6a31e7:c.instructions+=3;goto B6a31e7;
case 0x6a31e9:c.instructions+=2;goto B6a31e9;
case 0x6a31ec:c.instructions+=1;goto B6a31ec;
case 0x6a31ee:goto L6a31ee;
case 0x6a31f1:c.instructions+=11;goto B6a31f1;
case 0x6a31f3:c.instructions+=10;goto B6a31f3;
case 0x6a31f4:c.instructions+=9;goto B6a31f4;
case 0x6a31f5:c.instructions+=8;goto B6a31f5;
case 0x6a31f8:c.instructions+=7;goto B6a31f8;
case 0x6a31f9:c.instructions+=6;goto B6a31f9;
case 0x6a31fc:c.instructions+=5;goto B6a31fc;
case 0x6a31fe:c.instructions+=4;goto B6a31fe;
case 0x6a3204:c.instructions+=3;goto B6a3204;
case 0x6a3206:c.instructions+=2;goto B6a3206;
case 0x6a3209:c.instructions+=1;goto B6a3209;
case 0x6a320e:goto L6a320e;
case 0x6a3211:c.instructions+=9;goto B6a3211;
case 0x6a3214:c.instructions+=8;goto B6a3214;
case 0x6a3217:c.instructions+=7;goto B6a3217;
case 0x6a321a:c.instructions+=6;goto B6a321a;
case 0x6a321d:c.instructions+=5;goto B6a321d;
case 0x6a3220:c.instructions+=4;goto B6a3220;
case 0x6a3223:c.instructions+=3;goto B6a3223;
case 0x6a3226:c.instructions+=2;goto B6a3226;
case 0x6a322a:c.instructions+=1;goto B6a322a;
case 0x6a3230:goto L6a3230;
case 0x6a3233:c.instructions+=23;goto B6a3233;
case 0x6a3236:c.instructions+=22;goto B6a3236;
case 0x6a3238:c.instructions+=21;goto B6a3238;
case 0x6a323b:c.instructions+=20;goto B6a323b;
case 0x6a323e:c.instructions+=19;goto B6a323e;
case 0x6a3241:c.instructions+=18;goto B6a3241;
case 0x6a3244:c.instructions+=17;goto B6a3244;
case 0x6a3247:c.instructions+=16;goto B6a3247;
case 0x6a324a:c.instructions+=15;goto B6a324a;
case 0x6a324d:c.instructions+=14;goto B6a324d;
case 0x6a3250:c.instructions+=13;goto B6a3250;
case 0x6a3254:c.instructions+=12;goto B6a3254;
case 0x6a3257:c.instructions+=11;goto B6a3257;
case 0x6a325a:c.instructions+=10;goto B6a325a;
case 0x6a325d:c.instructions+=9;goto B6a325d;
case 0x6a3260:c.instructions+=8;goto B6a3260;
case 0x6a3262:c.instructions+=7;goto B6a3262;
case 0x6a3265:c.instructions+=6;goto B6a3265;
case 0x6a3268:c.instructions+=5;goto B6a3268;
case 0x6a326b:c.instructions+=4;goto B6a326b;
case 0x6a326e:c.instructions+=3;goto B6a326e;
case 0x6a3271:c.instructions+=2;goto B6a3271;
case 0x6a3274:c.instructions+=1;goto B6a3274;
case 0x6a327a:goto L6a327a;
case 0x6a327d:c.instructions+=2;goto B6a327d;
case 0x6a3280:c.instructions+=1;goto B6a3280;
case 0x6a3282:goto L6a3282;
case 0x6a3285:c.instructions+=3;goto B6a3285;
case 0x6a3288:c.instructions+=2;goto B6a3288;
case 0x6a328b:c.instructions+=1;goto B6a328b;
case 0x6a328d:goto L6a328d;
case 0x6a328e:c.instructions+=2;goto B6a328e;
case 0x6a3290:c.instructions+=1;goto B6a3290;
case 0x6a3292:goto L6a3292;
case 0x6a3295:c.instructions+=9;goto B6a3295;
case 0x6a3298:c.instructions+=8;goto B6a3298;
case 0x6a329b:c.instructions+=7;goto B6a329b;
case 0x6a329e:c.instructions+=6;goto B6a329e;
case 0x6a32a0:c.instructions+=5;goto B6a32a0;
case 0x6a32a4:c.instructions+=4;goto B6a32a4;
case 0x6a32a7:c.instructions+=3;goto B6a32a7;
case 0x6a32a8:c.instructions+=2;goto B6a32a8;
case 0x6a32a9:c.instructions+=1;goto B6a32a9;
case 0x6a32ae:goto L6a32ae;
case 0x6a32b1:c.instructions+=2;goto B6a32b1;
case 0x6a32b4:c.instructions+=1;goto B6a32b4;
case 0x6a32b7:goto L6a32b7;
case 0x6a32ba:c.instructions+=3;goto B6a32ba;
case 0x6a32bd:c.instructions+=2;goto B6a32bd;
case 0x6a32c0:c.instructions+=1;goto B6a32c0;
case 0x6a32c6:goto L6a32c6;
case 0x6a32c8:c.instructions+=2;goto B6a32c8;
case 0x6a32cb:c.instructions+=1;goto B6a32cb;
case 0x6a32cd:goto L6a32cd;
case 0x6a32cf:c.instructions+=1;goto B6a32cf;
case 0x6a32d4:goto L6a32d4;
case 0x6a32d8:c.instructions+=1;goto B6a32d8;
case 0x6a32de:goto L6a32de;
case 0x6a32e1:c.instructions+=5;goto B6a32e1;
case 0x6a32e3:c.instructions+=4;goto B6a32e3;
case 0x6a32e5:c.instructions+=3;goto B6a32e5;
case 0x6a32e8:c.instructions+=2;goto B6a32e8;
case 0x6a32eb:c.instructions+=1;goto B6a32eb;
case 0x6a32f1:goto L6a32f1;
case 0x6a32f4:c.instructions+=3;goto B6a32f4;
case 0x6a32f7:c.instructions+=2;goto B6a32f7;
case 0x6a32fd:c.instructions+=1;goto B6a32fd;
case 0x6a3303:goto L6a3303;
case 0x6a3306:c.instructions+=2;goto B6a3306;
case 0x6a3308:c.instructions+=1;goto B6a3308;
case 0x6a330e:goto L6a330e;
case 0x6a3311:c.instructions+=8;goto B6a3311;
case 0x6a3313:c.instructions+=7;goto B6a3313;
case 0x6a3316:c.instructions+=6;goto B6a3316;
case 0x6a3319:c.instructions+=5;goto B6a3319;
case 0x6a331c:c.instructions+=4;goto B6a331c;
case 0x6a331f:c.instructions+=3;goto B6a331f;
case 0x6a3322:c.instructions+=2;goto B6a3322;
case 0x6a3326:c.instructions+=1;goto B6a3326;
case 0x6a332c:goto L6a332c;
case 0x6a332e:c.instructions+=2;goto B6a332e;
case 0x6a3331:c.instructions+=1;goto B6a3331;
case 0x6a3333:goto L6a3333;
case 0x6a3336:c.instructions+=1;goto B6a3336;
case 0x6a3339:goto L6a3339;
case 0x6a333c:c.instructions+=4;goto B6a333c;
case 0x6a333e:c.instructions+=3;goto B6a333e;
case 0x6a3341:c.instructions+=2;goto B6a3341;
case 0x6a3344:c.instructions+=1;goto B6a3344;
case 0x6a3346:goto L6a3346;
case 0x6a334a:c.instructions+=3;goto B6a334a;
case 0x6a334b:c.instructions+=2;goto B6a334b;
case 0x6a334e:c.instructions+=1;goto B6a334e;
case 0x6a3350:goto L6a3350;
case 0x6a3353:goto L6a3353;
case 0x6a3359:goto L6a3359;
case 0x6a335b:c.instructions+=6;goto B6a335b;
case 0x6a3360:c.instructions+=5;goto B6a3360;
case 0x6a3362:c.instructions+=4;goto B6a3362;
case 0x6a3367:c.instructions+=3;goto B6a3367;
case 0x6a3368:c.instructions+=2;goto B6a3368;
case 0x6a336a:c.instructions+=1;goto B6a336a;
case 0x6a336f:goto L6a336f;
case 0x6a3372:c.instructions+=1;goto B6a3372;
case 0x6a3378:goto L6a3378;
case 0x6a337b:c.instructions+=5;goto B6a337b;
case 0x6a337e:c.instructions+=4;goto B6a337e;
case 0x6a337f:c.instructions+=3;goto B6a337f;
case 0x6a3381:c.instructions+=2;goto B6a3381;
case 0x6a3384:c.instructions+=1;goto B6a3384;
case 0x6a3389:goto L6a3389;
case 0x6a338c:c.instructions+=10;goto B6a338c;
case 0x6a338e:c.instructions+=9;goto B6a338e;
case 0x6a3391:c.instructions+=8;goto B6a3391;
case 0x6a3394:c.instructions+=7;goto B6a3394;
case 0x6a3397:c.instructions+=6;goto B6a3397;
case 0x6a339a:c.instructions+=5;goto B6a339a;
case 0x6a339e:c.instructions+=4;goto B6a339e;
case 0x6a33a2:c.instructions+=3;goto B6a33a2;
case 0x6a33a5:c.instructions+=2;goto B6a33a5;
case 0x6a33a8:c.instructions+=1;goto B6a33a8;
case 0x6a33ae:goto L6a33ae;
case 0x6a33b1:c.instructions+=16;goto B6a33b1;
case 0x6a33b3:c.instructions+=15;goto B6a33b3;
case 0x6a33b6:c.instructions+=14;goto B6a33b6;
case 0x6a33b9:c.instructions+=13;goto B6a33b9;
case 0x6a33bc:c.instructions+=12;goto B6a33bc;
case 0x6a33be:c.instructions+=11;goto B6a33be;
case 0x6a33c1:c.instructions+=10;goto B6a33c1;
case 0x6a33c4:c.instructions+=9;goto B6a33c4;
case 0x6a33c5:c.instructions+=8;goto B6a33c5;
case 0x6a33c6:c.instructions+=7;goto B6a33c6;
case 0x6a33c9:c.instructions+=6;goto B6a33c9;
case 0x6a33ca:c.instructions+=5;goto B6a33ca;
case 0x6a33cd:c.instructions+=4;goto B6a33cd;
case 0x6a33d0:c.instructions+=3;goto B6a33d0;
case 0x6a33d6:c.instructions+=2;goto B6a33d6;
case 0x6a33d8:c.instructions+=1;goto B6a33d8;
case 0x6a33dd:goto L6a33dd;
case 0x6a33e0:c.instructions+=9;goto B6a33e0;
case 0x6a33e3:c.instructions+=8;goto B6a33e3;
case 0x6a33e6:c.instructions+=7;goto B6a33e6;
case 0x6a33e9:c.instructions+=6;goto B6a33e9;
case 0x6a33ec:c.instructions+=5;goto B6a33ec;
case 0x6a33ef:c.instructions+=4;goto B6a33ef;
case 0x6a33f2:c.instructions+=3;goto B6a33f2;
case 0x6a33f5:c.instructions+=2;goto B6a33f5;
case 0x6a33f9:c.instructions+=1;goto B6a33f9;
case 0x6a33ff:goto L6a33ff;
case 0x6a3402:c.instructions+=25;goto B6a3402;
case 0x6a3405:c.instructions+=24;goto B6a3405;
case 0x6a3408:c.instructions+=23;goto B6a3408;
case 0x6a340b:c.instructions+=22;goto B6a340b;
case 0x6a340e:c.instructions+=21;goto B6a340e;
case 0x6a3411:c.instructions+=20;goto B6a3411;
case 0x6a3414:c.instructions+=19;goto B6a3414;
case 0x6a3417:c.instructions+=18;goto B6a3417;
case 0x6a341a:c.instructions+=17;goto B6a341a;
case 0x6a341d:c.instructions+=16;goto B6a341d;
case 0x6a3420:c.instructions+=15;goto B6a3420;
case 0x6a3423:c.instructions+=14;goto B6a3423;
case 0x6a3426:c.instructions+=13;goto B6a3426;
case 0x6a3429:c.instructions+=12;goto B6a3429;
case 0x6a342c:c.instructions+=11;goto B6a342c;
case 0x6a342f:c.instructions+=10;goto B6a342f;
case 0x6a3432:c.instructions+=9;goto B6a3432;
case 0x6a3435:c.instructions+=8;goto B6a3435;
case 0x6a3438:c.instructions+=7;goto B6a3438;
case 0x6a343b:c.instructions+=6;goto B6a343b;
case 0x6a343e:c.instructions+=5;goto B6a343e;
case 0x6a3440:c.instructions+=4;goto B6a3440;
case 0x6a3442:c.instructions+=3;goto B6a3442;
case 0x6a3445:c.instructions+=2;goto B6a3445;
case 0x6a3448:c.instructions+=1;goto B6a3448;
case 0x6a344e:goto L6a344e;
case 0x6a3451:c.instructions+=1;goto B6a3451;
case 0x6a3458:goto L6a3458;
case 0x6a345b:c.instructions+=4;goto B6a345b;
case 0x6a345c:c.instructions+=3;goto B6a345c;
case 0x6a345f:c.instructions+=2;goto B6a345f;
case 0x6a3462:c.instructions+=1;goto B6a3462;
case 0x6a3468:goto L6a3468;
case 0x6a346a:c.instructions+=2;goto B6a346a;
case 0x6a346d:c.instructions+=1;goto B6a346d;
case 0x6a3473:goto L6a3473;
case 0x6a3477:c.instructions+=1;goto B6a3477;
case 0x6a347d:goto L6a347d;
case 0x6a3480:c.instructions+=2;goto B6a3480;
case 0x6a3483:c.instructions+=1;goto B6a3483;
case 0x6a3489:goto L6a3489;
case 0x6a348c:c.instructions+=7;goto B6a348c;
case 0x6a348f:c.instructions+=6;goto B6a348f;
case 0x6a3492:c.instructions+=5;goto B6a3492;
case 0x6a3494:c.instructions+=4;goto B6a3494;
case 0x6a3499:c.instructions+=3;goto B6a3499;
case 0x6a349e:c.instructions+=2;goto B6a349e;
case 0x6a34a1:c.instructions+=1;goto B6a34a1;
case 0x6a34a3:goto L6a34a3;
case 0x6a34a5:c.instructions+=6;goto B6a34a5;
case 0x6a34a8:c.instructions+=5;goto B6a34a8;
case 0x6a34a9:c.instructions+=4;goto B6a34a9;
case 0x6a34aa:c.instructions+=3;goto B6a34aa;
case 0x6a34ad:c.instructions+=2;goto B6a34ad;
case 0x6a34ae:c.instructions+=1;goto B6a34ae;
case 0x6a34b0:goto L6a34b0;
case 0x6a34b3:c.instructions+=3;goto B6a34b3;
case 0x6a34b5:c.instructions+=2;goto B6a34b5;
case 0x6a34b7:c.instructions+=1;goto B6a34b7;
case 0x6a34b9:goto L6a34b9;
case 0x6a34bc:goto L6a34bc;
case 0x6a34bf:c.instructions+=3;goto B6a34bf;
case 0x6a34c2:c.instructions+=2;goto B6a34c2;
case 0x6a34c5:c.instructions+=1;goto B6a34c5;
case 0x6a34c7:goto L6a34c7;
case 0x6a34c8:c.instructions+=2;goto B6a34c8;
case 0x6a34ca:c.instructions+=1;goto B6a34ca;
case 0x6a34cc:goto L6a34cc;
case 0x6a34ce:c.instructions+=1;goto B6a34ce;
case 0x6a34d0:goto L6a34d0;
case 0x6a34d3:c.instructions+=7;goto B6a34d3;
case 0x6a34d6:c.instructions+=6;goto B6a34d6;
case 0x6a34d7:c.instructions+=5;goto B6a34d7;
case 0x6a34d8:c.instructions+=4;goto B6a34d8;
case 0x6a34d9:c.instructions+=3;goto B6a34d9;
case 0x6a34dc:c.instructions+=2;goto B6a34dc;
case 0x6a34de:c.instructions+=1;goto B6a34de;
case 0x6a34e3:goto L6a34e3;
case 0x6a34e5:c.instructions+=2;goto B6a34e5;
case 0x6a34e8:c.instructions+=1;goto B6a34e8;
case 0x6a34ee:goto L6a34ee;
case 0x6a34f1:c.instructions+=2;goto B6a34f1;
case 0x6a34f3:c.instructions+=1;goto B6a34f3;
case 0x6a34f5:goto L6a34f5;
case 0x6a34f7:c.instructions+=3;goto B6a34f7;
case 0x6a34fa:c.instructions+=2;goto B6a34fa;
case 0x6a34fc:c.instructions+=1;goto B6a34fc;
case 0x6a3501:goto L6a3501;
case 0x6a3508:goto L6a3508;
case 0x6a350b:c.instructions+=4;goto B6a350b;
case 0x6a350e:c.instructions+=3;goto B6a350e;
case 0x6a3511:c.instructions+=2;goto B6a3511;
case 0x6a3512:c.instructions+=1;goto B6a3512;
case 0x6a3515:goto L6a3515;
case 0x6a351a:goto L6a351a;
case 0x6a351c:c.instructions+=1;goto B6a351c;
case 0x6a351e:goto L6a351e;
case 0x6a3521:c.instructions+=3;goto B6a3521;
case 0x6a3524:c.instructions+=2;goto B6a3524;
case 0x6a3527:c.instructions+=1;goto B6a3527;
case 0x6a352d:goto L6a352d;
case 0x6a352f:c.instructions+=2;goto B6a352f;
case 0x6a3532:c.instructions+=1;goto B6a3532;
case 0x6a3538:goto L6a3538;
case 0x6a353b:c.instructions+=2;goto B6a353b;
case 0x6a353e:c.instructions+=1;goto B6a353e;
case 0x6a3544:goto L6a3544;
case 0x6a3547:c.instructions+=7;goto B6a3547;
case 0x6a354a:c.instructions+=6;goto B6a354a;
case 0x6a354d:c.instructions+=5;goto B6a354d;
case 0x6a354f:c.instructions+=4;goto B6a354f;
case 0x6a3554:c.instructions+=3;goto B6a3554;
case 0x6a3559:c.instructions+=2;goto B6a3559;
case 0x6a355c:c.instructions+=1;goto B6a355c;
case 0x6a3562:goto L6a3562;
case 0x6a3566:c.instructions+=1;goto B6a3566;
case 0x6a3568:goto L6a3568;
case 0x6a356b:c.instructions+=8;goto B6a356b;
case 0x6a356e:c.instructions+=7;goto B6a356e;
case 0x6a3570:c.instructions+=6;goto B6a3570;
case 0x6a3573:c.instructions+=5;goto B6a3573;
case 0x6a3576:c.instructions+=4;goto B6a3576;
case 0x6a3579:c.instructions+=3;goto B6a3579;
case 0x6a357c:c.instructions+=2;goto B6a357c;
case 0x6a3580:c.instructions+=1;goto B6a3580;
case 0x6a3582:goto L6a3582;
case 0x6a3586:c.instructions+=1;goto B6a3586;
case 0x6a358d:goto L6a358d;
case 0x6a358f:c.instructions+=11;goto B6a358f;
case 0x6a3592:c.instructions+=10;goto B6a3592;
case 0x6a3595:c.instructions+=9;goto B6a3595;
case 0x6a3597:c.instructions+=8;goto B6a3597;
case 0x6a3598:c.instructions+=7;goto B6a3598;
case 0x6a359a:c.instructions+=6;goto B6a359a;
case 0x6a359c:c.instructions+=5;goto B6a359c;
case 0x6a359d:c.instructions+=4;goto B6a359d;
case 0x6a359f:c.instructions+=3;goto B6a359f;
case 0x6a35a2:c.instructions+=2;goto B6a35a2;
case 0x6a35a5:c.instructions+=1;goto B6a35a5;
case 0x6a35a7:goto L6a35a7;
case 0x6a35ab:c.instructions+=1;goto B6a35ab;
case 0x6a35ad:goto L6a35ad;
case 0x6a35b0:c.instructions+=1;goto B6a35b0;
case 0x6a35b3:goto L6a35b3;
case 0x6a35b5:c.instructions+=6;goto B6a35b5;
case 0x6a35b8:c.instructions+=5;goto B6a35b8;
case 0x6a35bb:c.instructions+=4;goto B6a35bb;
case 0x6a35be:c.instructions+=3;goto B6a35be;
case 0x6a35c1:c.instructions+=2;goto B6a35c1;
case 0x6a35c5:c.instructions+=1;goto B6a35c5;
case 0x6a35c7:goto L6a35c7;
case 0x6a35c9:goto L6a35c9;
case 0x6a35cd:c.instructions+=5;goto B6a35cd;
case 0x6a35d0:c.instructions+=4;goto B6a35d0;
case 0x6a35d3:c.instructions+=3;goto B6a35d3;
case 0x6a35d6:c.instructions+=2;goto B6a35d6;
case 0x6a35d9:c.instructions+=1;goto B6a35d9;
case 0x6a35db:goto L6a35db;
case 0x6a35e0:goto L6a35e0;
case 0x6a35e2:c.instructions+=4;goto B6a35e2;
case 0x6a35e4:c.instructions+=3;goto B6a35e4;
case 0x6a35e9:c.instructions+=2;goto B6a35e9;
case 0x6a35eb:c.instructions+=1;goto B6a35eb;
case 0x6a35f0:goto L6a35f0;
case 0x6a35f2:c.instructions+=6;goto B6a35f2;
case 0x6a35f4:c.instructions+=5;goto B6a35f4;
case 0x6a35f6:c.instructions+=4;goto B6a35f6;
case 0x6a35fb:c.instructions+=3;goto B6a35fb;
case 0x6a35fd:c.instructions+=2;goto B6a35fd;
case 0x6a3600:c.instructions+=1;goto B6a3600;
case 0x6a3605:goto L6a3605;
case 0x6a3608:c.instructions+=1;goto B6a3608;
case 0x6a360e:goto L6a360e;
case 0x6a3611:c.instructions+=1;goto B6a3611;
case 0x6a3617:goto L6a3617;
case 0x6a361a:c.instructions+=6;goto B6a361a;
case 0x6a361d:c.instructions+=5;goto B6a361d;
case 0x6a3620:c.instructions+=4;goto B6a3620;
case 0x6a3621:c.instructions+=3;goto B6a3621;
case 0x6a3623:c.instructions+=2;goto B6a3623;
case 0x6a3626:c.instructions+=1;goto B6a3626;
case 0x6a362b:goto L6a362b;
case 0x6a362e:c.instructions+=2;goto B6a362e;
case 0x6a362f:c.instructions+=1;goto B6a362f;
case 0x6a3634:goto L6a3634;
case 0x6a3638:c.instructions+=1;goto B6a3638;
case 0x6a363a:goto L6a363a;
case 0x6a363d:goto L6a363d;
case 0x6a3640:c.instructions+=3;goto B6a3640;
case 0x6a3643:c.instructions+=2;goto B6a3643;
case 0x6a3645:c.instructions+=1;goto B6a3645;
case 0x6a3647:goto L6a3647;
case 0x6a364a:goto L6a364a;
case 0x6a364d:c.instructions+=17;goto B6a364d;
case 0x6a364f:c.instructions+=16;goto B6a364f;
case 0x6a3652:c.instructions+=15;goto B6a3652;
case 0x6a3655:c.instructions+=14;goto B6a3655;
case 0x6a3658:c.instructions+=13;goto B6a3658;
case 0x6a3659:c.instructions+=12;goto B6a3659;
case 0x6a365a:c.instructions+=11;goto B6a365a;
case 0x6a365d:c.instructions+=10;goto B6a365d;
case 0x6a3660:c.instructions+=9;goto B6a3660;
case 0x6a3663:c.instructions+=8;goto B6a3663;
case 0x6a3666:c.instructions+=7;goto B6a3666;
case 0x6a3669:c.instructions+=6;goto B6a3669;
case 0x6a366c:c.instructions+=5;goto B6a366c;
case 0x6a366f:c.instructions+=4;goto B6a366f;
case 0x6a3672:c.instructions+=3;goto B6a3672;
case 0x6a3678:c.instructions+=2;goto B6a3678;
case 0x6a367a:c.instructions+=1;goto B6a367a;
case 0x6a367f:goto L6a367f;
case 0x6a3682:c.instructions+=26;goto B6a3682;
case 0x6a3685:c.instructions+=25;goto B6a3685;
case 0x6a3688:c.instructions+=24;goto B6a3688;
case 0x6a368b:c.instructions+=23;goto B6a368b;
case 0x6a368e:c.instructions+=22;goto B6a368e;
case 0x6a3691:c.instructions+=21;goto B6a3691;
case 0x6a3694:c.instructions+=20;goto B6a3694;
case 0x6a3697:c.instructions+=19;goto B6a3697;
case 0x6a369a:c.instructions+=18;goto B6a369a;
case 0x6a369d:c.instructions+=17;goto B6a369d;
case 0x6a36a0:c.instructions+=16;goto B6a36a0;
case 0x6a36a3:c.instructions+=15;goto B6a36a3;
case 0x6a36a6:c.instructions+=14;goto B6a36a6;
case 0x6a36a9:c.instructions+=13;goto B6a36a9;
case 0x6a36ac:c.instructions+=12;goto B6a36ac;
case 0x6a36af:c.instructions+=11;goto B6a36af;
case 0x6a36b2:c.instructions+=10;goto B6a36b2;
case 0x6a36b5:c.instructions+=9;goto B6a36b5;
case 0x6a36b8:c.instructions+=8;goto B6a36b8;
case 0x6a36bb:c.instructions+=7;goto B6a36bb;
case 0x6a36be:c.instructions+=6;goto B6a36be;
case 0x6a36c1:c.instructions+=5;goto B6a36c1;
case 0x6a36c4:c.instructions+=4;goto B6a36c4;
case 0x6a36c7:c.instructions+=3;goto B6a36c7;
case 0x6a36ca:c.instructions+=2;goto B6a36ca;
case 0x6a36ce:c.instructions+=1;goto B6a36ce;
case 0x6a36d4:goto L6a36d4;
case 0x6a36d7:c.instructions+=15;goto B6a36d7;
case 0x6a36d9:c.instructions+=14;goto B6a36d9;
case 0x6a36dc:c.instructions+=13;goto B6a36dc;
case 0x6a36df:c.instructions+=12;goto B6a36df;
case 0x6a36e0:c.instructions+=11;goto B6a36e0;
case 0x6a36e1:c.instructions+=10;goto B6a36e1;
case 0x6a36e4:c.instructions+=9;goto B6a36e4;
case 0x6a36e7:c.instructions+=8;goto B6a36e7;
case 0x6a36ed:c.instructions+=7;goto B6a36ed;
case 0x6a36f0:c.instructions+=6;goto B6a36f0;
case 0x6a36f3:c.instructions+=5;goto B6a36f3;
case 0x6a36f6:c.instructions+=4;goto B6a36f6;
case 0x6a36f9:c.instructions+=3;goto B6a36f9;
case 0x6a36fb:c.instructions+=2;goto B6a36fb;
case 0x6a36fc:c.instructions+=1;goto B6a36fc;
case 0x6a3701:goto L6a3701;
case 0x6a3704:c.instructions+=29;goto B6a3704;
case 0x6a3707:c.instructions+=28;goto B6a3707;
case 0x6a370a:c.instructions+=27;goto B6a370a;
case 0x6a370d:c.instructions+=26;goto B6a370d;
case 0x6a3710:c.instructions+=25;goto B6a3710;
case 0x6a3713:c.instructions+=24;goto B6a3713;
case 0x6a3716:c.instructions+=23;goto B6a3716;
case 0x6a3719:c.instructions+=22;goto B6a3719;
case 0x6a371c:c.instructions+=21;goto B6a371c;
case 0x6a371f:c.instructions+=20;goto B6a371f;
case 0x6a3722:c.instructions+=19;goto B6a3722;
case 0x6a3725:c.instructions+=18;goto B6a3725;
case 0x6a3728:c.instructions+=17;goto B6a3728;
case 0x6a372b:c.instructions+=16;goto B6a372b;
case 0x6a372e:c.instructions+=15;goto B6a372e;
case 0x6a3731:c.instructions+=14;goto B6a3731;
case 0x6a3735:c.instructions+=13;goto B6a3735;
case 0x6a3738:c.instructions+=12;goto B6a3738;
case 0x6a373b:c.instructions+=11;goto B6a373b;
case 0x6a373e:c.instructions+=10;goto B6a373e;
case 0x6a3741:c.instructions+=9;goto B6a3741;
case 0x6a3744:c.instructions+=8;goto B6a3744;
case 0x6a3747:c.instructions+=7;goto B6a3747;
case 0x6a374a:c.instructions+=6;goto B6a374a;
case 0x6a374d:c.instructions+=5;goto B6a374d;
case 0x6a3750:c.instructions+=4;goto B6a3750;
case 0x6a3753:c.instructions+=3;goto B6a3753;
case 0x6a3756:c.instructions+=2;goto B6a3756;
case 0x6a3759:c.instructions+=1;goto B6a3759;
case 0x6a375f:goto L6a375f;
case 0x6a3762:c.instructions+=6;goto B6a3762;
case 0x6a3768:c.instructions+=5;goto B6a3768;
case 0x6a376b:c.instructions+=4;goto B6a376b;
case 0x6a376e:c.instructions+=3;goto B6a376e;
case 0x6a3771:c.instructions+=2;goto B6a3771;
case 0x6a3774:c.instructions+=1;goto B6a3774;
case 0x6a3776:goto L6a3776;
case 0x6a3779:c.instructions+=3;goto B6a3779;
case 0x6a377c:c.instructions+=2;goto B6a377c;
case 0x6a377e:c.instructions+=1;goto B6a377e;
case 0x6a377f:goto L6a377f;
case 0x6a3781:c.instructions+=2;goto B6a3781;
case 0x6a3784:c.instructions+=1;goto B6a3784;
case 0x6a3786:goto L6a3786;
case 0x6a3789:c.instructions+=7;goto B6a3789;
case 0x6a378c:c.instructions+=6;goto B6a378c;
case 0x6a378e:c.instructions+=5;goto B6a378e;
case 0x6a378f:c.instructions+=4;goto B6a378f;
case 0x6a3790:c.instructions+=3;goto B6a3790;
case 0x6a3791:c.instructions+=2;goto B6a3791;
case 0x6a3794:c.instructions+=1;goto B6a3794;
case 0x6a3799:goto L6a3799;
case 0x6a379c:c.instructions+=5;goto B6a379c;
case 0x6a379f:c.instructions+=4;goto B6a379f;
case 0x6a37a2:c.instructions+=3;goto B6a37a2;
case 0x6a37a5:c.instructions+=2;goto B6a37a5;
case 0x6a37a8:c.instructions+=1;goto B6a37a8;
case 0x6a37ab:goto L6a37ab;
case 0x6a37ae:c.instructions+=3;goto B6a37ae;
case 0x6a37b1:c.instructions+=2;goto B6a37b1;
case 0x6a37b4:c.instructions+=1;goto B6a37b4;
case 0x6a37ba:goto L6a37ba;
case 0x6a37be:c.instructions+=1;goto B6a37be;
case 0x6a37c4:goto L6a37c4;
case 0x6a37c8:c.instructions+=2;goto B6a37c8;
case 0x6a37cc:c.instructions+=1;goto B6a37cc;
case 0x6a37d2:goto L6a37d2;
case 0x6a37d5:c.instructions+=8;goto B6a37d5;
case 0x6a37d8:c.instructions+=7;goto B6a37d8;
case 0x6a37db:c.instructions+=6;goto B6a37db;
case 0x6a37de:c.instructions+=5;goto B6a37de;
case 0x6a37e0:c.instructions+=4;goto B6a37e0;
case 0x6a37e5:c.instructions+=3;goto B6a37e5;
case 0x6a37ea:c.instructions+=2;goto B6a37ea;
case 0x6a37ed:c.instructions+=1;goto B6a37ed;
case 0x6a37f3:goto L6a37f3;
case 0x6a37f6:c.instructions+=8;goto B6a37f6;
case 0x6a37f8:c.instructions+=7;goto B6a37f8;
case 0x6a37fb:c.instructions+=6;goto B6a37fb;
case 0x6a37fe:c.instructions+=5;goto B6a37fe;
case 0x6a3801:c.instructions+=4;goto B6a3801;
case 0x6a3804:c.instructions+=3;goto B6a3804;
case 0x6a3807:c.instructions+=2;goto B6a3807;
case 0x6a380b:c.instructions+=1;goto B6a380b;
case 0x6a3811:goto L6a3811;
case 0x6a3815:c.instructions+=2;goto B6a3815;
case 0x6a3819:c.instructions+=1;goto B6a3819;
case 0x6a381b:goto L6a381b;
case 0x6a381e:c.instructions+=3;goto B6a381e;
case 0x6a3820:c.instructions+=2;goto B6a3820;
case 0x6a3823:c.instructions+=1;goto B6a3823;
case 0x6a3826:goto L6a3826;
case 0x6a3828:c.instructions+=3;goto B6a3828;
case 0x6a382b:c.instructions+=2;goto B6a382b;
case 0x6a382e:c.instructions+=1;goto B6a382e;
case 0x6a3830:goto L6a3830;
case 0x6a3833:c.instructions+=4;goto B6a3833;
case 0x6a3836:c.instructions+=3;goto B6a3836;
case 0x6a3839:c.instructions+=2;goto B6a3839;
case 0x6a383c:c.instructions+=1;goto B6a383c;
case 0x6a383e:goto L6a383e;
case 0x6a3841:c.instructions+=2;goto B6a3841;
case 0x6a3844:c.instructions+=1;goto B6a3844;
case 0x6a384a:goto L6a384a;
case 0x6a384d:c.instructions+=4;goto B6a384d;
case 0x6a3851:c.instructions+=3;goto B6a3851;
case 0x6a3855:c.instructions+=2;goto B6a3855;
case 0x6a3857:c.instructions+=1;goto B6a3857;
case 0x6a385d:goto L6a385d;
case 0x6a3860:c.instructions+=5;goto B6a3860;
case 0x6a3863:c.instructions+=4;goto B6a3863;
case 0x6a3866:c.instructions+=3;goto B6a3866;
case 0x6a3868:c.instructions+=2;goto B6a3868;
case 0x6a386b:c.instructions+=1;goto B6a386b;
case 0x6a3871:goto L6a3871;
case 0x6a3874:c.instructions+=6;goto B6a3874;
case 0x6a3877:c.instructions+=5;goto B6a3877;
case 0x6a387a:c.instructions+=4;goto B6a387a;
case 0x6a387d:c.instructions+=3;goto B6a387d;
case 0x6a387f:c.instructions+=2;goto B6a387f;
case 0x6a3882:c.instructions+=1;goto B6a3882;
case 0x6a3884:goto L6a3884;
case 0x6a3887:c.instructions+=2;goto B6a3887;
case 0x6a388a:c.instructions+=1;goto B6a388a;
case 0x6a388d:goto L6a388d;
case 0x6a3890:c.instructions+=3;goto B6a3890;
case 0x6a3892:c.instructions+=2;goto B6a3892;
case 0x6a3895:c.instructions+=1;goto B6a3895;
case 0x6a3897:goto L6a3897;
case 0x6a389a:c.instructions+=3;goto B6a389a;
case 0x6a389d:c.instructions+=2;goto B6a389d;
case 0x6a38a0:c.instructions+=1;goto B6a38a0;
case 0x6a38a2:goto L6a38a2;
case 0x6a38a3:goto L6a38a3;
case 0x6a38a7:c.instructions+=2;goto B6a38a7;
case 0x6a38aa:c.instructions+=1;goto B6a38aa;
case 0x6a38ac:goto L6a38ac;
case 0x6a38ae:c.instructions+=6;goto B6a38ae;
case 0x6a38b4:c.instructions+=5;goto B6a38b4;
case 0x6a38b6:c.instructions+=4;goto B6a38b6;
case 0x6a38bc:c.instructions+=3;goto B6a38bc;
case 0x6a38bd:c.instructions+=2;goto B6a38bd;
case 0x6a38bf:c.instructions+=1;goto B6a38bf;
case 0x6a38c4:goto L6a38c4;
case 0x6a38c7:c.instructions+=1;goto B6a38c7;
case 0x6a38cd:goto L6a38cd;
case 0x6a38d0:c.instructions+=5;goto B6a38d0;
case 0x6a38d3:c.instructions+=4;goto B6a38d3;
case 0x6a38d4:c.instructions+=3;goto B6a38d4;
case 0x6a38d6:c.instructions+=2;goto B6a38d6;
case 0x6a38d9:c.instructions+=1;goto B6a38d9;
case 0x6a38de:goto L6a38de;
case 0x6a38e1:c.instructions+=4;goto B6a38e1;
case 0x6a38e4:c.instructions+=3;goto B6a38e4;
case 0x6a38e7:c.instructions+=2;goto B6a38e7;
case 0x6a38ea:c.instructions+=1;goto B6a38ea;
case 0x6a38ec:goto L6a38ec;
case 0x6a38f0:goto L6a38f0;
case 0x6a38f3:c.instructions+=5;goto B6a38f3;
case 0x6a38f6:c.instructions+=4;goto B6a38f6;
case 0x6a38f9:c.instructions+=3;goto B6a38f9;
case 0x6a38fc:c.instructions+=2;goto B6a38fc;
case 0x6a38ff:c.instructions+=1;goto B6a38ff;
case 0x6a3901:goto L6a3901;
case 0x6a3904:c.instructions+=4;goto B6a3904;
case 0x6a3907:c.instructions+=3;goto B6a3907;
case 0x6a390a:c.instructions+=2;goto B6a390a;
case 0x6a390d:c.instructions+=1;goto B6a390d;
case 0x6a390f:goto L6a390f;
case 0x6a3912:c.instructions+=14;goto B6a3912;
case 0x6a3915:c.instructions+=13;goto B6a3915;
case 0x6a3918:c.instructions+=12;goto B6a3918;
case 0x6a391b:c.instructions+=11;goto B6a391b;
case 0x6a391e:c.instructions+=10;goto B6a391e;
case 0x6a3921:c.instructions+=9;goto B6a3921;
case 0x6a3924:c.instructions+=8;goto B6a3924;
case 0x6a3927:c.instructions+=7;goto B6a3927;
case 0x6a392a:c.instructions+=6;goto B6a392a;
case 0x6a392d:c.instructions+=5;goto B6a392d;
case 0x6a3930:c.instructions+=4;goto B6a3930;
case 0x6a3934:c.instructions+=3;goto B6a3934;
case 0x6a3937:c.instructions+=2;goto B6a3937;
case 0x6a393a:c.instructions+=1;goto B6a393a;
case 0x6a393d:goto L6a393d;
case 0x6a3940:c.instructions+=3;goto B6a3940;
case 0x6a3943:c.instructions+=2;goto B6a3943;
case 0x6a3946:c.instructions+=1;goto B6a3946;
case 0x6a3948:goto L6a3948;
case 0x6a394b:c.instructions+=3;goto B6a394b;
case 0x6a394e:c.instructions+=2;goto B6a394e;
case 0x6a3951:c.instructions+=1;goto B6a3951;
case 0x6a3957:goto L6a3957;
case 0x6a395b:c.instructions+=1;goto B6a395b;
case 0x6a395d:goto L6a395d;
case 0x6a3960:c.instructions+=5;goto B6a3960;
case 0x6a3963:c.instructions+=4;goto B6a3963;
case 0x6a3966:c.instructions+=3;goto B6a3966;
case 0x6a3968:c.instructions+=2;goto B6a3968;
case 0x6a396b:c.instructions+=1;goto B6a396b;
case 0x6a396e:goto L6a396e;
case 0x6a3970:goto L6a3970;
case 0x6a3973:goto L6a3973;
case 0x6a3976:c.instructions+=4;goto B6a3976;
case 0x6a3979:c.instructions+=3;goto B6a3979;
case 0x6a397a:c.instructions+=2;goto B6a397a;
case 0x6a397d:c.instructions+=1;goto B6a397d;
case 0x6a397f:goto L6a397f;
case 0x6a3982:c.instructions+=2;goto B6a3982;
case 0x6a3985:c.instructions+=1;goto B6a3985;
case 0x6a3988:goto L6a3988;
case 0x6a398b:c.instructions+=6;goto B6a398b;
case 0x6a398e:c.instructions+=5;goto B6a398e;
case 0x6a3992:c.instructions+=4;goto B6a3992;
case 0x6a3993:c.instructions+=3;goto B6a3993;
case 0x6a3996:c.instructions+=2;goto B6a3996;
case 0x6a3999:c.instructions+=1;goto B6a3999;
case 0x6a399b:goto L6a399b;
case 0x6a399e:c.instructions+=3;goto B6a399e;
case 0x6a39a2:c.instructions+=2;goto B6a39a2;
case 0x6a39a4:c.instructions+=1;goto B6a39a4;
case 0x6a39a6:goto L6a39a6;
case 0x6a39a9:c.instructions+=1;goto B6a39a9;
case 0x6a39ac:goto L6a39ac;
case 0x6a39af:c.instructions+=7;goto B6a39af;
case 0x6a39b2:c.instructions+=6;goto B6a39b2;
case 0x6a39b6:c.instructions+=5;goto B6a39b6;
case 0x6a39b9:c.instructions+=4;goto B6a39b9;
case 0x6a39bc:c.instructions+=3;goto B6a39bc;
case 0x6a39bf:c.instructions+=2;goto B6a39bf;
case 0x6a39c2:c.instructions+=1;goto B6a39c2;
case 0x6a39c4:goto L6a39c4;
case 0x6a39c6:c.instructions+=2;goto B6a39c6;
case 0x6a39c8:c.instructions+=1;goto B6a39c8;
case 0x6a39cd:goto L6a39cd;
case 0x6a39d0:c.instructions+=4;goto B6a39d0;
case 0x6a39d3:c.instructions+=3;goto B6a39d3;
case 0x6a39d7:c.instructions+=2;goto B6a39d7;
case 0x6a39da:c.instructions+=1;goto B6a39da;
case 0x6a39e1:goto L6a39e1;
case 0x6a39e4:c.instructions+=3;goto B6a39e4;
case 0x6a39e7:c.instructions+=2;goto B6a39e7;
case 0x6a39ea:c.instructions+=1;goto B6a39ea;
case 0x6a39f0:goto L6a39f0;
case 0x6a39f4:c.instructions+=2;goto B6a39f4;
case 0x6a39f8:c.instructions+=1;goto B6a39f8;
case 0x6a39fe:goto L6a39fe;
case 0x6a3a01:c.instructions+=8;goto B6a3a01;
case 0x6a3a04:c.instructions+=7;goto B6a3a04;
case 0x6a3a07:c.instructions+=6;goto B6a3a07;
case 0x6a3a0a:c.instructions+=5;goto B6a3a0a;
case 0x6a3a0c:c.instructions+=4;goto B6a3a0c;
case 0x6a3a11:c.instructions+=3;goto B6a3a11;
case 0x6a3a16:c.instructions+=2;goto B6a3a16;
case 0x6a3a19:c.instructions+=1;goto B6a3a19;
case 0x6a3a1f:goto L6a3a1f;
case 0x6a3a22:c.instructions+=8;goto B6a3a22;
case 0x6a3a25:c.instructions+=7;goto B6a3a25;
case 0x6a3a27:c.instructions+=6;goto B6a3a27;
case 0x6a3a2a:c.instructions+=5;goto B6a3a2a;
case 0x6a3a2d:c.instructions+=4;goto B6a3a2d;
case 0x6a3a30:c.instructions+=3;goto B6a3a30;
case 0x6a3a33:c.instructions+=2;goto B6a3a33;
case 0x6a3a37:c.instructions+=1;goto B6a3a37;
case 0x6a3a3d:goto L6a3a3d;
case 0x6a3a40:c.instructions+=6;goto B6a3a40;
case 0x6a3a42:c.instructions+=5;goto B6a3a42;
case 0x6a3a45:c.instructions+=4;goto B6a3a45;
case 0x6a3a48:c.instructions+=3;goto B6a3a48;
case 0x6a3a4a:c.instructions+=2;goto B6a3a4a;
case 0x6a3a4d:c.instructions+=1;goto B6a3a4d;
case 0x6a3a4f:goto L6a3a4f;
case 0x6a3a52:c.instructions+=4;goto B6a3a52;
case 0x6a3a55:c.instructions+=3;goto B6a3a55;
case 0x6a3a58:c.instructions+=2;goto B6a3a58;
case 0x6a3a5b:c.instructions+=1;goto B6a3a5b;
case 0x6a3a5e:goto L6a3a5e;
case 0x6a3a61:c.instructions+=8;goto B6a3a61;
case 0x6a3a64:c.instructions+=7;goto B6a3a64;
case 0x6a3a67:c.instructions+=6;goto B6a3a67;
case 0x6a3a6a:c.instructions+=5;goto B6a3a6a;
case 0x6a3a6c:c.instructions+=4;goto B6a3a6c;
case 0x6a3a6f:c.instructions+=3;goto B6a3a6f;
case 0x6a3a72:c.instructions+=2;goto B6a3a72;
case 0x6a3a75:c.instructions+=1;goto B6a3a75;
case 0x6a3a77:goto L6a3a77;
case 0x6a3a7a:goto L6a3a7a;
case 0x6a3a7d:c.instructions+=3;goto B6a3a7d;
case 0x6a3a81:c.instructions+=2;goto B6a3a81;
case 0x6a3a83:c.instructions+=1;goto B6a3a83;
case 0x6a3a85:goto L6a3a85;
case 0x6a3a88:c.instructions+=3;goto B6a3a88;
case 0x6a3a8b:c.instructions+=2;goto B6a3a8b;
case 0x6a3a8e:c.instructions+=1;goto B6a3a8e;
case 0x6a3a91:goto L6a3a91;
case 0x6a3a93:c.instructions+=3;goto B6a3a93;
case 0x6a3a96:c.instructions+=2;goto B6a3a96;
case 0x6a3a99:c.instructions+=1;goto B6a3a99;
case 0x6a3a9b:goto L6a3a9b;
case 0x6a3a9e:c.instructions+=4;goto B6a3a9e;
case 0x6a3aa1:c.instructions+=3;goto B6a3aa1;
case 0x6a3aa4:c.instructions+=2;goto B6a3aa4;
case 0x6a3aa7:c.instructions+=1;goto B6a3aa7;
case 0x6a3aa9:goto L6a3aa9;
case 0x6a3aab:goto L6a3aab;
case 0x6a3aae:goto L6a3aae;
case 0x6a3ab1:c.instructions+=5;goto B6a3ab1;
case 0x6a3ab4:c.instructions+=4;goto B6a3ab4;
case 0x6a3ab8:c.instructions+=3;goto B6a3ab8;
case 0x6a3abc:c.instructions+=2;goto B6a3abc;
case 0x6a3abf:c.instructions+=1;goto B6a3abf;
case 0x6a3ac1:goto L6a3ac1;
case 0x6a3ac4:goto L6a3ac4;
case 0x6a3ac6:c.instructions+=1;goto B6a3ac6;
case 0x6a3acc:goto L6a3acc;
case 0x6a3acf:c.instructions+=3;goto B6a3acf;
case 0x6a3ad2:c.instructions+=2;goto B6a3ad2;
case 0x6a3ad4:c.instructions+=1;goto B6a3ad4;
case 0x6a3ada:goto L6a3ada;
case 0x6a3add:c.instructions+=1;goto B6a3add;
case 0x6a3adf:goto L6a3adf;
case 0x6a3ae1:c.instructions+=1;goto B6a3ae1;
case 0x6a3ae7:goto L6a3ae7;
case 0x6a3aeb:c.instructions+=2;goto B6a3aeb;
case 0x6a3aee:c.instructions+=1;goto B6a3aee;
case 0x6a3af4:goto L6a3af4;
case 0x6a3af6:c.instructions+=6;goto B6a3af6;
case 0x6a3afc:c.instructions+=5;goto B6a3afc;
case 0x6a3afe:c.instructions+=4;goto B6a3afe;
case 0x6a3b04:c.instructions+=3;goto B6a3b04;
case 0x6a3b05:c.instructions+=2;goto B6a3b05;
case 0x6a3b07:c.instructions+=1;goto B6a3b07;
case 0x6a3b0c:goto L6a3b0c;
case 0x6a3b0f:c.instructions+=1;goto B6a3b0f;
case 0x6a3b15:goto L6a3b15;
case 0x6a3b18:c.instructions+=5;goto B6a3b18;
case 0x6a3b1b:c.instructions+=4;goto B6a3b1b;
case 0x6a3b1c:c.instructions+=3;goto B6a3b1c;
case 0x6a3b1e:c.instructions+=2;goto B6a3b1e;
case 0x6a3b21:c.instructions+=1;goto B6a3b21;
case 0x6a3b26:goto L6a3b26;
case 0x6a3b28:c.instructions+=4;goto B6a3b28;
case 0x6a3b2b:c.instructions+=3;goto B6a3b2b;
case 0x6a3b32:c.instructions+=2;goto B6a3b32;
case 0x6a3b35:c.instructions+=1;goto B6a3b35;
case 0x6a3b37:goto L6a3b37;
case 0x6a3b3a:goto L6a3b3a;
case 0x6a3b3d:c.instructions+=11;goto B6a3b3d;
case 0x6a3b40:c.instructions+=10;goto B6a3b40;
case 0x6a3b43:c.instructions+=9;goto B6a3b43;
case 0x6a3b46:c.instructions+=8;goto B6a3b46;
case 0x6a3b49:c.instructions+=7;goto B6a3b49;
case 0x6a3b4c:c.instructions+=6;goto B6a3b4c;
case 0x6a3b4f:c.instructions+=5;goto B6a3b4f;
case 0x6a3b52:c.instructions+=4;goto B6a3b52;
case 0x6a3b55:c.instructions+=3;goto B6a3b55;
case 0x6a3b58:c.instructions+=2;goto B6a3b58;
case 0x6a3b5b:c.instructions+=1;goto B6a3b5b;
case 0x6a3b5d:goto L6a3b5d;
case 0x6a3b60:c.instructions+=12;goto B6a3b60;
case 0x6a3b63:c.instructions+=11;goto B6a3b63;
case 0x6a3b66:c.instructions+=10;goto B6a3b66;
case 0x6a3b69:c.instructions+=9;goto B6a3b69;
case 0x6a3b6c:c.instructions+=8;goto B6a3b6c;
case 0x6a3b6f:c.instructions+=7;goto B6a3b6f;
case 0x6a3b72:c.instructions+=6;goto B6a3b72;
case 0x6a3b75:c.instructions+=5;goto B6a3b75;
case 0x6a3b78:c.instructions+=4;goto B6a3b78;
case 0x6a3b7b:c.instructions+=3;goto B6a3b7b;
case 0x6a3b7f:c.instructions+=2;goto B6a3b7f;
case 0x6a3b82:c.instructions+=1;goto B6a3b82;
case 0x6a3b85:goto L6a3b85;
case 0x6a3b88:c.instructions+=3;goto B6a3b88;
case 0x6a3b8b:c.instructions+=2;goto B6a3b8b;
case 0x6a3b8e:c.instructions+=1;goto B6a3b8e;
case 0x6a3b90:goto L6a3b90;
case 0x6a3b93:c.instructions+=3;goto B6a3b93;
case 0x6a3b97:c.instructions+=2;goto B6a3b97;
case 0x6a3b99:c.instructions+=1;goto B6a3b99;
case 0x6a3b9f:goto L6a3b9f;
case 0x6a3ba2:c.instructions+=5;goto B6a3ba2;
case 0x6a3ba5:c.instructions+=4;goto B6a3ba5;
case 0x6a3ba8:c.instructions+=3;goto B6a3ba8;
case 0x6a3baa:c.instructions+=2;goto B6a3baa;
case 0x6a3bad:c.instructions+=1;goto B6a3bad;
case 0x6a3bb3:goto L6a3bb3;
case 0x6a3bb6:c.instructions+=6;goto B6a3bb6;
case 0x6a3bb9:c.instructions+=5;goto B6a3bb9;
case 0x6a3bbc:c.instructions+=4;goto B6a3bbc;
case 0x6a3bbf:c.instructions+=3;goto B6a3bbf;
case 0x6a3bc1:c.instructions+=2;goto B6a3bc1;
case 0x6a3bc4:c.instructions+=1;goto B6a3bc4;
case 0x6a3bc6:goto L6a3bc6;
case 0x6a3bc9:c.instructions+=2;goto B6a3bc9;
case 0x6a3bcc:c.instructions+=1;goto B6a3bcc;
case 0x6a3bcf:goto L6a3bcf;
case 0x6a3bd2:c.instructions+=3;goto B6a3bd2;
case 0x6a3bd4:c.instructions+=2;goto B6a3bd4;
case 0x6a3bd7:c.instructions+=1;goto B6a3bd7;
case 0x6a3bd9:goto L6a3bd9;
case 0x6a3bdc:c.instructions+=3;goto B6a3bdc;
case 0x6a3bdf:c.instructions+=2;goto B6a3bdf;
case 0x6a3be2:c.instructions+=1;goto B6a3be2;
case 0x6a3be4:goto L6a3be4;
case 0x6a3be5:goto L6a3be5;
case 0x6a3be9:c.instructions+=2;goto B6a3be9;
case 0x6a3bec:c.instructions+=1;goto B6a3bec;
case 0x6a3bee:goto L6a3bee;
case 0x6a3bf0:c.instructions+=6;goto B6a3bf0;
case 0x6a3bf6:c.instructions+=5;goto B6a3bf6;
case 0x6a3bf8:c.instructions+=4;goto B6a3bf8;
case 0x6a3bfe:c.instructions+=3;goto B6a3bfe;
case 0x6a3bff:c.instructions+=2;goto B6a3bff;
case 0x6a3c01:c.instructions+=1;goto B6a3c01;
case 0x6a3c06:goto L6a3c06;
case 0x6a3c09:c.instructions+=1;goto B6a3c09;
case 0x6a3c0f:goto L6a3c0f;
case 0x6a3c12:c.instructions+=5;goto B6a3c12;
case 0x6a3c15:c.instructions+=4;goto B6a3c15;
case 0x6a3c16:c.instructions+=3;goto B6a3c16;
case 0x6a3c18:c.instructions+=2;goto B6a3c18;
case 0x6a3c1b:c.instructions+=1;goto B6a3c1b;
case 0x6a3c20:goto L6a3c20;
case 0x6a3c23:c.instructions+=4;goto B6a3c23;
case 0x6a3c26:c.instructions+=3;goto B6a3c26;
case 0x6a3c29:c.instructions+=2;goto B6a3c29;
case 0x6a3c2c:c.instructions+=1;goto B6a3c2c;
case 0x6a3c2e:goto L6a3c2e;
case 0x6a3c32:goto L6a3c32;
case 0x6a3c35:c.instructions+=5;goto B6a3c35;
case 0x6a3c38:c.instructions+=4;goto B6a3c38;
case 0x6a3c3b:c.instructions+=3;goto B6a3c3b;
case 0x6a3c3e:c.instructions+=2;goto B6a3c3e;
case 0x6a3c41:c.instructions+=1;goto B6a3c41;
case 0x6a3c43:goto L6a3c43;
case 0x6a3c46:c.instructions+=4;goto B6a3c46;
case 0x6a3c49:c.instructions+=3;goto B6a3c49;
case 0x6a3c4c:c.instructions+=2;goto B6a3c4c;
case 0x6a3c4f:c.instructions+=1;goto B6a3c4f;
case 0x6a3c51:goto L6a3c51;
case 0x6a3c54:c.instructions+=14;goto B6a3c54;
case 0x6a3c57:c.instructions+=13;goto B6a3c57;
case 0x6a3c5a:c.instructions+=12;goto B6a3c5a;
case 0x6a3c5d:c.instructions+=11;goto B6a3c5d;
case 0x6a3c60:c.instructions+=10;goto B6a3c60;
case 0x6a3c63:c.instructions+=9;goto B6a3c63;
case 0x6a3c66:c.instructions+=8;goto B6a3c66;
case 0x6a3c69:c.instructions+=7;goto B6a3c69;
case 0x6a3c6c:c.instructions+=6;goto B6a3c6c;
case 0x6a3c6f:c.instructions+=5;goto B6a3c6f;
case 0x6a3c72:c.instructions+=4;goto B6a3c72;
case 0x6a3c76:c.instructions+=3;goto B6a3c76;
case 0x6a3c79:c.instructions+=2;goto B6a3c79;
case 0x6a3c7c:c.instructions+=1;goto B6a3c7c;
case 0x6a3c7f:goto L6a3c7f;
case 0x6a3c82:c.instructions+=3;goto B6a3c82;
case 0x6a3c85:c.instructions+=2;goto B6a3c85;
case 0x6a3c88:c.instructions+=1;goto B6a3c88;
case 0x6a3c8a:goto L6a3c8a;
case 0x6a3c8d:c.instructions+=3;goto B6a3c8d;
case 0x6a3c90:c.instructions+=2;goto B6a3c90;
case 0x6a3c93:c.instructions+=1;goto B6a3c93;
case 0x6a3c99:goto L6a3c99;
case 0x6a3c9d:c.instructions+=1;goto B6a3c9d;
case 0x6a3c9f:goto L6a3c9f;
case 0x6a3ca2:c.instructions+=5;goto B6a3ca2;
case 0x6a3ca5:c.instructions+=4;goto B6a3ca5;
case 0x6a3ca8:c.instructions+=3;goto B6a3ca8;
case 0x6a3caa:c.instructions+=2;goto B6a3caa;
case 0x6a3cad:c.instructions+=1;goto B6a3cad;
case 0x6a3cb0:goto L6a3cb0;
case 0x6a3cb2:goto L6a3cb2;
case 0x6a3cb5:goto L6a3cb5;
case 0x6a3cb8:c.instructions+=4;goto B6a3cb8;
case 0x6a3cbb:c.instructions+=3;goto B6a3cbb;
case 0x6a3cbc:c.instructions+=2;goto B6a3cbc;
case 0x6a3cbf:c.instructions+=1;goto B6a3cbf;
case 0x6a3cc1:goto L6a3cc1;
case 0x6a3cc4:c.instructions+=2;goto B6a3cc4;
case 0x6a3cc7:c.instructions+=1;goto B6a3cc7;
case 0x6a3cca:goto L6a3cca;
case 0x6a3ccd:c.instructions+=6;goto B6a3ccd;
case 0x6a3cd0:c.instructions+=5;goto B6a3cd0;
case 0x6a3cd4:c.instructions+=4;goto B6a3cd4;
case 0x6a3cd5:c.instructions+=3;goto B6a3cd5;
case 0x6a3cd8:c.instructions+=2;goto B6a3cd8;
case 0x6a3cdb:c.instructions+=1;goto B6a3cdb;
case 0x6a3cdd:goto L6a3cdd;
case 0x6a3cdf:c.instructions+=2;goto B6a3cdf;
case 0x6a3ce2:c.instructions+=1;goto B6a3ce2;
case 0x6a3ce4:goto L6a3ce4;
case 0x6a3ce7:c.instructions+=1;goto B6a3ce7;
case 0x6a3cea:goto L6a3cea;
case 0x6a3cee:c.instructions+=6;goto B6a3cee;
case 0x6a3cf1:c.instructions+=5;goto B6a3cf1;
case 0x6a3cf4:c.instructions+=4;goto B6a3cf4;
case 0x6a3cf5:c.instructions+=3;goto B6a3cf5;
case 0x6a3cf8:c.instructions+=2;goto B6a3cf8;
case 0x6a3cfb:c.instructions+=1;goto B6a3cfb;
case 0x6a3cfd:goto L6a3cfd;
case 0x6a3cff:c.instructions+=4;goto B6a3cff;
case 0x6a3d00:c.instructions+=3;goto B6a3d00;
case 0x6a3d01:c.instructions+=2;goto B6a3d01;
case 0x6a3d03:c.instructions+=1;goto B6a3d03;
case 0x6a3d08:goto L6a3d08;
case 0x6a3d0b:c.instructions+=5;goto B6a3d0b;
case 0x6a3d0e:c.instructions+=4;goto B6a3d0e;
case 0x6a3d11:c.instructions+=3;goto B6a3d11;
case 0x6a3d15:c.instructions+=2;goto B6a3d15;
case 0x6a3d18:c.instructions+=1;goto B6a3d18;
case 0x6a3d1b:goto L6a3d1b;
case 0x6a3d1e:c.instructions+=3;goto B6a3d1e;
case 0x6a3d21:c.instructions+=2;goto B6a3d21;
case 0x6a3d24:c.instructions+=1;goto B6a3d24;
case 0x6a3d2a:goto L6a3d2a;
case 0x6a3d2e:c.instructions+=1;goto B6a3d2e;
case 0x6a3d30:goto L6a3d30;
case 0x6a3d32:c.instructions+=1;goto B6a3d32;
case 0x6a3d37:goto L6a3d37;
case 0x6a3d3a:c.instructions+=3;goto B6a3d3a;
case 0x6a3d3d:c.instructions+=2;goto B6a3d3d;
case 0x6a3d3e:c.instructions+=1;goto B6a3d3e;
case 0x6a3d43:goto L6a3d43;
case 0x6a3d45:c.instructions+=4;goto B6a3d45;
case 0x6a3d47:c.instructions+=3;goto B6a3d47;
case 0x6a3d48:c.instructions+=2;goto B6a3d48;
case 0x6a3d4b:c.instructions+=1;goto B6a3d4b;
case 0x6a3d51:goto L6a3d51;
case 0x6a3d53:c.instructions+=3;goto B6a3d53;
case 0x6a3d56:c.instructions+=2;goto B6a3d56;
case 0x6a3d58:c.instructions+=1;goto B6a3d58;
case 0x6a3d5a:goto L6a3d5a;
case 0x6a3d5c:goto L6a3d5c;
case 0x6a3d5e:c.instructions+=2;goto B6a3d5e;
case 0x6a3d61:c.instructions+=1;goto B6a3d61;
case 0x6a3d63:goto L6a3d63;
case 0x6a3d65:goto L6a3d65;
case 0x6a3d68:c.instructions+=1;goto B6a3d68;
case 0x6a3d6a:goto L6a3d6a;
case 0x6a3d6d:c.instructions+=5;goto B6a3d6d;
case 0x6a3d70:c.instructions+=4;goto B6a3d70;
case 0x6a3d74:c.instructions+=3;goto B6a3d74;
case 0x6a3d7a:c.instructions+=2;goto B6a3d7a;
case 0x6a3d7d:c.instructions+=1;goto B6a3d7d;
case 0x6a3d7f:goto L6a3d7f;
case 0x6a3d82:c.instructions+=4;goto B6a3d82;
case 0x6a3d85:c.instructions+=3;goto B6a3d85;
case 0x6a3d88:c.instructions+=2;goto B6a3d88;
case 0x6a3d8a:c.instructions+=1;goto B6a3d8a;
case 0x6a3d8c:goto L6a3d8c;
case 0x6a3d8d:c.instructions+=1;goto B6a3d8d;
case 0x6a3d8f:goto L6a3d8f;
case 0x6a3d90:c.instructions+=2;goto B6a3d90;
case 0x6a3d93:c.instructions+=1;goto B6a3d93;
case 0x6a3d95:goto L6a3d95;
case 0x6a3d98:c.instructions+=2;goto B6a3d98;
case 0x6a3d9a:c.instructions+=1;goto B6a3d9a;
case 0x6a3d9c:goto L6a3d9c;
case 0x6a3da0:goto L6a3da0;
case 0x6a3da3:c.instructions+=1;goto B6a3da3;
case 0x6a3da8:goto L6a3da8;
case 0x6a3dab:c.instructions+=6;goto B6a3dab;
case 0x6a3dac:c.instructions+=5;goto B6a3dac;
case 0x6a3dad:c.instructions+=4;goto B6a3dad;
case 0x6a3dae:c.instructions+=3;goto B6a3dae;
case 0x6a3daf:c.instructions+=2;goto B6a3daf;
case 0x6a3db0:c.instructions+=1;goto B6a3db0;
case 0x6a3db1:goto L6a3db1;
case 0x6a3db4:goto L6a3db4;
case 0x6a3db7:c.instructions+=7;goto B6a3db7;
case 0x6a3db8:c.instructions+=6;goto B6a3db8;
case 0x6a3dbb:c.instructions+=5;goto B6a3dbb;
case 0x6a3dbe:c.instructions+=4;goto B6a3dbe;
case 0x6a3dc0:c.instructions+=3;goto B6a3dc0;
case 0x6a3dc6:c.instructions+=2;goto B6a3dc6;
case 0x6a3dc9:c.instructions+=1;goto B6a3dc9;
case 0x6a3dcf:goto L6a3dcf;
case 0x6a3dd1:c.instructions+=8;goto B6a3dd1;
case 0x6a3dd4:c.instructions+=7;goto B6a3dd4;
case 0x6a3dd7:c.instructions+=6;goto B6a3dd7;
case 0x6a3ddc:c.instructions+=5;goto B6a3ddc;
case 0x6a3dde:c.instructions+=4;goto B6a3dde;
case 0x6a3de1:c.instructions+=3;goto B6a3de1;
case 0x6a3de5:c.instructions+=2;goto B6a3de5;
case 0x6a3de8:c.instructions+=1;goto B6a3de8;
case 0x6a3dea:goto L6a3dea;
case 0x6a3df0:c.instructions+=2;goto B6a3df0;
case 0x6a3df6:c.instructions+=1;goto B6a3df6;
case 0x6a3df8:goto L6a3df8;
case 0x6a3dfe:c.instructions+=1;goto B6a3dfe;
case 0x6a3e00:goto L6a3e00;
case 0x6a3e02:c.instructions+=6;goto B6a3e02;
case 0x6a3e05:c.instructions+=5;goto B6a3e05;
case 0x6a3e0b:c.instructions+=4;goto B6a3e0b;
case 0x6a3e0c:c.instructions+=3;goto B6a3e0c;
case 0x6a3e0f:c.instructions+=2;goto B6a3e0f;
case 0x6a3e11:c.instructions+=1;goto B6a3e11;
case 0x6a3e16:goto L6a3e16;
case 0x6a3e18:c.instructions+=2;goto B6a3e18;
case 0x6a3e1b:c.instructions+=1;goto B6a3e1b;
case 0x6a3e1d:goto L6a3e1d;
case 0x6a3e20:c.instructions+=10;goto B6a3e20;
case 0x6a3e22:c.instructions+=9;goto B6a3e22;
case 0x6a3e25:c.instructions+=8;goto B6a3e25;
case 0x6a3e2b:c.instructions+=7;goto B6a3e2b;
case 0x6a3e2c:c.instructions+=6;goto B6a3e2c;
case 0x6a3e2f:c.instructions+=5;goto B6a3e2f;
case 0x6a3e32:c.instructions+=4;goto B6a3e32;
case 0x6a3e35:c.instructions+=3;goto B6a3e35;
case 0x6a3e36:c.instructions+=2;goto B6a3e36;
case 0x6a3e38:c.instructions+=1;goto B6a3e38;
case 0x6a3e3d:goto L6a3e3d;
case 0x6a3e3e:c.instructions+=2;goto B6a3e3e;
case 0x6a3e41:c.instructions+=1;goto B6a3e41;
case 0x6a3e43:goto L6a3e43;
case 0x6a3e45:c.instructions+=9;goto B6a3e45;
case 0x6a3e48:c.instructions+=8;goto B6a3e48;
case 0x6a3e49:c.instructions+=7;goto B6a3e49;
case 0x6a3e4a:c.instructions+=6;goto B6a3e4a;
case 0x6a3e4b:c.instructions+=5;goto B6a3e4b;
case 0x6a3e4c:c.instructions+=4;goto B6a3e4c;
case 0x6a3e4e:c.instructions+=3;goto B6a3e4e;
case 0x6a3e53:c.instructions+=2;goto B6a3e53;
case 0x6a3e58:c.instructions+=1;goto B6a3e58;
case 0x6a3e5e:goto L6a3e5e;
case 0x6a3e61:c.instructions+=10;goto B6a3e61;
case 0x6a3e63:c.instructions+=9;goto B6a3e63;
case 0x6a3e66:c.instructions+=8;goto B6a3e66;
case 0x6a3e69:c.instructions+=7;goto B6a3e69;
case 0x6a3e6c:c.instructions+=6;goto B6a3e6c;
case 0x6a3e6f:c.instructions+=5;goto B6a3e6f;
case 0x6a3e72:c.instructions+=4;goto B6a3e72;
case 0x6a3e75:c.instructions+=3;goto B6a3e75;
case 0x6a3e78:c.instructions+=2;goto B6a3e78;
case 0x6a3e7a:c.instructions+=1;goto B6a3e7a;
case 0x6a3e80:goto L6a3e80;
case 0x6a3e84:c.instructions+=1;goto B6a3e84;
case 0x6a3e86:goto L6a3e86;
case 0x6a3e88:c.instructions+=1;goto B6a3e88;
case 0x6a3e8e:goto L6a3e8e;
case 0x6a3e91:c.instructions+=5;goto B6a3e91;
case 0x6a3e93:c.instructions+=4;goto B6a3e93;
case 0x6a3e96:c.instructions+=3;goto B6a3e96;
case 0x6a3e9c:c.instructions+=2;goto B6a3e9c;
case 0x6a3e9f:c.instructions+=1;goto B6a3e9f;
case 0x6a3ea5:goto L6a3ea5;
case 0x6a3ea7:c.instructions+=3;goto B6a3ea7;
case 0x6a3eaa:c.instructions+=2;goto B6a3eaa;
case 0x6a3ead:c.instructions+=1;goto B6a3ead;
case 0x6a3eb3:goto L6a3eb3;
case 0x6a3eb9:c.instructions+=5;goto B6a3eb9;
case 0x6a3ebc:c.instructions+=4;goto B6a3ebc;
case 0x6a3ebf:c.instructions+=3;goto B6a3ebf;
case 0x6a3ec2:c.instructions+=2;goto B6a3ec2;
case 0x6a3ec5:c.instructions+=1;goto B6a3ec5;
case 0x6a3ec8:goto L6a3ec8;
case 0x6a3ecc:c.instructions+=10;goto B6a3ecc;
case 0x6a3ecf:c.instructions+=9;goto B6a3ecf;
case 0x6a3ed2:c.instructions+=8;goto B6a3ed2;
case 0x6a3ed6:c.instructions+=7;goto B6a3ed6;
case 0x6a3ed9:c.instructions+=6;goto B6a3ed9;
case 0x6a3edc:c.instructions+=5;goto B6a3edc;
case 0x6a3edf:c.instructions+=4;goto B6a3edf;
case 0x6a3ee2:c.instructions+=3;goto B6a3ee2;
case 0x6a3ee5:c.instructions+=2;goto B6a3ee5;
case 0x6a3ee8:c.instructions+=1;goto B6a3ee8;
case 0x6a3eea:goto L6a3eea;
case 0x6a3eed:c.instructions+=4;goto B6a3eed;
case 0x6a3ef0:c.instructions+=3;goto B6a3ef0;
case 0x6a3ef2:c.instructions+=2;goto B6a3ef2;
case 0x6a3ef5:c.instructions+=1;goto B6a3ef5;
case 0x6a3ef7:goto L6a3ef7;
case 0x6a3efa:c.instructions+=2;goto B6a3efa;
case 0x6a3efc:c.instructions+=1;goto B6a3efc;
case 0x6a3efe:goto L6a3efe;
case 0x6a3f01:c.instructions+=1;goto B6a3f01;
case 0x6a3f07:goto L6a3f07;
case 0x6a3f0a:c.instructions+=3;goto B6a3f0a;
case 0x6a3f0d:c.instructions+=2;goto B6a3f0d;
case 0x6a3f10:c.instructions+=1;goto B6a3f10;
case 0x6a3f16:goto L6a3f16;
case 0x6a3f19:c.instructions+=3;goto B6a3f19;
case 0x6a3f1c:c.instructions+=2;goto B6a3f1c;
case 0x6a3f1f:c.instructions+=1;goto B6a3f1f;
case 0x6a3f25:goto L6a3f25;
case 0x6a3f29:c.instructions+=2;goto B6a3f29;
case 0x6a3f2d:c.instructions+=1;goto B6a3f2d;
case 0x6a3f2f:goto L6a3f2f;
case 0x6a3f32:c.instructions+=1;goto B6a3f32;
case 0x6a3f35:goto L6a3f35;
case 0x6a3f38:c.instructions+=5;goto B6a3f38;
case 0x6a3f3a:c.instructions+=4;goto B6a3f3a;
case 0x6a3f3d:c.instructions+=3;goto B6a3f3d;
case 0x6a3f40:c.instructions+=2;goto B6a3f40;
case 0x6a3f43:c.instructions+=1;goto B6a3f43;
case 0x6a3f45:goto L6a3f45;
case 0x6a3f48:c.instructions+=1;goto B6a3f48;
case 0x6a3f4a:goto L6a3f4a;
case 0x6a3f4d:c.instructions+=4;goto B6a3f4d;
case 0x6a3f50:c.instructions+=3;goto B6a3f50;
case 0x6a3f54:c.instructions+=2;goto B6a3f54;
case 0x6a3f57:c.instructions+=1;goto B6a3f57;
case 0x6a3f59:goto L6a3f59;
case 0x6a3f5c:c.instructions+=2;goto B6a3f5c;
case 0x6a3f5f:c.instructions+=1;goto B6a3f5f;
case 0x6a3f61:goto L6a3f61;
case 0x6a3f65:c.instructions+=2;goto B6a3f65;
case 0x6a3f67:c.instructions+=1;goto B6a3f67;
case 0x6a3f69:goto L6a3f69;
case 0x6a3f6c:goto L6a3f6c;
case 0x6a3f6e:c.instructions+=4;goto B6a3f6e;
case 0x6a3f71:c.instructions+=3;goto B6a3f71;
case 0x6a3f74:c.instructions+=2;goto B6a3f74;
case 0x6a3f77:c.instructions+=1;goto B6a3f77;
case 0x6a3f79:goto L6a3f79;
case 0x6a3f7c:c.instructions+=4;goto B6a3f7c;
case 0x6a3f7f:c.instructions+=3;goto B6a3f7f;
case 0x6a3f82:c.instructions+=2;goto B6a3f82;
case 0x6a3f85:c.instructions+=1;goto B6a3f85;
case 0x6a3f87:goto L6a3f87;
case 0x6a3f8a:c.instructions+=5;goto B6a3f8a;
case 0x6a3f8d:c.instructions+=4;goto B6a3f8d;
case 0x6a3f90:c.instructions+=3;goto B6a3f90;
case 0x6a3f93:c.instructions+=2;goto B6a3f93;
case 0x6a3f96:c.instructions+=1;goto B6a3f96;
case 0x6a3f98:goto L6a3f98;
case 0x6a3f9b:c.instructions+=2;goto B6a3f9b;
case 0x6a3f9e:c.instructions+=1;goto B6a3f9e;
case 0x6a3fa0:goto L6a3fa0;
case 0x6a3fa2:c.instructions+=3;goto B6a3fa2;
case 0x6a3fa7:c.instructions+=2;goto B6a3fa7;
case 0x6a3fac:c.instructions+=1;goto B6a3fac;
case 0x6a3fae:goto L6a3fae;
case 0x6a3fb1:c.instructions+=5;goto B6a3fb1;
case 0x6a3fb9:c.instructions+=4;goto B6a3fb9;
case 0x6a3fba:c.instructions+=3;goto B6a3fba;
case 0x6a3fbd:c.instructions+=2;goto B6a3fbd;
case 0x6a3fc0:c.instructions+=1;goto B6a3fc0;
case 0x6a3fc6:goto L6a3fc6;
case 0x6a3fc8:c.instructions+=3;goto B6a3fc8;
case 0x6a3fcd:c.instructions+=2;goto B6a3fcd;
case 0x6a3fd2:c.instructions+=1;goto B6a3fd2;
case 0x6a3fd4:goto L6a3fd4;
case 0x6a3fd9:c.instructions+=1;goto B6a3fd9;
case 0x6a3fdb:goto L6a3fdb;
case 0x6a3fdf:c.instructions+=2;goto B6a3fdf;
case 0x6a3fe3:c.instructions+=1;goto B6a3fe3;
case 0x6a3fe5:goto L6a3fe5;
case 0x6a3fe8:c.instructions+=8;goto B6a3fe8;
case 0x6a3feb:c.instructions+=7;goto B6a3feb;
case 0x6a3fee:c.instructions+=6;goto B6a3fee;
case 0x6a3ff0:c.instructions+=5;goto B6a3ff0;
case 0x6a3ff3:c.instructions+=4;goto B6a3ff3;
case 0x6a3ff6:c.instructions+=3;goto B6a3ff6;
case 0x6a3ff9:c.instructions+=2;goto B6a3ff9;
case 0x6a3ffc:c.instructions+=1;goto B6a3ffc;
default:missing_instruction(c.pc);}
B6a3001:L6a3001:{c.instructions+=6;NFSU2_TR(0x6a3001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3004:{NFSU2_TR(0x6a3004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3007:{NFSU2_TR(0x6a3007);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6a3009:{NFSU2_TR(0x6a3009);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6a300b:{NFSU2_TR(0x6a300b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a300e:{NFSU2_TR(0x6a300e);
if(r1(R+518)){{goto L6a3049;}}
}
B6a3010:L6a3010:{c.instructions+=3;NFSU2_TR(0x6a3010);
__builtin_memmove((R+4),(R+0),4);
}
B6a3012:{NFSU2_TR(0x6a3012);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a3015:{NFSU2_TR(0x6a3015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3018:L6a3018:{c.instructions+=17;NFSU2_TR(0x6a3018);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a301b:{NFSU2_TR(0x6a301b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a301e:{NFSU2_TR(0x6a301e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B6a3021:{NFSU2_TR(0x6a3021);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6a3023:{NFSU2_TR(0x6a3023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a3025:{NFSU2_TR(0x6a3025);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a3029:{NFSU2_TR(0x6a3029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a302b:{NFSU2_TR(0x6a302b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a302e:{NFSU2_TR(0x6a302e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a3031:{NFSU2_TR(0x6a3031);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3034:{NFSU2_TR(0x6a3034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3037:{NFSU2_TR(0x6a3037);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a303b:{NFSU2_TR(0x6a303b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a303e:{NFSU2_TR(0x6a303e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a3041:{NFSU2_TR(0x6a3041);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a3044:{NFSU2_TR(0x6a3044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3047:{NFSU2_TR(0x6a3047);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3018u);}goto L6a3018;}}
}
B6a3049:L6a3049:{c.instructions+=4;NFSU2_TR(0x6a3049);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a304b:{NFSU2_TR(0x6a304b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a304d:{NFSU2_TR(0x6a304d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3050:{NFSU2_TR(0x6a3050);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3060;}}
}
B6a3052:L6a3052:{c.instructions+=6;NFSU2_TR(0x6a3052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3055:{NFSU2_TR(0x6a3055);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3058:{NFSU2_TR(0x6a3058);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a3059:{NFSU2_TR(0x6a3059);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a305c:{NFSU2_TR(0x6a305c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a305e:{NFSU2_TR(0x6a305e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3052u);}goto L6a3052;}}
}
B6a3060:L6a3060:{c.instructions+=2;NFSU2_TR(0x6a3060);
__builtin_memmove((R+4),(R+24),4);
}
B6a3062:{NFSU2_TR(0x6a3062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3067ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6a3067:L6a3067:{c.instructions+=2;NFSU2_TR(0x6a3067);
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
B6a3069:{NFSU2_TR(0x6a3069);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a30fa;}}
}
B6a306f:L6a306f:{c.instructions+=3;NFSU2_TR(0x6a306f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a3071:{NFSU2_TR(0x6a3071);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3074:{NFSU2_TR(0x6a3074);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a308b;}}
}
B6a3076:L6a3076:{c.instructions+=4;NFSU2_TR(0x6a3076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3079:{NFSU2_TR(0x6a3079);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a307c:{NFSU2_TR(0x6a307c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3080:{NFSU2_TR(0x6a3080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3085;}}
}
B6a3082:L6a3082:{c.instructions+=1;NFSU2_TR(0x6a3082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3085:L6a3085:{c.instructions+=3;NFSU2_TR(0x6a3085);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a3086:{NFSU2_TR(0x6a3086);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a3089:{NFSU2_TR(0x6a3089);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3076u);}goto L6a3076;}}
}
B6a308b:L6a308b:{c.instructions+=3;NFSU2_TR(0x6a308b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a308e:{NFSU2_TR(0x6a308e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3091:{NFSU2_TR(0x6a3091);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a30f8;}}
}
B6a3093:L6a3093:{c.instructions+=1;NFSU2_TR(0x6a3093);
{goto L6a3097;}
}
B6a3095:L6a3095:{c.instructions+=1;NFSU2_TR(0x6a3095);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a3097:L6a3097:{c.instructions+=5;NFSU2_TR(0x6a3097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a309a:{NFSU2_TR(0x6a309a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a309d:{NFSU2_TR(0x6a309d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a30a0:{NFSU2_TR(0x6a30a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a30a6:{NFSU2_TR(0x6a30a6);
if(r1(R+518)){{goto L6a30ed;}}
}
B6a30a8:L6a30a8:{c.instructions+=3;NFSU2_TR(0x6a30a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a30ab:{NFSU2_TR(0x6a30ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a30ad:{NFSU2_TR(0x6a30ad);
if(r1(R+518)){{goto L6a30ed;}}
}
B6a30af:L6a30af:{c.instructions+=9;NFSU2_TR(0x6a30af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a30b2:{NFSU2_TR(0x6a30b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a30b4:{NFSU2_TR(0x6a30b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a30b7:{NFSU2_TR(0x6a30b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a30ba:{NFSU2_TR(0x6a30ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a30bd:{NFSU2_TR(0x6a30bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a30c0:{NFSU2_TR(0x6a30c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a30c3:{NFSU2_TR(0x6a30c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a30c7:{NFSU2_TR(0x6a30c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a30ed;}}
}
B6a30c9:L6a30c9:{c.instructions+=3;NFSU2_TR(0x6a30c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a30cb:{NFSU2_TR(0x6a30cb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a30cd:{NFSU2_TR(0x6a30cd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a30ea;}}
}
B6a30cf:L6a30cf:{c.instructions+=10;NFSU2_TR(0x6a30cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a30d2:{NFSU2_TR(0x6a30d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a30d5:{NFSU2_TR(0x6a30d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a30d8:{NFSU2_TR(0x6a30d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a30db:{NFSU2_TR(0x6a30db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a30de:{NFSU2_TR(0x6a30de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a30e1:{NFSU2_TR(0x6a30e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a30e2:{NFSU2_TR(0x6a30e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a30e5:{NFSU2_TR(0x6a30e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a30e8:{NFSU2_TR(0x6a30e8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a30cfu);}goto L6a30cf;}}
}
B6a30ea:L6a30ea:{c.instructions+=1;NFSU2_TR(0x6a30ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a30ed:L6a30ed:{c.instructions+=4;NFSU2_TR(0x6a30ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a30f0:{NFSU2_TR(0x6a30f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a30f3:{NFSU2_TR(0x6a30f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a30f6:{NFSU2_TR(0x6a30f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3095u);}goto L6a3095;}}
}
B6a30f8:L6a30f8:{c.instructions+=1;NFSU2_TR(0x6a30f8);
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
B6a30fa:L6a30fa:{c.instructions+=5;NFSU2_TR(0x6a30fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a30fb:{NFSU2_TR(0x6a30fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a30fc:{NFSU2_TR(0x6a30fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a30fd:{NFSU2_TR(0x6a30fd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a30fe:{NFSU2_TR(0x6a30fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a30ff:L6a30ff:{c.instructions+=11;NFSU2_TR(0x6a30ff);
__builtin_memmove((R+28),(R+28),4);
}
B6a3101:{NFSU2_TR(0x6a3101);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3102:{NFSU2_TR(0x6a3102);
__builtin_memmove((R+20),(R+16),4);
}
B6a3104:{NFSU2_TR(0x6a3104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B6a310a:{NFSU2_TR(0x6a310a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a310b:{NFSU2_TR(0x6a310b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a310c:{NFSU2_TR(0x6a310c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a310e:{NFSU2_TR(0x6a310e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a310f:{NFSU2_TR(0x6a310f);
__builtin_memmove((R+12),(R+4),4);
}
B6a3111:{NFSU2_TR(0x6a3111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3114:{NFSU2_TR(0x6a3114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3119ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a3119:L6a3119:{c.instructions+=4;NFSU2_TR(0x6a3119);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a311c:{NFSU2_TR(0x6a311c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a311f:{NFSU2_TR(0x6a311f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3122:{NFSU2_TR(0x6a3122);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a314b;}}
}
B6a3124:L6a3124:{c.instructions+=3;NFSU2_TR(0x6a3124);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a312a:{NFSU2_TR(0x6a312a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a312d:{NFSU2_TR(0x6a312d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3130:L6a3130:{c.instructions+=3;NFSU2_TR(0x6a3130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3132:{NFSU2_TR(0x6a3132);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3135:{NFSU2_TR(0x6a3135);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3143;}}
}
B6a3137:L6a3137:{c.instructions+=3;NFSU2_TR(0x6a3137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a313a:{NFSU2_TR(0x6a313a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a313d:{NFSU2_TR(0x6a313d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a3143;}}
}
B6a313f:L6a313f:{c.instructions+=2;NFSU2_TR(0x6a313f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a3140:{NFSU2_TR(0x6a3140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3143:L6a3143:{c.instructions+=3;NFSU2_TR(0x6a3143);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a3146:{NFSU2_TR(0x6a3146);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6a3147:{NFSU2_TR(0x6a3147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3130u);}goto L6a3130;}}
}
B6a3149:L6a3149:{c.instructions+=1;NFSU2_TR(0x6a3149);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a314b:L6a314b:{c.instructions+=2;NFSU2_TR(0x6a314b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a314f:{NFSU2_TR(0x6a314f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a32d4;}}
}
B6a3155:L6a3155:{c.instructions+=3;NFSU2_TR(0x6a3155);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3158:{NFSU2_TR(0x6a3158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a315b:{NFSU2_TR(0x6a315b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a32d4;}}
}
B6a3161:L6a3161:{c.instructions+=6;NFSU2_TR(0x6a3161);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3164:{NFSU2_TR(0x6a3164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3167:{NFSU2_TR(0x6a3167);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a316a:{NFSU2_TR(0x6a316a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x50000002ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a3170:{NFSU2_TR(0x6a3170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3173:{NFSU2_TR(0x6a3173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a32b7;}}
}
B6a3179:L6a3179:{c.instructions+=6;NFSU2_TR(0x6a3179);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6a317c:{NFSU2_TR(0x6a317c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a317d:{NFSU2_TR(0x6a317d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a317e:{NFSU2_TR(0x6a317e);
u8 U[4];
w4(U+0,u32(0x20500002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3183:{NFSU2_TR(0x6a3183);
__builtin_memmove((R+4),(R+12),4);
}
B6a3185:{NFSU2_TR(0x6a3185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a318aull));
TAIL_STATIC(0x699c99u,699);
}
B6a318a:L6a318a:{c.instructions+=3;NFSU2_TR(0x6a318a);
__builtin_memmove((R+24),(R+0),4);
}
B6a318c:{NFSU2_TR(0x6a318c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a318e:{NFSU2_TR(0x6a318e);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3194:L6a3194:{c.instructions+=5;NFSU2_TR(0x6a3194);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3195:{NFSU2_TR(0x6a3195);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3196:{NFSU2_TR(0x6a3196);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a319b:{NFSU2_TR(0x6a319b);
__builtin_memmove((R+4),(R+12),4);
}
B6a319d:{NFSU2_TR(0x6a319d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a31a2ull));
TAIL_STATIC(0x699c99u,699);
}
B6a31a2:L6a31a2:{c.instructions+=2;NFSU2_TR(0x6a31a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a31a4:{NFSU2_TR(0x6a31a4);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a31aa:L6a31aa:{c.instructions+=9;NFSU2_TR(0x6a31aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a31ad:{NFSU2_TR(0x6a31ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a31b0:{NFSU2_TR(0x6a31b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a31b3:{NFSU2_TR(0x6a31b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a31b6:{NFSU2_TR(0x6a31b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a31b7:{NFSU2_TR(0x6a31b7);
__builtin_memmove((R+4),(R+28),4);
}
B6a31b9:{NFSU2_TR(0x6a31b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a31bc:{NFSU2_TR(0x6a31bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a31bf:{NFSU2_TR(0x6a31bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a31c4ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a31c4:L6a31c4:{c.instructions+=3;NFSU2_TR(0x6a31c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a31c7:{NFSU2_TR(0x6a31c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a31c8:{NFSU2_TR(0x6a31c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a31cdull));
TAIL_STATIC(0x698eb3u,698);
}
B6a31cd:L6a31cd:{c.instructions+=14;NFSU2_TR(0x6a31cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a31d0:{NFSU2_TR(0x6a31d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a31d3:{NFSU2_TR(0x6a31d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a31d6:{NFSU2_TR(0x6a31d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a31d9:{NFSU2_TR(0x6a31d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a31dd:{NFSU2_TR(0x6a31dd);
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
B6a31de:{NFSU2_TR(0x6a31de);
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
B6a31df:{NFSU2_TR(0x6a31df);
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
B6a31e0:{NFSU2_TR(0x6a31e0);
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
B6a31e1:{NFSU2_TR(0x6a31e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a31e4:{NFSU2_TR(0x6a31e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a31e7:{NFSU2_TR(0x6a31e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a31e9:{NFSU2_TR(0x6a31e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a31ec:{NFSU2_TR(0x6a31ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a31ee:L6a31ee:{c.instructions+=12;NFSU2_TR(0x6a31ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a31f1:{NFSU2_TR(0x6a31f1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a31f3:{NFSU2_TR(0x6a31f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a31f4:{NFSU2_TR(0x6a31f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a31f5:{NFSU2_TR(0x6a31f5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a31f8:{NFSU2_TR(0x6a31f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a31f9:{NFSU2_TR(0x6a31f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a31fc:{NFSU2_TR(0x6a31fc);
__builtin_memmove((R+24),(R+0),4);
}
B6a31fe:{NFSU2_TR(0x6a31fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3204:{NFSU2_TR(0x6a3204);
__builtin_memmove((R+4),(R+12),4);
}
B6a3206:{NFSU2_TR(0x6a3206);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a3209:{NFSU2_TR(0x6a3209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a320eull));
TAIL_STATIC(0x699c39u,699);
}
B6a320e:L6a320e:{c.instructions+=10;NFSU2_TR(0x6a320e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3211:{NFSU2_TR(0x6a3211);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3214:{NFSU2_TR(0x6a3214);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3217:{NFSU2_TR(0x6a3217);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a321a:{NFSU2_TR(0x6a321a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a321d:{NFSU2_TR(0x6a321d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3220:{NFSU2_TR(0x6a3220);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3223:{NFSU2_TR(0x6a3223);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3226:{NFSU2_TR(0x6a3226);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a322a:{NFSU2_TR(0x6a322a);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3230:L6a3230:{c.instructions+=24;NFSU2_TR(0x6a3230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3233:{NFSU2_TR(0x6a3233);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3236:{NFSU2_TR(0x6a3236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3238:{NFSU2_TR(0x6a3238);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a323b:{NFSU2_TR(0x6a323b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a323e:{NFSU2_TR(0x6a323e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3241:{NFSU2_TR(0x6a3241);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3244:{NFSU2_TR(0x6a3244);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3247:{NFSU2_TR(0x6a3247);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a324a:{NFSU2_TR(0x6a324a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a324d:{NFSU2_TR(0x6a324d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3250:{NFSU2_TR(0x6a3250);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a3254:{NFSU2_TR(0x6a3254);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3257:{NFSU2_TR(0x6a3257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a325a:{NFSU2_TR(0x6a325a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a325d:{NFSU2_TR(0x6a325d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3260:{NFSU2_TR(0x6a3260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3262:{NFSU2_TR(0x6a3262);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3265:{NFSU2_TR(0x6a3265);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3268:{NFSU2_TR(0x6a3268);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a326b:{NFSU2_TR(0x6a326b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a326e:{NFSU2_TR(0x6a326e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3271:{NFSU2_TR(0x6a3271);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3274:{NFSU2_TR(0x6a3274);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a31eeu);}goto L6a31ee;}}
}
B6a327a:L6a327a:{c.instructions+=3;NFSU2_TR(0x6a327a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a327d:{NFSU2_TR(0x6a327d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3280:{NFSU2_TR(0x6a3280);
{goto L6a328d;}
}
B6a3282:L6a3282:{c.instructions+=4;NFSU2_TR(0x6a3282);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3285:{NFSU2_TR(0x6a3285);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a3288:{NFSU2_TR(0x6a3288);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a328b:{NFSU2_TR(0x6a328b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a328d:L6a328d:{c.instructions+=3;NFSU2_TR(0x6a328d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6a328e:{NFSU2_TR(0x6a328e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3290:{NFSU2_TR(0x6a3290);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3282u);}goto L6a3282;}}
}
B6a3292:L6a3292:{c.instructions+=10;NFSU2_TR(0x6a3292);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3295:{NFSU2_TR(0x6a3295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3298:{NFSU2_TR(0x6a3298);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a329b:{NFSU2_TR(0x6a329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a329e:{NFSU2_TR(0x6a329e);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a32a0:{NFSU2_TR(0x6a32a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a32a4:{NFSU2_TR(0x6a32a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a32a7:{NFSU2_TR(0x6a32a7);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a32a8:{NFSU2_TR(0x6a32a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a32a9:{NFSU2_TR(0x6a32a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a32aeull));
TAIL_STATIC(0x6739efu,673);
}
B6a32ae:L6a32ae:{c.instructions+=3;NFSU2_TR(0x6a32ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a32b1:{NFSU2_TR(0x6a32b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a32b4:{NFSU2_TR(0x6a32b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a32b7:L6a32b7:{c.instructions+=4;NFSU2_TR(0x6a32b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a32ba:{NFSU2_TR(0x6a32ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a32bd:{NFSU2_TR(0x6a32bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a32c0:{NFSU2_TR(0x6a32c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3161u);}goto L6a3161;}}
}
B6a32c6:L6a32c6:{c.instructions+=3;NFSU2_TR(0x6a32c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a32c8:{NFSU2_TR(0x6a32c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a32cb:{NFSU2_TR(0x6a32cb);
if(r1(R+518)){{goto L6a32d4;}}
}
B6a32cd:L6a32cd:{c.instructions+=2;NFSU2_TR(0x6a32cd);
__builtin_memmove((R+4),(R+12),4);
}
B6a32cf:{NFSU2_TR(0x6a32cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a32d4ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a32d4:L6a32d4:{c.instructions+=2;NFSU2_TR(0x6a32d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a32d8:{NFSU2_TR(0x6a32d8);
if(r1(R+518)){{goto L6a3468;}}
}
B6a32de:L6a32de:{c.instructions+=6;NFSU2_TR(0x6a32de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a32e1:{NFSU2_TR(0x6a32e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a32e3:{NFSU2_TR(0x6a32e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a32e5:{NFSU2_TR(0x6a32e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a32e8:{NFSU2_TR(0x6a32e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a32eb:{NFSU2_TR(0x6a32eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3468;}}
}
B6a32f1:L6a32f1:{c.instructions+=4;NFSU2_TR(0x6a32f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a32f4:{NFSU2_TR(0x6a32f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a32f7:{NFSU2_TR(0x6a32f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a32fd:{NFSU2_TR(0x6a32fd);
if(r1(R+518)){{goto L6a3458;}}
}
B6a3303:L6a3303:{c.instructions+=3;NFSU2_TR(0x6a3303);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3306:{NFSU2_TR(0x6a3306);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3308:{NFSU2_TR(0x6a3308);
if(r1(R+518)){{goto L6a3458;}}
}
B6a330e:L6a330e:{c.instructions+=9;NFSU2_TR(0x6a330e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3311:{NFSU2_TR(0x6a3311);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a3313:{NFSU2_TR(0x6a3313);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3316:{NFSU2_TR(0x6a3316);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3319:{NFSU2_TR(0x6a3319);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a331c:{NFSU2_TR(0x6a331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a331f:{NFSU2_TR(0x6a331f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3322:{NFSU2_TR(0x6a3322);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3326:{NFSU2_TR(0x6a3326);
if(r1(R+518)){{goto L6a3458;}}
}
B6a332c:L6a332c:{c.instructions+=3;NFSU2_TR(0x6a332c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a332e:{NFSU2_TR(0x6a332e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3331:{NFSU2_TR(0x6a3331);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a3353;}}
}
B6a3333:L6a3333:{c.instructions+=2;NFSU2_TR(0x6a3333);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3336:{NFSU2_TR(0x6a3336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3339:L6a3339:{c.instructions+=5;NFSU2_TR(0x6a3339);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a333c:{NFSU2_TR(0x6a333c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6a333e:{NFSU2_TR(0x6a333e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3341:{NFSU2_TR(0x6a3341);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3344:{NFSU2_TR(0x6a3344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3350;}}
}
B6a3346:L6a3346:{c.instructions+=4;NFSU2_TR(0x6a3346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a334a:{NFSU2_TR(0x6a334a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a334b:{NFSU2_TR(0x6a334b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a334e:{NFSU2_TR(0x6a334e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3339u);}goto L6a3339;}}
}
B6a3350:L6a3350:{c.instructions+=1;NFSU2_TR(0x6a3350);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3353:L6a3353:{c.instructions+=1;NFSU2_TR(0x6a3353);
if(r1(R+518)){{goto L6a3458;}}
}
B6a3359:L6a3359:{c.instructions+=7;NFSU2_TR(0x6a3359);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a335b:{NFSU2_TR(0x6a335b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a3360:{NFSU2_TR(0x6a3360);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3362:{NFSU2_TR(0x6a3362);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6a3367:{NFSU2_TR(0x6a3367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3368:{NFSU2_TR(0x6a3368);
__builtin_memmove((R+4),(R+12),4);
}
B6a336a:{NFSU2_TR(0x6a336a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a336full));
TAIL_STATIC(0x699c99u,699);
}
B6a336f:L6a336f:{c.instructions+=2;NFSU2_TR(0x6a336f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3372:{NFSU2_TR(0x6a3372);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3378:L6a3378:{c.instructions+=6;NFSU2_TR(0x6a3378);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a337b:{NFSU2_TR(0x6a337b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a337e:{NFSU2_TR(0x6a337e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a337f:{NFSU2_TR(0x6a337f);
__builtin_memmove((R+4),(R+0),4);
}
B6a3381:{NFSU2_TR(0x6a3381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3384:{NFSU2_TR(0x6a3384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3389ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a3389:L6a3389:{c.instructions+=11;NFSU2_TR(0x6a3389);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a338c:{NFSU2_TR(0x6a338c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a338e:{NFSU2_TR(0x6a338e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3391:{NFSU2_TR(0x6a3391);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3394:{NFSU2_TR(0x6a3394);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3397:{NFSU2_TR(0x6a3397);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a339a:{NFSU2_TR(0x6a339a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a339e:{NFSU2_TR(0x6a339e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a33a2:{NFSU2_TR(0x6a33a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a33a5:{NFSU2_TR(0x6a33a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a33a8:{NFSU2_TR(0x6a33a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a344e;}}
}
B6a33ae:L6a33ae:{c.instructions+=17;NFSU2_TR(0x6a33ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a33b1:{NFSU2_TR(0x6a33b1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a33b3:{NFSU2_TR(0x6a33b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a33b6:{NFSU2_TR(0x6a33b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a33b9:{NFSU2_TR(0x6a33b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a33bc:{NFSU2_TR(0x6a33bc);
__builtin_memmove((R+24),(R+0),4);
}
B6a33be:{NFSU2_TR(0x6a33be);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a33c1:{NFSU2_TR(0x6a33c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a33c4:{NFSU2_TR(0x6a33c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a33c5:{NFSU2_TR(0x6a33c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a33c6:{NFSU2_TR(0x6a33c6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a33c9:{NFSU2_TR(0x6a33c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a33ca:{NFSU2_TR(0x6a33ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a33cd:{NFSU2_TR(0x6a33cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a33d0:{NFSU2_TR(0x6a33d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a33d6:{NFSU2_TR(0x6a33d6);
__builtin_memmove((R+4),(R+12),4);
}
B6a33d8:{NFSU2_TR(0x6a33d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a33ddull));
TAIL_STATIC(0x699c39u,699);
}
B6a33dd:L6a33dd:{c.instructions+=10;NFSU2_TR(0x6a33dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a33e0:{NFSU2_TR(0x6a33e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a33e3:{NFSU2_TR(0x6a33e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a33e6:{NFSU2_TR(0x6a33e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a33e9:{NFSU2_TR(0x6a33e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a33ec:{NFSU2_TR(0x6a33ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a33ef:{NFSU2_TR(0x6a33ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a33f2:{NFSU2_TR(0x6a33f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a33f5:{NFSU2_TR(0x6a33f5);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a33f9:{NFSU2_TR(0x6a33f9);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a33ff:L6a33ff:{c.instructions+=26;NFSU2_TR(0x6a33ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3402:{NFSU2_TR(0x6a3402);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3405:{NFSU2_TR(0x6a3405);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3408:{NFSU2_TR(0x6a3408);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a340b:{NFSU2_TR(0x6a340b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a340e:{NFSU2_TR(0x6a340e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3411:{NFSU2_TR(0x6a3411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3414:{NFSU2_TR(0x6a3414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3417:{NFSU2_TR(0x6a3417);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a341a:{NFSU2_TR(0x6a341a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a341d:{NFSU2_TR(0x6a341d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3420:{NFSU2_TR(0x6a3420);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3423:{NFSU2_TR(0x6a3423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3426:{NFSU2_TR(0x6a3426);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3429:{NFSU2_TR(0x6a3429);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a342c:{NFSU2_TR(0x6a342c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a342f:{NFSU2_TR(0x6a342f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3432:{NFSU2_TR(0x6a3432);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3435:{NFSU2_TR(0x6a3435);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3438:{NFSU2_TR(0x6a3438);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a343b:{NFSU2_TR(0x6a343b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a343e:{NFSU2_TR(0x6a343e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3440:{NFSU2_TR(0x6a3440);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a3442:{NFSU2_TR(0x6a3442);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3445:{NFSU2_TR(0x6a3445);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3448:{NFSU2_TR(0x6a3448);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a33aeu);}goto L6a33ae;}}
}
B6a344e:L6a344e:{c.instructions+=2;NFSU2_TR(0x6a344e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3451:{NFSU2_TR(0x6a3451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3458:L6a3458:{c.instructions+=5;NFSU2_TR(0x6a3458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a345b:{NFSU2_TR(0x6a345b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a345c:{NFSU2_TR(0x6a345c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a345f:{NFSU2_TR(0x6a345f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3462:{NFSU2_TR(0x6a3462);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a32f1u);}goto L6a32f1;}}
}
B6a3468:L6a3468:{c.instructions+=3;NFSU2_TR(0x6a3468);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a346a:{NFSU2_TR(0x6a346a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a346d:{NFSU2_TR(0x6a346d);
if(r1(R+518)){{goto L6a352d;}}
}
B6a3473:L6a3473:{c.instructions+=2;NFSU2_TR(0x6a3473);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3477:{NFSU2_TR(0x6a3477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a352d;}}
}
B6a347d:L6a347d:{c.instructions+=3;NFSU2_TR(0x6a347d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3480:{NFSU2_TR(0x6a3480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3483:{NFSU2_TR(0x6a3483);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a352d;}}
}
B6a3489:L6a3489:{c.instructions+=8;NFSU2_TR(0x6a3489);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a348c:{NFSU2_TR(0x6a348c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a348f:{NFSU2_TR(0x6a348f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3492:{NFSU2_TR(0x6a3492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3494:{NFSU2_TR(0x6a3494);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a3499:{NFSU2_TR(0x6a3499);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a349e:{NFSU2_TR(0x6a349e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a34a1:{NFSU2_TR(0x6a34a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a351e;}}
}
B6a34a3:L6a34a3:{c.instructions+=7;NFSU2_TR(0x6a34a3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a34a5:{NFSU2_TR(0x6a34a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6a34a8:{NFSU2_TR(0x6a34a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a34a9:{NFSU2_TR(0x6a34a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a34aa:{NFSU2_TR(0x6a34aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a34ad:{NFSU2_TR(0x6a34ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a34ae:{NFSU2_TR(0x6a34ae);
{goto L6a3515;}
}
B6a34b0:L6a34b0:{c.instructions+=4;NFSU2_TR(0x6a34b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a34b3:{NFSU2_TR(0x6a34b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a34b5:{NFSU2_TR(0x6a34b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a34b7:{NFSU2_TR(0x6a34b7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a34cc;}}
}
B6a34b9:L6a34b9:{c.instructions+=1;NFSU2_TR(0x6a34b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a34bc:L6a34bc:{c.instructions+=4;NFSU2_TR(0x6a34bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a34bf:{NFSU2_TR(0x6a34bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a34c2:{NFSU2_TR(0x6a34c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a34c5:{NFSU2_TR(0x6a34c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a34cc;}}
}
B6a34c7:L6a34c7:{c.instructions+=3;NFSU2_TR(0x6a34c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a34c8:{NFSU2_TR(0x6a34c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6a34ca:{NFSU2_TR(0x6a34ca);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a34bcu);}goto L6a34bc;}}
}
B6a34cc:L6a34cc:{c.instructions+=2;NFSU2_TR(0x6a34cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a34ce:{NFSU2_TR(0x6a34ce);
if(r1(R+518)){{goto L6a3508;}}
}
B6a34d0:L6a34d0:{c.instructions+=8;NFSU2_TR(0x6a34d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a34d3:{NFSU2_TR(0x6a34d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a34d6:{NFSU2_TR(0x6a34d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a34d7:{NFSU2_TR(0x6a34d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a34d8:{NFSU2_TR(0x6a34d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a34d9:{NFSU2_TR(0x6a34d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a34dc:{NFSU2_TR(0x6a34dc);
__builtin_memmove((R+4),(R+12),4);
}
B6a34de:{NFSU2_TR(0x6a34de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a34e3ull));
TAIL_STATIC(0x69c8f5u,69c);
}
B6a34e3:L6a34e3:{c.instructions+=3;NFSU2_TR(0x6a34e3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a34e5:{NFSU2_TR(0x6a34e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a34e8:{NFSU2_TR(0x6a34e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a3da0;}}
}
B6a34ee:L6a34ee:{c.instructions+=3;NFSU2_TR(0x6a34ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a34f1:{NFSU2_TR(0x6a34f1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a34f3:{NFSU2_TR(0x6a34f3);
if(r1(R+518)){{goto L6a3501;}}
}
B6a34f5:L6a34f5:{c.instructions+=4;NFSU2_TR(0x6a34f5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6a34f7:{NFSU2_TR(0x6a34f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a34fa:{NFSU2_TR(0x6a34fa);
__builtin_memmove((R+4),(R+12),4);
}
B6a34fc:{NFSU2_TR(0x6a34fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3501ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a3501:L6a3501:{c.instructions+=1;NFSU2_TR(0x6a3501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3508:L6a3508:{c.instructions+=5;NFSU2_TR(0x6a3508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a350b:{NFSU2_TR(0x6a350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a350e:{NFSU2_TR(0x6a350e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a3511:{NFSU2_TR(0x6a3511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3512:{NFSU2_TR(0x6a3512);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3515:L6a3515:{c.instructions+=1;NFSU2_TR(0x6a3515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a351aull));
TAIL_STATIC(0x698ed2u,698);
}
B6a351a:L6a351a:{c.instructions+=2;NFSU2_TR(0x6a351a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a351c:{NFSU2_TR(0x6a351c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a34b0u);}goto L6a34b0;}}
}
B6a351e:L6a351e:{c.instructions+=4;NFSU2_TR(0x6a351e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3521:{NFSU2_TR(0x6a3521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3524:{NFSU2_TR(0x6a3524);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3527:{NFSU2_TR(0x6a3527);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3489u);}goto L6a3489;}}
}
B6a352d:L6a352d:{c.instructions+=3;NFSU2_TR(0x6a352d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a352f:{NFSU2_TR(0x6a352f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3532:{NFSU2_TR(0x6a3532);
if(r1(R+518)){{goto L6a37ba;}}
}
B6a3538:L6a3538:{c.instructions+=3;NFSU2_TR(0x6a3538);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a353b:{NFSU2_TR(0x6a353b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a353e:{NFSU2_TR(0x6a353e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a37ba;}}
}
B6a3544:L6a3544:{c.instructions+=8;NFSU2_TR(0x6a3544);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3547:{NFSU2_TR(0x6a3547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a354a:{NFSU2_TR(0x6a354a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a354d:{NFSU2_TR(0x6a354d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a354f:{NFSU2_TR(0x6a354f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a3554:{NFSU2_TR(0x6a3554);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3559:{NFSU2_TR(0x6a3559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a355c:{NFSU2_TR(0x6a355c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a37ab;}}
}
B6a3562:L6a3562:{c.instructions+=2;NFSU2_TR(0x6a3562);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3566:{NFSU2_TR(0x6a3566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a35e0;}}
}
B6a3568:L6a3568:{c.instructions+=9;NFSU2_TR(0x6a3568);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a356b:{NFSU2_TR(0x6a356b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a356e:{NFSU2_TR(0x6a356e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3570:{NFSU2_TR(0x6a3570);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3573:{NFSU2_TR(0x6a3573);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3576:{NFSU2_TR(0x6a3576);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3579:{NFSU2_TR(0x6a3579);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a357c:{NFSU2_TR(0x6a357c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3580:{NFSU2_TR(0x6a3580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a35e0;}}
}
B6a3582:L6a3582:{c.instructions+=2;NFSU2_TR(0x6a3582);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3586:{NFSU2_TR(0x6a3586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a358d:L6a358d:{c.instructions+=12;NFSU2_TR(0x6a358d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a358f:{NFSU2_TR(0x6a358f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3592:{NFSU2_TR(0x6a3592);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3595:{NFSU2_TR(0x6a3595);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a3597:{NFSU2_TR(0x6a3597);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a3598:{NFSU2_TR(0x6a3598);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B6a359a:{NFSU2_TR(0x6a359a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a359c:{NFSU2_TR(0x6a359c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a359d:{NFSU2_TR(0x6a359d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6a359f:{NFSU2_TR(0x6a359f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a35a2:{NFSU2_TR(0x6a35a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a35a5:{NFSU2_TR(0x6a35a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a358du);}goto L6a358d;}}
}
B6a35a7:L6a35a7:{c.instructions+=2;NFSU2_TR(0x6a35a7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a35ab:{NFSU2_TR(0x6a35ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a35e0;}}
}
B6a35ad:L6a35ad:{c.instructions+=2;NFSU2_TR(0x6a35ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a35b0:{NFSU2_TR(0x6a35b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a35b3:L6a35b3:{c.instructions+=7;NFSU2_TR(0x6a35b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a35b5:{NFSU2_TR(0x6a35b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a35b8:{NFSU2_TR(0x6a35b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a35bb:{NFSU2_TR(0x6a35bb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a35be:{NFSU2_TR(0x6a35be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a35c1:{NFSU2_TR(0x6a35c1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a35c5:{NFSU2_TR(0x6a35c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a35b3u);}goto L6a35b3;}}
}
B6a35c7:L6a35c7:{c.instructions+=1;NFSU2_TR(0x6a35c7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a35c9:L6a35c9:{c.instructions+=6;NFSU2_TR(0x6a35c9);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6a35cd:{NFSU2_TR(0x6a35cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a35d0:{NFSU2_TR(0x6a35d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a35d3:{NFSU2_TR(0x6a35d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a35d6:{NFSU2_TR(0x6a35d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6a35d9:{NFSU2_TR(0x6a35d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a35c9u);}goto L6a35c9;}}
}
B6a35db:L6a35db:{c.instructions+=1;NFSU2_TR(0x6a35db);
{goto L6a37ab;}
}
B6a35e0:L6a35e0:{c.instructions+=5;NFSU2_TR(0x6a35e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a35e2:{NFSU2_TR(0x6a35e2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a35e4:{NFSU2_TR(0x6a35e4);
u8 U[4];
w4(U+0,u32(0x10000004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a35e9:{NFSU2_TR(0x6a35e9);
__builtin_memmove((R+4),(R+12),4);
}
B6a35eb:{NFSU2_TR(0x6a35eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a35f0ull));
TAIL_STATIC(0x699c99u,699);
}
B6a35f0:L6a35f0:{c.instructions+=7;NFSU2_TR(0x6a35f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a35f2:{NFSU2_TR(0x6a35f2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a35f4:{NFSU2_TR(0x6a35f4);
__builtin_memmove((R+24),(R+0),4);
}
B6a35f6:{NFSU2_TR(0x6a35f6);
u8 U[4];
w4(U+0,u32(0x11000004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a35fb:{NFSU2_TR(0x6a35fb);
__builtin_memmove((R+4),(R+12),4);
}
B6a35fd:{NFSU2_TR(0x6a35fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3600:{NFSU2_TR(0x6a3600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3605ull));
TAIL_STATIC(0x699c99u,699);
}
B6a3605:L6a3605:{c.instructions+=2;NFSU2_TR(0x6a3605);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3608:{NFSU2_TR(0x6a3608);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a360e:L6a360e:{c.instructions+=2;NFSU2_TR(0x6a360e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3611:{NFSU2_TR(0x6a3611);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3617:L6a3617:{c.instructions+=7;NFSU2_TR(0x6a3617);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a361a:{NFSU2_TR(0x6a361a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a361d:{NFSU2_TR(0x6a361d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3620:{NFSU2_TR(0x6a3620);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3621:{NFSU2_TR(0x6a3621);
__builtin_memmove((R+4),(R+24),4);
}
B6a3623:{NFSU2_TR(0x6a3623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3626:{NFSU2_TR(0x6a3626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a362bull));
TAIL_STATIC(0x698eb3u,698);
}
B6a362b:L6a362b:{c.instructions+=3;NFSU2_TR(0x6a362b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a362e:{NFSU2_TR(0x6a362e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a362f:{NFSU2_TR(0x6a362f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3634ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a3634:L6a3634:{c.instructions+=2;NFSU2_TR(0x6a3634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3638:{NFSU2_TR(0x6a3638);
{goto L6a363d;}
}
B6a363a:L6a363a:{c.instructions+=1;NFSU2_TR(0x6a363a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a363d:L6a363d:{c.instructions+=4;NFSU2_TR(0x6a363d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3640:{NFSU2_TR(0x6a3640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3643:{NFSU2_TR(0x6a3643);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6a3645:{NFSU2_TR(0x6a3645);
if(r1(R+512)){{goto L6a364a;}}
}
B6a3647:L6a3647:{c.instructions+=1;NFSU2_TR(0x6a3647);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a364a:L6a364a:{c.instructions+=18;NFSU2_TR(0x6a364a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a364d:{NFSU2_TR(0x6a364d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a364f:{NFSU2_TR(0x6a364f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3652:{NFSU2_TR(0x6a3652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3655:{NFSU2_TR(0x6a3655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3658:{NFSU2_TR(0x6a3658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3659:{NFSU2_TR(0x6a3659);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a365a:{NFSU2_TR(0x6a365a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a365d:{NFSU2_TR(0x6a365d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3660:{NFSU2_TR(0x6a3660);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a3663:{NFSU2_TR(0x6a3663);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3666:{NFSU2_TR(0x6a3666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3669:{NFSU2_TR(0x6a3669);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a366c:{NFSU2_TR(0x6a366c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6a366f:{NFSU2_TR(0x6a366f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3672:{NFSU2_TR(0x6a3672);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3678:{NFSU2_TR(0x6a3678);
__builtin_memmove((R+4),(R+12),4);
}
B6a367a:{NFSU2_TR(0x6a367a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a367full));
TAIL_STATIC(0x699c39u,699);
}
B6a367f:L6a367f:{c.instructions+=27;NFSU2_TR(0x6a367f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3682:{NFSU2_TR(0x6a3682);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3685:{NFSU2_TR(0x6a3685);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3688:{NFSU2_TR(0x6a3688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a368b:{NFSU2_TR(0x6a368b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a368e:{NFSU2_TR(0x6a368e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3691:{NFSU2_TR(0x6a3691);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3694:{NFSU2_TR(0x6a3694);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3697:{NFSU2_TR(0x6a3697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a369a:{NFSU2_TR(0x6a369a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a369d:{NFSU2_TR(0x6a369d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a36a0:{NFSU2_TR(0x6a36a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36a3:{NFSU2_TR(0x6a36a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a36a6:{NFSU2_TR(0x6a36a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a36a9:{NFSU2_TR(0x6a36a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36ac:{NFSU2_TR(0x6a36ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36af:{NFSU2_TR(0x6a36af);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a36b2:{NFSU2_TR(0x6a36b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a36b5:{NFSU2_TR(0x6a36b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a36b8:{NFSU2_TR(0x6a36b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a36bb:{NFSU2_TR(0x6a36bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a36be:{NFSU2_TR(0x6a36be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a36c1:{NFSU2_TR(0x6a36c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36c4:{NFSU2_TR(0x6a36c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a36c7:{NFSU2_TR(0x6a36c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a36ca:{NFSU2_TR(0x6a36ca);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a36ce:{NFSU2_TR(0x6a36ce);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a36d4:L6a36d4:{c.instructions+=16;NFSU2_TR(0x6a36d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36d7:{NFSU2_TR(0x6a36d7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a36d9:{NFSU2_TR(0x6a36d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36dc:{NFSU2_TR(0x6a36dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a36df:{NFSU2_TR(0x6a36df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a36e0:{NFSU2_TR(0x6a36e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a36e1:{NFSU2_TR(0x6a36e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a36e4:{NFSU2_TR(0x6a36e4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a36e7:{NFSU2_TR(0x6a36e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a36ed:{NFSU2_TR(0x6a36ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a36f0:{NFSU2_TR(0x6a36f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a36f3:{NFSU2_TR(0x6a36f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a36f6:{NFSU2_TR(0x6a36f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a36f9:{NFSU2_TR(0x6a36f9);
__builtin_memmove((R+4),(R+12),4);
}
B6a36fb:{NFSU2_TR(0x6a36fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a36fc:{NFSU2_TR(0x6a36fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3701ull));
TAIL_STATIC(0x699c39u,699);
}
B6a3701:L6a3701:{c.instructions+=30;NFSU2_TR(0x6a3701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3704:{NFSU2_TR(0x6a3704);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3707:{NFSU2_TR(0x6a3707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a370a:{NFSU2_TR(0x6a370a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a370d:{NFSU2_TR(0x6a370d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3710:{NFSU2_TR(0x6a3710);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3713:{NFSU2_TR(0x6a3713);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3716:{NFSU2_TR(0x6a3716);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3719:{NFSU2_TR(0x6a3719);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a371c:{NFSU2_TR(0x6a371c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a371f:{NFSU2_TR(0x6a371f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3722:{NFSU2_TR(0x6a3722);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3725:{NFSU2_TR(0x6a3725);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3728:{NFSU2_TR(0x6a3728);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a372b:{NFSU2_TR(0x6a372b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a372e:{NFSU2_TR(0x6a372e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3731:{NFSU2_TR(0x6a3731);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6a3735:{NFSU2_TR(0x6a3735);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3738:{NFSU2_TR(0x6a3738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a373b:{NFSU2_TR(0x6a373b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a373e:{NFSU2_TR(0x6a373e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3741:{NFSU2_TR(0x6a3741);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3744:{NFSU2_TR(0x6a3744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3747:{NFSU2_TR(0x6a3747);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a374a:{NFSU2_TR(0x6a374a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a374d:{NFSU2_TR(0x6a374d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3750:{NFSU2_TR(0x6a3750);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3753:{NFSU2_TR(0x6a3753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3756:{NFSU2_TR(0x6a3756);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3759:{NFSU2_TR(0x6a3759);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a363au);}goto L6a363a;}}
}
B6a375f:L6a375f:{c.instructions+=7;NFSU2_TR(0x6a375f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3762:{NFSU2_TR(0x6a3762);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3768:{NFSU2_TR(0x6a3768);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a376b:{NFSU2_TR(0x6a376b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a376e:{NFSU2_TR(0x6a376e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3771:{NFSU2_TR(0x6a3771);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3774:{NFSU2_TR(0x6a3774);
{goto L6a377f;}
}
B6a3776:L6a3776:{c.instructions+=4;NFSU2_TR(0x6a3776);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a3779:{NFSU2_TR(0x6a3779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a377c:{NFSU2_TR(0x6a377c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a377e:{NFSU2_TR(0x6a377e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6a377f:L6a377f:{c.instructions+=3;NFSU2_TR(0x6a377f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3781:{NFSU2_TR(0x6a3781);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3784:{NFSU2_TR(0x6a3784);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3776u);}goto L6a3776;}}
}
B6a3786:L6a3786:{c.instructions+=8;NFSU2_TR(0x6a3786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3789:{NFSU2_TR(0x6a3789);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a378c:{NFSU2_TR(0x6a378c);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a378e:{NFSU2_TR(0x6a378e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a378f:{NFSU2_TR(0x6a378f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3790:{NFSU2_TR(0x6a3790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3791:{NFSU2_TR(0x6a3791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3794:{NFSU2_TR(0x6a3794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3799ull));
TAIL_STATIC(0x6739efu,673);
}
B6a3799:L6a3799:{c.instructions+=6;NFSU2_TR(0x6a3799);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a379c:{NFSU2_TR(0x6a379c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a379f:{NFSU2_TR(0x6a379f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a37a2:{NFSU2_TR(0x6a37a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a37a5:{NFSU2_TR(0x6a37a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a37a8:{NFSU2_TR(0x6a37a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a37ab:L6a37ab:{c.instructions+=4;NFSU2_TR(0x6a37ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a37ae:{NFSU2_TR(0x6a37ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a37b1:{NFSU2_TR(0x6a37b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a37b4:{NFSU2_TR(0x6a37b4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3544u);}goto L6a3544;}}
}
B6a37ba:L6a37ba:{c.instructions+=2;NFSU2_TR(0x6a37ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a37be:{NFSU2_TR(0x6a37be);
if(r1(R+518)){{goto L6a3d2a;}}
}
B6a37c4:L6a37c4:{c.instructions+=3;NFSU2_TR(0x6a37c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a37c8:{NFSU2_TR(0x6a37c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a37cc:{NFSU2_TR(0x6a37cc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a39f0;}}
}
B6a37d2:L6a37d2:{c.instructions+=9;NFSU2_TR(0x6a37d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a37d5:{NFSU2_TR(0x6a37d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a37d8:{NFSU2_TR(0x6a37d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a37db:{NFSU2_TR(0x6a37db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a37de:{NFSU2_TR(0x6a37de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a37e0:{NFSU2_TR(0x6a37e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a37e5:{NFSU2_TR(0x6a37e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a37ea:{NFSU2_TR(0x6a37ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a37ed:{NFSU2_TR(0x6a37ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a39e1;}}
}
B6a37f3:L6a37f3:{c.instructions+=9;NFSU2_TR(0x6a37f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a37f6:{NFSU2_TR(0x6a37f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a37f8:{NFSU2_TR(0x6a37f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a37fb:{NFSU2_TR(0x6a37fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a37fe:{NFSU2_TR(0x6a37fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3801:{NFSU2_TR(0x6a3801);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3804:{NFSU2_TR(0x6a3804);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3807:{NFSU2_TR(0x6a3807);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a380b:{NFSU2_TR(0x6a380b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a39e1;}}
}
B6a3811:L6a3811:{c.instructions+=3;NFSU2_TR(0x6a3811);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3815:{NFSU2_TR(0x6a3815);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3819:{NFSU2_TR(0x6a3819);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a383e;}}
}
B6a381b:L6a381b:{c.instructions+=4;NFSU2_TR(0x6a381b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a381e:{NFSU2_TR(0x6a381e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a3820:{NFSU2_TR(0x6a3820);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3823:{NFSU2_TR(0x6a3823);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3826:L6a3826:{c.instructions+=4;NFSU2_TR(0x6a3826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6a3828:{NFSU2_TR(0x6a3828);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a382b:{NFSU2_TR(0x6a382b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a382e:{NFSU2_TR(0x6a382e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a383e;}}
}
B6a3830:L6a3830:{c.instructions+=5;NFSU2_TR(0x6a3830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3833:{NFSU2_TR(0x6a3833);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3836:{NFSU2_TR(0x6a3836);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a3839:{NFSU2_TR(0x6a3839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6a383c:{NFSU2_TR(0x6a383c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3826u);}goto L6a3826;}}
}
B6a383e:L6a383e:{c.instructions+=3;NFSU2_TR(0x6a383e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3841:{NFSU2_TR(0x6a3841);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3844:{NFSU2_TR(0x6a3844);
if(r1(R+518)){{goto L6a39e1;}}
}
B6a384a:L6a384a:{c.instructions+=5;NFSU2_TR(0x6a384a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a384d:{NFSU2_TR(0x6a384d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3851:{NFSU2_TR(0x6a3851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3855:{NFSU2_TR(0x6a3855);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3857:{NFSU2_TR(0x6a3857);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3973;}}
}
B6a385d:L6a385d:{c.instructions+=6;NFSU2_TR(0x6a385d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3860:{NFSU2_TR(0x6a3860);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3863:{NFSU2_TR(0x6a3863);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6a3866:{NFSU2_TR(0x6a3866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a3868:{NFSU2_TR(0x6a3868);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a386b:{NFSU2_TR(0x6a386b);
if(r1(R+518)){{goto L6a3948;}}
}
B6a3871:L6a3871:{c.instructions+=7;NFSU2_TR(0x6a3871);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3874:{NFSU2_TR(0x6a3874);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3877:{NFSU2_TR(0x6a3877);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a387a:{NFSU2_TR(0x6a387a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a387d:{NFSU2_TR(0x6a387d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a387f:{NFSU2_TR(0x6a387f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a3882:{NFSU2_TR(0x6a3882);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a38ac;}}
}
B6a3884:L6a3884:{c.instructions+=3;NFSU2_TR(0x6a3884);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a3887:{NFSU2_TR(0x6a3887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a388a:{NFSU2_TR(0x6a388a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a388d:L6a388d:{c.instructions+=4;NFSU2_TR(0x6a388d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3890:{NFSU2_TR(0x6a3890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3892:{NFSU2_TR(0x6a3892);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3895:{NFSU2_TR(0x6a3895);
if(r1(R+518)){{goto L6a38a3;}}
}
B6a3897:L6a3897:{c.instructions+=4;NFSU2_TR(0x6a3897);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a389a:{NFSU2_TR(0x6a389a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a389d:{NFSU2_TR(0x6a389d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a38a0:{NFSU2_TR(0x6a38a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a38a3;}}
}
B6a38a2:L6a38a2:{c.instructions+=1;NFSU2_TR(0x6a38a2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a38a3:L6a38a3:{c.instructions+=3;NFSU2_TR(0x6a38a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a38a7:{NFSU2_TR(0x6a38a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a38aa:{NFSU2_TR(0x6a38aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a388du);}goto L6a388d;}}
}
B6a38ac:L6a38ac:{c.instructions+=7;NFSU2_TR(0x6a38ac);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a38ae:{NFSU2_TR(0x6a38ae);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6a38b4:{NFSU2_TR(0x6a38b4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a38b6:{NFSU2_TR(0x6a38b6);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000000ull))));
}
B6a38bc:{NFSU2_TR(0x6a38bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a38bd:{NFSU2_TR(0x6a38bd);
__builtin_memmove((R+4),(R+12),4);
}
B6a38bf:{NFSU2_TR(0x6a38bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a38c4ull));
TAIL_STATIC(0x699c99u,699);
}
B6a38c4:L6a38c4:{c.instructions+=2;NFSU2_TR(0x6a38c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a38c7:{NFSU2_TR(0x6a38c7);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a38cd:L6a38cd:{c.instructions+=6;NFSU2_TR(0x6a38cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a38d0:{NFSU2_TR(0x6a38d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a38d3:{NFSU2_TR(0x6a38d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a38d4:{NFSU2_TR(0x6a38d4);
__builtin_memmove((R+4),(R+24),4);
}
B6a38d6:{NFSU2_TR(0x6a38d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a38d9:{NFSU2_TR(0x6a38d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a38deull));
TAIL_STATIC(0x698eb3u,698);
}
B6a38de:L6a38de:{c.instructions+=5;NFSU2_TR(0x6a38de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a38e1:{NFSU2_TR(0x6a38e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a38e4:{NFSU2_TR(0x6a38e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a38e7:{NFSU2_TR(0x6a38e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a38ea:{NFSU2_TR(0x6a38ea);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a3948;}}
}
B6a38ec:L6a38ec:{c.instructions+=1;NFSU2_TR(0x6a38ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a38f0:L6a38f0:{c.instructions+=6;NFSU2_TR(0x6a38f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a38f3:{NFSU2_TR(0x6a38f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a38f6:{NFSU2_TR(0x6a38f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a38f9:{NFSU2_TR(0x6a38f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a38fc:{NFSU2_TR(0x6a38fc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a38ff:{NFSU2_TR(0x6a38ff);
if(r1(R+518)){{goto L6a393d;}}
}
B6a3901:L6a3901:{c.instructions+=5;NFSU2_TR(0x6a3901);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3904:{NFSU2_TR(0x6a3904);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3907:{NFSU2_TR(0x6a3907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a390a:{NFSU2_TR(0x6a390a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a390d:{NFSU2_TR(0x6a390d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a393d;}}
}
B6a390f:L6a390f:{c.instructions+=15;NFSU2_TR(0x6a390f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3912:{NFSU2_TR(0x6a3912);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3915:{NFSU2_TR(0x6a3915);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3918:{NFSU2_TR(0x6a3918);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a391b:{NFSU2_TR(0x6a391b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a391e:{NFSU2_TR(0x6a391e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3921:{NFSU2_TR(0x6a3921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3924:{NFSU2_TR(0x6a3924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3927:{NFSU2_TR(0x6a3927);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a392a:{NFSU2_TR(0x6a392a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a392d:{NFSU2_TR(0x6a392d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3930:{NFSU2_TR(0x6a3930);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6a3934:{NFSU2_TR(0x6a3934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3937:{NFSU2_TR(0x6a3937);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a393a:{NFSU2_TR(0x6a393a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a393d:L6a393d:{c.instructions+=4;NFSU2_TR(0x6a393d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3940:{NFSU2_TR(0x6a3940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3943:{NFSU2_TR(0x6a3943);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3946:{NFSU2_TR(0x6a3946);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a38f0u);}goto L6a38f0;}}
}
B6a3948:L6a3948:{c.instructions+=4;NFSU2_TR(0x6a3948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a394b:{NFSU2_TR(0x6a394b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a394e:{NFSU2_TR(0x6a394e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a3951:{NFSU2_TR(0x6a3951);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a385du);}goto L6a385d;}}
}
B6a3957:L6a3957:{c.instructions+=2;NFSU2_TR(0x6a3957);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a395b:{NFSU2_TR(0x6a395b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3973;}}
}
B6a395d:L6a395d:{c.instructions+=6;NFSU2_TR(0x6a395d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3960:{NFSU2_TR(0x6a3960);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3963:{NFSU2_TR(0x6a3963);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3966:{NFSU2_TR(0x6a3966);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6a3968:{NFSU2_TR(0x6a3968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6a396b:{NFSU2_TR(0x6a396b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a396e:L6a396e:{c.instructions+=1;NFSU2_TR(0x6a396e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a3970;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a396eu);}goto L6a396e;}
}
B6a3970:L6a3970:{c.instructions+=1;NFSU2_TR(0x6a3970);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3973:L6a3973:{c.instructions+=5;NFSU2_TR(0x6a3973);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3976:{NFSU2_TR(0x6a3976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a3979:{NFSU2_TR(0x6a3979);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a397a:{NFSU2_TR(0x6a397a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a397d:{NFSU2_TR(0x6a397d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a399b;}}
}
B6a397f:L6a397f:{c.instructions+=3;NFSU2_TR(0x6a397f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3982:{NFSU2_TR(0x6a3982);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a3985:{NFSU2_TR(0x6a3985);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a3988:L6a3988:{c.instructions+=7;NFSU2_TR(0x6a3988);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a398b:{NFSU2_TR(0x6a398b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a398e:{NFSU2_TR(0x6a398e);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a3992:{NFSU2_TR(0x6a3992);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a3993:{NFSU2_TR(0x6a3993);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B6a3996:{NFSU2_TR(0x6a3996);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3999:{NFSU2_TR(0x6a3999);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3988u);}goto L6a3988;}}
}
B6a399b:L6a399b:{c.instructions+=4;NFSU2_TR(0x6a399b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a399e:{NFSU2_TR(0x6a399e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a39a2:{NFSU2_TR(0x6a39a2);
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
B6a39a4:{NFSU2_TR(0x6a39a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a39c4;}}
}
B6a39a6:L6a39a6:{c.instructions+=2;NFSU2_TR(0x6a39a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a39a9:{NFSU2_TR(0x6a39a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a39ac:L6a39ac:{c.instructions+=8;NFSU2_TR(0x6a39ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a39af:{NFSU2_TR(0x6a39af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a39b2:{NFSU2_TR(0x6a39b2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6a39b6:{NFSU2_TR(0x6a39b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a39b9:{NFSU2_TR(0x6a39b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a39bc:{NFSU2_TR(0x6a39bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a39bf:{NFSU2_TR(0x6a39bf);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6a39c2:{NFSU2_TR(0x6a39c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a39acu);}goto L6a39ac;}}
}
B6a39c4:L6a39c4:{c.instructions+=3;NFSU2_TR(0x6a39c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a39c6:{NFSU2_TR(0x6a39c6);
__builtin_memmove((R+4),(R+28),4);
}
B6a39c8:{NFSU2_TR(0x6a39c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a39cdull));
TAIL_STATIC(0x6739efu,673);
}
B6a39cd:L6a39cd:{c.instructions+=5;NFSU2_TR(0x6a39cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a39d0:{NFSU2_TR(0x6a39d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a39d3:{NFSU2_TR(0x6a39d3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a39d7:{NFSU2_TR(0x6a39d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a39da:{NFSU2_TR(0x6a39da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a39e1:L6a39e1:{c.instructions+=4;NFSU2_TR(0x6a39e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a39e4:{NFSU2_TR(0x6a39e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a39e7:{NFSU2_TR(0x6a39e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a39ea:{NFSU2_TR(0x6a39ea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a37d2u);}goto L6a37d2;}}
}
B6a39f0:L6a39f0:{c.instructions+=3;NFSU2_TR(0x6a39f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a39f4:{NFSU2_TR(0x6a39f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a39f8:{NFSU2_TR(0x6a39f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3d2a;}}
}
B6a39fe:L6a39fe:{c.instructions+=9;NFSU2_TR(0x6a39fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3a01:{NFSU2_TR(0x6a3a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3a04:{NFSU2_TR(0x6a3a04);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a3a07:{NFSU2_TR(0x6a3a07);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a3a0a:{NFSU2_TR(0x6a3a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3a0c:{NFSU2_TR(0x6a3a0c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a3a11:{NFSU2_TR(0x6a3a11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3a16:{NFSU2_TR(0x6a3a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a19:{NFSU2_TR(0x6a3a19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3d1b;}}
}
B6a3a1f:L6a3a1f:{c.instructions+=9;NFSU2_TR(0x6a3a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3a22:{NFSU2_TR(0x6a3a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3a25:{NFSU2_TR(0x6a3a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3a27:{NFSU2_TR(0x6a3a27);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3a2a:{NFSU2_TR(0x6a3a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3a2d:{NFSU2_TR(0x6a3a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3a30:{NFSU2_TR(0x6a3a30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3a33:{NFSU2_TR(0x6a3a33);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3a37:{NFSU2_TR(0x6a3a37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3d1b;}}
}
B6a3a3d:L6a3a3d:{c.instructions+=7;NFSU2_TR(0x6a3a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3a40:{NFSU2_TR(0x6a3a40);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a3a42:{NFSU2_TR(0x6a3a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a45:{NFSU2_TR(0x6a3a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a48:{NFSU2_TR(0x6a3a48);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3a4a:{NFSU2_TR(0x6a3a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a4d:{NFSU2_TR(0x6a3a4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3ac4;}}
}
B6a3a4f:L6a3a4f:{c.instructions+=5;NFSU2_TR(0x6a3a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3a52:{NFSU2_TR(0x6a3a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a55:{NFSU2_TR(0x6a3a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a58:{NFSU2_TR(0x6a3a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a5b:{NFSU2_TR(0x6a3a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a5e:L6a3a5e:{c.instructions+=9;NFSU2_TR(0x6a3a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3a61:{NFSU2_TR(0x6a3a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3a64:{NFSU2_TR(0x6a3a64);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3a67:{NFSU2_TR(0x6a3a67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3a6a:{NFSU2_TR(0x6a3a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3a6c:{NFSU2_TR(0x6a3a6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3a6f:{NFSU2_TR(0x6a3a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3a72:{NFSU2_TR(0x6a3a72);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3a75:{NFSU2_TR(0x6a3a75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3a7a;}}
}
B6a3a77:L6a3a77:{c.instructions+=1;NFSU2_TR(0x6a3a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a7a:L6a3a7a:{c.instructions+=4;NFSU2_TR(0x6a3a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3a7d:{NFSU2_TR(0x6a3a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a81:{NFSU2_TR(0x6a3a81);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3a83:{NFSU2_TR(0x6a3a83);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3aae;}}
}
B6a3a85:L6a3a85:{c.instructions+=4;NFSU2_TR(0x6a3a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3a88:{NFSU2_TR(0x6a3a88);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3a8b:{NFSU2_TR(0x6a3a8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3a8e:{NFSU2_TR(0x6a3a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3a91:L6a3a91:{c.instructions+=4;NFSU2_TR(0x6a3a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6a3a93:{NFSU2_TR(0x6a3a93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3a96:{NFSU2_TR(0x6a3a96);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3a99:{NFSU2_TR(0x6a3a99);
if(r1(R+518)){{goto L6a3aab;}}
}
B6a3a9b:L6a3a9b:{c.instructions+=5;NFSU2_TR(0x6a3a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3a9e:{NFSU2_TR(0x6a3a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3aa1:{NFSU2_TR(0x6a3aa1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a3aa4:{NFSU2_TR(0x6a3aa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a3aa7:{NFSU2_TR(0x6a3aa7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3a91u);}goto L6a3a91;}}
}
B6a3aa9:L6a3aa9:{c.instructions+=1;NFSU2_TR(0x6a3aa9);
{goto L6a3aae;}
}
B6a3aab:L6a3aab:{c.instructions+=1;NFSU2_TR(0x6a3aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3aae:L6a3aae:{c.instructions+=6;NFSU2_TR(0x6a3aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ab1:{NFSU2_TR(0x6a3ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3ab4:{NFSU2_TR(0x6a3ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ab8:{NFSU2_TR(0x6a3ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3abc:{NFSU2_TR(0x6a3abc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6a3abf:{NFSU2_TR(0x6a3abf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3a5eu);}goto L6a3a5e;}}
}
B6a3ac1:L6a3ac1:{c.instructions+=1;NFSU2_TR(0x6a3ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3ac4:L6a3ac4:{c.instructions+=2;NFSU2_TR(0x6a3ac4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3ac6:{NFSU2_TR(0x6a3ac6);
if(r1(R+518)){{goto L6a3d1b;}}
}
B6a3acc:L6a3acc:{c.instructions+=4;NFSU2_TR(0x6a3acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3acf:{NFSU2_TR(0x6a3acf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6a3ad2:{NFSU2_TR(0x6a3ad2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3ad4:{NFSU2_TR(0x6a3ad4);
if(r1(R+518)){{goto L6a3d1b;}}
}
B6a3ada:L6a3ada:{c.instructions+=2;NFSU2_TR(0x6a3ada);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3add:{NFSU2_TR(0x6a3add);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a3ae7;}}
}
B6a3adf:L6a3adf:{c.instructions+=2;NFSU2_TR(0x6a3adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3ae1:{NFSU2_TR(0x6a3ae1);
if(r1(R+518)){{goto L6a3d1b;}}
}
B6a3ae7:L6a3ae7:{c.instructions+=3;NFSU2_TR(0x6a3ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3aeb:{NFSU2_TR(0x6a3aeb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3aee:{NFSU2_TR(0x6a3aee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3b90;}}
}
B6a3af4:L6a3af4:{c.instructions+=7;NFSU2_TR(0x6a3af4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3af6:{NFSU2_TR(0x6a3af6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6a3afc:{NFSU2_TR(0x6a3afc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3afe:{NFSU2_TR(0x6a3afe);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x10000000ull))));
}
B6a3b04:{NFSU2_TR(0x6a3b04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3b05:{NFSU2_TR(0x6a3b05);
__builtin_memmove((R+4),(R+12),4);
}
B6a3b07:{NFSU2_TR(0x6a3b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3b0cull));
TAIL_STATIC(0x699c99u,699);
}
B6a3b0c:L6a3b0c:{c.instructions+=2;NFSU2_TR(0x6a3b0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3b0f:{NFSU2_TR(0x6a3b0f);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3b15:L6a3b15:{c.instructions+=6;NFSU2_TR(0x6a3b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3b18:{NFSU2_TR(0x6a3b18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3b1b:{NFSU2_TR(0x6a3b1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3b1c:{NFSU2_TR(0x6a3b1c);
__builtin_memmove((R+4),(R+0),4);
}
B6a3b1e:{NFSU2_TR(0x6a3b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b21:{NFSU2_TR(0x6a3b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3b26ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a3b26:L6a3b26:{c.instructions+=5;NFSU2_TR(0x6a3b26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a3b28:{NFSU2_TR(0x6a3b28);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3b2b:{NFSU2_TR(0x6a3b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b32:{NFSU2_TR(0x6a3b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b35:{NFSU2_TR(0x6a3b35);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3b90;}}
}
B6a3b37:L6a3b37:{c.instructions+=1;NFSU2_TR(0x6a3b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b3a:L6a3b3a:{c.instructions+=12;NFSU2_TR(0x6a3b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3b3d:{NFSU2_TR(0x6a3b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3b40:{NFSU2_TR(0x6a3b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3b43:{NFSU2_TR(0x6a3b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3b46:{NFSU2_TR(0x6a3b46);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a3b49:{NFSU2_TR(0x6a3b49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3b4c:{NFSU2_TR(0x6a3b4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3b4f:{NFSU2_TR(0x6a3b4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3b52:{NFSU2_TR(0x6a3b52);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3b55:{NFSU2_TR(0x6a3b55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3b58:{NFSU2_TR(0x6a3b58);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3b5b:{NFSU2_TR(0x6a3b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3b85;}}
}
B6a3b5d:L6a3b5d:{c.instructions+=13;NFSU2_TR(0x6a3b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3b60:{NFSU2_TR(0x6a3b60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3b63:{NFSU2_TR(0x6a3b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3b66:{NFSU2_TR(0x6a3b66);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3b69:{NFSU2_TR(0x6a3b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3b6c:{NFSU2_TR(0x6a3b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3b6f:{NFSU2_TR(0x6a3b6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3b72:{NFSU2_TR(0x6a3b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3b75:{NFSU2_TR(0x6a3b75);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3b78:{NFSU2_TR(0x6a3b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3b7b:{NFSU2_TR(0x6a3b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6a3b7f:{NFSU2_TR(0x6a3b7f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a3b82:{NFSU2_TR(0x6a3b82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b85:L6a3b85:{c.instructions+=4;NFSU2_TR(0x6a3b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b88:{NFSU2_TR(0x6a3b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3b8b:{NFSU2_TR(0x6a3b8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3b8e:{NFSU2_TR(0x6a3b8e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3b3au);}goto L6a3b3a;}}
}
B6a3b90:L6a3b90:{c.instructions+=4;NFSU2_TR(0x6a3b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3b93:{NFSU2_TR(0x6a3b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3b97:{NFSU2_TR(0x6a3b97);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3b99:{NFSU2_TR(0x6a3b99);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3c99;}}
}
B6a3b9f:L6a3b9f:{c.instructions+=6;NFSU2_TR(0x6a3b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3ba2:{NFSU2_TR(0x6a3ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3ba5:{NFSU2_TR(0x6a3ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6a3ba8:{NFSU2_TR(0x6a3ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a3baa:{NFSU2_TR(0x6a3baa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3bad:{NFSU2_TR(0x6a3bad);
if(r1(R+518)){{goto L6a3c8a;}}
}
B6a3bb3:L6a3bb3:{c.instructions+=7;NFSU2_TR(0x6a3bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3bb6:{NFSU2_TR(0x6a3bb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3bb9:{NFSU2_TR(0x6a3bb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3bbc:{NFSU2_TR(0x6a3bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3bbf:{NFSU2_TR(0x6a3bbf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a3bc1:{NFSU2_TR(0x6a3bc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a3bc4:{NFSU2_TR(0x6a3bc4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a3bee;}}
}
B6a3bc6:L6a3bc6:{c.instructions+=3;NFSU2_TR(0x6a3bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a3bc9:{NFSU2_TR(0x6a3bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3bcc:{NFSU2_TR(0x6a3bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3bcf:L6a3bcf:{c.instructions+=4;NFSU2_TR(0x6a3bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3bd2:{NFSU2_TR(0x6a3bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3bd4:{NFSU2_TR(0x6a3bd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3bd7:{NFSU2_TR(0x6a3bd7);
if(r1(R+518)){{goto L6a3be5;}}
}
B6a3bd9:L6a3bd9:{c.instructions+=4;NFSU2_TR(0x6a3bd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3bdc:{NFSU2_TR(0x6a3bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3bdf:{NFSU2_TR(0x6a3bdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3be2:{NFSU2_TR(0x6a3be2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3be5;}}
}
B6a3be4:L6a3be4:{c.instructions+=1;NFSU2_TR(0x6a3be4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a3be5:L6a3be5:{c.instructions+=3;NFSU2_TR(0x6a3be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3be9:{NFSU2_TR(0x6a3be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3bec:{NFSU2_TR(0x6a3bec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3bcfu);}goto L6a3bcf;}}
}
B6a3bee:L6a3bee:{c.instructions+=7;NFSU2_TR(0x6a3bee);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3bf0:{NFSU2_TR(0x6a3bf0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6a3bf6:{NFSU2_TR(0x6a3bf6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3bf8:{NFSU2_TR(0x6a3bf8);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10000000ull))));
}
B6a3bfe:{NFSU2_TR(0x6a3bfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3bff:{NFSU2_TR(0x6a3bff);
__builtin_memmove((R+4),(R+12),4);
}
B6a3c01:{NFSU2_TR(0x6a3c01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3c06ull));
TAIL_STATIC(0x699c99u,699);
}
B6a3c06:L6a3c06:{c.instructions+=2;NFSU2_TR(0x6a3c06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3c09:{NFSU2_TR(0x6a3c09);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3c0f:L6a3c0f:{c.instructions+=6;NFSU2_TR(0x6a3c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3c12:{NFSU2_TR(0x6a3c12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3c15:{NFSU2_TR(0x6a3c15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3c16:{NFSU2_TR(0x6a3c16);
__builtin_memmove((R+4),(R+24),4);
}
B6a3c18:{NFSU2_TR(0x6a3c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c1b:{NFSU2_TR(0x6a3c1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3c20ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a3c20:L6a3c20:{c.instructions+=5;NFSU2_TR(0x6a3c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3c23:{NFSU2_TR(0x6a3c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c26:{NFSU2_TR(0x6a3c26);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3c29:{NFSU2_TR(0x6a3c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c2c:{NFSU2_TR(0x6a3c2c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a3c8a;}}
}
B6a3c2e:L6a3c2e:{c.instructions+=1;NFSU2_TR(0x6a3c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c32:L6a3c32:{c.instructions+=6;NFSU2_TR(0x6a3c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3c35:{NFSU2_TR(0x6a3c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3c38:{NFSU2_TR(0x6a3c38);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a3c3b:{NFSU2_TR(0x6a3c3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3c3e:{NFSU2_TR(0x6a3c3e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3c41:{NFSU2_TR(0x6a3c41);
if(r1(R+518)){{goto L6a3c7f;}}
}
B6a3c43:L6a3c43:{c.instructions+=5;NFSU2_TR(0x6a3c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3c46:{NFSU2_TR(0x6a3c46);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a3c49:{NFSU2_TR(0x6a3c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3c4c:{NFSU2_TR(0x6a3c4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3c4f:{NFSU2_TR(0x6a3c4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3c7f;}}
}
B6a3c51:L6a3c51:{c.instructions+=15;NFSU2_TR(0x6a3c51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3c54:{NFSU2_TR(0x6a3c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3c57:{NFSU2_TR(0x6a3c57);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3c5a:{NFSU2_TR(0x6a3c5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3c5d:{NFSU2_TR(0x6a3c5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3c60:{NFSU2_TR(0x6a3c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3c63:{NFSU2_TR(0x6a3c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3c66:{NFSU2_TR(0x6a3c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3c69:{NFSU2_TR(0x6a3c69);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a3c6c:{NFSU2_TR(0x6a3c6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3c6f:{NFSU2_TR(0x6a3c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3c72:{NFSU2_TR(0x6a3c72);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))|u32(u32(0xffffffffull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6a3c76:{NFSU2_TR(0x6a3c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3c79:{NFSU2_TR(0x6a3c79);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a3c7c:{NFSU2_TR(0x6a3c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c7f:L6a3c7f:{c.instructions+=4;NFSU2_TR(0x6a3c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c82:{NFSU2_TR(0x6a3c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3c85:{NFSU2_TR(0x6a3c85);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3c88:{NFSU2_TR(0x6a3c88);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3c32u);}goto L6a3c32;}}
}
B6a3c8a:L6a3c8a:{c.instructions+=4;NFSU2_TR(0x6a3c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3c8d:{NFSU2_TR(0x6a3c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3c90:{NFSU2_TR(0x6a3c90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a3c93:{NFSU2_TR(0x6a3c93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3b9fu);}goto L6a3b9f;}}
}
B6a3c99:L6a3c99:{c.instructions+=2;NFSU2_TR(0x6a3c99);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3c9d:{NFSU2_TR(0x6a3c9d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3cb5;}}
}
B6a3c9f:L6a3c9f:{c.instructions+=6;NFSU2_TR(0x6a3c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3ca2:{NFSU2_TR(0x6a3ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3ca5:{NFSU2_TR(0x6a3ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3ca8:{NFSU2_TR(0x6a3ca8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6a3caa:{NFSU2_TR(0x6a3caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6a3cad:{NFSU2_TR(0x6a3cad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a3cb0:L6a3cb0:{c.instructions+=1;NFSU2_TR(0x6a3cb0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6a3cb2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3cb0u);}goto L6a3cb0;}
}
B6a3cb2:L6a3cb2:{c.instructions+=1;NFSU2_TR(0x6a3cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3cb5:L6a3cb5:{c.instructions+=5;NFSU2_TR(0x6a3cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3cb8:{NFSU2_TR(0x6a3cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6a3cbb:{NFSU2_TR(0x6a3cbb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a3cbc:{NFSU2_TR(0x6a3cbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3cbf:{NFSU2_TR(0x6a3cbf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3cdd;}}
}
B6a3cc1:L6a3cc1:{c.instructions+=3;NFSU2_TR(0x6a3cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3cc4:{NFSU2_TR(0x6a3cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a3cc7:{NFSU2_TR(0x6a3cc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a3cca:L6a3cca:{c.instructions+=7;NFSU2_TR(0x6a3cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3ccd:{NFSU2_TR(0x6a3ccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a3cd0:{NFSU2_TR(0x6a3cd0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6a3cd4:{NFSU2_TR(0x6a3cd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a3cd5:{NFSU2_TR(0x6a3cd5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B6a3cd8:{NFSU2_TR(0x6a3cd8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3cdb:{NFSU2_TR(0x6a3cdb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3ccau);}goto L6a3cca;}}
}
B6a3cdd:L6a3cdd:{c.instructions+=3;NFSU2_TR(0x6a3cdd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a3cdf:{NFSU2_TR(0x6a3cdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3ce2:{NFSU2_TR(0x6a3ce2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3cfd;}}
}
B6a3ce4:L6a3ce4:{c.instructions+=2;NFSU2_TR(0x6a3ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3ce7:{NFSU2_TR(0x6a3ce7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a3cea:L6a3cea:{c.instructions+=7;NFSU2_TR(0x6a3cea);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6a3cee:{NFSU2_TR(0x6a3cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3cf1:{NFSU2_TR(0x6a3cf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a3cf4:{NFSU2_TR(0x6a3cf4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a3cf5:{NFSU2_TR(0x6a3cf5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a3cf8:{NFSU2_TR(0x6a3cf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3cfb:{NFSU2_TR(0x6a3cfb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3ceau);}goto L6a3cea;}}
}
B6a3cfd:L6a3cfd:{c.instructions+=5;NFSU2_TR(0x6a3cfd);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a3cff:{NFSU2_TR(0x6a3cff);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3d00:{NFSU2_TR(0x6a3d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3d01:{NFSU2_TR(0x6a3d01);
__builtin_memmove((R+4),(R+28),4);
}
B6a3d03:{NFSU2_TR(0x6a3d03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3d08ull));
TAIL_STATIC(0x6739efu,673);
}
B6a3d08:L6a3d08:{c.instructions+=6;NFSU2_TR(0x6a3d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3d0b:{NFSU2_TR(0x6a3d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3d0e:{NFSU2_TR(0x6a3d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3d11:{NFSU2_TR(0x6a3d11);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6a3d15:{NFSU2_TR(0x6a3d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3d18:{NFSU2_TR(0x6a3d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3d1b:L6a3d1b:{c.instructions+=4;NFSU2_TR(0x6a3d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3d1e:{NFSU2_TR(0x6a3d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3d21:{NFSU2_TR(0x6a3d21);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3d24:{NFSU2_TR(0x6a3d24);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a39feu);}goto L6a39fe;}}
}
B6a3d2a:L6a3d2a:{c.instructions+=2;NFSU2_TR(0x6a3d2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3d2e:{NFSU2_TR(0x6a3d2e);
if(r1(R+518)){{goto L6a3d37;}}
}
B6a3d30:L6a3d30:{c.instructions+=2;NFSU2_TR(0x6a3d30);
__builtin_memmove((R+4),(R+12),4);
}
B6a3d32:{NFSU2_TR(0x6a3d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3d37ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a3d37:L6a3d37:{c.instructions+=4;NFSU2_TR(0x6a3d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a3d3a:{NFSU2_TR(0x6a3d3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a3d3d:{NFSU2_TR(0x6a3d3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3d3e:{NFSU2_TR(0x6a3d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3d43ull));
TAIL_STATIC(0x575620u,575);
}
B6a3d43:L6a3d43:{c.instructions+=5;NFSU2_TR(0x6a3d43);
__builtin_memmove((R+8),(R+0),4);
}
B6a3d45:{NFSU2_TR(0x6a3d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3d47:{NFSU2_TR(0x6a3d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a3d48:{NFSU2_TR(0x6a3d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3d4b:{NFSU2_TR(0x6a3d4b);
if(r1(R+518)){TAIL_STATIC(0x6a46dau,6a4);}
}
B6a3d51:L6a3d51:{c.instructions+=4;NFSU2_TR(0x6a3d51);
__builtin_memmove((R+4),(R+24),4);
}
B6a3d53:{NFSU2_TR(0x6a3d53);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6a3d56:{NFSU2_TR(0x6a3d56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a3d58:{NFSU2_TR(0x6a3d58);
__builtin_memmove((R+28),(R+8),4);
}
B6a3d5a:L6a3d5a:{c.instructions+=1;NFSU2_TR(0x6a3d5a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6a3d5c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3d5au);}goto L6a3d5a;}
}
B6a3d5c:L6a3d5c:{c.instructions+=3;NFSU2_TR(0x6a3d5c);
__builtin_memmove((R+4),(R+24),4);
}
B6a3d5e:{NFSU2_TR(0x6a3d5e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6a3d61:{NFSU2_TR(0x6a3d61);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6a3d63:L6a3d63:{c.instructions+=1;NFSU2_TR(0x6a3d63);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6a3d65;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3d63u);}goto L6a3d63;}
}
B6a3d65:L6a3d65:{c.instructions+=2;NFSU2_TR(0x6a3d65);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3d68:{NFSU2_TR(0x6a3d68);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3d95;}}
}
B6a3d6a:L6a3d6a:{c.instructions+=6;NFSU2_TR(0x6a3d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3d6d:{NFSU2_TR(0x6a3d6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3d70:{NFSU2_TR(0x6a3d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3d74:{NFSU2_TR(0x6a3d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3d7a:{NFSU2_TR(0x6a3d7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3d7d:{NFSU2_TR(0x6a3d7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3d8f;}}
}
B6a3d7f:L6a3d7f:{c.instructions+=5;NFSU2_TR(0x6a3d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3d82:{NFSU2_TR(0x6a3d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3d85:{NFSU2_TR(0x6a3d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a3d88:{NFSU2_TR(0x6a3d88);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B6a3d8a:{NFSU2_TR(0x6a3d8a);
if(r1(R+512)){{goto L6a3d8f;}}
}
B6a3d8c:L6a3d8c:{c.instructions+=2;NFSU2_TR(0x6a3d8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a3d8d:{NFSU2_TR(0x6a3d8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a3d8f:L6a3d8f:{c.instructions+=3;NFSU2_TR(0x6a3d8f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6a3d90:{NFSU2_TR(0x6a3d90);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6a3d93:{NFSU2_TR(0x6a3d93);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3d6au);}goto L6a3d6a;}}
}
B6a3d95:L6a3d95:{c.instructions+=3;NFSU2_TR(0x6a3d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3d98:{NFSU2_TR(0x6a3d98);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3d9a:{NFSU2_TR(0x6a3d9a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a3db4;}}
}
B6a3d9c:L6a3d9c:{c.instructions+=1;NFSU2_TR(0x6a3d9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3da0:L6a3da0:{c.instructions+=2;NFSU2_TR(0x6a3da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3da3:{NFSU2_TR(0x6a3da3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3da8ull));
TAIL_STATIC(0x575630u,575);
}
B6a3da8:L6a3da8:{c.instructions+=7;NFSU2_TR(0x6a3da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3dab:{NFSU2_TR(0x6a3dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a3dac:{NFSU2_TR(0x6a3dac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a3dad:{NFSU2_TR(0x6a3dad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a3dae:{NFSU2_TR(0x6a3dae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a3daf:{NFSU2_TR(0x6a3daf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a3db0:{NFSU2_TR(0x6a3db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a3db1:L6a3db1:{c.instructions+=1;NFSU2_TR(0x6a3db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3db4:L6a3db4:{c.instructions+=8;NFSU2_TR(0x6a3db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3db7:{NFSU2_TR(0x6a3db7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6a3db8:{NFSU2_TR(0x6a3db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3dbb:{NFSU2_TR(0x6a3dbb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3dbe:{NFSU2_TR(0x6a3dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a3dc0:{NFSU2_TR(0x6a3dc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3dc6:{NFSU2_TR(0x6a3dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3dc9:{NFSU2_TR(0x6a3dc9);
if(r1(R+518)){TAIL_STATIC(0x6a46cbu,6a4);}
}
B6a3dcf:L6a3dcf:{c.instructions+=9;NFSU2_TR(0x6a3dcf);
__builtin_memmove((R+24),(R+0),4);
}
B6a3dd1:{NFSU2_TR(0x6a3dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3dd4:{NFSU2_TR(0x6a3dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3dd7:{NFSU2_TR(0x6a3dd7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6a3ddc:{NFSU2_TR(0x6a3ddc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a3dde:{NFSU2_TR(0x6a3dde);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a3dde);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a3dde);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6a3de1:{NFSU2_TR(0x6a3de1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3de5:{NFSU2_TR(0x6a3de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3de8:{NFSU2_TR(0x6a3de8);
if(r1(R+518)){{goto L6a3e43;}}
}
B6a3dea:L6a3dea:{c.instructions+=3;NFSU2_TR(0x6a3dea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6a3df0:{NFSU2_TR(0x6a3df0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000000ull))));
}
B6a3df6:{NFSU2_TR(0x6a3df6);
if(r1(R+512)){{goto L6a3e43;}}
}
B6a3df8:L6a3df8:{c.instructions+=2;NFSU2_TR(0x6a3df8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3dfe:{NFSU2_TR(0x6a3dfe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a3e43;}}
}
B6a3e00:L6a3e00:{c.instructions+=7;NFSU2_TR(0x6a3e00);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3e02:{NFSU2_TR(0x6a3e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3e05:{NFSU2_TR(0x6a3e05);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a3e0b:{NFSU2_TR(0x6a3e0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3e0c:{NFSU2_TR(0x6a3e0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3e0f:{NFSU2_TR(0x6a3e0f);
__builtin_memmove((R+4),(R+12),4);
}
B6a3e11:{NFSU2_TR(0x6a3e11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3e16ull));
TAIL_STATIC(0x69dfadu,69d);
}
B6a3e16:L6a3e16:{c.instructions+=3;NFSU2_TR(0x6a3e16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a3e18:{NFSU2_TR(0x6a3e18);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3e1b:{NFSU2_TR(0x6a3e1b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3e43;}}
}
B6a3e1d:L6a3e1d:{c.instructions+=11;NFSU2_TR(0x6a3e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3e20:{NFSU2_TR(0x6a3e20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3e22:{NFSU2_TR(0x6a3e22);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a3e25:{NFSU2_TR(0x6a3e25);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a3e2b:{NFSU2_TR(0x6a3e2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3e2c:{NFSU2_TR(0x6a3e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3e2f:{NFSU2_TR(0x6a3e2f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6a3e32:{NFSU2_TR(0x6a3e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a3e35:{NFSU2_TR(0x6a3e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a3e36:{NFSU2_TR(0x6a3e36);
__builtin_memmove((R+4),(R+12),4);
}
B6a3e38:{NFSU2_TR(0x6a3e38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a3e3dull));
TAIL_STATIC(0x69dfadu,69d);
}
B6a3e3d:L6a3e3d:{c.instructions+=3;NFSU2_TR(0x6a3e3d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a3e3e:{NFSU2_TR(0x6a3e3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6a3e41:{NFSU2_TR(0x6a3e41);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3e1du);}goto L6a3e1d;}}
}
B6a3e43:L6a3e43:{c.instructions+=10;NFSU2_TR(0x6a3e43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a3e45:{NFSU2_TR(0x6a3e45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a3e48:{NFSU2_TR(0x6a3e48);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a3e49:{NFSU2_TR(0x6a3e49);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a3e4a:{NFSU2_TR(0x6a3e4a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a3e4b:{NFSU2_TR(0x6a3e4b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6a3e4c:{NFSU2_TR(0x6a3e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3e4e:{NFSU2_TR(0x6a3e4e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a3e53:{NFSU2_TR(0x6a3e53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3e58:{NFSU2_TR(0x6a3e58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3e5e:L6a3e5e:{c.instructions+=11;NFSU2_TR(0x6a3e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3e61:{NFSU2_TR(0x6a3e61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3e63:{NFSU2_TR(0x6a3e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3e66:{NFSU2_TR(0x6a3e66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3e69:{NFSU2_TR(0x6a3e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3e6c:{NFSU2_TR(0x6a3e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3e6f:{NFSU2_TR(0x6a3e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3e72:{NFSU2_TR(0x6a3e72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a3e75:{NFSU2_TR(0x6a3e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3e78:{NFSU2_TR(0x6a3e78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a3e7a:{NFSU2_TR(0x6a3e7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3e80:L6a3e80:{c.instructions+=2;NFSU2_TR(0x6a3e80);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a3e84:{NFSU2_TR(0x6a3e84);
if(r1(R+518)){{goto L6a3e8e;}}
}
B6a3e86:L6a3e86:{c.instructions+=2;NFSU2_TR(0x6a3e86);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a3e88:{NFSU2_TR(0x6a3e88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3e8e:L6a3e8e:{c.instructions+=6;NFSU2_TR(0x6a3e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3e91:{NFSU2_TR(0x6a3e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3e93:{NFSU2_TR(0x6a3e93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3e96:{NFSU2_TR(0x6a3e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3e9c:{NFSU2_TR(0x6a3e9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3e9f:{NFSU2_TR(0x6a3e9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3ea5:L6a3ea5:{c.instructions+=4;NFSU2_TR(0x6a3ea5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a3ea7:{NFSU2_TR(0x6a3ea7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3eaa:{NFSU2_TR(0x6a3eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ead:{NFSU2_TR(0x6a3ead);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3eb3:L6a3eb3:{c.instructions+=6;NFSU2_TR(0x6a3eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3eb9:{NFSU2_TR(0x6a3eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ebc:{NFSU2_TR(0x6a3ebc);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x4ull))));
}
B6a3ebf:{NFSU2_TR(0x6a3ebf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6a3ec2:{NFSU2_TR(0x6a3ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ec5:{NFSU2_TR(0x6a3ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ec8:L6a3ec8:{c.instructions+=11;NFSU2_TR(0x6a3ec8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3ecc:{NFSU2_TR(0x6a3ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3ecf:{NFSU2_TR(0x6a3ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a3ed2:{NFSU2_TR(0x6a3ed2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a3ed6:{NFSU2_TR(0x6a3ed6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3ed9:{NFSU2_TR(0x6a3ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3edc:{NFSU2_TR(0x6a3edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3edf:{NFSU2_TR(0x6a3edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ee2:{NFSU2_TR(0x6a3ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a3ee5:{NFSU2_TR(0x6a3ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ee8:{NFSU2_TR(0x6a3ee8);
if(r1(R+518)){{goto L6a3f07;}}
}
B6a3eea:L6a3eea:{c.instructions+=5;NFSU2_TR(0x6a3eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3eed:{NFSU2_TR(0x6a3eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3ef0:{NFSU2_TR(0x6a3ef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3ef2:{NFSU2_TR(0x6a3ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ef5:{NFSU2_TR(0x6a3ef5);
if(r1(R+518)){{goto L6a3f07;}}
}
B6a3ef7:L6a3ef7:{c.instructions+=3;NFSU2_TR(0x6a3ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3efa:{NFSU2_TR(0x6a3efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3efc:{NFSU2_TR(0x6a3efc);
if(r1(R+518)){{goto L6a3f07;}}
}
B6a3efe:L6a3efe:{c.instructions+=2;NFSU2_TR(0x6a3efe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f01:{NFSU2_TR(0x6a3f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3f07:L6a3f07:{c.instructions+=4;NFSU2_TR(0x6a3f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3f0a:{NFSU2_TR(0x6a3f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3f0d:{NFSU2_TR(0x6a3f0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f10:{NFSU2_TR(0x6a3f10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3f16:L6a3f16:{c.instructions+=4;NFSU2_TR(0x6a3f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3f19:{NFSU2_TR(0x6a3f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3f1c:{NFSU2_TR(0x6a3f1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f1f:{NFSU2_TR(0x6a3f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3f25:L6a3f25:{c.instructions+=3;NFSU2_TR(0x6a3f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3f29:{NFSU2_TR(0x6a3f29);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f2d:{NFSU2_TR(0x6a3f2d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3f59;}}
}
B6a3f2f:L6a3f2f:{c.instructions+=2;NFSU2_TR(0x6a3f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f32:{NFSU2_TR(0x6a3f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3f35:L6a3f35:{c.instructions+=6;NFSU2_TR(0x6a3f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f38:{NFSU2_TR(0x6a3f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3f3a:{NFSU2_TR(0x6a3f3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3f3d:{NFSU2_TR(0x6a3f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3f40:{NFSU2_TR(0x6a3f40);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f43:{NFSU2_TR(0x6a3f43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3f59;}}
}
B6a3f45:L6a3f45:{c.instructions+=2;NFSU2_TR(0x6a3f45);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f48:{NFSU2_TR(0x6a3f48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3f59;}}
}
B6a3f4a:L6a3f4a:{c.instructions+=5;NFSU2_TR(0x6a3f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3f4d:{NFSU2_TR(0x6a3f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f50:{NFSU2_TR(0x6a3f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3f54:{NFSU2_TR(0x6a3f54);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3f57:{NFSU2_TR(0x6a3f57);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3f35u);}goto L6a3f35;}}
}
B6a3f59:L6a3f59:{c.instructions+=3;NFSU2_TR(0x6a3f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f5c:{NFSU2_TR(0x6a3f5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f5f:{NFSU2_TR(0x6a3f5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3f61:L6a3f61:{c.instructions+=3;NFSU2_TR(0x6a3f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3f65:{NFSU2_TR(0x6a3f65);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3f67:{NFSU2_TR(0x6a3f67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a3f98;}}
}
B6a3f69:L6a3f69:{c.instructions+=1;NFSU2_TR(0x6a3f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3f6c:L6a3f6c:{c.instructions+=5;NFSU2_TR(0x6a3f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3f6e:{NFSU2_TR(0x6a3f6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3f71:{NFSU2_TR(0x6a3f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f74:{NFSU2_TR(0x6a3f74);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a3f77:{NFSU2_TR(0x6a3f77);
if(r1(R+518)){{goto L6a3f87;}}
}
B6a3f79:L6a3f79:{c.instructions+=5;NFSU2_TR(0x6a3f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3f7c:{NFSU2_TR(0x6a3f7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a3f7f:{NFSU2_TR(0x6a3f7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a3f82:{NFSU2_TR(0x6a3f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3f85:{NFSU2_TR(0x6a3f85);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a3f98;}}
}
B6a3f87:L6a3f87:{c.instructions+=6;NFSU2_TR(0x6a3f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3f8a:{NFSU2_TR(0x6a3f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f8d:{NFSU2_TR(0x6a3f8d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a3f90:{NFSU2_TR(0x6a3f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3f93:{NFSU2_TR(0x6a3f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a3f96:{NFSU2_TR(0x6a3f96);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3f6cu);}goto L6a3f6c;}}
}
B6a3f98:L6a3f98:{c.instructions+=3;NFSU2_TR(0x6a3f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3f9b:{NFSU2_TR(0x6a3f9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3f9e:{NFSU2_TR(0x6a3f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a3fc6;}}
}
B6a3fa0:L6a3fa0:{c.instructions+=4;NFSU2_TR(0x6a3fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3fa2:{NFSU2_TR(0x6a3fa2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a3fa7:{NFSU2_TR(0x6a3fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3fac:{NFSU2_TR(0x6a3fac);
if(r1(R+518)){{goto L6a3fc6;}}
}
B6a3fae:L6a3fae:{c.instructions+=6;NFSU2_TR(0x6a3fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3fb1:{NFSU2_TR(0x6a3fb1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6a3fb9:{NFSU2_TR(0x6a3fb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a3fba:{NFSU2_TR(0x6a3fba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a3fbd:{NFSU2_TR(0x6a3fbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a3fc0:{NFSU2_TR(0x6a3fc0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a3ec8u);}goto L6a3ec8;}}
}
B6a3fc6:L6a3fc6:{c.instructions+=4;NFSU2_TR(0x6a3fc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a3fc8:{NFSU2_TR(0x6a3fc8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6a3fcd:{NFSU2_TR(0x6a3fcd);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B6a3fd2:{NFSU2_TR(0x6a3fd2);
if(r1(R+512)){TAIL_STATIC(0x6a4014u,6a4);}
}
B6a3fd4:L6a3fd4:{c.instructions+=2;NFSU2_TR(0x6a3fd4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a3fd9:{NFSU2_TR(0x6a3fd9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6a4014u,6a4);}
}
B6a3fdb:L6a3fdb:{c.instructions+=3;NFSU2_TR(0x6a3fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3fdf:{NFSU2_TR(0x6a3fdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a3fe3:{NFSU2_TR(0x6a3fe3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a4020u,6a4);}
}
B6a3fe5:L6a3fe5:{c.instructions+=9;NFSU2_TR(0x6a3fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a3fe8:{NFSU2_TR(0x6a3fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a3feb:{NFSU2_TR(0x6a3feb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6a3fee:{NFSU2_TR(0x6a3fee);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6a3ff0:{NFSU2_TR(0x6a3ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a3ff3:{NFSU2_TR(0x6a3ff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a3ff6:{NFSU2_TR(0x6a3ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a3ff9:{NFSU2_TR(0x6a3ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a3ffc:{NFSU2_TR(0x6a3ffc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
TAIL_STATIC(0x6a4000u,6a4);
}
XIT:NFSU2_TR_EXIT(0x6a3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
