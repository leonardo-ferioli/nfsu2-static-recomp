#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_641(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x63c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x63c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_63c(u8* __restrict R,Cpu& c);
u32 page_63c(Cpu& c){return body_63c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_63c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x63c001:goto L63c001;
case 0x63c003:c.instructions+=50;goto B63c003;
case 0x63c006:c.instructions+=49;goto B63c006;
case 0x63c009:c.instructions+=48;goto B63c009;
case 0x63c00b:c.instructions+=47;goto B63c00b;
case 0x63c011:c.instructions+=46;goto B63c011;
case 0x63c013:c.instructions+=45;goto B63c013;
case 0x63c019:c.instructions+=44;goto B63c019;
case 0x63c01b:c.instructions+=43;goto B63c01b;
case 0x63c01d:c.instructions+=42;goto B63c01d;
case 0x63c020:c.instructions+=41;goto B63c020;
case 0x63c022:c.instructions+=40;goto B63c022;
case 0x63c028:c.instructions+=39;goto B63c028;
case 0x63c02a:c.instructions+=38;goto B63c02a;
case 0x63c02d:c.instructions+=37;goto B63c02d;
case 0x63c030:c.instructions+=36;goto B63c030;
case 0x63c032:c.instructions+=35;goto B63c032;
case 0x63c034:c.instructions+=34;goto B63c034;
case 0x63c036:c.instructions+=33;goto B63c036;
case 0x63c03c:c.instructions+=32;goto B63c03c;
case 0x63c03f:c.instructions+=31;goto B63c03f;
case 0x63c041:c.instructions+=30;goto B63c041;
case 0x63c044:c.instructions+=29;goto B63c044;
case 0x63c046:c.instructions+=28;goto B63c046;
case 0x63c048:c.instructions+=27;goto B63c048;
case 0x63c04b:c.instructions+=26;goto B63c04b;
case 0x63c04d:c.instructions+=25;goto B63c04d;
case 0x63c04f:c.instructions+=24;goto B63c04f;
case 0x63c051:c.instructions+=23;goto B63c051;
case 0x63c053:c.instructions+=22;goto B63c053;
case 0x63c055:c.instructions+=21;goto B63c055;
case 0x63c057:c.instructions+=20;goto B63c057;
case 0x63c059:c.instructions+=19;goto B63c059;
case 0x63c05b:c.instructions+=18;goto B63c05b;
case 0x63c05e:c.instructions+=17;goto B63c05e;
case 0x63c05f:c.instructions+=16;goto B63c05f;
case 0x63c062:c.instructions+=15;goto B63c062;
case 0x63c065:c.instructions+=14;goto B63c065;
case 0x63c066:c.instructions+=13;goto B63c066;
case 0x63c068:c.instructions+=12;goto B63c068;
case 0x63c06b:c.instructions+=11;goto B63c06b;
case 0x63c06e:c.instructions+=10;goto B63c06e;
case 0x63c070:c.instructions+=9;goto B63c070;
case 0x63c073:c.instructions+=8;goto B63c073;
case 0x63c076:c.instructions+=7;goto B63c076;
case 0x63c078:c.instructions+=6;goto B63c078;
case 0x63c07a:c.instructions+=5;goto B63c07a;
case 0x63c07d:c.instructions+=4;goto B63c07d;
case 0x63c07f:c.instructions+=3;goto B63c07f;
case 0x63c081:c.instructions+=2;goto B63c081;
case 0x63c082:c.instructions+=1;goto B63c082;
case 0x63c085:goto L63c085;
case 0x63c087:c.instructions+=4;goto B63c087;
case 0x63c088:c.instructions+=3;goto B63c088;
case 0x63c08a:c.instructions+=2;goto B63c08a;
case 0x63c08c:c.instructions+=1;goto B63c08c;
case 0x63c091:goto L63c091;
case 0x63c094:c.instructions+=10;goto B63c094;
case 0x63c095:c.instructions+=9;goto B63c095;
case 0x63c096:c.instructions+=8;goto B63c096;
case 0x63c09a:c.instructions+=7;goto B63c09a;
case 0x63c09d:c.instructions+=6;goto B63c09d;
case 0x63c0a0:c.instructions+=5;goto B63c0a0;
case 0x63c0a3:c.instructions+=4;goto B63c0a3;
case 0x63c0a6:c.instructions+=3;goto B63c0a6;
case 0x63c0a9:c.instructions+=2;goto B63c0a9;
case 0x63c0ac:c.instructions+=1;goto B63c0ac;
case 0x63c0b2:goto L63c0b2;
case 0x63c0b3:c.instructions+=1;goto B63c0b3;
case 0x63c0b6:goto L63c0b6;
case 0x63c0b8:c.instructions+=28;goto B63c0b8;
case 0x63c0b9:c.instructions+=27;goto B63c0b9;
case 0x63c0bb:c.instructions+=26;goto B63c0bb;
case 0x63c0be:c.instructions+=25;goto B63c0be;
case 0x63c0c1:c.instructions+=24;goto B63c0c1;
case 0x63c0c3:c.instructions+=23;goto B63c0c3;
case 0x63c0c6:c.instructions+=22;goto B63c0c6;
case 0x63c0c8:c.instructions+=21;goto B63c0c8;
case 0x63c0c9:c.instructions+=20;goto B63c0c9;
case 0x63c0cc:c.instructions+=19;goto B63c0cc;
case 0x63c0cf:c.instructions+=18;goto B63c0cf;
case 0x63c0d1:c.instructions+=17;goto B63c0d1;
case 0x63c0d3:c.instructions+=16;goto B63c0d3;
case 0x63c0d6:c.instructions+=15;goto B63c0d6;
case 0x63c0d8:c.instructions+=14;goto B63c0d8;
case 0x63c0da:c.instructions+=13;goto B63c0da;
case 0x63c0dc:c.instructions+=12;goto B63c0dc;
case 0x63c0df:c.instructions+=11;goto B63c0df;
case 0x63c0e2:c.instructions+=10;goto B63c0e2;
case 0x63c0e5:c.instructions+=9;goto B63c0e5;
case 0x63c0e8:c.instructions+=8;goto B63c0e8;
case 0x63c0e9:c.instructions+=7;goto B63c0e9;
case 0x63c0ec:c.instructions+=6;goto B63c0ec;
case 0x63c0ef:c.instructions+=5;goto B63c0ef;
case 0x63c0f1:c.instructions+=4;goto B63c0f1;
case 0x63c0f4:c.instructions+=3;goto B63c0f4;
case 0x63c0f7:c.instructions+=2;goto B63c0f7;
case 0x63c0f8:c.instructions+=1;goto B63c0f8;
case 0x63c0fb:goto L63c0fb;
case 0x63c0fd:c.instructions+=4;goto B63c0fd;
case 0x63c0fe:c.instructions+=3;goto B63c0fe;
case 0x63c100:c.instructions+=2;goto B63c100;
case 0x63c102:c.instructions+=1;goto B63c102;
case 0x63c107:goto L63c107;
case 0x63c108:c.instructions+=1;goto B63c108;
case 0x63c10e:goto L63c10e;
case 0x63c114:goto L63c114;
case 0x63c116:c.instructions+=4;goto B63c116;
case 0x63c117:c.instructions+=3;goto B63c117;
case 0x63c119:c.instructions+=2;goto B63c119;
case 0x63c11b:c.instructions+=1;goto B63c11b;
case 0x63c120:goto L63c120;
case 0x63c121:c.instructions+=1;goto B63c121;
case 0x63c127:goto L63c127;
case 0x63c129:c.instructions+=4;goto B63c129;
case 0x63c12a:c.instructions+=3;goto B63c12a;
case 0x63c12c:c.instructions+=2;goto B63c12c;
case 0x63c12e:c.instructions+=1;goto B63c12e;
case 0x63c133:goto L63c133;
case 0x63c134:c.instructions+=1;goto B63c134;
case 0x63c13a:goto L63c13a;
case 0x63c140:goto L63c140;
case 0x63c142:c.instructions+=4;goto B63c142;
case 0x63c143:c.instructions+=3;goto B63c143;
case 0x63c145:c.instructions+=2;goto B63c145;
case 0x63c147:c.instructions+=1;goto B63c147;
case 0x63c14c:goto L63c14c;
case 0x63c14d:c.instructions+=1;goto B63c14d;
case 0x63c153:goto L63c153;
case 0x63c155:c.instructions+=4;goto B63c155;
case 0x63c156:c.instructions+=3;goto B63c156;
case 0x63c158:c.instructions+=2;goto B63c158;
case 0x63c15a:c.instructions+=1;goto B63c15a;
case 0x63c15f:goto L63c15f;
case 0x63c160:c.instructions+=1;goto B63c160;
case 0x63c166:goto L63c166;
case 0x63c16c:goto L63c16c;
case 0x63c16e:c.instructions+=25;goto B63c16e;
case 0x63c16f:c.instructions+=24;goto B63c16f;
case 0x63c171:c.instructions+=23;goto B63c171;
case 0x63c172:c.instructions+=22;goto B63c172;
case 0x63c173:c.instructions+=21;goto B63c173;
case 0x63c176:c.instructions+=20;goto B63c176;
case 0x63c179:c.instructions+=19;goto B63c179;
case 0x63c17c:c.instructions+=18;goto B63c17c;
case 0x63c17f:c.instructions+=17;goto B63c17f;
case 0x63c181:c.instructions+=16;goto B63c181;
case 0x63c183:c.instructions+=15;goto B63c183;
case 0x63c185:c.instructions+=14;goto B63c185;
case 0x63c188:c.instructions+=13;goto B63c188;
case 0x63c18b:c.instructions+=12;goto B63c18b;
case 0x63c18d:c.instructions+=11;goto B63c18d;
case 0x63c190:c.instructions+=10;goto B63c190;
case 0x63c193:c.instructions+=9;goto B63c193;
case 0x63c196:c.instructions+=8;goto B63c196;
case 0x63c199:c.instructions+=7;goto B63c199;
case 0x63c19b:c.instructions+=6;goto B63c19b;
case 0x63c19d:c.instructions+=5;goto B63c19d;
case 0x63c1a0:c.instructions+=4;goto B63c1a0;
case 0x63c1a3:c.instructions+=3;goto B63c1a3;
case 0x63c1a6:c.instructions+=2;goto B63c1a6;
case 0x63c1a7:c.instructions+=1;goto B63c1a7;
case 0x63c1aa:goto L63c1aa;
case 0x63c1ac:c.instructions+=4;goto B63c1ac;
case 0x63c1ad:c.instructions+=3;goto B63c1ad;
case 0x63c1af:c.instructions+=2;goto B63c1af;
case 0x63c1b1:c.instructions+=1;goto B63c1b1;
case 0x63c1b6:goto L63c1b6;
case 0x63c1b7:c.instructions+=1;goto B63c1b7;
case 0x63c1bd:goto L63c1bd;
case 0x63c1bf:c.instructions+=11;goto B63c1bf;
case 0x63c1c0:c.instructions+=10;goto B63c1c0;
case 0x63c1c2:c.instructions+=9;goto B63c1c2;
case 0x63c1c3:c.instructions+=8;goto B63c1c3;
case 0x63c1c4:c.instructions+=7;goto B63c1c4;
case 0x63c1c5:c.instructions+=6;goto B63c1c5;
case 0x63c1c8:c.instructions+=5;goto B63c1c8;
case 0x63c1c9:c.instructions+=4;goto B63c1c9;
case 0x63c1cc:c.instructions+=3;goto B63c1cc;
case 0x63c1ce:c.instructions+=2;goto B63c1ce;
case 0x63c1d0:c.instructions+=1;goto B63c1d0;
case 0x63c1d2:goto L63c1d2;
case 0x63c1d5:c.instructions+=2;goto B63c1d5;
case 0x63c1d8:c.instructions+=1;goto B63c1d8;
case 0x63c1d9:goto L63c1d9;
case 0x63c1dc:c.instructions+=19;goto B63c1dc;
case 0x63c1df:c.instructions+=18;goto B63c1df;
case 0x63c1e1:c.instructions+=17;goto B63c1e1;
case 0x63c1e3:c.instructions+=16;goto B63c1e3;
case 0x63c1e5:c.instructions+=15;goto B63c1e5;
case 0x63c1e8:c.instructions+=14;goto B63c1e8;
case 0x63c1eb:c.instructions+=13;goto B63c1eb;
case 0x63c1ee:c.instructions+=12;goto B63c1ee;
case 0x63c1f0:c.instructions+=11;goto B63c1f0;
case 0x63c1f3:c.instructions+=10;goto B63c1f3;
case 0x63c1f6:c.instructions+=9;goto B63c1f6;
case 0x63c1f9:c.instructions+=8;goto B63c1f9;
case 0x63c1fb:c.instructions+=7;goto B63c1fb;
case 0x63c1fd:c.instructions+=6;goto B63c1fd;
case 0x63c200:c.instructions+=5;goto B63c200;
case 0x63c203:c.instructions+=4;goto B63c203;
case 0x63c206:c.instructions+=3;goto B63c206;
case 0x63c209:c.instructions+=2;goto B63c209;
case 0x63c20a:c.instructions+=1;goto B63c20a;
case 0x63c20c:goto L63c20c;
case 0x63c20d:goto L63c20d;
case 0x63c20e:c.instructions+=3;goto B63c20e;
case 0x63c20f:c.instructions+=2;goto B63c20f;
case 0x63c210:c.instructions+=1;goto B63c210;
case 0x63c213:goto L63c213;
case 0x63c215:c.instructions+=4;goto B63c215;
case 0x63c216:c.instructions+=3;goto B63c216;
case 0x63c218:c.instructions+=2;goto B63c218;
case 0x63c21a:c.instructions+=1;goto B63c21a;
case 0x63c21f:goto L63c21f;
case 0x63c220:c.instructions+=1;goto B63c220;
case 0x63c226:goto L63c226;
case 0x63c22c:goto L63c22c;
case 0x63c22e:c.instructions+=4;goto B63c22e;
case 0x63c22f:c.instructions+=3;goto B63c22f;
case 0x63c231:c.instructions+=2;goto B63c231;
case 0x63c233:c.instructions+=1;goto B63c233;
case 0x63c238:goto L63c238;
case 0x63c23b:c.instructions+=8;goto B63c23b;
case 0x63c23c:c.instructions+=7;goto B63c23c;
case 0x63c23f:c.instructions+=6;goto B63c23f;
case 0x63c242:c.instructions+=5;goto B63c242;
case 0x63c245:c.instructions+=4;goto B63c245;
case 0x63c248:c.instructions+=3;goto B63c248;
case 0x63c24b:c.instructions+=2;goto B63c24b;
case 0x63c24e:c.instructions+=1;goto B63c24e;
case 0x63c254:goto L63c254;
case 0x63c255:c.instructions+=1;goto B63c255;
case 0x63c258:goto L63c258;
case 0x63c25a:c.instructions+=71;goto B63c25a;
case 0x63c25b:c.instructions+=70;goto B63c25b;
case 0x63c25d:c.instructions+=69;goto B63c25d;
case 0x63c25e:c.instructions+=68;goto B63c25e;
case 0x63c25f:c.instructions+=67;goto B63c25f;
case 0x63c262:c.instructions+=66;goto B63c262;
case 0x63c265:c.instructions+=65;goto B63c265;
case 0x63c268:c.instructions+=64;goto B63c268;
case 0x63c26b:c.instructions+=63;goto B63c26b;
case 0x63c26e:c.instructions+=62;goto B63c26e;
case 0x63c271:c.instructions+=61;goto B63c271;
case 0x63c272:c.instructions+=60;goto B63c272;
case 0x63c274:c.instructions+=59;goto B63c274;
case 0x63c277:c.instructions+=58;goto B63c277;
case 0x63c278:c.instructions+=57;goto B63c278;
case 0x63c27b:c.instructions+=56;goto B63c27b;
case 0x63c27d:c.instructions+=55;goto B63c27d;
case 0x63c27f:c.instructions+=54;goto B63c27f;
case 0x63c281:c.instructions+=53;goto B63c281;
case 0x63c287:c.instructions+=52;goto B63c287;
case 0x63c289:c.instructions+=51;goto B63c289;
case 0x63c28b:c.instructions+=50;goto B63c28b;
case 0x63c291:c.instructions+=49;goto B63c291;
case 0x63c294:c.instructions+=48;goto B63c294;
case 0x63c296:c.instructions+=47;goto B63c296;
case 0x63c298:c.instructions+=46;goto B63c298;
case 0x63c29a:c.instructions+=45;goto B63c29a;
case 0x63c29d:c.instructions+=44;goto B63c29d;
case 0x63c2a0:c.instructions+=43;goto B63c2a0;
case 0x63c2a2:c.instructions+=42;goto B63c2a2;
case 0x63c2a5:c.instructions+=41;goto B63c2a5;
case 0x63c2a7:c.instructions+=40;goto B63c2a7;
case 0x63c2a9:c.instructions+=39;goto B63c2a9;
case 0x63c2ac:c.instructions+=38;goto B63c2ac;
case 0x63c2ae:c.instructions+=37;goto B63c2ae;
case 0x63c2b1:c.instructions+=36;goto B63c2b1;
case 0x63c2b3:c.instructions+=35;goto B63c2b3;
case 0x63c2b5:c.instructions+=34;goto B63c2b5;
case 0x63c2b8:c.instructions+=33;goto B63c2b8;
case 0x63c2ba:c.instructions+=32;goto B63c2ba;
case 0x63c2bc:c.instructions+=31;goto B63c2bc;
case 0x63c2be:c.instructions+=30;goto B63c2be;
case 0x63c2c0:c.instructions+=29;goto B63c2c0;
case 0x63c2c2:c.instructions+=28;goto B63c2c2;
case 0x63c2c4:c.instructions+=27;goto B63c2c4;
case 0x63c2c6:c.instructions+=26;goto B63c2c6;
case 0x63c2c9:c.instructions+=25;goto B63c2c9;
case 0x63c2cc:c.instructions+=24;goto B63c2cc;
case 0x63c2cf:c.instructions+=23;goto B63c2cf;
case 0x63c2d1:c.instructions+=22;goto B63c2d1;
case 0x63c2d4:c.instructions+=21;goto B63c2d4;
case 0x63c2d7:c.instructions+=20;goto B63c2d7;
case 0x63c2d9:c.instructions+=19;goto B63c2d9;
case 0x63c2dc:c.instructions+=18;goto B63c2dc;
case 0x63c2df:c.instructions+=17;goto B63c2df;
case 0x63c2e1:c.instructions+=16;goto B63c2e1;
case 0x63c2e4:c.instructions+=15;goto B63c2e4;
case 0x63c2e7:c.instructions+=14;goto B63c2e7;
case 0x63c2e8:c.instructions+=13;goto B63c2e8;
case 0x63c2eb:c.instructions+=12;goto B63c2eb;
case 0x63c2ee:c.instructions+=11;goto B63c2ee;
case 0x63c2ef:c.instructions+=10;goto B63c2ef;
case 0x63c2f1:c.instructions+=9;goto B63c2f1;
case 0x63c2f4:c.instructions+=8;goto B63c2f4;
case 0x63c2f7:c.instructions+=7;goto B63c2f7;
case 0x63c2f9:c.instructions+=6;goto B63c2f9;
case 0x63c2fc:c.instructions+=5;goto B63c2fc;
case 0x63c2ff:c.instructions+=4;goto B63c2ff;
case 0x63c301:c.instructions+=3;goto B63c301;
case 0x63c304:c.instructions+=2;goto B63c304;
case 0x63c305:c.instructions+=1;goto B63c305;
case 0x63c308:goto L63c308;
case 0x63c30a:c.instructions+=4;goto B63c30a;
case 0x63c30b:c.instructions+=3;goto B63c30b;
case 0x63c30d:c.instructions+=2;goto B63c30d;
case 0x63c30f:c.instructions+=1;goto B63c30f;
case 0x63c314:goto L63c314;
case 0x63c317:c.instructions+=8;goto B63c317;
case 0x63c318:c.instructions+=7;goto B63c318;
case 0x63c31b:c.instructions+=6;goto B63c31b;
case 0x63c31e:c.instructions+=5;goto B63c31e;
case 0x63c321:c.instructions+=4;goto B63c321;
case 0x63c324:c.instructions+=3;goto B63c324;
case 0x63c327:c.instructions+=2;goto B63c327;
case 0x63c32a:c.instructions+=1;goto B63c32a;
case 0x63c330:goto L63c330;
case 0x63c331:c.instructions+=1;goto B63c331;
case 0x63c334:goto L63c334;
case 0x63c336:c.instructions+=82;goto B63c336;
case 0x63c337:c.instructions+=81;goto B63c337;
case 0x63c339:c.instructions+=80;goto B63c339;
case 0x63c33a:c.instructions+=79;goto B63c33a;
case 0x63c33b:c.instructions+=78;goto B63c33b;
case 0x63c33e:c.instructions+=77;goto B63c33e;
case 0x63c341:c.instructions+=76;goto B63c341;
case 0x63c344:c.instructions+=75;goto B63c344;
case 0x63c347:c.instructions+=74;goto B63c347;
case 0x63c34a:c.instructions+=73;goto B63c34a;
case 0x63c34d:c.instructions+=72;goto B63c34d;
case 0x63c34e:c.instructions+=71;goto B63c34e;
case 0x63c350:c.instructions+=70;goto B63c350;
case 0x63c353:c.instructions+=69;goto B63c353;
case 0x63c359:c.instructions+=68;goto B63c359;
case 0x63c35a:c.instructions+=67;goto B63c35a;
case 0x63c35c:c.instructions+=66;goto B63c35c;
case 0x63c35f:c.instructions+=65;goto B63c35f;
case 0x63c361:c.instructions+=64;goto B63c361;
case 0x63c363:c.instructions+=63;goto B63c363;
case 0x63c366:c.instructions+=62;goto B63c366;
case 0x63c369:c.instructions+=61;goto B63c369;
case 0x63c36b:c.instructions+=60;goto B63c36b;
case 0x63c371:c.instructions+=59;goto B63c371;
case 0x63c373:c.instructions+=58;goto B63c373;
case 0x63c379:c.instructions+=57;goto B63c379;
case 0x63c37b:c.instructions+=56;goto B63c37b;
case 0x63c37d:c.instructions+=55;goto B63c37d;
case 0x63c380:c.instructions+=54;goto B63c380;
case 0x63c382:c.instructions+=53;goto B63c382;
case 0x63c388:c.instructions+=52;goto B63c388;
case 0x63c38a:c.instructions+=51;goto B63c38a;
case 0x63c38d:c.instructions+=50;goto B63c38d;
case 0x63c390:c.instructions+=49;goto B63c390;
case 0x63c392:c.instructions+=48;goto B63c392;
case 0x63c394:c.instructions+=47;goto B63c394;
case 0x63c396:c.instructions+=46;goto B63c396;
case 0x63c39c:c.instructions+=45;goto B63c39c;
case 0x63c39f:c.instructions+=44;goto B63c39f;
case 0x63c3a1:c.instructions+=43;goto B63c3a1;
case 0x63c3a4:c.instructions+=42;goto B63c3a4;
case 0x63c3a6:c.instructions+=41;goto B63c3a6;
case 0x63c3a8:c.instructions+=40;goto B63c3a8;
case 0x63c3ab:c.instructions+=39;goto B63c3ab;
case 0x63c3ad:c.instructions+=38;goto B63c3ad;
case 0x63c3af:c.instructions+=37;goto B63c3af;
case 0x63c3b1:c.instructions+=36;goto B63c3b1;
case 0x63c3b3:c.instructions+=35;goto B63c3b3;
case 0x63c3b5:c.instructions+=34;goto B63c3b5;
case 0x63c3b7:c.instructions+=33;goto B63c3b7;
case 0x63c3b9:c.instructions+=32;goto B63c3b9;
case 0x63c3bb:c.instructions+=31;goto B63c3bb;
case 0x63c3be:c.instructions+=30;goto B63c3be;
case 0x63c3c1:c.instructions+=29;goto B63c3c1;
case 0x63c3c4:c.instructions+=28;goto B63c3c4;
case 0x63c3c6:c.instructions+=27;goto B63c3c6;
case 0x63c3c9:c.instructions+=26;goto B63c3c9;
case 0x63c3cc:c.instructions+=25;goto B63c3cc;
case 0x63c3ce:c.instructions+=24;goto B63c3ce;
case 0x63c3d1:c.instructions+=23;goto B63c3d1;
case 0x63c3d4:c.instructions+=22;goto B63c3d4;
case 0x63c3d6:c.instructions+=21;goto B63c3d6;
case 0x63c3d8:c.instructions+=20;goto B63c3d8;
case 0x63c3db:c.instructions+=19;goto B63c3db;
case 0x63c3dd:c.instructions+=18;goto B63c3dd;
case 0x63c3e0:c.instructions+=17;goto B63c3e0;
case 0x63c3e1:c.instructions+=16;goto B63c3e1;
case 0x63c3e4:c.instructions+=15;goto B63c3e4;
case 0x63c3e7:c.instructions+=14;goto B63c3e7;
case 0x63c3e8:c.instructions+=13;goto B63c3e8;
case 0x63c3ea:c.instructions+=12;goto B63c3ea;
case 0x63c3ed:c.instructions+=11;goto B63c3ed;
case 0x63c3f0:c.instructions+=10;goto B63c3f0;
case 0x63c3f2:c.instructions+=9;goto B63c3f2;
case 0x63c3f5:c.instructions+=8;goto B63c3f5;
case 0x63c3f8:c.instructions+=7;goto B63c3f8;
case 0x63c3fa:c.instructions+=6;goto B63c3fa;
case 0x63c3fc:c.instructions+=5;goto B63c3fc;
case 0x63c3ff:c.instructions+=4;goto B63c3ff;
case 0x63c401:c.instructions+=3;goto B63c401;
case 0x63c403:c.instructions+=2;goto B63c403;
case 0x63c404:c.instructions+=1;goto B63c404;
case 0x63c407:goto L63c407;
case 0x63c409:c.instructions+=4;goto B63c409;
case 0x63c40a:c.instructions+=3;goto B63c40a;
case 0x63c40c:c.instructions+=2;goto B63c40c;
case 0x63c40e:c.instructions+=1;goto B63c40e;
case 0x63c413:goto L63c413;
case 0x63c416:c.instructions+=10;goto B63c416;
case 0x63c417:c.instructions+=9;goto B63c417;
case 0x63c418:c.instructions+=8;goto B63c418;
case 0x63c41c:c.instructions+=7;goto B63c41c;
case 0x63c41f:c.instructions+=6;goto B63c41f;
case 0x63c422:c.instructions+=5;goto B63c422;
case 0x63c425:c.instructions+=4;goto B63c425;
case 0x63c428:c.instructions+=3;goto B63c428;
case 0x63c42b:c.instructions+=2;goto B63c42b;
case 0x63c42e:c.instructions+=1;goto B63c42e;
case 0x63c434:goto L63c434;
case 0x63c435:c.instructions+=1;goto B63c435;
case 0x63c438:goto L63c438;
case 0x63c43a:c.instructions+=37;goto B63c43a;
case 0x63c43b:c.instructions+=36;goto B63c43b;
case 0x63c43d:c.instructions+=35;goto B63c43d;
case 0x63c440:c.instructions+=34;goto B63c440;
case 0x63c443:c.instructions+=33;goto B63c443;
case 0x63c445:c.instructions+=32;goto B63c445;
case 0x63c448:c.instructions+=31;goto B63c448;
case 0x63c44a:c.instructions+=30;goto B63c44a;
case 0x63c44b:c.instructions+=29;goto B63c44b;
case 0x63c44e:c.instructions+=28;goto B63c44e;
case 0x63c451:c.instructions+=27;goto B63c451;
case 0x63c453:c.instructions+=26;goto B63c453;
case 0x63c455:c.instructions+=25;goto B63c455;
case 0x63c458:c.instructions+=24;goto B63c458;
case 0x63c45a:c.instructions+=23;goto B63c45a;
case 0x63c45c:c.instructions+=22;goto B63c45c;
case 0x63c45e:c.instructions+=21;goto B63c45e;
case 0x63c461:c.instructions+=20;goto B63c461;
case 0x63c464:c.instructions+=19;goto B63c464;
case 0x63c467:c.instructions+=18;goto B63c467;
case 0x63c46a:c.instructions+=17;goto B63c46a;
case 0x63c46d:c.instructions+=16;goto B63c46d;
case 0x63c470:c.instructions+=15;goto B63c470;
case 0x63c472:c.instructions+=14;goto B63c472;
case 0x63c475:c.instructions+=13;goto B63c475;
case 0x63c478:c.instructions+=12;goto B63c478;
case 0x63c47b:c.instructions+=11;goto B63c47b;
case 0x63c47e:c.instructions+=10;goto B63c47e;
case 0x63c481:c.instructions+=9;goto B63c481;
case 0x63c484:c.instructions+=8;goto B63c484;
case 0x63c485:c.instructions+=7;goto B63c485;
case 0x63c488:c.instructions+=6;goto B63c488;
case 0x63c48b:c.instructions+=5;goto B63c48b;
case 0x63c48d:c.instructions+=4;goto B63c48d;
case 0x63c490:c.instructions+=3;goto B63c490;
case 0x63c493:c.instructions+=2;goto B63c493;
case 0x63c494:c.instructions+=1;goto B63c494;
case 0x63c497:goto L63c497;
case 0x63c499:c.instructions+=4;goto B63c499;
case 0x63c49a:c.instructions+=3;goto B63c49a;
case 0x63c49c:c.instructions+=2;goto B63c49c;
case 0x63c49e:c.instructions+=1;goto B63c49e;
case 0x63c4a3:goto L63c4a3;
case 0x63c4a4:c.instructions+=1;goto B63c4a4;
case 0x63c4aa:goto L63c4aa;
case 0x63c4ac:c.instructions+=58;goto B63c4ac;
case 0x63c4ad:c.instructions+=57;goto B63c4ad;
case 0x63c4af:c.instructions+=56;goto B63c4af;
case 0x63c4b2:c.instructions+=55;goto B63c4b2;
case 0x63c4b5:c.instructions+=54;goto B63c4b5;
case 0x63c4b8:c.instructions+=53;goto B63c4b8;
case 0x63c4bb:c.instructions+=52;goto B63c4bb;
case 0x63c4be:c.instructions+=51;goto B63c4be;
case 0x63c4bf:c.instructions+=50;goto B63c4bf;
case 0x63c4c2:c.instructions+=49;goto B63c4c2;
case 0x63c4c3:c.instructions+=48;goto B63c4c3;
case 0x63c4c6:c.instructions+=47;goto B63c4c6;
case 0x63c4c9:c.instructions+=46;goto B63c4c9;
case 0x63c4cb:c.instructions+=45;goto B63c4cb;
case 0x63c4cd:c.instructions+=44;goto B63c4cd;
case 0x63c4cf:c.instructions+=43;goto B63c4cf;
case 0x63c4d1:c.instructions+=42;goto B63c4d1;
case 0x63c4d4:c.instructions+=41;goto B63c4d4;
case 0x63c4d7:c.instructions+=40;goto B63c4d7;
case 0x63c4da:c.instructions+=39;goto B63c4da;
case 0x63c4dd:c.instructions+=38;goto B63c4dd;
case 0x63c4e0:c.instructions+=37;goto B63c4e0;
case 0x63c4e3:c.instructions+=36;goto B63c4e3;
case 0x63c4e5:c.instructions+=35;goto B63c4e5;
case 0x63c4e8:c.instructions+=34;goto B63c4e8;
case 0x63c4ea:c.instructions+=33;goto B63c4ea;
case 0x63c4ec:c.instructions+=32;goto B63c4ec;
case 0x63c4ef:c.instructions+=31;goto B63c4ef;
case 0x63c4f2:c.instructions+=30;goto B63c4f2;
case 0x63c4f5:c.instructions+=29;goto B63c4f5;
case 0x63c4f8:c.instructions+=28;goto B63c4f8;
case 0x63c4fb:c.instructions+=27;goto B63c4fb;
case 0x63c4fe:c.instructions+=26;goto B63c4fe;
case 0x63c500:c.instructions+=25;goto B63c500;
case 0x63c503:c.instructions+=24;goto B63c503;
case 0x63c505:c.instructions+=23;goto B63c505;
case 0x63c507:c.instructions+=22;goto B63c507;
case 0x63c50a:c.instructions+=21;goto B63c50a;
case 0x63c50d:c.instructions+=20;goto B63c50d;
case 0x63c510:c.instructions+=19;goto B63c510;
case 0x63c513:c.instructions+=18;goto B63c513;
case 0x63c516:c.instructions+=17;goto B63c516;
case 0x63c519:c.instructions+=16;goto B63c519;
case 0x63c51b:c.instructions+=15;goto B63c51b;
case 0x63c51e:c.instructions+=14;goto B63c51e;
case 0x63c520:c.instructions+=13;goto B63c520;
case 0x63c522:c.instructions+=12;goto B63c522;
case 0x63c525:c.instructions+=11;goto B63c525;
case 0x63c528:c.instructions+=10;goto B63c528;
case 0x63c52a:c.instructions+=9;goto B63c52a;
case 0x63c52d:c.instructions+=8;goto B63c52d;
case 0x63c52e:c.instructions+=7;goto B63c52e;
case 0x63c52f:c.instructions+=6;goto B63c52f;
case 0x63c530:c.instructions+=5;goto B63c530;
case 0x63c531:c.instructions+=4;goto B63c531;
case 0x63c532:c.instructions+=3;goto B63c532;
case 0x63c533:c.instructions+=2;goto B63c533;
case 0x63c534:c.instructions+=1;goto B63c534;
case 0x63c537:goto L63c537;
case 0x63c539:c.instructions+=4;goto B63c539;
case 0x63c53a:c.instructions+=3;goto B63c53a;
case 0x63c53c:c.instructions+=2;goto B63c53c;
case 0x63c53e:c.instructions+=1;goto B63c53e;
case 0x63c543:goto L63c543;
case 0x63c544:c.instructions+=1;goto B63c544;
case 0x63c54a:goto L63c54a;
case 0x63c54c:c.instructions+=9;goto B63c54c;
case 0x63c54d:c.instructions+=8;goto B63c54d;
case 0x63c54f:c.instructions+=7;goto B63c54f;
case 0x63c552:c.instructions+=6;goto B63c552;
case 0x63c555:c.instructions+=5;goto B63c555;
case 0x63c557:c.instructions+=4;goto B63c557;
case 0x63c558:c.instructions+=3;goto B63c558;
case 0x63c55b:c.instructions+=2;goto B63c55b;
case 0x63c55e:c.instructions+=1;goto B63c55e;
case 0x63c564:goto L63c564;
case 0x63c567:c.instructions+=3;goto B63c567;
case 0x63c56a:c.instructions+=2;goto B63c56a;
case 0x63c56b:c.instructions+=1;goto B63c56b;
case 0x63c56c:goto L63c56c;
case 0x63c56f:c.instructions+=49;goto B63c56f;
case 0x63c571:c.instructions+=48;goto B63c571;
case 0x63c574:c.instructions+=47;goto B63c574;
case 0x63c577:c.instructions+=46;goto B63c577;
case 0x63c57a:c.instructions+=45;goto B63c57a;
case 0x63c57d:c.instructions+=44;goto B63c57d;
case 0x63c580:c.instructions+=43;goto B63c580;
case 0x63c582:c.instructions+=42;goto B63c582;
case 0x63c584:c.instructions+=41;goto B63c584;
case 0x63c586:c.instructions+=40;goto B63c586;
case 0x63c588:c.instructions+=39;goto B63c588;
case 0x63c58b:c.instructions+=38;goto B63c58b;
case 0x63c58e:c.instructions+=37;goto B63c58e;
case 0x63c591:c.instructions+=36;goto B63c591;
case 0x63c593:c.instructions+=35;goto B63c593;
case 0x63c596:c.instructions+=34;goto B63c596;
case 0x63c599:c.instructions+=33;goto B63c599;
case 0x63c59b:c.instructions+=32;goto B63c59b;
case 0x63c59e:c.instructions+=31;goto B63c59e;
case 0x63c5a1:c.instructions+=30;goto B63c5a1;
case 0x63c5a3:c.instructions+=29;goto B63c5a3;
case 0x63c5a6:c.instructions+=28;goto B63c5a6;
case 0x63c5a9:c.instructions+=27;goto B63c5a9;
case 0x63c5ac:c.instructions+=26;goto B63c5ac;
case 0x63c5af:c.instructions+=25;goto B63c5af;
case 0x63c5b1:c.instructions+=24;goto B63c5b1;
case 0x63c5b4:c.instructions+=23;goto B63c5b4;
case 0x63c5b6:c.instructions+=22;goto B63c5b6;
case 0x63c5b9:c.instructions+=21;goto B63c5b9;
case 0x63c5bc:c.instructions+=20;goto B63c5bc;
case 0x63c5be:c.instructions+=19;goto B63c5be;
case 0x63c5c1:c.instructions+=18;goto B63c5c1;
case 0x63c5c4:c.instructions+=17;goto B63c5c4;
case 0x63c5c7:c.instructions+=16;goto B63c5c7;
case 0x63c5c9:c.instructions+=15;goto B63c5c9;
case 0x63c5cc:c.instructions+=14;goto B63c5cc;
case 0x63c5cf:c.instructions+=13;goto B63c5cf;
case 0x63c5d1:c.instructions+=12;goto B63c5d1;
case 0x63c5d4:c.instructions+=11;goto B63c5d4;
case 0x63c5d7:c.instructions+=10;goto B63c5d7;
case 0x63c5da:c.instructions+=9;goto B63c5da;
case 0x63c5db:c.instructions+=8;goto B63c5db;
case 0x63c5dd:c.instructions+=7;goto B63c5dd;
case 0x63c5e0:c.instructions+=6;goto B63c5e0;
case 0x63c5e3:c.instructions+=5;goto B63c5e3;
case 0x63c5e4:c.instructions+=4;goto B63c5e4;
case 0x63c5e5:c.instructions+=3;goto B63c5e5;
case 0x63c5e6:c.instructions+=2;goto B63c5e6;
case 0x63c5e7:c.instructions+=1;goto B63c5e7;
case 0x63c5e9:goto L63c5e9;
case 0x63c5ea:c.instructions+=1;goto B63c5ea;
case 0x63c5eb:goto L63c5eb;
case 0x63c5ee:c.instructions+=3;goto B63c5ee;
case 0x63c5ef:c.instructions+=2;goto B63c5ef;
case 0x63c5f0:c.instructions+=1;goto B63c5f0;
case 0x63c5f3:goto L63c5f3;
case 0x63c5f5:c.instructions+=4;goto B63c5f5;
case 0x63c5f6:c.instructions+=3;goto B63c5f6;
case 0x63c5f8:c.instructions+=2;goto B63c5f8;
case 0x63c5fa:c.instructions+=1;goto B63c5fa;
case 0x63c5ff:goto L63c5ff;
case 0x63c600:c.instructions+=1;goto B63c600;
case 0x63c606:goto L63c606;
case 0x63c60c:goto L63c60c;
case 0x63c60e:c.instructions+=4;goto B63c60e;
case 0x63c60f:c.instructions+=3;goto B63c60f;
case 0x63c611:c.instructions+=2;goto B63c611;
case 0x63c613:c.instructions+=1;goto B63c613;
case 0x63c618:goto L63c618;
case 0x63c619:c.instructions+=1;goto B63c619;
case 0x63c61f:goto L63c61f;
case 0x63c625:goto L63c625;
case 0x63c627:c.instructions+=9;goto B63c627;
case 0x63c628:c.instructions+=8;goto B63c628;
case 0x63c62a:c.instructions+=7;goto B63c62a;
case 0x63c62d:c.instructions+=6;goto B63c62d;
case 0x63c630:c.instructions+=5;goto B63c630;
case 0x63c632:c.instructions+=4;goto B63c632;
case 0x63c633:c.instructions+=3;goto B63c633;
case 0x63c636:c.instructions+=2;goto B63c636;
case 0x63c639:c.instructions+=1;goto B63c639;
case 0x63c63f:goto L63c63f;
case 0x63c642:c.instructions+=4;goto B63c642;
case 0x63c645:c.instructions+=3;goto B63c645;
case 0x63c646:c.instructions+=2;goto B63c646;
case 0x63c649:c.instructions+=1;goto B63c649;
case 0x63c64a:goto L63c64a;
case 0x63c64d:c.instructions+=51;goto B63c64d;
case 0x63c650:c.instructions+=50;goto B63c650;
case 0x63c653:c.instructions+=49;goto B63c653;
case 0x63c655:c.instructions+=48;goto B63c655;
case 0x63c658:c.instructions+=47;goto B63c658;
case 0x63c659:c.instructions+=46;goto B63c659;
case 0x63c65c:c.instructions+=45;goto B63c65c;
case 0x63c65d:c.instructions+=44;goto B63c65d;
case 0x63c65f:c.instructions+=43;goto B63c65f;
case 0x63c661:c.instructions+=42;goto B63c661;
case 0x63c663:c.instructions+=41;goto B63c663;
case 0x63c665:c.instructions+=40;goto B63c665;
case 0x63c668:c.instructions+=39;goto B63c668;
case 0x63c66b:c.instructions+=38;goto B63c66b;
case 0x63c66e:c.instructions+=37;goto B63c66e;
case 0x63c670:c.instructions+=36;goto B63c670;
case 0x63c673:c.instructions+=35;goto B63c673;
case 0x63c676:c.instructions+=34;goto B63c676;
case 0x63c678:c.instructions+=33;goto B63c678;
case 0x63c67b:c.instructions+=32;goto B63c67b;
case 0x63c67e:c.instructions+=31;goto B63c67e;
case 0x63c680:c.instructions+=30;goto B63c680;
case 0x63c683:c.instructions+=29;goto B63c683;
case 0x63c686:c.instructions+=28;goto B63c686;
case 0x63c689:c.instructions+=27;goto B63c689;
case 0x63c68c:c.instructions+=26;goto B63c68c;
case 0x63c68e:c.instructions+=25;goto B63c68e;
case 0x63c691:c.instructions+=24;goto B63c691;
case 0x63c693:c.instructions+=23;goto B63c693;
case 0x63c696:c.instructions+=22;goto B63c696;
case 0x63c699:c.instructions+=21;goto B63c699;
case 0x63c69b:c.instructions+=20;goto B63c69b;
case 0x63c69e:c.instructions+=19;goto B63c69e;
case 0x63c6a1:c.instructions+=18;goto B63c6a1;
case 0x63c6a4:c.instructions+=17;goto B63c6a4;
case 0x63c6a6:c.instructions+=16;goto B63c6a6;
case 0x63c6a9:c.instructions+=15;goto B63c6a9;
case 0x63c6ac:c.instructions+=14;goto B63c6ac;
case 0x63c6ae:c.instructions+=13;goto B63c6ae;
case 0x63c6b1:c.instructions+=12;goto B63c6b1;
case 0x63c6b4:c.instructions+=11;goto B63c6b4;
case 0x63c6b6:c.instructions+=10;goto B63c6b6;
case 0x63c6b9:c.instructions+=9;goto B63c6b9;
case 0x63c6ba:c.instructions+=8;goto B63c6ba;
case 0x63c6bb:c.instructions+=7;goto B63c6bb;
case 0x63c6be:c.instructions+=6;goto B63c6be;
case 0x63c6c0:c.instructions+=5;goto B63c6c0;
case 0x63c6c4:c.instructions+=4;goto B63c6c4;
case 0x63c6c7:c.instructions+=3;goto B63c6c7;
case 0x63c6c8:c.instructions+=2;goto B63c6c8;
case 0x63c6cb:c.instructions+=1;goto B63c6cb;
case 0x63c6d0:goto L63c6d0;
case 0x63c6d2:c.instructions+=1;goto B63c6d2;
case 0x63c6d4:goto L63c6d4;
case 0x63c6d6:c.instructions+=9;goto B63c6d6;
case 0x63c6d9:c.instructions+=8;goto B63c6d9;
case 0x63c6db:c.instructions+=7;goto B63c6db;
case 0x63c6dd:c.instructions+=6;goto B63c6dd;
case 0x63c6df:c.instructions+=5;goto B63c6df;
case 0x63c6e1:c.instructions+=4;goto B63c6e1;
case 0x63c6e4:c.instructions+=3;goto B63c6e4;
case 0x63c6e7:c.instructions+=2;goto B63c6e7;
case 0x63c6ea:c.instructions+=1;goto B63c6ea;
case 0x63c6ed:goto L63c6ed;
case 0x63c6f0:c.instructions+=3;goto B63c6f0;
case 0x63c6f3:c.instructions+=2;goto B63c6f3;
case 0x63c6f6:c.instructions+=1;goto B63c6f6;
case 0x63c6fc:goto L63c6fc;
case 0x63c6fd:c.instructions+=1;goto B63c6fd;
case 0x63c6fe:goto L63c6fe;
case 0x63c701:c.instructions+=3;goto B63c701;
case 0x63c702:c.instructions+=2;goto B63c702;
case 0x63c703:c.instructions+=1;goto B63c703;
case 0x63c706:goto L63c706;
case 0x63c708:c.instructions+=4;goto B63c708;
case 0x63c709:c.instructions+=3;goto B63c709;
case 0x63c70b:c.instructions+=2;goto B63c70b;
case 0x63c70d:c.instructions+=1;goto B63c70d;
case 0x63c712:goto L63c712;
case 0x63c713:c.instructions+=1;goto B63c713;
case 0x63c719:goto L63c719;
case 0x63c71f:goto L63c71f;
case 0x63c721:c.instructions+=44;goto B63c721;
case 0x63c722:c.instructions+=43;goto B63c722;
case 0x63c724:c.instructions+=42;goto B63c724;
case 0x63c727:c.instructions+=41;goto B63c727;
case 0x63c72a:c.instructions+=40;goto B63c72a;
case 0x63c72d:c.instructions+=39;goto B63c72d;
case 0x63c730:c.instructions+=38;goto B63c730;
case 0x63c733:c.instructions+=37;goto B63c733;
case 0x63c734:c.instructions+=36;goto B63c734;
case 0x63c737:c.instructions+=35;goto B63c737;
case 0x63c738:c.instructions+=34;goto B63c738;
case 0x63c73b:c.instructions+=33;goto B63c73b;
case 0x63c73e:c.instructions+=32;goto B63c73e;
case 0x63c740:c.instructions+=31;goto B63c740;
case 0x63c742:c.instructions+=30;goto B63c742;
case 0x63c744:c.instructions+=29;goto B63c744;
case 0x63c746:c.instructions+=28;goto B63c746;
case 0x63c749:c.instructions+=27;goto B63c749;
case 0x63c74c:c.instructions+=26;goto B63c74c;
case 0x63c74f:c.instructions+=25;goto B63c74f;
case 0x63c752:c.instructions+=24;goto B63c752;
case 0x63c755:c.instructions+=23;goto B63c755;
case 0x63c757:c.instructions+=22;goto B63c757;
case 0x63c75a:c.instructions+=21;goto B63c75a;
case 0x63c75c:c.instructions+=20;goto B63c75c;
case 0x63c75e:c.instructions+=19;goto B63c75e;
case 0x63c761:c.instructions+=18;goto B63c761;
case 0x63c764:c.instructions+=17;goto B63c764;
case 0x63c767:c.instructions+=16;goto B63c767;
case 0x63c76a:c.instructions+=15;goto B63c76a;
case 0x63c76d:c.instructions+=14;goto B63c76d;
case 0x63c76f:c.instructions+=13;goto B63c76f;
case 0x63c772:c.instructions+=12;goto B63c772;
case 0x63c774:c.instructions+=11;goto B63c774;
case 0x63c777:c.instructions+=10;goto B63c777;
case 0x63c779:c.instructions+=9;goto B63c779;
case 0x63c77b:c.instructions+=8;goto B63c77b;
case 0x63c77e:c.instructions+=7;goto B63c77e;
case 0x63c77f:c.instructions+=6;goto B63c77f;
case 0x63c780:c.instructions+=5;goto B63c780;
case 0x63c781:c.instructions+=4;goto B63c781;
case 0x63c782:c.instructions+=3;goto B63c782;
case 0x63c783:c.instructions+=2;goto B63c783;
case 0x63c784:c.instructions+=1;goto B63c784;
case 0x63c787:goto L63c787;
case 0x63c789:c.instructions+=4;goto B63c789;
case 0x63c78a:c.instructions+=3;goto B63c78a;
case 0x63c78c:c.instructions+=2;goto B63c78c;
case 0x63c78e:c.instructions+=1;goto B63c78e;
case 0x63c793:goto L63c793;
case 0x63c794:c.instructions+=1;goto B63c794;
case 0x63c79a:goto L63c79a;
case 0x63c79c:c.instructions+=9;goto B63c79c;
case 0x63c79d:c.instructions+=8;goto B63c79d;
case 0x63c79f:c.instructions+=7;goto B63c79f;
case 0x63c7a2:c.instructions+=6;goto B63c7a2;
case 0x63c7a5:c.instructions+=5;goto B63c7a5;
case 0x63c7a7:c.instructions+=4;goto B63c7a7;
case 0x63c7a8:c.instructions+=3;goto B63c7a8;
case 0x63c7ab:c.instructions+=2;goto B63c7ab;
case 0x63c7ae:c.instructions+=1;goto B63c7ae;
case 0x63c7b0:goto L63c7b0;
case 0x63c7b3:c.instructions+=3;goto B63c7b3;
case 0x63c7b6:c.instructions+=2;goto B63c7b6;
case 0x63c7b7:c.instructions+=1;goto B63c7b7;
case 0x63c7b8:goto L63c7b8;
case 0x63c7bb:c.instructions+=35;goto B63c7bb;
case 0x63c7bd:c.instructions+=34;goto B63c7bd;
case 0x63c7c0:c.instructions+=33;goto B63c7c0;
case 0x63c7c3:c.instructions+=32;goto B63c7c3;
case 0x63c7c6:c.instructions+=31;goto B63c7c6;
case 0x63c7c9:c.instructions+=30;goto B63c7c9;
case 0x63c7cc:c.instructions+=29;goto B63c7cc;
case 0x63c7ce:c.instructions+=28;goto B63c7ce;
case 0x63c7d0:c.instructions+=27;goto B63c7d0;
case 0x63c7d2:c.instructions+=26;goto B63c7d2;
case 0x63c7d4:c.instructions+=25;goto B63c7d4;
case 0x63c7d7:c.instructions+=24;goto B63c7d7;
case 0x63c7da:c.instructions+=23;goto B63c7da;
case 0x63c7dc:c.instructions+=22;goto B63c7dc;
case 0x63c7df:c.instructions+=21;goto B63c7df;
case 0x63c7e2:c.instructions+=20;goto B63c7e2;
case 0x63c7e4:c.instructions+=19;goto B63c7e4;
case 0x63c7e7:c.instructions+=18;goto B63c7e7;
case 0x63c7ea:c.instructions+=17;goto B63c7ea;
case 0x63c7ec:c.instructions+=16;goto B63c7ec;
case 0x63c7ef:c.instructions+=15;goto B63c7ef;
case 0x63c7f2:c.instructions+=14;goto B63c7f2;
case 0x63c7f5:c.instructions+=13;goto B63c7f5;
case 0x63c7f7:c.instructions+=12;goto B63c7f7;
case 0x63c7fa:c.instructions+=11;goto B63c7fa;
case 0x63c7fc:c.instructions+=10;goto B63c7fc;
case 0x63c7ff:c.instructions+=9;goto B63c7ff;
case 0x63c802:c.instructions+=8;goto B63c802;
case 0x63c803:c.instructions+=7;goto B63c803;
case 0x63c806:c.instructions+=6;goto B63c806;
case 0x63c808:c.instructions+=5;goto B63c808;
case 0x63c80b:c.instructions+=4;goto B63c80b;
case 0x63c80c:c.instructions+=3;goto B63c80c;
case 0x63c80d:c.instructions+=2;goto B63c80d;
case 0x63c80e:c.instructions+=1;goto B63c80e;
case 0x63c810:goto L63c810;
case 0x63c811:c.instructions+=1;goto B63c811;
case 0x63c812:goto L63c812;
case 0x63c815:c.instructions+=3;goto B63c815;
case 0x63c816:c.instructions+=2;goto B63c816;
case 0x63c817:c.instructions+=1;goto B63c817;
case 0x63c81a:goto L63c81a;
case 0x63c81c:c.instructions+=4;goto B63c81c;
case 0x63c81d:c.instructions+=3;goto B63c81d;
case 0x63c81f:c.instructions+=2;goto B63c81f;
case 0x63c821:c.instructions+=1;goto B63c821;
case 0x63c826:goto L63c826;
case 0x63c827:c.instructions+=1;goto B63c827;
case 0x63c82d:goto L63c82d;
case 0x63c82f:c.instructions+=4;goto B63c82f;
case 0x63c830:c.instructions+=3;goto B63c830;
case 0x63c832:c.instructions+=2;goto B63c832;
case 0x63c834:c.instructions+=1;goto B63c834;
case 0x63c839:goto L63c839;
case 0x63c83a:c.instructions+=1;goto B63c83a;
case 0x63c840:goto L63c840;
case 0x63c842:c.instructions+=4;goto B63c842;
case 0x63c843:c.instructions+=3;goto B63c843;
case 0x63c845:c.instructions+=2;goto B63c845;
case 0x63c847:c.instructions+=1;goto B63c847;
case 0x63c84c:goto L63c84c;
case 0x63c84d:c.instructions+=1;goto B63c84d;
case 0x63c853:goto L63c853;
case 0x63c855:c.instructions+=4;goto B63c855;
case 0x63c856:c.instructions+=3;goto B63c856;
case 0x63c858:c.instructions+=2;goto B63c858;
case 0x63c85a:c.instructions+=1;goto B63c85a;
case 0x63c85f:goto L63c85f;
case 0x63c860:c.instructions+=1;goto B63c860;
case 0x63c866:goto L63c866;
case 0x63c868:c.instructions+=4;goto B63c868;
case 0x63c869:c.instructions+=3;goto B63c869;
case 0x63c86b:c.instructions+=2;goto B63c86b;
case 0x63c86d:c.instructions+=1;goto B63c86d;
case 0x63c872:goto L63c872;
case 0x63c873:c.instructions+=1;goto B63c873;
case 0x63c879:goto L63c879;
case 0x63c87b:c.instructions+=97;goto B63c87b;
case 0x63c87c:c.instructions+=96;goto B63c87c;
case 0x63c87e:c.instructions+=95;goto B63c87e;
case 0x63c881:c.instructions+=94;goto B63c881;
case 0x63c884:c.instructions+=93;goto B63c884;
case 0x63c887:c.instructions+=92;goto B63c887;
case 0x63c88a:c.instructions+=91;goto B63c88a;
case 0x63c88d:c.instructions+=90;goto B63c88d;
case 0x63c890:c.instructions+=89;goto B63c890;
case 0x63c893:c.instructions+=88;goto B63c893;
case 0x63c894:c.instructions+=87;goto B63c894;
case 0x63c897:c.instructions+=86;goto B63c897;
case 0x63c898:c.instructions+=85;goto B63c898;
case 0x63c89b:c.instructions+=84;goto B63c89b;
case 0x63c89e:c.instructions+=83;goto B63c89e;
case 0x63c8a1:c.instructions+=82;goto B63c8a1;
case 0x63c8a4:c.instructions+=81;goto B63c8a4;
case 0x63c8a6:c.instructions+=80;goto B63c8a6;
case 0x63c8a9:c.instructions+=79;goto B63c8a9;
case 0x63c8ac:c.instructions+=78;goto B63c8ac;
case 0x63c8af:c.instructions+=77;goto B63c8af;
case 0x63c8b2:c.instructions+=76;goto B63c8b2;
case 0x63c8b5:c.instructions+=75;goto B63c8b5;
case 0x63c8b8:c.instructions+=74;goto B63c8b8;
case 0x63c8bb:c.instructions+=73;goto B63c8bb;
case 0x63c8bd:c.instructions+=72;goto B63c8bd;
case 0x63c8bf:c.instructions+=71;goto B63c8bf;
case 0x63c8c2:c.instructions+=70;goto B63c8c2;
case 0x63c8c5:c.instructions+=69;goto B63c8c5;
case 0x63c8c8:c.instructions+=68;goto B63c8c8;
case 0x63c8ca:c.instructions+=67;goto B63c8ca;
case 0x63c8cd:c.instructions+=66;goto B63c8cd;
case 0x63c8d0:c.instructions+=65;goto B63c8d0;
case 0x63c8d3:c.instructions+=64;goto B63c8d3;
case 0x63c8d5:c.instructions+=63;goto B63c8d5;
case 0x63c8d8:c.instructions+=62;goto B63c8d8;
case 0x63c8db:c.instructions+=61;goto B63c8db;
case 0x63c8dd:c.instructions+=60;goto B63c8dd;
case 0x63c8e0:c.instructions+=59;goto B63c8e0;
case 0x63c8e3:c.instructions+=58;goto B63c8e3;
case 0x63c8e5:c.instructions+=57;goto B63c8e5;
case 0x63c8e8:c.instructions+=56;goto B63c8e8;
case 0x63c8ea:c.instructions+=55;goto B63c8ea;
case 0x63c8ed:c.instructions+=54;goto B63c8ed;
case 0x63c8ef:c.instructions+=53;goto B63c8ef;
case 0x63c8f2:c.instructions+=52;goto B63c8f2;
case 0x63c8f4:c.instructions+=51;goto B63c8f4;
case 0x63c8f7:c.instructions+=50;goto B63c8f7;
case 0x63c8f9:c.instructions+=49;goto B63c8f9;
case 0x63c8fb:c.instructions+=48;goto B63c8fb;
case 0x63c8fe:c.instructions+=47;goto B63c8fe;
case 0x63c901:c.instructions+=46;goto B63c901;
case 0x63c904:c.instructions+=45;goto B63c904;
case 0x63c906:c.instructions+=44;goto B63c906;
case 0x63c909:c.instructions+=43;goto B63c909;
case 0x63c90c:c.instructions+=42;goto B63c90c;
case 0x63c90e:c.instructions+=41;goto B63c90e;
case 0x63c911:c.instructions+=40;goto B63c911;
case 0x63c913:c.instructions+=39;goto B63c913;
case 0x63c915:c.instructions+=38;goto B63c915;
case 0x63c918:c.instructions+=37;goto B63c918;
case 0x63c91a:c.instructions+=36;goto B63c91a;
case 0x63c91d:c.instructions+=35;goto B63c91d;
case 0x63c920:c.instructions+=34;goto B63c920;
case 0x63c922:c.instructions+=33;goto B63c922;
case 0x63c925:c.instructions+=32;goto B63c925;
case 0x63c928:c.instructions+=31;goto B63c928;
case 0x63c92b:c.instructions+=30;goto B63c92b;
case 0x63c92d:c.instructions+=29;goto B63c92d;
case 0x63c92f:c.instructions+=28;goto B63c92f;
case 0x63c931:c.instructions+=27;goto B63c931;
case 0x63c934:c.instructions+=26;goto B63c934;
case 0x63c936:c.instructions+=25;goto B63c936;
case 0x63c939:c.instructions+=24;goto B63c939;
case 0x63c93c:c.instructions+=23;goto B63c93c;
case 0x63c93f:c.instructions+=22;goto B63c93f;
case 0x63c941:c.instructions+=21;goto B63c941;
case 0x63c944:c.instructions+=20;goto B63c944;
case 0x63c947:c.instructions+=19;goto B63c947;
case 0x63c94a:c.instructions+=18;goto B63c94a;
case 0x63c94d:c.instructions+=17;goto B63c94d;
case 0x63c94f:c.instructions+=16;goto B63c94f;
case 0x63c951:c.instructions+=15;goto B63c951;
case 0x63c953:c.instructions+=14;goto B63c953;
case 0x63c955:c.instructions+=13;goto B63c955;
case 0x63c958:c.instructions+=12;goto B63c958;
case 0x63c95a:c.instructions+=11;goto B63c95a;
case 0x63c95d:c.instructions+=10;goto B63c95d;
case 0x63c95e:c.instructions+=9;goto B63c95e;
case 0x63c95f:c.instructions+=8;goto B63c95f;
case 0x63c961:c.instructions+=7;goto B63c961;
case 0x63c963:c.instructions+=6;goto B63c963;
case 0x63c964:c.instructions+=5;goto B63c964;
case 0x63c965:c.instructions+=4;goto B63c965;
case 0x63c966:c.instructions+=3;goto B63c966;
case 0x63c967:c.instructions+=2;goto B63c967;
case 0x63c968:c.instructions+=1;goto B63c968;
case 0x63c96b:goto L63c96b;
case 0x63c96d:c.instructions+=4;goto B63c96d;
case 0x63c96e:c.instructions+=3;goto B63c96e;
case 0x63c970:c.instructions+=2;goto B63c970;
case 0x63c972:c.instructions+=1;goto B63c972;
case 0x63c977:goto L63c977;
case 0x63c978:c.instructions+=1;goto B63c978;
case 0x63c97e:goto L63c97e;
case 0x63c980:c.instructions+=4;goto B63c980;
case 0x63c981:c.instructions+=3;goto B63c981;
case 0x63c983:c.instructions+=2;goto B63c983;
case 0x63c985:c.instructions+=1;goto B63c985;
case 0x63c98a:goto L63c98a;
case 0x63c98d:c.instructions+=8;goto B63c98d;
case 0x63c98e:c.instructions+=7;goto B63c98e;
case 0x63c991:c.instructions+=6;goto B63c991;
case 0x63c994:c.instructions+=5;goto B63c994;
case 0x63c997:c.instructions+=4;goto B63c997;
case 0x63c99a:c.instructions+=3;goto B63c99a;
case 0x63c99d:c.instructions+=2;goto B63c99d;
case 0x63c9a0:c.instructions+=1;goto B63c9a0;
case 0x63c9a6:goto L63c9a6;
case 0x63c9a7:c.instructions+=1;goto B63c9a7;
case 0x63c9aa:goto L63c9aa;
case 0x63c9ac:c.instructions+=86;goto B63c9ac;
case 0x63c9ad:c.instructions+=85;goto B63c9ad;
case 0x63c9af:c.instructions+=84;goto B63c9af;
case 0x63c9b2:c.instructions+=83;goto B63c9b2;
case 0x63c9b5:c.instructions+=82;goto B63c9b5;
case 0x63c9b8:c.instructions+=81;goto B63c9b8;
case 0x63c9bb:c.instructions+=80;goto B63c9bb;
case 0x63c9be:c.instructions+=79;goto B63c9be;
case 0x63c9c1:c.instructions+=78;goto B63c9c1;
case 0x63c9c4:c.instructions+=77;goto B63c9c4;
case 0x63c9c5:c.instructions+=76;goto B63c9c5;
case 0x63c9c7:c.instructions+=75;goto B63c9c7;
case 0x63c9ca:c.instructions+=74;goto B63c9ca;
case 0x63c9cb:c.instructions+=73;goto B63c9cb;
case 0x63c9ce:c.instructions+=72;goto B63c9ce;
case 0x63c9d1:c.instructions+=71;goto B63c9d1;
case 0x63c9d3:c.instructions+=70;goto B63c9d3;
case 0x63c9d6:c.instructions+=69;goto B63c9d6;
case 0x63c9dc:c.instructions+=68;goto B63c9dc;
case 0x63c9de:c.instructions+=67;goto B63c9de;
case 0x63c9e1:c.instructions+=66;goto B63c9e1;
case 0x63c9e4:c.instructions+=65;goto B63c9e4;
case 0x63c9e7:c.instructions+=64;goto B63c9e7;
case 0x63c9ed:c.instructions+=63;goto B63c9ed;
case 0x63c9ef:c.instructions+=62;goto B63c9ef;
case 0x63c9f1:c.instructions+=61;goto B63c9f1;
case 0x63c9f4:c.instructions+=60;goto B63c9f4;
case 0x63c9f7:c.instructions+=59;goto B63c9f7;
case 0x63c9fa:c.instructions+=58;goto B63c9fa;
case 0x63c9fd:c.instructions+=57;goto B63c9fd;
case 0x63ca00:c.instructions+=56;goto B63ca00;
case 0x63ca02:c.instructions+=55;goto B63ca02;
case 0x63ca04:c.instructions+=54;goto B63ca04;
case 0x63ca06:c.instructions+=53;goto B63ca06;
case 0x63ca08:c.instructions+=52;goto B63ca08;
case 0x63ca0a:c.instructions+=51;goto B63ca0a;
case 0x63ca0c:c.instructions+=50;goto B63ca0c;
case 0x63ca0e:c.instructions+=49;goto B63ca0e;
case 0x63ca10:c.instructions+=48;goto B63ca10;
case 0x63ca12:c.instructions+=47;goto B63ca12;
case 0x63ca14:c.instructions+=46;goto B63ca14;
case 0x63ca16:c.instructions+=45;goto B63ca16;
case 0x63ca18:c.instructions+=44;goto B63ca18;
case 0x63ca1a:c.instructions+=43;goto B63ca1a;
case 0x63ca1c:c.instructions+=42;goto B63ca1c;
case 0x63ca1f:c.instructions+=41;goto B63ca1f;
case 0x63ca21:c.instructions+=40;goto B63ca21;
case 0x63ca24:c.instructions+=39;goto B63ca24;
case 0x63ca26:c.instructions+=38;goto B63ca26;
case 0x63ca28:c.instructions+=37;goto B63ca28;
case 0x63ca2b:c.instructions+=36;goto B63ca2b;
case 0x63ca2d:c.instructions+=35;goto B63ca2d;
case 0x63ca2f:c.instructions+=34;goto B63ca2f;
case 0x63ca32:c.instructions+=33;goto B63ca32;
case 0x63ca34:c.instructions+=32;goto B63ca34;
case 0x63ca37:c.instructions+=31;goto B63ca37;
case 0x63ca39:c.instructions+=30;goto B63ca39;
case 0x63ca3c:c.instructions+=29;goto B63ca3c;
case 0x63ca3e:c.instructions+=28;goto B63ca3e;
case 0x63ca41:c.instructions+=27;goto B63ca41;
case 0x63ca43:c.instructions+=26;goto B63ca43;
case 0x63ca45:c.instructions+=25;goto B63ca45;
case 0x63ca48:c.instructions+=24;goto B63ca48;
case 0x63ca4a:c.instructions+=23;goto B63ca4a;
case 0x63ca4c:c.instructions+=22;goto B63ca4c;
case 0x63ca4f:c.instructions+=21;goto B63ca4f;
case 0x63ca51:c.instructions+=20;goto B63ca51;
case 0x63ca54:c.instructions+=19;goto B63ca54;
case 0x63ca57:c.instructions+=18;goto B63ca57;
case 0x63ca58:c.instructions+=17;goto B63ca58;
case 0x63ca5a:c.instructions+=16;goto B63ca5a;
case 0x63ca5d:c.instructions+=15;goto B63ca5d;
case 0x63ca5e:c.instructions+=14;goto B63ca5e;
case 0x63ca60:c.instructions+=13;goto B63ca60;
case 0x63ca62:c.instructions+=12;goto B63ca62;
case 0x63ca65:c.instructions+=11;goto B63ca65;
case 0x63ca67:c.instructions+=10;goto B63ca67;
case 0x63ca69:c.instructions+=9;goto B63ca69;
case 0x63ca6c:c.instructions+=8;goto B63ca6c;
case 0x63ca6e:c.instructions+=7;goto B63ca6e;
case 0x63ca71:c.instructions+=6;goto B63ca71;
case 0x63ca73:c.instructions+=5;goto B63ca73;
case 0x63ca75:c.instructions+=4;goto B63ca75;
case 0x63ca77:c.instructions+=3;goto B63ca77;
case 0x63ca79:c.instructions+=2;goto B63ca79;
case 0x63ca7a:c.instructions+=1;goto B63ca7a;
case 0x63ca7d:goto L63ca7d;
case 0x63ca7f:c.instructions+=4;goto B63ca7f;
case 0x63ca80:c.instructions+=3;goto B63ca80;
case 0x63ca82:c.instructions+=2;goto B63ca82;
case 0x63ca84:c.instructions+=1;goto B63ca84;
case 0x63ca89:goto L63ca89;
case 0x63ca8c:c.instructions+=8;goto B63ca8c;
case 0x63ca8d:c.instructions+=7;goto B63ca8d;
case 0x63ca90:c.instructions+=6;goto B63ca90;
case 0x63ca93:c.instructions+=5;goto B63ca93;
case 0x63ca96:c.instructions+=4;goto B63ca96;
case 0x63ca99:c.instructions+=3;goto B63ca99;
case 0x63ca9c:c.instructions+=2;goto B63ca9c;
case 0x63ca9f:c.instructions+=1;goto B63ca9f;
case 0x63caa5:goto L63caa5;
case 0x63caa6:c.instructions+=1;goto B63caa6;
case 0x63caa9:goto L63caa9;
case 0x63caab:c.instructions+=95;goto B63caab;
case 0x63caac:c.instructions+=94;goto B63caac;
case 0x63caae:c.instructions+=93;goto B63caae;
case 0x63caaf:c.instructions+=92;goto B63caaf;
case 0x63cab0:c.instructions+=91;goto B63cab0;
case 0x63cab3:c.instructions+=90;goto B63cab3;
case 0x63cab6:c.instructions+=89;goto B63cab6;
case 0x63cab9:c.instructions+=88;goto B63cab9;
case 0x63cabc:c.instructions+=87;goto B63cabc;
case 0x63cabf:c.instructions+=86;goto B63cabf;
case 0x63cac2:c.instructions+=85;goto B63cac2;
case 0x63cac3:c.instructions+=84;goto B63cac3;
case 0x63cac5:c.instructions+=83;goto B63cac5;
case 0x63cac8:c.instructions+=82;goto B63cac8;
case 0x63cace:c.instructions+=81;goto B63cace;
case 0x63cacf:c.instructions+=80;goto B63cacf;
case 0x63cad1:c.instructions+=79;goto B63cad1;
case 0x63cad4:c.instructions+=78;goto B63cad4;
case 0x63cad6:c.instructions+=77;goto B63cad6;
case 0x63cad8:c.instructions+=76;goto B63cad8;
case 0x63cadb:c.instructions+=75;goto B63cadb;
case 0x63cade:c.instructions+=74;goto B63cade;
case 0x63cae0:c.instructions+=73;goto B63cae0;
case 0x63cae6:c.instructions+=72;goto B63cae6;
case 0x63cae8:c.instructions+=71;goto B63cae8;
case 0x63caee:c.instructions+=70;goto B63caee;
case 0x63caf0:c.instructions+=69;goto B63caf0;
case 0x63caf2:c.instructions+=68;goto B63caf2;
case 0x63caf5:c.instructions+=67;goto B63caf5;
case 0x63caf7:c.instructions+=66;goto B63caf7;
case 0x63cafd:c.instructions+=65;goto B63cafd;
case 0x63caff:c.instructions+=64;goto B63caff;
case 0x63cb02:c.instructions+=63;goto B63cb02;
case 0x63cb05:c.instructions+=62;goto B63cb05;
case 0x63cb07:c.instructions+=61;goto B63cb07;
case 0x63cb09:c.instructions+=60;goto B63cb09;
case 0x63cb0b:c.instructions+=59;goto B63cb0b;
case 0x63cb11:c.instructions+=58;goto B63cb11;
case 0x63cb14:c.instructions+=57;goto B63cb14;
case 0x63cb16:c.instructions+=56;goto B63cb16;
case 0x63cb19:c.instructions+=55;goto B63cb19;
case 0x63cb1b:c.instructions+=54;goto B63cb1b;
case 0x63cb1d:c.instructions+=53;goto B63cb1d;
case 0x63cb20:c.instructions+=52;goto B63cb20;
case 0x63cb22:c.instructions+=51;goto B63cb22;
case 0x63cb24:c.instructions+=50;goto B63cb24;
case 0x63cb26:c.instructions+=49;goto B63cb26;
case 0x63cb28:c.instructions+=48;goto B63cb28;
case 0x63cb2a:c.instructions+=47;goto B63cb2a;
case 0x63cb2c:c.instructions+=46;goto B63cb2c;
case 0x63cb2e:c.instructions+=45;goto B63cb2e;
case 0x63cb30:c.instructions+=44;goto B63cb30;
case 0x63cb33:c.instructions+=43;goto B63cb33;
case 0x63cb36:c.instructions+=42;goto B63cb36;
case 0x63cb39:c.instructions+=41;goto B63cb39;
case 0x63cb3b:c.instructions+=40;goto B63cb3b;
case 0x63cb3e:c.instructions+=39;goto B63cb3e;
case 0x63cb41:c.instructions+=38;goto B63cb41;
case 0x63cb43:c.instructions+=37;goto B63cb43;
case 0x63cb46:c.instructions+=36;goto B63cb46;
case 0x63cb49:c.instructions+=35;goto B63cb49;
case 0x63cb4b:c.instructions+=34;goto B63cb4b;
case 0x63cb4d:c.instructions+=33;goto B63cb4d;
case 0x63cb50:c.instructions+=32;goto B63cb50;
case 0x63cb52:c.instructions+=31;goto B63cb52;
case 0x63cb55:c.instructions+=30;goto B63cb55;
case 0x63cb58:c.instructions+=29;goto B63cb58;
case 0x63cb5b:c.instructions+=28;goto B63cb5b;
case 0x63cb5d:c.instructions+=27;goto B63cb5d;
case 0x63cb60:c.instructions+=26;goto B63cb60;
case 0x63cb63:c.instructions+=25;goto B63cb63;
case 0x63cb65:c.instructions+=24;goto B63cb65;
case 0x63cb68:c.instructions+=23;goto B63cb68;
case 0x63cb6b:c.instructions+=22;goto B63cb6b;
case 0x63cb6d:c.instructions+=21;goto B63cb6d;
case 0x63cb6f:c.instructions+=20;goto B63cb6f;
case 0x63cb72:c.instructions+=19;goto B63cb72;
case 0x63cb74:c.instructions+=18;goto B63cb74;
case 0x63cb77:c.instructions+=17;goto B63cb77;
case 0x63cb7a:c.instructions+=16;goto B63cb7a;
case 0x63cb7d:c.instructions+=15;goto B63cb7d;
case 0x63cb7f:c.instructions+=14;goto B63cb7f;
case 0x63cb82:c.instructions+=13;goto B63cb82;
case 0x63cb85:c.instructions+=12;goto B63cb85;
case 0x63cb86:c.instructions+=11;goto B63cb86;
case 0x63cb87:c.instructions+=10;goto B63cb87;
case 0x63cb89:c.instructions+=9;goto B63cb89;
case 0x63cb8c:c.instructions+=8;goto B63cb8c;
case 0x63cb8f:c.instructions+=7;goto B63cb8f;
case 0x63cb91:c.instructions+=6;goto B63cb91;
case 0x63cb93:c.instructions+=5;goto B63cb93;
case 0x63cb96:c.instructions+=4;goto B63cb96;
case 0x63cb98:c.instructions+=3;goto B63cb98;
case 0x63cb9a:c.instructions+=2;goto B63cb9a;
case 0x63cb9b:c.instructions+=1;goto B63cb9b;
case 0x63cb9e:goto L63cb9e;
case 0x63cba0:c.instructions+=4;goto B63cba0;
case 0x63cba1:c.instructions+=3;goto B63cba1;
case 0x63cba3:c.instructions+=2;goto B63cba3;
case 0x63cba5:c.instructions+=1;goto B63cba5;
case 0x63cbaa:goto L63cbaa;
case 0x63cbad:c.instructions+=10;goto B63cbad;
case 0x63cbae:c.instructions+=9;goto B63cbae;
case 0x63cbaf:c.instructions+=8;goto B63cbaf;
case 0x63cbb3:c.instructions+=7;goto B63cbb3;
case 0x63cbb6:c.instructions+=6;goto B63cbb6;
case 0x63cbb9:c.instructions+=5;goto B63cbb9;
case 0x63cbbc:c.instructions+=4;goto B63cbbc;
case 0x63cbbf:c.instructions+=3;goto B63cbbf;
case 0x63cbc2:c.instructions+=2;goto B63cbc2;
case 0x63cbc5:c.instructions+=1;goto B63cbc5;
case 0x63cbcb:goto L63cbcb;
case 0x63cbcc:c.instructions+=1;goto B63cbcc;
case 0x63cbcf:goto L63cbcf;
case 0x63cbd1:c.instructions+=46;goto B63cbd1;
case 0x63cbd2:c.instructions+=45;goto B63cbd2;
case 0x63cbd4:c.instructions+=44;goto B63cbd4;
case 0x63cbd7:c.instructions+=43;goto B63cbd7;
case 0x63cbda:c.instructions+=42;goto B63cbda;
case 0x63cbdc:c.instructions+=41;goto B63cbdc;
case 0x63cbdf:c.instructions+=40;goto B63cbdf;
case 0x63cbe1:c.instructions+=39;goto B63cbe1;
case 0x63cbe2:c.instructions+=38;goto B63cbe2;
case 0x63cbe5:c.instructions+=37;goto B63cbe5;
case 0x63cbe8:c.instructions+=36;goto B63cbe8;
case 0x63cbea:c.instructions+=35;goto B63cbea;
case 0x63cbec:c.instructions+=34;goto B63cbec;
case 0x63cbef:c.instructions+=33;goto B63cbef;
case 0x63cbf1:c.instructions+=32;goto B63cbf1;
case 0x63cbf3:c.instructions+=31;goto B63cbf3;
case 0x63cbf5:c.instructions+=30;goto B63cbf5;
case 0x63cbf8:c.instructions+=29;goto B63cbf8;
case 0x63cbfb:c.instructions+=28;goto B63cbfb;
case 0x63cbfe:c.instructions+=27;goto B63cbfe;
case 0x63cc01:c.instructions+=26;goto B63cc01;
case 0x63cc04:c.instructions+=25;goto B63cc04;
case 0x63cc07:c.instructions+=24;goto B63cc07;
case 0x63cc09:c.instructions+=23;goto B63cc09;
case 0x63cc0c:c.instructions+=22;goto B63cc0c;
case 0x63cc0f:c.instructions+=21;goto B63cc0f;
case 0x63cc12:c.instructions+=20;goto B63cc12;
case 0x63cc15:c.instructions+=19;goto B63cc15;
case 0x63cc18:c.instructions+=18;goto B63cc18;
case 0x63cc1b:c.instructions+=17;goto B63cc1b;
case 0x63cc1e:c.instructions+=16;goto B63cc1e;
case 0x63cc21:c.instructions+=15;goto B63cc21;
case 0x63cc23:c.instructions+=14;goto B63cc23;
case 0x63cc26:c.instructions+=13;goto B63cc26;
case 0x63cc29:c.instructions+=12;goto B63cc29;
case 0x63cc2c:c.instructions+=11;goto B63cc2c;
case 0x63cc2f:c.instructions+=10;goto B63cc2f;
case 0x63cc32:c.instructions+=9;goto B63cc32;
case 0x63cc35:c.instructions+=8;goto B63cc35;
case 0x63cc36:c.instructions+=7;goto B63cc36;
case 0x63cc39:c.instructions+=6;goto B63cc39;
case 0x63cc3c:c.instructions+=5;goto B63cc3c;
case 0x63cc3e:c.instructions+=4;goto B63cc3e;
case 0x63cc41:c.instructions+=3;goto B63cc41;
case 0x63cc44:c.instructions+=2;goto B63cc44;
case 0x63cc45:c.instructions+=1;goto B63cc45;
case 0x63cc48:goto L63cc48;
case 0x63cc4a:c.instructions+=4;goto B63cc4a;
case 0x63cc4b:c.instructions+=3;goto B63cc4b;
case 0x63cc4d:c.instructions+=2;goto B63cc4d;
case 0x63cc4f:c.instructions+=1;goto B63cc4f;
case 0x63cc54:goto L63cc54;
case 0x63cc55:c.instructions+=1;goto B63cc55;
case 0x63cc5b:goto L63cc5b;
case 0x63cc5d:c.instructions+=66;goto B63cc5d;
case 0x63cc5e:c.instructions+=65;goto B63cc5e;
case 0x63cc60:c.instructions+=64;goto B63cc60;
case 0x63cc63:c.instructions+=63;goto B63cc63;
case 0x63cc66:c.instructions+=62;goto B63cc66;
case 0x63cc69:c.instructions+=61;goto B63cc69;
case 0x63cc6c:c.instructions+=60;goto B63cc6c;
case 0x63cc6f:c.instructions+=59;goto B63cc6f;
case 0x63cc70:c.instructions+=58;goto B63cc70;
case 0x63cc73:c.instructions+=57;goto B63cc73;
case 0x63cc74:c.instructions+=56;goto B63cc74;
case 0x63cc77:c.instructions+=55;goto B63cc77;
case 0x63cc7a:c.instructions+=54;goto B63cc7a;
case 0x63cc7c:c.instructions+=53;goto B63cc7c;
case 0x63cc7f:c.instructions+=52;goto B63cc7f;
case 0x63cc82:c.instructions+=51;goto B63cc82;
case 0x63cc84:c.instructions+=50;goto B63cc84;
case 0x63cc86:c.instructions+=49;goto B63cc86;
case 0x63cc88:c.instructions+=48;goto B63cc88;
case 0x63cc8a:c.instructions+=47;goto B63cc8a;
case 0x63cc8d:c.instructions+=46;goto B63cc8d;
case 0x63cc90:c.instructions+=45;goto B63cc90;
case 0x63cc93:c.instructions+=44;goto B63cc93;
case 0x63cc96:c.instructions+=43;goto B63cc96;
case 0x63cc99:c.instructions+=42;goto B63cc99;
case 0x63cc9b:c.instructions+=41;goto B63cc9b;
case 0x63cc9e:c.instructions+=40;goto B63cc9e;
case 0x63cca0:c.instructions+=39;goto B63cca0;
case 0x63cca2:c.instructions+=38;goto B63cca2;
case 0x63cca5:c.instructions+=37;goto B63cca5;
case 0x63cca8:c.instructions+=36;goto B63cca8;
case 0x63ccaa:c.instructions+=35;goto B63ccaa;
case 0x63ccad:c.instructions+=34;goto B63ccad;
case 0x63ccb0:c.instructions+=33;goto B63ccb0;
case 0x63ccb3:c.instructions+=32;goto B63ccb3;
case 0x63ccb6:c.instructions+=31;goto B63ccb6;
case 0x63ccb9:c.instructions+=30;goto B63ccb9;
case 0x63ccbb:c.instructions+=29;goto B63ccbb;
case 0x63ccbe:c.instructions+=28;goto B63ccbe;
case 0x63ccc0:c.instructions+=27;goto B63ccc0;
case 0x63ccc2:c.instructions+=26;goto B63ccc2;
case 0x63ccc5:c.instructions+=25;goto B63ccc5;
case 0x63ccc8:c.instructions+=24;goto B63ccc8;
case 0x63ccca:c.instructions+=23;goto B63ccca;
case 0x63cccd:c.instructions+=22;goto B63cccd;
case 0x63ccd0:c.instructions+=21;goto B63ccd0;
case 0x63ccd3:c.instructions+=20;goto B63ccd3;
case 0x63ccd6:c.instructions+=19;goto B63ccd6;
case 0x63ccd9:c.instructions+=18;goto B63ccd9;
case 0x63ccdb:c.instructions+=17;goto B63ccdb;
case 0x63ccde:c.instructions+=16;goto B63ccde;
case 0x63cce0:c.instructions+=15;goto B63cce0;
case 0x63cce2:c.instructions+=14;goto B63cce2;
case 0x63cce5:c.instructions+=13;goto B63cce5;
case 0x63cce8:c.instructions+=12;goto B63cce8;
case 0x63cceb:c.instructions+=11;goto B63cceb;
case 0x63cced:c.instructions+=10;goto B63cced;
case 0x63ccef:c.instructions+=9;goto B63ccef;
case 0x63ccf2:c.instructions+=8;goto B63ccf2;
case 0x63ccf3:c.instructions+=7;goto B63ccf3;
case 0x63ccf4:c.instructions+=6;goto B63ccf4;
case 0x63ccf5:c.instructions+=5;goto B63ccf5;
case 0x63ccf6:c.instructions+=4;goto B63ccf6;
case 0x63ccf7:c.instructions+=3;goto B63ccf7;
case 0x63ccf8:c.instructions+=2;goto B63ccf8;
case 0x63ccf9:c.instructions+=1;goto B63ccf9;
case 0x63ccfc:goto L63ccfc;
case 0x63ccfe:c.instructions+=4;goto B63ccfe;
case 0x63ccff:c.instructions+=3;goto B63ccff;
case 0x63cd01:c.instructions+=2;goto B63cd01;
case 0x63cd03:c.instructions+=1;goto B63cd03;
case 0x63cd08:goto L63cd08;
case 0x63cd09:c.instructions+=1;goto B63cd09;
case 0x63cd0f:goto L63cd0f;
case 0x63cd11:c.instructions+=9;goto B63cd11;
case 0x63cd12:c.instructions+=8;goto B63cd12;
case 0x63cd14:c.instructions+=7;goto B63cd14;
case 0x63cd17:c.instructions+=6;goto B63cd17;
case 0x63cd1a:c.instructions+=5;goto B63cd1a;
case 0x63cd1c:c.instructions+=4;goto B63cd1c;
case 0x63cd1d:c.instructions+=3;goto B63cd1d;
case 0x63cd20:c.instructions+=2;goto B63cd20;
case 0x63cd23:c.instructions+=1;goto B63cd23;
case 0x63cd29:goto L63cd29;
case 0x63cd2c:c.instructions+=3;goto B63cd2c;
case 0x63cd2f:c.instructions+=2;goto B63cd2f;
case 0x63cd30:c.instructions+=1;goto B63cd30;
case 0x63cd31:goto L63cd31;
case 0x63cd34:c.instructions+=57;goto B63cd34;
case 0x63cd36:c.instructions+=56;goto B63cd36;
case 0x63cd39:c.instructions+=55;goto B63cd39;
case 0x63cd3c:c.instructions+=54;goto B63cd3c;
case 0x63cd3f:c.instructions+=53;goto B63cd3f;
case 0x63cd42:c.instructions+=52;goto B63cd42;
case 0x63cd45:c.instructions+=51;goto B63cd45;
case 0x63cd47:c.instructions+=50;goto B63cd47;
case 0x63cd4a:c.instructions+=49;goto B63cd4a;
case 0x63cd4d:c.instructions+=48;goto B63cd4d;
case 0x63cd4f:c.instructions+=47;goto B63cd4f;
case 0x63cd51:c.instructions+=46;goto B63cd51;
case 0x63cd53:c.instructions+=45;goto B63cd53;
case 0x63cd55:c.instructions+=44;goto B63cd55;
case 0x63cd58:c.instructions+=43;goto B63cd58;
case 0x63cd5b:c.instructions+=42;goto B63cd5b;
case 0x63cd5e:c.instructions+=41;goto B63cd5e;
case 0x63cd61:c.instructions+=40;goto B63cd61;
case 0x63cd64:c.instructions+=39;goto B63cd64;
case 0x63cd66:c.instructions+=38;goto B63cd66;
case 0x63cd69:c.instructions+=37;goto B63cd69;
case 0x63cd6c:c.instructions+=36;goto B63cd6c;
case 0x63cd6e:c.instructions+=35;goto B63cd6e;
case 0x63cd70:c.instructions+=34;goto B63cd70;
case 0x63cd73:c.instructions+=33;goto B63cd73;
case 0x63cd75:c.instructions+=32;goto B63cd75;
case 0x63cd78:c.instructions+=31;goto B63cd78;
case 0x63cd7b:c.instructions+=30;goto B63cd7b;
case 0x63cd7d:c.instructions+=29;goto B63cd7d;
case 0x63cd80:c.instructions+=28;goto B63cd80;
case 0x63cd83:c.instructions+=27;goto B63cd83;
case 0x63cd85:c.instructions+=26;goto B63cd85;
case 0x63cd88:c.instructions+=25;goto B63cd88;
case 0x63cd8b:c.instructions+=24;goto B63cd8b;
case 0x63cd8d:c.instructions+=23;goto B63cd8d;
case 0x63cd90:c.instructions+=22;goto B63cd90;
case 0x63cd93:c.instructions+=21;goto B63cd93;
case 0x63cd95:c.instructions+=20;goto B63cd95;
case 0x63cd98:c.instructions+=19;goto B63cd98;
case 0x63cd9b:c.instructions+=18;goto B63cd9b;
case 0x63cd9e:c.instructions+=17;goto B63cd9e;
case 0x63cda1:c.instructions+=16;goto B63cda1;
case 0x63cda3:c.instructions+=15;goto B63cda3;
case 0x63cda5:c.instructions+=14;goto B63cda5;
case 0x63cda8:c.instructions+=13;goto B63cda8;
case 0x63cdab:c.instructions+=12;goto B63cdab;
case 0x63cdad:c.instructions+=11;goto B63cdad;
case 0x63cdb0:c.instructions+=10;goto B63cdb0;
case 0x63cdb3:c.instructions+=9;goto B63cdb3;
case 0x63cdb6:c.instructions+=8;goto B63cdb6;
case 0x63cdb7:c.instructions+=7;goto B63cdb7;
case 0x63cdb9:c.instructions+=6;goto B63cdb9;
case 0x63cdbc:c.instructions+=5;goto B63cdbc;
case 0x63cdbd:c.instructions+=4;goto B63cdbd;
case 0x63cdbe:c.instructions+=3;goto B63cdbe;
case 0x63cdbf:c.instructions+=2;goto B63cdbf;
case 0x63cdc0:c.instructions+=1;goto B63cdc0;
case 0x63cdc6:goto L63cdc6;
case 0x63cdc7:c.instructions+=1;goto B63cdc7;
case 0x63cdc8:goto L63cdc8;
case 0x63cdcb:c.instructions+=3;goto B63cdcb;
case 0x63cdcc:c.instructions+=2;goto B63cdcc;
case 0x63cdcd:c.instructions+=1;goto B63cdcd;
case 0x63cdd0:goto L63cdd0;
case 0x63cdd2:c.instructions+=4;goto B63cdd2;
case 0x63cdd3:c.instructions+=3;goto B63cdd3;
case 0x63cdd5:c.instructions+=2;goto B63cdd5;
case 0x63cdd7:c.instructions+=1;goto B63cdd7;
case 0x63cddc:goto L63cddc;
case 0x63cddd:c.instructions+=1;goto B63cddd;
case 0x63cde3:goto L63cde3;
case 0x63cde9:goto L63cde9;
case 0x63cdeb:c.instructions+=80;goto B63cdeb;
case 0x63cdec:c.instructions+=79;goto B63cdec;
case 0x63cdee:c.instructions+=78;goto B63cdee;
case 0x63cdf1:c.instructions+=77;goto B63cdf1;
case 0x63cdf4:c.instructions+=76;goto B63cdf4;
case 0x63cdf7:c.instructions+=75;goto B63cdf7;
case 0x63cdfa:c.instructions+=74;goto B63cdfa;
case 0x63cdfd:c.instructions+=73;goto B63cdfd;
case 0x63cdff:c.instructions+=72;goto B63cdff;
case 0x63ce02:c.instructions+=71;goto B63ce02;
case 0x63ce05:c.instructions+=70;goto B63ce05;
case 0x63ce08:c.instructions+=69;goto B63ce08;
case 0x63ce0b:c.instructions+=68;goto B63ce0b;
case 0x63ce0d:c.instructions+=67;goto B63ce0d;
case 0x63ce10:c.instructions+=66;goto B63ce10;
case 0x63ce13:c.instructions+=65;goto B63ce13;
case 0x63ce16:c.instructions+=64;goto B63ce16;
case 0x63ce19:c.instructions+=63;goto B63ce19;
case 0x63ce1b:c.instructions+=62;goto B63ce1b;
case 0x63ce1e:c.instructions+=61;goto B63ce1e;
case 0x63ce21:c.instructions+=60;goto B63ce21;
case 0x63ce24:c.instructions+=59;goto B63ce24;
case 0x63ce27:c.instructions+=58;goto B63ce27;
case 0x63ce29:c.instructions+=57;goto B63ce29;
case 0x63ce2c:c.instructions+=56;goto B63ce2c;
case 0x63ce2f:c.instructions+=55;goto B63ce2f;
case 0x63ce32:c.instructions+=54;goto B63ce32;
case 0x63ce35:c.instructions+=53;goto B63ce35;
case 0x63ce37:c.instructions+=52;goto B63ce37;
case 0x63ce3a:c.instructions+=51;goto B63ce3a;
case 0x63ce3d:c.instructions+=50;goto B63ce3d;
case 0x63ce40:c.instructions+=49;goto B63ce40;
case 0x63ce43:c.instructions+=48;goto B63ce43;
case 0x63ce45:c.instructions+=47;goto B63ce45;
case 0x63ce48:c.instructions+=46;goto B63ce48;
case 0x63ce4a:c.instructions+=45;goto B63ce4a;
case 0x63ce4d:c.instructions+=44;goto B63ce4d;
case 0x63ce4f:c.instructions+=43;goto B63ce4f;
case 0x63ce52:c.instructions+=42;goto B63ce52;
case 0x63ce54:c.instructions+=41;goto B63ce54;
case 0x63ce56:c.instructions+=40;goto B63ce56;
case 0x63ce59:c.instructions+=39;goto B63ce59;
case 0x63ce5b:c.instructions+=38;goto B63ce5b;
case 0x63ce5d:c.instructions+=37;goto B63ce5d;
case 0x63ce5f:c.instructions+=36;goto B63ce5f;
case 0x63ce62:c.instructions+=35;goto B63ce62;
case 0x63ce64:c.instructions+=34;goto B63ce64;
case 0x63ce67:c.instructions+=33;goto B63ce67;
case 0x63ce69:c.instructions+=32;goto B63ce69;
case 0x63ce6b:c.instructions+=31;goto B63ce6b;
case 0x63ce6e:c.instructions+=30;goto B63ce6e;
case 0x63ce70:c.instructions+=29;goto B63ce70;
case 0x63ce73:c.instructions+=28;goto B63ce73;
case 0x63ce75:c.instructions+=27;goto B63ce75;
case 0x63ce77:c.instructions+=26;goto B63ce77;
case 0x63ce7a:c.instructions+=25;goto B63ce7a;
case 0x63ce7c:c.instructions+=24;goto B63ce7c;
case 0x63ce7f:c.instructions+=23;goto B63ce7f;
case 0x63ce81:c.instructions+=22;goto B63ce81;
case 0x63ce84:c.instructions+=21;goto B63ce84;
case 0x63ce87:c.instructions+=20;goto B63ce87;
case 0x63ce89:c.instructions+=19;goto B63ce89;
case 0x63ce8c:c.instructions+=18;goto B63ce8c;
case 0x63ce8e:c.instructions+=17;goto B63ce8e;
case 0x63ce90:c.instructions+=16;goto B63ce90;
case 0x63ce93:c.instructions+=15;goto B63ce93;
case 0x63ce95:c.instructions+=14;goto B63ce95;
case 0x63ce98:c.instructions+=13;goto B63ce98;
case 0x63ce9a:c.instructions+=12;goto B63ce9a;
case 0x63ce9d:c.instructions+=11;goto B63ce9d;
case 0x63cea0:c.instructions+=10;goto B63cea0;
case 0x63cea2:c.instructions+=9;goto B63cea2;
case 0x63cea5:c.instructions+=8;goto B63cea5;
case 0x63cea7:c.instructions+=7;goto B63cea7;
case 0x63cea9:c.instructions+=6;goto B63cea9;
case 0x63ceab:c.instructions+=5;goto B63ceab;
case 0x63cead:c.instructions+=4;goto B63cead;
case 0x63ceaf:c.instructions+=3;goto B63ceaf;
case 0x63ceb1:c.instructions+=2;goto B63ceb1;
case 0x63ceb2:c.instructions+=1;goto B63ceb2;
case 0x63ceb5:goto L63ceb5;
case 0x63ceb7:c.instructions+=4;goto B63ceb7;
case 0x63ceb8:c.instructions+=3;goto B63ceb8;
case 0x63ceba:c.instructions+=2;goto B63ceba;
case 0x63cebc:c.instructions+=1;goto B63cebc;
case 0x63cec1:goto L63cec1;
case 0x63cec2:c.instructions+=1;goto B63cec2;
case 0x63cec8:goto L63cec8;
case 0x63ceca:c.instructions+=4;goto B63ceca;
case 0x63cecb:c.instructions+=3;goto B63cecb;
case 0x63cecd:c.instructions+=2;goto B63cecd;
case 0x63cecf:c.instructions+=1;goto B63cecf;
case 0x63ced4:goto L63ced4;
case 0x63ced5:c.instructions+=1;goto B63ced5;
case 0x63cedb:goto L63cedb;
case 0x63cee1:goto L63cee1;
case 0x63cee3:c.instructions+=9;goto B63cee3;
case 0x63cee4:c.instructions+=8;goto B63cee4;
case 0x63cee6:c.instructions+=7;goto B63cee6;
case 0x63cee9:c.instructions+=6;goto B63cee9;
case 0x63ceec:c.instructions+=5;goto B63ceec;
case 0x63ceef:c.instructions+=4;goto B63ceef;
case 0x63cef1:c.instructions+=3;goto B63cef1;
case 0x63cef4:c.instructions+=2;goto B63cef4;
case 0x63cef5:c.instructions+=1;goto B63cef5;
case 0x63cef7:goto L63cef7;
case 0x63cef9:c.instructions+=2;goto B63cef9;
case 0x63cefb:c.instructions+=1;goto B63cefb;
case 0x63cefd:goto L63cefd;
case 0x63cf00:goto L63cf00;
case 0x63cf03:c.instructions+=95;goto B63cf03;
case 0x63cf06:c.instructions+=94;goto B63cf06;
case 0x63cf08:c.instructions+=93;goto B63cf08;
case 0x63cf0a:c.instructions+=92;goto B63cf0a;
case 0x63cf0c:c.instructions+=91;goto B63cf0c;
case 0x63cf0f:c.instructions+=90;goto B63cf0f;
case 0x63cf12:c.instructions+=89;goto B63cf12;
case 0x63cf14:c.instructions+=88;goto B63cf14;
case 0x63cf17:c.instructions+=87;goto B63cf17;
case 0x63cf1a:c.instructions+=86;goto B63cf1a;
case 0x63cf1c:c.instructions+=85;goto B63cf1c;
case 0x63cf1e:c.instructions+=84;goto B63cf1e;
case 0x63cf21:c.instructions+=83;goto B63cf21;
case 0x63cf24:c.instructions+=82;goto B63cf24;
case 0x63cf27:c.instructions+=81;goto B63cf27;
case 0x63cf2a:c.instructions+=80;goto B63cf2a;
case 0x63cf2c:c.instructions+=79;goto B63cf2c;
case 0x63cf2f:c.instructions+=78;goto B63cf2f;
case 0x63cf32:c.instructions+=77;goto B63cf32;
case 0x63cf34:c.instructions+=76;goto B63cf34;
case 0x63cf37:c.instructions+=75;goto B63cf37;
case 0x63cf39:c.instructions+=74;goto B63cf39;
case 0x63cf3b:c.instructions+=73;goto B63cf3b;
case 0x63cf3e:c.instructions+=72;goto B63cf3e;
case 0x63cf41:c.instructions+=71;goto B63cf41;
case 0x63cf44:c.instructions+=70;goto B63cf44;
case 0x63cf47:c.instructions+=69;goto B63cf47;
case 0x63cf49:c.instructions+=68;goto B63cf49;
case 0x63cf4b:c.instructions+=67;goto B63cf4b;
case 0x63cf4e:c.instructions+=66;goto B63cf4e;
case 0x63cf51:c.instructions+=65;goto B63cf51;
case 0x63cf53:c.instructions+=64;goto B63cf53;
case 0x63cf56:c.instructions+=63;goto B63cf56;
case 0x63cf59:c.instructions+=62;goto B63cf59;
case 0x63cf5b:c.instructions+=61;goto B63cf5b;
case 0x63cf5e:c.instructions+=60;goto B63cf5e;
case 0x63cf61:c.instructions+=59;goto B63cf61;
case 0x63cf64:c.instructions+=58;goto B63cf64;
case 0x63cf67:c.instructions+=57;goto B63cf67;
case 0x63cf6a:c.instructions+=56;goto B63cf6a;
case 0x63cf6c:c.instructions+=55;goto B63cf6c;
case 0x63cf6e:c.instructions+=54;goto B63cf6e;
case 0x63cf71:c.instructions+=53;goto B63cf71;
case 0x63cf73:c.instructions+=52;goto B63cf73;
case 0x63cf76:c.instructions+=51;goto B63cf76;
case 0x63cf79:c.instructions+=50;goto B63cf79;
case 0x63cf7b:c.instructions+=49;goto B63cf7b;
case 0x63cf7e:c.instructions+=48;goto B63cf7e;
case 0x63cf81:c.instructions+=47;goto B63cf81;
case 0x63cf84:c.instructions+=46;goto B63cf84;
case 0x63cf87:c.instructions+=45;goto B63cf87;
case 0x63cf89:c.instructions+=44;goto B63cf89;
case 0x63cf8b:c.instructions+=43;goto B63cf8b;
case 0x63cf8e:c.instructions+=42;goto B63cf8e;
case 0x63cf91:c.instructions+=41;goto B63cf91;
case 0x63cf93:c.instructions+=40;goto B63cf93;
case 0x63cf96:c.instructions+=39;goto B63cf96;
case 0x63cf99:c.instructions+=38;goto B63cf99;
case 0x63cf9b:c.instructions+=37;goto B63cf9b;
case 0x63cf9e:c.instructions+=36;goto B63cf9e;
case 0x63cfa1:c.instructions+=35;goto B63cfa1;
case 0x63cfa4:c.instructions+=34;goto B63cfa4;
case 0x63cfa7:c.instructions+=33;goto B63cfa7;
case 0x63cfaa:c.instructions+=32;goto B63cfaa;
case 0x63cfac:c.instructions+=31;goto B63cfac;
case 0x63cfaf:c.instructions+=30;goto B63cfaf;
case 0x63cfb2:c.instructions+=29;goto B63cfb2;
case 0x63cfb4:c.instructions+=28;goto B63cfb4;
case 0x63cfb7:c.instructions+=27;goto B63cfb7;
case 0x63cfba:c.instructions+=26;goto B63cfba;
case 0x63cfbc:c.instructions+=25;goto B63cfbc;
case 0x63cfbf:c.instructions+=24;goto B63cfbf;
case 0x63cfc2:c.instructions+=23;goto B63cfc2;
case 0x63cfc5:c.instructions+=22;goto B63cfc5;
case 0x63cfc8:c.instructions+=21;goto B63cfc8;
case 0x63cfcb:c.instructions+=20;goto B63cfcb;
case 0x63cfcd:c.instructions+=19;goto B63cfcd;
case 0x63cfd0:c.instructions+=18;goto B63cfd0;
case 0x63cfd3:c.instructions+=17;goto B63cfd3;
case 0x63cfd5:c.instructions+=16;goto B63cfd5;
case 0x63cfd8:c.instructions+=15;goto B63cfd8;
case 0x63cfdb:c.instructions+=14;goto B63cfdb;
case 0x63cfdd:c.instructions+=13;goto B63cfdd;
case 0x63cfe0:c.instructions+=12;goto B63cfe0;
case 0x63cfe3:c.instructions+=11;goto B63cfe3;
case 0x63cfe6:c.instructions+=10;goto B63cfe6;
case 0x63cfe9:c.instructions+=9;goto B63cfe9;
case 0x63cfec:c.instructions+=8;goto B63cfec;
case 0x63cfee:c.instructions+=7;goto B63cfee;
case 0x63cff1:c.instructions+=6;goto B63cff1;
case 0x63cff4:c.instructions+=5;goto B63cff4;
case 0x63cff6:c.instructions+=4;goto B63cff6;
case 0x63cff9:c.instructions+=3;goto B63cff9;
case 0x63cffc:c.instructions+=2;goto B63cffc;
case 0x63cffe:c.instructions+=1;goto B63cffe;
default:missing_instruction(c.pc);}
B63c001:L63c001:{c.instructions+=51;NFSU2_TR(0x63c001);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B63c003:{NFSU2_TR(0x63c003);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c006:{NFSU2_TR(0x63c006);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c009:{NFSU2_TR(0x63c009);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c00b:{NFSU2_TR(0x63c00b);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c011:{NFSU2_TR(0x63c011);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63c013:{NFSU2_TR(0x63c013);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c019:{NFSU2_TR(0x63c019);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63c01b:{NFSU2_TR(0x63c01b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63c01d:{NFSU2_TR(0x63c01d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c020:{NFSU2_TR(0x63c020);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63c022:{NFSU2_TR(0x63c022);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c028:{NFSU2_TR(0x63c028);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63c02a:{NFSU2_TR(0x63c02a);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c02d:{NFSU2_TR(0x63c02d);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c030:{NFSU2_TR(0x63c030);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c032:{NFSU2_TR(0x63c032);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c034:{NFSU2_TR(0x63c034);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B63c036:{NFSU2_TR(0x63c036);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c03c:{NFSU2_TR(0x63c03c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c03f:{NFSU2_TR(0x63c03f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c041:{NFSU2_TR(0x63c041);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c044:{NFSU2_TR(0x63c044);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c046:{NFSU2_TR(0x63c046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c048:{NFSU2_TR(0x63c048);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c04b:{NFSU2_TR(0x63c04b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c04d:{NFSU2_TR(0x63c04d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c04f:{NFSU2_TR(0x63c04f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63c051:{NFSU2_TR(0x63c051);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c053:{NFSU2_TR(0x63c053);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c055:{NFSU2_TR(0x63c055);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c057:{NFSU2_TR(0x63c057);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c059:{NFSU2_TR(0x63c059);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c05b:{NFSU2_TR(0x63c05b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c05e:{NFSU2_TR(0x63c05e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c05f:{NFSU2_TR(0x63c05f);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c062:{NFSU2_TR(0x63c062);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c065:{NFSU2_TR(0x63c065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c066:{NFSU2_TR(0x63c066);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c068:{NFSU2_TR(0x63c068);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c06b:{NFSU2_TR(0x63c06b);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c06e:{NFSU2_TR(0x63c06e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c070:{NFSU2_TR(0x63c070);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c073:{NFSU2_TR(0x63c073);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c076:{NFSU2_TR(0x63c076);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c078:{NFSU2_TR(0x63c078);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c07a:{NFSU2_TR(0x63c07a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c07d:{NFSU2_TR(0x63c07d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c07f:{NFSU2_TR(0x63c07f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c081:{NFSU2_TR(0x63c081);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c082:{NFSU2_TR(0x63c082);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c085:L63c085:{c.instructions+=5;NFSU2_TR(0x63c085);
__builtin_memmove((R+28),(R+28),4);
}
B63c087:{NFSU2_TR(0x63c087);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c088:{NFSU2_TR(0x63c088);
__builtin_memmove((R+20),(R+16),4);
}
B63c08a:{NFSU2_TR(0x63c08a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c08c:{NFSU2_TR(0x63c08c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c091ull));
TAIL_STATIC(0x641713u,641);
}
B63c091:L63c091:{c.instructions+=11;NFSU2_TR(0x63c091);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c094:{NFSU2_TR(0x63c094);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c095:{NFSU2_TR(0x63c095);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c096:{NFSU2_TR(0x63c096);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c09a:{NFSU2_TR(0x63c09a);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c09d:{NFSU2_TR(0x63c09d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c0a0:{NFSU2_TR(0x63c0a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c0a3:{NFSU2_TR(0x63c0a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c0a6:{NFSU2_TR(0x63c0a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c0a9:{NFSU2_TR(0x63c0a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c0ac:{NFSU2_TR(0x63c0ac);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f2c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c0b2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63c0b2:L63c0b2:{c.instructions+=2;NFSU2_TR(0x63c0b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c0b3:{NFSU2_TR(0x63c0b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c0b6:L63c0b6:{c.instructions+=29;NFSU2_TR(0x63c0b6);
__builtin_memmove((R+28),(R+28),4);
}
B63c0b8:{NFSU2_TR(0x63c0b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c0b9:{NFSU2_TR(0x63c0b9);
__builtin_memmove((R+20),(R+16),4);
}
B63c0bb:{NFSU2_TR(0x63c0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c0be:{NFSU2_TR(0x63c0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c0c1:{NFSU2_TR(0x63c0c1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c0c3:{NFSU2_TR(0x63c0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c0c6:{NFSU2_TR(0x63c0c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c0c8:{NFSU2_TR(0x63c0c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c0c9:{NFSU2_TR(0x63c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63c0cc:{NFSU2_TR(0x63c0cc);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c0cf:{NFSU2_TR(0x63c0cf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c0d1:{NFSU2_TR(0x63c0d1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c0d3:{NFSU2_TR(0x63c0d3);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c0d6:{NFSU2_TR(0x63c0d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c0d8:{NFSU2_TR(0x63c0d8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c0da:{NFSU2_TR(0x63c0da);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c0dc:{NFSU2_TR(0x63c0dc);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c0df:{NFSU2_TR(0x63c0df);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c0e2:{NFSU2_TR(0x63c0e2);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c0e5:{NFSU2_TR(0x63c0e5);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c0e8:{NFSU2_TR(0x63c0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c0e9:{NFSU2_TR(0x63c0e9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c0ec:{NFSU2_TR(0x63c0ec);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c0ef:{NFSU2_TR(0x63c0ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c0f1:{NFSU2_TR(0x63c0f1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c0f4:{NFSU2_TR(0x63c0f4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c0f7:{NFSU2_TR(0x63c0f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c0f8:{NFSU2_TR(0x63c0f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c0fb:L63c0fb:{c.instructions+=5;NFSU2_TR(0x63c0fb);
__builtin_memmove((R+28),(R+28),4);
}
B63c0fd:{NFSU2_TR(0x63c0fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c0fe:{NFSU2_TR(0x63c0fe);
__builtin_memmove((R+20),(R+16),4);
}
B63c100:{NFSU2_TR(0x63c100);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c102:{NFSU2_TR(0x63c102);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c107ull));
TAIL_STATIC(0x641713u,641);
}
B63c107:L63c107:{c.instructions+=2;NFSU2_TR(0x63c107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c108:{NFSU2_TR(0x63c108);
{u32 t_=u32(m4(0x803e68));TAIL_DYNAMIC(t_);}
}
B63c10e:L63c10e:{c.instructions+=1;NFSU2_TR(0x63c10e);
{u32 t_=u32(m4(0x803e68));TAIL_DYNAMIC(t_);}
}
B63c114:L63c114:{c.instructions+=5;NFSU2_TR(0x63c114);
__builtin_memmove((R+28),(R+28),4);
}
B63c116:{NFSU2_TR(0x63c116);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c117:{NFSU2_TR(0x63c117);
__builtin_memmove((R+20),(R+16),4);
}
B63c119:{NFSU2_TR(0x63c119);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c11b:{NFSU2_TR(0x63c11b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c120ull));
TAIL_STATIC(0x641713u,641);
}
B63c120:L63c120:{c.instructions+=2;NFSU2_TR(0x63c120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c121:{NFSU2_TR(0x63c121);
{u32 t_=u32(m4(0x803f58));TAIL_DYNAMIC(t_);}
}
B63c127:L63c127:{c.instructions+=5;NFSU2_TR(0x63c127);
__builtin_memmove((R+28),(R+28),4);
}
B63c129:{NFSU2_TR(0x63c129);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c12a:{NFSU2_TR(0x63c12a);
__builtin_memmove((R+20),(R+16),4);
}
B63c12c:{NFSU2_TR(0x63c12c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c12e:{NFSU2_TR(0x63c12e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c133ull));
TAIL_STATIC(0x641713u,641);
}
B63c133:L63c133:{c.instructions+=2;NFSU2_TR(0x63c133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c134:{NFSU2_TR(0x63c134);
{u32 t_=u32(m4(0x803e8c));TAIL_DYNAMIC(t_);}
}
B63c13a:L63c13a:{c.instructions+=1;NFSU2_TR(0x63c13a);
{u32 t_=u32(m4(0x803e8c));TAIL_DYNAMIC(t_);}
}
B63c140:L63c140:{c.instructions+=5;NFSU2_TR(0x63c140);
__builtin_memmove((R+28),(R+28),4);
}
B63c142:{NFSU2_TR(0x63c142);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c143:{NFSU2_TR(0x63c143);
__builtin_memmove((R+20),(R+16),4);
}
B63c145:{NFSU2_TR(0x63c145);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c147:{NFSU2_TR(0x63c147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c14cull));
TAIL_STATIC(0x641713u,641);
}
B63c14c:L63c14c:{c.instructions+=2;NFSU2_TR(0x63c14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c14d:{NFSU2_TR(0x63c14d);
{u32 t_=u32(m4(0x803f5c));TAIL_DYNAMIC(t_);}
}
B63c153:L63c153:{c.instructions+=5;NFSU2_TR(0x63c153);
__builtin_memmove((R+28),(R+28),4);
}
B63c155:{NFSU2_TR(0x63c155);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c156:{NFSU2_TR(0x63c156);
__builtin_memmove((R+20),(R+16),4);
}
B63c158:{NFSU2_TR(0x63c158);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c15a:{NFSU2_TR(0x63c15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c15full));
TAIL_STATIC(0x641713u,641);
}
B63c15f:L63c15f:{c.instructions+=2;NFSU2_TR(0x63c15f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c160:{NFSU2_TR(0x63c160);
{u32 t_=u32(m4(0x803e7c));TAIL_DYNAMIC(t_);}
}
B63c166:L63c166:{c.instructions+=1;NFSU2_TR(0x63c166);
{u32 t_=u32(m4(0x803e7c));TAIL_DYNAMIC(t_);}
}
B63c16c:L63c16c:{c.instructions+=26;NFSU2_TR(0x63c16c);
__builtin_memmove((R+28),(R+28),4);
}
B63c16e:{NFSU2_TR(0x63c16e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c16f:{NFSU2_TR(0x63c16f);
__builtin_memmove((R+20),(R+16),4);
}
B63c171:{NFSU2_TR(0x63c171);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c172:{NFSU2_TR(0x63c172);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c173:{NFSU2_TR(0x63c173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c176:{NFSU2_TR(0x63c176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c179:{NFSU2_TR(0x63c179);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c17c:{NFSU2_TR(0x63c17c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c17f:{NFSU2_TR(0x63c17f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c181:{NFSU2_TR(0x63c181);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c183:{NFSU2_TR(0x63c183);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c185:{NFSU2_TR(0x63c185);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c188:{NFSU2_TR(0x63c188);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c18b:{NFSU2_TR(0x63c18b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c18d:{NFSU2_TR(0x63c18d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c190:{NFSU2_TR(0x63c190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c193:{NFSU2_TR(0x63c193);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c196:{NFSU2_TR(0x63c196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c199:{NFSU2_TR(0x63c199);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63c19b:{NFSU2_TR(0x63c19b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c19d:{NFSU2_TR(0x63c19d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c1a0:{NFSU2_TR(0x63c1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c1a3:{NFSU2_TR(0x63c1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63c1a6:{NFSU2_TR(0x63c1a6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c1a7:{NFSU2_TR(0x63c1a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c1aa:L63c1aa:{c.instructions+=5;NFSU2_TR(0x63c1aa);
__builtin_memmove((R+28),(R+28),4);
}
B63c1ac:{NFSU2_TR(0x63c1ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1ad:{NFSU2_TR(0x63c1ad);
__builtin_memmove((R+20),(R+16),4);
}
B63c1af:{NFSU2_TR(0x63c1af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1b1:{NFSU2_TR(0x63c1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c1b6ull));
TAIL_STATIC(0x641713u,641);
}
B63c1b6:L63c1b6:{c.instructions+=2;NFSU2_TR(0x63c1b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c1b7:{NFSU2_TR(0x63c1b7);
{u32 t_=u32(m4(0x803f60));TAIL_DYNAMIC(t_);}
}
B63c1bd:L63c1bd:{c.instructions+=12;NFSU2_TR(0x63c1bd);
__builtin_memmove((R+28),(R+28),4);
}
B63c1bf:{NFSU2_TR(0x63c1bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1c0:{NFSU2_TR(0x63c1c0);
__builtin_memmove((R+20),(R+16),4);
}
B63c1c2:{NFSU2_TR(0x63c1c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1c3:{NFSU2_TR(0x63c1c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1c4:{NFSU2_TR(0x63c1c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1c5:{NFSU2_TR(0x63c1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63c1c8:{NFSU2_TR(0x63c1c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1c9:{NFSU2_TR(0x63c1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63c1cc:{NFSU2_TR(0x63c1cc);
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
B63c1ce:{NFSU2_TR(0x63c1ce);
__builtin_memmove((R+0),(R+24),4);
}
B63c1d0:{NFSU2_TR(0x63c1d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63c20d;}}
}
B63c1d2:L63c1d2:{c.instructions+=3;NFSU2_TR(0x63c1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c1d5:{NFSU2_TR(0x63c1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c1d8:{NFSU2_TR(0x63c1d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c1d9:L63c1d9:{c.instructions+=20;NFSU2_TR(0x63c1d9);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c1dc:{NFSU2_TR(0x63c1dc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c1df:{NFSU2_TR(0x63c1df);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c1e1:{NFSU2_TR(0x63c1e1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c1e3:{NFSU2_TR(0x63c1e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c1e5:{NFSU2_TR(0x63c1e5);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c1e8:{NFSU2_TR(0x63c1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63c1eb:{NFSU2_TR(0x63c1eb);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c1ee:{NFSU2_TR(0x63c1ee);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c1f0:{NFSU2_TR(0x63c1f0);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c1f3:{NFSU2_TR(0x63c1f3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c1f6:{NFSU2_TR(0x63c1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B63c1f9:{NFSU2_TR(0x63c1f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63c1fb:{NFSU2_TR(0x63c1fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c1fd:{NFSU2_TR(0x63c1fd);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c200:{NFSU2_TR(0x63c200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63c203:{NFSU2_TR(0x63c203);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63c206:{NFSU2_TR(0x63c206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B63c209:{NFSU2_TR(0x63c209);
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
B63c20a:{NFSU2_TR(0x63c20a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63c1d9u);}goto L63c1d9;}}
}
B63c20c:L63c20c:{c.instructions+=1;NFSU2_TR(0x63c20c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63c20d:L63c20d:{c.instructions+=4;NFSU2_TR(0x63c20d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c20e:{NFSU2_TR(0x63c20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c20f:{NFSU2_TR(0x63c20f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c210:{NFSU2_TR(0x63c210);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c213:L63c213:{c.instructions+=5;NFSU2_TR(0x63c213);
__builtin_memmove((R+28),(R+28),4);
}
B63c215:{NFSU2_TR(0x63c215);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c216:{NFSU2_TR(0x63c216);
__builtin_memmove((R+20),(R+16),4);
}
B63c218:{NFSU2_TR(0x63c218);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c21a:{NFSU2_TR(0x63c21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c21full));
TAIL_STATIC(0x641713u,641);
}
B63c21f:L63c21f:{c.instructions+=2;NFSU2_TR(0x63c21f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c220:{NFSU2_TR(0x63c220);
{u32 t_=u32(m4(0x803e84));TAIL_DYNAMIC(t_);}
}
B63c226:L63c226:{c.instructions+=1;NFSU2_TR(0x63c226);
{u32 t_=u32(m4(0x803e84));TAIL_DYNAMIC(t_);}
}
B63c22c:L63c22c:{c.instructions+=5;NFSU2_TR(0x63c22c);
__builtin_memmove((R+28),(R+28),4);
}
B63c22e:{NFSU2_TR(0x63c22e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c22f:{NFSU2_TR(0x63c22f);
__builtin_memmove((R+20),(R+16),4);
}
B63c231:{NFSU2_TR(0x63c231);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c233:{NFSU2_TR(0x63c233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c238ull));
TAIL_STATIC(0x641713u,641);
}
B63c238:L63c238:{c.instructions+=9;NFSU2_TR(0x63c238);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c23b:{NFSU2_TR(0x63c23b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c23c:{NFSU2_TR(0x63c23c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c23f:{NFSU2_TR(0x63c23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c242:{NFSU2_TR(0x63c242);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c245:{NFSU2_TR(0x63c245);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c248:{NFSU2_TR(0x63c248);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c24b:{NFSU2_TR(0x63c24b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c24e:{NFSU2_TR(0x63c24e);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f30),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c254ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63c254:L63c254:{c.instructions+=2;NFSU2_TR(0x63c254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c255:{NFSU2_TR(0x63c255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c258:L63c258:{c.instructions+=72;NFSU2_TR(0x63c258);
__builtin_memmove((R+28),(R+28),4);
}
B63c25a:{NFSU2_TR(0x63c25a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c25b:{NFSU2_TR(0x63c25b);
__builtin_memmove((R+20),(R+16),4);
}
B63c25d:{NFSU2_TR(0x63c25d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c25e:{NFSU2_TR(0x63c25e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c25f:{NFSU2_TR(0x63c25f);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c262:{NFSU2_TR(0x63c262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c265:{NFSU2_TR(0x63c265);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c268:{NFSU2_TR(0x63c268);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c26b:{NFSU2_TR(0x63c26b);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c26e:{NFSU2_TR(0x63c26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c271:{NFSU2_TR(0x63c271);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c272:{NFSU2_TR(0x63c272);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c274:{NFSU2_TR(0x63c274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63c277:{NFSU2_TR(0x63c277);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c278:{NFSU2_TR(0x63c278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63c27b:{NFSU2_TR(0x63c27b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63c27d:{NFSU2_TR(0x63c27d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63c27f:{NFSU2_TR(0x63c27f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63c281:{NFSU2_TR(0x63c281);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c287:{NFSU2_TR(0x63c287);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c289:{NFSU2_TR(0x63c289);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63c28b:{NFSU2_TR(0x63c28b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c291:{NFSU2_TR(0x63c291);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c294:{NFSU2_TR(0x63c294);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63c296:{NFSU2_TR(0x63c296);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63c298:{NFSU2_TR(0x63c298);
__asm__ volatile(".byte 0xd8,0xeb":::"memory");
}
B63c29a:{NFSU2_TR(0x63c29a);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c29d:{NFSU2_TR(0x63c29d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c2a0:{NFSU2_TR(0x63c2a0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63c2a2:{NFSU2_TR(0x63c2a2);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c2a5:{NFSU2_TR(0x63c2a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c2a7:{NFSU2_TR(0x63c2a7);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B63c2a9:{NFSU2_TR(0x63c2a9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2ac:{NFSU2_TR(0x63c2ac);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2ae:{NFSU2_TR(0x63c2ae);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2b1:{NFSU2_TR(0x63c2b1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2b3:{NFSU2_TR(0x63c2b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2b5:{NFSU2_TR(0x63c2b5);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2b8:{NFSU2_TR(0x63c2b8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2ba:{NFSU2_TR(0x63c2ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2bc:{NFSU2_TR(0x63c2bc);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c2be:{NFSU2_TR(0x63c2be);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2c0:{NFSU2_TR(0x63c2c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2c2:{NFSU2_TR(0x63c2c2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c2c4:{NFSU2_TR(0x63c2c4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63c2c6:{NFSU2_TR(0x63c2c6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2c9:{NFSU2_TR(0x63c2c9);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2cc:{NFSU2_TR(0x63c2cc);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2cf:{NFSU2_TR(0x63c2cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2d1:{NFSU2_TR(0x63c2d1);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2d4:{NFSU2_TR(0x63c2d4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2d7:{NFSU2_TR(0x63c2d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2d9:{NFSU2_TR(0x63c2d9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2dc:{NFSU2_TR(0x63c2dc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2df:{NFSU2_TR(0x63c2df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2e1:{NFSU2_TR(0x63c2e1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c2e4:{NFSU2_TR(0x63c2e4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2e7:{NFSU2_TR(0x63c2e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c2e8:{NFSU2_TR(0x63c2e8);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2eb:{NFSU2_TR(0x63c2eb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2ee:{NFSU2_TR(0x63c2ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c2ef:{NFSU2_TR(0x63c2ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2f1:{NFSU2_TR(0x63c2f1);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2f4:{NFSU2_TR(0x63c2f4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2f7:{NFSU2_TR(0x63c2f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c2f9:{NFSU2_TR(0x63c2f9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c2fc:{NFSU2_TR(0x63c2fc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c2ff:{NFSU2_TR(0x63c2ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c301:{NFSU2_TR(0x63c301);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c304:{NFSU2_TR(0x63c304);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c305:{NFSU2_TR(0x63c305);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c308:L63c308:{c.instructions+=5;NFSU2_TR(0x63c308);
__builtin_memmove((R+28),(R+28),4);
}
B63c30a:{NFSU2_TR(0x63c30a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c30b:{NFSU2_TR(0x63c30b);
__builtin_memmove((R+20),(R+16),4);
}
B63c30d:{NFSU2_TR(0x63c30d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c30f:{NFSU2_TR(0x63c30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c314ull));
TAIL_STATIC(0x641713u,641);
}
B63c314:L63c314:{c.instructions+=9;NFSU2_TR(0x63c314);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c317:{NFSU2_TR(0x63c317);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c318:{NFSU2_TR(0x63c318);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c31b:{NFSU2_TR(0x63c31b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c31e:{NFSU2_TR(0x63c31e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c321:{NFSU2_TR(0x63c321);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c324:{NFSU2_TR(0x63c324);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c327:{NFSU2_TR(0x63c327);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c32a:{NFSU2_TR(0x63c32a);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f34),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c330ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63c330:L63c330:{c.instructions+=2;NFSU2_TR(0x63c330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c331:{NFSU2_TR(0x63c331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c334:L63c334:{c.instructions+=83;NFSU2_TR(0x63c334);
__builtin_memmove((R+28),(R+28),4);
}
B63c336:{NFSU2_TR(0x63c336);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c337:{NFSU2_TR(0x63c337);
__builtin_memmove((R+20),(R+16),4);
}
B63c339:{NFSU2_TR(0x63c339);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c33a:{NFSU2_TR(0x63c33a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c33b:{NFSU2_TR(0x63c33b);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c33e:{NFSU2_TR(0x63c33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c341:{NFSU2_TR(0x63c341);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c344:{NFSU2_TR(0x63c344);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c347:{NFSU2_TR(0x63c347);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c34a:{NFSU2_TR(0x63c34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c34d:{NFSU2_TR(0x63c34d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c34e:{NFSU2_TR(0x63c34e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c350:{NFSU2_TR(0x63c350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63c353:{NFSU2_TR(0x63c353);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c359:{NFSU2_TR(0x63c359);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c35a:{NFSU2_TR(0x63c35a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63c35c:{NFSU2_TR(0x63c35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63c35f:{NFSU2_TR(0x63c35f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c361:{NFSU2_TR(0x63c361);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B63c363:{NFSU2_TR(0x63c363);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c366:{NFSU2_TR(0x63c366);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c369:{NFSU2_TR(0x63c369);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c36b:{NFSU2_TR(0x63c36b);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c371:{NFSU2_TR(0x63c371);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63c373:{NFSU2_TR(0x63c373);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c379:{NFSU2_TR(0x63c379);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63c37b:{NFSU2_TR(0x63c37b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63c37d:{NFSU2_TR(0x63c37d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c380:{NFSU2_TR(0x63c380);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63c382:{NFSU2_TR(0x63c382);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c388:{NFSU2_TR(0x63c388);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63c38a:{NFSU2_TR(0x63c38a);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c38d:{NFSU2_TR(0x63c38d);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c390:{NFSU2_TR(0x63c390);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c392:{NFSU2_TR(0x63c392);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c394:{NFSU2_TR(0x63c394);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B63c396:{NFSU2_TR(0x63c396);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c39c:{NFSU2_TR(0x63c39c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c39f:{NFSU2_TR(0x63c39f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3a1:{NFSU2_TR(0x63c3a1);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3a4:{NFSU2_TR(0x63c3a4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3a6:{NFSU2_TR(0x63c3a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3a8:{NFSU2_TR(0x63c3a8);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3ab:{NFSU2_TR(0x63c3ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3ad:{NFSU2_TR(0x63c3ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3af:{NFSU2_TR(0x63c3af);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63c3b1:{NFSU2_TR(0x63c3b1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3b3:{NFSU2_TR(0x63c3b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3b5:{NFSU2_TR(0x63c3b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c3b7:{NFSU2_TR(0x63c3b7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c3b9:{NFSU2_TR(0x63c3b9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c3bb:{NFSU2_TR(0x63c3bb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3be:{NFSU2_TR(0x63c3be);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3c1:{NFSU2_TR(0x63c3c1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3c4:{NFSU2_TR(0x63c3c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3c6:{NFSU2_TR(0x63c3c6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3c9:{NFSU2_TR(0x63c3c9);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3cc:{NFSU2_TR(0x63c3cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3ce:{NFSU2_TR(0x63c3ce);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3d1:{NFSU2_TR(0x63c3d1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3d4:{NFSU2_TR(0x63c3d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3d6:{NFSU2_TR(0x63c3d6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c3d8:{NFSU2_TR(0x63c3d8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c3db:{NFSU2_TR(0x63c3db);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c3dd:{NFSU2_TR(0x63c3dd);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3e0:{NFSU2_TR(0x63c3e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c3e1:{NFSU2_TR(0x63c3e1);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3e4:{NFSU2_TR(0x63c3e4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3e7:{NFSU2_TR(0x63c3e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c3e8:{NFSU2_TR(0x63c3e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3ea:{NFSU2_TR(0x63c3ea);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3ed:{NFSU2_TR(0x63c3ed);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3f0:{NFSU2_TR(0x63c3f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3f2:{NFSU2_TR(0x63c3f2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c3f5:{NFSU2_TR(0x63c3f5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c3f8:{NFSU2_TR(0x63c3f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c3fa:{NFSU2_TR(0x63c3fa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c3fc:{NFSU2_TR(0x63c3fc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c3ff:{NFSU2_TR(0x63c3ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c401:{NFSU2_TR(0x63c401);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c403:{NFSU2_TR(0x63c403);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c404:{NFSU2_TR(0x63c404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c407:L63c407:{c.instructions+=5;NFSU2_TR(0x63c407);
__builtin_memmove((R+28),(R+28),4);
}
B63c409:{NFSU2_TR(0x63c409);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c40a:{NFSU2_TR(0x63c40a);
__builtin_memmove((R+20),(R+16),4);
}
B63c40c:{NFSU2_TR(0x63c40c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c40e:{NFSU2_TR(0x63c40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c413ull));
TAIL_STATIC(0x641713u,641);
}
B63c413:L63c413:{c.instructions+=11;NFSU2_TR(0x63c413);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c416:{NFSU2_TR(0x63c416);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c417:{NFSU2_TR(0x63c417);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c418:{NFSU2_TR(0x63c418);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c41c:{NFSU2_TR(0x63c41c);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c41f:{NFSU2_TR(0x63c41f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c422:{NFSU2_TR(0x63c422);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c425:{NFSU2_TR(0x63c425);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c428:{NFSU2_TR(0x63c428);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c42b:{NFSU2_TR(0x63c42b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c42e:{NFSU2_TR(0x63c42e);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f38),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c434ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63c434:L63c434:{c.instructions+=2;NFSU2_TR(0x63c434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c435:{NFSU2_TR(0x63c435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c438:L63c438:{c.instructions+=38;NFSU2_TR(0x63c438);
__builtin_memmove((R+28),(R+28),4);
}
B63c43a:{NFSU2_TR(0x63c43a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c43b:{NFSU2_TR(0x63c43b);
__builtin_memmove((R+20),(R+16),4);
}
B63c43d:{NFSU2_TR(0x63c43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c440:{NFSU2_TR(0x63c440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c443:{NFSU2_TR(0x63c443);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c445:{NFSU2_TR(0x63c445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c448:{NFSU2_TR(0x63c448);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c44a:{NFSU2_TR(0x63c44a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c44b:{NFSU2_TR(0x63c44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63c44e:{NFSU2_TR(0x63c44e);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c451:{NFSU2_TR(0x63c451);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c453:{NFSU2_TR(0x63c453);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c455:{NFSU2_TR(0x63c455);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c458:{NFSU2_TR(0x63c458);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c45a:{NFSU2_TR(0x63c45a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c45c:{NFSU2_TR(0x63c45c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c45e:{NFSU2_TR(0x63c45e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c461:{NFSU2_TR(0x63c461);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c464:{NFSU2_TR(0x63c464);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c467:{NFSU2_TR(0x63c467);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c46a:{NFSU2_TR(0x63c46a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c46d:{NFSU2_TR(0x63c46d);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c470:{NFSU2_TR(0x63c470);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c472:{NFSU2_TR(0x63c472);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c475:{NFSU2_TR(0x63c475);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c478:{NFSU2_TR(0x63c478);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c47b:{NFSU2_TR(0x63c47b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c47e:{NFSU2_TR(0x63c47e);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c481:{NFSU2_TR(0x63c481);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c484:{NFSU2_TR(0x63c484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c485:{NFSU2_TR(0x63c485);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c488:{NFSU2_TR(0x63c488);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c48b:{NFSU2_TR(0x63c48b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c48d:{NFSU2_TR(0x63c48d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c490:{NFSU2_TR(0x63c490);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c493:{NFSU2_TR(0x63c493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c494:{NFSU2_TR(0x63c494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c497:L63c497:{c.instructions+=5;NFSU2_TR(0x63c497);
__builtin_memmove((R+28),(R+28),4);
}
B63c499:{NFSU2_TR(0x63c499);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c49a:{NFSU2_TR(0x63c49a);
__builtin_memmove((R+20),(R+16),4);
}
B63c49c:{NFSU2_TR(0x63c49c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c49e:{NFSU2_TR(0x63c49e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c4a3ull));
TAIL_STATIC(0x641713u,641);
}
B63c4a3:L63c4a3:{c.instructions+=2;NFSU2_TR(0x63c4a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c4a4:{NFSU2_TR(0x63c4a4);
{u32 t_=u32(m4(0x803e6c));TAIL_DYNAMIC(t_);}
}
B63c4aa:L63c4aa:{c.instructions+=59;NFSU2_TR(0x63c4aa);
__builtin_memmove((R+28),(R+28),4);
}
B63c4ac:{NFSU2_TR(0x63c4ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c4ad:{NFSU2_TR(0x63c4ad);
__builtin_memmove((R+20),(R+16),4);
}
B63c4af:{NFSU2_TR(0x63c4af);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63c4b2:{NFSU2_TR(0x63c4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c4b5:{NFSU2_TR(0x63c4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c4b8:{NFSU2_TR(0x63c4b8);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4bb:{NFSU2_TR(0x63c4bb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4be:{NFSU2_TR(0x63c4be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c4bf:{NFSU2_TR(0x63c4bf);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4c2:{NFSU2_TR(0x63c4c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c4c3:{NFSU2_TR(0x63c4c3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4c6:{NFSU2_TR(0x63c4c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c4c9:{NFSU2_TR(0x63c4c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c4cb:{NFSU2_TR(0x63c4cb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4cd:{NFSU2_TR(0x63c4cd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4cf:{NFSU2_TR(0x63c4cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c4d1:{NFSU2_TR(0x63c4d1);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c4d4:{NFSU2_TR(0x63c4d4);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c4d7:{NFSU2_TR(0x63c4d7);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4da:{NFSU2_TR(0x63c4da);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4dd:{NFSU2_TR(0x63c4dd);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4e0:{NFSU2_TR(0x63c4e0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4e3:{NFSU2_TR(0x63c4e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c4e5:{NFSU2_TR(0x63c4e5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4e8:{NFSU2_TR(0x63c4e8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4ea:{NFSU2_TR(0x63c4ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c4ec:{NFSU2_TR(0x63c4ec);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c4ef:{NFSU2_TR(0x63c4ef);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c4f2:{NFSU2_TR(0x63c4f2);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4f5:{NFSU2_TR(0x63c4f5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4f8:{NFSU2_TR(0x63c4f8);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c4fb:{NFSU2_TR(0x63c4fb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c4fe:{NFSU2_TR(0x63c4fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c500:{NFSU2_TR(0x63c500);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c503:{NFSU2_TR(0x63c503);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c505:{NFSU2_TR(0x63c505);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c507:{NFSU2_TR(0x63c507);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c50a:{NFSU2_TR(0x63c50a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c50d:{NFSU2_TR(0x63c50d);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c510:{NFSU2_TR(0x63c510);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c513:{NFSU2_TR(0x63c513);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c516:{NFSU2_TR(0x63c516);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c519:{NFSU2_TR(0x63c519);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c51b:{NFSU2_TR(0x63c51b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c51e:{NFSU2_TR(0x63c51e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c520:{NFSU2_TR(0x63c520);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c522:{NFSU2_TR(0x63c522);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c525:{NFSU2_TR(0x63c525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c528:{NFSU2_TR(0x63c528);
__builtin_memmove((R+28),(R+0),4);
}
B63c52a:{NFSU2_TR(0x63c52a);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c52d:{NFSU2_TR(0x63c52d);
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
B63c52e:{NFSU2_TR(0x63c52e);
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
B63c52f:{NFSU2_TR(0x63c52f);
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
B63c530:{NFSU2_TR(0x63c530);
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
B63c531:{NFSU2_TR(0x63c531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c532:{NFSU2_TR(0x63c532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c533:{NFSU2_TR(0x63c533);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c534:{NFSU2_TR(0x63c534);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c537:L63c537:{c.instructions+=5;NFSU2_TR(0x63c537);
__builtin_memmove((R+28),(R+28),4);
}
B63c539:{NFSU2_TR(0x63c539);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c53a:{NFSU2_TR(0x63c53a);
__builtin_memmove((R+20),(R+16),4);
}
B63c53c:{NFSU2_TR(0x63c53c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c53e:{NFSU2_TR(0x63c53e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c543ull));
TAIL_STATIC(0x641713u,641);
}
B63c543:L63c543:{c.instructions+=2;NFSU2_TR(0x63c543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c544:{NFSU2_TR(0x63c544);
{u32 t_=u32(m4(0x803f64));TAIL_DYNAMIC(t_);}
}
B63c54a:L63c54a:{c.instructions+=10;NFSU2_TR(0x63c54a);
__builtin_memmove((R+28),(R+28),4);
}
B63c54c:{NFSU2_TR(0x63c54c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c54d:{NFSU2_TR(0x63c54d);
__builtin_memmove((R+20),(R+16),4);
}
B63c54f:{NFSU2_TR(0x63c54f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B63c552:{NFSU2_TR(0x63c552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c555:{NFSU2_TR(0x63c555);
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
B63c557:{NFSU2_TR(0x63c557);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c558:{NFSU2_TR(0x63c558);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63c55b:{NFSU2_TR(0x63c55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63c55e:{NFSU2_TR(0x63c55e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63c5eb;}}
}
B63c564:L63c564:{c.instructions+=4;NFSU2_TR(0x63c564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c567:{NFSU2_TR(0x63c567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c56a:{NFSU2_TR(0x63c56a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c56b:{NFSU2_TR(0x63c56b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c56c:L63c56c:{c.instructions+=50;NFSU2_TR(0x63c56c);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c56f:{NFSU2_TR(0x63c56f);
__builtin_memmove((R+28),(R+12),4);
}
B63c571:{NFSU2_TR(0x63c571);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c574:{NFSU2_TR(0x63c574);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B63c577:{NFSU2_TR(0x63c577);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c57a:{NFSU2_TR(0x63c57a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c57d:{NFSU2_TR(0x63c57d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c580:{NFSU2_TR(0x63c580);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c582:{NFSU2_TR(0x63c582);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c584:{NFSU2_TR(0x63c584);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c586:{NFSU2_TR(0x63c586);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c588:{NFSU2_TR(0x63c588);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c58b:{NFSU2_TR(0x63c58b);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c58e:{NFSU2_TR(0x63c58e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c591:{NFSU2_TR(0x63c591);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c593:{NFSU2_TR(0x63c593);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c596:{NFSU2_TR(0x63c596);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c599:{NFSU2_TR(0x63c599);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c59b:{NFSU2_TR(0x63c59b);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c59e:{NFSU2_TR(0x63c59e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5a1:{NFSU2_TR(0x63c5a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c5a3:{NFSU2_TR(0x63c5a3);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c5a6:{NFSU2_TR(0x63c5a6);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c5a9:{NFSU2_TR(0x63c5a9);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c5ac:{NFSU2_TR(0x63c5ac);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5af:{NFSU2_TR(0x63c5af);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c5b1:{NFSU2_TR(0x63c5b1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5b4:{NFSU2_TR(0x63c5b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c5b6:{NFSU2_TR(0x63c5b6);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c5b9:{NFSU2_TR(0x63c5b9);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5bc:{NFSU2_TR(0x63c5bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c5be:{NFSU2_TR(0x63c5be);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c5c1:{NFSU2_TR(0x63c5c1);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c5c4:{NFSU2_TR(0x63c5c4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c5c7:{NFSU2_TR(0x63c5c7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5c9:{NFSU2_TR(0x63c5c9);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c5cc:{NFSU2_TR(0x63c5cc);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5cf:{NFSU2_TR(0x63c5cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c5d1:{NFSU2_TR(0x63c5d1);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c5d4:{NFSU2_TR(0x63c5d4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c5d7:{NFSU2_TR(0x63c5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B63c5da:{NFSU2_TR(0x63c5da);
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
B63c5db:{NFSU2_TR(0x63c5db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c5dd:{NFSU2_TR(0x63c5dd);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c5e0:{NFSU2_TR(0x63c5e0);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c5e3:{NFSU2_TR(0x63c5e3);
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
B63c5e4:{NFSU2_TR(0x63c5e4);
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
B63c5e5:{NFSU2_TR(0x63c5e5);
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
B63c5e6:{NFSU2_TR(0x63c5e6);
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
B63c5e7:{NFSU2_TR(0x63c5e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63c56cu);}goto L63c56c;}}
}
B63c5e9:L63c5e9:{c.instructions+=2;NFSU2_TR(0x63c5e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c5ea:{NFSU2_TR(0x63c5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c5eb:L63c5eb:{c.instructions+=4;NFSU2_TR(0x63c5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c5ee:{NFSU2_TR(0x63c5ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63c5ef:{NFSU2_TR(0x63c5ef);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c5f0:{NFSU2_TR(0x63c5f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c5f3:L63c5f3:{c.instructions+=5;NFSU2_TR(0x63c5f3);
__builtin_memmove((R+28),(R+28),4);
}
B63c5f5:{NFSU2_TR(0x63c5f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c5f6:{NFSU2_TR(0x63c5f6);
__builtin_memmove((R+20),(R+16),4);
}
B63c5f8:{NFSU2_TR(0x63c5f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c5fa:{NFSU2_TR(0x63c5fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c5ffull));
TAIL_STATIC(0x641713u,641);
}
B63c5ff:L63c5ff:{c.instructions+=2;NFSU2_TR(0x63c5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c600:{NFSU2_TR(0x63c600);
{u32 t_=u32(m4(0x803e90));TAIL_DYNAMIC(t_);}
}
B63c606:L63c606:{c.instructions+=1;NFSU2_TR(0x63c606);
{u32 t_=u32(m4(0x803e90));TAIL_DYNAMIC(t_);}
}
B63c60c:L63c60c:{c.instructions+=5;NFSU2_TR(0x63c60c);
__builtin_memmove((R+28),(R+28),4);
}
B63c60e:{NFSU2_TR(0x63c60e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c60f:{NFSU2_TR(0x63c60f);
__builtin_memmove((R+20),(R+16),4);
}
B63c611:{NFSU2_TR(0x63c611);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c613:{NFSU2_TR(0x63c613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c618ull));
TAIL_STATIC(0x641713u,641);
}
B63c618:L63c618:{c.instructions+=2;NFSU2_TR(0x63c618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c619:{NFSU2_TR(0x63c619);
{u32 t_=u32(m4(0x803f68));TAIL_DYNAMIC(t_);}
}
B63c61f:L63c61f:{c.instructions+=1;NFSU2_TR(0x63c61f);
{u32 t_=u32(m4(0x803f68));TAIL_DYNAMIC(t_);}
}
B63c625:L63c625:{c.instructions+=10;NFSU2_TR(0x63c625);
__builtin_memmove((R+28),(R+28),4);
}
B63c627:{NFSU2_TR(0x63c627);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c628:{NFSU2_TR(0x63c628);
__builtin_memmove((R+20),(R+16),4);
}
B63c62a:{NFSU2_TR(0x63c62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B63c62d:{NFSU2_TR(0x63c62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c630:{NFSU2_TR(0x63c630);
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
B63c632:{NFSU2_TR(0x63c632);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c633:{NFSU2_TR(0x63c633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63c636:{NFSU2_TR(0x63c636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63c639:{NFSU2_TR(0x63c639);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63c6fe;}}
}
B63c63f:L63c63f:{c.instructions+=5;NFSU2_TR(0x63c63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c642:{NFSU2_TR(0x63c642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c645:{NFSU2_TR(0x63c645);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c646:{NFSU2_TR(0x63c646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63c649:{NFSU2_TR(0x63c649);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c64a:L63c64a:{c.instructions+=52;NFSU2_TR(0x63c64a);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c64d:{NFSU2_TR(0x63c64d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c650:{NFSU2_TR(0x63c650);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c653:{NFSU2_TR(0x63c653);
__builtin_memmove((R+28),(R+12),4);
}
B63c655:{NFSU2_TR(0x63c655);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c658:{NFSU2_TR(0x63c658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c659:{NFSU2_TR(0x63c659);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c65c:{NFSU2_TR(0x63c65c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c65d:{NFSU2_TR(0x63c65d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c65f:{NFSU2_TR(0x63c65f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c661:{NFSU2_TR(0x63c661);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c663:{NFSU2_TR(0x63c663);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c665:{NFSU2_TR(0x63c665);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c668:{NFSU2_TR(0x63c668);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c66b:{NFSU2_TR(0x63c66b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c66e:{NFSU2_TR(0x63c66e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c670:{NFSU2_TR(0x63c670);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c673:{NFSU2_TR(0x63c673);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c676:{NFSU2_TR(0x63c676);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c678:{NFSU2_TR(0x63c678);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c67b:{NFSU2_TR(0x63c67b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c67e:{NFSU2_TR(0x63c67e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c680:{NFSU2_TR(0x63c680);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c683:{NFSU2_TR(0x63c683);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c686:{NFSU2_TR(0x63c686);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c689:{NFSU2_TR(0x63c689);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c68c:{NFSU2_TR(0x63c68c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c68e:{NFSU2_TR(0x63c68e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c691:{NFSU2_TR(0x63c691);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c693:{NFSU2_TR(0x63c693);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c696:{NFSU2_TR(0x63c696);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c699:{NFSU2_TR(0x63c699);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c69b:{NFSU2_TR(0x63c69b);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c69e:{NFSU2_TR(0x63c69e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6a1:{NFSU2_TR(0x63c6a1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c6a4:{NFSU2_TR(0x63c6a4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c6a6:{NFSU2_TR(0x63c6a6);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c6a9:{NFSU2_TR(0x63c6a9);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c6ac:{NFSU2_TR(0x63c6ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c6ae:{NFSU2_TR(0x63c6ae);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c6b1:{NFSU2_TR(0x63c6b1);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c6b4:{NFSU2_TR(0x63c6b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c6b6:{NFSU2_TR(0x63c6b6);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c6b9:{NFSU2_TR(0x63c6b9);
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
B63c6ba:{NFSU2_TR(0x63c6ba);
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
B63c6bb:{NFSU2_TR(0x63c6bb);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6be:{NFSU2_TR(0x63c6be);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63c6c0:{NFSU2_TR(0x63c6c0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6c4:{NFSU2_TR(0x63c6c4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c6c7:{NFSU2_TR(0x63c6c7);
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
B63c6c8:{NFSU2_TR(0x63c6c8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6cb:{NFSU2_TR(0x63c6cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c6d0ull));
TAIL_STATIC(0x63bd36u,63b);
}
B63c6d0:L63c6d0:{c.instructions+=2;NFSU2_TR(0x63c6d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63c6d2:{NFSU2_TR(0x63c6d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63c6ed;}}
}
B63c6d4:L63c6d4:{c.instructions+=10;NFSU2_TR(0x63c6d4);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B63c6d6:{NFSU2_TR(0x63c6d6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B63c6d9:{NFSU2_TR(0x63c6d9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63c6db:{NFSU2_TR(0x63c6db);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c6dd:{NFSU2_TR(0x63c6dd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6df:{NFSU2_TR(0x63c6df);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63c6e1:{NFSU2_TR(0x63c6e1);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c6e4:{NFSU2_TR(0x63c6e4);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6e7:{NFSU2_TR(0x63c6e7);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c6ea:{NFSU2_TR(0x63c6ea);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c6ed:L63c6ed:{c.instructions+=4;NFSU2_TR(0x63c6ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B63c6f0:{NFSU2_TR(0x63c6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+12),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B63c6f3:{NFSU2_TR(0x63c6f3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
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
B63c6f6:{NFSU2_TR(0x63c6f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63c64au);}goto L63c64a;}}
}
B63c6fc:L63c6fc:{c.instructions+=2;NFSU2_TR(0x63c6fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c6fd:{NFSU2_TR(0x63c6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c6fe:L63c6fe:{c.instructions+=4;NFSU2_TR(0x63c6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c701:{NFSU2_TR(0x63c701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63c702:{NFSU2_TR(0x63c702);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c703:{NFSU2_TR(0x63c703);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c706:L63c706:{c.instructions+=5;NFSU2_TR(0x63c706);
__builtin_memmove((R+28),(R+28),4);
}
B63c708:{NFSU2_TR(0x63c708);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c709:{NFSU2_TR(0x63c709);
__builtin_memmove((R+20),(R+16),4);
}
B63c70b:{NFSU2_TR(0x63c70b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c70d:{NFSU2_TR(0x63c70d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c712ull));
TAIL_STATIC(0x641713u,641);
}
B63c712:L63c712:{c.instructions+=2;NFSU2_TR(0x63c712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c713:{NFSU2_TR(0x63c713);
{u32 t_=u32(m4(0x803e80));TAIL_DYNAMIC(t_);}
}
B63c719:L63c719:{c.instructions+=1;NFSU2_TR(0x63c719);
{u32 t_=u32(m4(0x803e80));TAIL_DYNAMIC(t_);}
}
B63c71f:L63c71f:{c.instructions+=45;NFSU2_TR(0x63c71f);
__builtin_memmove((R+28),(R+28),4);
}
B63c721:{NFSU2_TR(0x63c721);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c722:{NFSU2_TR(0x63c722);
__builtin_memmove((R+20),(R+16),4);
}
B63c724:{NFSU2_TR(0x63c724);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63c727:{NFSU2_TR(0x63c727);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c72a:{NFSU2_TR(0x63c72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c72d:{NFSU2_TR(0x63c72d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c730:{NFSU2_TR(0x63c730);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c733:{NFSU2_TR(0x63c733);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c734:{NFSU2_TR(0x63c734);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c737:{NFSU2_TR(0x63c737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c738:{NFSU2_TR(0x63c738);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c73b:{NFSU2_TR(0x63c73b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c73e:{NFSU2_TR(0x63c73e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c740:{NFSU2_TR(0x63c740);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c742:{NFSU2_TR(0x63c742);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c744:{NFSU2_TR(0x63c744);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c746:{NFSU2_TR(0x63c746);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c749:{NFSU2_TR(0x63c749);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c74c:{NFSU2_TR(0x63c74c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c74f:{NFSU2_TR(0x63c74f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c752:{NFSU2_TR(0x63c752);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c755:{NFSU2_TR(0x63c755);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c757:{NFSU2_TR(0x63c757);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c75a:{NFSU2_TR(0x63c75a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c75c:{NFSU2_TR(0x63c75c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c75e:{NFSU2_TR(0x63c75e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c761:{NFSU2_TR(0x63c761);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c764:{NFSU2_TR(0x63c764);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c767:{NFSU2_TR(0x63c767);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c76a:{NFSU2_TR(0x63c76a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c76d:{NFSU2_TR(0x63c76d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c76f:{NFSU2_TR(0x63c76f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c772:{NFSU2_TR(0x63c772);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c774:{NFSU2_TR(0x63c774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c777:{NFSU2_TR(0x63c777);
__builtin_memmove((R+28),(R+0),4);
}
B63c779:{NFSU2_TR(0x63c779);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c77b:{NFSU2_TR(0x63c77b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c77e:{NFSU2_TR(0x63c77e);
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
B63c77f:{NFSU2_TR(0x63c77f);
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
B63c780:{NFSU2_TR(0x63c780);
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
B63c781:{NFSU2_TR(0x63c781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c782:{NFSU2_TR(0x63c782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c783:{NFSU2_TR(0x63c783);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c784:{NFSU2_TR(0x63c784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c787:L63c787:{c.instructions+=5;NFSU2_TR(0x63c787);
__builtin_memmove((R+28),(R+28),4);
}
B63c789:{NFSU2_TR(0x63c789);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c78a:{NFSU2_TR(0x63c78a);
__builtin_memmove((R+20),(R+16),4);
}
B63c78c:{NFSU2_TR(0x63c78c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c78e:{NFSU2_TR(0x63c78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c793ull));
TAIL_STATIC(0x641713u,641);
}
B63c793:L63c793:{c.instructions+=2;NFSU2_TR(0x63c793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c794:{NFSU2_TR(0x63c794);
{u32 t_=u32(m4(0x803f6c));TAIL_DYNAMIC(t_);}
}
B63c79a:L63c79a:{c.instructions+=10;NFSU2_TR(0x63c79a);
__builtin_memmove((R+28),(R+28),4);
}
B63c79c:{NFSU2_TR(0x63c79c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c79d:{NFSU2_TR(0x63c79d);
__builtin_memmove((R+20),(R+16),4);
}
B63c79f:{NFSU2_TR(0x63c79f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B63c7a2:{NFSU2_TR(0x63c7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c7a5:{NFSU2_TR(0x63c7a5);
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
B63c7a7:{NFSU2_TR(0x63c7a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c7a8:{NFSU2_TR(0x63c7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63c7ab:{NFSU2_TR(0x63c7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63c7ae:{NFSU2_TR(0x63c7ae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63c812;}}
}
B63c7b0:L63c7b0:{c.instructions+=4;NFSU2_TR(0x63c7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c7b3:{NFSU2_TR(0x63c7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c7b6:{NFSU2_TR(0x63c7b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c7b7:{NFSU2_TR(0x63c7b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c7b8:L63c7b8:{c.instructions+=36;NFSU2_TR(0x63c7b8);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7bb:{NFSU2_TR(0x63c7bb);
__builtin_memmove((R+28),(R+12),4);
}
B63c7bd:{NFSU2_TR(0x63c7bd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7c0:{NFSU2_TR(0x63c7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B63c7c3:{NFSU2_TR(0x63c7c3);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7c6:{NFSU2_TR(0x63c7c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c7c9:{NFSU2_TR(0x63c7c9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7cc:{NFSU2_TR(0x63c7cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c7ce:{NFSU2_TR(0x63c7ce);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7d0:{NFSU2_TR(0x63c7d0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7d2:{NFSU2_TR(0x63c7d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c7d4:{NFSU2_TR(0x63c7d4);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c7d7:{NFSU2_TR(0x63c7d7);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7da:{NFSU2_TR(0x63c7da);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7dc:{NFSU2_TR(0x63c7dc);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7df:{NFSU2_TR(0x63c7df);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7e2:{NFSU2_TR(0x63c7e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c7e4:{NFSU2_TR(0x63c7e4);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7e7:{NFSU2_TR(0x63c7e7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7ea:{NFSU2_TR(0x63c7ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c7ec:{NFSU2_TR(0x63c7ec);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c7ef:{NFSU2_TR(0x63c7ef);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7f2:{NFSU2_TR(0x63c7f2);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7f5:{NFSU2_TR(0x63c7f5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7f7:{NFSU2_TR(0x63c7f7);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c7fa:{NFSU2_TR(0x63c7fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c7fc:{NFSU2_TR(0x63c7fc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c7ff:{NFSU2_TR(0x63c7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B63c802:{NFSU2_TR(0x63c802);
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
B63c803:{NFSU2_TR(0x63c803);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c806:{NFSU2_TR(0x63c806);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c808:{NFSU2_TR(0x63c808);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c80b:{NFSU2_TR(0x63c80b);
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
B63c80c:{NFSU2_TR(0x63c80c);
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
B63c80d:{NFSU2_TR(0x63c80d);
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
B63c80e:{NFSU2_TR(0x63c80e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63c7b8u);}goto L63c7b8;}}
}
B63c810:L63c810:{c.instructions+=2;NFSU2_TR(0x63c810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c811:{NFSU2_TR(0x63c811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c812:L63c812:{c.instructions+=4;NFSU2_TR(0x63c812);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c815:{NFSU2_TR(0x63c815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63c816:{NFSU2_TR(0x63c816);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c817:{NFSU2_TR(0x63c817);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c81a:L63c81a:{c.instructions+=5;NFSU2_TR(0x63c81a);
__builtin_memmove((R+28),(R+28),4);
}
B63c81c:{NFSU2_TR(0x63c81c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c81d:{NFSU2_TR(0x63c81d);
__builtin_memmove((R+20),(R+16),4);
}
B63c81f:{NFSU2_TR(0x63c81f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c821:{NFSU2_TR(0x63c821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c826ull));
TAIL_STATIC(0x641713u,641);
}
B63c826:L63c826:{c.instructions+=2;NFSU2_TR(0x63c826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c827:{NFSU2_TR(0x63c827);
{u32 t_=u32(m4(0x803ea4));TAIL_DYNAMIC(t_);}
}
B63c82d:L63c82d:{c.instructions+=5;NFSU2_TR(0x63c82d);
__builtin_memmove((R+28),(R+28),4);
}
B63c82f:{NFSU2_TR(0x63c82f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c830:{NFSU2_TR(0x63c830);
__builtin_memmove((R+20),(R+16),4);
}
B63c832:{NFSU2_TR(0x63c832);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c834:{NFSU2_TR(0x63c834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c839ull));
TAIL_STATIC(0x641713u,641);
}
B63c839:L63c839:{c.instructions+=2;NFSU2_TR(0x63c839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c83a:{NFSU2_TR(0x63c83a);
{u32 t_=u32(m4(0x803f74));TAIL_DYNAMIC(t_);}
}
B63c840:L63c840:{c.instructions+=5;NFSU2_TR(0x63c840);
__builtin_memmove((R+28),(R+28),4);
}
B63c842:{NFSU2_TR(0x63c842);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c843:{NFSU2_TR(0x63c843);
__builtin_memmove((R+20),(R+16),4);
}
B63c845:{NFSU2_TR(0x63c845);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c847:{NFSU2_TR(0x63c847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c84cull));
TAIL_STATIC(0x641713u,641);
}
B63c84c:L63c84c:{c.instructions+=2;NFSU2_TR(0x63c84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c84d:{NFSU2_TR(0x63c84d);
{u32 t_=u32(m4(0x803ea8));TAIL_DYNAMIC(t_);}
}
B63c853:L63c853:{c.instructions+=5;NFSU2_TR(0x63c853);
__builtin_memmove((R+28),(R+28),4);
}
B63c855:{NFSU2_TR(0x63c855);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c856:{NFSU2_TR(0x63c856);
__builtin_memmove((R+20),(R+16),4);
}
B63c858:{NFSU2_TR(0x63c858);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c85a:{NFSU2_TR(0x63c85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c85full));
TAIL_STATIC(0x641713u,641);
}
B63c85f:L63c85f:{c.instructions+=2;NFSU2_TR(0x63c85f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c860:{NFSU2_TR(0x63c860);
{u32 t_=u32(m4(0x803f78));TAIL_DYNAMIC(t_);}
}
B63c866:L63c866:{c.instructions+=5;NFSU2_TR(0x63c866);
__builtin_memmove((R+28),(R+28),4);
}
B63c868:{NFSU2_TR(0x63c868);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c869:{NFSU2_TR(0x63c869);
__builtin_memmove((R+20),(R+16),4);
}
B63c86b:{NFSU2_TR(0x63c86b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c86d:{NFSU2_TR(0x63c86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c872ull));
TAIL_STATIC(0x641713u,641);
}
B63c872:L63c872:{c.instructions+=2;NFSU2_TR(0x63c872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c873:{NFSU2_TR(0x63c873);
{u32 t_=u32(m4(0x803eac));TAIL_DYNAMIC(t_);}
}
B63c879:L63c879:{c.instructions+=98;NFSU2_TR(0x63c879);
__builtin_memmove((R+28),(R+28),4);
}
B63c87b:{NFSU2_TR(0x63c87b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c87c:{NFSU2_TR(0x63c87c);
__builtin_memmove((R+20),(R+16),4);
}
B63c87e:{NFSU2_TR(0x63c87e);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63c881:{NFSU2_TR(0x63c881);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c884:{NFSU2_TR(0x63c884);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c887:{NFSU2_TR(0x63c887);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c88a:{NFSU2_TR(0x63c88a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c88d:{NFSU2_TR(0x63c88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c890:{NFSU2_TR(0x63c890);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c893:{NFSU2_TR(0x63c893);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c894:{NFSU2_TR(0x63c894);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c897:{NFSU2_TR(0x63c897);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c898:{NFSU2_TR(0x63c898);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c89b:{NFSU2_TR(0x63c89b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c89e:{NFSU2_TR(0x63c89e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8a1:{NFSU2_TR(0x63c8a1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8a4:{NFSU2_TR(0x63c8a4);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63c8a6:{NFSU2_TR(0x63c8a6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8a9:{NFSU2_TR(0x63c8a9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8ac:{NFSU2_TR(0x63c8ac);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8af:{NFSU2_TR(0x63c8af);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8b2:{NFSU2_TR(0x63c8b2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8b5:{NFSU2_TR(0x63c8b5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8b8:{NFSU2_TR(0x63c8b8);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8bb:{NFSU2_TR(0x63c8bb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c8bd:{NFSU2_TR(0x63c8bd);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63c8bf:{NFSU2_TR(0x63c8bf);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8c2:{NFSU2_TR(0x63c8c2);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8c5:{NFSU2_TR(0x63c8c5);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8c8:{NFSU2_TR(0x63c8c8);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63c8ca:{NFSU2_TR(0x63c8ca);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8cd:{NFSU2_TR(0x63c8cd);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c8d0:{NFSU2_TR(0x63c8d0);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8d3:{NFSU2_TR(0x63c8d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c8d5:{NFSU2_TR(0x63c8d5);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8d8:{NFSU2_TR(0x63c8d8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8db:{NFSU2_TR(0x63c8db);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8dd:{NFSU2_TR(0x63c8dd);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8e0:{NFSU2_TR(0x63c8e0);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8e3:{NFSU2_TR(0x63c8e3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8e5:{NFSU2_TR(0x63c8e5);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8e8:{NFSU2_TR(0x63c8e8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8ea:{NFSU2_TR(0x63c8ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8ed:{NFSU2_TR(0x63c8ed);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8ef:{NFSU2_TR(0x63c8ef);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8f2:{NFSU2_TR(0x63c8f2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63c8f4:{NFSU2_TR(0x63c8f4);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c8f7:{NFSU2_TR(0x63c8f7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63c8f9:{NFSU2_TR(0x63c8f9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c8fb:{NFSU2_TR(0x63c8fb);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c8fe:{NFSU2_TR(0x63c8fe);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c901:{NFSU2_TR(0x63c901);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c904:{NFSU2_TR(0x63c904);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63c906:{NFSU2_TR(0x63c906);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c909:{NFSU2_TR(0x63c909);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c90c:{NFSU2_TR(0x63c90c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c90e:{NFSU2_TR(0x63c90e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c911:{NFSU2_TR(0x63c911);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c913:{NFSU2_TR(0x63c913);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c915:{NFSU2_TR(0x63c915);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c918:{NFSU2_TR(0x63c918);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c91a:{NFSU2_TR(0x63c91a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c91d:{NFSU2_TR(0x63c91d);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c920:{NFSU2_TR(0x63c920);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c922:{NFSU2_TR(0x63c922);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c925:{NFSU2_TR(0x63c925);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c928:{NFSU2_TR(0x63c928);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c92b:{NFSU2_TR(0x63c92b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63c92d:{NFSU2_TR(0x63c92d);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63c92f:{NFSU2_TR(0x63c92f);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B63c931:{NFSU2_TR(0x63c931);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c934:{NFSU2_TR(0x63c934);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c936:{NFSU2_TR(0x63c936);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c939:{NFSU2_TR(0x63c939);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c93c:{NFSU2_TR(0x63c93c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c93f:{NFSU2_TR(0x63c93f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c941:{NFSU2_TR(0x63c941);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c944:{NFSU2_TR(0x63c944);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c947:{NFSU2_TR(0x63c947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c94a:{NFSU2_TR(0x63c94a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c94d:{NFSU2_TR(0x63c94d);
__builtin_memmove((R+28),(R+0),4);
}
B63c94f:{NFSU2_TR(0x63c94f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63c951:{NFSU2_TR(0x63c951);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c953:{NFSU2_TR(0x63c953);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B63c955:{NFSU2_TR(0x63c955);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c958:{NFSU2_TR(0x63c958);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63c95a:{NFSU2_TR(0x63c95a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c95d:{NFSU2_TR(0x63c95d);
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
B63c95e:{NFSU2_TR(0x63c95e);
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
B63c95f:{NFSU2_TR(0x63c95f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c961:{NFSU2_TR(0x63c961);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63c963:{NFSU2_TR(0x63c963);
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
B63c964:{NFSU2_TR(0x63c964);
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
B63c965:{NFSU2_TR(0x63c965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63c966:{NFSU2_TR(0x63c966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63c967:{NFSU2_TR(0x63c967);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63c968:{NFSU2_TR(0x63c968);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c96b:L63c96b:{c.instructions+=5;NFSU2_TR(0x63c96b);
__builtin_memmove((R+28),(R+28),4);
}
B63c96d:{NFSU2_TR(0x63c96d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c96e:{NFSU2_TR(0x63c96e);
__builtin_memmove((R+20),(R+16),4);
}
B63c970:{NFSU2_TR(0x63c970);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c972:{NFSU2_TR(0x63c972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c977ull));
TAIL_STATIC(0x641713u,641);
}
B63c977:L63c977:{c.instructions+=2;NFSU2_TR(0x63c977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c978:{NFSU2_TR(0x63c978);
{u32 t_=u32(m4(0x803e88));TAIL_DYNAMIC(t_);}
}
B63c97e:L63c97e:{c.instructions+=5;NFSU2_TR(0x63c97e);
__builtin_memmove((R+28),(R+28),4);
}
B63c980:{NFSU2_TR(0x63c980);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c981:{NFSU2_TR(0x63c981);
__builtin_memmove((R+20),(R+16),4);
}
B63c983:{NFSU2_TR(0x63c983);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c985:{NFSU2_TR(0x63c985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c98aull));
TAIL_STATIC(0x641713u,641);
}
B63c98a:L63c98a:{c.instructions+=9;NFSU2_TR(0x63c98a);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c98d:{NFSU2_TR(0x63c98d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c98e:{NFSU2_TR(0x63c98e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c991:{NFSU2_TR(0x63c991);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c994:{NFSU2_TR(0x63c994);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c997:{NFSU2_TR(0x63c997);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c99a:{NFSU2_TR(0x63c99a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c99d:{NFSU2_TR(0x63c99d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63c9a0:{NFSU2_TR(0x63c9a0);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f3c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63c9a6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63c9a6:L63c9a6:{c.instructions+=2;NFSU2_TR(0x63c9a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63c9a7:{NFSU2_TR(0x63c9a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63c9aa:L63c9aa:{c.instructions+=87;NFSU2_TR(0x63c9aa);
__builtin_memmove((R+28),(R+28),4);
}
B63c9ac:{NFSU2_TR(0x63c9ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c9ad:{NFSU2_TR(0x63c9ad);
__builtin_memmove((R+20),(R+16),4);
}
B63c9af:{NFSU2_TR(0x63c9af);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63c9b2:{NFSU2_TR(0x63c9b2);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c9b5:{NFSU2_TR(0x63c9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63c9b8:{NFSU2_TR(0x63c9b8);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63c9bb:{NFSU2_TR(0x63c9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63c9be:{NFSU2_TR(0x63c9be);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c9c1:{NFSU2_TR(0x63c9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63c9c4:{NFSU2_TR(0x63c9c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c9c5:{NFSU2_TR(0x63c9c5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c9c7:{NFSU2_TR(0x63c9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63c9ca:{NFSU2_TR(0x63c9ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63c9cb:{NFSU2_TR(0x63c9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63c9ce:{NFSU2_TR(0x63c9ce);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B63c9d1:{NFSU2_TR(0x63c9d1);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63c9d3:{NFSU2_TR(0x63c9d3);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c9d6:{NFSU2_TR(0x63c9d6);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c9dc:{NFSU2_TR(0x63c9dc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63c9de:{NFSU2_TR(0x63c9de);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63c9e1:{NFSU2_TR(0x63c9e1);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c9e4:{NFSU2_TR(0x63c9e4);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c9e7:{NFSU2_TR(0x63c9e7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c9ed:{NFSU2_TR(0x63c9ed);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63c9ef:{NFSU2_TR(0x63c9ef);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B63c9f1:{NFSU2_TR(0x63c9f1);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B63c9f4:{NFSU2_TR(0x63c9f4);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63c9f7:{NFSU2_TR(0x63c9f7);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63c9fa:{NFSU2_TR(0x63c9fa);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63c9fd:{NFSU2_TR(0x63c9fd);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ca00:{NFSU2_TR(0x63ca00);
__asm__ volatile(".byte 0xd8,0xe4":::"memory");
}
B63ca02:{NFSU2_TR(0x63ca02);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ca04:{NFSU2_TR(0x63ca04);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca06:{NFSU2_TR(0x63ca06);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ca08:{NFSU2_TR(0x63ca08);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca0a:{NFSU2_TR(0x63ca0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca0c:{NFSU2_TR(0x63ca0c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ca0e:{NFSU2_TR(0x63ca0e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca10:{NFSU2_TR(0x63ca10);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca12:{NFSU2_TR(0x63ca12);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63ca14:{NFSU2_TR(0x63ca14);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca16:{NFSU2_TR(0x63ca16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca18:{NFSU2_TR(0x63ca18);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ca1a:{NFSU2_TR(0x63ca1a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ca1c:{NFSU2_TR(0x63ca1c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca1f:{NFSU2_TR(0x63ca1f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ca21:{NFSU2_TR(0x63ca21);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca24:{NFSU2_TR(0x63ca24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca26:{NFSU2_TR(0x63ca26);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ca28:{NFSU2_TR(0x63ca28);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca2b:{NFSU2_TR(0x63ca2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca2d:{NFSU2_TR(0x63ca2d);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63ca2f:{NFSU2_TR(0x63ca2f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca32:{NFSU2_TR(0x63ca32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca34:{NFSU2_TR(0x63ca34);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ca37:{NFSU2_TR(0x63ca37);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63ca39:{NFSU2_TR(0x63ca39);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca3c:{NFSU2_TR(0x63ca3c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ca3e:{NFSU2_TR(0x63ca3e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca41:{NFSU2_TR(0x63ca41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca43:{NFSU2_TR(0x63ca43);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ca45:{NFSU2_TR(0x63ca45);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca48:{NFSU2_TR(0x63ca48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca4a:{NFSU2_TR(0x63ca4a);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63ca4c:{NFSU2_TR(0x63ca4c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca4f:{NFSU2_TR(0x63ca4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca51:{NFSU2_TR(0x63ca51);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ca54:{NFSU2_TR(0x63ca54);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca57:{NFSU2_TR(0x63ca57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ca58:{NFSU2_TR(0x63ca58);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63ca5a:{NFSU2_TR(0x63ca5a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca5d:{NFSU2_TR(0x63ca5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ca5e:{NFSU2_TR(0x63ca5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca60:{NFSU2_TR(0x63ca60);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ca62:{NFSU2_TR(0x63ca62);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca65:{NFSU2_TR(0x63ca65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca67:{NFSU2_TR(0x63ca67);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ca69:{NFSU2_TR(0x63ca69);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ca6c:{NFSU2_TR(0x63ca6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ca6e:{NFSU2_TR(0x63ca6e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ca71:{NFSU2_TR(0x63ca71);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ca73:{NFSU2_TR(0x63ca73);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ca75:{NFSU2_TR(0x63ca75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ca77:{NFSU2_TR(0x63ca77);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ca79:{NFSU2_TR(0x63ca79);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63ca7a:{NFSU2_TR(0x63ca7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ca7d:L63ca7d:{c.instructions+=5;NFSU2_TR(0x63ca7d);
__builtin_memmove((R+28),(R+28),4);
}
B63ca7f:{NFSU2_TR(0x63ca7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ca80:{NFSU2_TR(0x63ca80);
__builtin_memmove((R+20),(R+16),4);
}
B63ca82:{NFSU2_TR(0x63ca82);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ca84:{NFSU2_TR(0x63ca84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ca89ull));
TAIL_STATIC(0x641713u,641);
}
B63ca89:L63ca89:{c.instructions+=9;NFSU2_TR(0x63ca89);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ca8c:{NFSU2_TR(0x63ca8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ca8d:{NFSU2_TR(0x63ca8d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ca90:{NFSU2_TR(0x63ca90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ca93:{NFSU2_TR(0x63ca93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ca96:{NFSU2_TR(0x63ca96);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ca99:{NFSU2_TR(0x63ca99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ca9c:{NFSU2_TR(0x63ca9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63ca9f:{NFSU2_TR(0x63ca9f);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f40),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63caa5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63caa5:L63caa5:{c.instructions+=2;NFSU2_TR(0x63caa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63caa6:{NFSU2_TR(0x63caa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63caa9:L63caa9:{c.instructions+=96;NFSU2_TR(0x63caa9);
__builtin_memmove((R+28),(R+28),4);
}
B63caab:{NFSU2_TR(0x63caab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63caac:{NFSU2_TR(0x63caac);
__builtin_memmove((R+20),(R+16),4);
}
B63caae:{NFSU2_TR(0x63caae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63caaf:{NFSU2_TR(0x63caaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cab0:{NFSU2_TR(0x63cab0);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cab3:{NFSU2_TR(0x63cab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63cab6:{NFSU2_TR(0x63cab6);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cab9:{NFSU2_TR(0x63cab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63cabc:{NFSU2_TR(0x63cabc);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cabf:{NFSU2_TR(0x63cabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cac2:{NFSU2_TR(0x63cac2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cac3:{NFSU2_TR(0x63cac3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63cac5:{NFSU2_TR(0x63cac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63cac8:{NFSU2_TR(0x63cac8);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cace:{NFSU2_TR(0x63cace);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cacf:{NFSU2_TR(0x63cacf);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63cad1:{NFSU2_TR(0x63cad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63cad4:{NFSU2_TR(0x63cad4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63cad6:{NFSU2_TR(0x63cad6);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B63cad8:{NFSU2_TR(0x63cad8);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cadb:{NFSU2_TR(0x63cadb);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cade:{NFSU2_TR(0x63cade);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63cae0:{NFSU2_TR(0x63cae0);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cae6:{NFSU2_TR(0x63cae6);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63cae8:{NFSU2_TR(0x63cae8);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63caee:{NFSU2_TR(0x63caee);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B63caf0:{NFSU2_TR(0x63caf0);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63caf2:{NFSU2_TR(0x63caf2);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63caf5:{NFSU2_TR(0x63caf5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63caf7:{NFSU2_TR(0x63caf7);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cafd:{NFSU2_TR(0x63cafd);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B63caff:{NFSU2_TR(0x63caff);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63cb02:{NFSU2_TR(0x63cb02);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cb05:{NFSU2_TR(0x63cb05);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63cb07:{NFSU2_TR(0x63cb07);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63cb09:{NFSU2_TR(0x63cb09);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B63cb0b:{NFSU2_TR(0x63cb0b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb11:{NFSU2_TR(0x63cb11);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb14:{NFSU2_TR(0x63cb14);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb16:{NFSU2_TR(0x63cb16);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb19:{NFSU2_TR(0x63cb19);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb1b:{NFSU2_TR(0x63cb1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb1d:{NFSU2_TR(0x63cb1d);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb20:{NFSU2_TR(0x63cb20);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb22:{NFSU2_TR(0x63cb22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb24:{NFSU2_TR(0x63cb24);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63cb26:{NFSU2_TR(0x63cb26);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb28:{NFSU2_TR(0x63cb28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb2a:{NFSU2_TR(0x63cb2a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63cb2c:{NFSU2_TR(0x63cb2c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cb2e:{NFSU2_TR(0x63cb2e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63cb30:{NFSU2_TR(0x63cb30);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb33:{NFSU2_TR(0x63cb33);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb36:{NFSU2_TR(0x63cb36);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb39:{NFSU2_TR(0x63cb39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb3b:{NFSU2_TR(0x63cb3b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb3e:{NFSU2_TR(0x63cb3e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb41:{NFSU2_TR(0x63cb41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb43:{NFSU2_TR(0x63cb43);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb46:{NFSU2_TR(0x63cb46);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb49:{NFSU2_TR(0x63cb49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb4b:{NFSU2_TR(0x63cb4b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63cb4d:{NFSU2_TR(0x63cb4d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cb50:{NFSU2_TR(0x63cb50);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63cb52:{NFSU2_TR(0x63cb52);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb55:{NFSU2_TR(0x63cb55);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb58:{NFSU2_TR(0x63cb58);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb5b:{NFSU2_TR(0x63cb5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb5d:{NFSU2_TR(0x63cb5d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb60:{NFSU2_TR(0x63cb60);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb63:{NFSU2_TR(0x63cb63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb65:{NFSU2_TR(0x63cb65);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb68:{NFSU2_TR(0x63cb68);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb6b:{NFSU2_TR(0x63cb6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb6d:{NFSU2_TR(0x63cb6d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63cb6f:{NFSU2_TR(0x63cb6f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cb72:{NFSU2_TR(0x63cb72);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B63cb74:{NFSU2_TR(0x63cb74);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb77:{NFSU2_TR(0x63cb77);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb7a:{NFSU2_TR(0x63cb7a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb7d:{NFSU2_TR(0x63cb7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb7f:{NFSU2_TR(0x63cb7f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb82:{NFSU2_TR(0x63cb82);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb85:{NFSU2_TR(0x63cb85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63cb86:{NFSU2_TR(0x63cb86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63cb87:{NFSU2_TR(0x63cb87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb89:{NFSU2_TR(0x63cb89);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cb8c:{NFSU2_TR(0x63cb8c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cb8f:{NFSU2_TR(0x63cb8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cb91:{NFSU2_TR(0x63cb91);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B63cb93:{NFSU2_TR(0x63cb93);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cb96:{NFSU2_TR(0x63cb96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63cb98:{NFSU2_TR(0x63cb98);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63cb9a:{NFSU2_TR(0x63cb9a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63cb9b:{NFSU2_TR(0x63cb9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63cb9e:L63cb9e:{c.instructions+=5;NFSU2_TR(0x63cb9e);
__builtin_memmove((R+28),(R+28),4);
}
B63cba0:{NFSU2_TR(0x63cba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cba1:{NFSU2_TR(0x63cba1);
__builtin_memmove((R+20),(R+16),4);
}
B63cba3:{NFSU2_TR(0x63cba3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cba5:{NFSU2_TR(0x63cba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63cbaaull));
TAIL_STATIC(0x641713u,641);
}
B63cbaa:L63cbaa:{c.instructions+=11;NFSU2_TR(0x63cbaa);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cbad:{NFSU2_TR(0x63cbad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cbae:{NFSU2_TR(0x63cbae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cbaf:{NFSU2_TR(0x63cbaf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cbb3:{NFSU2_TR(0x63cbb3);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cbb6:{NFSU2_TR(0x63cbb6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cbb9:{NFSU2_TR(0x63cbb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63cbbc:{NFSU2_TR(0x63cbbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63cbbf:{NFSU2_TR(0x63cbbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63cbc2:{NFSU2_TR(0x63cbc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B63cbc5:{NFSU2_TR(0x63cbc5);
u8 U[4];
__builtin_memmove((U+0),gp(0x803f44),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63cbcbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B63cbcb:L63cbcb:{c.instructions+=2;NFSU2_TR(0x63cbcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63cbcc:{NFSU2_TR(0x63cbcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63cbcf:L63cbcf:{c.instructions+=47;NFSU2_TR(0x63cbcf);
__builtin_memmove((R+28),(R+28),4);
}
B63cbd1:{NFSU2_TR(0x63cbd1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cbd2:{NFSU2_TR(0x63cbd2);
__builtin_memmove((R+20),(R+16),4);
}
B63cbd4:{NFSU2_TR(0x63cbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63cbd7:{NFSU2_TR(0x63cbd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63cbda:{NFSU2_TR(0x63cbda);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cbdc:{NFSU2_TR(0x63cbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cbdf:{NFSU2_TR(0x63cbdf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cbe1:{NFSU2_TR(0x63cbe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cbe2:{NFSU2_TR(0x63cbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63cbe5:{NFSU2_TR(0x63cbe5);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cbe8:{NFSU2_TR(0x63cbe8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cbea:{NFSU2_TR(0x63cbea);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cbec:{NFSU2_TR(0x63cbec);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cbef:{NFSU2_TR(0x63cbef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cbf1:{NFSU2_TR(0x63cbf1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63cbf3:{NFSU2_TR(0x63cbf3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cbf5:{NFSU2_TR(0x63cbf5);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cbf8:{NFSU2_TR(0x63cbf8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cbfb:{NFSU2_TR(0x63cbfb);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cbfe:{NFSU2_TR(0x63cbfe);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc01:{NFSU2_TR(0x63cc01);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cc04:{NFSU2_TR(0x63cc04);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc07:{NFSU2_TR(0x63cc07);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc09:{NFSU2_TR(0x63cc09);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63cc0c:{NFSU2_TR(0x63cc0c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cc0f:{NFSU2_TR(0x63cc0f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc12:{NFSU2_TR(0x63cc12);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cc15:{NFSU2_TR(0x63cc15);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc18:{NFSU2_TR(0x63cc18);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc1b:{NFSU2_TR(0x63cc1b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cc1e:{NFSU2_TR(0x63cc1e);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc21:{NFSU2_TR(0x63cc21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc23:{NFSU2_TR(0x63cc23);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63cc26:{NFSU2_TR(0x63cc26);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cc29:{NFSU2_TR(0x63cc29);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc2c:{NFSU2_TR(0x63cc2c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cc2f:{NFSU2_TR(0x63cc2f);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc32:{NFSU2_TR(0x63cc32);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc35:{NFSU2_TR(0x63cc35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63cc36:{NFSU2_TR(0x63cc36);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B63cc39:{NFSU2_TR(0x63cc39);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc3c:{NFSU2_TR(0x63cc3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc3e:{NFSU2_TR(0x63cc3e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63cc41:{NFSU2_TR(0x63cc41);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cc44:{NFSU2_TR(0x63cc44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63cc45:{NFSU2_TR(0x63cc45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63cc48:L63cc48:{c.instructions+=5;NFSU2_TR(0x63cc48);
__builtin_memmove((R+28),(R+28),4);
}
B63cc4a:{NFSU2_TR(0x63cc4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cc4b:{NFSU2_TR(0x63cc4b);
__builtin_memmove((R+20),(R+16),4);
}
B63cc4d:{NFSU2_TR(0x63cc4d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cc4f:{NFSU2_TR(0x63cc4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63cc54ull));
TAIL_STATIC(0x641713u,641);
}
B63cc54:L63cc54:{c.instructions+=2;NFSU2_TR(0x63cc54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63cc55:{NFSU2_TR(0x63cc55);
{u32 t_=u32(m4(0x803e70));TAIL_DYNAMIC(t_);}
}
B63cc5b:L63cc5b:{c.instructions+=67;NFSU2_TR(0x63cc5b);
__builtin_memmove((R+28),(R+28),4);
}
B63cc5d:{NFSU2_TR(0x63cc5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cc5e:{NFSU2_TR(0x63cc5e);
__builtin_memmove((R+20),(R+16),4);
}
B63cc60:{NFSU2_TR(0x63cc60);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63cc63:{NFSU2_TR(0x63cc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63cc66:{NFSU2_TR(0x63cc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cc69:{NFSU2_TR(0x63cc69);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc6c:{NFSU2_TR(0x63cc6c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc6f:{NFSU2_TR(0x63cc6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cc70:{NFSU2_TR(0x63cc70);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc73:{NFSU2_TR(0x63cc73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cc74:{NFSU2_TR(0x63cc74);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc77:{NFSU2_TR(0x63cc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63cc7a:{NFSU2_TR(0x63cc7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc7c:{NFSU2_TR(0x63cc7c);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc7f:{NFSU2_TR(0x63cc7f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc82:{NFSU2_TR(0x63cc82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc84:{NFSU2_TR(0x63cc84);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc86:{NFSU2_TR(0x63cc86);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc88:{NFSU2_TR(0x63cc88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc8a:{NFSU2_TR(0x63cc8a);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cc8d:{NFSU2_TR(0x63cc8d);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc90:{NFSU2_TR(0x63cc90);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc93:{NFSU2_TR(0x63cc93);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc96:{NFSU2_TR(0x63cc96);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cc99:{NFSU2_TR(0x63cc99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cc9b:{NFSU2_TR(0x63cc9b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cc9e:{NFSU2_TR(0x63cc9e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cca0:{NFSU2_TR(0x63cca0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cca2:{NFSU2_TR(0x63cca2);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cca5:{NFSU2_TR(0x63cca5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cca8:{NFSU2_TR(0x63cca8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ccaa:{NFSU2_TR(0x63ccaa);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ccad:{NFSU2_TR(0x63ccad);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccb0:{NFSU2_TR(0x63ccb0);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ccb3:{NFSU2_TR(0x63ccb3);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccb6:{NFSU2_TR(0x63ccb6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ccb9:{NFSU2_TR(0x63ccb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ccbb:{NFSU2_TR(0x63ccbb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccbe:{NFSU2_TR(0x63ccbe);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ccc0:{NFSU2_TR(0x63ccc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ccc2:{NFSU2_TR(0x63ccc2);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccc5:{NFSU2_TR(0x63ccc5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ccc8:{NFSU2_TR(0x63ccc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ccca:{NFSU2_TR(0x63ccca);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cccd:{NFSU2_TR(0x63cccd);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccd0:{NFSU2_TR(0x63ccd0);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ccd3:{NFSU2_TR(0x63ccd3);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccd6:{NFSU2_TR(0x63ccd6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ccd9:{NFSU2_TR(0x63ccd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ccdb:{NFSU2_TR(0x63ccdb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ccde:{NFSU2_TR(0x63ccde);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cce0:{NFSU2_TR(0x63cce0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cce2:{NFSU2_TR(0x63cce2);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cce5:{NFSU2_TR(0x63cce5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cce8:{NFSU2_TR(0x63cce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cceb:{NFSU2_TR(0x63cceb);
__builtin_memmove((R+28),(R+0),4);
}
B63cced:{NFSU2_TR(0x63cced);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ccef:{NFSU2_TR(0x63ccef);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ccf2:{NFSU2_TR(0x63ccf2);
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
B63ccf3:{NFSU2_TR(0x63ccf3);
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
B63ccf4:{NFSU2_TR(0x63ccf4);
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
B63ccf5:{NFSU2_TR(0x63ccf5);
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
B63ccf6:{NFSU2_TR(0x63ccf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ccf7:{NFSU2_TR(0x63ccf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ccf8:{NFSU2_TR(0x63ccf8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63ccf9:{NFSU2_TR(0x63ccf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ccfc:L63ccfc:{c.instructions+=5;NFSU2_TR(0x63ccfc);
__builtin_memmove((R+28),(R+28),4);
}
B63ccfe:{NFSU2_TR(0x63ccfe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ccff:{NFSU2_TR(0x63ccff);
__builtin_memmove((R+20),(R+16),4);
}
B63cd01:{NFSU2_TR(0x63cd01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cd03:{NFSU2_TR(0x63cd03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63cd08ull));
TAIL_STATIC(0x641713u,641);
}
B63cd08:L63cd08:{c.instructions+=2;NFSU2_TR(0x63cd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63cd09:{NFSU2_TR(0x63cd09);
{u32 t_=u32(m4(0x803f70));TAIL_DYNAMIC(t_);}
}
B63cd0f:L63cd0f:{c.instructions+=10;NFSU2_TR(0x63cd0f);
__builtin_memmove((R+28),(R+28),4);
}
B63cd11:{NFSU2_TR(0x63cd11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cd12:{NFSU2_TR(0x63cd12);
__builtin_memmove((R+20),(R+16),4);
}
B63cd14:{NFSU2_TR(0x63cd14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B63cd17:{NFSU2_TR(0x63cd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cd1a:{NFSU2_TR(0x63cd1a);
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
B63cd1c:{NFSU2_TR(0x63cd1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cd1d:{NFSU2_TR(0x63cd1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63cd20:{NFSU2_TR(0x63cd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63cd23:{NFSU2_TR(0x63cd23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L63cdc8;}}
}
B63cd29:L63cd29:{c.instructions+=4;NFSU2_TR(0x63cd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63cd2c:{NFSU2_TR(0x63cd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63cd2f:{NFSU2_TR(0x63cd2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cd30:{NFSU2_TR(0x63cd30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cd31:L63cd31:{c.instructions+=58;NFSU2_TR(0x63cd31);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd34:{NFSU2_TR(0x63cd34);
__builtin_memmove((R+28),(R+12),4);
}
B63cd36:{NFSU2_TR(0x63cd36);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd39:{NFSU2_TR(0x63cd39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B63cd3c:{NFSU2_TR(0x63cd3c);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd3f:{NFSU2_TR(0x63cd3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63cd42:{NFSU2_TR(0x63cd42);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd45:{NFSU2_TR(0x63cd45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd47:{NFSU2_TR(0x63cd47);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd4a:{NFSU2_TR(0x63cd4a);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd4d:{NFSU2_TR(0x63cd4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd4f:{NFSU2_TR(0x63cd4f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd51:{NFSU2_TR(0x63cd51);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd53:{NFSU2_TR(0x63cd53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd55:{NFSU2_TR(0x63cd55);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cd58:{NFSU2_TR(0x63cd58);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd5b:{NFSU2_TR(0x63cd5b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd5e:{NFSU2_TR(0x63cd5e);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd61:{NFSU2_TR(0x63cd61);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd64:{NFSU2_TR(0x63cd64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd66:{NFSU2_TR(0x63cd66);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd69:{NFSU2_TR(0x63cd69);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd6c:{NFSU2_TR(0x63cd6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd6e:{NFSU2_TR(0x63cd6e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd70:{NFSU2_TR(0x63cd70);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd73:{NFSU2_TR(0x63cd73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd75:{NFSU2_TR(0x63cd75);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cd78:{NFSU2_TR(0x63cd78);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd7b:{NFSU2_TR(0x63cd7b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd7d:{NFSU2_TR(0x63cd7d);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd80:{NFSU2_TR(0x63cd80);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd83:{NFSU2_TR(0x63cd83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd85:{NFSU2_TR(0x63cd85);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd88:{NFSU2_TR(0x63cd88);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd8b:{NFSU2_TR(0x63cd8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd8d:{NFSU2_TR(0x63cd8d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd90:{NFSU2_TR(0x63cd90);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd93:{NFSU2_TR(0x63cd93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cd95:{NFSU2_TR(0x63cd95);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cd98:{NFSU2_TR(0x63cd98);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cd9b:{NFSU2_TR(0x63cd9b);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cd9e:{NFSU2_TR(0x63cd9e);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cda1:{NFSU2_TR(0x63cda1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cda3:{NFSU2_TR(0x63cda3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cda5:{NFSU2_TR(0x63cda5);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cda8:{NFSU2_TR(0x63cda8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cdab:{NFSU2_TR(0x63cdab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cdad:{NFSU2_TR(0x63cdad);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cdb0:{NFSU2_TR(0x63cdb0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cdb3:{NFSU2_TR(0x63cdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B63cdb6:{NFSU2_TR(0x63cdb6);
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
B63cdb7:{NFSU2_TR(0x63cdb7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cdb9:{NFSU2_TR(0x63cdb9);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cdbc:{NFSU2_TR(0x63cdbc);
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
B63cdbd:{NFSU2_TR(0x63cdbd);
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
B63cdbe:{NFSU2_TR(0x63cdbe);
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
B63cdbf:{NFSU2_TR(0x63cdbf);
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
B63cdc0:{NFSU2_TR(0x63cdc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63cd31u);}goto L63cd31;}}
}
B63cdc6:L63cdc6:{c.instructions+=2;NFSU2_TR(0x63cdc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63cdc7:{NFSU2_TR(0x63cdc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63cdc8:L63cdc8:{c.instructions+=4;NFSU2_TR(0x63cdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cdcb:{NFSU2_TR(0x63cdcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63cdcc:{NFSU2_TR(0x63cdcc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63cdcd:{NFSU2_TR(0x63cdcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63cdd0:L63cdd0:{c.instructions+=5;NFSU2_TR(0x63cdd0);
__builtin_memmove((R+28),(R+28),4);
}
B63cdd2:{NFSU2_TR(0x63cdd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cdd3:{NFSU2_TR(0x63cdd3);
__builtin_memmove((R+20),(R+16),4);
}
B63cdd5:{NFSU2_TR(0x63cdd5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cdd7:{NFSU2_TR(0x63cdd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63cddcull));
TAIL_STATIC(0x641713u,641);
}
B63cddc:L63cddc:{c.instructions+=2;NFSU2_TR(0x63cddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63cddd:{NFSU2_TR(0x63cddd);
{u32 t_=u32(m4(0x803e94));TAIL_DYNAMIC(t_);}
}
B63cde3:L63cde3:{c.instructions+=1;NFSU2_TR(0x63cde3);
{u32 t_=u32(m4(0x803e94));TAIL_DYNAMIC(t_);}
}
B63cde9:L63cde9:{c.instructions+=81;NFSU2_TR(0x63cde9);
__builtin_memmove((R+28),(R+28),4);
}
B63cdeb:{NFSU2_TR(0x63cdeb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cdec:{NFSU2_TR(0x63cdec);
__builtin_memmove((R+20),(R+16),4);
}
B63cdee:{NFSU2_TR(0x63cdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63cdf1:{NFSU2_TR(0x63cdf1);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cdf4:{NFSU2_TR(0x63cdf4);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cdf7:{NFSU2_TR(0x63cdf7);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cdfa:{NFSU2_TR(0x63cdfa);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cdfd:{NFSU2_TR(0x63cdfd);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63cdff:{NFSU2_TR(0x63cdff);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce02:{NFSU2_TR(0x63ce02);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce05:{NFSU2_TR(0x63ce05);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce08:{NFSU2_TR(0x63ce08);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce0b:{NFSU2_TR(0x63ce0b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce0d:{NFSU2_TR(0x63ce0d);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce10:{NFSU2_TR(0x63ce10);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce13:{NFSU2_TR(0x63ce13);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce16:{NFSU2_TR(0x63ce16);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce19:{NFSU2_TR(0x63ce19);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce1b:{NFSU2_TR(0x63ce1b);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce1e:{NFSU2_TR(0x63ce1e);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce21:{NFSU2_TR(0x63ce21);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce24:{NFSU2_TR(0x63ce24);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce27:{NFSU2_TR(0x63ce27);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce29:{NFSU2_TR(0x63ce29);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce2c:{NFSU2_TR(0x63ce2c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce2f:{NFSU2_TR(0x63ce2f);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce32:{NFSU2_TR(0x63ce32);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce35:{NFSU2_TR(0x63ce35);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce37:{NFSU2_TR(0x63ce37);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce3a:{NFSU2_TR(0x63ce3a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce3d:{NFSU2_TR(0x63ce3d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce40:{NFSU2_TR(0x63ce40);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce43:{NFSU2_TR(0x63ce43);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce45:{NFSU2_TR(0x63ce45);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63ce48:{NFSU2_TR(0x63ce48);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63ce4a:{NFSU2_TR(0x63ce4a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce4d:{NFSU2_TR(0x63ce4d);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63ce4f:{NFSU2_TR(0x63ce4f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce52:{NFSU2_TR(0x63ce52);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce54:{NFSU2_TR(0x63ce54);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ce56:{NFSU2_TR(0x63ce56);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce59:{NFSU2_TR(0x63ce59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ce5b:{NFSU2_TR(0x63ce5b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce5d:{NFSU2_TR(0x63ce5d);
__asm__ volatile(".byte 0xd9,0xc5":::"memory");
}
B63ce5f:{NFSU2_TR(0x63ce5f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce62:{NFSU2_TR(0x63ce62);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ce64:{NFSU2_TR(0x63ce64);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce67:{NFSU2_TR(0x63ce67);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce69:{NFSU2_TR(0x63ce69);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ce6b:{NFSU2_TR(0x63ce6b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce6e:{NFSU2_TR(0x63ce6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ce70:{NFSU2_TR(0x63ce70);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce73:{NFSU2_TR(0x63ce73);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce75:{NFSU2_TR(0x63ce75);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B63ce77:{NFSU2_TR(0x63ce77);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce7a:{NFSU2_TR(0x63ce7a);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ce7c:{NFSU2_TR(0x63ce7c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce7f:{NFSU2_TR(0x63ce7f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce81:{NFSU2_TR(0x63ce81);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce84:{NFSU2_TR(0x63ce84);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce87:{NFSU2_TR(0x63ce87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ce89:{NFSU2_TR(0x63ce89);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce8c:{NFSU2_TR(0x63ce8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63ce8e:{NFSU2_TR(0x63ce8e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B63ce90:{NFSU2_TR(0x63ce90);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce93:{NFSU2_TR(0x63ce93);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B63ce95:{NFSU2_TR(0x63ce95);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63ce98:{NFSU2_TR(0x63ce98);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63ce9a:{NFSU2_TR(0x63ce9a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63ce9d:{NFSU2_TR(0x63ce9d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cea0:{NFSU2_TR(0x63cea0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cea2:{NFSU2_TR(0x63cea2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cea5:{NFSU2_TR(0x63cea5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B63cea7:{NFSU2_TR(0x63cea7);
__asm__ volatile(".byte 0xdd,0xdd":::"memory");
}
B63cea9:{NFSU2_TR(0x63cea9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ceab:{NFSU2_TR(0x63ceab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63cead:{NFSU2_TR(0x63cead);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ceaf:{NFSU2_TR(0x63ceaf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63ceb1:{NFSU2_TR(0x63ceb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ceb2:{NFSU2_TR(0x63ceb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ceb5:L63ceb5:{c.instructions+=5;NFSU2_TR(0x63ceb5);
__builtin_memmove((R+28),(R+28),4);
}
B63ceb7:{NFSU2_TR(0x63ceb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ceb8:{NFSU2_TR(0x63ceb8);
__builtin_memmove((R+20),(R+16),4);
}
B63ceba:{NFSU2_TR(0x63ceba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cebc:{NFSU2_TR(0x63cebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63cec1ull));
TAIL_STATIC(0x641713u,641);
}
B63cec1:L63cec1:{c.instructions+=2;NFSU2_TR(0x63cec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63cec2:{NFSU2_TR(0x63cec2);
{u32 t_=u32(m4(0x803e98));TAIL_DYNAMIC(t_);}
}
B63cec8:L63cec8:{c.instructions+=5;NFSU2_TR(0x63cec8);
__builtin_memmove((R+28),(R+28),4);
}
B63ceca:{NFSU2_TR(0x63ceca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cecb:{NFSU2_TR(0x63cecb);
__builtin_memmove((R+20),(R+16),4);
}
B63cecd:{NFSU2_TR(0x63cecd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cecf:{NFSU2_TR(0x63cecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ced4ull));
TAIL_STATIC(0x641713u,641);
}
B63ced4:L63ced4:{c.instructions+=2;NFSU2_TR(0x63ced4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ced5:{NFSU2_TR(0x63ced5);
{u32 t_=u32(m4(0x803e74));TAIL_DYNAMIC(t_);}
}
B63cedb:L63cedb:{c.instructions+=1;NFSU2_TR(0x63cedb);
{u32 t_=u32(m4(0x803e74));TAIL_DYNAMIC(t_);}
}
B63cee1:L63cee1:{c.instructions+=10;NFSU2_TR(0x63cee1);
__builtin_memmove((R+28),(R+28),4);
}
B63cee3:{NFSU2_TR(0x63cee3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cee4:{NFSU2_TR(0x63cee4);
__builtin_memmove((R+20),(R+16),4);
}
B63cee6:{NFSU2_TR(0x63cee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B63cee9:{NFSU2_TR(0x63cee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ceec:{NFSU2_TR(0x63ceec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63ceef:{NFSU2_TR(0x63ceef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63cef1:{NFSU2_TR(0x63cef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63cef4:{NFSU2_TR(0x63cef4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63cef5:{NFSU2_TR(0x63cef5);
if(r1(R+518)){{goto L63cefd;}}
}
B63cef7:L63cef7:{c.instructions+=3;NFSU2_TR(0x63cef7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63cef9:{NFSU2_TR(0x63cef9);
__builtin_memmove((R+24),(R+0),4);
}
B63cefb:{NFSU2_TR(0x63cefb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63cf00;}}
}
B63cefd:L63cefd:{c.instructions+=1;NFSU2_TR(0x63cefd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63cf00:L63cf00:{c.instructions+=96;NFSU2_TR(0x63cf00);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf03:{NFSU2_TR(0x63cf03);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf06:{NFSU2_TR(0x63cf06);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf08:{NFSU2_TR(0x63cf08);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf0a:{NFSU2_TR(0x63cf0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf0c:{NFSU2_TR(0x63cf0c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf0f:{NFSU2_TR(0x63cf0f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf12:{NFSU2_TR(0x63cf12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf14:{NFSU2_TR(0x63cf14);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf17:{NFSU2_TR(0x63cf17);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf1a:{NFSU2_TR(0x63cf1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf1c:{NFSU2_TR(0x63cf1c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cf1e:{NFSU2_TR(0x63cf1e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf21:{NFSU2_TR(0x63cf21);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf24:{NFSU2_TR(0x63cf24);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf27:{NFSU2_TR(0x63cf27);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf2a:{NFSU2_TR(0x63cf2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf2c:{NFSU2_TR(0x63cf2c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf2f:{NFSU2_TR(0x63cf2f);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf32:{NFSU2_TR(0x63cf32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf34:{NFSU2_TR(0x63cf34);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf37:{NFSU2_TR(0x63cf37);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf39:{NFSU2_TR(0x63cf39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf3b:{NFSU2_TR(0x63cf3b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cf3e:{NFSU2_TR(0x63cf3e);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf41:{NFSU2_TR(0x63cf41);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf44:{NFSU2_TR(0x63cf44);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf47:{NFSU2_TR(0x63cf47);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf49:{NFSU2_TR(0x63cf49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf4b:{NFSU2_TR(0x63cf4b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf4e:{NFSU2_TR(0x63cf4e);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf51:{NFSU2_TR(0x63cf51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf53:{NFSU2_TR(0x63cf53);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf56:{NFSU2_TR(0x63cf56);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf59:{NFSU2_TR(0x63cf59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf5b:{NFSU2_TR(0x63cf5b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cf5e:{NFSU2_TR(0x63cf5e);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf61:{NFSU2_TR(0x63cf61);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf64:{NFSU2_TR(0x63cf64);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf67:{NFSU2_TR(0x63cf67);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf6a:{NFSU2_TR(0x63cf6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf6c:{NFSU2_TR(0x63cf6c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf6e:{NFSU2_TR(0x63cf6e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf71:{NFSU2_TR(0x63cf71);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf73:{NFSU2_TR(0x63cf73);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf76:{NFSU2_TR(0x63cf76);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf79:{NFSU2_TR(0x63cf79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf7b:{NFSU2_TR(0x63cf7b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cf7e:{NFSU2_TR(0x63cf7e);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf81:{NFSU2_TR(0x63cf81);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf84:{NFSU2_TR(0x63cf84);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf87:{NFSU2_TR(0x63cf87);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf89:{NFSU2_TR(0x63cf89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf8b:{NFSU2_TR(0x63cf8b);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf8e:{NFSU2_TR(0x63cf8e);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf91:{NFSU2_TR(0x63cf91);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf93:{NFSU2_TR(0x63cf93);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cf96:{NFSU2_TR(0x63cf96);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cf99:{NFSU2_TR(0x63cf99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cf9b:{NFSU2_TR(0x63cf9b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cf9e:{NFSU2_TR(0x63cf9e);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfa1:{NFSU2_TR(0x63cfa1);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfa4:{NFSU2_TR(0x63cfa4);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfa7:{NFSU2_TR(0x63cfa7);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfaa:{NFSU2_TR(0x63cfaa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfac:{NFSU2_TR(0x63cfac);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfaf:{NFSU2_TR(0x63cfaf);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfb2:{NFSU2_TR(0x63cfb2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfb4:{NFSU2_TR(0x63cfb4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfb7:{NFSU2_TR(0x63cfb7);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfba:{NFSU2_TR(0x63cfba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfbc:{NFSU2_TR(0x63cfbc);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cfbf:{NFSU2_TR(0x63cfbf);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfc2:{NFSU2_TR(0x63cfc2);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfc5:{NFSU2_TR(0x63cfc5);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfc8:{NFSU2_TR(0x63cfc8);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfcb:{NFSU2_TR(0x63cfcb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfcd:{NFSU2_TR(0x63cfcd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfd0:{NFSU2_TR(0x63cfd0);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfd3:{NFSU2_TR(0x63cfd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfd5:{NFSU2_TR(0x63cfd5);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfd8:{NFSU2_TR(0x63cfd8);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfdb:{NFSU2_TR(0x63cfdb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfdd:{NFSU2_TR(0x63cfdd);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63cfe0:{NFSU2_TR(0x63cfe0);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfe3:{NFSU2_TR(0x63cfe3);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfe6:{NFSU2_TR(0x63cfe6);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cfe9:{NFSU2_TR(0x63cfe9);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cfec:{NFSU2_TR(0x63cfec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cfee:{NFSU2_TR(0x63cfee);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cff1:{NFSU2_TR(0x63cff1);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cff4:{NFSU2_TR(0x63cff4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cff6:{NFSU2_TR(0x63cff6);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63cff9:{NFSU2_TR(0x63cff9);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63cffc:{NFSU2_TR(0x63cffc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63cffe:{NFSU2_TR(0x63cffe);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x63d001u,63d);
}
XIT:NFSU2_TR_EXIT(0x63c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
