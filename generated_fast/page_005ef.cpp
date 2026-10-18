#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ef,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ef,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 page_5ef(Cpu& c){return body_5ef(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ef(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ef002:goto L5ef002;
case 0x5ef004:c.instructions+=1;goto B5ef004;
case 0x5ef006:goto L5ef006;
case 0x5ef010:c.instructions+=1;goto B5ef010;
case 0x5ef012:goto L5ef012;
case 0x5ef016:c.instructions+=3;goto B5ef016;
case 0x5ef01a:c.instructions+=2;goto B5ef01a;
case 0x5ef01d:c.instructions+=1;goto B5ef01d;
case 0x5ef01f:goto L5ef01f;
case 0x5ef022:c.instructions+=2;goto B5ef022;
case 0x5ef024:c.instructions+=1;goto B5ef024;
case 0x5ef026:goto L5ef026;
case 0x5ef02b:goto L5ef02b;
case 0x5ef02d:c.instructions+=1;goto B5ef02d;
case 0x5ef02f:goto L5ef02f;
case 0x5ef035:c.instructions+=14;goto B5ef035;
case 0x5ef038:c.instructions+=13;goto B5ef038;
case 0x5ef03c:c.instructions+=12;goto B5ef03c;
case 0x5ef040:c.instructions+=11;goto B5ef040;
case 0x5ef045:c.instructions+=10;goto B5ef045;
case 0x5ef047:c.instructions+=9;goto B5ef047;
case 0x5ef04b:c.instructions+=8;goto B5ef04b;
case 0x5ef051:c.instructions+=7;goto B5ef051;
case 0x5ef055:c.instructions+=6;goto B5ef055;
case 0x5ef05b:c.instructions+=5;goto B5ef05b;
case 0x5ef061:c.instructions+=4;goto B5ef061;
case 0x5ef063:c.instructions+=3;goto B5ef063;
case 0x5ef065:c.instructions+=2;goto B5ef065;
case 0x5ef068:c.instructions+=1;goto B5ef068;
case 0x5ef06a:goto L5ef06a;
case 0x5ef06f:c.instructions+=1;goto B5ef06f;
case 0x5ef072:goto L5ef072;
case 0x5ef077:c.instructions+=1;goto B5ef077;
case 0x5ef079:goto L5ef079;
case 0x5ef07b:c.instructions+=1;goto B5ef07b;
case 0x5ef07e:goto L5ef07e;
case 0x5ef080:c.instructions+=1;goto B5ef080;
case 0x5ef090:goto L5ef090;
case 0x5ef093:c.instructions+=13;goto B5ef093;
case 0x5ef099:c.instructions+=12;goto B5ef099;
case 0x5ef09b:c.instructions+=11;goto B5ef09b;
case 0x5ef09c:c.instructions+=10;goto B5ef09c;
case 0x5ef0a0:c.instructions+=9;goto B5ef0a0;
case 0x5ef0a4:c.instructions+=8;goto B5ef0a4;
case 0x5ef0a8:c.instructions+=7;goto B5ef0a8;
case 0x5ef0ac:c.instructions+=6;goto B5ef0ac;
case 0x5ef0af:c.instructions+=5;goto B5ef0af;
case 0x5ef0b0:c.instructions+=4;goto B5ef0b0;
case 0x5ef0b2:c.instructions+=3;goto B5ef0b2;
case 0x5ef0b4:c.instructions+=2;goto B5ef0b4;
case 0x5ef0b5:c.instructions+=1;goto B5ef0b5;
case 0x5ef0b7:goto L5ef0b7;
case 0x5ef0bc:c.instructions+=1;goto B5ef0bc;
case 0x5ef0c0:goto L5ef0c0;
case 0x5ef0c3:c.instructions+=6;goto B5ef0c3;
case 0x5ef0c5:c.instructions+=5;goto B5ef0c5;
case 0x5ef0ca:c.instructions+=4;goto B5ef0ca;
case 0x5ef0ce:c.instructions+=3;goto B5ef0ce;
case 0x5ef0cf:c.instructions+=2;goto B5ef0cf;
case 0x5ef0d0:c.instructions+=1;goto B5ef0d0;
case 0x5ef0d5:goto L5ef0d5;
case 0x5ef0d8:c.instructions+=2;goto B5ef0d8;
case 0x5ef0dc:c.instructions+=1;goto B5ef0dc;
case 0x5ef0e1:goto L5ef0e1;
case 0x5ef0e3:c.instructions+=1;goto B5ef0e3;
case 0x5ef0e5:goto L5ef0e5;
case 0x5ef0e7:c.instructions+=5;goto B5ef0e7;
case 0x5ef0ec:c.instructions+=4;goto B5ef0ec;
case 0x5ef0f0:c.instructions+=3;goto B5ef0f0;
case 0x5ef0f1:c.instructions+=2;goto B5ef0f1;
case 0x5ef0f2:c.instructions+=1;goto B5ef0f2;
case 0x5ef0f7:goto L5ef0f7;
case 0x5ef0fa:c.instructions+=2;goto B5ef0fa;
case 0x5ef0fe:c.instructions+=1;goto B5ef0fe;
case 0x5ef103:goto L5ef103;
case 0x5ef109:c.instructions+=5;goto B5ef109;
case 0x5ef10c:c.instructions+=4;goto B5ef10c;
case 0x5ef10d:c.instructions+=3;goto B5ef10d;
case 0x5ef110:c.instructions+=2;goto B5ef110;
case 0x5ef112:c.instructions+=1;goto B5ef112;
case 0x5ef114:goto L5ef114;
case 0x5ef116:goto L5ef116;
case 0x5ef119:c.instructions+=5;goto B5ef119;
case 0x5ef11c:c.instructions+=4;goto B5ef11c;
case 0x5ef11e:c.instructions+=3;goto B5ef11e;
case 0x5ef120:c.instructions+=2;goto B5ef120;
case 0x5ef124:c.instructions+=1;goto B5ef124;
case 0x5ef12a:goto L5ef12a;
case 0x5ef130:goto L5ef130;
case 0x5ef132:c.instructions+=8;goto B5ef132;
case 0x5ef136:c.instructions+=7;goto B5ef136;
case 0x5ef139:c.instructions+=6;goto B5ef139;
case 0x5ef13f:c.instructions+=5;goto B5ef13f;
case 0x5ef141:c.instructions+=4;goto B5ef141;
case 0x5ef147:c.instructions+=3;goto B5ef147;
case 0x5ef149:c.instructions+=2;goto B5ef149;
case 0x5ef14c:c.instructions+=1;goto B5ef14c;
case 0x5ef152:goto L5ef152;
case 0x5ef157:c.instructions+=8;goto B5ef157;
case 0x5ef15a:c.instructions+=7;goto B5ef15a;
case 0x5ef15d:c.instructions+=6;goto B5ef15d;
case 0x5ef160:c.instructions+=5;goto B5ef160;
case 0x5ef166:c.instructions+=4;goto B5ef166;
case 0x5ef16a:c.instructions+=3;goto B5ef16a;
case 0x5ef16c:c.instructions+=2;goto B5ef16c;
case 0x5ef16f:c.instructions+=1;goto B5ef16f;
case 0x5ef171:goto L5ef171;
case 0x5ef174:c.instructions+=1;goto B5ef174;
case 0x5ef176:goto L5ef176;
case 0x5ef177:c.instructions+=1;goto B5ef177;
case 0x5ef17c:goto L5ef17c;
case 0x5ef180:c.instructions+=7;goto B5ef180;
case 0x5ef184:c.instructions+=6;goto B5ef184;
case 0x5ef187:c.instructions+=5;goto B5ef187;
case 0x5ef18a:c.instructions+=4;goto B5ef18a;
case 0x5ef192:c.instructions+=3;goto B5ef192;
case 0x5ef195:c.instructions+=2;goto B5ef195;
case 0x5ef197:c.instructions+=1;goto B5ef197;
case 0x5ef199:goto L5ef199;
case 0x5ef1a0:c.instructions+=8;goto B5ef1a0;
case 0x5ef1a2:c.instructions+=7;goto B5ef1a2;
case 0x5ef1a4:c.instructions+=6;goto B5ef1a4;
case 0x5ef1a9:c.instructions+=5;goto B5ef1a9;
case 0x5ef1ac:c.instructions+=4;goto B5ef1ac;
case 0x5ef1ad:c.instructions+=3;goto B5ef1ad;
case 0x5ef1af:c.instructions+=2;goto B5ef1af;
case 0x5ef1b3:c.instructions+=1;goto B5ef1b3;
case 0x5ef1b8:goto L5ef1b8;
case 0x5ef1b9:c.instructions+=2;goto B5ef1b9;
case 0x5ef1bd:c.instructions+=1;goto B5ef1bd;
case 0x5ef1c2:goto L5ef1c2;
case 0x5ef1c4:c.instructions+=6;goto B5ef1c4;
case 0x5ef1c6:c.instructions+=5;goto B5ef1c6;
case 0x5ef1ca:c.instructions+=4;goto B5ef1ca;
case 0x5ef1cd:c.instructions+=3;goto B5ef1cd;
case 0x5ef1ce:c.instructions+=2;goto B5ef1ce;
case 0x5ef1d0:c.instructions+=1;goto B5ef1d0;
case 0x5ef1d3:goto L5ef1d3;
case 0x5ef1d5:c.instructions+=2;goto B5ef1d5;
case 0x5ef1d7:c.instructions+=1;goto B5ef1d7;
case 0x5ef1dc:goto L5ef1dc;
case 0x5ef1de:c.instructions+=3;goto B5ef1de;
case 0x5ef1df:c.instructions+=2;goto B5ef1df;
case 0x5ef1e1:c.instructions+=1;goto B5ef1e1;
case 0x5ef1e4:goto L5ef1e4;
case 0x5ef1e9:goto L5ef1e9;
case 0x5ef1ee:c.instructions+=2;goto B5ef1ee;
case 0x5ef1f0:c.instructions+=1;goto B5ef1f0;
case 0x5ef1f2:goto L5ef1f2;
case 0x5ef1f7:c.instructions+=2;goto B5ef1f7;
case 0x5ef1f9:c.instructions+=1;goto B5ef1f9;
case 0x5ef1fb:goto L5ef1fb;
case 0x5ef205:c.instructions+=1;goto B5ef205;
case 0x5ef207:goto L5ef207;
case 0x5ef20c:c.instructions+=2;goto B5ef20c;
case 0x5ef20e:c.instructions+=1;goto B5ef20e;
case 0x5ef210:goto L5ef210;
case 0x5ef217:c.instructions+=1;goto B5ef217;
case 0x5ef219:goto L5ef219;
case 0x5ef21b:c.instructions+=3;goto B5ef21b;
case 0x5ef21d:c.instructions+=2;goto B5ef21d;
case 0x5ef21f:c.instructions+=1;goto B5ef21f;
case 0x5ef222:goto L5ef222;
case 0x5ef225:c.instructions+=2;goto B5ef225;
case 0x5ef227:c.instructions+=1;goto B5ef227;
case 0x5ef229:goto L5ef229;
case 0x5ef22b:c.instructions+=3;goto B5ef22b;
case 0x5ef22d:c.instructions+=2;goto B5ef22d;
case 0x5ef22f:c.instructions+=1;goto B5ef22f;
case 0x5ef232:goto L5ef232;
case 0x5ef235:c.instructions+=2;goto B5ef235;
case 0x5ef237:c.instructions+=1;goto B5ef237;
case 0x5ef239:goto L5ef239;
case 0x5ef23b:c.instructions+=2;goto B5ef23b;
case 0x5ef23d:c.instructions+=1;goto B5ef23d;
case 0x5ef242:goto L5ef242;
case 0x5ef244:goto L5ef244;
case 0x5ef246:c.instructions+=3;goto B5ef246;
case 0x5ef248:c.instructions+=2;goto B5ef248;
case 0x5ef24a:c.instructions+=1;goto B5ef24a;
case 0x5ef24d:goto L5ef24d;
case 0x5ef250:c.instructions+=2;goto B5ef250;
case 0x5ef252:c.instructions+=1;goto B5ef252;
case 0x5ef254:goto L5ef254;
case 0x5ef256:c.instructions+=3;goto B5ef256;
case 0x5ef258:c.instructions+=2;goto B5ef258;
case 0x5ef25a:c.instructions+=1;goto B5ef25a;
case 0x5ef25d:goto L5ef25d;
case 0x5ef260:c.instructions+=2;goto B5ef260;
case 0x5ef262:c.instructions+=1;goto B5ef262;
case 0x5ef264:goto L5ef264;
case 0x5ef266:c.instructions+=2;goto B5ef266;
case 0x5ef268:c.instructions+=1;goto B5ef268;
case 0x5ef26d:goto L5ef26d;
case 0x5ef270:c.instructions+=12;goto B5ef270;
case 0x5ef273:c.instructions+=11;goto B5ef273;
case 0x5ef275:c.instructions+=10;goto B5ef275;
case 0x5ef277:c.instructions+=9;goto B5ef277;
case 0x5ef27a:c.instructions+=8;goto B5ef27a;
case 0x5ef27f:c.instructions+=7;goto B5ef27f;
case 0x5ef284:c.instructions+=6;goto B5ef284;
case 0x5ef287:c.instructions+=5;goto B5ef287;
case 0x5ef288:c.instructions+=4;goto B5ef288;
case 0x5ef289:c.instructions+=3;goto B5ef289;
case 0x5ef28a:c.instructions+=2;goto B5ef28a;
case 0x5ef28b:c.instructions+=1;goto B5ef28b;
case 0x5ef290:goto L5ef290;
case 0x5ef292:c.instructions+=4;goto B5ef292;
case 0x5ef295:c.instructions+=3;goto B5ef295;
case 0x5ef296:c.instructions+=2;goto B5ef296;
case 0x5ef298:c.instructions+=1;goto B5ef298;
case 0x5ef29b:goto L5ef29b;
case 0x5ef29d:c.instructions+=1;goto B5ef29d;
case 0x5ef2a2:goto L5ef2a2;
case 0x5ef2a6:c.instructions+=2;goto B5ef2a6;
case 0x5ef2a9:c.instructions+=1;goto B5ef2a9;
case 0x5ef2ad:goto L5ef2ad;
case 0x5ef2b1:c.instructions+=1;goto B5ef2b1;
case 0x5ef2b6:goto L5ef2b6;
case 0x5ef2bc:c.instructions+=1;goto B5ef2bc;
case 0x5ef2c0:goto L5ef2c0;
case 0x5ef2c3:c.instructions+=6;goto B5ef2c3;
case 0x5ef2c6:c.instructions+=5;goto B5ef2c6;
case 0x5ef2c7:c.instructions+=4;goto B5ef2c7;
case 0x5ef2c9:c.instructions+=3;goto B5ef2c9;
case 0x5ef2cb:c.instructions+=2;goto B5ef2cb;
case 0x5ef2cf:c.instructions+=1;goto B5ef2cf;
case 0x5ef2d5:goto L5ef2d5;
case 0x5ef2d6:c.instructions+=4;goto B5ef2d6;
case 0x5ef2d7:c.instructions+=3;goto B5ef2d7;
case 0x5ef2d8:c.instructions+=2;goto B5ef2d8;
case 0x5ef2db:c.instructions+=1;goto B5ef2db;
case 0x5ef2e0:goto L5ef2e0;
case 0x5ef2e1:c.instructions+=2;goto B5ef2e1;
case 0x5ef2e4:c.instructions+=1;goto B5ef2e4;
case 0x5ef2e6:goto L5ef2e6;
case 0x5ef2eb:c.instructions+=10;goto B5ef2eb;
case 0x5ef2ee:c.instructions+=9;goto B5ef2ee;
case 0x5ef2f1:c.instructions+=8;goto B5ef2f1;
case 0x5ef2f7:c.instructions+=7;goto B5ef2f7;
case 0x5ef2f9:c.instructions+=6;goto B5ef2f9;
case 0x5ef2fd:c.instructions+=5;goto B5ef2fd;
case 0x5ef301:c.instructions+=4;goto B5ef301;
case 0x5ef307:c.instructions+=3;goto B5ef307;
case 0x5ef309:c.instructions+=2;goto B5ef309;
case 0x5ef30a:c.instructions+=1;goto B5ef30a;
case 0x5ef30b:goto L5ef30b;
case 0x5ef30e:c.instructions+=2;goto B5ef30e;
case 0x5ef310:c.instructions+=1;goto B5ef310;
case 0x5ef312:goto L5ef312;
case 0x5ef317:c.instructions+=1;goto B5ef317;
case 0x5ef319:goto L5ef319;
case 0x5ef31f:c.instructions+=7;goto B5ef31f;
case 0x5ef321:c.instructions+=6;goto B5ef321;
case 0x5ef325:c.instructions+=5;goto B5ef325;
case 0x5ef329:c.instructions+=4;goto B5ef329;
case 0x5ef32f:c.instructions+=3;goto B5ef32f;
case 0x5ef331:c.instructions+=2;goto B5ef331;
case 0x5ef332:c.instructions+=1;goto B5ef332;
case 0x5ef333:goto L5ef333;
case 0x5ef339:c.instructions+=3;goto B5ef339;
case 0x5ef33b:c.instructions+=2;goto B5ef33b;
case 0x5ef33c:c.instructions+=1;goto B5ef33c;
case 0x5ef340:goto L5ef340;
case 0x5ef342:c.instructions+=38;goto B5ef342;
case 0x5ef345:c.instructions+=37;goto B5ef345;
case 0x5ef34b:c.instructions+=36;goto B5ef34b;
case 0x5ef351:c.instructions+=35;goto B5ef351;
case 0x5ef357:c.instructions+=34;goto B5ef357;
case 0x5ef35a:c.instructions+=33;goto B5ef35a;
case 0x5ef35c:c.instructions+=32;goto B5ef35c;
case 0x5ef35f:c.instructions+=31;goto B5ef35f;
case 0x5ef362:c.instructions+=30;goto B5ef362;
case 0x5ef368:c.instructions+=29;goto B5ef368;
case 0x5ef36e:c.instructions+=28;goto B5ef36e;
case 0x5ef374:c.instructions+=27;goto B5ef374;
case 0x5ef377:c.instructions+=26;goto B5ef377;
case 0x5ef379:c.instructions+=25;goto B5ef379;
case 0x5ef37c:c.instructions+=24;goto B5ef37c;
case 0x5ef37f:c.instructions+=23;goto B5ef37f;
case 0x5ef385:c.instructions+=22;goto B5ef385;
case 0x5ef38b:c.instructions+=21;goto B5ef38b;
case 0x5ef391:c.instructions+=20;goto B5ef391;
case 0x5ef394:c.instructions+=19;goto B5ef394;
case 0x5ef396:c.instructions+=18;goto B5ef396;
case 0x5ef399:c.instructions+=17;goto B5ef399;
case 0x5ef39c:c.instructions+=16;goto B5ef39c;
case 0x5ef39f:c.instructions+=15;goto B5ef39f;
case 0x5ef3a2:c.instructions+=14;goto B5ef3a2;
case 0x5ef3a5:c.instructions+=13;goto B5ef3a5;
case 0x5ef3a8:c.instructions+=12;goto B5ef3a8;
case 0x5ef3ab:c.instructions+=11;goto B5ef3ab;
case 0x5ef3ae:c.instructions+=10;goto B5ef3ae;
case 0x5ef3b1:c.instructions+=9;goto B5ef3b1;
case 0x5ef3b4:c.instructions+=8;goto B5ef3b4;
case 0x5ef3b7:c.instructions+=7;goto B5ef3b7;
case 0x5ef3ba:c.instructions+=6;goto B5ef3ba;
case 0x5ef3bd:c.instructions+=5;goto B5ef3bd;
case 0x5ef3c0:c.instructions+=4;goto B5ef3c0;
case 0x5ef3c3:c.instructions+=3;goto B5ef3c3;
case 0x5ef3c6:c.instructions+=2;goto B5ef3c6;
case 0x5ef3c9:c.instructions+=1;goto B5ef3c9;
case 0x5ef3d0:goto L5ef3d0;
case 0x5ef3d1:c.instructions+=22;goto B5ef3d1;
case 0x5ef3d3:c.instructions+=21;goto B5ef3d3;
case 0x5ef3d4:c.instructions+=20;goto B5ef3d4;
case 0x5ef3d8:c.instructions+=19;goto B5ef3d8;
case 0x5ef3db:c.instructions+=18;goto B5ef3db;
case 0x5ef3de:c.instructions+=17;goto B5ef3de;
case 0x5ef3e1:c.instructions+=16;goto B5ef3e1;
case 0x5ef3e4:c.instructions+=15;goto B5ef3e4;
case 0x5ef3e6:c.instructions+=14;goto B5ef3e6;
case 0x5ef3ec:c.instructions+=13;goto B5ef3ec;
case 0x5ef3ef:c.instructions+=12;goto B5ef3ef;
case 0x5ef3f0:c.instructions+=11;goto B5ef3f0;
case 0x5ef3f3:c.instructions+=10;goto B5ef3f3;
case 0x5ef3f6:c.instructions+=9;goto B5ef3f6;
case 0x5ef3f9:c.instructions+=8;goto B5ef3f9;
case 0x5ef3fc:c.instructions+=7;goto B5ef3fc;
case 0x5ef3fd:c.instructions+=6;goto B5ef3fd;
case 0x5ef400:c.instructions+=5;goto B5ef400;
case 0x5ef403:c.instructions+=4;goto B5ef403;
case 0x5ef405:c.instructions+=3;goto B5ef405;
case 0x5ef408:c.instructions+=2;goto B5ef408;
case 0x5ef40b:c.instructions+=1;goto B5ef40b;
case 0x5ef410:goto L5ef410;
case 0x5ef416:c.instructions+=28;goto B5ef416;
case 0x5ef41c:c.instructions+=27;goto B5ef41c;
case 0x5ef422:c.instructions+=26;goto B5ef422;
case 0x5ef425:c.instructions+=25;goto B5ef425;
case 0x5ef427:c.instructions+=24;goto B5ef427;
case 0x5ef429:c.instructions+=23;goto B5ef429;
case 0x5ef42c:c.instructions+=22;goto B5ef42c;
case 0x5ef42e:c.instructions+=21;goto B5ef42e;
case 0x5ef431:c.instructions+=20;goto B5ef431;
case 0x5ef434:c.instructions+=19;goto B5ef434;
case 0x5ef437:c.instructions+=18;goto B5ef437;
case 0x5ef43a:c.instructions+=17;goto B5ef43a;
case 0x5ef43c:c.instructions+=16;goto B5ef43c;
case 0x5ef43f:c.instructions+=15;goto B5ef43f;
case 0x5ef442:c.instructions+=14;goto B5ef442;
case 0x5ef445:c.instructions+=13;goto B5ef445;
case 0x5ef448:c.instructions+=12;goto B5ef448;
case 0x5ef44a:c.instructions+=11;goto B5ef44a;
case 0x5ef44d:c.instructions+=10;goto B5ef44d;
case 0x5ef450:c.instructions+=9;goto B5ef450;
case 0x5ef453:c.instructions+=8;goto B5ef453;
case 0x5ef456:c.instructions+=7;goto B5ef456;
case 0x5ef459:c.instructions+=6;goto B5ef459;
case 0x5ef45b:c.instructions+=5;goto B5ef45b;
case 0x5ef45e:c.instructions+=4;goto B5ef45e;
case 0x5ef45f:c.instructions+=3;goto B5ef45f;
case 0x5ef462:c.instructions+=2;goto B5ef462;
case 0x5ef463:c.instructions+=1;goto B5ef463;
case 0x5ef470:goto L5ef470;
case 0x5ef471:c.instructions+=22;goto B5ef471;
case 0x5ef473:c.instructions+=21;goto B5ef473;
case 0x5ef476:c.instructions+=20;goto B5ef476;
case 0x5ef479:c.instructions+=19;goto B5ef479;
case 0x5ef47a:c.instructions+=18;goto B5ef47a;
case 0x5ef47d:c.instructions+=17;goto B5ef47d;
case 0x5ef47e:c.instructions+=16;goto B5ef47e;
case 0x5ef480:c.instructions+=15;goto B5ef480;
case 0x5ef483:c.instructions+=14;goto B5ef483;
case 0x5ef486:c.instructions+=13;goto B5ef486;
case 0x5ef487:c.instructions+=12;goto B5ef487;
case 0x5ef48b:c.instructions+=11;goto B5ef48b;
case 0x5ef48e:c.instructions+=10;goto B5ef48e;
case 0x5ef48f:c.instructions+=9;goto B5ef48f;
case 0x5ef493:c.instructions+=8;goto B5ef493;
case 0x5ef494:c.instructions+=7;goto B5ef494;
case 0x5ef497:c.instructions+=6;goto B5ef497;
case 0x5ef49d:c.instructions+=5;goto B5ef49d;
case 0x5ef49e:c.instructions+=4;goto B5ef49e;
case 0x5ef49f:c.instructions+=3;goto B5ef49f;
case 0x5ef4a3:c.instructions+=2;goto B5ef4a3;
case 0x5ef4a7:c.instructions+=1;goto B5ef4a7;
case 0x5ef4ac:goto L5ef4ac;
case 0x5ef4af:c.instructions+=10;goto B5ef4af;
case 0x5ef4b1:c.instructions+=9;goto B5ef4b1;
case 0x5ef4b5:c.instructions+=8;goto B5ef4b5;
case 0x5ef4b8:c.instructions+=7;goto B5ef4b8;
case 0x5ef4bb:c.instructions+=6;goto B5ef4bb;
case 0x5ef4bf:c.instructions+=5;goto B5ef4bf;
case 0x5ef4c5:c.instructions+=4;goto B5ef4c5;
case 0x5ef4c9:c.instructions+=3;goto B5ef4c9;
case 0x5ef4cb:c.instructions+=2;goto B5ef4cb;
case 0x5ef4ce:c.instructions+=1;goto B5ef4ce;
case 0x5ef4d0:goto L5ef4d0;
case 0x5ef4d6:c.instructions+=2;goto B5ef4d6;
case 0x5ef4da:c.instructions+=1;goto B5ef4da;
case 0x5ef4de:goto L5ef4de;
case 0x5ef4df:c.instructions+=6;goto B5ef4df;
case 0x5ef4e3:c.instructions+=5;goto B5ef4e3;
case 0x5ef4e6:c.instructions+=4;goto B5ef4e6;
case 0x5ef4e7:c.instructions+=3;goto B5ef4e7;
case 0x5ef4e8:c.instructions+=2;goto B5ef4e8;
case 0x5ef4e9:c.instructions+=1;goto B5ef4e9;
case 0x5ef4ee:goto L5ef4ee;
case 0x5ef4f1:c.instructions+=6;goto B5ef4f1;
case 0x5ef4f2:c.instructions+=5;goto B5ef4f2;
case 0x5ef4f5:c.instructions+=4;goto B5ef4f5;
case 0x5ef4f6:c.instructions+=3;goto B5ef4f6;
case 0x5ef4fa:c.instructions+=2;goto B5ef4fa;
case 0x5ef4fb:c.instructions+=1;goto B5ef4fb;
case 0x5ef500:goto L5ef500;
case 0x5ef506:c.instructions+=9;goto B5ef506;
case 0x5ef509:c.instructions+=8;goto B5ef509;
case 0x5ef50c:c.instructions+=7;goto B5ef50c;
case 0x5ef510:c.instructions+=6;goto B5ef510;
case 0x5ef516:c.instructions+=5;goto B5ef516;
case 0x5ef519:c.instructions+=4;goto B5ef519;
case 0x5ef51a:c.instructions+=3;goto B5ef51a;
case 0x5ef51b:c.instructions+=2;goto B5ef51b;
case 0x5ef51c:c.instructions+=1;goto B5ef51c;
case 0x5ef521:goto L5ef521;
case 0x5ef522:c.instructions+=2;goto B5ef522;
case 0x5ef523:c.instructions+=1;goto B5ef523;
case 0x5ef528:goto L5ef528;
case 0x5ef52b:c.instructions+=7;goto B5ef52b;
case 0x5ef52e:c.instructions+=6;goto B5ef52e;
case 0x5ef531:c.instructions+=5;goto B5ef531;
case 0x5ef534:c.instructions+=4;goto B5ef534;
case 0x5ef537:c.instructions+=3;goto B5ef537;
case 0x5ef539:c.instructions+=2;goto B5ef539;
case 0x5ef53c:c.instructions+=1;goto B5ef53c;
case 0x5ef53e:goto L5ef53e;
case 0x5ef543:c.instructions+=6;goto B5ef543;
case 0x5ef544:c.instructions+=5;goto B5ef544;
case 0x5ef545:c.instructions+=4;goto B5ef545;
case 0x5ef546:c.instructions+=3;goto B5ef546;
case 0x5ef548:c.instructions+=2;goto B5ef548;
case 0x5ef549:c.instructions+=1;goto B5ef549;
case 0x5ef54c:goto L5ef54c;
case 0x5ef54d:c.instructions+=6;goto B5ef54d;
case 0x5ef54e:c.instructions+=5;goto B5ef54e;
case 0x5ef550:c.instructions+=4;goto B5ef550;
case 0x5ef551:c.instructions+=3;goto B5ef551;
case 0x5ef553:c.instructions+=2;goto B5ef553;
case 0x5ef554:c.instructions+=1;goto B5ef554;
case 0x5ef560:goto L5ef560;
case 0x5ef561:c.instructions+=8;goto B5ef561;
case 0x5ef564:c.instructions+=7;goto B5ef564;
case 0x5ef567:c.instructions+=6;goto B5ef567;
case 0x5ef56d:c.instructions+=5;goto B5ef56d;
case 0x5ef571:c.instructions+=4;goto B5ef571;
case 0x5ef577:c.instructions+=3;goto B5ef577;
case 0x5ef579:c.instructions+=2;goto B5ef579;
case 0x5ef57c:c.instructions+=1;goto B5ef57c;
case 0x5ef57e:goto L5ef57e;
case 0x5ef582:c.instructions+=5;goto B5ef582;
case 0x5ef588:c.instructions+=4;goto B5ef588;
case 0x5ef58c:c.instructions+=3;goto B5ef58c;
case 0x5ef58e:c.instructions+=2;goto B5ef58e;
case 0x5ef591:c.instructions+=1;goto B5ef591;
case 0x5ef593:goto L5ef593;
case 0x5ef595:c.instructions+=1;goto B5ef595;
case 0x5ef59b:goto L5ef59b;
case 0x5ef59c:c.instructions+=1;goto B5ef59c;
case 0x5ef59d:goto L5ef59d;
case 0x5ef5a3:c.instructions+=2;goto B5ef5a3;
case 0x5ef5a4:c.instructions+=1;goto B5ef5a4;
case 0x5ef5b0:goto L5ef5b0;
case 0x5ef5b6:c.instructions+=1;goto B5ef5b6;
case 0x5ef5c0:goto L5ef5c0;
case 0x5ef5c4:c.instructions+=2;goto B5ef5c4;
case 0x5ef5c6:c.instructions+=1;goto B5ef5c6;
case 0x5ef5c8:goto L5ef5c8;
case 0x5ef5cc:c.instructions+=2;goto B5ef5cc;
case 0x5ef5ce:c.instructions+=1;goto B5ef5ce;
case 0x5ef5d0:goto L5ef5d0;
case 0x5ef5d3:c.instructions+=22;goto B5ef5d3;
case 0x5ef5d6:c.instructions+=21;goto B5ef5d6;
case 0x5ef5dc:c.instructions+=20;goto B5ef5dc;
case 0x5ef5de:c.instructions+=19;goto B5ef5de;
case 0x5ef5e4:c.instructions+=18;goto B5ef5e4;
case 0x5ef5e6:c.instructions+=17;goto B5ef5e6;
case 0x5ef5ec:c.instructions+=16;goto B5ef5ec;
case 0x5ef5f2:c.instructions+=15;goto B5ef5f2;
case 0x5ef5f8:c.instructions+=14;goto B5ef5f8;
case 0x5ef5fe:c.instructions+=13;goto B5ef5fe;
case 0x5ef601:c.instructions+=12;goto B5ef601;
case 0x5ef604:c.instructions+=11;goto B5ef604;
case 0x5ef60a:c.instructions+=10;goto B5ef60a;
case 0x5ef60c:c.instructions+=9;goto B5ef60c;
case 0x5ef612:c.instructions+=8;goto B5ef612;
case 0x5ef614:c.instructions+=7;goto B5ef614;
case 0x5ef61a:c.instructions+=6;goto B5ef61a;
case 0x5ef620:c.instructions+=5;goto B5ef620;
case 0x5ef626:c.instructions+=4;goto B5ef626;
case 0x5ef62c:c.instructions+=3;goto B5ef62c;
case 0x5ef632:c.instructions+=2;goto B5ef632;
case 0x5ef633:c.instructions+=1;goto B5ef633;
case 0x5ef639:goto L5ef639;
case 0x5ef640:goto L5ef640;
case 0x5ef641:c.instructions+=6;goto B5ef641;
case 0x5ef643:c.instructions+=5;goto B5ef643;
case 0x5ef644:c.instructions+=4;goto B5ef644;
case 0x5ef64a:c.instructions+=3;goto B5ef64a;
case 0x5ef64c:c.instructions+=2;goto B5ef64c;
case 0x5ef64f:c.instructions+=1;goto B5ef64f;
case 0x5ef655:goto L5ef655;
case 0x5ef658:c.instructions+=40;goto B5ef658;
case 0x5ef65b:c.instructions+=39;goto B5ef65b;
case 0x5ef661:c.instructions+=38;goto B5ef661;
case 0x5ef667:c.instructions+=37;goto B5ef667;
case 0x5ef66d:c.instructions+=36;goto B5ef66d;
case 0x5ef66f:c.instructions+=35;goto B5ef66f;
case 0x5ef675:c.instructions+=34;goto B5ef675;
case 0x5ef677:c.instructions+=33;goto B5ef677;
case 0x5ef679:c.instructions+=32;goto B5ef679;
case 0x5ef67b:c.instructions+=31;goto B5ef67b;
case 0x5ef67e:c.instructions+=30;goto B5ef67e;
case 0x5ef680:c.instructions+=29;goto B5ef680;
case 0x5ef683:c.instructions+=28;goto B5ef683;
case 0x5ef689:c.instructions+=27;goto B5ef689;
case 0x5ef68f:c.instructions+=26;goto B5ef68f;
case 0x5ef692:c.instructions+=25;goto B5ef692;
case 0x5ef695:c.instructions+=24;goto B5ef695;
case 0x5ef697:c.instructions+=23;goto B5ef697;
case 0x5ef69d:c.instructions+=22;goto B5ef69d;
case 0x5ef69f:c.instructions+=21;goto B5ef69f;
case 0x5ef6a1:c.instructions+=20;goto B5ef6a1;
case 0x5ef6a4:c.instructions+=19;goto B5ef6a4;
case 0x5ef6a7:c.instructions+=18;goto B5ef6a7;
case 0x5ef6a9:c.instructions+=17;goto B5ef6a9;
case 0x5ef6ac:c.instructions+=16;goto B5ef6ac;
case 0x5ef6b2:c.instructions+=15;goto B5ef6b2;
case 0x5ef6b4:c.instructions+=14;goto B5ef6b4;
case 0x5ef6ba:c.instructions+=13;goto B5ef6ba;
case 0x5ef6c0:c.instructions+=12;goto B5ef6c0;
case 0x5ef6c6:c.instructions+=11;goto B5ef6c6;
case 0x5ef6c8:c.instructions+=10;goto B5ef6c8;
case 0x5ef6ce:c.instructions+=9;goto B5ef6ce;
case 0x5ef6d4:c.instructions+=8;goto B5ef6d4;
case 0x5ef6d9:c.instructions+=7;goto B5ef6d9;
case 0x5ef6df:c.instructions+=6;goto B5ef6df;
case 0x5ef6e5:c.instructions+=5;goto B5ef6e5;
case 0x5ef6eb:c.instructions+=4;goto B5ef6eb;
case 0x5ef6ed:c.instructions+=3;goto B5ef6ed;
case 0x5ef6f3:c.instructions+=2;goto B5ef6f3;
case 0x5ef6f9:c.instructions+=1;goto B5ef6f9;
case 0x5ef703:goto L5ef703;
case 0x5ef705:c.instructions+=2;goto B5ef705;
case 0x5ef706:c.instructions+=1;goto B5ef706;
case 0x5ef710:goto L5ef710;
case 0x5ef712:c.instructions+=71;goto B5ef712;
case 0x5ef716:c.instructions+=70;goto B5ef716;
case 0x5ef718:c.instructions+=69;goto B5ef718;
case 0x5ef71a:c.instructions+=68;goto B5ef71a;
case 0x5ef71d:c.instructions+=67;goto B5ef71d;
case 0x5ef720:c.instructions+=66;goto B5ef720;
case 0x5ef723:c.instructions+=65;goto B5ef723;
case 0x5ef726:c.instructions+=64;goto B5ef726;
case 0x5ef729:c.instructions+=63;goto B5ef729;
case 0x5ef72c:c.instructions+=62;goto B5ef72c;
case 0x5ef72f:c.instructions+=61;goto B5ef72f;
case 0x5ef732:c.instructions+=60;goto B5ef732;
case 0x5ef734:c.instructions+=59;goto B5ef734;
case 0x5ef737:c.instructions+=58;goto B5ef737;
case 0x5ef738:c.instructions+=57;goto B5ef738;
case 0x5ef739:c.instructions+=56;goto B5ef739;
case 0x5ef73c:c.instructions+=55;goto B5ef73c;
case 0x5ef73f:c.instructions+=54;goto B5ef73f;
case 0x5ef742:c.instructions+=53;goto B5ef742;
case 0x5ef745:c.instructions+=52;goto B5ef745;
case 0x5ef748:c.instructions+=51;goto B5ef748;
case 0x5ef74b:c.instructions+=50;goto B5ef74b;
case 0x5ef74d:c.instructions+=49;goto B5ef74d;
case 0x5ef750:c.instructions+=48;goto B5ef750;
case 0x5ef753:c.instructions+=47;goto B5ef753;
case 0x5ef756:c.instructions+=46;goto B5ef756;
case 0x5ef758:c.instructions+=45;goto B5ef758;
case 0x5ef75a:c.instructions+=44;goto B5ef75a;
case 0x5ef75d:c.instructions+=43;goto B5ef75d;
case 0x5ef760:c.instructions+=42;goto B5ef760;
case 0x5ef763:c.instructions+=41;goto B5ef763;
case 0x5ef766:c.instructions+=40;goto B5ef766;
case 0x5ef769:c.instructions+=39;goto B5ef769;
case 0x5ef76c:c.instructions+=38;goto B5ef76c;
case 0x5ef76f:c.instructions+=37;goto B5ef76f;
case 0x5ef772:c.instructions+=36;goto B5ef772;
case 0x5ef775:c.instructions+=35;goto B5ef775;
case 0x5ef779:c.instructions+=34;goto B5ef779;
case 0x5ef77b:c.instructions+=33;goto B5ef77b;
case 0x5ef77e:c.instructions+=32;goto B5ef77e;
case 0x5ef781:c.instructions+=31;goto B5ef781;
case 0x5ef784:c.instructions+=30;goto B5ef784;
case 0x5ef788:c.instructions+=29;goto B5ef788;
case 0x5ef78b:c.instructions+=28;goto B5ef78b;
case 0x5ef78e:c.instructions+=27;goto B5ef78e;
case 0x5ef791:c.instructions+=26;goto B5ef791;
case 0x5ef794:c.instructions+=25;goto B5ef794;
case 0x5ef797:c.instructions+=24;goto B5ef797;
case 0x5ef79a:c.instructions+=23;goto B5ef79a;
case 0x5ef79c:c.instructions+=22;goto B5ef79c;
case 0x5ef79f:c.instructions+=21;goto B5ef79f;
case 0x5ef7a0:c.instructions+=20;goto B5ef7a0;
case 0x5ef7a1:c.instructions+=19;goto B5ef7a1;
case 0x5ef7a4:c.instructions+=18;goto B5ef7a4;
case 0x5ef7a7:c.instructions+=17;goto B5ef7a7;
case 0x5ef7aa:c.instructions+=16;goto B5ef7aa;
case 0x5ef7ae:c.instructions+=15;goto B5ef7ae;
case 0x5ef7b1:c.instructions+=14;goto B5ef7b1;
case 0x5ef7b4:c.instructions+=13;goto B5ef7b4;
case 0x5ef7b7:c.instructions+=12;goto B5ef7b7;
case 0x5ef7b9:c.instructions+=11;goto B5ef7b9;
case 0x5ef7bd:c.instructions+=10;goto B5ef7bd;
case 0x5ef7c0:c.instructions+=9;goto B5ef7c0;
case 0x5ef7c3:c.instructions+=8;goto B5ef7c3;
case 0x5ef7c6:c.instructions+=7;goto B5ef7c6;
case 0x5ef7c9:c.instructions+=6;goto B5ef7c9;
case 0x5ef7cc:c.instructions+=5;goto B5ef7cc;
case 0x5ef7cf:c.instructions+=4;goto B5ef7cf;
case 0x5ef7d2:c.instructions+=3;goto B5ef7d2;
case 0x5ef7d5:c.instructions+=2;goto B5ef7d5;
case 0x5ef7d8:c.instructions+=1;goto B5ef7d8;
case 0x5ef7e0:goto L5ef7e0;
case 0x5ef7e3:c.instructions+=8;goto B5ef7e3;
case 0x5ef7e9:c.instructions+=7;goto B5ef7e9;
case 0x5ef7ef:c.instructions+=6;goto B5ef7ef;
case 0x5ef7f3:c.instructions+=5;goto B5ef7f3;
case 0x5ef7f6:c.instructions+=4;goto B5ef7f6;
case 0x5ef7fc:c.instructions+=3;goto B5ef7fc;
case 0x5ef7ff:c.instructions+=2;goto B5ef7ff;
case 0x5ef801:c.instructions+=1;goto B5ef801;
case 0x5ef803:goto L5ef803;
case 0x5ef809:c.instructions+=1;goto B5ef809;
case 0x5ef80b:goto L5ef80b;
case 0x5ef811:c.instructions+=6;goto B5ef811;
case 0x5ef817:c.instructions+=5;goto B5ef817;
case 0x5ef81b:c.instructions+=4;goto B5ef81b;
case 0x5ef821:c.instructions+=3;goto B5ef821;
case 0x5ef823:c.instructions+=2;goto B5ef823;
case 0x5ef826:c.instructions+=1;goto B5ef826;
case 0x5ef828:goto L5ef828;
case 0x5ef82c:c.instructions+=4;goto B5ef82c;
case 0x5ef830:c.instructions+=3;goto B5ef830;
case 0x5ef832:c.instructions+=2;goto B5ef832;
case 0x5ef835:c.instructions+=1;goto B5ef835;
case 0x5ef837:goto L5ef837;
case 0x5ef839:c.instructions+=6;goto B5ef839;
case 0x5ef83d:c.instructions+=5;goto B5ef83d;
case 0x5ef841:c.instructions+=4;goto B5ef841;
case 0x5ef845:c.instructions+=3;goto B5ef845;
case 0x5ef849:c.instructions+=2;goto B5ef849;
case 0x5ef84f:c.instructions+=1;goto B5ef84f;
case 0x5ef853:goto L5ef853;
case 0x5ef857:c.instructions+=2;goto B5ef857;
case 0x5ef85b:c.instructions+=1;goto B5ef85b;
case 0x5ef85d:goto L5ef85d;
case 0x5ef860:c.instructions+=1;goto B5ef860;
case 0x5ef870:goto L5ef870;
case 0x5ef871:c.instructions+=10;goto B5ef871;
case 0x5ef875:c.instructions+=9;goto B5ef875;
case 0x5ef877:c.instructions+=8;goto B5ef877;
case 0x5ef87a:c.instructions+=7;goto B5ef87a;
case 0x5ef880:c.instructions+=6;goto B5ef880;
case 0x5ef886:c.instructions+=5;goto B5ef886;
case 0x5ef889:c.instructions+=4;goto B5ef889;
case 0x5ef88b:c.instructions+=3;goto B5ef88b;
case 0x5ef891:c.instructions+=2;goto B5ef891;
case 0x5ef895:c.instructions+=1;goto B5ef895;
case 0x5ef897:goto L5ef897;
case 0x5ef89d:c.instructions+=1;goto B5ef89d;
case 0x5ef89f:goto L5ef89f;
case 0x5ef8a5:c.instructions+=3;goto B5ef8a5;
case 0x5ef8ab:c.instructions+=2;goto B5ef8ab;
case 0x5ef8af:c.instructions+=1;goto B5ef8af;
case 0x5ef8b1:goto L5ef8b1;
case 0x5ef8b9:goto L5ef8b9;
case 0x5ef8bb:c.instructions+=1;goto B5ef8bb;
case 0x5ef8c0:goto L5ef8c0;
case 0x5ef8c4:c.instructions+=7;goto B5ef8c4;
case 0x5ef8ca:c.instructions+=6;goto B5ef8ca;
case 0x5ef8cc:c.instructions+=5;goto B5ef8cc;
case 0x5ef8ce:c.instructions+=4;goto B5ef8ce;
case 0x5ef8d4:c.instructions+=3;goto B5ef8d4;
case 0x5ef8d7:c.instructions+=2;goto B5ef8d7;
case 0x5ef8d9:c.instructions+=1;goto B5ef8d9;
case 0x5ef8df:goto L5ef8df;
case 0x5ef8e2:c.instructions+=1;goto B5ef8e2;
case 0x5ef8e4:goto L5ef8e4;
case 0x5ef8ea:c.instructions+=5;goto B5ef8ea;
case 0x5ef8ec:c.instructions+=4;goto B5ef8ec;
case 0x5ef8ee:c.instructions+=3;goto B5ef8ee;
case 0x5ef8f0:c.instructions+=2;goto B5ef8f0;
case 0x5ef8f3:c.instructions+=1;goto B5ef8f3;
case 0x5ef8f5:goto L5ef8f5;
case 0x5ef8f7:c.instructions+=1;goto B5ef8f7;
case 0x5ef8f9:goto L5ef8f9;
case 0x5ef8fd:c.instructions+=9;goto B5ef8fd;
case 0x5ef8ff:c.instructions+=8;goto B5ef8ff;
case 0x5ef905:c.instructions+=7;goto B5ef905;
case 0x5ef90b:c.instructions+=6;goto B5ef90b;
case 0x5ef90d:c.instructions+=5;goto B5ef90d;
case 0x5ef90f:c.instructions+=4;goto B5ef90f;
case 0x5ef911:c.instructions+=3;goto B5ef911;
case 0x5ef913:c.instructions+=2;goto B5ef913;
case 0x5ef917:c.instructions+=1;goto B5ef917;
case 0x5ef919:goto L5ef919;
case 0x5ef91f:c.instructions+=3;goto B5ef91f;
case 0x5ef921:c.instructions+=2;goto B5ef921;
case 0x5ef924:c.instructions+=1;goto B5ef924;
case 0x5ef926:goto L5ef926;
case 0x5ef92c:c.instructions+=5;goto B5ef92c;
case 0x5ef932:c.instructions+=4;goto B5ef932;
case 0x5ef936:c.instructions+=3;goto B5ef936;
case 0x5ef938:c.instructions+=2;goto B5ef938;
case 0x5ef93b:c.instructions+=1;goto B5ef93b;
case 0x5ef93d:goto L5ef93d;
case 0x5ef93f:c.instructions+=1;goto B5ef93f;
case 0x5ef943:goto L5ef943;
case 0x5ef949:c.instructions+=4;goto B5ef949;
case 0x5ef94b:c.instructions+=3;goto B5ef94b;
case 0x5ef94f:c.instructions+=2;goto B5ef94f;
case 0x5ef955:c.instructions+=1;goto B5ef955;
case 0x5ef95b:goto L5ef95b;
case 0x5ef95d:c.instructions+=2;goto B5ef95d;
case 0x5ef95e:c.instructions+=1;goto B5ef95e;
case 0x5ef961:goto L5ef961;
case 0x5ef964:c.instructions+=1;goto B5ef964;
case 0x5ef966:goto L5ef966;
case 0x5ef968:c.instructions+=6;goto B5ef968;
case 0x5ef96e:c.instructions+=5;goto B5ef96e;
case 0x5ef970:c.instructions+=4;goto B5ef970;
case 0x5ef972:c.instructions+=3;goto B5ef972;
case 0x5ef974:c.instructions+=2;goto B5ef974;
case 0x5ef977:c.instructions+=1;goto B5ef977;
case 0x5ef979:goto L5ef979;
case 0x5ef97b:c.instructions+=1;goto B5ef97b;
case 0x5ef97d:goto L5ef97d;
case 0x5ef983:c.instructions+=10;goto B5ef983;
case 0x5ef985:c.instructions+=9;goto B5ef985;
case 0x5ef989:c.instructions+=8;goto B5ef989;
case 0x5ef98f:c.instructions+=7;goto B5ef98f;
case 0x5ef995:c.instructions+=6;goto B5ef995;
case 0x5ef997:c.instructions+=5;goto B5ef997;
case 0x5ef999:c.instructions+=4;goto B5ef999;
case 0x5ef99b:c.instructions+=3;goto B5ef99b;
case 0x5ef99d:c.instructions+=2;goto B5ef99d;
case 0x5ef9a1:c.instructions+=1;goto B5ef9a1;
case 0x5ef9a3:goto L5ef9a3;
case 0x5ef9a9:c.instructions+=3;goto B5ef9a9;
case 0x5ef9ab:c.instructions+=2;goto B5ef9ab;
case 0x5ef9ae:c.instructions+=1;goto B5ef9ae;
case 0x5ef9b0:goto L5ef9b0;
case 0x5ef9b2:c.instructions+=4;goto B5ef9b2;
case 0x5ef9b6:c.instructions+=3;goto B5ef9b6;
case 0x5ef9b8:c.instructions+=2;goto B5ef9b8;
case 0x5ef9bb:c.instructions+=1;goto B5ef9bb;
case 0x5ef9bd:goto L5ef9bd;
case 0x5ef9bf:c.instructions+=1;goto B5ef9bf;
case 0x5ef9c3:goto L5ef9c3;
case 0x5ef9c7:c.instructions+=4;goto B5ef9c7;
case 0x5ef9cd:c.instructions+=3;goto B5ef9cd;
case 0x5ef9d3:c.instructions+=2;goto B5ef9d3;
case 0x5ef9d4:c.instructions+=1;goto B5ef9d4;
case 0x5ef9e0:goto L5ef9e0;
case 0x5ef9e7:c.instructions+=2;goto B5ef9e7;
case 0x5ef9e9:c.instructions+=1;goto B5ef9e9;
case 0x5ef9eb:goto L5ef9eb;
case 0x5ef9ed:c.instructions+=3;goto B5ef9ed;
case 0x5ef9f0:c.instructions+=2;goto B5ef9f0;
case 0x5ef9f3:c.instructions+=1;goto B5ef9f3;
case 0x5ef9f4:goto L5ef9f4;
case 0x5ef9f6:c.instructions+=3;goto B5ef9f6;
case 0x5ef9f9:c.instructions+=2;goto B5ef9f9;
case 0x5ef9fc:c.instructions+=1;goto B5ef9fc;
case 0x5efa00:goto L5efa00;
case 0x5efa02:c.instructions+=2;goto B5efa02;
case 0x5efa05:c.instructions+=1;goto B5efa05;
case 0x5efa07:goto L5efa07;
case 0x5efa0a:c.instructions+=1;goto B5efa0a;
case 0x5efa0c:goto L5efa0c;
case 0x5efa0e:c.instructions+=1;goto B5efa0e;
case 0x5efa10:goto L5efa10;
case 0x5efa13:c.instructions+=1;goto B5efa13;
case 0x5efa15:goto L5efa15;
case 0x5efa18:c.instructions+=1;goto B5efa18;
case 0x5efa1a:goto L5efa1a;
case 0x5efa21:c.instructions+=1;goto B5efa21;
case 0x5efa23:goto L5efa23;
case 0x5efa26:c.instructions+=1;goto B5efa26;
case 0x5efa28:goto L5efa28;
case 0x5efa2a:c.instructions+=1;goto B5efa2a;
case 0x5efa2b:goto L5efa2b;
case 0x5efa2d:c.instructions+=1;goto B5efa2d;
case 0x5efa30:goto L5efa30;
case 0x5efa34:c.instructions+=4;goto B5efa34;
case 0x5efa35:c.instructions+=3;goto B5efa35;
case 0x5efa37:c.instructions+=2;goto B5efa37;
case 0x5efa39:c.instructions+=1;goto B5efa39;
case 0x5efa3b:goto L5efa3b;
case 0x5efa3e:c.instructions+=2;goto B5efa3e;
case 0x5efa40:c.instructions+=1;goto B5efa40;
case 0x5efa42:goto L5efa42;
case 0x5efa48:c.instructions+=3;goto B5efa48;
case 0x5efa4e:c.instructions+=2;goto B5efa4e;
case 0x5efa54:c.instructions+=1;goto B5efa54;
case 0x5efa59:goto L5efa59;
case 0x5efa5f:c.instructions+=5;goto B5efa5f;
case 0x5efa61:c.instructions+=4;goto B5efa61;
case 0x5efa67:c.instructions+=3;goto B5efa67;
case 0x5efa6d:c.instructions+=2;goto B5efa6d;
case 0x5efa73:c.instructions+=1;goto B5efa73;
case 0x5efa78:goto L5efa78;
case 0x5efa7e:c.instructions+=1;goto B5efa7e;
case 0x5efa88:goto L5efa88;
case 0x5efa89:c.instructions+=1;goto B5efa89;
case 0x5efa90:goto L5efa90;
case 0x5efa96:c.instructions+=5;goto B5efa96;
case 0x5efa9a:c.instructions+=4;goto B5efa9a;
case 0x5efa9c:c.instructions+=3;goto B5efa9c;
case 0x5efaa2:c.instructions+=2;goto B5efaa2;
case 0x5efaa8:c.instructions+=1;goto B5efaa8;
case 0x5efab0:goto L5efab0;
case 0x5efab6:c.instructions+=1;goto B5efab6;
case 0x5efac0:goto L5efac0;
case 0x5efac1:c.instructions+=7;goto B5efac1;
case 0x5efac6:c.instructions+=6;goto B5efac6;
case 0x5efacb:c.instructions+=5;goto B5efacb;
case 0x5efacd:c.instructions+=4;goto B5efacd;
case 0x5efad2:c.instructions+=3;goto B5efad2;
case 0x5efad7:c.instructions+=2;goto B5efad7;
case 0x5efadd:c.instructions+=1;goto B5efadd;
case 0x5efae2:goto L5efae2;
case 0x5efae7:c.instructions+=5;goto B5efae7;
case 0x5efaec:c.instructions+=4;goto B5efaec;
case 0x5efaf1:c.instructions+=3;goto B5efaf1;
case 0x5efaf6:c.instructions+=2;goto B5efaf6;
case 0x5efafc:c.instructions+=1;goto B5efafc;
case 0x5efb01:goto L5efb01;
case 0x5efb06:c.instructions+=5;goto B5efb06;
case 0x5efb0b:c.instructions+=4;goto B5efb0b;
case 0x5efb10:c.instructions+=3;goto B5efb10;
case 0x5efb15:c.instructions+=2;goto B5efb15;
case 0x5efb1b:c.instructions+=1;goto B5efb1b;
case 0x5efb20:goto L5efb20;
case 0x5efb26:c.instructions+=9;goto B5efb26;
case 0x5efb2b:c.instructions+=8;goto B5efb2b;
case 0x5efb2d:c.instructions+=7;goto B5efb2d;
case 0x5efb32:c.instructions+=6;goto B5efb32;
case 0x5efb33:c.instructions+=5;goto B5efb33;
case 0x5efb34:c.instructions+=4;goto B5efb34;
case 0x5efb37:c.instructions+=3;goto B5efb37;
case 0x5efb3c:c.instructions+=2;goto B5efb3c;
case 0x5efb42:c.instructions+=1;goto B5efb42;
case 0x5efb47:goto L5efb47;
case 0x5efb4c:c.instructions+=5;goto B5efb4c;
case 0x5efb51:c.instructions+=4;goto B5efb51;
case 0x5efb56:c.instructions+=3;goto B5efb56;
case 0x5efb5b:c.instructions+=2;goto B5efb5b;
case 0x5efb61:c.instructions+=1;goto B5efb61;
case 0x5efb66:goto L5efb66;
case 0x5efb6b:c.instructions+=5;goto B5efb6b;
case 0x5efb70:c.instructions+=4;goto B5efb70;
case 0x5efb75:c.instructions+=3;goto B5efb75;
case 0x5efb7a:c.instructions+=2;goto B5efb7a;
case 0x5efb80:c.instructions+=1;goto B5efb80;
case 0x5efb85:goto L5efb85;
case 0x5efb8a:c.instructions+=5;goto B5efb8a;
case 0x5efb8f:c.instructions+=4;goto B5efb8f;
case 0x5efb94:c.instructions+=3;goto B5efb94;
case 0x5efb99:c.instructions+=2;goto B5efb99;
case 0x5efb9f:c.instructions+=1;goto B5efb9f;
case 0x5efba4:goto L5efba4;
case 0x5efba9:c.instructions+=5;goto B5efba9;
case 0x5efbae:c.instructions+=4;goto B5efbae;
case 0x5efbb0:c.instructions+=3;goto B5efbb0;
case 0x5efbb5:c.instructions+=2;goto B5efbb5;
case 0x5efbbb:c.instructions+=1;goto B5efbbb;
case 0x5efbc0:goto L5efbc0;
case 0x5efbc5:c.instructions+=5;goto B5efbc5;
case 0x5efbca:c.instructions+=4;goto B5efbca;
case 0x5efbcf:c.instructions+=3;goto B5efbcf;
case 0x5efbd4:c.instructions+=2;goto B5efbd4;
case 0x5efbda:c.instructions+=1;goto B5efbda;
case 0x5efbdf:goto L5efbdf;
case 0x5efbe1:c.instructions+=4;goto B5efbe1;
case 0x5efbe3:c.instructions+=3;goto B5efbe3;
case 0x5efbe8:c.instructions+=2;goto B5efbe8;
case 0x5efbee:c.instructions+=1;goto B5efbee;
case 0x5efbf3:goto L5efbf3;
case 0x5efbf8:c.instructions+=5;goto B5efbf8;
case 0x5efbfd:c.instructions+=4;goto B5efbfd;
case 0x5efbff:c.instructions+=3;goto B5efbff;
case 0x5efc04:c.instructions+=2;goto B5efc04;
case 0x5efc0a:c.instructions+=1;goto B5efc0a;
case 0x5efc0f:goto L5efc0f;
case 0x5efc14:c.instructions+=5;goto B5efc14;
case 0x5efc19:c.instructions+=4;goto B5efc19;
case 0x5efc1b:c.instructions+=3;goto B5efc1b;
case 0x5efc20:c.instructions+=2;goto B5efc20;
case 0x5efc26:c.instructions+=1;goto B5efc26;
case 0x5efc2b:goto L5efc2b;
case 0x5efc30:c.instructions+=4;goto B5efc30;
case 0x5efc32:c.instructions+=3;goto B5efc32;
case 0x5efc37:c.instructions+=2;goto B5efc37;
case 0x5efc3d:c.instructions+=1;goto B5efc3d;
case 0x5efc42:goto L5efc42;
case 0x5efc47:c.instructions+=4;goto B5efc47;
case 0x5efc49:c.instructions+=3;goto B5efc49;
case 0x5efc4e:c.instructions+=2;goto B5efc4e;
case 0x5efc54:c.instructions+=1;goto B5efc54;
case 0x5efc59:goto L5efc59;
case 0x5efc5b:c.instructions+=4;goto B5efc5b;
case 0x5efc5d:c.instructions+=3;goto B5efc5d;
case 0x5efc62:c.instructions+=2;goto B5efc62;
case 0x5efc68:c.instructions+=1;goto B5efc68;
case 0x5efc6d:goto L5efc6d;
case 0x5efc6f:c.instructions+=4;goto B5efc6f;
case 0x5efc71:c.instructions+=3;goto B5efc71;
case 0x5efc76:c.instructions+=2;goto B5efc76;
case 0x5efc7c:c.instructions+=1;goto B5efc7c;
case 0x5efc81:goto L5efc81;
case 0x5efc83:c.instructions+=4;goto B5efc83;
case 0x5efc85:c.instructions+=3;goto B5efc85;
case 0x5efc8a:c.instructions+=2;goto B5efc8a;
case 0x5efc90:c.instructions+=1;goto B5efc90;
case 0x5efc95:goto L5efc95;
case 0x5efc97:c.instructions+=5;goto B5efc97;
case 0x5efc9c:c.instructions+=4;goto B5efc9c;
case 0x5efc9e:c.instructions+=3;goto B5efc9e;
case 0x5efca3:c.instructions+=2;goto B5efca3;
case 0x5efca9:c.instructions+=1;goto B5efca9;
case 0x5efcae:goto L5efcae;
case 0x5efcaf:c.instructions+=1;goto B5efcaf;
case 0x5efcb0:goto L5efcb0;
case 0x5efcb2:c.instructions+=12;goto B5efcb2;
case 0x5efcb7:c.instructions+=11;goto B5efcb7;
case 0x5efcbd:c.instructions+=10;goto B5efcbd;
case 0x5efcbe:c.instructions+=9;goto B5efcbe;
case 0x5efcc5:c.instructions+=8;goto B5efcc5;
case 0x5efcc6:c.instructions+=7;goto B5efcc6;
case 0x5efcc7:c.instructions+=6;goto B5efcc7;
case 0x5efcc9:c.instructions+=5;goto B5efcc9;
case 0x5efccd:c.instructions+=4;goto B5efccd;
case 0x5efcd0:c.instructions+=3;goto B5efcd0;
case 0x5efcd2:c.instructions+=2;goto B5efcd2;
case 0x5efcda:c.instructions+=1;goto B5efcda;
case 0x5efcdc:goto L5efcdc;
case 0x5efcde:c.instructions+=1;goto B5efcde;
case 0x5efce3:goto L5efce3;
case 0x5efce6:c.instructions+=2;goto B5efce6;
case 0x5efce7:c.instructions+=1;goto B5efce7;
case 0x5efcec:goto L5efcec;
case 0x5efcef:c.instructions+=1;goto B5efcef;
case 0x5efcf6:goto L5efcf6;
case 0x5efcfc:c.instructions+=2;goto B5efcfc;
case 0x5efd01:c.instructions+=1;goto B5efd01;
case 0x5efd06:goto L5efd06;
case 0x5efd0c:c.instructions+=2;goto B5efd0c;
case 0x5efd11:c.instructions+=1;goto B5efd11;
case 0x5efd16:goto L5efd16;
case 0x5efd1c:c.instructions+=2;goto B5efd1c;
case 0x5efd21:c.instructions+=1;goto B5efd21;
case 0x5efd26:goto L5efd26;
case 0x5efd2c:c.instructions+=2;goto B5efd2c;
case 0x5efd31:c.instructions+=1;goto B5efd31;
case 0x5efd36:goto L5efd36;
case 0x5efd3c:c.instructions+=2;goto B5efd3c;
case 0x5efd41:c.instructions+=1;goto B5efd41;
case 0x5efd46:goto L5efd46;
case 0x5efd4c:c.instructions+=2;goto B5efd4c;
case 0x5efd51:c.instructions+=1;goto B5efd51;
case 0x5efd56:goto L5efd56;
case 0x5efd5c:c.instructions+=2;goto B5efd5c;
case 0x5efd61:c.instructions+=1;goto B5efd61;
case 0x5efd66:goto L5efd66;
case 0x5efd6c:c.instructions+=2;goto B5efd6c;
case 0x5efd71:c.instructions+=1;goto B5efd71;
case 0x5efd76:goto L5efd76;
case 0x5efd7c:c.instructions+=2;goto B5efd7c;
case 0x5efd81:c.instructions+=1;goto B5efd81;
case 0x5efd86:goto L5efd86;
case 0x5efd8c:c.instructions+=2;goto B5efd8c;
case 0x5efd91:c.instructions+=1;goto B5efd91;
case 0x5efd96:goto L5efd96;
case 0x5efd9c:c.instructions+=2;goto B5efd9c;
case 0x5efda1:c.instructions+=1;goto B5efda1;
case 0x5efda6:goto L5efda6;
case 0x5efdac:c.instructions+=2;goto B5efdac;
case 0x5efdb1:c.instructions+=1;goto B5efdb1;
case 0x5efdb6:goto L5efdb6;
case 0x5efdbc:c.instructions+=2;goto B5efdbc;
case 0x5efdc1:c.instructions+=1;goto B5efdc1;
case 0x5efdc6:goto L5efdc6;
case 0x5efdcc:c.instructions+=2;goto B5efdcc;
case 0x5efdd1:c.instructions+=1;goto B5efdd1;
case 0x5efdd6:goto L5efdd6;
case 0x5efddc:c.instructions+=2;goto B5efddc;
case 0x5efde1:c.instructions+=1;goto B5efde1;
case 0x5efde6:goto L5efde6;
case 0x5efdec:c.instructions+=2;goto B5efdec;
case 0x5efdf1:c.instructions+=1;goto B5efdf1;
case 0x5efdf6:goto L5efdf6;
case 0x5efdfc:c.instructions+=2;goto B5efdfc;
case 0x5efe01:c.instructions+=1;goto B5efe01;
case 0x5efe06:goto L5efe06;
case 0x5efe0c:c.instructions+=2;goto B5efe0c;
case 0x5efe14:c.instructions+=1;goto B5efe14;
case 0x5efe19:goto L5efe19;
case 0x5efe1d:c.instructions+=4;goto B5efe1d;
case 0x5efe1e:c.instructions+=3;goto B5efe1e;
case 0x5efe25:c.instructions+=2;goto B5efe25;
case 0x5efe28:c.instructions+=1;goto B5efe28;
case 0x5efe30:goto L5efe30;
case 0x5efe31:c.instructions+=4;goto B5efe31;
case 0x5efe33:c.instructions+=3;goto B5efe33;
case 0x5efe38:c.instructions+=2;goto B5efe38;
case 0x5efe3a:c.instructions+=1;goto B5efe3a;
case 0x5efe3f:goto L5efe3f;
case 0x5efe44:c.instructions+=5;goto B5efe44;
case 0x5efe49:c.instructions+=4;goto B5efe49;
case 0x5efe4a:c.instructions+=3;goto B5efe4a;
case 0x5efe4c:c.instructions+=2;goto B5efe4c;
case 0x5efe4f:c.instructions+=1;goto B5efe4f;
case 0x5efe54:goto L5efe54;
case 0x5efe59:c.instructions+=4;goto B5efe59;
case 0x5efe5c:c.instructions+=3;goto B5efe5c;
case 0x5efe5e:c.instructions+=2;goto B5efe5e;
case 0x5efe5f:c.instructions+=1;goto B5efe5f;
case 0x5efe61:goto L5efe61;
case 0x5efe6b:goto L5efe6b;
case 0x5efe70:goto L5efe70;
case 0x5efe75:c.instructions+=2;goto B5efe75;
case 0x5efe77:c.instructions+=1;goto B5efe77;
case 0x5efe79:goto L5efe79;
case 0x5efe7e:c.instructions+=2;goto B5efe7e;
case 0x5efe80:c.instructions+=1;goto B5efe80;
case 0x5efe82:goto L5efe82;
case 0x5efe88:c.instructions+=2;goto B5efe88;
case 0x5efe8a:c.instructions+=1;goto B5efe8a;
case 0x5efe8c:goto L5efe8c;
case 0x5efe91:c.instructions+=1;goto B5efe91;
case 0x5efe92:goto L5efe92;
case 0x5efe94:c.instructions+=1;goto B5efe94;
case 0x5efea0:goto L5efea0;
case 0x5efea6:c.instructions+=8;goto B5efea6;
case 0x5efea8:c.instructions+=7;goto B5efea8;
case 0x5efead:c.instructions+=6;goto B5efead;
case 0x5efeae:c.instructions+=5;goto B5efeae;
case 0x5efeb3:c.instructions+=4;goto B5efeb3;
case 0x5efeba:c.instructions+=3;goto B5efeba;
case 0x5efec0:c.instructions+=2;goto B5efec0;
case 0x5efec2:c.instructions+=1;goto B5efec2;
case 0x5efec8:goto L5efec8;
case 0x5efecd:goto L5efecd;
case 0x5efecf:c.instructions+=1;goto B5efecf;
case 0x5efed5:goto L5efed5;
case 0x5efed6:c.instructions+=1;goto B5efed6;
case 0x5efedb:goto L5efedb;
case 0x5efedd:c.instructions+=1;goto B5efedd;
case 0x5efee2:goto L5efee2;
case 0x5efee4:c.instructions+=2;goto B5efee4;
case 0x5efee6:c.instructions+=1;goto B5efee6;
case 0x5efeec:goto L5efeec;
case 0x5efeed:c.instructions+=7;goto B5efeed;
case 0x5efef2:c.instructions+=6;goto B5efef2;
case 0x5efef7:c.instructions+=5;goto B5efef7;
case 0x5efefb:c.instructions+=4;goto B5efefb;
case 0x5efefc:c.instructions+=3;goto B5efefc;
case 0x5eff01:c.instructions+=2;goto B5eff01;
case 0x5eff02:c.instructions+=1;goto B5eff02;
case 0x5eff07:goto L5eff07;
case 0x5eff0a:c.instructions+=2;goto B5eff0a;
case 0x5eff0b:c.instructions+=1;goto B5eff0b;
case 0x5eff10:goto L5eff10;
case 0x5eff14:c.instructions+=6;goto B5eff14;
case 0x5eff15:c.instructions+=5;goto B5eff15;
case 0x5eff1a:c.instructions+=4;goto B5eff1a;
case 0x5eff21:c.instructions+=3;goto B5eff21;
case 0x5eff26:c.instructions+=2;goto B5eff26;
case 0x5eff27:c.instructions+=1;goto B5eff27;
case 0x5eff2c:goto L5eff2c;
case 0x5eff2f:c.instructions+=6;goto B5eff2f;
case 0x5eff31:c.instructions+=5;goto B5eff31;
case 0x5eff38:c.instructions+=4;goto B5eff38;
case 0x5eff39:c.instructions+=3;goto B5eff39;
case 0x5eff3e:c.instructions+=2;goto B5eff3e;
case 0x5eff45:c.instructions+=1;goto B5eff45;
case 0x5eff4a:goto L5eff4a;
case 0x5eff51:c.instructions+=2;goto B5eff51;
case 0x5eff5c:c.instructions+=1;goto B5eff5c;
case 0x5eff61:goto L5eff61;
case 0x5eff63:c.instructions+=1;goto B5eff63;
case 0x5eff65:goto L5eff65;
case 0x5eff6a:c.instructions+=1;goto B5eff6a;
case 0x5eff70:goto L5eff70;
case 0x5eff77:c.instructions+=1;goto B5eff77;
case 0x5eff7c:goto L5eff7c;
case 0x5eff7e:c.instructions+=1;goto B5eff7e;
case 0x5eff80:goto L5eff80;
case 0x5eff87:c.instructions+=1;goto B5eff87;
case 0x5eff8c:goto L5eff8c;
case 0x5eff8e:c.instructions+=3;goto B5eff8e;
case 0x5eff91:c.instructions+=2;goto B5eff91;
case 0x5eff97:c.instructions+=1;goto B5eff97;
case 0x5eff99:goto L5eff99;
case 0x5eff9e:c.instructions+=6;goto B5eff9e;
case 0x5effa3:c.instructions+=5;goto B5effa3;
case 0x5effa7:c.instructions+=4;goto B5effa7;
case 0x5effa8:c.instructions+=3;goto B5effa8;
case 0x5effad:c.instructions+=2;goto B5effad;
case 0x5effae:c.instructions+=1;goto B5effae;
case 0x5effb3:goto L5effb3;
case 0x5effb6:c.instructions+=2;goto B5effb6;
case 0x5effb7:c.instructions+=1;goto B5effb7;
case 0x5effbc:goto L5effbc;
case 0x5effc0:c.instructions+=2;goto B5effc0;
case 0x5effc1:c.instructions+=1;goto B5effc1;
case 0x5effc6:goto L5effc6;
case 0x5effcb:c.instructions+=6;goto B5effcb;
case 0x5effd2:c.instructions+=5;goto B5effd2;
case 0x5effd3:c.instructions+=4;goto B5effd3;
case 0x5effda:c.instructions+=3;goto B5effda;
case 0x5effdf:c.instructions+=2;goto B5effdf;
case 0x5effe0:c.instructions+=1;goto B5effe0;
case 0x5effe5:goto L5effe5;
case 0x5effe8:c.instructions+=7;goto B5effe8;
case 0x5effed:c.instructions+=6;goto B5effed;
case 0x5efff2:c.instructions+=5;goto B5efff2;
case 0x5efff6:c.instructions+=4;goto B5efff6;
case 0x5efff7:c.instructions+=3;goto B5efff7;
case 0x5efffe:c.instructions+=2;goto B5efffe;
case 0x5effff:c.instructions+=1;goto B5effff;
default:missing_instruction(c.pc);}
B5ef002:L5ef002:{c.instructions+=2;NFSU2_TR(0x5ef002);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ef004:{NFSU2_TR(0x5ef004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef07e;}}
}
B5ef006:L5ef006:{c.instructions+=2;NFSU2_TR(0x5ef006);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7a0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef010:{NFSU2_TR(0x5ef010);
if(r1(R+518)){{goto L5ef07e;}}
}
B5ef012:L5ef012:{c.instructions+=4;NFSU2_TR(0x5ef012);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef016:{NFSU2_TR(0x5ef016);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ef01a:{NFSU2_TR(0x5ef01a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef01d:{NFSU2_TR(0x5ef01d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ef072;}}
}
B5ef01f:L5ef01f:{c.instructions+=3;NFSU2_TR(0x5ef01f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x69ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x69ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef022:{NFSU2_TR(0x5ef022);
__builtin_memmove((R+8),(R+0),4);
}
B5ef024:{NFSU2_TR(0x5ef024);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ef02b;}}
}
B5ef026:L5ef026:{c.instructions+=1;NFSU2_TR(0x5ef026);
w4(R+8,u32(0x69ull));
}
B5ef02b:L5ef02b:{c.instructions+=2;NFSU2_TR(0x5ef02b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef02d:{NFSU2_TR(0x5ef02d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef07e;}}
}
B5ef02f:L5ef02f:{c.instructions+=15;NFSU2_TR(0x5ef02f);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5ef035:{NFSU2_TR(0x5ef035);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B5ef038:{NFSU2_TR(0x5ef038);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef03c:{NFSU2_TR(0x5ef03c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef040:{NFSU2_TR(0x5ef040);
w4(R+4,u32(0x64ull));
}
B5ef045:{NFSU2_TR(0x5ef045);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5ef047:{NFSU2_TR(0x5ef047);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef04b:{NFSU2_TR(0x5ef04b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef051:{NFSU2_TR(0x5ef051);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef055:{NFSU2_TR(0x5ef055);
{u32 ea_=u32(u32(8397436u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef05b:{NFSU2_TR(0x5ef05b);
{u32 ea_=u32(u32(8397432u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef061:{NFSU2_TR(0x5ef061);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5ef063:{NFSU2_TR(0x5ef063);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef065:{NFSU2_TR(0x5ef065);
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
B5ef068:{NFSU2_TR(0x5ef068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef079;}}
}
B5ef06a:L5ef06a:{c.instructions+=2;NFSU2_TR(0x5ef06a);
w4(R+0,u32(0x1ull));
}
B5ef06f:{NFSU2_TR(0x5ef06f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef072:L5ef072:{c.instructions+=2;NFSU2_TR(0x5ef072);
w4(R+8,u32(0x64ull));
}
B5ef077:{NFSU2_TR(0x5ef077);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ef02bu);}goto L5ef02b;}
}
B5ef079:L5ef079:{c.instructions+=2;NFSU2_TR(0x5ef079);
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
B5ef07b:{NFSU2_TR(0x5ef07b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef07e:L5ef07e:{c.instructions+=2;NFSU2_TR(0x5ef07e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ef080:{NFSU2_TR(0x5ef080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef090:L5ef090:{c.instructions+=14;NFSU2_TR(0x5ef090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5ef093:{NFSU2_TR(0x5ef093);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5ef099:{NFSU2_TR(0x5ef099);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ef09b:{NFSU2_TR(0x5ef09b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef09c:{NFSU2_TR(0x5ef09c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef0a0:{NFSU2_TR(0x5ef0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef0a4:{NFSU2_TR(0x5ef0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef0a8:{NFSU2_TR(0x5ef0a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef0ac:{NFSU2_TR(0x5ef0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef0af:{NFSU2_TR(0x5ef0af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0b0:{NFSU2_TR(0x5ef0b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ef0b2:{NFSU2_TR(0x5ef0b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef0b4:{NFSU2_TR(0x5ef0b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0b5:{NFSU2_TR(0x5ef0b5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ef116;}}
}
B5ef0b7:L5ef0b7:{c.instructions+=2;NFSU2_TR(0x5ef0b7);
w4(R+28,u32(0x1cull));
}
B5ef0bc:{NFSU2_TR(0x5ef0bc);
__builtin_memmove((R+16),(R+16),4);
}
B5ef0c0:L5ef0c0:{c.instructions+=7;NFSU2_TR(0x5ef0c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5ef0c3:{NFSU2_TR(0x5ef0c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0c5:{NFSU2_TR(0x5ef0c5);
u8 U[4];
w4(U+0,u32(0x440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0ca:{NFSU2_TR(0x5ef0ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ef0ce:{NFSU2_TR(0x5ef0ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0cf:{NFSU2_TR(0x5ef0cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0d0:{NFSU2_TR(0x5ef0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef0d5ull));
TAIL_STATIC(0x40f180u,40f);
}
B5ef0d5:L5ef0d5:{c.instructions+=3;NFSU2_TR(0x5ef0d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5ef0d8:{NFSU2_TR(0x5ef0d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef0dc:{NFSU2_TR(0x5ef0dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef0e1ull));
TAIL_STATIC(0x40f480u,40f);
}
B5ef0e1:L5ef0e1:{c.instructions+=2;NFSU2_TR(0x5ef0e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef0e3:{NFSU2_TR(0x5ef0e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef103;}}
}
B5ef0e5:L5ef0e5:{c.instructions+=6;NFSU2_TR(0x5ef0e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0e7:{NFSU2_TR(0x5ef0e7);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0ec:{NFSU2_TR(0x5ef0ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef0f0:{NFSU2_TR(0x5ef0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0f1:{NFSU2_TR(0x5ef0f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef0f2:{NFSU2_TR(0x5ef0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef0f7ull));
TAIL_STATIC(0x40f180u,40f);
}
B5ef0f7:L5ef0f7:{c.instructions+=3;NFSU2_TR(0x5ef0f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5ef0fa:{NFSU2_TR(0x5ef0fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef0fe:{NFSU2_TR(0x5ef0fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef103ull));
TAIL_STATIC(0x40f480u,40f);
}
B5ef103:L5ef103:{c.instructions+=6;NFSU2_TR(0x5ef103);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5ef109:{NFSU2_TR(0x5ef109);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef10c:{NFSU2_TR(0x5ef10c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ef10d:{NFSU2_TR(0x5ef10d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5ef110:{NFSU2_TR(0x5ef110);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ef112:{NFSU2_TR(0x5ef112);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ef0c0u);}goto L5ef0c0;}}
}
B5ef114:L5ef114:{c.instructions+=1;NFSU2_TR(0x5ef114);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ef116:L5ef116:{c.instructions+=6;NFSU2_TR(0x5ef116);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef119:{NFSU2_TR(0x5ef119);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ef11c:{NFSU2_TR(0x5ef11c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5ef11e:{NFSU2_TR(0x5ef11e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ef120:{NFSU2_TR(0x5ef120);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef124:{NFSU2_TR(0x5ef124);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ef2d5;}}
}
B5ef12a:L5ef12a:{c.instructions+=1;NFSU2_TR(0x5ef12a);
__builtin_memmove((R+12),(R+12),4);
}
B5ef130:L5ef130:{c.instructions+=9;NFSU2_TR(0x5ef130);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5ef132:{NFSU2_TR(0x5ef132);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5ef136:{NFSU2_TR(0x5ef136);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef139:{NFSU2_TR(0x5ef139);
{u32 ea_=u32(u32(8398264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ef13f:{NFSU2_TR(0x5ef13f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ef141:{NFSU2_TR(0x5ef141);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef147:{NFSU2_TR(0x5ef147);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef149:{NFSU2_TR(0x5ef149);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ef14c:{NFSU2_TR(0x5ef14c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ef2c0;}}
}
B5ef152:L5ef152:{c.instructions+=9;NFSU2_TR(0x5ef152);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B5ef157:{NFSU2_TR(0x5ef157);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ef15a:{NFSU2_TR(0x5ef15a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ef15d:{NFSU2_TR(0x5ef15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ef160:{NFSU2_TR(0x5ef160);
__builtin_memmove((R+8),gp(0x89e7a0),4);
}
B5ef166:{NFSU2_TR(0x5ef166);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef16a:{NFSU2_TR(0x5ef16a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ef16c:{NFSU2_TR(0x5ef16c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x1ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B5ef16f:{NFSU2_TR(0x5ef16f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ef199;}}
}
B5ef171:L5ef171:{c.instructions+=2;NFSU2_TR(0x5ef171);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x6ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x6ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ef174:{NFSU2_TR(0x5ef174);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5ef199;}}
}
B5ef176:L5ef176:{c.instructions+=2;NFSU2_TR(0x5ef176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef177:{NFSU2_TR(0x5ef177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef17cull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B5ef17c:L5ef17c:{c.instructions+=8;NFSU2_TR(0x5ef17c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ef180:{NFSU2_TR(0x5ef180);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef184:{NFSU2_TR(0x5ef184);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5ef187:{NFSU2_TR(0x5ef187);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5ef18a:{NFSU2_TR(0x5ef18a);
u8 U[14];
w4(U+0,u32(u32(u32(0xcaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B5ef192:{NFSU2_TR(0x5ef192);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ef195:{NFSU2_TR(0x5ef195);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ef197:{NFSU2_TR(0x5ef197);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ef1e9;}}
}
B5ef199:L5ef199:{c.instructions+=9;NFSU2_TR(0x5ef199);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ef1a0:{NFSU2_TR(0x5ef1a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1a2:{NFSU2_TR(0x5ef1a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1a4:{NFSU2_TR(0x5ef1a4);
u8 U[4];
w4(U+0,u32(0x4cbebc20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1a9:{NFSU2_TR(0x5ef1a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef1ac:{NFSU2_TR(0x5ef1ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1ad:{NFSU2_TR(0x5ef1ad);
__builtin_memmove((R+4),(R+0),4);
}
B5ef1af:{NFSU2_TR(0x5ef1af);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef1b3:{NFSU2_TR(0x5ef1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef1b8ull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B5ef1b8:L5ef1b8:{c.instructions+=3;NFSU2_TR(0x5ef1b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1b9:{NFSU2_TR(0x5ef1b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef1bd:{NFSU2_TR(0x5ef1bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef1c2ull));
TAIL_STATIC(0x403dd0u,403);
}
B5ef1c2:L5ef1c2:{c.instructions+=7;NFSU2_TR(0x5ef1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef1c4:{NFSU2_TR(0x5ef1c4);
__builtin_memmove((R+28),(R+0),4);
}
B5ef1c6:{NFSU2_TR(0x5ef1c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef1ca:{NFSU2_TR(0x5ef1ca);
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
B5ef1cd:{NFSU2_TR(0x5ef1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1ce:{NFSU2_TR(0x5ef1ce);
__builtin_memmove((R+4),(R+24),4);
}
B5ef1d0:{NFSU2_TR(0x5ef1d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef1d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef1d3:L5ef1d3:{c.instructions+=3;NFSU2_TR(0x5ef1d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1d5:{NFSU2_TR(0x5ef1d5);
__builtin_memmove((R+4),(R+24),4);
}
B5ef1d7:{NFSU2_TR(0x5ef1d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef1dcull));
TAIL_STATIC(0x40f750u,40f);
}
B5ef1dc:L5ef1dc:{c.instructions+=4;NFSU2_TR(0x5ef1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef1de:{NFSU2_TR(0x5ef1de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef1df:{NFSU2_TR(0x5ef1df);
__builtin_memmove((R+4),(R+24),4);
}
B5ef1e1:{NFSU2_TR(0x5ef1e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef1e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef1e4:L5ef1e4:{c.instructions+=1;NFSU2_TR(0x5ef1e4);
{goto L5ef2ad;}
}
B5ef1e9:L5ef1e9:{c.instructions+=3;NFSU2_TR(0x5ef1e9);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5ef1ee:{NFSU2_TR(0x5ef1ee);
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
B5ef1f0:{NFSU2_TR(0x5ef1f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef244;}}
}
B5ef1f2:L5ef1f2:{c.instructions+=3;NFSU2_TR(0x5ef1f2);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5ef1f7:{NFSU2_TR(0x5ef1f7);
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
B5ef1f9:{NFSU2_TR(0x5ef1f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef244;}}
}
B5ef1fb:L5ef1fb:{c.instructions+=2;NFSU2_TR(0x5ef1fb);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7a0),4);
w1(R+512,u8((r4(U+6))<(u32(0x44bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef205:{NFSU2_TR(0x5ef205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef219;}}
}
B5ef207:L5ef207:{c.instructions+=3;NFSU2_TR(0x5ef207);
__builtin_memmove((R+0),gp(0x86b320),4);
}
B5ef20c:{NFSU2_TR(0x5ef20c);
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
B5ef20e:{NFSU2_TR(0x5ef20e);
if(r1(R+518)){{goto L5ef219;}}
}
B5ef210:L5ef210:{c.instructions+=2;NFSU2_TR(0x5ef210);
u8 U[14];
__builtin_memmove((U+6),gp(0x86b328),4);
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
B5ef217:{NFSU2_TR(0x5ef217);
if(r1(R+518)){{goto L5ef244;}}
}
B5ef219:L5ef219:{c.instructions+=4;NFSU2_TR(0x5ef219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ef21b:{NFSU2_TR(0x5ef21b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef21d:{NFSU2_TR(0x5ef21d);
__builtin_memmove((R+4),(R+24),4);
}
B5ef21f:{NFSU2_TR(0x5ef21f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef222ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef222:L5ef222:{c.instructions+=3;NFSU2_TR(0x5ef222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef225:{NFSU2_TR(0x5ef225);
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
B5ef227:{NFSU2_TR(0x5ef227);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef239;}}
}
B5ef229:L5ef229:{c.instructions+=4;NFSU2_TR(0x5ef229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef22b:{NFSU2_TR(0x5ef22b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef22d:{NFSU2_TR(0x5ef22d);
__builtin_memmove((R+4),(R+24),4);
}
B5ef22f:{NFSU2_TR(0x5ef22f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef232ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef232:L5ef232:{c.instructions+=3;NFSU2_TR(0x5ef232);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef235:{NFSU2_TR(0x5ef235);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ef237:{NFSU2_TR(0x5ef237);
if(r1(R+518)){{goto L5ef29b;}}
}
B5ef239:L5ef239:{c.instructions+=3;NFSU2_TR(0x5ef239);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef23b:{NFSU2_TR(0x5ef23b);
__builtin_memmove((R+4),(R+24),4);
}
B5ef23d:{NFSU2_TR(0x5ef23d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef242ull));
TAIL_STATIC(0x40f750u,40f);
}
B5ef242:L5ef242:{c.instructions+=1;NFSU2_TR(0x5ef242);
{goto L5ef29b;}
}
B5ef244:L5ef244:{c.instructions+=4;NFSU2_TR(0x5ef244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef246:{NFSU2_TR(0x5ef246);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef248:{NFSU2_TR(0x5ef248);
__builtin_memmove((R+4),(R+24),4);
}
B5ef24a:{NFSU2_TR(0x5ef24a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef24dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef24d:L5ef24d:{c.instructions+=3;NFSU2_TR(0x5ef24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef250:{NFSU2_TR(0x5ef250);
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
B5ef252:{NFSU2_TR(0x5ef252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef264;}}
}
B5ef254:L5ef254:{c.instructions+=4;NFSU2_TR(0x5ef254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ef256:{NFSU2_TR(0x5ef256);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef258:{NFSU2_TR(0x5ef258);
__builtin_memmove((R+4),(R+24),4);
}
B5ef25a:{NFSU2_TR(0x5ef25a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef25dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef25d:L5ef25d:{c.instructions+=3;NFSU2_TR(0x5ef25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef260:{NFSU2_TR(0x5ef260);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ef262:{NFSU2_TR(0x5ef262);
if(r1(R+518)){{goto L5ef26d;}}
}
B5ef264:L5ef264:{c.instructions+=3;NFSU2_TR(0x5ef264);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef266:{NFSU2_TR(0x5ef266);
__builtin_memmove((R+4),(R+24),4);
}
B5ef268:{NFSU2_TR(0x5ef268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef26dull));
TAIL_STATIC(0x40f750u,40f);
}
B5ef26d:L5ef26d:{c.instructions+=13;NFSU2_TR(0x5ef26d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5ef270:{NFSU2_TR(0x5ef270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef273:{NFSU2_TR(0x5ef273);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ef275:{NFSU2_TR(0x5ef275);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef277:{NFSU2_TR(0x5ef277);
__builtin_memmove((R+4),(R+518),1);
}
B5ef27a:{NFSU2_TR(0x5ef27a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef27f:{NFSU2_TR(0x5ef27f);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef284:{NFSU2_TR(0x5ef284);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ef287:{NFSU2_TR(0x5ef287);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef288:{NFSU2_TR(0x5ef288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef289:{NFSU2_TR(0x5ef289);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef28a:{NFSU2_TR(0x5ef28a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef28b:{NFSU2_TR(0x5ef28b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef290ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B5ef290:L5ef290:{c.instructions+=5;NFSU2_TR(0x5ef290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef292:{NFSU2_TR(0x5ef292);
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
B5ef295:{NFSU2_TR(0x5ef295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef296:{NFSU2_TR(0x5ef296);
__builtin_memmove((R+4),(R+24),4);
}
B5ef298:{NFSU2_TR(0x5ef298);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef29bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ef29b:L5ef29b:{c.instructions+=2;NFSU2_TR(0x5ef29b);
__builtin_memmove((R+4),(R+24),4);
}
B5ef29d:{NFSU2_TR(0x5ef29d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef2a2ull));
TAIL_STATIC(0x40f690u,40f);
}
B5ef2a2:L5ef2a2:{c.instructions+=3;NFSU2_TR(0x5ef2a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef2a6:{NFSU2_TR(0x5ef2a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef2a9:{NFSU2_TR(0x5ef2a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef2ad:L5ef2ad:{c.instructions+=2;NFSU2_TR(0x5ef2ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef2b1:{NFSU2_TR(0x5ef2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef2b6ull));
TAIL_STATIC(0x40f480u,40f);
}
B5ef2b6:L5ef2b6:{c.instructions+=2;NFSU2_TR(0x5ef2b6);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5ef2bc:{NFSU2_TR(0x5ef2bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef2c0:L5ef2c0:{c.instructions+=7;NFSU2_TR(0x5ef2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef2c3:{NFSU2_TR(0x5ef2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ef2c6:{NFSU2_TR(0x5ef2c6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5ef2c7:{NFSU2_TR(0x5ef2c7);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5ef2c9:{NFSU2_TR(0x5ef2c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ef2cb:{NFSU2_TR(0x5ef2cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef2cf:{NFSU2_TR(0x5ef2cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ef130u);}goto L5ef130;}}
}
B5ef2d5:L5ef2d5:{c.instructions+=5;NFSU2_TR(0x5ef2d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef2d6:{NFSU2_TR(0x5ef2d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ef2d7:{NFSU2_TR(0x5ef2d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ef2d8:{NFSU2_TR(0x5ef2d8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef2db:{NFSU2_TR(0x5ef2db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef2e0:L5ef2e0:{c.instructions+=3;NFSU2_TR(0x5ef2e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef2e1:{NFSU2_TR(0x5ef2e1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ef2e4:{NFSU2_TR(0x5ef2e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef30b;}}
}
B5ef2e6:L5ef2e6:{c.instructions+=11;NFSU2_TR(0x5ef2e6);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5ef2eb:{NFSU2_TR(0x5ef2eb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef2ee:{NFSU2_TR(0x5ef2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef2f1:{NFSU2_TR(0x5ef2f1);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef2f7:{NFSU2_TR(0x5ef2f7);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef2f9:{NFSU2_TR(0x5ef2f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ef2fd:{NFSU2_TR(0x5ef2fd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef301:{NFSU2_TR(0x5ef301);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef307:{NFSU2_TR(0x5ef307);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5ef309:{NFSU2_TR(0x5ef309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef30a:{NFSU2_TR(0x5ef30a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef30b:L5ef30b:{c.instructions+=3;NFSU2_TR(0x5ef30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef30e:{NFSU2_TR(0x5ef30e);
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
B5ef310:{NFSU2_TR(0x5ef310);
if(r1(R+518)){{goto L5ef333;}}
}
B5ef312:L5ef312:{c.instructions+=2;NFSU2_TR(0x5ef312);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef317:{NFSU2_TR(0x5ef317);
if(r1(R+518)){{goto L5ef333;}}
}
B5ef319:L5ef319:{c.instructions+=8;NFSU2_TR(0x5ef319);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5ef31f:{NFSU2_TR(0x5ef31f);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef321:{NFSU2_TR(0x5ef321);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ef325:{NFSU2_TR(0x5ef325);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef329:{NFSU2_TR(0x5ef329);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef32f:{NFSU2_TR(0x5ef32f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ef331:{NFSU2_TR(0x5ef331);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef332:{NFSU2_TR(0x5ef332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef333:L5ef333:{c.instructions+=4;NFSU2_TR(0x5ef333);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef339:{NFSU2_TR(0x5ef339);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ef33b:{NFSU2_TR(0x5ef33b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef33c:{NFSU2_TR(0x5ef33c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef340:L5ef340:{c.instructions+=39;NFSU2_TR(0x5ef340);
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
B5ef342:{NFSU2_TR(0x5ef342);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef345:{NFSU2_TR(0x5ef345);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef34b:{NFSU2_TR(0x5ef34b);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef351:{NFSU2_TR(0x5ef351);
__builtin_memmove((R+8),gp(0x86b390),4);
}
B5ef357:{NFSU2_TR(0x5ef357);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef35a:{NFSU2_TR(0x5ef35a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef35c:{NFSU2_TR(0x5ef35c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef35f:{NFSU2_TR(0x5ef35f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef362:{NFSU2_TR(0x5ef362);
__builtin_memmove((R+8),gp(0x86b390),4);
}
B5ef368:{NFSU2_TR(0x5ef368);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef36e:{NFSU2_TR(0x5ef36e);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef374:{NFSU2_TR(0x5ef374);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef377:{NFSU2_TR(0x5ef377);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef379:{NFSU2_TR(0x5ef379);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef37c:{NFSU2_TR(0x5ef37c);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef37f:{NFSU2_TR(0x5ef37f);
__builtin_memmove((R+8),gp(0x86b390),4);
}
B5ef385:{NFSU2_TR(0x5ef385);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef38b:{NFSU2_TR(0x5ef38b);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef391:{NFSU2_TR(0x5ef391);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef394:{NFSU2_TR(0x5ef394);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef396:{NFSU2_TR(0x5ef396);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef399:{NFSU2_TR(0x5ef399);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef39c:{NFSU2_TR(0x5ef39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef39f:{NFSU2_TR(0x5ef39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3a2:{NFSU2_TR(0x5ef3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3a5:{NFSU2_TR(0x5ef3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3a8:{NFSU2_TR(0x5ef3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3ab:{NFSU2_TR(0x5ef3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3ae:{NFSU2_TR(0x5ef3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3b1:{NFSU2_TR(0x5ef3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3b4:{NFSU2_TR(0x5ef3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3b7:{NFSU2_TR(0x5ef3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3ba:{NFSU2_TR(0x5ef3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3bd:{NFSU2_TR(0x5ef3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3c0:{NFSU2_TR(0x5ef3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3c3:{NFSU2_TR(0x5ef3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3c6:{NFSU2_TR(0x5ef3c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ef3c9:{NFSU2_TR(0x5ef3c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef3d0:L5ef3d0:{c.instructions+=23;NFSU2_TR(0x5ef3d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef3d1:{NFSU2_TR(0x5ef3d1);
__builtin_memmove((R+24),(R+4),4);
}
B5ef3d3:{NFSU2_TR(0x5ef3d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef3d4:{NFSU2_TR(0x5ef3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ef3d8:{NFSU2_TR(0x5ef3d8);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef3db:{NFSU2_TR(0x5ef3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef3de:{NFSU2_TR(0x5ef3de);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef3e1:{NFSU2_TR(0x5ef3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef3e4:{NFSU2_TR(0x5ef3e4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef3e6:{NFSU2_TR(0x5ef3e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ef3ec:{NFSU2_TR(0x5ef3ec);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef3ef:{NFSU2_TR(0x5ef3ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef3f0:{NFSU2_TR(0x5ef3f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ef3f3:{NFSU2_TR(0x5ef3f3);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef3f6:{NFSU2_TR(0x5ef3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef3f9:{NFSU2_TR(0x5ef3f9);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef3fc:{NFSU2_TR(0x5ef3fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef3fd:{NFSU2_TR(0x5ef3fd);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef400:{NFSU2_TR(0x5ef400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef403:{NFSU2_TR(0x5ef403);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef405:{NFSU2_TR(0x5ef405);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef408:{NFSU2_TR(0x5ef408);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef40b:{NFSU2_TR(0x5ef40b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef410ull));
TAIL_STATIC(0x43cbd0u,43c);
}
B5ef410:L5ef410:{c.instructions+=29;NFSU2_TR(0x5ef410);
{u32 ea_=u32(r4(R+28)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef416:{NFSU2_TR(0x5ef416);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef41c:{NFSU2_TR(0x5ef41c);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef422:{NFSU2_TR(0x5ef422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef425:{NFSU2_TR(0x5ef425);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ef427:{NFSU2_TR(0x5ef427);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef429:{NFSU2_TR(0x5ef429);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef42c:{NFSU2_TR(0x5ef42c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ef42e:{NFSU2_TR(0x5ef42e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef431:{NFSU2_TR(0x5ef431);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef434:{NFSU2_TR(0x5ef434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef437:{NFSU2_TR(0x5ef437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef43a:{NFSU2_TR(0x5ef43a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ef43c:{NFSU2_TR(0x5ef43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef43f:{NFSU2_TR(0x5ef43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef442:{NFSU2_TR(0x5ef442);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef445:{NFSU2_TR(0x5ef445);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef448:{NFSU2_TR(0x5ef448);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ef44a:{NFSU2_TR(0x5ef44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef44d:{NFSU2_TR(0x5ef44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef450:{NFSU2_TR(0x5ef450);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef453:{NFSU2_TR(0x5ef453);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef456:{NFSU2_TR(0x5ef456);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ef459:{NFSU2_TR(0x5ef459);
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
B5ef45b:{NFSU2_TR(0x5ef45b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5ef45e:{NFSU2_TR(0x5ef45e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef45f:{NFSU2_TR(0x5ef45f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ef462:{NFSU2_TR(0x5ef462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ef463:{NFSU2_TR(0x5ef463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef470:L5ef470:{c.instructions+=23;NFSU2_TR(0x5ef470);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef471:{NFSU2_TR(0x5ef471);
__builtin_memmove((R+20),(R+16),4);
}
B5ef473:{NFSU2_TR(0x5ef473);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ef476:{NFSU2_TR(0x5ef476);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x34ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef479:{NFSU2_TR(0x5ef479);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef47a:{NFSU2_TR(0x5ef47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ef47d:{NFSU2_TR(0x5ef47d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef47e:{NFSU2_TR(0x5ef47e);
__builtin_memmove((R+24),(R+4),4);
}
B5ef480:{NFSU2_TR(0x5ef480);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef483:{NFSU2_TR(0x5ef483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef486:{NFSU2_TR(0x5ef486);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef487:{NFSU2_TR(0x5ef487);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef48b:{NFSU2_TR(0x5ef48b);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef48e:{NFSU2_TR(0x5ef48e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef48f:{NFSU2_TR(0x5ef48f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef493:{NFSU2_TR(0x5ef493);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef494:{NFSU2_TR(0x5ef494);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef497:{NFSU2_TR(0x5ef497);
{u32 ea_=u32(u32(8017616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef49d:{NFSU2_TR(0x5ef49d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef49e:{NFSU2_TR(0x5ef49e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef49f:{NFSU2_TR(0x5ef49f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef4a3:{NFSU2_TR(0x5ef4a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef4a7:{NFSU2_TR(0x5ef4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef4acull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5ef4ac:L5ef4ac:{c.instructions+=11;NFSU2_TR(0x5ef4ac);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef4af:{NFSU2_TR(0x5ef4af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef4b1:{NFSU2_TR(0x5ef4b1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef4b5:{NFSU2_TR(0x5ef4b5);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef4b8:{NFSU2_TR(0x5ef4b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5ef4bb:{NFSU2_TR(0x5ef4bb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ef4bf:{NFSU2_TR(0x5ef4bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef4c5:{NFSU2_TR(0x5ef4c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef4c9:{NFSU2_TR(0x5ef4c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef4cb:{NFSU2_TR(0x5ef4cb);
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
B5ef4ce:{NFSU2_TR(0x5ef4ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef4de;}}
}
B5ef4d0:L5ef4d0:{c.instructions+=3;NFSU2_TR(0x5ef4d0);
{u32 ea_=u32(u32(8017612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef4d6:{NFSU2_TR(0x5ef4d6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef4da:{NFSU2_TR(0x5ef4da);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef4de:L5ef4de:{c.instructions+=7;NFSU2_TR(0x5ef4de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4df:{NFSU2_TR(0x5ef4df);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef4e3:{NFSU2_TR(0x5ef4e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ef4e6:{NFSU2_TR(0x5ef4e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4e7:{NFSU2_TR(0x5ef4e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4e8:{NFSU2_TR(0x5ef4e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4e9:{NFSU2_TR(0x5ef4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef4eeull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5ef4ee:L5ef4ee:{c.instructions+=7;NFSU2_TR(0x5ef4ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef4f1:{NFSU2_TR(0x5ef4f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4f2:{NFSU2_TR(0x5ef4f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ef4f5:{NFSU2_TR(0x5ef4f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4f6:{NFSU2_TR(0x5ef4f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ef4fa:{NFSU2_TR(0x5ef4fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef4fb:{NFSU2_TR(0x5ef4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef500ull));
TAIL_STATIC(0x43f830u,43f);
}
B5ef500:L5ef500:{c.instructions+=10;NFSU2_TR(0x5ef500);
{u32 ea_=u32(u32(8017600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef506:{NFSU2_TR(0x5ef506);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef509:{NFSU2_TR(0x5ef509);
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
B5ef50c:{NFSU2_TR(0x5ef50c);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef510:{NFSU2_TR(0x5ef510);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef516:{NFSU2_TR(0x5ef516);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef519:{NFSU2_TR(0x5ef519);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef51a:{NFSU2_TR(0x5ef51a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef51b:{NFSU2_TR(0x5ef51b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef51c:{NFSU2_TR(0x5ef51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef521ull));
TAIL_STATIC(0x43d100u,43d);
}
B5ef521:L5ef521:{c.instructions+=3;NFSU2_TR(0x5ef521);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef522:{NFSU2_TR(0x5ef522);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef523:{NFSU2_TR(0x5ef523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef528ull));
TAIL_STATIC(0x43f820u,43f);
}
B5ef528:L5ef528:{c.instructions+=8;NFSU2_TR(0x5ef528);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef52b:{NFSU2_TR(0x5ef52b);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef52e:{NFSU2_TR(0x5ef52e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5ef531:{NFSU2_TR(0x5ef531);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ef534:{NFSU2_TR(0x5ef534);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef537:{NFSU2_TR(0x5ef537);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef539:{NFSU2_TR(0x5ef539);
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
B5ef53c:{NFSU2_TR(0x5ef53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef54c;}}
}
B5ef53e:L5ef53e:{c.instructions+=7;NFSU2_TR(0x5ef53e);
w4(R+0,u32(0x1ull));
}
B5ef543:{NFSU2_TR(0x5ef543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef544:{NFSU2_TR(0x5ef544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ef545:{NFSU2_TR(0x5ef545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ef546:{NFSU2_TR(0x5ef546);
__builtin_memmove((R+16),(R+20),4);
}
B5ef548:{NFSU2_TR(0x5ef548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ef549:{NFSU2_TR(0x5ef549);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef54c:L5ef54c:{c.instructions+=7;NFSU2_TR(0x5ef54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef54d:{NFSU2_TR(0x5ef54d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ef54e:{NFSU2_TR(0x5ef54e);
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
B5ef550:{NFSU2_TR(0x5ef550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ef551:{NFSU2_TR(0x5ef551);
__builtin_memmove((R+16),(R+20),4);
}
B5ef553:{NFSU2_TR(0x5ef553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ef554:{NFSU2_TR(0x5ef554);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef560:L5ef560:{c.instructions+=9;NFSU2_TR(0x5ef560);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef561:{NFSU2_TR(0x5ef561);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef564:{NFSU2_TR(0x5ef564);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ef567:{NFSU2_TR(0x5ef567);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ef56d:{NFSU2_TR(0x5ef56d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ef571:{NFSU2_TR(0x5ef571);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef577:{NFSU2_TR(0x5ef577);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef579:{NFSU2_TR(0x5ef579);
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
B5ef57c:{NFSU2_TR(0x5ef57c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef59d;}}
}
B5ef57e:L5ef57e:{c.instructions+=6;NFSU2_TR(0x5ef57e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef582:{NFSU2_TR(0x5ef582);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef588:{NFSU2_TR(0x5ef588);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef58c:{NFSU2_TR(0x5ef58c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef58e:{NFSU2_TR(0x5ef58e);
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
B5ef591:{NFSU2_TR(0x5ef591);
if(r1(R+514)){{goto L5ef59b;}}
}
B5ef593:L5ef593:{c.instructions+=2;NFSU2_TR(0x5ef593);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef595:{NFSU2_TR(0x5ef595);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef59b:L5ef59b:{c.instructions+=2;NFSU2_TR(0x5ef59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef59c:{NFSU2_TR(0x5ef59c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef59d:L5ef59d:{c.instructions+=3;NFSU2_TR(0x5ef59d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef5a3:{NFSU2_TR(0x5ef5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef5a4:{NFSU2_TR(0x5ef5a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef5b0:L5ef5b0:{c.instructions+=2;NFSU2_TR(0x5ef5b0);
u8 U[4];
w4(U+0,u32(0x7a5c90ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5ef5b6:{NFSU2_TR(0x5ef5b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef5c0:L5ef5c0:{c.instructions+=3;NFSU2_TR(0x5ef5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef5c4:{NFSU2_TR(0x5ef5c4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef5c6:{NFSU2_TR(0x5ef5c6);
if(r1(R+518)){{goto L5ef639;}}
}
B5ef5c8:L5ef5c8:{c.instructions+=3;NFSU2_TR(0x5ef5c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef5cc:{NFSU2_TR(0x5ef5cc);
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
B5ef5ce:{NFSU2_TR(0x5ef5ce);
if(r1(R+518)){{goto L5ef639;}}
}
B5ef5d0:L5ef5d0:{c.instructions+=23;NFSU2_TR(0x5ef5d0);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef5d3:{NFSU2_TR(0x5ef5d3);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef5d6:{NFSU2_TR(0x5ef5d6);
{u32 ea_=u32(r4(R+4)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef5dc:{NFSU2_TR(0x5ef5dc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef5de:{NFSU2_TR(0x5ef5de);
{u32 ea_=u32(r4(R+4)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef5e4:{NFSU2_TR(0x5ef5e4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef5e6:{NFSU2_TR(0x5ef5e6);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef5ec:{NFSU2_TR(0x5ef5ec);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef5f2:{NFSU2_TR(0x5ef5f2);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef5f8:{NFSU2_TR(0x5ef5f8);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef5fe:{NFSU2_TR(0x5ef5fe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef601:{NFSU2_TR(0x5ef601);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef604:{NFSU2_TR(0x5ef604);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef60a:{NFSU2_TR(0x5ef60a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef60c:{NFSU2_TR(0x5ef60c);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef612:{NFSU2_TR(0x5ef612);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef614:{NFSU2_TR(0x5ef614);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef61a:{NFSU2_TR(0x5ef61a);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef620:{NFSU2_TR(0x5ef620);
{u32 ea_=u32(r4(R+4)+u32(376u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef626:{NFSU2_TR(0x5ef626);
{u32 ea_=u32(r4(R+4)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef62c:{NFSU2_TR(0x5ef62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef632:{NFSU2_TR(0x5ef632);
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
B5ef633:{NFSU2_TR(0x5ef633);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef639:L5ef639:{c.instructions+=1;NFSU2_TR(0x5ef639);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef640:L5ef640:{c.instructions+=7;NFSU2_TR(0x5ef640);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef641:{NFSU2_TR(0x5ef641);
__builtin_memmove((R+20),(R+16),4);
}
B5ef643:{NFSU2_TR(0x5ef643);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef644:{NFSU2_TR(0x5ef644);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef64a:{NFSU2_TR(0x5ef64a);
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
B5ef64c:{NFSU2_TR(0x5ef64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef64f:{NFSU2_TR(0x5ef64f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ef703;}}
}
B5ef655:L5ef655:{c.instructions+=41;NFSU2_TR(0x5ef655);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef658:{NFSU2_TR(0x5ef658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef65b:{NFSU2_TR(0x5ef65b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ef661:{NFSU2_TR(0x5ef661);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef667:{NFSU2_TR(0x5ef667);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef66d:{NFSU2_TR(0x5ef66d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ef66f:{NFSU2_TR(0x5ef66f);
{u32 ea_=u32(r4(R+4)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef675:{NFSU2_TR(0x5ef675);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef677:{NFSU2_TR(0x5ef677);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef679:{NFSU2_TR(0x5ef679);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5ef67b:{NFSU2_TR(0x5ef67b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef67e:{NFSU2_TR(0x5ef67e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ef680:{NFSU2_TR(0x5ef680);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef683:{NFSU2_TR(0x5ef683);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef689:{NFSU2_TR(0x5ef689);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef68f:{NFSU2_TR(0x5ef68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef692:{NFSU2_TR(0x5ef692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef695:{NFSU2_TR(0x5ef695);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ef697:{NFSU2_TR(0x5ef697);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef69d:{NFSU2_TR(0x5ef69d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef69f:{NFSU2_TR(0x5ef69f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ef6a1:{NFSU2_TR(0x5ef6a1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef6a4:{NFSU2_TR(0x5ef6a4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef6a7:{NFSU2_TR(0x5ef6a7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ef6a9:{NFSU2_TR(0x5ef6a9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef6ac:{NFSU2_TR(0x5ef6ac);
__builtin_memmove((R+8),gp(0x86b390),4);
}
B5ef6b2:{NFSU2_TR(0x5ef6b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef6b4:{NFSU2_TR(0x5ef6b4);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef6ba:{NFSU2_TR(0x5ef6ba);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef6c0:{NFSU2_TR(0x5ef6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef6c6:{NFSU2_TR(0x5ef6c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef6c8:{NFSU2_TR(0x5ef6c8);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef6ce:{NFSU2_TR(0x5ef6ce);
{u32 ea_=u32(r4(R+4)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef6d4:{NFSU2_TR(0x5ef6d4);
__builtin_memmove((R+0),gp(0x86b390),4);
}
B5ef6d9:{NFSU2_TR(0x5ef6d9);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef6df:{NFSU2_TR(0x5ef6df);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef6e5:{NFSU2_TR(0x5ef6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef6eb:{NFSU2_TR(0x5ef6eb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef6ed:{NFSU2_TR(0x5ef6ed);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef6f3:{NFSU2_TR(0x5ef6f3);
{u32 ea_=u32(r4(R+4)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef6f9:{NFSU2_TR(0x5ef6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ef703:L5ef703:{c.instructions+=3;NFSU2_TR(0x5ef703);
__builtin_memmove((R+16),(R+20),4);
}
B5ef705:{NFSU2_TR(0x5ef705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ef706:{NFSU2_TR(0x5ef706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef710:L5ef710:{c.instructions+=72;NFSU2_TR(0x5ef710);
__builtin_memmove((R+0),(R+4),4);
}
B5ef712:{NFSU2_TR(0x5ef712);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef716:{NFSU2_TR(0x5ef716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef718:{NFSU2_TR(0x5ef718);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ef71a:{NFSU2_TR(0x5ef71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef71d:{NFSU2_TR(0x5ef71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef720:{NFSU2_TR(0x5ef720);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef723:{NFSU2_TR(0x5ef723);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef726:{NFSU2_TR(0x5ef726);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef729:{NFSU2_TR(0x5ef729);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef72c:{NFSU2_TR(0x5ef72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef72f:{NFSU2_TR(0x5ef72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef732:{NFSU2_TR(0x5ef732);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef734:{NFSU2_TR(0x5ef734);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef737:{NFSU2_TR(0x5ef737);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef738:{NFSU2_TR(0x5ef738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef739:{NFSU2_TR(0x5ef739);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef73c:{NFSU2_TR(0x5ef73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef73f:{NFSU2_TR(0x5ef73f);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef742:{NFSU2_TR(0x5ef742);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ef745:{NFSU2_TR(0x5ef745);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef748:{NFSU2_TR(0x5ef748);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef74b:{NFSU2_TR(0x5ef74b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef74d:{NFSU2_TR(0x5ef74d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ef750:{NFSU2_TR(0x5ef750);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef753:{NFSU2_TR(0x5ef753);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef756:{NFSU2_TR(0x5ef756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ef758:{NFSU2_TR(0x5ef758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ef75a:{NFSU2_TR(0x5ef75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ef75d:{NFSU2_TR(0x5ef75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef760:{NFSU2_TR(0x5ef760);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ef763:{NFSU2_TR(0x5ef763);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef766:{NFSU2_TR(0x5ef766);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef769:{NFSU2_TR(0x5ef769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef76c:{NFSU2_TR(0x5ef76c);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef76f:{NFSU2_TR(0x5ef76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef772:{NFSU2_TR(0x5ef772);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef775:{NFSU2_TR(0x5ef775);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef779:{NFSU2_TR(0x5ef779);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef77b:{NFSU2_TR(0x5ef77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef77e:{NFSU2_TR(0x5ef77e);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef781:{NFSU2_TR(0x5ef781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef784:{NFSU2_TR(0x5ef784);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef788:{NFSU2_TR(0x5ef788);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef78b:{NFSU2_TR(0x5ef78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef78e:{NFSU2_TR(0x5ef78e);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef791:{NFSU2_TR(0x5ef791);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef794:{NFSU2_TR(0x5ef794);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef797:{NFSU2_TR(0x5ef797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef79a:{NFSU2_TR(0x5ef79a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef79c:{NFSU2_TR(0x5ef79c);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef79f:{NFSU2_TR(0x5ef79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ef7a0:{NFSU2_TR(0x5ef7a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ef7a1:{NFSU2_TR(0x5ef7a1);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef7a4:{NFSU2_TR(0x5ef7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef7a7:{NFSU2_TR(0x5ef7a7);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef7aa:{NFSU2_TR(0x5ef7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef7ae:{NFSU2_TR(0x5ef7ae);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef7b1:{NFSU2_TR(0x5ef7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef7b4:{NFSU2_TR(0x5ef7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef7b7:{NFSU2_TR(0x5ef7b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef7b9:{NFSU2_TR(0x5ef7b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef7bd:{NFSU2_TR(0x5ef7bd);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef7c0:{NFSU2_TR(0x5ef7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef7c3:{NFSU2_TR(0x5ef7c3);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef7c6:{NFSU2_TR(0x5ef7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef7c9:{NFSU2_TR(0x5ef7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef7cc:{NFSU2_TR(0x5ef7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ef7cf:{NFSU2_TR(0x5ef7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef7d2:{NFSU2_TR(0x5ef7d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ef7d5:{NFSU2_TR(0x5ef7d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ef7d8:{NFSU2_TR(0x5ef7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef7e0:L5ef7e0:{c.instructions+=9;NFSU2_TR(0x5ef7e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5ef7e3:{NFSU2_TR(0x5ef7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef7e9:{NFSU2_TR(0x5ef7e9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef7ef:{NFSU2_TR(0x5ef7ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef7f3:{NFSU2_TR(0x5ef7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef7f6:{NFSU2_TR(0x5ef7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x454ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef7fc:{NFSU2_TR(0x5ef7fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5ef7ff:{NFSU2_TR(0x5ef7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ef801:{NFSU2_TR(0x5ef801);
if(r1(R+518)){{goto L5ef85d;}}
}
B5ef803:L5ef803:{c.instructions+=2;NFSU2_TR(0x5ef803);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef809:{NFSU2_TR(0x5ef809);
if(r1(R+518)){{goto L5ef85d;}}
}
B5ef80b:L5ef80b:{c.instructions+=7;NFSU2_TR(0x5ef80b);
{u32 ea_=u32(r4(R+0)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef811:{NFSU2_TR(0x5ef811);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef817:{NFSU2_TR(0x5ef817);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ef81b:{NFSU2_TR(0x5ef81b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef821:{NFSU2_TR(0x5ef821);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef823:{NFSU2_TR(0x5ef823);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef826:{NFSU2_TR(0x5ef826);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef85d;}}
}
B5ef828:L5ef828:{c.instructions+=5;NFSU2_TR(0x5ef828);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef82c:{NFSU2_TR(0x5ef82c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef830:{NFSU2_TR(0x5ef830);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef832:{NFSU2_TR(0x5ef832);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef835:{NFSU2_TR(0x5ef835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef853;}}
}
B5ef837:L5ef837:{c.instructions+=7;NFSU2_TR(0x5ef837);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef839:{NFSU2_TR(0x5ef839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ef83d:{NFSU2_TR(0x5ef83d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef841:{NFSU2_TR(0x5ef841);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ef845:{NFSU2_TR(0x5ef845);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ef849:{NFSU2_TR(0x5ef849);
{u32 ea_=u32(u32(8016980u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ef84f:{NFSU2_TR(0x5ef84f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ef853:L5ef853:{c.instructions+=3;NFSU2_TR(0x5ef853);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef857:{NFSU2_TR(0x5ef857);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ef85b:{NFSU2_TR(0x5ef85b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ef85d:L5ef85d:{c.instructions+=2;NFSU2_TR(0x5ef85d);
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
B5ef860:{NFSU2_TR(0x5ef860);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef870:L5ef870:{c.instructions+=11;NFSU2_TR(0x5ef870);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef871:{NFSU2_TR(0x5ef871);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef875:{NFSU2_TR(0x5ef875);
__builtin_memmove((R+8),(R+4),4);
}
B5ef877:{NFSU2_TR(0x5ef877);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ef87a:{NFSU2_TR(0x5ef87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x454ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ef880:{NFSU2_TR(0x5ef880);
{u32 ea_=u32(u32(8016984u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ef886:{NFSU2_TR(0x5ef886);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5ef889:{NFSU2_TR(0x5ef889);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ef88b:{NFSU2_TR(0x5ef88b);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef891:{NFSU2_TR(0x5ef891);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef895:{NFSU2_TR(0x5ef895);
if(r1(R+518)){{goto L5ef8b1;}}
}
B5ef897:L5ef897:{c.instructions+=2;NFSU2_TR(0x5ef897);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef89d:{NFSU2_TR(0x5ef89d);
if(r1(R+518)){{goto L5ef8b1;}}
}
B5ef89f:L5ef89f:{c.instructions+=4;NFSU2_TR(0x5ef89f);
{u32 ea_=u32(r4(R+0)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ef8a5:{NFSU2_TR(0x5ef8a5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef8ab:{NFSU2_TR(0x5ef8ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef8af:{NFSU2_TR(0x5ef8af);
{goto L5ef8b9;}
}
B5ef8b1:L5ef8b1:{c.instructions+=1;NFSU2_TR(0x5ef8b1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5ef8b9:L5ef8b9:{c.instructions+=2;NFSU2_TR(0x5ef8b9);
__builtin_memmove((R+4),(R+8),4);
}
B5ef8bb:{NFSU2_TR(0x5ef8bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ef8c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ef7e0u);}goto L5ef7e0;}
}
B5ef8c0:L5ef8c0:{c.instructions+=8;NFSU2_TR(0x5ef8c0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef8c4:{NFSU2_TR(0x5ef8c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ef8ca:{NFSU2_TR(0x5ef8ca);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ef8cc:{NFSU2_TR(0x5ef8cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef8ce:{NFSU2_TR(0x5ef8ce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef8d4:{NFSU2_TR(0x5ef8d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef8d7:{NFSU2_TR(0x5ef8d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef8d9:{NFSU2_TR(0x5ef8d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef961;}}
}
B5ef8df:L5ef8df:{c.instructions+=2;NFSU2_TR(0x5ef8df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ef8e2:{NFSU2_TR(0x5ef8e2);
if(r1(R+514)){{goto L5ef919;}}
}
B5ef8e4:L5ef8e4:{c.instructions+=6;NFSU2_TR(0x5ef8e4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef8ea:{NFSU2_TR(0x5ef8ea);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5ef8ec:{NFSU2_TR(0x5ef8ec);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B5ef8ee:{NFSU2_TR(0x5ef8ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef8f0:{NFSU2_TR(0x5ef8f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ef8f3:{NFSU2_TR(0x5ef8f3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ef8f9;}}
}
B5ef8f5:L5ef8f5:{c.instructions+=2;NFSU2_TR(0x5ef8f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef8f7:{NFSU2_TR(0x5ef8f7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ef8f9:L5ef8f9:{c.instructions+=10;NFSU2_TR(0x5ef8f9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef8fd:{NFSU2_TR(0x5ef8fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ef8ff:{NFSU2_TR(0x5ef8ff);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef905:{NFSU2_TR(0x5ef905);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef90b:{NFSU2_TR(0x5ef90b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ef90d:{NFSU2_TR(0x5ef90d);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5ef90f:{NFSU2_TR(0x5ef90f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef911:{NFSU2_TR(0x5ef911);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ef913:{NFSU2_TR(0x5ef913);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ef917:{NFSU2_TR(0x5ef917);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5ef919:L5ef919:{c.instructions+=4;NFSU2_TR(0x5ef919);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef91f:{NFSU2_TR(0x5ef91f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef921:{NFSU2_TR(0x5ef921);
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
B5ef924:{NFSU2_TR(0x5ef924);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef95b;}}
}
B5ef926:L5ef926:{c.instructions+=6;NFSU2_TR(0x5ef926);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ef92c:{NFSU2_TR(0x5ef92c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ef932:{NFSU2_TR(0x5ef932);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ef936:{NFSU2_TR(0x5ef936);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef938:{NFSU2_TR(0x5ef938);
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
B5ef93b:{NFSU2_TR(0x5ef93b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ef943;}}
}
B5ef93d:L5ef93d:{c.instructions+=2;NFSU2_TR(0x5ef93d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef93f:{NFSU2_TR(0x5ef93f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef943:L5ef943:{c.instructions+=5;NFSU2_TR(0x5ef943);
{u32 ea_=u32(u32(8016980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef949:{NFSU2_TR(0x5ef949);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ef94b:{NFSU2_TR(0x5ef94b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef94f:{NFSU2_TR(0x5ef94f);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef955:{NFSU2_TR(0x5ef955);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef95b:L5ef95b:{c.instructions+=3;NFSU2_TR(0x5ef95b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef95d:{NFSU2_TR(0x5ef95d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef95e:{NFSU2_TR(0x5ef95e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef961:L5ef961:{c.instructions+=2;NFSU2_TR(0x5ef961);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef964:{NFSU2_TR(0x5ef964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ef9a3;}}
}
B5ef966:L5ef966:{c.instructions+=7;NFSU2_TR(0x5ef966);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ef968:{NFSU2_TR(0x5ef968);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ef96e:{NFSU2_TR(0x5ef96e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ef970:{NFSU2_TR(0x5ef970);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B5ef972:{NFSU2_TR(0x5ef972);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef974:{NFSU2_TR(0x5ef974);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ef977:{NFSU2_TR(0x5ef977);
if(r1(R+518)){{goto L5ef97d;}}
}
B5ef979:L5ef979:{c.instructions+=2;NFSU2_TR(0x5ef979);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef97b:{NFSU2_TR(0x5ef97b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ef97d:L5ef97d:{c.instructions+=11;NFSU2_TR(0x5ef97d);
{u32 ea_=u32(u32(8016980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef983:{NFSU2_TR(0x5ef983);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ef985:{NFSU2_TR(0x5ef985);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef989:{NFSU2_TR(0x5ef989);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef98f:{NFSU2_TR(0x5ef98f);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef995:{NFSU2_TR(0x5ef995);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ef997:{NFSU2_TR(0x5ef997);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5ef999:{NFSU2_TR(0x5ef999);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ef99b:{NFSU2_TR(0x5ef99b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ef99d:{NFSU2_TR(0x5ef99d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ef9a1:{NFSU2_TR(0x5ef9a1);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5ef9a3:L5ef9a3:{c.instructions+=4;NFSU2_TR(0x5ef9a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ef9a9:{NFSU2_TR(0x5ef9a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef9ab:{NFSU2_TR(0x5ef9ab);
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
B5ef9ae:{NFSU2_TR(0x5ef9ae);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ef95bu);}goto L5ef95b;}}
}
B5ef9b0:L5ef9b0:{c.instructions+=5;NFSU2_TR(0x5ef9b0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ef9b2:{NFSU2_TR(0x5ef9b2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ef9b6:{NFSU2_TR(0x5ef9b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ef9b8:{NFSU2_TR(0x5ef9b8);
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
B5ef9bb:{NFSU2_TR(0x5ef9bb);
if(r1(R+518)){{goto L5ef9c3;}}
}
B5ef9bd:L5ef9bd:{c.instructions+=2;NFSU2_TR(0x5ef9bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ef9bf:{NFSU2_TR(0x5ef9bf);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ef9c3:L5ef9c3:{c.instructions+=5;NFSU2_TR(0x5ef9c3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ef9c7:{NFSU2_TR(0x5ef9c7);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ef9cd:{NFSU2_TR(0x5ef9cd);
{u32 ea_=u32(r4(R+8)+u32(440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ef9d3:{NFSU2_TR(0x5ef9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ef9d4:{NFSU2_TR(0x5ef9d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef9e0:L5ef9e0:{c.instructions+=3;NFSU2_TR(0x5ef9e0);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ef9e7:{NFSU2_TR(0x5ef9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ef9e9:{NFSU2_TR(0x5ef9e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ef9f4;}}
}
B5ef9eb:L5ef9eb:{c.instructions+=4;NFSU2_TR(0x5ef9eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ef9ed:{NFSU2_TR(0x5ef9ed);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef9f0:{NFSU2_TR(0x5ef9f0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B5ef9f3:{NFSU2_TR(0x5ef9f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ef9f4:L5ef9f4:{c.instructions+=4;NFSU2_TR(0x5ef9f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ef9f6:{NFSU2_TR(0x5ef9f6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ef9f9:{NFSU2_TR(0x5ef9f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B5ef9fc:{NFSU2_TR(0x5ef9fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efa00:L5efa00:{c.instructions+=3;NFSU2_TR(0x5efa00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5efa02:{NFSU2_TR(0x5efa02);
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
B5efa05:{NFSU2_TR(0x5efa05);
if(r1(R+518)){{goto L5efa28;}}
}
B5efa07:L5efa07:{c.instructions+=2;NFSU2_TR(0x5efa07);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5efa0a:{NFSU2_TR(0x5efa0a);
if(r1(R+518)){{goto L5efa28;}}
}
B5efa0c:L5efa0c:{c.instructions+=2;NFSU2_TR(0x5efa0c);
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
B5efa0e:{NFSU2_TR(0x5efa0e);
if(r1(R+518)){{goto L5efa28;}}
}
B5efa10:L5efa10:{c.instructions+=2;NFSU2_TR(0x5efa10);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5efa13:{NFSU2_TR(0x5efa13);
if(r1(R+518)){{goto L5efa28;}}
}
B5efa15:L5efa15:{c.instructions+=2;NFSU2_TR(0x5efa15);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5efa18:{NFSU2_TR(0x5efa18);
if(r1(R+518)){{goto L5efa28;}}
}
B5efa1a:L5efa1a:{c.instructions+=2;NFSU2_TR(0x5efa1a);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf48),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5efa21:{NFSU2_TR(0x5efa21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5efa2b;}}
}
B5efa23:L5efa23:{c.instructions+=2;NFSU2_TR(0x5efa23);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5efa26:{NFSU2_TR(0x5efa26);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5efa2b;}}
}
B5efa28:L5efa28:{c.instructions+=2;NFSU2_TR(0x5efa28);
w1(R+0,u8(0x1ull));
}
B5efa2a:{NFSU2_TR(0x5efa2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efa2b:L5efa2b:{c.instructions+=2;NFSU2_TR(0x5efa2b);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5efa2d:{NFSU2_TR(0x5efa2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efa30:L5efa30:{c.instructions+=5;NFSU2_TR(0x5efa30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5efa34:{NFSU2_TR(0x5efa34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efa35:{NFSU2_TR(0x5efa35);
__builtin_memmove((R+24),(R+4),4);
}
B5efa37:{NFSU2_TR(0x5efa37);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5efa39:{NFSU2_TR(0x5efa39);
if(r1(R+518)){{goto L5efa88;}}
}
B5efa3b:L5efa3b:{c.instructions+=3;NFSU2_TR(0x5efa3b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5efa3e:{NFSU2_TR(0x5efa3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5efa40:{NFSU2_TR(0x5efa40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5efa88;}}
}
B5efa42:L5efa42:{c.instructions+=4;NFSU2_TR(0x5efa42);
{u32 ea_=u32(u32(8017696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5efa48:{NFSU2_TR(0x5efa48);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5efa4e:{NFSU2_TR(0x5efa4e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5efa54:{NFSU2_TR(0x5efa54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efa59ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5efa59:L5efa59:{c.instructions+=6;NFSU2_TR(0x5efa59);
{u32 ea_=u32(u32(8017692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5efa5f:{NFSU2_TR(0x5efa5f);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5efa61:{NFSU2_TR(0x5efa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efa67:{NFSU2_TR(0x5efa67);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5efa6d:{NFSU2_TR(0x5efa6d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5efa73:{NFSU2_TR(0x5efa73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efa78ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5efa78:L5efa78:{c.instructions+=2;NFSU2_TR(0x5efa78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efa7e:{NFSU2_TR(0x5efa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5efa88:L5efa88:{c.instructions+=2;NFSU2_TR(0x5efa88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5efa89:{NFSU2_TR(0x5efa89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efa90:L5efa90:{c.instructions+=6;NFSU2_TR(0x5efa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5efa96:{NFSU2_TR(0x5efa96);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5efa9a:{NFSU2_TR(0x5efa9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5efa9c:{NFSU2_TR(0x5efa9c);
{u32 ea_=u32(r4(R+4)+u32(632u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5efaa2:{NFSU2_TR(0x5efaa2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5efaa8:{NFSU2_TR(0x5efaa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efab0:L5efab0:{c.instructions+=2;NFSU2_TR(0x5efab0);
{u32 ea_=u32(r4(R+4)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5efab6:{NFSU2_TR(0x5efab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efac0:L5efac0:{c.instructions+=8;NFSU2_TR(0x5efac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efac1:{NFSU2_TR(0x5efac1);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efac6:{NFSU2_TR(0x5efac6);
u8 U[4];
w4(U+0,u32(0x46800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efacb:{NFSU2_TR(0x5efacb);
__builtin_memmove((R+24),(R+4),4);
}
B5efacd:{NFSU2_TR(0x5efacd);
u8 U[4];
w4(U+0,u32(0xc6800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efad2:{NFSU2_TR(0x5efad2);
u8 U[4];
w4(U+0,u32(0x7a607cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efad7:{NFSU2_TR(0x5efad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efadd:{NFSU2_TR(0x5efadd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efae2ull));
TAIL_STATIC(0x581e90u,581);
}
B5efae2:L5efae2:{c.instructions+=6;NFSU2_TR(0x5efae2);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efae7:{NFSU2_TR(0x5efae7);
u8 U[4];
w4(U+0,u32(0x46800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efaec:{NFSU2_TR(0x5efaec);
u8 U[4];
w4(U+0,u32(0xc6800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efaf1:{NFSU2_TR(0x5efaf1);
u8 U[4];
w4(U+0,u32(0x7a6068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efaf6:{NFSU2_TR(0x5efaf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa08ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efafc:{NFSU2_TR(0x5efafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efb01ull));
TAIL_STATIC(0x581e90u,581);
}
B5efb01:L5efb01:{c.instructions+=6;NFSU2_TR(0x5efb01);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb06:{NFSU2_TR(0x5efb06);
u8 U[4];
w4(U+0,u32(0x45000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb0b:{NFSU2_TR(0x5efb0b);
u8 U[4];
w4(U+0,u32(0xc5000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb10:{NFSU2_TR(0x5efb10);
u8 U[4];
w4(U+0,u32(0x7a6054ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb15:{NFSU2_TR(0x5efb15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efb1b:{NFSU2_TR(0x5efb1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efb20ull));
TAIL_STATIC(0x581e90u,581);
}
B5efb20:L5efb20:{c.instructions+=10;NFSU2_TR(0x5efb20);
{u32 ea_=u32(u32(8373996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5efb26:{NFSU2_TR(0x5efb26);
__builtin_memmove((R+0),gp(0x7fc6ec),4);
}
B5efb2b:{NFSU2_TR(0x5efb2b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5efb2d:{NFSU2_TR(0x5efb2d);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb32:{NFSU2_TR(0x5efb32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb33:{NFSU2_TR(0x5efb33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb34:{NFSU2_TR(0x5efb34);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5efb37:{NFSU2_TR(0x5efb37);
u8 U[4];
w4(U+0,u32(0x7a6040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb3c:{NFSU2_TR(0x5efb3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xca0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efb42:{NFSU2_TR(0x5efb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efb47ull));
TAIL_STATIC(0x581e90u,581);
}
B5efb47:L5efb47:{c.instructions+=6;NFSU2_TR(0x5efb47);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb4c:{NFSU2_TR(0x5efb4c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb51:{NFSU2_TR(0x5efb51);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb56:{NFSU2_TR(0x5efb56);
u8 U[4];
w4(U+0,u32(0x7a6030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb5b:{NFSU2_TR(0x5efb5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdecull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efb61:{NFSU2_TR(0x5efb61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efb66ull));
TAIL_STATIC(0x581e90u,581);
}
B5efb66:L5efb66:{c.instructions+=6;NFSU2_TR(0x5efb66);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb6b:{NFSU2_TR(0x5efb6b);
u8 U[4];
w4(U+0,u32(0x42c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb70:{NFSU2_TR(0x5efb70);
u8 U[4];
w4(U+0,u32(0xc2c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb75:{NFSU2_TR(0x5efb75);
u8 U[4];
w4(U+0,u32(0x7a6018ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb7a:{NFSU2_TR(0x5efb7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efb80:{NFSU2_TR(0x5efb80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efb85ull));
TAIL_STATIC(0x581e90u,581);
}
B5efb85:L5efb85:{c.instructions+=6;NFSU2_TR(0x5efb85);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb8a:{NFSU2_TR(0x5efb8a);
u8 U[4];
w4(U+0,u32(0x41a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb8f:{NFSU2_TR(0x5efb8f);
u8 U[4];
w4(U+0,u32(0xc1a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb94:{NFSU2_TR(0x5efb94);
u8 U[4];
w4(U+0,u32(0x7a6004ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efb99:{NFSU2_TR(0x5efb99);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1084ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efb9f:{NFSU2_TR(0x5efb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efba4ull));
TAIL_STATIC(0x581e90u,581);
}
B5efba4:L5efba4:{c.instructions+=6;NFSU2_TR(0x5efba4);
u8 U[4];
w4(U+0,u32(0x3d4ccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efba9:{NFSU2_TR(0x5efba9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbae:{NFSU2_TR(0x5efbae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbb0:{NFSU2_TR(0x5efbb0);
u8 U[4];
w4(U+0,u32(0x7a5ff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbb5:{NFSU2_TR(0x5efbb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efbbb:{NFSU2_TR(0x5efbbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efbc0ull));
TAIL_STATIC(0x581e90u,581);
}
B5efbc0:L5efbc0:{c.instructions+=6;NFSU2_TR(0x5efbc0);
u8 U[4];
w4(U+0,u32(0x42c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbc5:{NFSU2_TR(0x5efbc5);
u8 U[4];
w4(U+0,u32(0x461c4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbca:{NFSU2_TR(0x5efbca);
u8 U[4];
w4(U+0,u32(0x43fa0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbcf:{NFSU2_TR(0x5efbcf);
u8 U[4];
w4(U+0,u32(0x7a5fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbd4:{NFSU2_TR(0x5efbd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x131cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efbda:{NFSU2_TR(0x5efbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efbdfull));
TAIL_STATIC(0x581e90u,581);
}
B5efbdf:L5efbdf:{c.instructions+=5;NFSU2_TR(0x5efbdf);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbe1:{NFSU2_TR(0x5efbe1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbe3:{NFSU2_TR(0x5efbe3);
u8 U[4];
w4(U+0,u32(0x7a5fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbe8:{NFSU2_TR(0x5efbe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efbee:{NFSU2_TR(0x5efbee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efbf3ull));
TAIL_STATIC(0x5820c0u,582);
}
B5efbf3:L5efbf3:{c.instructions+=6;NFSU2_TR(0x5efbf3);
u8 U[4];
w4(U+0,u32(0x3e000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbf8:{NFSU2_TR(0x5efbf8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbfd:{NFSU2_TR(0x5efbfd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efbff:{NFSU2_TR(0x5efbff);
u8 U[4];
w4(U+0,u32(0x7a5fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc04:{NFSU2_TR(0x5efc04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1468ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc0a:{NFSU2_TR(0x5efc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc0full));
TAIL_STATIC(0x581e90u,581);
}
B5efc0f:L5efc0f:{c.instructions+=6;NFSU2_TR(0x5efc0f);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc14:{NFSU2_TR(0x5efc14);
u8 U[4];
w4(U+0,u32(0x41900000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc19:{NFSU2_TR(0x5efc19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc1b:{NFSU2_TR(0x5efc1b);
u8 U[4];
w4(U+0,u32(0x7a5facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc20:{NFSU2_TR(0x5efc20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc26:{NFSU2_TR(0x5efc26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc2bull));
TAIL_STATIC(0x581e90u,581);
}
B5efc2b:L5efc2b:{c.instructions+=5;NFSU2_TR(0x5efc2b);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc30:{NFSU2_TR(0x5efc30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc32:{NFSU2_TR(0x5efc32);
u8 U[4];
w4(U+0,u32(0x7a5f9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc37:{NFSU2_TR(0x5efc37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc3d:{NFSU2_TR(0x5efc3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc42ull));
TAIL_STATIC(0x5820c0u,582);
}
B5efc42:L5efc42:{c.instructions+=5;NFSU2_TR(0x5efc42);
u8 U[4];
w4(U+0,u32(0x3e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc47:{NFSU2_TR(0x5efc47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc49:{NFSU2_TR(0x5efc49);
u8 U[4];
w4(U+0,u32(0x7a5f8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc4e:{NFSU2_TR(0x5efc4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc54:{NFSU2_TR(0x5efc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc59ull));
TAIL_STATIC(0x5820c0u,582);
}
B5efc59:L5efc59:{c.instructions+=5;NFSU2_TR(0x5efc59);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc5b:{NFSU2_TR(0x5efc5b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc5d:{NFSU2_TR(0x5efc5d);
u8 U[4];
w4(U+0,u32(0x7a5f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc62:{NFSU2_TR(0x5efc62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc68:{NFSU2_TR(0x5efc68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc6dull));
TAIL_STATIC(0x5820c0u,582);
}
B5efc6d:L5efc6d:{c.instructions+=5;NFSU2_TR(0x5efc6d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc6f:{NFSU2_TR(0x5efc6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc71:{NFSU2_TR(0x5efc71);
u8 U[4];
w4(U+0,u32(0x7a5f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc76:{NFSU2_TR(0x5efc76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc7c:{NFSU2_TR(0x5efc7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc81ull));
TAIL_STATIC(0x5820c0u,582);
}
B5efc81:L5efc81:{c.instructions+=5;NFSU2_TR(0x5efc81);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc83:{NFSU2_TR(0x5efc83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc85:{NFSU2_TR(0x5efc85);
u8 U[4];
w4(U+0,u32(0x7a5f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc8a:{NFSU2_TR(0x5efc8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efc90:{NFSU2_TR(0x5efc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efc95ull));
TAIL_STATIC(0x5820c0u,582);
}
B5efc95:L5efc95:{c.instructions+=6;NFSU2_TR(0x5efc95);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc97:{NFSU2_TR(0x5efc97);
u8 U[4];
w4(U+0,u32(0x46610000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc9c:{NFSU2_TR(0x5efc9c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efc9e:{NFSU2_TR(0x5efc9e);
u8 U[4];
w4(U+0,u32(0x7a5f4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efca3:{NFSU2_TR(0x5efca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efca9:{NFSU2_TR(0x5efca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efcaeull));
TAIL_STATIC(0x581f50u,581);
}
B5efcae:L5efcae:{c.instructions+=2;NFSU2_TR(0x5efcae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5efcaf:{NFSU2_TR(0x5efcaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efcb0:L5efcb0:{c.instructions+=13;NFSU2_TR(0x5efcb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efcb2:{NFSU2_TR(0x5efcb2);
u8 U[4];
w4(U+0,u32(0x7798acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efcb7:{NFSU2_TR(0x5efcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5efcbd:{NFSU2_TR(0x5efcbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efcbe:{NFSU2_TR(0x5efcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efcc5:{NFSU2_TR(0x5efcc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efcc6:{NFSU2_TR(0x5efcc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efcc7:{NFSU2_TR(0x5efcc7);
__builtin_memmove((R+24),(R+4),4);
}
B5efcc9:{NFSU2_TR(0x5efcc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efccd:{NFSU2_TR(0x5efccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5efcd0:{NFSU2_TR(0x5efcd0);
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
B5efcd2:{NFSU2_TR(0x5efcd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5efcda:{NFSU2_TR(0x5efcda);
if(r1(R+518)){{goto L5efcf6;}}
}
B5efcdc:L5efcdc:{c.instructions+=2;NFSU2_TR(0x5efcdc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efcde:{NFSU2_TR(0x5efcde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efce3ull));
TAIL_STATIC(0x43fb80u,43f);
}
B5efce3:L5efce3:{c.instructions+=3;NFSU2_TR(0x5efce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5efce6:{NFSU2_TR(0x5efce6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efce7:{NFSU2_TR(0x5efce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efcecull));
TAIL_STATIC(0x440540u,440);
}
B5efcec:L5efcec:{c.instructions+=2;NFSU2_TR(0x5efcec);
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
B5efcef:{NFSU2_TR(0x5efcef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5efcf6:L5efcf6:{c.instructions+=3;NFSU2_TR(0x5efcf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efcfc:{NFSU2_TR(0x5efcfc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x10ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd01:{NFSU2_TR(0x5efd01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd06ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd06:L5efd06:{c.instructions+=3;NFSU2_TR(0x5efd06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd0c:{NFSU2_TR(0x5efd0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0xfull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd11:{NFSU2_TR(0x5efd11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd16ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd16:L5efd16:{c.instructions+=3;NFSU2_TR(0x5efd16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1468ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd1c:{NFSU2_TR(0x5efd1c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0xeull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd21:{NFSU2_TR(0x5efd21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd26ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd26:L5efd26:{c.instructions+=3;NFSU2_TR(0x5efd26);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x131cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd2c:{NFSU2_TR(0x5efd2c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0xdull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd31:{NFSU2_TR(0x5efd31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd36ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd36:L5efd36:{c.instructions+=3;NFSU2_TR(0x5efd36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd3c:{NFSU2_TR(0x5efd3c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd41:{NFSU2_TR(0x5efd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd46ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd46:L5efd46:{c.instructions+=3;NFSU2_TR(0x5efd46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1084ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd4c:{NFSU2_TR(0x5efd4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0xbull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd51:{NFSU2_TR(0x5efd51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd56ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd56:L5efd56:{c.instructions+=3;NFSU2_TR(0x5efd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd5c:{NFSU2_TR(0x5efd5c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd61:{NFSU2_TR(0x5efd61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd66ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd66:L5efd66:{c.instructions+=3;NFSU2_TR(0x5efd66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdecull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd6c:{NFSU2_TR(0x5efd6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd71:{NFSU2_TR(0x5efd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd76ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd76:L5efd76:{c.instructions+=3;NFSU2_TR(0x5efd76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xca0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd7c:{NFSU2_TR(0x5efd7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd81:{NFSU2_TR(0x5efd81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd86ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd86:L5efd86:{c.instructions+=3;NFSU2_TR(0x5efd86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd8c:{NFSU2_TR(0x5efd8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efd91:{NFSU2_TR(0x5efd91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efd96ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efd96:L5efd96:{c.instructions+=3;NFSU2_TR(0x5efd96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa08ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efd9c:{NFSU2_TR(0x5efd9c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efda1:{NFSU2_TR(0x5efda1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efda6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efda6:L5efda6:{c.instructions+=3;NFSU2_TR(0x5efda6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efdac:{NFSU2_TR(0x5efdac);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efdb1:{NFSU2_TR(0x5efdb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efdb6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efdb6:L5efdb6:{c.instructions+=3;NFSU2_TR(0x5efdb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efdbc:{NFSU2_TR(0x5efdbc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efdc1:{NFSU2_TR(0x5efdc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efdc6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efdc6:L5efdc6:{c.instructions+=3;NFSU2_TR(0x5efdc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efdcc:{NFSU2_TR(0x5efdcc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efdd1:{NFSU2_TR(0x5efdd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efdd6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efdd6:L5efdd6:{c.instructions+=3;NFSU2_TR(0x5efdd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efddc:{NFSU2_TR(0x5efddc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efde1:{NFSU2_TR(0x5efde1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efde6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efde6:L5efde6:{c.instructions+=3;NFSU2_TR(0x5efde6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efdec:{NFSU2_TR(0x5efdec);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efdf1:{NFSU2_TR(0x5efdf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efdf6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efdf6:L5efdf6:{c.instructions+=3;NFSU2_TR(0x5efdf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efdfc:{NFSU2_TR(0x5efdfc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5efe01:{NFSU2_TR(0x5efe01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efe06ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efe06:L5efe06:{c.instructions+=3;NFSU2_TR(0x5efe06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5efe0c:{NFSU2_TR(0x5efe0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5efe14:{NFSU2_TR(0x5efe14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efe19ull));
TAIL_STATIC(0x4022c0u,402);
}
B5efe19:L5efe19:{c.instructions+=5;NFSU2_TR(0x5efe19);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5efe1d:{NFSU2_TR(0x5efe1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5efe1e:{NFSU2_TR(0x5efe1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efe25:{NFSU2_TR(0x5efe25);
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
B5efe28:{NFSU2_TR(0x5efe28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efe30:L5efe30:{c.instructions+=5;NFSU2_TR(0x5efe30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe31:{NFSU2_TR(0x5efe31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe33:{NFSU2_TR(0x5efe33);
u8 U[4];
w4(U+0,u32(0x34800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe38:{NFSU2_TR(0x5efe38);
__builtin_memmove((R+24),(R+4),4);
}
B5efe3a:{NFSU2_TR(0x5efe3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efe3full));
TAIL_STATIC(0x440820u,440);
}
B5efe3f:L5efe3f:{c.instructions+=6;NFSU2_TR(0x5efe3f);
u8 U[4];
w4(U+0,u32(0x7a6090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe44:{NFSU2_TR(0x5efe44);
u8 U[4];
w4(U+0,u32(0x34800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe49:{NFSU2_TR(0x5efe49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe4a:{NFSU2_TR(0x5efe4a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efe4c:{NFSU2_TR(0x5efe4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efe4f:{NFSU2_TR(0x5efe4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efe54ull));
TAIL_STATIC(0x440330u,440);
}
B5efe54:L5efe54:{c.instructions+=5;NFSU2_TR(0x5efe54);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5efe59:{NFSU2_TR(0x5efe59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5efe5c:{NFSU2_TR(0x5efe5c);
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
B5efe5e:{NFSU2_TR(0x5efe5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5efe5f:{NFSU2_TR(0x5efe5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5efe6b;}}
}
B5efe61:L5efe61:{c.instructions+=1;NFSU2_TR(0x5efe61);
s4(0x865084,u32(0x1ull));
}
B5efe6b:L5efe6b:{c.instructions+=1;NFSU2_TR(0x5efe6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efe70:L5efe70:{c.instructions+=3;NFSU2_TR(0x5efe70);
__builtin_memmove((R+0),gp(0x850098),1);
}
B5efe75:{NFSU2_TR(0x5efe75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5efe77:{NFSU2_TR(0x5efe77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5efe82;}}
}
B5efe79:L5efe79:{c.instructions+=3;NFSU2_TR(0x5efe79);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B5efe7e:{NFSU2_TR(0x5efe7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5efe80:{NFSU2_TR(0x5efe80);
if(r1(R+518)){{goto L5efe92;}}
}
B5efe82:L5efe82:{c.instructions+=3;NFSU2_TR(0x5efe82);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5efe88:{NFSU2_TR(0x5efe88);
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
B5efe8a:{NFSU2_TR(0x5efe8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5efe92;}}
}
B5efe8c:L5efe8c:{c.instructions+=2;NFSU2_TR(0x5efe8c);
w4(R+0,u32(0x1ull));
}
B5efe91:{NFSU2_TR(0x5efe91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efe92:L5efe92:{c.instructions+=2;NFSU2_TR(0x5efe92);
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
B5efe94:{NFSU2_TR(0x5efe94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5efea0:L5efea0:{c.instructions+=9;NFSU2_TR(0x5efea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5efea6:{NFSU2_TR(0x5efea6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efea8:{NFSU2_TR(0x5efea8);
u8 U[4];
w4(U+0,u32(0x7798d6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efead:{NFSU2_TR(0x5efead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efeae:{NFSU2_TR(0x5efeae);
__builtin_memmove((R+0),gp(0x7fbe08),4);
}
B5efeb3:{NFSU2_TR(0x5efeb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5efeba:{NFSU2_TR(0x5efeba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x650ull))));
}
B5efec0:{NFSU2_TR(0x5efec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5efec2:{NFSU2_TR(0x5efec2);
if(r1(R+518)){TAIL_STATIC(0x5f00d6u,5f0);}
}
B5efec8:L5efec8:{c.instructions+=1;NFSU2_TR(0x5efec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efecdull));
TAIL_STATIC(0x58a0e0u,58a);
}
B5efecd:L5efecd:{c.instructions+=2;NFSU2_TR(0x5efecd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5efecf:{NFSU2_TR(0x5efecf);
if(r1(R+518)){TAIL_STATIC(0x5f00d6u,5f0);}
}
B5efed5:L5efed5:{c.instructions+=2;NFSU2_TR(0x5efed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efed6:{NFSU2_TR(0x5efed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efedbull));
TAIL_STATIC(0x58a0e0u,58a);
}
B5efedb:L5efedb:{c.instructions+=2;NFSU2_TR(0x5efedb);
__builtin_memmove((R+4),(R+0),4);
}
B5efedd:{NFSU2_TR(0x5efedd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5efee2ull));
TAIL_STATIC(0x582380u,582);
}
B5efee2:L5efee2:{c.instructions+=3;NFSU2_TR(0x5efee2);
__builtin_memmove((R+28),(R+0),4);
}
B5efee4:{NFSU2_TR(0x5efee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5efee6:{NFSU2_TR(0x5efee6);
if(r1(R+518)){TAIL_STATIC(0x5f00d5u,5f0);}
}
B5efeec:L5efeec:{c.instructions+=8;NFSU2_TR(0x5efeec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efeed:{NFSU2_TR(0x5efeed);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efef2:{NFSU2_TR(0x5efef2);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efef7:{NFSU2_TR(0x5efef7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5efefb:{NFSU2_TR(0x5efefb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efefc:{NFSU2_TR(0x5efefc);
u8 U[4];
w4(U+0,u32(0x7a60fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff01:{NFSU2_TR(0x5eff01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff02:{NFSU2_TR(0x5eff02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff07ull));
TAIL_STATIC(0x7414a0u,741);
}
B5eff07:L5eff07:{c.instructions+=3;NFSU2_TR(0x5eff07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5eff0a:{NFSU2_TR(0x5eff0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff0b:{NFSU2_TR(0x5eff0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff10ull));
TAIL_STATIC(0x742360u,742);
}
B5eff10:L5eff10:{c.instructions+=7;NFSU2_TR(0x5eff10);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eff14:{NFSU2_TR(0x5eff14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff15:{NFSU2_TR(0x5eff15);
u8 U[4];
w4(U+0,u32(0x7a60f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff1a:{NFSU2_TR(0x5eff1a);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eff21:{NFSU2_TR(0x5eff21);
u8 U[4];
w4(U+0,u32(0x7a60ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff26:{NFSU2_TR(0x5eff26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff27:{NFSU2_TR(0x5eff27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff2cull));
TAIL_STATIC(0x4400d0u,440);
}
B5eff2c:L5eff2c:{c.instructions+=7;NFSU2_TR(0x5eff2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5eff2f:{NFSU2_TR(0x5eff2f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff31:{NFSU2_TR(0x5eff31);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eff38:{NFSU2_TR(0x5eff38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff39:{NFSU2_TR(0x5eff39);
u8 U[4];
w4(U+0,u32(0x7a60dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff3e:{NFSU2_TR(0x5eff3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3fcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eff45:{NFSU2_TR(0x5eff45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff4aull));
TAIL_STATIC(0x43f940u,43f);
}
B5eff4a:L5eff4a:{c.instructions+=3;NFSU2_TR(0x5eff4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3f0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eff51:{NFSU2_TR(0x5eff51);
u8 U[8];
w4(U+0,u32(u32(u32(0x660ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eff5c:{NFSU2_TR(0x5eff5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff61ull));
TAIL_STATIC(0x43e430u,43e);
}
B5eff61:L5eff61:{c.instructions+=2;NFSU2_TR(0x5eff61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eff63:{NFSU2_TR(0x5eff63);
if(r1(R+518)){{goto L5eff99;}}
}
B5eff65:L5eff65:{c.instructions+=2;NFSU2_TR(0x5eff65);
w4(R+24,u32(0x802288ull));
}
B5eff6a:{NFSU2_TR(0x5eff6a);
__builtin_memmove((R+12),(R+12),4);
}
B5eff70:L5eff70:{c.instructions+=2;NFSU2_TR(0x5eff70);
u8 U[4];
w4(U+0,u32(u32(u32(0x3f0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eff77:{NFSU2_TR(0x5eff77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff7cull));
TAIL_STATIC(0x43e530u,43e);
}
B5eff7c:L5eff7c:{c.instructions+=2;NFSU2_TR(0x5eff7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eff7e:{NFSU2_TR(0x5eff7e);
if(r1(R+518)){{goto L5eff99;}}
}
B5eff80:L5eff80:{c.instructions+=2;NFSU2_TR(0x5eff80);
u8 U[4];
w4(U+0,u32(u32(u32(0x3f0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eff87:{NFSU2_TR(0x5eff87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eff8cull));
TAIL_STATIC(0x440250u,440);
}
B5eff8c:L5eff8c:{c.instructions+=4;NFSU2_TR(0x5eff8c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eff8e:{NFSU2_TR(0x5eff8e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5eff91:{NFSU2_TR(0x5eff91);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8022c8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8022c8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eff97:{NFSU2_TR(0x5eff97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eff70u);}goto L5eff70;}}
}
B5eff99:L5eff99:{c.instructions+=7;NFSU2_TR(0x5eff99);
u8 U[4];
w4(U+0,u32(0x7a60d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eff9e:{NFSU2_TR(0x5eff9e);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effa3:{NFSU2_TR(0x5effa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5effa7:{NFSU2_TR(0x5effa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effa8:{NFSU2_TR(0x5effa8);
u8 U[4];
w4(U+0,u32(0x7a60c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effad:{NFSU2_TR(0x5effad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effae:{NFSU2_TR(0x5effae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5effb3ull));
TAIL_STATIC(0x7414a0u,741);
}
B5effb3:L5effb3:{c.instructions+=3;NFSU2_TR(0x5effb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5effb6:{NFSU2_TR(0x5effb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effb7:{NFSU2_TR(0x5effb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5effbcull));
TAIL_STATIC(0x742360u,742);
}
B5effbc:L5effbc:{c.instructions+=3;NFSU2_TR(0x5effbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5effc0:{NFSU2_TR(0x5effc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effc1:{NFSU2_TR(0x5effc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5effc6ull));
TAIL_STATIC(0x43de50u,43d);
}
B5effc6:L5effc6:{c.instructions+=7;NFSU2_TR(0x5effc6);
__builtin_memmove(gp(0x802280),(R+0),4);
}
B5effcb:{NFSU2_TR(0x5effcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x67cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5effd2:{NFSU2_TR(0x5effd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effd3:{NFSU2_TR(0x5effd3);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5effda:{NFSU2_TR(0x5effda);
u8 U[4];
w4(U+0,u32(0x7a60b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effdf:{NFSU2_TR(0x5effdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effe0:{NFSU2_TR(0x5effe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5effe5ull));
TAIL_STATIC(0x4400d0u,440);
}
B5effe5:L5effe5:{c.instructions+=8;NFSU2_TR(0x5effe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5effe8:{NFSU2_TR(0x5effe8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effed:{NFSU2_TR(0x5effed);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efff2:{NFSU2_TR(0x5efff2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5efff6:{NFSU2_TR(0x5efff6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5efff7:{NFSU2_TR(0x5efff7);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5efffe:{NFSU2_TR(0x5efffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5effff:{NFSU2_TR(0x5effff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x5f0000u,5f0);
}
XIT:NFSU2_TR_EXIT(0x5ef,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
