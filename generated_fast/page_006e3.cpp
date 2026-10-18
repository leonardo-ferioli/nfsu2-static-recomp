#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6e2(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e3,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e3,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 page_6e3(Cpu& c){return body_6e3(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e3(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e3002:goto L6e3002;
case 0x6e3005:c.instructions+=14;goto B6e3005;
case 0x6e3008:c.instructions+=13;goto B6e3008;
case 0x6e300a:c.instructions+=12;goto B6e300a;
case 0x6e300d:c.instructions+=11;goto B6e300d;
case 0x6e3010:c.instructions+=10;goto B6e3010;
case 0x6e3013:c.instructions+=9;goto B6e3013;
case 0x6e3016:c.instructions+=8;goto B6e3016;
case 0x6e3019:c.instructions+=7;goto B6e3019;
case 0x6e301c:c.instructions+=6;goto B6e301c;
case 0x6e301f:c.instructions+=5;goto B6e301f;
case 0x6e3022:c.instructions+=4;goto B6e3022;
case 0x6e3025:c.instructions+=3;goto B6e3025;
case 0x6e3027:c.instructions+=2;goto B6e3027;
case 0x6e302a:c.instructions+=1;goto B6e302a;
case 0x6e302c:goto L6e302c;
case 0x6e302e:goto L6e302e;
case 0x6e3031:c.instructions+=6;goto B6e3031;
case 0x6e3033:c.instructions+=5;goto B6e3033;
case 0x6e3036:c.instructions+=4;goto B6e3036;
case 0x6e3039:c.instructions+=3;goto B6e3039;
case 0x6e303b:c.instructions+=2;goto B6e303b;
case 0x6e303e:c.instructions+=1;goto B6e303e;
case 0x6e3041:goto L6e3041;
case 0x6e3043:c.instructions+=1;goto B6e3043;
case 0x6e3046:goto L6e3046;
case 0x6e3048:c.instructions+=7;goto B6e3048;
case 0x6e304b:c.instructions+=6;goto B6e304b;
case 0x6e3050:c.instructions+=5;goto B6e3050;
case 0x6e3052:c.instructions+=4;goto B6e3052;
case 0x6e3054:c.instructions+=3;goto B6e3054;
case 0x6e3057:c.instructions+=2;goto B6e3057;
case 0x6e305a:c.instructions+=1;goto B6e305a;
case 0x6e3060:goto L6e3060;
case 0x6e3064:c.instructions+=3;goto B6e3064;
case 0x6e3067:c.instructions+=2;goto B6e3067;
case 0x6e3069:c.instructions+=1;goto B6e3069;
case 0x6e306b:goto L6e306b;
case 0x6e306f:c.instructions+=36;goto B6e306f;
case 0x6e3072:c.instructions+=35;goto B6e3072;
case 0x6e3075:c.instructions+=34;goto B6e3075;
case 0x6e3079:c.instructions+=33;goto B6e3079;
case 0x6e307b:c.instructions+=32;goto B6e307b;
case 0x6e307e:c.instructions+=31;goto B6e307e;
case 0x6e3080:c.instructions+=30;goto B6e3080;
case 0x6e3083:c.instructions+=29;goto B6e3083;
case 0x6e3085:c.instructions+=28;goto B6e3085;
case 0x6e3088:c.instructions+=27;goto B6e3088;
case 0x6e308b:c.instructions+=26;goto B6e308b;
case 0x6e308e:c.instructions+=25;goto B6e308e;
case 0x6e3090:c.instructions+=24;goto B6e3090;
case 0x6e3093:c.instructions+=23;goto B6e3093;
case 0x6e3096:c.instructions+=22;goto B6e3096;
case 0x6e3098:c.instructions+=21;goto B6e3098;
case 0x6e309b:c.instructions+=20;goto B6e309b;
case 0x6e309e:c.instructions+=19;goto B6e309e;
case 0x6e30a1:c.instructions+=18;goto B6e30a1;
case 0x6e30a4:c.instructions+=17;goto B6e30a4;
case 0x6e30a7:c.instructions+=16;goto B6e30a7;
case 0x6e30aa:c.instructions+=15;goto B6e30aa;
case 0x6e30ad:c.instructions+=14;goto B6e30ad;
case 0x6e30b0:c.instructions+=13;goto B6e30b0;
case 0x6e30b3:c.instructions+=12;goto B6e30b3;
case 0x6e30b6:c.instructions+=11;goto B6e30b6;
case 0x6e30b9:c.instructions+=10;goto B6e30b9;
case 0x6e30bc:c.instructions+=9;goto B6e30bc;
case 0x6e30bf:c.instructions+=8;goto B6e30bf;
case 0x6e30c2:c.instructions+=7;goto B6e30c2;
case 0x6e30c5:c.instructions+=6;goto B6e30c5;
case 0x6e30c8:c.instructions+=5;goto B6e30c8;
case 0x6e30cb:c.instructions+=4;goto B6e30cb;
case 0x6e30ce:c.instructions+=3;goto B6e30ce;
case 0x6e30d0:c.instructions+=2;goto B6e30d0;
case 0x6e30d3:c.instructions+=1;goto B6e30d3;
case 0x6e30d5:goto L6e30d5;
case 0x6e30d7:goto L6e30d7;
case 0x6e30da:c.instructions+=6;goto B6e30da;
case 0x6e30dc:c.instructions+=5;goto B6e30dc;
case 0x6e30df:c.instructions+=4;goto B6e30df;
case 0x6e30e2:c.instructions+=3;goto B6e30e2;
case 0x6e30e4:c.instructions+=2;goto B6e30e4;
case 0x6e30e7:c.instructions+=1;goto B6e30e7;
case 0x6e30ea:goto L6e30ea;
case 0x6e30ec:c.instructions+=1;goto B6e30ec;
case 0x6e30ef:goto L6e30ef;
case 0x6e30f2:c.instructions+=8;goto B6e30f2;
case 0x6e30f4:c.instructions+=7;goto B6e30f4;
case 0x6e30f7:c.instructions+=6;goto B6e30f7;
case 0x6e30fc:c.instructions+=5;goto B6e30fc;
case 0x6e30fe:c.instructions+=4;goto B6e30fe;
case 0x6e3100:c.instructions+=3;goto B6e3100;
case 0x6e3103:c.instructions+=2;goto B6e3103;
case 0x6e3106:c.instructions+=1;goto B6e3106;
case 0x6e310c:goto L6e310c;
case 0x6e3110:c.instructions+=3;goto B6e3110;
case 0x6e3116:c.instructions+=2;goto B6e3116;
case 0x6e3118:c.instructions+=1;goto B6e3118;
case 0x6e311a:goto L6e311a;
case 0x6e311e:c.instructions+=36;goto B6e311e;
case 0x6e3121:c.instructions+=35;goto B6e3121;
case 0x6e3124:c.instructions+=34;goto B6e3124;
case 0x6e3128:c.instructions+=33;goto B6e3128;
case 0x6e312a:c.instructions+=32;goto B6e312a;
case 0x6e312d:c.instructions+=31;goto B6e312d;
case 0x6e312f:c.instructions+=30;goto B6e312f;
case 0x6e3132:c.instructions+=29;goto B6e3132;
case 0x6e3134:c.instructions+=28;goto B6e3134;
case 0x6e3137:c.instructions+=27;goto B6e3137;
case 0x6e313a:c.instructions+=26;goto B6e313a;
case 0x6e313d:c.instructions+=25;goto B6e313d;
case 0x6e313f:c.instructions+=24;goto B6e313f;
case 0x6e3142:c.instructions+=23;goto B6e3142;
case 0x6e3145:c.instructions+=22;goto B6e3145;
case 0x6e3147:c.instructions+=21;goto B6e3147;
case 0x6e314a:c.instructions+=20;goto B6e314a;
case 0x6e314d:c.instructions+=19;goto B6e314d;
case 0x6e3150:c.instructions+=18;goto B6e3150;
case 0x6e3153:c.instructions+=17;goto B6e3153;
case 0x6e3156:c.instructions+=16;goto B6e3156;
case 0x6e3159:c.instructions+=15;goto B6e3159;
case 0x6e315c:c.instructions+=14;goto B6e315c;
case 0x6e315f:c.instructions+=13;goto B6e315f;
case 0x6e3162:c.instructions+=12;goto B6e3162;
case 0x6e3165:c.instructions+=11;goto B6e3165;
case 0x6e3168:c.instructions+=10;goto B6e3168;
case 0x6e316b:c.instructions+=9;goto B6e316b;
case 0x6e316e:c.instructions+=8;goto B6e316e;
case 0x6e3171:c.instructions+=7;goto B6e3171;
case 0x6e3174:c.instructions+=6;goto B6e3174;
case 0x6e3177:c.instructions+=5;goto B6e3177;
case 0x6e317a:c.instructions+=4;goto B6e317a;
case 0x6e317d:c.instructions+=3;goto B6e317d;
case 0x6e317f:c.instructions+=2;goto B6e317f;
case 0x6e3182:c.instructions+=1;goto B6e3182;
case 0x6e3184:goto L6e3184;
case 0x6e3186:goto L6e3186;
case 0x6e3189:c.instructions+=6;goto B6e3189;
case 0x6e318b:c.instructions+=5;goto B6e318b;
case 0x6e318e:c.instructions+=4;goto B6e318e;
case 0x6e3191:c.instructions+=3;goto B6e3191;
case 0x6e3193:c.instructions+=2;goto B6e3193;
case 0x6e3196:c.instructions+=1;goto B6e3196;
case 0x6e3199:goto L6e3199;
case 0x6e319b:c.instructions+=1;goto B6e319b;
case 0x6e319e:goto L6e319e;
case 0x6e31a2:c.instructions+=9;goto B6e31a2;
case 0x6e31a8:c.instructions+=8;goto B6e31a8;
case 0x6e31ab:c.instructions+=7;goto B6e31ab;
case 0x6e31af:c.instructions+=6;goto B6e31af;
case 0x6e31b3:c.instructions+=5;goto B6e31b3;
case 0x6e31b6:c.instructions+=4;goto B6e31b6;
case 0x6e31b9:c.instructions+=3;goto B6e31b9;
case 0x6e31be:c.instructions+=2;goto B6e31be;
case 0x6e31c0:c.instructions+=1;goto B6e31c0;
case 0x6e31c6:goto L6e31c6;
case 0x6e31c8:c.instructions+=1;goto B6e31c8;
case 0x6e31ce:goto L6e31ce;
case 0x6e31d2:c.instructions+=9;goto B6e31d2;
case 0x6e31d6:c.instructions+=8;goto B6e31d6;
case 0x6e31d9:c.instructions+=7;goto B6e31d9;
case 0x6e31dc:c.instructions+=6;goto B6e31dc;
case 0x6e31de:c.instructions+=5;goto B6e31de;
case 0x6e31e1:c.instructions+=4;goto B6e31e1;
case 0x6e31e5:c.instructions+=3;goto B6e31e5;
case 0x6e31e9:c.instructions+=2;goto B6e31e9;
case 0x6e31ed:c.instructions+=1;goto B6e31ed;
case 0x6e31f0:goto L6e31f0;
case 0x6e31f2:c.instructions+=7;goto B6e31f2;
case 0x6e31f5:c.instructions+=6;goto B6e31f5;
case 0x6e31fa:c.instructions+=5;goto B6e31fa;
case 0x6e31fc:c.instructions+=4;goto B6e31fc;
case 0x6e31fe:c.instructions+=3;goto B6e31fe;
case 0x6e3201:c.instructions+=2;goto B6e3201;
case 0x6e3204:c.instructions+=1;goto B6e3204;
case 0x6e320a:goto L6e320a;
case 0x6e320c:c.instructions+=2;goto B6e320c;
case 0x6e320e:c.instructions+=1;goto B6e320e;
case 0x6e3210:goto L6e3210;
case 0x6e3214:c.instructions+=36;goto B6e3214;
case 0x6e3217:c.instructions+=35;goto B6e3217;
case 0x6e321a:c.instructions+=34;goto B6e321a;
case 0x6e321e:c.instructions+=33;goto B6e321e;
case 0x6e3220:c.instructions+=32;goto B6e3220;
case 0x6e3223:c.instructions+=31;goto B6e3223;
case 0x6e3225:c.instructions+=30;goto B6e3225;
case 0x6e3228:c.instructions+=29;goto B6e3228;
case 0x6e322a:c.instructions+=28;goto B6e322a;
case 0x6e322d:c.instructions+=27;goto B6e322d;
case 0x6e3230:c.instructions+=26;goto B6e3230;
case 0x6e3233:c.instructions+=25;goto B6e3233;
case 0x6e3235:c.instructions+=24;goto B6e3235;
case 0x6e3238:c.instructions+=23;goto B6e3238;
case 0x6e323b:c.instructions+=22;goto B6e323b;
case 0x6e323d:c.instructions+=21;goto B6e323d;
case 0x6e3240:c.instructions+=20;goto B6e3240;
case 0x6e3243:c.instructions+=19;goto B6e3243;
case 0x6e3246:c.instructions+=18;goto B6e3246;
case 0x6e3248:c.instructions+=17;goto B6e3248;
case 0x6e324b:c.instructions+=16;goto B6e324b;
case 0x6e324e:c.instructions+=15;goto B6e324e;
case 0x6e3251:c.instructions+=14;goto B6e3251;
case 0x6e3254:c.instructions+=13;goto B6e3254;
case 0x6e3256:c.instructions+=12;goto B6e3256;
case 0x6e3259:c.instructions+=11;goto B6e3259;
case 0x6e325c:c.instructions+=10;goto B6e325c;
case 0x6e325f:c.instructions+=9;goto B6e325f;
case 0x6e3262:c.instructions+=8;goto B6e3262;
case 0x6e3265:c.instructions+=7;goto B6e3265;
case 0x6e3268:c.instructions+=6;goto B6e3268;
case 0x6e326b:c.instructions+=5;goto B6e326b;
case 0x6e326e:c.instructions+=4;goto B6e326e;
case 0x6e3271:c.instructions+=3;goto B6e3271;
case 0x6e3273:c.instructions+=2;goto B6e3273;
case 0x6e3276:c.instructions+=1;goto B6e3276;
case 0x6e3278:goto L6e3278;
case 0x6e327a:goto L6e327a;
case 0x6e327d:c.instructions+=6;goto B6e327d;
case 0x6e327f:c.instructions+=5;goto B6e327f;
case 0x6e3282:c.instructions+=4;goto B6e3282;
case 0x6e3285:c.instructions+=3;goto B6e3285;
case 0x6e3287:c.instructions+=2;goto B6e3287;
case 0x6e328a:c.instructions+=1;goto B6e328a;
case 0x6e328d:goto L6e328d;
case 0x6e328f:c.instructions+=1;goto B6e328f;
case 0x6e3292:goto L6e3292;
case 0x6e3293:c.instructions+=4;goto B6e3293;
case 0x6e3296:c.instructions+=3;goto B6e3296;
case 0x6e3299:c.instructions+=2;goto B6e3299;
case 0x6e329b:c.instructions+=1;goto B6e329b;
case 0x6e32a1:goto L6e32a1;
case 0x6e32a6:goto L6e32a6;
case 0x6e32a9:c.instructions+=1;goto B6e32a9;
case 0x6e32af:goto L6e32af;
case 0x6e32b3:c.instructions+=3;goto B6e32b3;
case 0x6e32b9:c.instructions+=2;goto B6e32b9;
case 0x6e32be:c.instructions+=1;goto B6e32be;
case 0x6e32c1:goto L6e32c1;
case 0x6e32c5:c.instructions+=8;goto B6e32c5;
case 0x6e32c7:c.instructions+=7;goto B6e32c7;
case 0x6e32ca:c.instructions+=6;goto B6e32ca;
case 0x6e32cf:c.instructions+=5;goto B6e32cf;
case 0x6e32d1:c.instructions+=4;goto B6e32d1;
case 0x6e32d3:c.instructions+=3;goto B6e32d3;
case 0x6e32d6:c.instructions+=2;goto B6e32d6;
case 0x6e32da:c.instructions+=1;goto B6e32da;
case 0x6e32dc:goto L6e32dc;
case 0x6e32df:c.instructions+=27;goto B6e32df;
case 0x6e32e3:c.instructions+=26;goto B6e32e3;
case 0x6e32e6:c.instructions+=25;goto B6e32e6;
case 0x6e32e9:c.instructions+=24;goto B6e32e9;
case 0x6e32eb:c.instructions+=23;goto B6e32eb;
case 0x6e32ee:c.instructions+=22;goto B6e32ee;
case 0x6e32f0:c.instructions+=21;goto B6e32f0;
case 0x6e32f3:c.instructions+=20;goto B6e32f3;
case 0x6e32f6:c.instructions+=19;goto B6e32f6;
case 0x6e32f9:c.instructions+=18;goto B6e32f9;
case 0x6e32fc:c.instructions+=17;goto B6e32fc;
case 0x6e32ff:c.instructions+=16;goto B6e32ff;
case 0x6e3301:c.instructions+=15;goto B6e3301;
case 0x6e3304:c.instructions+=14;goto B6e3304;
case 0x6e3307:c.instructions+=13;goto B6e3307;
case 0x6e3309:c.instructions+=12;goto B6e3309;
case 0x6e330c:c.instructions+=11;goto B6e330c;
case 0x6e330f:c.instructions+=10;goto B6e330f;
case 0x6e3312:c.instructions+=9;goto B6e3312;
case 0x6e3315:c.instructions+=8;goto B6e3315;
case 0x6e3318:c.instructions+=7;goto B6e3318;
case 0x6e331b:c.instructions+=6;goto B6e331b;
case 0x6e331e:c.instructions+=5;goto B6e331e;
case 0x6e3321:c.instructions+=4;goto B6e3321;
case 0x6e3324:c.instructions+=3;goto B6e3324;
case 0x6e3327:c.instructions+=2;goto B6e3327;
case 0x6e3329:c.instructions+=1;goto B6e3329;
case 0x6e332c:goto L6e332c;
case 0x6e332f:c.instructions+=9;goto B6e332f;
case 0x6e3331:c.instructions+=8;goto B6e3331;
case 0x6e3334:c.instructions+=7;goto B6e3334;
case 0x6e3339:c.instructions+=6;goto B6e3339;
case 0x6e333b:c.instructions+=5;goto B6e333b;
case 0x6e333e:c.instructions+=4;goto B6e333e;
case 0x6e3340:c.instructions+=3;goto B6e3340;
case 0x6e3344:c.instructions+=2;goto B6e3344;
case 0x6e3348:c.instructions+=1;goto B6e3348;
case 0x6e334a:goto L6e334a;
case 0x6e334c:c.instructions+=27;goto B6e334c;
case 0x6e3350:c.instructions+=26;goto B6e3350;
case 0x6e3353:c.instructions+=25;goto B6e3353;
case 0x6e3356:c.instructions+=24;goto B6e3356;
case 0x6e3358:c.instructions+=23;goto B6e3358;
case 0x6e335b:c.instructions+=22;goto B6e335b;
case 0x6e335d:c.instructions+=21;goto B6e335d;
case 0x6e3360:c.instructions+=20;goto B6e3360;
case 0x6e3363:c.instructions+=19;goto B6e3363;
case 0x6e3365:c.instructions+=18;goto B6e3365;
case 0x6e3368:c.instructions+=17;goto B6e3368;
case 0x6e336b:c.instructions+=16;goto B6e336b;
case 0x6e336d:c.instructions+=15;goto B6e336d;
case 0x6e3370:c.instructions+=14;goto B6e3370;
case 0x6e3373:c.instructions+=13;goto B6e3373;
case 0x6e3375:c.instructions+=12;goto B6e3375;
case 0x6e3378:c.instructions+=11;goto B6e3378;
case 0x6e337b:c.instructions+=10;goto B6e337b;
case 0x6e337e:c.instructions+=9;goto B6e337e;
case 0x6e3381:c.instructions+=8;goto B6e3381;
case 0x6e3384:c.instructions+=7;goto B6e3384;
case 0x6e3387:c.instructions+=6;goto B6e3387;
case 0x6e338a:c.instructions+=5;goto B6e338a;
case 0x6e338d:c.instructions+=4;goto B6e338d;
case 0x6e3390:c.instructions+=3;goto B6e3390;
case 0x6e3393:c.instructions+=2;goto B6e3393;
case 0x6e3395:c.instructions+=1;goto B6e3395;
case 0x6e3398:goto L6e3398;
case 0x6e339a:c.instructions+=7;goto B6e339a;
case 0x6e339d:c.instructions+=6;goto B6e339d;
case 0x6e33a2:c.instructions+=5;goto B6e33a2;
case 0x6e33a4:c.instructions+=4;goto B6e33a4;
case 0x6e33a6:c.instructions+=3;goto B6e33a6;
case 0x6e33a9:c.instructions+=2;goto B6e33a9;
case 0x6e33ad:c.instructions+=1;goto B6e33ad;
case 0x6e33af:goto L6e33af;
case 0x6e33b2:c.instructions+=27;goto B6e33b2;
case 0x6e33b6:c.instructions+=26;goto B6e33b6;
case 0x6e33b9:c.instructions+=25;goto B6e33b9;
case 0x6e33bc:c.instructions+=24;goto B6e33bc;
case 0x6e33be:c.instructions+=23;goto B6e33be;
case 0x6e33c1:c.instructions+=22;goto B6e33c1;
case 0x6e33c3:c.instructions+=21;goto B6e33c3;
case 0x6e33c6:c.instructions+=20;goto B6e33c6;
case 0x6e33c9:c.instructions+=19;goto B6e33c9;
case 0x6e33cc:c.instructions+=18;goto B6e33cc;
case 0x6e33cf:c.instructions+=17;goto B6e33cf;
case 0x6e33d2:c.instructions+=16;goto B6e33d2;
case 0x6e33d4:c.instructions+=15;goto B6e33d4;
case 0x6e33d7:c.instructions+=14;goto B6e33d7;
case 0x6e33da:c.instructions+=13;goto B6e33da;
case 0x6e33dc:c.instructions+=12;goto B6e33dc;
case 0x6e33df:c.instructions+=11;goto B6e33df;
case 0x6e33e2:c.instructions+=10;goto B6e33e2;
case 0x6e33e5:c.instructions+=9;goto B6e33e5;
case 0x6e33e8:c.instructions+=8;goto B6e33e8;
case 0x6e33eb:c.instructions+=7;goto B6e33eb;
case 0x6e33ee:c.instructions+=6;goto B6e33ee;
case 0x6e33f1:c.instructions+=5;goto B6e33f1;
case 0x6e33f4:c.instructions+=4;goto B6e33f4;
case 0x6e33f7:c.instructions+=3;goto B6e33f7;
case 0x6e33fa:c.instructions+=2;goto B6e33fa;
case 0x6e33fc:c.instructions+=1;goto B6e33fc;
case 0x6e33ff:goto L6e33ff;
case 0x6e3402:c.instructions+=8;goto B6e3402;
case 0x6e3404:c.instructions+=7;goto B6e3404;
case 0x6e3407:c.instructions+=6;goto B6e3407;
case 0x6e340c:c.instructions+=5;goto B6e340c;
case 0x6e340e:c.instructions+=4;goto B6e340e;
case 0x6e3412:c.instructions+=3;goto B6e3412;
case 0x6e3415:c.instructions+=2;goto B6e3415;
case 0x6e3418:c.instructions+=1;goto B6e3418;
case 0x6e341a:goto L6e341a;
case 0x6e3420:c.instructions+=27;goto B6e3420;
case 0x6e3424:c.instructions+=26;goto B6e3424;
case 0x6e3427:c.instructions+=25;goto B6e3427;
case 0x6e342a:c.instructions+=24;goto B6e342a;
case 0x6e342c:c.instructions+=23;goto B6e342c;
case 0x6e342f:c.instructions+=22;goto B6e342f;
case 0x6e3431:c.instructions+=21;goto B6e3431;
case 0x6e3434:c.instructions+=20;goto B6e3434;
case 0x6e3437:c.instructions+=19;goto B6e3437;
case 0x6e343a:c.instructions+=18;goto B6e343a;
case 0x6e343d:c.instructions+=17;goto B6e343d;
case 0x6e3440:c.instructions+=16;goto B6e3440;
case 0x6e3442:c.instructions+=15;goto B6e3442;
case 0x6e3445:c.instructions+=14;goto B6e3445;
case 0x6e3448:c.instructions+=13;goto B6e3448;
case 0x6e344a:c.instructions+=12;goto B6e344a;
case 0x6e344d:c.instructions+=11;goto B6e344d;
case 0x6e3450:c.instructions+=10;goto B6e3450;
case 0x6e3453:c.instructions+=9;goto B6e3453;
case 0x6e3456:c.instructions+=8;goto B6e3456;
case 0x6e3459:c.instructions+=7;goto B6e3459;
case 0x6e345c:c.instructions+=6;goto B6e345c;
case 0x6e345f:c.instructions+=5;goto B6e345f;
case 0x6e3462:c.instructions+=4;goto B6e3462;
case 0x6e3465:c.instructions+=3;goto B6e3465;
case 0x6e346b:c.instructions+=2;goto B6e346b;
case 0x6e346d:c.instructions+=1;goto B6e346d;
case 0x6e3470:goto L6e3470;
case 0x6e3474:c.instructions+=7;goto B6e3474;
case 0x6e3477:c.instructions+=6;goto B6e3477;
case 0x6e347a:c.instructions+=5;goto B6e347a;
case 0x6e347d:c.instructions+=4;goto B6e347d;
case 0x6e3482:c.instructions+=3;goto B6e3482;
case 0x6e3488:c.instructions+=2;goto B6e3488;
case 0x6e348a:c.instructions+=1;goto B6e348a;
case 0x6e3490:goto L6e3490;
case 0x6e3494:goto L6e3494;
case 0x6e3496:c.instructions+=1;goto B6e3496;
case 0x6e349c:goto L6e349c;
case 0x6e34a0:c.instructions+=8;goto B6e34a0;
case 0x6e34a4:c.instructions+=7;goto B6e34a4;
case 0x6e34a7:c.instructions+=6;goto B6e34a7;
case 0x6e34aa:c.instructions+=5;goto B6e34aa;
case 0x6e34ae:c.instructions+=4;goto B6e34ae;
case 0x6e34b0:c.instructions+=3;goto B6e34b0;
case 0x6e34b3:c.instructions+=2;goto B6e34b3;
case 0x6e34b7:c.instructions+=1;goto B6e34b7;
case 0x6e34c0:goto L6e34c0;
case 0x6e34c2:c.instructions+=7;goto B6e34c2;
case 0x6e34c5:c.instructions+=6;goto B6e34c5;
case 0x6e34ca:c.instructions+=5;goto B6e34ca;
case 0x6e34cc:c.instructions+=4;goto B6e34cc;
case 0x6e34ce:c.instructions+=3;goto B6e34ce;
case 0x6e34d1:c.instructions+=2;goto B6e34d1;
case 0x6e34d4:c.instructions+=1;goto B6e34d4;
case 0x6e34d6:goto L6e34d6;
case 0x6e34d8:c.instructions+=27;goto B6e34d8;
case 0x6e34dc:c.instructions+=26;goto B6e34dc;
case 0x6e34df:c.instructions+=25;goto B6e34df;
case 0x6e34e2:c.instructions+=24;goto B6e34e2;
case 0x6e34e4:c.instructions+=23;goto B6e34e4;
case 0x6e34e7:c.instructions+=22;goto B6e34e7;
case 0x6e34e9:c.instructions+=21;goto B6e34e9;
case 0x6e34ec:c.instructions+=20;goto B6e34ec;
case 0x6e34ef:c.instructions+=19;goto B6e34ef;
case 0x6e34f1:c.instructions+=18;goto B6e34f1;
case 0x6e34f4:c.instructions+=17;goto B6e34f4;
case 0x6e34f7:c.instructions+=16;goto B6e34f7;
case 0x6e34f9:c.instructions+=15;goto B6e34f9;
case 0x6e34fc:c.instructions+=14;goto B6e34fc;
case 0x6e34ff:c.instructions+=13;goto B6e34ff;
case 0x6e3501:c.instructions+=12;goto B6e3501;
case 0x6e3504:c.instructions+=11;goto B6e3504;
case 0x6e3507:c.instructions+=10;goto B6e3507;
case 0x6e350a:c.instructions+=9;goto B6e350a;
case 0x6e350d:c.instructions+=8;goto B6e350d;
case 0x6e3510:c.instructions+=7;goto B6e3510;
case 0x6e3513:c.instructions+=6;goto B6e3513;
case 0x6e3516:c.instructions+=5;goto B6e3516;
case 0x6e3519:c.instructions+=4;goto B6e3519;
case 0x6e351c:c.instructions+=3;goto B6e351c;
case 0x6e351f:c.instructions+=2;goto B6e351f;
case 0x6e3521:c.instructions+=1;goto B6e3521;
case 0x6e3524:goto L6e3524;
case 0x6e3525:c.instructions+=4;goto B6e3525;
case 0x6e3528:c.instructions+=3;goto B6e3528;
case 0x6e352b:c.instructions+=2;goto B6e352b;
case 0x6e352d:c.instructions+=1;goto B6e352d;
case 0x6e352f:goto L6e352f;
case 0x6e3533:c.instructions+=2;goto B6e3533;
case 0x6e3535:c.instructions+=1;goto B6e3535;
case 0x6e353b:goto L6e353b;
case 0x6e353f:c.instructions+=32;goto B6e353f;
case 0x6e3542:c.instructions+=31;goto B6e3542;
case 0x6e3544:c.instructions+=30;goto B6e3544;
case 0x6e3546:c.instructions+=29;goto B6e3546;
case 0x6e354a:c.instructions+=28;goto B6e354a;
case 0x6e354e:c.instructions+=27;goto B6e354e;
case 0x6e3551:c.instructions+=26;goto B6e3551;
case 0x6e3553:c.instructions+=25;goto B6e3553;
case 0x6e3557:c.instructions+=24;goto B6e3557;
case 0x6e355a:c.instructions+=23;goto B6e355a;
case 0x6e355d:c.instructions+=22;goto B6e355d;
case 0x6e3560:c.instructions+=21;goto B6e3560;
case 0x6e3564:c.instructions+=20;goto B6e3564;
case 0x6e3565:c.instructions+=19;goto B6e3565;
case 0x6e3567:c.instructions+=18;goto B6e3567;
case 0x6e356b:c.instructions+=17;goto B6e356b;
case 0x6e356e:c.instructions+=16;goto B6e356e;
case 0x6e3570:c.instructions+=15;goto B6e3570;
case 0x6e3573:c.instructions+=14;goto B6e3573;
case 0x6e3577:c.instructions+=13;goto B6e3577;
case 0x6e3579:c.instructions+=12;goto B6e3579;
case 0x6e357a:c.instructions+=11;goto B6e357a;
case 0x6e357d:c.instructions+=10;goto B6e357d;
case 0x6e357f:c.instructions+=9;goto B6e357f;
case 0x6e3582:c.instructions+=8;goto B6e3582;
case 0x6e3586:c.instructions+=7;goto B6e3586;
case 0x6e3588:c.instructions+=6;goto B6e3588;
case 0x6e3589:c.instructions+=5;goto B6e3589;
case 0x6e358c:c.instructions+=4;goto B6e358c;
case 0x6e358f:c.instructions+=3;goto B6e358f;
case 0x6e3590:c.instructions+=2;goto B6e3590;
case 0x6e3593:c.instructions+=1;goto B6e3593;
case 0x6e3596:goto L6e3596;
case 0x6e359a:c.instructions+=2;goto B6e359a;
case 0x6e359c:c.instructions+=1;goto B6e359c;
case 0x6e35a2:goto L6e35a2;
case 0x6e35a4:c.instructions+=2;goto B6e35a4;
case 0x6e35a7:c.instructions+=1;goto B6e35a7;
case 0x6e35ad:goto L6e35ad;
case 0x6e35b3:c.instructions+=3;goto B6e35b3;
case 0x6e35b8:c.instructions+=2;goto B6e35b8;
case 0x6e35bc:c.instructions+=1;goto B6e35bc;
case 0x6e35bf:goto L6e35bf;
case 0x6e35c2:c.instructions+=2;goto B6e35c2;
case 0x6e35c4:c.instructions+=1;goto B6e35c4;
case 0x6e35c6:goto L6e35c6;
case 0x6e35c9:c.instructions+=35;goto B6e35c9;
case 0x6e35cc:c.instructions+=34;goto B6e35cc;
case 0x6e35d0:c.instructions+=33;goto B6e35d0;
case 0x6e35d2:c.instructions+=32;goto B6e35d2;
case 0x6e35d5:c.instructions+=31;goto B6e35d5;
case 0x6e35d7:c.instructions+=30;goto B6e35d7;
case 0x6e35da:c.instructions+=29;goto B6e35da;
case 0x6e35dc:c.instructions+=28;goto B6e35dc;
case 0x6e35df:c.instructions+=27;goto B6e35df;
case 0x6e35e2:c.instructions+=26;goto B6e35e2;
case 0x6e35e5:c.instructions+=25;goto B6e35e5;
case 0x6e35e7:c.instructions+=24;goto B6e35e7;
case 0x6e35ea:c.instructions+=23;goto B6e35ea;
case 0x6e35ed:c.instructions+=22;goto B6e35ed;
case 0x6e35ef:c.instructions+=21;goto B6e35ef;
case 0x6e35f2:c.instructions+=20;goto B6e35f2;
case 0x6e35f5:c.instructions+=19;goto B6e35f5;
case 0x6e35f8:c.instructions+=18;goto B6e35f8;
case 0x6e35fb:c.instructions+=17;goto B6e35fb;
case 0x6e35fe:c.instructions+=16;goto B6e35fe;
case 0x6e3601:c.instructions+=15;goto B6e3601;
case 0x6e3604:c.instructions+=14;goto B6e3604;
case 0x6e3607:c.instructions+=13;goto B6e3607;
case 0x6e360a:c.instructions+=12;goto B6e360a;
case 0x6e360d:c.instructions+=11;goto B6e360d;
case 0x6e3610:c.instructions+=10;goto B6e3610;
case 0x6e3613:c.instructions+=9;goto B6e3613;
case 0x6e3616:c.instructions+=8;goto B6e3616;
case 0x6e3619:c.instructions+=7;goto B6e3619;
case 0x6e361c:c.instructions+=6;goto B6e361c;
case 0x6e361f:c.instructions+=5;goto B6e361f;
case 0x6e3622:c.instructions+=4;goto B6e3622;
case 0x6e3625:c.instructions+=3;goto B6e3625;
case 0x6e3627:c.instructions+=2;goto B6e3627;
case 0x6e362a:c.instructions+=1;goto B6e362a;
case 0x6e362c:goto L6e362c;
case 0x6e362e:goto L6e362e;
case 0x6e3631:c.instructions+=6;goto B6e3631;
case 0x6e3633:c.instructions+=5;goto B6e3633;
case 0x6e3636:c.instructions+=4;goto B6e3636;
case 0x6e3639:c.instructions+=3;goto B6e3639;
case 0x6e363b:c.instructions+=2;goto B6e363b;
case 0x6e363e:c.instructions+=1;goto B6e363e;
case 0x6e3641:goto L6e3641;
case 0x6e3643:c.instructions+=1;goto B6e3643;
case 0x6e3646:goto L6e3646;
case 0x6e364a:c.instructions+=4;goto B6e364a;
case 0x6e364c:c.instructions+=3;goto B6e364c;
case 0x6e364f:c.instructions+=2;goto B6e364f;
case 0x6e3651:c.instructions+=1;goto B6e3651;
case 0x6e3653:goto L6e3653;
case 0x6e3656:c.instructions+=35;goto B6e3656;
case 0x6e3659:c.instructions+=34;goto B6e3659;
case 0x6e365d:c.instructions+=33;goto B6e365d;
case 0x6e365f:c.instructions+=32;goto B6e365f;
case 0x6e3662:c.instructions+=31;goto B6e3662;
case 0x6e3664:c.instructions+=30;goto B6e3664;
case 0x6e3667:c.instructions+=29;goto B6e3667;
case 0x6e3669:c.instructions+=28;goto B6e3669;
case 0x6e366c:c.instructions+=27;goto B6e366c;
case 0x6e366f:c.instructions+=26;goto B6e366f;
case 0x6e3672:c.instructions+=25;goto B6e3672;
case 0x6e3674:c.instructions+=24;goto B6e3674;
case 0x6e3677:c.instructions+=23;goto B6e3677;
case 0x6e367a:c.instructions+=22;goto B6e367a;
case 0x6e367c:c.instructions+=21;goto B6e367c;
case 0x6e367f:c.instructions+=20;goto B6e367f;
case 0x6e3682:c.instructions+=19;goto B6e3682;
case 0x6e3685:c.instructions+=18;goto B6e3685;
case 0x6e3687:c.instructions+=17;goto B6e3687;
case 0x6e368a:c.instructions+=16;goto B6e368a;
case 0x6e368d:c.instructions+=15;goto B6e368d;
case 0x6e3690:c.instructions+=14;goto B6e3690;
case 0x6e3693:c.instructions+=13;goto B6e3693;
case 0x6e3695:c.instructions+=12;goto B6e3695;
case 0x6e3698:c.instructions+=11;goto B6e3698;
case 0x6e369b:c.instructions+=10;goto B6e369b;
case 0x6e369e:c.instructions+=9;goto B6e369e;
case 0x6e36a1:c.instructions+=8;goto B6e36a1;
case 0x6e36a4:c.instructions+=7;goto B6e36a4;
case 0x6e36a7:c.instructions+=6;goto B6e36a7;
case 0x6e36aa:c.instructions+=5;goto B6e36aa;
case 0x6e36ad:c.instructions+=4;goto B6e36ad;
case 0x6e36b0:c.instructions+=3;goto B6e36b0;
case 0x6e36b2:c.instructions+=2;goto B6e36b2;
case 0x6e36b5:c.instructions+=1;goto B6e36b5;
case 0x6e36b7:goto L6e36b7;
case 0x6e36b9:goto L6e36b9;
case 0x6e36bc:c.instructions+=6;goto B6e36bc;
case 0x6e36be:c.instructions+=5;goto B6e36be;
case 0x6e36c1:c.instructions+=4;goto B6e36c1;
case 0x6e36c4:c.instructions+=3;goto B6e36c4;
case 0x6e36c6:c.instructions+=2;goto B6e36c6;
case 0x6e36c9:c.instructions+=1;goto B6e36c9;
case 0x6e36cc:goto L6e36cc;
case 0x6e36ce:c.instructions+=1;goto B6e36ce;
case 0x6e36d1:goto L6e36d1;
case 0x6e36d5:c.instructions+=3;goto B6e36d5;
case 0x6e36d8:c.instructions+=2;goto B6e36d8;
case 0x6e36da:c.instructions+=1;goto B6e36da;
case 0x6e36dc:goto L6e36dc;
case 0x6e36df:c.instructions+=35;goto B6e36df;
case 0x6e36e2:c.instructions+=34;goto B6e36e2;
case 0x6e36e6:c.instructions+=33;goto B6e36e6;
case 0x6e36e8:c.instructions+=32;goto B6e36e8;
case 0x6e36eb:c.instructions+=31;goto B6e36eb;
case 0x6e36ed:c.instructions+=30;goto B6e36ed;
case 0x6e36f0:c.instructions+=29;goto B6e36f0;
case 0x6e36f2:c.instructions+=28;goto B6e36f2;
case 0x6e36f5:c.instructions+=27;goto B6e36f5;
case 0x6e36f8:c.instructions+=26;goto B6e36f8;
case 0x6e36fb:c.instructions+=25;goto B6e36fb;
case 0x6e36fd:c.instructions+=24;goto B6e36fd;
case 0x6e3700:c.instructions+=23;goto B6e3700;
case 0x6e3703:c.instructions+=22;goto B6e3703;
case 0x6e3705:c.instructions+=21;goto B6e3705;
case 0x6e3708:c.instructions+=20;goto B6e3708;
case 0x6e370b:c.instructions+=19;goto B6e370b;
case 0x6e370e:c.instructions+=18;goto B6e370e;
case 0x6e3711:c.instructions+=17;goto B6e3711;
case 0x6e3714:c.instructions+=16;goto B6e3714;
case 0x6e3717:c.instructions+=15;goto B6e3717;
case 0x6e371a:c.instructions+=14;goto B6e371a;
case 0x6e371d:c.instructions+=13;goto B6e371d;
case 0x6e3720:c.instructions+=12;goto B6e3720;
case 0x6e3723:c.instructions+=11;goto B6e3723;
case 0x6e3726:c.instructions+=10;goto B6e3726;
case 0x6e3729:c.instructions+=9;goto B6e3729;
case 0x6e372c:c.instructions+=8;goto B6e372c;
case 0x6e372f:c.instructions+=7;goto B6e372f;
case 0x6e3732:c.instructions+=6;goto B6e3732;
case 0x6e3735:c.instructions+=5;goto B6e3735;
case 0x6e3738:c.instructions+=4;goto B6e3738;
case 0x6e373b:c.instructions+=3;goto B6e373b;
case 0x6e373d:c.instructions+=2;goto B6e373d;
case 0x6e3740:c.instructions+=1;goto B6e3740;
case 0x6e3742:goto L6e3742;
case 0x6e3744:goto L6e3744;
case 0x6e3747:c.instructions+=6;goto B6e3747;
case 0x6e3749:c.instructions+=5;goto B6e3749;
case 0x6e374c:c.instructions+=4;goto B6e374c;
case 0x6e374f:c.instructions+=3;goto B6e374f;
case 0x6e3751:c.instructions+=2;goto B6e3751;
case 0x6e3754:c.instructions+=1;goto B6e3754;
case 0x6e3757:goto L6e3757;
case 0x6e3759:c.instructions+=1;goto B6e3759;
case 0x6e375c:goto L6e375c;
case 0x6e3760:c.instructions+=4;goto B6e3760;
case 0x6e3766:c.instructions+=3;goto B6e3766;
case 0x6e3769:c.instructions+=2;goto B6e3769;
case 0x6e376b:c.instructions+=1;goto B6e376b;
case 0x6e376d:goto L6e376d;
case 0x6e3770:c.instructions+=35;goto B6e3770;
case 0x6e3773:c.instructions+=34;goto B6e3773;
case 0x6e3777:c.instructions+=33;goto B6e3777;
case 0x6e3779:c.instructions+=32;goto B6e3779;
case 0x6e377c:c.instructions+=31;goto B6e377c;
case 0x6e377e:c.instructions+=30;goto B6e377e;
case 0x6e3781:c.instructions+=29;goto B6e3781;
case 0x6e3783:c.instructions+=28;goto B6e3783;
case 0x6e3786:c.instructions+=27;goto B6e3786;
case 0x6e3789:c.instructions+=26;goto B6e3789;
case 0x6e378c:c.instructions+=25;goto B6e378c;
case 0x6e378e:c.instructions+=24;goto B6e378e;
case 0x6e3791:c.instructions+=23;goto B6e3791;
case 0x6e3794:c.instructions+=22;goto B6e3794;
case 0x6e3796:c.instructions+=21;goto B6e3796;
case 0x6e3799:c.instructions+=20;goto B6e3799;
case 0x6e379c:c.instructions+=19;goto B6e379c;
case 0x6e379f:c.instructions+=18;goto B6e379f;
case 0x6e37a2:c.instructions+=17;goto B6e37a2;
case 0x6e37a5:c.instructions+=16;goto B6e37a5;
case 0x6e37a8:c.instructions+=15;goto B6e37a8;
case 0x6e37ab:c.instructions+=14;goto B6e37ab;
case 0x6e37ae:c.instructions+=13;goto B6e37ae;
case 0x6e37b1:c.instructions+=12;goto B6e37b1;
case 0x6e37b4:c.instructions+=11;goto B6e37b4;
case 0x6e37b7:c.instructions+=10;goto B6e37b7;
case 0x6e37ba:c.instructions+=9;goto B6e37ba;
case 0x6e37bd:c.instructions+=8;goto B6e37bd;
case 0x6e37c0:c.instructions+=7;goto B6e37c0;
case 0x6e37c3:c.instructions+=6;goto B6e37c3;
case 0x6e37c6:c.instructions+=5;goto B6e37c6;
case 0x6e37c9:c.instructions+=4;goto B6e37c9;
case 0x6e37cc:c.instructions+=3;goto B6e37cc;
case 0x6e37ce:c.instructions+=2;goto B6e37ce;
case 0x6e37d1:c.instructions+=1;goto B6e37d1;
case 0x6e37d3:goto L6e37d3;
case 0x6e37d5:goto L6e37d5;
case 0x6e37d8:c.instructions+=6;goto B6e37d8;
case 0x6e37da:c.instructions+=5;goto B6e37da;
case 0x6e37dd:c.instructions+=4;goto B6e37dd;
case 0x6e37e0:c.instructions+=3;goto B6e37e0;
case 0x6e37e2:c.instructions+=2;goto B6e37e2;
case 0x6e37e5:c.instructions+=1;goto B6e37e5;
case 0x6e37e8:goto L6e37e8;
case 0x6e37ea:c.instructions+=1;goto B6e37ea;
case 0x6e37ed:goto L6e37ed;
case 0x6e37f1:c.instructions+=8;goto B6e37f1;
case 0x6e37f4:c.instructions+=7;goto B6e37f4;
case 0x6e37fa:c.instructions+=6;goto B6e37fa;
case 0x6e37fd:c.instructions+=5;goto B6e37fd;
case 0x6e3800:c.instructions+=4;goto B6e3800;
case 0x6e3805:c.instructions+=3;goto B6e3805;
case 0x6e3807:c.instructions+=2;goto B6e3807;
case 0x6e380b:c.instructions+=1;goto B6e380b;
case 0x6e3811:goto L6e3811;
case 0x6e3815:goto L6e3815;
case 0x6e3817:c.instructions+=1;goto B6e3817;
case 0x6e381d:goto L6e381d;
case 0x6e3820:c.instructions+=5;goto B6e3820;
case 0x6e3823:c.instructions+=4;goto B6e3823;
case 0x6e3827:c.instructions+=3;goto B6e3827;
case 0x6e3829:c.instructions+=2;goto B6e3829;
case 0x6e382c:c.instructions+=1;goto B6e382c;
case 0x6e3830:goto L6e3830;
case 0x6e3832:c.instructions+=2;goto B6e3832;
case 0x6e3834:c.instructions+=1;goto B6e3834;
case 0x6e3836:goto L6e3836;
case 0x6e3839:c.instructions+=35;goto B6e3839;
case 0x6e383c:c.instructions+=34;goto B6e383c;
case 0x6e3840:c.instructions+=33;goto B6e3840;
case 0x6e3842:c.instructions+=32;goto B6e3842;
case 0x6e3845:c.instructions+=31;goto B6e3845;
case 0x6e3847:c.instructions+=30;goto B6e3847;
case 0x6e384a:c.instructions+=29;goto B6e384a;
case 0x6e384c:c.instructions+=28;goto B6e384c;
case 0x6e384f:c.instructions+=27;goto B6e384f;
case 0x6e3852:c.instructions+=26;goto B6e3852;
case 0x6e3855:c.instructions+=25;goto B6e3855;
case 0x6e3857:c.instructions+=24;goto B6e3857;
case 0x6e385a:c.instructions+=23;goto B6e385a;
case 0x6e385d:c.instructions+=22;goto B6e385d;
case 0x6e385f:c.instructions+=21;goto B6e385f;
case 0x6e3862:c.instructions+=20;goto B6e3862;
case 0x6e3865:c.instructions+=19;goto B6e3865;
case 0x6e3868:c.instructions+=18;goto B6e3868;
case 0x6e386a:c.instructions+=17;goto B6e386a;
case 0x6e386d:c.instructions+=16;goto B6e386d;
case 0x6e3870:c.instructions+=15;goto B6e3870;
case 0x6e3873:c.instructions+=14;goto B6e3873;
case 0x6e3876:c.instructions+=13;goto B6e3876;
case 0x6e3878:c.instructions+=12;goto B6e3878;
case 0x6e387b:c.instructions+=11;goto B6e387b;
case 0x6e387e:c.instructions+=10;goto B6e387e;
case 0x6e3881:c.instructions+=9;goto B6e3881;
case 0x6e3884:c.instructions+=8;goto B6e3884;
case 0x6e3887:c.instructions+=7;goto B6e3887;
case 0x6e388a:c.instructions+=6;goto B6e388a;
case 0x6e388d:c.instructions+=5;goto B6e388d;
case 0x6e3890:c.instructions+=4;goto B6e3890;
case 0x6e3893:c.instructions+=3;goto B6e3893;
case 0x6e3895:c.instructions+=2;goto B6e3895;
case 0x6e3898:c.instructions+=1;goto B6e3898;
case 0x6e389a:goto L6e389a;
case 0x6e389c:goto L6e389c;
case 0x6e389f:c.instructions+=6;goto B6e389f;
case 0x6e38a1:c.instructions+=5;goto B6e38a1;
case 0x6e38a4:c.instructions+=4;goto B6e38a4;
case 0x6e38a7:c.instructions+=3;goto B6e38a7;
case 0x6e38a9:c.instructions+=2;goto B6e38a9;
case 0x6e38ac:c.instructions+=1;goto B6e38ac;
case 0x6e38af:goto L6e38af;
case 0x6e38b1:c.instructions+=1;goto B6e38b1;
case 0x6e38b4:goto L6e38b4;
case 0x6e38b5:c.instructions+=4;goto B6e38b5;
case 0x6e38b8:c.instructions+=3;goto B6e38b8;
case 0x6e38bb:c.instructions+=2;goto B6e38bb;
case 0x6e38bd:c.instructions+=1;goto B6e38bd;
case 0x6e38c3:goto L6e38c3;
case 0x6e38c8:goto L6e38c8;
case 0x6e38ca:c.instructions+=2;goto B6e38ca;
case 0x6e38cd:c.instructions+=1;goto B6e38cd;
case 0x6e38d3:goto L6e38d3;
case 0x6e38d7:c.instructions+=3;goto B6e38d7;
case 0x6e38dd:c.instructions+=2;goto B6e38dd;
case 0x6e38e2:c.instructions+=1;goto B6e38e2;
case 0x6e38e5:goto L6e38e5;
case 0x6e38e8:c.instructions+=114;goto B6e38e8;
case 0x6e38eb:c.instructions+=113;goto B6e38eb;
case 0x6e38ee:c.instructions+=112;goto B6e38ee;
case 0x6e38f1:c.instructions+=111;goto B6e38f1;
case 0x6e38f4:c.instructions+=110;goto B6e38f4;
case 0x6e38f7:c.instructions+=109;goto B6e38f7;
case 0x6e38fb:c.instructions+=108;goto B6e38fb;
case 0x6e38fe:c.instructions+=107;goto B6e38fe;
case 0x6e3902:c.instructions+=106;goto B6e3902;
case 0x6e3905:c.instructions+=105;goto B6e3905;
case 0x6e3907:c.instructions+=104;goto B6e3907;
case 0x6e3909:c.instructions+=103;goto B6e3909;
case 0x6e390c:c.instructions+=102;goto B6e390c;
case 0x6e390f:c.instructions+=101;goto B6e390f;
case 0x6e3911:c.instructions+=100;goto B6e3911;
case 0x6e3914:c.instructions+=99;goto B6e3914;
case 0x6e3917:c.instructions+=98;goto B6e3917;
case 0x6e391a:c.instructions+=97;goto B6e391a;
case 0x6e391d:c.instructions+=96;goto B6e391d;
case 0x6e3920:c.instructions+=95;goto B6e3920;
case 0x6e3923:c.instructions+=94;goto B6e3923;
case 0x6e3926:c.instructions+=93;goto B6e3926;
case 0x6e3929:c.instructions+=92;goto B6e3929;
case 0x6e392c:c.instructions+=91;goto B6e392c;
case 0x6e392f:c.instructions+=90;goto B6e392f;
case 0x6e3931:c.instructions+=89;goto B6e3931;
case 0x6e3934:c.instructions+=88;goto B6e3934;
case 0x6e3936:c.instructions+=87;goto B6e3936;
case 0x6e3939:c.instructions+=86;goto B6e3939;
case 0x6e393c:c.instructions+=85;goto B6e393c;
case 0x6e393f:c.instructions+=84;goto B6e393f;
case 0x6e3942:c.instructions+=83;goto B6e3942;
case 0x6e3945:c.instructions+=82;goto B6e3945;
case 0x6e3949:c.instructions+=81;goto B6e3949;
case 0x6e394b:c.instructions+=80;goto B6e394b;
case 0x6e394d:c.instructions+=79;goto B6e394d;
case 0x6e3950:c.instructions+=78;goto B6e3950;
case 0x6e3953:c.instructions+=77;goto B6e3953;
case 0x6e3955:c.instructions+=76;goto B6e3955;
case 0x6e3958:c.instructions+=75;goto B6e3958;
case 0x6e395b:c.instructions+=74;goto B6e395b;
case 0x6e395d:c.instructions+=73;goto B6e395d;
case 0x6e3960:c.instructions+=72;goto B6e3960;
case 0x6e3963:c.instructions+=71;goto B6e3963;
case 0x6e3966:c.instructions+=70;goto B6e3966;
case 0x6e3969:c.instructions+=69;goto B6e3969;
case 0x6e396c:c.instructions+=68;goto B6e396c;
case 0x6e396f:c.instructions+=67;goto B6e396f;
case 0x6e3972:c.instructions+=66;goto B6e3972;
case 0x6e3975:c.instructions+=65;goto B6e3975;
case 0x6e3978:c.instructions+=64;goto B6e3978;
case 0x6e397b:c.instructions+=63;goto B6e397b;
case 0x6e397d:c.instructions+=62;goto B6e397d;
case 0x6e3980:c.instructions+=61;goto B6e3980;
case 0x6e3983:c.instructions+=60;goto B6e3983;
case 0x6e3986:c.instructions+=59;goto B6e3986;
case 0x6e3989:c.instructions+=58;goto B6e3989;
case 0x6e398c:c.instructions+=57;goto B6e398c;
case 0x6e398e:c.instructions+=56;goto B6e398e;
case 0x6e3990:c.instructions+=55;goto B6e3990;
case 0x6e3993:c.instructions+=54;goto B6e3993;
case 0x6e3996:c.instructions+=53;goto B6e3996;
case 0x6e3999:c.instructions+=52;goto B6e3999;
case 0x6e399c:c.instructions+=51;goto B6e399c;
case 0x6e399f:c.instructions+=50;goto B6e399f;
case 0x6e39a1:c.instructions+=49;goto B6e39a1;
case 0x6e39a4:c.instructions+=48;goto B6e39a4;
case 0x6e39a7:c.instructions+=47;goto B6e39a7;
case 0x6e39a9:c.instructions+=46;goto B6e39a9;
case 0x6e39ac:c.instructions+=45;goto B6e39ac;
case 0x6e39af:c.instructions+=44;goto B6e39af;
case 0x6e39b2:c.instructions+=43;goto B6e39b2;
case 0x6e39b5:c.instructions+=42;goto B6e39b5;
case 0x6e39b8:c.instructions+=41;goto B6e39b8;
case 0x6e39bb:c.instructions+=40;goto B6e39bb;
case 0x6e39be:c.instructions+=39;goto B6e39be;
case 0x6e39c1:c.instructions+=38;goto B6e39c1;
case 0x6e39c4:c.instructions+=37;goto B6e39c4;
case 0x6e39c7:c.instructions+=36;goto B6e39c7;
case 0x6e39c9:c.instructions+=35;goto B6e39c9;
case 0x6e39cc:c.instructions+=34;goto B6e39cc;
case 0x6e39d2:c.instructions+=33;goto B6e39d2;
case 0x6e39d5:c.instructions+=32;goto B6e39d5;
case 0x6e39d8:c.instructions+=31;goto B6e39d8;
case 0x6e39db:c.instructions+=30;goto B6e39db;
case 0x6e39dd:c.instructions+=29;goto B6e39dd;
case 0x6e39df:c.instructions+=28;goto B6e39df;
case 0x6e39e2:c.instructions+=27;goto B6e39e2;
case 0x6e39e5:c.instructions+=26;goto B6e39e5;
case 0x6e39e8:c.instructions+=25;goto B6e39e8;
case 0x6e39eb:c.instructions+=24;goto B6e39eb;
case 0x6e39ee:c.instructions+=23;goto B6e39ee;
case 0x6e39f0:c.instructions+=22;goto B6e39f0;
case 0x6e39f3:c.instructions+=21;goto B6e39f3;
case 0x6e39f6:c.instructions+=20;goto B6e39f6;
case 0x6e39f9:c.instructions+=19;goto B6e39f9;
case 0x6e39fc:c.instructions+=18;goto B6e39fc;
case 0x6e3a01:c.instructions+=17;goto B6e3a01;
case 0x6e3a03:c.instructions+=16;goto B6e3a03;
case 0x6e3a09:c.instructions+=15;goto B6e3a09;
case 0x6e3a0c:c.instructions+=14;goto B6e3a0c;
case 0x6e3a0f:c.instructions+=13;goto B6e3a0f;
case 0x6e3a12:c.instructions+=12;goto B6e3a12;
case 0x6e3a15:c.instructions+=11;goto B6e3a15;
case 0x6e3a18:c.instructions+=10;goto B6e3a18;
case 0x6e3a1b:c.instructions+=9;goto B6e3a1b;
case 0x6e3a1e:c.instructions+=8;goto B6e3a1e;
case 0x6e3a21:c.instructions+=7;goto B6e3a21;
case 0x6e3a24:c.instructions+=6;goto B6e3a24;
case 0x6e3a27:c.instructions+=5;goto B6e3a27;
case 0x6e3a2b:c.instructions+=4;goto B6e3a2b;
case 0x6e3a2d:c.instructions+=3;goto B6e3a2d;
case 0x6e3a2f:c.instructions+=2;goto B6e3a2f;
case 0x6e3a32:c.instructions+=1;goto B6e3a32;
case 0x6e3a38:goto L6e3a38;
case 0x6e3a3c:goto L6e3a3c;
case 0x6e3a3e:c.instructions+=1;goto B6e3a3e;
case 0x6e3a40:goto L6e3a40;
case 0x6e3a42:c.instructions+=8;goto B6e3a42;
case 0x6e3a45:c.instructions+=7;goto B6e3a45;
case 0x6e3a48:c.instructions+=6;goto B6e3a48;
case 0x6e3a4b:c.instructions+=5;goto B6e3a4b;
case 0x6e3a4f:c.instructions+=4;goto B6e3a4f;
case 0x6e3a53:c.instructions+=3;goto B6e3a53;
case 0x6e3a57:c.instructions+=2;goto B6e3a57;
case 0x6e3a59:c.instructions+=1;goto B6e3a59;
case 0x6e3a60:goto L6e3a60;
case 0x6e3a62:c.instructions+=30;goto B6e3a62;
case 0x6e3a65:c.instructions+=29;goto B6e3a65;
case 0x6e3a68:c.instructions+=28;goto B6e3a68;
case 0x6e3a6b:c.instructions+=27;goto B6e3a6b;
case 0x6e3a6d:c.instructions+=26;goto B6e3a6d;
case 0x6e3a6f:c.instructions+=25;goto B6e3a6f;
case 0x6e3a72:c.instructions+=24;goto B6e3a72;
case 0x6e3a75:c.instructions+=23;goto B6e3a75;
case 0x6e3a77:c.instructions+=22;goto B6e3a77;
case 0x6e3a7a:c.instructions+=21;goto B6e3a7a;
case 0x6e3a7d:c.instructions+=20;goto B6e3a7d;
case 0x6e3a7f:c.instructions+=19;goto B6e3a7f;
case 0x6e3a82:c.instructions+=18;goto B6e3a82;
case 0x6e3a85:c.instructions+=17;goto B6e3a85;
case 0x6e3a88:c.instructions+=16;goto B6e3a88;
case 0x6e3a89:c.instructions+=15;goto B6e3a89;
case 0x6e3a8c:c.instructions+=14;goto B6e3a8c;
case 0x6e3a8e:c.instructions+=13;goto B6e3a8e;
case 0x6e3a91:c.instructions+=12;goto B6e3a91;
case 0x6e3a94:c.instructions+=11;goto B6e3a94;
case 0x6e3a97:c.instructions+=10;goto B6e3a97;
case 0x6e3a9a:c.instructions+=9;goto B6e3a9a;
case 0x6e3a9d:c.instructions+=8;goto B6e3a9d;
case 0x6e3aa0:c.instructions+=7;goto B6e3aa0;
case 0x6e3aa3:c.instructions+=6;goto B6e3aa3;
case 0x6e3aa6:c.instructions+=5;goto B6e3aa6;
case 0x6e3aa9:c.instructions+=4;goto B6e3aa9;
case 0x6e3aac:c.instructions+=3;goto B6e3aac;
case 0x6e3aae:c.instructions+=2;goto B6e3aae;
case 0x6e3ab1:c.instructions+=1;goto B6e3ab1;
case 0x6e3ab3:goto L6e3ab3;
case 0x6e3ab7:c.instructions+=2;goto B6e3ab7;
case 0x6e3ab9:c.instructions+=1;goto B6e3ab9;
case 0x6e3abb:goto L6e3abb;
case 0x6e3abe:c.instructions+=24;goto B6e3abe;
case 0x6e3ac0:c.instructions+=23;goto B6e3ac0;
case 0x6e3ac2:c.instructions+=22;goto B6e3ac2;
case 0x6e3ac6:c.instructions+=21;goto B6e3ac6;
case 0x6e3aca:c.instructions+=20;goto B6e3aca;
case 0x6e3acd:c.instructions+=19;goto B6e3acd;
case 0x6e3acf:c.instructions+=18;goto B6e3acf;
case 0x6e3ad3:c.instructions+=17;goto B6e3ad3;
case 0x6e3ad6:c.instructions+=16;goto B6e3ad6;
case 0x6e3ad9:c.instructions+=15;goto B6e3ad9;
case 0x6e3adc:c.instructions+=14;goto B6e3adc;
case 0x6e3ae0:c.instructions+=13;goto B6e3ae0;
case 0x6e3ae2:c.instructions+=12;goto B6e3ae2;
case 0x6e3ae4:c.instructions+=11;goto B6e3ae4;
case 0x6e3ae6:c.instructions+=10;goto B6e3ae6;
case 0x6e3ae9:c.instructions+=9;goto B6e3ae9;
case 0x6e3aed:c.instructions+=8;goto B6e3aed;
case 0x6e3af0:c.instructions+=7;goto B6e3af0;
case 0x6e3af4:c.instructions+=6;goto B6e3af4;
case 0x6e3af6:c.instructions+=5;goto B6e3af6;
case 0x6e3af9:c.instructions+=4;goto B6e3af9;
case 0x6e3afc:c.instructions+=3;goto B6e3afc;
case 0x6e3aff:c.instructions+=2;goto B6e3aff;
case 0x6e3b01:c.instructions+=1;goto B6e3b01;
case 0x6e3b04:goto L6e3b04;
case 0x6e3b05:c.instructions+=5;goto B6e3b05;
case 0x6e3b06:c.instructions+=4;goto B6e3b06;
case 0x6e3b07:c.instructions+=3;goto B6e3b07;
case 0x6e3b08:c.instructions+=2;goto B6e3b08;
case 0x6e3b0b:c.instructions+=1;goto B6e3b0b;
case 0x6e3b10:goto L6e3b10;
case 0x6e3b11:c.instructions+=8;goto B6e3b11;
case 0x6e3b15:c.instructions+=7;goto B6e3b15;
case 0x6e3b16:c.instructions+=6;goto B6e3b16;
case 0x6e3b17:c.instructions+=5;goto B6e3b17;
case 0x6e3b18:c.instructions+=4;goto B6e3b18;
case 0x6e3b1a:c.instructions+=3;goto B6e3b1a;
case 0x6e3b1d:c.instructions+=2;goto B6e3b1d;
case 0x6e3b1e:c.instructions+=1;goto B6e3b1e;
case 0x6e3b24:goto L6e3b24;
case 0x6e3b26:c.instructions+=3;goto B6e3b26;
case 0x6e3b28:c.instructions+=2;goto B6e3b28;
case 0x6e3b2c:c.instructions+=1;goto B6e3b2c;
case 0x6e3b32:goto L6e3b32;
case 0x6e3b36:c.instructions+=3;goto B6e3b36;
case 0x6e3b3a:c.instructions+=2;goto B6e3b3a;
case 0x6e3b3d:c.instructions+=1;goto B6e3b3d;
case 0x6e3b40:goto L6e3b40;
case 0x6e3b44:c.instructions+=8;goto B6e3b44;
case 0x6e3b46:c.instructions+=7;goto B6e3b46;
case 0x6e3b49:c.instructions+=6;goto B6e3b49;
case 0x6e3b4e:c.instructions+=5;goto B6e3b4e;
case 0x6e3b50:c.instructions+=4;goto B6e3b50;
case 0x6e3b52:c.instructions+=3;goto B6e3b52;
case 0x6e3b55:c.instructions+=2;goto B6e3b55;
case 0x6e3b58:c.instructions+=1;goto B6e3b58;
case 0x6e3b5a:goto L6e3b5a;
case 0x6e3b5d:c.instructions+=21;goto B6e3b5d;
case 0x6e3b5f:c.instructions+=20;goto B6e3b5f;
case 0x6e3b62:c.instructions+=19;goto B6e3b62;
case 0x6e3b63:c.instructions+=18;goto B6e3b63;
case 0x6e3b66:c.instructions+=17;goto B6e3b66;
case 0x6e3b67:c.instructions+=16;goto B6e3b67;
case 0x6e3b6a:c.instructions+=15;goto B6e3b6a;
case 0x6e3b6b:c.instructions+=14;goto B6e3b6b;
case 0x6e3b6e:c.instructions+=13;goto B6e3b6e;
case 0x6e3b6f:c.instructions+=12;goto B6e3b6f;
case 0x6e3b72:c.instructions+=11;goto B6e3b72;
case 0x6e3b73:c.instructions+=10;goto B6e3b73;
case 0x6e3b76:c.instructions+=9;goto B6e3b76;
case 0x6e3b77:c.instructions+=8;goto B6e3b77;
case 0x6e3b7a:c.instructions+=7;goto B6e3b7a;
case 0x6e3b7b:c.instructions+=6;goto B6e3b7b;
case 0x6e3b7e:c.instructions+=5;goto B6e3b7e;
case 0x6e3b7f:c.instructions+=4;goto B6e3b7f;
case 0x6e3b80:c.instructions+=3;goto B6e3b80;
case 0x6e3b81:c.instructions+=2;goto B6e3b81;
case 0x6e3b83:c.instructions+=1;goto B6e3b83;
case 0x6e3b88:goto L6e3b88;
case 0x6e3b8a:c.instructions+=11;goto B6e3b8a;
case 0x6e3b8d:c.instructions+=10;goto B6e3b8d;
case 0x6e3b8f:c.instructions+=9;goto B6e3b8f;
case 0x6e3b92:c.instructions+=8;goto B6e3b92;
case 0x6e3b95:c.instructions+=7;goto B6e3b95;
case 0x6e3b98:c.instructions+=6;goto B6e3b98;
case 0x6e3b9b:c.instructions+=5;goto B6e3b9b;
case 0x6e3b9e:c.instructions+=4;goto B6e3b9e;
case 0x6e3ba1:c.instructions+=3;goto B6e3ba1;
case 0x6e3ba4:c.instructions+=2;goto B6e3ba4;
case 0x6e3ba6:c.instructions+=1;goto B6e3ba6;
case 0x6e3ba8:goto L6e3ba8;
case 0x6e3bac:c.instructions+=6;goto B6e3bac;
case 0x6e3baf:c.instructions+=5;goto B6e3baf;
case 0x6e3bb0:c.instructions+=4;goto B6e3bb0;
case 0x6e3bb2:c.instructions+=3;goto B6e3bb2;
case 0x6e3bb3:c.instructions+=2;goto B6e3bb3;
case 0x6e3bb4:c.instructions+=1;goto B6e3bb4;
case 0x6e3bba:goto L6e3bba;
case 0x6e3bbd:goto L6e3bbd;
case 0x6e3bc1:c.instructions+=6;goto B6e3bc1;
case 0x6e3bc4:c.instructions+=5;goto B6e3bc4;
case 0x6e3bc5:c.instructions+=4;goto B6e3bc5;
case 0x6e3bc8:c.instructions+=3;goto B6e3bc8;
case 0x6e3bcb:c.instructions+=2;goto B6e3bcb;
case 0x6e3bcd:c.instructions+=1;goto B6e3bcd;
case 0x6e3bd3:goto L6e3bd3;
case 0x6e3bd4:c.instructions+=5;goto B6e3bd4;
case 0x6e3bd5:c.instructions+=4;goto B6e3bd5;
case 0x6e3bd6:c.instructions+=3;goto B6e3bd6;
case 0x6e3bd7:c.instructions+=2;goto B6e3bd7;
case 0x6e3bd8:c.instructions+=1;goto B6e3bd8;
case 0x6e3bdb:goto L6e3bdb;
case 0x6e3bdd:c.instructions+=1;goto B6e3bdd;
case 0x6e3be3:goto L6e3be3;
case 0x6e3be7:c.instructions+=4;goto B6e3be7;
case 0x6e3beb:c.instructions+=3;goto B6e3beb;
case 0x6e3bee:c.instructions+=2;goto B6e3bee;
case 0x6e3bf1:c.instructions+=1;goto B6e3bf1;
case 0x6e3bf3:goto L6e3bf3;
case 0x6e3bf6:c.instructions+=21;goto B6e3bf6;
case 0x6e3bf8:c.instructions+=20;goto B6e3bf8;
case 0x6e3bfb:c.instructions+=19;goto B6e3bfb;
case 0x6e3bfc:c.instructions+=18;goto B6e3bfc;
case 0x6e3bff:c.instructions+=17;goto B6e3bff;
case 0x6e3c00:c.instructions+=16;goto B6e3c00;
case 0x6e3c03:c.instructions+=15;goto B6e3c03;
case 0x6e3c04:c.instructions+=14;goto B6e3c04;
case 0x6e3c07:c.instructions+=13;goto B6e3c07;
case 0x6e3c08:c.instructions+=12;goto B6e3c08;
case 0x6e3c0b:c.instructions+=11;goto B6e3c0b;
case 0x6e3c0c:c.instructions+=10;goto B6e3c0c;
case 0x6e3c0f:c.instructions+=9;goto B6e3c0f;
case 0x6e3c10:c.instructions+=8;goto B6e3c10;
case 0x6e3c13:c.instructions+=7;goto B6e3c13;
case 0x6e3c14:c.instructions+=6;goto B6e3c14;
case 0x6e3c17:c.instructions+=5;goto B6e3c17;
case 0x6e3c18:c.instructions+=4;goto B6e3c18;
case 0x6e3c19:c.instructions+=3;goto B6e3c19;
case 0x6e3c1a:c.instructions+=2;goto B6e3c1a;
case 0x6e3c1c:c.instructions+=1;goto B6e3c1c;
case 0x6e3c21:goto L6e3c21;
case 0x6e3c24:c.instructions+=11;goto B6e3c24;
case 0x6e3c26:c.instructions+=10;goto B6e3c26;
case 0x6e3c28:c.instructions+=9;goto B6e3c28;
case 0x6e3c2b:c.instructions+=8;goto B6e3c2b;
case 0x6e3c2e:c.instructions+=7;goto B6e3c2e;
case 0x6e3c31:c.instructions+=6;goto B6e3c31;
case 0x6e3c34:c.instructions+=5;goto B6e3c34;
case 0x6e3c37:c.instructions+=4;goto B6e3c37;
case 0x6e3c3a:c.instructions+=3;goto B6e3c3a;
case 0x6e3c3c:c.instructions+=2;goto B6e3c3c;
case 0x6e3c3e:c.instructions+=1;goto B6e3c3e;
case 0x6e3c40:goto L6e3c40;
case 0x6e3c44:c.instructions+=6;goto B6e3c44;
case 0x6e3c47:c.instructions+=5;goto B6e3c47;
case 0x6e3c48:c.instructions+=4;goto B6e3c48;
case 0x6e3c4a:c.instructions+=3;goto B6e3c4a;
case 0x6e3c4b:c.instructions+=2;goto B6e3c4b;
case 0x6e3c4c:c.instructions+=1;goto B6e3c4c;
case 0x6e3c52:goto L6e3c52;
case 0x6e3c55:goto L6e3c55;
case 0x6e3c58:c.instructions+=4;goto B6e3c58;
case 0x6e3c5b:c.instructions+=3;goto B6e3c5b;
case 0x6e3c5e:c.instructions+=2;goto B6e3c5e;
case 0x6e3c5f:c.instructions+=1;goto B6e3c5f;
case 0x6e3c61:goto L6e3c61;
case 0x6e3c62:c.instructions+=5;goto B6e3c62;
case 0x6e3c63:c.instructions+=4;goto B6e3c63;
case 0x6e3c64:c.instructions+=3;goto B6e3c64;
case 0x6e3c65:c.instructions+=2;goto B6e3c65;
case 0x6e3c66:c.instructions+=1;goto B6e3c66;
case 0x6e3c70:goto L6e3c70;
case 0x6e3c71:c.instructions+=11;goto B6e3c71;
case 0x6e3c72:c.instructions+=10;goto B6e3c72;
case 0x6e3c73:c.instructions+=9;goto B6e3c73;
case 0x6e3c77:c.instructions+=8;goto B6e3c77;
case 0x6e3c79:c.instructions+=7;goto B6e3c79;
case 0x6e3c7b:c.instructions+=6;goto B6e3c7b;
case 0x6e3c7e:c.instructions+=5;goto B6e3c7e;
case 0x6e3c7f:c.instructions+=4;goto B6e3c7f;
case 0x6e3c80:c.instructions+=3;goto B6e3c80;
case 0x6e3c83:c.instructions+=2;goto B6e3c83;
case 0x6e3c87:c.instructions+=1;goto B6e3c87;
case 0x6e3c8d:goto L6e3c8d;
case 0x6e3c8f:c.instructions+=2;goto B6e3c8f;
case 0x6e3c91:c.instructions+=1;goto B6e3c91;
case 0x6e3c97:goto L6e3c97;
case 0x6e3c99:c.instructions+=1;goto B6e3c99;
case 0x6e3c9f:goto L6e3c9f;
case 0x6e3ca3:c.instructions+=1;goto B6e3ca3;
case 0x6e3ca6:goto L6e3ca6;
case 0x6e3ca8:c.instructions+=7;goto B6e3ca8;
case 0x6e3cab:c.instructions+=6;goto B6e3cab;
case 0x6e3cb0:c.instructions+=5;goto B6e3cb0;
case 0x6e3cb2:c.instructions+=4;goto B6e3cb2;
case 0x6e3cb4:c.instructions+=3;goto B6e3cb4;
case 0x6e3cb7:c.instructions+=2;goto B6e3cb7;
case 0x6e3cbb:c.instructions+=1;goto B6e3cbb;
case 0x6e3cbd:goto L6e3cbd;
case 0x6e3cc0:c.instructions+=24;goto B6e3cc0;
case 0x6e3cc2:c.instructions+=23;goto B6e3cc2;
case 0x6e3cc5:c.instructions+=22;goto B6e3cc5;
case 0x6e3cc8:c.instructions+=21;goto B6e3cc8;
case 0x6e3cca:c.instructions+=20;goto B6e3cca;
case 0x6e3ccd:c.instructions+=19;goto B6e3ccd;
case 0x6e3cd1:c.instructions+=18;goto B6e3cd1;
case 0x6e3cd4:c.instructions+=17;goto B6e3cd4;
case 0x6e3cd7:c.instructions+=16;goto B6e3cd7;
case 0x6e3cda:c.instructions+=15;goto B6e3cda;
case 0x6e3cdd:c.instructions+=14;goto B6e3cdd;
case 0x6e3ce0:c.instructions+=13;goto B6e3ce0;
case 0x6e3ce3:c.instructions+=12;goto B6e3ce3;
case 0x6e3ce6:c.instructions+=11;goto B6e3ce6;
case 0x6e3ce9:c.instructions+=10;goto B6e3ce9;
case 0x6e3cec:c.instructions+=9;goto B6e3cec;
case 0x6e3cef:c.instructions+=8;goto B6e3cef;
case 0x6e3cf2:c.instructions+=7;goto B6e3cf2;
case 0x6e3cf5:c.instructions+=6;goto B6e3cf5;
case 0x6e3cf8:c.instructions+=5;goto B6e3cf8;
case 0x6e3cfb:c.instructions+=4;goto B6e3cfb;
case 0x6e3cfe:c.instructions+=3;goto B6e3cfe;
case 0x6e3d01:c.instructions+=2;goto B6e3d01;
case 0x6e3d04:c.instructions+=1;goto B6e3d04;
case 0x6e3d0b:goto L6e3d0b;
case 0x6e3d0e:c.instructions+=4;goto B6e3d0e;
case 0x6e3d0f:c.instructions+=3;goto B6e3d0f;
case 0x6e3d12:c.instructions+=2;goto B6e3d12;
case 0x6e3d14:c.instructions+=1;goto B6e3d14;
case 0x6e3d16:goto L6e3d16;
case 0x6e3d17:c.instructions+=5;goto B6e3d17;
case 0x6e3d18:c.instructions+=4;goto B6e3d18;
case 0x6e3d19:c.instructions+=3;goto B6e3d19;
case 0x6e3d1a:c.instructions+=2;goto B6e3d1a;
case 0x6e3d1b:c.instructions+=1;goto B6e3d1b;
case 0x6e3d1e:goto L6e3d1e;
case 0x6e3d20:c.instructions+=1;goto B6e3d20;
case 0x6e3d26:goto L6e3d26;
case 0x6e3d2a:c.instructions+=2;goto B6e3d2a;
case 0x6e3d2d:c.instructions+=1;goto B6e3d2d;
case 0x6e3d30:goto L6e3d30;
case 0x6e3d32:c.instructions+=7;goto B6e3d32;
case 0x6e3d35:c.instructions+=6;goto B6e3d35;
case 0x6e3d3a:c.instructions+=5;goto B6e3d3a;
case 0x6e3d3c:c.instructions+=4;goto B6e3d3c;
case 0x6e3d3e:c.instructions+=3;goto B6e3d3e;
case 0x6e3d41:c.instructions+=2;goto B6e3d41;
case 0x6e3d45:c.instructions+=1;goto B6e3d45;
case 0x6e3d47:goto L6e3d47;
case 0x6e3d4a:c.instructions+=22;goto B6e3d4a;
case 0x6e3d4c:c.instructions+=21;goto B6e3d4c;
case 0x6e3d4f:c.instructions+=20;goto B6e3d4f;
case 0x6e3d52:c.instructions+=19;goto B6e3d52;
case 0x6e3d54:c.instructions+=18;goto B6e3d54;
case 0x6e3d57:c.instructions+=17;goto B6e3d57;
case 0x6e3d5c:c.instructions+=16;goto B6e3d5c;
case 0x6e3d5f:c.instructions+=15;goto B6e3d5f;
case 0x6e3d62:c.instructions+=14;goto B6e3d62;
case 0x6e3d65:c.instructions+=13;goto B6e3d65;
case 0x6e3d68:c.instructions+=12;goto B6e3d68;
case 0x6e3d6b:c.instructions+=11;goto B6e3d6b;
case 0x6e3d6e:c.instructions+=10;goto B6e3d6e;
case 0x6e3d71:c.instructions+=9;goto B6e3d71;
case 0x6e3d74:c.instructions+=8;goto B6e3d74;
case 0x6e3d77:c.instructions+=7;goto B6e3d77;
case 0x6e3d7a:c.instructions+=6;goto B6e3d7a;
case 0x6e3d7d:c.instructions+=5;goto B6e3d7d;
case 0x6e3d80:c.instructions+=4;goto B6e3d80;
case 0x6e3d83:c.instructions+=3;goto B6e3d83;
case 0x6e3d86:c.instructions+=2;goto B6e3d86;
case 0x6e3d89:c.instructions+=1;goto B6e3d89;
case 0x6e3d8c:goto L6e3d8c;
case 0x6e3d8f:c.instructions+=4;goto B6e3d8f;
case 0x6e3d90:c.instructions+=3;goto B6e3d90;
case 0x6e3d93:c.instructions+=2;goto B6e3d93;
case 0x6e3d95:c.instructions+=1;goto B6e3d95;
case 0x6e3d97:goto L6e3d97;
case 0x6e3d98:c.instructions+=5;goto B6e3d98;
case 0x6e3d99:c.instructions+=4;goto B6e3d99;
case 0x6e3d9a:c.instructions+=3;goto B6e3d9a;
case 0x6e3d9b:c.instructions+=2;goto B6e3d9b;
case 0x6e3d9c:c.instructions+=1;goto B6e3d9c;
case 0x6e3d9f:goto L6e3d9f;
case 0x6e3da1:c.instructions+=1;goto B6e3da1;
case 0x6e3da3:goto L6e3da3;
case 0x6e3da5:c.instructions+=2;goto B6e3da5;
case 0x6e3da7:c.instructions+=1;goto B6e3da7;
case 0x6e3dad:goto L6e3dad;
case 0x6e3db1:c.instructions+=3;goto B6e3db1;
case 0x6e3db4:c.instructions+=2;goto B6e3db4;
case 0x6e3db9:c.instructions+=1;goto B6e3db9;
case 0x6e3dc0:goto L6e3dc0;
case 0x6e3dc3:c.instructions+=28;goto B6e3dc3;
case 0x6e3dc5:c.instructions+=27;goto B6e3dc5;
case 0x6e3dc8:c.instructions+=26;goto B6e3dc8;
case 0x6e3dcb:c.instructions+=25;goto B6e3dcb;
case 0x6e3dcd:c.instructions+=24;goto B6e3dcd;
case 0x6e3dd0:c.instructions+=23;goto B6e3dd0;
case 0x6e3dd3:c.instructions+=22;goto B6e3dd3;
case 0x6e3dd7:c.instructions+=21;goto B6e3dd7;
case 0x6e3dda:c.instructions+=20;goto B6e3dda;
case 0x6e3ddd:c.instructions+=19;goto B6e3ddd;
case 0x6e3de0:c.instructions+=18;goto B6e3de0;
case 0x6e3de3:c.instructions+=17;goto B6e3de3;
case 0x6e3de6:c.instructions+=16;goto B6e3de6;
case 0x6e3de9:c.instructions+=15;goto B6e3de9;
case 0x6e3dec:c.instructions+=14;goto B6e3dec;
case 0x6e3def:c.instructions+=13;goto B6e3def;
case 0x6e3df2:c.instructions+=12;goto B6e3df2;
case 0x6e3df5:c.instructions+=11;goto B6e3df5;
case 0x6e3df8:c.instructions+=10;goto B6e3df8;
case 0x6e3dfb:c.instructions+=9;goto B6e3dfb;
case 0x6e3dfe:c.instructions+=8;goto B6e3dfe;
case 0x6e3e01:c.instructions+=7;goto B6e3e01;
case 0x6e3e04:c.instructions+=6;goto B6e3e04;
case 0x6e3e07:c.instructions+=5;goto B6e3e07;
case 0x6e3e0a:c.instructions+=4;goto B6e3e0a;
case 0x6e3e0b:c.instructions+=3;goto B6e3e0b;
case 0x6e3e0e:c.instructions+=2;goto B6e3e0e;
case 0x6e3e10:c.instructions+=1;goto B6e3e10;
case 0x6e3e12:goto L6e3e12;
case 0x6e3e13:c.instructions+=5;goto B6e3e13;
case 0x6e3e14:c.instructions+=4;goto B6e3e14;
case 0x6e3e15:c.instructions+=3;goto B6e3e15;
case 0x6e3e16:c.instructions+=2;goto B6e3e16;
case 0x6e3e17:c.instructions+=1;goto B6e3e17;
case 0x6e3e1a:goto L6e3e1a;
case 0x6e3e1c:c.instructions+=1;goto B6e3e1c;
case 0x6e3e1e:goto L6e3e1e;
case 0x6e3e22:c.instructions+=3;goto B6e3e22;
case 0x6e3e25:c.instructions+=2;goto B6e3e25;
case 0x6e3e2a:c.instructions+=1;goto B6e3e2a;
case 0x6e3e30:goto L6e3e30;
case 0x6e3e33:c.instructions+=25;goto B6e3e33;
case 0x6e3e35:c.instructions+=24;goto B6e3e35;
case 0x6e3e38:c.instructions+=23;goto B6e3e38;
case 0x6e3e3b:c.instructions+=22;goto B6e3e3b;
case 0x6e3e3d:c.instructions+=21;goto B6e3e3d;
case 0x6e3e40:c.instructions+=20;goto B6e3e40;
case 0x6e3e43:c.instructions+=19;goto B6e3e43;
case 0x6e3e46:c.instructions+=18;goto B6e3e46;
case 0x6e3e49:c.instructions+=17;goto B6e3e49;
case 0x6e3e4c:c.instructions+=16;goto B6e3e4c;
case 0x6e3e4f:c.instructions+=15;goto B6e3e4f;
case 0x6e3e52:c.instructions+=14;goto B6e3e52;
case 0x6e3e55:c.instructions+=13;goto B6e3e55;
case 0x6e3e58:c.instructions+=12;goto B6e3e58;
case 0x6e3e5b:c.instructions+=11;goto B6e3e5b;
case 0x6e3e5e:c.instructions+=10;goto B6e3e5e;
case 0x6e3e61:c.instructions+=9;goto B6e3e61;
case 0x6e3e64:c.instructions+=8;goto B6e3e64;
case 0x6e3e67:c.instructions+=7;goto B6e3e67;
case 0x6e3e6a:c.instructions+=6;goto B6e3e6a;
case 0x6e3e6d:c.instructions+=5;goto B6e3e6d;
case 0x6e3e70:c.instructions+=4;goto B6e3e70;
case 0x6e3e73:c.instructions+=3;goto B6e3e73;
case 0x6e3e76:c.instructions+=2;goto B6e3e76;
case 0x6e3e77:c.instructions+=1;goto B6e3e77;
case 0x6e3e79:goto L6e3e79;
case 0x6e3e7a:c.instructions+=5;goto B6e3e7a;
case 0x6e3e7b:c.instructions+=4;goto B6e3e7b;
case 0x6e3e7c:c.instructions+=3;goto B6e3e7c;
case 0x6e3e7d:c.instructions+=2;goto B6e3e7d;
case 0x6e3e7e:c.instructions+=1;goto B6e3e7e;
case 0x6e3e90:goto L6e3e90;
case 0x6e3e91:c.instructions+=8;goto B6e3e91;
case 0x6e3e93:c.instructions+=7;goto B6e3e93;
case 0x6e3e96:c.instructions+=6;goto B6e3e96;
case 0x6e3e97:c.instructions+=5;goto B6e3e97;
case 0x6e3e9a:c.instructions+=4;goto B6e3e9a;
case 0x6e3e9c:c.instructions+=3;goto B6e3e9c;
case 0x6e3e9e:c.instructions+=2;goto B6e3e9e;
case 0x6e3ea0:c.instructions+=1;goto B6e3ea0;
case 0x6e3ea2:goto L6e3ea2;
case 0x6e3ea4:c.instructions+=1;goto B6e3ea4;
case 0x6e3ea6:goto L6e3ea6;
case 0x6e3ea9:c.instructions+=3;goto B6e3ea9;
case 0x6e3eaa:c.instructions+=2;goto B6e3eaa;
case 0x6e3eab:c.instructions+=1;goto B6e3eab;
case 0x6e3eb1:goto L6e3eb1;
case 0x6e3eb4:c.instructions+=1;goto B6e3eb4;
case 0x6e3eba:goto L6e3eba;
case 0x6e3ebb:c.instructions+=1;goto B6e3ebb;
case 0x6e3ec0:goto L6e3ec0;
case 0x6e3ec4:c.instructions+=3;goto B6e3ec4;
case 0x6e3ec7:c.instructions+=2;goto B6e3ec7;
case 0x6e3ece:c.instructions+=1;goto B6e3ece;
case 0x6e3ed0:goto L6e3ed0;
case 0x6e3ed2:c.instructions+=5;goto B6e3ed2;
case 0x6e3ed4:c.instructions+=4;goto B6e3ed4;
case 0x6e3ed7:c.instructions+=3;goto B6e3ed7;
case 0x6e3edd:c.instructions+=2;goto B6e3edd;
case 0x6e3ee0:c.instructions+=1;goto B6e3ee0;
case 0x6e3ef0:goto L6e3ef0;
case 0x6e3ef6:c.instructions+=1;goto B6e3ef6;
case 0x6e3f00:goto L6e3f00;
case 0x6e3f05:c.instructions+=4;goto B6e3f05;
case 0x6e3f06:c.instructions+=3;goto B6e3f06;
case 0x6e3f08:c.instructions+=2;goto B6e3f08;
case 0x6e3f0e:c.instructions+=1;goto B6e3f0e;
case 0x6e3f10:goto L6e3f10;
case 0x6e3f11:c.instructions+=1;goto B6e3f11;
case 0x6e3f16:goto L6e3f16;
case 0x6e3f19:goto L6e3f19;
case 0x6e3f1b:c.instructions+=2;goto B6e3f1b;
case 0x6e3f1c:c.instructions+=1;goto B6e3f1c;
case 0x6e3f20:goto L6e3f20;
case 0x6e3f24:c.instructions+=9;goto B6e3f24;
case 0x6e3f26:c.instructions+=8;goto B6e3f26;
case 0x6e3f29:c.instructions+=7;goto B6e3f29;
case 0x6e3f2c:c.instructions+=6;goto B6e3f2c;
case 0x6e3f2e:c.instructions+=5;goto B6e3f2e;
case 0x6e3f2f:c.instructions+=4;goto B6e3f2f;
case 0x6e3f33:c.instructions+=3;goto B6e3f33;
case 0x6e3f34:c.instructions+=2;goto B6e3f34;
case 0x6e3f35:c.instructions+=1;goto B6e3f35;
case 0x6e3f3a:goto L6e3f3a;
case 0x6e3f40:goto L6e3f40;
case 0x6e3f44:c.instructions+=10;goto B6e3f44;
case 0x6e3f46:c.instructions+=9;goto B6e3f46;
case 0x6e3f49:c.instructions+=8;goto B6e3f49;
case 0x6e3f4c:c.instructions+=7;goto B6e3f4c;
case 0x6e3f4d:c.instructions+=6;goto B6e3f4d;
case 0x6e3f51:c.instructions+=5;goto B6e3f51;
case 0x6e3f52:c.instructions+=4;goto B6e3f52;
case 0x6e3f56:c.instructions+=3;goto B6e3f56;
case 0x6e3f57:c.instructions+=2;goto B6e3f57;
case 0x6e3f58:c.instructions+=1;goto B6e3f58;
case 0x6e3f5d:goto L6e3f5d;
case 0x6e3f5f:c.instructions+=1;goto B6e3f5f;
case 0x6e3f70:goto L6e3f70;
case 0x6e3f71:c.instructions+=13;goto B6e3f71;
case 0x6e3f75:c.instructions+=12;goto B6e3f75;
case 0x6e3f79:c.instructions+=11;goto B6e3f79;
case 0x6e3f7b:c.instructions+=10;goto B6e3f7b;
case 0x6e3f7c:c.instructions+=9;goto B6e3f7c;
case 0x6e3f7f:c.instructions+=8;goto B6e3f7f;
case 0x6e3f80:c.instructions+=7;goto B6e3f80;
case 0x6e3f83:c.instructions+=6;goto B6e3f83;
case 0x6e3f85:c.instructions+=5;goto B6e3f85;
case 0x6e3f86:c.instructions+=4;goto B6e3f86;
case 0x6e3f8a:c.instructions+=3;goto B6e3f8a;
case 0x6e3f8d:c.instructions+=2;goto B6e3f8d;
case 0x6e3f91:c.instructions+=1;goto B6e3f91;
case 0x6e3f93:goto L6e3f93;
case 0x6e3f95:c.instructions+=2;goto B6e3f95;
case 0x6e3f97:c.instructions+=1;goto B6e3f97;
case 0x6e3f99:goto L6e3f99;
case 0x6e3f9b:c.instructions+=2;goto B6e3f9b;
case 0x6e3f9e:c.instructions+=1;goto B6e3f9e;
case 0x6e3fa2:goto L6e3fa2;
case 0x6e3fa4:c.instructions+=4;goto B6e3fa4;
case 0x6e3fa8:c.instructions+=3;goto B6e3fa8;
case 0x6e3faa:c.instructions+=2;goto B6e3faa;
case 0x6e3fad:c.instructions+=1;goto B6e3fad;
case 0x6e3faf:goto L6e3faf;
case 0x6e3fb0:c.instructions+=3;goto B6e3fb0;
case 0x6e3fb3:c.instructions+=2;goto B6e3fb3;
case 0x6e3fb5:c.instructions+=1;goto B6e3fb5;
case 0x6e3fb7:goto L6e3fb7;
case 0x6e3fb8:c.instructions+=1;goto B6e3fb8;
case 0x6e3fba:goto L6e3fba;
case 0x6e3fbc:c.instructions+=5;goto B6e3fbc;
case 0x6e3fbe:c.instructions+=4;goto B6e3fbe;
case 0x6e3fc0:c.instructions+=3;goto B6e3fc0;
case 0x6e3fc3:c.instructions+=2;goto B6e3fc3;
case 0x6e3fc4:c.instructions+=1;goto B6e3fc4;
case 0x6e3fc6:goto L6e3fc6;
case 0x6e3fc8:c.instructions+=8;goto B6e3fc8;
case 0x6e3fcb:c.instructions+=7;goto B6e3fcb;
case 0x6e3fce:c.instructions+=6;goto B6e3fce;
case 0x6e3fd2:c.instructions+=5;goto B6e3fd2;
case 0x6e3fd5:c.instructions+=4;goto B6e3fd5;
case 0x6e3fd9:c.instructions+=3;goto B6e3fd9;
case 0x6e3fdb:c.instructions+=2;goto B6e3fdb;
case 0x6e3fde:c.instructions+=1;goto B6e3fde;
case 0x6e3fe0:goto L6e3fe0;
case 0x6e3fe2:c.instructions+=4;goto B6e3fe2;
case 0x6e3fe6:c.instructions+=3;goto B6e3fe6;
case 0x6e3fe8:c.instructions+=2;goto B6e3fe8;
case 0x6e3feb:c.instructions+=1;goto B6e3feb;
case 0x6e3fed:goto L6e3fed;
case 0x6e3ff0:c.instructions+=4;goto B6e3ff0;
case 0x6e3ff4:c.instructions+=3;goto B6e3ff4;
case 0x6e3ff6:c.instructions+=2;goto B6e3ff6;
case 0x6e3ff9:c.instructions+=1;goto B6e3ff9;
case 0x6e3ffb:goto L6e3ffb;
case 0x6e3ffe:c.instructions+=1;goto B6e3ffe;
default:missing_instruction(c.pc);}
B6e3002:L6e3002:{c.instructions+=15;NFSU2_TR(0x6e3002);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3005:{NFSU2_TR(0x6e3005);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3008:{NFSU2_TR(0x6e3008);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e300a:{NFSU2_TR(0x6e300a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e300d:{NFSU2_TR(0x6e300d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3010:{NFSU2_TR(0x6e3010);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3013:{NFSU2_TR(0x6e3013);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3016:{NFSU2_TR(0x6e3016);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3019:{NFSU2_TR(0x6e3019);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e301c:{NFSU2_TR(0x6e301c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e301f:{NFSU2_TR(0x6e301f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3022:{NFSU2_TR(0x6e3022);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3025:{NFSU2_TR(0x6e3025);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3027:{NFSU2_TR(0x6e3027);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e302a:{NFSU2_TR(0x6e302a);
{goto L6e3041;}
}
B6e302c:L6e302c:{c.instructions+=1;NFSU2_TR(0x6e302c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e3046;}}
}
B6e302e:L6e302e:{c.instructions+=7;NFSU2_TR(0x6e302e);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3031:{NFSU2_TR(0x6e3031);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3033:{NFSU2_TR(0x6e3033);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3036:{NFSU2_TR(0x6e3036);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3039:{NFSU2_TR(0x6e3039);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e303b:{NFSU2_TR(0x6e303b);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e303e:{NFSU2_TR(0x6e303e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3041:L6e3041:{c.instructions+=2;NFSU2_TR(0x6e3041);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3043:{NFSU2_TR(0x6e3043);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3046:L6e3046:{c.instructions+=8;NFSU2_TR(0x6e3046);
__builtin_memmove((R+4),(R+8),4);
}
B6e3048:{NFSU2_TR(0x6e3048);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e304b:{NFSU2_TR(0x6e304b);
w4(R+28,u32(0x1ull));
}
B6e3050:{NFSU2_TR(0x6e3050);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e3052:{NFSU2_TR(0x6e3052);
__builtin_memmove((R+4),(R+8),4);
}
B6e3054:{NFSU2_TR(0x6e3054);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3057:{NFSU2_TR(0x6e3057);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e305a:{NFSU2_TR(0x6e305a);
if(r1(R+518)){{goto L6e30ef;}}
}
B6e3060:L6e3060:{c.instructions+=4;NFSU2_TR(0x6e3060);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3064:{NFSU2_TR(0x6e3064);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3067:{NFSU2_TR(0x6e3067);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e3069:{NFSU2_TR(0x6e3069);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e30d5;}}
}
B6e306b:L6e306b:{c.instructions+=37;NFSU2_TR(0x6e306b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e306f:{NFSU2_TR(0x6e306f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3072:{NFSU2_TR(0x6e3072);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3075:{NFSU2_TR(0x6e3075);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3079:{NFSU2_TR(0x6e3079);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e307b:{NFSU2_TR(0x6e307b);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e307e:{NFSU2_TR(0x6e307e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3080:{NFSU2_TR(0x6e3080);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3083:{NFSU2_TR(0x6e3083);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3085:{NFSU2_TR(0x6e3085);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3088:{NFSU2_TR(0x6e3088);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e308b:{NFSU2_TR(0x6e308b);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e308e:{NFSU2_TR(0x6e308e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3090:{NFSU2_TR(0x6e3090);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3093:{NFSU2_TR(0x6e3093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3096:{NFSU2_TR(0x6e3096);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3098:{NFSU2_TR(0x6e3098);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e309b:{NFSU2_TR(0x6e309b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e309e:{NFSU2_TR(0x6e309e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e30a1:{NFSU2_TR(0x6e30a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e30a4:{NFSU2_TR(0x6e30a4);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30a7:{NFSU2_TR(0x6e30a7);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30aa:{NFSU2_TR(0x6e30aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e30ad:{NFSU2_TR(0x6e30ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e30b0:{NFSU2_TR(0x6e30b0);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30b3:{NFSU2_TR(0x6e30b3);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30b6:{NFSU2_TR(0x6e30b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e30b9:{NFSU2_TR(0x6e30b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e30bc:{NFSU2_TR(0x6e30bc);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30bf:{NFSU2_TR(0x6e30bf);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30c2:{NFSU2_TR(0x6e30c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e30c5:{NFSU2_TR(0x6e30c5);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30c8:{NFSU2_TR(0x6e30c8);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30cb:{NFSU2_TR(0x6e30cb);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30ce:{NFSU2_TR(0x6e30ce);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e30d0:{NFSU2_TR(0x6e30d0);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30d3:{NFSU2_TR(0x6e30d3);
{goto L6e30ea;}
}
B6e30d5:L6e30d5:{c.instructions+=1;NFSU2_TR(0x6e30d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e30ef;}}
}
B6e30d7:L6e30d7:{c.instructions+=7;NFSU2_TR(0x6e30d7);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30da:{NFSU2_TR(0x6e30da);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e30dc:{NFSU2_TR(0x6e30dc);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30df:{NFSU2_TR(0x6e30df);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30e2:{NFSU2_TR(0x6e30e2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e30e4:{NFSU2_TR(0x6e30e4);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30e7:{NFSU2_TR(0x6e30e7);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e30ea:L6e30ea:{c.instructions+=2;NFSU2_TR(0x6e30ea);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e30ec:{NFSU2_TR(0x6e30ec);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e30ef:L6e30ef:{c.instructions+=9;NFSU2_TR(0x6e30ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e30f2:{NFSU2_TR(0x6e30f2);
__builtin_memmove((R+4),(R+28),4);
}
B6e30f4:{NFSU2_TR(0x6e30f4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e30f7:{NFSU2_TR(0x6e30f7);
w4(R+20,u32(0x1ull));
}
B6e30fc:{NFSU2_TR(0x6e30fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e30fe:{NFSU2_TR(0x6e30fe);
__builtin_memmove((R+4),(R+28),4);
}
B6e3100:{NFSU2_TR(0x6e3100);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3103:{NFSU2_TR(0x6e3103);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3106:{NFSU2_TR(0x6e3106);
if(r1(R+518)){{goto L6e319e;}}
}
B6e310c:L6e310c:{c.instructions+=4;NFSU2_TR(0x6e310c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3110:{NFSU2_TR(0x6e3110);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3116:{NFSU2_TR(0x6e3116);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e3118:{NFSU2_TR(0x6e3118);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3184;}}
}
B6e311a:L6e311a:{c.instructions+=37;NFSU2_TR(0x6e311a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e311e:{NFSU2_TR(0x6e311e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3121:{NFSU2_TR(0x6e3121);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3124:{NFSU2_TR(0x6e3124);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3128:{NFSU2_TR(0x6e3128);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e312a:{NFSU2_TR(0x6e312a);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e312d:{NFSU2_TR(0x6e312d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e312f:{NFSU2_TR(0x6e312f);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3132:{NFSU2_TR(0x6e3132);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3134:{NFSU2_TR(0x6e3134);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3137:{NFSU2_TR(0x6e3137);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e313a:{NFSU2_TR(0x6e313a);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e313d:{NFSU2_TR(0x6e313d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e313f:{NFSU2_TR(0x6e313f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3142:{NFSU2_TR(0x6e3142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3145:{NFSU2_TR(0x6e3145);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3147:{NFSU2_TR(0x6e3147);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e314a:{NFSU2_TR(0x6e314a);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e314d:{NFSU2_TR(0x6e314d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3150:{NFSU2_TR(0x6e3150);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3153:{NFSU2_TR(0x6e3153);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3156:{NFSU2_TR(0x6e3156);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3159:{NFSU2_TR(0x6e3159);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e315c:{NFSU2_TR(0x6e315c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e315f:{NFSU2_TR(0x6e315f);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3162:{NFSU2_TR(0x6e3162);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3165:{NFSU2_TR(0x6e3165);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3168:{NFSU2_TR(0x6e3168);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e316b:{NFSU2_TR(0x6e316b);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e316e:{NFSU2_TR(0x6e316e);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3171:{NFSU2_TR(0x6e3171);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3174:{NFSU2_TR(0x6e3174);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3177:{NFSU2_TR(0x6e3177);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e317a:{NFSU2_TR(0x6e317a);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e317d:{NFSU2_TR(0x6e317d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e317f:{NFSU2_TR(0x6e317f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3182:{NFSU2_TR(0x6e3182);
{goto L6e3199;}
}
B6e3184:L6e3184:{c.instructions+=1;NFSU2_TR(0x6e3184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e319e;}}
}
B6e3186:L6e3186:{c.instructions+=7;NFSU2_TR(0x6e3186);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3189:{NFSU2_TR(0x6e3189);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e318b:{NFSU2_TR(0x6e318b);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e318e:{NFSU2_TR(0x6e318e);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3191:{NFSU2_TR(0x6e3191);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3193:{NFSU2_TR(0x6e3193);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3196:{NFSU2_TR(0x6e3196);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3199:L6e3199:{c.instructions+=2;NFSU2_TR(0x6e3199);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e319b:{NFSU2_TR(0x6e319b);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e319e:L6e319e:{c.instructions+=10;NFSU2_TR(0x6e319e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e31a2:{NFSU2_TR(0x6e31a2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1c0ull))));
}
B6e31a8:{NFSU2_TR(0x6e31a8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e31ab:{NFSU2_TR(0x6e31ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e31af:{NFSU2_TR(0x6e31af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e31b3:{NFSU2_TR(0x6e31b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e31b6:{NFSU2_TR(0x6e31b6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e31b9:{NFSU2_TR(0x6e31b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B6e31be:{NFSU2_TR(0x6e31be);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e31c0:{NFSU2_TR(0x6e31c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e2ef4u,6e2);}
}
B6e31c6:L6e31c6:{c.instructions+=2;NFSU2_TR(0x6e31c6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e31c8:{NFSU2_TR(0x6e31c8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e352f;}}
}
B6e31ce:L6e31ce:{c.instructions+=10;NFSU2_TR(0x6e31ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e31d2:{NFSU2_TR(0x6e31d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e31d6:{NFSU2_TR(0x6e31d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e31d9:{NFSU2_TR(0x6e31d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e31dc:{NFSU2_TR(0x6e31dc);
__builtin_memmove((R+4),(R+24),4);
}
B6e31de:{NFSU2_TR(0x6e31de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e31e1:{NFSU2_TR(0x6e31e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e31e5:{NFSU2_TR(0x6e31e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e31e9:{NFSU2_TR(0x6e31e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e31ed:{NFSU2_TR(0x6e31ed);
__builtin_memmove((R+4),(R+4),4);
}
B6e31f0:L6e31f0:{c.instructions+=8;NFSU2_TR(0x6e31f0);
__builtin_memmove((R+4),(R+24),4);
}
B6e31f2:{NFSU2_TR(0x6e31f2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e31f5:{NFSU2_TR(0x6e31f5);
w4(R+0,u32(0x1ull));
}
B6e31fa:{NFSU2_TR(0x6e31fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e31fc:{NFSU2_TR(0x6e31fc);
__builtin_memmove((R+4),(R+24),4);
}
B6e31fe:{NFSU2_TR(0x6e31fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3201:{NFSU2_TR(0x6e3201);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3204:{NFSU2_TR(0x6e3204);
if(r1(R+518)){{goto L6e3292;}}
}
B6e320a:L6e320a:{c.instructions+=3;NFSU2_TR(0x6e320a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e320c:{NFSU2_TR(0x6e320c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e320e:{NFSU2_TR(0x6e320e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3278;}}
}
B6e3210:L6e3210:{c.instructions+=37;NFSU2_TR(0x6e3210);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3214:{NFSU2_TR(0x6e3214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e3217:{NFSU2_TR(0x6e3217);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e321a:{NFSU2_TR(0x6e321a);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e321e:{NFSU2_TR(0x6e321e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e3220:{NFSU2_TR(0x6e3220);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3223:{NFSU2_TR(0x6e3223);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3225:{NFSU2_TR(0x6e3225);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3228:{NFSU2_TR(0x6e3228);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e322a:{NFSU2_TR(0x6e322a);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e322d:{NFSU2_TR(0x6e322d);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3230:{NFSU2_TR(0x6e3230);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3233:{NFSU2_TR(0x6e3233);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3235:{NFSU2_TR(0x6e3235);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3238:{NFSU2_TR(0x6e3238);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e323b:{NFSU2_TR(0x6e323b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e323d:{NFSU2_TR(0x6e323d);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3240:{NFSU2_TR(0x6e3240);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3243:{NFSU2_TR(0x6e3243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3246:{NFSU2_TR(0x6e3246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3248:{NFSU2_TR(0x6e3248);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e324b:{NFSU2_TR(0x6e324b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e324e:{NFSU2_TR(0x6e324e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3251:{NFSU2_TR(0x6e3251);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3254:{NFSU2_TR(0x6e3254);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3256:{NFSU2_TR(0x6e3256);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3259:{NFSU2_TR(0x6e3259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e325c:{NFSU2_TR(0x6e325c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e325f:{NFSU2_TR(0x6e325f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3262:{NFSU2_TR(0x6e3262);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3265:{NFSU2_TR(0x6e3265);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3268:{NFSU2_TR(0x6e3268);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e326b:{NFSU2_TR(0x6e326b);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e326e:{NFSU2_TR(0x6e326e);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3271:{NFSU2_TR(0x6e3271);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3273:{NFSU2_TR(0x6e3273);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3276:{NFSU2_TR(0x6e3276);
{goto L6e328d;}
}
B6e3278:L6e3278:{c.instructions+=1;NFSU2_TR(0x6e3278);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e3292;}}
}
B6e327a:L6e327a:{c.instructions+=7;NFSU2_TR(0x6e327a);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e327d:{NFSU2_TR(0x6e327d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e327f:{NFSU2_TR(0x6e327f);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3282:{NFSU2_TR(0x6e3282);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3285:{NFSU2_TR(0x6e3285);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3287:{NFSU2_TR(0x6e3287);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e328a:{NFSU2_TR(0x6e328a);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e328d:L6e328d:{c.instructions+=2;NFSU2_TR(0x6e328d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e328f:{NFSU2_TR(0x6e328f);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3292:L6e3292:{c.instructions+=5;NFSU2_TR(0x6e3292);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e3293:{NFSU2_TR(0x6e3293);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B6e3296:{NFSU2_TR(0x6e3296);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B6e3299:{NFSU2_TR(0x6e3299);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e329b:{NFSU2_TR(0x6e329b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e31f0u);}goto L6e31f0;}}
}
B6e32a1:L6e32a1:{c.instructions+=1;NFSU2_TR(0x6e32a1);
{goto L6e352f;}
}
B6e32a6:L6e32a6:{c.instructions+=2;NFSU2_TR(0x6e32a6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e32a9:{NFSU2_TR(0x6e32a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e3494;}}
}
B6e32af:L6e32af:{c.instructions+=4;NFSU2_TR(0x6e32af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e32b3:{NFSU2_TR(0x6e32b3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xacull))));
}
B6e32b9:{NFSU2_TR(0x6e32b9);
w4(R+28,u32(0x2ull));
}
B6e32be:{NFSU2_TR(0x6e32be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B6e32c1:L6e32c1:{c.instructions+=9;NFSU2_TR(0x6e32c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e32c5:{NFSU2_TR(0x6e32c5);
__builtin_memmove((R+4),(R+24),4);
}
B6e32c7:{NFSU2_TR(0x6e32c7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e32ca:{NFSU2_TR(0x6e32ca);
w4(R+8,u32(0x1ull));
}
B6e32cf:{NFSU2_TR(0x6e32cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e32d1:{NFSU2_TR(0x6e32d1);
__builtin_memmove((R+4),(R+24),4);
}
B6e32d3:{NFSU2_TR(0x6e32d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e32d6:{NFSU2_TR(0x6e32d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e32da:{NFSU2_TR(0x6e32da);
if(r1(R+518)){{goto L6e332c;}}
}
B6e32dc:L6e32dc:{c.instructions+=28;NFSU2_TR(0x6e32dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e32df:{NFSU2_TR(0x6e32df);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e32e3:{NFSU2_TR(0x6e32e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e32e6:{NFSU2_TR(0x6e32e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e32e9:{NFSU2_TR(0x6e32e9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6e32eb:{NFSU2_TR(0x6e32eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e32ee:{NFSU2_TR(0x6e32ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e32f0:{NFSU2_TR(0x6e32f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e32f3:{NFSU2_TR(0x6e32f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e32f6:{NFSU2_TR(0x6e32f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e32f9:{NFSU2_TR(0x6e32f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e32fc:{NFSU2_TR(0x6e32fc);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e32ff:{NFSU2_TR(0x6e32ff);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3301:{NFSU2_TR(0x6e3301);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3304:{NFSU2_TR(0x6e3304);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3307:{NFSU2_TR(0x6e3307);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3309:{NFSU2_TR(0x6e3309);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e330c:{NFSU2_TR(0x6e330c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e330f:{NFSU2_TR(0x6e330f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3312:{NFSU2_TR(0x6e3312);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3315:{NFSU2_TR(0x6e3315);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3318:{NFSU2_TR(0x6e3318);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e331b:{NFSU2_TR(0x6e331b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e331e:{NFSU2_TR(0x6e331e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3321:{NFSU2_TR(0x6e3321);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3324:{NFSU2_TR(0x6e3324);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3327:{NFSU2_TR(0x6e3327);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3329:{NFSU2_TR(0x6e3329);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e332c:L6e332c:{c.instructions+=10;NFSU2_TR(0x6e332c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e332f:{NFSU2_TR(0x6e332f);
__builtin_memmove((R+4),(R+8),4);
}
B6e3331:{NFSU2_TR(0x6e3331);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e3334:{NFSU2_TR(0x6e3334);
w4(R+20,u32(0x1ull));
}
B6e3339:{NFSU2_TR(0x6e3339);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e333b:{NFSU2_TR(0x6e333b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6e333e:{NFSU2_TR(0x6e333e);
__builtin_memmove((R+4),(R+20),4);
}
B6e3340:{NFSU2_TR(0x6e3340);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3344:{NFSU2_TR(0x6e3344);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3348:{NFSU2_TR(0x6e3348);
if(r1(R+518)){{goto L6e3398;}}
}
B6e334a:L6e334a:{c.instructions+=28;NFSU2_TR(0x6e334a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e334c:{NFSU2_TR(0x6e334c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3350:{NFSU2_TR(0x6e3350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3353:{NFSU2_TR(0x6e3353);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3356:{NFSU2_TR(0x6e3356);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6e3358:{NFSU2_TR(0x6e3358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e335b:{NFSU2_TR(0x6e335b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e335d:{NFSU2_TR(0x6e335d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3360:{NFSU2_TR(0x6e3360);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3363:{NFSU2_TR(0x6e3363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e3365:{NFSU2_TR(0x6e3365);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3368:{NFSU2_TR(0x6e3368);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e336b:{NFSU2_TR(0x6e336b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e336d:{NFSU2_TR(0x6e336d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3370:{NFSU2_TR(0x6e3370);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3373:{NFSU2_TR(0x6e3373);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3375:{NFSU2_TR(0x6e3375);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3378:{NFSU2_TR(0x6e3378);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e337b:{NFSU2_TR(0x6e337b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e337e:{NFSU2_TR(0x6e337e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3381:{NFSU2_TR(0x6e3381);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3384:{NFSU2_TR(0x6e3384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3387:{NFSU2_TR(0x6e3387);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e338a:{NFSU2_TR(0x6e338a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e338d:{NFSU2_TR(0x6e338d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3390:{NFSU2_TR(0x6e3390);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3393:{NFSU2_TR(0x6e3393);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3395:{NFSU2_TR(0x6e3395);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3398:L6e3398:{c.instructions+=8;NFSU2_TR(0x6e3398);
__builtin_memmove((R+4),(R+28),4);
}
B6e339a:{NFSU2_TR(0x6e339a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e339d:{NFSU2_TR(0x6e339d);
w4(R+8,u32(0x1ull));
}
B6e33a2:{NFSU2_TR(0x6e33a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e33a4:{NFSU2_TR(0x6e33a4);
__builtin_memmove((R+4),(R+28),4);
}
B6e33a6:{NFSU2_TR(0x6e33a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e33a9:{NFSU2_TR(0x6e33a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e33ad:{NFSU2_TR(0x6e33ad);
if(r1(R+518)){{goto L6e33ff;}}
}
B6e33af:L6e33af:{c.instructions+=28;NFSU2_TR(0x6e33af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e33b2:{NFSU2_TR(0x6e33b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33b6:{NFSU2_TR(0x6e33b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e33b9:{NFSU2_TR(0x6e33b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e33bc:{NFSU2_TR(0x6e33bc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6e33be:{NFSU2_TR(0x6e33be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33c1:{NFSU2_TR(0x6e33c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e33c3:{NFSU2_TR(0x6e33c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33c6:{NFSU2_TR(0x6e33c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e33c9:{NFSU2_TR(0x6e33c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33cc:{NFSU2_TR(0x6e33cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e33cf:{NFSU2_TR(0x6e33cf);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e33d2:{NFSU2_TR(0x6e33d2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e33d4:{NFSU2_TR(0x6e33d4);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e33d7:{NFSU2_TR(0x6e33d7);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e33da:{NFSU2_TR(0x6e33da);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e33dc:{NFSU2_TR(0x6e33dc);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e33df:{NFSU2_TR(0x6e33df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33e2:{NFSU2_TR(0x6e33e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e33e5:{NFSU2_TR(0x6e33e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33e8:{NFSU2_TR(0x6e33e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e33eb:{NFSU2_TR(0x6e33eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33ee:{NFSU2_TR(0x6e33ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e33f1:{NFSU2_TR(0x6e33f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e33f4:{NFSU2_TR(0x6e33f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e33f7:{NFSU2_TR(0x6e33f7);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e33fa:{NFSU2_TR(0x6e33fa);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e33fc:{NFSU2_TR(0x6e33fc);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e33ff:L6e33ff:{c.instructions+=9;NFSU2_TR(0x6e33ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e3402:{NFSU2_TR(0x6e3402);
__builtin_memmove((R+4),(R+8),4);
}
B6e3404:{NFSU2_TR(0x6e3404);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e3407:{NFSU2_TR(0x6e3407);
w4(R+20,u32(0x1ull));
}
B6e340c:{NFSU2_TR(0x6e340c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e340e:{NFSU2_TR(0x6e340e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3412:{NFSU2_TR(0x6e3412);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6e3415:{NFSU2_TR(0x6e3415);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3418:{NFSU2_TR(0x6e3418);
if(r1(R+518)){{goto L6e3470;}}
}
B6e341a:L6e341a:{c.instructions+=28;NFSU2_TR(0x6e341a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3420:{NFSU2_TR(0x6e3420);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3424:{NFSU2_TR(0x6e3424);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3427:{NFSU2_TR(0x6e3427);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e342a:{NFSU2_TR(0x6e342a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6e342c:{NFSU2_TR(0x6e342c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e342f:{NFSU2_TR(0x6e342f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e3431:{NFSU2_TR(0x6e3431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3434:{NFSU2_TR(0x6e3434);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3437:{NFSU2_TR(0x6e3437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e343a:{NFSU2_TR(0x6e343a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e343d:{NFSU2_TR(0x6e343d);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3440:{NFSU2_TR(0x6e3440);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3442:{NFSU2_TR(0x6e3442);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3445:{NFSU2_TR(0x6e3445);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3448:{NFSU2_TR(0x6e3448);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e344a:{NFSU2_TR(0x6e344a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e344d:{NFSU2_TR(0x6e344d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3450:{NFSU2_TR(0x6e3450);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3453:{NFSU2_TR(0x6e3453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3456:{NFSU2_TR(0x6e3456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3459:{NFSU2_TR(0x6e3459);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e345c:{NFSU2_TR(0x6e345c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e345f:{NFSU2_TR(0x6e345f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3462:{NFSU2_TR(0x6e3462);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3465:{NFSU2_TR(0x6e3465);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e346b:{NFSU2_TR(0x6e346b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e346d:{NFSU2_TR(0x6e346d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3470:L6e3470:{c.instructions+=8;NFSU2_TR(0x6e3470);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3474:{NFSU2_TR(0x6e3474);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6e3477:{NFSU2_TR(0x6e3477);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e347a:{NFSU2_TR(0x6e347a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e347d:{NFSU2_TR(0x6e347d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B6e3482:{NFSU2_TR(0x6e3482);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
}
B6e3488:{NFSU2_TR(0x6e3488);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e348a:{NFSU2_TR(0x6e348a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e32c1u);}goto L6e32c1;}}
}
B6e3490:L6e3490:{c.instructions+=1;NFSU2_TR(0x6e3490);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3494:L6e3494:{c.instructions+=2;NFSU2_TR(0x6e3494);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e3496:{NFSU2_TR(0x6e3496);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e352f;}}
}
B6e349c:L6e349c:{c.instructions+=9;NFSU2_TR(0x6e349c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e34a0:{NFSU2_TR(0x6e34a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e34a4:{NFSU2_TR(0x6e34a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e34a7:{NFSU2_TR(0x6e34a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e34aa:{NFSU2_TR(0x6e34aa);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e34ae:{NFSU2_TR(0x6e34ae);
__builtin_memmove((R+0),(R+24),4);
}
B6e34b0:{NFSU2_TR(0x6e34b0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e34b3:{NFSU2_TR(0x6e34b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e34b7:{NFSU2_TR(0x6e34b7);
{goto L6e34c0;}
}
B6e34c0:L6e34c0:{c.instructions+=8;NFSU2_TR(0x6e34c0);
__builtin_memmove((R+4),(R+24),4);
}
B6e34c2:{NFSU2_TR(0x6e34c2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e34c5:{NFSU2_TR(0x6e34c5);
w4(R+0,u32(0x1ull));
}
B6e34ca:{NFSU2_TR(0x6e34ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e34cc:{NFSU2_TR(0x6e34cc);
__builtin_memmove((R+4),(R+24),4);
}
B6e34ce:{NFSU2_TR(0x6e34ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e34d1:{NFSU2_TR(0x6e34d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e34d4:{NFSU2_TR(0x6e34d4);
if(r1(R+518)){{goto L6e3524;}}
}
B6e34d6:L6e34d6:{c.instructions+=28;NFSU2_TR(0x6e34d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e34d8:{NFSU2_TR(0x6e34d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e34dc:{NFSU2_TR(0x6e34dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e34df:{NFSU2_TR(0x6e34df);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e34e2:{NFSU2_TR(0x6e34e2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e34e4:{NFSU2_TR(0x6e34e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e34e7:{NFSU2_TR(0x6e34e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e34e9:{NFSU2_TR(0x6e34e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e34ec:{NFSU2_TR(0x6e34ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e34ef:{NFSU2_TR(0x6e34ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e34f1:{NFSU2_TR(0x6e34f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e34f4:{NFSU2_TR(0x6e34f4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e34f7:{NFSU2_TR(0x6e34f7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e34f9:{NFSU2_TR(0x6e34f9);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e34fc:{NFSU2_TR(0x6e34fc);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e34ff:{NFSU2_TR(0x6e34ff);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3501:{NFSU2_TR(0x6e3501);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3504:{NFSU2_TR(0x6e3504);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3507:{NFSU2_TR(0x6e3507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e350a:{NFSU2_TR(0x6e350a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e350d:{NFSU2_TR(0x6e350d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3510:{NFSU2_TR(0x6e3510);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3513:{NFSU2_TR(0x6e3513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3516:{NFSU2_TR(0x6e3516);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3519:{NFSU2_TR(0x6e3519);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e351c:{NFSU2_TR(0x6e351c);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e351f:{NFSU2_TR(0x6e351f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3521:{NFSU2_TR(0x6e3521);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3524:L6e3524:{c.instructions+=5;NFSU2_TR(0x6e3524);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e3525:{NFSU2_TR(0x6e3525);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B6e3528:{NFSU2_TR(0x6e3528);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B6e352b:{NFSU2_TR(0x6e352b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e352d:{NFSU2_TR(0x6e352d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e34c0u);}goto L6e34c0;}}
}
B6e352f:L6e352f:{c.instructions+=3;NFSU2_TR(0x6e352f);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e3533:{NFSU2_TR(0x6e3533);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e3535:{NFSU2_TR(0x6e3535);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e3b04;}}
}
B6e353b:L6e353b:{c.instructions+=33;NFSU2_TR(0x6e353b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e353f:{NFSU2_TR(0x6e353f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3542:{NFSU2_TR(0x6e3542);
__builtin_memmove((R+8),(R+4),4);
}
B6e3544:{NFSU2_TR(0x6e3544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6e3546:{NFSU2_TR(0x6e3546);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e354a:{NFSU2_TR(0x6e354a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e354e:{NFSU2_TR(0x6e354e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3551:{NFSU2_TR(0x6e3551);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3553:{NFSU2_TR(0x6e3553);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3557:{NFSU2_TR(0x6e3557);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e355a:{NFSU2_TR(0x6e355a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e355d:{NFSU2_TR(0x6e355d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3560:{NFSU2_TR(0x6e3560);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3564:{NFSU2_TR(0x6e3564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3565:{NFSU2_TR(0x6e3565);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3567:{NFSU2_TR(0x6e3567);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e356b:{NFSU2_TR(0x6e356b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e356e:{NFSU2_TR(0x6e356e);
__builtin_memmove((R+8),(R+24),4);
}
B6e3570:{NFSU2_TR(0x6e3570);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3573:{NFSU2_TR(0x6e3573);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3577:{NFSU2_TR(0x6e3577);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3579:{NFSU2_TR(0x6e3579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e357a:{NFSU2_TR(0x6e357a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e357d:{NFSU2_TR(0x6e357d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e357f:{NFSU2_TR(0x6e357f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3582:{NFSU2_TR(0x6e3582);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3586:{NFSU2_TR(0x6e3586);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3588:{NFSU2_TR(0x6e3588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3589:{NFSU2_TR(0x6e3589);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e358c:{NFSU2_TR(0x6e358c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e358f:{NFSU2_TR(0x6e358f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3590:{NFSU2_TR(0x6e3590);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3593:{NFSU2_TR(0x6e3593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3596:L6e3596:{c.instructions+=3;NFSU2_TR(0x6e3596);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e359a:{NFSU2_TR(0x6e359a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e359c:{NFSU2_TR(0x6e359c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e38c8;}}
}
B6e35a2:L6e35a2:{c.instructions+=3;NFSU2_TR(0x6e35a2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e35a4:{NFSU2_TR(0x6e35a4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e35a7:{NFSU2_TR(0x6e35a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e3815;}}
}
B6e35ad:L6e35ad:{c.instructions+=4;NFSU2_TR(0x6e35ad);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xacull))));
}
B6e35b3:{NFSU2_TR(0x6e35b3);
w4(R+28,u32(0x2ull));
}
B6e35b8:{NFSU2_TR(0x6e35b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e35bc:{NFSU2_TR(0x6e35bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e35bf:L6e35bf:{c.instructions+=3;NFSU2_TR(0x6e35bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e35c2:{NFSU2_TR(0x6e35c2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e35c4:{NFSU2_TR(0x6e35c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e362c;}}
}
B6e35c6:L6e35c6:{c.instructions+=36;NFSU2_TR(0x6e35c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e35c9:{NFSU2_TR(0x6e35c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e35cc:{NFSU2_TR(0x6e35cc);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e35d0:{NFSU2_TR(0x6e35d0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e35d2:{NFSU2_TR(0x6e35d2);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e35d5:{NFSU2_TR(0x6e35d5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e35d7:{NFSU2_TR(0x6e35d7);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e35da:{NFSU2_TR(0x6e35da);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e35dc:{NFSU2_TR(0x6e35dc);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e35df:{NFSU2_TR(0x6e35df);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e35e2:{NFSU2_TR(0x6e35e2);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e35e5:{NFSU2_TR(0x6e35e5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e35e7:{NFSU2_TR(0x6e35e7);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e35ea:{NFSU2_TR(0x6e35ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e35ed:{NFSU2_TR(0x6e35ed);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e35ef:{NFSU2_TR(0x6e35ef);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e35f2:{NFSU2_TR(0x6e35f2);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e35f5:{NFSU2_TR(0x6e35f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e35f8:{NFSU2_TR(0x6e35f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e35fb:{NFSU2_TR(0x6e35fb);
{u32 ea_=u32(r4(R+0)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e35fe:{NFSU2_TR(0x6e35fe);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3601:{NFSU2_TR(0x6e3601);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3604:{NFSU2_TR(0x6e3604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3607:{NFSU2_TR(0x6e3607);
{u32 ea_=u32(r4(R+0)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e360a:{NFSU2_TR(0x6e360a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e360d:{NFSU2_TR(0x6e360d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3610:{NFSU2_TR(0x6e3610);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3613:{NFSU2_TR(0x6e3613);
{u32 ea_=u32(r4(R+0)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3616:{NFSU2_TR(0x6e3616);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3619:{NFSU2_TR(0x6e3619);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e361c:{NFSU2_TR(0x6e361c);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e361f:{NFSU2_TR(0x6e361f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3622:{NFSU2_TR(0x6e3622);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3625:{NFSU2_TR(0x6e3625);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3627:{NFSU2_TR(0x6e3627);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e362a:{NFSU2_TR(0x6e362a);
{goto L6e3641;}
}
B6e362c:L6e362c:{c.instructions+=1;NFSU2_TR(0x6e362c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e3646;}}
}
B6e362e:L6e362e:{c.instructions+=7;NFSU2_TR(0x6e362e);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3631:{NFSU2_TR(0x6e3631);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3633:{NFSU2_TR(0x6e3633);
{u32 ea_=u32(r4(R+0)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3636:{NFSU2_TR(0x6e3636);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3639:{NFSU2_TR(0x6e3639);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e363b:{NFSU2_TR(0x6e363b);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e363e:{NFSU2_TR(0x6e363e);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3641:L6e3641:{c.instructions+=2;NFSU2_TR(0x6e3641);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3643:{NFSU2_TR(0x6e3643);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3646:L6e3646:{c.instructions+=5;NFSU2_TR(0x6e3646);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e364a:{NFSU2_TR(0x6e364a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e364c:{NFSU2_TR(0x6e364c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e364f:{NFSU2_TR(0x6e364f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e3651:{NFSU2_TR(0x6e3651);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e36b7;}}
}
B6e3653:L6e3653:{c.instructions+=36;NFSU2_TR(0x6e3653);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3656:{NFSU2_TR(0x6e3656);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3659:{NFSU2_TR(0x6e3659);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e365d:{NFSU2_TR(0x6e365d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e365f:{NFSU2_TR(0x6e365f);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3662:{NFSU2_TR(0x6e3662);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3664:{NFSU2_TR(0x6e3664);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3667:{NFSU2_TR(0x6e3667);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3669:{NFSU2_TR(0x6e3669);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e366c:{NFSU2_TR(0x6e366c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e366f:{NFSU2_TR(0x6e366f);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3672:{NFSU2_TR(0x6e3672);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3674:{NFSU2_TR(0x6e3674);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3677:{NFSU2_TR(0x6e3677);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e367a:{NFSU2_TR(0x6e367a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e367c:{NFSU2_TR(0x6e367c);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e367f:{NFSU2_TR(0x6e367f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3682:{NFSU2_TR(0x6e3682);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3685:{NFSU2_TR(0x6e3685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e3687:{NFSU2_TR(0x6e3687);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e368a:{NFSU2_TR(0x6e368a);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e368d:{NFSU2_TR(0x6e368d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3690:{NFSU2_TR(0x6e3690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3693:{NFSU2_TR(0x6e3693);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3695:{NFSU2_TR(0x6e3695);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3698:{NFSU2_TR(0x6e3698);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e369b:{NFSU2_TR(0x6e369b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e369e:{NFSU2_TR(0x6e369e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36a1:{NFSU2_TR(0x6e36a1);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36a4:{NFSU2_TR(0x6e36a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e36a7:{NFSU2_TR(0x6e36a7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36aa:{NFSU2_TR(0x6e36aa);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36ad:{NFSU2_TR(0x6e36ad);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36b0:{NFSU2_TR(0x6e36b0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36b2:{NFSU2_TR(0x6e36b2);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36b5:{NFSU2_TR(0x6e36b5);
{goto L6e36cc;}
}
B6e36b7:L6e36b7:{c.instructions+=1;NFSU2_TR(0x6e36b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e36d1;}}
}
B6e36b9:L6e36b9:{c.instructions+=7;NFSU2_TR(0x6e36b9);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36bc:{NFSU2_TR(0x6e36bc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36be:{NFSU2_TR(0x6e36be);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36c1:{NFSU2_TR(0x6e36c1);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36c4:{NFSU2_TR(0x6e36c4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36c6:{NFSU2_TR(0x6e36c6);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36c9:{NFSU2_TR(0x6e36c9);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36cc:L6e36cc:{c.instructions+=2;NFSU2_TR(0x6e36cc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36ce:{NFSU2_TR(0x6e36ce);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36d1:L6e36d1:{c.instructions+=4;NFSU2_TR(0x6e36d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e36d5:{NFSU2_TR(0x6e36d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e36d8:{NFSU2_TR(0x6e36d8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e36da:{NFSU2_TR(0x6e36da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3742;}}
}
B6e36dc:L6e36dc:{c.instructions+=36;NFSU2_TR(0x6e36dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e36df:{NFSU2_TR(0x6e36df);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e36e2:{NFSU2_TR(0x6e36e2);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36e6:{NFSU2_TR(0x6e36e6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e36e8:{NFSU2_TR(0x6e36e8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36eb:{NFSU2_TR(0x6e36eb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36ed:{NFSU2_TR(0x6e36ed);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36f0:{NFSU2_TR(0x6e36f0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36f2:{NFSU2_TR(0x6e36f2);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e36f5:{NFSU2_TR(0x6e36f5);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36f8:{NFSU2_TR(0x6e36f8);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e36fb:{NFSU2_TR(0x6e36fb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e36fd:{NFSU2_TR(0x6e36fd);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3700:{NFSU2_TR(0x6e3700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3703:{NFSU2_TR(0x6e3703);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3705:{NFSU2_TR(0x6e3705);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3708:{NFSU2_TR(0x6e3708);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e370b:{NFSU2_TR(0x6e370b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e370e:{NFSU2_TR(0x6e370e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3711:{NFSU2_TR(0x6e3711);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3714:{NFSU2_TR(0x6e3714);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3717:{NFSU2_TR(0x6e3717);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e371a:{NFSU2_TR(0x6e371a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e371d:{NFSU2_TR(0x6e371d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3720:{NFSU2_TR(0x6e3720);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3723:{NFSU2_TR(0x6e3723);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3726:{NFSU2_TR(0x6e3726);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3729:{NFSU2_TR(0x6e3729);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e372c:{NFSU2_TR(0x6e372c);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e372f:{NFSU2_TR(0x6e372f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3732:{NFSU2_TR(0x6e3732);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3735:{NFSU2_TR(0x6e3735);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3738:{NFSU2_TR(0x6e3738);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e373b:{NFSU2_TR(0x6e373b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e373d:{NFSU2_TR(0x6e373d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3740:{NFSU2_TR(0x6e3740);
{goto L6e3757;}
}
B6e3742:L6e3742:{c.instructions+=1;NFSU2_TR(0x6e3742);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e375c;}}
}
B6e3744:L6e3744:{c.instructions+=7;NFSU2_TR(0x6e3744);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3747:{NFSU2_TR(0x6e3747);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3749:{NFSU2_TR(0x6e3749);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e374c:{NFSU2_TR(0x6e374c);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e374f:{NFSU2_TR(0x6e374f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3751:{NFSU2_TR(0x6e3751);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3754:{NFSU2_TR(0x6e3754);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3757:L6e3757:{c.instructions+=2;NFSU2_TR(0x6e3757);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3759:{NFSU2_TR(0x6e3759);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e375c:L6e375c:{c.instructions+=5;NFSU2_TR(0x6e375c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3760:{NFSU2_TR(0x6e3760);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3766:{NFSU2_TR(0x6e3766);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3769:{NFSU2_TR(0x6e3769);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e376b:{NFSU2_TR(0x6e376b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e37d3;}}
}
B6e376d:L6e376d:{c.instructions+=36;NFSU2_TR(0x6e376d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3770:{NFSU2_TR(0x6e3770);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3773:{NFSU2_TR(0x6e3773);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3777:{NFSU2_TR(0x6e3777);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e3779:{NFSU2_TR(0x6e3779);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e377c:{NFSU2_TR(0x6e377c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e377e:{NFSU2_TR(0x6e377e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3781:{NFSU2_TR(0x6e3781);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3783:{NFSU2_TR(0x6e3783);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3786:{NFSU2_TR(0x6e3786);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3789:{NFSU2_TR(0x6e3789);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e378c:{NFSU2_TR(0x6e378c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e378e:{NFSU2_TR(0x6e378e);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3791:{NFSU2_TR(0x6e3791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3794:{NFSU2_TR(0x6e3794);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3796:{NFSU2_TR(0x6e3796);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3799:{NFSU2_TR(0x6e3799);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e379c:{NFSU2_TR(0x6e379c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e379f:{NFSU2_TR(0x6e379f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e37a2:{NFSU2_TR(0x6e37a2);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37a5:{NFSU2_TR(0x6e37a5);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37a8:{NFSU2_TR(0x6e37a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e37ab:{NFSU2_TR(0x6e37ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e37ae:{NFSU2_TR(0x6e37ae);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37b1:{NFSU2_TR(0x6e37b1);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37b4:{NFSU2_TR(0x6e37b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e37b7:{NFSU2_TR(0x6e37b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e37ba:{NFSU2_TR(0x6e37ba);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37bd:{NFSU2_TR(0x6e37bd);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37c0:{NFSU2_TR(0x6e37c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e37c3:{NFSU2_TR(0x6e37c3);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37c6:{NFSU2_TR(0x6e37c6);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37c9:{NFSU2_TR(0x6e37c9);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37cc:{NFSU2_TR(0x6e37cc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e37ce:{NFSU2_TR(0x6e37ce);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37d1:{NFSU2_TR(0x6e37d1);
{goto L6e37e8;}
}
B6e37d3:L6e37d3:{c.instructions+=1;NFSU2_TR(0x6e37d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e37ed;}}
}
B6e37d5:L6e37d5:{c.instructions+=7;NFSU2_TR(0x6e37d5);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37d8:{NFSU2_TR(0x6e37d8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e37da:{NFSU2_TR(0x6e37da);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37dd:{NFSU2_TR(0x6e37dd);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37e0:{NFSU2_TR(0x6e37e0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e37e2:{NFSU2_TR(0x6e37e2);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37e5:{NFSU2_TR(0x6e37e5);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e37e8:L6e37e8:{c.instructions+=2;NFSU2_TR(0x6e37e8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e37ea:{NFSU2_TR(0x6e37ea);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e37ed:L6e37ed:{c.instructions+=9;NFSU2_TR(0x6e37ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e37f1:{NFSU2_TR(0x6e37f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6e37f4:{NFSU2_TR(0x6e37f4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1c0ull))));
}
B6e37fa:{NFSU2_TR(0x6e37fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e37fd:{NFSU2_TR(0x6e37fd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e3800:{NFSU2_TR(0x6e3800);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B6e3805:{NFSU2_TR(0x6e3805);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e3807:{NFSU2_TR(0x6e3807);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e380b:{NFSU2_TR(0x6e380b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e35bfu);}goto L6e35bf;}}
}
B6e3811:L6e3811:{c.instructions+=1;NFSU2_TR(0x6e3811);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3815:L6e3815:{c.instructions+=2;NFSU2_TR(0x6e3815);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e3817:{NFSU2_TR(0x6e3817);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e3ab3;}}
}
B6e381d:L6e381d:{c.instructions+=6;NFSU2_TR(0x6e381d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e3820:{NFSU2_TR(0x6e3820);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e3823:{NFSU2_TR(0x6e3823);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e3827:{NFSU2_TR(0x6e3827);
__builtin_memmove((R+0),(R+8),4);
}
B6e3829:{NFSU2_TR(0x6e3829);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e382c:{NFSU2_TR(0x6e382c);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6e3830:L6e3830:{c.instructions+=3;NFSU2_TR(0x6e3830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e3832:{NFSU2_TR(0x6e3832);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e3834:{NFSU2_TR(0x6e3834);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e389a;}}
}
B6e3836:L6e3836:{c.instructions+=36;NFSU2_TR(0x6e3836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e3839:{NFSU2_TR(0x6e3839);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e383c:{NFSU2_TR(0x6e383c);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3840:{NFSU2_TR(0x6e3840);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6e3842:{NFSU2_TR(0x6e3842);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3845:{NFSU2_TR(0x6e3845);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3847:{NFSU2_TR(0x6e3847);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e384a:{NFSU2_TR(0x6e384a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e384c:{NFSU2_TR(0x6e384c);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e384f:{NFSU2_TR(0x6e384f);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3852:{NFSU2_TR(0x6e3852);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3855:{NFSU2_TR(0x6e3855);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3857:{NFSU2_TR(0x6e3857);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e385a:{NFSU2_TR(0x6e385a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e385d:{NFSU2_TR(0x6e385d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e385f:{NFSU2_TR(0x6e385f);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3862:{NFSU2_TR(0x6e3862);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3865:{NFSU2_TR(0x6e3865);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3868:{NFSU2_TR(0x6e3868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e386a:{NFSU2_TR(0x6e386a);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e386d:{NFSU2_TR(0x6e386d);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3870:{NFSU2_TR(0x6e3870);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3873:{NFSU2_TR(0x6e3873);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3876:{NFSU2_TR(0x6e3876);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3878:{NFSU2_TR(0x6e3878);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e387b:{NFSU2_TR(0x6e387b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e387e:{NFSU2_TR(0x6e387e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3881:{NFSU2_TR(0x6e3881);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3884:{NFSU2_TR(0x6e3884);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3887:{NFSU2_TR(0x6e3887);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e388a:{NFSU2_TR(0x6e388a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e388d:{NFSU2_TR(0x6e388d);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3890:{NFSU2_TR(0x6e3890);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3893:{NFSU2_TR(0x6e3893);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3895:{NFSU2_TR(0x6e3895);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3898:{NFSU2_TR(0x6e3898);
{goto L6e38af;}
}
B6e389a:L6e389a:{c.instructions+=1;NFSU2_TR(0x6e389a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e38b4;}}
}
B6e389c:L6e389c:{c.instructions+=7;NFSU2_TR(0x6e389c);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e389f:{NFSU2_TR(0x6e389f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e38a1:{NFSU2_TR(0x6e38a1);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e38a4:{NFSU2_TR(0x6e38a4);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e38a7:{NFSU2_TR(0x6e38a7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e38a9:{NFSU2_TR(0x6e38a9);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e38ac:{NFSU2_TR(0x6e38ac);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e38af:L6e38af:{c.instructions+=2;NFSU2_TR(0x6e38af);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e38b1:{NFSU2_TR(0x6e38b1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e38b4:L6e38b4:{c.instructions+=5;NFSU2_TR(0x6e38b4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e38b5:{NFSU2_TR(0x6e38b5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x70ull))));
}
B6e38b8:{NFSU2_TR(0x6e38b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6e38bb:{NFSU2_TR(0x6e38bb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e38bd:{NFSU2_TR(0x6e38bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3830u);}goto L6e3830;}}
}
B6e38c3:L6e38c3:{c.instructions+=1;NFSU2_TR(0x6e38c3);
{goto L6e3ab3;}
}
B6e38c8:L6e38c8:{c.instructions+=3;NFSU2_TR(0x6e38c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e38ca:{NFSU2_TR(0x6e38ca);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e38cd:{NFSU2_TR(0x6e38cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e3a3c;}}
}
B6e38d3:L6e38d3:{c.instructions+=4;NFSU2_TR(0x6e38d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e38d7:{NFSU2_TR(0x6e38d7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xacull))));
}
B6e38dd:{NFSU2_TR(0x6e38dd);
w4(R+28,u32(0x3ull));
}
B6e38e2:{NFSU2_TR(0x6e38e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B6e38e5:L6e38e5:{c.instructions+=115;NFSU2_TR(0x6e38e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e38e8:{NFSU2_TR(0x6e38e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e38eb:{NFSU2_TR(0x6e38eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e38ee:{NFSU2_TR(0x6e38ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e38f1:{NFSU2_TR(0x6e38f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e38f4:{NFSU2_TR(0x6e38f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e38f7:{NFSU2_TR(0x6e38f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e38fb:{NFSU2_TR(0x6e38fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e38fe:{NFSU2_TR(0x6e38fe);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e3902:{NFSU2_TR(0x6e3902);
{u32 ea_=u32(r4(R+0)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3905:{NFSU2_TR(0x6e3905);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e3907:{NFSU2_TR(0x6e3907);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3909:{NFSU2_TR(0x6e3909);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e390c:{NFSU2_TR(0x6e390c);
{u32 ea_=u32(r4(R+0)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e390f:{NFSU2_TR(0x6e390f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3911:{NFSU2_TR(0x6e3911);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3914:{NFSU2_TR(0x6e3914);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3917:{NFSU2_TR(0x6e3917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e391a:{NFSU2_TR(0x6e391a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e391d:{NFSU2_TR(0x6e391d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3920:{NFSU2_TR(0x6e3920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3923:{NFSU2_TR(0x6e3923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3926:{NFSU2_TR(0x6e3926);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3929:{NFSU2_TR(0x6e3929);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e392c:{NFSU2_TR(0x6e392c);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e392f:{NFSU2_TR(0x6e392f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3931:{NFSU2_TR(0x6e3931);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3934:{NFSU2_TR(0x6e3934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3936:{NFSU2_TR(0x6e3936);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3939:{NFSU2_TR(0x6e3939);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e393c:{NFSU2_TR(0x6e393c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e393f:{NFSU2_TR(0x6e393f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e3942:{NFSU2_TR(0x6e3942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3945:{NFSU2_TR(0x6e3945);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e3949:{NFSU2_TR(0x6e3949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e394b:{NFSU2_TR(0x6e394b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e394d:{NFSU2_TR(0x6e394d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3950:{NFSU2_TR(0x6e3950);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3953:{NFSU2_TR(0x6e3953);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3955:{NFSU2_TR(0x6e3955);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3958:{NFSU2_TR(0x6e3958);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e395b:{NFSU2_TR(0x6e395b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e395d:{NFSU2_TR(0x6e395d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3960:{NFSU2_TR(0x6e3960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3963:{NFSU2_TR(0x6e3963);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3966:{NFSU2_TR(0x6e3966);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3969:{NFSU2_TR(0x6e3969);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e396c:{NFSU2_TR(0x6e396c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e396f:{NFSU2_TR(0x6e396f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3972:{NFSU2_TR(0x6e3972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3975:{NFSU2_TR(0x6e3975);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3978:{NFSU2_TR(0x6e3978);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e397b:{NFSU2_TR(0x6e397b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e397d:{NFSU2_TR(0x6e397d);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3980:{NFSU2_TR(0x6e3980);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3983:{NFSU2_TR(0x6e3983);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3986:{NFSU2_TR(0x6e3986);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3989:{NFSU2_TR(0x6e3989);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e398c:{NFSU2_TR(0x6e398c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e398e:{NFSU2_TR(0x6e398e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e3990:{NFSU2_TR(0x6e3990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3993:{NFSU2_TR(0x6e3993);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3996:{NFSU2_TR(0x6e3996);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3999:{NFSU2_TR(0x6e3999);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e399c:{NFSU2_TR(0x6e399c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e399f:{NFSU2_TR(0x6e399f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e39a1:{NFSU2_TR(0x6e39a1);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e39a4:{NFSU2_TR(0x6e39a4);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e39a7:{NFSU2_TR(0x6e39a7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e39a9:{NFSU2_TR(0x6e39a9);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e39ac:{NFSU2_TR(0x6e39ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39af:{NFSU2_TR(0x6e39af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e39b2:{NFSU2_TR(0x6e39b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39b5:{NFSU2_TR(0x6e39b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e39b8:{NFSU2_TR(0x6e39b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39bb:{NFSU2_TR(0x6e39bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e39be:{NFSU2_TR(0x6e39be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39c1:{NFSU2_TR(0x6e39c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e39c4:{NFSU2_TR(0x6e39c4);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e39c7:{NFSU2_TR(0x6e39c7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e39c9:{NFSU2_TR(0x6e39c9);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e39cc:{NFSU2_TR(0x6e39cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e39d2:{NFSU2_TR(0x6e39d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39d5:{NFSU2_TR(0x6e39d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e39d8:{NFSU2_TR(0x6e39d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e39db:{NFSU2_TR(0x6e39db);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e39dd:{NFSU2_TR(0x6e39dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e39df:{NFSU2_TR(0x6e39df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39e2:{NFSU2_TR(0x6e39e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e39e5:{NFSU2_TR(0x6e39e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e39e8:{NFSU2_TR(0x6e39e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e39eb:{NFSU2_TR(0x6e39eb);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e39ee:{NFSU2_TR(0x6e39ee);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e39f0:{NFSU2_TR(0x6e39f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6e39f3:{NFSU2_TR(0x6e39f3);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e39f6:{NFSU2_TR(0x6e39f6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6e39f9:{NFSU2_TR(0x6e39f9);
{u32 ea_=u32(r4(R+0)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e39fc:{NFSU2_TR(0x6e39fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B6e3a01:{NFSU2_TR(0x6e3a01);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3a03:{NFSU2_TR(0x6e3a03);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1c0ull))));
}
B6e3a09:{NFSU2_TR(0x6e3a09);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3a0c:{NFSU2_TR(0x6e3a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3a0f:{NFSU2_TR(0x6e3a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a12:{NFSU2_TR(0x6e3a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3a15:{NFSU2_TR(0x6e3a15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a18:{NFSU2_TR(0x6e3a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3a1b:{NFSU2_TR(0x6e3a1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a1e:{NFSU2_TR(0x6e3a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3a21:{NFSU2_TR(0x6e3a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a24:{NFSU2_TR(0x6e3a24);
{u32 ea_=u32(r4(R+0)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3a27:{NFSU2_TR(0x6e3a27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3a2b:{NFSU2_TR(0x6e3a2b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3a2d:{NFSU2_TR(0x6e3a2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e3a2f:{NFSU2_TR(0x6e3a2f);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3a32:{NFSU2_TR(0x6e3a32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e38e5u);}goto L6e38e5;}}
}
B6e3a38:L6e3a38:{c.instructions+=1;NFSU2_TR(0x6e3a38);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3a3c:L6e3a3c:{c.instructions+=2;NFSU2_TR(0x6e3a3c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e3a3e:{NFSU2_TR(0x6e3a3e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e3ab3;}}
}
B6e3a40:L6e3a40:{c.instructions+=9;NFSU2_TR(0x6e3a40);
__builtin_memmove((R+8),(R+12),4);
}
B6e3a42:{NFSU2_TR(0x6e3a42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e3a45:{NFSU2_TR(0x6e3a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e3a48:{NFSU2_TR(0x6e3a48);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3a4b:{NFSU2_TR(0x6e3a4b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e3a4f:{NFSU2_TR(0x6e3a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3a53:{NFSU2_TR(0x6e3a53);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e3a57:{NFSU2_TR(0x6e3a57);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B6e3a59:{NFSU2_TR(0x6e3a59);
__builtin_memmove((R+16),(R+16),4);
}
B6e3a60:L6e3a60:{c.instructions+=31;NFSU2_TR(0x6e3a60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e3a62:{NFSU2_TR(0x6e3a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3a65:{NFSU2_TR(0x6e3a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e3a68:{NFSU2_TR(0x6e3a68);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e3a6b:{NFSU2_TR(0x6e3a6b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6e3a6d:{NFSU2_TR(0x6e3a6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e3a6f:{NFSU2_TR(0x6e3a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3a72:{NFSU2_TR(0x6e3a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a75:{NFSU2_TR(0x6e3a75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6e3a77:{NFSU2_TR(0x6e3a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a7a:{NFSU2_TR(0x6e3a7a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3a7d:{NFSU2_TR(0x6e3a7d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3a7f:{NFSU2_TR(0x6e3a7f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6e3a82:{NFSU2_TR(0x6e3a82);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3a85:{NFSU2_TR(0x6e3a85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B6e3a88:{NFSU2_TR(0x6e3a88);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B6e3a89:{NFSU2_TR(0x6e3a89);
{u32 ea_=u32(r4(R+4)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3a8c:{NFSU2_TR(0x6e3a8c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3a8e:{NFSU2_TR(0x6e3a8e);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3a91:{NFSU2_TR(0x6e3a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3a94:{NFSU2_TR(0x6e3a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a97:{NFSU2_TR(0x6e3a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3a9a:{NFSU2_TR(0x6e3a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3a9d:{NFSU2_TR(0x6e3a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3aa0:{NFSU2_TR(0x6e3aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3aa3:{NFSU2_TR(0x6e3aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3aa6:{NFSU2_TR(0x6e3aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3aa9:{NFSU2_TR(0x6e3aa9);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3aac:{NFSU2_TR(0x6e3aac);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3aae:{NFSU2_TR(0x6e3aae);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3ab1:{NFSU2_TR(0x6e3ab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3a60u);}goto L6e3a60;}}
}
B6e3ab3:L6e3ab3:{c.instructions+=3;NFSU2_TR(0x6e3ab3);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e3ab7:{NFSU2_TR(0x6e3ab7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e3ab9:{NFSU2_TR(0x6e3ab9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e3b04;}}
}
B6e3abb:L6e3abb:{c.instructions+=25;NFSU2_TR(0x6e3abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e3abe:{NFSU2_TR(0x6e3abe);
__builtin_memmove((R+4),(R+0),4);
}
B6e3ac0:{NFSU2_TR(0x6e3ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e3ac2:{NFSU2_TR(0x6e3ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ac6:{NFSU2_TR(0x6e3ac6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3aca:{NFSU2_TR(0x6e3aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3acd:{NFSU2_TR(0x6e3acd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3acf:{NFSU2_TR(0x6e3acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ad3:{NFSU2_TR(0x6e3ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3ad6:{NFSU2_TR(0x6e3ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3ad9:{NFSU2_TR(0x6e3ad9);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3adc:{NFSU2_TR(0x6e3adc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3ae0:{NFSU2_TR(0x6e3ae0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e3ae2:{NFSU2_TR(0x6e3ae2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3ae4:{NFSU2_TR(0x6e3ae4);
__builtin_memmove((R+0),(R+4),4);
}
B6e3ae6:{NFSU2_TR(0x6e3ae6);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3ae9:{NFSU2_TR(0x6e3ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3aed:{NFSU2_TR(0x6e3aed);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3af0:{NFSU2_TR(0x6e3af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3af4:{NFSU2_TR(0x6e3af4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3af6:{NFSU2_TR(0x6e3af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3af9:{NFSU2_TR(0x6e3af9);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3afc:{NFSU2_TR(0x6e3afc);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3aff:{NFSU2_TR(0x6e3aff);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6e3b01:{NFSU2_TR(0x6e3b01);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3b04:L6e3b04:{c.instructions+=6;NFSU2_TR(0x6e3b04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3b05:{NFSU2_TR(0x6e3b05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3b06:{NFSU2_TR(0x6e3b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3b07:{NFSU2_TR(0x6e3b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3b08:{NFSU2_TR(0x6e3b08);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3b0b:{NFSU2_TR(0x6e3b0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3b10:L6e3b10:{c.instructions+=9;NFSU2_TR(0x6e3b10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b11:{NFSU2_TR(0x6e3b11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3b15:{NFSU2_TR(0x6e3b15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b16:{NFSU2_TR(0x6e3b16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b17:{NFSU2_TR(0x6e3b17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b18:{NFSU2_TR(0x6e3b18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e3b1a:{NFSU2_TR(0x6e3b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3b1d:{NFSU2_TR(0x6e3b1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b1e:{NFSU2_TR(0x6e3b1e);
if(r1(R+518)){{goto L6e3bdb;}}
}
B6e3b24:L6e3b24:{c.instructions+=4;NFSU2_TR(0x6e3b24);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e3b26:{NFSU2_TR(0x6e3b26);
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
B6e3b28:{NFSU2_TR(0x6e3b28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3b2c:{NFSU2_TR(0x6e3b2c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3c61;}}
}
B6e3b32:L6e3b32:{c.instructions+=4;NFSU2_TR(0x6e3b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3b36:{NFSU2_TR(0x6e3b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3b3a:{NFSU2_TR(0x6e3b3a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B6e3b3d:{NFSU2_TR(0x6e3b3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3b40:L6e3b40:{c.instructions+=9;NFSU2_TR(0x6e3b40);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3b44:{NFSU2_TR(0x6e3b44);
__builtin_memmove((R+4),(R+12),4);
}
B6e3b46:{NFSU2_TR(0x6e3b46);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e3b49:{NFSU2_TR(0x6e3b49);
w4(R+0,u32(0x1ull));
}
B6e3b4e:{NFSU2_TR(0x6e3b4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e3b50:{NFSU2_TR(0x6e3b50);
__builtin_memmove((R+4),(R+12),4);
}
B6e3b52:{NFSU2_TR(0x6e3b52);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3b55:{NFSU2_TR(0x6e3b55);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3b58:{NFSU2_TR(0x6e3b58);
if(r1(R+518)){{goto L6e3bbd;}}
}
B6e3b5a:L6e3b5a:{c.instructions+=22;NFSU2_TR(0x6e3b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3b5d:{NFSU2_TR(0x6e3b5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3b5f:{NFSU2_TR(0x6e3b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3b62:{NFSU2_TR(0x6e3b62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b63:{NFSU2_TR(0x6e3b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3b66:{NFSU2_TR(0x6e3b66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b67:{NFSU2_TR(0x6e3b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3b6a:{NFSU2_TR(0x6e3b6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b6b:{NFSU2_TR(0x6e3b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3b6e:{NFSU2_TR(0x6e3b6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b6f:{NFSU2_TR(0x6e3b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3b72:{NFSU2_TR(0x6e3b72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b73:{NFSU2_TR(0x6e3b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3b76:{NFSU2_TR(0x6e3b76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b77:{NFSU2_TR(0x6e3b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3b7a:{NFSU2_TR(0x6e3b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b7b:{NFSU2_TR(0x6e3b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3b7e:{NFSU2_TR(0x6e3b7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b7f:{NFSU2_TR(0x6e3b7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b80:{NFSU2_TR(0x6e3b80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3b81:{NFSU2_TR(0x6e3b81);
__builtin_memmove((R+4),(R+28),4);
}
B6e3b83:{NFSU2_TR(0x6e3b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3b88ull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e3b88:L6e3b88:{c.instructions+=12;NFSU2_TR(0x6e3b88);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3b8a:{NFSU2_TR(0x6e3b8a);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e3b8d:{NFSU2_TR(0x6e3b8d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3b8f:{NFSU2_TR(0x6e3b8f);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3b92:{NFSU2_TR(0x6e3b92);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e3b95:{NFSU2_TR(0x6e3b95);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3b98:{NFSU2_TR(0x6e3b98);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3b9b:{NFSU2_TR(0x6e3b9b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e3b9e:{NFSU2_TR(0x6e3b9e);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3ba1:{NFSU2_TR(0x6e3ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e3ba4:{NFSU2_TR(0x6e3ba4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e3ba6:{NFSU2_TR(0x6e3ba6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e3bbd;}}
}
B6e3ba8:L6e3ba8:{c.instructions+=7;NFSU2_TR(0x6e3ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3bac:{NFSU2_TR(0x6e3bac);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e3baf:{NFSU2_TR(0x6e3baf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3bb0:{NFSU2_TR(0x6e3bb0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3bb2:{NFSU2_TR(0x6e3bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3bb3:{NFSU2_TR(0x6e3bb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3bb4:{NFSU2_TR(0x6e3bb4);
u8 U[4];
__builtin_memmove((U+0),gp(0x811e34),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3bbaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e3bba:L6e3bba:{c.instructions+=1;NFSU2_TR(0x6e3bba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6e3bbd:L6e3bbd:{c.instructions+=7;NFSU2_TR(0x6e3bbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3bc1:{NFSU2_TR(0x6e3bc1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B6e3bc4:{NFSU2_TR(0x6e3bc4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e3bc5:{NFSU2_TR(0x6e3bc5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x70ull))));
}
B6e3bc8:{NFSU2_TR(0x6e3bc8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e3bcb:{NFSU2_TR(0x6e3bcb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3bcd:{NFSU2_TR(0x6e3bcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3b40u);}goto L6e3b40;}}
}
B6e3bd3:L6e3bd3:{c.instructions+=6;NFSU2_TR(0x6e3bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3bd4:{NFSU2_TR(0x6e3bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3bd5:{NFSU2_TR(0x6e3bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3bd6:{NFSU2_TR(0x6e3bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3bd7:{NFSU2_TR(0x6e3bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3bd8:{NFSU2_TR(0x6e3bd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3bdb:L6e3bdb:{c.instructions+=2;NFSU2_TR(0x6e3bdb);
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
B6e3bdd:{NFSU2_TR(0x6e3bdd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3c61;}}
}
B6e3be3:L6e3be3:{c.instructions+=5;NFSU2_TR(0x6e3be3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3be7:{NFSU2_TR(0x6e3be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3beb:{NFSU2_TR(0x6e3beb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
}
B6e3bee:{NFSU2_TR(0x6e3bee);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3bf1:{NFSU2_TR(0x6e3bf1);
__builtin_memmove((R+20),(R+0),4);
}
B6e3bf3:L6e3bf3:{c.instructions+=22;NFSU2_TR(0x6e3bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3bf6:{NFSU2_TR(0x6e3bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e3bf8:{NFSU2_TR(0x6e3bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3bfb:{NFSU2_TR(0x6e3bfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3bfc:{NFSU2_TR(0x6e3bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3bff:{NFSU2_TR(0x6e3bff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c00:{NFSU2_TR(0x6e3c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3c03:{NFSU2_TR(0x6e3c03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c04:{NFSU2_TR(0x6e3c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3c07:{NFSU2_TR(0x6e3c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c08:{NFSU2_TR(0x6e3c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3c0b:{NFSU2_TR(0x6e3c0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c0c:{NFSU2_TR(0x6e3c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3c0f:{NFSU2_TR(0x6e3c0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c10:{NFSU2_TR(0x6e3c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3c13:{NFSU2_TR(0x6e3c13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c14:{NFSU2_TR(0x6e3c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3c17:{NFSU2_TR(0x6e3c17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c18:{NFSU2_TR(0x6e3c18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c19:{NFSU2_TR(0x6e3c19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c1a:{NFSU2_TR(0x6e3c1a);
__builtin_memmove((R+4),(R+28),4);
}
B6e3c1c:{NFSU2_TR(0x6e3c1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3c21ull));
TAIL_STATIC(0x6e2d60u,6e2);
}
B6e3c21:L6e3c21:{c.instructions+=12;NFSU2_TR(0x6e3c21);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3c24:{NFSU2_TR(0x6e3c24);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e3c26:{NFSU2_TR(0x6e3c26);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3c28:{NFSU2_TR(0x6e3c28);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3c2b:{NFSU2_TR(0x6e3c2b);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e3c2e:{NFSU2_TR(0x6e3c2e);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3c31:{NFSU2_TR(0x6e3c31);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3c34:{NFSU2_TR(0x6e3c34);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e3c37:{NFSU2_TR(0x6e3c37);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e3c3a:{NFSU2_TR(0x6e3c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e3c3c:{NFSU2_TR(0x6e3c3c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e3c3e:{NFSU2_TR(0x6e3c3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e3c55;}}
}
B6e3c40:L6e3c40:{c.instructions+=7;NFSU2_TR(0x6e3c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3c44:{NFSU2_TR(0x6e3c44);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6e3c47:{NFSU2_TR(0x6e3c47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c48:{NFSU2_TR(0x6e3c48);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3c4a:{NFSU2_TR(0x6e3c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c4b:{NFSU2_TR(0x6e3c4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c4c:{NFSU2_TR(0x6e3c4c);
u8 U[4];
__builtin_memmove((U+0),gp(0x811e34),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3c52ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e3c52:L6e3c52:{c.instructions+=1;NFSU2_TR(0x6e3c52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6e3c55:L6e3c55:{c.instructions+=5;NFSU2_TR(0x6e3c55);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B6e3c58:{NFSU2_TR(0x6e3c58);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x70ull))));
}
B6e3c5b:{NFSU2_TR(0x6e3c5b);
w1(R+512,carry<u32>(r4(R+28),u32(0x40ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B6e3c5e:{NFSU2_TR(0x6e3c5e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3c5f:{NFSU2_TR(0x6e3c5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3bf3u);}goto L6e3bf3;}}
}
B6e3c61:L6e3c61:{c.instructions+=6;NFSU2_TR(0x6e3c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3c62:{NFSU2_TR(0x6e3c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3c63:{NFSU2_TR(0x6e3c63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3c64:{NFSU2_TR(0x6e3c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3c65:{NFSU2_TR(0x6e3c65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3c66:{NFSU2_TR(0x6e3c66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3c70:L6e3c70:{c.instructions+=12;NFSU2_TR(0x6e3c70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c71:{NFSU2_TR(0x6e3c71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c72:{NFSU2_TR(0x6e3c72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c73:{NFSU2_TR(0x6e3c73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3c77:{NFSU2_TR(0x6e3c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e3c79:{NFSU2_TR(0x6e3c79);
__builtin_memmove((R+12),(R+4),4);
}
B6e3c7b:{NFSU2_TR(0x6e3c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3c7e:{NFSU2_TR(0x6e3c7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c7f:{NFSU2_TR(0x6e3c7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3c80:{NFSU2_TR(0x6e3c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3c83:{NFSU2_TR(0x6e3c83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3c87:{NFSU2_TR(0x6e3c87);
if(r1(R+518)){{goto L6e3d9f;}}
}
B6e3c8d:L6e3c8d:{c.instructions+=3;NFSU2_TR(0x6e3c8d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e3c8f:{NFSU2_TR(0x6e3c8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e3c91:{NFSU2_TR(0x6e3c91);
if(r1(R+518)){{goto L6e3d1e;}}
}
B6e3c97:L6e3c97:{c.instructions+=2;NFSU2_TR(0x6e3c97);
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
B6e3c99:{NFSU2_TR(0x6e3c99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3e79;}}
}
B6e3c9f:L6e3c9f:{c.instructions+=2;NFSU2_TR(0x6e3c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3ca3:{NFSU2_TR(0x6e3ca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e3ca6:L6e3ca6:{c.instructions+=8;NFSU2_TR(0x6e3ca6);
__builtin_memmove((R+4),(R+24),4);
}
B6e3ca8:{NFSU2_TR(0x6e3ca8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e3cab:{NFSU2_TR(0x6e3cab);
w4(R+12,u32(0x1ull));
}
B6e3cb0:{NFSU2_TR(0x6e3cb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e3cb2:{NFSU2_TR(0x6e3cb2);
__builtin_memmove((R+4),(R+24),4);
}
B6e3cb4:{NFSU2_TR(0x6e3cb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3cb7:{NFSU2_TR(0x6e3cb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3cbb:{NFSU2_TR(0x6e3cbb);
if(r1(R+518)){{goto L6e3d0b;}}
}
B6e3cbd:L6e3cbd:{c.instructions+=25;NFSU2_TR(0x6e3cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cc0:{NFSU2_TR(0x6e3cc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e3cc2:{NFSU2_TR(0x6e3cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cc5:{NFSU2_TR(0x6e3cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3cc8:{NFSU2_TR(0x6e3cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3cca:{NFSU2_TR(0x6e3cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ccd:{NFSU2_TR(0x6e3ccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cd1:{NFSU2_TR(0x6e3cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cd4:{NFSU2_TR(0x6e3cd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e3cd7:{NFSU2_TR(0x6e3cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3cda:{NFSU2_TR(0x6e3cda);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cdd:{NFSU2_TR(0x6e3cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ce0:{NFSU2_TR(0x6e3ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3ce3:{NFSU2_TR(0x6e3ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ce6:{NFSU2_TR(0x6e3ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3ce9:{NFSU2_TR(0x6e3ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3cec:{NFSU2_TR(0x6e3cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cef:{NFSU2_TR(0x6e3cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3cf2:{NFSU2_TR(0x6e3cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cf5:{NFSU2_TR(0x6e3cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3cf8:{NFSU2_TR(0x6e3cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3cfb:{NFSU2_TR(0x6e3cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3cfe:{NFSU2_TR(0x6e3cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3d01:{NFSU2_TR(0x6e3d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d04:{NFSU2_TR(0x6e3d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d0b:L6e3d0b:{c.instructions+=5;NFSU2_TR(0x6e3d0b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6e3d0e:{NFSU2_TR(0x6e3d0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e3d0f:{NFSU2_TR(0x6e3d0f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B6e3d12:{NFSU2_TR(0x6e3d12);
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
B6e3d14:{NFSU2_TR(0x6e3d14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3ca6u);}goto L6e3ca6;}}
}
B6e3d16:L6e3d16:{c.instructions+=6;NFSU2_TR(0x6e3d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3d17:{NFSU2_TR(0x6e3d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3d18:{NFSU2_TR(0x6e3d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3d19:{NFSU2_TR(0x6e3d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3d1a:{NFSU2_TR(0x6e3d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3d1b:{NFSU2_TR(0x6e3d1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3d1e:L6e3d1e:{c.instructions+=2;NFSU2_TR(0x6e3d1e);
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
B6e3d20:{NFSU2_TR(0x6e3d20);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3e79;}}
}
B6e3d26:L6e3d26:{c.instructions+=3;NFSU2_TR(0x6e3d26);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3d2a:{NFSU2_TR(0x6e3d2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e3d2d:{NFSU2_TR(0x6e3d2d);
__builtin_memmove((R+4),(R+4),4);
}
B6e3d30:L6e3d30:{c.instructions+=8;NFSU2_TR(0x6e3d30);
__builtin_memmove((R+4),(R+24),4);
}
B6e3d32:{NFSU2_TR(0x6e3d32);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e3d35:{NFSU2_TR(0x6e3d35);
w4(R+12,u32(0x1ull));
}
B6e3d3a:{NFSU2_TR(0x6e3d3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e3d3c:{NFSU2_TR(0x6e3d3c);
__builtin_memmove((R+4),(R+24),4);
}
B6e3d3e:{NFSU2_TR(0x6e3d3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e3d41:{NFSU2_TR(0x6e3d41);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e3d45:{NFSU2_TR(0x6e3d45);
if(r1(R+518)){{goto L6e3d8c;}}
}
B6e3d47:L6e3d47:{c.instructions+=23;NFSU2_TR(0x6e3d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3d4a:{NFSU2_TR(0x6e3d4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e3d4c:{NFSU2_TR(0x6e3d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3d4f:{NFSU2_TR(0x6e3d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d52:{NFSU2_TR(0x6e3d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3d54:{NFSU2_TR(0x6e3d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d57:{NFSU2_TR(0x6e3d57);
w4(R+4,u32(0x3f800000ull));
}
B6e3d5c:{NFSU2_TR(0x6e3d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d5f:{NFSU2_TR(0x6e3d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d62:{NFSU2_TR(0x6e3d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d65:{NFSU2_TR(0x6e3d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d68:{NFSU2_TR(0x6e3d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d6b:{NFSU2_TR(0x6e3d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d6e:{NFSU2_TR(0x6e3d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d71:{NFSU2_TR(0x6e3d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d74:{NFSU2_TR(0x6e3d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d77:{NFSU2_TR(0x6e3d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d7a:{NFSU2_TR(0x6e3d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d7d:{NFSU2_TR(0x6e3d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d80:{NFSU2_TR(0x6e3d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d83:{NFSU2_TR(0x6e3d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3d86:{NFSU2_TR(0x6e3d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d89:{NFSU2_TR(0x6e3d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3d8c:L6e3d8c:{c.instructions+=5;NFSU2_TR(0x6e3d8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6e3d8f:{NFSU2_TR(0x6e3d8f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6e3d90:{NFSU2_TR(0x6e3d90);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B6e3d93:{NFSU2_TR(0x6e3d93);
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
B6e3d95:{NFSU2_TR(0x6e3d95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3d30u);}goto L6e3d30;}}
}
B6e3d97:L6e3d97:{c.instructions+=6;NFSU2_TR(0x6e3d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3d98:{NFSU2_TR(0x6e3d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3d99:{NFSU2_TR(0x6e3d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3d9a:{NFSU2_TR(0x6e3d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3d9b:{NFSU2_TR(0x6e3d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3d9c:{NFSU2_TR(0x6e3d9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3d9f:L6e3d9f:{c.instructions+=2;NFSU2_TR(0x6e3d9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e3da1:{NFSU2_TR(0x6e3da1);
if(r1(R+518)){{goto L6e3e1a;}}
}
B6e3da3:L6e3da3:{c.instructions+=3;NFSU2_TR(0x6e3da3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e3da5:{NFSU2_TR(0x6e3da5);
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
B6e3da7:{NFSU2_TR(0x6e3da7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3e79;}}
}
B6e3dad:L6e3dad:{c.instructions+=4;NFSU2_TR(0x6e3dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3db1:{NFSU2_TR(0x6e3db1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3db4:{NFSU2_TR(0x6e3db4);
w4(R+24,u32(0x3f800000ull));
}
B6e3db9:{NFSU2_TR(0x6e3db9);
__builtin_memmove((R+16),(R+16),4);
}
B6e3dc0:L6e3dc0:{c.instructions+=29;NFSU2_TR(0x6e3dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3dc3:{NFSU2_TR(0x6e3dc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e3dc5:{NFSU2_TR(0x6e3dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3dc8:{NFSU2_TR(0x6e3dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3dcb:{NFSU2_TR(0x6e3dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e3dcd:{NFSU2_TR(0x6e3dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3dd0:{NFSU2_TR(0x6e3dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3dd3:{NFSU2_TR(0x6e3dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B6e3dd7:{NFSU2_TR(0x6e3dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3dda:{NFSU2_TR(0x6e3dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3ddd:{NFSU2_TR(0x6e3ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3de0:{NFSU2_TR(0x6e3de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3de3:{NFSU2_TR(0x6e3de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3de6:{NFSU2_TR(0x6e3de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3de9:{NFSU2_TR(0x6e3de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3dec:{NFSU2_TR(0x6e3dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3def:{NFSU2_TR(0x6e3def);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3df2:{NFSU2_TR(0x6e3df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3df5:{NFSU2_TR(0x6e3df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3df8:{NFSU2_TR(0x6e3df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3dfb:{NFSU2_TR(0x6e3dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3dfe:{NFSU2_TR(0x6e3dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e3e01:{NFSU2_TR(0x6e3e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e04:{NFSU2_TR(0x6e3e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e07:{NFSU2_TR(0x6e3e07);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6e3e0a:{NFSU2_TR(0x6e3e0a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e3e0b:{NFSU2_TR(0x6e3e0b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B6e3e0e:{NFSU2_TR(0x6e3e0e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3e10:{NFSU2_TR(0x6e3e10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3dc0u);}goto L6e3dc0;}}
}
B6e3e12:L6e3e12:{c.instructions+=6;NFSU2_TR(0x6e3e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3e13:{NFSU2_TR(0x6e3e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3e14:{NFSU2_TR(0x6e3e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3e15:{NFSU2_TR(0x6e3e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3e16:{NFSU2_TR(0x6e3e16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3e17:{NFSU2_TR(0x6e3e17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3e1a:L6e3e1a:{c.instructions+=2;NFSU2_TR(0x6e3e1a);
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
B6e3e1c:{NFSU2_TR(0x6e3e1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e3e79;}}
}
B6e3e1e:L6e3e1e:{c.instructions+=4;NFSU2_TR(0x6e3e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3e22:{NFSU2_TR(0x6e3e22);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3e25:{NFSU2_TR(0x6e3e25);
w4(R+8,u32(0x3f800000ull));
}
B6e3e2a:{NFSU2_TR(0x6e3e2a);
__builtin_memmove((R+12),(R+12),4);
}
B6e3e30:L6e3e30:{c.instructions+=26;NFSU2_TR(0x6e3e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e33:{NFSU2_TR(0x6e3e33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e3e35:{NFSU2_TR(0x6e3e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e38:{NFSU2_TR(0x6e3e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e3b:{NFSU2_TR(0x6e3e3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6e3e3d:{NFSU2_TR(0x6e3e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e40:{NFSU2_TR(0x6e3e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e43:{NFSU2_TR(0x6e3e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e46:{NFSU2_TR(0x6e3e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e49:{NFSU2_TR(0x6e3e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e4c:{NFSU2_TR(0x6e3e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e4f:{NFSU2_TR(0x6e3e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e52:{NFSU2_TR(0x6e3e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e55:{NFSU2_TR(0x6e3e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e58:{NFSU2_TR(0x6e3e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e5b:{NFSU2_TR(0x6e3e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e5e:{NFSU2_TR(0x6e3e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e61:{NFSU2_TR(0x6e3e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e64:{NFSU2_TR(0x6e3e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e67:{NFSU2_TR(0x6e3e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e3e6a:{NFSU2_TR(0x6e3e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e6d:{NFSU2_TR(0x6e3e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e70:{NFSU2_TR(0x6e3e70);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6e3e73:{NFSU2_TR(0x6e3e73);
w1(R+512,carry<u32>(r4(R+4),u32(0x70ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B6e3e76:{NFSU2_TR(0x6e3e76);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3e77:{NFSU2_TR(0x6e3e77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3e30u);}goto L6e3e30;}}
}
B6e3e79:L6e3e79:{c.instructions+=6;NFSU2_TR(0x6e3e79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e3e7a:{NFSU2_TR(0x6e3e7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3e7b:{NFSU2_TR(0x6e3e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3e7c:{NFSU2_TR(0x6e3e7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e3e7d:{NFSU2_TR(0x6e3e7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e3e7e:{NFSU2_TR(0x6e3e7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3e90:L6e3e90:{c.instructions+=9;NFSU2_TR(0x6e3e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3e91:{NFSU2_TR(0x6e3e91);
__builtin_memmove((R+24),(R+4),4);
}
B6e3e93:{NFSU2_TR(0x6e3e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3e96:{NFSU2_TR(0x6e3e96);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e3e97:{NFSU2_TR(0x6e3e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3e9a:{NFSU2_TR(0x6e3e9a);
__builtin_memmove((R+4),(R+0),4);
}
B6e3e9c:{NFSU2_TR(0x6e3e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e3e9e:{NFSU2_TR(0x6e3e9e);
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
B6e3ea0:{NFSU2_TR(0x6e3ea0);
if(r1(R+518)){{goto L6e3eba;}}
}
B6e3ea2:L6e3ea2:{c.instructions+=2;NFSU2_TR(0x6e3ea2);
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
B6e3ea4:{NFSU2_TR(0x6e3ea4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e3eba;}}
}
B6e3ea6:L6e3ea6:{c.instructions+=4;NFSU2_TR(0x6e3ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3ea9:{NFSU2_TR(0x6e3ea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3eaa:{NFSU2_TR(0x6e3eaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3eab:{NFSU2_TR(0x6e3eab);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3eb1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e3eb1:L6e3eb1:{c.instructions+=2;NFSU2_TR(0x6e3eb1);
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
B6e3eb4:{NFSU2_TR(0x6e3eb4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e3eba:L6e3eba:{c.instructions+=2;NFSU2_TR(0x6e3eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3ebb:{NFSU2_TR(0x6e3ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3ec0:L6e3ec0:{c.instructions+=4;NFSU2_TR(0x6e3ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3ec4:{NFSU2_TR(0x6e3ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e3ec7:{NFSU2_TR(0x6e3ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ab318ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e3ece:{NFSU2_TR(0x6e3ece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3ed0:L6e3ed0:{c.instructions+=6;NFSU2_TR(0x6e3ed0);
__builtin_memmove((R+0),(R+4),4);
}
B6e3ed2:{NFSU2_TR(0x6e3ed2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e3ed4:{NFSU2_TR(0x6e3ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ed7:{NFSU2_TR(0x6e3ed7);
u8 U[4];
w4(U+0,u32(0x7c1b60ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6e3edd:{NFSU2_TR(0x6e3edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3ee0:{NFSU2_TR(0x6e3ee0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3ef0:L6e3ef0:{c.instructions+=2;NFSU2_TR(0x6e3ef0);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6e3ef6:{NFSU2_TR(0x6e3ef6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3f00:L6e3f00:{c.instructions+=5;NFSU2_TR(0x6e3f00);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B6e3f05:{NFSU2_TR(0x6e3f05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f06:{NFSU2_TR(0x6e3f06);
__builtin_memmove((R+24),(R+4),4);
}
B6e3f08:{NFSU2_TR(0x6e3f08);
u8 U[4];
w4(U+0,u32(0x7c14f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e3f0e:{NFSU2_TR(0x6e3f0e);
if(r1(R+518)){{goto L6e3f19;}}
}
B6e3f10:L6e3f10:{c.instructions+=2;NFSU2_TR(0x6e3f10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f11:{NFSU2_TR(0x6e3f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3f16ull));
TAIL_STATIC(0x575630u,575);
}
B6e3f16:L6e3f16:{c.instructions+=1;NFSU2_TR(0x6e3f16);
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
B6e3f19:L6e3f19:{c.instructions+=3;NFSU2_TR(0x6e3f19);
__builtin_memmove((R+0),(R+24),4);
}
B6e3f1b:{NFSU2_TR(0x6e3f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3f1c:{NFSU2_TR(0x6e3f1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3f20:L6e3f20:{c.instructions+=10;NFSU2_TR(0x6e3f20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3f24:{NFSU2_TR(0x6e3f24);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e3f26:{NFSU2_TR(0x6e3f26);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e3f29:{NFSU2_TR(0x6e3f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3f2c:{NFSU2_TR(0x6e3f2c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f2e:{NFSU2_TR(0x6e3f2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f2f:{NFSU2_TR(0x6e3f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3f33:{NFSU2_TR(0x6e3f33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f34:{NFSU2_TR(0x6e3f34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f35:{NFSU2_TR(0x6e3f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3f3aull));
TAIL_STATIC(0x6e7790u,6e7);
}
B6e3f3a:L6e3f3a:{c.instructions+=1;NFSU2_TR(0x6e3f3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3f40:L6e3f40:{c.instructions+=11;NFSU2_TR(0x6e3f40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3f44:{NFSU2_TR(0x6e3f44);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e3f46:{NFSU2_TR(0x6e3f46);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6e3f49:{NFSU2_TR(0x6e3f49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e3f4c:{NFSU2_TR(0x6e3f4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f4d:{NFSU2_TR(0x6e3f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3f51:{NFSU2_TR(0x6e3f51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f52:{NFSU2_TR(0x6e3f52);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e3f56:{NFSU2_TR(0x6e3f56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f57:{NFSU2_TR(0x6e3f57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f58:{NFSU2_TR(0x6e3f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e3f5dull));
TAIL_STATIC(0x6e7790u,6e7);
}
B6e3f5d:L6e3f5d:{c.instructions+=2;NFSU2_TR(0x6e3f5d);
w1(R+0,u8(0x1ull));
}
B6e3f5f:{NFSU2_TR(0x6e3f5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e3f70:L6e3f70:{c.instructions+=14;NFSU2_TR(0x6e3f70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f71:{NFSU2_TR(0x6e3f71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e3f75:{NFSU2_TR(0x6e3f75);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3f79:{NFSU2_TR(0x6e3f79);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e3f7b:{NFSU2_TR(0x6e3f7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f7c:{NFSU2_TR(0x6e3f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e3f7f:{NFSU2_TR(0x6e3f7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f80:{NFSU2_TR(0x6e3f80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e3f83:{NFSU2_TR(0x6e3f83);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e3f85:{NFSU2_TR(0x6e3f85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3f86:{NFSU2_TR(0x6e3f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e3f8a:{NFSU2_TR(0x6e3f8a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e3f8d:{NFSU2_TR(0x6e3f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e3f91:{NFSU2_TR(0x6e3f91);
if(r1(R+514)){{goto L6e3fba;}}
}
B6e3f93:L6e3f93:{c.instructions+=3;NFSU2_TR(0x6e3f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3f95:{NFSU2_TR(0x6e3f95);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e3f97:{NFSU2_TR(0x6e3f97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e3fb7;}}
}
B6e3f99:L6e3f99:{c.instructions+=3;NFSU2_TR(0x6e3f99);
__builtin_memmove((R+8),(R+4),4);
}
B6e3f9b:{NFSU2_TR(0x6e3f9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e3f9e:{NFSU2_TR(0x6e3f9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e3fa2:L6e3fa2:{c.instructions+=5;NFSU2_TR(0x6e3fa2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3fa4:{NFSU2_TR(0x6e3fa4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e3fa8:{NFSU2_TR(0x6e3fa8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e3faa:{NFSU2_TR(0x6e3faa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e3fad:{NFSU2_TR(0x6e3fad);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e3fb7;}}
}
B6e3faf:L6e3faf:{c.instructions+=4;NFSU2_TR(0x6e3faf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e3fb0:{NFSU2_TR(0x6e3fb0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x10ull))));
}
B6e3fb3:{NFSU2_TR(0x6e3fb3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e3fb5:{NFSU2_TR(0x6e3fb5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e3fa2u);}goto L6e3fa2;}}
}
B6e3fb7:L6e3fb7:{c.instructions+=2;NFSU2_TR(0x6e3fb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e3fb8:{NFSU2_TR(0x6e3fb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6e3fba:L6e3fba:{c.instructions+=6;NFSU2_TR(0x6e3fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6e3fbc:{NFSU2_TR(0x6e3fbc);
__builtin_memmove((R+0),(R+12),4);
}
B6e3fbe:{NFSU2_TR(0x6e3fbe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6e3fc0:{NFSU2_TR(0x6e3fc0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e3fc3:{NFSU2_TR(0x6e3fc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e3fc4:{NFSU2_TR(0x6e3fc4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e4016u,6e4);}
}
B6e3fc6:L6e3fc6:{c.instructions+=9;NFSU2_TR(0x6e3fc6);
__builtin_memmove((R+8),(R+4),4);
}
B6e3fc8:{NFSU2_TR(0x6e3fc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6e3fcb:{NFSU2_TR(0x6e3fcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e3fce:{NFSU2_TR(0x6e3fce);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e3fd2:{NFSU2_TR(0x6e3fd2);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3fd5:{NFSU2_TR(0x6e3fd5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e3fd9:{NFSU2_TR(0x6e3fd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e3fdb:{NFSU2_TR(0x6e3fdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e3fde:{NFSU2_TR(0x6e3fde);
if(r1(R+518)){TAIL_STATIC(0x6e4045u,6e4);}
}
B6e3fe0:L6e3fe0:{c.instructions+=5;NFSU2_TR(0x6e3fe0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3fe2:{NFSU2_TR(0x6e3fe2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e3fe6:{NFSU2_TR(0x6e3fe6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e3fe8:{NFSU2_TR(0x6e3fe8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e3feb:{NFSU2_TR(0x6e3feb);
if(r1(R+518)){TAIL_STATIC(0x6e403au,6e4);}
}
B6e3fed:L6e3fed:{c.instructions+=5;NFSU2_TR(0x6e3fed);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3ff0:{NFSU2_TR(0x6e3ff0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e3ff4:{NFSU2_TR(0x6e3ff4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e3ff6:{NFSU2_TR(0x6e3ff6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e3ff9:{NFSU2_TR(0x6e3ff9);
if(r1(R+518)){TAIL_STATIC(0x6e403du,6e4);}
}
B6e3ffb:L6e3ffb:{c.instructions+=2;NFSU2_TR(0x6e3ffb);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e3ffe:{NFSU2_TR(0x6e3ffe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x6e4002u,6e4);
}
XIT:NFSU2_TR_EXIT(0x6e3,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
