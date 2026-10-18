#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_486(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x43c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x43c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 page_43c(Cpu& c){return body_43c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_43c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x43c000:goto L43c000;
case 0x43c002:c.instructions+=4;goto B43c002;
case 0x43c003:c.instructions+=3;goto B43c003;
case 0x43c005:c.instructions+=2;goto B43c005;
case 0x43c009:c.instructions+=1;goto B43c009;
case 0x43c00b:goto L43c00b;
case 0x43c00d:c.instructions+=1;goto B43c00d;
case 0x43c00f:goto L43c00f;
case 0x43c011:c.instructions+=4;goto B43c011;
case 0x43c013:c.instructions+=3;goto B43c013;
case 0x43c014:c.instructions+=2;goto B43c014;
case 0x43c016:c.instructions+=1;goto B43c016;
case 0x43c018:goto L43c018;
case 0x43c01a:goto L43c01a;
case 0x43c01e:c.instructions+=2;goto B43c01e;
case 0x43c020:c.instructions+=1;goto B43c020;
case 0x43c022:goto L43c022;
case 0x43c026:c.instructions+=5;goto B43c026;
case 0x43c028:c.instructions+=4;goto B43c028;
case 0x43c02b:c.instructions+=3;goto B43c02b;
case 0x43c02f:c.instructions+=2;goto B43c02f;
case 0x43c033:c.instructions+=1;goto B43c033;
case 0x43c035:goto L43c035;
case 0x43c039:c.instructions+=5;goto B43c039;
case 0x43c03c:c.instructions+=4;goto B43c03c;
case 0x43c040:c.instructions+=3;goto B43c040;
case 0x43c044:c.instructions+=2;goto B43c044;
case 0x43c048:c.instructions+=1;goto B43c048;
case 0x43c04d:goto L43c04d;
case 0x43c04f:c.instructions+=2;goto B43c04f;
case 0x43c051:c.instructions+=1;goto B43c051;
case 0x43c057:goto L43c057;
case 0x43c05b:c.instructions+=6;goto B43c05b;
case 0x43c05f:c.instructions+=5;goto B43c05f;
case 0x43c063:c.instructions+=4;goto B43c063;
case 0x43c068:c.instructions+=3;goto B43c068;
case 0x43c06a:c.instructions+=2;goto B43c06a;
case 0x43c06d:c.instructions+=1;goto B43c06d;
case 0x43c06f:goto L43c06f;
case 0x43c072:c.instructions+=3;goto B43c072;
case 0x43c076:c.instructions+=2;goto B43c076;
case 0x43c07a:c.instructions+=1;goto B43c07a;
case 0x43c07f:goto L43c07f;
case 0x43c082:c.instructions+=9;goto B43c082;
case 0x43c083:c.instructions+=8;goto B43c083;
case 0x43c085:c.instructions+=7;goto B43c085;
case 0x43c086:c.instructions+=6;goto B43c086;
case 0x43c087:c.instructions+=5;goto B43c087;
case 0x43c08a:c.instructions+=4;goto B43c08a;
case 0x43c08c:c.instructions+=3;goto B43c08c;
case 0x43c08d:c.instructions+=2;goto B43c08d;
case 0x43c090:c.instructions+=1;goto B43c090;
case 0x43c0a0:goto L43c0a0;
case 0x43c0a4:c.instructions+=5;goto B43c0a4;
case 0x43c0a6:c.instructions+=4;goto B43c0a6;
case 0x43c0a8:c.instructions+=3;goto B43c0a8;
case 0x43c0aa:c.instructions+=2;goto B43c0aa;
case 0x43c0ad:c.instructions+=1;goto B43c0ad;
case 0x43c0b0:goto L43c0b0;
case 0x43c0b4:c.instructions+=22;goto B43c0b4;
case 0x43c0b6:c.instructions+=21;goto B43c0b6;
case 0x43c0ba:c.instructions+=20;goto B43c0ba;
case 0x43c0bd:c.instructions+=19;goto B43c0bd;
case 0x43c0c1:c.instructions+=18;goto B43c0c1;
case 0x43c0c4:c.instructions+=17;goto B43c0c4;
case 0x43c0c5:c.instructions+=16;goto B43c0c5;
case 0x43c0c7:c.instructions+=15;goto B43c0c7;
case 0x43c0ca:c.instructions+=14;goto B43c0ca;
case 0x43c0cc:c.instructions+=13;goto B43c0cc;
case 0x43c0cf:c.instructions+=12;goto B43c0cf;
case 0x43c0d1:c.instructions+=11;goto B43c0d1;
case 0x43c0d4:c.instructions+=10;goto B43c0d4;
case 0x43c0d6:c.instructions+=9;goto B43c0d6;
case 0x43c0d9:c.instructions+=8;goto B43c0d9;
case 0x43c0e0:c.instructions+=7;goto B43c0e0;
case 0x43c0e2:c.instructions+=6;goto B43c0e2;
case 0x43c0e8:c.instructions+=5;goto B43c0e8;
case 0x43c0ea:c.instructions+=4;goto B43c0ea;
case 0x43c0f1:c.instructions+=3;goto B43c0f1;
case 0x43c0f7:c.instructions+=2;goto B43c0f7;
case 0x43c0f8:c.instructions+=1;goto B43c0f8;
case 0x43c100:goto L43c100;
case 0x43c104:c.instructions+=13;goto B43c104;
case 0x43c105:c.instructions+=12;goto B43c105;
case 0x43c107:c.instructions+=11;goto B43c107;
case 0x43c10a:c.instructions+=10;goto B43c10a;
case 0x43c10c:c.instructions+=9;goto B43c10c;
case 0x43c10f:c.instructions+=8;goto B43c10f;
case 0x43c111:c.instructions+=7;goto B43c111;
case 0x43c113:c.instructions+=6;goto B43c113;
case 0x43c115:c.instructions+=5;goto B43c115;
case 0x43c118:c.instructions+=4;goto B43c118;
case 0x43c11f:c.instructions+=3;goto B43c11f;
case 0x43c121:c.instructions+=2;goto B43c121;
case 0x43c122:c.instructions+=1;goto B43c122;
case 0x43c124:goto L43c124;
case 0x43c127:c.instructions+=1;goto B43c127;
case 0x43c129:goto L43c129;
case 0x43c12b:c.instructions+=2;goto B43c12b;
case 0x43c12d:c.instructions+=1;goto B43c12d;
case 0x43c12f:goto L43c12f;
case 0x43c131:goto L43c131;
case 0x43c140:goto L43c140;
case 0x43c141:c.instructions+=19;goto B43c141;
case 0x43c142:c.instructions+=18;goto B43c142;
case 0x43c146:c.instructions+=17;goto B43c146;
case 0x43c148:c.instructions+=16;goto B43c148;
case 0x43c14a:c.instructions+=15;goto B43c14a;
case 0x43c14c:c.instructions+=14;goto B43c14c;
case 0x43c150:c.instructions+=13;goto B43c150;
case 0x43c156:c.instructions+=12;goto B43c156;
case 0x43c158:c.instructions+=11;goto B43c158;
case 0x43c15b:c.instructions+=10;goto B43c15b;
case 0x43c15d:c.instructions+=9;goto B43c15d;
case 0x43c15f:c.instructions+=8;goto B43c15f;
case 0x43c161:c.instructions+=7;goto B43c161;
case 0x43c164:c.instructions+=6;goto B43c164;
case 0x43c166:c.instructions+=5;goto B43c166;
case 0x43c168:c.instructions+=4;goto B43c168;
case 0x43c16a:c.instructions+=3;goto B43c16a;
case 0x43c16b:c.instructions+=2;goto B43c16b;
case 0x43c16c:c.instructions+=1;goto B43c16c;
case 0x43c170:goto L43c170;
case 0x43c171:c.instructions+=20;goto B43c171;
case 0x43c175:c.instructions+=19;goto B43c175;
case 0x43c177:c.instructions+=18;goto B43c177;
case 0x43c178:c.instructions+=17;goto B43c178;
case 0x43c17a:c.instructions+=16;goto B43c17a;
case 0x43c17c:c.instructions+=15;goto B43c17c;
case 0x43c181:c.instructions+=14;goto B43c181;
case 0x43c183:c.instructions+=13;goto B43c183;
case 0x43c189:c.instructions+=12;goto B43c189;
case 0x43c18b:c.instructions+=11;goto B43c18b;
case 0x43c18e:c.instructions+=10;goto B43c18e;
case 0x43c190:c.instructions+=9;goto B43c190;
case 0x43c192:c.instructions+=8;goto B43c192;
case 0x43c195:c.instructions+=7;goto B43c195;
case 0x43c197:c.instructions+=6;goto B43c197;
case 0x43c199:c.instructions+=5;goto B43c199;
case 0x43c19b:c.instructions+=4;goto B43c19b;
case 0x43c19d:c.instructions+=3;goto B43c19d;
case 0x43c1a1:c.instructions+=2;goto B43c1a1;
case 0x43c1a5:c.instructions+=1;goto B43c1a5;
case 0x43c1a7:goto L43c1a7;
case 0x43c1ad:goto L43c1ad;
case 0x43c1b3:c.instructions+=4;goto B43c1b3;
case 0x43c1b4:c.instructions+=3;goto B43c1b4;
case 0x43c1b5:c.instructions+=2;goto B43c1b5;
case 0x43c1b9:c.instructions+=1;goto B43c1b9;
case 0x43c1c0:goto L43c1c0;
case 0x43c1c6:c.instructions+=16;goto B43c1c6;
case 0x43c1c8:c.instructions+=15;goto B43c1c8;
case 0x43c1ca:c.instructions+=14;goto B43c1ca;
case 0x43c1ce:c.instructions+=13;goto B43c1ce;
case 0x43c1d4:c.instructions+=12;goto B43c1d4;
case 0x43c1d5:c.instructions+=11;goto B43c1d5;
case 0x43c1d7:c.instructions+=10;goto B43c1d7;
case 0x43c1da:c.instructions+=9;goto B43c1da;
case 0x43c1dc:c.instructions+=8;goto B43c1dc;
case 0x43c1de:c.instructions+=7;goto B43c1de;
case 0x43c1e0:c.instructions+=6;goto B43c1e0;
case 0x43c1e3:c.instructions+=5;goto B43c1e3;
case 0x43c1e5:c.instructions+=4;goto B43c1e5;
case 0x43c1e7:c.instructions+=3;goto B43c1e7;
case 0x43c1ed:c.instructions+=2;goto B43c1ed;
case 0x43c1ee:c.instructions+=1;goto B43c1ee;
case 0x43c1f0:goto L43c1f0;
case 0x43c1f1:c.instructions+=19;goto B43c1f1;
case 0x43c1f7:c.instructions+=18;goto B43c1f7;
case 0x43c1f8:c.instructions+=17;goto B43c1f8;
case 0x43c1fa:c.instructions+=16;goto B43c1fa;
case 0x43c1fc:c.instructions+=15;goto B43c1fc;
case 0x43c201:c.instructions+=14;goto B43c201;
case 0x43c203:c.instructions+=13;goto B43c203;
case 0x43c209:c.instructions+=12;goto B43c209;
case 0x43c20b:c.instructions+=11;goto B43c20b;
case 0x43c20e:c.instructions+=10;goto B43c20e;
case 0x43c210:c.instructions+=9;goto B43c210;
case 0x43c212:c.instructions+=8;goto B43c212;
case 0x43c215:c.instructions+=7;goto B43c215;
case 0x43c217:c.instructions+=6;goto B43c217;
case 0x43c219:c.instructions+=5;goto B43c219;
case 0x43c21f:c.instructions+=4;goto B43c21f;
case 0x43c221:c.instructions+=3;goto B43c221;
case 0x43c225:c.instructions+=2;goto B43c225;
case 0x43c229:c.instructions+=1;goto B43c229;
case 0x43c22b:goto L43c22b;
case 0x43c231:goto L43c231;
case 0x43c237:c.instructions+=4;goto B43c237;
case 0x43c238:c.instructions+=3;goto B43c238;
case 0x43c23c:c.instructions+=2;goto B43c23c;
case 0x43c23d:c.instructions+=1;goto B43c23d;
case 0x43c240:goto L43c240;
case 0x43c244:c.instructions+=5;goto B43c244;
case 0x43c246:c.instructions+=4;goto B43c246;
case 0x43c24a:c.instructions+=3;goto B43c24a;
case 0x43c24c:c.instructions+=2;goto B43c24c;
case 0x43c24e:c.instructions+=1;goto B43c24e;
case 0x43c253:goto L43c253;
case 0x43c257:c.instructions+=5;goto B43c257;
case 0x43c25b:c.instructions+=4;goto B43c25b;
case 0x43c25d:c.instructions+=3;goto B43c25d;
case 0x43c25f:c.instructions+=2;goto B43c25f;
case 0x43c262:c.instructions+=1;goto B43c262;
case 0x43c264:goto L43c264;
case 0x43c26a:goto L43c26a;
case 0x43c26c:c.instructions+=4;goto B43c26c;
case 0x43c26e:c.instructions+=3;goto B43c26e;
case 0x43c270:c.instructions+=2;goto B43c270;
case 0x43c272:c.instructions+=1;goto B43c272;
case 0x43c280:goto L43c280;
case 0x43c281:c.instructions+=4;goto B43c281;
case 0x43c285:c.instructions+=3;goto B43c285;
case 0x43c287:c.instructions+=2;goto B43c287;
case 0x43c288:c.instructions+=1;goto B43c288;
case 0x43c28a:goto L43c28a;
case 0x43c28c:goto L43c28c;
case 0x43c290:c.instructions+=7;goto B43c290;
case 0x43c292:c.instructions+=6;goto B43c292;
case 0x43c293:c.instructions+=5;goto B43c293;
case 0x43c295:c.instructions+=4;goto B43c295;
case 0x43c297:c.instructions+=3;goto B43c297;
case 0x43c29a:c.instructions+=2;goto B43c29a;
case 0x43c29c:c.instructions+=1;goto B43c29c;
case 0x43c29e:goto L43c29e;
case 0x43c2a0:goto L43c2a0;
case 0x43c2a2:c.instructions+=4;goto B43c2a2;
case 0x43c2a3:c.instructions+=3;goto B43c2a3;
case 0x43c2a5:c.instructions+=2;goto B43c2a5;
case 0x43c2a6:c.instructions+=1;goto B43c2a6;
case 0x43c2b0:goto L43c2b0;
case 0x43c2b5:c.instructions+=9;goto B43c2b5;
case 0x43c2b9:c.instructions+=8;goto B43c2b9;
case 0x43c2bd:c.instructions+=7;goto B43c2bd;
case 0x43c2c3:c.instructions+=6;goto B43c2c3;
case 0x43c2c9:c.instructions+=5;goto B43c2c9;
case 0x43c2cb:c.instructions+=4;goto B43c2cb;
case 0x43c2d1:c.instructions+=3;goto B43c2d1;
case 0x43c2d3:c.instructions+=2;goto B43c2d3;
case 0x43c2d6:c.instructions+=1;goto B43c2d6;
case 0x43c2d8:goto L43c2d8;
case 0x43c2da:c.instructions+=3;goto B43c2da;
case 0x43c2e0:c.instructions+=2;goto B43c2e0;
case 0x43c2e2:c.instructions+=1;goto B43c2e2;
case 0x43c2e4:goto L43c2e4;
case 0x43c2e6:c.instructions+=4;goto B43c2e6;
case 0x43c2ec:c.instructions+=3;goto B43c2ec;
case 0x43c2ee:c.instructions+=2;goto B43c2ee;
case 0x43c2f1:c.instructions+=1;goto B43c2f1;
case 0x43c2f3:goto L43c2f3;
case 0x43c2f5:c.instructions+=2;goto B43c2f5;
case 0x43c2fb:c.instructions+=1;goto B43c2fb;
case 0x43c301:goto L43c301;
case 0x43c303:c.instructions+=26;goto B43c303;
case 0x43c305:c.instructions+=25;goto B43c305;
case 0x43c307:c.instructions+=24;goto B43c307;
case 0x43c309:c.instructions+=23;goto B43c309;
case 0x43c30b:c.instructions+=22;goto B43c30b;
case 0x43c30d:c.instructions+=21;goto B43c30d;
case 0x43c30f:c.instructions+=20;goto B43c30f;
case 0x43c311:c.instructions+=19;goto B43c311;
case 0x43c313:c.instructions+=18;goto B43c313;
case 0x43c319:c.instructions+=17;goto B43c319;
case 0x43c31b:c.instructions+=16;goto B43c31b;
case 0x43c31d:c.instructions+=15;goto B43c31d;
case 0x43c323:c.instructions+=14;goto B43c323;
case 0x43c325:c.instructions+=13;goto B43c325;
case 0x43c327:c.instructions+=12;goto B43c327;
case 0x43c32d:c.instructions+=11;goto B43c32d;
case 0x43c32f:c.instructions+=10;goto B43c32f;
case 0x43c331:c.instructions+=9;goto B43c331;
case 0x43c333:c.instructions+=8;goto B43c333;
case 0x43c339:c.instructions+=7;goto B43c339;
case 0x43c33b:c.instructions+=6;goto B43c33b;
case 0x43c33d:c.instructions+=5;goto B43c33d;
case 0x43c33f:c.instructions+=4;goto B43c33f;
case 0x43c341:c.instructions+=3;goto B43c341;
case 0x43c343:c.instructions+=2;goto B43c343;
case 0x43c345:c.instructions+=1;goto B43c345;
case 0x43c350:goto L43c350;
case 0x43c354:c.instructions+=2;goto B43c354;
case 0x43c35a:c.instructions+=1;goto B43c35a;
case 0x43c35f:goto L43c35f;
case 0x43c363:c.instructions+=1;goto B43c363;
case 0x43c370:goto L43c370;
case 0x43c374:c.instructions+=3;goto B43c374;
case 0x43c379:c.instructions+=2;goto B43c379;
case 0x43c37d:c.instructions+=1;goto B43c37d;
case 0x43c390:goto L43c390;
case 0x43c393:c.instructions+=9;goto B43c393;
case 0x43c398:c.instructions+=8;goto B43c398;
case 0x43c39c:c.instructions+=7;goto B43c39c;
case 0x43c3a0:c.instructions+=6;goto B43c3a0;
case 0x43c3a8:c.instructions+=5;goto B43c3a8;
case 0x43c3ae:c.instructions+=4;goto B43c3ae;
case 0x43c3b4:c.instructions+=3;goto B43c3b4;
case 0x43c3b6:c.instructions+=2;goto B43c3b6;
case 0x43c3b9:c.instructions+=1;goto B43c3b9;
case 0x43c3bb:goto L43c3bb;
case 0x43c3c1:c.instructions+=1;goto B43c3c1;
case 0x43c3c3:goto L43c3c3;
case 0x43c3c9:c.instructions+=3;goto B43c3c9;
case 0x43c3cb:c.instructions+=2;goto B43c3cb;
case 0x43c3ce:c.instructions+=1;goto B43c3ce;
case 0x43c3d0:goto L43c3d0;
case 0x43c3d6:c.instructions+=1;goto B43c3d6;
case 0x43c3de:goto L43c3de;
case 0x43c3e0:c.instructions+=55;goto B43c3e0;
case 0x43c3e4:c.instructions+=54;goto B43c3e4;
case 0x43c3e6:c.instructions+=53;goto B43c3e6;
case 0x43c3ea:c.instructions+=52;goto B43c3ea;
case 0x43c3ec:c.instructions+=51;goto B43c3ec;
case 0x43c3ee:c.instructions+=50;goto B43c3ee;
case 0x43c3f0:c.instructions+=49;goto B43c3f0;
case 0x43c3f2:c.instructions+=48;goto B43c3f2;
case 0x43c3f6:c.instructions+=47;goto B43c3f6;
case 0x43c3f8:c.instructions+=46;goto B43c3f8;
case 0x43c3fa:c.instructions+=45;goto B43c3fa;
case 0x43c3fe:c.instructions+=44;goto B43c3fe;
case 0x43c400:c.instructions+=43;goto B43c400;
case 0x43c404:c.instructions+=42;goto B43c404;
case 0x43c406:c.instructions+=41;goto B43c406;
case 0x43c408:c.instructions+=40;goto B43c408;
case 0x43c40c:c.instructions+=39;goto B43c40c;
case 0x43c40e:c.instructions+=38;goto B43c40e;
case 0x43c412:c.instructions+=37;goto B43c412;
case 0x43c414:c.instructions+=36;goto B43c414;
case 0x43c41a:c.instructions+=35;goto B43c41a;
case 0x43c41c:c.instructions+=34;goto B43c41c;
case 0x43c41e:c.instructions+=33;goto B43c41e;
case 0x43c424:c.instructions+=32;goto B43c424;
case 0x43c426:c.instructions+=31;goto B43c426;
case 0x43c428:c.instructions+=30;goto B43c428;
case 0x43c42e:c.instructions+=29;goto B43c42e;
case 0x43c430:c.instructions+=28;goto B43c430;
case 0x43c432:c.instructions+=27;goto B43c432;
case 0x43c434:c.instructions+=26;goto B43c434;
case 0x43c43a:c.instructions+=25;goto B43c43a;
case 0x43c43c:c.instructions+=24;goto B43c43c;
case 0x43c440:c.instructions+=23;goto B43c440;
case 0x43c442:c.instructions+=22;goto B43c442;
case 0x43c448:c.instructions+=21;goto B43c448;
case 0x43c44a:c.instructions+=20;goto B43c44a;
case 0x43c450:c.instructions+=19;goto B43c450;
case 0x43c454:c.instructions+=18;goto B43c454;
case 0x43c45a:c.instructions+=17;goto B43c45a;
case 0x43c45c:c.instructions+=16;goto B43c45c;
case 0x43c460:c.instructions+=15;goto B43c460;
case 0x43c466:c.instructions+=14;goto B43c466;
case 0x43c468:c.instructions+=13;goto B43c468;
case 0x43c46c:c.instructions+=12;goto B43c46c;
case 0x43c472:c.instructions+=11;goto B43c472;
case 0x43c474:c.instructions+=10;goto B43c474;
case 0x43c478:c.instructions+=9;goto B43c478;
case 0x43c47a:c.instructions+=8;goto B43c47a;
case 0x43c480:c.instructions+=7;goto B43c480;
case 0x43c482:c.instructions+=6;goto B43c482;
case 0x43c486:c.instructions+=5;goto B43c486;
case 0x43c488:c.instructions+=4;goto B43c488;
case 0x43c48a:c.instructions+=3;goto B43c48a;
case 0x43c48c:c.instructions+=2;goto B43c48c;
case 0x43c48f:c.instructions+=1;goto B43c48f;
case 0x43c490:goto L43c490;
case 0x43c491:c.instructions+=7;goto B43c491;
case 0x43c495:c.instructions+=6;goto B43c495;
case 0x43c496:c.instructions+=5;goto B43c496;
case 0x43c49c:c.instructions+=4;goto B43c49c;
case 0x43c49e:c.instructions+=3;goto B43c49e;
case 0x43c4a0:c.instructions+=2;goto B43c4a0;
case 0x43c4a3:c.instructions+=1;goto B43c4a3;
case 0x43c4a5:goto L43c4a5;
case 0x43c4a9:c.instructions+=3;goto B43c4a9;
case 0x43c4ae:c.instructions+=2;goto B43c4ae;
case 0x43c4b0:c.instructions+=1;goto B43c4b0;
case 0x43c4b4:goto L43c4b4;
case 0x43c4b8:c.instructions+=4;goto B43c4b8;
case 0x43c4be:c.instructions+=3;goto B43c4be;
case 0x43c4c0:c.instructions+=2;goto B43c4c0;
case 0x43c4c3:c.instructions+=1;goto B43c4c3;
case 0x43c4c5:goto L43c4c5;
case 0x43c4c7:c.instructions+=7;goto B43c4c7;
case 0x43c4c9:c.instructions+=6;goto B43c4c9;
case 0x43c4cb:c.instructions+=5;goto B43c4cb;
case 0x43c4d0:c.instructions+=4;goto B43c4d0;
case 0x43c4d5:c.instructions+=3;goto B43c4d5;
case 0x43c4d6:c.instructions+=2;goto B43c4d6;
case 0x43c4d7:c.instructions+=1;goto B43c4d7;
case 0x43c4d8:goto L43c4d8;
case 0x43c4dc:c.instructions+=4;goto B43c4dc;
case 0x43c4dd:c.instructions+=3;goto B43c4dd;
case 0x43c4e3:c.instructions+=2;goto B43c4e3;
case 0x43c4e4:c.instructions+=1;goto B43c4e4;
case 0x43c4e9:goto L43c4e9;
case 0x43c4ee:c.instructions+=4;goto B43c4ee;
case 0x43c4f0:c.instructions+=3;goto B43c4f0;
case 0x43c4f2:c.instructions+=2;goto B43c4f2;
case 0x43c4f4:c.instructions+=1;goto B43c4f4;
case 0x43c4f6:goto L43c4f6;
case 0x43c4f9:c.instructions+=1;goto B43c4f9;
case 0x43c4fb:goto L43c4fb;
case 0x43c4fd:c.instructions+=4;goto B43c4fd;
case 0x43c4ff:c.instructions+=3;goto B43c4ff;
case 0x43c500:c.instructions+=2;goto B43c500;
case 0x43c502:c.instructions+=1;goto B43c502;
case 0x43c504:goto L43c504;
case 0x43c506:c.instructions+=18;goto B43c506;
case 0x43c508:c.instructions+=17;goto B43c508;
case 0x43c50d:c.instructions+=16;goto B43c50d;
case 0x43c50f:c.instructions+=15;goto B43c50f;
case 0x43c511:c.instructions+=14;goto B43c511;
case 0x43c513:c.instructions+=13;goto B43c513;
case 0x43c516:c.instructions+=12;goto B43c516;
case 0x43c519:c.instructions+=11;goto B43c519;
case 0x43c51c:c.instructions+=10;goto B43c51c;
case 0x43c51e:c.instructions+=9;goto B43c51e;
case 0x43c522:c.instructions+=8;goto B43c522;
case 0x43c524:c.instructions+=7;goto B43c524;
case 0x43c527:c.instructions+=6;goto B43c527;
case 0x43c52b:c.instructions+=5;goto B43c52b;
case 0x43c531:c.instructions+=4;goto B43c531;
case 0x43c535:c.instructions+=3;goto B43c535;
case 0x43c53b:c.instructions+=2;goto B43c53b;
case 0x43c541:c.instructions+=1;goto B43c541;
case 0x43c546:goto L43c546;
case 0x43c548:c.instructions+=6;goto B43c548;
case 0x43c54f:c.instructions+=5;goto B43c54f;
case 0x43c552:c.instructions+=4;goto B43c552;
case 0x43c554:c.instructions+=3;goto B43c554;
case 0x43c555:c.instructions+=2;goto B43c555;
case 0x43c556:c.instructions+=1;goto B43c556;
case 0x43c558:goto L43c558;
case 0x43c55d:c.instructions+=4;goto B43c55d;
case 0x43c55f:c.instructions+=3;goto B43c55f;
case 0x43c560:c.instructions+=2;goto B43c560;
case 0x43c561:c.instructions+=1;goto B43c561;
case 0x43c562:goto L43c562;
case 0x43c565:c.instructions+=3;goto B43c565;
case 0x43c566:c.instructions+=2;goto B43c566;
case 0x43c567:c.instructions+=1;goto B43c567;
case 0x43c570:goto L43c570;
case 0x43c574:c.instructions+=6;goto B43c574;
case 0x43c575:c.instructions+=5;goto B43c575;
case 0x43c57b:c.instructions+=4;goto B43c57b;
case 0x43c57d:c.instructions+=3;goto B43c57d;
case 0x43c57f:c.instructions+=2;goto B43c57f;
case 0x43c582:c.instructions+=1;goto B43c582;
case 0x43c584:goto L43c584;
case 0x43c588:c.instructions+=3;goto B43c588;
case 0x43c58d:c.instructions+=2;goto B43c58d;
case 0x43c58f:c.instructions+=1;goto B43c58f;
case 0x43c593:goto L43c593;
case 0x43c597:c.instructions+=4;goto B43c597;
case 0x43c59d:c.instructions+=3;goto B43c59d;
case 0x43c59f:c.instructions+=2;goto B43c59f;
case 0x43c5a2:c.instructions+=1;goto B43c5a2;
case 0x43c5a4:goto L43c5a4;
case 0x43c5a7:c.instructions+=1;goto B43c5a7;
case 0x43c5a9:goto L43c5a9;
case 0x43c5ad:c.instructions+=4;goto B43c5ad;
case 0x43c5af:c.instructions+=3;goto B43c5af;
case 0x43c5b1:c.instructions+=2;goto B43c5b1;
case 0x43c5b4:c.instructions+=1;goto B43c5b4;
case 0x43c5b6:goto L43c5b6;
case 0x43c5ba:c.instructions+=2;goto B43c5ba;
case 0x43c5c0:c.instructions+=1;goto B43c5c0;
case 0x43c5c5:goto L43c5c5;
case 0x43c5ca:c.instructions+=4;goto B43c5ca;
case 0x43c5cc:c.instructions+=3;goto B43c5cc;
case 0x43c5d0:c.instructions+=2;goto B43c5d0;
case 0x43c5d3:c.instructions+=1;goto B43c5d3;
case 0x43c5d5:goto L43c5d5;
case 0x43c5d9:c.instructions+=3;goto B43c5d9;
case 0x43c5db:c.instructions+=2;goto B43c5db;
case 0x43c5de:c.instructions+=1;goto B43c5de;
case 0x43c5e0:goto L43c5e0;
case 0x43c5e4:c.instructions+=3;goto B43c5e4;
case 0x43c5e6:c.instructions+=2;goto B43c5e6;
case 0x43c5ec:c.instructions+=1;goto B43c5ec;
case 0x43c5f1:goto L43c5f1;
case 0x43c5f3:c.instructions+=7;goto B43c5f3;
case 0x43c5f8:c.instructions+=6;goto B43c5f8;
case 0x43c5fa:c.instructions+=5;goto B43c5fa;
case 0x43c5fe:c.instructions+=4;goto B43c5fe;
case 0x43c603:c.instructions+=3;goto B43c603;
case 0x43c606:c.instructions+=2;goto B43c606;
case 0x43c608:c.instructions+=1;goto B43c608;
case 0x43c60a:goto L43c60a;
case 0x43c610:c.instructions+=3;goto B43c610;
case 0x43c612:c.instructions+=2;goto B43c612;
case 0x43c615:c.instructions+=1;goto B43c615;
case 0x43c617:goto L43c617;
case 0x43c619:c.instructions+=1;goto B43c619;
case 0x43c61b:goto L43c61b;
case 0x43c620:goto L43c620;
case 0x43c622:c.instructions+=1;goto B43c622;
case 0x43c624:goto L43c624;
case 0x43c627:c.instructions+=2;goto B43c627;
case 0x43c628:c.instructions+=1;goto B43c628;
case 0x43c629:goto L43c629;
case 0x43c62c:c.instructions+=1;goto B43c62c;
case 0x43c62e:goto L43c62e;
case 0x43c630:c.instructions+=3;goto B43c630;
case 0x43c632:c.instructions+=2;goto B43c632;
case 0x43c633:c.instructions+=1;goto B43c633;
case 0x43c634:goto L43c634;
case 0x43c637:c.instructions+=1;goto B43c637;
case 0x43c639:goto L43c639;
case 0x43c63e:c.instructions+=3;goto B43c63e;
case 0x43c640:c.instructions+=2;goto B43c640;
case 0x43c641:c.instructions+=1;goto B43c641;
case 0x43c642:goto L43c642;
case 0x43c648:c.instructions+=2;goto B43c648;
case 0x43c649:c.instructions+=1;goto B43c649;
case 0x43c650:goto L43c650;
case 0x43c654:c.instructions+=5;goto B43c654;
case 0x43c655:c.instructions+=4;goto B43c655;
case 0x43c656:c.instructions+=3;goto B43c656;
case 0x43c658:c.instructions+=2;goto B43c658;
case 0x43c65a:c.instructions+=1;goto B43c65a;
case 0x43c65c:goto L43c65c;
case 0x43c661:c.instructions+=1;goto B43c661;
case 0x43c663:goto L43c663;
case 0x43c668:c.instructions+=1;goto B43c668;
case 0x43c66a:goto L43c66a;
case 0x43c66f:c.instructions+=1;goto B43c66f;
case 0x43c671:goto L43c671;
case 0x43c673:c.instructions+=8;goto B43c673;
case 0x43c676:c.instructions+=7;goto B43c676;
case 0x43c67d:c.instructions+=6;goto B43c67d;
case 0x43c680:c.instructions+=5;goto B43c680;
case 0x43c684:c.instructions+=4;goto B43c684;
case 0x43c689:c.instructions+=3;goto B43c689;
case 0x43c68c:c.instructions+=2;goto B43c68c;
case 0x43c68e:c.instructions+=1;goto B43c68e;
case 0x43c690:goto L43c690;
case 0x43c692:c.instructions+=8;goto B43c692;
case 0x43c695:c.instructions+=7;goto B43c695;
case 0x43c69d:c.instructions+=6;goto B43c69d;
case 0x43c6a4:c.instructions+=5;goto B43c6a4;
case 0x43c6a8:c.instructions+=4;goto B43c6a8;
case 0x43c6ad:c.instructions+=3;goto B43c6ad;
case 0x43c6b0:c.instructions+=2;goto B43c6b0;
case 0x43c6b2:c.instructions+=1;goto B43c6b2;
case 0x43c6b4:goto L43c6b4;
case 0x43c6b9:c.instructions+=1;goto B43c6b9;
case 0x43c6bb:goto L43c6bb;
case 0x43c6be:c.instructions+=4;goto B43c6be;
case 0x43c6c3:c.instructions+=3;goto B43c6c3;
case 0x43c6c8:c.instructions+=2;goto B43c6c8;
case 0x43c6ca:c.instructions+=1;goto B43c6ca;
case 0x43c6cc:goto L43c6cc;
case 0x43c6d1:c.instructions+=2;goto B43c6d1;
case 0x43c6d3:c.instructions+=1;goto B43c6d3;
case 0x43c6d5:goto L43c6d5;
case 0x43c6d8:c.instructions+=9;goto B43c6d8;
case 0x43c6db:c.instructions+=8;goto B43c6db;
case 0x43c6dd:c.instructions+=7;goto B43c6dd;
case 0x43c6e0:c.instructions+=6;goto B43c6e0;
case 0x43c6e3:c.instructions+=5;goto B43c6e3;
case 0x43c6e5:c.instructions+=4;goto B43c6e5;
case 0x43c6e7:c.instructions+=3;goto B43c6e7;
case 0x43c6e8:c.instructions+=2;goto B43c6e8;
case 0x43c6e9:c.instructions+=1;goto B43c6e9;
case 0x43c6eb:goto L43c6eb;
case 0x43c6ed:goto L43c6ed;
case 0x43c6f0:goto L43c6f0;
case 0x43c6f1:c.instructions+=5;goto B43c6f1;
case 0x43c6f5:c.instructions+=4;goto B43c6f5;
case 0x43c6f6:c.instructions+=3;goto B43c6f6;
case 0x43c6f8:c.instructions+=2;goto B43c6f8;
case 0x43c6fa:c.instructions+=1;goto B43c6fa;
case 0x43c6fc:goto L43c6fc;
case 0x43c701:c.instructions+=1;goto B43c701;
case 0x43c703:goto L43c703;
case 0x43c707:c.instructions+=2;goto B43c707;
case 0x43c709:c.instructions+=1;goto B43c709;
case 0x43c70b:goto L43c70b;
case 0x43c70e:c.instructions+=1;goto B43c70e;
case 0x43c710:goto L43c710;
case 0x43c712:c.instructions+=3;goto B43c712;
case 0x43c715:c.instructions+=2;goto B43c715;
case 0x43c717:c.instructions+=1;goto B43c717;
case 0x43c719:goto L43c719;
case 0x43c71e:c.instructions+=1;goto B43c71e;
case 0x43c720:goto L43c720;
case 0x43c722:c.instructions+=1;goto B43c722;
case 0x43c724:goto L43c724;
case 0x43c726:c.instructions+=2;goto B43c726;
case 0x43c728:c.instructions+=1;goto B43c728;
case 0x43c72a:goto L43c72a;
case 0x43c72d:c.instructions+=2;goto B43c72d;
case 0x43c732:c.instructions+=1;goto B43c732;
case 0x43c734:goto L43c734;
case 0x43c739:c.instructions+=5;goto B43c739;
case 0x43c73a:c.instructions+=4;goto B43c73a;
case 0x43c73c:c.instructions+=3;goto B43c73c;
case 0x43c73e:c.instructions+=2;goto B43c73e;
case 0x43c740:c.instructions+=1;goto B43c740;
case 0x43c745:goto L43c745;
case 0x43c747:goto L43c747;
case 0x43c748:c.instructions+=1;goto B43c748;
case 0x43c74d:goto L43c74d;
case 0x43c750:c.instructions+=1;goto B43c750;
case 0x43c753:goto L43c753;
case 0x43c755:c.instructions+=4;goto B43c755;
case 0x43c758:c.instructions+=3;goto B43c758;
case 0x43c759:c.instructions+=2;goto B43c759;
case 0x43c75a:c.instructions+=1;goto B43c75a;
case 0x43c75c:goto L43c75c;
case 0x43c75d:c.instructions+=1;goto B43c75d;
case 0x43c75f:goto L43c75f;
case 0x43c760:c.instructions+=1;goto B43c760;
case 0x43c762:goto L43c762;
case 0x43c764:c.instructions+=2;goto B43c764;
case 0x43c766:c.instructions+=1;goto B43c766;
case 0x43c767:goto L43c767;
case 0x43c76d:c.instructions+=1;goto B43c76d;
case 0x43c76e:goto L43c76e;
case 0x43c773:c.instructions+=2;goto B43c773;
case 0x43c775:c.instructions+=1;goto B43c775;
case 0x43c776:goto L43c776;
case 0x43c779:c.instructions+=1;goto B43c779;
case 0x43c780:goto L43c780;
case 0x43c784:c.instructions+=19;goto B43c784;
case 0x43c786:c.instructions+=18;goto B43c786;
case 0x43c78b:c.instructions+=17;goto B43c78b;
case 0x43c78d:c.instructions+=16;goto B43c78d;
case 0x43c790:c.instructions+=15;goto B43c790;
case 0x43c793:c.instructions+=14;goto B43c793;
case 0x43c796:c.instructions+=13;goto B43c796;
case 0x43c799:c.instructions+=12;goto B43c799;
case 0x43c79c:c.instructions+=11;goto B43c79c;
case 0x43c79f:c.instructions+=10;goto B43c79f;
case 0x43c7a2:c.instructions+=9;goto B43c7a2;
case 0x43c7a5:c.instructions+=8;goto B43c7a5;
case 0x43c7a8:c.instructions+=7;goto B43c7a8;
case 0x43c7ab:c.instructions+=6;goto B43c7ab;
case 0x43c7ae:c.instructions+=5;goto B43c7ae;
case 0x43c7b1:c.instructions+=4;goto B43c7b1;
case 0x43c7b4:c.instructions+=3;goto B43c7b4;
case 0x43c7b7:c.instructions+=2;goto B43c7b7;
case 0x43c7ba:c.instructions+=1;goto B43c7ba;
case 0x43c7c0:goto L43c7c0;
case 0x43c7c3:c.instructions+=147;goto B43c7c3;
case 0x43c7c7:c.instructions+=146;goto B43c7c7;
case 0x43c7c9:c.instructions+=145;goto B43c7c9;
case 0x43c7cc:c.instructions+=144;goto B43c7cc;
case 0x43c7cf:c.instructions+=143;goto B43c7cf;
case 0x43c7d2:c.instructions+=142;goto B43c7d2;
case 0x43c7d5:c.instructions+=141;goto B43c7d5;
case 0x43c7d9:c.instructions+=140;goto B43c7d9;
case 0x43c7dc:c.instructions+=139;goto B43c7dc;
case 0x43c7df:c.instructions+=138;goto B43c7df;
case 0x43c7e2:c.instructions+=137;goto B43c7e2;
case 0x43c7e6:c.instructions+=136;goto B43c7e6;
case 0x43c7ea:c.instructions+=135;goto B43c7ea;
case 0x43c7ee:c.instructions+=134;goto B43c7ee;
case 0x43c7f0:c.instructions+=133;goto B43c7f0;
case 0x43c7f3:c.instructions+=132;goto B43c7f3;
case 0x43c7f7:c.instructions+=131;goto B43c7f7;
case 0x43c7fb:c.instructions+=130;goto B43c7fb;
case 0x43c7fd:c.instructions+=129;goto B43c7fd;
case 0x43c800:c.instructions+=128;goto B43c800;
case 0x43c803:c.instructions+=127;goto B43c803;
case 0x43c806:c.instructions+=126;goto B43c806;
case 0x43c808:c.instructions+=125;goto B43c808;
case 0x43c80c:c.instructions+=124;goto B43c80c;
case 0x43c810:c.instructions+=123;goto B43c810;
case 0x43c814:c.instructions+=122;goto B43c814;
case 0x43c816:c.instructions+=121;goto B43c816;
case 0x43c818:c.instructions+=120;goto B43c818;
case 0x43c81c:c.instructions+=119;goto B43c81c;
case 0x43c820:c.instructions+=118;goto B43c820;
case 0x43c824:c.instructions+=117;goto B43c824;
case 0x43c827:c.instructions+=116;goto B43c827;
case 0x43c829:c.instructions+=115;goto B43c829;
case 0x43c82b:c.instructions+=114;goto B43c82b;
case 0x43c82f:c.instructions+=113;goto B43c82f;
case 0x43c833:c.instructions+=112;goto B43c833;
case 0x43c837:c.instructions+=111;goto B43c837;
case 0x43c83b:c.instructions+=110;goto B43c83b;
case 0x43c83f:c.instructions+=109;goto B43c83f;
case 0x43c841:c.instructions+=108;goto B43c841;
case 0x43c845:c.instructions+=107;goto B43c845;
case 0x43c847:c.instructions+=106;goto B43c847;
case 0x43c849:c.instructions+=105;goto B43c849;
case 0x43c84d:c.instructions+=104;goto B43c84d;
case 0x43c84f:c.instructions+=103;goto B43c84f;
case 0x43c851:c.instructions+=102;goto B43c851;
case 0x43c855:c.instructions+=101;goto B43c855;
case 0x43c857:c.instructions+=100;goto B43c857;
case 0x43c859:c.instructions+=99;goto B43c859;
case 0x43c85f:c.instructions+=98;goto B43c85f;
case 0x43c863:c.instructions+=97;goto B43c863;
case 0x43c867:c.instructions+=96;goto B43c867;
case 0x43c86b:c.instructions+=95;goto B43c86b;
case 0x43c86d:c.instructions+=94;goto B43c86d;
case 0x43c86f:c.instructions+=93;goto B43c86f;
case 0x43c871:c.instructions+=92;goto B43c871;
case 0x43c875:c.instructions+=91;goto B43c875;
case 0x43c877:c.instructions+=90;goto B43c877;
case 0x43c879:c.instructions+=89;goto B43c879;
case 0x43c87d:c.instructions+=88;goto B43c87d;
case 0x43c87f:c.instructions+=87;goto B43c87f;
case 0x43c883:c.instructions+=86;goto B43c883;
case 0x43c886:c.instructions+=85;goto B43c886;
case 0x43c888:c.instructions+=84;goto B43c888;
case 0x43c88a:c.instructions+=83;goto B43c88a;
case 0x43c88e:c.instructions+=82;goto B43c88e;
case 0x43c890:c.instructions+=81;goto B43c890;
case 0x43c892:c.instructions+=80;goto B43c892;
case 0x43c896:c.instructions+=79;goto B43c896;
case 0x43c89a:c.instructions+=78;goto B43c89a;
case 0x43c89d:c.instructions+=77;goto B43c89d;
case 0x43c8a1:c.instructions+=76;goto B43c8a1;
case 0x43c8a5:c.instructions+=75;goto B43c8a5;
case 0x43c8a7:c.instructions+=74;goto B43c8a7;
case 0x43c8ab:c.instructions+=73;goto B43c8ab;
case 0x43c8ae:c.instructions+=72;goto B43c8ae;
case 0x43c8b0:c.instructions+=71;goto B43c8b0;
case 0x43c8b4:c.instructions+=70;goto B43c8b4;
case 0x43c8b6:c.instructions+=69;goto B43c8b6;
case 0x43c8b8:c.instructions+=68;goto B43c8b8;
case 0x43c8bb:c.instructions+=67;goto B43c8bb;
case 0x43c8be:c.instructions+=66;goto B43c8be;
case 0x43c8c5:c.instructions+=65;goto B43c8c5;
case 0x43c8c9:c.instructions+=64;goto B43c8c9;
case 0x43c8cd:c.instructions+=63;goto B43c8cd;
case 0x43c8d0:c.instructions+=62;goto B43c8d0;
case 0x43c8d2:c.instructions+=61;goto B43c8d2;
case 0x43c8d6:c.instructions+=60;goto B43c8d6;
case 0x43c8d8:c.instructions+=59;goto B43c8d8;
case 0x43c8da:c.instructions+=58;goto B43c8da;
case 0x43c8de:c.instructions+=57;goto B43c8de;
case 0x43c8e0:c.instructions+=56;goto B43c8e0;
case 0x43c8e4:c.instructions+=55;goto B43c8e4;
case 0x43c8e6:c.instructions+=54;goto B43c8e6;
case 0x43c8e9:c.instructions+=53;goto B43c8e9;
case 0x43c8ed:c.instructions+=52;goto B43c8ed;
case 0x43c8f1:c.instructions+=51;goto B43c8f1;
case 0x43c8f5:c.instructions+=50;goto B43c8f5;
case 0x43c8f8:c.instructions+=49;goto B43c8f8;
case 0x43c8fc:c.instructions+=48;goto B43c8fc;
case 0x43c8fe:c.instructions+=47;goto B43c8fe;
case 0x43c902:c.instructions+=46;goto B43c902;
case 0x43c904:c.instructions+=45;goto B43c904;
case 0x43c906:c.instructions+=44;goto B43c906;
case 0x43c90a:c.instructions+=43;goto B43c90a;
case 0x43c90c:c.instructions+=42;goto B43c90c;
case 0x43c910:c.instructions+=41;goto B43c910;
case 0x43c913:c.instructions+=40;goto B43c913;
case 0x43c917:c.instructions+=39;goto B43c917;
case 0x43c919:c.instructions+=38;goto B43c919;
case 0x43c91d:c.instructions+=37;goto B43c91d;
case 0x43c91f:c.instructions+=36;goto B43c91f;
case 0x43c921:c.instructions+=35;goto B43c921;
case 0x43c923:c.instructions+=34;goto B43c923;
case 0x43c927:c.instructions+=33;goto B43c927;
case 0x43c929:c.instructions+=32;goto B43c929;
case 0x43c92c:c.instructions+=31;goto B43c92c;
case 0x43c930:c.instructions+=30;goto B43c930;
case 0x43c934:c.instructions+=29;goto B43c934;
case 0x43c938:c.instructions+=28;goto B43c938;
case 0x43c93c:c.instructions+=27;goto B43c93c;
case 0x43c93e:c.instructions+=26;goto B43c93e;
case 0x43c942:c.instructions+=25;goto B43c942;
case 0x43c946:c.instructions+=24;goto B43c946;
case 0x43c948:c.instructions+=23;goto B43c948;
case 0x43c94a:c.instructions+=22;goto B43c94a;
case 0x43c94d:c.instructions+=21;goto B43c94d;
case 0x43c951:c.instructions+=20;goto B43c951;
case 0x43c955:c.instructions+=19;goto B43c955;
case 0x43c959:c.instructions+=18;goto B43c959;
case 0x43c95d:c.instructions+=17;goto B43c95d;
case 0x43c95f:c.instructions+=16;goto B43c95f;
case 0x43c963:c.instructions+=15;goto B43c963;
case 0x43c967:c.instructions+=14;goto B43c967;
case 0x43c969:c.instructions+=13;goto B43c969;
case 0x43c96b:c.instructions+=12;goto B43c96b;
case 0x43c96e:c.instructions+=11;goto B43c96e;
case 0x43c972:c.instructions+=10;goto B43c972;
case 0x43c976:c.instructions+=9;goto B43c976;
case 0x43c97a:c.instructions+=8;goto B43c97a;
case 0x43c97c:c.instructions+=7;goto B43c97c;
case 0x43c980:c.instructions+=6;goto B43c980;
case 0x43c984:c.instructions+=5;goto B43c984;
case 0x43c986:c.instructions+=4;goto B43c986;
case 0x43c988:c.instructions+=3;goto B43c988;
case 0x43c98b:c.instructions+=2;goto B43c98b;
case 0x43c98e:c.instructions+=1;goto B43c98e;
case 0x43c990:goto L43c990;
case 0x43c994:c.instructions+=6;goto B43c994;
case 0x43c998:c.instructions+=5;goto B43c998;
case 0x43c99c:c.instructions+=4;goto B43c99c;
case 0x43c99d:c.instructions+=3;goto B43c99d;
case 0x43c99e:c.instructions+=2;goto B43c99e;
case 0x43c99f:c.instructions+=1;goto B43c99f;
case 0x43c9a4:goto L43c9a4;
case 0x43c9a7:c.instructions+=1;goto B43c9a7;
case 0x43c9b0:goto L43c9b0;
case 0x43c9c0:goto L43c9c0;
case 0x43c9d0:goto L43c9d0;
case 0x43c9d3:c.instructions+=63;goto B43c9d3;
case 0x43c9d7:c.instructions+=62;goto B43c9d7;
case 0x43c9da:c.instructions+=61;goto B43c9da;
case 0x43c9dd:c.instructions+=60;goto B43c9dd;
case 0x43c9e0:c.instructions+=59;goto B43c9e0;
case 0x43c9e3:c.instructions+=58;goto B43c9e3;
case 0x43c9e7:c.instructions+=57;goto B43c9e7;
case 0x43c9e9:c.instructions+=56;goto B43c9e9;
case 0x43c9ec:c.instructions+=55;goto B43c9ec;
case 0x43c9f0:c.instructions+=54;goto B43c9f0;
case 0x43c9f3:c.instructions+=53;goto B43c9f3;
case 0x43c9f7:c.instructions+=52;goto B43c9f7;
case 0x43c9fa:c.instructions+=51;goto B43c9fa;
case 0x43c9fe:c.instructions+=50;goto B43c9fe;
case 0x43ca01:c.instructions+=49;goto B43ca01;
case 0x43ca05:c.instructions+=48;goto B43ca05;
case 0x43ca08:c.instructions+=47;goto B43ca08;
case 0x43ca0c:c.instructions+=46;goto B43ca0c;
case 0x43ca0f:c.instructions+=45;goto B43ca0f;
case 0x43ca13:c.instructions+=44;goto B43ca13;
case 0x43ca16:c.instructions+=43;goto B43ca16;
case 0x43ca1a:c.instructions+=42;goto B43ca1a;
case 0x43ca1d:c.instructions+=41;goto B43ca1d;
case 0x43ca21:c.instructions+=40;goto B43ca21;
case 0x43ca24:c.instructions+=39;goto B43ca24;
case 0x43ca28:c.instructions+=38;goto B43ca28;
case 0x43ca2b:c.instructions+=37;goto B43ca2b;
case 0x43ca2f:c.instructions+=36;goto B43ca2f;
case 0x43ca32:c.instructions+=35;goto B43ca32;
case 0x43ca36:c.instructions+=34;goto B43ca36;
case 0x43ca38:c.instructions+=33;goto B43ca38;
case 0x43ca3c:c.instructions+=32;goto B43ca3c;
case 0x43ca40:c.instructions+=31;goto B43ca40;
case 0x43ca43:c.instructions+=30;goto B43ca43;
case 0x43ca47:c.instructions+=29;goto B43ca47;
case 0x43ca49:c.instructions+=28;goto B43ca49;
case 0x43ca4c:c.instructions+=27;goto B43ca4c;
case 0x43ca50:c.instructions+=26;goto B43ca50;
case 0x43ca53:c.instructions+=25;goto B43ca53;
case 0x43ca57:c.instructions+=24;goto B43ca57;
case 0x43ca5a:c.instructions+=23;goto B43ca5a;
case 0x43ca5e:c.instructions+=22;goto B43ca5e;
case 0x43ca61:c.instructions+=21;goto B43ca61;
case 0x43ca65:c.instructions+=20;goto B43ca65;
case 0x43ca68:c.instructions+=19;goto B43ca68;
case 0x43ca6c:c.instructions+=18;goto B43ca6c;
case 0x43ca6f:c.instructions+=17;goto B43ca6f;
case 0x43ca73:c.instructions+=16;goto B43ca73;
case 0x43ca76:c.instructions+=15;goto B43ca76;
case 0x43ca7a:c.instructions+=14;goto B43ca7a;
case 0x43ca7d:c.instructions+=13;goto B43ca7d;
case 0x43ca81:c.instructions+=12;goto B43ca81;
case 0x43ca84:c.instructions+=11;goto B43ca84;
case 0x43ca88:c.instructions+=10;goto B43ca88;
case 0x43ca8b:c.instructions+=9;goto B43ca8b;
case 0x43ca8f:c.instructions+=8;goto B43ca8f;
case 0x43ca92:c.instructions+=7;goto B43ca92;
case 0x43ca96:c.instructions+=6;goto B43ca96;
case 0x43ca99:c.instructions+=5;goto B43ca99;
case 0x43ca9d:c.instructions+=4;goto B43ca9d;
case 0x43caa0:c.instructions+=3;goto B43caa0;
case 0x43caa3:c.instructions+=2;goto B43caa3;
case 0x43caa6:c.instructions+=1;goto B43caa6;
case 0x43cab0:goto L43cab0;
case 0x43cab5:c.instructions+=4;goto B43cab5;
case 0x43cab6:c.instructions+=3;goto B43cab6;
case 0x43cab8:c.instructions+=2;goto B43cab8;
case 0x43cabe:c.instructions+=1;goto B43cabe;
case 0x43cac0:goto L43cac0;
case 0x43cac1:c.instructions+=1;goto B43cac1;
case 0x43cac6:goto L43cac6;
case 0x43cac9:goto L43cac9;
case 0x43cacb:c.instructions+=2;goto B43cacb;
case 0x43cacc:c.instructions+=1;goto B43cacc;
case 0x43cad0:goto L43cad0;
case 0x43cad6:c.instructions+=1;goto B43cad6;
case 0x43cae0:goto L43cae0;
case 0x43cae4:c.instructions+=9;goto B43cae4;
case 0x43cae8:c.instructions+=8;goto B43cae8;
case 0x43caea:c.instructions+=7;goto B43caea;
case 0x43caee:c.instructions+=6;goto B43caee;
case 0x43caf2:c.instructions+=5;goto B43caf2;
case 0x43caf4:c.instructions+=4;goto B43caf4;
case 0x43caf6:c.instructions+=3;goto B43caf6;
case 0x43caf8:c.instructions+=2;goto B43caf8;
case 0x43caf9:c.instructions+=1;goto B43caf9;
case 0x43cb00:goto L43cb00;
case 0x43cb04:c.instructions+=3;goto B43cb04;
case 0x43cb08:c.instructions+=2;goto B43cb08;
case 0x43cb0f:c.instructions+=1;goto B43cb0f;
case 0x43cb10:goto L43cb10;
case 0x43cb15:c.instructions+=1;goto B43cb15;
case 0x43cb20:goto L43cb20;
case 0x43cb24:c.instructions+=6;goto B43cb24;
case 0x43cb28:c.instructions+=5;goto B43cb28;
case 0x43cb2c:c.instructions+=4;goto B43cb2c;
case 0x43cb31:c.instructions+=3;goto B43cb31;
case 0x43cb37:c.instructions+=2;goto B43cb37;
case 0x43cb3d:c.instructions+=1;goto B43cb3d;
case 0x43cb40:goto L43cb40;
case 0x43cb44:c.instructions+=6;goto B43cb44;
case 0x43cb47:c.instructions+=5;goto B43cb47;
case 0x43cb48:c.instructions+=4;goto B43cb48;
case 0x43cb4a:c.instructions+=3;goto B43cb4a;
case 0x43cb4e:c.instructions+=2;goto B43cb4e;
case 0x43cb4f:c.instructions+=1;goto B43cb4f;
case 0x43cb51:goto L43cb51;
case 0x43cb53:c.instructions+=1;goto B43cb53;
case 0x43cb55:goto L43cb55;
case 0x43cb59:c.instructions+=5;goto B43cb59;
case 0x43cb5f:c.instructions+=4;goto B43cb5f;
case 0x43cb60:c.instructions+=3;goto B43cb60;
case 0x43cb61:c.instructions+=2;goto B43cb61;
case 0x43cb65:c.instructions+=1;goto B43cb65;
case 0x43cb67:goto L43cb67;
case 0x43cb6a:c.instructions+=3;goto B43cb6a;
case 0x43cb6c:c.instructions+=2;goto B43cb6c;
case 0x43cb6e:c.instructions+=1;goto B43cb6e;
case 0x43cb70:goto L43cb70;
case 0x43cb76:c.instructions+=3;goto B43cb76;
case 0x43cb77:c.instructions+=2;goto B43cb77;
case 0x43cb7a:c.instructions+=1;goto B43cb7a;
case 0x43cb7c:goto L43cb7c;
case 0x43cb7e:c.instructions+=2;goto B43cb7e;
case 0x43cb80:c.instructions+=1;goto B43cb80;
case 0x43cb82:goto L43cb82;
case 0x43cb84:c.instructions+=1;goto B43cb84;
case 0x43cb86:goto L43cb86;
case 0x43cb88:c.instructions+=5;goto B43cb88;
case 0x43cb89:c.instructions+=4;goto B43cb89;
case 0x43cb8a:c.instructions+=3;goto B43cb8a;
case 0x43cb8b:c.instructions+=2;goto B43cb8b;
case 0x43cb8d:c.instructions+=1;goto B43cb8d;
case 0x43cb8f:goto L43cb8f;
case 0x43cb90:c.instructions+=5;goto B43cb90;
case 0x43cb91:c.instructions+=4;goto B43cb91;
case 0x43cb97:c.instructions+=3;goto B43cb97;
case 0x43cb98:c.instructions+=2;goto B43cb98;
case 0x43cb99:c.instructions+=1;goto B43cb99;
case 0x43cb9a:goto L43cb9a;
case 0x43cb9e:c.instructions+=3;goto B43cb9e;
case 0x43cba0:c.instructions+=2;goto B43cba0;
case 0x43cba3:c.instructions+=1;goto B43cba3;
case 0x43cba5:goto L43cba5;
case 0x43cba7:c.instructions+=1;goto B43cba7;
case 0x43cba9:goto L43cba9;
case 0x43cbab:c.instructions+=2;goto B43cbab;
case 0x43cbaf:c.instructions+=1;goto B43cbaf;
case 0x43cbb0:goto L43cbb0;
case 0x43cbb2:c.instructions+=8;goto B43cbb2;
case 0x43cbb4:c.instructions+=7;goto B43cbb4;
case 0x43cbb6:c.instructions+=6;goto B43cbb6;
case 0x43cbb8:c.instructions+=5;goto B43cbb8;
case 0x43cbb9:c.instructions+=4;goto B43cbb9;
case 0x43cbba:c.instructions+=3;goto B43cbba;
case 0x43cbbb:c.instructions+=2;goto B43cbbb;
case 0x43cbbd:c.instructions+=1;goto B43cbbd;
case 0x43cbbf:goto L43cbbf;
case 0x43cbc0:c.instructions+=2;goto B43cbc0;
case 0x43cbc1:c.instructions+=1;goto B43cbc1;
case 0x43cbd0:goto L43cbd0;
case 0x43cbd4:c.instructions+=8;goto B43cbd4;
case 0x43cbd7:c.instructions+=7;goto B43cbd7;
case 0x43cbda:c.instructions+=6;goto B43cbda;
case 0x43cbdc:c.instructions+=5;goto B43cbdc;
case 0x43cbdf:c.instructions+=4;goto B43cbdf;
case 0x43cbe5:c.instructions+=3;goto B43cbe5;
case 0x43cbe7:c.instructions+=2;goto B43cbe7;
case 0x43cbea:c.instructions+=1;goto B43cbea;
case 0x43cbec:goto L43cbec;
case 0x43cbf2:c.instructions+=21;goto B43cbf2;
case 0x43cbf6:c.instructions+=20;goto B43cbf6;
case 0x43cbf8:c.instructions+=19;goto B43cbf8;
case 0x43cbfe:c.instructions+=18;goto B43cbfe;
case 0x43cc00:c.instructions+=17;goto B43cc00;
case 0x43cc03:c.instructions+=16;goto B43cc03;
case 0x43cc09:c.instructions+=15;goto B43cc09;
case 0x43cc0c:c.instructions+=14;goto B43cc0c;
case 0x43cc0f:c.instructions+=13;goto B43cc0f;
case 0x43cc11:c.instructions+=12;goto B43cc11;
case 0x43cc13:c.instructions+=11;goto B43cc13;
case 0x43cc16:c.instructions+=10;goto B43cc16;
case 0x43cc19:c.instructions+=9;goto B43cc19;
case 0x43cc1b:c.instructions+=8;goto B43cc1b;
case 0x43cc1e:c.instructions+=7;goto B43cc1e;
case 0x43cc21:c.instructions+=6;goto B43cc21;
case 0x43cc24:c.instructions+=5;goto B43cc24;
case 0x43cc26:c.instructions+=4;goto B43cc26;
case 0x43cc29:c.instructions+=3;goto B43cc29;
case 0x43cc2b:c.instructions+=2;goto B43cc2b;
case 0x43cc2e:c.instructions+=1;goto B43cc2e;
case 0x43cc2f:goto L43cc2f;
case 0x43cc31:c.instructions+=9;goto B43cc31;
case 0x43cc32:c.instructions+=8;goto B43cc32;
case 0x43cc35:c.instructions+=7;goto B43cc35;
case 0x43cc36:c.instructions+=6;goto B43cc36;
case 0x43cc38:c.instructions+=5;goto B43cc38;
case 0x43cc3a:c.instructions+=4;goto B43cc3a;
case 0x43cc3b:c.instructions+=3;goto B43cc3b;
case 0x43cc3d:c.instructions+=2;goto B43cc3d;
case 0x43cc40:c.instructions+=1;goto B43cc40;
case 0x43cc42:goto L43cc42;
case 0x43cc47:goto L43cc47;
case 0x43cc4a:c.instructions+=5;goto B43cc4a;
case 0x43cc4d:c.instructions+=4;goto B43cc4d;
case 0x43cc50:c.instructions+=3;goto B43cc50;
case 0x43cc52:c.instructions+=2;goto B43cc52;
case 0x43cc55:c.instructions+=1;goto B43cc55;
case 0x43cc57:goto L43cc57;
case 0x43cc5c:goto L43cc5c;
case 0x43cc5f:c.instructions+=23;goto B43cc5f;
case 0x43cc60:c.instructions+=22;goto B43cc60;
case 0x43cc65:c.instructions+=21;goto B43cc65;
case 0x43cc67:c.instructions+=20;goto B43cc67;
case 0x43cc6c:c.instructions+=19;goto B43cc6c;
case 0x43cc6e:c.instructions+=18;goto B43cc6e;
case 0x43cc71:c.instructions+=17;goto B43cc71;
case 0x43cc72:c.instructions+=16;goto B43cc72;
case 0x43cc74:c.instructions+=15;goto B43cc74;
case 0x43cc77:c.instructions+=14;goto B43cc77;
case 0x43cc7a:c.instructions+=13;goto B43cc7a;
case 0x43cc7d:c.instructions+=12;goto B43cc7d;
case 0x43cc80:c.instructions+=11;goto B43cc80;
case 0x43cc83:c.instructions+=10;goto B43cc83;
case 0x43cc86:c.instructions+=9;goto B43cc86;
case 0x43cc8c:c.instructions+=8;goto B43cc8c;
case 0x43cc8e:c.instructions+=7;goto B43cc8e;
case 0x43cc94:c.instructions+=6;goto B43cc94;
case 0x43cc96:c.instructions+=5;goto B43cc96;
case 0x43cc9a:c.instructions+=4;goto B43cc9a;
case 0x43cca0:c.instructions+=3;goto B43cca0;
case 0x43cca2:c.instructions+=2;goto B43cca2;
case 0x43cca5:c.instructions+=1;goto B43cca5;
case 0x43cca7:goto L43cca7;
case 0x43ccad:goto L43ccad;
case 0x43ccb0:c.instructions+=32;goto B43ccb0;
case 0x43ccb3:c.instructions+=31;goto B43ccb3;
case 0x43ccb6:c.instructions+=30;goto B43ccb6;
case 0x43ccb9:c.instructions+=29;goto B43ccb9;
case 0x43ccbc:c.instructions+=28;goto B43ccbc;
case 0x43ccbf:c.instructions+=27;goto B43ccbf;
case 0x43ccc1:c.instructions+=26;goto B43ccc1;
case 0x43ccc5:c.instructions+=25;goto B43ccc5;
case 0x43ccc8:c.instructions+=24;goto B43ccc8;
case 0x43cccb:c.instructions+=23;goto B43cccb;
case 0x43ccce:c.instructions+=22;goto B43ccce;
case 0x43ccd1:c.instructions+=21;goto B43ccd1;
case 0x43ccd3:c.instructions+=20;goto B43ccd3;
case 0x43ccd7:c.instructions+=19;goto B43ccd7;
case 0x43ccd8:c.instructions+=18;goto B43ccd8;
case 0x43ccdb:c.instructions+=17;goto B43ccdb;
case 0x43ccdf:c.instructions+=16;goto B43ccdf;
case 0x43cce2:c.instructions+=15;goto B43cce2;
case 0x43cce3:c.instructions+=14;goto B43cce3;
case 0x43cce4:c.instructions+=13;goto B43cce4;
case 0x43cce6:c.instructions+=12;goto B43cce6;
case 0x43ccea:c.instructions+=11;goto B43ccea;
case 0x43ccee:c.instructions+=10;goto B43ccee;
case 0x43ccf2:c.instructions+=9;goto B43ccf2;
case 0x43ccf4:c.instructions+=8;goto B43ccf4;
case 0x43ccf7:c.instructions+=7;goto B43ccf7;
case 0x43ccfb:c.instructions+=6;goto B43ccfb;
case 0x43ccff:c.instructions+=5;goto B43ccff;
case 0x43cd01:c.instructions+=4;goto B43cd01;
case 0x43cd04:c.instructions+=3;goto B43cd04;
case 0x43cd07:c.instructions+=2;goto B43cd07;
case 0x43cd0a:c.instructions+=1;goto B43cd0a;
case 0x43cd10:goto L43cd10;
case 0x43cd14:c.instructions+=6;goto B43cd14;
case 0x43cd17:c.instructions+=5;goto B43cd17;
case 0x43cd1a:c.instructions+=4;goto B43cd1a;
case 0x43cd1c:c.instructions+=3;goto B43cd1c;
case 0x43cd1e:c.instructions+=2;goto B43cd1e;
case 0x43cd1f:c.instructions+=1;goto B43cd1f;
case 0x43cd20:goto L43cd20;
case 0x43cd24:c.instructions+=3;goto B43cd24;
case 0x43cd27:c.instructions+=2;goto B43cd27;
case 0x43cd2a:c.instructions+=1;goto B43cd2a;
case 0x43cd30:goto L43cd30;
case 0x43cd34:c.instructions+=2;goto B43cd34;
case 0x43cd37:c.instructions+=1;goto B43cd37;
case 0x43cd40:goto L43cd40;
case 0x43cd42:c.instructions+=1;goto B43cd42;
case 0x43cd44:goto L43cd44;
case 0x43cd45:c.instructions+=1;goto B43cd45;
case 0x43cd46:goto L43cd46;
case 0x43cd49:c.instructions+=4;goto B43cd49;
case 0x43cd4b:c.instructions+=3;goto B43cd4b;
case 0x43cd4e:c.instructions+=2;goto B43cd4e;
case 0x43cd55:c.instructions+=1;goto B43cd55;
case 0x43cd57:goto L43cd57;
case 0x43cd58:c.instructions+=4;goto B43cd58;
case 0x43cd5a:c.instructions+=3;goto B43cd5a;
case 0x43cd5d:c.instructions+=2;goto B43cd5d;
case 0x43cd60:c.instructions+=1;goto B43cd60;
case 0x43cd62:goto L43cd62;
case 0x43cd64:goto L43cd64;
case 0x43cd65:c.instructions+=4;goto B43cd65;
case 0x43cd68:c.instructions+=3;goto B43cd68;
case 0x43cd6a:c.instructions+=2;goto B43cd6a;
case 0x43cd6c:c.instructions+=1;goto B43cd6c;
case 0x43cd6e:goto L43cd6e;
case 0x43cd74:goto L43cd74;
case 0x43cd77:c.instructions+=2;goto B43cd77;
case 0x43cd79:c.instructions+=1;goto B43cd79;
case 0x43cd7b:goto L43cd7b;
case 0x43cd7c:c.instructions+=1;goto B43cd7c;
case 0x43cd7d:goto L43cd7d;
case 0x43cd80:goto L43cd80;
case 0x43cd81:c.instructions+=5;goto B43cd81;
case 0x43cd82:c.instructions+=4;goto B43cd82;
case 0x43cd84:c.instructions+=3;goto B43cd84;
case 0x43cd86:c.instructions+=2;goto B43cd86;
case 0x43cd87:c.instructions+=1;goto B43cd87;
case 0x43cd89:goto L43cd89;
case 0x43cd8c:c.instructions+=1;goto B43cd8c;
case 0x43cd90:goto L43cd90;
case 0x43cd92:c.instructions+=6;goto B43cd92;
case 0x43cd94:c.instructions+=5;goto B43cd94;
case 0x43cd97:c.instructions+=4;goto B43cd97;
case 0x43cd99:c.instructions+=3;goto B43cd99;
case 0x43cd9b:c.instructions+=2;goto B43cd9b;
case 0x43cd9d:c.instructions+=1;goto B43cd9d;
case 0x43cd9f:goto L43cd9f;
case 0x43cda2:c.instructions+=1;goto B43cda2;
case 0x43cda4:goto L43cda4;
case 0x43cda7:c.instructions+=4;goto B43cda7;
case 0x43cdaa:c.instructions+=3;goto B43cdaa;
case 0x43cdac:c.instructions+=2;goto B43cdac;
case 0x43cdae:c.instructions+=1;goto B43cdae;
case 0x43cdb0:goto L43cdb0;
case 0x43cdb1:c.instructions+=4;goto B43cdb1;
case 0x43cdb2:c.instructions+=3;goto B43cdb2;
case 0x43cdb5:c.instructions+=2;goto B43cdb5;
case 0x43cdb6:c.instructions+=1;goto B43cdb6;
case 0x43cdb9:goto L43cdb9;
case 0x43cdba:c.instructions+=4;goto B43cdba;
case 0x43cdbc:c.instructions+=3;goto B43cdbc;
case 0x43cdbd:c.instructions+=2;goto B43cdbd;
case 0x43cdbe:c.instructions+=1;goto B43cdbe;
case 0x43cdd0:goto L43cdd0;
case 0x43cdd3:c.instructions+=4;goto B43cdd3;
case 0x43cdd6:c.instructions+=3;goto B43cdd6;
case 0x43cdd7:c.instructions+=2;goto B43cdd7;
case 0x43cdd9:c.instructions+=1;goto B43cdd9;
case 0x43cddb:goto L43cddb;
case 0x43cddc:c.instructions+=3;goto B43cddc;
case 0x43cdde:c.instructions+=2;goto B43cdde;
case 0x43cde1:c.instructions+=1;goto B43cde1;
case 0x43cde3:goto L43cde3;
case 0x43cde6:goto L43cde6;
case 0x43cde9:c.instructions+=2;goto B43cde9;
case 0x43cdec:c.instructions+=1;goto B43cdec;
case 0x43cded:goto L43cded;
case 0x43cdf0:goto L43cdf0;
case 0x43cdf3:c.instructions+=9;goto B43cdf3;
case 0x43cdf7:c.instructions+=8;goto B43cdf7;
case 0x43cdf8:c.instructions+=7;goto B43cdf8;
case 0x43cdfb:c.instructions+=6;goto B43cdfb;
case 0x43cdfd:c.instructions+=5;goto B43cdfd;
case 0x43cdfe:c.instructions+=4;goto B43cdfe;
case 0x43ce01:c.instructions+=3;goto B43ce01;
case 0x43ce04:c.instructions+=2;goto B43ce04;
case 0x43ce05:c.instructions+=1;goto B43ce05;
case 0x43ce10:goto L43ce10;
case 0x43ce14:c.instructions+=20;goto B43ce14;
case 0x43ce18:c.instructions+=19;goto B43ce18;
case 0x43ce1a:c.instructions+=18;goto B43ce1a;
case 0x43ce1c:c.instructions+=17;goto B43ce1c;
case 0x43ce1f:c.instructions+=16;goto B43ce1f;
case 0x43ce22:c.instructions+=15;goto B43ce22;
case 0x43ce25:c.instructions+=14;goto B43ce25;
case 0x43ce28:c.instructions+=13;goto B43ce28;
case 0x43ce2a:c.instructions+=12;goto B43ce2a;
case 0x43ce2c:c.instructions+=11;goto B43ce2c;
case 0x43ce2e:c.instructions+=10;goto B43ce2e;
case 0x43ce30:c.instructions+=9;goto B43ce30;
case 0x43ce32:c.instructions+=8;goto B43ce32;
case 0x43ce34:c.instructions+=7;goto B43ce34;
case 0x43ce36:c.instructions+=6;goto B43ce36;
case 0x43ce38:c.instructions+=5;goto B43ce38;
case 0x43ce3a:c.instructions+=4;goto B43ce3a;
case 0x43ce3c:c.instructions+=3;goto B43ce3c;
case 0x43ce3e:c.instructions+=2;goto B43ce3e;
case 0x43ce40:c.instructions+=1;goto B43ce40;
case 0x43ce50:goto L43ce50;
case 0x43ce54:c.instructions+=16;goto B43ce54;
case 0x43ce56:c.instructions+=15;goto B43ce56;
case 0x43ce59:c.instructions+=14;goto B43ce59;
case 0x43ce5b:c.instructions+=13;goto B43ce5b;
case 0x43ce5d:c.instructions+=12;goto B43ce5d;
case 0x43ce5f:c.instructions+=11;goto B43ce5f;
case 0x43ce61:c.instructions+=10;goto B43ce61;
case 0x43ce63:c.instructions+=9;goto B43ce63;
case 0x43ce65:c.instructions+=8;goto B43ce65;
case 0x43ce67:c.instructions+=7;goto B43ce67;
case 0x43ce69:c.instructions+=6;goto B43ce69;
case 0x43ce6d:c.instructions+=5;goto B43ce6d;
case 0x43ce73:c.instructions+=4;goto B43ce73;
case 0x43ce75:c.instructions+=3;goto B43ce75;
case 0x43ce78:c.instructions+=2;goto B43ce78;
case 0x43ce7c:c.instructions+=1;goto B43ce7c;
case 0x43ce7e:goto L43ce7e;
case 0x43ce81:c.instructions+=9;goto B43ce81;
case 0x43ce87:c.instructions+=8;goto B43ce87;
case 0x43ce8b:c.instructions+=7;goto B43ce8b;
case 0x43ce8d:c.instructions+=6;goto B43ce8d;
case 0x43ce8f:c.instructions+=5;goto B43ce8f;
case 0x43ce91:c.instructions+=4;goto B43ce91;
case 0x43ce93:c.instructions+=3;goto B43ce93;
case 0x43ce96:c.instructions+=2;goto B43ce96;
case 0x43ce98:c.instructions+=1;goto B43ce98;
case 0x43ce99:goto L43ce99;
case 0x43ce9f:c.instructions+=2;goto B43ce9f;
case 0x43cea6:c.instructions+=1;goto B43cea6;
case 0x43ceb0:goto L43ceb0;
case 0x43ceb4:c.instructions+=17;goto B43ceb4;
case 0x43ceb6:c.instructions+=16;goto B43ceb6;
case 0x43ceb9:c.instructions+=15;goto B43ceb9;
case 0x43cebb:c.instructions+=14;goto B43cebb;
case 0x43cebd:c.instructions+=13;goto B43cebd;
case 0x43cebf:c.instructions+=12;goto B43cebf;
case 0x43cec1:c.instructions+=11;goto B43cec1;
case 0x43cec3:c.instructions+=10;goto B43cec3;
case 0x43cec5:c.instructions+=9;goto B43cec5;
case 0x43cec7:c.instructions+=8;goto B43cec7;
case 0x43cec9:c.instructions+=7;goto B43cec9;
case 0x43cecd:c.instructions+=6;goto B43cecd;
case 0x43ced1:c.instructions+=5;goto B43ced1;
case 0x43ced7:c.instructions+=4;goto B43ced7;
case 0x43ced9:c.instructions+=3;goto B43ced9;
case 0x43cedc:c.instructions+=2;goto B43cedc;
case 0x43cee0:c.instructions+=1;goto B43cee0;
case 0x43cee2:goto L43cee2;
case 0x43cee5:c.instructions+=9;goto B43cee5;
case 0x43ceeb:c.instructions+=8;goto B43ceeb;
case 0x43ceef:c.instructions+=7;goto B43ceef;
case 0x43cef1:c.instructions+=6;goto B43cef1;
case 0x43cef3:c.instructions+=5;goto B43cef3;
case 0x43cef5:c.instructions+=4;goto B43cef5;
case 0x43cef7:c.instructions+=3;goto B43cef7;
case 0x43cefa:c.instructions+=2;goto B43cefa;
case 0x43cefc:c.instructions+=1;goto B43cefc;
case 0x43cefd:goto L43cefd;
case 0x43cf03:c.instructions+=2;goto B43cf03;
case 0x43cf0a:c.instructions+=1;goto B43cf0a;
case 0x43cf10:goto L43cf10;
case 0x43cf14:c.instructions+=19;goto B43cf14;
case 0x43cf17:c.instructions+=18;goto B43cf17;
case 0x43cf1a:c.instructions+=17;goto B43cf1a;
case 0x43cf1c:c.instructions+=16;goto B43cf1c;
case 0x43cf1e:c.instructions+=15;goto B43cf1e;
case 0x43cf20:c.instructions+=14;goto B43cf20;
case 0x43cf22:c.instructions+=13;goto B43cf22;
case 0x43cf24:c.instructions+=12;goto B43cf24;
case 0x43cf26:c.instructions+=11;goto B43cf26;
case 0x43cf28:c.instructions+=10;goto B43cf28;
case 0x43cf2a:c.instructions+=9;goto B43cf2a;
case 0x43cf2c:c.instructions+=8;goto B43cf2c;
case 0x43cf2e:c.instructions+=7;goto B43cf2e;
case 0x43cf30:c.instructions+=6;goto B43cf30;
case 0x43cf32:c.instructions+=5;goto B43cf32;
case 0x43cf34:c.instructions+=4;goto B43cf34;
case 0x43cf3a:c.instructions+=3;goto B43cf3a;
case 0x43cf3c:c.instructions+=2;goto B43cf3c;
case 0x43cf3f:c.instructions+=1;goto B43cf3f;
case 0x43cf41:goto L43cf41;
case 0x43cf47:c.instructions+=14;goto B43cf47;
case 0x43cf4a:c.instructions+=13;goto B43cf4a;
case 0x43cf4e:c.instructions+=12;goto B43cf4e;
case 0x43cf52:c.instructions+=11;goto B43cf52;
case 0x43cf55:c.instructions+=10;goto B43cf55;
case 0x43cf57:c.instructions+=9;goto B43cf57;
case 0x43cf59:c.instructions+=8;goto B43cf59;
case 0x43cf5b:c.instructions+=7;goto B43cf5b;
case 0x43cf5d:c.instructions+=6;goto B43cf5d;
case 0x43cf60:c.instructions+=5;goto B43cf60;
case 0x43cf64:c.instructions+=4;goto B43cf64;
case 0x43cf66:c.instructions+=3;goto B43cf66;
case 0x43cf69:c.instructions+=2;goto B43cf69;
case 0x43cf6b:c.instructions+=1;goto B43cf6b;
case 0x43cf6c:goto L43cf6c;
case 0x43cf70:c.instructions+=6;goto B43cf70;
case 0x43cf72:c.instructions+=5;goto B43cf72;
case 0x43cf74:c.instructions+=4;goto B43cf74;
case 0x43cf7a:c.instructions+=3;goto B43cf7a;
case 0x43cf7d:c.instructions+=2;goto B43cf7d;
case 0x43cf80:c.instructions+=1;goto B43cf80;
case 0x43cf90:goto L43cf90;
case 0x43cf94:c.instructions+=20;goto B43cf94;
case 0x43cf97:c.instructions+=19;goto B43cf97;
case 0x43cf9a:c.instructions+=18;goto B43cf9a;
case 0x43cf9c:c.instructions+=17;goto B43cf9c;
case 0x43cf9e:c.instructions+=16;goto B43cf9e;
case 0x43cfa0:c.instructions+=15;goto B43cfa0;
case 0x43cfa2:c.instructions+=14;goto B43cfa2;
case 0x43cfa4:c.instructions+=13;goto B43cfa4;
case 0x43cfa6:c.instructions+=12;goto B43cfa6;
case 0x43cfa8:c.instructions+=11;goto B43cfa8;
case 0x43cfaa:c.instructions+=10;goto B43cfaa;
case 0x43cfac:c.instructions+=9;goto B43cfac;
case 0x43cfae:c.instructions+=8;goto B43cfae;
case 0x43cfb0:c.instructions+=7;goto B43cfb0;
case 0x43cfb2:c.instructions+=6;goto B43cfb2;
case 0x43cfb4:c.instructions+=5;goto B43cfb4;
case 0x43cfb8:c.instructions+=4;goto B43cfb8;
case 0x43cfbe:c.instructions+=3;goto B43cfbe;
case 0x43cfc0:c.instructions+=2;goto B43cfc0;
case 0x43cfc3:c.instructions+=1;goto B43cfc3;
case 0x43cfc5:goto L43cfc5;
case 0x43cfcb:c.instructions+=14;goto B43cfcb;
case 0x43cfce:c.instructions+=13;goto B43cfce;
case 0x43cfd2:c.instructions+=12;goto B43cfd2;
case 0x43cfd6:c.instructions+=11;goto B43cfd6;
case 0x43cfd9:c.instructions+=10;goto B43cfd9;
case 0x43cfdb:c.instructions+=9;goto B43cfdb;
case 0x43cfdd:c.instructions+=8;goto B43cfdd;
case 0x43cfdf:c.instructions+=7;goto B43cfdf;
case 0x43cfe1:c.instructions+=6;goto B43cfe1;
case 0x43cfe4:c.instructions+=5;goto B43cfe4;
case 0x43cfe8:c.instructions+=4;goto B43cfe8;
case 0x43cfea:c.instructions+=3;goto B43cfea;
case 0x43cfed:c.instructions+=2;goto B43cfed;
case 0x43cfef:c.instructions+=1;goto B43cfef;
case 0x43cff0:goto L43cff0;
case 0x43cff4:c.instructions+=5;goto B43cff4;
case 0x43cff6:c.instructions+=4;goto B43cff6;
case 0x43cffa:c.instructions+=3;goto B43cffa;
case 0x43cffc:c.instructions+=2;goto B43cffc;
case 0x43cffe:c.instructions+=1;goto B43cffe;
default:missing_instruction(c.pc);}
B43c000:L43c000:{c.instructions+=5;NFSU2_TR(0x43c000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43c002:{NFSU2_TR(0x43c002);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B43c003:{NFSU2_TR(0x43c003);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43c005:{NFSU2_TR(0x43c005);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c009:{NFSU2_TR(0x43c009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c01a;}}
}
B43c00b:L43c00b:{c.instructions+=2;NFSU2_TR(0x43c00b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43c00d:{NFSU2_TR(0x43c00d);
{goto L43c01a;}
}
B43c00f:L43c00f:{c.instructions+=5;NFSU2_TR(0x43c00f);
__builtin_memmove((R+0),(R+28),4);
}
B43c011:{NFSU2_TR(0x43c011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43c013:{NFSU2_TR(0x43c013);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B43c014:{NFSU2_TR(0x43c014);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43c016:{NFSU2_TR(0x43c016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c01a;}}
}
B43c018:L43c018:{c.instructions+=1;NFSU2_TR(0x43c018);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43c01a:L43c01a:{c.instructions+=3;NFSU2_TR(0x43c01a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c01e:{NFSU2_TR(0x43c01e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43c020:{NFSU2_TR(0x43c020);
if(r1(R+518)){{goto L43c035;}}
}
B43c022:L43c022:{c.instructions+=6;NFSU2_TR(0x43c022);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c026:{NFSU2_TR(0x43c026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43c028:{NFSU2_TR(0x43c028);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c02b:{NFSU2_TR(0x43c02b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c02f:{NFSU2_TR(0x43c02f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c033:{NFSU2_TR(0x43c033);
TAIL_STATIC(0x43bfc0u,43b);
}
B43c035:L43c035:{c.instructions+=6;NFSU2_TR(0x43c035);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c039:{NFSU2_TR(0x43c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c03c:{NFSU2_TR(0x43c03c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c040:{NFSU2_TR(0x43c040);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c044:{NFSU2_TR(0x43c044);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c048:{NFSU2_TR(0x43c048);
TAIL_STATIC(0x43bfc0u,43b);
}
B43c04d:L43c04d:{c.instructions+=3;NFSU2_TR(0x43c04d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43c04f:{NFSU2_TR(0x43c04f);
__builtin_memmove((R+28),(R+24),4);
}
B43c051:{NFSU2_TR(0x43c051);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43bf88u,43b);}
}
B43c057:L43c057:{c.instructions+=7;NFSU2_TR(0x43c057);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c05b:{NFSU2_TR(0x43c05b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c05f:{NFSU2_TR(0x43c05f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43c063:{NFSU2_TR(0x43c063);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43c068:{NFSU2_TR(0x43c068);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43c06a:{NFSU2_TR(0x43c06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c06d:{NFSU2_TR(0x43c06d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43c07f;}}
}
B43c06f:L43c06f:{c.instructions+=4;NFSU2_TR(0x43c06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43c072:{NFSU2_TR(0x43c072);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c076:{NFSU2_TR(0x43c076);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c07a:{NFSU2_TR(0x43c07a);
TAIL_STATIC(0x43bf68u,43b);
}
B43c07f:L43c07f:{c.instructions+=10;NFSU2_TR(0x43c07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c082:{NFSU2_TR(0x43c082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c083:{NFSU2_TR(0x43c083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43c085:{NFSU2_TR(0x43c085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c086:{NFSU2_TR(0x43c086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43c087:{NFSU2_TR(0x43c087);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c08a:{NFSU2_TR(0x43c08a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43c08c:{NFSU2_TR(0x43c08c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43c08d:{NFSU2_TR(0x43c08d);
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
B43c090:{NFSU2_TR(0x43c090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c0a0:L43c0a0:{c.instructions+=6;NFSU2_TR(0x43c0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c0a4:{NFSU2_TR(0x43c0a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43c0a6:{NFSU2_TR(0x43c0a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43c0a8:{NFSU2_TR(0x43c0a8);
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
B43c0aa:{NFSU2_TR(0x43c0aa);
__builtin_memmove((R+0),(R+518),1);
}
B43c0ad:{NFSU2_TR(0x43c0ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c0b0:L43c0b0:{c.instructions+=23;NFSU2_TR(0x43c0b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c0b4:{NFSU2_TR(0x43c0b4);
__builtin_memmove((R+0),(R+4),4);
}
B43c0b6:{NFSU2_TR(0x43c0b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c0ba:{NFSU2_TR(0x43c0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c0bd:{NFSU2_TR(0x43c0bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c0c1:{NFSU2_TR(0x43c0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c0c4:{NFSU2_TR(0x43c0c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c0c5:{NFSU2_TR(0x43c0c5);
__builtin_memmove((R+24),(R+4),4);
}
B43c0c7:{NFSU2_TR(0x43c0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c0ca:{NFSU2_TR(0x43c0ca);
__builtin_memmove((R+8),(R+4),4);
}
B43c0cc:{NFSU2_TR(0x43c0cc);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B43c0cf:{NFSU2_TR(0x43c0cf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B43c0d1:{NFSU2_TR(0x43c0d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B43c0d4:{NFSU2_TR(0x43c0d4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B43c0d6:{NFSU2_TR(0x43c0d6);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B43c0d9:{NFSU2_TR(0x43c0d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828050ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43c0e0:{NFSU2_TR(0x43c0e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43c0e2:{NFSU2_TR(0x43c0e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x827fe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43c0e8:{NFSU2_TR(0x43c0e8);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+4),u8(0x1ull)));
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43c0ea:{NFSU2_TR(0x43c0ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828050ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43c0f1:{NFSU2_TR(0x43c0f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x827fe8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43c0f7:{NFSU2_TR(0x43c0f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c0f8:{NFSU2_TR(0x43c0f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c100:L43c100:{c.instructions+=14;NFSU2_TR(0x43c100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c104:{NFSU2_TR(0x43c104);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c105:{NFSU2_TR(0x43c105);
__builtin_memmove((R+8),(R+4),4);
}
B43c107:{NFSU2_TR(0x43c107);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B43c10a:{NFSU2_TR(0x43c10a);
__builtin_memmove((R+0),(R+4),4);
}
B43c10c:{NFSU2_TR(0x43c10c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B43c10f:{NFSU2_TR(0x43c10f);
__builtin_memmove((R+24),(R+4),4);
}
B43c111:{NFSU2_TR(0x43c111);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B43c113:{NFSU2_TR(0x43c113);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B43c115:{NFSU2_TR(0x43c115);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B43c118:{NFSU2_TR(0x43c118);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828050ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B43c11f:{NFSU2_TR(0x43c11f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43c121:{NFSU2_TR(0x43c121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c122:{NFSU2_TR(0x43c122);
if(r1(R+518)){{goto L43c12f;}}
}
B43c124:L43c124:{c.instructions+=2;NFSU2_TR(0x43c124);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B43c127:{NFSU2_TR(0x43c127);
if(r1(R+518)){{goto L43c131;}}
}
B43c129:L43c129:{c.instructions+=3;NFSU2_TR(0x43c129);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43c12b:{NFSU2_TR(0x43c12b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43c12d:{NFSU2_TR(0x43c12d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43c124u);}goto L43c124;}}
}
B43c12f:L43c12f:{c.instructions+=1;NFSU2_TR(0x43c12f);
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
B43c131:L43c131:{c.instructions+=1;NFSU2_TR(0x43c131);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c140:L43c140:{c.instructions+=20;NFSU2_TR(0x43c140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c141:{NFSU2_TR(0x43c141);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c142:{NFSU2_TR(0x43c142);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43c146:{NFSU2_TR(0x43c146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43c148:{NFSU2_TR(0x43c148);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43c14a:{NFSU2_TR(0x43c14a);
__builtin_memmove((R+0),(R+4),4);
}
B43c14c:{NFSU2_TR(0x43c14c);
u8 U[64];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c14c);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c14c);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B43c150:{NFSU2_TR(0x43c150);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1d872b41ull))));
}
B43c156:{NFSU2_TR(0x43c156);
__builtin_memmove((R+24),(R+4),4);
}
B43c158:{NFSU2_TR(0x43c158);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43c15b:{NFSU2_TR(0x43c15b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B43c15d:{NFSU2_TR(0x43c15d);
__builtin_memmove((R+0),(R+8),4);
}
B43c15f:{NFSU2_TR(0x43c15f);
__builtin_memmove((R+8),(R+4),4);
}
B43c161:{NFSU2_TR(0x43c161);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B43c164:{NFSU2_TR(0x43c164);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B43c166:{NFSU2_TR(0x43c166);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c168:{NFSU2_TR(0x43c168);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43c16a:{NFSU2_TR(0x43c16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c16b:{NFSU2_TR(0x43c16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c16c:{NFSU2_TR(0x43c16c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c170:L43c170:{c.instructions+=21;NFSU2_TR(0x43c170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c171:{NFSU2_TR(0x43c171);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43c175:{NFSU2_TR(0x43c175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43c177:{NFSU2_TR(0x43c177);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c178:{NFSU2_TR(0x43c178);
__builtin_memmove((R+0),(R+4),4);
}
B43c17a:{NFSU2_TR(0x43c17a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43c17c:{NFSU2_TR(0x43c17c);
w4(R+28,u32(0x7fffffffull));
}
B43c181:{NFSU2_TR(0x43c181);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c181);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c181);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B43c183:{NFSU2_TR(0x43c183);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1d872b41ull))));
}
B43c189:{NFSU2_TR(0x43c189);
__builtin_memmove((R+0),(R+4),4);
}
B43c18b:{NFSU2_TR(0x43c18b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B43c18e:{NFSU2_TR(0x43c18e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B43c190:{NFSU2_TR(0x43c190);
__builtin_memmove((R+28),(R+0),4);
}
B43c192:{NFSU2_TR(0x43c192);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B43c195:{NFSU2_TR(0x43c195);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B43c197:{NFSU2_TR(0x43c197);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B43c199:{NFSU2_TR(0x43c199);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43c19b:{NFSU2_TR(0x43c19b);
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
B43c19d:{NFSU2_TR(0x43c19d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c1a1:{NFSU2_TR(0x43c1a1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43c1a5:{NFSU2_TR(0x43c1a5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c1ad;}}
}
B43c1a7:L43c1a7:{c.instructions+=1;NFSU2_TR(0x43c1a7);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43c1ad:L43c1ad:{c.instructions+=5;NFSU2_TR(0x43c1ad);
{u32 ea_=u32(u32(7892200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c1b3:{NFSU2_TR(0x43c1b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c1b4:{NFSU2_TR(0x43c1b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c1b5:{NFSU2_TR(0x43c1b5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c1b9:{NFSU2_TR(0x43c1b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c1c0:L43c1c0:{c.instructions+=17;NFSU2_TR(0x43c1c0);
__builtin_memmove((R+4),gp(0x7ea624),4);
}
B43c1c6:{NFSU2_TR(0x43c1c6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43c1c8:{NFSU2_TR(0x43c1c8);
__builtin_memmove((R+0),(R+4),4);
}
B43c1ca:{NFSU2_TR(0x43c1ca);
u8 U[64];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c1ca);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c1ca);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B43c1ce:{NFSU2_TR(0x43c1ce);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1d872b41ull))));
}
B43c1d4:{NFSU2_TR(0x43c1d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c1d5:{NFSU2_TR(0x43c1d5);
__builtin_memmove((R+24),(R+4),4);
}
B43c1d7:{NFSU2_TR(0x43c1d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43c1da:{NFSU2_TR(0x43c1da);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B43c1dc:{NFSU2_TR(0x43c1dc);
__builtin_memmove((R+0),(R+8),4);
}
B43c1de:{NFSU2_TR(0x43c1de);
__builtin_memmove((R+8),(R+4),4);
}
B43c1e0:{NFSU2_TR(0x43c1e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B43c1e3:{NFSU2_TR(0x43c1e3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B43c1e5:{NFSU2_TR(0x43c1e5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c1e7:{NFSU2_TR(0x43c1e7);
__builtin_memmove(gp(0x7ea624),(R+8),4);
}
B43c1ed:{NFSU2_TR(0x43c1ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c1ee:{NFSU2_TR(0x43c1ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c1f0:L43c1f0:{c.instructions+=20;NFSU2_TR(0x43c1f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c1f1:{NFSU2_TR(0x43c1f1);
__builtin_memmove((R+4),gp(0x7ea624),4);
}
B43c1f7:{NFSU2_TR(0x43c1f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c1f8:{NFSU2_TR(0x43c1f8);
__builtin_memmove((R+0),(R+4),4);
}
B43c1fa:{NFSU2_TR(0x43c1fa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43c1fc:{NFSU2_TR(0x43c1fc);
w4(R+24,u32(0x7fffffffull));
}
B43c201:{NFSU2_TR(0x43c201);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c201);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43c201);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B43c203:{NFSU2_TR(0x43c203);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1d872b41ull))));
}
B43c209:{NFSU2_TR(0x43c209);
__builtin_memmove((R+0),(R+4),4);
}
B43c20b:{NFSU2_TR(0x43c20b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B43c20e:{NFSU2_TR(0x43c20e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B43c210:{NFSU2_TR(0x43c210);
__builtin_memmove((R+24),(R+0),4);
}
B43c212:{NFSU2_TR(0x43c212);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B43c215:{NFSU2_TR(0x43c215);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B43c217:{NFSU2_TR(0x43c217);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B43c219:{NFSU2_TR(0x43c219);
__builtin_memmove(gp(0x7ea624),(R+24),4);
}
B43c21f:{NFSU2_TR(0x43c21f);
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
B43c221:{NFSU2_TR(0x43c221);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c225:{NFSU2_TR(0x43c225);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43c229:{NFSU2_TR(0x43c229);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c231;}}
}
B43c22b:L43c22b:{c.instructions+=1;NFSU2_TR(0x43c22b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43c231:L43c231:{c.instructions+=5;NFSU2_TR(0x43c231);
{u32 ea_=u32(u32(7892200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c237:{NFSU2_TR(0x43c237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c238:{NFSU2_TR(0x43c238);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c23c:{NFSU2_TR(0x43c23c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43c23d:{NFSU2_TR(0x43c23d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c240:L43c240:{c.instructions+=6;NFSU2_TR(0x43c240);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c244:{NFSU2_TR(0x43c244);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43c246:{NFSU2_TR(0x43c246);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c24a:{NFSU2_TR(0x43c24a);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B43c24c:{NFSU2_TR(0x43c24c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c24e:{NFSU2_TR(0x43c24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c253ull));
TAIL_STATIC(0x75bed4u,75b);
}
B43c253:L43c253:{c.instructions+=6;NFSU2_TR(0x43c253);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c257:{NFSU2_TR(0x43c257);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43c25b:{NFSU2_TR(0x43c25b);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B43c25d:{NFSU2_TR(0x43c25d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c25f:{NFSU2_TR(0x43c25f);
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
B43c262:{NFSU2_TR(0x43c262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c26a;}}
}
B43c264:L43c264:{c.instructions+=1;NFSU2_TR(0x43c264);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43c26a:L43c26a:{c.instructions+=5;NFSU2_TR(0x43c26a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c26c:{NFSU2_TR(0x43c26c);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B43c26e:{NFSU2_TR(0x43c26e);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B43c270:{NFSU2_TR(0x43c270);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c272:{NFSU2_TR(0x43c272);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c280:L43c280:{c.instructions+=5;NFSU2_TR(0x43c280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c281:{NFSU2_TR(0x43c281);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43c285:{NFSU2_TR(0x43c285);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c287:{NFSU2_TR(0x43c287);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c288:{NFSU2_TR(0x43c288);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c28c;}}
}
B43c28a:L43c28a:{c.instructions+=1;NFSU2_TR(0x43c28a);
w4(R+24,u32(0-u32(r4(R+24))));
}
B43c28c:L43c28c:{c.instructions+=8;NFSU2_TR(0x43c28c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43c290:{NFSU2_TR(0x43c290);
__builtin_memmove((R+0),(R+28),4);
}
B43c292:{NFSU2_TR(0x43c292);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43c293:{NFSU2_TR(0x43c293);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43c293);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43c293);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43c295:{NFSU2_TR(0x43c295);
__builtin_memmove((R+4),(R+0),4);
}
B43c297:{NFSU2_TR(0x43c297);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B43c29a:{NFSU2_TR(0x43c29a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c29c:{NFSU2_TR(0x43c29c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c2a0;}}
}
B43c29e:L43c29e:{c.instructions+=1;NFSU2_TR(0x43c29e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B43c2a0:L43c2a0:{c.instructions+=5;NFSU2_TR(0x43c2a0);
__builtin_memmove((R+0),(R+28),4);
}
B43c2a2:{NFSU2_TR(0x43c2a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c2a3:{NFSU2_TR(0x43c2a3);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c2a5:{NFSU2_TR(0x43c2a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c2a6:{NFSU2_TR(0x43c2a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c2b0:L43c2b0:{c.instructions+=10;NFSU2_TR(0x43c2b0);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B43c2b5:{NFSU2_TR(0x43c2b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c2b9:{NFSU2_TR(0x43c2b9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43c2bd:{NFSU2_TR(0x43c2bd);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c2c3:{NFSU2_TR(0x43c2c3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c2c9:{NFSU2_TR(0x43c2c9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c2cb:{NFSU2_TR(0x43c2cb);
{u32 ea_=u32(u32(7892384u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43c2d1:{NFSU2_TR(0x43c2d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c2d3:{NFSU2_TR(0x43c2d3);
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
B43c2d6:{NFSU2_TR(0x43c2d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c2e4;}}
}
B43c2d8:L43c2d8:{c.instructions+=4;NFSU2_TR(0x43c2d8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c2da:{NFSU2_TR(0x43c2da);
{u32 ea_=u32(u32(7892380u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43c2e0:{NFSU2_TR(0x43c2e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c2e2:{NFSU2_TR(0x43c2e2);
{goto L43c301;}
}
B43c2e4:L43c2e4:{c.instructions+=5;NFSU2_TR(0x43c2e4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c2e6:{NFSU2_TR(0x43c2e6);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43c2ec:{NFSU2_TR(0x43c2ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c2ee:{NFSU2_TR(0x43c2ee);
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
B43c2f1:{NFSU2_TR(0x43c2f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c301;}}
}
B43c2f3:L43c2f3:{c.instructions+=3;NFSU2_TR(0x43c2f3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c2f5:{NFSU2_TR(0x43c2f5);
{u32 ea_=u32(u32(7892376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43c2fb:{NFSU2_TR(0x43c2fb);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c301:L43c301:{c.instructions+=27;NFSU2_TR(0x43c301);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c303:{NFSU2_TR(0x43c303);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c305:{NFSU2_TR(0x43c305);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c307:{NFSU2_TR(0x43c307);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c309:{NFSU2_TR(0x43c309);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c30b:{NFSU2_TR(0x43c30b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c30d:{NFSU2_TR(0x43c30d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c30f:{NFSU2_TR(0x43c30f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c311:{NFSU2_TR(0x43c311);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B43c313:{NFSU2_TR(0x43c313);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c319:{NFSU2_TR(0x43c319);
__asm__ volatile(".byte 0xde,0xed":::"memory");
}
B43c31b:{NFSU2_TR(0x43c31b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c31d:{NFSU2_TR(0x43c31d);
{u32 ea_=u32(u32(7892368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c323:{NFSU2_TR(0x43c323);
__asm__ volatile(".byte 0xde,0xc5":::"memory");
}
B43c325:{NFSU2_TR(0x43c325);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c327:{NFSU2_TR(0x43c327);
{u32 ea_=u32(u32(7892364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c32d:{NFSU2_TR(0x43c32d);
__asm__ volatile(".byte 0xde,0xed":::"memory");
}
B43c32f:{NFSU2_TR(0x43c32f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c331:{NFSU2_TR(0x43c331);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c333:{NFSU2_TR(0x43c333);
{u32 ea_=u32(u32(7892360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c339:{NFSU2_TR(0x43c339);
__asm__ volatile(".byte 0xde,0xc4":::"memory");
}
B43c33b:{NFSU2_TR(0x43c33b);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B43c33d:{NFSU2_TR(0x43c33d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c33f:{NFSU2_TR(0x43c33f);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B43c341:{NFSU2_TR(0x43c341);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c343:{NFSU2_TR(0x43c343);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c345:{NFSU2_TR(0x43c345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c350:L43c350:{c.instructions+=3;NFSU2_TR(0x43c350);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c354:{NFSU2_TR(0x43c354);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c35a:{NFSU2_TR(0x43c35a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c35full));
TAIL_STATIC(0x75bed4u,75b);
}
B43c35f:L43c35f:{c.instructions+=2;NFSU2_TR(0x43c35f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c363:{NFSU2_TR(0x43c363);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43c2b0u);}goto L43c2b0;}
}
B43c370:L43c370:{c.instructions+=4;NFSU2_TR(0x43c370);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c374:{NFSU2_TR(0x43c374);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4000ull))));
}
B43c379:{NFSU2_TR(0x43c379);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c37d:{NFSU2_TR(0x43c37d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43c2b0u);}goto L43c2b0;}
}
B43c390:L43c390:{c.instructions+=10;NFSU2_TR(0x43c390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B43c393:{NFSU2_TR(0x43c393);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B43c398:{NFSU2_TR(0x43c398);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c39c:{NFSU2_TR(0x43c39c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43c3a0:{NFSU2_TR(0x43c3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43c3a8:{NFSU2_TR(0x43c3a8);
{u32 ea_=u32(u32(7881280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c3ae:{NFSU2_TR(0x43c3ae);
{u32 ea_=u32(u32(7892384u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43c3b4:{NFSU2_TR(0x43c3b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c3b6:{NFSU2_TR(0x43c3b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43c3b9:{NFSU2_TR(0x43c3b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c3c3;}}
}
B43c3bb:L43c3bb:{c.instructions+=2;NFSU2_TR(0x43c3bb);
{u32 ea_=u32(u32(7892380u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43c3c1:{NFSU2_TR(0x43c3c1);
{goto L43c3de;}
}
B43c3c3:L43c3c3:{c.instructions+=4;NFSU2_TR(0x43c3c3);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43c3c9:{NFSU2_TR(0x43c3c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c3cb:{NFSU2_TR(0x43c3cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43c3ce:{NFSU2_TR(0x43c3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c3de;}}
}
B43c3d0:L43c3d0:{c.instructions+=2;NFSU2_TR(0x43c3d0);
{u32 ea_=u32(u32(7892376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43c3d6:{NFSU2_TR(0x43c3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43c3de:L43c3de:{c.instructions+=56;NFSU2_TR(0x43c3de);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c3e0:{NFSU2_TR(0x43c3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c3e4:{NFSU2_TR(0x43c3e4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43c3e6:{NFSU2_TR(0x43c3e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c3ea:{NFSU2_TR(0x43c3ea);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c3ec:{NFSU2_TR(0x43c3ec);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c3ee:{NFSU2_TR(0x43c3ee);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c3f0:{NFSU2_TR(0x43c3f0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c3f2:{NFSU2_TR(0x43c3f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c3f6:{NFSU2_TR(0x43c3f6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c3f8:{NFSU2_TR(0x43c3f8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c3fa:{NFSU2_TR(0x43c3fa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c3fe:{NFSU2_TR(0x43c3fe);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c400:{NFSU2_TR(0x43c400);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c404:{NFSU2_TR(0x43c404);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c406:{NFSU2_TR(0x43c406);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c408:{NFSU2_TR(0x43c408);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c40c:{NFSU2_TR(0x43c40c);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c40e:{NFSU2_TR(0x43c40e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c412:{NFSU2_TR(0x43c412);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B43c414:{NFSU2_TR(0x43c414);
{u32 ea_=u32(u32(7892372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c41a:{NFSU2_TR(0x43c41a);
__asm__ volatile(".byte 0xd8,0xec":::"memory");
}
B43c41c:{NFSU2_TR(0x43c41c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c41e:{NFSU2_TR(0x43c41e);
{u32 ea_=u32(u32(7892368u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c424:{NFSU2_TR(0x43c424);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c426:{NFSU2_TR(0x43c426);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c428:{NFSU2_TR(0x43c428);
{u32 ea_=u32(u32(7892364u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c42e:{NFSU2_TR(0x43c42e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c430:{NFSU2_TR(0x43c430);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c432:{NFSU2_TR(0x43c432);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c434:{NFSU2_TR(0x43c434);
{u32 ea_=u32(u32(7892360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c43a:{NFSU2_TR(0x43c43a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c43c:{NFSU2_TR(0x43c43c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c440:{NFSU2_TR(0x43c440);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c442:{NFSU2_TR(0x43c442);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c448:{NFSU2_TR(0x43c448);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43c44a:{NFSU2_TR(0x43c44a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B43c450:{NFSU2_TR(0x43c450);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c454:{NFSU2_TR(0x43c454);
{u32 ea_=u32(u32(7892400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c45a:{NFSU2_TR(0x43c45a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c45c:{NFSU2_TR(0x43c45c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c460:{NFSU2_TR(0x43c460);
{u32 ea_=u32(u32(7892396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c466:{NFSU2_TR(0x43c466);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c468:{NFSU2_TR(0x43c468);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c46c:{NFSU2_TR(0x43c46c);
{u32 ea_=u32(u32(7892392u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c472:{NFSU2_TR(0x43c472);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c474:{NFSU2_TR(0x43c474);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c478:{NFSU2_TR(0x43c478);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c47a:{NFSU2_TR(0x43c47a);
{u32 ea_=u32(u32(7892388u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c480:{NFSU2_TR(0x43c480);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c482:{NFSU2_TR(0x43c482);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c486:{NFSU2_TR(0x43c486);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c488:{NFSU2_TR(0x43c488);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c48a:{NFSU2_TR(0x43c48a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c48c:{NFSU2_TR(0x43c48c);
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
B43c48f:{NFSU2_TR(0x43c48f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c490:L43c490:{c.instructions+=8;NFSU2_TR(0x43c490);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c491:{NFSU2_TR(0x43c491);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c495:{NFSU2_TR(0x43c495);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c496:{NFSU2_TR(0x43c496);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43c49c:{NFSU2_TR(0x43c49c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43c49e:{NFSU2_TR(0x43c49e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c4a0:{NFSU2_TR(0x43c4a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43c4a3:{NFSU2_TR(0x43c4a3);
if(r1(R+514)){{goto L43c4b4;}}
}
B43c4a5:L43c4a5:{c.instructions+=4;NFSU2_TR(0x43c4a5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c4a9:{NFSU2_TR(0x43c4a9);
w4(R+12,u32(0x1ull));
}
B43c4ae:{NFSU2_TR(0x43c4ae);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c4b0:{NFSU2_TR(0x43c4b0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c4b4:L43c4b4:{c.instructions+=5;NFSU2_TR(0x43c4b4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c4b8:{NFSU2_TR(0x43c4b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43c4be:{NFSU2_TR(0x43c4be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c4c0:{NFSU2_TR(0x43c4c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43c4c3:{NFSU2_TR(0x43c4c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c4d8;}}
}
B43c4c5:L43c4c5:{c.instructions+=8;NFSU2_TR(0x43c4c5);
__builtin_memmove((R+0),(R+12),4);
}
B43c4c7:{NFSU2_TR(0x43c4c7);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B43c4c9:{NFSU2_TR(0x43c4c9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B43c4cb:{NFSU2_TR(0x43c4cb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B43c4d0:{NFSU2_TR(0x43c4d0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4000ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4000ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c4d5:{NFSU2_TR(0x43c4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43c4d6:{NFSU2_TR(0x43c4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43c4d7:{NFSU2_TR(0x43c4d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c4d8:L43c4d8:{c.instructions+=5;NFSU2_TR(0x43c4d8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c4dc:{NFSU2_TR(0x43c4dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c4dd:{NFSU2_TR(0x43c4dd);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c4e3:{NFSU2_TR(0x43c4e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c4e4:{NFSU2_TR(0x43c4e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c4e9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B43c4e9:L43c4e9:{c.instructions+=5;NFSU2_TR(0x43c4e9);
w4(R+8,u32(0x8000ull));
}
B43c4ee:{NFSU2_TR(0x43c4ee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43c4f0:{NFSU2_TR(0x43c4f0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43c4f2:{NFSU2_TR(0x43c4f2);
__builtin_memmove((R+4),(R+8),4);
}
B43c4f4:{NFSU2_TR(0x43c4f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43c504;}}
}
B43c4f6:L43c4f6:{c.instructions+=2;NFSU2_TR(0x43c4f6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xbull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43c4f9:{NFSU2_TR(0x43c4f9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c504;}}
}
B43c4fb:L43c4fb:{c.instructions+=5;NFSU2_TR(0x43c4fb);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B43c4fd:{NFSU2_TR(0x43c4fd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B43c4ff:{NFSU2_TR(0x43c4ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43c500:{NFSU2_TR(0x43c500);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43c502:{NFSU2_TR(0x43c502);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43c4f6u);}goto L43c4f6;}}
}
B43c504:L43c504:{c.instructions+=19;NFSU2_TR(0x43c504);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B43c506:{NFSU2_TR(0x43c506);
__builtin_memmove((R+28),(R+4),4);
}
B43c508:{NFSU2_TR(0x43c508);
w4(R+4,u32(0xbull));
}
B43c50d:{NFSU2_TR(0x43c50d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B43c50f:{NFSU2_TR(0x43c50f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B43c511:{NFSU2_TR(0x43c511);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B43c513:{NFSU2_TR(0x43c513);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B43c516:{NFSU2_TR(0x43c516);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B43c519:{NFSU2_TR(0x43c519);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B43c51c:{NFSU2_TR(0x43c51c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B43c51e:{NFSU2_TR(0x43c51e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c522:{NFSU2_TR(0x43c522);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B43c524:{NFSU2_TR(0x43c524);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B43c527:{NFSU2_TR(0x43c527);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43c52b:{NFSU2_TR(0x43c52b);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c531:{NFSU2_TR(0x43c531);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B43c535:{NFSU2_TR(0x43c535);
{u32 ea_=u32(r4(R+24)+u32(8300076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c53b:{NFSU2_TR(0x43c53b);
{u32 ea_=u32(u32(7892404u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c541:{NFSU2_TR(0x43c541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c546ull));
TAIL_STATIC(0x75bed4u,75b);
}
B43c546:L43c546:{c.instructions+=7;NFSU2_TR(0x43c546);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43c548:{NFSU2_TR(0x43c548);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ea628ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B43c54f:{NFSU2_TR(0x43c54f);
w2(R+4,u16(u32(r2(R+4))-u32(r2(R+0))));
}
B43c552:{NFSU2_TR(0x43c552);
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
B43c554:{NFSU2_TR(0x43c554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c555:{NFSU2_TR(0x43c555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c556:{NFSU2_TR(0x43c556);
if(r1(R+518)){{goto L43c562;}}
}
B43c558:L43c558:{c.instructions+=5;NFSU2_TR(0x43c558);
w4(R+0,u32(0x10000ull));
}
B43c55d:{NFSU2_TR(0x43c55d);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c55f:{NFSU2_TR(0x43c55f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43c560:{NFSU2_TR(0x43c560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43c561:{NFSU2_TR(0x43c561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c562:L43c562:{c.instructions+=4;NFSU2_TR(0x43c562);
__builtin_memmove((R+0),(R+4),2);
}
B43c565:{NFSU2_TR(0x43c565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43c566:{NFSU2_TR(0x43c566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43c567:{NFSU2_TR(0x43c567);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c570:L43c570:{c.instructions+=7;NFSU2_TR(0x43c570);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c574:{NFSU2_TR(0x43c574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c575:{NFSU2_TR(0x43c575);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43c57b:{NFSU2_TR(0x43c57b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43c57d:{NFSU2_TR(0x43c57d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c57f:{NFSU2_TR(0x43c57f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43c582:{NFSU2_TR(0x43c582);
if(r1(R+514)){{goto L43c593;}}
}
B43c584:L43c584:{c.instructions+=4;NFSU2_TR(0x43c584);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c588:{NFSU2_TR(0x43c588);
w4(R+24,u32(0x1ull));
}
B43c58d:{NFSU2_TR(0x43c58d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c58f:{NFSU2_TR(0x43c58f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c593:L43c593:{c.instructions+=5;NFSU2_TR(0x43c593);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c597:{NFSU2_TR(0x43c597);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43c59d:{NFSU2_TR(0x43c59d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c59f:{NFSU2_TR(0x43c59f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43c5a2:{NFSU2_TR(0x43c5a2);
if(r1(R+514)){{goto L43c5a9;}}
}
B43c5a4:L43c5a4:{c.instructions+=2;NFSU2_TR(0x43c5a4);
w4(R+24,u32(u32(r4(R+24))^u32(u32(0x3ull))));
}
B43c5a7:{NFSU2_TR(0x43c5a7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c5a9:L43c5a9:{c.instructions+=5;NFSU2_TR(0x43c5a9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c5ad:{NFSU2_TR(0x43c5ad);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43c5af:{NFSU2_TR(0x43c5af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c5b1:{NFSU2_TR(0x43c5b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43c5b4:{NFSU2_TR(0x43c5b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c5d5;}}
}
B43c5b6:L43c5b6:{c.instructions+=3;NFSU2_TR(0x43c5b6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43c5ba:{NFSU2_TR(0x43c5ba);
{u32 ea_=u32(u32(7892408u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c5c0:{NFSU2_TR(0x43c5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c5c5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B43c5c5:L43c5c5:{c.instructions+=5;NFSU2_TR(0x43c5c5);
w4(R+4,u32(0x7eacb0ull));
}
B43c5ca:{NFSU2_TR(0x43c5ca);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B43c5cc:{NFSU2_TR(0x43c5cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w2(R+4,u16(r1(U+0)));
}
B43c5d0:{NFSU2_TR(0x43c5d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B43c5d3:{NFSU2_TR(0x43c5d3);
{goto L43c620;}
}
B43c5d5:L43c5d5:{c.instructions+=4;NFSU2_TR(0x43c5d5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43c5d9:{NFSU2_TR(0x43c5d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c5db:{NFSU2_TR(0x43c5db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43c5de:{NFSU2_TR(0x43c5de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c60a;}}
}
B43c5e0:L43c5e0:{c.instructions+=4;NFSU2_TR(0x43c5e0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c5e4:{NFSU2_TR(0x43c5e4);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B43c5e6:{NFSU2_TR(0x43c5e6);
{u32 ea_=u32(u32(7892408u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c5ec:{NFSU2_TR(0x43c5ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c5f1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B43c5f1:L43c5f1:{c.instructions+=8;NFSU2_TR(0x43c5f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43c5f3:{NFSU2_TR(0x43c5f3);
w4(R+8,u32(0x7eacb0ull));
}
B43c5f8:{NFSU2_TR(0x43c5f8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B43c5fa:{NFSU2_TR(0x43c5fa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w2(R+0,u16(r1(U+0)));
}
B43c5fe:{NFSU2_TR(0x43c5fe);
w4(R+4,u32(0x4000ull));
}
B43c603:{NFSU2_TR(0x43c603);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43c606:{NFSU2_TR(0x43c606);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B43c608:{NFSU2_TR(0x43c608);
{goto L43c620;}
}
B43c60a:L43c60a:{c.instructions+=4;NFSU2_TR(0x43c60a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43c610:{NFSU2_TR(0x43c610);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43c612:{NFSU2_TR(0x43c612);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43c615:{NFSU2_TR(0x43c615);
if(r1(R+514)){{goto L43c61b;}}
}
B43c617:L43c617:{c.instructions+=2;NFSU2_TR(0x43c617);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43c619:{NFSU2_TR(0x43c619);
{goto L43c620;}
}
B43c61b:L43c61b:{c.instructions+=1;NFSU2_TR(0x43c61b);
w4(R+4,u32(0x2000ull));
}
B43c620:L43c620:{c.instructions+=2;NFSU2_TR(0x43c620);
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
B43c622:{NFSU2_TR(0x43c622);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c629;}}
}
B43c624:L43c624:{c.instructions+=3;NFSU2_TR(0x43c624);
__builtin_memmove((R+0),(R+4),2);
}
B43c627:{NFSU2_TR(0x43c627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c628:{NFSU2_TR(0x43c628);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c629:L43c629:{c.instructions+=2;NFSU2_TR(0x43c629);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43c62c:{NFSU2_TR(0x43c62c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c634;}}
}
B43c62e:L43c62e:{c.instructions+=4;NFSU2_TR(0x43c62e);
__builtin_memmove((R+0),(R+4),4);
}
B43c630:{NFSU2_TR(0x43c630);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c632:{NFSU2_TR(0x43c632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c633:{NFSU2_TR(0x43c633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c634:L43c634:{c.instructions+=2;NFSU2_TR(0x43c634);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c637:{NFSU2_TR(0x43c637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c642;}}
}
B43c639:L43c639:{c.instructions+=4;NFSU2_TR(0x43c639);
w4(R+0,u32(0x8000ull));
}
B43c63e:{NFSU2_TR(0x43c63e);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c640:{NFSU2_TR(0x43c640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c641:{NFSU2_TR(0x43c641);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c642:L43c642:{c.instructions+=3;NFSU2_TR(0x43c642);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8000ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43c648:{NFSU2_TR(0x43c648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c649:{NFSU2_TR(0x43c649);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c650:L43c650:{c.instructions+=6;NFSU2_TR(0x43c650);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c654:{NFSU2_TR(0x43c654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c655:{NFSU2_TR(0x43c655);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c656:{NFSU2_TR(0x43c656);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43c658:{NFSU2_TR(0x43c658);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c65a:{NFSU2_TR(0x43c65a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c663;}}
}
B43c65c:L43c65c:{c.instructions+=2;NFSU2_TR(0x43c65c);
w4(R+28,u32(0x1ull));
}
B43c661:{NFSU2_TR(0x43c661);
w4(R+0,u32(0-u32(r4(R+0))));
}
B43c663:L43c663:{c.instructions+=2;NFSU2_TR(0x43c663);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c668:{NFSU2_TR(0x43c668);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c6b4;}}
}
B43c66a:L43c66a:{c.instructions+=2;NFSU2_TR(0x43c66a);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x40000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c66f:{NFSU2_TR(0x43c66f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c690;}}
}
B43c671:L43c671:{c.instructions+=9;NFSU2_TR(0x43c671);
__builtin_memmove((R+4),(R+0),4);
}
B43c673:{NFSU2_TR(0x43c673);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B43c676:{NFSU2_TR(0x43c676);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7eb1c0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B43c67d:{NFSU2_TR(0x43c67d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+4),(U+0),2);
}
B43c680:{NFSU2_TR(0x43c680);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B43c684:{NFSU2_TR(0x43c684);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B43c689:{NFSU2_TR(0x43c689);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43c68c:{NFSU2_TR(0x43c68c);
__builtin_memmove((R+8),(R+0),4);
}
B43c68e:{NFSU2_TR(0x43c68e);
{goto L43c6d5;}
}
B43c690:L43c690:{c.instructions+=9;NFSU2_TR(0x43c690);
__builtin_memmove((R+8),(R+0),4);
}
B43c692:{NFSU2_TR(0x43c692);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B43c695:{NFSU2_TR(0x43c695);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7eb2c8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B43c69d:{NFSU2_TR(0x43c69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7eb2c8ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B43c6a4:{NFSU2_TR(0x43c6a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B43c6a8:{NFSU2_TR(0x43c6a8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3fffull))));
}
B43c6ad:{NFSU2_TR(0x43c6ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43c6b0:{NFSU2_TR(0x43c6b0);
__builtin_memmove((R+8),(R+0),4);
}
B43c6b2:{NFSU2_TR(0x43c6b2);
{goto L43c6d5;}
}
B43c6b4:L43c6b4:{c.instructions+=2;NFSU2_TR(0x43c6b4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1000000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1000000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c6b9:{NFSU2_TR(0x43c6b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c6cc;}}
}
B43c6bb:L43c6bb:{c.instructions+=5;NFSU2_TR(0x43c6bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B43c6be:{NFSU2_TR(0x43c6be);
w4(R+4,u32(0x3ebaull));
}
B43c6c3:{NFSU2_TR(0x43c6c3);
w4(R+24,u32(0x3fd7ull));
}
B43c6c8:{NFSU2_TR(0x43c6c8);
__builtin_memmove((R+8),(R+0),4);
}
B43c6ca:{NFSU2_TR(0x43c6ca);
{goto L43c6d5;}
}
B43c6cc:L43c6cc:{c.instructions+=3;NFSU2_TR(0x43c6cc);
w4(R+4,u32(0x3fffull));
}
B43c6d1:{NFSU2_TR(0x43c6d1);
__builtin_memmove((R+24),(R+4),4);
}
B43c6d3:{NFSU2_TR(0x43c6d3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43c6d5:L43c6d5:{c.instructions+=10;NFSU2_TR(0x43c6d5);
w4(R+4,u32(r2(R+4)));
}
B43c6d8:{NFSU2_TR(0x43c6d8);
w4(R+0,u32(r2(R+24)));
}
B43c6db:{NFSU2_TR(0x43c6db);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B43c6dd:{NFSU2_TR(0x43c6dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43c6e0:{NFSU2_TR(0x43c6e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B43c6e3:{NFSU2_TR(0x43c6e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B43c6e5:{NFSU2_TR(0x43c6e5);
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
B43c6e7:{NFSU2_TR(0x43c6e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c6e8:{NFSU2_TR(0x43c6e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c6e9:{NFSU2_TR(0x43c6e9);
if(r1(R+518)){{goto L43c6ed;}}
}
B43c6eb:L43c6eb:{c.instructions+=1;NFSU2_TR(0x43c6eb);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c6ed:L43c6ed:{c.instructions+=1;NFSU2_TR(0x43c6ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c6f0:L43c6f0:{c.instructions+=6;NFSU2_TR(0x43c6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c6f1:{NFSU2_TR(0x43c6f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43c6f5:{NFSU2_TR(0x43c6f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c6f6:{NFSU2_TR(0x43c6f6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43c6f8:{NFSU2_TR(0x43c6f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c6fa:{NFSU2_TR(0x43c6fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c703;}}
}
B43c6fc:L43c6fc:{c.instructions+=2;NFSU2_TR(0x43c6fc);
w4(R+28,u32(0x1ull));
}
B43c701:{NFSU2_TR(0x43c701);
w4(R+24,u32(0-u32(r4(R+24))));
}
B43c703:L43c703:{c.instructions+=3;NFSU2_TR(0x43c703);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c707:{NFSU2_TR(0x43c707);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43c709:{NFSU2_TR(0x43c709);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43c710;}}
}
B43c70b:L43c70b:{c.instructions+=2;NFSU2_TR(0x43c70b);
w4(R+28,u32(u32(r4(R+28))^u32(u32(0x3ull))));
}
B43c70e:{NFSU2_TR(0x43c70e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B43c710:L43c710:{c.instructions+=4;NFSU2_TR(0x43c710);
__builtin_memmove((R+0),(R+4),4);
}
B43c712:{NFSU2_TR(0x43c712);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B43c715:{NFSU2_TR(0x43c715);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43c717:{NFSU2_TR(0x43c717);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43c720;}}
}
B43c719:L43c719:{c.instructions+=2;NFSU2_TR(0x43c719);
w4(R+4,u32(0x4000ull));
}
B43c71e:{NFSU2_TR(0x43c71e);
{goto L43c753;}
}
B43c720:L43c720:{c.instructions+=2;NFSU2_TR(0x43c720);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43c722:{NFSU2_TR(0x43c722);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43c734;}}
}
B43c724:L43c724:{c.instructions+=3;NFSU2_TR(0x43c724);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43c726:{NFSU2_TR(0x43c726);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43c728:{NFSU2_TR(0x43c728);
if(r1(R+518)){{goto L43c747;}}
}
B43c72a:L43c72a:{c.instructions+=3;NFSU2_TR(0x43c72a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B43c72d:{NFSU2_TR(0x43c72d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7fffffffull))));
}
B43c732:{NFSU2_TR(0x43c732);
{goto L43c747;}
}
B43c734:L43c734:{c.instructions+=6;NFSU2_TR(0x43c734);
w4(R+0,u32(0x7fffffffull));
}
B43c739:{NFSU2_TR(0x43c739);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43c73a:{NFSU2_TR(0x43c73a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43c73a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43c73a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43c73c:{NFSU2_TR(0x43c73c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B43c73e:{NFSU2_TR(0x43c73e);
w1(R+4,u8(0x10ull));
}
B43c740:{NFSU2_TR(0x43c740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c745ull));
TAIL_STATIC(0x75c600u,75c);
}
B43c745:L43c745:{c.instructions+=1;NFSU2_TR(0x43c745);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B43c747:L43c747:{c.instructions+=2;NFSU2_TR(0x43c747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c748:{NFSU2_TR(0x43c748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c74dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43c650u);}goto L43c650;}
}
B43c74d:L43c74d:{c.instructions+=2;NFSU2_TR(0x43c74d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43c750:{NFSU2_TR(0x43c750);
w4(R+4,u32(r2(R+0)));
}
B43c753:L43c753:{c.instructions+=5;NFSU2_TR(0x43c753);
__builtin_memmove((R+0),(R+28),4);
}
B43c755:{NFSU2_TR(0x43c755);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c758:{NFSU2_TR(0x43c758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43c759:{NFSU2_TR(0x43c759);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43c75a:{NFSU2_TR(0x43c75a);
if(r1(R+518)){{goto L43c776;}}
}
B43c75c:L43c75c:{c.instructions+=2;NFSU2_TR(0x43c75c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43c75d:{NFSU2_TR(0x43c75d);
if(r1(R+518)){{goto L43c76e;}}
}
B43c75f:L43c75f:{c.instructions+=2;NFSU2_TR(0x43c75f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c760:{NFSU2_TR(0x43c760);
if(r1(R+518)){{goto L43c767;}}
}
B43c762:L43c762:{c.instructions+=3;NFSU2_TR(0x43c762);
__builtin_memmove((R+0),(R+4),4);
}
B43c764:{NFSU2_TR(0x43c764);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c766:{NFSU2_TR(0x43c766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c767:L43c767:{c.instructions+=2;NFSU2_TR(0x43c767);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffff8000ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43c76d:{NFSU2_TR(0x43c76d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c76e:L43c76e:{c.instructions+=3;NFSU2_TR(0x43c76e);
w4(R+0,u32(0x8000ull));
}
B43c773:{NFSU2_TR(0x43c773);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43c775:{NFSU2_TR(0x43c775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c776:L43c776:{c.instructions+=2;NFSU2_TR(0x43c776);
__builtin_memmove((R+0),(R+4),2);
}
B43c779:{NFSU2_TR(0x43c779);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c780:L43c780:{c.instructions+=20;NFSU2_TR(0x43c780);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c784:{NFSU2_TR(0x43c784);
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
B43c786:{NFSU2_TR(0x43c786);
w4(R+8,u32(0x3f800000ull));
}
B43c78b:{NFSU2_TR(0x43c78b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43c78d:{NFSU2_TR(0x43c78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c790:{NFSU2_TR(0x43c790);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c793:{NFSU2_TR(0x43c793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c796:{NFSU2_TR(0x43c796);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c799:{NFSU2_TR(0x43c799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c79c:{NFSU2_TR(0x43c79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c79f:{NFSU2_TR(0x43c79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7a2:{NFSU2_TR(0x43c7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7a5:{NFSU2_TR(0x43c7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7a8:{NFSU2_TR(0x43c7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7ab:{NFSU2_TR(0x43c7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7ae:{NFSU2_TR(0x43c7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7b1:{NFSU2_TR(0x43c7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7b4:{NFSU2_TR(0x43c7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7b7:{NFSU2_TR(0x43c7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7ba:{NFSU2_TR(0x43c7ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c7c0:L43c7c0:{c.instructions+=148;NFSU2_TR(0x43c7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B43c7c3:{NFSU2_TR(0x43c7c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c7c7:{NFSU2_TR(0x43c7c7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7c9:{NFSU2_TR(0x43c7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c7cc:{NFSU2_TR(0x43c7cc);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7cf:{NFSU2_TR(0x43c7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c7d2:{NFSU2_TR(0x43c7d2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7d5:{NFSU2_TR(0x43c7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7d9:{NFSU2_TR(0x43c7d9);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7dc:{NFSU2_TR(0x43c7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c7df:{NFSU2_TR(0x43c7df);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7e2:{NFSU2_TR(0x43c7e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B43c7e6:{NFSU2_TR(0x43c7e6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7ea:{NFSU2_TR(0x43c7ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7ee:{NFSU2_TR(0x43c7ee);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43c7f0:{NFSU2_TR(0x43c7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c7f3:{NFSU2_TR(0x43c7f3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c7f7:{NFSU2_TR(0x43c7f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c7fb:{NFSU2_TR(0x43c7fb);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c7fd:{NFSU2_TR(0x43c7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c800:{NFSU2_TR(0x43c800);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c803:{NFSU2_TR(0x43c803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c806:{NFSU2_TR(0x43c806);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c808:{NFSU2_TR(0x43c808);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c80c:{NFSU2_TR(0x43c80c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c810:{NFSU2_TR(0x43c810);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c814:{NFSU2_TR(0x43c814);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c816:{NFSU2_TR(0x43c816);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43c818:{NFSU2_TR(0x43c818);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c81c:{NFSU2_TR(0x43c81c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c820:{NFSU2_TR(0x43c820);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c824:{NFSU2_TR(0x43c824);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c827:{NFSU2_TR(0x43c827);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c829:{NFSU2_TR(0x43c829);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c82b:{NFSU2_TR(0x43c82b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c82f:{NFSU2_TR(0x43c82f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c833:{NFSU2_TR(0x43c833);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c837:{NFSU2_TR(0x43c837);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c83b:{NFSU2_TR(0x43c83b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c83f:{NFSU2_TR(0x43c83f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c841:{NFSU2_TR(0x43c841);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c845:{NFSU2_TR(0x43c845);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c847:{NFSU2_TR(0x43c847);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B43c849:{NFSU2_TR(0x43c849);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c84d:{NFSU2_TR(0x43c84d);
__asm__ volatile(".byte 0xd8,0xce":::"memory");
}
B43c84f:{NFSU2_TR(0x43c84f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c851:{NFSU2_TR(0x43c851);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c855:{NFSU2_TR(0x43c855);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B43c857:{NFSU2_TR(0x43c857);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c859:{NFSU2_TR(0x43c859);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43c85f:{NFSU2_TR(0x43c85f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c863:{NFSU2_TR(0x43c863);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c867:{NFSU2_TR(0x43c867);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c86b:{NFSU2_TR(0x43c86b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c86d:{NFSU2_TR(0x43c86d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43c86f:{NFSU2_TR(0x43c86f);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c871:{NFSU2_TR(0x43c871);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c875:{NFSU2_TR(0x43c875);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c877:{NFSU2_TR(0x43c877);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c879:{NFSU2_TR(0x43c879);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c87d:{NFSU2_TR(0x43c87d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c87f:{NFSU2_TR(0x43c87f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c883:{NFSU2_TR(0x43c883);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c886:{NFSU2_TR(0x43c886);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43c888:{NFSU2_TR(0x43c888);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c88a:{NFSU2_TR(0x43c88a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c88e:{NFSU2_TR(0x43c88e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c890:{NFSU2_TR(0x43c890);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c892:{NFSU2_TR(0x43c892);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c896:{NFSU2_TR(0x43c896);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c89a:{NFSU2_TR(0x43c89a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c89d:{NFSU2_TR(0x43c89d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c8a1:{NFSU2_TR(0x43c8a1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c8a5:{NFSU2_TR(0x43c8a5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c8a7:{NFSU2_TR(0x43c8a7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c8ab:{NFSU2_TR(0x43c8ab);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c8ae:{NFSU2_TR(0x43c8ae);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43c8b0:{NFSU2_TR(0x43c8b0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c8b4:{NFSU2_TR(0x43c8b4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c8b6:{NFSU2_TR(0x43c8b6);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c8b8:{NFSU2_TR(0x43c8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c8bb:{NFSU2_TR(0x43c8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c8be:{NFSU2_TR(0x43c8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43c8c5:{NFSU2_TR(0x43c8c5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c8c9:{NFSU2_TR(0x43c8c9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c8cd:{NFSU2_TR(0x43c8cd);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c8d0:{NFSU2_TR(0x43c8d0);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43c8d2:{NFSU2_TR(0x43c8d2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c8d6:{NFSU2_TR(0x43c8d6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c8d8:{NFSU2_TR(0x43c8d8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c8da:{NFSU2_TR(0x43c8da);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c8de:{NFSU2_TR(0x43c8de);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c8e0:{NFSU2_TR(0x43c8e0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c8e4:{NFSU2_TR(0x43c8e4);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B43c8e6:{NFSU2_TR(0x43c8e6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c8e9:{NFSU2_TR(0x43c8e9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c8ed:{NFSU2_TR(0x43c8ed);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c8f1:{NFSU2_TR(0x43c8f1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c8f5:{NFSU2_TR(0x43c8f5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c8f8:{NFSU2_TR(0x43c8f8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c8fc:{NFSU2_TR(0x43c8fc);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c8fe:{NFSU2_TR(0x43c8fe);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c902:{NFSU2_TR(0x43c902);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B43c904:{NFSU2_TR(0x43c904);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43c906:{NFSU2_TR(0x43c906);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c90a:{NFSU2_TR(0x43c90a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c90c:{NFSU2_TR(0x43c90c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c910:{NFSU2_TR(0x43c910);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c913:{NFSU2_TR(0x43c913);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c917:{NFSU2_TR(0x43c917);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B43c919:{NFSU2_TR(0x43c919);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c91d:{NFSU2_TR(0x43c91d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43c91f:{NFSU2_TR(0x43c91f);
__asm__ volatile(".byte 0xde,0xea":::"memory");
}
B43c921:{NFSU2_TR(0x43c921);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c923:{NFSU2_TR(0x43c923);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c927:{NFSU2_TR(0x43c927);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B43c929:{NFSU2_TR(0x43c929);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43c92c:{NFSU2_TR(0x43c92c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c930:{NFSU2_TR(0x43c930);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c934:{NFSU2_TR(0x43c934);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c938:{NFSU2_TR(0x43c938);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c93c:{NFSU2_TR(0x43c93c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c93e:{NFSU2_TR(0x43c93e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c942:{NFSU2_TR(0x43c942);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c946:{NFSU2_TR(0x43c946);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c948:{NFSU2_TR(0x43c948);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c94a:{NFSU2_TR(0x43c94a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c94d:{NFSU2_TR(0x43c94d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c951:{NFSU2_TR(0x43c951);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c955:{NFSU2_TR(0x43c955);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c959:{NFSU2_TR(0x43c959);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c95d:{NFSU2_TR(0x43c95d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c95f:{NFSU2_TR(0x43c95f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c963:{NFSU2_TR(0x43c963);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c967:{NFSU2_TR(0x43c967);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c969:{NFSU2_TR(0x43c969);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c96b:{NFSU2_TR(0x43c96b);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c96e:{NFSU2_TR(0x43c96e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c972:{NFSU2_TR(0x43c972);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c976:{NFSU2_TR(0x43c976);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c97a:{NFSU2_TR(0x43c97a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c97c:{NFSU2_TR(0x43c97c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c980:{NFSU2_TR(0x43c980);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43c984:{NFSU2_TR(0x43c984);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43c986:{NFSU2_TR(0x43c986);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43c988:{NFSU2_TR(0x43c988);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43c98b:{NFSU2_TR(0x43c98b);
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
B43c98e:{NFSU2_TR(0x43c98e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c990:L43c990:{c.instructions+=7;NFSU2_TR(0x43c990);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c994:{NFSU2_TR(0x43c994);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c998:{NFSU2_TR(0x43c998);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c99c:{NFSU2_TR(0x43c99c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c99d:{NFSU2_TR(0x43c99d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c99e:{NFSU2_TR(0x43c99e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43c99f:{NFSU2_TR(0x43c99f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43c9a4ull));
TAIL_STATIC(0x4013f0u,401);
}
B43c9a4:L43c9a4:{c.instructions+=2;NFSU2_TR(0x43c9a4);
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
B43c9a7:{NFSU2_TR(0x43c9a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43c9b0:L43c9b0:{c.instructions+=1;NFSU2_TR(0x43c9b0);
TAIL_STATIC(0x486f50u,486);
}
B43c9c0:L43c9c0:{c.instructions+=1;NFSU2_TR(0x43c9c0);
TAIL_STATIC(0x441000u,441);
}
B43c9d0:L43c9d0:{c.instructions+=64;NFSU2_TR(0x43c9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B43c9d3:{NFSU2_TR(0x43c9d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43c9d7:{NFSU2_TR(0x43c9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c9da:{NFSU2_TR(0x43c9da);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c9dd:{NFSU2_TR(0x43c9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c9e0:{NFSU2_TR(0x43c9e0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43c9e3:{NFSU2_TR(0x43c9e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c9e7:{NFSU2_TR(0x43c9e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43c9e9:{NFSU2_TR(0x43c9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c9ec:{NFSU2_TR(0x43c9ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B43c9f0:{NFSU2_TR(0x43c9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43c9f3:{NFSU2_TR(0x43c9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c9f7:{NFSU2_TR(0x43c9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43c9fa:{NFSU2_TR(0x43c9fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43c9fe:{NFSU2_TR(0x43c9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca01:{NFSU2_TR(0x43ca01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca05:{NFSU2_TR(0x43ca05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca08:{NFSU2_TR(0x43ca08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca0c:{NFSU2_TR(0x43ca0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca0f:{NFSU2_TR(0x43ca0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca13:{NFSU2_TR(0x43ca13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca16:{NFSU2_TR(0x43ca16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca1a:{NFSU2_TR(0x43ca1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca1d:{NFSU2_TR(0x43ca1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca21:{NFSU2_TR(0x43ca21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca24:{NFSU2_TR(0x43ca24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca28:{NFSU2_TR(0x43ca28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca2b:{NFSU2_TR(0x43ca2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca2f:{NFSU2_TR(0x43ca2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca32:{NFSU2_TR(0x43ca32);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca36:{NFSU2_TR(0x43ca36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43ca38:{NFSU2_TR(0x43ca38);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ca3c:{NFSU2_TR(0x43ca3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca40:{NFSU2_TR(0x43ca40);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ca43:{NFSU2_TR(0x43ca43);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca47:{NFSU2_TR(0x43ca47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43ca49:{NFSU2_TR(0x43ca49);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ca4c:{NFSU2_TR(0x43ca4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43ca50:{NFSU2_TR(0x43ca50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca53:{NFSU2_TR(0x43ca53);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca57:{NFSU2_TR(0x43ca57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca5a:{NFSU2_TR(0x43ca5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca5e:{NFSU2_TR(0x43ca5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca61:{NFSU2_TR(0x43ca61);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca65:{NFSU2_TR(0x43ca65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca68:{NFSU2_TR(0x43ca68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca6c:{NFSU2_TR(0x43ca6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca6f:{NFSU2_TR(0x43ca6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca73:{NFSU2_TR(0x43ca73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca76:{NFSU2_TR(0x43ca76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca7a:{NFSU2_TR(0x43ca7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca7d:{NFSU2_TR(0x43ca7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca81:{NFSU2_TR(0x43ca81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca84:{NFSU2_TR(0x43ca84);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca88:{NFSU2_TR(0x43ca88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca8b:{NFSU2_TR(0x43ca8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca8f:{NFSU2_TR(0x43ca8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca92:{NFSU2_TR(0x43ca92);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ca96:{NFSU2_TR(0x43ca96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ca99:{NFSU2_TR(0x43ca99);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ca9d:{NFSU2_TR(0x43ca9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43caa0:{NFSU2_TR(0x43caa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43caa3:{NFSU2_TR(0x43caa3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43caa6:{NFSU2_TR(0x43caa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cab0:L43cab0:{c.instructions+=5;NFSU2_TR(0x43cab0);
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
B43cab5:{NFSU2_TR(0x43cab5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cab6:{NFSU2_TR(0x43cab6);
__builtin_memmove((R+24),(R+4),4);
}
B43cab8:{NFSU2_TR(0x43cab8);
u8 U[4];
w4(U+0,u32(0x786dbcull));
s4(u32(r4(R+24)),r4(U+0));
}
B43cabe:{NFSU2_TR(0x43cabe);
if(r1(R+518)){{goto L43cac9;}}
}
B43cac0:L43cac0:{c.instructions+=2;NFSU2_TR(0x43cac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cac1:{NFSU2_TR(0x43cac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43cac6ull));
TAIL_STATIC(0x575630u,575);
}
B43cac6:L43cac6:{c.instructions+=1;NFSU2_TR(0x43cac6);
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
B43cac9:L43cac9:{c.instructions+=3;NFSU2_TR(0x43cac9);
__builtin_memmove((R+0),(R+24),4);
}
B43cacb:{NFSU2_TR(0x43cacb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cacc:{NFSU2_TR(0x43cacc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cad0:L43cad0:{c.instructions+=2;NFSU2_TR(0x43cad0);
u8 U[4];
w4(U+0,u32(0x786dbcull));
s4(u32(r4(R+4)),r4(U+0));
}
B43cad6:{NFSU2_TR(0x43cad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cae0:L43cae0:{c.instructions+=10;NFSU2_TR(0x43cae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cae4:{NFSU2_TR(0x43cae4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B43cae8:{NFSU2_TR(0x43cae8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B43caea:{NFSU2_TR(0x43caea);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43caee:{NFSU2_TR(0x43caee);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B43caf2:{NFSU2_TR(0x43caf2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B43caf4:{NFSU2_TR(0x43caf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B43caf6:{NFSU2_TR(0x43caf6);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B43caf8:{NFSU2_TR(0x43caf8);
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
B43caf9:{NFSU2_TR(0x43caf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cb00:L43cb00:{c.instructions+=4;NFSU2_TR(0x43cb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cb04:{NFSU2_TR(0x43cb04);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cb08:{NFSU2_TR(0x43cb08);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82802cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43cb0f:{NFSU2_TR(0x43cb0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cb10:L43cb10:{c.instructions+=2;NFSU2_TR(0x43cb10);
__builtin_memmove((R+0),gp(0x828504),4);
}
B43cb15:{NFSU2_TR(0x43cb15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cb20:L43cb20:{c.instructions+=7;NFSU2_TR(0x43cb20);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43cb24:{NFSU2_TR(0x43cb24);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43cb28:{NFSU2_TR(0x43cb28);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B43cb2c:{NFSU2_TR(0x43cb2c);
__builtin_memmove(gp(0x7eb3f0),(R+0),1);
}
B43cb31:{NFSU2_TR(0x43cb31);
__builtin_memmove(gp(0x7eb3f1),(R+4),1);
}
B43cb37:{NFSU2_TR(0x43cb37);
__builtin_memmove(gp(0x7eb3f2),(R+8),1);
}
B43cb3d:{NFSU2_TR(0x43cb3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cb40:L43cb40:{c.instructions+=7;NFSU2_TR(0x43cb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cb44:{NFSU2_TR(0x43cb44);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43cb47:{NFSU2_TR(0x43cb47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cb48:{NFSU2_TR(0x43cb48);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43cb4a:{NFSU2_TR(0x43cb4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cb4e:{NFSU2_TR(0x43cb4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cb4f:{NFSU2_TR(0x43cb4f);
if(r1(R+518)){{goto L43cb9a;}}
}
B43cb51:L43cb51:{c.instructions+=2;NFSU2_TR(0x43cb51);
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
B43cb53:{NFSU2_TR(0x43cb53);
if(r1(R+518)){{goto L43cbbf;}}
}
B43cb55:L43cb55:{c.instructions+=6;NFSU2_TR(0x43cb55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43cb59:{NFSU2_TR(0x43cb59);
__builtin_memmove((R+24),gp(0x828514),4);
}
B43cb5f:{NFSU2_TR(0x43cb5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cb60:{NFSU2_TR(0x43cb60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cb61:{NFSU2_TR(0x43cb61);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43cb65:{NFSU2_TR(0x43cb65);
__builtin_memmove((R+20),(R+4),4);
}
B43cb67:L43cb67:{c.instructions+=4;NFSU2_TR(0x43cb67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B43cb6a:{NFSU2_TR(0x43cb6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43cb6c:{NFSU2_TR(0x43cb6c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43cb6e:{NFSU2_TR(0x43cb6e);
if(r1(R+518)){{goto L43cb7c;}}
}
B43cb70:L43cb70:{c.instructions+=4;NFSU2_TR(0x43cb70);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x828178ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43cb76:{NFSU2_TR(0x43cb76);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43cb77:{NFSU2_TR(0x43cb77);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7full))));
}
B43cb7a:{NFSU2_TR(0x43cb7a);
{goto L43cb86;}
}
B43cb7c:L43cb7c:{c.instructions+=3;NFSU2_TR(0x43cb7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43cb7e:{NFSU2_TR(0x43cb7e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43cb80:{NFSU2_TR(0x43cb80);
if(r1(R+518)){{goto L43cb86;}}
}
B43cb82:L43cb82:{c.instructions+=2;NFSU2_TR(0x43cb82);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B43cb84:{NFSU2_TR(0x43cb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B43cb86:L43cb86:{c.instructions+=6;NFSU2_TR(0x43cb86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43cb88:{NFSU2_TR(0x43cb88);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43cb89:{NFSU2_TR(0x43cb89);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B43cb8a:{NFSU2_TR(0x43cb8a);
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
B43cb8b:{NFSU2_TR(0x43cb8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43cb8d:{NFSU2_TR(0x43cb8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43cb67u);}goto L43cb67;}}
}
B43cb8f:L43cb8f:{c.instructions+=6;NFSU2_TR(0x43cb8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43cb90:{NFSU2_TR(0x43cb90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43cb91:{NFSU2_TR(0x43cb91);
__builtin_memmove(gp(0x828514),(R+24),4);
}
B43cb97:{NFSU2_TR(0x43cb97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cb98:{NFSU2_TR(0x43cb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43cb99:{NFSU2_TR(0x43cb99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cb9a:L43cb9a:{c.instructions+=4;NFSU2_TR(0x43cb9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43cb9e:{NFSU2_TR(0x43cb9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+8)),r4(U+0));
}
B43cba0:{NFSU2_TR(0x43cba0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B43cba3:{NFSU2_TR(0x43cba3);
if(r1(R+518)){{goto L43cbbf;}}
}
B43cba5:L43cba5:{c.instructions+=2;NFSU2_TR(0x43cba5);
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
B43cba7:{NFSU2_TR(0x43cba7);
if(r1(R+518)){{goto L43cbbf;}}
}
B43cba9:L43cba9:{c.instructions+=3;NFSU2_TR(0x43cba9);
__builtin_memmove((R+24),(R+4),4);
}
B43cbab:{NFSU2_TR(0x43cbab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cbaf:{NFSU2_TR(0x43cbaf);
}
B43cbb0:L43cbb0:{c.instructions+=9;NFSU2_TR(0x43cbb0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+12),(U+0),1);
}
B43cbb2:{NFSU2_TR(0x43cbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43cbb4:{NFSU2_TR(0x43cbb4);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B43cbb6:{NFSU2_TR(0x43cbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B43cbb8:{NFSU2_TR(0x43cbb8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B43cbb9:{NFSU2_TR(0x43cbb9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43cbba:{NFSU2_TR(0x43cbba);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43cbbb:{NFSU2_TR(0x43cbbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43cbbd:{NFSU2_TR(0x43cbbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43cbb0u);}goto L43cbb0;}}
}
B43cbbf:L43cbbf:{c.instructions+=3;NFSU2_TR(0x43cbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cbc0:{NFSU2_TR(0x43cbc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43cbc1:{NFSU2_TR(0x43cbc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cbd0:L43cbd0:{c.instructions+=9;NFSU2_TR(0x43cbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cbd4:{NFSU2_TR(0x43cbd4);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cbd7:{NFSU2_TR(0x43cbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B43cbda:{NFSU2_TR(0x43cbda);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43cbdc:{NFSU2_TR(0x43cbdc);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43cbdf:{NFSU2_TR(0x43cbdf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43cbe5:{NFSU2_TR(0x43cbe5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43cbe7:{NFSU2_TR(0x43cbe7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43cbea:{NFSU2_TR(0x43cbea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43cc2f;}}
}
B43cbec:L43cbec:{c.instructions+=22;NFSU2_TR(0x43cbec);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43cbf2:{NFSU2_TR(0x43cbf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cbf6:{NFSU2_TR(0x43cbf6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43cbf8:{NFSU2_TR(0x43cbf8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cbfe:{NFSU2_TR(0x43cbfe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cc00:{NFSU2_TR(0x43cc00);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cc03:{NFSU2_TR(0x43cc03);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43cc09:{NFSU2_TR(0x43cc09);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc0c:{NFSU2_TR(0x43cc0c);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43cc0f:{NFSU2_TR(0x43cc0f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cc11:{NFSU2_TR(0x43cc11);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cc13:{NFSU2_TR(0x43cc13);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc16:{NFSU2_TR(0x43cc16);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43cc19:{NFSU2_TR(0x43cc19);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cc1b:{NFSU2_TR(0x43cc1b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cc1e:{NFSU2_TR(0x43cc1e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc21:{NFSU2_TR(0x43cc21);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43cc24:{NFSU2_TR(0x43cc24);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cc26:{NFSU2_TR(0x43cc26);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cc29:{NFSU2_TR(0x43cc29);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cc2b:{NFSU2_TR(0x43cc2b);
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
B43cc2e:{NFSU2_TR(0x43cc2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cc2f:L43cc2f:{c.instructions+=10;NFSU2_TR(0x43cc2f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cc31:{NFSU2_TR(0x43cc31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cc32:{NFSU2_TR(0x43cc32);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc35:{NFSU2_TR(0x43cc35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cc36:{NFSU2_TR(0x43cc36);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43cc38:{NFSU2_TR(0x43cc38);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43cc3a:{NFSU2_TR(0x43cc3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cc3b:{NFSU2_TR(0x43cc3b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43cc3d:{NFSU2_TR(0x43cc3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43cc40:{NFSU2_TR(0x43cc40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43cc47;}}
}
B43cc42:L43cc42:{c.instructions+=1;NFSU2_TR(0x43cc42);
w4(R+24,u32(0x1ull));
}
B43cc47:L43cc47:{c.instructions+=6;NFSU2_TR(0x43cc47);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc4a:{NFSU2_TR(0x43cc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43cc4d:{NFSU2_TR(0x43cc4d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43cc50:{NFSU2_TR(0x43cc50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43cc52:{NFSU2_TR(0x43cc52);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43cc55:{NFSU2_TR(0x43cc55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43cc5c;}}
}
B43cc57:L43cc57:{c.instructions+=1;NFSU2_TR(0x43cc57);
w4(R+24,u32(0x2ull));
}
B43cc5c:L43cc5c:{c.instructions+=24;NFSU2_TR(0x43cc5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43cc5f:{NFSU2_TR(0x43cc5f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43cc60:{NFSU2_TR(0x43cc60);
w4(R+28,u32(0x3ull));
}
B43cc65:{NFSU2_TR(0x43cc65);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43cc65);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43cc65);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43cc67:{NFSU2_TR(0x43cc67);
w4(R+12,u32(0x3ull));
}
B43cc6c:{NFSU2_TR(0x43cc6c);
__builtin_memmove((R+28),(R+8),4);
}
B43cc6e:{NFSU2_TR(0x43cc6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43cc71:{NFSU2_TR(0x43cc71);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43cc72:{NFSU2_TR(0x43cc72);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43cc72);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43cc72);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43cc74:{NFSU2_TR(0x43cc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43cc77:{NFSU2_TR(0x43cc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B43cc7a:{NFSU2_TR(0x43cc7a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc7d:{NFSU2_TR(0x43cc7d);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43cc80:{NFSU2_TR(0x43cc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43cc83:{NFSU2_TR(0x43cc83);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43cc86:{NFSU2_TR(0x43cc86);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43cc8c:{NFSU2_TR(0x43cc8c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43cc8e:{NFSU2_TR(0x43cc8e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cc94:{NFSU2_TR(0x43cc94);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cc96:{NFSU2_TR(0x43cc96);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cc9a:{NFSU2_TR(0x43cc9a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43cca0:{NFSU2_TR(0x43cca0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43cca2:{NFSU2_TR(0x43cca2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43cca5:{NFSU2_TR(0x43cca5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43ccad;}}
}
B43cca7:L43cca7:{c.instructions+=1;NFSU2_TR(0x43cca7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43ccad:L43ccad:{c.instructions+=33;NFSU2_TR(0x43ccad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43ccb0:{NFSU2_TR(0x43ccb0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ccb3:{NFSU2_TR(0x43ccb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B43ccb6:{NFSU2_TR(0x43ccb6);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43ccb9:{NFSU2_TR(0x43ccb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43ccbc:{NFSU2_TR(0x43ccbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B43ccbf:{NFSU2_TR(0x43ccbf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ccc1:{NFSU2_TR(0x43ccc1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ccc5:{NFSU2_TR(0x43ccc5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ccc8:{NFSU2_TR(0x43ccc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43cccb:{NFSU2_TR(0x43cccb);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43ccce:{NFSU2_TR(0x43ccce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B43ccd1:{NFSU2_TR(0x43ccd1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ccd3:{NFSU2_TR(0x43ccd3);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ccd7:{NFSU2_TR(0x43ccd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ccd8:{NFSU2_TR(0x43ccd8);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ccdb:{NFSU2_TR(0x43ccdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ccdf:{NFSU2_TR(0x43ccdf);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43cce2:{NFSU2_TR(0x43cce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cce3:{NFSU2_TR(0x43cce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43cce4:{NFSU2_TR(0x43cce4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cce6:{NFSU2_TR(0x43cce6);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ccea:{NFSU2_TR(0x43ccea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ccee:{NFSU2_TR(0x43ccee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ccf2:{NFSU2_TR(0x43ccf2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ccf4:{NFSU2_TR(0x43ccf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ccf7:{NFSU2_TR(0x43ccf7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ccfb:{NFSU2_TR(0x43ccfb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ccff:{NFSU2_TR(0x43ccff);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cd01:{NFSU2_TR(0x43cd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cd04:{NFSU2_TR(0x43cd04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cd07:{NFSU2_TR(0x43cd07);
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
B43cd0a:{NFSU2_TR(0x43cd0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cd10:L43cd10:{c.instructions+=7;NFSU2_TR(0x43cd10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cd14:{NFSU2_TR(0x43cd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cd17:{NFSU2_TR(0x43cd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B43cd1a:{NFSU2_TR(0x43cd1a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B43cd1c:{NFSU2_TR(0x43cd1c);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B43cd1e:{NFSU2_TR(0x43cd1e);
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
B43cd1f:{NFSU2_TR(0x43cd1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cd20:L43cd20:{c.instructions+=4;NFSU2_TR(0x43cd20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cd24:{NFSU2_TR(0x43cd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cd27:{NFSU2_TR(0x43cd27);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43cd2a:{NFSU2_TR(0x43cd2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cd30:L43cd30:{c.instructions+=3;NFSU2_TR(0x43cd30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cd34:{NFSU2_TR(0x43cd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cd37:{NFSU2_TR(0x43cd37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cd40:L43cd40:{c.instructions+=2;NFSU2_TR(0x43cd40);
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
B43cd42:{NFSU2_TR(0x43cd42);
if(r1(R+518)){{goto L43cd7d;}}
}
B43cd44:L43cd44:{c.instructions+=2;NFSU2_TR(0x43cd44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cd45:{NFSU2_TR(0x43cd45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cd46:L43cd46:{c.instructions+=5;NFSU2_TR(0x43cd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43cd49:{NFSU2_TR(0x43cd49);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43cd4b:{NFSU2_TR(0x43cd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43cd4e:{NFSU2_TR(0x43cd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43cd55:{NFSU2_TR(0x43cd55);
if(r1(R+518)){{goto L43cd74;}}
}
B43cd57:L43cd57:{c.instructions+=5;NFSU2_TR(0x43cd57);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B43cd58:{NFSU2_TR(0x43cd58);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43cd5a:{NFSU2_TR(0x43cd5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43cd5d:{NFSU2_TR(0x43cd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cd60:{NFSU2_TR(0x43cd60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43cd6e;}}
}
B43cd62:L43cd62:{c.instructions+=1;NFSU2_TR(0x43cd62);
__builtin_memmove((R+24),(R+8),4);
}
B43cd64:L43cd64:{c.instructions+=5;NFSU2_TR(0x43cd64);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B43cd65:{NFSU2_TR(0x43cd65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43cd68:{NFSU2_TR(0x43cd68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43cd6a:{NFSU2_TR(0x43cd6a);
__builtin_memmove((R+0),(R+8),4);
}
B43cd6c:{NFSU2_TR(0x43cd6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43cd64u);}goto L43cd64;}}
}
B43cd6e:L43cd6e:{c.instructions+=1;NFSU2_TR(0x43cd6e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43cd74:L43cd74:{c.instructions+=3;NFSU2_TR(0x43cd74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cd77:{NFSU2_TR(0x43cd77);
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
B43cd79:{NFSU2_TR(0x43cd79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43cd46u);}goto L43cd46;}}
}
B43cd7b:L43cd7b:{c.instructions+=2;NFSU2_TR(0x43cd7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43cd7c:{NFSU2_TR(0x43cd7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cd7d:L43cd7d:{c.instructions+=1;NFSU2_TR(0x43cd7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cd80:L43cd80:{c.instructions+=6;NFSU2_TR(0x43cd80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cd81:{NFSU2_TR(0x43cd81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cd82:{NFSU2_TR(0x43cd82);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43cd84:{NFSU2_TR(0x43cd84);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43cd86:{NFSU2_TR(0x43cd86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cd87:{NFSU2_TR(0x43cd87);
if(r1(R+518)){{goto L43cdb0;}}
}
B43cd89:L43cd89:{c.instructions+=2;NFSU2_TR(0x43cd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43cd8c:{NFSU2_TR(0x43cd8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43cd90:L43cd90:{c.instructions+=7;NFSU2_TR(0x43cd90);
__builtin_memmove((R+0),(R+12),4);
}
B43cd92:{NFSU2_TR(0x43cd92);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B43cd94:{NFSU2_TR(0x43cd94);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B43cd97:{NFSU2_TR(0x43cd97);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43cd99:{NFSU2_TR(0x43cd99);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43cd99);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43cd99);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B43cd9b:{NFSU2_TR(0x43cd9b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43cd9d:{NFSU2_TR(0x43cd9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43cda4;}}
}
B43cd9f:L43cd9f:{c.instructions+=2;NFSU2_TR(0x43cd9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B43cda2:{NFSU2_TR(0x43cda2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43cdb9;}}
}
B43cda4:L43cda4:{c.instructions+=5;NFSU2_TR(0x43cda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43cda7:{NFSU2_TR(0x43cda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cdaa:{NFSU2_TR(0x43cdaa);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B43cdac:{NFSU2_TR(0x43cdac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43cdae:{NFSU2_TR(0x43cdae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43cd90u);}goto L43cd90;}}
}
B43cdb0:L43cdb0:{c.instructions+=5;NFSU2_TR(0x43cdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43cdb1:{NFSU2_TR(0x43cdb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cdb2:{NFSU2_TR(0x43cdb2);
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
B43cdb5:{NFSU2_TR(0x43cdb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43cdb6:{NFSU2_TR(0x43cdb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cdb9:L43cdb9:{c.instructions+=5;NFSU2_TR(0x43cdb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43cdba:{NFSU2_TR(0x43cdba);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43cdbc:{NFSU2_TR(0x43cdbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cdbd:{NFSU2_TR(0x43cdbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43cdbe:{NFSU2_TR(0x43cdbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cdd0:L43cdd0:{c.instructions+=5;NFSU2_TR(0x43cdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43cdd3:{NFSU2_TR(0x43cdd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cdd6:{NFSU2_TR(0x43cdd6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43cdd7:{NFSU2_TR(0x43cdd7);
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
B43cdd9:{NFSU2_TR(0x43cdd9);
if(r1(R+518)){{goto L43cded;}}
}
B43cddb:L43cddb:{c.instructions+=4;NFSU2_TR(0x43cddb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cddc:{NFSU2_TR(0x43cddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43cdde:{NFSU2_TR(0x43cdde);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43cde1:{NFSU2_TR(0x43cde1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43cde6;}}
}
B43cde3:L43cde3:{c.instructions+=1;NFSU2_TR(0x43cde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cde6:L43cde6:{c.instructions+=3;NFSU2_TR(0x43cde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cde9:{NFSU2_TR(0x43cde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cdec:{NFSU2_TR(0x43cdec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43cded:L43cded:{c.instructions+=1;NFSU2_TR(0x43cded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cdf0:L43cdf0:{c.instructions+=10;NFSU2_TR(0x43cdf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cdf3:{NFSU2_TR(0x43cdf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43cdf7:{NFSU2_TR(0x43cdf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43cdf8:{NFSU2_TR(0x43cdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43cdfb:{NFSU2_TR(0x43cdfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43cdfd:{NFSU2_TR(0x43cdfd);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43cdfe:{NFSU2_TR(0x43cdfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ce01:{NFSU2_TR(0x43ce01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ce04:{NFSU2_TR(0x43ce04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43ce05:{NFSU2_TR(0x43ce05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ce10:L43ce10:{c.instructions+=21;NFSU2_TR(0x43ce10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ce14:{NFSU2_TR(0x43ce14);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ce18:{NFSU2_TR(0x43ce18);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce1a:{NFSU2_TR(0x43ce1a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43ce1c:{NFSU2_TR(0x43ce1c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce1f:{NFSU2_TR(0x43ce1f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43ce22:{NFSU2_TR(0x43ce22);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce25:{NFSU2_TR(0x43ce25);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43ce28:{NFSU2_TR(0x43ce28);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43ce2a:{NFSU2_TR(0x43ce2a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ce2c:{NFSU2_TR(0x43ce2c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43ce2e:{NFSU2_TR(0x43ce2e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43ce30:{NFSU2_TR(0x43ce30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43ce32:{NFSU2_TR(0x43ce32);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B43ce34:{NFSU2_TR(0x43ce34);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43ce36:{NFSU2_TR(0x43ce36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43ce38:{NFSU2_TR(0x43ce38);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43ce3a:{NFSU2_TR(0x43ce3a);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B43ce3c:{NFSU2_TR(0x43ce3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ce3e:{NFSU2_TR(0x43ce3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ce40:{NFSU2_TR(0x43ce40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ce50:L43ce50:{c.instructions+=17;NFSU2_TR(0x43ce50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ce54:{NFSU2_TR(0x43ce54);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce56:{NFSU2_TR(0x43ce56);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce59:{NFSU2_TR(0x43ce59);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43ce5b:{NFSU2_TR(0x43ce5b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ce5d:{NFSU2_TR(0x43ce5d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43ce5f:{NFSU2_TR(0x43ce5f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43ce61:{NFSU2_TR(0x43ce61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43ce63:{NFSU2_TR(0x43ce63);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43ce65:{NFSU2_TR(0x43ce65);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B43ce67:{NFSU2_TR(0x43ce67);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ce69:{NFSU2_TR(0x43ce69);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43ce6d:{NFSU2_TR(0x43ce6d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43ce73:{NFSU2_TR(0x43ce73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ce75:{NFSU2_TR(0x43ce75);
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
B43ce78:{NFSU2_TR(0x43ce78);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ce7c:{NFSU2_TR(0x43ce7c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43ce99;}}
}
B43ce7e:L43ce7e:{c.instructions+=10;NFSU2_TR(0x43ce7e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce81:{NFSU2_TR(0x43ce81);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ce87:{NFSU2_TR(0x43ce87);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43ce8b:{NFSU2_TR(0x43ce8b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43ce8d:{NFSU2_TR(0x43ce8d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43ce8f:{NFSU2_TR(0x43ce8f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ce91:{NFSU2_TR(0x43ce91);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43ce93:{NFSU2_TR(0x43ce93);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43ce96:{NFSU2_TR(0x43ce96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43ce98:{NFSU2_TR(0x43ce98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ce99:L43ce99:{c.instructions+=3;NFSU2_TR(0x43ce99);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43ce9f:{NFSU2_TR(0x43ce9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43cea6:{NFSU2_TR(0x43cea6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ceb0:L43ceb0:{c.instructions+=18;NFSU2_TR(0x43ceb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ceb4:{NFSU2_TR(0x43ceb4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ceb6:{NFSU2_TR(0x43ceb6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ceb9:{NFSU2_TR(0x43ceb9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43cebb:{NFSU2_TR(0x43cebb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cebd:{NFSU2_TR(0x43cebd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43cebf:{NFSU2_TR(0x43cebf);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43cec1:{NFSU2_TR(0x43cec1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43cec3:{NFSU2_TR(0x43cec3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43cec5:{NFSU2_TR(0x43cec5);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B43cec7:{NFSU2_TR(0x43cec7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cec9:{NFSU2_TR(0x43cec9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43cecd:{NFSU2_TR(0x43cecd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43ced1:{NFSU2_TR(0x43ced1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43ced7:{NFSU2_TR(0x43ced7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ced9:{NFSU2_TR(0x43ced9);
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
B43cedc:{NFSU2_TR(0x43cedc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cee0:{NFSU2_TR(0x43cee0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43cefd;}}
}
B43cee2:L43cee2:{c.instructions+=10;NFSU2_TR(0x43cee2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cee5:{NFSU2_TR(0x43cee5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ceeb:{NFSU2_TR(0x43ceeb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43ceef:{NFSU2_TR(0x43ceef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43cef1:{NFSU2_TR(0x43cef1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43cef3:{NFSU2_TR(0x43cef3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cef5:{NFSU2_TR(0x43cef5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cef7:{NFSU2_TR(0x43cef7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cefa:{NFSU2_TR(0x43cefa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cefc:{NFSU2_TR(0x43cefc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cefd:L43cefd:{c.instructions+=3;NFSU2_TR(0x43cefd);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43cf03:{NFSU2_TR(0x43cf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43cf0a:{NFSU2_TR(0x43cf0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cf10:L43cf10:{c.instructions+=20;NFSU2_TR(0x43cf10);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cf14:{NFSU2_TR(0x43cf14);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf17:{NFSU2_TR(0x43cf17);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf1a:{NFSU2_TR(0x43cf1a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf1c:{NFSU2_TR(0x43cf1c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43cf1e:{NFSU2_TR(0x43cf1e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cf20:{NFSU2_TR(0x43cf20);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43cf22:{NFSU2_TR(0x43cf22);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43cf24:{NFSU2_TR(0x43cf24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43cf26:{NFSU2_TR(0x43cf26);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B43cf28:{NFSU2_TR(0x43cf28);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43cf2a:{NFSU2_TR(0x43cf2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43cf2c:{NFSU2_TR(0x43cf2c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43cf2e:{NFSU2_TR(0x43cf2e);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B43cf30:{NFSU2_TR(0x43cf30);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cf32:{NFSU2_TR(0x43cf32);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cf34:{NFSU2_TR(0x43cf34);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43cf3a:{NFSU2_TR(0x43cf3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43cf3c:{NFSU2_TR(0x43cf3c);
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
B43cf3f:{NFSU2_TR(0x43cf3f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43cf6c;}}
}
B43cf41:L43cf41:{c.instructions+=15;NFSU2_TR(0x43cf41);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43cf47:{NFSU2_TR(0x43cf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cf4a:{NFSU2_TR(0x43cf4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cf4e:{NFSU2_TR(0x43cf4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cf52:{NFSU2_TR(0x43cf52);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf55:{NFSU2_TR(0x43cf55);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43cf57:{NFSU2_TR(0x43cf57);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43cf59:{NFSU2_TR(0x43cf59);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cf5b:{NFSU2_TR(0x43cf5b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cf5d:{NFSU2_TR(0x43cf5d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cf60:{NFSU2_TR(0x43cf60);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf64:{NFSU2_TR(0x43cf64);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cf66:{NFSU2_TR(0x43cf66);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cf69:{NFSU2_TR(0x43cf69);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cf6b:{NFSU2_TR(0x43cf6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cf6c:L43cf6c:{c.instructions+=7;NFSU2_TR(0x43cf6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cf70:{NFSU2_TR(0x43cf70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cf72:{NFSU2_TR(0x43cf72);
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
B43cf74:{NFSU2_TR(0x43cf74);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43cf7a:{NFSU2_TR(0x43cf7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cf7d:{NFSU2_TR(0x43cf7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cf80:{NFSU2_TR(0x43cf80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cf90:L43cf90:{c.instructions+=21;NFSU2_TR(0x43cf90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43cf94:{NFSU2_TR(0x43cf94);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf97:{NFSU2_TR(0x43cf97);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf9a:{NFSU2_TR(0x43cf9a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cf9c:{NFSU2_TR(0x43cf9c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43cf9e:{NFSU2_TR(0x43cf9e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cfa0:{NFSU2_TR(0x43cfa0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43cfa2:{NFSU2_TR(0x43cfa2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43cfa4:{NFSU2_TR(0x43cfa4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43cfa6:{NFSU2_TR(0x43cfa6);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B43cfa8:{NFSU2_TR(0x43cfa8);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43cfaa:{NFSU2_TR(0x43cfaa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43cfac:{NFSU2_TR(0x43cfac);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43cfae:{NFSU2_TR(0x43cfae);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B43cfb0:{NFSU2_TR(0x43cfb0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cfb2:{NFSU2_TR(0x43cfb2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cfb4:{NFSU2_TR(0x43cfb4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B43cfb8:{NFSU2_TR(0x43cfb8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43cfbe:{NFSU2_TR(0x43cfbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43cfc0:{NFSU2_TR(0x43cfc0);
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
B43cfc3:{NFSU2_TR(0x43cfc3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43cff0;}}
}
B43cfc5:L43cfc5:{c.instructions+=15;NFSU2_TR(0x43cfc5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43cfcb:{NFSU2_TR(0x43cfcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cfce:{NFSU2_TR(0x43cfce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43cfd2:{NFSU2_TR(0x43cfd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cfd6:{NFSU2_TR(0x43cfd6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cfd9:{NFSU2_TR(0x43cfd9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43cfdb:{NFSU2_TR(0x43cfdb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43cfdd:{NFSU2_TR(0x43cfdd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cfdf:{NFSU2_TR(0x43cfdf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cfe1:{NFSU2_TR(0x43cfe1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cfe4:{NFSU2_TR(0x43cfe4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cfe8:{NFSU2_TR(0x43cfe8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43cfea:{NFSU2_TR(0x43cfea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cfed:{NFSU2_TR(0x43cfed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cfef:{NFSU2_TR(0x43cfef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43cff0:L43cff0:{c.instructions+=6;NFSU2_TR(0x43cff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43cff4:{NFSU2_TR(0x43cff4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43cff6:{NFSU2_TR(0x43cff6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43cffa:{NFSU2_TR(0x43cffa);
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
B43cffc:{NFSU2_TR(0x43cffc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43cffe:{NFSU2_TR(0x43cffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x43d001u,43d);
}
XIT:NFSU2_TR_EXIT(0x43c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
