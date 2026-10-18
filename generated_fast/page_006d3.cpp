#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 page_6d3(Cpu& c){return body_6d3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d3002:goto L6d3002;
case 0x6d3005:c.instructions+=4;goto B6d3005;
case 0x6d3007:c.instructions+=3;goto B6d3007;
case 0x6d300a:c.instructions+=2;goto B6d300a;
case 0x6d300c:c.instructions+=1;goto B6d300c;
case 0x6d300f:goto L6d300f;
case 0x6d3011:c.instructions+=1;goto B6d3011;
case 0x6d3017:goto L6d3017;
case 0x6d301a:c.instructions+=8;goto B6d301a;
case 0x6d301c:c.instructions+=7;goto B6d301c;
case 0x6d301f:c.instructions+=6;goto B6d301f;
case 0x6d3020:c.instructions+=5;goto B6d3020;
case 0x6d3026:c.instructions+=4;goto B6d3026;
case 0x6d3027:c.instructions+=3;goto B6d3027;
case 0x6d302a:c.instructions+=2;goto B6d302a;
case 0x6d302c:c.instructions+=1;goto B6d302c;
case 0x6d302f:goto L6d302f;
case 0x6d3031:c.instructions+=1;goto B6d3031;
case 0x6d3037:goto L6d3037;
case 0x6d303a:c.instructions+=5;goto B6d303a;
case 0x6d303c:c.instructions+=4;goto B6d303c;
case 0x6d303f:c.instructions+=3;goto B6d303f;
case 0x6d3041:c.instructions+=2;goto B6d3041;
case 0x6d3044:c.instructions+=1;goto B6d3044;
case 0x6d3047:goto L6d3047;
case 0x6d3049:c.instructions+=1;goto B6d3049;
case 0x6d304f:goto L6d304f;
case 0x6d3053:goto L6d3053;
case 0x6d3056:c.instructions+=6;goto B6d3056;
case 0x6d305c:c.instructions+=5;goto B6d305c;
case 0x6d305f:c.instructions+=4;goto B6d305f;
case 0x6d3063:c.instructions+=3;goto B6d3063;
case 0x6d3066:c.instructions+=2;goto B6d3066;
case 0x6d3069:c.instructions+=1;goto B6d3069;
case 0x6d306b:goto L6d306b;
case 0x6d306d:c.instructions+=3;goto B6d306d;
case 0x6d3072:c.instructions+=2;goto B6d3072;
case 0x6d3077:c.instructions+=1;goto B6d3077;
case 0x6d3079:goto L6d3079;
case 0x6d3080:c.instructions+=1;goto B6d3080;
case 0x6d3082:goto L6d3082;
case 0x6d3086:goto L6d3086;
case 0x6d3089:c.instructions+=9;goto B6d3089;
case 0x6d308b:c.instructions+=8;goto B6d308b;
case 0x6d308e:c.instructions+=7;goto B6d308e;
case 0x6d308f:c.instructions+=6;goto B6d308f;
case 0x6d3092:c.instructions+=5;goto B6d3092;
case 0x6d3093:c.instructions+=4;goto B6d3093;
case 0x6d3095:c.instructions+=3;goto B6d3095;
case 0x6d3098:c.instructions+=2;goto B6d3098;
case 0x6d309a:c.instructions+=1;goto B6d309a;
case 0x6d309d:goto L6d309d;
case 0x6d309f:c.instructions+=1;goto B6d309f;
case 0x6d30a1:goto L6d30a1;
case 0x6d30a3:c.instructions+=7;goto B6d30a3;
case 0x6d30a6:c.instructions+=6;goto B6d30a6;
case 0x6d30a7:c.instructions+=5;goto B6d30a7;
case 0x6d30aa:c.instructions+=4;goto B6d30aa;
case 0x6d30ac:c.instructions+=3;goto B6d30ac;
case 0x6d30ad:c.instructions+=2;goto B6d30ad;
case 0x6d30ae:c.instructions+=1;goto B6d30ae;
case 0x6d30b1:goto L6d30b1;
case 0x6d30b3:c.instructions+=1;goto B6d30b3;
case 0x6d30b5:goto L6d30b5;
case 0x6d30b8:c.instructions+=7;goto B6d30b8;
case 0x6d30bb:c.instructions+=6;goto B6d30bb;
case 0x6d30be:c.instructions+=5;goto B6d30be;
case 0x6d30c1:c.instructions+=4;goto B6d30c1;
case 0x6d30c3:c.instructions+=3;goto B6d30c3;
case 0x6d30c4:c.instructions+=2;goto B6d30c4;
case 0x6d30c6:c.instructions+=1;goto B6d30c6;
case 0x6d30c9:goto L6d30c9;
case 0x6d30cb:c.instructions+=1;goto B6d30cb;
case 0x6d30cd:goto L6d30cd;
case 0x6d30d0:c.instructions+=2;goto B6d30d0;
case 0x6d30d4:c.instructions+=1;goto B6d30d4;
case 0x6d30da:goto L6d30da;
case 0x6d30dc:c.instructions+=2;goto B6d30dc;
case 0x6d30de:c.instructions+=1;goto B6d30de;
case 0x6d30e1:goto L6d30e1;
case 0x6d30e3:c.instructions+=1;goto B6d30e3;
case 0x6d30e5:goto L6d30e5;
case 0x6d30e7:c.instructions+=1;goto B6d30e7;
case 0x6d30ec:goto L6d30ec;
case 0x6d30ee:c.instructions+=1;goto B6d30ee;
case 0x6d30f0:goto L6d30f0;
case 0x6d30f2:goto L6d30f2;
case 0x6d30f3:c.instructions+=4;goto B6d30f3;
case 0x6d30f4:c.instructions+=3;goto B6d30f4;
case 0x6d30f5:c.instructions+=2;goto B6d30f5;
case 0x6d30f6:c.instructions+=1;goto B6d30f6;
case 0x6d30f7:goto L6d30f7;
case 0x6d30f9:c.instructions+=14;goto B6d30f9;
case 0x6d30fa:c.instructions+=13;goto B6d30fa;
case 0x6d30fc:c.instructions+=12;goto B6d30fc;
case 0x6d30ff:c.instructions+=11;goto B6d30ff;
case 0x6d3100:c.instructions+=10;goto B6d3100;
case 0x6d3101:c.instructions+=9;goto B6d3101;
case 0x6d3103:c.instructions+=8;goto B6d3103;
case 0x6d3109:c.instructions+=7;goto B6d3109;
case 0x6d310b:c.instructions+=6;goto B6d310b;
case 0x6d310d:c.instructions+=5;goto B6d310d;
case 0x6d3112:c.instructions+=4;goto B6d3112;
case 0x6d3114:c.instructions+=3;goto B6d3114;
case 0x6d311a:c.instructions+=2;goto B6d311a;
case 0x6d311b:c.instructions+=1;goto B6d311b;
case 0x6d311d:goto L6d311d;
case 0x6d3123:c.instructions+=1;goto B6d3123;
case 0x6d3125:goto L6d3125;
case 0x6d3126:c.instructions+=1;goto B6d3126;
case 0x6d3128:goto L6d3128;
case 0x6d312a:c.instructions+=1;goto B6d312a;
case 0x6d312c:goto L6d312c;
case 0x6d312d:c.instructions+=1;goto B6d312d;
case 0x6d312f:goto L6d312f;
case 0x6d3131:c.instructions+=1;goto B6d3131;
case 0x6d3133:goto L6d3133;
case 0x6d3135:c.instructions+=1;goto B6d3135;
case 0x6d3137:goto L6d3137;
case 0x6d3139:c.instructions+=1;goto B6d3139;
case 0x6d313b:goto L6d313b;
case 0x6d313d:c.instructions+=1;goto B6d313d;
case 0x6d313f:goto L6d313f;
case 0x6d3141:goto L6d3141;
case 0x6d3142:c.instructions+=1;goto B6d3142;
case 0x6d3144:goto L6d3144;
case 0x6d3147:goto L6d3147;
case 0x6d3148:c.instructions+=2;goto B6d3148;
case 0x6d314a:c.instructions+=1;goto B6d314a;
case 0x6d314f:goto L6d314f;
case 0x6d3151:c.instructions+=1;goto B6d3151;
case 0x6d3157:goto L6d3157;
case 0x6d315a:c.instructions+=13;goto B6d315a;
case 0x6d315c:c.instructions+=12;goto B6d315c;
case 0x6d315f:c.instructions+=11;goto B6d315f;
case 0x6d3160:c.instructions+=10;goto B6d3160;
case 0x6d3163:c.instructions+=9;goto B6d3163;
case 0x6d3164:c.instructions+=8;goto B6d3164;
case 0x6d3167:c.instructions+=7;goto B6d3167;
case 0x6d3168:c.instructions+=6;goto B6d3168;
case 0x6d316e:c.instructions+=5;goto B6d316e;
case 0x6d3171:c.instructions+=4;goto B6d3171;
case 0x6d3173:c.instructions+=3;goto B6d3173;
case 0x6d3176:c.instructions+=2;goto B6d3176;
case 0x6d3178:c.instructions+=1;goto B6d3178;
case 0x6d317b:goto L6d317b;
case 0x6d317d:c.instructions+=1;goto B6d317d;
case 0x6d3183:goto L6d3183;
case 0x6d3186:c.instructions+=8;goto B6d3186;
case 0x6d318c:c.instructions+=7;goto B6d318c;
case 0x6d318e:c.instructions+=6;goto B6d318e;
case 0x6d3191:c.instructions+=5;goto B6d3191;
case 0x6d3192:c.instructions+=4;goto B6d3192;
case 0x6d3195:c.instructions+=3;goto B6d3195;
case 0x6d3197:c.instructions+=2;goto B6d3197;
case 0x6d319a:c.instructions+=1;goto B6d319a;
case 0x6d319d:goto L6d319d;
case 0x6d319f:c.instructions+=1;goto B6d319f;
case 0x6d31a5:goto L6d31a5;
case 0x6d31a8:c.instructions+=5;goto B6d31a8;
case 0x6d31aa:c.instructions+=4;goto B6d31aa;
case 0x6d31ad:c.instructions+=3;goto B6d31ad;
case 0x6d31af:c.instructions+=2;goto B6d31af;
case 0x6d31b2:c.instructions+=1;goto B6d31b2;
case 0x6d31b5:goto L6d31b5;
case 0x6d31b7:c.instructions+=1;goto B6d31b7;
case 0x6d31bd:goto L6d31bd;
case 0x6d31c0:c.instructions+=18;goto B6d31c0;
case 0x6d31c2:c.instructions+=17;goto B6d31c2;
case 0x6d31c5:c.instructions+=16;goto B6d31c5;
case 0x6d31c8:c.instructions+=15;goto B6d31c8;
case 0x6d31cb:c.instructions+=14;goto B6d31cb;
case 0x6d31cc:c.instructions+=13;goto B6d31cc;
case 0x6d31cf:c.instructions+=12;goto B6d31cf;
case 0x6d31d0:c.instructions+=11;goto B6d31d0;
case 0x6d31d6:c.instructions+=10;goto B6d31d6;
case 0x6d31d7:c.instructions+=9;goto B6d31d7;
case 0x6d31dc:c.instructions+=8;goto B6d31dc;
case 0x6d31e1:c.instructions+=7;goto B6d31e1;
case 0x6d31e4:c.instructions+=6;goto B6d31e4;
case 0x6d31e7:c.instructions+=5;goto B6d31e7;
case 0x6d31e9:c.instructions+=4;goto B6d31e9;
case 0x6d31ec:c.instructions+=3;goto B6d31ec;
case 0x6d31ee:c.instructions+=2;goto B6d31ee;
case 0x6d31f0:c.instructions+=1;goto B6d31f0;
case 0x6d31f3:goto L6d31f3;
case 0x6d31f5:c.instructions+=1;goto B6d31f5;
case 0x6d31fb:goto L6d31fb;
case 0x6d31fd:c.instructions+=8;goto B6d31fd;
case 0x6d3200:c.instructions+=7;goto B6d3200;
case 0x6d3201:c.instructions+=6;goto B6d3201;
case 0x6d3204:c.instructions+=5;goto B6d3204;
case 0x6d320a:c.instructions+=4;goto B6d320a;
case 0x6d320b:c.instructions+=3;goto B6d320b;
case 0x6d320e:c.instructions+=2;goto B6d320e;
case 0x6d3210:c.instructions+=1;goto B6d3210;
case 0x6d3213:goto L6d3213;
case 0x6d3215:c.instructions+=1;goto B6d3215;
case 0x6d321b:goto L6d321b;
case 0x6d321e:c.instructions+=5;goto B6d321e;
case 0x6d3220:c.instructions+=4;goto B6d3220;
case 0x6d3223:c.instructions+=3;goto B6d3223;
case 0x6d3225:c.instructions+=2;goto B6d3225;
case 0x6d3228:c.instructions+=1;goto B6d3228;
case 0x6d322b:goto L6d322b;
case 0x6d322d:c.instructions+=1;goto B6d322d;
case 0x6d322f:goto L6d322f;
case 0x6d3232:c.instructions+=13;goto B6d3232;
case 0x6d3234:c.instructions+=12;goto B6d3234;
case 0x6d3237:c.instructions+=11;goto B6d3237;
case 0x6d3238:c.instructions+=10;goto B6d3238;
case 0x6d323b:c.instructions+=9;goto B6d323b;
case 0x6d323c:c.instructions+=8;goto B6d323c;
case 0x6d3242:c.instructions+=7;goto B6d3242;
case 0x6d3245:c.instructions+=6;goto B6d3245;
case 0x6d3247:c.instructions+=5;goto B6d3247;
case 0x6d324a:c.instructions+=4;goto B6d324a;
case 0x6d324d:c.instructions+=3;goto B6d324d;
case 0x6d3250:c.instructions+=2;goto B6d3250;
case 0x6d3252:c.instructions+=1;goto B6d3252;
case 0x6d3255:goto L6d3255;
case 0x6d3257:c.instructions+=1;goto B6d3257;
case 0x6d3259:goto L6d3259;
case 0x6d325b:c.instructions+=10;goto B6d325b;
case 0x6d325e:c.instructions+=9;goto B6d325e;
case 0x6d325f:c.instructions+=8;goto B6d325f;
case 0x6d3262:c.instructions+=7;goto B6d3262;
case 0x6d3268:c.instructions+=6;goto B6d3268;
case 0x6d326b:c.instructions+=5;goto B6d326b;
case 0x6d326d:c.instructions+=4;goto B6d326d;
case 0x6d326e:c.instructions+=3;goto B6d326e;
case 0x6d326f:c.instructions+=2;goto B6d326f;
case 0x6d3271:c.instructions+=1;goto B6d3271;
case 0x6d3274:goto L6d3274;
case 0x6d3276:c.instructions+=1;goto B6d3276;
case 0x6d3278:goto L6d3278;
case 0x6d327b:c.instructions+=5;goto B6d327b;
case 0x6d327d:c.instructions+=4;goto B6d327d;
case 0x6d3280:c.instructions+=3;goto B6d3280;
case 0x6d3282:c.instructions+=2;goto B6d3282;
case 0x6d3285:c.instructions+=1;goto B6d3285;
case 0x6d3288:goto L6d3288;
case 0x6d328a:c.instructions+=1;goto B6d328a;
case 0x6d328c:goto L6d328c;
case 0x6d328e:c.instructions+=2;goto B6d328e;
case 0x6d3290:c.instructions+=1;goto B6d3290;
case 0x6d3293:goto L6d3293;
case 0x6d3295:c.instructions+=1;goto B6d3295;
case 0x6d3297:goto L6d3297;
case 0x6d3299:c.instructions+=1;goto B6d3299;
case 0x6d329e:goto L6d329e;
case 0x6d32a0:c.instructions+=1;goto B6d32a0;
case 0x6d32a2:goto L6d32a2;
case 0x6d32a4:goto L6d32a4;
case 0x6d32a5:c.instructions+=4;goto B6d32a5;
case 0x6d32a6:c.instructions+=3;goto B6d32a6;
case 0x6d32a7:c.instructions+=2;goto B6d32a7;
case 0x6d32a8:c.instructions+=1;goto B6d32a8;
case 0x6d32a9:goto L6d32a9;
case 0x6d32ab:c.instructions+=19;goto B6d32ab;
case 0x6d32ac:c.instructions+=18;goto B6d32ac;
case 0x6d32ae:c.instructions+=17;goto B6d32ae;
case 0x6d32b1:c.instructions+=16;goto B6d32b1;
case 0x6d32b2:c.instructions+=15;goto B6d32b2;
case 0x6d32b3:c.instructions+=14;goto B6d32b3;
case 0x6d32b5:c.instructions+=13;goto B6d32b5;
case 0x6d32bb:c.instructions+=12;goto B6d32bb;
case 0x6d32be:c.instructions+=11;goto B6d32be;
case 0x6d32c1:c.instructions+=10;goto B6d32c1;
case 0x6d32c4:c.instructions+=9;goto B6d32c4;
case 0x6d32c5:c.instructions+=8;goto B6d32c5;
case 0x6d32c7:c.instructions+=7;goto B6d32c7;
case 0x6d32ca:c.instructions+=6;goto B6d32ca;
case 0x6d32cd:c.instructions+=5;goto B6d32cd;
case 0x6d32ce:c.instructions+=4;goto B6d32ce;
case 0x6d32d0:c.instructions+=3;goto B6d32d0;
case 0x6d32d1:c.instructions+=2;goto B6d32d1;
case 0x6d32d7:c.instructions+=1;goto B6d32d7;
case 0x6d32dc:goto L6d32dc;
case 0x6d32e2:c.instructions+=4;goto B6d32e2;
case 0x6d32e5:c.instructions+=3;goto B6d32e5;
case 0x6d32e6:c.instructions+=2;goto B6d32e6;
case 0x6d32e8:c.instructions+=1;goto B6d32e8;
case 0x6d32ed:goto L6d32ed;
case 0x6d32f3:c.instructions+=4;goto B6d32f3;
case 0x6d32f6:c.instructions+=3;goto B6d32f6;
case 0x6d32f7:c.instructions+=2;goto B6d32f7;
case 0x6d32f9:c.instructions+=1;goto B6d32f9;
case 0x6d32fe:goto L6d32fe;
case 0x6d3301:c.instructions+=2;goto B6d3301;
case 0x6d3304:c.instructions+=1;goto B6d3304;
case 0x6d3306:goto L6d3306;
case 0x6d3309:goto L6d3309;
case 0x6d330c:c.instructions+=1;goto B6d330c;
case 0x6d330e:goto L6d330e;
case 0x6d3311:c.instructions+=3;goto B6d3311;
case 0x6d3315:c.instructions+=2;goto B6d3315;
case 0x6d3317:c.instructions+=1;goto B6d3317;
case 0x6d3319:goto L6d3319;
case 0x6d331b:c.instructions+=2;goto B6d331b;
case 0x6d331e:c.instructions+=1;goto B6d331e;
case 0x6d3320:goto L6d3320;
case 0x6d3323:c.instructions+=2;goto B6d3323;
case 0x6d3325:c.instructions+=1;goto B6d3325;
case 0x6d3328:goto L6d3328;
case 0x6d332b:c.instructions+=4;goto B6d332b;
case 0x6d332d:c.instructions+=3;goto B6d332d;
case 0x6d3330:c.instructions+=2;goto B6d3330;
case 0x6d3335:c.instructions+=1;goto B6d3335;
case 0x6d3337:goto L6d3337;
case 0x6d333a:c.instructions+=4;goto B6d333a;
case 0x6d333e:c.instructions+=3;goto B6d333e;
case 0x6d3344:c.instructions+=2;goto B6d3344;
case 0x6d3347:c.instructions+=1;goto B6d3347;
case 0x6d3349:goto L6d3349;
case 0x6d334b:goto L6d334b;
case 0x6d3352:goto L6d3352;
case 0x6d3355:c.instructions+=2;goto B6d3355;
case 0x6d3359:c.instructions+=1;goto B6d3359;
case 0x6d335b:goto L6d335b;
case 0x6d335e:c.instructions+=12;goto B6d335e;
case 0x6d3360:c.instructions+=11;goto B6d3360;
case 0x6d3361:c.instructions+=10;goto B6d3361;
case 0x6d3362:c.instructions+=9;goto B6d3362;
case 0x6d3363:c.instructions+=8;goto B6d3363;
case 0x6d3364:c.instructions+=7;goto B6d3364;
case 0x6d3367:c.instructions+=6;goto B6d3367;
case 0x6d336a:c.instructions+=5;goto B6d336a;
case 0x6d336d:c.instructions+=4;goto B6d336d;
case 0x6d3370:c.instructions+=3;goto B6d3370;
case 0x6d3373:c.instructions+=2;goto B6d3373;
case 0x6d3376:c.instructions+=1;goto B6d3376;
case 0x6d337b:goto L6d337b;
case 0x6d337c:c.instructions+=4;goto B6d337c;
case 0x6d337d:c.instructions+=3;goto B6d337d;
case 0x6d337e:c.instructions+=2;goto B6d337e;
case 0x6d337f:c.instructions+=1;goto B6d337f;
case 0x6d3382:goto L6d3382;
case 0x6d3384:c.instructions+=8;goto B6d3384;
case 0x6d3385:c.instructions+=7;goto B6d3385;
case 0x6d3387:c.instructions+=6;goto B6d3387;
case 0x6d338a:c.instructions+=5;goto B6d338a;
case 0x6d338d:c.instructions+=4;goto B6d338d;
case 0x6d3390:c.instructions+=3;goto B6d3390;
case 0x6d3391:c.instructions+=2;goto B6d3391;
case 0x6d3393:c.instructions+=1;goto B6d3393;
case 0x6d3395:goto L6d3395;
case 0x6d3398:c.instructions+=1;goto B6d3398;
case 0x6d339a:goto L6d339a;
case 0x6d33a0:c.instructions+=5;goto B6d33a0;
case 0x6d33a3:c.instructions+=4;goto B6d33a3;
case 0x6d33a5:c.instructions+=3;goto B6d33a5;
case 0x6d33a8:c.instructions+=2;goto B6d33a8;
case 0x6d33aa:c.instructions+=1;goto B6d33aa;
case 0x6d33ac:goto L6d33ac;
case 0x6d33ae:c.instructions+=3;goto B6d33ae;
case 0x6d33b1:c.instructions+=2;goto B6d33b1;
case 0x6d33b3:c.instructions+=1;goto B6d33b3;
case 0x6d33b8:goto L6d33b8;
case 0x6d33bd:goto L6d33bd;
case 0x6d33c0:c.instructions+=13;goto B6d33c0;
case 0x6d33c2:c.instructions+=12;goto B6d33c2;
case 0x6d33c5:c.instructions+=11;goto B6d33c5;
case 0x6d33c6:c.instructions+=10;goto B6d33c6;
case 0x6d33c9:c.instructions+=9;goto B6d33c9;
case 0x6d33cb:c.instructions+=8;goto B6d33cb;
case 0x6d33ce:c.instructions+=7;goto B6d33ce;
case 0x6d33d1:c.instructions+=6;goto B6d33d1;
case 0x6d33d2:c.instructions+=5;goto B6d33d2;
case 0x6d33d5:c.instructions+=4;goto B6d33d5;
case 0x6d33d8:c.instructions+=3;goto B6d33d8;
case 0x6d33db:c.instructions+=2;goto B6d33db;
case 0x6d33de:c.instructions+=1;goto B6d33de;
case 0x6d33e0:goto L6d33e0;
case 0x6d33e3:c.instructions+=5;goto B6d33e3;
case 0x6d33e6:c.instructions+=4;goto B6d33e6;
case 0x6d33e9:c.instructions+=3;goto B6d33e9;
case 0x6d33ec:c.instructions+=2;goto B6d33ec;
case 0x6d33ef:c.instructions+=1;goto B6d33ef;
case 0x6d33f1:goto L6d33f1;
case 0x6d33f4:c.instructions+=5;goto B6d33f4;
case 0x6d33f7:c.instructions+=4;goto B6d33f7;
case 0x6d33fa:c.instructions+=3;goto B6d33fa;
case 0x6d33fd:c.instructions+=2;goto B6d33fd;
case 0x6d3400:c.instructions+=1;goto B6d3400;
case 0x6d3402:goto L6d3402;
case 0x6d3406:c.instructions+=1;goto B6d3406;
case 0x6d340b:goto L6d340b;
case 0x6d340d:c.instructions+=2;goto B6d340d;
case 0x6d3410:c.instructions+=1;goto B6d3410;
case 0x6d3412:goto L6d3412;
case 0x6d3416:c.instructions+=2;goto B6d3416;
case 0x6d3418:c.instructions+=1;goto B6d3418;
case 0x6d341a:goto L6d341a;
case 0x6d341d:c.instructions+=4;goto B6d341d;
case 0x6d3420:c.instructions+=3;goto B6d3420;
case 0x6d3423:c.instructions+=2;goto B6d3423;
case 0x6d3426:c.instructions+=1;goto B6d3426;
case 0x6d3429:goto L6d3429;
case 0x6d342c:c.instructions+=4;goto B6d342c;
case 0x6d342f:c.instructions+=3;goto B6d342f;
case 0x6d3432:c.instructions+=2;goto B6d3432;
case 0x6d3435:c.instructions+=1;goto B6d3435;
case 0x6d3437:goto L6d3437;
case 0x6d343a:c.instructions+=2;goto B6d343a;
case 0x6d343d:c.instructions+=1;goto B6d343d;
case 0x6d343f:goto L6d343f;
case 0x6d3442:c.instructions+=1;goto B6d3442;
case 0x6d3444:goto L6d3444;
case 0x6d3445:c.instructions+=2;goto B6d3445;
case 0x6d3448:c.instructions+=1;goto B6d3448;
case 0x6d344a:goto L6d344a;
case 0x6d344d:goto L6d344d;
case 0x6d344f:c.instructions+=3;goto B6d344f;
case 0x6d3451:c.instructions+=2;goto B6d3451;
case 0x6d3454:c.instructions+=1;goto B6d3454;
case 0x6d3456:goto L6d3456;
case 0x6d3458:c.instructions+=3;goto B6d3458;
case 0x6d345a:c.instructions+=2;goto B6d345a;
case 0x6d345d:c.instructions+=1;goto B6d345d;
case 0x6d345f:goto L6d345f;
case 0x6d3462:goto L6d3462;
case 0x6d3465:c.instructions+=4;goto B6d3465;
case 0x6d3468:c.instructions+=3;goto B6d3468;
case 0x6d346b:c.instructions+=2;goto B6d346b;
case 0x6d346d:c.instructions+=1;goto B6d346d;
case 0x6d346f:goto L6d346f;
case 0x6d3472:goto L6d3472;
case 0x6d3473:c.instructions+=2;goto B6d3473;
case 0x6d3476:c.instructions+=1;goto B6d3476;
case 0x6d3478:goto L6d3478;
case 0x6d347a:c.instructions+=8;goto B6d347a;
case 0x6d347c:c.instructions+=7;goto B6d347c;
case 0x6d347e:c.instructions+=6;goto B6d347e;
case 0x6d347f:c.instructions+=5;goto B6d347f;
case 0x6d3482:c.instructions+=4;goto B6d3482;
case 0x6d3483:c.instructions+=3;goto B6d3483;
case 0x6d3489:c.instructions+=2;goto B6d3489;
case 0x6d348b:c.instructions+=1;goto B6d348b;
case 0x6d3491:goto L6d3491;
case 0x6d3493:c.instructions+=2;goto B6d3493;
case 0x6d3495:c.instructions+=1;goto B6d3495;
case 0x6d349b:goto L6d349b;
case 0x6d349e:c.instructions+=1;goto B6d349e;
case 0x6d34a0:goto L6d34a0;
case 0x6d34a3:c.instructions+=3;goto B6d34a3;
case 0x6d34a5:c.instructions+=2;goto B6d34a5;
case 0x6d34a8:c.instructions+=1;goto B6d34a8;
case 0x6d34aa:goto L6d34aa;
case 0x6d34ad:c.instructions+=8;goto B6d34ad;
case 0x6d34b1:c.instructions+=7;goto B6d34b1;
case 0x6d34b4:c.instructions+=6;goto B6d34b4;
case 0x6d34b7:c.instructions+=5;goto B6d34b7;
case 0x6d34bb:c.instructions+=4;goto B6d34bb;
case 0x6d34bf:c.instructions+=3;goto B6d34bf;
case 0x6d34c0:c.instructions+=2;goto B6d34c0;
case 0x6d34c3:c.instructions+=1;goto B6d34c3;
case 0x6d34c5:goto L6d34c5;
case 0x6d34c8:c.instructions+=2;goto B6d34c8;
case 0x6d34cb:c.instructions+=1;goto B6d34cb;
case 0x6d34ce:goto L6d34ce;
case 0x6d34d0:c.instructions+=2;goto B6d34d0;
case 0x6d34d3:c.instructions+=1;goto B6d34d3;
case 0x6d34d5:goto L6d34d5;
case 0x6d34d8:c.instructions+=3;goto B6d34d8;
case 0x6d34db:c.instructions+=2;goto B6d34db;
case 0x6d34e2:c.instructions+=1;goto B6d34e2;
case 0x6d34e4:goto L6d34e4;
case 0x6d34e7:c.instructions+=8;goto B6d34e7;
case 0x6d34ea:c.instructions+=7;goto B6d34ea;
case 0x6d34ec:c.instructions+=6;goto B6d34ec;
case 0x6d34ef:c.instructions+=5;goto B6d34ef;
case 0x6d34f2:c.instructions+=4;goto B6d34f2;
case 0x6d34f5:c.instructions+=3;goto B6d34f5;
case 0x6d34f8:c.instructions+=2;goto B6d34f8;
case 0x6d34fb:c.instructions+=1;goto B6d34fb;
case 0x6d34fe:goto L6d34fe;
case 0x6d3500:c.instructions+=4;goto B6d3500;
case 0x6d3503:c.instructions+=3;goto B6d3503;
case 0x6d3506:c.instructions+=2;goto B6d3506;
case 0x6d3509:c.instructions+=1;goto B6d3509;
case 0x6d350b:goto L6d350b;
case 0x6d350e:c.instructions+=5;goto B6d350e;
case 0x6d3511:c.instructions+=4;goto B6d3511;
case 0x6d3514:c.instructions+=3;goto B6d3514;
case 0x6d3517:c.instructions+=2;goto B6d3517;
case 0x6d351a:c.instructions+=1;goto B6d351a;
case 0x6d351c:goto L6d351c;
case 0x6d351f:goto L6d351f;
case 0x6d3521:c.instructions+=16;goto B6d3521;
case 0x6d3522:c.instructions+=15;goto B6d3522;
case 0x6d3525:c.instructions+=14;goto B6d3525;
case 0x6d3527:c.instructions+=13;goto B6d3527;
case 0x6d352a:c.instructions+=12;goto B6d352a;
case 0x6d352d:c.instructions+=11;goto B6d352d;
case 0x6d3530:c.instructions+=10;goto B6d3530;
case 0x6d3531:c.instructions+=9;goto B6d3531;
case 0x6d3532:c.instructions+=8;goto B6d3532;
case 0x6d3535:c.instructions+=7;goto B6d3535;
case 0x6d3538:c.instructions+=6;goto B6d3538;
case 0x6d3539:c.instructions+=5;goto B6d3539;
case 0x6d353c:c.instructions+=4;goto B6d353c;
case 0x6d353f:c.instructions+=3;goto B6d353f;
case 0x6d3540:c.instructions+=2;goto B6d3540;
case 0x6d3543:c.instructions+=1;goto B6d3543;
case 0x6d3548:goto L6d3548;
case 0x6d354a:c.instructions+=1;goto B6d354a;
case 0x6d354c:goto L6d354c;
case 0x6d354f:c.instructions+=2;goto B6d354f;
case 0x6d3552:c.instructions+=1;goto B6d3552;
case 0x6d3554:goto L6d3554;
case 0x6d3556:c.instructions+=2;goto B6d3556;
case 0x6d3559:c.instructions+=1;goto B6d3559;
case 0x6d355b:goto L6d355b;
case 0x6d355c:c.instructions+=12;goto B6d355c;
case 0x6d355d:c.instructions+=11;goto B6d355d;
case 0x6d355e:c.instructions+=10;goto B6d355e;
case 0x6d355f:c.instructions+=9;goto B6d355f;
case 0x6d3562:c.instructions+=8;goto B6d3562;
case 0x6d3564:c.instructions+=7;goto B6d3564;
case 0x6d3565:c.instructions+=6;goto B6d3565;
case 0x6d3566:c.instructions+=5;goto B6d3566;
case 0x6d3567:c.instructions+=4;goto B6d3567;
case 0x6d356a:c.instructions+=3;goto B6d356a;
case 0x6d356d:c.instructions+=2;goto B6d356d;
case 0x6d356f:c.instructions+=1;goto B6d356f;
case 0x6d3574:goto L6d3574;
case 0x6d3576:c.instructions+=1;goto B6d3576;
case 0x6d3578:goto L6d3578;
case 0x6d357a:goto L6d357a;
case 0x6d357b:c.instructions+=1;goto B6d357b;
case 0x6d357c:goto L6d357c;
case 0x6d357d:c.instructions+=2;goto B6d357d;
case 0x6d357e:c.instructions+=1;goto B6d357e;
case 0x6d3581:goto L6d3581;
case 0x6d3583:c.instructions+=8;goto B6d3583;
case 0x6d3584:c.instructions+=7;goto B6d3584;
case 0x6d3586:c.instructions+=6;goto B6d3586;
case 0x6d3587:c.instructions+=5;goto B6d3587;
case 0x6d3588:c.instructions+=4;goto B6d3588;
case 0x6d3589:c.instructions+=3;goto B6d3589;
case 0x6d358b:c.instructions+=2;goto B6d358b;
case 0x6d358d:c.instructions+=1;goto B6d358d;
case 0x6d3592:goto L6d3592;
case 0x6d3594:c.instructions+=1;goto B6d3594;
case 0x6d3596:goto L6d3596;
case 0x6d3599:c.instructions+=11;goto B6d3599;
case 0x6d359b:c.instructions+=10;goto B6d359b;
case 0x6d359e:c.instructions+=9;goto B6d359e;
case 0x6d359f:c.instructions+=8;goto B6d359f;
case 0x6d35a2:c.instructions+=7;goto B6d35a2;
case 0x6d35a3:c.instructions+=6;goto B6d35a3;
case 0x6d35a9:c.instructions+=5;goto B6d35a9;
case 0x6d35ac:c.instructions+=4;goto B6d35ac;
case 0x6d35ae:c.instructions+=3;goto B6d35ae;
case 0x6d35b1:c.instructions+=2;goto B6d35b1;
case 0x6d35b3:c.instructions+=1;goto B6d35b3;
case 0x6d35b6:goto L6d35b6;
case 0x6d35b8:c.instructions+=1;goto B6d35b8;
case 0x6d35ba:goto L6d35ba;
case 0x6d35bd:c.instructions+=5;goto B6d35bd;
case 0x6d35bf:c.instructions+=4;goto B6d35bf;
case 0x6d35c4:c.instructions+=3;goto B6d35c4;
case 0x6d35c7:c.instructions+=2;goto B6d35c7;
case 0x6d35c9:c.instructions+=1;goto B6d35c9;
case 0x6d35cc:goto L6d35cc;
case 0x6d35ce:c.instructions+=1;goto B6d35ce;
case 0x6d35d0:goto L6d35d0;
case 0x6d35d2:c.instructions+=2;goto B6d35d2;
case 0x6d35d4:c.instructions+=1;goto B6d35d4;
case 0x6d35d7:goto L6d35d7;
case 0x6d35d9:c.instructions+=1;goto B6d35d9;
case 0x6d35db:goto L6d35db;
case 0x6d35dd:c.instructions+=1;goto B6d35dd;
case 0x6d35e2:goto L6d35e2;
case 0x6d35e4:c.instructions+=1;goto B6d35e4;
case 0x6d35e6:goto L6d35e6;
case 0x6d35e8:goto L6d35e8;
case 0x6d35e9:c.instructions+=2;goto B6d35e9;
case 0x6d35ea:c.instructions+=1;goto B6d35ea;
case 0x6d35eb:goto L6d35eb;
case 0x6d35ed:c.instructions+=8;goto B6d35ed;
case 0x6d35ee:c.instructions+=7;goto B6d35ee;
case 0x6d35f0:c.instructions+=6;goto B6d35f0;
case 0x6d35f1:c.instructions+=5;goto B6d35f1;
case 0x6d35f2:c.instructions+=4;goto B6d35f2;
case 0x6d35f3:c.instructions+=3;goto B6d35f3;
case 0x6d35f5:c.instructions+=2;goto B6d35f5;
case 0x6d35f7:c.instructions+=1;goto B6d35f7;
case 0x6d35fc:goto L6d35fc;
case 0x6d35fe:c.instructions+=1;goto B6d35fe;
case 0x6d3600:goto L6d3600;
case 0x6d3602:c.instructions+=8;goto B6d3602;
case 0x6d3606:c.instructions+=7;goto B6d3606;
case 0x6d3607:c.instructions+=6;goto B6d3607;
case 0x6d3609:c.instructions+=5;goto B6d3609;
case 0x6d360e:c.instructions+=4;goto B6d360e;
case 0x6d360f:c.instructions+=3;goto B6d360f;
case 0x6d3614:c.instructions+=2;goto B6d3614;
case 0x6d3616:c.instructions+=1;goto B6d3616;
case 0x6d3619:goto L6d3619;
case 0x6d361b:c.instructions+=1;goto B6d361b;
case 0x6d361d:goto L6d361d;
case 0x6d3620:c.instructions+=11;goto B6d3620;
case 0x6d3622:c.instructions+=10;goto B6d3622;
case 0x6d3625:c.instructions+=9;goto B6d3625;
case 0x6d3626:c.instructions+=8;goto B6d3626;
case 0x6d3629:c.instructions+=7;goto B6d3629;
case 0x6d362a:c.instructions+=6;goto B6d362a;
case 0x6d3630:c.instructions+=5;goto B6d3630;
case 0x6d3633:c.instructions+=4;goto B6d3633;
case 0x6d3635:c.instructions+=3;goto B6d3635;
case 0x6d3638:c.instructions+=2;goto B6d3638;
case 0x6d363a:c.instructions+=1;goto B6d363a;
case 0x6d363d:goto L6d363d;
case 0x6d363f:c.instructions+=1;goto B6d363f;
case 0x6d3641:goto L6d3641;
case 0x6d3644:c.instructions+=5;goto B6d3644;
case 0x6d3646:c.instructions+=4;goto B6d3646;
case 0x6d3647:c.instructions+=3;goto B6d3647;
case 0x6d364a:c.instructions+=2;goto B6d364a;
case 0x6d364c:c.instructions+=1;goto B6d364c;
case 0x6d364f:goto L6d364f;
case 0x6d3651:c.instructions+=1;goto B6d3651;
case 0x6d3653:goto L6d3653;
case 0x6d3655:c.instructions+=2;goto B6d3655;
case 0x6d3657:c.instructions+=1;goto B6d3657;
case 0x6d365a:goto L6d365a;
case 0x6d365c:c.instructions+=1;goto B6d365c;
case 0x6d365e:goto L6d365e;
case 0x6d3660:c.instructions+=1;goto B6d3660;
case 0x6d3665:goto L6d3665;
case 0x6d3667:c.instructions+=1;goto B6d3667;
case 0x6d3669:goto L6d3669;
case 0x6d366b:goto L6d366b;
case 0x6d366c:goto L6d366c;
case 0x6d366d:c.instructions+=2;goto B6d366d;
case 0x6d366e:c.instructions+=1;goto B6d366e;
case 0x6d366f:goto L6d366f;
case 0x6d3671:c.instructions+=12;goto B6d3671;
case 0x6d3672:c.instructions+=11;goto B6d3672;
case 0x6d3674:c.instructions+=10;goto B6d3674;
case 0x6d3677:c.instructions+=9;goto B6d3677;
case 0x6d367d:c.instructions+=8;goto B6d367d;
case 0x6d3680:c.instructions+=7;goto B6d3680;
case 0x6d3682:c.instructions+=6;goto B6d3682;
case 0x6d3683:c.instructions+=5;goto B6d3683;
case 0x6d3686:c.instructions+=4;goto B6d3686;
case 0x6d3689:c.instructions+=3;goto B6d3689;
case 0x6d368f:c.instructions+=2;goto B6d368f;
case 0x6d3692:c.instructions+=1;goto B6d3692;
case 0x6d3694:goto L6d3694;
case 0x6d3696:c.instructions+=2;goto B6d3696;
case 0x6d3698:c.instructions+=1;goto B6d3698;
case 0x6d369d:goto L6d369d;
case 0x6d36a2:goto L6d36a2;
case 0x6d36a6:c.instructions+=3;goto B6d36a6;
case 0x6d36a7:c.instructions+=2;goto B6d36a7;
case 0x6d36a8:c.instructions+=1;goto B6d36a8;
case 0x6d36ae:goto L6d36ae;
case 0x6d36b1:c.instructions+=4;goto B6d36b1;
case 0x6d36b5:c.instructions+=3;goto B6d36b5;
case 0x6d36b7:c.instructions+=2;goto B6d36b7;
case 0x6d36ba:c.instructions+=1;goto B6d36ba;
case 0x6d36bc:goto L6d36bc;
case 0x6d36c2:c.instructions+=7;goto B6d36c2;
case 0x6d36c5:c.instructions+=6;goto B6d36c5;
case 0x6d36c8:c.instructions+=5;goto B6d36c8;
case 0x6d36cb:c.instructions+=4;goto B6d36cb;
case 0x6d36cd:c.instructions+=3;goto B6d36cd;
case 0x6d36cf:c.instructions+=2;goto B6d36cf;
case 0x6d36d2:c.instructions+=1;goto B6d36d2;
case 0x6d36d4:goto L6d36d4;
case 0x6d36d7:goto L6d36d7;
case 0x6d36da:c.instructions+=6;goto B6d36da;
case 0x6d36dd:c.instructions+=5;goto B6d36dd;
case 0x6d36df:c.instructions+=4;goto B6d36df;
case 0x6d36e2:c.instructions+=3;goto B6d36e2;
case 0x6d36e5:c.instructions+=2;goto B6d36e5;
case 0x6d36e8:c.instructions+=1;goto B6d36e8;
case 0x6d36ea:goto L6d36ea;
case 0x6d36ed:c.instructions+=2;goto B6d36ed;
case 0x6d36f0:c.instructions+=1;goto B6d36f0;
case 0x6d36f2:goto L6d36f2;
case 0x6d36f5:c.instructions+=2;goto B6d36f5;
case 0x6d36f8:c.instructions+=1;goto B6d36f8;
case 0x6d36fa:goto L6d36fa;
case 0x6d36fd:c.instructions+=2;goto B6d36fd;
case 0x6d3700:c.instructions+=1;goto B6d3700;
case 0x6d3702:goto L6d3702;
case 0x6d3705:c.instructions+=2;goto B6d3705;
case 0x6d3708:c.instructions+=1;goto B6d3708;
case 0x6d370a:goto L6d370a;
case 0x6d3711:c.instructions+=1;goto B6d3711;
case 0x6d3713:goto L6d3713;
case 0x6d3717:c.instructions+=1;goto B6d3717;
case 0x6d3719:goto L6d3719;
case 0x6d371c:c.instructions+=4;goto B6d371c;
case 0x6d371f:c.instructions+=3;goto B6d371f;
case 0x6d3722:c.instructions+=2;goto B6d3722;
case 0x6d3725:c.instructions+=1;goto B6d3725;
case 0x6d3727:goto L6d3727;
case 0x6d372a:c.instructions+=2;goto B6d372a;
case 0x6d372d:c.instructions+=1;goto B6d372d;
case 0x6d372f:goto L6d372f;
case 0x6d3731:c.instructions+=1;goto B6d3731;
case 0x6d3733:goto L6d3733;
case 0x6d3739:c.instructions+=3;goto B6d3739;
case 0x6d373d:c.instructions+=2;goto B6d373d;
case 0x6d3741:c.instructions+=1;goto B6d3741;
case 0x6d3743:goto L6d3743;
case 0x6d3748:goto L6d3748;
case 0x6d374e:c.instructions+=7;goto B6d374e;
case 0x6d3751:c.instructions+=6;goto B6d3751;
case 0x6d3754:c.instructions+=5;goto B6d3754;
case 0x6d3757:c.instructions+=4;goto B6d3757;
case 0x6d375a:c.instructions+=3;goto B6d375a;
case 0x6d375d:c.instructions+=2;goto B6d375d;
case 0x6d375f:c.instructions+=1;goto B6d375f;
case 0x6d3761:goto L6d3761;
case 0x6d3764:c.instructions+=6;goto B6d3764;
case 0x6d3767:c.instructions+=5;goto B6d3767;
case 0x6d376a:c.instructions+=4;goto B6d376a;
case 0x6d376c:c.instructions+=3;goto B6d376c;
case 0x6d376e:c.instructions+=2;goto B6d376e;
case 0x6d3770:c.instructions+=1;goto B6d3770;
case 0x6d3772:goto L6d3772;
case 0x6d3775:c.instructions+=4;goto B6d3775;
case 0x6d377b:c.instructions+=3;goto B6d377b;
case 0x6d377e:c.instructions+=2;goto B6d377e;
case 0x6d3781:c.instructions+=1;goto B6d3781;
case 0x6d3783:goto L6d3783;
case 0x6d3789:c.instructions+=14;goto B6d3789;
case 0x6d378c:c.instructions+=13;goto B6d378c;
case 0x6d378e:c.instructions+=12;goto B6d378e;
case 0x6d378f:c.instructions+=11;goto B6d378f;
case 0x6d3790:c.instructions+=10;goto B6d3790;
case 0x6d3791:c.instructions+=9;goto B6d3791;
case 0x6d3792:c.instructions+=8;goto B6d3792;
case 0x6d3793:c.instructions+=7;goto B6d3793;
case 0x6d3794:c.instructions+=6;goto B6d3794;
case 0x6d3795:c.instructions+=5;goto B6d3795;
case 0x6d3798:c.instructions+=4;goto B6d3798;
case 0x6d3799:c.instructions+=3;goto B6d3799;
case 0x6d379c:c.instructions+=2;goto B6d379c;
case 0x6d379e:c.instructions+=1;goto B6d379e;
case 0x6d37a3:goto L6d37a3;
case 0x6d37a4:c.instructions+=1;goto B6d37a4;
case 0x6d37a5:goto L6d37a5;
case 0x6d37a6:c.instructions+=2;goto B6d37a6;
case 0x6d37a7:c.instructions+=1;goto B6d37a7;
case 0x6d37a8:goto L6d37a8;
case 0x6d37aa:c.instructions+=2;goto B6d37aa;
case 0x6d37ac:c.instructions+=1;goto B6d37ac;
case 0x6d37b1:goto L6d37b1;
case 0x6d37b2:goto L6d37b2;
case 0x6d37b4:c.instructions+=2;goto B6d37b4;
case 0x6d37b6:c.instructions+=1;goto B6d37b6;
case 0x6d37bb:goto L6d37bb;
case 0x6d37bc:goto L6d37bc;
case 0x6d37c2:c.instructions+=8;goto B6d37c2;
case 0x6d37c4:c.instructions+=7;goto B6d37c4;
case 0x6d37c6:c.instructions+=6;goto B6d37c6;
case 0x6d37c9:c.instructions+=5;goto B6d37c9;
case 0x6d37cc:c.instructions+=4;goto B6d37cc;
case 0x6d37cf:c.instructions+=3;goto B6d37cf;
case 0x6d37d2:c.instructions+=2;goto B6d37d2;
case 0x6d37d4:c.instructions+=1;goto B6d37d4;
case 0x6d37d9:goto L6d37d9;
case 0x6d37da:goto L6d37da;
case 0x6d37dc:c.instructions+=2;goto B6d37dc;
case 0x6d37de:c.instructions+=1;goto B6d37de;
case 0x6d37e3:goto L6d37e3;
case 0x6d37e4:goto L6d37e4;
case 0x6d37ea:c.instructions+=8;goto B6d37ea;
case 0x6d37ec:c.instructions+=7;goto B6d37ec;
case 0x6d37ee:c.instructions+=6;goto B6d37ee;
case 0x6d37f1:c.instructions+=5;goto B6d37f1;
case 0x6d37f4:c.instructions+=4;goto B6d37f4;
case 0x6d37f7:c.instructions+=3;goto B6d37f7;
case 0x6d37fa:c.instructions+=2;goto B6d37fa;
case 0x6d37fc:c.instructions+=1;goto B6d37fc;
case 0x6d3801:goto L6d3801;
case 0x6d3802:goto L6d3802;
case 0x6d3808:c.instructions+=8;goto B6d3808;
case 0x6d380a:c.instructions+=7;goto B6d380a;
case 0x6d380c:c.instructions+=6;goto B6d380c;
case 0x6d380f:c.instructions+=5;goto B6d380f;
case 0x6d3812:c.instructions+=4;goto B6d3812;
case 0x6d3815:c.instructions+=3;goto B6d3815;
case 0x6d3818:c.instructions+=2;goto B6d3818;
case 0x6d381a:c.instructions+=1;goto B6d381a;
case 0x6d381f:goto L6d381f;
case 0x6d3820:goto L6d3820;
case 0x6d3826:c.instructions+=8;goto B6d3826;
case 0x6d3828:c.instructions+=7;goto B6d3828;
case 0x6d382a:c.instructions+=6;goto B6d382a;
case 0x6d382d:c.instructions+=5;goto B6d382d;
case 0x6d3830:c.instructions+=4;goto B6d3830;
case 0x6d3833:c.instructions+=3;goto B6d3833;
case 0x6d3836:c.instructions+=2;goto B6d3836;
case 0x6d3838:c.instructions+=1;goto B6d3838;
case 0x6d383d:goto L6d383d;
case 0x6d383e:goto L6d383e;
case 0x6d3840:c.instructions+=2;goto B6d3840;
case 0x6d3842:c.instructions+=1;goto B6d3842;
case 0x6d3847:goto L6d3847;
case 0x6d3848:goto L6d3848;
case 0x6d384a:c.instructions+=2;goto B6d384a;
case 0x6d384c:c.instructions+=1;goto B6d384c;
case 0x6d3851:goto L6d3851;
case 0x6d3852:goto L6d3852;
case 0x6d3854:c.instructions+=2;goto B6d3854;
case 0x6d3856:c.instructions+=1;goto B6d3856;
case 0x6d385b:goto L6d385b;
case 0x6d385c:goto L6d385c;
case 0x6d385e:c.instructions+=2;goto B6d385e;
case 0x6d3860:c.instructions+=1;goto B6d3860;
case 0x6d3865:goto L6d3865;
case 0x6d3866:goto L6d3866;
case 0x6d3868:c.instructions+=2;goto B6d3868;
case 0x6d386a:c.instructions+=1;goto B6d386a;
case 0x6d386f:goto L6d386f;
case 0x6d3870:goto L6d3870;
case 0x6d3872:c.instructions+=2;goto B6d3872;
case 0x6d3874:c.instructions+=1;goto B6d3874;
case 0x6d3879:goto L6d3879;
case 0x6d387a:goto L6d387a;
case 0x6d387c:c.instructions+=2;goto B6d387c;
case 0x6d387e:c.instructions+=1;goto B6d387e;
case 0x6d3883:goto L6d3883;
case 0x6d3884:goto L6d3884;
case 0x6d3886:c.instructions+=12;goto B6d3886;
case 0x6d3887:c.instructions+=11;goto B6d3887;
case 0x6d3889:c.instructions+=10;goto B6d3889;
case 0x6d388a:c.instructions+=9;goto B6d388a;
case 0x6d388b:c.instructions+=8;goto B6d388b;
case 0x6d388c:c.instructions+=7;goto B6d388c;
case 0x6d388e:c.instructions+=6;goto B6d388e;
case 0x6d3894:c.instructions+=5;goto B6d3894;
case 0x6d3896:c.instructions+=4;goto B6d3896;
case 0x6d389b:c.instructions+=3;goto B6d389b;
case 0x6d389c:c.instructions+=2;goto B6d389c;
case 0x6d389d:c.instructions+=1;goto B6d389d;
case 0x6d38a3:goto L6d38a3;
case 0x6d38a4:c.instructions+=2;goto B6d38a4;
case 0x6d38a5:c.instructions+=1;goto B6d38a5;
case 0x6d38a7:goto L6d38a7;
case 0x6d38a8:c.instructions+=1;goto B6d38a8;
case 0x6d38aa:goto L6d38aa;
case 0x6d38ac:c.instructions+=9;goto B6d38ac;
case 0x6d38ae:c.instructions+=8;goto B6d38ae;
case 0x6d38af:c.instructions+=7;goto B6d38af;
case 0x6d38b0:c.instructions+=6;goto B6d38b0;
case 0x6d38b2:c.instructions+=5;goto B6d38b2;
case 0x6d38b5:c.instructions+=4;goto B6d38b5;
case 0x6d38b6:c.instructions+=3;goto B6d38b6;
case 0x6d38bc:c.instructions+=2;goto B6d38bc;
case 0x6d38be:c.instructions+=1;goto B6d38be;
case 0x6d38c4:goto L6d38c4;
case 0x6d38c6:c.instructions+=1;goto B6d38c6;
case 0x6d38c8:goto L6d38c8;
case 0x6d38ce:c.instructions+=16;goto B6d38ce;
case 0x6d38d1:c.instructions+=15;goto B6d38d1;
case 0x6d38d2:c.instructions+=14;goto B6d38d2;
case 0x6d38d3:c.instructions+=13;goto B6d38d3;
case 0x6d38d4:c.instructions+=12;goto B6d38d4;
case 0x6d38d5:c.instructions+=11;goto B6d38d5;
case 0x6d38d7:c.instructions+=10;goto B6d38d7;
case 0x6d38d8:c.instructions+=9;goto B6d38d8;
case 0x6d38db:c.instructions+=8;goto B6d38db;
case 0x6d38dc:c.instructions+=7;goto B6d38dc;
case 0x6d38dd:c.instructions+=6;goto B6d38dd;
case 0x6d38df:c.instructions+=5;goto B6d38df;
case 0x6d38e2:c.instructions+=4;goto B6d38e2;
case 0x6d38e3:c.instructions+=3;goto B6d38e3;
case 0x6d38e5:c.instructions+=2;goto B6d38e5;
case 0x6d38e7:c.instructions+=1;goto B6d38e7;
case 0x6d38ec:goto L6d38ec;
case 0x6d38ee:c.instructions+=1;goto B6d38ee;
case 0x6d38f0:goto L6d38f0;
case 0x6d38f6:c.instructions+=15;goto B6d38f6;
case 0x6d38f7:c.instructions+=14;goto B6d38f7;
case 0x6d38f8:c.instructions+=13;goto B6d38f8;
case 0x6d38f9:c.instructions+=12;goto B6d38f9;
case 0x6d38fa:c.instructions+=11;goto B6d38fa;
case 0x6d38fc:c.instructions+=10;goto B6d38fc;
case 0x6d38fd:c.instructions+=9;goto B6d38fd;
case 0x6d3900:c.instructions+=8;goto B6d3900;
case 0x6d3901:c.instructions+=7;goto B6d3901;
case 0x6d3904:c.instructions+=6;goto B6d3904;
case 0x6d3905:c.instructions+=5;goto B6d3905;
case 0x6d3908:c.instructions+=4;goto B6d3908;
case 0x6d390a:c.instructions+=3;goto B6d390a;
case 0x6d390d:c.instructions+=2;goto B6d390d;
case 0x6d390f:c.instructions+=1;goto B6d390f;
case 0x6d3914:goto L6d3914;
case 0x6d3916:c.instructions+=1;goto B6d3916;
case 0x6d3918:goto L6d3918;
case 0x6d391a:c.instructions+=1;goto B6d391a;
case 0x6d391c:goto L6d391c;
case 0x6d391e:c.instructions+=2;goto B6d391e;
case 0x6d3920:c.instructions+=1;goto B6d3920;
case 0x6d3922:goto L6d3922;
case 0x6d3924:c.instructions+=2;goto B6d3924;
case 0x6d3926:c.instructions+=1;goto B6d3926;
case 0x6d3928:goto L6d3928;
case 0x6d392a:c.instructions+=1;goto B6d392a;
case 0x6d392c:goto L6d392c;
case 0x6d392e:c.instructions+=1;goto B6d392e;
case 0x6d3933:goto L6d3933;
case 0x6d3934:c.instructions+=3;goto B6d3934;
case 0x6d3935:c.instructions+=2;goto B6d3935;
case 0x6d3936:c.instructions+=1;goto B6d3936;
case 0x6d3937:goto L6d3937;
case 0x6d3939:c.instructions+=2;goto B6d3939;
case 0x6d393b:c.instructions+=1;goto B6d393b;
case 0x6d3940:goto L6d3940;
case 0x6d3941:goto L6d3941;
case 0x6d3943:c.instructions+=2;goto B6d3943;
case 0x6d3945:c.instructions+=1;goto B6d3945;
case 0x6d394a:goto L6d394a;
case 0x6d394b:goto L6d394b;
case 0x6d394d:c.instructions+=2;goto B6d394d;
case 0x6d394f:c.instructions+=1;goto B6d394f;
case 0x6d3954:goto L6d3954;
case 0x6d3955:goto L6d3955;
case 0x6d3957:c.instructions+=2;goto B6d3957;
case 0x6d3959:c.instructions+=1;goto B6d3959;
case 0x6d395e:goto L6d395e;
case 0x6d395f:goto L6d395f;
case 0x6d3961:c.instructions+=131;goto B6d3961;
case 0x6d3962:c.instructions+=130;goto B6d3962;
case 0x6d3964:c.instructions+=129;goto B6d3964;
case 0x6d3967:c.instructions+=128;goto B6d3967;
case 0x6d396a:c.instructions+=127;goto B6d396a;
case 0x6d396b:c.instructions+=126;goto B6d396b;
case 0x6d396e:c.instructions+=125;goto B6d396e;
case 0x6d3971:c.instructions+=124;goto B6d3971;
case 0x6d3978:c.instructions+=123;goto B6d3978;
case 0x6d397f:c.instructions+=122;goto B6d397f;
case 0x6d3982:c.instructions+=121;goto B6d3982;
case 0x6d3985:c.instructions+=120;goto B6d3985;
case 0x6d398c:c.instructions+=119;goto B6d398c;
case 0x6d3993:c.instructions+=118;goto B6d3993;
case 0x6d399a:c.instructions+=117;goto B6d399a;
case 0x6d399c:c.instructions+=116;goto B6d399c;
case 0x6d399f:c.instructions+=115;goto B6d399f;
case 0x6d39a2:c.instructions+=114;goto B6d39a2;
case 0x6d39a9:c.instructions+=113;goto B6d39a9;
case 0x6d39b0:c.instructions+=112;goto B6d39b0;
case 0x6d39b7:c.instructions+=111;goto B6d39b7;
case 0x6d39ba:c.instructions+=110;goto B6d39ba;
case 0x6d39c1:c.instructions+=109;goto B6d39c1;
case 0x6d39c4:c.instructions+=108;goto B6d39c4;
case 0x6d39c7:c.instructions+=107;goto B6d39c7;
case 0x6d39ca:c.instructions+=106;goto B6d39ca;
case 0x6d39cd:c.instructions+=105;goto B6d39cd;
case 0x6d39d0:c.instructions+=104;goto B6d39d0;
case 0x6d39d3:c.instructions+=103;goto B6d39d3;
case 0x6d39da:c.instructions+=102;goto B6d39da;
case 0x6d39dd:c.instructions+=101;goto B6d39dd;
case 0x6d39e4:c.instructions+=100;goto B6d39e4;
case 0x6d39e7:c.instructions+=99;goto B6d39e7;
case 0x6d39ea:c.instructions+=98;goto B6d39ea;
case 0x6d39ed:c.instructions+=97;goto B6d39ed;
case 0x6d39f4:c.instructions+=96;goto B6d39f4;
case 0x6d39f7:c.instructions+=95;goto B6d39f7;
case 0x6d39fa:c.instructions+=94;goto B6d39fa;
case 0x6d3a01:c.instructions+=93;goto B6d3a01;
case 0x6d3a04:c.instructions+=92;goto B6d3a04;
case 0x6d3a08:c.instructions+=91;goto B6d3a08;
case 0x6d3a0c:c.instructions+=90;goto B6d3a0c;
case 0x6d3a0f:c.instructions+=89;goto B6d3a0f;
case 0x6d3a11:c.instructions+=88;goto B6d3a11;
case 0x6d3a17:c.instructions+=87;goto B6d3a17;
case 0x6d3a1a:c.instructions+=86;goto B6d3a1a;
case 0x6d3a1d:c.instructions+=85;goto B6d3a1d;
case 0x6d3a20:c.instructions+=84;goto B6d3a20;
case 0x6d3a23:c.instructions+=83;goto B6d3a23;
case 0x6d3a29:c.instructions+=82;goto B6d3a29;
case 0x6d3a2c:c.instructions+=81;goto B6d3a2c;
case 0x6d3a2f:c.instructions+=80;goto B6d3a2f;
case 0x6d3a32:c.instructions+=79;goto B6d3a32;
case 0x6d3a35:c.instructions+=78;goto B6d3a35;
case 0x6d3a3b:c.instructions+=77;goto B6d3a3b;
case 0x6d3a3e:c.instructions+=76;goto B6d3a3e;
case 0x6d3a41:c.instructions+=75;goto B6d3a41;
case 0x6d3a44:c.instructions+=74;goto B6d3a44;
case 0x6d3a47:c.instructions+=73;goto B6d3a47;
case 0x6d3a4d:c.instructions+=72;goto B6d3a4d;
case 0x6d3a50:c.instructions+=71;goto B6d3a50;
case 0x6d3a53:c.instructions+=70;goto B6d3a53;
case 0x6d3a56:c.instructions+=69;goto B6d3a56;
case 0x6d3a58:c.instructions+=68;goto B6d3a58;
case 0x6d3a5e:c.instructions+=67;goto B6d3a5e;
case 0x6d3a61:c.instructions+=66;goto B6d3a61;
case 0x6d3a64:c.instructions+=65;goto B6d3a64;
case 0x6d3a67:c.instructions+=64;goto B6d3a67;
case 0x6d3a6a:c.instructions+=63;goto B6d3a6a;
case 0x6d3a70:c.instructions+=62;goto B6d3a70;
case 0x6d3a73:c.instructions+=61;goto B6d3a73;
case 0x6d3a76:c.instructions+=60;goto B6d3a76;
case 0x6d3a79:c.instructions+=59;goto B6d3a79;
case 0x6d3a7c:c.instructions+=58;goto B6d3a7c;
case 0x6d3a82:c.instructions+=57;goto B6d3a82;
case 0x6d3a85:c.instructions+=56;goto B6d3a85;
case 0x6d3a88:c.instructions+=55;goto B6d3a88;
case 0x6d3a8b:c.instructions+=54;goto B6d3a8b;
case 0x6d3a8e:c.instructions+=53;goto B6d3a8e;
case 0x6d3a94:c.instructions+=52;goto B6d3a94;
case 0x6d3a97:c.instructions+=51;goto B6d3a97;
case 0x6d3a9a:c.instructions+=50;goto B6d3a9a;
case 0x6d3a9c:c.instructions+=49;goto B6d3a9c;
case 0x6d3a9f:c.instructions+=48;goto B6d3a9f;
case 0x6d3aa1:c.instructions+=47;goto B6d3aa1;
case 0x6d3aa4:c.instructions+=46;goto B6d3aa4;
case 0x6d3aa7:c.instructions+=45;goto B6d3aa7;
case 0x6d3aaa:c.instructions+=44;goto B6d3aaa;
case 0x6d3aad:c.instructions+=43;goto B6d3aad;
case 0x6d3ab0:c.instructions+=42;goto B6d3ab0;
case 0x6d3ab3:c.instructions+=41;goto B6d3ab3;
case 0x6d3ab6:c.instructions+=40;goto B6d3ab6;
case 0x6d3ab9:c.instructions+=39;goto B6d3ab9;
case 0x6d3abc:c.instructions+=38;goto B6d3abc;
case 0x6d3ac0:c.instructions+=37;goto B6d3ac0;
case 0x6d3ac4:c.instructions+=36;goto B6d3ac4;
case 0x6d3ac7:c.instructions+=35;goto B6d3ac7;
case 0x6d3aca:c.instructions+=34;goto B6d3aca;
case 0x6d3acd:c.instructions+=33;goto B6d3acd;
case 0x6d3ad1:c.instructions+=32;goto B6d3ad1;
case 0x6d3ad4:c.instructions+=31;goto B6d3ad4;
case 0x6d3ad7:c.instructions+=30;goto B6d3ad7;
case 0x6d3ade:c.instructions+=29;goto B6d3ade;
case 0x6d3ae5:c.instructions+=28;goto B6d3ae5;
case 0x6d3ae8:c.instructions+=27;goto B6d3ae8;
case 0x6d3aeb:c.instructions+=26;goto B6d3aeb;
case 0x6d3af2:c.instructions+=25;goto B6d3af2;
case 0x6d3af9:c.instructions+=24;goto B6d3af9;
case 0x6d3afc:c.instructions+=23;goto B6d3afc;
case 0x6d3aff:c.instructions+=22;goto B6d3aff;
case 0x6d3b06:c.instructions+=21;goto B6d3b06;
case 0x6d3b0d:c.instructions+=20;goto B6d3b0d;
case 0x6d3b10:c.instructions+=19;goto B6d3b10;
case 0x6d3b13:c.instructions+=18;goto B6d3b13;
case 0x6d3b1a:c.instructions+=17;goto B6d3b1a;
case 0x6d3b1d:c.instructions+=16;goto B6d3b1d;
case 0x6d3b20:c.instructions+=15;goto B6d3b20;
case 0x6d3b23:c.instructions+=14;goto B6d3b23;
case 0x6d3b26:c.instructions+=13;goto B6d3b26;
case 0x6d3b29:c.instructions+=12;goto B6d3b29;
case 0x6d3b2c:c.instructions+=11;goto B6d3b2c;
case 0x6d3b2f:c.instructions+=10;goto B6d3b2f;
case 0x6d3b32:c.instructions+=9;goto B6d3b32;
case 0x6d3b35:c.instructions+=8;goto B6d3b35;
case 0x6d3b38:c.instructions+=7;goto B6d3b38;
case 0x6d3b3b:c.instructions+=6;goto B6d3b3b;
case 0x6d3b3e:c.instructions+=5;goto B6d3b3e;
case 0x6d3b41:c.instructions+=4;goto B6d3b41;
case 0x6d3b44:c.instructions+=3;goto B6d3b44;
case 0x6d3b47:c.instructions+=2;goto B6d3b47;
case 0x6d3b48:c.instructions+=1;goto B6d3b48;
case 0x6d3b4b:goto L6d3b4b;
case 0x6d3b4d:c.instructions+=77;goto B6d3b4d;
case 0x6d3b4e:c.instructions+=76;goto B6d3b4e;
case 0x6d3b50:c.instructions+=75;goto B6d3b50;
case 0x6d3b53:c.instructions+=74;goto B6d3b53;
case 0x6d3b56:c.instructions+=73;goto B6d3b56;
case 0x6d3b57:c.instructions+=72;goto B6d3b57;
case 0x6d3b5a:c.instructions+=71;goto B6d3b5a;
case 0x6d3b5d:c.instructions+=70;goto B6d3b5d;
case 0x6d3b65:c.instructions+=69;goto B6d3b65;
case 0x6d3b6d:c.instructions+=68;goto B6d3b6d;
case 0x6d3b70:c.instructions+=67;goto B6d3b70;
case 0x6d3b73:c.instructions+=66;goto B6d3b73;
case 0x6d3b7a:c.instructions+=65;goto B6d3b7a;
case 0x6d3b81:c.instructions+=64;goto B6d3b81;
case 0x6d3b88:c.instructions+=63;goto B6d3b88;
case 0x6d3b8f:c.instructions+=62;goto B6d3b8f;
case 0x6d3b96:c.instructions+=61;goto B6d3b96;
case 0x6d3b9d:c.instructions+=60;goto B6d3b9d;
case 0x6d3ba0:c.instructions+=59;goto B6d3ba0;
case 0x6d3ba7:c.instructions+=58;goto B6d3ba7;
case 0x6d3baa:c.instructions+=57;goto B6d3baa;
case 0x6d3bad:c.instructions+=56;goto B6d3bad;
case 0x6d3bb0:c.instructions+=55;goto B6d3bb0;
case 0x6d3bb3:c.instructions+=54;goto B6d3bb3;
case 0x6d3bb6:c.instructions+=53;goto B6d3bb6;
case 0x6d3bb9:c.instructions+=52;goto B6d3bb9;
case 0x6d3bc0:c.instructions+=51;goto B6d3bc0;
case 0x6d3bc3:c.instructions+=50;goto B6d3bc3;
case 0x6d3bca:c.instructions+=49;goto B6d3bca;
case 0x6d3bcd:c.instructions+=48;goto B6d3bcd;
case 0x6d3bd0:c.instructions+=47;goto B6d3bd0;
case 0x6d3bd3:c.instructions+=46;goto B6d3bd3;
case 0x6d3bda:c.instructions+=45;goto B6d3bda;
case 0x6d3bdd:c.instructions+=44;goto B6d3bdd;
case 0x6d3be0:c.instructions+=43;goto B6d3be0;
case 0x6d3be7:c.instructions+=42;goto B6d3be7;
case 0x6d3beb:c.instructions+=41;goto B6d3beb;
case 0x6d3bef:c.instructions+=40;goto B6d3bef;
case 0x6d3bf7:c.instructions+=39;goto B6d3bf7;
case 0x6d3bff:c.instructions+=38;goto B6d3bff;
case 0x6d3c04:c.instructions+=37;goto B6d3c04;
case 0x6d3c09:c.instructions+=36;goto B6d3c09;
case 0x6d3c0d:c.instructions+=35;goto B6d3c0d;
case 0x6d3c12:c.instructions+=34;goto B6d3c12;
case 0x6d3c16:c.instructions+=33;goto B6d3c16;
case 0x6d3c1a:c.instructions+=32;goto B6d3c1a;
case 0x6d3c1d:c.instructions+=31;goto B6d3c1d;
case 0x6d3c20:c.instructions+=30;goto B6d3c20;
case 0x6d3c27:c.instructions+=29;goto B6d3c27;
case 0x6d3c2e:c.instructions+=28;goto B6d3c2e;
case 0x6d3c31:c.instructions+=27;goto B6d3c31;
case 0x6d3c34:c.instructions+=26;goto B6d3c34;
case 0x6d3c3b:c.instructions+=25;goto B6d3c3b;
case 0x6d3c42:c.instructions+=24;goto B6d3c42;
case 0x6d3c45:c.instructions+=23;goto B6d3c45;
case 0x6d3c48:c.instructions+=22;goto B6d3c48;
case 0x6d3c4f:c.instructions+=21;goto B6d3c4f;
case 0x6d3c56:c.instructions+=20;goto B6d3c56;
case 0x6d3c59:c.instructions+=19;goto B6d3c59;
case 0x6d3c5c:c.instructions+=18;goto B6d3c5c;
case 0x6d3c63:c.instructions+=17;goto B6d3c63;
case 0x6d3c66:c.instructions+=16;goto B6d3c66;
case 0x6d3c69:c.instructions+=15;goto B6d3c69;
case 0x6d3c6c:c.instructions+=14;goto B6d3c6c;
case 0x6d3c6f:c.instructions+=13;goto B6d3c6f;
case 0x6d3c72:c.instructions+=12;goto B6d3c72;
case 0x6d3c75:c.instructions+=11;goto B6d3c75;
case 0x6d3c78:c.instructions+=10;goto B6d3c78;
case 0x6d3c7b:c.instructions+=9;goto B6d3c7b;
case 0x6d3c7e:c.instructions+=8;goto B6d3c7e;
case 0x6d3c81:c.instructions+=7;goto B6d3c81;
case 0x6d3c84:c.instructions+=6;goto B6d3c84;
case 0x6d3c87:c.instructions+=5;goto B6d3c87;
case 0x6d3c8a:c.instructions+=4;goto B6d3c8a;
case 0x6d3c8d:c.instructions+=3;goto B6d3c8d;
case 0x6d3c90:c.instructions+=2;goto B6d3c90;
case 0x6d3c91:c.instructions+=1;goto B6d3c91;
case 0x6d3d80:goto L6d3d80;
case 0x6d3d87:c.instructions+=57;goto B6d3d87;
case 0x6d3d8e:c.instructions+=56;goto B6d3d8e;
case 0x6d3d95:c.instructions+=55;goto B6d3d95;
case 0x6d3d98:c.instructions+=54;goto B6d3d98;
case 0x6d3d9b:c.instructions+=53;goto B6d3d9b;
case 0x6d3d9f:c.instructions+=52;goto B6d3d9f;
case 0x6d3da2:c.instructions+=51;goto B6d3da2;
case 0x6d3da5:c.instructions+=50;goto B6d3da5;
case 0x6d3da8:c.instructions+=49;goto B6d3da8;
case 0x6d3dab:c.instructions+=48;goto B6d3dab;
case 0x6d3dae:c.instructions+=47;goto B6d3dae;
case 0x6d3db1:c.instructions+=46;goto B6d3db1;
case 0x6d3db5:c.instructions+=45;goto B6d3db5;
case 0x6d3db9:c.instructions+=44;goto B6d3db9;
case 0x6d3dbd:c.instructions+=43;goto B6d3dbd;
case 0x6d3dc1:c.instructions+=42;goto B6d3dc1;
case 0x6d3dc8:c.instructions+=41;goto B6d3dc8;
case 0x6d3dcc:c.instructions+=40;goto B6d3dcc;
case 0x6d3dd3:c.instructions+=39;goto B6d3dd3;
case 0x6d3dd7:c.instructions+=38;goto B6d3dd7;
case 0x6d3dde:c.instructions+=37;goto B6d3dde;
case 0x6d3de2:c.instructions+=36;goto B6d3de2;
case 0x6d3de5:c.instructions+=35;goto B6d3de5;
case 0x6d3de9:c.instructions+=34;goto B6d3de9;
case 0x6d3ded:c.instructions+=33;goto B6d3ded;
case 0x6d3df1:c.instructions+=32;goto B6d3df1;
case 0x6d3df8:c.instructions+=31;goto B6d3df8;
case 0x6d3dfc:c.instructions+=30;goto B6d3dfc;
case 0x6d3e00:c.instructions+=29;goto B6d3e00;
case 0x6d3e07:c.instructions+=28;goto B6d3e07;
case 0x6d3e0b:c.instructions+=27;goto B6d3e0b;
case 0x6d3e0f:c.instructions+=26;goto B6d3e0f;
case 0x6d3e16:c.instructions+=25;goto B6d3e16;
case 0x6d3e1a:c.instructions+=24;goto B6d3e1a;
case 0x6d3e1e:c.instructions+=23;goto B6d3e1e;
case 0x6d3e22:c.instructions+=22;goto B6d3e22;
case 0x6d3e26:c.instructions+=21;goto B6d3e26;
case 0x6d3e29:c.instructions+=20;goto B6d3e29;
case 0x6d3e2d:c.instructions+=19;goto B6d3e2d;
case 0x6d3e31:c.instructions+=18;goto B6d3e31;
case 0x6d3e35:c.instructions+=17;goto B6d3e35;
case 0x6d3e39:c.instructions+=16;goto B6d3e39;
case 0x6d3e3d:c.instructions+=15;goto B6d3e3d;
case 0x6d3e40:c.instructions+=14;goto B6d3e40;
case 0x6d3e43:c.instructions+=13;goto B6d3e43;
case 0x6d3e47:c.instructions+=12;goto B6d3e47;
case 0x6d3e4e:c.instructions+=11;goto B6d3e4e;
case 0x6d3e51:c.instructions+=10;goto B6d3e51;
case 0x6d3e55:c.instructions+=9;goto B6d3e55;
case 0x6d3e59:c.instructions+=8;goto B6d3e59;
case 0x6d3e5c:c.instructions+=7;goto B6d3e5c;
case 0x6d3e63:c.instructions+=6;goto B6d3e63;
case 0x6d3e67:c.instructions+=5;goto B6d3e67;
case 0x6d3e6a:c.instructions+=4;goto B6d3e6a;
case 0x6d3e6d:c.instructions+=3;goto B6d3e6d;
case 0x6d3e71:c.instructions+=2;goto B6d3e71;
case 0x6d3e74:c.instructions+=1;goto B6d3e74;
case 0x6d3e80:goto L6d3e80;
case 0x6d3e87:c.instructions+=58;goto B6d3e87;
case 0x6d3e8e:c.instructions+=57;goto B6d3e8e;
case 0x6d3e95:c.instructions+=56;goto B6d3e95;
case 0x6d3e98:c.instructions+=55;goto B6d3e98;
case 0x6d3e9f:c.instructions+=54;goto B6d3e9f;
case 0x6d3ea2:c.instructions+=53;goto B6d3ea2;
case 0x6d3ea5:c.instructions+=52;goto B6d3ea5;
case 0x6d3ea8:c.instructions+=51;goto B6d3ea8;
case 0x6d3eab:c.instructions+=50;goto B6d3eab;
case 0x6d3eaf:c.instructions+=49;goto B6d3eaf;
case 0x6d3eb6:c.instructions+=48;goto B6d3eb6;
case 0x6d3eba:c.instructions+=47;goto B6d3eba;
case 0x6d3ebe:c.instructions+=46;goto B6d3ebe;
case 0x6d3ec1:c.instructions+=45;goto B6d3ec1;
case 0x6d3ec5:c.instructions+=44;goto B6d3ec5;
case 0x6d3ec8:c.instructions+=43;goto B6d3ec8;
case 0x6d3ecc:c.instructions+=42;goto B6d3ecc;
case 0x6d3ed3:c.instructions+=41;goto B6d3ed3;
case 0x6d3ed7:c.instructions+=40;goto B6d3ed7;
case 0x6d3edb:c.instructions+=39;goto B6d3edb;
case 0x6d3ede:c.instructions+=38;goto B6d3ede;
case 0x6d3ee1:c.instructions+=37;goto B6d3ee1;
case 0x6d3ee4:c.instructions+=36;goto B6d3ee4;
case 0x6d3eeb:c.instructions+=35;goto B6d3eeb;
case 0x6d3eee:c.instructions+=34;goto B6d3eee;
case 0x6d3ef1:c.instructions+=33;goto B6d3ef1;
case 0x6d3ef5:c.instructions+=32;goto B6d3ef5;
case 0x6d3efc:c.instructions+=31;goto B6d3efc;
case 0x6d3f00:c.instructions+=30;goto B6d3f00;
case 0x6d3f04:c.instructions+=29;goto B6d3f04;
case 0x6d3f08:c.instructions+=28;goto B6d3f08;
case 0x6d3f0f:c.instructions+=27;goto B6d3f0f;
case 0x6d3f13:c.instructions+=26;goto B6d3f13;
case 0x6d3f17:c.instructions+=25;goto B6d3f17;
case 0x6d3f1b:c.instructions+=24;goto B6d3f1b;
case 0x6d3f1f:c.instructions+=23;goto B6d3f1f;
case 0x6d3f23:c.instructions+=22;goto B6d3f23;
case 0x6d3f27:c.instructions+=21;goto B6d3f27;
case 0x6d3f2e:c.instructions+=20;goto B6d3f2e;
case 0x6d3f32:c.instructions+=19;goto B6d3f32;
case 0x6d3f36:c.instructions+=18;goto B6d3f36;
case 0x6d3f39:c.instructions+=17;goto B6d3f39;
case 0x6d3f3c:c.instructions+=16;goto B6d3f3c;
case 0x6d3f43:c.instructions+=15;goto B6d3f43;
case 0x6d3f46:c.instructions+=14;goto B6d3f46;
case 0x6d3f49:c.instructions+=13;goto B6d3f49;
case 0x6d3f4d:c.instructions+=12;goto B6d3f4d;
case 0x6d3f54:c.instructions+=11;goto B6d3f54;
case 0x6d3f58:c.instructions+=10;goto B6d3f58;
case 0x6d3f5c:c.instructions+=9;goto B6d3f5c;
case 0x6d3f5f:c.instructions+=8;goto B6d3f5f;
case 0x6d3f62:c.instructions+=7;goto B6d3f62;
case 0x6d3f66:c.instructions+=6;goto B6d3f66;
case 0x6d3f69:c.instructions+=5;goto B6d3f69;
case 0x6d3f6c:c.instructions+=4;goto B6d3f6c;
case 0x6d3f70:c.instructions+=3;goto B6d3f70;
case 0x6d3f73:c.instructions+=2;goto B6d3f73;
case 0x6d3f76:c.instructions+=1;goto B6d3f76;
default:missing_instruction(c.pc);}
B6d3002:L6d3002:{c.instructions+=5;NFSU2_TR(0x6d3002);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3005:{NFSU2_TR(0x6d3005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d3007:{NFSU2_TR(0x6d3007);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d300a:{NFSU2_TR(0x6d300a);
__builtin_memmove((R+4),(R+24),4);
}
B6d300c:{NFSU2_TR(0x6d300c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d300full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d300f:L6d300f:{c.instructions+=2;NFSU2_TR(0x6d300f);
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
B6d3011:{NFSU2_TR(0x6d3011);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d3017:L6d3017:{c.instructions+=9;NFSU2_TR(0x6d3017);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d301a:{NFSU2_TR(0x6d301a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d301c:{NFSU2_TR(0x6d301c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d301f:{NFSU2_TR(0x6d301f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3020:{NFSU2_TR(0x6d3020);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3026:{NFSU2_TR(0x6d3026);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3027:{NFSU2_TR(0x6d3027);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d302a:{NFSU2_TR(0x6d302a);
__builtin_memmove((R+4),(R+24),4);
}
B6d302c:{NFSU2_TR(0x6d302c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d302full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d302f:L6d302f:{c.instructions+=2;NFSU2_TR(0x6d302f);
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
B6d3031:{NFSU2_TR(0x6d3031);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d3037:L6d3037:{c.instructions+=6;NFSU2_TR(0x6d3037);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d303a:{NFSU2_TR(0x6d303a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d303c:{NFSU2_TR(0x6d303c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d303f:{NFSU2_TR(0x6d303f);
__builtin_memmove((R+4),(R+24),4);
}
B6d3041:{NFSU2_TR(0x6d3041);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3044:{NFSU2_TR(0x6d3044);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3047ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3047:L6d3047:{c.instructions+=2;NFSU2_TR(0x6d3047);
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
B6d3049:{NFSU2_TR(0x6d3049);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d304f:L6d304f:{c.instructions+=1;NFSU2_TR(0x6d304f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3053:L6d3053:{c.instructions+=7;NFSU2_TR(0x6d3053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3056:{NFSU2_TR(0x6d3056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d305c:{NFSU2_TR(0x6d305c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6d305f:{NFSU2_TR(0x6d305f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3063:{NFSU2_TR(0x6d3063);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3066:{NFSU2_TR(0x6d3066);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6d3069:{NFSU2_TR(0x6d3069);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3082;}}
}
B6d306b:L6d306b:{c.instructions+=4;NFSU2_TR(0x6d306b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d306d:{NFSU2_TR(0x6d306d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6d3072:{NFSU2_TR(0x6d3072);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x70400000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x70400000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x70400000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d3077:{NFSU2_TR(0x6d3077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3082;}}
}
B6d3079:L6d3079:{c.instructions+=2;NFSU2_TR(0x6d3079);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3080:{NFSU2_TR(0x6d3080);
{goto L6d3086;}
}
B6d3082:L6d3082:{c.instructions+=1;NFSU2_TR(0x6d3082);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d3086:L6d3086:{c.instructions+=10;NFSU2_TR(0x6d3086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3089:{NFSU2_TR(0x6d3089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d308b:{NFSU2_TR(0x6d308b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d308e:{NFSU2_TR(0x6d308e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d308f:{NFSU2_TR(0x6d308f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3092:{NFSU2_TR(0x6d3092);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3093:{NFSU2_TR(0x6d3093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d3095:{NFSU2_TR(0x6d3095);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d3098:{NFSU2_TR(0x6d3098);
__builtin_memmove((R+4),(R+24),4);
}
B6d309a:{NFSU2_TR(0x6d309a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d309dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d309d:L6d309d:{c.instructions+=2;NFSU2_TR(0x6d309d);
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
B6d309f:{NFSU2_TR(0x6d309f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d30a1:L6d30a1:{c.instructions+=8;NFSU2_TR(0x6d30a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d30a3:{NFSU2_TR(0x6d30a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d30a6:{NFSU2_TR(0x6d30a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d30a7:{NFSU2_TR(0x6d30a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d30aa:{NFSU2_TR(0x6d30aa);
__builtin_memmove((R+4),(R+24),4);
}
B6d30ac:{NFSU2_TR(0x6d30ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d30ad:{NFSU2_TR(0x6d30ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d30ae:{NFSU2_TR(0x6d30ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d30b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d30b1:L6d30b1:{c.instructions+=2;NFSU2_TR(0x6d30b1);
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
B6d30b3:{NFSU2_TR(0x6d30b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d30b5:L6d30b5:{c.instructions+=8;NFSU2_TR(0x6d30b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d30b8:{NFSU2_TR(0x6d30b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d30bb:{NFSU2_TR(0x6d30bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d30be:{NFSU2_TR(0x6d30be);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d30c1:{NFSU2_TR(0x6d30c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d30c3:{NFSU2_TR(0x6d30c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d30c4:{NFSU2_TR(0x6d30c4);
__builtin_memmove((R+4),(R+24),4);
}
B6d30c6:{NFSU2_TR(0x6d30c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d30c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d30c9:L6d30c9:{c.instructions+=2;NFSU2_TR(0x6d30c9);
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
B6d30cb:{NFSU2_TR(0x6d30cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d30cd:L6d30cd:{c.instructions+=3;NFSU2_TR(0x6d30cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d30d0:{NFSU2_TR(0x6d30d0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d30d4:{NFSU2_TR(0x6d30d4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3053u);}goto L6d3053;}}
}
B6d30da:L6d30da:{c.instructions+=3;NFSU2_TR(0x6d30da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d30dc:{NFSU2_TR(0x6d30dc);
__builtin_memmove((R+4),(R+24),4);
}
B6d30de:{NFSU2_TR(0x6d30de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d30e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d30e1:L6d30e1:{c.instructions+=2;NFSU2_TR(0x6d30e1);
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
B6d30e3:{NFSU2_TR(0x6d30e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d30e5:L6d30e5:{c.instructions+=2;NFSU2_TR(0x6d30e5);
__builtin_memmove((R+4),(R+24),4);
}
B6d30e7:{NFSU2_TR(0x6d30e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d30ecull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d30ec:L6d30ec:{c.instructions+=2;NFSU2_TR(0x6d30ec);
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
B6d30ee:{NFSU2_TR(0x6d30ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d30f2;}}
}
B6d30f0:L6d30f0:{c.instructions+=1;NFSU2_TR(0x6d30f0);
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
B6d30f2:L6d30f2:{c.instructions+=5;NFSU2_TR(0x6d30f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d30f3:{NFSU2_TR(0x6d30f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d30f4:{NFSU2_TR(0x6d30f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d30f5:{NFSU2_TR(0x6d30f5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d30f6:{NFSU2_TR(0x6d30f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d30f7:L6d30f7:{c.instructions+=15;NFSU2_TR(0x6d30f7);
__builtin_memmove((R+28),(R+28),4);
}
B6d30f9:{NFSU2_TR(0x6d30f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d30fa:{NFSU2_TR(0x6d30fa);
__builtin_memmove((R+20),(R+16),4);
}
B6d30fc:{NFSU2_TR(0x6d30fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6d30ff:{NFSU2_TR(0x6d30ff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3100:{NFSU2_TR(0x6d3100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3101:{NFSU2_TR(0x6d3101);
__builtin_memmove((R+24),(R+4),4);
}
B6d3103:{NFSU2_TR(0x6d3103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3109:{NFSU2_TR(0x6d3109);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d310b:{NFSU2_TR(0x6d310b);
__builtin_memmove((R+12),(R+4),4);
}
B6d310d:{NFSU2_TR(0x6d310d);
w4(R+0,u32(0xfffffull));
}
B6d3112:{NFSU2_TR(0x6d3112);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B6d3114:{NFSU2_TR(0x6d3114);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x70500003ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d311a:{NFSU2_TR(0x6d311a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d311b:{NFSU2_TR(0x6d311b);
if(r1(R+518)){{goto L6d313f;}}
}
B6d311d:L6d311d:{c.instructions+=2;NFSU2_TR(0x6d311d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d3123:{NFSU2_TR(0x6d3123);
if(r1(R+518)){{goto L6d313b;}}
}
B6d3125:L6d3125:{c.instructions+=2;NFSU2_TR(0x6d3125);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d3126:{NFSU2_TR(0x6d3126);
if(r1(R+518)){{goto L6d3137;}}
}
B6d3128:L6d3128:{c.instructions+=2;NFSU2_TR(0x6d3128);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d312a:{NFSU2_TR(0x6d312a);
if(r1(R+518)){{goto L6d3133;}}
}
B6d312c:L6d312c:{c.instructions+=2;NFSU2_TR(0x6d312c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d312d:{NFSU2_TR(0x6d312d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3144;}}
}
B6d312f:L6d312f:{c.instructions+=2;NFSU2_TR(0x6d312f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3131:{NFSU2_TR(0x6d3131);
{goto L6d3141;}
}
B6d3133:L6d3133:{c.instructions+=2;NFSU2_TR(0x6d3133);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3135:{NFSU2_TR(0x6d3135);
{goto L6d3141;}
}
B6d3137:L6d3137:{c.instructions+=2;NFSU2_TR(0x6d3137);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3139:{NFSU2_TR(0x6d3139);
{goto L6d3141;}
}
B6d313b:L6d313b:{c.instructions+=2;NFSU2_TR(0x6d313b);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d313d:{NFSU2_TR(0x6d313d);
{goto L6d3141;}
}
B6d313f:L6d313f:{c.instructions+=1;NFSU2_TR(0x6d313f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3141:L6d3141:{c.instructions+=2;NFSU2_TR(0x6d3141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d3142:{NFSU2_TR(0x6d3142);
{goto L6d3147;}
}
B6d3144:L6d3144:{c.instructions+=1;NFSU2_TR(0x6d3144);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3147:L6d3147:{c.instructions+=3;NFSU2_TR(0x6d3147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3148:{NFSU2_TR(0x6d3148);
__builtin_memmove((R+4),(R+24),4);
}
B6d314a:{NFSU2_TR(0x6d314a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d314full));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d314f:L6d314f:{c.instructions+=2;NFSU2_TR(0x6d314f);
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
B6d3151:{NFSU2_TR(0x6d3151);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d3157:L6d3157:{c.instructions+=14;NFSU2_TR(0x6d3157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d315a:{NFSU2_TR(0x6d315a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d315c:{NFSU2_TR(0x6d315c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d315f:{NFSU2_TR(0x6d315f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3160:{NFSU2_TR(0x6d3160);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3163:{NFSU2_TR(0x6d3163);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3164:{NFSU2_TR(0x6d3164);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3167:{NFSU2_TR(0x6d3167);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3168:{NFSU2_TR(0x6d3168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d316e:{NFSU2_TR(0x6d316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3171:{NFSU2_TR(0x6d3171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d3173:{NFSU2_TR(0x6d3173);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d3176:{NFSU2_TR(0x6d3176);
__builtin_memmove((R+4),(R+24),4);
}
B6d3178:{NFSU2_TR(0x6d3178);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d317bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d317b:L6d317b:{c.instructions+=2;NFSU2_TR(0x6d317b);
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
B6d317d:{NFSU2_TR(0x6d317d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d3183:L6d3183:{c.instructions+=9;NFSU2_TR(0x6d3183);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3186:{NFSU2_TR(0x6d3186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d318c:{NFSU2_TR(0x6d318c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d318e:{NFSU2_TR(0x6d318e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3191:{NFSU2_TR(0x6d3191);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3192:{NFSU2_TR(0x6d3192);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3195:{NFSU2_TR(0x6d3195);
__builtin_memmove((R+4),(R+24),4);
}
B6d3197:{NFSU2_TR(0x6d3197);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d319a:{NFSU2_TR(0x6d319a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d319dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d319d:L6d319d:{c.instructions+=2;NFSU2_TR(0x6d319d);
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
B6d319f:{NFSU2_TR(0x6d319f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d31a5:L6d31a5:{c.instructions+=6;NFSU2_TR(0x6d31a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d31a8:{NFSU2_TR(0x6d31a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d31aa:{NFSU2_TR(0x6d31aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d31ad:{NFSU2_TR(0x6d31ad);
__builtin_memmove((R+4),(R+24),4);
}
B6d31af:{NFSU2_TR(0x6d31af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d31b2:{NFSU2_TR(0x6d31b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d31b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d31b5:L6d31b5:{c.instructions+=2;NFSU2_TR(0x6d31b5);
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
B6d31b7:{NFSU2_TR(0x6d31b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d31bd:L6d31bd:{c.instructions+=19;NFSU2_TR(0x6d31bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d31c0:{NFSU2_TR(0x6d31c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d31c2:{NFSU2_TR(0x6d31c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d31c5:{NFSU2_TR(0x6d31c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6d31c8:{NFSU2_TR(0x6d31c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d31cb:{NFSU2_TR(0x6d31cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d31cc:{NFSU2_TR(0x6d31cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d31cf:{NFSU2_TR(0x6d31cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d31d0:{NFSU2_TR(0x6d31d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d31d6:{NFSU2_TR(0x6d31d6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6d31d7:{NFSU2_TR(0x6d31d7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff80000ull))));
}
B6d31dc:{NFSU2_TR(0x6d31dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xf0000ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xf0000ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xf0000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d31e1:{NFSU2_TR(0x6d31e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d31e4:{NFSU2_TR(0x6d31e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d31e7:{NFSU2_TR(0x6d31e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d31e9:{NFSU2_TR(0x6d31e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d31ec:{NFSU2_TR(0x6d31ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d31ee:{NFSU2_TR(0x6d31ee);
__builtin_memmove((R+4),(R+24),4);
}
B6d31f0:{NFSU2_TR(0x6d31f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d31f3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d31f3:L6d31f3:{c.instructions+=2;NFSU2_TR(0x6d31f3);
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
B6d31f5:{NFSU2_TR(0x6d31f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d31fb:L6d31fb:{c.instructions+=9;NFSU2_TR(0x6d31fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d31fd:{NFSU2_TR(0x6d31fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3200:{NFSU2_TR(0x6d3200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3201:{NFSU2_TR(0x6d3201);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3204:{NFSU2_TR(0x6d3204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d320a:{NFSU2_TR(0x6d320a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d320b:{NFSU2_TR(0x6d320b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d320e:{NFSU2_TR(0x6d320e);
__builtin_memmove((R+4),(R+24),4);
}
B6d3210:{NFSU2_TR(0x6d3210);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3213ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3213:L6d3213:{c.instructions+=2;NFSU2_TR(0x6d3213);
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
B6d3215:{NFSU2_TR(0x6d3215);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d321b:L6d321b:{c.instructions+=6;NFSU2_TR(0x6d321b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d321e:{NFSU2_TR(0x6d321e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3220:{NFSU2_TR(0x6d3220);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3223:{NFSU2_TR(0x6d3223);
__builtin_memmove((R+4),(R+24),4);
}
B6d3225:{NFSU2_TR(0x6d3225);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3228:{NFSU2_TR(0x6d3228);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d322bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d322b:L6d322b:{c.instructions+=2;NFSU2_TR(0x6d322b);
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
B6d322d:{NFSU2_TR(0x6d322d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d322f:L6d322f:{c.instructions+=14;NFSU2_TR(0x6d322f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3232:{NFSU2_TR(0x6d3232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3234:{NFSU2_TR(0x6d3234);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3237:{NFSU2_TR(0x6d3237);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3238:{NFSU2_TR(0x6d3238);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d323b:{NFSU2_TR(0x6d323b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d323c:{NFSU2_TR(0x6d323c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3242:{NFSU2_TR(0x6d3242);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3245:{NFSU2_TR(0x6d3245);
__builtin_memmove((R+28),(R+12),4);
}
B6d3247:{NFSU2_TR(0x6d3247);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B6d324a:{NFSU2_TR(0x6d324a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d324d:{NFSU2_TR(0x6d324d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d3250:{NFSU2_TR(0x6d3250);
__builtin_memmove((R+4),(R+24),4);
}
B6d3252:{NFSU2_TR(0x6d3252);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3255ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3255:L6d3255:{c.instructions+=2;NFSU2_TR(0x6d3255);
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
B6d3257:{NFSU2_TR(0x6d3257);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d3259:L6d3259:{c.instructions+=11;NFSU2_TR(0x6d3259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d325b:{NFSU2_TR(0x6d325b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d325e:{NFSU2_TR(0x6d325e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d325f:{NFSU2_TR(0x6d325f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3262:{NFSU2_TR(0x6d3262);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3268:{NFSU2_TR(0x6d3268);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d326b:{NFSU2_TR(0x6d326b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d326d:{NFSU2_TR(0x6d326d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d326e:{NFSU2_TR(0x6d326e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d326f:{NFSU2_TR(0x6d326f);
__builtin_memmove((R+4),(R+24),4);
}
B6d3271:{NFSU2_TR(0x6d3271);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3274ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3274:L6d3274:{c.instructions+=2;NFSU2_TR(0x6d3274);
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
B6d3276:{NFSU2_TR(0x6d3276);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d3278:L6d3278:{c.instructions+=6;NFSU2_TR(0x6d3278);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d327b:{NFSU2_TR(0x6d327b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d327d:{NFSU2_TR(0x6d327d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3280:{NFSU2_TR(0x6d3280);
__builtin_memmove((R+4),(R+24),4);
}
B6d3282:{NFSU2_TR(0x6d3282);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3285:{NFSU2_TR(0x6d3285);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3288ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3288:L6d3288:{c.instructions+=2;NFSU2_TR(0x6d3288);
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
B6d328a:{NFSU2_TR(0x6d328a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d328c:L6d328c:{c.instructions+=3;NFSU2_TR(0x6d328c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d328e:{NFSU2_TR(0x6d328e);
__builtin_memmove((R+4),(R+24),4);
}
B6d3290:{NFSU2_TR(0x6d3290);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3293ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3293:L6d3293:{c.instructions+=2;NFSU2_TR(0x6d3293);
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
B6d3295:{NFSU2_TR(0x6d3295);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d3297:L6d3297:{c.instructions+=2;NFSU2_TR(0x6d3297);
__builtin_memmove((R+4),(R+24),4);
}
B6d3299:{NFSU2_TR(0x6d3299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d329eull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d329e:L6d329e:{c.instructions+=2;NFSU2_TR(0x6d329e);
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
B6d32a0:{NFSU2_TR(0x6d32a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d32a4;}}
}
B6d32a2:L6d32a2:{c.instructions+=1;NFSU2_TR(0x6d32a2);
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
B6d32a4:L6d32a4:{c.instructions+=5;NFSU2_TR(0x6d32a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d32a5:{NFSU2_TR(0x6d32a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d32a6:{NFSU2_TR(0x6d32a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d32a7:{NFSU2_TR(0x6d32a7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d32a8:{NFSU2_TR(0x6d32a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d32a9:L6d32a9:{c.instructions+=20;NFSU2_TR(0x6d32a9);
__builtin_memmove((R+28),(R+28),4);
}
B6d32ab:{NFSU2_TR(0x6d32ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32ac:{NFSU2_TR(0x6d32ac);
__builtin_memmove((R+20),(R+16),4);
}
B6d32ae:{NFSU2_TR(0x6d32ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6d32b1:{NFSU2_TR(0x6d32b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32b2:{NFSU2_TR(0x6d32b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32b3:{NFSU2_TR(0x6d32b3);
__builtin_memmove((R+24),(R+4),4);
}
B6d32b5:{NFSU2_TR(0x6d32b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d32bb:{NFSU2_TR(0x6d32bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d32be:{NFSU2_TR(0x6d32be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d32c1:{NFSU2_TR(0x6d32c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d32c4:{NFSU2_TR(0x6d32c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32c5:{NFSU2_TR(0x6d32c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d32c7:{NFSU2_TR(0x6d32c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d32ca:{NFSU2_TR(0x6d32ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d32cd:{NFSU2_TR(0x6d32cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32ce:{NFSU2_TR(0x6d32ce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d32d0:{NFSU2_TR(0x6d32d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32d1:{NFSU2_TR(0x6d32d1);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6d32d7:{NFSU2_TR(0x6d32d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d32dcull));
TAIL_STATIC(0x698ed2u,698);
}
B6d32dc:L6d32dc:{c.instructions+=5;NFSU2_TR(0x6d32dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d32e2:{NFSU2_TR(0x6d32e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d32e5:{NFSU2_TR(0x6d32e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32e6:{NFSU2_TR(0x6d32e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32e8:{NFSU2_TR(0x6d32e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d32edull));
TAIL_STATIC(0x698ed2u,698);
}
B6d32ed:L6d32ed:{c.instructions+=5;NFSU2_TR(0x6d32ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d32f3:{NFSU2_TR(0x6d32f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d32f6:{NFSU2_TR(0x6d32f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32f7:{NFSU2_TR(0x6d32f7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d32f9:{NFSU2_TR(0x6d32f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d32feull));
TAIL_STATIC(0x698ed2u,698);
}
B6d32fe:L6d32fe:{c.instructions+=3;NFSU2_TR(0x6d32fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3301:{NFSU2_TR(0x6d3301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3304:{NFSU2_TR(0x6d3304);
if(r1(R+518)){{goto L6d335b;}}
}
B6d3306:L6d3306:{c.instructions+=1;NFSU2_TR(0x6d3306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3309:L6d3309:{c.instructions+=2;NFSU2_TR(0x6d3309);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d330c:{NFSU2_TR(0x6d330c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d335b;}}
}
B6d330e:L6d330e:{c.instructions+=4;NFSU2_TR(0x6d330e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3311:{NFSU2_TR(0x6d3311);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6d3315:{NFSU2_TR(0x6d3315);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d3317:{NFSU2_TR(0x6d3317);
if(r1(R+518)){{goto L6d3352;}}
}
B6d3319:L6d3319:{c.instructions+=3;NFSU2_TR(0x6d3319);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d331b:{NFSU2_TR(0x6d331b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d331e:{NFSU2_TR(0x6d331e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d3352;}}
}
B6d3320:L6d3320:{c.instructions+=3;NFSU2_TR(0x6d3320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3323:{NFSU2_TR(0x6d3323);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d3325:{NFSU2_TR(0x6d3325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3328:L6d3328:{c.instructions+=5;NFSU2_TR(0x6d3328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d332b:{NFSU2_TR(0x6d332b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d332d:{NFSU2_TR(0x6d332d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d3330:{NFSU2_TR(0x6d3330);
u8 U[14];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B6d3335:{NFSU2_TR(0x6d3335);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d334b;}}
}
B6d3337:L6d3337:{c.instructions+=5;NFSU2_TR(0x6d3337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d333a:{NFSU2_TR(0x6d333a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d333e:{NFSU2_TR(0x6d333e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B6d3344:{NFSU2_TR(0x6d3344);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6d3347:{NFSU2_TR(0x6d3347);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3328u);}goto L6d3328;}}
}
B6d3349:L6d3349:{c.instructions+=1;NFSU2_TR(0x6d3349);
{goto L6d3352;}
}
B6d334b:L6d334b:{c.instructions+=1;NFSU2_TR(0x6d334b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3352:L6d3352:{c.instructions+=3;NFSU2_TR(0x6d3352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3355:{NFSU2_TR(0x6d3355);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B6d3359:{NFSU2_TR(0x6d3359);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3309u);}goto L6d3309;}}
}
B6d335b:L6d335b:{c.instructions+=13;NFSU2_TR(0x6d335b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d335e:{NFSU2_TR(0x6d335e);
__builtin_memmove((R+4),(R+24),4);
}
B6d3360:{NFSU2_TR(0x6d3360);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3361:{NFSU2_TR(0x6d3361);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3362:{NFSU2_TR(0x6d3362);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3363:{NFSU2_TR(0x6d3363);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3364:{NFSU2_TR(0x6d3364);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3367:{NFSU2_TR(0x6d3367);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d336a:{NFSU2_TR(0x6d336a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d336d:{NFSU2_TR(0x6d336d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3370:{NFSU2_TR(0x6d3370);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3373:{NFSU2_TR(0x6d3373);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3376:{NFSU2_TR(0x6d3376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d337bull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d337b:L6d337b:{c.instructions+=5;NFSU2_TR(0x6d337b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d337c:{NFSU2_TR(0x6d337c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d337d:{NFSU2_TR(0x6d337d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d337e:{NFSU2_TR(0x6d337e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d337f:{NFSU2_TR(0x6d337f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3382:L6d3382:{c.instructions+=9;NFSU2_TR(0x6d3382);
__builtin_memmove((R+28),(R+28),4);
}
B6d3384:{NFSU2_TR(0x6d3384);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3385:{NFSU2_TR(0x6d3385);
__builtin_memmove((R+20),(R+16),4);
}
B6d3387:{NFSU2_TR(0x6d3387);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6d338a:{NFSU2_TR(0x6d338a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d338d:{NFSU2_TR(0x6d338d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3390:{NFSU2_TR(0x6d3390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3391:{NFSU2_TR(0x6d3391);
__builtin_memmove((R+24),(R+4),4);
}
B6d3393:{NFSU2_TR(0x6d3393);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d33bd;}}
}
B6d3395:L6d3395:{c.instructions+=2;NFSU2_TR(0x6d3395);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d3398:{NFSU2_TR(0x6d3398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d33bd;}}
}
B6d339a:L6d339a:{c.instructions+=6;NFSU2_TR(0x6d339a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d33a0:{NFSU2_TR(0x6d33a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d33a3:{NFSU2_TR(0x6d33a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d33a5:{NFSU2_TR(0x6d33a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d33a8:{NFSU2_TR(0x6d33a8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6d33aa:{NFSU2_TR(0x6d33aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d33bd;}}
}
B6d33ac:L6d33ac:{c.instructions+=4;NFSU2_TR(0x6d33ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d33ae:{NFSU2_TR(0x6d33ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d33b1:{NFSU2_TR(0x6d33b1);
__builtin_memmove((R+4),(R+24),4);
}
B6d33b3:{NFSU2_TR(0x6d33b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d33b8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d33b8:L6d33b8:{c.instructions+=1;NFSU2_TR(0x6d33b8);
{goto L6d357c;}
}
B6d33bd:L6d33bd:{c.instructions+=14;NFSU2_TR(0x6d33bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d33c0:{NFSU2_TR(0x6d33c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d33c2:{NFSU2_TR(0x6d33c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d33c5:{NFSU2_TR(0x6d33c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d33c6:{NFSU2_TR(0x6d33c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d33c9:{NFSU2_TR(0x6d33c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d33cb:{NFSU2_TR(0x6d33cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6d33ce:{NFSU2_TR(0x6d33ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d33d1:{NFSU2_TR(0x6d33d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d33d2:{NFSU2_TR(0x6d33d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d33d5:{NFSU2_TR(0x6d33d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d33d8:{NFSU2_TR(0x6d33d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d33db:{NFSU2_TR(0x6d33db);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d33de:{NFSU2_TR(0x6d33de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3402;}}
}
B6d33e0:L6d33e0:{c.instructions+=6;NFSU2_TR(0x6d33e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d33e3:{NFSU2_TR(0x6d33e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d33e6:{NFSU2_TR(0x6d33e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d33e9:{NFSU2_TR(0x6d33e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d33ec:{NFSU2_TR(0x6d33ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d33ef:{NFSU2_TR(0x6d33ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3402;}}
}
B6d33f1:L6d33f1:{c.instructions+=6;NFSU2_TR(0x6d33f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d33f4:{NFSU2_TR(0x6d33f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d33f7:{NFSU2_TR(0x6d33f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d33fa:{NFSU2_TR(0x6d33fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d33fd:{NFSU2_TR(0x6d33fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3400:{NFSU2_TR(0x6d3400);
if(r1(R+518)){{goto L6d340b;}}
}
B6d3402:L6d3402:{c.instructions+=2;NFSU2_TR(0x6d3402);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3406:{NFSU2_TR(0x6d3406);
{goto L6d34ce;}
}
B6d340b:L6d340b:{c.instructions+=3;NFSU2_TR(0x6d340b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d340d:{NFSU2_TR(0x6d340d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d3410:{NFSU2_TR(0x6d3410);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d344d;}}
}
B6d3412:L6d3412:{c.instructions+=3;NFSU2_TR(0x6d3412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3416:{NFSU2_TR(0x6d3416);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d3418:{NFSU2_TR(0x6d3418);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d3444;}}
}
B6d341a:L6d341a:{c.instructions+=5;NFSU2_TR(0x6d341a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d341d:{NFSU2_TR(0x6d341d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d3420:{NFSU2_TR(0x6d3420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3423:{NFSU2_TR(0x6d3423);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d3426:{NFSU2_TR(0x6d3426);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3429:L6d3429:{c.instructions+=5;NFSU2_TR(0x6d3429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d342c:{NFSU2_TR(0x6d342c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d342f:{NFSU2_TR(0x6d342f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d3432:{NFSU2_TR(0x6d3432);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3435:{NFSU2_TR(0x6d3435);
if(r1(R+518)){{goto L6d343f;}}
}
B6d3437:L6d3437:{c.instructions+=3;NFSU2_TR(0x6d3437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d343a:{NFSU2_TR(0x6d343a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6d343d:{NFSU2_TR(0x6d343d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3429u);}goto L6d3429;}}
}
B6d343f:L6d343f:{c.instructions+=2;NFSU2_TR(0x6d343f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6d3442:{NFSU2_TR(0x6d3442);
if(r1(R+512)){{goto L6d344a;}}
}
B6d3444:L6d3444:{c.instructions+=3;NFSU2_TR(0x6d3444);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d3445:{NFSU2_TR(0x6d3445);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d3448:{NFSU2_TR(0x6d3448);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3412u);}goto L6d3412;}}
}
B6d344a:L6d344a:{c.instructions+=1;NFSU2_TR(0x6d344a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d344d:L6d344d:{c.instructions+=4;NFSU2_TR(0x6d344d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d344f:{NFSU2_TR(0x6d344f);
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d3451:{NFSU2_TR(0x6d3451);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3454:{NFSU2_TR(0x6d3454);
if(r1(R+518)){{goto L6d34ce;}}
}
B6d3456:L6d3456:{c.instructions+=4;NFSU2_TR(0x6d3456);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d3458:{NFSU2_TR(0x6d3458);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d345a:{NFSU2_TR(0x6d345a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B6d345d:{NFSU2_TR(0x6d345d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d3478;}}
}
B6d345f:L6d345f:{c.instructions+=1;NFSU2_TR(0x6d345f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3462:L6d3462:{c.instructions+=5;NFSU2_TR(0x6d3462);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d3465:{NFSU2_TR(0x6d3465);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d3468:{NFSU2_TR(0x6d3468);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d346b:{NFSU2_TR(0x6d346b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d346d:{NFSU2_TR(0x6d346d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d3472;}}
}
B6d346f:L6d346f:{c.instructions+=1;NFSU2_TR(0x6d346f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d3472:L6d3472:{c.instructions+=3;NFSU2_TR(0x6d3472);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d3473:{NFSU2_TR(0x6d3473);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B6d3476:{NFSU2_TR(0x6d3476);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3462u);}goto L6d3462;}}
}
B6d3478:L6d3478:{c.instructions+=9;NFSU2_TR(0x6d3478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d347a:{NFSU2_TR(0x6d347a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d347c:{NFSU2_TR(0x6d347c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d347e:{NFSU2_TR(0x6d347e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d347f:{NFSU2_TR(0x6d347f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3482:{NFSU2_TR(0x6d3482);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3483:{NFSU2_TR(0x6d3483);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3489:{NFSU2_TR(0x6d3489);
__builtin_memmove((R+4),(R+24),4);
}
B6d348b:{NFSU2_TR(0x6d348b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3491ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3491:L6d3491:{c.instructions+=3;NFSU2_TR(0x6d3491);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d3493:{NFSU2_TR(0x6d3493);
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
B6d3495:{NFSU2_TR(0x6d3495);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d357a;}}
}
B6d349b:L6d349b:{c.instructions+=2;NFSU2_TR(0x6d349b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d349e:{NFSU2_TR(0x6d349e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d34c5;}}
}
B6d34a0:L6d34a0:{c.instructions+=4;NFSU2_TR(0x6d34a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d34a3:{NFSU2_TR(0x6d34a3);
__builtin_memmove((R+8),(R+12),4);
}
B6d34a5:{NFSU2_TR(0x6d34a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d34a8:{NFSU2_TR(0x6d34a8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6d34aa:L6d34aa:{c.instructions+=9;NFSU2_TR(0x6d34aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6d34ad:{NFSU2_TR(0x6d34ad);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6d34b1:{NFSU2_TR(0x6d34b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d34b4:{NFSU2_TR(0x6d34b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d34b7:{NFSU2_TR(0x6d34b7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6d34bb:{NFSU2_TR(0x6d34bb);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d34bf:{NFSU2_TR(0x6d34bf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d34c0:{NFSU2_TR(0x6d34c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d34c3:{NFSU2_TR(0x6d34c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d34aau);}goto L6d34aa;}}
}
B6d34c5:L6d34c5:{c.instructions+=3;NFSU2_TR(0x6d34c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d34c8:{NFSU2_TR(0x6d34c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d34cb:{NFSU2_TR(0x6d34cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d34ce:L6d34ce:{c.instructions+=3;NFSU2_TR(0x6d34ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d34d0:{NFSU2_TR(0x6d34d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d34d3:{NFSU2_TR(0x6d34d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d3554;}}
}
B6d34d5:L6d34d5:{c.instructions+=4;NFSU2_TR(0x6d34d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d34d8:{NFSU2_TR(0x6d34d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6d34db:{NFSU2_TR(0x6d34db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d34e2:{NFSU2_TR(0x6d34e2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d351f;}}
}
B6d34e4:L6d34e4:{c.instructions+=9;NFSU2_TR(0x6d34e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d34e7:{NFSU2_TR(0x6d34e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d34ea:{NFSU2_TR(0x6d34ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d34ec:{NFSU2_TR(0x6d34ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d34ef:{NFSU2_TR(0x6d34ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6d34f2:{NFSU2_TR(0x6d34f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d34f5:{NFSU2_TR(0x6d34f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d34f8:{NFSU2_TR(0x6d34f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d34fb:{NFSU2_TR(0x6d34fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6d34fe:L6d34fe:{c.instructions+=5;NFSU2_TR(0x6d34fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d3500:{NFSU2_TR(0x6d3500);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d3503:{NFSU2_TR(0x6d3503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d3506:{NFSU2_TR(0x6d3506);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3509:{NFSU2_TR(0x6d3509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d351c;}}
}
B6d350b:L6d350b:{c.instructions+=6;NFSU2_TR(0x6d350b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d350e:{NFSU2_TR(0x6d350e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3511:{NFSU2_TR(0x6d3511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3514:{NFSU2_TR(0x6d3514);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6d3517:{NFSU2_TR(0x6d3517);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6d351a:{NFSU2_TR(0x6d351a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d34feu);}goto L6d34fe;}}
}
B6d351c:L6d351c:{c.instructions+=1;NFSU2_TR(0x6d351c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d351f:L6d351f:{c.instructions+=17;NFSU2_TR(0x6d351f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d3521:{NFSU2_TR(0x6d3521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3522:{NFSU2_TR(0x6d3522);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3525:{NFSU2_TR(0x6d3525);
__builtin_memmove((R+4),(R+24),4);
}
B6d3527:{NFSU2_TR(0x6d3527);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d352a:{NFSU2_TR(0x6d352a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d352d:{NFSU2_TR(0x6d352d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3530:{NFSU2_TR(0x6d3530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3531:{NFSU2_TR(0x6d3531);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3532:{NFSU2_TR(0x6d3532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3535:{NFSU2_TR(0x6d3535);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d3538:{NFSU2_TR(0x6d3538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3539:{NFSU2_TR(0x6d3539);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d353c:{NFSU2_TR(0x6d353c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d353f:{NFSU2_TR(0x6d353f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3540:{NFSU2_TR(0x6d3540);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3543:{NFSU2_TR(0x6d3543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3548ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d3548:L6d3548:{c.instructions+=2;NFSU2_TR(0x6d3548);
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
B6d354a:{NFSU2_TR(0x6d354a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d357a;}}
}
B6d354c:L6d354c:{c.instructions+=3;NFSU2_TR(0x6d354c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6d354f:{NFSU2_TR(0x6d354f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6d3552:{NFSU2_TR(0x6d3552);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d34d5u);}goto L6d34d5;}}
}
B6d3554:L6d3554:{c.instructions+=3;NFSU2_TR(0x6d3554);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d3556:{NFSU2_TR(0x6d3556);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3559:{NFSU2_TR(0x6d3559);
if(r1(R+518)){{goto L6d3578;}}
}
B6d355b:L6d355b:{c.instructions+=13;NFSU2_TR(0x6d355b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d355c:{NFSU2_TR(0x6d355c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d355d:{NFSU2_TR(0x6d355d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d355e:{NFSU2_TR(0x6d355e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d355f:{NFSU2_TR(0x6d355f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3562:{NFSU2_TR(0x6d3562);
__builtin_memmove((R+4),(R+24),4);
}
B6d3564:{NFSU2_TR(0x6d3564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3565:{NFSU2_TR(0x6d3565);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3566:{NFSU2_TR(0x6d3566);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3567:{NFSU2_TR(0x6d3567);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d356a:{NFSU2_TR(0x6d356a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d356d:{NFSU2_TR(0x6d356d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d356f:{NFSU2_TR(0x6d356f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3574ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d3574:L6d3574:{c.instructions+=2;NFSU2_TR(0x6d3574);
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
B6d3576:{NFSU2_TR(0x6d3576);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d357a;}}
}
B6d3578:L6d3578:{c.instructions+=1;NFSU2_TR(0x6d3578);
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
B6d357a:L6d357a:{c.instructions+=2;NFSU2_TR(0x6d357a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d357b:{NFSU2_TR(0x6d357b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d357c:L6d357c:{c.instructions+=3;NFSU2_TR(0x6d357c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d357d:{NFSU2_TR(0x6d357d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d357e:{NFSU2_TR(0x6d357e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3581:L6d3581:{c.instructions+=9;NFSU2_TR(0x6d3581);
__builtin_memmove((R+28),(R+28),4);
}
B6d3583:{NFSU2_TR(0x6d3583);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3584:{NFSU2_TR(0x6d3584);
__builtin_memmove((R+20),(R+16),4);
}
B6d3586:{NFSU2_TR(0x6d3586);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3587:{NFSU2_TR(0x6d3587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3588:{NFSU2_TR(0x6d3588);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3589:{NFSU2_TR(0x6d3589);
u8 U[4];
w4(U+0,u32(0x26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d358b:{NFSU2_TR(0x6d358b);
__builtin_memmove((R+24),(R+4),4);
}
B6d358d:{NFSU2_TR(0x6d358d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3592ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d3592:L6d3592:{c.instructions+=2;NFSU2_TR(0x6d3592);
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
B6d3594:{NFSU2_TR(0x6d3594);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d35e8;}}
}
B6d3596:L6d3596:{c.instructions+=12;NFSU2_TR(0x6d3596);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3599:{NFSU2_TR(0x6d3599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d359b:{NFSU2_TR(0x6d359b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d359e:{NFSU2_TR(0x6d359e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d359f:{NFSU2_TR(0x6d359f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d35a2:{NFSU2_TR(0x6d35a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35a3:{NFSU2_TR(0x6d35a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d35a9:{NFSU2_TR(0x6d35a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d35ac:{NFSU2_TR(0x6d35ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d35ae:{NFSU2_TR(0x6d35ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d35b1:{NFSU2_TR(0x6d35b1);
__builtin_memmove((R+4),(R+24),4);
}
B6d35b3:{NFSU2_TR(0x6d35b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d35b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d35b6:L6d35b6:{c.instructions+=2;NFSU2_TR(0x6d35b6);
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
B6d35b8:{NFSU2_TR(0x6d35b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d35e8;}}
}
B6d35ba:L6d35ba:{c.instructions+=6;NFSU2_TR(0x6d35ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d35bd:{NFSU2_TR(0x6d35bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d35bf:{NFSU2_TR(0x6d35bf);
u8 U[4];
w4(U+0,u32(0xe40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35c4:{NFSU2_TR(0x6d35c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d35c7:{NFSU2_TR(0x6d35c7);
__builtin_memmove((R+4),(R+24),4);
}
B6d35c9:{NFSU2_TR(0x6d35c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d35ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d35cc:L6d35cc:{c.instructions+=2;NFSU2_TR(0x6d35cc);
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
B6d35ce:{NFSU2_TR(0x6d35ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d35e8;}}
}
B6d35d0:L6d35d0:{c.instructions+=3;NFSU2_TR(0x6d35d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d35d2:{NFSU2_TR(0x6d35d2);
__builtin_memmove((R+4),(R+24),4);
}
B6d35d4:{NFSU2_TR(0x6d35d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d35d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d35d7:L6d35d7:{c.instructions+=2;NFSU2_TR(0x6d35d7);
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
B6d35d9:{NFSU2_TR(0x6d35d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d35e8;}}
}
B6d35db:L6d35db:{c.instructions+=2;NFSU2_TR(0x6d35db);
__builtin_memmove((R+4),(R+24),4);
}
B6d35dd:{NFSU2_TR(0x6d35dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d35e2ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d35e2:L6d35e2:{c.instructions+=2;NFSU2_TR(0x6d35e2);
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
B6d35e4:{NFSU2_TR(0x6d35e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d35e8;}}
}
B6d35e6:L6d35e6:{c.instructions+=1;NFSU2_TR(0x6d35e6);
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
B6d35e8:L6d35e8:{c.instructions+=3;NFSU2_TR(0x6d35e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d35e9:{NFSU2_TR(0x6d35e9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d35ea:{NFSU2_TR(0x6d35ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d35eb:L6d35eb:{c.instructions+=9;NFSU2_TR(0x6d35eb);
__builtin_memmove((R+28),(R+28),4);
}
B6d35ed:{NFSU2_TR(0x6d35ed);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35ee:{NFSU2_TR(0x6d35ee);
__builtin_memmove((R+20),(R+16),4);
}
B6d35f0:{NFSU2_TR(0x6d35f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35f1:{NFSU2_TR(0x6d35f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35f2:{NFSU2_TR(0x6d35f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35f3:{NFSU2_TR(0x6d35f3);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d35f5:{NFSU2_TR(0x6d35f5);
__builtin_memmove((R+24),(R+4),4);
}
B6d35f7:{NFSU2_TR(0x6d35f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d35fcull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6d35fc:L6d35fc:{c.instructions+=2;NFSU2_TR(0x6d35fc);
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
B6d35fe:{NFSU2_TR(0x6d35fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d366c;}}
}
B6d3600:L6d3600:{c.instructions+=9;NFSU2_TR(0x6d3600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3602:{NFSU2_TR(0x6d3602);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6d3606:{NFSU2_TR(0x6d3606);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3607:{NFSU2_TR(0x6d3607);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3609:{NFSU2_TR(0x6d3609);
w4(R+28,u32(0xe40000ull));
}
B6d360e:{NFSU2_TR(0x6d360e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d360f:{NFSU2_TR(0x6d360f);
u8 U[4];
w4(U+0,u32(0xf0000800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3614:{NFSU2_TR(0x6d3614);
__builtin_memmove((R+4),(R+24),4);
}
B6d3616:{NFSU2_TR(0x6d3616);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3619ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d3619:L6d3619:{c.instructions+=2;NFSU2_TR(0x6d3619);
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
B6d361b:{NFSU2_TR(0x6d361b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d366b;}}
}
B6d361d:L6d361d:{c.instructions+=12;NFSU2_TR(0x6d361d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3620:{NFSU2_TR(0x6d3620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3622:{NFSU2_TR(0x6d3622);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3625:{NFSU2_TR(0x6d3625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3626:{NFSU2_TR(0x6d3626);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3629:{NFSU2_TR(0x6d3629);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d362a:{NFSU2_TR(0x6d362a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3630:{NFSU2_TR(0x6d3630);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d3633:{NFSU2_TR(0x6d3633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d3635:{NFSU2_TR(0x6d3635);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6d3638:{NFSU2_TR(0x6d3638);
__builtin_memmove((R+4),(R+24),4);
}
B6d363a:{NFSU2_TR(0x6d363a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d363dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d363d:L6d363d:{c.instructions+=2;NFSU2_TR(0x6d363d);
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
B6d363f:{NFSU2_TR(0x6d363f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d366b;}}
}
B6d3641:L6d3641:{c.instructions+=6;NFSU2_TR(0x6d3641);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3644:{NFSU2_TR(0x6d3644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3646:{NFSU2_TR(0x6d3646);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3647:{NFSU2_TR(0x6d3647);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d364a:{NFSU2_TR(0x6d364a);
__builtin_memmove((R+4),(R+24),4);
}
B6d364c:{NFSU2_TR(0x6d364c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d364full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d364f:L6d364f:{c.instructions+=2;NFSU2_TR(0x6d364f);
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
B6d3651:{NFSU2_TR(0x6d3651);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d366b;}}
}
B6d3653:L6d3653:{c.instructions+=3;NFSU2_TR(0x6d3653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3655:{NFSU2_TR(0x6d3655);
__builtin_memmove((R+4),(R+24),4);
}
B6d3657:{NFSU2_TR(0x6d3657);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d365aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d365a:L6d365a:{c.instructions+=2;NFSU2_TR(0x6d365a);
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
B6d365c:{NFSU2_TR(0x6d365c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d366b;}}
}
B6d365e:L6d365e:{c.instructions+=2;NFSU2_TR(0x6d365e);
__builtin_memmove((R+4),(R+24),4);
}
B6d3660:{NFSU2_TR(0x6d3660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3665ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6d3665:L6d3665:{c.instructions+=2;NFSU2_TR(0x6d3665);
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
B6d3667:{NFSU2_TR(0x6d3667);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d366b;}}
}
B6d3669:L6d3669:{c.instructions+=1;NFSU2_TR(0x6d3669);
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
B6d366b:L6d366b:{c.instructions+=1;NFSU2_TR(0x6d366b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d366c:L6d366c:{c.instructions+=3;NFSU2_TR(0x6d366c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d366d:{NFSU2_TR(0x6d366d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d366e:{NFSU2_TR(0x6d366e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d366f:L6d366f:{c.instructions+=13;NFSU2_TR(0x6d366f);
__builtin_memmove((R+28),(R+28),4);
}
B6d3671:{NFSU2_TR(0x6d3671);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3672:{NFSU2_TR(0x6d3672);
__builtin_memmove((R+20),(R+16),4);
}
B6d3674:{NFSU2_TR(0x6d3674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6d3677:{NFSU2_TR(0x6d3677);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d367d:{NFSU2_TR(0x6d367d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3680:{NFSU2_TR(0x6d3680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d3682:{NFSU2_TR(0x6d3682);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3683:{NFSU2_TR(0x6d3683);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d3686:{NFSU2_TR(0x6d3686);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d3689:{NFSU2_TR(0x6d3689);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d368f:{NFSU2_TR(0x6d368f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3692:{NFSU2_TR(0x6d3692);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d36a2;}}
}
B6d3694:L6d3694:{c.instructions+=3;NFSU2_TR(0x6d3694);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3696:{NFSU2_TR(0x6d3696);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3698:{NFSU2_TR(0x6d3698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d369dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d369d:L6d369d:{c.instructions+=1;NFSU2_TR(0x6d369d);
{goto L6d37a5;}
}
B6d36a2:L6d36a2:{c.instructions+=4;NFSU2_TR(0x6d36a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d36a6:{NFSU2_TR(0x6d36a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d36a7:{NFSU2_TR(0x6d36a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d36a8:{NFSU2_TR(0x6d36a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3733;}}
}
B6d36ae:L6d36ae:{c.instructions+=5;NFSU2_TR(0x6d36ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d36b1:{NFSU2_TR(0x6d36b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d36b5:{NFSU2_TR(0x6d36b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d36b7:{NFSU2_TR(0x6d36b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d36ba:{NFSU2_TR(0x6d36ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d36bc:L6d36bc:{c.instructions+=8;NFSU2_TR(0x6d36bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d36c2:{NFSU2_TR(0x6d36c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d36c5:{NFSU2_TR(0x6d36c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d36c8:{NFSU2_TR(0x6d36c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d36cb:{NFSU2_TR(0x6d36cb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d36cd:{NFSU2_TR(0x6d36cd);
__builtin_memmove((R+28),(R+8),4);
}
B6d36cf:{NFSU2_TR(0x6d36cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d36d2:{NFSU2_TR(0x6d36d2);
{goto L6d36d7;}
}
B6d36d4:L6d36d4:{c.instructions+=1;NFSU2_TR(0x6d36d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d36d7:L6d36d7:{c.instructions+=7;NFSU2_TR(0x6d36d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d36da:{NFSU2_TR(0x6d36da);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d36dd:{NFSU2_TR(0x6d36dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d36df:{NFSU2_TR(0x6d36df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d36e2:{NFSU2_TR(0x6d36e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d36e5:{NFSU2_TR(0x6d36e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d36e8:{NFSU2_TR(0x6d36e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d36ea:L6d36ea:{c.instructions+=3;NFSU2_TR(0x6d36ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d36ed:{NFSU2_TR(0x6d36ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d36f0:{NFSU2_TR(0x6d36f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d36f2:L6d36f2:{c.instructions+=3;NFSU2_TR(0x6d36f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d36f5:{NFSU2_TR(0x6d36f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d36f8:{NFSU2_TR(0x6d36f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d36fa:L6d36fa:{c.instructions+=3;NFSU2_TR(0x6d36fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d36fd:{NFSU2_TR(0x6d36fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3700:{NFSU2_TR(0x6d3700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d3702:L6d3702:{c.instructions+=3;NFSU2_TR(0x6d3702);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d3705:{NFSU2_TR(0x6d3705);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3708:{NFSU2_TR(0x6d3708);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d370a:L6d370a:{c.instructions+=2;NFSU2_TR(0x6d370a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d3711:{NFSU2_TR(0x6d3711);
if(r1(R+518)){{goto L6d3719;}}
}
B6d3713:L6d3713:{c.instructions+=2;NFSU2_TR(0x6d3713);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3717:{NFSU2_TR(0x6d3717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3727;}}
}
B6d3719:L6d3719:{c.instructions+=5;NFSU2_TR(0x6d3719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d371c:{NFSU2_TR(0x6d371c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d371f:{NFSU2_TR(0x6d371f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d3722:{NFSU2_TR(0x6d3722);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d3725:{NFSU2_TR(0x6d3725);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d36d4u);}goto L6d36d4;}}
}
B6d3727:L6d3727:{c.instructions+=3;NFSU2_TR(0x6d3727);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d372a:{NFSU2_TR(0x6d372a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d372d:{NFSU2_TR(0x6d372d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3733;}}
}
B6d372f:L6d372f:{c.instructions+=2;NFSU2_TR(0x6d372f);
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
B6d3731:{NFSU2_TR(0x6d3731);
{goto L6d37a3;}
}
B6d3733:L6d3733:{c.instructions+=4;NFSU2_TR(0x6d3733);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3739:{NFSU2_TR(0x6d3739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d373d:{NFSU2_TR(0x6d373d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d3741:{NFSU2_TR(0x6d3741);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d3783;}}
}
B6d3743:L6d3743:{c.instructions+=1;NFSU2_TR(0x6d3743);
w4(R+28,u32(0xe000000ull));
}
B6d3748:L6d3748:{c.instructions+=8;NFSU2_TR(0x6d3748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d374e:{NFSU2_TR(0x6d374e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d3751:{NFSU2_TR(0x6d3751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d3754:{NFSU2_TR(0x6d3754);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3757:{NFSU2_TR(0x6d3757);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d375a:{NFSU2_TR(0x6d375a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d375d:{NFSU2_TR(0x6d375d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d375f:{NFSU2_TR(0x6d375f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d3772;}}
}
B6d3761:L6d3761:{c.instructions+=7;NFSU2_TR(0x6d3761);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3764:{NFSU2_TR(0x6d3764);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d3767:{NFSU2_TR(0x6d3767);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d376a:{NFSU2_TR(0x6d376a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d376c:{NFSU2_TR(0x6d376c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B6d376e:{NFSU2_TR(0x6d376e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+0))));
}
B6d3770:{NFSU2_TR(0x6d3770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d3772:L6d3772:{c.instructions+=5;NFSU2_TR(0x6d3772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d3775:{NFSU2_TR(0x6d3775);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d377b:{NFSU2_TR(0x6d377b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d377e:{NFSU2_TR(0x6d377e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6d3781:{NFSU2_TR(0x6d3781);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3748u);}goto L6d3748;}}
}
B6d3783:L6d3783:{c.instructions+=15;NFSU2_TR(0x6d3783);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3789:{NFSU2_TR(0x6d3789);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d378c:{NFSU2_TR(0x6d378c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d378e:{NFSU2_TR(0x6d378e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d378f:{NFSU2_TR(0x6d378f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3790:{NFSU2_TR(0x6d3790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3791:{NFSU2_TR(0x6d3791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3792:{NFSU2_TR(0x6d3792);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3793:{NFSU2_TR(0x6d3793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3794:{NFSU2_TR(0x6d3794);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3795:{NFSU2_TR(0x6d3795);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3798:{NFSU2_TR(0x6d3798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3799:{NFSU2_TR(0x6d3799);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d379c:{NFSU2_TR(0x6d379c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d379e:{NFSU2_TR(0x6d379e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d37a3ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d37a3:L6d37a3:{c.instructions+=2;NFSU2_TR(0x6d37a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d37a4:{NFSU2_TR(0x6d37a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d37a5:L6d37a5:{c.instructions+=3;NFSU2_TR(0x6d37a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d37a6:{NFSU2_TR(0x6d37a6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d37a7:{NFSU2_TR(0x6d37a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d37a8:L6d37a8:{c.instructions+=3;NFSU2_TR(0x6d37a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37aa:{NFSU2_TR(0x6d37aa);
u8 U[4];
w4(U+0,u32(0x5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37ac:{NFSU2_TR(0x6d37ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d37b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d37b1:L6d37b1:{c.instructions+=1;NFSU2_TR(0x6d37b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d37b2:L6d37b2:{c.instructions+=3;NFSU2_TR(0x6d37b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37b4:{NFSU2_TR(0x6d37b4);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37b6:{NFSU2_TR(0x6d37b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d37bbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d37bb:L6d37bb:{c.instructions+=1;NFSU2_TR(0x6d37bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d37bc:L6d37bc:{c.instructions+=9;NFSU2_TR(0x6d37bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d37c2:{NFSU2_TR(0x6d37c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37c4:{NFSU2_TR(0x6d37c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37c6:{NFSU2_TR(0x6d37c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37c9:{NFSU2_TR(0x6d37c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37cc:{NFSU2_TR(0x6d37cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37cf:{NFSU2_TR(0x6d37cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37d2:{NFSU2_TR(0x6d37d2);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37d4:{NFSU2_TR(0x6d37d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d37d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3382u);}goto L6d3382;}
}
B6d37d9:L6d37d9:{c.instructions+=1;NFSU2_TR(0x6d37d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d37da:L6d37da:{c.instructions+=3;NFSU2_TR(0x6d37da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37dc:{NFSU2_TR(0x6d37dc);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37de:{NFSU2_TR(0x6d37de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d37e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d37e3:L6d37e3:{c.instructions+=1;NFSU2_TR(0x6d37e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d37e4:L6d37e4:{c.instructions+=9;NFSU2_TR(0x6d37e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d37ea:{NFSU2_TR(0x6d37ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37ec:{NFSU2_TR(0x6d37ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37ee:{NFSU2_TR(0x6d37ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37f1:{NFSU2_TR(0x6d37f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37f4:{NFSU2_TR(0x6d37f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37f7:{NFSU2_TR(0x6d37f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d37fa:{NFSU2_TR(0x6d37fa);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d37fc:{NFSU2_TR(0x6d37fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3801ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3382u);}goto L6d3382;}
}
B6d3801:L6d3801:{c.instructions+=1;NFSU2_TR(0x6d3801);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3802:L6d3802:{c.instructions+=9;NFSU2_TR(0x6d3802);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3808:{NFSU2_TR(0x6d3808);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d380a:{NFSU2_TR(0x6d380a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d380c:{NFSU2_TR(0x6d380c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d380f:{NFSU2_TR(0x6d380f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3812:{NFSU2_TR(0x6d3812);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3815:{NFSU2_TR(0x6d3815);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3818:{NFSU2_TR(0x6d3818);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d381a:{NFSU2_TR(0x6d381a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d381full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3382u);}goto L6d3382;}
}
B6d381f:L6d381f:{c.instructions+=1;NFSU2_TR(0x6d381f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3820:L6d3820:{c.instructions+=9;NFSU2_TR(0x6d3820);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3826:{NFSU2_TR(0x6d3826);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3828:{NFSU2_TR(0x6d3828);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d382a:{NFSU2_TR(0x6d382a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d382d:{NFSU2_TR(0x6d382d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3830:{NFSU2_TR(0x6d3830);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3833:{NFSU2_TR(0x6d3833);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3836:{NFSU2_TR(0x6d3836);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3838:{NFSU2_TR(0x6d3838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d383dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d3382u);}goto L6d3382;}
}
B6d383d:L6d383d:{c.instructions+=1;NFSU2_TR(0x6d383d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d383e:L6d383e:{c.instructions+=3;NFSU2_TR(0x6d383e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3840:{NFSU2_TR(0x6d3840);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3842:{NFSU2_TR(0x6d3842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3847ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3847:L6d3847:{c.instructions+=1;NFSU2_TR(0x6d3847);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3848:L6d3848:{c.instructions+=3;NFSU2_TR(0x6d3848);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d384a:{NFSU2_TR(0x6d384a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d384c:{NFSU2_TR(0x6d384c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3851ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3851:L6d3851:{c.instructions+=1;NFSU2_TR(0x6d3851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3852:L6d3852:{c.instructions+=3;NFSU2_TR(0x6d3852);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3854:{NFSU2_TR(0x6d3854);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3856:{NFSU2_TR(0x6d3856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d385bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d385b:L6d385b:{c.instructions+=1;NFSU2_TR(0x6d385b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d385c:L6d385c:{c.instructions+=3;NFSU2_TR(0x6d385c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d385e:{NFSU2_TR(0x6d385e);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3860:{NFSU2_TR(0x6d3860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3865ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3865:L6d3865:{c.instructions+=1;NFSU2_TR(0x6d3865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3866:L6d3866:{c.instructions+=3;NFSU2_TR(0x6d3866);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3868:{NFSU2_TR(0x6d3868);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d386a:{NFSU2_TR(0x6d386a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d386full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d386f:L6d386f:{c.instructions+=1;NFSU2_TR(0x6d386f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3870:L6d3870:{c.instructions+=3;NFSU2_TR(0x6d3870);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3872:{NFSU2_TR(0x6d3872);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3874:{NFSU2_TR(0x6d3874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3879ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3879:L6d3879:{c.instructions+=1;NFSU2_TR(0x6d3879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d387a:L6d387a:{c.instructions+=3;NFSU2_TR(0x6d387a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d387c:{NFSU2_TR(0x6d387c);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d387e:{NFSU2_TR(0x6d387e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3883ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3883:L6d3883:{c.instructions+=1;NFSU2_TR(0x6d3883);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3884:L6d3884:{c.instructions+=13;NFSU2_TR(0x6d3884);
__builtin_memmove((R+28),(R+28),4);
}
B6d3886:{NFSU2_TR(0x6d3886);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3887:{NFSU2_TR(0x6d3887);
__builtin_memmove((R+20),(R+16),4);
}
B6d3889:{NFSU2_TR(0x6d3889);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d388a:{NFSU2_TR(0x6d388a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d388b:{NFSU2_TR(0x6d388b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d388c:{NFSU2_TR(0x6d388c);
__builtin_memmove((R+24),(R+4),4);
}
B6d388e:{NFSU2_TR(0x6d388e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3894:{NFSU2_TR(0x6d3894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3896:{NFSU2_TR(0x6d3896);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6d389b:{NFSU2_TR(0x6d389b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d389c:{NFSU2_TR(0x6d389c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d389d:{NFSU2_TR(0x6d389d);
if(r1(R+518)){{goto L6d3928;}}
}
B6d38a3:L6d38a3:{c.instructions+=3;NFSU2_TR(0x6d38a3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6d38a4:{NFSU2_TR(0x6d38a4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d38a5:{NFSU2_TR(0x6d38a5);
if(r1(R+518)){{goto L6d3922;}}
}
B6d38a7:L6d38a7:{c.instructions+=2;NFSU2_TR(0x6d38a7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d38a8:{NFSU2_TR(0x6d38a8);
if(r1(R+518)){{goto L6d391c;}}
}
B6d38aa:L6d38aa:{c.instructions+=10;NFSU2_TR(0x6d38aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d38ac:{NFSU2_TR(0x6d38ac);
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
B6d38ae:{NFSU2_TR(0x6d38ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38af:{NFSU2_TR(0x6d38af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38b0:{NFSU2_TR(0x6d38b0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38b2:{NFSU2_TR(0x6d38b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d38b5:{NFSU2_TR(0x6d38b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38b6:{NFSU2_TR(0x6d38b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d38bc:{NFSU2_TR(0x6d38bc);
__builtin_memmove((R+4),(R+24),4);
}
B6d38be:{NFSU2_TR(0x6d38be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d38c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d38c4:L6d38c4:{c.instructions+=2;NFSU2_TR(0x6d38c4);
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
B6d38c6:{NFSU2_TR(0x6d38c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d3933;}}
}
B6d38c8:L6d38c8:{c.instructions+=17;NFSU2_TR(0x6d38c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d38ce:{NFSU2_TR(0x6d38ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d38d1:{NFSU2_TR(0x6d38d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38d2:{NFSU2_TR(0x6d38d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38d3:{NFSU2_TR(0x6d38d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38d4:{NFSU2_TR(0x6d38d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38d5:{NFSU2_TR(0x6d38d5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38d7:{NFSU2_TR(0x6d38d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38d8:{NFSU2_TR(0x6d38d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d38db:{NFSU2_TR(0x6d38db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38dc:{NFSU2_TR(0x6d38dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38dd:{NFSU2_TR(0x6d38dd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38df:{NFSU2_TR(0x6d38df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d38e2:{NFSU2_TR(0x6d38e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38e3:{NFSU2_TR(0x6d38e3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38e5:{NFSU2_TR(0x6d38e5);
__builtin_memmove((R+4),(R+24),4);
}
B6d38e7:{NFSU2_TR(0x6d38e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d38ecull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d38ec:L6d38ec:{c.instructions+=2;NFSU2_TR(0x6d38ec);
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
B6d38ee:{NFSU2_TR(0x6d38ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d3933;}}
}
B6d38f0:L6d38f0:{c.instructions+=16;NFSU2_TR(0x6d38f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d38f6:{NFSU2_TR(0x6d38f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38f7:{NFSU2_TR(0x6d38f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38f8:{NFSU2_TR(0x6d38f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38f9:{NFSU2_TR(0x6d38f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38fa:{NFSU2_TR(0x6d38fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38fc:{NFSU2_TR(0x6d38fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d38fd:{NFSU2_TR(0x6d38fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3900:{NFSU2_TR(0x6d3900);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3901:{NFSU2_TR(0x6d3901);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d3904:{NFSU2_TR(0x6d3904);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3905:{NFSU2_TR(0x6d3905);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d3908:{NFSU2_TR(0x6d3908);
__builtin_memmove((R+4),(R+24),4);
}
B6d390a:{NFSU2_TR(0x6d390a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d390d:{NFSU2_TR(0x6d390d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d390f:{NFSU2_TR(0x6d390f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3914ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6d3914:L6d3914:{c.instructions+=2;NFSU2_TR(0x6d3914);
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
B6d3916:{NFSU2_TR(0x6d3916);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d3933;}}
}
B6d3918:L6d3918:{c.instructions+=2;NFSU2_TR(0x6d3918);
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
B6d391a:{NFSU2_TR(0x6d391a);
{goto L6d3933;}
}
B6d391c:L6d391c:{c.instructions+=3;NFSU2_TR(0x6d391c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d391e:{NFSU2_TR(0x6d391e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3920:{NFSU2_TR(0x6d3920);
{goto L6d392c;}
}
B6d3922:L6d3922:{c.instructions+=3;NFSU2_TR(0x6d3922);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3924:{NFSU2_TR(0x6d3924);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3926:{NFSU2_TR(0x6d3926);
{goto L6d392c;}
}
B6d3928:L6d3928:{c.instructions+=2;NFSU2_TR(0x6d3928);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d392a:{NFSU2_TR(0x6d392a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d392c:L6d392c:{c.instructions+=2;NFSU2_TR(0x6d392c);
__builtin_memmove((R+4),(R+24),4);
}
B6d392e:{NFSU2_TR(0x6d392e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3933ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3933:L6d3933:{c.instructions+=4;NFSU2_TR(0x6d3933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d3934:{NFSU2_TR(0x6d3934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d3935:{NFSU2_TR(0x6d3935);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d3936:{NFSU2_TR(0x6d3936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3937:L6d3937:{c.instructions+=3;NFSU2_TR(0x6d3937);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3939:{NFSU2_TR(0x6d3939);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d393b:{NFSU2_TR(0x6d393b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3940ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3940:L6d3940:{c.instructions+=1;NFSU2_TR(0x6d3940);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3941:L6d3941:{c.instructions+=3;NFSU2_TR(0x6d3941);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3943:{NFSU2_TR(0x6d3943);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3945:{NFSU2_TR(0x6d3945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d394aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d394a:L6d394a:{c.instructions+=1;NFSU2_TR(0x6d394a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d394b:L6d394b:{c.instructions+=3;NFSU2_TR(0x6d394b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d394d:{NFSU2_TR(0x6d394d);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d394f:{NFSU2_TR(0x6d394f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d3954ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d3954:L6d3954:{c.instructions+=1;NFSU2_TR(0x6d3954);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3955:L6d3955:{c.instructions+=3;NFSU2_TR(0x6d3955);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3957:{NFSU2_TR(0x6d3957);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3959:{NFSU2_TR(0x6d3959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d395eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d32a9u);}goto L6d32a9;}
}
B6d395e:L6d395e:{c.instructions+=1;NFSU2_TR(0x6d395e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d395f:L6d395f:{c.instructions+=132;NFSU2_TR(0x6d395f);
__builtin_memmove((R+28),(R+28),4);
}
B6d3961:{NFSU2_TR(0x6d3961);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3962:{NFSU2_TR(0x6d3962);
__builtin_memmove((R+20),(R+16),4);
}
B6d3964:{NFSU2_TR(0x6d3964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3967:{NFSU2_TR(0x6d3967);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B6d396a:{NFSU2_TR(0x6d396a);
}
B6d396b:{NFSU2_TR(0x6d396b);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B6d396e:{NFSU2_TR(0x6d396e);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B6d3971:{NFSU2_TR(0x6d3971);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd20),16);
w4(R+4608,u32(u32(r4(R+4608))&u32(r4(U+0))));
w4(R+4612,u32(u32(r4(R+4612))&u32(r4(U+4))));
w4(R+4616,u32(u32(r4(R+4616))&u32(r4(U+8))));
w4(R+4620,u32(u32(r4(R+4620))&u32(r4(U+12))));
}
B6d3978:{NFSU2_TR(0x6d3978);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd10),16);
w4(R+4672,u32(u32(r4(R+4672))&u32(r4(U+0))));
w4(R+4676,u32(u32(r4(R+4676))&u32(r4(U+4))));
w4(R+4680,u32(u32(r4(R+4680))&u32(r4(U+8))));
w4(R+4684,u32(u32(r4(R+4684))&u32(r4(U+12))));
}
B6d397f:{NFSU2_TR(0x6d397f);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6d3982:{NFSU2_TR(0x6d3982);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B6d3985:{NFSU2_TR(0x6d3985);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd00),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+0))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+4))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+8))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+12))));
}
B6d398c:{NFSU2_TR(0x6d398c);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bcf0),16);
__builtin_memmove((R+4864),(U+0),4);
__builtin_memmove((R+4868),(U+4),4);
__builtin_memmove((R+4872),(U+8),4);
__builtin_memmove((R+4876),(U+12),4);
}
B6d3993:{NFSU2_TR(0x6d3993);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bce0),16);
__builtin_memmove((R+4928),(U+0),4);
__builtin_memmove((R+4932),(U+4),4);
__builtin_memmove((R+4936),(U+8),4);
__builtin_memmove((R+4940),(U+12),4);
}
B6d399a:{NFSU2_TR(0x6d399a);
__builtin_memmove((R+8),(R+16),4);
}
B6d399c:{NFSU2_TR(0x6d399c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffc0ull))));
}
B6d399f:{NFSU2_TR(0x6d399f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B6d39a2:{NFSU2_TR(0x6d39a2);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bcd0),16);
__builtin_memmove((R+4992),(U+0),4);
__builtin_memmove((R+4996),(U+4),4);
__builtin_memmove((R+5000),(U+8),4);
__builtin_memmove((R+5004),(U+12),4);
}
B6d39a9:{NFSU2_TR(0x6d39a9);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bcc0),16);
__builtin_memmove((R+5056),(U+0),4);
__builtin_memmove((R+5060),(U+4),4);
__builtin_memmove((R+5064),(U+8),4);
__builtin_memmove((R+5068),(U+12),4);
}
B6d39b0:{NFSU2_TR(0x6d39b0);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bcb0),16);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(U+0))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(U+4))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(U+8))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(U+12))));
}
B6d39b7:{NFSU2_TR(0x6d39b7);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B6d39ba:{NFSU2_TR(0x6d39ba);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bcb0),16);
w4(R+4608,b32(f32(r4(R+4608))-f32(r4(U+0))));
w4(R+4612,b32(f32(r4(R+4612))-f32(r4(U+4))));
w4(R+4616,b32(f32(r4(R+4616))-f32(r4(U+8))));
w4(R+4620,b32(f32(r4(R+4620))-f32(r4(U+12))));
}
B6d39c1:{NFSU2_TR(0x6d39c1);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4620))));
}
B6d39c4:{NFSU2_TR(0x6d39c4);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B6d39c7:{NFSU2_TR(0x6d39c7);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4612))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4616))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4620))));
}
B6d39ca:{NFSU2_TR(0x6d39ca);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4608))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4612))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4616))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4620))));
}
B6d39cd:{NFSU2_TR(0x6d39cd);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4876))));
}
B6d39d0:{NFSU2_TR(0x6d39d0);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4940))));
}
B6d39d3:{NFSU2_TR(0x6d39d3);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bca0),16);
__builtin_memmove((R+4928),(U+0),4);
__builtin_memmove((R+4932),(U+4),4);
__builtin_memmove((R+4936),(U+8),4);
__builtin_memmove((R+4940),(U+12),4);
}
B6d39da:{NFSU2_TR(0x6d39da);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4992))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4996))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+5000))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+5004))));
}
B6d39dd:{NFSU2_TR(0x6d39dd);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc90),16);
__builtin_memmove((R+4992),(U+0),4);
__builtin_memmove((R+4996),(U+4),4);
__builtin_memmove((R+5000),(U+8),4);
__builtin_memmove((R+5004),(U+12),4);
}
B6d39e4:{NFSU2_TR(0x6d39e4);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+5068))));
}
B6d39e7:{NFSU2_TR(0x6d39e7);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B6d39ea:{NFSU2_TR(0x6d39ea);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4864))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4868))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4872))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4876))));
}
B6d39ed:{NFSU2_TR(0x6d39ed);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc80),16);
w4(R+4800,u32(u32(r4(R+4800))&u32(r4(U+0))));
w4(R+4804,u32(u32(r4(R+4804))&u32(r4(U+4))));
w4(R+4808,u32(u32(r4(R+4808))&u32(r4(U+8))));
w4(R+4812,u32(u32(r4(R+4812))&u32(r4(U+12))));
}
B6d39f4:{NFSU2_TR(0x6d39f4);
__builtin_memmove((R+4608),(R+4800),4);
__builtin_memmove((R+4612),(R+4804),4);
__builtin_memmove((R+4616),(R+4808),4);
__builtin_memmove((R+4620),(R+4812),4);
}
B6d39f7:{NFSU2_TR(0x6d39f7);
__builtin_memmove((R+5056),(R+4800),4);
__builtin_memmove((R+5060),(R+4804),4);
__builtin_memmove((R+5064),(R+4808),4);
__builtin_memmove((R+5068),(R+4812),4);
}
B6d39fa:{NFSU2_TR(0x6d39fa);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc70),16);
w4(R+4608,u32(u32(r4(R+4608))&u32(r4(U+0))));
w4(R+4612,u32(u32(r4(R+4612))&u32(r4(U+4))));
w4(R+4616,u32(u32(r4(R+4616))&u32(r4(U+8))));
w4(R+4620,u32(u32(r4(R+4620))&u32(r4(U+12))));
}
B6d3a01:{NFSU2_TR(0x6d3a01);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B6d3a04:{NFSU2_TR(0x6d3a04);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6d3a08:{NFSU2_TR(0x6d3a08);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6d3a0c:{NFSU2_TR(0x6d3a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a0f:{NFSU2_TR(0x6d3a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B6d3a11:{NFSU2_TR(0x6d3a11);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a17:{NFSU2_TR(0x6d3a17);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a1a:{NFSU2_TR(0x6d3a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a1d:{NFSU2_TR(0x6d3a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a20:{NFSU2_TR(0x6d3a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d3a23:{NFSU2_TR(0x6d3a23);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a29:{NFSU2_TR(0x6d3a29);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a2c:{NFSU2_TR(0x6d3a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a2f:{NFSU2_TR(0x6d3a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a32:{NFSU2_TR(0x6d3a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d3a35:{NFSU2_TR(0x6d3a35);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a3b:{NFSU2_TR(0x6d3a3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a3e:{NFSU2_TR(0x6d3a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a41:{NFSU2_TR(0x6d3a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a44:{NFSU2_TR(0x6d3a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d3a47:{NFSU2_TR(0x6d3a47);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a4d:{NFSU2_TR(0x6d3a4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a50:{NFSU2_TR(0x6d3a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a53:{NFSU2_TR(0x6d3a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a56:{NFSU2_TR(0x6d3a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B6d3a58:{NFSU2_TR(0x6d3a58);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a5e:{NFSU2_TR(0x6d3a5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a61:{NFSU2_TR(0x6d3a61);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a64:{NFSU2_TR(0x6d3a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a67:{NFSU2_TR(0x6d3a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6d3a6a:{NFSU2_TR(0x6d3a6a);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a70:{NFSU2_TR(0x6d3a70);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a73:{NFSU2_TR(0x6d3a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a76:{NFSU2_TR(0x6d3a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a79:{NFSU2_TR(0x6d3a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6d3a7c:{NFSU2_TR(0x6d3a7c);
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
}
B6d3a82:{NFSU2_TR(0x6d3a82);
u8 U[4];
w4(U+0,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d3a85:{NFSU2_TR(0x6d3a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a88:{NFSU2_TR(0x6d3a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3a8b:{NFSU2_TR(0x6d3a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6d3a8e:{NFSU2_TR(0x6d3a8e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(m4(0x80bc60))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d3a94:{NFSU2_TR(0x6d3a94);
u8 U[45];
w4(U+37,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6d3a97:{NFSU2_TR(0x6d3a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3a9a:{NFSU2_TR(0x6d3a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d3a9c:{NFSU2_TR(0x6d3a9c);
u8 U[45];
w4(U+37,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6d3a9f:{NFSU2_TR(0x6d3a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d3aa1:{NFSU2_TR(0x6d3aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3aa4:{NFSU2_TR(0x6d3aa4);
u8 U[45];
w4(U+37,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6d3aa7:{NFSU2_TR(0x6d3aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3aaa:{NFSU2_TR(0x6d3aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3aad:{NFSU2_TR(0x6d3aad);
u8 U[45];
w4(U+37,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6d3ab0:{NFSU2_TR(0x6d3ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3ab3:{NFSU2_TR(0x6d3ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3ab6:{NFSU2_TR(0x6d3ab6);
u8 U[45];
w4(U+37,u32(u32(u32(0x1eull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B6d3ab9:{NFSU2_TR(0x6d3ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d3abc:{NFSU2_TR(0x6d3abc);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B6d3ac0:{NFSU2_TR(0x6d3ac0);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+5056),(U+20),4);
__builtin_memmove((R+5060),(U+24),4);
__builtin_memmove((R+5064),(U+28),4);
__builtin_memmove((R+5068),(U+32),4);
}
B6d3ac4:{NFSU2_TR(0x6d3ac4);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B6d3ac7:{NFSU2_TR(0x6d3ac7);
w4(R+4800,u32(u32(r4(R+4800))^u32(r4(R+4672))));
w4(R+4804,u32(u32(r4(R+4804))^u32(r4(R+4676))));
w4(R+4808,u32(u32(r4(R+4808))^u32(r4(R+4680))));
w4(R+4812,u32(u32(r4(R+4812))^u32(r4(R+4684))));
}
B6d3aca:{NFSU2_TR(0x6d3aca);
w4(R+4672,u32(u32(r4(R+4672))^u32(r4(R+4672))));
w4(R+4676,u32(u32(r4(R+4676))^u32(r4(R+4676))));
w4(R+4680,u32(u32(r4(R+4680))^u32(r4(R+4680))));
w4(R+4684,u32(u32(r4(R+4684))^u32(r4(R+4684))));
}
B6d3acd:{NFSU2_TR(0x6d3acd);
u8 U[20];
__builtin_memmove((R+4480),(R+4608),4);
__builtin_memmove((R+4484),(R+4612),4);
__builtin_memmove((R+4488),(R+4616),4);
__builtin_memmove((R+4492),(R+4620),4);
__builtin_memmove((R+4496),(R+4672),4);
__builtin_memmove((R+4500),(R+4676),4);
__builtin_memmove((R+4504),(R+4680),4);
__builtin_memmove((R+4508),(R+4684),4);
w1(U+0,u8(f32(r4(R+4480))!=f32(r4(R+4496))));
w4(U+1,u32(r1(U+0)));
w4(R+4480,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8(f32(r4(R+4484))!=f32(r4(R+4500))));
w4(U+6,u32(r1(U+5)));
w4(R+4484,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8(f32(r4(R+4488))!=f32(r4(R+4504))));
w4(U+11,u32(r1(U+10)));
w4(R+4488,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8(f32(r4(R+4492))!=f32(r4(R+4508))));
w4(U+16,u32(r1(U+15)));
w4(R+4492,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
__builtin_memmove((R+4608),(R+4480),4);
__builtin_memmove((R+4612),(R+4484),4);
__builtin_memmove((R+4616),(R+4488),4);
__builtin_memmove((R+4620),(R+4492),4);
}
B6d3ad1:{NFSU2_TR(0x6d3ad1);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6d3ad4:{NFSU2_TR(0x6d3ad4);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3ad7:{NFSU2_TR(0x6d3ad7);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc50),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+0))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+4))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+8))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+12))));
}
B6d3ade:{NFSU2_TR(0x6d3ade);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc40),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3ae5:{NFSU2_TR(0x6d3ae5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6d3ae8:{NFSU2_TR(0x6d3ae8);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3aeb:{NFSU2_TR(0x6d3aeb);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc30),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+0))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+4))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+8))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+12))));
}
B6d3af2:{NFSU2_TR(0x6d3af2);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc20),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3af9:{NFSU2_TR(0x6d3af9);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6d3afc:{NFSU2_TR(0x6d3afc);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3aff:{NFSU2_TR(0x6d3aff);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc10),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+0))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+4))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+8))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+12))));
}
B6d3b06:{NFSU2_TR(0x6d3b06);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bc00),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3b0d:{NFSU2_TR(0x6d3b0d);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B6d3b10:{NFSU2_TR(0x6d3b10);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3b13:{NFSU2_TR(0x6d3b13);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bbf0),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3b1a:{NFSU2_TR(0x6d3b1a);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B6d3b1d:{NFSU2_TR(0x6d3b1d);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6d3b20:{NFSU2_TR(0x6d3b20);
u8 U[16];
w4(U+0,u32(~u32(r4(R+4672))));
w4(R+4672,u32(u32(r4(U+0))&u32(r4(R+4928))));
w4(U+4,u32(~u32(r4(R+4676))));
w4(R+4676,u32(u32(r4(U+4))&u32(r4(R+4932))));
w4(U+8,u32(~u32(r4(R+4680))));
w4(R+4680,u32(u32(r4(U+8))&u32(r4(R+4936))));
w4(U+12,u32(~u32(r4(R+4684))));
w4(R+4684,u32(u32(r4(U+12))&u32(r4(R+4940))));
}
B6d3b23:{NFSU2_TR(0x6d3b23);
w4(R+4736,u32(u32(r4(R+4736))&u32(r4(R+4992))));
w4(R+4740,u32(u32(r4(R+4740))&u32(r4(R+4996))));
w4(R+4744,u32(u32(r4(R+4744))&u32(r4(R+5000))));
w4(R+4748,u32(u32(r4(R+4748))&u32(r4(R+5004))));
}
B6d3b26:{NFSU2_TR(0x6d3b26);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4736))));
}
B6d3b29:{NFSU2_TR(0x6d3b29);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6d3b2c:{NFSU2_TR(0x6d3b2c);
w4(R+4608,u32(u32(r4(R+4608))&u32(r4(R+4928))));
w4(R+4612,u32(u32(r4(R+4612))&u32(r4(R+4932))));
w4(R+4616,u32(u32(r4(R+4616))&u32(r4(R+4936))));
w4(R+4620,u32(u32(r4(R+4620))&u32(r4(R+4940))));
}
B6d3b2f:{NFSU2_TR(0x6d3b2f);
u8 U[16];
w4(U+0,u32(~u32(r4(R+4736))));
w4(R+4736,u32(u32(r4(U+0))&u32(r4(R+4992))));
w4(U+4,u32(~u32(r4(R+4740))));
w4(R+4740,u32(u32(r4(U+4))&u32(r4(R+4996))));
w4(U+8,u32(~u32(r4(R+4744))));
w4(R+4744,u32(u32(r4(U+8))&u32(r4(R+5000))));
w4(U+12,u32(~u32(r4(R+4748))));
w4(R+4748,u32(u32(r4(U+12))&u32(r4(R+5004))));
}
B6d3b32:{NFSU2_TR(0x6d3b32);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4736))));
}
B6d3b35:{NFSU2_TR(0x6d3b35);
w4(R+4608,u32(u32(r4(R+4608))^u32(r4(R+5056))));
w4(R+4612,u32(u32(r4(R+4612))^u32(r4(R+5060))));
w4(R+4616,u32(u32(r4(R+4616))^u32(r4(R+5064))));
w4(R+4620,u32(u32(r4(R+4620))^u32(r4(R+5068))));
}
B6d3b38:{NFSU2_TR(0x6d3b38);
w4(R+4672,u32(u32(r4(R+4672))^u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))^u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))^u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))^u32(r4(R+4812))));
}
B6d3b3b:{NFSU2_TR(0x6d3b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3b3e:{NFSU2_TR(0x6d3b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3b41:{NFSU2_TR(0x6d3b41);
u8 U[16];
__builtin_memmove((U+0),(R+4672),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6d3b44:{NFSU2_TR(0x6d3b44);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B6d3b47:{NFSU2_TR(0x6d3b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d3b48:{NFSU2_TR(0x6d3b48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3b4b:L6d3b4b:{c.instructions+=78;NFSU2_TR(0x6d3b4b);
__builtin_memmove((R+28),(R+28),4);
}
B6d3b4d:{NFSU2_TR(0x6d3b4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d3b4e:{NFSU2_TR(0x6d3b4e);
__builtin_memmove((R+20),(R+16),4);
}
B6d3b50:{NFSU2_TR(0x6d3b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3b53:{NFSU2_TR(0x6d3b53);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B6d3b56:{NFSU2_TR(0x6d3b56);
}
B6d3b57:{NFSU2_TR(0x6d3b57);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B6d3b5a:{NFSU2_TR(0x6d3b5a);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B6d3b5d:{NFSU2_TR(0x6d3b5d);
wv<16>((R+4608),eval<Op::INT_AND,16,16,16>(rv<16>((R+4608)),rv<16>(gp(0x80be60))));
}
B6d3b65:{NFSU2_TR(0x6d3b65);
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((R+4672)),rv<16>(gp(0x80be50))));
}
B6d3b6d:{NFSU2_TR(0x6d3b6d);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6d3b70:{NFSU2_TR(0x6d3b70);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B6d3b73:{NFSU2_TR(0x6d3b73);
u8 U[16];
__builtin_memmove((U+0),gp(0x80be40),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+0))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+4))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+8))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+12))));
}
B6d3b7a:{NFSU2_TR(0x6d3b7a);
u8 U[16];
__builtin_memmove((U+0),gp(0x80be30),16);
__builtin_memmove((R+4864),(U+0),4);
__builtin_memmove((R+4868),(U+4),4);
__builtin_memmove((R+4872),(U+8),4);
__builtin_memmove((R+4876),(U+12),4);
}
B6d3b81:{NFSU2_TR(0x6d3b81);
u8 U[16];
__builtin_memmove((U+0),gp(0x80be20),16);
__builtin_memmove((R+4928),(U+0),4);
__builtin_memmove((R+4932),(U+4),4);
__builtin_memmove((R+4936),(U+8),4);
__builtin_memmove((R+4940),(U+12),4);
}
B6d3b88:{NFSU2_TR(0x6d3b88);
u8 U[16];
__builtin_memmove((U+0),gp(0x80be10),16);
__builtin_memmove((R+4992),(U+0),4);
__builtin_memmove((R+4996),(U+4),4);
__builtin_memmove((R+5000),(U+8),4);
__builtin_memmove((R+5004),(U+12),4);
}
B6d3b8f:{NFSU2_TR(0x6d3b8f);
u8 U[16];
__builtin_memmove((U+0),gp(0x80be00),16);
__builtin_memmove((R+5056),(U+0),4);
__builtin_memmove((R+5060),(U+4),4);
__builtin_memmove((R+5064),(U+8),4);
__builtin_memmove((R+5068),(U+12),4);
}
B6d3b96:{NFSU2_TR(0x6d3b96);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bdf0),16);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(U+0))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(U+4))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(U+8))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(U+12))));
}
B6d3b9d:{NFSU2_TR(0x6d3b9d);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B6d3ba0:{NFSU2_TR(0x6d3ba0);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bdf0),16);
w4(R+4608,b32(f32(r4(R+4608))-f32(r4(U+0))));
w4(R+4612,b32(f32(r4(R+4612))-f32(r4(U+4))));
w4(R+4616,b32(f32(r4(R+4616))-f32(r4(U+8))));
w4(R+4620,b32(f32(r4(R+4620))-f32(r4(U+12))));
}
B6d3ba7:{NFSU2_TR(0x6d3ba7);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4620))));
}
B6d3baa:{NFSU2_TR(0x6d3baa);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B6d3bad:{NFSU2_TR(0x6d3bad);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4612))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4616))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4620))));
}
B6d3bb0:{NFSU2_TR(0x6d3bb0);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4608))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4612))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4616))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4620))));
}
B6d3bb3:{NFSU2_TR(0x6d3bb3);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4876))));
}
B6d3bb6:{NFSU2_TR(0x6d3bb6);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4940))));
}
B6d3bb9:{NFSU2_TR(0x6d3bb9);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bde0),16);
__builtin_memmove((R+4928),(U+0),4);
__builtin_memmove((R+4932),(U+4),4);
__builtin_memmove((R+4936),(U+8),4);
__builtin_memmove((R+4940),(U+12),4);
}
B6d3bc0:{NFSU2_TR(0x6d3bc0);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4992))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4996))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+5000))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+5004))));
}
B6d3bc3:{NFSU2_TR(0x6d3bc3);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bdd0),16);
__builtin_memmove((R+4992),(U+0),4);
__builtin_memmove((R+4996),(U+4),4);
__builtin_memmove((R+5000),(U+8),4);
__builtin_memmove((R+5004),(U+12),4);
}
B6d3bca:{NFSU2_TR(0x6d3bca);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+5068))));
}
B6d3bcd:{NFSU2_TR(0x6d3bcd);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B6d3bd0:{NFSU2_TR(0x6d3bd0);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4864))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4868))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4872))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4876))));
}
B6d3bd3:{NFSU2_TR(0x6d3bd3);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bdc0),16);
w4(R+4800,u32(u32(r4(R+4800))&u32(r4(U+0))));
w4(R+4804,u32(u32(r4(R+4804))&u32(r4(U+4))));
w4(R+4808,u32(u32(r4(R+4808))&u32(r4(U+8))));
w4(R+4812,u32(u32(r4(R+4812))&u32(r4(U+12))));
}
B6d3bda:{NFSU2_TR(0x6d3bda);
__builtin_memmove((R+4608),(R+4800),4);
__builtin_memmove((R+4612),(R+4804),4);
__builtin_memmove((R+4616),(R+4808),4);
__builtin_memmove((R+4620),(R+4812),4);
}
B6d3bdd:{NFSU2_TR(0x6d3bdd);
__builtin_memmove((R+5056),(R+4800),4);
__builtin_memmove((R+5060),(R+4804),4);
__builtin_memmove((R+5064),(R+4808),4);
__builtin_memmove((R+5068),(R+4812),4);
}
B6d3be0:{NFSU2_TR(0x6d3be0);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bdb0),16);
w4(R+4608,u32(u32(r4(R+4608))&u32(r4(U+0))));
w4(R+4612,u32(u32(r4(R+4612))&u32(r4(U+4))));
w4(R+4616,u32(u32(r4(R+4616))&u32(r4(U+8))));
w4(R+4620,u32(u32(r4(R+4620))&u32(r4(U+12))));
}
B6d3be7:{NFSU2_TR(0x6d3be7);
w4(R+4800,u32(u32(r4(R+4800))-u32(r4(R+4608))));
w4(R+4804,u32(u32(r4(R+4804))-u32(r4(R+4612))));
w4(R+4808,u32(u32(r4(R+4808))-u32(r4(R+4616))));
w4(R+4812,u32(u32(r4(R+4812))-u32(r4(R+4620))));
}
B6d3beb:{NFSU2_TR(0x6d3beb);
w4(R+5056,u32(u32(r4(R+5056))+u32(r4(R+4608))));
w4(R+5060,u32(u32(r4(R+5060))+u32(r4(R+4612))));
w4(R+5064,u32(u32(r4(R+5064))+u32(r4(R+4616))));
w4(R+5068,u32(u32(r4(R+5068))+u32(r4(R+4620))));
}
B6d3bef:{NFSU2_TR(0x6d3bef);
wv<16>((R+4800),eval<Op::INT_AND,16,16,16>(rv<16>((R+4800)),rv<16>(gp(0x80bda0))));
}
B6d3bf7:{NFSU2_TR(0x6d3bf7);
wv<16>((R+5056),eval<Op::INT_AND,16,16,16>(rv<16>((R+5056)),rv<16>(gp(0x80bda0))));
}
B6d3bff:{NFSU2_TR(0x6d3bff);
w4(R+4800,shl<u32>(r4(R+4800),u64(u32(0x1eull))));
w4(R+4804,shl<u32>(r4(R+4804),u64(u32(0x1eull))));
w4(R+4808,shl<u32>(r4(R+4808),u64(u32(0x1eull))));
w4(R+4812,shl<u32>(r4(R+4812),u64(u32(0x1eull))));
}
B6d3c04:{NFSU2_TR(0x6d3c04);
w4(R+5056,shl<u32>(r4(R+5056),u64(u32(0x1eull))));
w4(R+5060,shl<u32>(r4(R+5060),u64(u32(0x1eull))));
w4(R+5064,shl<u32>(r4(R+5064),u64(u32(0x1eull))));
w4(R+5068,shl<u32>(r4(R+5068),u64(u32(0x1eull))));
}
B6d3c09:{NFSU2_TR(0x6d3c09);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4672))));
}
B6d3c0d:{NFSU2_TR(0x6d3c0d);
w4(R+4608,shl<u32>(r4(R+4608),u64(u32(0x1eull))));
w4(R+4612,shl<u32>(r4(R+4612),u64(u32(0x1eull))));
w4(R+4616,shl<u32>(r4(R+4616),u64(u32(0x1eull))));
w4(R+4620,shl<u32>(r4(R+4620),u64(u32(0x1eull))));
}
B6d3c12:{NFSU2_TR(0x6d3c12);
wv<16>((R+4672),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4672))));
}
B6d3c16:{NFSU2_TR(0x6d3c16);
u8 U[20];
__builtin_memmove((R+4480),(R+4608),4);
__builtin_memmove((R+4484),(R+4612),4);
__builtin_memmove((R+4488),(R+4616),4);
__builtin_memmove((R+4492),(R+4620),4);
__builtin_memmove((R+4496),(R+4672),4);
__builtin_memmove((R+4500),(R+4676),4);
__builtin_memmove((R+4504),(R+4680),4);
__builtin_memmove((R+4508),(R+4684),4);
w1(U+0,u8(f32(r4(R+4480))!=f32(r4(R+4496))));
w4(U+1,u32(r1(U+0)));
w4(R+4480,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8(f32(r4(R+4484))!=f32(r4(R+4500))));
w4(U+6,u32(r1(U+5)));
w4(R+4484,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8(f32(r4(R+4488))!=f32(r4(R+4504))));
w4(U+11,u32(r1(U+10)));
w4(R+4488,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8(f32(r4(R+4492))!=f32(r4(R+4508))));
w4(U+16,u32(r1(U+15)));
w4(R+4492,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
__builtin_memmove((R+4608),(R+4480),4);
__builtin_memmove((R+4612),(R+4484),4);
__builtin_memmove((R+4616),(R+4488),4);
__builtin_memmove((R+4620),(R+4492),4);
}
B6d3c1a:{NFSU2_TR(0x6d3c1a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6d3c1d:{NFSU2_TR(0x6d3c1d);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3c20:{NFSU2_TR(0x6d3c20);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd90),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+0))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+4))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+8))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+12))));
}
B6d3c27:{NFSU2_TR(0x6d3c27);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd80),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3c2e:{NFSU2_TR(0x6d3c2e);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6d3c31:{NFSU2_TR(0x6d3c31);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3c34:{NFSU2_TR(0x6d3c34);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd70),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+0))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+4))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+8))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+12))));
}
B6d3c3b:{NFSU2_TR(0x6d3c3b);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd60),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3c42:{NFSU2_TR(0x6d3c42);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B6d3c45:{NFSU2_TR(0x6d3c45);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3c48:{NFSU2_TR(0x6d3c48);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd50),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+0))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+4))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+8))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+12))));
}
B6d3c4f:{NFSU2_TR(0x6d3c4f);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd40),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3c56:{NFSU2_TR(0x6d3c56);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B6d3c59:{NFSU2_TR(0x6d3c59);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B6d3c5c:{NFSU2_TR(0x6d3c5c);
u8 U[16];
__builtin_memmove((U+0),gp(0x80bd30),16);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(U+0))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(U+4))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(U+8))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(U+12))));
}
B6d3c63:{NFSU2_TR(0x6d3c63);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B6d3c66:{NFSU2_TR(0x6d3c66);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6d3c69:{NFSU2_TR(0x6d3c69);
u8 U[16];
w4(U+0,u32(~u32(r4(R+4672))));
w4(R+4672,u32(u32(r4(U+0))&u32(r4(R+4928))));
w4(U+4,u32(~u32(r4(R+4676))));
w4(R+4676,u32(u32(r4(U+4))&u32(r4(R+4932))));
w4(U+8,u32(~u32(r4(R+4680))));
w4(R+4680,u32(u32(r4(U+8))&u32(r4(R+4936))));
w4(U+12,u32(~u32(r4(R+4684))));
w4(R+4684,u32(u32(r4(U+12))&u32(r4(R+4940))));
}
B6d3c6c:{NFSU2_TR(0x6d3c6c);
w4(R+4736,u32(u32(r4(R+4736))&u32(r4(R+4992))));
w4(R+4740,u32(u32(r4(R+4740))&u32(r4(R+4996))));
w4(R+4744,u32(u32(r4(R+4744))&u32(r4(R+5000))));
w4(R+4748,u32(u32(r4(R+4748))&u32(r4(R+5004))));
}
B6d3c6f:{NFSU2_TR(0x6d3c6f);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4736))));
}
B6d3c72:{NFSU2_TR(0x6d3c72);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6d3c75:{NFSU2_TR(0x6d3c75);
w4(R+4608,u32(u32(r4(R+4608))&u32(r4(R+4928))));
w4(R+4612,u32(u32(r4(R+4612))&u32(r4(R+4932))));
w4(R+4616,u32(u32(r4(R+4616))&u32(r4(R+4936))));
w4(R+4620,u32(u32(r4(R+4620))&u32(r4(R+4940))));
}
B6d3c78:{NFSU2_TR(0x6d3c78);
u8 U[16];
w4(U+0,u32(~u32(r4(R+4736))));
w4(R+4736,u32(u32(r4(U+0))&u32(r4(R+4992))));
w4(U+4,u32(~u32(r4(R+4740))));
w4(R+4740,u32(u32(r4(U+4))&u32(r4(R+4996))));
w4(U+8,u32(~u32(r4(R+4744))));
w4(R+4744,u32(u32(r4(U+8))&u32(r4(R+5000))));
w4(U+12,u32(~u32(r4(R+4748))));
w4(R+4748,u32(u32(r4(U+12))&u32(r4(R+5004))));
}
B6d3c7b:{NFSU2_TR(0x6d3c7b);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4736))));
}
B6d3c7e:{NFSU2_TR(0x6d3c7e);
w4(R+4608,u32(u32(r4(R+4608))^u32(r4(R+5056))));
w4(R+4612,u32(u32(r4(R+4612))^u32(r4(R+5060))));
w4(R+4616,u32(u32(r4(R+4616))^u32(r4(R+5064))));
w4(R+4620,u32(u32(r4(R+4620))^u32(r4(R+5068))));
}
B6d3c81:{NFSU2_TR(0x6d3c81);
w4(R+4672,u32(u32(r4(R+4672))^u32(r4(R+4800))));
w4(R+4676,u32(u32(r4(R+4676))^u32(r4(R+4804))));
w4(R+4680,u32(u32(r4(R+4680))^u32(r4(R+4808))));
w4(R+4684,u32(u32(r4(R+4684))^u32(r4(R+4812))));
}
B6d3c84:{NFSU2_TR(0x6d3c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d3c87:{NFSU2_TR(0x6d3c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d3c8a:{NFSU2_TR(0x6d3c8a);
u8 U[16];
__builtin_memmove((U+0),(R+4672),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6d3c8d:{NFSU2_TR(0x6d3c8d);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B6d3c90:{NFSU2_TR(0x6d3c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d3c91:{NFSU2_TR(0x6d3c91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3d80:L6d3d80:{c.instructions+=58;NFSU2_TR(0x6d3d80);
w8(R+4464,u64(m4(0x80bf18)));
}
B6d3d87:{NFSU2_TR(0x6d3d87);
w8(R+4448,u64(m4(0x80bf18)));
}
B6d3d8e:{NFSU2_TR(0x6d3d8e);
w8(R+4432,u64(m4(0x80bf1c)));
}
B6d3d95:{NFSU2_TR(0x6d3d95);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4352))));
}
B6d3d98:{NFSU2_TR(0x6d3d98);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4368))));
}
B6d3d9b:{NFSU2_TR(0x6d3d9b);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x1ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x1ull))));
}
B6d3d9f:{NFSU2_TR(0x6d3d9f);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(R+4448))));
}
B6d3da2:{NFSU2_TR(0x6d3da2);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B6d3da5:{NFSU2_TR(0x6d3da5);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B6d3da8:{NFSU2_TR(0x6d3da8);
__builtin_memmove((R+4448),(R+4368),8);
}
B6d3dab:{NFSU2_TR(0x6d3dab);
__builtin_memmove((R+4384),(R+4352),8);
}
B6d3dae:{NFSU2_TR(0x6d3dae);
u8 U[10];
w1(U+0,u8(s32(r4(R+4352))<s32(r4(R+4448))));
w4(U+1,u32(r1(U+0)));
w4(R+4448,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8(s32(r4(R+4356))<s32(r4(R+4452))));
w4(U+6,u32(r1(U+5)));
w4(R+4452,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B6d3db1:{NFSU2_TR(0x6d3db1);
{wv<8>((R+4352),uo::pfmax<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6d3db5:{NFSU2_TR(0x6d3db5);
w4(R+4448,shl<u32>(r4(R+4448),u64(u32(0x1full))));
w4(R+4452,shl<u32>(r4(R+4452),u64(u32(0x1full))));
}
B6d3db9:{NFSU2_TR(0x6d3db9);
{wv<8>((R+4368),uo::pfmin<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6d3dbd:{NFSU2_TR(0x6d3dbd);
{SPILL();c.pc=0x6d3dbdu;V r_=user_op(c,524532,{rv<8>((R+4384)),rv<8>((R+4352))});SPILL();wv<8>((R+4384),r_);}
}
B6d3dc1:{NFSU2_TR(0x6d3dc1);
w8(R+4432,u64(m4(0x80bf58)));
}
B6d3dc8:{NFSU2_TR(0x6d3dc8);
{SPILL();c.pc=0x6d3dc8u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B6d3dcc:{NFSU2_TR(0x6d3dcc);
w8(R+4416,u64(m4(0x80bf5c)));
}
B6d3dd3:{NFSU2_TR(0x6d3dd3);
{SPILL();c.pc=0x6d3dd3u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B6d3dd7:{NFSU2_TR(0x6d3dd7);
w8(R+4400,u64(m4(0x80bf50)));
}
B6d3dde:{NFSU2_TR(0x6d3dde);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6d3de2:{NFSU2_TR(0x6d3de2);
__builtin_memmove((R+4368),(R+4352),8);
}
B6d3de5:{NFSU2_TR(0x6d3de5);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6d3de9:{NFSU2_TR(0x6d3de9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6d3ded:{NFSU2_TR(0x6d3ded);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6d3df1:{NFSU2_TR(0x6d3df1);
w8(R+4384,u64(m4(0x80bf4c)));
}
B6d3df8:{NFSU2_TR(0x6d3df8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6d3dfc:{NFSU2_TR(0x6d3dfc);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6d3e00:{NFSU2_TR(0x6d3e00);
w8(R+4432,u64(m4(0x80bf54)));
}
B6d3e07:{NFSU2_TR(0x6d3e07);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6d3e0b:{NFSU2_TR(0x6d3e0b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6d3e0f:{NFSU2_TR(0x6d3e0f);
w8(R+4384,u64(m4(0x80bf48)));
}
B6d3e16:{NFSU2_TR(0x6d3e16);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6d3e1a:{NFSU2_TR(0x6d3e1a);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6d3e1e:{NFSU2_TR(0x6d3e1e);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6d3e22:{NFSU2_TR(0x6d3e22);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6d3e26:{NFSU2_TR(0x6d3e26);
__builtin_memmove((R+4416),(R+4464),8);
}
B6d3e29:{NFSU2_TR(0x6d3e29);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6d3e2d:{NFSU2_TR(0x6d3e2d);
{SPILL();c.pc=0x6d3e2du;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4400))});SPILL();wv<8>((R+4432),r_);}
}
B6d3e31:{NFSU2_TR(0x6d3e31);
w4(R+4464,shl<u32>(r4(R+4464),u64(u32(0x1ull))));
w4(R+4468,shl<u32>(r4(R+4468),u64(u32(0x1ull))));
}
B6d3e35:{NFSU2_TR(0x6d3e35);
{SPILL();c.pc=0x6d3e35u;V r_=user_op(c,524534,{rv<8>((R+4400)),rv<8>((R+4432))});SPILL();wv<8>((R+4400),r_);}
}
B6d3e39:{NFSU2_TR(0x6d3e39);
{SPILL();c.pc=0x6d3e39u;V r_=user_op(c,524536,{rv<8>((R+4400)),rv<8>((R+4432))});SPILL();wv<8>((R+4400),r_);}
}
B6d3e3d:{NFSU2_TR(0x6d3e3d);
__builtin_memmove((R+4432),(R+4464),8);
}
B6d3e40:{NFSU2_TR(0x6d3e40);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4448))));
}
B6d3e43:{NFSU2_TR(0x6d3e43);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6d3e47:{NFSU2_TR(0x6d3e47);
w8(R+4400,u64(m4(0x80bf78)));
}
B6d3e4e:{NFSU2_TR(0x6d3e4e);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4400))));
}
B6d3e51:{NFSU2_TR(0x6d3e51);
w4(R+4448,sar<u32>(r4(R+4448),u64(u32(0x1full))));
w4(R+4452,sar<u32>(r4(R+4452),u64(u32(0x1full))));
}
B6d3e55:{NFSU2_TR(0x6d3e55);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6d3e59:{NFSU2_TR(0x6d3e59);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4448))));
w8(R+4448,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B6d3e5c:{NFSU2_TR(0x6d3e5c);
w8(R+4368,u64(m4(0x80bf18)));
}
B6d3e63:{NFSU2_TR(0x6d3e63);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B6d3e67:{NFSU2_TR(0x6d3e67);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4464))));
}
B6d3e6a:{NFSU2_TR(0x6d3e6a);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4416))));
}
B6d3e6d:{NFSU2_TR(0x6d3e6d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B6d3e71:{NFSU2_TR(0x6d3e71);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B6d3e74:{NFSU2_TR(0x6d3e74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d3e80:L6d3e80:{c.instructions+=59;NFSU2_TR(0x6d3e80);
w8(R+4448,u64(m4(0x80bf18)));
}
B6d3e87:{NFSU2_TR(0x6d3e87);
w8(R+4464,u64(m4(0x80bf1c)));
}
B6d3e8e:{NFSU2_TR(0x6d3e8e);
w8(R+4416,u64(m4(0x80bf2c)));
}
B6d3e95:{NFSU2_TR(0x6d3e95);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4352))));
}
B6d3e98:{NFSU2_TR(0x6d3e98);
w8(R+4432,u64(m4(0x80bf28)));
}
B6d3e9f:{NFSU2_TR(0x6d3e9f);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4464))));
}
B6d3ea2:{NFSU2_TR(0x6d3ea2);
__builtin_memmove((R+4400),(R+4352),8);
}
B6d3ea5:{NFSU2_TR(0x6d3ea5);
u8 U[10];
w1(U+0,u8(s32(r4(R+4432))<s32(r4(R+4400))));
w4(U+1,u32(r1(U+0)));
w4(R+4400,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8(s32(r4(R+4436))<s32(r4(R+4404))));
w4(U+6,u32(r1(U+5)));
w4(R+4404,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B6d3ea8:{NFSU2_TR(0x6d3ea8);
__builtin_memmove((R+4432),(R+4352),8);
}
B6d3eab:{NFSU2_TR(0x6d3eab);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6d3eaf:{NFSU2_TR(0x6d3eaf);
w8(R+4384,u64(m4(0x80bf60)));
}
B6d3eb6:{NFSU2_TR(0x6d3eb6);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6d3eba:{NFSU2_TR(0x6d3eba);
{SPILL();c.pc=0x6d3ebau;V r_=user_op(c,524533,{rv<8>((R+4464)),rv<8>((R+4352))});SPILL();wv<8>((R+4464),r_);}
}
B6d3ebe:{NFSU2_TR(0x6d3ebe);
__builtin_memmove((R+4368),(R+4464),8);
}
B6d3ec1:{NFSU2_TR(0x6d3ec1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B6d3ec5:{NFSU2_TR(0x6d3ec5);
u8 U[10];
w1(U+0,u8(s32(r4(R+4432))<s32(r4(R+4384))));
w4(U+1,u32(r1(U+0)));
w4(R+4384,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8(s32(r4(R+4436))<s32(r4(R+4388))));
w4(U+6,u32(r1(U+5)));
w4(R+4388,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B6d3ec8:{NFSU2_TR(0x6d3ec8);
{SPILL();c.pc=0x6d3ec8u;V r_=user_op(c,524535,{rv<8>((R+4464)),rv<8>((R+4352))});SPILL();wv<8>((R+4464),r_);}
}
B6d3ecc:{NFSU2_TR(0x6d3ecc);
w8(R+4416,u64(m4(0x80bf70)));
}
B6d3ed3:{NFSU2_TR(0x6d3ed3);
{SPILL();c.pc=0x6d3ed3u;V r_=user_op(c,524536,{rv<8>((R+4464)),rv<8>((R+4368))});SPILL();wv<8>((R+4464),r_);}
}
B6d3ed7:{NFSU2_TR(0x6d3ed7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B6d3edb:{NFSU2_TR(0x6d3edb);
__builtin_memmove((R+4352),(R+4384),8);
}
B6d3ede:{NFSU2_TR(0x6d3ede);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4384))));
}
B6d3ee1:{NFSU2_TR(0x6d3ee1);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4352))));
w8(R+4352,u64(u64(r8(U+0))&u64(r8(R+4464))));
}
B6d3ee4:{NFSU2_TR(0x6d3ee4);
w8(R+4464,u64(m4(0x80bf68)));
}
B6d3eeb:{NFSU2_TR(0x6d3eeb);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4432))));
}
B6d3eee:{NFSU2_TR(0x6d3eee);
__builtin_memmove((R+4368),(R+4352),8);
}
B6d3ef1:{NFSU2_TR(0x6d3ef1);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6d3ef5:{NFSU2_TR(0x6d3ef5);
w8(R+4432,u64(m4(0x80bf64)));
}
B6d3efc:{NFSU2_TR(0x6d3efc);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B6d3f00:{NFSU2_TR(0x6d3f00);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6d3f04:{NFSU2_TR(0x6d3f04);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B6d3f08:{NFSU2_TR(0x6d3f08);
w8(R+4432,u64(m4(0x80bf6c)));
}
B6d3f0f:{NFSU2_TR(0x6d3f0f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B6d3f13:{NFSU2_TR(0x6d3f13);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B6d3f17:{NFSU2_TR(0x6d3f17);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B6d3f1b:{NFSU2_TR(0x6d3f1b);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6d3f1f:{NFSU2_TR(0x6d3f1f);
{SPILL();c.pc=0x6d3f1fu;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B6d3f23:{NFSU2_TR(0x6d3f23);
{SPILL();c.pc=0x6d3f23u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B6d3f27:{NFSU2_TR(0x6d3f27);
w8(R+4432,u64(m4(0x80bf78)));
}
B6d3f2e:{NFSU2_TR(0x6d3f2e);
{SPILL();c.pc=0x6d3f2eu;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B6d3f32:{NFSU2_TR(0x6d3f32);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B6d3f36:{NFSU2_TR(0x6d3f36);
__builtin_memmove((R+4416),(R+4384),8);
}
B6d3f39:{NFSU2_TR(0x6d3f39);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4384))));
w8(R+4384,u64(u64(r8(U+0))&u64(r8(R+4432))));
}
B6d3f3c:{NFSU2_TR(0x6d3f3c);
w8(R+4432,u64(m4(0x80bf74)));
}
B6d3f43:{NFSU2_TR(0x6d3f43);
__builtin_memmove((R+4464),(R+4416),8);
}
B6d3f46:{NFSU2_TR(0x6d3f46);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4448))));
}
B6d3f49:{NFSU2_TR(0x6d3f49);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6d3f4d:{NFSU2_TR(0x6d3f4d);
w8(R+4352,u64(m4(0x80bf34)));
}
B6d3f54:{NFSU2_TR(0x6d3f54);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6d3f58:{NFSU2_TR(0x6d3f58);
w4(R+4464,shl<u32>(r4(R+4464),u64(u32(0x1full))));
w4(R+4468,shl<u32>(r4(R+4468),u64(u32(0x1full))));
}
B6d3f5c:{NFSU2_TR(0x6d3f5c);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4416))));
w8(R+4416,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B6d3f5f:{NFSU2_TR(0x6d3f5f);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4448))));
}
B6d3f62:{NFSU2_TR(0x6d3f62);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6d3f66:{NFSU2_TR(0x6d3f66);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4400))));
}
B6d3f69:{NFSU2_TR(0x6d3f69);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4464))));
}
B6d3f6c:{NFSU2_TR(0x6d3f6c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6d3f70:{NFSU2_TR(0x6d3f70);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4400))));
w8(R+4400,u64(u64(r8(U+0))&u64(r8(R+4384))));
}
B6d3f73:{NFSU2_TR(0x6d3f73);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4400))));
}
B6d3f76:{NFSU2_TR(0x6d3f76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6d3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
