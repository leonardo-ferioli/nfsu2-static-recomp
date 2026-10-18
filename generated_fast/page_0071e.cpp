#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_71d(u8* __restrict R,Cpu& c);
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x71e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x71e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_71e(u8* __restrict R,Cpu& c);
u32 page_71e(Cpu& c){return body_71e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_71e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x71e000:goto L71e000;
case 0x71e006:c.instructions+=80;goto B71e006;
case 0x71e009:c.instructions+=79;goto B71e009;
case 0x71e00b:c.instructions+=78;goto B71e00b;
case 0x71e00e:c.instructions+=77;goto B71e00e;
case 0x71e010:c.instructions+=76;goto B71e010;
case 0x71e016:c.instructions+=75;goto B71e016;
case 0x71e01c:c.instructions+=74;goto B71e01c;
case 0x71e01f:c.instructions+=73;goto B71e01f;
case 0x71e022:c.instructions+=72;goto B71e022;
case 0x71e024:c.instructions+=71;goto B71e024;
case 0x71e026:c.instructions+=70;goto B71e026;
case 0x71e029:c.instructions+=69;goto B71e029;
case 0x71e02b:c.instructions+=68;goto B71e02b;
case 0x71e02d:c.instructions+=67;goto B71e02d;
case 0x71e033:c.instructions+=66;goto B71e033;
case 0x71e036:c.instructions+=65;goto B71e036;
case 0x71e039:c.instructions+=64;goto B71e039;
case 0x71e03c:c.instructions+=63;goto B71e03c;
case 0x71e03f:c.instructions+=62;goto B71e03f;
case 0x71e042:c.instructions+=61;goto B71e042;
case 0x71e045:c.instructions+=60;goto B71e045;
case 0x71e04b:c.instructions+=59;goto B71e04b;
case 0x71e04d:c.instructions+=58;goto B71e04d;
case 0x71e050:c.instructions+=57;goto B71e050;
case 0x71e053:c.instructions+=56;goto B71e053;
case 0x71e059:c.instructions+=55;goto B71e059;
case 0x71e05b:c.instructions+=54;goto B71e05b;
case 0x71e061:c.instructions+=53;goto B71e061;
case 0x71e064:c.instructions+=52;goto B71e064;
case 0x71e06a:c.instructions+=51;goto B71e06a;
case 0x71e06d:c.instructions+=50;goto B71e06d;
case 0x71e070:c.instructions+=49;goto B71e070;
case 0x71e072:c.instructions+=48;goto B71e072;
case 0x71e075:c.instructions+=47;goto B71e075;
case 0x71e078:c.instructions+=46;goto B71e078;
case 0x71e07b:c.instructions+=45;goto B71e07b;
case 0x71e07e:c.instructions+=44;goto B71e07e;
case 0x71e080:c.instructions+=43;goto B71e080;
case 0x71e083:c.instructions+=42;goto B71e083;
case 0x71e087:c.instructions+=41;goto B71e087;
case 0x71e08a:c.instructions+=40;goto B71e08a;
case 0x71e08d:c.instructions+=39;goto B71e08d;
case 0x71e090:c.instructions+=38;goto B71e090;
case 0x71e094:c.instructions+=37;goto B71e094;
case 0x71e096:c.instructions+=36;goto B71e096;
case 0x71e098:c.instructions+=35;goto B71e098;
case 0x71e09b:c.instructions+=34;goto B71e09b;
case 0x71e09d:c.instructions+=33;goto B71e09d;
case 0x71e0a0:c.instructions+=32;goto B71e0a0;
case 0x71e0a2:c.instructions+=31;goto B71e0a2;
case 0x71e0a5:c.instructions+=30;goto B71e0a5;
case 0x71e0a8:c.instructions+=29;goto B71e0a8;
case 0x71e0ab:c.instructions+=28;goto B71e0ab;
case 0x71e0af:c.instructions+=27;goto B71e0af;
case 0x71e0b2:c.instructions+=26;goto B71e0b2;
case 0x71e0b6:c.instructions+=25;goto B71e0b6;
case 0x71e0b9:c.instructions+=24;goto B71e0b9;
case 0x71e0bb:c.instructions+=23;goto B71e0bb;
case 0x71e0be:c.instructions+=22;goto B71e0be;
case 0x71e0c1:c.instructions+=21;goto B71e0c1;
case 0x71e0c5:c.instructions+=20;goto B71e0c5;
case 0x71e0c8:c.instructions+=19;goto B71e0c8;
case 0x71e0cb:c.instructions+=18;goto B71e0cb;
case 0x71e0cd:c.instructions+=17;goto B71e0cd;
case 0x71e0d0:c.instructions+=16;goto B71e0d0;
case 0x71e0d3:c.instructions+=15;goto B71e0d3;
case 0x71e0d7:c.instructions+=14;goto B71e0d7;
case 0x71e0da:c.instructions+=13;goto B71e0da;
case 0x71e0dd:c.instructions+=12;goto B71e0dd;
case 0x71e0e0:c.instructions+=11;goto B71e0e0;
case 0x71e0e3:c.instructions+=10;goto B71e0e3;
case 0x71e0e6:c.instructions+=9;goto B71e0e6;
case 0x71e0e8:c.instructions+=8;goto B71e0e8;
case 0x71e0eb:c.instructions+=7;goto B71e0eb;
case 0x71e0ef:c.instructions+=6;goto B71e0ef;
case 0x71e0f3:c.instructions+=5;goto B71e0f3;
case 0x71e0f6:c.instructions+=4;goto B71e0f6;
case 0x71e0f9:c.instructions+=3;goto B71e0f9;
case 0x71e0fd:c.instructions+=2;goto B71e0fd;
case 0x71e0ff:c.instructions+=1;goto B71e0ff;
case 0x71e101:goto L71e101;
case 0x71e105:c.instructions+=7;goto B71e105;
case 0x71e109:c.instructions+=6;goto B71e109;
case 0x71e10c:c.instructions+=5;goto B71e10c;
case 0x71e110:c.instructions+=4;goto B71e110;
case 0x71e114:c.instructions+=3;goto B71e114;
case 0x71e118:c.instructions+=2;goto B71e118;
case 0x71e11c:c.instructions+=1;goto B71e11c;
case 0x71e120:goto L71e120;
case 0x71e123:c.instructions+=5;goto B71e123;
case 0x71e124:c.instructions+=4;goto B71e124;
case 0x71e125:c.instructions+=3;goto B71e125;
case 0x71e128:c.instructions+=2;goto B71e128;
case 0x71e12b:c.instructions+=1;goto B71e12b;
case 0x71e131:goto L71e131;
case 0x71e132:c.instructions+=4;goto B71e132;
case 0x71e133:c.instructions+=3;goto B71e133;
case 0x71e134:c.instructions+=2;goto B71e134;
case 0x71e135:c.instructions+=1;goto B71e135;
case 0x71e136:goto L71e136;
case 0x71e137:c.instructions+=16;goto B71e137;
case 0x71e139:c.instructions+=15;goto B71e139;
case 0x71e13c:c.instructions+=14;goto B71e13c;
case 0x71e13f:c.instructions+=13;goto B71e13f;
case 0x71e142:c.instructions+=12;goto B71e142;
case 0x71e145:c.instructions+=11;goto B71e145;
case 0x71e148:c.instructions+=10;goto B71e148;
case 0x71e14b:c.instructions+=9;goto B71e14b;
case 0x71e14e:c.instructions+=8;goto B71e14e;
case 0x71e151:c.instructions+=7;goto B71e151;
case 0x71e152:c.instructions+=6;goto B71e152;
case 0x71e155:c.instructions+=5;goto B71e155;
case 0x71e157:c.instructions+=4;goto B71e157;
case 0x71e158:c.instructions+=3;goto B71e158;
case 0x71e15b:c.instructions+=2;goto B71e15b;
case 0x71e15e:c.instructions+=1;goto B71e15e;
case 0x71e160:goto L71e160;
case 0x71e162:goto L71e162;
case 0x71e163:c.instructions+=2;goto B71e163;
case 0x71e164:c.instructions+=1;goto B71e164;
case 0x71e165:goto L71e165;
case 0x71e166:c.instructions+=14;goto B71e166;
case 0x71e168:c.instructions+=13;goto B71e168;
case 0x71e169:c.instructions+=12;goto B71e169;
case 0x71e16a:c.instructions+=11;goto B71e16a;
case 0x71e16d:c.instructions+=10;goto B71e16d;
case 0x71e170:c.instructions+=9;goto B71e170;
case 0x71e174:c.instructions+=8;goto B71e174;
case 0x71e178:c.instructions+=7;goto B71e178;
case 0x71e17c:c.instructions+=6;goto B71e17c;
case 0x71e17f:c.instructions+=5;goto B71e17f;
case 0x71e182:c.instructions+=4;goto B71e182;
case 0x71e183:c.instructions+=3;goto B71e183;
case 0x71e186:c.instructions+=2;goto B71e186;
case 0x71e189:c.instructions+=1;goto B71e189;
case 0x71e18c:goto L71e18c;
case 0x71e18f:c.instructions+=49;goto B71e18f;
case 0x71e192:c.instructions+=48;goto B71e192;
case 0x71e195:c.instructions+=47;goto B71e195;
case 0x71e198:c.instructions+=46;goto B71e198;
case 0x71e19c:c.instructions+=45;goto B71e19c;
case 0x71e19f:c.instructions+=44;goto B71e19f;
case 0x71e1a2:c.instructions+=43;goto B71e1a2;
case 0x71e1a5:c.instructions+=42;goto B71e1a5;
case 0x71e1a8:c.instructions+=41;goto B71e1a8;
case 0x71e1ac:c.instructions+=40;goto B71e1ac;
case 0x71e1af:c.instructions+=39;goto B71e1af;
case 0x71e1b2:c.instructions+=38;goto B71e1b2;
case 0x71e1b5:c.instructions+=37;goto B71e1b5;
case 0x71e1b8:c.instructions+=36;goto B71e1b8;
case 0x71e1bc:c.instructions+=35;goto B71e1bc;
case 0x71e1bf:c.instructions+=34;goto B71e1bf;
case 0x71e1c2:c.instructions+=33;goto B71e1c2;
case 0x71e1c5:c.instructions+=32;goto B71e1c5;
case 0x71e1c8:c.instructions+=31;goto B71e1c8;
case 0x71e1cf:c.instructions+=30;goto B71e1cf;
case 0x71e1d3:c.instructions+=29;goto B71e1d3;
case 0x71e1d6:c.instructions+=28;goto B71e1d6;
case 0x71e1d9:c.instructions+=27;goto B71e1d9;
case 0x71e1dd:c.instructions+=26;goto B71e1dd;
case 0x71e1e0:c.instructions+=25;goto B71e1e0;
case 0x71e1e3:c.instructions+=24;goto B71e1e3;
case 0x71e1e6:c.instructions+=23;goto B71e1e6;
case 0x71e1ea:c.instructions+=22;goto B71e1ea;
case 0x71e1ed:c.instructions+=21;goto B71e1ed;
case 0x71e1f0:c.instructions+=20;goto B71e1f0;
case 0x71e1f3:c.instructions+=19;goto B71e1f3;
case 0x71e1f6:c.instructions+=18;goto B71e1f6;
case 0x71e1fa:c.instructions+=17;goto B71e1fa;
case 0x71e1fd:c.instructions+=16;goto B71e1fd;
case 0x71e200:c.instructions+=15;goto B71e200;
case 0x71e203:c.instructions+=14;goto B71e203;
case 0x71e206:c.instructions+=13;goto B71e206;
case 0x71e20a:c.instructions+=12;goto B71e20a;
case 0x71e20d:c.instructions+=11;goto B71e20d;
case 0x71e210:c.instructions+=10;goto B71e210;
case 0x71e213:c.instructions+=9;goto B71e213;
case 0x71e216:c.instructions+=8;goto B71e216;
case 0x71e21d:c.instructions+=7;goto B71e21d;
case 0x71e221:c.instructions+=6;goto B71e221;
case 0x71e224:c.instructions+=5;goto B71e224;
case 0x71e228:c.instructions+=4;goto B71e228;
case 0x71e22b:c.instructions+=3;goto B71e22b;
case 0x71e22d:c.instructions+=2;goto B71e22d;
case 0x71e22e:c.instructions+=1;goto B71e22e;
case 0x71e234:goto L71e234;
case 0x71e235:c.instructions+=3;goto B71e235;
case 0x71e236:c.instructions+=2;goto B71e236;
case 0x71e237:c.instructions+=1;goto B71e237;
case 0x71e238:goto L71e238;
case 0x71e239:c.instructions+=15;goto B71e239;
case 0x71e23b:c.instructions+=14;goto B71e23b;
case 0x71e23c:c.instructions+=13;goto B71e23c;
case 0x71e23d:c.instructions+=12;goto B71e23d;
case 0x71e240:c.instructions+=11;goto B71e240;
case 0x71e243:c.instructions+=10;goto B71e243;
case 0x71e247:c.instructions+=9;goto B71e247;
case 0x71e24b:c.instructions+=8;goto B71e24b;
case 0x71e24f:c.instructions+=7;goto B71e24f;
case 0x71e252:c.instructions+=6;goto B71e252;
case 0x71e255:c.instructions+=5;goto B71e255;
case 0x71e258:c.instructions+=4;goto B71e258;
case 0x71e25b:c.instructions+=3;goto B71e25b;
case 0x71e25e:c.instructions+=2;goto B71e25e;
case 0x71e261:c.instructions+=1;goto B71e261;
case 0x71e264:goto L71e264;
case 0x71e267:c.instructions+=43;goto B71e267;
case 0x71e26a:c.instructions+=42;goto B71e26a;
case 0x71e26d:c.instructions+=41;goto B71e26d;
case 0x71e26f:c.instructions+=40;goto B71e26f;
case 0x71e273:c.instructions+=39;goto B71e273;
case 0x71e276:c.instructions+=38;goto B71e276;
case 0x71e279:c.instructions+=37;goto B71e279;
case 0x71e27c:c.instructions+=36;goto B71e27c;
case 0x71e27f:c.instructions+=35;goto B71e27f;
case 0x71e282:c.instructions+=34;goto B71e282;
case 0x71e285:c.instructions+=33;goto B71e285;
case 0x71e288:c.instructions+=32;goto B71e288;
case 0x71e28c:c.instructions+=31;goto B71e28c;
case 0x71e28f:c.instructions+=30;goto B71e28f;
case 0x71e292:c.instructions+=29;goto B71e292;
case 0x71e295:c.instructions+=28;goto B71e295;
case 0x71e29c:c.instructions+=27;goto B71e29c;
case 0x71e2a0:c.instructions+=26;goto B71e2a0;
case 0x71e2a3:c.instructions+=25;goto B71e2a3;
case 0x71e2a6:c.instructions+=24;goto B71e2a6;
case 0x71e2a8:c.instructions+=23;goto B71e2a8;
case 0x71e2ac:c.instructions+=22;goto B71e2ac;
case 0x71e2af:c.instructions+=21;goto B71e2af;
case 0x71e2b2:c.instructions+=20;goto B71e2b2;
case 0x71e2b4:c.instructions+=19;goto B71e2b4;
case 0x71e2b9:c.instructions+=18;goto B71e2b9;
case 0x71e2bc:c.instructions+=17;goto B71e2bc;
case 0x71e2bf:c.instructions+=16;goto B71e2bf;
case 0x71e2c2:c.instructions+=15;goto B71e2c2;
case 0x71e2c6:c.instructions+=14;goto B71e2c6;
case 0x71e2c9:c.instructions+=13;goto B71e2c9;
case 0x71e2cc:c.instructions+=12;goto B71e2cc;
case 0x71e2cf:c.instructions+=11;goto B71e2cf;
case 0x71e2d4:c.instructions+=10;goto B71e2d4;
case 0x71e2d7:c.instructions+=9;goto B71e2d7;
case 0x71e2da:c.instructions+=8;goto B71e2da;
case 0x71e2dd:c.instructions+=7;goto B71e2dd;
case 0x71e2e4:c.instructions+=6;goto B71e2e4;
case 0x71e2e8:c.instructions+=5;goto B71e2e8;
case 0x71e2eb:c.instructions+=4;goto B71e2eb;
case 0x71e2ef:c.instructions+=3;goto B71e2ef;
case 0x71e2f1:c.instructions+=2;goto B71e2f1;
case 0x71e2f2:c.instructions+=1;goto B71e2f2;
case 0x71e2f8:goto L71e2f8;
case 0x71e2f9:c.instructions+=3;goto B71e2f9;
case 0x71e2fa:c.instructions+=2;goto B71e2fa;
case 0x71e2fb:c.instructions+=1;goto B71e2fb;
case 0x71e2fc:goto L71e2fc;
case 0x71e2fd:c.instructions+=14;goto B71e2fd;
case 0x71e2ff:c.instructions+=13;goto B71e2ff;
case 0x71e300:c.instructions+=12;goto B71e300;
case 0x71e301:c.instructions+=11;goto B71e301;
case 0x71e304:c.instructions+=10;goto B71e304;
case 0x71e307:c.instructions+=9;goto B71e307;
case 0x71e30b:c.instructions+=8;goto B71e30b;
case 0x71e30f:c.instructions+=7;goto B71e30f;
case 0x71e313:c.instructions+=6;goto B71e313;
case 0x71e316:c.instructions+=5;goto B71e316;
case 0x71e319:c.instructions+=4;goto B71e319;
case 0x71e31a:c.instructions+=3;goto B71e31a;
case 0x71e31d:c.instructions+=2;goto B71e31d;
case 0x71e320:c.instructions+=1;goto B71e320;
case 0x71e323:goto L71e323;
case 0x71e326:c.instructions+=49;goto B71e326;
case 0x71e329:c.instructions+=48;goto B71e329;
case 0x71e32c:c.instructions+=47;goto B71e32c;
case 0x71e32f:c.instructions+=46;goto B71e32f;
case 0x71e333:c.instructions+=45;goto B71e333;
case 0x71e336:c.instructions+=44;goto B71e336;
case 0x71e339:c.instructions+=43;goto B71e339;
case 0x71e33c:c.instructions+=42;goto B71e33c;
case 0x71e33f:c.instructions+=41;goto B71e33f;
case 0x71e343:c.instructions+=40;goto B71e343;
case 0x71e346:c.instructions+=39;goto B71e346;
case 0x71e349:c.instructions+=38;goto B71e349;
case 0x71e34c:c.instructions+=37;goto B71e34c;
case 0x71e34f:c.instructions+=36;goto B71e34f;
case 0x71e353:c.instructions+=35;goto B71e353;
case 0x71e356:c.instructions+=34;goto B71e356;
case 0x71e359:c.instructions+=33;goto B71e359;
case 0x71e35c:c.instructions+=32;goto B71e35c;
case 0x71e35f:c.instructions+=31;goto B71e35f;
case 0x71e366:c.instructions+=30;goto B71e366;
case 0x71e36a:c.instructions+=29;goto B71e36a;
case 0x71e36d:c.instructions+=28;goto B71e36d;
case 0x71e370:c.instructions+=27;goto B71e370;
case 0x71e374:c.instructions+=26;goto B71e374;
case 0x71e377:c.instructions+=25;goto B71e377;
case 0x71e37a:c.instructions+=24;goto B71e37a;
case 0x71e37d:c.instructions+=23;goto B71e37d;
case 0x71e381:c.instructions+=22;goto B71e381;
case 0x71e384:c.instructions+=21;goto B71e384;
case 0x71e387:c.instructions+=20;goto B71e387;
case 0x71e38a:c.instructions+=19;goto B71e38a;
case 0x71e38d:c.instructions+=18;goto B71e38d;
case 0x71e391:c.instructions+=17;goto B71e391;
case 0x71e394:c.instructions+=16;goto B71e394;
case 0x71e397:c.instructions+=15;goto B71e397;
case 0x71e39a:c.instructions+=14;goto B71e39a;
case 0x71e39d:c.instructions+=13;goto B71e39d;
case 0x71e3a1:c.instructions+=12;goto B71e3a1;
case 0x71e3a4:c.instructions+=11;goto B71e3a4;
case 0x71e3a7:c.instructions+=10;goto B71e3a7;
case 0x71e3aa:c.instructions+=9;goto B71e3aa;
case 0x71e3ad:c.instructions+=8;goto B71e3ad;
case 0x71e3b4:c.instructions+=7;goto B71e3b4;
case 0x71e3b8:c.instructions+=6;goto B71e3b8;
case 0x71e3bb:c.instructions+=5;goto B71e3bb;
case 0x71e3bf:c.instructions+=4;goto B71e3bf;
case 0x71e3c2:c.instructions+=3;goto B71e3c2;
case 0x71e3c4:c.instructions+=2;goto B71e3c4;
case 0x71e3c5:c.instructions+=1;goto B71e3c5;
case 0x71e3cb:goto L71e3cb;
case 0x71e3cc:c.instructions+=3;goto B71e3cc;
case 0x71e3cd:c.instructions+=2;goto B71e3cd;
case 0x71e3ce:c.instructions+=1;goto B71e3ce;
case 0x71e3cf:goto L71e3cf;
case 0x71e3d0:c.instructions+=15;goto B71e3d0;
case 0x71e3d2:c.instructions+=14;goto B71e3d2;
case 0x71e3d3:c.instructions+=13;goto B71e3d3;
case 0x71e3d4:c.instructions+=12;goto B71e3d4;
case 0x71e3d7:c.instructions+=11;goto B71e3d7;
case 0x71e3da:c.instructions+=10;goto B71e3da;
case 0x71e3de:c.instructions+=9;goto B71e3de;
case 0x71e3e2:c.instructions+=8;goto B71e3e2;
case 0x71e3e6:c.instructions+=7;goto B71e3e6;
case 0x71e3e9:c.instructions+=6;goto B71e3e9;
case 0x71e3ec:c.instructions+=5;goto B71e3ec;
case 0x71e3ef:c.instructions+=4;goto B71e3ef;
case 0x71e3f2:c.instructions+=3;goto B71e3f2;
case 0x71e3f5:c.instructions+=2;goto B71e3f5;
case 0x71e3f8:c.instructions+=1;goto B71e3f8;
case 0x71e3fb:goto L71e3fb;
case 0x71e3fe:c.instructions+=43;goto B71e3fe;
case 0x71e401:c.instructions+=42;goto B71e401;
case 0x71e404:c.instructions+=41;goto B71e404;
case 0x71e408:c.instructions+=40;goto B71e408;
case 0x71e40b:c.instructions+=39;goto B71e40b;
case 0x71e40e:c.instructions+=38;goto B71e40e;
case 0x71e411:c.instructions+=37;goto B71e411;
case 0x71e415:c.instructions+=36;goto B71e415;
case 0x71e418:c.instructions+=35;goto B71e418;
case 0x71e41b:c.instructions+=34;goto B71e41b;
case 0x71e41e:c.instructions+=33;goto B71e41e;
case 0x71e420:c.instructions+=32;goto B71e420;
case 0x71e424:c.instructions+=31;goto B71e424;
case 0x71e427:c.instructions+=30;goto B71e427;
case 0x71e42a:c.instructions+=29;goto B71e42a;
case 0x71e42d:c.instructions+=28;goto B71e42d;
case 0x71e434:c.instructions+=27;goto B71e434;
case 0x71e438:c.instructions+=26;goto B71e438;
case 0x71e43b:c.instructions+=25;goto B71e43b;
case 0x71e43e:c.instructions+=24;goto B71e43e;
case 0x71e440:c.instructions+=23;goto B71e440;
case 0x71e444:c.instructions+=22;goto B71e444;
case 0x71e447:c.instructions+=21;goto B71e447;
case 0x71e44a:c.instructions+=20;goto B71e44a;
case 0x71e44f:c.instructions+=19;goto B71e44f;
case 0x71e452:c.instructions+=18;goto B71e452;
case 0x71e455:c.instructions+=17;goto B71e455;
case 0x71e458:c.instructions+=16;goto B71e458;
case 0x71e45d:c.instructions+=15;goto B71e45d;
case 0x71e460:c.instructions+=14;goto B71e460;
case 0x71e463:c.instructions+=13;goto B71e463;
case 0x71e466:c.instructions+=12;goto B71e466;
case 0x71e468:c.instructions+=11;goto B71e468;
case 0x71e46d:c.instructions+=10;goto B71e46d;
case 0x71e470:c.instructions+=9;goto B71e470;
case 0x71e473:c.instructions+=8;goto B71e473;
case 0x71e476:c.instructions+=7;goto B71e476;
case 0x71e47d:c.instructions+=6;goto B71e47d;
case 0x71e481:c.instructions+=5;goto B71e481;
case 0x71e484:c.instructions+=4;goto B71e484;
case 0x71e488:c.instructions+=3;goto B71e488;
case 0x71e48a:c.instructions+=2;goto B71e48a;
case 0x71e48b:c.instructions+=1;goto B71e48b;
case 0x71e491:goto L71e491;
case 0x71e492:c.instructions+=3;goto B71e492;
case 0x71e493:c.instructions+=2;goto B71e493;
case 0x71e494:c.instructions+=1;goto B71e494;
case 0x71e495:goto L71e495;
case 0x71e496:c.instructions+=11;goto B71e496;
case 0x71e498:c.instructions+=10;goto B71e498;
case 0x71e499:c.instructions+=9;goto B71e499;
case 0x71e49a:c.instructions+=8;goto B71e49a;
case 0x71e49d:c.instructions+=7;goto B71e49d;
case 0x71e4a0:c.instructions+=6;goto B71e4a0;
case 0x71e4a4:c.instructions+=5;goto B71e4a4;
case 0x71e4a7:c.instructions+=4;goto B71e4a7;
case 0x71e4aa:c.instructions+=3;goto B71e4aa;
case 0x71e4ad:c.instructions+=2;goto B71e4ad;
case 0x71e4b0:c.instructions+=1;goto B71e4b0;
case 0x71e4b3:goto L71e4b3;
case 0x71e4b6:c.instructions+=29;goto B71e4b6;
case 0x71e4b9:c.instructions+=28;goto B71e4b9;
case 0x71e4bc:c.instructions+=27;goto B71e4bc;
case 0x71e4bf:c.instructions+=26;goto B71e4bf;
case 0x71e4c3:c.instructions+=25;goto B71e4c3;
case 0x71e4c6:c.instructions+=24;goto B71e4c6;
case 0x71e4c9:c.instructions+=23;goto B71e4c9;
case 0x71e4cc:c.instructions+=22;goto B71e4cc;
case 0x71e4cf:c.instructions+=21;goto B71e4cf;
case 0x71e4d6:c.instructions+=20;goto B71e4d6;
case 0x71e4da:c.instructions+=19;goto B71e4da;
case 0x71e4dd:c.instructions+=18;goto B71e4dd;
case 0x71e4e0:c.instructions+=17;goto B71e4e0;
case 0x71e4e4:c.instructions+=16;goto B71e4e4;
case 0x71e4e7:c.instructions+=15;goto B71e4e7;
case 0x71e4ea:c.instructions+=14;goto B71e4ea;
case 0x71e4ed:c.instructions+=13;goto B71e4ed;
case 0x71e4f1:c.instructions+=12;goto B71e4f1;
case 0x71e4f4:c.instructions+=11;goto B71e4f4;
case 0x71e4f7:c.instructions+=10;goto B71e4f7;
case 0x71e4fa:c.instructions+=9;goto B71e4fa;
case 0x71e4fd:c.instructions+=8;goto B71e4fd;
case 0x71e504:c.instructions+=7;goto B71e504;
case 0x71e508:c.instructions+=6;goto B71e508;
case 0x71e50b:c.instructions+=5;goto B71e50b;
case 0x71e50f:c.instructions+=4;goto B71e50f;
case 0x71e512:c.instructions+=3;goto B71e512;
case 0x71e514:c.instructions+=2;goto B71e514;
case 0x71e515:c.instructions+=1;goto B71e515;
case 0x71e517:goto L71e517;
case 0x71e518:c.instructions+=3;goto B71e518;
case 0x71e519:c.instructions+=2;goto B71e519;
case 0x71e51a:c.instructions+=1;goto B71e51a;
case 0x71e51b:goto L71e51b;
case 0x71e51c:c.instructions+=12;goto B71e51c;
case 0x71e51e:c.instructions+=11;goto B71e51e;
case 0x71e51f:c.instructions+=10;goto B71e51f;
case 0x71e520:c.instructions+=9;goto B71e520;
case 0x71e523:c.instructions+=8;goto B71e523;
case 0x71e526:c.instructions+=7;goto B71e526;
case 0x71e52a:c.instructions+=6;goto B71e52a;
case 0x71e52d:c.instructions+=5;goto B71e52d;
case 0x71e530:c.instructions+=4;goto B71e530;
case 0x71e533:c.instructions+=3;goto B71e533;
case 0x71e536:c.instructions+=2;goto B71e536;
case 0x71e539:c.instructions+=1;goto B71e539;
case 0x71e53c:goto L71e53c;
case 0x71e53f:c.instructions+=25;goto B71e53f;
case 0x71e542:c.instructions+=24;goto B71e542;
case 0x71e545:c.instructions+=23;goto B71e545;
case 0x71e549:c.instructions+=22;goto B71e549;
case 0x71e54c:c.instructions+=21;goto B71e54c;
case 0x71e54f:c.instructions+=20;goto B71e54f;
case 0x71e552:c.instructions+=19;goto B71e552;
case 0x71e559:c.instructions+=18;goto B71e559;
case 0x71e55d:c.instructions+=17;goto B71e55d;
case 0x71e560:c.instructions+=16;goto B71e560;
case 0x71e563:c.instructions+=15;goto B71e563;
case 0x71e567:c.instructions+=14;goto B71e567;
case 0x71e56a:c.instructions+=13;goto B71e56a;
case 0x71e56d:c.instructions+=12;goto B71e56d;
case 0x71e572:c.instructions+=11;goto B71e572;
case 0x71e575:c.instructions+=10;goto B71e575;
case 0x71e578:c.instructions+=9;goto B71e578;
case 0x71e57b:c.instructions+=8;goto B71e57b;
case 0x71e582:c.instructions+=7;goto B71e582;
case 0x71e586:c.instructions+=6;goto B71e586;
case 0x71e589:c.instructions+=5;goto B71e589;
case 0x71e58d:c.instructions+=4;goto B71e58d;
case 0x71e58f:c.instructions+=3;goto B71e58f;
case 0x71e591:c.instructions+=2;goto B71e591;
case 0x71e592:c.instructions+=1;goto B71e592;
case 0x71e594:goto L71e594;
case 0x71e595:c.instructions+=3;goto B71e595;
case 0x71e596:c.instructions+=2;goto B71e596;
case 0x71e597:c.instructions+=1;goto B71e597;
case 0x71e598:goto L71e598;
case 0x71e599:c.instructions+=5;goto B71e599;
case 0x71e59b:c.instructions+=4;goto B71e59b;
case 0x71e59e:c.instructions+=3;goto B71e59e;
case 0x71e5a1:c.instructions+=2;goto B71e5a1;
case 0x71e5a3:c.instructions+=1;goto B71e5a3;
case 0x71e5a5:goto L71e5a5;
case 0x71e5a7:c.instructions+=2;goto B71e5a7;
case 0x71e5aa:c.instructions+=1;goto B71e5aa;
case 0x71e5ac:goto L71e5ac;
case 0x71e5af:c.instructions+=1;goto B71e5af;
case 0x71e5b1:goto L71e5b1;
case 0x71e5b4:c.instructions+=10;goto B71e5b4;
case 0x71e5b7:c.instructions+=9;goto B71e5b7;
case 0x71e5bc:c.instructions+=8;goto B71e5bc;
case 0x71e5bd:c.instructions+=7;goto B71e5bd;
case 0x71e5bf:c.instructions+=6;goto B71e5bf;
case 0x71e5c1:c.instructions+=5;goto B71e5c1;
case 0x71e5c3:c.instructions+=4;goto B71e5c3;
case 0x71e5c6:c.instructions+=3;goto B71e5c6;
case 0x71e5c9:c.instructions+=2;goto B71e5c9;
case 0x71e5ca:c.instructions+=1;goto B71e5ca;
case 0x71e5cf:goto L71e5cf;
case 0x71e5d2:c.instructions+=2;goto B71e5d2;
case 0x71e5d3:c.instructions+=1;goto B71e5d3;
case 0x71e5d4:goto L71e5d4;
case 0x71e5d7:c.instructions+=2;goto B71e5d7;
case 0x71e5d9:c.instructions+=1;goto B71e5d9;
case 0x71e5db:goto L71e5db;
case 0x71e5de:c.instructions+=10;goto B71e5de;
case 0x71e5e1:c.instructions+=9;goto B71e5e1;
case 0x71e5e6:c.instructions+=8;goto B71e5e6;
case 0x71e5e7:c.instructions+=7;goto B71e5e7;
case 0x71e5e9:c.instructions+=6;goto B71e5e9;
case 0x71e5eb:c.instructions+=5;goto B71e5eb;
case 0x71e5ec:c.instructions+=4;goto B71e5ec;
case 0x71e5ed:c.instructions+=3;goto B71e5ed;
case 0x71e5f0:c.instructions+=2;goto B71e5f0;
case 0x71e5f1:c.instructions+=1;goto B71e5f1;
case 0x71e5f6:goto L71e5f6;
case 0x71e5f8:goto L71e5f8;
case 0x71e5f9:c.instructions+=3;goto B71e5f9;
case 0x71e5fc:c.instructions+=2;goto B71e5fc;
case 0x71e5fe:c.instructions+=1;goto B71e5fe;
case 0x71e600:goto L71e600;
case 0x71e603:c.instructions+=9;goto B71e603;
case 0x71e606:c.instructions+=8;goto B71e606;
case 0x71e60b:c.instructions+=7;goto B71e60b;
case 0x71e60d:c.instructions+=6;goto B71e60d;
case 0x71e60e:c.instructions+=5;goto B71e60e;
case 0x71e611:c.instructions+=4;goto B71e611;
case 0x71e614:c.instructions+=3;goto B71e614;
case 0x71e616:c.instructions+=2;goto B71e616;
case 0x71e617:c.instructions+=1;goto B71e617;
case 0x71e619:goto L71e619;
case 0x71e61c:c.instructions+=2;goto B71e61c;
case 0x71e61e:c.instructions+=1;goto B71e61e;
case 0x71e620:goto L71e620;
case 0x71e623:c.instructions+=7;goto B71e623;
case 0x71e626:c.instructions+=6;goto B71e626;
case 0x71e62b:c.instructions+=5;goto B71e62b;
case 0x71e62d:c.instructions+=4;goto B71e62d;
case 0x71e62e:c.instructions+=3;goto B71e62e;
case 0x71e631:c.instructions+=2;goto B71e631;
case 0x71e634:c.instructions+=1;goto B71e634;
case 0x71e636:goto L71e636;
case 0x71e637:c.instructions+=4;goto B71e637;
case 0x71e638:c.instructions+=3;goto B71e638;
case 0x71e63b:c.instructions+=2;goto B71e63b;
case 0x71e63c:c.instructions+=1;goto B71e63c;
case 0x71e641:goto L71e641;
case 0x71e644:goto L71e644;
case 0x71e645:c.instructions+=2;goto B71e645;
case 0x71e646:c.instructions+=1;goto B71e646;
case 0x71e647:goto L71e647;
case 0x71e648:c.instructions+=15;goto B71e648;
case 0x71e64a:c.instructions+=14;goto B71e64a;
case 0x71e650:c.instructions+=13;goto B71e650;
case 0x71e653:c.instructions+=12;goto B71e653;
case 0x71e659:c.instructions+=11;goto B71e659;
case 0x71e65b:c.instructions+=10;goto B71e65b;
case 0x71e65c:c.instructions+=9;goto B71e65c;
case 0x71e65d:c.instructions+=8;goto B71e65d;
case 0x71e65f:c.instructions+=7;goto B71e65f;
case 0x71e661:c.instructions+=6;goto B71e661;
case 0x71e664:c.instructions+=5;goto B71e664;
case 0x71e665:c.instructions+=4;goto B71e665;
case 0x71e668:c.instructions+=3;goto B71e668;
case 0x71e66b:c.instructions+=2;goto B71e66b;
case 0x71e66c:c.instructions+=1;goto B71e66c;
case 0x71e671:goto L71e671;
case 0x71e674:c.instructions+=8;goto B71e674;
case 0x71e67a:c.instructions+=7;goto B71e67a;
case 0x71e67b:c.instructions+=6;goto B71e67b;
case 0x71e67c:c.instructions+=5;goto B71e67c;
case 0x71e67d:c.instructions+=4;goto B71e67d;
case 0x71e67e:c.instructions+=3;goto B71e67e;
case 0x71e681:c.instructions+=2;goto B71e681;
case 0x71e682:c.instructions+=1;goto B71e682;
case 0x71e687:goto L71e687;
case 0x71e68a:c.instructions+=2;goto B71e68a;
case 0x71e68b:c.instructions+=1;goto B71e68b;
case 0x71e68c:goto L71e68c;
case 0x71e68d:c.instructions+=6;goto B71e68d;
case 0x71e68f:c.instructions+=5;goto B71e68f;
case 0x71e695:c.instructions+=4;goto B71e695;
case 0x71e698:c.instructions+=3;goto B71e698;
case 0x71e69b:c.instructions+=2;goto B71e69b;
case 0x71e69d:c.instructions+=1;goto B71e69d;
case 0x71e69f:goto L71e69f;
case 0x71e6a1:c.instructions+=2;goto B71e6a1;
case 0x71e6a4:c.instructions+=1;goto B71e6a4;
case 0x71e6a6:goto L71e6a6;
case 0x71e6a7:c.instructions+=3;goto B71e6a7;
case 0x71e6a9:c.instructions+=2;goto B71e6a9;
case 0x71e6ab:c.instructions+=1;goto B71e6ab;
case 0x71e6b1:goto L71e6b1;
case 0x71e6b4:c.instructions+=4;goto B71e6b4;
case 0x71e6b5:c.instructions+=3;goto B71e6b5;
case 0x71e6b7:c.instructions+=2;goto B71e6b7;
case 0x71e6b8:c.instructions+=1;goto B71e6b8;
case 0x71e6ba:goto L71e6ba;
case 0x71e6bd:c.instructions+=2;goto B71e6bd;
case 0x71e6c0:c.instructions+=1;goto B71e6c0;
case 0x71e6c2:goto L71e6c2;
case 0x71e6c5:c.instructions+=10;goto B71e6c5;
case 0x71e6ca:c.instructions+=9;goto B71e6ca;
case 0x71e6cb:c.instructions+=8;goto B71e6cb;
case 0x71e6cc:c.instructions+=7;goto B71e6cc;
case 0x71e6cd:c.instructions+=6;goto B71e6cd;
case 0x71e6cf:c.instructions+=5;goto B71e6cf;
case 0x71e6d2:c.instructions+=4;goto B71e6d2;
case 0x71e6d8:c.instructions+=3;goto B71e6d8;
case 0x71e6d9:c.instructions+=2;goto B71e6d9;
case 0x71e6da:c.instructions+=1;goto B71e6da;
case 0x71e6df:goto L71e6df;
case 0x71e6e1:goto L71e6e1;
case 0x71e6e4:c.instructions+=10;goto B71e6e4;
case 0x71e6e9:c.instructions+=9;goto B71e6e9;
case 0x71e6ea:c.instructions+=8;goto B71e6ea;
case 0x71e6eb:c.instructions+=7;goto B71e6eb;
case 0x71e6ec:c.instructions+=6;goto B71e6ec;
case 0x71e6ee:c.instructions+=5;goto B71e6ee;
case 0x71e6f1:c.instructions+=4;goto B71e6f1;
case 0x71e6f7:c.instructions+=3;goto B71e6f7;
case 0x71e6f8:c.instructions+=2;goto B71e6f8;
case 0x71e6f9:c.instructions+=1;goto B71e6f9;
case 0x71e6fe:goto L71e6fe;
case 0x71e700:goto L71e700;
case 0x71e703:c.instructions+=2;goto B71e703;
case 0x71e705:c.instructions+=1;goto B71e705;
case 0x71e707:goto L71e707;
case 0x71e70a:c.instructions+=2;goto B71e70a;
case 0x71e70d:c.instructions+=1;goto B71e70d;
case 0x71e70f:goto L71e70f;
case 0x71e712:c.instructions+=10;goto B71e712;
case 0x71e717:c.instructions+=9;goto B71e717;
case 0x71e718:c.instructions+=8;goto B71e718;
case 0x71e719:c.instructions+=7;goto B71e719;
case 0x71e71a:c.instructions+=6;goto B71e71a;
case 0x71e71b:c.instructions+=5;goto B71e71b;
case 0x71e71c:c.instructions+=4;goto B71e71c;
case 0x71e722:c.instructions+=3;goto B71e722;
case 0x71e723:c.instructions+=2;goto B71e723;
case 0x71e724:c.instructions+=1;goto B71e724;
case 0x71e729:goto L71e729;
case 0x71e72c:c.instructions+=1;goto B71e72c;
case 0x71e731:goto L71e731;
case 0x71e734:c.instructions+=10;goto B71e734;
case 0x71e739:c.instructions+=9;goto B71e739;
case 0x71e73a:c.instructions+=8;goto B71e73a;
case 0x71e73b:c.instructions+=7;goto B71e73b;
case 0x71e73c:c.instructions+=6;goto B71e73c;
case 0x71e73d:c.instructions+=5;goto B71e73d;
case 0x71e73e:c.instructions+=4;goto B71e73e;
case 0x71e744:c.instructions+=3;goto B71e744;
case 0x71e745:c.instructions+=2;goto B71e745;
case 0x71e746:c.instructions+=1;goto B71e746;
case 0x71e74b:goto L71e74b;
case 0x71e74d:goto L71e74d;
case 0x71e74e:c.instructions+=3;goto B71e74e;
case 0x71e751:c.instructions+=2;goto B71e751;
case 0x71e753:c.instructions+=1;goto B71e753;
case 0x71e755:goto L71e755;
case 0x71e758:c.instructions+=2;goto B71e758;
case 0x71e75b:c.instructions+=1;goto B71e75b;
case 0x71e75d:goto L71e75d;
case 0x71e760:c.instructions+=8;goto B71e760;
case 0x71e765:c.instructions+=7;goto B71e765;
case 0x71e767:c.instructions+=6;goto B71e767;
case 0x71e768:c.instructions+=5;goto B71e768;
case 0x71e76b:c.instructions+=4;goto B71e76b;
case 0x71e76e:c.instructions+=3;goto B71e76e;
case 0x71e770:c.instructions+=2;goto B71e770;
case 0x71e771:c.instructions+=1;goto B71e771;
case 0x71e773:goto L71e773;
case 0x71e776:c.instructions+=8;goto B71e776;
case 0x71e77b:c.instructions+=7;goto B71e77b;
case 0x71e77d:c.instructions+=6;goto B71e77d;
case 0x71e77e:c.instructions+=5;goto B71e77e;
case 0x71e781:c.instructions+=4;goto B71e781;
case 0x71e784:c.instructions+=3;goto B71e784;
case 0x71e786:c.instructions+=2;goto B71e786;
case 0x71e787:c.instructions+=1;goto B71e787;
case 0x71e789:goto L71e789;
case 0x71e78c:c.instructions+=2;goto B71e78c;
case 0x71e78e:c.instructions+=1;goto B71e78e;
case 0x71e790:goto L71e790;
case 0x71e793:c.instructions+=2;goto B71e793;
case 0x71e796:c.instructions+=1;goto B71e796;
case 0x71e798:goto L71e798;
case 0x71e79b:c.instructions+=6;goto B71e79b;
case 0x71e7a0:c.instructions+=5;goto B71e7a0;
case 0x71e7a2:c.instructions+=4;goto B71e7a2;
case 0x71e7a3:c.instructions+=3;goto B71e7a3;
case 0x71e7a6:c.instructions+=2;goto B71e7a6;
case 0x71e7a9:c.instructions+=1;goto B71e7a9;
case 0x71e7ab:goto L71e7ab;
case 0x71e7ac:c.instructions+=5;goto B71e7ac;
case 0x71e7ad:c.instructions+=4;goto B71e7ad;
case 0x71e7b3:c.instructions+=3;goto B71e7b3;
case 0x71e7b4:c.instructions+=2;goto B71e7b4;
case 0x71e7b5:c.instructions+=1;goto B71e7b5;
case 0x71e7ba:goto L71e7ba;
case 0x71e7bc:goto L71e7bc;
case 0x71e7bf:c.instructions+=6;goto B71e7bf;
case 0x71e7c4:c.instructions+=5;goto B71e7c4;
case 0x71e7c6:c.instructions+=4;goto B71e7c6;
case 0x71e7c7:c.instructions+=3;goto B71e7c7;
case 0x71e7ca:c.instructions+=2;goto B71e7ca;
case 0x71e7cd:c.instructions+=1;goto B71e7cd;
case 0x71e7cf:goto L71e7cf;
case 0x71e7d0:c.instructions+=5;goto B71e7d0;
case 0x71e7d1:c.instructions+=4;goto B71e7d1;
case 0x71e7d7:c.instructions+=3;goto B71e7d7;
case 0x71e7d8:c.instructions+=2;goto B71e7d8;
case 0x71e7d9:c.instructions+=1;goto B71e7d9;
case 0x71e7de:goto L71e7de;
case 0x71e7e1:goto L71e7e1;
case 0x71e7e2:goto L71e7e2;
case 0x71e7e3:c.instructions+=4;goto B71e7e3;
case 0x71e7e6:c.instructions+=3;goto B71e7e6;
case 0x71e7ec:c.instructions+=2;goto B71e7ec;
case 0x71e7ed:c.instructions+=1;goto B71e7ed;
case 0x71e7f2:goto L71e7f2;
case 0x71e7f5:c.instructions+=1;goto B71e7f5;
case 0x71e7f6:goto L71e7f6;
case 0x71e7f7:c.instructions+=2;goto B71e7f7;
case 0x71e7f8:c.instructions+=1;goto B71e7f8;
case 0x71e7f9:goto L71e7f9;
case 0x71e7fa:c.instructions+=33;goto B71e7fa;
case 0x71e7fc:c.instructions+=32;goto B71e7fc;
case 0x71e7fd:c.instructions+=31;goto B71e7fd;
case 0x71e7fe:c.instructions+=30;goto B71e7fe;
case 0x71e801:c.instructions+=29;goto B71e801;
case 0x71e804:c.instructions+=28;goto B71e804;
case 0x71e807:c.instructions+=27;goto B71e807;
case 0x71e80a:c.instructions+=26;goto B71e80a;
case 0x71e80d:c.instructions+=25;goto B71e80d;
case 0x71e810:c.instructions+=24;goto B71e810;
case 0x71e814:c.instructions+=23;goto B71e814;
case 0x71e817:c.instructions+=22;goto B71e817;
case 0x71e81a:c.instructions+=21;goto B71e81a;
case 0x71e81d:c.instructions+=20;goto B71e81d;
case 0x71e820:c.instructions+=19;goto B71e820;
case 0x71e823:c.instructions+=18;goto B71e823;
case 0x71e826:c.instructions+=17;goto B71e826;
case 0x71e829:c.instructions+=16;goto B71e829;
case 0x71e82c:c.instructions+=15;goto B71e82c;
case 0x71e830:c.instructions+=14;goto B71e830;
case 0x71e833:c.instructions+=13;goto B71e833;
case 0x71e836:c.instructions+=12;goto B71e836;
case 0x71e839:c.instructions+=11;goto B71e839;
case 0x71e83c:c.instructions+=10;goto B71e83c;
case 0x71e83f:c.instructions+=9;goto B71e83f;
case 0x71e842:c.instructions+=8;goto B71e842;
case 0x71e845:c.instructions+=7;goto B71e845;
case 0x71e84c:c.instructions+=6;goto B71e84c;
case 0x71e850:c.instructions+=5;goto B71e850;
case 0x71e857:c.instructions+=4;goto B71e857;
case 0x71e85b:c.instructions+=3;goto B71e85b;
case 0x71e85e:c.instructions+=2;goto B71e85e;
case 0x71e861:c.instructions+=1;goto B71e861;
case 0x71e863:goto L71e863;
case 0x71e866:c.instructions+=39;goto B71e866;
case 0x71e869:c.instructions+=38;goto B71e869;
case 0x71e86c:c.instructions+=37;goto B71e86c;
case 0x71e86f:c.instructions+=36;goto B71e86f;
case 0x71e872:c.instructions+=35;goto B71e872;
case 0x71e875:c.instructions+=34;goto B71e875;
case 0x71e879:c.instructions+=33;goto B71e879;
case 0x71e87c:c.instructions+=32;goto B71e87c;
case 0x71e87f:c.instructions+=31;goto B71e87f;
case 0x71e882:c.instructions+=30;goto B71e882;
case 0x71e885:c.instructions+=29;goto B71e885;
case 0x71e888:c.instructions+=28;goto B71e888;
case 0x71e88b:c.instructions+=27;goto B71e88b;
case 0x71e88e:c.instructions+=26;goto B71e88e;
case 0x71e891:c.instructions+=25;goto B71e891;
case 0x71e894:c.instructions+=24;goto B71e894;
case 0x71e897:c.instructions+=23;goto B71e897;
case 0x71e89a:c.instructions+=22;goto B71e89a;
case 0x71e89d:c.instructions+=21;goto B71e89d;
case 0x71e8a0:c.instructions+=20;goto B71e8a0;
case 0x71e8a7:c.instructions+=19;goto B71e8a7;
case 0x71e8ab:c.instructions+=18;goto B71e8ab;
case 0x71e8b2:c.instructions+=17;goto B71e8b2;
case 0x71e8b6:c.instructions+=16;goto B71e8b6;
case 0x71e8b9:c.instructions+=15;goto B71e8b9;
case 0x71e8bc:c.instructions+=14;goto B71e8bc;
case 0x71e8c0:c.instructions+=13;goto B71e8c0;
case 0x71e8c4:c.instructions+=12;goto B71e8c4;
case 0x71e8c7:c.instructions+=11;goto B71e8c7;
case 0x71e8ca:c.instructions+=10;goto B71e8ca;
case 0x71e8d1:c.instructions+=9;goto B71e8d1;
case 0x71e8d5:c.instructions+=8;goto B71e8d5;
case 0x71e8dc:c.instructions+=7;goto B71e8dc;
case 0x71e8e0:c.instructions+=6;goto B71e8e0;
case 0x71e8e3:c.instructions+=5;goto B71e8e3;
case 0x71e8e6:c.instructions+=4;goto B71e8e6;
case 0x71e8e8:c.instructions+=3;goto B71e8e8;
case 0x71e8eb:c.instructions+=2;goto B71e8eb;
case 0x71e8ed:c.instructions+=1;goto B71e8ed;
case 0x71e8f3:goto L71e8f3;
case 0x71e8f4:c.instructions+=3;goto B71e8f4;
case 0x71e8f5:c.instructions+=2;goto B71e8f5;
case 0x71e8f6:c.instructions+=1;goto B71e8f6;
case 0x71e8f7:goto L71e8f7;
case 0x71e8f8:c.instructions+=7;goto B71e8f8;
case 0x71e8fa:c.instructions+=6;goto B71e8fa;
case 0x71e8fb:c.instructions+=5;goto B71e8fb;
case 0x71e8fe:c.instructions+=4;goto B71e8fe;
case 0x71e901:c.instructions+=3;goto B71e901;
case 0x71e908:c.instructions+=2;goto B71e908;
case 0x71e90b:c.instructions+=1;goto B71e90b;
case 0x71e911:goto L71e911;
case 0x71e914:c.instructions+=8;goto B71e914;
case 0x71e918:c.instructions+=7;goto B71e918;
case 0x71e91b:c.instructions+=6;goto B71e91b;
case 0x71e91e:c.instructions+=5;goto B71e91e;
case 0x71e921:c.instructions+=4;goto B71e921;
case 0x71e923:c.instructions+=3;goto B71e923;
case 0x71e926:c.instructions+=2;goto B71e926;
case 0x71e929:c.instructions+=1;goto B71e929;
case 0x71e92b:goto L71e92b;
case 0x71e92c:c.instructions+=2;goto B71e92c;
case 0x71e92d:c.instructions+=1;goto B71e92d;
case 0x71e92e:goto L71e92e;
case 0x71e92f:c.instructions+=10;goto B71e92f;
case 0x71e931:c.instructions+=9;goto B71e931;
case 0x71e932:c.instructions+=8;goto B71e932;
case 0x71e933:c.instructions+=7;goto B71e933;
case 0x71e934:c.instructions+=6;goto B71e934;
case 0x71e937:c.instructions+=5;goto B71e937;
case 0x71e93a:c.instructions+=4;goto B71e93a;
case 0x71e93d:c.instructions+=3;goto B71e93d;
case 0x71e940:c.instructions+=2;goto B71e940;
case 0x71e943:c.instructions+=1;goto B71e943;
case 0x71e949:goto L71e949;
case 0x71e94c:c.instructions+=14;goto B71e94c;
case 0x71e94f:c.instructions+=13;goto B71e94f;
case 0x71e952:c.instructions+=12;goto B71e952;
case 0x71e956:c.instructions+=11;goto B71e956;
case 0x71e959:c.instructions+=10;goto B71e959;
case 0x71e95c:c.instructions+=9;goto B71e95c;
case 0x71e95f:c.instructions+=8;goto B71e95f;
case 0x71e962:c.instructions+=7;goto B71e962;
case 0x71e964:c.instructions+=6;goto B71e964;
case 0x71e967:c.instructions+=5;goto B71e967;
case 0x71e96a:c.instructions+=4;goto B71e96a;
case 0x71e96c:c.instructions+=3;goto B71e96c;
case 0x71e96f:c.instructions+=2;goto B71e96f;
case 0x71e972:c.instructions+=1;goto B71e972;
case 0x71e974:goto L71e974;
case 0x71e975:c.instructions+=4;goto B71e975;
case 0x71e976:c.instructions+=3;goto B71e976;
case 0x71e977:c.instructions+=2;goto B71e977;
case 0x71e978:c.instructions+=1;goto B71e978;
case 0x71e979:goto L71e979;
case 0x71e97a:c.instructions+=13;goto B71e97a;
case 0x71e97c:c.instructions+=12;goto B71e97c;
case 0x71e97d:c.instructions+=11;goto B71e97d;
case 0x71e97e:c.instructions+=10;goto B71e97e;
case 0x71e97f:c.instructions+=9;goto B71e97f;
case 0x71e980:c.instructions+=8;goto B71e980;
case 0x71e981:c.instructions+=7;goto B71e981;
case 0x71e984:c.instructions+=6;goto B71e984;
case 0x71e987:c.instructions+=5;goto B71e987;
case 0x71e98a:c.instructions+=4;goto B71e98a;
case 0x71e98d:c.instructions+=3;goto B71e98d;
case 0x71e990:c.instructions+=2;goto B71e990;
case 0x71e996:c.instructions+=1;goto B71e996;
case 0x71e999:goto L71e999;
case 0x71e99c:c.instructions+=23;goto B71e99c;
case 0x71e99f:c.instructions+=22;goto B71e99f;
case 0x71e9a2:c.instructions+=21;goto B71e9a2;
case 0x71e9a5:c.instructions+=20;goto B71e9a5;
case 0x71e9a8:c.instructions+=19;goto B71e9a8;
case 0x71e9ab:c.instructions+=18;goto B71e9ab;
case 0x71e9ae:c.instructions+=17;goto B71e9ae;
case 0x71e9b2:c.instructions+=16;goto B71e9b2;
case 0x71e9b5:c.instructions+=15;goto B71e9b5;
case 0x71e9b8:c.instructions+=14;goto B71e9b8;
case 0x71e9bb:c.instructions+=13;goto B71e9bb;
case 0x71e9be:c.instructions+=12;goto B71e9be;
case 0x71e9c2:c.instructions+=11;goto B71e9c2;
case 0x71e9c6:c.instructions+=10;goto B71e9c6;
case 0x71e9c9:c.instructions+=9;goto B71e9c9;
case 0x71e9cc:c.instructions+=8;goto B71e9cc;
case 0x71e9cf:c.instructions+=7;goto B71e9cf;
case 0x71e9d2:c.instructions+=6;goto B71e9d2;
case 0x71e9d4:c.instructions+=5;goto B71e9d4;
case 0x71e9d6:c.instructions+=4;goto B71e9d6;
case 0x71e9d8:c.instructions+=3;goto B71e9d8;
case 0x71e9db:c.instructions+=2;goto B71e9db;
case 0x71e9de:c.instructions+=1;goto B71e9de;
case 0x71e9e0:goto L71e9e0;
case 0x71e9e1:c.instructions+=6;goto B71e9e1;
case 0x71e9e2:c.instructions+=5;goto B71e9e2;
case 0x71e9e3:c.instructions+=4;goto B71e9e3;
case 0x71e9e4:c.instructions+=3;goto B71e9e4;
case 0x71e9e5:c.instructions+=2;goto B71e9e5;
case 0x71e9e6:c.instructions+=1;goto B71e9e6;
case 0x71e9e7:goto L71e9e7;
case 0x71e9e8:c.instructions+=14;goto B71e9e8;
case 0x71e9ea:c.instructions+=13;goto B71e9ea;
case 0x71e9eb:c.instructions+=12;goto B71e9eb;
case 0x71e9ec:c.instructions+=11;goto B71e9ec;
case 0x71e9ef:c.instructions+=10;goto B71e9ef;
case 0x71e9f3:c.instructions+=9;goto B71e9f3;
case 0x71e9f8:c.instructions+=8;goto B71e9f8;
case 0x71e9fd:c.instructions+=7;goto B71e9fd;
case 0x71ea02:c.instructions+=6;goto B71ea02;
case 0x71ea05:c.instructions+=5;goto B71ea05;
case 0x71ea08:c.instructions+=4;goto B71ea08;
case 0x71ea09:c.instructions+=3;goto B71ea09;
case 0x71ea0c:c.instructions+=2;goto B71ea0c;
case 0x71ea0f:c.instructions+=1;goto B71ea0f;
case 0x71ea13:goto L71ea13;
case 0x71ea17:c.instructions+=27;goto B71ea17;
case 0x71ea1b:c.instructions+=26;goto B71ea1b;
case 0x71ea1f:c.instructions+=25;goto B71ea1f;
case 0x71ea23:c.instructions+=24;goto B71ea23;
case 0x71ea28:c.instructions+=23;goto B71ea28;
case 0x71ea2c:c.instructions+=22;goto B71ea2c;
case 0x71ea30:c.instructions+=21;goto B71ea30;
case 0x71ea34:c.instructions+=20;goto B71ea34;
case 0x71ea38:c.instructions+=19;goto B71ea38;
case 0x71ea3d:c.instructions+=18;goto B71ea3d;
case 0x71ea41:c.instructions+=17;goto B71ea41;
case 0x71ea45:c.instructions+=16;goto B71ea45;
case 0x71ea49:c.instructions+=15;goto B71ea49;
case 0x71ea4d:c.instructions+=14;goto B71ea4d;
case 0x71ea52:c.instructions+=13;goto B71ea52;
case 0x71ea56:c.instructions+=12;goto B71ea56;
case 0x71ea5a:c.instructions+=11;goto B71ea5a;
case 0x71ea5e:c.instructions+=10;goto B71ea5e;
case 0x71ea62:c.instructions+=9;goto B71ea62;
case 0x71ea6a:c.instructions+=8;goto B71ea6a;
case 0x71ea6f:c.instructions+=7;goto B71ea6f;
case 0x71ea73:c.instructions+=6;goto B71ea73;
case 0x71ea77:c.instructions+=5;goto B71ea77;
case 0x71ea7a:c.instructions+=4;goto B71ea7a;
case 0x71ea7d:c.instructions+=3;goto B71ea7d;
case 0x71ea7f:c.instructions+=2;goto B71ea7f;
case 0x71ea80:c.instructions+=1;goto B71ea80;
case 0x71ea82:goto L71ea82;
case 0x71ea83:c.instructions+=3;goto B71ea83;
case 0x71ea84:c.instructions+=2;goto B71ea84;
case 0x71ea85:c.instructions+=1;goto B71ea85;
case 0x71ea86:goto L71ea86;
case 0x71ea87:c.instructions+=15;goto B71ea87;
case 0x71ea89:c.instructions+=14;goto B71ea89;
case 0x71ea8a:c.instructions+=13;goto B71ea8a;
case 0x71ea8b:c.instructions+=12;goto B71ea8b;
case 0x71ea8e:c.instructions+=11;goto B71ea8e;
case 0x71ea92:c.instructions+=10;goto B71ea92;
case 0x71ea97:c.instructions+=9;goto B71ea97;
case 0x71ea9c:c.instructions+=8;goto B71ea9c;
case 0x71eaa1:c.instructions+=7;goto B71eaa1;
case 0x71eaa4:c.instructions+=6;goto B71eaa4;
case 0x71eaa7:c.instructions+=5;goto B71eaa7;
case 0x71eaaa:c.instructions+=4;goto B71eaaa;
case 0x71eaad:c.instructions+=3;goto B71eaad;
case 0x71eab0:c.instructions+=2;goto B71eab0;
case 0x71eab3:c.instructions+=1;goto B71eab3;
case 0x71eab7:goto L71eab7;
case 0x71eabb:c.instructions+=23;goto B71eabb;
case 0x71eabf:c.instructions+=22;goto B71eabf;
case 0x71eac3:c.instructions+=21;goto B71eac3;
case 0x71eac5:c.instructions+=20;goto B71eac5;
case 0x71eaca:c.instructions+=19;goto B71eaca;
case 0x71eace:c.instructions+=18;goto B71eace;
case 0x71ead2:c.instructions+=17;goto B71ead2;
case 0x71ead6:c.instructions+=16;goto B71ead6;
case 0x71eada:c.instructions+=15;goto B71eada;
case 0x71eade:c.instructions+=14;goto B71eade;
case 0x71eae2:c.instructions+=13;goto B71eae2;
case 0x71eae6:c.instructions+=12;goto B71eae6;
case 0x71eaeb:c.instructions+=11;goto B71eaeb;
case 0x71eaef:c.instructions+=10;goto B71eaef;
case 0x71eaf3:c.instructions+=9;goto B71eaf3;
case 0x71eaf7:c.instructions+=8;goto B71eaf7;
case 0x71eaff:c.instructions+=7;goto B71eaff;
case 0x71eb04:c.instructions+=6;goto B71eb04;
case 0x71eb08:c.instructions+=5;goto B71eb08;
case 0x71eb0c:c.instructions+=4;goto B71eb0c;
case 0x71eb0f:c.instructions+=3;goto B71eb0f;
case 0x71eb11:c.instructions+=2;goto B71eb11;
case 0x71eb12:c.instructions+=1;goto B71eb12;
case 0x71eb14:goto L71eb14;
case 0x71eb15:c.instructions+=3;goto B71eb15;
case 0x71eb16:c.instructions+=2;goto B71eb16;
case 0x71eb17:c.instructions+=1;goto B71eb17;
case 0x71eb18:goto L71eb18;
case 0x71eb19:c.instructions+=11;goto B71eb19;
case 0x71eb1b:c.instructions+=10;goto B71eb1b;
case 0x71eb1c:c.instructions+=9;goto B71eb1c;
case 0x71eb1d:c.instructions+=8;goto B71eb1d;
case 0x71eb20:c.instructions+=7;goto B71eb20;
case 0x71eb24:c.instructions+=6;goto B71eb24;
case 0x71eb29:c.instructions+=5;goto B71eb29;
case 0x71eb2c:c.instructions+=4;goto B71eb2c;
case 0x71eb2f:c.instructions+=3;goto B71eb2f;
case 0x71eb32:c.instructions+=2;goto B71eb32;
case 0x71eb35:c.instructions+=1;goto B71eb35;
case 0x71eb39:goto L71eb39;
case 0x71eb3d:c.instructions+=16;goto B71eb3d;
case 0x71eb41:c.instructions+=15;goto B71eb41;
case 0x71eb45:c.instructions+=14;goto B71eb45;
case 0x71eb49:c.instructions+=13;goto B71eb49;
case 0x71eb4e:c.instructions+=12;goto B71eb4e;
case 0x71eb52:c.instructions+=11;goto B71eb52;
case 0x71eb56:c.instructions+=10;goto B71eb56;
case 0x71eb5a:c.instructions+=9;goto B71eb5a;
case 0x71eb62:c.instructions+=8;goto B71eb62;
case 0x71eb67:c.instructions+=7;goto B71eb67;
case 0x71eb6b:c.instructions+=6;goto B71eb6b;
case 0x71eb6f:c.instructions+=5;goto B71eb6f;
case 0x71eb72:c.instructions+=4;goto B71eb72;
case 0x71eb75:c.instructions+=3;goto B71eb75;
case 0x71eb77:c.instructions+=2;goto B71eb77;
case 0x71eb78:c.instructions+=1;goto B71eb78;
case 0x71eb7a:goto L71eb7a;
case 0x71eb7b:c.instructions+=3;goto B71eb7b;
case 0x71eb7c:c.instructions+=2;goto B71eb7c;
case 0x71eb7d:c.instructions+=1;goto B71eb7d;
case 0x71eb7e:goto L71eb7e;
case 0x71eb7f:c.instructions+=12;goto B71eb7f;
case 0x71eb81:c.instructions+=11;goto B71eb81;
case 0x71eb82:c.instructions+=10;goto B71eb82;
case 0x71eb83:c.instructions+=9;goto B71eb83;
case 0x71eb86:c.instructions+=8;goto B71eb86;
case 0x71eb8a:c.instructions+=7;goto B71eb8a;
case 0x71eb8f:c.instructions+=6;goto B71eb8f;
case 0x71eb92:c.instructions+=5;goto B71eb92;
case 0x71eb95:c.instructions+=4;goto B71eb95;
case 0x71eb98:c.instructions+=3;goto B71eb98;
case 0x71eb9b:c.instructions+=2;goto B71eb9b;
case 0x71eb9e:c.instructions+=1;goto B71eb9e;
case 0x71eba2:goto L71eba2;
case 0x71eba6:c.instructions+=15;goto B71eba6;
case 0x71ebaa:c.instructions+=14;goto B71ebaa;
case 0x71ebae:c.instructions+=13;goto B71ebae;
case 0x71ebb3:c.instructions+=12;goto B71ebb3;
case 0x71ebb7:c.instructions+=11;goto B71ebb7;
case 0x71ebbb:c.instructions+=10;goto B71ebbb;
case 0x71ebbf:c.instructions+=9;goto B71ebbf;
case 0x71ebc7:c.instructions+=8;goto B71ebc7;
case 0x71ebcc:c.instructions+=7;goto B71ebcc;
case 0x71ebd0:c.instructions+=6;goto B71ebd0;
case 0x71ebd4:c.instructions+=5;goto B71ebd4;
case 0x71ebd7:c.instructions+=4;goto B71ebd7;
case 0x71ebd9:c.instructions+=3;goto B71ebd9;
case 0x71ebdb:c.instructions+=2;goto B71ebdb;
case 0x71ebdc:c.instructions+=1;goto B71ebdc;
case 0x71ebde:goto L71ebde;
case 0x71ebdf:c.instructions+=3;goto B71ebdf;
case 0x71ebe0:c.instructions+=2;goto B71ebe0;
case 0x71ebe1:c.instructions+=1;goto B71ebe1;
case 0x71ebe2:goto L71ebe2;
case 0x71ebe3:c.instructions+=24;goto B71ebe3;
case 0x71ebe5:c.instructions+=23;goto B71ebe5;
case 0x71ebe6:c.instructions+=22;goto B71ebe6;
case 0x71ebe7:c.instructions+=21;goto B71ebe7;
case 0x71ebea:c.instructions+=20;goto B71ebea;
case 0x71ebed:c.instructions+=19;goto B71ebed;
case 0x71ebf0:c.instructions+=18;goto B71ebf0;
case 0x71ebf3:c.instructions+=17;goto B71ebf3;
case 0x71ebf6:c.instructions+=16;goto B71ebf6;
case 0x71ebfa:c.instructions+=15;goto B71ebfa;
case 0x71ebff:c.instructions+=14;goto B71ebff;
case 0x71ec02:c.instructions+=13;goto B71ec02;
case 0x71ec06:c.instructions+=12;goto B71ec06;
case 0x71ec0a:c.instructions+=11;goto B71ec0a;
case 0x71ec0e:c.instructions+=10;goto B71ec0e;
case 0x71ec12:c.instructions+=9;goto B71ec12;
case 0x71ec17:c.instructions+=8;goto B71ec17;
case 0x71ec1b:c.instructions+=7;goto B71ec1b;
case 0x71ec1f:c.instructions+=6;goto B71ec1f;
case 0x71ec23:c.instructions+=5;goto B71ec23;
case 0x71ec27:c.instructions+=4;goto B71ec27;
case 0x71ec2f:c.instructions+=3;goto B71ec2f;
case 0x71ec34:c.instructions+=2;goto B71ec34;
case 0x71ec38:c.instructions+=1;goto B71ec38;
case 0x71ec3a:goto L71ec3a;
case 0x71ec3e:c.instructions+=23;goto B71ec3e;
case 0x71ec42:c.instructions+=22;goto B71ec42;
case 0x71ec46:c.instructions+=21;goto B71ec46;
case 0x71ec4a:c.instructions+=20;goto B71ec4a;
case 0x71ec4f:c.instructions+=19;goto B71ec4f;
case 0x71ec53:c.instructions+=18;goto B71ec53;
case 0x71ec57:c.instructions+=17;goto B71ec57;
case 0x71ec5b:c.instructions+=16;goto B71ec5b;
case 0x71ec5f:c.instructions+=15;goto B71ec5f;
case 0x71ec63:c.instructions+=14;goto B71ec63;
case 0x71ec6b:c.instructions+=13;goto B71ec6b;
case 0x71ec70:c.instructions+=12;goto B71ec70;
case 0x71ec74:c.instructions+=11;goto B71ec74;
case 0x71ec79:c.instructions+=10;goto B71ec79;
case 0x71ec7d:c.instructions+=9;goto B71ec7d;
case 0x71ec85:c.instructions+=8;goto B71ec85;
case 0x71ec8a:c.instructions+=7;goto B71ec8a;
case 0x71ec8e:c.instructions+=6;goto B71ec8e;
case 0x71ec92:c.instructions+=5;goto B71ec92;
case 0x71ec95:c.instructions+=4;goto B71ec95;
case 0x71ec97:c.instructions+=3;goto B71ec97;
case 0x71ec9a:c.instructions+=2;goto B71ec9a;
case 0x71ec9c:c.instructions+=1;goto B71ec9c;
case 0x71ec9e:goto L71ec9e;
case 0x71ec9f:c.instructions+=3;goto B71ec9f;
case 0x71eca0:c.instructions+=2;goto B71eca0;
case 0x71eca1:c.instructions+=1;goto B71eca1;
case 0x71eca2:goto L71eca2;
case 0x71eca3:c.instructions+=24;goto B71eca3;
case 0x71eca5:c.instructions+=23;goto B71eca5;
case 0x71eca6:c.instructions+=22;goto B71eca6;
case 0x71eca7:c.instructions+=21;goto B71eca7;
case 0x71ecaa:c.instructions+=20;goto B71ecaa;
case 0x71ecad:c.instructions+=19;goto B71ecad;
case 0x71ecb0:c.instructions+=18;goto B71ecb0;
case 0x71ecb6:c.instructions+=17;goto B71ecb6;
case 0x71ecb9:c.instructions+=16;goto B71ecb9;
case 0x71ecbd:c.instructions+=15;goto B71ecbd;
case 0x71ecc2:c.instructions+=14;goto B71ecc2;
case 0x71ecc5:c.instructions+=13;goto B71ecc5;
case 0x71ecc9:c.instructions+=12;goto B71ecc9;
case 0x71eccd:c.instructions+=11;goto B71eccd;
case 0x71ecd1:c.instructions+=10;goto B71ecd1;
case 0x71ecd5:c.instructions+=9;goto B71ecd5;
case 0x71ecda:c.instructions+=8;goto B71ecda;
case 0x71ecde:c.instructions+=7;goto B71ecde;
case 0x71ece2:c.instructions+=6;goto B71ece2;
case 0x71ece6:c.instructions+=5;goto B71ece6;
case 0x71ecea:c.instructions+=4;goto B71ecea;
case 0x71ecf2:c.instructions+=3;goto B71ecf2;
case 0x71ecf7:c.instructions+=2;goto B71ecf7;
case 0x71ecfb:c.instructions+=1;goto B71ecfb;
case 0x71ecfd:goto L71ecfd;
case 0x71ed01:c.instructions+=21;goto B71ed01;
case 0x71ed05:c.instructions+=20;goto B71ed05;
case 0x71ed09:c.instructions+=19;goto B71ed09;
case 0x71ed0d:c.instructions+=18;goto B71ed0d;
case 0x71ed12:c.instructions+=17;goto B71ed12;
case 0x71ed16:c.instructions+=16;goto B71ed16;
case 0x71ed1a:c.instructions+=15;goto B71ed1a;
case 0x71ed1e:c.instructions+=14;goto B71ed1e;
case 0x71ed22:c.instructions+=13;goto B71ed22;
case 0x71ed26:c.instructions+=12;goto B71ed26;
case 0x71ed2e:c.instructions+=11;goto B71ed2e;
case 0x71ed33:c.instructions+=10;goto B71ed33;
case 0x71ed37:c.instructions+=9;goto B71ed37;
case 0x71ed3c:c.instructions+=8;goto B71ed3c;
case 0x71ed40:c.instructions+=7;goto B71ed40;
case 0x71ed48:c.instructions+=6;goto B71ed48;
case 0x71ed4d:c.instructions+=5;goto B71ed4d;
case 0x71ed51:c.instructions+=4;goto B71ed51;
case 0x71ed53:c.instructions+=3;goto B71ed53;
case 0x71ed56:c.instructions+=2;goto B71ed56;
case 0x71ed58:c.instructions+=1;goto B71ed58;
case 0x71ed5a:goto L71ed5a;
case 0x71ed5b:c.instructions+=3;goto B71ed5b;
case 0x71ed5c:c.instructions+=2;goto B71ed5c;
case 0x71ed5d:c.instructions+=1;goto B71ed5d;
case 0x71ed5e:goto L71ed5e;
case 0x71ed5f:c.instructions+=11;goto B71ed5f;
case 0x71ed61:c.instructions+=10;goto B71ed61;
case 0x71ed62:c.instructions+=9;goto B71ed62;
case 0x71ed63:c.instructions+=8;goto B71ed63;
case 0x71ed66:c.instructions+=7;goto B71ed66;
case 0x71ed6a:c.instructions+=6;goto B71ed6a;
case 0x71ed6f:c.instructions+=5;goto B71ed6f;
case 0x71ed72:c.instructions+=4;goto B71ed72;
case 0x71ed75:c.instructions+=3;goto B71ed75;
case 0x71ed78:c.instructions+=2;goto B71ed78;
case 0x71ed7b:c.instructions+=1;goto B71ed7b;
case 0x71ed7f:goto L71ed7f;
case 0x71ed83:c.instructions+=14;goto B71ed83;
case 0x71ed87:c.instructions+=13;goto B71ed87;
case 0x71ed8b:c.instructions+=12;goto B71ed8b;
case 0x71ed8f:c.instructions+=11;goto B71ed8f;
case 0x71ed94:c.instructions+=10;goto B71ed94;
case 0x71ed98:c.instructions+=9;goto B71ed98;
case 0x71ed9c:c.instructions+=8;goto B71ed9c;
case 0x71eda0:c.instructions+=7;goto B71eda0;
case 0x71eda8:c.instructions+=6;goto B71eda8;
case 0x71edad:c.instructions+=5;goto B71edad;
case 0x71edb1:c.instructions+=4;goto B71edb1;
case 0x71edb4:c.instructions+=3;goto B71edb4;
case 0x71edb6:c.instructions+=2;goto B71edb6;
case 0x71edb7:c.instructions+=1;goto B71edb7;
case 0x71edb9:goto L71edb9;
case 0x71edba:c.instructions+=3;goto B71edba;
case 0x71edbb:c.instructions+=2;goto B71edbb;
case 0x71edbc:c.instructions+=1;goto B71edbc;
case 0x71edbd:goto L71edbd;
case 0x71edbe:c.instructions+=12;goto B71edbe;
case 0x71edc0:c.instructions+=11;goto B71edc0;
case 0x71edc1:c.instructions+=10;goto B71edc1;
case 0x71edc2:c.instructions+=9;goto B71edc2;
case 0x71edc5:c.instructions+=8;goto B71edc5;
case 0x71edc9:c.instructions+=7;goto B71edc9;
case 0x71edce:c.instructions+=6;goto B71edce;
case 0x71edd1:c.instructions+=5;goto B71edd1;
case 0x71edd4:c.instructions+=4;goto B71edd4;
case 0x71edd7:c.instructions+=3;goto B71edd7;
case 0x71edda:c.instructions+=2;goto B71edda;
case 0x71eddd:c.instructions+=1;goto B71eddd;
case 0x71ede1:goto L71ede1;
case 0x71ede5:c.instructions+=13;goto B71ede5;
case 0x71ede9:c.instructions+=12;goto B71ede9;
case 0x71eded:c.instructions+=11;goto B71eded;
case 0x71edf2:c.instructions+=10;goto B71edf2;
case 0x71edf6:c.instructions+=9;goto B71edf6;
case 0x71edfa:c.instructions+=8;goto B71edfa;
case 0x71edfe:c.instructions+=7;goto B71edfe;
case 0x71ee06:c.instructions+=6;goto B71ee06;
case 0x71ee0b:c.instructions+=5;goto B71ee0b;
case 0x71ee0f:c.instructions+=4;goto B71ee0f;
case 0x71ee11:c.instructions+=3;goto B71ee11;
case 0x71ee13:c.instructions+=2;goto B71ee13;
case 0x71ee14:c.instructions+=1;goto B71ee14;
case 0x71ee16:goto L71ee16;
case 0x71ee17:c.instructions+=3;goto B71ee17;
case 0x71ee18:c.instructions+=2;goto B71ee18;
case 0x71ee19:c.instructions+=1;goto B71ee19;
case 0x71ee1a:goto L71ee1a;
case 0x71ee1b:c.instructions+=5;goto B71ee1b;
case 0x71ee1d:c.instructions+=4;goto B71ee1d;
case 0x71ee20:c.instructions+=3;goto B71ee20;
case 0x71ee23:c.instructions+=2;goto B71ee23;
case 0x71ee25:c.instructions+=1;goto B71ee25;
case 0x71ee27:goto L71ee27;
case 0x71ee29:c.instructions+=2;goto B71ee29;
case 0x71ee2c:c.instructions+=1;goto B71ee2c;
case 0x71ee2e:goto L71ee2e;
case 0x71ee31:c.instructions+=1;goto B71ee31;
case 0x71ee33:goto L71ee33;
case 0x71ee36:c.instructions+=10;goto B71ee36;
case 0x71ee39:c.instructions+=9;goto B71ee39;
case 0x71ee3e:c.instructions+=8;goto B71ee3e;
case 0x71ee3f:c.instructions+=7;goto B71ee3f;
case 0x71ee41:c.instructions+=6;goto B71ee41;
case 0x71ee43:c.instructions+=5;goto B71ee43;
case 0x71ee45:c.instructions+=4;goto B71ee45;
case 0x71ee48:c.instructions+=3;goto B71ee48;
case 0x71ee4b:c.instructions+=2;goto B71ee4b;
case 0x71ee4c:c.instructions+=1;goto B71ee4c;
case 0x71ee51:goto L71ee51;
case 0x71ee54:c.instructions+=2;goto B71ee54;
case 0x71ee55:c.instructions+=1;goto B71ee55;
case 0x71ee56:goto L71ee56;
case 0x71ee59:c.instructions+=2;goto B71ee59;
case 0x71ee5b:c.instructions+=1;goto B71ee5b;
case 0x71ee5d:goto L71ee5d;
case 0x71ee60:c.instructions+=10;goto B71ee60;
case 0x71ee63:c.instructions+=9;goto B71ee63;
case 0x71ee68:c.instructions+=8;goto B71ee68;
case 0x71ee69:c.instructions+=7;goto B71ee69;
case 0x71ee6b:c.instructions+=6;goto B71ee6b;
case 0x71ee6d:c.instructions+=5;goto B71ee6d;
case 0x71ee6e:c.instructions+=4;goto B71ee6e;
case 0x71ee6f:c.instructions+=3;goto B71ee6f;
case 0x71ee72:c.instructions+=2;goto B71ee72;
case 0x71ee73:c.instructions+=1;goto B71ee73;
case 0x71ee78:goto L71ee78;
case 0x71ee7a:goto L71ee7a;
case 0x71ee7b:c.instructions+=3;goto B71ee7b;
case 0x71ee7e:c.instructions+=2;goto B71ee7e;
case 0x71ee80:c.instructions+=1;goto B71ee80;
case 0x71ee82:goto L71ee82;
case 0x71ee85:c.instructions+=9;goto B71ee85;
case 0x71ee88:c.instructions+=8;goto B71ee88;
case 0x71ee8d:c.instructions+=7;goto B71ee8d;
case 0x71ee8f:c.instructions+=6;goto B71ee8f;
case 0x71ee90:c.instructions+=5;goto B71ee90;
case 0x71ee93:c.instructions+=4;goto B71ee93;
case 0x71ee96:c.instructions+=3;goto B71ee96;
case 0x71ee98:c.instructions+=2;goto B71ee98;
case 0x71ee99:c.instructions+=1;goto B71ee99;
case 0x71ee9b:goto L71ee9b;
case 0x71ee9e:c.instructions+=2;goto B71ee9e;
case 0x71eea0:c.instructions+=1;goto B71eea0;
case 0x71eea2:goto L71eea2;
case 0x71eea5:c.instructions+=7;goto B71eea5;
case 0x71eea8:c.instructions+=6;goto B71eea8;
case 0x71eead:c.instructions+=5;goto B71eead;
case 0x71eeaf:c.instructions+=4;goto B71eeaf;
case 0x71eeb0:c.instructions+=3;goto B71eeb0;
case 0x71eeb3:c.instructions+=2;goto B71eeb3;
case 0x71eeb6:c.instructions+=1;goto B71eeb6;
case 0x71eeb8:goto L71eeb8;
case 0x71eeb9:c.instructions+=4;goto B71eeb9;
case 0x71eeba:c.instructions+=3;goto B71eeba;
case 0x71eebd:c.instructions+=2;goto B71eebd;
case 0x71eebe:c.instructions+=1;goto B71eebe;
case 0x71eec3:goto L71eec3;
case 0x71eec6:goto L71eec6;
case 0x71eec7:c.instructions+=2;goto B71eec7;
case 0x71eec8:c.instructions+=1;goto B71eec8;
case 0x71eec9:goto L71eec9;
case 0x71eeca:c.instructions+=13;goto B71eeca;
case 0x71eecc:c.instructions+=12;goto B71eecc;
case 0x71eed2:c.instructions+=11;goto B71eed2;
case 0x71eed5:c.instructions+=10;goto B71eed5;
case 0x71eedb:c.instructions+=9;goto B71eedb;
case 0x71eedd:c.instructions+=8;goto B71eedd;
case 0x71eedf:c.instructions+=7;goto B71eedf;
case 0x71eee1:c.instructions+=6;goto B71eee1;
case 0x71eee4:c.instructions+=5;goto B71eee4;
case 0x71eee5:c.instructions+=4;goto B71eee5;
case 0x71eee8:c.instructions+=3;goto B71eee8;
case 0x71eeeb:c.instructions+=2;goto B71eeeb;
case 0x71eeec:c.instructions+=1;goto B71eeec;
case 0x71eef1:goto L71eef1;
case 0x71eef4:c.instructions+=8;goto B71eef4;
case 0x71eefa:c.instructions+=7;goto B71eefa;
case 0x71eefc:c.instructions+=6;goto B71eefc;
case 0x71eefe:c.instructions+=5;goto B71eefe;
case 0x71ef00:c.instructions+=4;goto B71ef00;
case 0x71ef02:c.instructions+=3;goto B71ef02;
case 0x71ef05:c.instructions+=2;goto B71ef05;
case 0x71ef06:c.instructions+=1;goto B71ef06;
case 0x71ef0b:goto L71ef0b;
case 0x71ef0e:c.instructions+=2;goto B71ef0e;
case 0x71ef0f:c.instructions+=1;goto B71ef0f;
case 0x71ef10:goto L71ef10;
case 0x71ef11:c.instructions+=6;goto B71ef11;
case 0x71ef13:c.instructions+=5;goto B71ef13;
case 0x71ef19:c.instructions+=4;goto B71ef19;
case 0x71ef1c:c.instructions+=3;goto B71ef1c;
case 0x71ef1f:c.instructions+=2;goto B71ef1f;
case 0x71ef21:c.instructions+=1;goto B71ef21;
case 0x71ef23:goto L71ef23;
case 0x71ef25:c.instructions+=2;goto B71ef25;
case 0x71ef28:c.instructions+=1;goto B71ef28;
case 0x71ef2a:goto L71ef2a;
case 0x71ef2c:c.instructions+=1;goto B71ef2c;
case 0x71ef32:goto L71ef32;
case 0x71ef36:c.instructions+=2;goto B71ef36;
case 0x71ef37:c.instructions+=1;goto B71ef37;
case 0x71ef3d:goto L71ef3d;
case 0x71ef40:c.instructions+=3;goto B71ef40;
case 0x71ef42:c.instructions+=2;goto B71ef42;
case 0x71ef43:c.instructions+=1;goto B71ef43;
case 0x71ef45:goto L71ef45;
case 0x71ef48:c.instructions+=11;goto B71ef48;
case 0x71ef4b:c.instructions+=10;goto B71ef4b;
case 0x71ef50:c.instructions+=9;goto B71ef50;
case 0x71ef51:c.instructions+=8;goto B71ef51;
case 0x71ef52:c.instructions+=7;goto B71ef52;
case 0x71ef53:c.instructions+=6;goto B71ef53;
case 0x71ef55:c.instructions+=5;goto B71ef55;
case 0x71ef58:c.instructions+=4;goto B71ef58;
case 0x71ef5e:c.instructions+=3;goto B71ef5e;
case 0x71ef5f:c.instructions+=2;goto B71ef5f;
case 0x71ef60:c.instructions+=1;goto B71ef60;
case 0x71ef65:goto L71ef65;
case 0x71ef68:c.instructions+=1;goto B71ef68;
case 0x71ef6a:goto L71ef6a;
case 0x71ef6d:c.instructions+=2;goto B71ef6d;
case 0x71ef6f:c.instructions+=1;goto B71ef6f;
case 0x71ef71:goto L71ef71;
case 0x71ef74:c.instructions+=11;goto B71ef74;
case 0x71ef77:c.instructions+=10;goto B71ef77;
case 0x71ef7c:c.instructions+=9;goto B71ef7c;
case 0x71ef7d:c.instructions+=8;goto B71ef7d;
case 0x71ef7e:c.instructions+=7;goto B71ef7e;
case 0x71ef7f:c.instructions+=6;goto B71ef7f;
case 0x71ef80:c.instructions+=5;goto B71ef80;
case 0x71ef81:c.instructions+=4;goto B71ef81;
case 0x71ef87:c.instructions+=3;goto B71ef87;
case 0x71ef88:c.instructions+=2;goto B71ef88;
case 0x71ef89:c.instructions+=1;goto B71ef89;
case 0x71ef8e:goto L71ef8e;
case 0x71ef90:goto L71ef90;
case 0x71ef91:c.instructions+=3;goto B71ef91;
case 0x71ef94:c.instructions+=2;goto B71ef94;
case 0x71ef96:c.instructions+=1;goto B71ef96;
case 0x71ef98:goto L71ef98;
case 0x71ef9b:c.instructions+=9;goto B71ef9b;
case 0x71ef9e:c.instructions+=8;goto B71ef9e;
case 0x71efa3:c.instructions+=7;goto B71efa3;
case 0x71efa5:c.instructions+=6;goto B71efa5;
case 0x71efa6:c.instructions+=5;goto B71efa6;
case 0x71efa9:c.instructions+=4;goto B71efa9;
case 0x71efac:c.instructions+=3;goto B71efac;
case 0x71efae:c.instructions+=2;goto B71efae;
case 0x71efaf:c.instructions+=1;goto B71efaf;
case 0x71efb1:goto L71efb1;
case 0x71efb4:c.instructions+=2;goto B71efb4;
case 0x71efb6:c.instructions+=1;goto B71efb6;
case 0x71efb8:goto L71efb8;
case 0x71efbb:c.instructions+=7;goto B71efbb;
case 0x71efbe:c.instructions+=6;goto B71efbe;
case 0x71efc3:c.instructions+=5;goto B71efc3;
case 0x71efc5:c.instructions+=4;goto B71efc5;
case 0x71efc6:c.instructions+=3;goto B71efc6;
case 0x71efc9:c.instructions+=2;goto B71efc9;
case 0x71efcc:c.instructions+=1;goto B71efcc;
case 0x71efce:goto L71efce;
case 0x71efcf:c.instructions+=5;goto B71efcf;
case 0x71efd0:c.instructions+=4;goto B71efd0;
case 0x71efd6:c.instructions+=3;goto B71efd6;
case 0x71efd7:c.instructions+=2;goto B71efd7;
case 0x71efd8:c.instructions+=1;goto B71efd8;
case 0x71efdd:goto L71efdd;
case 0x71efe0:goto L71efe0;
case 0x71efe1:goto L71efe1;
case 0x71efe2:c.instructions+=4;goto B71efe2;
case 0x71efe5:c.instructions+=3;goto B71efe5;
case 0x71efeb:c.instructions+=2;goto B71efeb;
case 0x71efec:c.instructions+=1;goto B71efec;
case 0x71eff1:goto L71eff1;
case 0x71eff4:c.instructions+=1;goto B71eff4;
case 0x71eff9:goto L71eff9;
case 0x71effc:c.instructions+=1;goto B71effc;
case 0x71effe:goto L71effe;
default:missing_instruction(c.pc);}
B71e000:L71e000:{c.instructions+=81;NFSU2_TR(0x71e000);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xfb15ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71e006:{NFSU2_TR(0x71e006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e009:{NFSU2_TR(0x71e009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B71e00b:{NFSU2_TR(0x71e00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71e00e:{NFSU2_TR(0x71e00e);
__builtin_memmove((R+28),(R+4),4);
}
B71e010:{NFSU2_TR(0x71e010);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x8e3aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71e016:{NFSU2_TR(0x71e016);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xd4dbull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71e01c:{NFSU2_TR(0x71e01c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71e01f:{NFSU2_TR(0x71e01f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71e022:{NFSU2_TR(0x71e022);
w4(R+4,u32(0-u32(r4(R+4))));
}
B71e024:{NFSU2_TR(0x71e024);
__builtin_memmove((R+8),(R+24),4);
}
B71e026:{NFSU2_TR(0x71e026);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71e029:{NFSU2_TR(0x71e029);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B71e02b:{NFSU2_TR(0x71e02b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B71e02d:{NFSU2_TR(0x71e02d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71e033:{NFSU2_TR(0x71e033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e036:{NFSU2_TR(0x71e036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e039:{NFSU2_TR(0x71e039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e03c:{NFSU2_TR(0x71e03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B71e03f:{NFSU2_TR(0x71e03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e042:{NFSU2_TR(0x71e042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e045:{NFSU2_TR(0x71e045);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B71e04b:{NFSU2_TR(0x71e04b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71e04d:{NFSU2_TR(0x71e04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e050:{NFSU2_TR(0x71e050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e053:{NFSU2_TR(0x71e053);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xb505ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B71e059:{NFSU2_TR(0x71e059);
__builtin_memmove((R+24),(R+12),4);
}
B71e05b:{NFSU2_TR(0x71e05b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x61f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71e061:{NFSU2_TR(0x71e061);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71e064:{NFSU2_TR(0x71e064);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xec83ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B71e06a:{NFSU2_TR(0x71e06a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71e06d:{NFSU2_TR(0x71e06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e070:{NFSU2_TR(0x71e070);
__builtin_memmove((R+12),(R+4),4);
}
B71e072:{NFSU2_TR(0x71e072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B71e075:{NFSU2_TR(0x71e075);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71e078:{NFSU2_TR(0x71e078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e07b:{NFSU2_TR(0x71e07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71e07e:{NFSU2_TR(0x71e07e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B71e080:{NFSU2_TR(0x71e080);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71e083:{NFSU2_TR(0x71e083);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B71e087:{NFSU2_TR(0x71e087);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71e08a:{NFSU2_TR(0x71e08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e08d:{NFSU2_TR(0x71e08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e090:{NFSU2_TR(0x71e090);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B71e094:{NFSU2_TR(0x71e094);
__builtin_memmove((R+4),(R+28),4);
}
B71e096:{NFSU2_TR(0x71e096);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B71e098:{NFSU2_TR(0x71e098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e09b:{NFSU2_TR(0x71e09b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B71e09d:{NFSU2_TR(0x71e09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71e0a0:{NFSU2_TR(0x71e0a0);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B71e0a2:{NFSU2_TR(0x71e0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e0a5:{NFSU2_TR(0x71e0a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71e0a8:{NFSU2_TR(0x71e0a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71e0ab:{NFSU2_TR(0x71e0ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0af:{NFSU2_TR(0x71e0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e0b2:{NFSU2_TR(0x71e0b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0b6:{NFSU2_TR(0x71e0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71e0b9:{NFSU2_TR(0x71e0b9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B71e0bb:{NFSU2_TR(0x71e0bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71e0be:{NFSU2_TR(0x71e0be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B71e0c1:{NFSU2_TR(0x71e0c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0c5:{NFSU2_TR(0x71e0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e0c8:{NFSU2_TR(0x71e0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71e0cb:{NFSU2_TR(0x71e0cb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B71e0cd:{NFSU2_TR(0x71e0cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B71e0d0:{NFSU2_TR(0x71e0d0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71e0d3:{NFSU2_TR(0x71e0d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0d7:{NFSU2_TR(0x71e0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e0da:{NFSU2_TR(0x71e0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71e0dd:{NFSU2_TR(0x71e0dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B71e0e0:{NFSU2_TR(0x71e0e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B71e0e3:{NFSU2_TR(0x71e0e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B71e0e6:{NFSU2_TR(0x71e0e6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B71e0e8:{NFSU2_TR(0x71e0e8);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71e0eb:{NFSU2_TR(0x71e0eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0ef:{NFSU2_TR(0x71e0ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0f3:{NFSU2_TR(0x71e0f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B71e0f6:{NFSU2_TR(0x71e0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71e0f9:{NFSU2_TR(0x71e0f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e0fd:{NFSU2_TR(0x71e0fd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B71e0ff:{NFSU2_TR(0x71e0ff);
{goto L71e120;}
}
B71e101:L71e101:{c.instructions+=8;NFSU2_TR(0x71e101);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e105:{NFSU2_TR(0x71e105);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e109:{NFSU2_TR(0x71e109);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B71e10c:{NFSU2_TR(0x71e10c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e110:{NFSU2_TR(0x71e110);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e114:{NFSU2_TR(0x71e114);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e118:{NFSU2_TR(0x71e118);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e11c:{NFSU2_TR(0x71e11c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71e120:L71e120:{c.instructions+=6;NFSU2_TR(0x71e120);
w1(R+512,carry<u32>(r4(R+12),u32(0x4ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B71e123:{NFSU2_TR(0x71e123);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B71e124:{NFSU2_TR(0x71e124);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B71e125:{NFSU2_TR(0x71e125);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B71e128:{NFSU2_TR(0x71e128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71e12b:{NFSU2_TR(0x71e12b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x71dfdcu,71d);}
}
B71e131:L71e131:{c.instructions+=5;NFSU2_TR(0x71e131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e132:{NFSU2_TR(0x71e132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e133:{NFSU2_TR(0x71e133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e134:{NFSU2_TR(0x71e134);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71e135:{NFSU2_TR(0x71e135);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e136:L71e136:{c.instructions+=17;NFSU2_TR(0x71e136);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e137:{NFSU2_TR(0x71e137);
__builtin_memmove((R+20),(R+16),4);
}
B71e139:{NFSU2_TR(0x71e139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e13c:{NFSU2_TR(0x71e13c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B71e13f:{NFSU2_TR(0x71e13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e142:{NFSU2_TR(0x71e142);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B71e145:{NFSU2_TR(0x71e145);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B71e148:{NFSU2_TR(0x71e148);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e14b:{NFSU2_TR(0x71e14b);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B71e14e:{NFSU2_TR(0x71e14e);
__builtin_memmove((R+8),(R+0),2);
}
B71e151:{NFSU2_TR(0x71e151);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e152:{NFSU2_TR(0x71e152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e155:{NFSU2_TR(0x71e155);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e157:{NFSU2_TR(0x71e157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71e158:{NFSU2_TR(0x71e158);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B71e15b:{NFSU2_TR(0x71e15b);
__builtin_memmove((R+8),(R+0),2);
}
B71e15e:{NFSU2_TR(0x71e15e);
__builtin_memmove((R+0),(R+8),4);
}
B71e160:L71e160:{c.instructions+=1;NFSU2_TR(0x71e160);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L71e162;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e160u);}goto L71e160;}
}
B71e162:L71e162:{c.instructions+=3;NFSU2_TR(0x71e162);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e163:{NFSU2_TR(0x71e163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e164:{NFSU2_TR(0x71e164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e165:L71e165:{c.instructions+=15;NFSU2_TR(0x71e165);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e166:{NFSU2_TR(0x71e166);
__builtin_memmove((R+20),(R+16),4);
}
B71e168:{NFSU2_TR(0x71e168);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e169:{NFSU2_TR(0x71e169);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e16a:{NFSU2_TR(0x71e16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e16d:{NFSU2_TR(0x71e16d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e170:{NFSU2_TR(0x71e170);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e174:{NFSU2_TR(0x71e174);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71e178:{NFSU2_TR(0x71e178);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71e17c:{NFSU2_TR(0x71e17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e17f:{NFSU2_TR(0x71e17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e182:{NFSU2_TR(0x71e182);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B71e183:{NFSU2_TR(0x71e183);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e186:{NFSU2_TR(0x71e186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e189:{NFSU2_TR(0x71e189);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e18c:L71e18c:{c.instructions+=50;NFSU2_TR(0x71e18c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e18f:{NFSU2_TR(0x71e18f);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e192:{NFSU2_TR(0x71e192);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e195:{NFSU2_TR(0x71e195);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e198:{NFSU2_TR(0x71e198);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x18ull))));
}
B71e19c:{NFSU2_TR(0x71e19c);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e19f:{NFSU2_TR(0x71e19f);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e1a2:{NFSU2_TR(0x71e1a2);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4470))));
}
B71e1a5:{NFSU2_TR(0x71e1a5);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e1a8:{NFSU2_TR(0x71e1a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71e1ac:{NFSU2_TR(0x71e1ac);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e1af:{NFSU2_TR(0x71e1af);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e1b2:{NFSU2_TR(0x71e1b2);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e1b5:{NFSU2_TR(0x71e1b5);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e1b8:{NFSU2_TR(0x71e1b8);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e1bc:{NFSU2_TR(0x71e1bc);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e1bf:{NFSU2_TR(0x71e1bf);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e1c2:{NFSU2_TR(0x71e1c2);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71e1c5:{NFSU2_TR(0x71e1c5);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e1c8:{NFSU2_TR(0x71e1c8);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>(gp(0x8177c0))));}
}
B71e1cf:{NFSU2_TR(0x71e1cf);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e1d3:{NFSU2_TR(0x71e1d3);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e1d6:{NFSU2_TR(0x71e1d6);
u8 U[4];
w4(U+0,u32(r8(R+4400)));
s4(u32(r4(R+28)),r4(U+0));
}
B71e1d9:{NFSU2_TR(0x71e1d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71e1dd:{NFSU2_TR(0x71e1dd);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e1e0:{NFSU2_TR(0x71e1e0);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e1e3:{NFSU2_TR(0x71e1e3);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e1e6:{NFSU2_TR(0x71e1e6);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x18ull))));
}
B71e1ea:{NFSU2_TR(0x71e1ea);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e1ed:{NFSU2_TR(0x71e1ed);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e1f0:{NFSU2_TR(0x71e1f0);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4470))));
}
B71e1f3:{NFSU2_TR(0x71e1f3);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e1f6:{NFSU2_TR(0x71e1f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71e1fa:{NFSU2_TR(0x71e1fa);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e1fd:{NFSU2_TR(0x71e1fd);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e200:{NFSU2_TR(0x71e200);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e203:{NFSU2_TR(0x71e203);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e206:{NFSU2_TR(0x71e206);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e20a:{NFSU2_TR(0x71e20a);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e20d:{NFSU2_TR(0x71e20d);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e210:{NFSU2_TR(0x71e210);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71e213:{NFSU2_TR(0x71e213);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e216:{NFSU2_TR(0x71e216);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>(gp(0x8177c0))));}
}
B71e21d:{NFSU2_TR(0x71e21d);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e221:{NFSU2_TR(0x71e221);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e224:{NFSU2_TR(0x71e224);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B71e228:{NFSU2_TR(0x71e228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71e22b:{NFSU2_TR(0x71e22b);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e22d:{NFSU2_TR(0x71e22d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e22e:{NFSU2_TR(0x71e22e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e18cu);}goto L71e18c;}}
}
B71e234:L71e234:{c.instructions+=4;NFSU2_TR(0x71e234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e235:{NFSU2_TR(0x71e235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e236:{NFSU2_TR(0x71e236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e237:{NFSU2_TR(0x71e237);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e238:L71e238:{c.instructions+=16;NFSU2_TR(0x71e238);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e239:{NFSU2_TR(0x71e239);
__builtin_memmove((R+20),(R+16),4);
}
B71e23b:{NFSU2_TR(0x71e23b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e23c:{NFSU2_TR(0x71e23c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e23d:{NFSU2_TR(0x71e23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e240:{NFSU2_TR(0x71e240);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e243:{NFSU2_TR(0x71e243);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e247:{NFSU2_TR(0x71e247);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71e24b:{NFSU2_TR(0x71e24b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71e24f:{NFSU2_TR(0x71e24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e252:{NFSU2_TR(0x71e252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e255:{NFSU2_TR(0x71e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e258:{NFSU2_TR(0x71e258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B71e25b:{NFSU2_TR(0x71e25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e25e:{NFSU2_TR(0x71e25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e261:{NFSU2_TR(0x71e261);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e264:L71e264:{c.instructions+=44;NFSU2_TR(0x71e264);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e267:{NFSU2_TR(0x71e267);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e26a:{NFSU2_TR(0x71e26a);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e26d:{NFSU2_TR(0x71e26d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e26f:{NFSU2_TR(0x71e26f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71e273:{NFSU2_TR(0x71e273);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e276:{NFSU2_TR(0x71e276);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4470))));
}
B71e279:{NFSU2_TR(0x71e279);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71e27c:{NFSU2_TR(0x71e27c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71e27f:{NFSU2_TR(0x71e27f);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e282:{NFSU2_TR(0x71e282);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4390))));
}
B71e285:{NFSU2_TR(0x71e285);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71e288:{NFSU2_TR(0x71e288);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71e28c:{NFSU2_TR(0x71e28c);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e28f:{NFSU2_TR(0x71e28f);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71e292:{NFSU2_TR(0x71e292);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71e295:{NFSU2_TR(0x71e295);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>(gp(0x8177c0))));}
}
B71e29c:{NFSU2_TR(0x71e29c);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e2a0:{NFSU2_TR(0x71e2a0);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e2a3:{NFSU2_TR(0x71e2a3);
u8 U[4];
w4(U+0,u32(r8(R+4400)));
s4(u32(r4(R+28)),r4(U+0));
}
B71e2a6:{NFSU2_TR(0x71e2a6);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71e2a8:{NFSU2_TR(0x71e2a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71e2ac:{NFSU2_TR(0x71e2ac);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e2af:{NFSU2_TR(0x71e2af);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e2b2:{NFSU2_TR(0x71e2b2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e2b4:{NFSU2_TR(0x71e2b4);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4416),(U+12),8);
}
B71e2b9:{NFSU2_TR(0x71e2b9);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e2bc:{NFSU2_TR(0x71e2bc);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4470))));
}
B71e2bf:{NFSU2_TR(0x71e2bf);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71e2c2:{NFSU2_TR(0x71e2c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71e2c6:{NFSU2_TR(0x71e2c6);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e2c9:{NFSU2_TR(0x71e2c9);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4390))));
}
B71e2cc:{NFSU2_TR(0x71e2cc);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71e2cf:{NFSU2_TR(0x71e2cf);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4416),(U+12),8);
}
B71e2d4:{NFSU2_TR(0x71e2d4);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e2d7:{NFSU2_TR(0x71e2d7);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71e2da:{NFSU2_TR(0x71e2da);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71e2dd:{NFSU2_TR(0x71e2dd);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>(gp(0x8177c0))));}
}
B71e2e4:{NFSU2_TR(0x71e2e4);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e2e8:{NFSU2_TR(0x71e2e8);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e2eb:{NFSU2_TR(0x71e2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B71e2ef:{NFSU2_TR(0x71e2ef);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e2f1:{NFSU2_TR(0x71e2f1);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e2f2:{NFSU2_TR(0x71e2f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e264u);}goto L71e264;}}
}
B71e2f8:L71e2f8:{c.instructions+=4;NFSU2_TR(0x71e2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e2f9:{NFSU2_TR(0x71e2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e2fa:{NFSU2_TR(0x71e2fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e2fb:{NFSU2_TR(0x71e2fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e2fc:L71e2fc:{c.instructions+=15;NFSU2_TR(0x71e2fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e2fd:{NFSU2_TR(0x71e2fd);
__builtin_memmove((R+20),(R+16),4);
}
B71e2ff:{NFSU2_TR(0x71e2ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e300:{NFSU2_TR(0x71e300);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e301:{NFSU2_TR(0x71e301);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e304:{NFSU2_TR(0x71e304);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e307:{NFSU2_TR(0x71e307);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e30b:{NFSU2_TR(0x71e30b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71e30f:{NFSU2_TR(0x71e30f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71e313:{NFSU2_TR(0x71e313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e316:{NFSU2_TR(0x71e316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e319:{NFSU2_TR(0x71e319);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B71e31a:{NFSU2_TR(0x71e31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e31d:{NFSU2_TR(0x71e31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e320:{NFSU2_TR(0x71e320);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e323:L71e323:{c.instructions+=50;NFSU2_TR(0x71e323);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e326:{NFSU2_TR(0x71e326);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e329:{NFSU2_TR(0x71e329);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e32c:{NFSU2_TR(0x71e32c);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e32f:{NFSU2_TR(0x71e32f);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e333:{NFSU2_TR(0x71e333);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e336:{NFSU2_TR(0x71e336);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e339:{NFSU2_TR(0x71e339);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e33c:{NFSU2_TR(0x71e33c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e33f:{NFSU2_TR(0x71e33f);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e343:{NFSU2_TR(0x71e343);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e346:{NFSU2_TR(0x71e346);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e349:{NFSU2_TR(0x71e349);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71e34c:{NFSU2_TR(0x71e34c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e34f:{NFSU2_TR(0x71e34f);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e353:{NFSU2_TR(0x71e353);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e356:{NFSU2_TR(0x71e356);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e359:{NFSU2_TR(0x71e359);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4470))));
}
B71e35c:{NFSU2_TR(0x71e35c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e35f:{NFSU2_TR(0x71e35f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e366:{NFSU2_TR(0x71e366);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e36a:{NFSU2_TR(0x71e36a);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e36d:{NFSU2_TR(0x71e36d);
u8 U[4];
w4(U+0,u32(r8(R+4400)));
s4(u32(r4(R+28)),r4(U+0));
}
B71e370:{NFSU2_TR(0x71e370);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71e374:{NFSU2_TR(0x71e374);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e377:{NFSU2_TR(0x71e377);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e37a:{NFSU2_TR(0x71e37a);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e37d:{NFSU2_TR(0x71e37d);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e381:{NFSU2_TR(0x71e381);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e384:{NFSU2_TR(0x71e384);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e387:{NFSU2_TR(0x71e387);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e38a:{NFSU2_TR(0x71e38a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e38d:{NFSU2_TR(0x71e38d);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e391:{NFSU2_TR(0x71e391);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e394:{NFSU2_TR(0x71e394);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e397:{NFSU2_TR(0x71e397);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71e39a:{NFSU2_TR(0x71e39a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e39d:{NFSU2_TR(0x71e39d);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e3a1:{NFSU2_TR(0x71e3a1);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e3a4:{NFSU2_TR(0x71e3a4);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e3a7:{NFSU2_TR(0x71e3a7);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4470))));
}
B71e3aa:{NFSU2_TR(0x71e3aa);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e3ad:{NFSU2_TR(0x71e3ad);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e3b4:{NFSU2_TR(0x71e3b4);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e3b8:{NFSU2_TR(0x71e3b8);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e3bb:{NFSU2_TR(0x71e3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B71e3bf:{NFSU2_TR(0x71e3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71e3c2:{NFSU2_TR(0x71e3c2);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e3c4:{NFSU2_TR(0x71e3c4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e3c5:{NFSU2_TR(0x71e3c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e323u);}goto L71e323;}}
}
B71e3cb:L71e3cb:{c.instructions+=4;NFSU2_TR(0x71e3cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e3cc:{NFSU2_TR(0x71e3cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e3cd:{NFSU2_TR(0x71e3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e3ce:{NFSU2_TR(0x71e3ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e3cf:L71e3cf:{c.instructions+=16;NFSU2_TR(0x71e3cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e3d0:{NFSU2_TR(0x71e3d0);
__builtin_memmove((R+20),(R+16),4);
}
B71e3d2:{NFSU2_TR(0x71e3d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e3d3:{NFSU2_TR(0x71e3d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e3d4:{NFSU2_TR(0x71e3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e3d7:{NFSU2_TR(0x71e3d7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e3da:{NFSU2_TR(0x71e3da);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e3de:{NFSU2_TR(0x71e3de);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71e3e2:{NFSU2_TR(0x71e3e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71e3e6:{NFSU2_TR(0x71e3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e3e9:{NFSU2_TR(0x71e3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e3ec:{NFSU2_TR(0x71e3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e3ef:{NFSU2_TR(0x71e3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B71e3f2:{NFSU2_TR(0x71e3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e3f5:{NFSU2_TR(0x71e3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e3f8:{NFSU2_TR(0x71e3f8);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e3fb:L71e3fb:{c.instructions+=44;NFSU2_TR(0x71e3fb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e3fe:{NFSU2_TR(0x71e3fe);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e401:{NFSU2_TR(0x71e401);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e404:{NFSU2_TR(0x71e404);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71e408:{NFSU2_TR(0x71e408);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e40b:{NFSU2_TR(0x71e40b);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4390))));
}
B71e40e:{NFSU2_TR(0x71e40e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e411:{NFSU2_TR(0x71e411);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71e415:{NFSU2_TR(0x71e415);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e418:{NFSU2_TR(0x71e418);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71e41b:{NFSU2_TR(0x71e41b);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e41e:{NFSU2_TR(0x71e41e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e420:{NFSU2_TR(0x71e420);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71e424:{NFSU2_TR(0x71e424);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e427:{NFSU2_TR(0x71e427);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4470))));
}
B71e42a:{NFSU2_TR(0x71e42a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e42d:{NFSU2_TR(0x71e42d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e434:{NFSU2_TR(0x71e434);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e438:{NFSU2_TR(0x71e438);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e43b:{NFSU2_TR(0x71e43b);
u8 U[4];
w4(U+0,u32(r8(R+4400)));
s4(u32(r4(R+28)),r4(U+0));
}
B71e43e:{NFSU2_TR(0x71e43e);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71e440:{NFSU2_TR(0x71e440);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71e444:{NFSU2_TR(0x71e444);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e447:{NFSU2_TR(0x71e447);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e44a:{NFSU2_TR(0x71e44a);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4416),(U+12),8);
}
B71e44f:{NFSU2_TR(0x71e44f);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e452:{NFSU2_TR(0x71e452);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4390))));
}
B71e455:{NFSU2_TR(0x71e455);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e458:{NFSU2_TR(0x71e458);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4416),(U+12),8);
}
B71e45d:{NFSU2_TR(0x71e45d);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e460:{NFSU2_TR(0x71e460);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71e463:{NFSU2_TR(0x71e463);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e466:{NFSU2_TR(0x71e466);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e468:{NFSU2_TR(0x71e468);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4416),(U+12),8);
}
B71e46d:{NFSU2_TR(0x71e46d);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e470:{NFSU2_TR(0x71e470);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4464))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4466))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4468))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4470))));
}
B71e473:{NFSU2_TR(0x71e473);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e476:{NFSU2_TR(0x71e476);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e47d:{NFSU2_TR(0x71e47d);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e481:{NFSU2_TR(0x71e481);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e484:{NFSU2_TR(0x71e484);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B71e488:{NFSU2_TR(0x71e488);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e48a:{NFSU2_TR(0x71e48a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e48b:{NFSU2_TR(0x71e48b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e3fbu);}goto L71e3fb;}}
}
B71e491:L71e491:{c.instructions+=4;NFSU2_TR(0x71e491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e492:{NFSU2_TR(0x71e492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e493:{NFSU2_TR(0x71e493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e494:{NFSU2_TR(0x71e494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e495:L71e495:{c.instructions+=12;NFSU2_TR(0x71e495);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e496:{NFSU2_TR(0x71e496);
__builtin_memmove((R+20),(R+16),4);
}
B71e498:{NFSU2_TR(0x71e498);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e499:{NFSU2_TR(0x71e499);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e49a:{NFSU2_TR(0x71e49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e49d:{NFSU2_TR(0x71e49d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e4a0:{NFSU2_TR(0x71e4a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e4a4:{NFSU2_TR(0x71e4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e4a7:{NFSU2_TR(0x71e4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e4aa:{NFSU2_TR(0x71e4aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e4ad:{NFSU2_TR(0x71e4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e4b0:{NFSU2_TR(0x71e4b0);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e4b3:L71e4b3:{c.instructions+=30;NFSU2_TR(0x71e4b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e4b6:{NFSU2_TR(0x71e4b6);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e4b9:{NFSU2_TR(0x71e4b9);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e4bc:{NFSU2_TR(0x71e4bc);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e4bf:{NFSU2_TR(0x71e4bf);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e4c3:{NFSU2_TR(0x71e4c3);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e4c6:{NFSU2_TR(0x71e4c6);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e4c9:{NFSU2_TR(0x71e4c9);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e4cc:{NFSU2_TR(0x71e4cc);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e4cf:{NFSU2_TR(0x71e4cf);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e4d6:{NFSU2_TR(0x71e4d6);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e4da:{NFSU2_TR(0x71e4da);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e4dd:{NFSU2_TR(0x71e4dd);
u8 U[4];
w4(U+0,u32(r8(R+4400)));
s4(u32(r4(R+28)),r4(U+0));
}
B71e4e0:{NFSU2_TR(0x71e4e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71e4e4:{NFSU2_TR(0x71e4e4);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e4e7:{NFSU2_TR(0x71e4e7);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e4ea:{NFSU2_TR(0x71e4ea);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e4ed:{NFSU2_TR(0x71e4ed);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x8ull))));
}
B71e4f1:{NFSU2_TR(0x71e4f1);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e4f4:{NFSU2_TR(0x71e4f4);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e4f7:{NFSU2_TR(0x71e4f7);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e4fa:{NFSU2_TR(0x71e4fa);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e4fd:{NFSU2_TR(0x71e4fd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e504:{NFSU2_TR(0x71e504);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e508:{NFSU2_TR(0x71e508);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e50b:{NFSU2_TR(0x71e50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B71e50f:{NFSU2_TR(0x71e50f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71e512:{NFSU2_TR(0x71e512);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e514:{NFSU2_TR(0x71e514);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e515:{NFSU2_TR(0x71e515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e4b3u);}goto L71e4b3;}}
}
B71e517:L71e517:{c.instructions+=4;NFSU2_TR(0x71e517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e518:{NFSU2_TR(0x71e518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e519:{NFSU2_TR(0x71e519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e51a:{NFSU2_TR(0x71e51a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e51b:L71e51b:{c.instructions+=13;NFSU2_TR(0x71e51b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e51c:{NFSU2_TR(0x71e51c);
__builtin_memmove((R+20),(R+16),4);
}
B71e51e:{NFSU2_TR(0x71e51e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e51f:{NFSU2_TR(0x71e51f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e520:{NFSU2_TR(0x71e520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e523:{NFSU2_TR(0x71e523);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e526:{NFSU2_TR(0x71e526);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e52a:{NFSU2_TR(0x71e52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e52d:{NFSU2_TR(0x71e52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e530:{NFSU2_TR(0x71e530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e533:{NFSU2_TR(0x71e533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e536:{NFSU2_TR(0x71e536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e539:{NFSU2_TR(0x71e539);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e53c:L71e53c:{c.instructions+=26;NFSU2_TR(0x71e53c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e53f:{NFSU2_TR(0x71e53f);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e542:{NFSU2_TR(0x71e542);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e545:{NFSU2_TR(0x71e545);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71e549:{NFSU2_TR(0x71e549);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e54c:{NFSU2_TR(0x71e54c);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4390))));
}
B71e54f:{NFSU2_TR(0x71e54f);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e552:{NFSU2_TR(0x71e552);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e559:{NFSU2_TR(0x71e559);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e55d:{NFSU2_TR(0x71e55d);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e560:{NFSU2_TR(0x71e560);
u8 U[4];
w4(U+0,u32(r8(R+4400)));
s4(u32(r4(R+28)),r4(U+0));
}
B71e563:{NFSU2_TR(0x71e563);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71e567:{NFSU2_TR(0x71e567);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e56a:{NFSU2_TR(0x71e56a);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e56d:{NFSU2_TR(0x71e56d);
u8 U[20];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4416),(U+12),8);
}
B71e572:{NFSU2_TR(0x71e572);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e575:{NFSU2_TR(0x71e575);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4384))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4386))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4388))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4390))));
}
B71e578:{NFSU2_TR(0x71e578);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B71e57b:{NFSU2_TR(0x71e57b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e582:{NFSU2_TR(0x71e582);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e586:{NFSU2_TR(0x71e586);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4352),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e589:{NFSU2_TR(0x71e589);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B71e58d:{NFSU2_TR(0x71e58d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e58f:{NFSU2_TR(0x71e58f);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e591:{NFSU2_TR(0x71e591);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71e592:{NFSU2_TR(0x71e592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e53cu);}goto L71e53c;}}
}
B71e594:L71e594:{c.instructions+=4;NFSU2_TR(0x71e594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e595:{NFSU2_TR(0x71e595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e596:{NFSU2_TR(0x71e596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e597:{NFSU2_TR(0x71e597);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e598:L71e598:{c.instructions+=6;NFSU2_TR(0x71e598);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e599:{NFSU2_TR(0x71e599);
__builtin_memmove((R+20),(R+16),4);
}
B71e59b:{NFSU2_TR(0x71e59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e59e:{NFSU2_TR(0x71e59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e5a1:{NFSU2_TR(0x71e5a1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B71e5a3:{NFSU2_TR(0x71e5a3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L71e5ac;}}
}
B71e5a5:L71e5a5:{c.instructions+=3;NFSU2_TR(0x71e5a5);
__builtin_memmove((R+0),(R+8),4);
}
B71e5a7:{NFSU2_TR(0x71e5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e5aa:{NFSU2_TR(0x71e5aa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71e5ac:L71e5ac:{c.instructions+=2;NFSU2_TR(0x71e5ac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e5af:{NFSU2_TR(0x71e5af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e5d4;}}
}
B71e5b1:L71e5b1:{c.instructions+=11;NFSU2_TR(0x71e5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e5b4:{NFSU2_TR(0x71e5b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71e5b7:{NFSU2_TR(0x71e5b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8177d0ull))));
}
B71e5bc:{NFSU2_TR(0x71e5bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5bd:{NFSU2_TR(0x71e5bd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5bf:{NFSU2_TR(0x71e5bf);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5c1:{NFSU2_TR(0x71e5c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5c3:{NFSU2_TR(0x71e5c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e5c6:{NFSU2_TR(0x71e5c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e5c9:{NFSU2_TR(0x71e5c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5ca:{NFSU2_TR(0x71e5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e5cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e495u);}goto L71e495;}
}
B71e5cf:L71e5cf:{c.instructions+=3;NFSU2_TR(0x71e5cf);
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
B71e5d2:{NFSU2_TR(0x71e5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e5d3:{NFSU2_TR(0x71e5d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e5d4:L71e5d4:{c.instructions+=3;NFSU2_TR(0x71e5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e5d7:{NFSU2_TR(0x71e5d7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e5d9:{NFSU2_TR(0x71e5d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e5f8;}}
}
B71e5db:L71e5db:{c.instructions+=11;NFSU2_TR(0x71e5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e5de:{NFSU2_TR(0x71e5de);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71e5e1:{NFSU2_TR(0x71e5e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8177d0ull))));
}
B71e5e6:{NFSU2_TR(0x71e5e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5e7:{NFSU2_TR(0x71e5e7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5e9:{NFSU2_TR(0x71e5e9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5eb:{NFSU2_TR(0x71e5eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5ec:{NFSU2_TR(0x71e5ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5ed:{NFSU2_TR(0x71e5ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e5f0:{NFSU2_TR(0x71e5f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5f1:{NFSU2_TR(0x71e5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e5f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e51bu);}goto L71e51b;}
}
B71e5f6:L71e5f6:{c.instructions+=1;NFSU2_TR(0x71e5f6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e5cfu);}goto L71e5cf;}
}
B71e5f8:L71e5f8:{c.instructions+=4;NFSU2_TR(0x71e5f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e5f9:{NFSU2_TR(0x71e5f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e5fc:{NFSU2_TR(0x71e5fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e5fe:{NFSU2_TR(0x71e5fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e619;}}
}
B71e600:L71e600:{c.instructions+=10;NFSU2_TR(0x71e600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e603:{NFSU2_TR(0x71e603);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71e606:{NFSU2_TR(0x71e606);
w4(R+0,u32(0x8177d0ull));
}
B71e60b:{NFSU2_TR(0x71e60b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71e60d:{NFSU2_TR(0x71e60d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e60e:{NFSU2_TR(0x71e60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e611:{NFSU2_TR(0x71e611);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71e614:{NFSU2_TR(0x71e614);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71e616:{NFSU2_TR(0x71e616);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71e617:{NFSU2_TR(0x71e617);
{goto L71e636;}
}
B71e619:L71e619:{c.instructions+=3;NFSU2_TR(0x71e619);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e61c:{NFSU2_TR(0x71e61c);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B71e61e:{NFSU2_TR(0x71e61e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e644;}}
}
B71e620:L71e620:{c.instructions+=8;NFSU2_TR(0x71e620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e623:{NFSU2_TR(0x71e623);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71e626:{NFSU2_TR(0x71e626);
w4(R+0,u32(0x8177d0ull));
}
B71e62b:{NFSU2_TR(0x71e62b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71e62d:{NFSU2_TR(0x71e62d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e62e:{NFSU2_TR(0x71e62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e631:{NFSU2_TR(0x71e631);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71e634:{NFSU2_TR(0x71e634);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71e636:L71e636:{c.instructions+=5;NFSU2_TR(0x71e636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e637:{NFSU2_TR(0x71e637);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e638:{NFSU2_TR(0x71e638);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e63b:{NFSU2_TR(0x71e63b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e63c:{NFSU2_TR(0x71e63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e641ull));
{goto L71e7f9;}
}
B71e641:L71e641:{c.instructions+=1;NFSU2_TR(0x71e641);
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
B71e644:L71e644:{c.instructions+=3;NFSU2_TR(0x71e644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e645:{NFSU2_TR(0x71e645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e646:{NFSU2_TR(0x71e646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e647:L71e647:{c.instructions+=16;NFSU2_TR(0x71e647);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e648:{NFSU2_TR(0x71e648);
__builtin_memmove((R+20),(R+16),4);
}
B71e64a:{NFSU2_TR(0x71e64a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B71e650:{NFSU2_TR(0x71e650);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e653:{NFSU2_TR(0x71e653);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e659:{NFSU2_TR(0x71e659);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e65b:{NFSU2_TR(0x71e65b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71e65c:{NFSU2_TR(0x71e65c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e65d:{NFSU2_TR(0x71e65d);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e65f:{NFSU2_TR(0x71e65f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e661:{NFSU2_TR(0x71e661);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e664:{NFSU2_TR(0x71e664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e665:{NFSU2_TR(0x71e665);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e668:{NFSU2_TR(0x71e668);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B71e66b:{NFSU2_TR(0x71e66b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e66c:{NFSU2_TR(0x71e66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e671ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e165u);}goto L71e165;}
}
B71e671:L71e671:{c.instructions+=9;NFSU2_TR(0x71e671);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e674:{NFSU2_TR(0x71e674);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e67a:{NFSU2_TR(0x71e67a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e67b:{NFSU2_TR(0x71e67b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e67c:{NFSU2_TR(0x71e67c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e67d:{NFSU2_TR(0x71e67d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e67e:{NFSU2_TR(0x71e67e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e681:{NFSU2_TR(0x71e681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e682:{NFSU2_TR(0x71e682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e687ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e238u);}goto L71e238;}
}
B71e687:L71e687:{c.instructions+=3;NFSU2_TR(0x71e687);
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
B71e68a:{NFSU2_TR(0x71e68a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71e68b:{NFSU2_TR(0x71e68b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e68c:L71e68c:{c.instructions+=7;NFSU2_TR(0x71e68c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e68d:{NFSU2_TR(0x71e68d);
__builtin_memmove((R+20),(R+16),4);
}
B71e68f:{NFSU2_TR(0x71e68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B71e695:{NFSU2_TR(0x71e695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e698:{NFSU2_TR(0x71e698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e69b:{NFSU2_TR(0x71e69b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B71e69d:{NFSU2_TR(0x71e69d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L71e6a6;}}
}
B71e69f:L71e69f:{c.instructions+=3;NFSU2_TR(0x71e69f);
__builtin_memmove((R+0),(R+8),4);
}
B71e6a1:{NFSU2_TR(0x71e6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e6a4:{NFSU2_TR(0x71e6a4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71e6a6:L71e6a6:{c.instructions+=4;NFSU2_TR(0x71e6a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6a7:{NFSU2_TR(0x71e6a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B71e6a9:{NFSU2_TR(0x71e6a9);
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
B71e6ab:{NFSU2_TR(0x71e6ab);
if(r1(R+518)){{goto L71e7f6;}}
}
B71e6b1:L71e6b1:{c.instructions+=5;NFSU2_TR(0x71e6b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e6b4:{NFSU2_TR(0x71e6b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6b5:{NFSU2_TR(0x71e6b5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6b7:{NFSU2_TR(0x71e6b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e6b8:{NFSU2_TR(0x71e6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e700;}}
}
B71e6ba:L71e6ba:{c.instructions+=3;NFSU2_TR(0x71e6ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71e6bd:{NFSU2_TR(0x71e6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e6c0:{NFSU2_TR(0x71e6c0);
if(r1(R+518)){{goto L71e6e1;}}
}
B71e6c2:L71e6c2:{c.instructions+=11;NFSU2_TR(0x71e6c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71e6c5:{NFSU2_TR(0x71e6c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8178d0ull))));
}
B71e6ca:{NFSU2_TR(0x71e6ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6cb:{NFSU2_TR(0x71e6cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6cc:{NFSU2_TR(0x71e6cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6cd:{NFSU2_TR(0x71e6cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6cf:{NFSU2_TR(0x71e6cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e6d2:{NFSU2_TR(0x71e6d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e6d8:{NFSU2_TR(0x71e6d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6d9:{NFSU2_TR(0x71e6d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6da:{NFSU2_TR(0x71e6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e6dfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e165u);}goto L71e165;}
}
B71e6df:L71e6df:{c.instructions+=1;NFSU2_TR(0x71e6df);
{goto L71e729;}
}
B71e6e1:L71e6e1:{c.instructions+=11;NFSU2_TR(0x71e6e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71e6e4:{NFSU2_TR(0x71e6e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8177d0ull))));
}
B71e6e9:{NFSU2_TR(0x71e6e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6ea:{NFSU2_TR(0x71e6ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6eb:{NFSU2_TR(0x71e6eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6ec:{NFSU2_TR(0x71e6ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6ee:{NFSU2_TR(0x71e6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e6f1:{NFSU2_TR(0x71e6f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e6f7:{NFSU2_TR(0x71e6f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6f8:{NFSU2_TR(0x71e6f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e6f9:{NFSU2_TR(0x71e6f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e6feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e495u);}goto L71e495;}
}
B71e6fe:L71e6fe:{c.instructions+=1;NFSU2_TR(0x71e6fe);
{goto L71e729;}
}
B71e700:L71e700:{c.instructions+=3;NFSU2_TR(0x71e700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e703:{NFSU2_TR(0x71e703);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e705:{NFSU2_TR(0x71e705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e74d;}}
}
B71e707:L71e707:{c.instructions+=3;NFSU2_TR(0x71e707);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71e70a:{NFSU2_TR(0x71e70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e70d:{NFSU2_TR(0x71e70d);
if(r1(R+518)){{goto L71e731;}}
}
B71e70f:L71e70f:{c.instructions+=11;NFSU2_TR(0x71e70f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71e712:{NFSU2_TR(0x71e712);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8178d0ull))));
}
B71e717:{NFSU2_TR(0x71e717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e718:{NFSU2_TR(0x71e718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e719:{NFSU2_TR(0x71e719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e71a:{NFSU2_TR(0x71e71a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e71b:{NFSU2_TR(0x71e71b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e71c:{NFSU2_TR(0x71e71c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e722:{NFSU2_TR(0x71e722);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e723:{NFSU2_TR(0x71e723);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e724:{NFSU2_TR(0x71e724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e729ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e238u);}goto L71e238;}
}
B71e729:L71e729:{c.instructions+=2;NFSU2_TR(0x71e729);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B71e72c:{NFSU2_TR(0x71e72c);
{goto L71e7e2;}
}
B71e731:L71e731:{c.instructions+=11;NFSU2_TR(0x71e731);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71e734:{NFSU2_TR(0x71e734);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8177d0ull))));
}
B71e739:{NFSU2_TR(0x71e739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e73a:{NFSU2_TR(0x71e73a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e73b:{NFSU2_TR(0x71e73b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e73c:{NFSU2_TR(0x71e73c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e73d:{NFSU2_TR(0x71e73d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e73e:{NFSU2_TR(0x71e73e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e744:{NFSU2_TR(0x71e744);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e745:{NFSU2_TR(0x71e745);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e746:{NFSU2_TR(0x71e746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e74bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e51bu);}goto L71e51b;}
}
B71e74b:L71e74b:{c.instructions+=1;NFSU2_TR(0x71e74b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e729u);}goto L71e729;}
}
B71e74d:L71e74d:{c.instructions+=4;NFSU2_TR(0x71e74d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e74e:{NFSU2_TR(0x71e74e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e751:{NFSU2_TR(0x71e751);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e753:{NFSU2_TR(0x71e753);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e789;}}
}
B71e755:L71e755:{c.instructions+=3;NFSU2_TR(0x71e755);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71e758:{NFSU2_TR(0x71e758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e75b:{NFSU2_TR(0x71e75b);
if(r1(R+518)){{goto L71e773;}}
}
B71e75d:L71e75d:{c.instructions+=9;NFSU2_TR(0x71e75d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e760:{NFSU2_TR(0x71e760);
w4(R+0,u32(0x8178d0ull));
}
B71e765:{NFSU2_TR(0x71e765);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e767:{NFSU2_TR(0x71e767);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e768:{NFSU2_TR(0x71e768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e76b:{NFSU2_TR(0x71e76b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e76e:{NFSU2_TR(0x71e76e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e770:{NFSU2_TR(0x71e770);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71e771:{NFSU2_TR(0x71e771);
{goto L71e7ab;}
}
B71e773:L71e773:{c.instructions+=9;NFSU2_TR(0x71e773);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e776:{NFSU2_TR(0x71e776);
w4(R+0,u32(0x8177d0ull));
}
B71e77b:{NFSU2_TR(0x71e77b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e77d:{NFSU2_TR(0x71e77d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e77e:{NFSU2_TR(0x71e77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e781:{NFSU2_TR(0x71e781);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e784:{NFSU2_TR(0x71e784);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e786:{NFSU2_TR(0x71e786);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71e787:{NFSU2_TR(0x71e787);
{goto L71e7cf;}
}
B71e789:L71e789:{c.instructions+=3;NFSU2_TR(0x71e789);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e78c:{NFSU2_TR(0x71e78c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71e78e:{NFSU2_TR(0x71e78e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71e7e1;}}
}
B71e790:L71e790:{c.instructions+=3;NFSU2_TR(0x71e790);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71e793:{NFSU2_TR(0x71e793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e796:{NFSU2_TR(0x71e796);
if(r1(R+518)){{goto L71e7bc;}}
}
B71e798:L71e798:{c.instructions+=7;NFSU2_TR(0x71e798);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e79b:{NFSU2_TR(0x71e79b);
w4(R+0,u32(0x8178d0ull));
}
B71e7a0:{NFSU2_TR(0x71e7a0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e7a2:{NFSU2_TR(0x71e7a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7a3:{NFSU2_TR(0x71e7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e7a6:{NFSU2_TR(0x71e7a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e7a9:{NFSU2_TR(0x71e7a9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e7ab:L71e7ab:{c.instructions+=6;NFSU2_TR(0x71e7ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7ac:{NFSU2_TR(0x71e7ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7ad:{NFSU2_TR(0x71e7ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e7b3:{NFSU2_TR(0x71e7b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7b4:{NFSU2_TR(0x71e7b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7b5:{NFSU2_TR(0x71e7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e7baull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e647u);}goto L71e647;}
}
B71e7ba:L71e7ba:{c.instructions+=1;NFSU2_TR(0x71e7ba);
{goto L71e7de;}
}
B71e7bc:L71e7bc:{c.instructions+=7;NFSU2_TR(0x71e7bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e7bf:{NFSU2_TR(0x71e7bf);
w4(R+0,u32(0x8177d0ull));
}
B71e7c4:{NFSU2_TR(0x71e7c4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e7c6:{NFSU2_TR(0x71e7c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7c7:{NFSU2_TR(0x71e7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e7ca:{NFSU2_TR(0x71e7ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71e7cd:{NFSU2_TR(0x71e7cd);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71e7cf:L71e7cf:{c.instructions+=6;NFSU2_TR(0x71e7cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7d0:{NFSU2_TR(0x71e7d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7d1:{NFSU2_TR(0x71e7d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e7d7:{NFSU2_TR(0x71e7d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7d8:{NFSU2_TR(0x71e7d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7d9:{NFSU2_TR(0x71e7d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e7deull));
{goto L71e7f9;}
}
B71e7de:L71e7de:{c.instructions+=1;NFSU2_TR(0x71e7de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B71e7e1:L71e7e1:{c.instructions+=1;NFSU2_TR(0x71e7e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e7e2:L71e7e2:{c.instructions+=5;NFSU2_TR(0x71e7e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7e3:{NFSU2_TR(0x71e7e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71e7e6:{NFSU2_TR(0x71e7e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e7ec:{NFSU2_TR(0x71e7ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7ed:{NFSU2_TR(0x71e7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71e7f2ull));
TAIL_STATIC(0x71d1ddu,71d);
}
B71e7f2:L71e7f2:{c.instructions+=2;NFSU2_TR(0x71e7f2);
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
B71e7f5:{NFSU2_TR(0x71e7f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e7f6:L71e7f6:{c.instructions+=3;NFSU2_TR(0x71e7f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e7f7:{NFSU2_TR(0x71e7f7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71e7f8:{NFSU2_TR(0x71e7f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e7f9:L71e7f9:{c.instructions+=34;NFSU2_TR(0x71e7f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7fa:{NFSU2_TR(0x71e7fa);
__builtin_memmove((R+20),(R+16),4);
}
B71e7fc:{NFSU2_TR(0x71e7fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7fd:{NFSU2_TR(0x71e7fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e7fe:{NFSU2_TR(0x71e7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e801:{NFSU2_TR(0x71e801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e804:{NFSU2_TR(0x71e804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e807:{NFSU2_TR(0x71e807);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71e80a:{NFSU2_TR(0x71e80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e80d:{NFSU2_TR(0x71e80d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71e810:{NFSU2_TR(0x71e810);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71e814:{NFSU2_TR(0x71e814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e817:{NFSU2_TR(0x71e817);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e81a:{NFSU2_TR(0x71e81a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e81d:{NFSU2_TR(0x71e81d);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e820:{NFSU2_TR(0x71e820);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e823:{NFSU2_TR(0x71e823);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4356),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4357),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4358),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4359),1);
}
B71e826:{NFSU2_TR(0x71e826);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e829:{NFSU2_TR(0x71e829);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4374))));
}
B71e82c:{NFSU2_TR(0x71e82c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71e830:{NFSU2_TR(0x71e830);
__builtin_memmove((R+4448),(R+4432),8);
}
B71e833:{NFSU2_TR(0x71e833);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e836:{NFSU2_TR(0x71e836);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4356),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4357),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4358),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4359),1);
}
B71e839:{NFSU2_TR(0x71e839);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e83c:{NFSU2_TR(0x71e83c);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4390))));
}
B71e83f:{NFSU2_TR(0x71e83f);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e842:{NFSU2_TR(0x71e842);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71e845:{NFSU2_TR(0x71e845);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e84c:{NFSU2_TR(0x71e84c);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e850:{NFSU2_TR(0x71e850);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71e857:{NFSU2_TR(0x71e857);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x7ull)));}
}
B71e85b:{NFSU2_TR(0x71e85b);
__builtin_memmove((R+4464),(R+4400),8);
}
B71e85e:{NFSU2_TR(0x71e85e);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4416),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B71e861:{NFSU2_TR(0x71e861);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e863:L71e863:{c.instructions+=40;NFSU2_TR(0x71e863);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71e866:{NFSU2_TR(0x71e866);
__builtin_memmove((R+4416),(R+4400),8);
}
B71e869:{NFSU2_TR(0x71e869);
__builtin_memmove((R+4407),(R+4355),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4354),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4353),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4352),1);
}
B71e86c:{NFSU2_TR(0x71e86c);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4356),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4357),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4358),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4359),1);
}
B71e86f:{NFSU2_TR(0x71e86f);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4374))));
}
B71e872:{NFSU2_TR(0x71e872);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4368))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4370))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4372))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4374))));
}
B71e875:{NFSU2_TR(0x71e875);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71e879:{NFSU2_TR(0x71e879);
__builtin_memmove((R+4448),(R+4432),8);
}
B71e87c:{NFSU2_TR(0x71e87c);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e87f:{NFSU2_TR(0x71e87f);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4356),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4357),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4358),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4359),1);
}
B71e882:{NFSU2_TR(0x71e882);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4390))));
}
B71e885:{NFSU2_TR(0x71e885);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4390))));
}
B71e888:{NFSU2_TR(0x71e888);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e88b:{NFSU2_TR(0x71e88b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71e88e:{NFSU2_TR(0x71e88e);
__builtin_memmove((R+4432),(R+4464),8);
}
B71e891:{NFSU2_TR(0x71e891);
__builtin_memmove((R+4448),(R+4464),8);
}
B71e894:{NFSU2_TR(0x71e894);
__builtin_memmove((R+4439),(R+4355),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4354),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4353),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4352),1);
}
B71e897:{NFSU2_TR(0x71e897);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4356),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4357),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4358),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4359),1);
}
B71e89a:{NFSU2_TR(0x71e89a);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+8))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+10))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+12))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+14))));
}
B71e89d:{NFSU2_TR(0x71e89d);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((U+8),(U+0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+8))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+10))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+12))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+14))));
}
B71e8a0:{NFSU2_TR(0x71e8a0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e8a7:{NFSU2_TR(0x71e8a7);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e8ab:{NFSU2_TR(0x71e8ab);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71e8b2:{NFSU2_TR(0x71e8b2);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x7ull)));}
}
B71e8b6:{NFSU2_TR(0x71e8b6);
__builtin_memmove((R+4464),(R+4400),8);
}
B71e8b9:{NFSU2_TR(0x71e8b9);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4416),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B71e8bc:{NFSU2_TR(0x71e8bc);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+18))));
}
B71e8c0:{NFSU2_TR(0x71e8c0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+18))));
}
B71e8c4:{NFSU2_TR(0x71e8c4);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e8c7:{NFSU2_TR(0x71e8c7);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71e8ca:{NFSU2_TR(0x71e8ca);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71e8d1:{NFSU2_TR(0x71e8d1);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x7ull)));}
}
B71e8d5:{NFSU2_TR(0x71e8d5);
u8 U[8];
__builtin_memmove((U+0),gp(0x8177c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71e8dc:{NFSU2_TR(0x71e8dc);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x7ull)));}
}
B71e8e0:{NFSU2_TR(0x71e8e0);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4416),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71e8e3:{NFSU2_TR(0x71e8e3);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71e8e6:{NFSU2_TR(0x71e8e6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e8e8:{NFSU2_TR(0x71e8e8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71e8eb:{NFSU2_TR(0x71e8eb);
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
B71e8ed:{NFSU2_TR(0x71e8ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e863u);}goto L71e863;}}
}
B71e8f3:L71e8f3:{c.instructions+=4;NFSU2_TR(0x71e8f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e8f4:{NFSU2_TR(0x71e8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e8f5:{NFSU2_TR(0x71e8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e8f6:{NFSU2_TR(0x71e8f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e8f7:L71e8f7:{c.instructions+=8;NFSU2_TR(0x71e8f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e8f8:{NFSU2_TR(0x71e8f8);
__builtin_memmove((R+20),(R+16),4);
}
B71e8fa:{NFSU2_TR(0x71e8fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e8fb:{NFSU2_TR(0x71e8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e8fe:{NFSU2_TR(0x71e8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e901:{NFSU2_TR(0x71e901);
__builtin_memmove((R+4352),gp(0x817ae0),8);
}
B71e908:{NFSU2_TR(0x71e908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71e90b:{NFSU2_TR(0x71e90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71e911:L71e911:{c.instructions+=9;NFSU2_TR(0x71e911);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71e914:{NFSU2_TR(0x71e914);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::packsswb<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B71e918:{NFSU2_TR(0x71e918);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4352))));
}
B71e91b:{NFSU2_TR(0x71e91b);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4352))));
}
B71e91e:{NFSU2_TR(0x71e91e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e921:{NFSU2_TR(0x71e921);
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
B71e923:{NFSU2_TR(0x71e923);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71e926:{NFSU2_TR(0x71e926);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71e929:{NFSU2_TR(0x71e929);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e911u);}goto L71e911;}}
}
B71e92b:L71e92b:{c.instructions+=3;NFSU2_TR(0x71e92b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e92c:{NFSU2_TR(0x71e92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e92d:{NFSU2_TR(0x71e92d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e92e:L71e92e:{c.instructions+=11;NFSU2_TR(0x71e92e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e92f:{NFSU2_TR(0x71e92f);
__builtin_memmove((R+20),(R+16),4);
}
B71e931:{NFSU2_TR(0x71e931);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e932:{NFSU2_TR(0x71e932);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e933:{NFSU2_TR(0x71e933);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e934:{NFSU2_TR(0x71e934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71e937:{NFSU2_TR(0x71e937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e93a:{NFSU2_TR(0x71e93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71e93d:{NFSU2_TR(0x71e93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e940:{NFSU2_TR(0x71e940);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e943:{NFSU2_TR(0x71e943);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e949:L71e949:{c.instructions+=15;NFSU2_TR(0x71e949);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71e94c:{NFSU2_TR(0x71e94c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71e94f:{NFSU2_TR(0x71e94f);
__builtin_memmove((R+4400),(R+4384),8);
}
B71e952:{NFSU2_TR(0x71e952);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71e956:{NFSU2_TR(0x71e956);
__builtin_memmove((R+4391),(R+4355),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4354),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4353),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4352),1);
}
B71e959:{NFSU2_TR(0x71e959);
{wv<8>((R+4384),uo::paddsw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71e95c:{NFSU2_TR(0x71e95c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4356),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4357),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4358),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4359),1);
}
B71e95f:{NFSU2_TR(0x71e95f);
{wv<8>((R+4400),uo::paddsw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71e962:{NFSU2_TR(0x71e962);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71e964:{NFSU2_TR(0x71e964);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B71e967:{NFSU2_TR(0x71e967);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71e96a:{NFSU2_TR(0x71e96a);
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
B71e96c:{NFSU2_TR(0x71e96c);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B71e96f:{NFSU2_TR(0x71e96f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71e972:{NFSU2_TR(0x71e972);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e949u);}goto L71e949;}}
}
B71e974:L71e974:{c.instructions+=5;NFSU2_TR(0x71e974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e975:{NFSU2_TR(0x71e975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e976:{NFSU2_TR(0x71e976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e977:{NFSU2_TR(0x71e977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e978:{NFSU2_TR(0x71e978);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e979:L71e979:{c.instructions+=14;NFSU2_TR(0x71e979);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e97a:{NFSU2_TR(0x71e97a);
__builtin_memmove((R+20),(R+16),4);
}
B71e97c:{NFSU2_TR(0x71e97c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e97d:{NFSU2_TR(0x71e97d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e97e:{NFSU2_TR(0x71e97e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e97f:{NFSU2_TR(0x71e97f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e980:{NFSU2_TR(0x71e980);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e981:{NFSU2_TR(0x71e981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71e984:{NFSU2_TR(0x71e984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71e987:{NFSU2_TR(0x71e987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e98a:{NFSU2_TR(0x71e98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71e98d:{NFSU2_TR(0x71e98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71e990:{NFSU2_TR(0x71e990);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71e996:{NFSU2_TR(0x71e996);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B71e999:L71e999:{c.instructions+=24;NFSU2_TR(0x71e999);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71e99c:{NFSU2_TR(0x71e99c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B71e99f:{NFSU2_TR(0x71e99f);
__builtin_memmove((R+4400),(R+4384),8);
}
B71e9a2:{NFSU2_TR(0x71e9a2);
__builtin_memmove((R+4391),(R+4355),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4354),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4353),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4352),1);
}
B71e9a5:{NFSU2_TR(0x71e9a5);
__builtin_memmove((R+4432),(R+4416),8);
}
B71e9a8:{NFSU2_TR(0x71e9a8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71e9ab:{NFSU2_TR(0x71e9ab);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4356),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4357),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4358),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4359),1);
}
B71e9ae:{NFSU2_TR(0x71e9ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71e9b2:{NFSU2_TR(0x71e9b2);
__builtin_memmove((R+4423),(R+4355),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4354),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4353),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4352),1);
}
B71e9b5:{NFSU2_TR(0x71e9b5);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4356),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4357),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4358),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4359),1);
}
B71e9b8:{NFSU2_TR(0x71e9b8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4422))));
}
B71e9bb:{NFSU2_TR(0x71e9bb);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B71e9be:{NFSU2_TR(0x71e9be);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x1ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x1ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x1ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x1ull))));
}
B71e9c2:{NFSU2_TR(0x71e9c2);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x1ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x1ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x1ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x1ull))));
}
B71e9c6:{NFSU2_TR(0x71e9c6);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71e9c9:{NFSU2_TR(0x71e9c9);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B71e9cc:{NFSU2_TR(0x71e9cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71e9cf:{NFSU2_TR(0x71e9cf);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B71e9d2:{NFSU2_TR(0x71e9d2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71e9d4:{NFSU2_TR(0x71e9d4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B71e9d6:{NFSU2_TR(0x71e9d6);
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
B71e9d8:{NFSU2_TR(0x71e9d8);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+12)),r8(U+0));
}
B71e9db:{NFSU2_TR(0x71e9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71e9de:{NFSU2_TR(0x71e9de);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e999u);}goto L71e999;}}
}
B71e9e0:L71e9e0:{c.instructions+=7;NFSU2_TR(0x71e9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e9e1:{NFSU2_TR(0x71e9e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e9e2:{NFSU2_TR(0x71e9e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71e9e3:{NFSU2_TR(0x71e9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71e9e4:{NFSU2_TR(0x71e9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71e9e5:{NFSU2_TR(0x71e9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71e9e6:{NFSU2_TR(0x71e9e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71e9e7:L71e9e7:{c.instructions+=15;NFSU2_TR(0x71e9e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e9e8:{NFSU2_TR(0x71e9e8);
__builtin_memmove((R+20),(R+16),4);
}
B71e9ea:{NFSU2_TR(0x71e9ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e9eb:{NFSU2_TR(0x71e9eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71e9ec:{NFSU2_TR(0x71e9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71e9ef:{NFSU2_TR(0x71e9ef);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71e9f3:{NFSU2_TR(0x71e9f3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71e9f8:{NFSU2_TR(0x71e9f8);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71e9fd:{NFSU2_TR(0x71e9fd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71ea02:{NFSU2_TR(0x71ea02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ea05:{NFSU2_TR(0x71ea05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ea08:{NFSU2_TR(0x71ea08);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B71ea09:{NFSU2_TR(0x71ea09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ea0c:{NFSU2_TR(0x71ea0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ea0f:{NFSU2_TR(0x71ea0f);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71ea13:L71ea13:{c.instructions+=28;NFSU2_TR(0x71ea13);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ea17:{NFSU2_TR(0x71ea17);
__builtin_memmove((R+4864),(R+4800),16);
}
B71ea1b:{NFSU2_TR(0x71ea1b);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ea1f:{NFSU2_TR(0x71ea1f);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ea23:{NFSU2_TR(0x71ea23);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))*u32(u32(0x8ull))));
wv<16>((R+4864),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4864)),rv<4>((U+0))));
}
B71ea28:{NFSU2_TR(0x71ea28);
__builtin_memmove((R+4928),(R+4864),16);
}
B71ea2c:{NFSU2_TR(0x71ea2c);
__builtin_memmove((R+4943),(R+4615),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+4614),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+4613),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+4612),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+4611),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+4610),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+4609),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+4608),1);
}
B71ea30:{NFSU2_TR(0x71ea30);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+5070))));
}
B71ea34:{NFSU2_TR(0x71ea34);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71ea38:{NFSU2_TR(0x71ea38);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71ea3d:{NFSU2_TR(0x71ea3d);
__builtin_memmove((R+4928),(R+4864),16);
}
B71ea41:{NFSU2_TR(0x71ea41);
__builtin_memmove((R+4943),(R+4615),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+4614),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+4613),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+4612),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+4611),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+4610),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+4609),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+4608),1);
}
B71ea45:{NFSU2_TR(0x71ea45);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4736))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4738))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4740))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4742))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+4744))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+4746))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+4748))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+4750))));
}
B71ea49:{NFSU2_TR(0x71ea49);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71ea4d:{NFSU2_TR(0x71ea4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4864),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4864)),rv<4>((U+0))));
}
B71ea52:{NFSU2_TR(0x71ea52);
__builtin_memmove((R+4928),(R+4864),16);
}
B71ea56:{NFSU2_TR(0x71ea56);
__builtin_memmove((R+4943),(R+4615),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+4614),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+4613),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+4612),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+4611),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+4610),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+4609),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+4608),1);
}
B71ea5a:{NFSU2_TR(0x71ea5a);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+5006))));
}
B71ea5e:{NFSU2_TR(0x71ea5e);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71ea62:{NFSU2_TR(0x71ea62);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>(gp(0x817af0))));}
}
B71ea6a:{NFSU2_TR(0x71ea6a);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ea6f:{NFSU2_TR(0x71ea6f);
u8 U[54];
__builtin_memmove((U+5),(R+4800),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4800),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4801),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4802),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4803),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4804),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4805),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4806),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4807),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4808),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4809),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4810),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4811),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4812),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4813),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4814),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4815),(U+37),1);
}
B71ea73:{NFSU2_TR(0x71ea73);
{wv<8>((R+4400),uo::movdq2q<8>(rv<8>((R+4400)),rv<16>((R+4608))));}
}
B71ea77:{NFSU2_TR(0x71ea77);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71ea7a:{NFSU2_TR(0x71ea7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71ea7d:{NFSU2_TR(0x71ea7d);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71ea7f:{NFSU2_TR(0x71ea7f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ea80:{NFSU2_TR(0x71ea80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ea13u);}goto L71ea13;}}
}
B71ea82:L71ea82:{c.instructions+=4;NFSU2_TR(0x71ea82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ea83:{NFSU2_TR(0x71ea83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ea84:{NFSU2_TR(0x71ea84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ea85:{NFSU2_TR(0x71ea85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ea86:L71ea86:{c.instructions+=16;NFSU2_TR(0x71ea86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ea87:{NFSU2_TR(0x71ea87);
__builtin_memmove((R+20),(R+16),4);
}
B71ea89:{NFSU2_TR(0x71ea89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ea8a:{NFSU2_TR(0x71ea8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ea8b:{NFSU2_TR(0x71ea8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ea8e:{NFSU2_TR(0x71ea8e);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71ea92:{NFSU2_TR(0x71ea92);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71ea97:{NFSU2_TR(0x71ea97);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71ea9c:{NFSU2_TR(0x71ea9c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71eaa1:{NFSU2_TR(0x71eaa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71eaa4:{NFSU2_TR(0x71eaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71eaa7:{NFSU2_TR(0x71eaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71eaaa:{NFSU2_TR(0x71eaaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B71eaad:{NFSU2_TR(0x71eaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71eab0:{NFSU2_TR(0x71eab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71eab3:{NFSU2_TR(0x71eab3);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71eab7:L71eab7:{c.instructions+=24;NFSU2_TR(0x71eab7);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71eabb:{NFSU2_TR(0x71eabb);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71eabf:{NFSU2_TR(0x71eabf);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71eac3:{NFSU2_TR(0x71eac3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71eac5:{NFSU2_TR(0x71eac5);
u8 U[24];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4864),(U+8),16);
}
B71eaca:{NFSU2_TR(0x71eaca);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71eace:{NFSU2_TR(0x71eace);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+5056))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+5058))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+5060))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+5062))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+5064))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+5066))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+5068))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+5070))));
}
B71ead2:{NFSU2_TR(0x71ead2);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71ead6:{NFSU2_TR(0x71ead6);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71eada:{NFSU2_TR(0x71eada);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71eade:{NFSU2_TR(0x71eade);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71eae2:{NFSU2_TR(0x71eae2);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71eae6:{NFSU2_TR(0x71eae6);
u8 U[24];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4864),(U+8),16);
}
B71eaeb:{NFSU2_TR(0x71eaeb);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71eaef:{NFSU2_TR(0x71eaef);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+5006))));
}
B71eaf3:{NFSU2_TR(0x71eaf3);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71eaf7:{NFSU2_TR(0x71eaf7);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>(gp(0x817af0))));}
}
B71eaff:{NFSU2_TR(0x71eaff);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71eb04:{NFSU2_TR(0x71eb04);
u8 U[54];
__builtin_memmove((U+5),(R+4800),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4800),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4801),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4802),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4803),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4804),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4805),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4806),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4807),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4808),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4809),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4810),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4811),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4812),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4813),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4814),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4815),(U+37),1);
}
B71eb08:{NFSU2_TR(0x71eb08);
{wv<8>((R+4400),uo::movdq2q<8>(rv<8>((R+4400)),rv<16>((R+4608))));}
}
B71eb0c:{NFSU2_TR(0x71eb0c);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71eb0f:{NFSU2_TR(0x71eb0f);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71eb11:{NFSU2_TR(0x71eb11);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71eb12:{NFSU2_TR(0x71eb12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71eab7u);}goto L71eab7;}}
}
B71eb14:L71eb14:{c.instructions+=4;NFSU2_TR(0x71eb14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71eb15:{NFSU2_TR(0x71eb15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71eb16:{NFSU2_TR(0x71eb16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71eb17:{NFSU2_TR(0x71eb17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71eb18:L71eb18:{c.instructions+=12;NFSU2_TR(0x71eb18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eb19:{NFSU2_TR(0x71eb19);
__builtin_memmove((R+20),(R+16),4);
}
B71eb1b:{NFSU2_TR(0x71eb1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eb1c:{NFSU2_TR(0x71eb1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eb1d:{NFSU2_TR(0x71eb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71eb20:{NFSU2_TR(0x71eb20);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71eb24:{NFSU2_TR(0x71eb24);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71eb29:{NFSU2_TR(0x71eb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71eb2c:{NFSU2_TR(0x71eb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71eb2f:{NFSU2_TR(0x71eb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71eb32:{NFSU2_TR(0x71eb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71eb35:{NFSU2_TR(0x71eb35);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71eb39:L71eb39:{c.instructions+=17;NFSU2_TR(0x71eb39);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71eb3d:{NFSU2_TR(0x71eb3d);
__builtin_memmove((R+4928),(R+4800),16);
}
B71eb41:{NFSU2_TR(0x71eb41);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71eb45:{NFSU2_TR(0x71eb45);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71eb49:{NFSU2_TR(0x71eb49);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4928),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4928)),rv<4>((U+0))));
}
B71eb4e:{NFSU2_TR(0x71eb4e);
__builtin_memmove((R+4943),(R+4615),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+4614),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+4613),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+4612),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+4611),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+4610),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+4609),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+4608),1);
}
B71eb52:{NFSU2_TR(0x71eb52);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4736))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4738))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4740))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4742))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+4744))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+4746))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+4748))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+4750))));
}
B71eb56:{NFSU2_TR(0x71eb56);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4928))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4930))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4932))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4934))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4936))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4938))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4940))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4942))));
}
B71eb5a:{NFSU2_TR(0x71eb5a);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71eb62:{NFSU2_TR(0x71eb62);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71eb67:{NFSU2_TR(0x71eb67);
u8 U[54];
__builtin_memmove((U+5),(R+4800),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4800),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4801),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4802),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4803),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4804),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4805),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4806),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4807),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4808),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4809),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4810),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4811),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4812),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4813),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4814),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4815),(U+37),1);
}
B71eb6b:{NFSU2_TR(0x71eb6b);
{wv<8>((R+4400),uo::movdq2q<8>(rv<8>((R+4400)),rv<16>((R+4608))));}
}
B71eb6f:{NFSU2_TR(0x71eb6f);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71eb72:{NFSU2_TR(0x71eb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71eb75:{NFSU2_TR(0x71eb75);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71eb77:{NFSU2_TR(0x71eb77);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71eb78:{NFSU2_TR(0x71eb78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71eb39u);}goto L71eb39;}}
}
B71eb7a:L71eb7a:{c.instructions+=4;NFSU2_TR(0x71eb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71eb7b:{NFSU2_TR(0x71eb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71eb7c:{NFSU2_TR(0x71eb7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71eb7d:{NFSU2_TR(0x71eb7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71eb7e:L71eb7e:{c.instructions+=13;NFSU2_TR(0x71eb7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eb7f:{NFSU2_TR(0x71eb7f);
__builtin_memmove((R+20),(R+16),4);
}
B71eb81:{NFSU2_TR(0x71eb81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eb82:{NFSU2_TR(0x71eb82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eb83:{NFSU2_TR(0x71eb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71eb86:{NFSU2_TR(0x71eb86);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71eb8a:{NFSU2_TR(0x71eb8a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71eb8f:{NFSU2_TR(0x71eb8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71eb92:{NFSU2_TR(0x71eb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71eb95:{NFSU2_TR(0x71eb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71eb98:{NFSU2_TR(0x71eb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71eb9b:{NFSU2_TR(0x71eb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71eb9e:{NFSU2_TR(0x71eb9e);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71eba2:L71eba2:{c.instructions+=16;NFSU2_TR(0x71eba2);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71eba6:{NFSU2_TR(0x71eba6);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ebaa:{NFSU2_TR(0x71ebaa);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ebae:{NFSU2_TR(0x71ebae);
u8 U[24];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4864),(U+8),16);
}
B71ebb3:{NFSU2_TR(0x71ebb3);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71ebb7:{NFSU2_TR(0x71ebb7);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71ebbb:{NFSU2_TR(0x71ebbb);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B71ebbf:{NFSU2_TR(0x71ebbf);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71ebc7:{NFSU2_TR(0x71ebc7);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ebcc:{NFSU2_TR(0x71ebcc);
u8 U[54];
__builtin_memmove((U+5),(R+4800),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4800),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4801),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4802),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4803),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4804),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4805),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4806),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4807),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4808),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4809),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4810),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4811),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4812),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4813),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4814),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4815),(U+37),1);
}
B71ebd0:{NFSU2_TR(0x71ebd0);
{wv<8>((R+4400),uo::movdq2q<8>(rv<8>((R+4400)),rv<16>((R+4608))));}
}
B71ebd4:{NFSU2_TR(0x71ebd4);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71ebd7:{NFSU2_TR(0x71ebd7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71ebd9:{NFSU2_TR(0x71ebd9);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71ebdb:{NFSU2_TR(0x71ebdb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ebdc:{NFSU2_TR(0x71ebdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71eba2u);}goto L71eba2;}}
}
B71ebde:L71ebde:{c.instructions+=4;NFSU2_TR(0x71ebde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ebdf:{NFSU2_TR(0x71ebdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ebe0:{NFSU2_TR(0x71ebe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ebe1:{NFSU2_TR(0x71ebe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ebe2:L71ebe2:{c.instructions+=25;NFSU2_TR(0x71ebe2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ebe3:{NFSU2_TR(0x71ebe3);
__builtin_memmove((R+20),(R+16),4);
}
B71ebe5:{NFSU2_TR(0x71ebe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ebe6:{NFSU2_TR(0x71ebe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ebe7:{NFSU2_TR(0x71ebe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ebea:{NFSU2_TR(0x71ebea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ebed:{NFSU2_TR(0x71ebed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ebf0:{NFSU2_TR(0x71ebf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ebf3:{NFSU2_TR(0x71ebf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ebf6:{NFSU2_TR(0x71ebf6);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71ebfa:{NFSU2_TR(0x71ebfa);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71ebff:{NFSU2_TR(0x71ebff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ec02:{NFSU2_TR(0x71ec02);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71ec06:{NFSU2_TR(0x71ec06);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ec0a:{NFSU2_TR(0x71ec0a);
__builtin_memmove((R+4864),(R+4800),16);
}
B71ec0e:{NFSU2_TR(0x71ec0e);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ec12:{NFSU2_TR(0x71ec12);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4864),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4864)),rv<4>((U+0))));
}
B71ec17:{NFSU2_TR(0x71ec17);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ec1b:{NFSU2_TR(0x71ec1b);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71ec1f:{NFSU2_TR(0x71ec1f);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71ec23:{NFSU2_TR(0x71ec23);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B71ec27:{NFSU2_TR(0x71ec27);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71ec2f:{NFSU2_TR(0x71ec2f);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ec34:{NFSU2_TR(0x71ec34);
__builtin_memmove((R+4928),(R+4800),16);
}
B71ec38:{NFSU2_TR(0x71ec38);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71ec3a:L71ec3a:{c.instructions+=24;NFSU2_TR(0x71ec3a);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(U+16))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(U+18))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(U+20))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(U+22))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(U+24))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(U+26))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(U+28))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(U+30))));
}
B71ec3e:{NFSU2_TR(0x71ec3e);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ec42:{NFSU2_TR(0x71ec42);
__builtin_memmove((R+4864),(R+4800),16);
}
B71ec46:{NFSU2_TR(0x71ec46);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ec4a:{NFSU2_TR(0x71ec4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4864),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4864)),rv<4>((U+0))));
}
B71ec4f:{NFSU2_TR(0x71ec4f);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ec53:{NFSU2_TR(0x71ec53);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71ec57:{NFSU2_TR(0x71ec57);
__builtin_memmove((R+4992),(R+4928),16);
}
B71ec5b:{NFSU2_TR(0x71ec5b);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71ec5f:{NFSU2_TR(0x71ec5f);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B71ec63:{NFSU2_TR(0x71ec63);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71ec6b:{NFSU2_TR(0x71ec6b);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ec70:{NFSU2_TR(0x71ec70);
__builtin_memmove((R+4928),(R+4800),16);
}
B71ec74:{NFSU2_TR(0x71ec74);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(U+34))));
}
B71ec79:{NFSU2_TR(0x71ec79);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4814))));
}
B71ec7d:{NFSU2_TR(0x71ec7d);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(U+0))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(U+2))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(U+4))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(U+6))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(U+8))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(U+10))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(U+12))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(U+14))));
}
B71ec85:{NFSU2_TR(0x71ec85);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x7ull)));}
}
B71ec8a:{NFSU2_TR(0x71ec8a);
u8 U[54];
__builtin_memmove((U+5),(R+4992),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4992),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4993),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4994),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4995),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4996),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4997),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4998),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4999),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5000),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5001),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5002),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5003),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5004),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5005),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5006),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+5007),(U+37),1);
}
B71ec8e:{NFSU2_TR(0x71ec8e);
{wv<8>((R+4448),uo::movdq2q<8>(rv<8>((R+4448)),rv<16>((R+4608))));}
}
B71ec92:{NFSU2_TR(0x71ec92);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71ec95:{NFSU2_TR(0x71ec95);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71ec97:{NFSU2_TR(0x71ec97);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71ec9a:{NFSU2_TR(0x71ec9a);
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
B71ec9c:{NFSU2_TR(0x71ec9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ec3au);}goto L71ec3a;}}
}
B71ec9e:L71ec9e:{c.instructions+=4;NFSU2_TR(0x71ec9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ec9f:{NFSU2_TR(0x71ec9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71eca0:{NFSU2_TR(0x71eca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71eca1:{NFSU2_TR(0x71eca1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71eca2:L71eca2:{c.instructions+=25;NFSU2_TR(0x71eca2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eca3:{NFSU2_TR(0x71eca3);
__builtin_memmove((R+20),(R+16),4);
}
B71eca5:{NFSU2_TR(0x71eca5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eca6:{NFSU2_TR(0x71eca6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eca7:{NFSU2_TR(0x71eca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ecaa:{NFSU2_TR(0x71ecaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ecad:{NFSU2_TR(0x71ecad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ecb0:{NFSU2_TR(0x71ecb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71ecb6:{NFSU2_TR(0x71ecb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ecb9:{NFSU2_TR(0x71ecb9);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71ecbd:{NFSU2_TR(0x71ecbd);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71ecc2:{NFSU2_TR(0x71ecc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ecc5:{NFSU2_TR(0x71ecc5);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71ecc9:{NFSU2_TR(0x71ecc9);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71eccd:{NFSU2_TR(0x71eccd);
__builtin_memmove((R+4864),(R+4800),16);
}
B71ecd1:{NFSU2_TR(0x71ecd1);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ecd5:{NFSU2_TR(0x71ecd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4864),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4864)),rv<4>((U+0))));
}
B71ecda:{NFSU2_TR(0x71ecda);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ecde:{NFSU2_TR(0x71ecde);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71ece2:{NFSU2_TR(0x71ece2);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71ece6:{NFSU2_TR(0x71ece6);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B71ecea:{NFSU2_TR(0x71ecea);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71ecf2:{NFSU2_TR(0x71ecf2);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ecf7:{NFSU2_TR(0x71ecf7);
__builtin_memmove((R+4928),(R+4800),16);
}
B71ecfb:{NFSU2_TR(0x71ecfb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71ecfd:L71ecfd:{c.instructions+=22;NFSU2_TR(0x71ecfd);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(U+16))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(U+18))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(U+20))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(U+22))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(U+24))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(U+26))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(U+28))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(U+30))));
}
B71ed01:{NFSU2_TR(0x71ed01);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ed05:{NFSU2_TR(0x71ed05);
__builtin_memmove((R+4864),(R+4800),16);
}
B71ed09:{NFSU2_TR(0x71ed09);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ed0d:{NFSU2_TR(0x71ed0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4864),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4864)),rv<4>((U+0))));
}
B71ed12:{NFSU2_TR(0x71ed12);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ed16:{NFSU2_TR(0x71ed16);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71ed1a:{NFSU2_TR(0x71ed1a);
__builtin_memmove((R+4992),(R+4928),16);
}
B71ed1e:{NFSU2_TR(0x71ed1e);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71ed22:{NFSU2_TR(0x71ed22);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B71ed26:{NFSU2_TR(0x71ed26);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71ed2e:{NFSU2_TR(0x71ed2e);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ed33:{NFSU2_TR(0x71ed33);
__builtin_memmove((R+4928),(R+4800),16);
}
B71ed37:{NFSU2_TR(0x71ed37);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(U+34))));
}
B71ed3c:{NFSU2_TR(0x71ed3c);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4814))));
}
B71ed40:{NFSU2_TR(0x71ed40);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(U+0))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(U+2))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(U+4))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(U+6))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(U+8))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(U+10))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(U+12))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(U+14))));
}
B71ed48:{NFSU2_TR(0x71ed48);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x7ull)));}
}
B71ed4d:{NFSU2_TR(0x71ed4d);
u8 U[16];
__builtin_memmove((U+0),(R+4992),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71ed51:{NFSU2_TR(0x71ed51);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71ed53:{NFSU2_TR(0x71ed53);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71ed56:{NFSU2_TR(0x71ed56);
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
B71ed58:{NFSU2_TR(0x71ed58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ecfdu);}goto L71ecfd;}}
}
B71ed5a:L71ed5a:{c.instructions+=4;NFSU2_TR(0x71ed5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ed5b:{NFSU2_TR(0x71ed5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ed5c:{NFSU2_TR(0x71ed5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ed5d:{NFSU2_TR(0x71ed5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ed5e:L71ed5e:{c.instructions+=12;NFSU2_TR(0x71ed5e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ed5f:{NFSU2_TR(0x71ed5f);
__builtin_memmove((R+20),(R+16),4);
}
B71ed61:{NFSU2_TR(0x71ed61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ed62:{NFSU2_TR(0x71ed62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ed63:{NFSU2_TR(0x71ed63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ed66:{NFSU2_TR(0x71ed66);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71ed6a:{NFSU2_TR(0x71ed6a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71ed6f:{NFSU2_TR(0x71ed6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ed72:{NFSU2_TR(0x71ed72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ed75:{NFSU2_TR(0x71ed75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ed78:{NFSU2_TR(0x71ed78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ed7b:{NFSU2_TR(0x71ed7b);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71ed7f:L71ed7f:{c.instructions+=15;NFSU2_TR(0x71ed7f);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ed83:{NFSU2_TR(0x71ed83);
__builtin_memmove((R+4928),(R+4800),16);
}
B71ed87:{NFSU2_TR(0x71ed87);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ed8b:{NFSU2_TR(0x71ed8b);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71ed8f:{NFSU2_TR(0x71ed8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ull))*u32(u32(0x8ull))));
wv<16>((R+4928),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4928)),rv<4>((U+0))));
}
B71ed94:{NFSU2_TR(0x71ed94);
__builtin_memmove((R+4943),(R+4615),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+4614),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+4613),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+4612),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+4611),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+4610),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+4609),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+4608),1);
}
B71ed98:{NFSU2_TR(0x71ed98);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4736))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4738))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4740))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4742))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+4744))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+4746))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+4748))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+4750))));
}
B71ed9c:{NFSU2_TR(0x71ed9c);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4928))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4930))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4932))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4934))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4936))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4938))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4940))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4942))));
}
B71eda0:{NFSU2_TR(0x71eda0);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71eda8:{NFSU2_TR(0x71eda8);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71edad:{NFSU2_TR(0x71edad);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71edb1:{NFSU2_TR(0x71edb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71edb4:{NFSU2_TR(0x71edb4);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71edb6:{NFSU2_TR(0x71edb6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71edb7:{NFSU2_TR(0x71edb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ed7fu);}goto L71ed7f;}}
}
B71edb9:L71edb9:{c.instructions+=4;NFSU2_TR(0x71edb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71edba:{NFSU2_TR(0x71edba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71edbb:{NFSU2_TR(0x71edbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71edbc:{NFSU2_TR(0x71edbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71edbd:L71edbd:{c.instructions+=13;NFSU2_TR(0x71edbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71edbe:{NFSU2_TR(0x71edbe);
__builtin_memmove((R+20),(R+16),4);
}
B71edc0:{NFSU2_TR(0x71edc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71edc1:{NFSU2_TR(0x71edc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71edc2:{NFSU2_TR(0x71edc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71edc5:{NFSU2_TR(0x71edc5);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4672),(U+0),16);
}
B71edc9:{NFSU2_TR(0x71edc9);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71edce:{NFSU2_TR(0x71edce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71edd1:{NFSU2_TR(0x71edd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71edd4:{NFSU2_TR(0x71edd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71edd7:{NFSU2_TR(0x71edd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71edda:{NFSU2_TR(0x71edda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71eddd:{NFSU2_TR(0x71eddd);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71ede1:L71ede1:{c.instructions+=14;NFSU2_TR(0x71ede1);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ede5:{NFSU2_TR(0x71ede5);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71ede9:{NFSU2_TR(0x71ede9);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(R+4686))));
}
B71eded:{NFSU2_TR(0x71eded);
u8 U[24];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4864),(U+8),16);
}
B71edf2:{NFSU2_TR(0x71edf2);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71edf6:{NFSU2_TR(0x71edf6);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4750))));
}
B71edfa:{NFSU2_TR(0x71edfa);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B71edfe:{NFSU2_TR(0x71edfe);
u8 U[16];
__builtin_memmove((U+0),gp(0x817af0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B71ee06:{NFSU2_TR(0x71ee06);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x7ull)));}
}
B71ee0b:{NFSU2_TR(0x71ee0b);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71ee0f:{NFSU2_TR(0x71ee0f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71ee11:{NFSU2_TR(0x71ee11);
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71ee13:{NFSU2_TR(0x71ee13);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B71ee14:{NFSU2_TR(0x71ee14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ede1u);}goto L71ede1;}}
}
B71ee16:L71ee16:{c.instructions+=4;NFSU2_TR(0x71ee16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ee17:{NFSU2_TR(0x71ee17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ee18:{NFSU2_TR(0x71ee18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ee19:{NFSU2_TR(0x71ee19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ee1a:L71ee1a:{c.instructions+=6;NFSU2_TR(0x71ee1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee1b:{NFSU2_TR(0x71ee1b);
__builtin_memmove((R+20),(R+16),4);
}
B71ee1d:{NFSU2_TR(0x71ee1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ee20:{NFSU2_TR(0x71ee20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ee23:{NFSU2_TR(0x71ee23);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B71ee25:{NFSU2_TR(0x71ee25);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L71ee2e;}}
}
B71ee27:L71ee27:{c.instructions+=3;NFSU2_TR(0x71ee27);
__builtin_memmove((R+0),(R+8),4);
}
B71ee29:{NFSU2_TR(0x71ee29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ee2c:{NFSU2_TR(0x71ee2c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71ee2e:L71ee2e:{c.instructions+=2;NFSU2_TR(0x71ee2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71ee31:{NFSU2_TR(0x71ee31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71ee56;}}
}
B71ee33:L71ee33:{c.instructions+=11;NFSU2_TR(0x71ee33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ee36:{NFSU2_TR(0x71ee36);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71ee39:{NFSU2_TR(0x71ee39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x817b00ull))));
}
B71ee3e:{NFSU2_TR(0x71ee3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee3f:{NFSU2_TR(0x71ee3f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee41:{NFSU2_TR(0x71ee41);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee43:{NFSU2_TR(0x71ee43);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee45:{NFSU2_TR(0x71ee45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71ee48:{NFSU2_TR(0x71ee48);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71ee4b:{NFSU2_TR(0x71ee4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee4c:{NFSU2_TR(0x71ee4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ee51ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71eb18u);}goto L71eb18;}
}
B71ee51:L71ee51:{c.instructions+=3;NFSU2_TR(0x71ee51);
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
B71ee54:{NFSU2_TR(0x71ee54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ee55:{NFSU2_TR(0x71ee55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ee56:L71ee56:{c.instructions+=3;NFSU2_TR(0x71ee56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ee59:{NFSU2_TR(0x71ee59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71ee5b:{NFSU2_TR(0x71ee5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71ee7a;}}
}
B71ee5d:L71ee5d:{c.instructions+=11;NFSU2_TR(0x71ee5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ee60:{NFSU2_TR(0x71ee60);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71ee63:{NFSU2_TR(0x71ee63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x817b00ull))));
}
B71ee68:{NFSU2_TR(0x71ee68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee69:{NFSU2_TR(0x71ee69);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee6b:{NFSU2_TR(0x71ee6b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee6d:{NFSU2_TR(0x71ee6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee6e:{NFSU2_TR(0x71ee6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee6f:{NFSU2_TR(0x71ee6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71ee72:{NFSU2_TR(0x71ee72);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee73:{NFSU2_TR(0x71ee73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ee78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71eb7eu);}goto L71eb7e;}
}
B71ee78:L71ee78:{c.instructions+=1;NFSU2_TR(0x71ee78);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ee51u);}goto L71ee51;}
}
B71ee7a:L71ee7a:{c.instructions+=4;NFSU2_TR(0x71ee7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee7b:{NFSU2_TR(0x71ee7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ee7e:{NFSU2_TR(0x71ee7e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71ee80:{NFSU2_TR(0x71ee80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71ee9b;}}
}
B71ee82:L71ee82:{c.instructions+=10;NFSU2_TR(0x71ee82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ee85:{NFSU2_TR(0x71ee85);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71ee88:{NFSU2_TR(0x71ee88);
w4(R+0,u32(0x817b00ull));
}
B71ee8d:{NFSU2_TR(0x71ee8d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71ee8f:{NFSU2_TR(0x71ee8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ee90:{NFSU2_TR(0x71ee90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ee93:{NFSU2_TR(0x71ee93);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71ee96:{NFSU2_TR(0x71ee96);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71ee98:{NFSU2_TR(0x71ee98);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71ee99:{NFSU2_TR(0x71ee99);
{goto L71eeb8;}
}
B71ee9b:L71ee9b:{c.instructions+=3;NFSU2_TR(0x71ee9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ee9e:{NFSU2_TR(0x71ee9e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B71eea0:{NFSU2_TR(0x71eea0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71eec6;}}
}
B71eea2:L71eea2:{c.instructions+=8;NFSU2_TR(0x71eea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71eea5:{NFSU2_TR(0x71eea5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71eea8:{NFSU2_TR(0x71eea8);
w4(R+0,u32(0x817b00ull));
}
B71eead:{NFSU2_TR(0x71eead);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71eeaf:{NFSU2_TR(0x71eeaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eeb0:{NFSU2_TR(0x71eeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71eeb3:{NFSU2_TR(0x71eeb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71eeb6:{NFSU2_TR(0x71eeb6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B71eeb8:L71eeb8:{c.instructions+=5;NFSU2_TR(0x71eeb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eeb9:{NFSU2_TR(0x71eeb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eeba:{NFSU2_TR(0x71eeba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71eebd:{NFSU2_TR(0x71eebd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eebe:{NFSU2_TR(0x71eebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71eec3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ebe2u);}goto L71ebe2;}
}
B71eec3:L71eec3:{c.instructions+=1;NFSU2_TR(0x71eec3);
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
B71eec6:L71eec6:{c.instructions+=3;NFSU2_TR(0x71eec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71eec7:{NFSU2_TR(0x71eec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71eec8:{NFSU2_TR(0x71eec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71eec9:L71eec9:{c.instructions+=14;NFSU2_TR(0x71eec9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eeca:{NFSU2_TR(0x71eeca);
__builtin_memmove((R+20),(R+16),4);
}
B71eecc:{NFSU2_TR(0x71eecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B71eed2:{NFSU2_TR(0x71eed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71eed5:{NFSU2_TR(0x71eed5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71eedb:{NFSU2_TR(0x71eedb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eedd:{NFSU2_TR(0x71eedd);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eedf:{NFSU2_TR(0x71eedf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eee1:{NFSU2_TR(0x71eee1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71eee4:{NFSU2_TR(0x71eee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eee5:{NFSU2_TR(0x71eee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71eee8:{NFSU2_TR(0x71eee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B71eeeb:{NFSU2_TR(0x71eeeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eeec:{NFSU2_TR(0x71eeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71eef1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e9e7u);}goto L71e9e7;}
}
B71eef1:L71eef1:{c.instructions+=9;NFSU2_TR(0x71eef1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71eef4:{NFSU2_TR(0x71eef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71eefa:{NFSU2_TR(0x71eefa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eefc:{NFSU2_TR(0x71eefc);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71eefe:{NFSU2_TR(0x71eefe);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef00:{NFSU2_TR(0x71ef00);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef02:{NFSU2_TR(0x71ef02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71ef05:{NFSU2_TR(0x71ef05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef06:{NFSU2_TR(0x71ef06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ef0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ea86u);}goto L71ea86;}
}
B71ef0b:L71ef0b:{c.instructions+=3;NFSU2_TR(0x71ef0b);
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
B71ef0e:{NFSU2_TR(0x71ef0e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71ef0f:{NFSU2_TR(0x71ef0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B71ef10:L71ef10:{c.instructions+=7;NFSU2_TR(0x71ef10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef11:{NFSU2_TR(0x71ef11);
__builtin_memmove((R+20),(R+16),4);
}
B71ef13:{NFSU2_TR(0x71ef13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B71ef19:{NFSU2_TR(0x71ef19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ef1c:{NFSU2_TR(0x71ef1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ef1f:{NFSU2_TR(0x71ef1f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B71ef21:{NFSU2_TR(0x71ef21);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L71ef2a;}}
}
B71ef23:L71ef23:{c.instructions+=3;NFSU2_TR(0x71ef23);
__builtin_memmove((R+0),(R+8),4);
}
B71ef25:{NFSU2_TR(0x71ef25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ef28:{NFSU2_TR(0x71ef28);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B71ef2a:L71ef2a:{c.instructions+=2;NFSU2_TR(0x71ef2a);
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
B71ef2c:{NFSU2_TR(0x71ef2c);
if(r1(R+518)){TAIL_STATIC(0x71f091u,71f);}
}
B71ef32:L71ef32:{c.instructions+=3;NFSU2_TR(0x71ef32);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B71ef36:{NFSU2_TR(0x71ef36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef37:{NFSU2_TR(0x71ef37);
if(r1(R+518)){{goto L71eff9;}}
}
B71ef3d:L71ef3d:{c.instructions+=4;NFSU2_TR(0x71ef3d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71ef40:{NFSU2_TR(0x71ef40);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef42:{NFSU2_TR(0x71ef42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ef43:{NFSU2_TR(0x71ef43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71ef6a;}}
}
B71ef45:L71ef45:{c.instructions+=12;NFSU2_TR(0x71ef45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ef48:{NFSU2_TR(0x71ef48);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71ef4b:{NFSU2_TR(0x71ef4b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x817c00ull))));
}
B71ef50:{NFSU2_TR(0x71ef50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef51:{NFSU2_TR(0x71ef51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef52:{NFSU2_TR(0x71ef52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef53:{NFSU2_TR(0x71ef53);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef55:{NFSU2_TR(0x71ef55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71ef58:{NFSU2_TR(0x71ef58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ef5e:{NFSU2_TR(0x71ef5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef5f:{NFSU2_TR(0x71ef5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef60:{NFSU2_TR(0x71ef60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ef65ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71e9e7u);}goto L71e9e7;}
}
B71ef65:L71ef65:{c.instructions+=2;NFSU2_TR(0x71ef65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B71ef68:{NFSU2_TR(0x71ef68);
{goto L71efe1;}
}
B71ef6a:L71ef6a:{c.instructions+=3;NFSU2_TR(0x71ef6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71ef6d:{NFSU2_TR(0x71ef6d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71ef6f:{NFSU2_TR(0x71ef6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71ef90;}}
}
B71ef71:L71ef71:{c.instructions+=12;NFSU2_TR(0x71ef71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71ef74:{NFSU2_TR(0x71ef74);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71ef77:{NFSU2_TR(0x71ef77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x817c00ull))));
}
B71ef7c:{NFSU2_TR(0x71ef7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef7d:{NFSU2_TR(0x71ef7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef7e:{NFSU2_TR(0x71ef7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef7f:{NFSU2_TR(0x71ef7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef80:{NFSU2_TR(0x71ef80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef81:{NFSU2_TR(0x71ef81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71ef87:{NFSU2_TR(0x71ef87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef88:{NFSU2_TR(0x71ef88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef89:{NFSU2_TR(0x71ef89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71ef8eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ea86u);}goto L71ea86;}
}
B71ef8e:L71ef8e:{c.instructions+=1;NFSU2_TR(0x71ef8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71ef65u);}goto L71ef65;}
}
B71ef90:L71ef90:{c.instructions+=4;NFSU2_TR(0x71ef90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71ef91:{NFSU2_TR(0x71ef91);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ef94:{NFSU2_TR(0x71ef94);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71ef96:{NFSU2_TR(0x71ef96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71efb1;}}
}
B71ef98:L71ef98:{c.instructions+=10;NFSU2_TR(0x71ef98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ef9b:{NFSU2_TR(0x71ef9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71ef9e:{NFSU2_TR(0x71ef9e);
w4(R+0,u32(0x817c00ull));
}
B71efa3:{NFSU2_TR(0x71efa3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71efa5:{NFSU2_TR(0x71efa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efa6:{NFSU2_TR(0x71efa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71efa9:{NFSU2_TR(0x71efa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71efac:{NFSU2_TR(0x71efac);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71efae:{NFSU2_TR(0x71efae);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71efaf:{NFSU2_TR(0x71efaf);
{goto L71efce;}
}
B71efb1:L71efb1:{c.instructions+=3;NFSU2_TR(0x71efb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71efb4:{NFSU2_TR(0x71efb4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71efb6:{NFSU2_TR(0x71efb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L71efe0;}}
}
B71efb8:L71efb8:{c.instructions+=8;NFSU2_TR(0x71efb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71efbb:{NFSU2_TR(0x71efbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71efbe:{NFSU2_TR(0x71efbe);
w4(R+0,u32(0x817c00ull));
}
B71efc3:{NFSU2_TR(0x71efc3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71efc5:{NFSU2_TR(0x71efc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efc6:{NFSU2_TR(0x71efc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71efc9:{NFSU2_TR(0x71efc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71efcc:{NFSU2_TR(0x71efcc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B71efce:L71efce:{c.instructions+=6;NFSU2_TR(0x71efce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efcf:{NFSU2_TR(0x71efcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efd0:{NFSU2_TR(0x71efd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71efd6:{NFSU2_TR(0x71efd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efd7:{NFSU2_TR(0x71efd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efd8:{NFSU2_TR(0x71efd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71efddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71eec9u);}goto L71eec9;}
}
B71efdd:L71efdd:{c.instructions+=1;NFSU2_TR(0x71efdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B71efe0:L71efe0:{c.instructions+=1;NFSU2_TR(0x71efe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71efe1:L71efe1:{c.instructions+=5;NFSU2_TR(0x71efe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efe2:{NFSU2_TR(0x71efe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B71efe5:{NFSU2_TR(0x71efe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71efeb:{NFSU2_TR(0x71efeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71efec:{NFSU2_TR(0x71efec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x71eff1ull));
TAIL_STATIC(0x71f093u,71f);
}
B71eff1:L71eff1:{c.instructions+=2;NFSU2_TR(0x71eff1);
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
B71eff4:{NFSU2_TR(0x71eff4);
TAIL_STATIC(0x71f090u,71f);
}
B71eff9:L71eff9:{c.instructions+=2;NFSU2_TR(0x71eff9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B71effc:{NFSU2_TR(0x71effc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x71f021u,71f);}
}
B71effe:L71effe:{c.instructions+=1;NFSU2_TR(0x71effe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x71f001u,71f);
}
XIT:NFSU2_TR_EXIT(0x71e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
