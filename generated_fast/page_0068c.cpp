#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_68b(u8* __restrict R,Cpu& c);
u32 body_68d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x68c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x68c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_68c(u8* __restrict R,Cpu& c);
u32 page_68c(Cpu& c){return body_68c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_68c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x68c001:goto L68c001;
case 0x68c004:c.instructions+=5;goto B68c004;
case 0x68c007:c.instructions+=4;goto B68c007;
case 0x68c00a:c.instructions+=3;goto B68c00a;
case 0x68c00c:c.instructions+=2;goto B68c00c;
case 0x68c00f:c.instructions+=1;goto B68c00f;
case 0x68c011:goto L68c011;
case 0x68c016:goto L68c016;
case 0x68c019:c.instructions+=14;goto B68c019;
case 0x68c01d:c.instructions+=13;goto B68c01d;
case 0x68c01f:c.instructions+=12;goto B68c01f;
case 0x68c021:c.instructions+=11;goto B68c021;
case 0x68c027:c.instructions+=10;goto B68c027;
case 0x68c02d:c.instructions+=9;goto B68c02d;
case 0x68c030:c.instructions+=8;goto B68c030;
case 0x68c032:c.instructions+=7;goto B68c032;
case 0x68c034:c.instructions+=6;goto B68c034;
case 0x68c036:c.instructions+=5;goto B68c036;
case 0x68c038:c.instructions+=4;goto B68c038;
case 0x68c03e:c.instructions+=3;goto B68c03e;
case 0x68c040:c.instructions+=2;goto B68c040;
case 0x68c042:c.instructions+=1;goto B68c042;
case 0x68c044:goto L68c044;
case 0x68c046:goto L68c046;
case 0x68c04c:c.instructions+=7;goto B68c04c;
case 0x68c04f:c.instructions+=6;goto B68c04f;
case 0x68c051:c.instructions+=5;goto B68c051;
case 0x68c053:c.instructions+=4;goto B68c053;
case 0x68c056:c.instructions+=3;goto B68c056;
case 0x68c059:c.instructions+=2;goto B68c059;
case 0x68c05c:c.instructions+=1;goto B68c05c;
case 0x68c05e:goto L68c05e;
case 0x68c064:goto L68c064;
case 0x68c067:c.instructions+=5;goto B68c067;
case 0x68c06a:c.instructions+=4;goto B68c06a;
case 0x68c06d:c.instructions+=3;goto B68c06d;
case 0x68c06e:c.instructions+=2;goto B68c06e;
case 0x68c071:c.instructions+=1;goto B68c071;
case 0x68c073:goto L68c073;
case 0x68c076:c.instructions+=5;goto B68c076;
case 0x68c077:c.instructions+=4;goto B68c077;
case 0x68c078:c.instructions+=3;goto B68c078;
case 0x68c079:c.instructions+=2;goto B68c079;
case 0x68c07a:c.instructions+=1;goto B68c07a;
case 0x68c07d:goto L68c07d;
case 0x68c07f:c.instructions+=24;goto B68c07f;
case 0x68c080:c.instructions+=23;goto B68c080;
case 0x68c082:c.instructions+=22;goto B68c082;
case 0x68c083:c.instructions+=21;goto B68c083;
case 0x68c086:c.instructions+=20;goto B68c086;
case 0x68c089:c.instructions+=19;goto B68c089;
case 0x68c08a:c.instructions+=18;goto B68c08a;
case 0x68c08c:c.instructions+=17;goto B68c08c;
case 0x68c092:c.instructions+=16;goto B68c092;
case 0x68c095:c.instructions+=15;goto B68c095;
case 0x68c096:c.instructions+=14;goto B68c096;
case 0x68c097:c.instructions+=13;goto B68c097;
case 0x68c09a:c.instructions+=12;goto B68c09a;
case 0x68c09c:c.instructions+=11;goto B68c09c;
case 0x68c09e:c.instructions+=10;goto B68c09e;
case 0x68c0a1:c.instructions+=9;goto B68c0a1;
case 0x68c0a2:c.instructions+=8;goto B68c0a2;
case 0x68c0a4:c.instructions+=7;goto B68c0a4;
case 0x68c0a6:c.instructions+=6;goto B68c0a6;
case 0x68c0a8:c.instructions+=5;goto B68c0a8;
case 0x68c0aa:c.instructions+=4;goto B68c0aa;
case 0x68c0ad:c.instructions+=3;goto B68c0ad;
case 0x68c0b0:c.instructions+=2;goto B68c0b0;
case 0x68c0b3:c.instructions+=1;goto B68c0b3;
case 0x68c0b9:goto L68c0b9;
case 0x68c0bc:c.instructions+=2;goto B68c0bc;
case 0x68c0c2:c.instructions+=1;goto B68c0c2;
case 0x68c0c7:goto L68c0c7;
case 0x68c0c9:c.instructions+=3;goto B68c0c9;
case 0x68c0cc:c.instructions+=2;goto B68c0cc;
case 0x68c0cf:c.instructions+=1;goto B68c0cf;
case 0x68c0d5:goto L68c0d5;
case 0x68c0d9:c.instructions+=3;goto B68c0d9;
case 0x68c0dd:c.instructions+=2;goto B68c0dd;
case 0x68c0e0:c.instructions+=1;goto B68c0e0;
case 0x68c0e3:goto L68c0e3;
case 0x68c0e7:c.instructions+=80;goto B68c0e7;
case 0x68c0ea:c.instructions+=79;goto B68c0ea;
case 0x68c0ed:c.instructions+=78;goto B68c0ed;
case 0x68c0f1:c.instructions+=77;goto B68c0f1;
case 0x68c0f4:c.instructions+=76;goto B68c0f4;
case 0x68c0f9:c.instructions+=75;goto B68c0f9;
case 0x68c0fc:c.instructions+=74;goto B68c0fc;
case 0x68c0ff:c.instructions+=73;goto B68c0ff;
case 0x68c103:c.instructions+=72;goto B68c103;
case 0x68c107:c.instructions+=71;goto B68c107;
case 0x68c10b:c.instructions+=70;goto B68c10b;
case 0x68c111:c.instructions+=69;goto B68c111;
case 0x68c114:c.instructions+=68;goto B68c114;
case 0x68c11a:c.instructions+=67;goto B68c11a;
case 0x68c11d:c.instructions+=66;goto B68c11d;
case 0x68c123:c.instructions+=65;goto B68c123;
case 0x68c126:c.instructions+=64;goto B68c126;
case 0x68c129:c.instructions+=63;goto B68c129;
case 0x68c12d:c.instructions+=62;goto B68c12d;
case 0x68c130:c.instructions+=61;goto B68c130;
case 0x68c137:c.instructions+=60;goto B68c137;
case 0x68c13a:c.instructions+=59;goto B68c13a;
case 0x68c141:c.instructions+=58;goto B68c141;
case 0x68c144:c.instructions+=57;goto B68c144;
case 0x68c147:c.instructions+=56;goto B68c147;
case 0x68c14a:c.instructions+=55;goto B68c14a;
case 0x68c151:c.instructions+=54;goto B68c151;
case 0x68c154:c.instructions+=53;goto B68c154;
case 0x68c157:c.instructions+=52;goto B68c157;
case 0x68c15b:c.instructions+=51;goto B68c15b;
case 0x68c15e:c.instructions+=50;goto B68c15e;
case 0x68c165:c.instructions+=49;goto B68c165;
case 0x68c168:c.instructions+=48;goto B68c168;
case 0x68c16f:c.instructions+=47;goto B68c16f;
case 0x68c172:c.instructions+=46;goto B68c172;
case 0x68c175:c.instructions+=45;goto B68c175;
case 0x68c178:c.instructions+=44;goto B68c178;
case 0x68c17f:c.instructions+=43;goto B68c17f;
case 0x68c182:c.instructions+=42;goto B68c182;
case 0x68c186:c.instructions+=41;goto B68c186;
case 0x68c189:c.instructions+=40;goto B68c189;
case 0x68c190:c.instructions+=39;goto B68c190;
case 0x68c197:c.instructions+=38;goto B68c197;
case 0x68c19a:c.instructions+=37;goto B68c19a;
case 0x68c1a1:c.instructions+=36;goto B68c1a1;
case 0x68c1a8:c.instructions+=35;goto B68c1a8;
case 0x68c1ab:c.instructions+=34;goto B68c1ab;
case 0x68c1af:c.instructions+=33;goto B68c1af;
case 0x68c1b3:c.instructions+=32;goto B68c1b3;
case 0x68c1b6:c.instructions+=31;goto B68c1b6;
case 0x68c1b9:c.instructions+=30;goto B68c1b9;
case 0x68c1bc:c.instructions+=29;goto B68c1bc;
case 0x68c1bf:c.instructions+=28;goto B68c1bf;
case 0x68c1c2:c.instructions+=27;goto B68c1c2;
case 0x68c1c5:c.instructions+=26;goto B68c1c5;
case 0x68c1c9:c.instructions+=25;goto B68c1c9;
case 0x68c1cc:c.instructions+=24;goto B68c1cc;
case 0x68c1d0:c.instructions+=23;goto B68c1d0;
case 0x68c1d3:c.instructions+=22;goto B68c1d3;
case 0x68c1d6:c.instructions+=21;goto B68c1d6;
case 0x68c1d9:c.instructions+=20;goto B68c1d9;
case 0x68c1dc:c.instructions+=19;goto B68c1dc;
case 0x68c1df:c.instructions+=18;goto B68c1df;
case 0x68c1e3:c.instructions+=17;goto B68c1e3;
case 0x68c1e7:c.instructions+=16;goto B68c1e7;
case 0x68c1ec:c.instructions+=15;goto B68c1ec;
case 0x68c1ef:c.instructions+=14;goto B68c1ef;
case 0x68c1f3:c.instructions+=13;goto B68c1f3;
case 0x68c1f6:c.instructions+=12;goto B68c1f6;
case 0x68c1f9:c.instructions+=11;goto B68c1f9;
case 0x68c1fe:c.instructions+=10;goto B68c1fe;
case 0x68c202:c.instructions+=9;goto B68c202;
case 0x68c207:c.instructions+=8;goto B68c207;
case 0x68c209:c.instructions+=7;goto B68c209;
case 0x68c20c:c.instructions+=6;goto B68c20c;
case 0x68c20e:c.instructions+=5;goto B68c20e;
case 0x68c210:c.instructions+=4;goto B68c210;
case 0x68c213:c.instructions+=3;goto B68c213;
case 0x68c215:c.instructions+=2;goto B68c215;
case 0x68c218:c.instructions+=1;goto B68c218;
case 0x68c21e:goto L68c21e;
case 0x68c220:goto L68c220;
case 0x68c223:goto L68c223;
case 0x68c226:c.instructions+=2;goto B68c226;
case 0x68c228:c.instructions+=1;goto B68c228;
case 0x68c22a:goto L68c22a;
case 0x68c22d:goto L68c22d;
case 0x68c230:c.instructions+=3;goto B68c230;
case 0x68c231:c.instructions+=2;goto B68c231;
case 0x68c232:c.instructions+=1;goto B68c232;
case 0x68c237:goto L68c237;
case 0x68c23a:c.instructions+=3;goto B68c23a;
case 0x68c23d:c.instructions+=2;goto B68c23d;
case 0x68c240:c.instructions+=1;goto B68c240;
case 0x68c242:goto L68c242;
case 0x68c245:c.instructions+=7;goto B68c245;
case 0x68c246:c.instructions+=6;goto B68c246;
case 0x68c247:c.instructions+=5;goto B68c247;
case 0x68c249:c.instructions+=4;goto B68c249;
case 0x68c24a:c.instructions+=3;goto B68c24a;
case 0x68c24c:c.instructions+=2;goto B68c24c;
case 0x68c24d:c.instructions+=1;goto B68c24d;
case 0x68c250:goto L68c250;
case 0x68c252:c.instructions+=26;goto B68c252;
case 0x68c253:c.instructions+=25;goto B68c253;
case 0x68c255:c.instructions+=24;goto B68c255;
case 0x68c256:c.instructions+=23;goto B68c256;
case 0x68c259:c.instructions+=22;goto B68c259;
case 0x68c25c:c.instructions+=21;goto B68c25c;
case 0x68c25d:c.instructions+=20;goto B68c25d;
case 0x68c25f:c.instructions+=19;goto B68c25f;
case 0x68c265:c.instructions+=18;goto B68c265;
case 0x68c268:c.instructions+=17;goto B68c268;
case 0x68c269:c.instructions+=16;goto B68c269;
case 0x68c26c:c.instructions+=15;goto B68c26c;
case 0x68c26d:c.instructions+=14;goto B68c26d;
case 0x68c270:c.instructions+=13;goto B68c270;
case 0x68c272:c.instructions+=12;goto B68c272;
case 0x68c274:c.instructions+=11;goto B68c274;
case 0x68c275:c.instructions+=10;goto B68c275;
case 0x68c278:c.instructions+=9;goto B68c278;
case 0x68c27a:c.instructions+=8;goto B68c27a;
case 0x68c27c:c.instructions+=7;goto B68c27c;
case 0x68c27e:c.instructions+=6;goto B68c27e;
case 0x68c280:c.instructions+=5;goto B68c280;
case 0x68c283:c.instructions+=4;goto B68c283;
case 0x68c286:c.instructions+=3;goto B68c286;
case 0x68c289:c.instructions+=2;goto B68c289;
case 0x68c28c:c.instructions+=1;goto B68c28c;
case 0x68c292:goto L68c292;
case 0x68c295:c.instructions+=2;goto B68c295;
case 0x68c29b:c.instructions+=1;goto B68c29b;
case 0x68c2a0:goto L68c2a0;
case 0x68c2a3:c.instructions+=3;goto B68c2a3;
case 0x68c2a5:c.instructions+=2;goto B68c2a5;
case 0x68c2a8:c.instructions+=1;goto B68c2a8;
case 0x68c2ae:goto L68c2ae;
case 0x68c2b2:c.instructions+=2;goto B68c2b2;
case 0x68c2b6:c.instructions+=1;goto B68c2b6;
case 0x68c2b9:goto L68c2b9;
case 0x68c2bc:c.instructions+=59;goto B68c2bc;
case 0x68c2c0:c.instructions+=58;goto B68c2c0;
case 0x68c2c3:c.instructions+=57;goto B68c2c3;
case 0x68c2c6:c.instructions+=56;goto B68c2c6;
case 0x68c2ca:c.instructions+=55;goto B68c2ca;
case 0x68c2cd:c.instructions+=54;goto B68c2cd;
case 0x68c2d0:c.instructions+=53;goto B68c2d0;
case 0x68c2d3:c.instructions+=52;goto B68c2d3;
case 0x68c2d7:c.instructions+=51;goto B68c2d7;
case 0x68c2db:c.instructions+=50;goto B68c2db;
case 0x68c2df:c.instructions+=49;goto B68c2df;
case 0x68c2e2:c.instructions+=48;goto B68c2e2;
case 0x68c2e9:c.instructions+=47;goto B68c2e9;
case 0x68c2ec:c.instructions+=46;goto B68c2ec;
case 0x68c2f3:c.instructions+=45;goto B68c2f3;
case 0x68c2f6:c.instructions+=44;goto B68c2f6;
case 0x68c2f9:c.instructions+=43;goto B68c2f9;
case 0x68c2fd:c.instructions+=42;goto B68c2fd;
case 0x68c300:c.instructions+=41;goto B68c300;
case 0x68c307:c.instructions+=40;goto B68c307;
case 0x68c30a:c.instructions+=39;goto B68c30a;
case 0x68c311:c.instructions+=38;goto B68c311;
case 0x68c314:c.instructions+=37;goto B68c314;
case 0x68c318:c.instructions+=36;goto B68c318;
case 0x68c31b:c.instructions+=35;goto B68c31b;
case 0x68c322:c.instructions+=34;goto B68c322;
case 0x68c329:c.instructions+=33;goto B68c329;
case 0x68c32c:c.instructions+=32;goto B68c32c;
case 0x68c333:c.instructions+=31;goto B68c333;
case 0x68c33a:c.instructions+=30;goto B68c33a;
case 0x68c33d:c.instructions+=29;goto B68c33d;
case 0x68c340:c.instructions+=28;goto B68c340;
case 0x68c343:c.instructions+=27;goto B68c343;
case 0x68c347:c.instructions+=26;goto B68c347;
case 0x68c34a:c.instructions+=25;goto B68c34a;
case 0x68c34e:c.instructions+=24;goto B68c34e;
case 0x68c351:c.instructions+=23;goto B68c351;
case 0x68c354:c.instructions+=22;goto B68c354;
case 0x68c357:c.instructions+=21;goto B68c357;
case 0x68c35a:c.instructions+=20;goto B68c35a;
case 0x68c35d:c.instructions+=19;goto B68c35d;
case 0x68c361:c.instructions+=18;goto B68c361;
case 0x68c365:c.instructions+=17;goto B68c365;
case 0x68c36a:c.instructions+=16;goto B68c36a;
case 0x68c36d:c.instructions+=15;goto B68c36d;
case 0x68c371:c.instructions+=14;goto B68c371;
case 0x68c374:c.instructions+=13;goto B68c374;
case 0x68c377:c.instructions+=12;goto B68c377;
case 0x68c37c:c.instructions+=11;goto B68c37c;
case 0x68c380:c.instructions+=10;goto B68c380;
case 0x68c385:c.instructions+=9;goto B68c385;
case 0x68c387:c.instructions+=8;goto B68c387;
case 0x68c38a:c.instructions+=7;goto B68c38a;
case 0x68c38c:c.instructions+=6;goto B68c38c;
case 0x68c38f:c.instructions+=5;goto B68c38f;
case 0x68c391:c.instructions+=4;goto B68c391;
case 0x68c394:c.instructions+=3;goto B68c394;
case 0x68c396:c.instructions+=2;goto B68c396;
case 0x68c399:c.instructions+=1;goto B68c399;
case 0x68c39f:goto L68c39f;
case 0x68c3a2:c.instructions+=2;goto B68c3a2;
case 0x68c3a4:c.instructions+=1;goto B68c3a4;
case 0x68c3a6:goto L68c3a6;
case 0x68c3a9:goto L68c3a9;
case 0x68c3ac:c.instructions+=3;goto B68c3ac;
case 0x68c3af:c.instructions+=2;goto B68c3af;
case 0x68c3b0:c.instructions+=1;goto B68c3b0;
case 0x68c3b5:goto L68c3b5;
case 0x68c3b8:c.instructions+=4;goto B68c3b8;
case 0x68c3bb:c.instructions+=3;goto B68c3bb;
case 0x68c3bd:c.instructions+=2;goto B68c3bd;
case 0x68c3c0:c.instructions+=1;goto B68c3c0;
case 0x68c3c2:goto L68c3c2;
case 0x68c3c5:c.instructions+=7;goto B68c3c5;
case 0x68c3c6:c.instructions+=6;goto B68c3c6;
case 0x68c3c7:c.instructions+=5;goto B68c3c7;
case 0x68c3c9:c.instructions+=4;goto B68c3c9;
case 0x68c3ca:c.instructions+=3;goto B68c3ca;
case 0x68c3cc:c.instructions+=2;goto B68c3cc;
case 0x68c3cd:c.instructions+=1;goto B68c3cd;
case 0x68c3d0:goto L68c3d0;
case 0x68c3d2:c.instructions+=24;goto B68c3d2;
case 0x68c3d3:c.instructions+=23;goto B68c3d3;
case 0x68c3d5:c.instructions+=22;goto B68c3d5;
case 0x68c3d6:c.instructions+=21;goto B68c3d6;
case 0x68c3d9:c.instructions+=20;goto B68c3d9;
case 0x68c3dc:c.instructions+=19;goto B68c3dc;
case 0x68c3dd:c.instructions+=18;goto B68c3dd;
case 0x68c3df:c.instructions+=17;goto B68c3df;
case 0x68c3e5:c.instructions+=16;goto B68c3e5;
case 0x68c3e8:c.instructions+=15;goto B68c3e8;
case 0x68c3e9:c.instructions+=14;goto B68c3e9;
case 0x68c3ea:c.instructions+=13;goto B68c3ea;
case 0x68c3ed:c.instructions+=12;goto B68c3ed;
case 0x68c3ef:c.instructions+=11;goto B68c3ef;
case 0x68c3f1:c.instructions+=10;goto B68c3f1;
case 0x68c3f4:c.instructions+=9;goto B68c3f4;
case 0x68c3f5:c.instructions+=8;goto B68c3f5;
case 0x68c3f7:c.instructions+=7;goto B68c3f7;
case 0x68c3f9:c.instructions+=6;goto B68c3f9;
case 0x68c3fb:c.instructions+=5;goto B68c3fb;
case 0x68c3fd:c.instructions+=4;goto B68c3fd;
case 0x68c400:c.instructions+=3;goto B68c400;
case 0x68c403:c.instructions+=2;goto B68c403;
case 0x68c406:c.instructions+=1;goto B68c406;
case 0x68c40c:goto L68c40c;
case 0x68c40f:c.instructions+=2;goto B68c40f;
case 0x68c415:c.instructions+=1;goto B68c415;
case 0x68c41a:goto L68c41a;
case 0x68c41c:c.instructions+=3;goto B68c41c;
case 0x68c41f:c.instructions+=2;goto B68c41f;
case 0x68c422:c.instructions+=1;goto B68c422;
case 0x68c428:goto L68c428;
case 0x68c42c:c.instructions+=3;goto B68c42c;
case 0x68c430:c.instructions+=2;goto B68c430;
case 0x68c433:c.instructions+=1;goto B68c433;
case 0x68c436:goto L68c436;
case 0x68c439:c.instructions+=53;goto B68c439;
case 0x68c43d:c.instructions+=52;goto B68c43d;
case 0x68c440:c.instructions+=51;goto B68c440;
case 0x68c444:c.instructions+=50;goto B68c444;
case 0x68c447:c.instructions+=49;goto B68c447;
case 0x68c44a:c.instructions+=48;goto B68c44a;
case 0x68c44e:c.instructions+=47;goto B68c44e;
case 0x68c452:c.instructions+=46;goto B68c452;
case 0x68c456:c.instructions+=45;goto B68c456;
case 0x68c459:c.instructions+=44;goto B68c459;
case 0x68c460:c.instructions+=43;goto B68c460;
case 0x68c463:c.instructions+=42;goto B68c463;
case 0x68c46a:c.instructions+=41;goto B68c46a;
case 0x68c46d:c.instructions+=40;goto B68c46d;
case 0x68c470:c.instructions+=39;goto B68c470;
case 0x68c474:c.instructions+=38;goto B68c474;
case 0x68c477:c.instructions+=37;goto B68c477;
case 0x68c47a:c.instructions+=36;goto B68c47a;
case 0x68c47d:c.instructions+=35;goto B68c47d;
case 0x68c480:c.instructions+=34;goto B68c480;
case 0x68c483:c.instructions+=33;goto B68c483;
case 0x68c486:c.instructions+=32;goto B68c486;
case 0x68c489:c.instructions+=31;goto B68c489;
case 0x68c48c:c.instructions+=30;goto B68c48c;
case 0x68c48f:c.instructions+=29;goto B68c48f;
case 0x68c496:c.instructions+=28;goto B68c496;
case 0x68c49d:c.instructions+=27;goto B68c49d;
case 0x68c4a0:c.instructions+=26;goto B68c4a0;
case 0x68c4a7:c.instructions+=25;goto B68c4a7;
case 0x68c4ae:c.instructions+=24;goto B68c4ae;
case 0x68c4b1:c.instructions+=23;goto B68c4b1;
case 0x68c4b4:c.instructions+=22;goto B68c4b4;
case 0x68c4b7:c.instructions+=21;goto B68c4b7;
case 0x68c4bb:c.instructions+=20;goto B68c4bb;
case 0x68c4be:c.instructions+=19;goto B68c4be;
case 0x68c4c2:c.instructions+=18;goto B68c4c2;
case 0x68c4c5:c.instructions+=17;goto B68c4c5;
case 0x68c4c8:c.instructions+=16;goto B68c4c8;
case 0x68c4cb:c.instructions+=15;goto B68c4cb;
case 0x68c4ce:c.instructions+=14;goto B68c4ce;
case 0x68c4d1:c.instructions+=13;goto B68c4d1;
case 0x68c4d5:c.instructions+=12;goto B68c4d5;
case 0x68c4d8:c.instructions+=11;goto B68c4d8;
case 0x68c4db:c.instructions+=10;goto B68c4db;
case 0x68c4df:c.instructions+=9;goto B68c4df;
case 0x68c4e3:c.instructions+=8;goto B68c4e3;
case 0x68c4e5:c.instructions+=7;goto B68c4e5;
case 0x68c4e8:c.instructions+=6;goto B68c4e8;
case 0x68c4ea:c.instructions+=5;goto B68c4ea;
case 0x68c4ec:c.instructions+=4;goto B68c4ec;
case 0x68c4ef:c.instructions+=3;goto B68c4ef;
case 0x68c4f1:c.instructions+=2;goto B68c4f1;
case 0x68c4f4:c.instructions+=1;goto B68c4f4;
case 0x68c4fa:goto L68c4fa;
case 0x68c4fc:goto L68c4fc;
case 0x68c4ff:goto L68c4ff;
case 0x68c502:c.instructions+=2;goto B68c502;
case 0x68c504:c.instructions+=1;goto B68c504;
case 0x68c506:goto L68c506;
case 0x68c509:goto L68c509;
case 0x68c50c:c.instructions+=3;goto B68c50c;
case 0x68c50d:c.instructions+=2;goto B68c50d;
case 0x68c50e:c.instructions+=1;goto B68c50e;
case 0x68c513:goto L68c513;
case 0x68c516:c.instructions+=3;goto B68c516;
case 0x68c519:c.instructions+=2;goto B68c519;
case 0x68c51c:c.instructions+=1;goto B68c51c;
case 0x68c51e:goto L68c51e;
case 0x68c521:c.instructions+=7;goto B68c521;
case 0x68c522:c.instructions+=6;goto B68c522;
case 0x68c523:c.instructions+=5;goto B68c523;
case 0x68c525:c.instructions+=4;goto B68c525;
case 0x68c526:c.instructions+=3;goto B68c526;
case 0x68c528:c.instructions+=2;goto B68c528;
case 0x68c529:c.instructions+=1;goto B68c529;
case 0x68c52c:goto L68c52c;
case 0x68c52e:c.instructions+=24;goto B68c52e;
case 0x68c52f:c.instructions+=23;goto B68c52f;
case 0x68c531:c.instructions+=22;goto B68c531;
case 0x68c532:c.instructions+=21;goto B68c532;
case 0x68c535:c.instructions+=20;goto B68c535;
case 0x68c538:c.instructions+=19;goto B68c538;
case 0x68c539:c.instructions+=18;goto B68c539;
case 0x68c53b:c.instructions+=17;goto B68c53b;
case 0x68c541:c.instructions+=16;goto B68c541;
case 0x68c544:c.instructions+=15;goto B68c544;
case 0x68c545:c.instructions+=14;goto B68c545;
case 0x68c546:c.instructions+=13;goto B68c546;
case 0x68c549:c.instructions+=12;goto B68c549;
case 0x68c54b:c.instructions+=11;goto B68c54b;
case 0x68c54d:c.instructions+=10;goto B68c54d;
case 0x68c550:c.instructions+=9;goto B68c550;
case 0x68c551:c.instructions+=8;goto B68c551;
case 0x68c553:c.instructions+=7;goto B68c553;
case 0x68c555:c.instructions+=6;goto B68c555;
case 0x68c557:c.instructions+=5;goto B68c557;
case 0x68c559:c.instructions+=4;goto B68c559;
case 0x68c55c:c.instructions+=3;goto B68c55c;
case 0x68c55f:c.instructions+=2;goto B68c55f;
case 0x68c562:c.instructions+=1;goto B68c562;
case 0x68c568:goto L68c568;
case 0x68c56b:c.instructions+=2;goto B68c56b;
case 0x68c571:c.instructions+=1;goto B68c571;
case 0x68c576:goto L68c576;
case 0x68c578:c.instructions+=3;goto B68c578;
case 0x68c57b:c.instructions+=2;goto B68c57b;
case 0x68c57e:c.instructions+=1;goto B68c57e;
case 0x68c584:goto L68c584;
case 0x68c588:c.instructions+=3;goto B68c588;
case 0x68c58c:c.instructions+=2;goto B68c58c;
case 0x68c58f:c.instructions+=1;goto B68c58f;
case 0x68c592:goto L68c592;
case 0x68c595:c.instructions+=33;goto B68c595;
case 0x68c599:c.instructions+=32;goto B68c599;
case 0x68c59c:c.instructions+=31;goto B68c59c;
case 0x68c5a0:c.instructions+=30;goto B68c5a0;
case 0x68c5a3:c.instructions+=29;goto B68c5a3;
case 0x68c5a6:c.instructions+=28;goto B68c5a6;
case 0x68c5aa:c.instructions+=27;goto B68c5aa;
case 0x68c5ae:c.instructions+=26;goto B68c5ae;
case 0x68c5b1:c.instructions+=25;goto B68c5b1;
case 0x68c5b8:c.instructions+=24;goto B68c5b8;
case 0x68c5bf:c.instructions+=23;goto B68c5bf;
case 0x68c5c2:c.instructions+=22;goto B68c5c2;
case 0x68c5c6:c.instructions+=21;goto B68c5c6;
case 0x68c5c9:c.instructions+=20;goto B68c5c9;
case 0x68c5d0:c.instructions+=19;goto B68c5d0;
case 0x68c5d7:c.instructions+=18;goto B68c5d7;
case 0x68c5da:c.instructions+=17;goto B68c5da;
case 0x68c5dd:c.instructions+=16;goto B68c5dd;
case 0x68c5e0:c.instructions+=15;goto B68c5e0;
case 0x68c5e3:c.instructions+=14;goto B68c5e3;
case 0x68c5e6:c.instructions+=13;goto B68c5e6;
case 0x68c5ea:c.instructions+=12;goto B68c5ea;
case 0x68c5ed:c.instructions+=11;goto B68c5ed;
case 0x68c5f0:c.instructions+=10;goto B68c5f0;
case 0x68c5f4:c.instructions+=9;goto B68c5f4;
case 0x68c5f8:c.instructions+=8;goto B68c5f8;
case 0x68c5fa:c.instructions+=7;goto B68c5fa;
case 0x68c5fd:c.instructions+=6;goto B68c5fd;
case 0x68c5ff:c.instructions+=5;goto B68c5ff;
case 0x68c601:c.instructions+=4;goto B68c601;
case 0x68c604:c.instructions+=3;goto B68c604;
case 0x68c606:c.instructions+=2;goto B68c606;
case 0x68c609:c.instructions+=1;goto B68c609;
case 0x68c60b:goto L68c60b;
case 0x68c60d:goto L68c60d;
case 0x68c610:goto L68c610;
case 0x68c613:c.instructions+=2;goto B68c613;
case 0x68c615:c.instructions+=1;goto B68c615;
case 0x68c617:goto L68c617;
case 0x68c61a:goto L68c61a;
case 0x68c61d:c.instructions+=3;goto B68c61d;
case 0x68c61e:c.instructions+=2;goto B68c61e;
case 0x68c61f:c.instructions+=1;goto B68c61f;
case 0x68c624:goto L68c624;
case 0x68c627:c.instructions+=3;goto B68c627;
case 0x68c62a:c.instructions+=2;goto B68c62a;
case 0x68c62d:c.instructions+=1;goto B68c62d;
case 0x68c62f:goto L68c62f;
case 0x68c632:c.instructions+=7;goto B68c632;
case 0x68c633:c.instructions+=6;goto B68c633;
case 0x68c634:c.instructions+=5;goto B68c634;
case 0x68c636:c.instructions+=4;goto B68c636;
case 0x68c637:c.instructions+=3;goto B68c637;
case 0x68c639:c.instructions+=2;goto B68c639;
case 0x68c63a:c.instructions+=1;goto B68c63a;
case 0x68c63d:goto L68c63d;
case 0x68c63f:c.instructions+=24;goto B68c63f;
case 0x68c640:c.instructions+=23;goto B68c640;
case 0x68c642:c.instructions+=22;goto B68c642;
case 0x68c643:c.instructions+=21;goto B68c643;
case 0x68c646:c.instructions+=20;goto B68c646;
case 0x68c649:c.instructions+=19;goto B68c649;
case 0x68c64a:c.instructions+=18;goto B68c64a;
case 0x68c64c:c.instructions+=17;goto B68c64c;
case 0x68c652:c.instructions+=16;goto B68c652;
case 0x68c655:c.instructions+=15;goto B68c655;
case 0x68c656:c.instructions+=14;goto B68c656;
case 0x68c657:c.instructions+=13;goto B68c657;
case 0x68c65a:c.instructions+=12;goto B68c65a;
case 0x68c65c:c.instructions+=11;goto B68c65c;
case 0x68c65e:c.instructions+=10;goto B68c65e;
case 0x68c661:c.instructions+=9;goto B68c661;
case 0x68c662:c.instructions+=8;goto B68c662;
case 0x68c664:c.instructions+=7;goto B68c664;
case 0x68c666:c.instructions+=6;goto B68c666;
case 0x68c668:c.instructions+=5;goto B68c668;
case 0x68c66a:c.instructions+=4;goto B68c66a;
case 0x68c66d:c.instructions+=3;goto B68c66d;
case 0x68c670:c.instructions+=2;goto B68c670;
case 0x68c673:c.instructions+=1;goto B68c673;
case 0x68c679:goto L68c679;
case 0x68c67c:c.instructions+=2;goto B68c67c;
case 0x68c682:c.instructions+=1;goto B68c682;
case 0x68c687:goto L68c687;
case 0x68c689:c.instructions+=3;goto B68c689;
case 0x68c68c:c.instructions+=2;goto B68c68c;
case 0x68c68f:c.instructions+=1;goto B68c68f;
case 0x68c695:goto L68c695;
case 0x68c699:c.instructions+=3;goto B68c699;
case 0x68c69d:c.instructions+=2;goto B68c69d;
case 0x68c6a0:c.instructions+=1;goto B68c6a0;
case 0x68c6a3:goto L68c6a3;
case 0x68c6a7:c.instructions+=93;goto B68c6a7;
case 0x68c6aa:c.instructions+=92;goto B68c6aa;
case 0x68c6ad:c.instructions+=91;goto B68c6ad;
case 0x68c6b1:c.instructions+=90;goto B68c6b1;
case 0x68c6b4:c.instructions+=89;goto B68c6b4;
case 0x68c6b7:c.instructions+=88;goto B68c6b7;
case 0x68c6ba:c.instructions+=87;goto B68c6ba;
case 0x68c6be:c.instructions+=86;goto B68c6be;
case 0x68c6c1:c.instructions+=85;goto B68c6c1;
case 0x68c6c6:c.instructions+=84;goto B68c6c6;
case 0x68c6c9:c.instructions+=83;goto B68c6c9;
case 0x68c6cc:c.instructions+=82;goto B68c6cc;
case 0x68c6d0:c.instructions+=81;goto B68c6d0;
case 0x68c6d4:c.instructions+=80;goto B68c6d4;
case 0x68c6d8:c.instructions+=79;goto B68c6d8;
case 0x68c6dd:c.instructions+=78;goto B68c6dd;
case 0x68c6e2:c.instructions+=77;goto B68c6e2;
case 0x68c6e6:c.instructions+=76;goto B68c6e6;
case 0x68c6ea:c.instructions+=75;goto B68c6ea;
case 0x68c6ed:c.instructions+=74;goto B68c6ed;
case 0x68c6f1:c.instructions+=73;goto B68c6f1;
case 0x68c6f5:c.instructions+=72;goto B68c6f5;
case 0x68c6f9:c.instructions+=71;goto B68c6f9;
case 0x68c6fc:c.instructions+=70;goto B68c6fc;
case 0x68c703:c.instructions+=69;goto B68c703;
case 0x68c706:c.instructions+=68;goto B68c706;
case 0x68c709:c.instructions+=67;goto B68c709;
case 0x68c710:c.instructions+=66;goto B68c710;
case 0x68c713:c.instructions+=65;goto B68c713;
case 0x68c716:c.instructions+=64;goto B68c716;
case 0x68c719:c.instructions+=63;goto B68c719;
case 0x68c720:c.instructions+=62;goto B68c720;
case 0x68c723:c.instructions+=61;goto B68c723;
case 0x68c726:c.instructions+=60;goto B68c726;
case 0x68c729:c.instructions+=59;goto B68c729;
case 0x68c72c:c.instructions+=58;goto B68c72c;
case 0x68c72f:c.instructions+=57;goto B68c72f;
case 0x68c736:c.instructions+=56;goto B68c736;
case 0x68c739:c.instructions+=55;goto B68c739;
case 0x68c740:c.instructions+=54;goto B68c740;
case 0x68c743:c.instructions+=53;goto B68c743;
case 0x68c746:c.instructions+=52;goto B68c746;
case 0x68c74d:c.instructions+=51;goto B68c74d;
case 0x68c750:c.instructions+=50;goto B68c750;
case 0x68c753:c.instructions+=49;goto B68c753;
case 0x68c756:c.instructions+=48;goto B68c756;
case 0x68c759:c.instructions+=47;goto B68c759;
case 0x68c75d:c.instructions+=46;goto B68c75d;
case 0x68c761:c.instructions+=45;goto B68c761;
case 0x68c765:c.instructions+=44;goto B68c765;
case 0x68c768:c.instructions+=43;goto B68c768;
case 0x68c76f:c.instructions+=42;goto B68c76f;
case 0x68c776:c.instructions+=41;goto B68c776;
case 0x68c779:c.instructions+=40;goto B68c779;
case 0x68c77c:c.instructions+=39;goto B68c77c;
case 0x68c783:c.instructions+=38;goto B68c783;
case 0x68c78a:c.instructions+=37;goto B68c78a;
case 0x68c78d:c.instructions+=36;goto B68c78d;
case 0x68c794:c.instructions+=35;goto B68c794;
case 0x68c798:c.instructions+=34;goto B68c798;
case 0x68c79b:c.instructions+=33;goto B68c79b;
case 0x68c79e:c.instructions+=32;goto B68c79e;
case 0x68c7a1:c.instructions+=31;goto B68c7a1;
case 0x68c7a4:c.instructions+=30;goto B68c7a4;
case 0x68c7a7:c.instructions+=29;goto B68c7a7;
case 0x68c7aa:c.instructions+=28;goto B68c7aa;
case 0x68c7ad:c.instructions+=27;goto B68c7ad;
case 0x68c7b1:c.instructions+=26;goto B68c7b1;
case 0x68c7b5:c.instructions+=25;goto B68c7b5;
case 0x68c7b8:c.instructions+=24;goto B68c7b8;
case 0x68c7bb:c.instructions+=23;goto B68c7bb;
case 0x68c7bf:c.instructions+=22;goto B68c7bf;
case 0x68c7c3:c.instructions+=21;goto B68c7c3;
case 0x68c7c6:c.instructions+=20;goto B68c7c6;
case 0x68c7c9:c.instructions+=19;goto B68c7c9;
case 0x68c7cc:c.instructions+=18;goto B68c7cc;
case 0x68c7cf:c.instructions+=17;goto B68c7cf;
case 0x68c7d3:c.instructions+=16;goto B68c7d3;
case 0x68c7d7:c.instructions+=15;goto B68c7d7;
case 0x68c7dc:c.instructions+=14;goto B68c7dc;
case 0x68c7df:c.instructions+=13;goto B68c7df;
case 0x68c7e3:c.instructions+=12;goto B68c7e3;
case 0x68c7e6:c.instructions+=11;goto B68c7e6;
case 0x68c7eb:c.instructions+=10;goto B68c7eb;
case 0x68c7ef:c.instructions+=9;goto B68c7ef;
case 0x68c7f4:c.instructions+=8;goto B68c7f4;
case 0x68c7f6:c.instructions+=7;goto B68c7f6;
case 0x68c7f9:c.instructions+=6;goto B68c7f9;
case 0x68c7fb:c.instructions+=5;goto B68c7fb;
case 0x68c7fd:c.instructions+=4;goto B68c7fd;
case 0x68c800:c.instructions+=3;goto B68c800;
case 0x68c802:c.instructions+=2;goto B68c802;
case 0x68c805:c.instructions+=1;goto B68c805;
case 0x68c80b:goto L68c80b;
case 0x68c80d:goto L68c80d;
case 0x68c810:goto L68c810;
case 0x68c813:c.instructions+=2;goto B68c813;
case 0x68c815:c.instructions+=1;goto B68c815;
case 0x68c817:goto L68c817;
case 0x68c81a:goto L68c81a;
case 0x68c81d:c.instructions+=3;goto B68c81d;
case 0x68c81e:c.instructions+=2;goto B68c81e;
case 0x68c81f:c.instructions+=1;goto B68c81f;
case 0x68c824:goto L68c824;
case 0x68c827:c.instructions+=3;goto B68c827;
case 0x68c82a:c.instructions+=2;goto B68c82a;
case 0x68c82d:c.instructions+=1;goto B68c82d;
case 0x68c82f:goto L68c82f;
case 0x68c832:c.instructions+=7;goto B68c832;
case 0x68c833:c.instructions+=6;goto B68c833;
case 0x68c834:c.instructions+=5;goto B68c834;
case 0x68c836:c.instructions+=4;goto B68c836;
case 0x68c837:c.instructions+=3;goto B68c837;
case 0x68c839:c.instructions+=2;goto B68c839;
case 0x68c83a:c.instructions+=1;goto B68c83a;
case 0x68c83d:goto L68c83d;
case 0x68c83f:c.instructions+=24;goto B68c83f;
case 0x68c840:c.instructions+=23;goto B68c840;
case 0x68c842:c.instructions+=22;goto B68c842;
case 0x68c843:c.instructions+=21;goto B68c843;
case 0x68c846:c.instructions+=20;goto B68c846;
case 0x68c849:c.instructions+=19;goto B68c849;
case 0x68c84a:c.instructions+=18;goto B68c84a;
case 0x68c84c:c.instructions+=17;goto B68c84c;
case 0x68c852:c.instructions+=16;goto B68c852;
case 0x68c855:c.instructions+=15;goto B68c855;
case 0x68c856:c.instructions+=14;goto B68c856;
case 0x68c857:c.instructions+=13;goto B68c857;
case 0x68c85a:c.instructions+=12;goto B68c85a;
case 0x68c85c:c.instructions+=11;goto B68c85c;
case 0x68c85e:c.instructions+=10;goto B68c85e;
case 0x68c861:c.instructions+=9;goto B68c861;
case 0x68c862:c.instructions+=8;goto B68c862;
case 0x68c864:c.instructions+=7;goto B68c864;
case 0x68c866:c.instructions+=6;goto B68c866;
case 0x68c868:c.instructions+=5;goto B68c868;
case 0x68c86a:c.instructions+=4;goto B68c86a;
case 0x68c86d:c.instructions+=3;goto B68c86d;
case 0x68c870:c.instructions+=2;goto B68c870;
case 0x68c873:c.instructions+=1;goto B68c873;
case 0x68c879:goto L68c879;
case 0x68c87c:c.instructions+=2;goto B68c87c;
case 0x68c882:c.instructions+=1;goto B68c882;
case 0x68c887:goto L68c887;
case 0x68c889:c.instructions+=3;goto B68c889;
case 0x68c88c:c.instructions+=2;goto B68c88c;
case 0x68c88f:c.instructions+=1;goto B68c88f;
case 0x68c895:goto L68c895;
case 0x68c899:c.instructions+=3;goto B68c899;
case 0x68c89d:c.instructions+=2;goto B68c89d;
case 0x68c8a0:c.instructions+=1;goto B68c8a0;
case 0x68c8a3:goto L68c8a3;
case 0x68c8a6:c.instructions+=72;goto B68c8a6;
case 0x68c8aa:c.instructions+=71;goto B68c8aa;
case 0x68c8af:c.instructions+=70;goto B68c8af;
case 0x68c8b2:c.instructions+=69;goto B68c8b2;
case 0x68c8b6:c.instructions+=68;goto B68c8b6;
case 0x68c8b9:c.instructions+=67;goto B68c8b9;
case 0x68c8bc:c.instructions+=66;goto B68c8bc;
case 0x68c8bf:c.instructions+=65;goto B68c8bf;
case 0x68c8c3:c.instructions+=64;goto B68c8c3;
case 0x68c8c7:c.instructions+=63;goto B68c8c7;
case 0x68c8cb:c.instructions+=62;goto B68c8cb;
case 0x68c8d1:c.instructions+=61;goto B68c8d1;
case 0x68c8d4:c.instructions+=60;goto B68c8d4;
case 0x68c8da:c.instructions+=59;goto B68c8da;
case 0x68c8dd:c.instructions+=58;goto B68c8dd;
case 0x68c8e3:c.instructions+=57;goto B68c8e3;
case 0x68c8e6:c.instructions+=56;goto B68c8e6;
case 0x68c8e9:c.instructions+=55;goto B68c8e9;
case 0x68c8ed:c.instructions+=54;goto B68c8ed;
case 0x68c8f0:c.instructions+=53;goto B68c8f0;
case 0x68c8f7:c.instructions+=52;goto B68c8f7;
case 0x68c8fa:c.instructions+=51;goto B68c8fa;
case 0x68c8fd:c.instructions+=50;goto B68c8fd;
case 0x68c904:c.instructions+=49;goto B68c904;
case 0x68c907:c.instructions+=48;goto B68c907;
case 0x68c90e:c.instructions+=47;goto B68c90e;
case 0x68c911:c.instructions+=46;goto B68c911;
case 0x68c914:c.instructions+=45;goto B68c914;
case 0x68c917:c.instructions+=44;goto B68c917;
case 0x68c91a:c.instructions+=43;goto B68c91a;
case 0x68c921:c.instructions+=42;goto B68c921;
case 0x68c925:c.instructions+=41;goto B68c925;
case 0x68c928:c.instructions+=40;goto B68c928;
case 0x68c92f:c.instructions+=39;goto B68c92f;
case 0x68c936:c.instructions+=38;goto B68c936;
case 0x68c939:c.instructions+=37;goto B68c939;
case 0x68c93c:c.instructions+=36;goto B68c93c;
case 0x68c943:c.instructions+=35;goto B68c943;
case 0x68c94a:c.instructions+=34;goto B68c94a;
case 0x68c94d:c.instructions+=33;goto B68c94d;
case 0x68c950:c.instructions+=32;goto B68c950;
case 0x68c953:c.instructions+=31;goto B68c953;
case 0x68c956:c.instructions+=30;goto B68c956;
case 0x68c959:c.instructions+=29;goto B68c959;
case 0x68c95c:c.instructions+=28;goto B68c95c;
case 0x68c95f:c.instructions+=27;goto B68c95f;
case 0x68c962:c.instructions+=26;goto B68c962;
case 0x68c966:c.instructions+=25;goto B68c966;
case 0x68c969:c.instructions+=24;goto B68c969;
case 0x68c96d:c.instructions+=23;goto B68c96d;
case 0x68c971:c.instructions+=22;goto B68c971;
case 0x68c976:c.instructions+=21;goto B68c976;
case 0x68c979:c.instructions+=20;goto B68c979;
case 0x68c97c:c.instructions+=19;goto B68c97c;
case 0x68c982:c.instructions+=18;goto B68c982;
case 0x68c985:c.instructions+=17;goto B68c985;
case 0x68c989:c.instructions+=16;goto B68c989;
case 0x68c98c:c.instructions+=15;goto B68c98c;
case 0x68c990:c.instructions+=14;goto B68c990;
case 0x68c996:c.instructions+=13;goto B68c996;
case 0x68c999:c.instructions+=12;goto B68c999;
case 0x68c99c:c.instructions+=11;goto B68c99c;
case 0x68c99f:c.instructions+=10;goto B68c99f;
case 0x68c9a2:c.instructions+=9;goto B68c9a2;
case 0x68c9a8:c.instructions+=8;goto B68c9a8;
case 0x68c9aa:c.instructions+=7;goto B68c9aa;
case 0x68c9ad:c.instructions+=6;goto B68c9ad;
case 0x68c9af:c.instructions+=5;goto B68c9af;
case 0x68c9b1:c.instructions+=4;goto B68c9b1;
case 0x68c9b4:c.instructions+=3;goto B68c9b4;
case 0x68c9b6:c.instructions+=2;goto B68c9b6;
case 0x68c9b9:c.instructions+=1;goto B68c9b9;
case 0x68c9bf:goto L68c9bf;
case 0x68c9c1:goto L68c9c1;
case 0x68c9c4:goto L68c9c4;
case 0x68c9c7:c.instructions+=2;goto B68c9c7;
case 0x68c9c9:c.instructions+=1;goto B68c9c9;
case 0x68c9cb:goto L68c9cb;
case 0x68c9ce:goto L68c9ce;
case 0x68c9d1:c.instructions+=3;goto B68c9d1;
case 0x68c9d2:c.instructions+=2;goto B68c9d2;
case 0x68c9d3:c.instructions+=1;goto B68c9d3;
case 0x68c9d8:goto L68c9d8;
case 0x68c9db:c.instructions+=3;goto B68c9db;
case 0x68c9de:c.instructions+=2;goto B68c9de;
case 0x68c9e1:c.instructions+=1;goto B68c9e1;
case 0x68c9e3:goto L68c9e3;
case 0x68c9e6:c.instructions+=7;goto B68c9e6;
case 0x68c9e7:c.instructions+=6;goto B68c9e7;
case 0x68c9e8:c.instructions+=5;goto B68c9e8;
case 0x68c9ea:c.instructions+=4;goto B68c9ea;
case 0x68c9eb:c.instructions+=3;goto B68c9eb;
case 0x68c9ed:c.instructions+=2;goto B68c9ed;
case 0x68c9ee:c.instructions+=1;goto B68c9ee;
case 0x68c9f1:goto L68c9f1;
case 0x68c9f3:c.instructions+=24;goto B68c9f3;
case 0x68c9f4:c.instructions+=23;goto B68c9f4;
case 0x68c9f6:c.instructions+=22;goto B68c9f6;
case 0x68c9f7:c.instructions+=21;goto B68c9f7;
case 0x68c9fa:c.instructions+=20;goto B68c9fa;
case 0x68c9fd:c.instructions+=19;goto B68c9fd;
case 0x68c9fe:c.instructions+=18;goto B68c9fe;
case 0x68ca00:c.instructions+=17;goto B68ca00;
case 0x68ca06:c.instructions+=16;goto B68ca06;
case 0x68ca09:c.instructions+=15;goto B68ca09;
case 0x68ca0a:c.instructions+=14;goto B68ca0a;
case 0x68ca0b:c.instructions+=13;goto B68ca0b;
case 0x68ca0e:c.instructions+=12;goto B68ca0e;
case 0x68ca10:c.instructions+=11;goto B68ca10;
case 0x68ca12:c.instructions+=10;goto B68ca12;
case 0x68ca15:c.instructions+=9;goto B68ca15;
case 0x68ca16:c.instructions+=8;goto B68ca16;
case 0x68ca18:c.instructions+=7;goto B68ca18;
case 0x68ca1a:c.instructions+=6;goto B68ca1a;
case 0x68ca1c:c.instructions+=5;goto B68ca1c;
case 0x68ca1e:c.instructions+=4;goto B68ca1e;
case 0x68ca21:c.instructions+=3;goto B68ca21;
case 0x68ca24:c.instructions+=2;goto B68ca24;
case 0x68ca27:c.instructions+=1;goto B68ca27;
case 0x68ca2d:goto L68ca2d;
case 0x68ca30:c.instructions+=2;goto B68ca30;
case 0x68ca36:c.instructions+=1;goto B68ca36;
case 0x68ca3b:goto L68ca3b;
case 0x68ca3d:c.instructions+=3;goto B68ca3d;
case 0x68ca40:c.instructions+=2;goto B68ca40;
case 0x68ca43:c.instructions+=1;goto B68ca43;
case 0x68ca49:goto L68ca49;
case 0x68ca4d:c.instructions+=3;goto B68ca4d;
case 0x68ca51:c.instructions+=2;goto B68ca51;
case 0x68ca54:c.instructions+=1;goto B68ca54;
case 0x68ca57:goto L68ca57;
case 0x68ca5a:c.instructions+=95;goto B68ca5a;
case 0x68ca5e:c.instructions+=94;goto B68ca5e;
case 0x68ca63:c.instructions+=93;goto B68ca63;
case 0x68ca66:c.instructions+=92;goto B68ca66;
case 0x68ca6a:c.instructions+=91;goto B68ca6a;
case 0x68ca6d:c.instructions+=90;goto B68ca6d;
case 0x68ca70:c.instructions+=89;goto B68ca70;
case 0x68ca73:c.instructions+=88;goto B68ca73;
case 0x68ca77:c.instructions+=87;goto B68ca77;
case 0x68ca7b:c.instructions+=86;goto B68ca7b;
case 0x68ca7f:c.instructions+=85;goto B68ca7f;
case 0x68ca85:c.instructions+=84;goto B68ca85;
case 0x68ca88:c.instructions+=83;goto B68ca88;
case 0x68ca8e:c.instructions+=82;goto B68ca8e;
case 0x68ca91:c.instructions+=81;goto B68ca91;
case 0x68ca97:c.instructions+=80;goto B68ca97;
case 0x68ca9a:c.instructions+=79;goto B68ca9a;
case 0x68ca9d:c.instructions+=78;goto B68ca9d;
case 0x68caa1:c.instructions+=77;goto B68caa1;
case 0x68caa4:c.instructions+=76;goto B68caa4;
case 0x68caab:c.instructions+=75;goto B68caab;
case 0x68caae:c.instructions+=74;goto B68caae;
case 0x68cab5:c.instructions+=73;goto B68cab5;
case 0x68cab8:c.instructions+=72;goto B68cab8;
case 0x68cabb:c.instructions+=71;goto B68cabb;
case 0x68cabe:c.instructions+=70;goto B68cabe;
case 0x68cac2:c.instructions+=69;goto B68cac2;
case 0x68cac5:c.instructions+=68;goto B68cac5;
case 0x68cac8:c.instructions+=67;goto B68cac8;
case 0x68cacc:c.instructions+=66;goto B68cacc;
case 0x68cacf:c.instructions+=65;goto B68cacf;
case 0x68cad2:c.instructions+=64;goto B68cad2;
case 0x68cad5:c.instructions+=63;goto B68cad5;
case 0x68cad8:c.instructions+=62;goto B68cad8;
case 0x68cadb:c.instructions+=61;goto B68cadb;
case 0x68cade:c.instructions+=60;goto B68cade;
case 0x68cae1:c.instructions+=59;goto B68cae1;
case 0x68cae4:c.instructions+=58;goto B68cae4;
case 0x68cae7:c.instructions+=57;goto B68cae7;
case 0x68caee:c.instructions+=56;goto B68caee;
case 0x68caf1:c.instructions+=55;goto B68caf1;
case 0x68caf8:c.instructions+=54;goto B68caf8;
case 0x68cafb:c.instructions+=53;goto B68cafb;
case 0x68cafe:c.instructions+=52;goto B68cafe;
case 0x68cb05:c.instructions+=51;goto B68cb05;
case 0x68cb08:c.instructions+=50;goto B68cb08;
case 0x68cb0b:c.instructions+=49;goto B68cb0b;
case 0x68cb12:c.instructions+=48;goto B68cb12;
case 0x68cb19:c.instructions+=47;goto B68cb19;
case 0x68cb1c:c.instructions+=46;goto B68cb1c;
case 0x68cb20:c.instructions+=45;goto B68cb20;
case 0x68cb23:c.instructions+=44;goto B68cb23;
case 0x68cb2a:c.instructions+=43;goto B68cb2a;
case 0x68cb31:c.instructions+=42;goto B68cb31;
case 0x68cb34:c.instructions+=41;goto B68cb34;
case 0x68cb37:c.instructions+=40;goto B68cb37;
case 0x68cb3e:c.instructions+=39;goto B68cb3e;
case 0x68cb42:c.instructions+=38;goto B68cb42;
case 0x68cb45:c.instructions+=37;goto B68cb45;
case 0x68cb49:c.instructions+=36;goto B68cb49;
case 0x68cb4c:c.instructions+=35;goto B68cb4c;
case 0x68cb4f:c.instructions+=34;goto B68cb4f;
case 0x68cb52:c.instructions+=33;goto B68cb52;
case 0x68cb55:c.instructions+=32;goto B68cb55;
case 0x68cb59:c.instructions+=31;goto B68cb59;
case 0x68cb5c:c.instructions+=30;goto B68cb5c;
case 0x68cb5f:c.instructions+=29;goto B68cb5f;
case 0x68cb62:c.instructions+=28;goto B68cb62;
case 0x68cb65:c.instructions+=27;goto B68cb65;
case 0x68cb69:c.instructions+=26;goto B68cb69;
case 0x68cb6c:c.instructions+=25;goto B68cb6c;
case 0x68cb6f:c.instructions+=24;goto B68cb6f;
case 0x68cb72:c.instructions+=23;goto B68cb72;
case 0x68cb77:c.instructions+=22;goto B68cb77;
case 0x68cb7a:c.instructions+=21;goto B68cb7a;
case 0x68cb7d:c.instructions+=20;goto B68cb7d;
case 0x68cb83:c.instructions+=19;goto B68cb83;
case 0x68cb86:c.instructions+=18;goto B68cb86;
case 0x68cb89:c.instructions+=17;goto B68cb89;
case 0x68cb8d:c.instructions+=16;goto B68cb8d;
case 0x68cb90:c.instructions+=15;goto B68cb90;
case 0x68cb94:c.instructions+=14;goto B68cb94;
case 0x68cb9a:c.instructions+=13;goto B68cb9a;
case 0x68cb9d:c.instructions+=12;goto B68cb9d;
case 0x68cba0:c.instructions+=11;goto B68cba0;
case 0x68cba3:c.instructions+=10;goto B68cba3;
case 0x68cba6:c.instructions+=9;goto B68cba6;
case 0x68cbac:c.instructions+=8;goto B68cbac;
case 0x68cbae:c.instructions+=7;goto B68cbae;
case 0x68cbb1:c.instructions+=6;goto B68cbb1;
case 0x68cbb3:c.instructions+=5;goto B68cbb3;
case 0x68cbb5:c.instructions+=4;goto B68cbb5;
case 0x68cbb8:c.instructions+=3;goto B68cbb8;
case 0x68cbba:c.instructions+=2;goto B68cbba;
case 0x68cbbd:c.instructions+=1;goto B68cbbd;
case 0x68cbc3:goto L68cbc3;
case 0x68cbc5:goto L68cbc5;
case 0x68cbc8:goto L68cbc8;
case 0x68cbcb:c.instructions+=2;goto B68cbcb;
case 0x68cbcd:c.instructions+=1;goto B68cbcd;
case 0x68cbcf:goto L68cbcf;
case 0x68cbd2:goto L68cbd2;
case 0x68cbd5:c.instructions+=3;goto B68cbd5;
case 0x68cbd6:c.instructions+=2;goto B68cbd6;
case 0x68cbd7:c.instructions+=1;goto B68cbd7;
case 0x68cbdc:goto L68cbdc;
case 0x68cbdf:c.instructions+=3;goto B68cbdf;
case 0x68cbe2:c.instructions+=2;goto B68cbe2;
case 0x68cbe5:c.instructions+=1;goto B68cbe5;
case 0x68cbe7:goto L68cbe7;
case 0x68cbea:c.instructions+=7;goto B68cbea;
case 0x68cbeb:c.instructions+=6;goto B68cbeb;
case 0x68cbec:c.instructions+=5;goto B68cbec;
case 0x68cbee:c.instructions+=4;goto B68cbee;
case 0x68cbef:c.instructions+=3;goto B68cbef;
case 0x68cbf1:c.instructions+=2;goto B68cbf1;
case 0x68cbf2:c.instructions+=1;goto B68cbf2;
case 0x68cbf5:goto L68cbf5;
case 0x68cbf7:c.instructions+=12;goto B68cbf7;
case 0x68cbf8:c.instructions+=11;goto B68cbf8;
case 0x68cbfc:c.instructions+=10;goto B68cbfc;
case 0x68cc04:c.instructions+=9;goto B68cc04;
case 0x68cc0c:c.instructions+=8;goto B68cc0c;
case 0x68cc10:c.instructions+=7;goto B68cc10;
case 0x68cc14:c.instructions+=6;goto B68cc14;
case 0x68cc18:c.instructions+=5;goto B68cc18;
case 0x68cc20:c.instructions+=4;goto B68cc20;
case 0x68cc24:c.instructions+=3;goto B68cc24;
case 0x68cc28:c.instructions+=2;goto B68cc28;
case 0x68cc2a:c.instructions+=1;goto B68cc2a;
case 0x68cc2c:goto L68cc2c;
case 0x68cc34:c.instructions+=25;goto B68cc34;
case 0x68cc38:c.instructions+=24;goto B68cc38;
case 0x68cc40:c.instructions+=23;goto B68cc40;
case 0x68cc48:c.instructions+=22;goto B68cc48;
case 0x68cc4c:c.instructions+=21;goto B68cc4c;
case 0x68cc50:c.instructions+=20;goto B68cc50;
case 0x68cc54:c.instructions+=19;goto B68cc54;
case 0x68cc58:c.instructions+=18;goto B68cc58;
case 0x68cc5c:c.instructions+=17;goto B68cc5c;
case 0x68cc60:c.instructions+=16;goto B68cc60;
case 0x68cc64:c.instructions+=15;goto B68cc64;
case 0x68cc68:c.instructions+=14;goto B68cc68;
case 0x68cc6d:c.instructions+=13;goto B68cc6d;
case 0x68cc72:c.instructions+=12;goto B68cc72;
case 0x68cc76:c.instructions+=11;goto B68cc76;
case 0x68cc7a:c.instructions+=10;goto B68cc7a;
case 0x68cc7e:c.instructions+=9;goto B68cc7e;
case 0x68cc82:c.instructions+=8;goto B68cc82;
case 0x68cc86:c.instructions+=7;goto B68cc86;
case 0x68cc8a:c.instructions+=6;goto B68cc8a;
case 0x68cc8d:c.instructions+=5;goto B68cc8d;
case 0x68cc90:c.instructions+=4;goto B68cc90;
case 0x68cc93:c.instructions+=3;goto B68cc93;
case 0x68cc96:c.instructions+=2;goto B68cc96;
case 0x68cc97:c.instructions+=1;goto B68cc97;
case 0x68cc98:goto L68cc98;
case 0x68cca0:c.instructions+=19;goto B68cca0;
case 0x68cca4:c.instructions+=18;goto B68cca4;
case 0x68cca8:c.instructions+=17;goto B68cca8;
case 0x68ccac:c.instructions+=16;goto B68ccac;
case 0x68ccb0:c.instructions+=15;goto B68ccb0;
case 0x68ccb4:c.instructions+=14;goto B68ccb4;
case 0x68ccb8:c.instructions+=13;goto B68ccb8;
case 0x68ccbc:c.instructions+=12;goto B68ccbc;
case 0x68ccc0:c.instructions+=11;goto B68ccc0;
case 0x68ccc4:c.instructions+=10;goto B68ccc4;
case 0x68ccc8:c.instructions+=9;goto B68ccc8;
case 0x68cccc:c.instructions+=8;goto B68cccc;
case 0x68ccd0:c.instructions+=7;goto B68ccd0;
case 0x68ccd4:c.instructions+=6;goto B68ccd4;
case 0x68ccd9:c.instructions+=5;goto B68ccd9;
case 0x68ccde:c.instructions+=4;goto B68ccde;
case 0x68cce2:c.instructions+=3;goto B68cce2;
case 0x68cce6:c.instructions+=2;goto B68cce6;
case 0x68cce7:c.instructions+=1;goto B68cce7;
case 0x68cce8:goto L68cce8;
case 0x68ccea:c.instructions+=10;goto B68ccea;
case 0x68cceb:c.instructions+=9;goto B68cceb;
case 0x68cced:c.instructions+=8;goto B68cced;
case 0x68ccf0:c.instructions+=7;goto B68ccf0;
case 0x68ccf4:c.instructions+=6;goto B68ccf4;
case 0x68ccf5:c.instructions+=5;goto B68ccf5;
case 0x68ccf6:c.instructions+=4;goto B68ccf6;
case 0x68ccf7:c.instructions+=3;goto B68ccf7;
case 0x68ccfa:c.instructions+=2;goto B68ccfa;
case 0x68ccfd:c.instructions+=1;goto B68ccfd;
case 0x68ccff:goto L68ccff;
case 0x68cd02:c.instructions+=5;goto B68cd02;
case 0x68cd05:c.instructions+=4;goto B68cd05;
case 0x68cd08:c.instructions+=3;goto B68cd08;
case 0x68cd0b:c.instructions+=2;goto B68cd0b;
case 0x68cd0e:c.instructions+=1;goto B68cd0e;
case 0x68cd11:goto L68cd11;
case 0x68cd14:c.instructions+=3;goto B68cd14;
case 0x68cd18:c.instructions+=2;goto B68cd18;
case 0x68cd1b:c.instructions+=1;goto B68cd1b;
case 0x68cd20:goto L68cd20;
case 0x68cd23:c.instructions+=6;goto B68cd23;
case 0x68cd27:c.instructions+=5;goto B68cd27;
case 0x68cd2b:c.instructions+=4;goto B68cd2b;
case 0x68cd2f:c.instructions+=3;goto B68cd2f;
case 0x68cd32:c.instructions+=2;goto B68cd32;
case 0x68cd35:c.instructions+=1;goto B68cd35;
case 0x68cd37:goto L68cd37;
case 0x68cd3a:c.instructions+=5;goto B68cd3a;
case 0x68cd3d:c.instructions+=4;goto B68cd3d;
case 0x68cd40:c.instructions+=3;goto B68cd40;
case 0x68cd43:c.instructions+=2;goto B68cd43;
case 0x68cd46:c.instructions+=1;goto B68cd46;
case 0x68cd49:goto L68cd49;
case 0x68cd4b:c.instructions+=2;goto B68cd4b;
case 0x68cd4e:c.instructions+=1;goto B68cd4e;
case 0x68cd50:goto L68cd50;
case 0x68cd55:goto L68cd55;
case 0x68cd58:c.instructions+=14;goto B68cd58;
case 0x68cd5c:c.instructions+=13;goto B68cd5c;
case 0x68cd5e:c.instructions+=12;goto B68cd5e;
case 0x68cd60:c.instructions+=11;goto B68cd60;
case 0x68cd66:c.instructions+=10;goto B68cd66;
case 0x68cd6c:c.instructions+=9;goto B68cd6c;
case 0x68cd6f:c.instructions+=8;goto B68cd6f;
case 0x68cd71:c.instructions+=7;goto B68cd71;
case 0x68cd73:c.instructions+=6;goto B68cd73;
case 0x68cd75:c.instructions+=5;goto B68cd75;
case 0x68cd77:c.instructions+=4;goto B68cd77;
case 0x68cd7d:c.instructions+=3;goto B68cd7d;
case 0x68cd7f:c.instructions+=2;goto B68cd7f;
case 0x68cd81:c.instructions+=1;goto B68cd81;
case 0x68cd83:goto L68cd83;
case 0x68cd85:goto L68cd85;
case 0x68cd8b:c.instructions+=7;goto B68cd8b;
case 0x68cd8e:c.instructions+=6;goto B68cd8e;
case 0x68cd90:c.instructions+=5;goto B68cd90;
case 0x68cd92:c.instructions+=4;goto B68cd92;
case 0x68cd95:c.instructions+=3;goto B68cd95;
case 0x68cd98:c.instructions+=2;goto B68cd98;
case 0x68cd9b:c.instructions+=1;goto B68cd9b;
case 0x68cd9d:goto L68cd9d;
case 0x68cda3:goto L68cda3;
case 0x68cda6:c.instructions+=5;goto B68cda6;
case 0x68cda9:c.instructions+=4;goto B68cda9;
case 0x68cdac:c.instructions+=3;goto B68cdac;
case 0x68cdad:c.instructions+=2;goto B68cdad;
case 0x68cdb0:c.instructions+=1;goto B68cdb0;
case 0x68cdb2:goto L68cdb2;
case 0x68cdb5:c.instructions+=5;goto B68cdb5;
case 0x68cdb6:c.instructions+=4;goto B68cdb6;
case 0x68cdb7:c.instructions+=3;goto B68cdb7;
case 0x68cdb8:c.instructions+=2;goto B68cdb8;
case 0x68cdb9:c.instructions+=1;goto B68cdb9;
case 0x68cdbc:goto L68cdbc;
case 0x68cdbe:c.instructions+=15;goto B68cdbe;
case 0x68cdbf:c.instructions+=14;goto B68cdbf;
case 0x68cdc1:c.instructions+=13;goto B68cdc1;
case 0x68cdc2:c.instructions+=12;goto B68cdc2;
case 0x68cdc5:c.instructions+=11;goto B68cdc5;
case 0x68cdc8:c.instructions+=10;goto B68cdc8;
case 0x68cdc9:c.instructions+=9;goto B68cdc9;
case 0x68cdcb:c.instructions+=8;goto B68cdcb;
case 0x68cdce:c.instructions+=7;goto B68cdce;
case 0x68cdd1:c.instructions+=6;goto B68cdd1;
case 0x68cdd4:c.instructions+=5;goto B68cdd4;
case 0x68cdd7:c.instructions+=4;goto B68cdd7;
case 0x68cdd9:c.instructions+=3;goto B68cdd9;
case 0x68cddc:c.instructions+=2;goto B68cddc;
case 0x68cde0:c.instructions+=1;goto B68cde0;
case 0x68cde2:goto L68cde2;
case 0x68cde6:c.instructions+=14;goto B68cde6;
case 0x68cdea:c.instructions+=13;goto B68cdea;
case 0x68cded:c.instructions+=12;goto B68cded;
case 0x68cdf0:c.instructions+=11;goto B68cdf0;
case 0x68cdf4:c.instructions+=10;goto B68cdf4;
case 0x68cdf7:c.instructions+=9;goto B68cdf7;
case 0x68cdfa:c.instructions+=8;goto B68cdfa;
case 0x68cdfe:c.instructions+=7;goto B68cdfe;
case 0x68ce01:c.instructions+=6;goto B68ce01;
case 0x68ce05:c.instructions+=5;goto B68ce05;
case 0x68ce08:c.instructions+=4;goto B68ce08;
case 0x68ce0b:c.instructions+=3;goto B68ce0b;
case 0x68ce0f:c.instructions+=2;goto B68ce0f;
case 0x68ce12:c.instructions+=1;goto B68ce12;
case 0x68ce14:goto L68ce14;
case 0x68ce18:c.instructions+=21;goto B68ce18;
case 0x68ce1c:c.instructions+=20;goto B68ce1c;
case 0x68ce20:c.instructions+=19;goto B68ce20;
case 0x68ce24:c.instructions+=18;goto B68ce24;
case 0x68ce28:c.instructions+=17;goto B68ce28;
case 0x68ce2c:c.instructions+=16;goto B68ce2c;
case 0x68ce2f:c.instructions+=15;goto B68ce2f;
case 0x68ce32:c.instructions+=14;goto B68ce32;
case 0x68ce36:c.instructions+=13;goto B68ce36;
case 0x68ce39:c.instructions+=12;goto B68ce39;
case 0x68ce3c:c.instructions+=11;goto B68ce3c;
case 0x68ce40:c.instructions+=10;goto B68ce40;
case 0x68ce44:c.instructions+=9;goto B68ce44;
case 0x68ce48:c.instructions+=8;goto B68ce48;
case 0x68ce4b:c.instructions+=7;goto B68ce4b;
case 0x68ce4f:c.instructions+=6;goto B68ce4f;
case 0x68ce52:c.instructions+=5;goto B68ce52;
case 0x68ce55:c.instructions+=4;goto B68ce55;
case 0x68ce59:c.instructions+=3;goto B68ce59;
case 0x68ce5d:c.instructions+=2;goto B68ce5d;
case 0x68ce60:c.instructions+=1;goto B68ce60;
case 0x68ce64:goto L68ce64;
case 0x68ce67:c.instructions+=9;goto B68ce67;
case 0x68ce6a:c.instructions+=8;goto B68ce6a;
case 0x68ce6d:c.instructions+=7;goto B68ce6d;
case 0x68ce70:c.instructions+=6;goto B68ce70;
case 0x68ce73:c.instructions+=5;goto B68ce73;
case 0x68ce75:c.instructions+=4;goto B68ce75;
case 0x68ce76:c.instructions+=3;goto B68ce76;
case 0x68ce78:c.instructions+=2;goto B68ce78;
case 0x68ce79:c.instructions+=1;goto B68ce79;
case 0x68ce7c:goto L68ce7c;
case 0x68ce7e:c.instructions+=84;goto B68ce7e;
case 0x68ce7f:c.instructions+=83;goto B68ce7f;
case 0x68ce81:c.instructions+=82;goto B68ce81;
case 0x68ce84:c.instructions+=81;goto B68ce84;
case 0x68ce87:c.instructions+=80;goto B68ce87;
case 0x68ce8a:c.instructions+=79;goto B68ce8a;
case 0x68ce8d:c.instructions+=78;goto B68ce8d;
case 0x68ce91:c.instructions+=77;goto B68ce91;
case 0x68ce95:c.instructions+=76;goto B68ce95;
case 0x68ce99:c.instructions+=75;goto B68ce99;
case 0x68ce9d:c.instructions+=74;goto B68ce9d;
case 0x68cea1:c.instructions+=73;goto B68cea1;
case 0x68cea5:c.instructions+=72;goto B68cea5;
case 0x68cea9:c.instructions+=71;goto B68cea9;
case 0x68cead:c.instructions+=70;goto B68cead;
case 0x68ceb2:c.instructions+=69;goto B68ceb2;
case 0x68ceb7:c.instructions+=68;goto B68ceb7;
case 0x68cebc:c.instructions+=67;goto B68cebc;
case 0x68cec0:c.instructions+=66;goto B68cec0;
case 0x68cec4:c.instructions+=65;goto B68cec4;
case 0x68cec8:c.instructions+=64;goto B68cec8;
case 0x68cecc:c.instructions+=63;goto B68cecc;
case 0x68cecf:c.instructions+=62;goto B68cecf;
case 0x68ced2:c.instructions+=61;goto B68ced2;
case 0x68ced5:c.instructions+=60;goto B68ced5;
case 0x68ced8:c.instructions+=59;goto B68ced8;
case 0x68cedb:c.instructions+=58;goto B68cedb;
case 0x68cede:c.instructions+=57;goto B68cede;
case 0x68cee1:c.instructions+=56;goto B68cee1;
case 0x68cee6:c.instructions+=55;goto B68cee6;
case 0x68ceeb:c.instructions+=54;goto B68ceeb;
case 0x68cef0:c.instructions+=53;goto B68cef0;
case 0x68cef4:c.instructions+=52;goto B68cef4;
case 0x68cef8:c.instructions+=51;goto B68cef8;
case 0x68cefc:c.instructions+=50;goto B68cefc;
case 0x68ceff:c.instructions+=49;goto B68ceff;
case 0x68cf02:c.instructions+=48;goto B68cf02;
case 0x68cf05:c.instructions+=47;goto B68cf05;
case 0x68cf08:c.instructions+=46;goto B68cf08;
case 0x68cf0b:c.instructions+=45;goto B68cf0b;
case 0x68cf10:c.instructions+=44;goto B68cf10;
case 0x68cf14:c.instructions+=43;goto B68cf14;
case 0x68cf17:c.instructions+=42;goto B68cf17;
case 0x68cf1a:c.instructions+=41;goto B68cf1a;
case 0x68cf1f:c.instructions+=40;goto B68cf1f;
case 0x68cf24:c.instructions+=39;goto B68cf24;
case 0x68cf28:c.instructions+=38;goto B68cf28;
case 0x68cf2c:c.instructions+=37;goto B68cf2c;
case 0x68cf2f:c.instructions+=36;goto B68cf2f;
case 0x68cf32:c.instructions+=35;goto B68cf32;
case 0x68cf35:c.instructions+=34;goto B68cf35;
case 0x68cf3a:c.instructions+=33;goto B68cf3a;
case 0x68cf3e:c.instructions+=32;goto B68cf3e;
case 0x68cf41:c.instructions+=31;goto B68cf41;
case 0x68cf44:c.instructions+=30;goto B68cf44;
case 0x68cf49:c.instructions+=29;goto B68cf49;
case 0x68cf4d:c.instructions+=28;goto B68cf4d;
case 0x68cf50:c.instructions+=27;goto B68cf50;
case 0x68cf53:c.instructions+=26;goto B68cf53;
case 0x68cf58:c.instructions+=25;goto B68cf58;
case 0x68cf5c:c.instructions+=24;goto B68cf5c;
case 0x68cf5f:c.instructions+=23;goto B68cf5f;
case 0x68cf64:c.instructions+=22;goto B68cf64;
case 0x68cf68:c.instructions+=21;goto B68cf68;
case 0x68cf6b:c.instructions+=20;goto B68cf6b;
case 0x68cf70:c.instructions+=19;goto B68cf70;
case 0x68cf74:c.instructions+=18;goto B68cf74;
case 0x68cf77:c.instructions+=17;goto B68cf77;
case 0x68cf7c:c.instructions+=16;goto B68cf7c;
case 0x68cf80:c.instructions+=15;goto B68cf80;
case 0x68cf83:c.instructions+=14;goto B68cf83;
case 0x68cf86:c.instructions+=13;goto B68cf86;
case 0x68cf8a:c.instructions+=12;goto B68cf8a;
case 0x68cf8d:c.instructions+=11;goto B68cf8d;
case 0x68cf91:c.instructions+=10;goto B68cf91;
case 0x68cf95:c.instructions+=9;goto B68cf95;
case 0x68cf98:c.instructions+=8;goto B68cf98;
case 0x68cf9c:c.instructions+=7;goto B68cf9c;
case 0x68cfa0:c.instructions+=6;goto B68cfa0;
case 0x68cfa3:c.instructions+=5;goto B68cfa3;
case 0x68cfa7:c.instructions+=4;goto B68cfa7;
case 0x68cfab:c.instructions+=3;goto B68cfab;
case 0x68cfae:c.instructions+=2;goto B68cfae;
case 0x68cfaf:c.instructions+=1;goto B68cfaf;
case 0x68cfb2:goto L68cfb2;
case 0x68cfb4:c.instructions+=17;goto B68cfb4;
case 0x68cfb5:c.instructions+=16;goto B68cfb5;
case 0x68cfb7:c.instructions+=15;goto B68cfb7;
case 0x68cfba:c.instructions+=14;goto B68cfba;
case 0x68cfbe:c.instructions+=13;goto B68cfbe;
case 0x68cfc3:c.instructions+=12;goto B68cfc3;
case 0x68cfc8:c.instructions+=11;goto B68cfc8;
case 0x68cfcb:c.instructions+=10;goto B68cfcb;
case 0x68cfce:c.instructions+=9;goto B68cfce;
case 0x68cfd1:c.instructions+=8;goto B68cfd1;
case 0x68cfd5:c.instructions+=7;goto B68cfd5;
case 0x68cfd9:c.instructions+=6;goto B68cfd9;
case 0x68cfdd:c.instructions+=5;goto B68cfdd;
case 0x68cfe1:c.instructions+=4;goto B68cfe1;
case 0x68cfe5:c.instructions+=3;goto B68cfe5;
case 0x68cfe8:c.instructions+=2;goto B68cfe8;
case 0x68cfef:c.instructions+=1;goto B68cfef;
case 0x68cff1:goto L68cff1;
case 0x68cff3:c.instructions+=4;goto B68cff3;
case 0x68cff5:c.instructions+=3;goto B68cff5;
case 0x68cff8:c.instructions+=2;goto B68cff8;
case 0x68cffb:c.instructions+=1;goto B68cffb;
case 0x68cffe:goto L68cffe;
default:missing_instruction(c.pc);}
B68c001:L68c001:{c.instructions+=6;NFSU2_TR(0x68c001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c004:{NFSU2_TR(0x68c004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68c007:{NFSU2_TR(0x68c007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c00a:{NFSU2_TR(0x68c00a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68c00c:{NFSU2_TR(0x68c00c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B68c00f:{NFSU2_TR(0x68c00f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c073;}}
}
B68c011:L68c011:{c.instructions+=1;NFSU2_TR(0x68c011);
w4(R+28,u32(0x400ull));
}
B68c016:L68c016:{c.instructions+=15;NFSU2_TR(0x68c016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c019:{NFSU2_TR(0x68c019);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B68c01d:{NFSU2_TR(0x68c01d);
__builtin_memmove((R+8),(R+4),4);
}
B68c01f:{NFSU2_TR(0x68c01f);
__builtin_memmove((R+24),(R+4),4);
}
B68c021:{NFSU2_TR(0x68c021);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7c00ull))));
}
B68c027:{NFSU2_TR(0x68c027);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffff8000ull))));
}
B68c02d:{NFSU2_TR(0x68c02d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B68c030:{NFSU2_TR(0x68c030);
__builtin_memmove((R+0),(R+8),4);
}
B68c032:{NFSU2_TR(0x68c032);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B68c034:{NFSU2_TR(0x68c034);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c036:{NFSU2_TR(0x68c036);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B68c038:{NFSU2_TR(0x68c038);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ffull))));
}
B68c03e:{NFSU2_TR(0x68c03e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B68c040:{NFSU2_TR(0x68c040);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c042:{NFSU2_TR(0x68c042);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L68c046;}}
}
B68c044:L68c044:{c.instructions+=1;NFSU2_TR(0x68c044);
__builtin_memmove((R+8),(R+28),4);
}
B68c046:L68c046:{c.instructions+=8;NFSU2_TR(0x68c046);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x19800ull))));
}
B68c04c:{NFSU2_TR(0x68c04c);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c04f:{NFSU2_TR(0x68c04f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B68c051:{NFSU2_TR(0x68c051);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68c053:{NFSU2_TR(0x68c053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c056:{NFSU2_TR(0x68c056);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B68c059:{NFSU2_TR(0x68c059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c05c:{NFSU2_TR(0x68c05c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68c064;}}
}
B68c05e:L68c05e:{c.instructions+=1;NFSU2_TR(0x68c05e);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B68c064:L68c064:{c.instructions+=6;NFSU2_TR(0x68c064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c067:{NFSU2_TR(0x68c067);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B68c06a:{NFSU2_TR(0x68c06a);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B68c06d:{NFSU2_TR(0x68c06d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B68c06e:{NFSU2_TR(0x68c06e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B68c071:{NFSU2_TR(0x68c071);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c016u);}goto L68c016;}}
}
B68c073:L68c073:{c.instructions+=6;NFSU2_TR(0x68c073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c076:{NFSU2_TR(0x68c076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c077:{NFSU2_TR(0x68c077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c078:{NFSU2_TR(0x68c078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c079:{NFSU2_TR(0x68c079);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c07a:{NFSU2_TR(0x68c07a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c07d:L68c07d:{c.instructions+=25;NFSU2_TR(0x68c07d);
__builtin_memmove((R+28),(R+28),4);
}
B68c07f:{NFSU2_TR(0x68c07f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c080:{NFSU2_TR(0x68c080);
__builtin_memmove((R+12),(R+16),4);
}
B68c082:{NFSU2_TR(0x68c082);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c083:{NFSU2_TR(0x68c083);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c086:{NFSU2_TR(0x68c086);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c089:{NFSU2_TR(0x68c089);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c08a:{NFSU2_TR(0x68c08a);
__builtin_memmove((R+20),(R+16),4);
}
B68c08c:{NFSU2_TR(0x68c08c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68c092:{NFSU2_TR(0x68c092);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c095:{NFSU2_TR(0x68c095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c096:{NFSU2_TR(0x68c096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c097:{NFSU2_TR(0x68c097);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c09a:{NFSU2_TR(0x68c09a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c09c:{NFSU2_TR(0x68c09c);
__builtin_memmove((R+8),(R+0),4);
}
B68c09e:{NFSU2_TR(0x68c09e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c0a1:{NFSU2_TR(0x68c0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c0a2:{NFSU2_TR(0x68c0a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68c0a4:{NFSU2_TR(0x68c0a4);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c0a6:{NFSU2_TR(0x68c0a6);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c0a8:{NFSU2_TR(0x68c0a8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68c0aa:{NFSU2_TR(0x68c0aa);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c0ad:{NFSU2_TR(0x68c0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c0b0:{NFSU2_TR(0x68c0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c0b3:{NFSU2_TR(0x68c0b3);
if(r1(R+518)){{goto L68c220;}}
}
B68c0b9:L68c0b9:{c.instructions+=3;NFSU2_TR(0x68c0b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c0bc:{NFSU2_TR(0x68c0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c0c2:{NFSU2_TR(0x68c0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c0c7ull));
TAIL_STATIC(0x68b19fu,68b);
}
B68c0c7:L68c0c7:{c.instructions+=4;NFSU2_TR(0x68c0c7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68c0c9:{NFSU2_TR(0x68c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c0cc:{NFSU2_TR(0x68c0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68c0cf:{NFSU2_TR(0x68c0cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c220;}}
}
B68c0d5:L68c0d5:{c.instructions+=4;NFSU2_TR(0x68c0d5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c0d9:{NFSU2_TR(0x68c0d9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c0dd:{NFSU2_TR(0x68c0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c0e0:{NFSU2_TR(0x68c0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c0e3:L68c0e3:{c.instructions+=81;NFSU2_TR(0x68c0e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68c0e7:{NFSU2_TR(0x68c0e7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c0ea:{NFSU2_TR(0x68c0ea);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c0ed:{NFSU2_TR(0x68c0ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c0f1:{NFSU2_TR(0x68c0f1);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c0f4:{NFSU2_TR(0x68c0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68c0f9:{NFSU2_TR(0x68c0f9);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c0fc:{NFSU2_TR(0x68c0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c0ff:{NFSU2_TR(0x68c0ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c103:{NFSU2_TR(0x68c103);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c107:{NFSU2_TR(0x68c107);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c10b:{NFSU2_TR(0x68c10b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68c111:{NFSU2_TR(0x68c111);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68c114:{NFSU2_TR(0x68c114);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c11a:{NFSU2_TR(0x68c11a);
__builtin_memmove((R+4744),(R+4672),8);
}
B68c11d:{NFSU2_TR(0x68c11d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c123:{NFSU2_TR(0x68c123);
__builtin_memmove((R+4808),(R+4672),8);
}
B68c126:{NFSU2_TR(0x68c126);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68c129:{NFSU2_TR(0x68c129);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c12d:{NFSU2_TR(0x68c12d);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c130:{NFSU2_TR(0x68c130);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c137:{NFSU2_TR(0x68c137);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c13a:{NFSU2_TR(0x68c13a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c141:{NFSU2_TR(0x68c141);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68c144:{NFSU2_TR(0x68c144);
__builtin_memmove((R+4800),(R+4928),4);
__builtin_memmove((R+4804),(R+4932),4);
__builtin_memmove((R+4808),(R+4936),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68c147:{NFSU2_TR(0x68c147);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c14a:{NFSU2_TR(0x68c14a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c151:{NFSU2_TR(0x68c151);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68c154:{NFSU2_TR(0x68c154);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c157:{NFSU2_TR(0x68c157);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c15b:{NFSU2_TR(0x68c15b);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c15e:{NFSU2_TR(0x68c15e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c165:{NFSU2_TR(0x68c165);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68c168:{NFSU2_TR(0x68c168);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c16f:{NFSU2_TR(0x68c16f);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B68c172:{NFSU2_TR(0x68c172);
__builtin_memmove((R+4928),(R+4992),4);
__builtin_memmove((R+4932),(R+4996),4);
__builtin_memmove((R+4936),(R+5000),4);
__builtin_memmove((R+4940),(R+5004),4);
}
B68c175:{NFSU2_TR(0x68c175);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c178:{NFSU2_TR(0x68c178);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c17f:{NFSU2_TR(0x68c17f);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68c182:{NFSU2_TR(0x68c182);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68c186:{NFSU2_TR(0x68c186);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B68c189:{NFSU2_TR(0x68c189);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c190:{NFSU2_TR(0x68c190);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c197:{NFSU2_TR(0x68c197);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c19a:{NFSU2_TR(0x68c19a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c1a1:{NFSU2_TR(0x68c1a1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c1a8:{NFSU2_TR(0x68c1a8);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c1ab:{NFSU2_TR(0x68c1ab);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c1af:{NFSU2_TR(0x68c1af);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c1b3:{NFSU2_TR(0x68c1b3);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4876))));
}
B68c1b6:{NFSU2_TR(0x68c1b6);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c1b9:{NFSU2_TR(0x68c1b9);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c1bc:{NFSU2_TR(0x68c1bc);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B68c1bf:{NFSU2_TR(0x68c1bf);
__builtin_memmove((R+4864),(R+4608),4);
__builtin_memmove((R+4868),(R+4612),4);
__builtin_memmove((R+4872),(R+4616),4);
__builtin_memmove((R+4876),(R+4620),4);
}
B68c1c2:{NFSU2_TR(0x68c1c2);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4672))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4676))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4680))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4684))));
}
B68c1c5:{NFSU2_TR(0x68c1c5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+32))));
}
B68c1c9:{NFSU2_TR(0x68c1c9);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B68c1cc:{NFSU2_TR(0x68c1cc);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68c1d0:{NFSU2_TR(0x68c1d0);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c1d3:{NFSU2_TR(0x68c1d3);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4932),4);
__builtin_memmove((R+4612),(R+4928),4);
}
B68c1d6:{NFSU2_TR(0x68c1d6);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c1d9:{NFSU2_TR(0x68c1d9);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68c1dc:{NFSU2_TR(0x68c1dc);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4868),4);
__builtin_memmove((R+4676),(R+4864),4);
}
B68c1df:{NFSU2_TR(0x68c1df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68c1e3:{NFSU2_TR(0x68c1e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c1e7:{NFSU2_TR(0x68c1e7);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c1ec:{NFSU2_TR(0x68c1ec);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4936),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68c1ef:{NFSU2_TR(0x68c1ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c1f3:{NFSU2_TR(0x68c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c1f6:{NFSU2_TR(0x68c1f6);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4872),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c1f9:{NFSU2_TR(0x68c1f9);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c1fe:{NFSU2_TR(0x68c1fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c202:{NFSU2_TR(0x68c202);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4808),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c207:{NFSU2_TR(0x68c207);
__builtin_memmove((R+8),(R+0),4);
}
B68c209:{NFSU2_TR(0x68c209);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c20c:{NFSU2_TR(0x68c20c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c20e:{NFSU2_TR(0x68c20e);
__builtin_memmove((R+8),(R+4),4);
}
B68c210:{NFSU2_TR(0x68c210);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c213:{NFSU2_TR(0x68c213);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c215:{NFSU2_TR(0x68c215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c218:{NFSU2_TR(0x68c218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c0e3u);}goto L68c0e3;}}
}
B68c21e:L68c21e:{c.instructions+=1;NFSU2_TR(0x68c21e);
{goto L68c223;}
}
B68c220:L68c220:{c.instructions+=1;NFSU2_TR(0x68c220);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c223:L68c223:{c.instructions+=3;NFSU2_TR(0x68c223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c226:{NFSU2_TR(0x68c226);
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
B68c228:{NFSU2_TR(0x68c228);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c242;}}
}
B68c22a:L68c22a:{c.instructions+=1;NFSU2_TR(0x68c22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c22d:L68c22d:{c.instructions+=4;NFSU2_TR(0x68c22d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c230:{NFSU2_TR(0x68c230);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c231:{NFSU2_TR(0x68c231);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c232:{NFSU2_TR(0x68c232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c237ull));
TAIL_STATIC(0x68b0d8u,68b);
}
B68c237:L68c237:{c.instructions+=4;NFSU2_TR(0x68c237);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c23a:{NFSU2_TR(0x68c23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c23d:{NFSU2_TR(0x68c23d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c240:{NFSU2_TR(0x68c240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c22du);}goto L68c22d;}}
}
B68c242:L68c242:{c.instructions+=8;NFSU2_TR(0x68c242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c245:{NFSU2_TR(0x68c245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c246:{NFSU2_TR(0x68c246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c247:{NFSU2_TR(0x68c247);
__builtin_memmove((R+16),(R+20),4);
}
B68c249:{NFSU2_TR(0x68c249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c24a:{NFSU2_TR(0x68c24a);
__builtin_memmove((R+16),(R+12),4);
}
B68c24c:{NFSU2_TR(0x68c24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c24d:{NFSU2_TR(0x68c24d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c250:L68c250:{c.instructions+=27;NFSU2_TR(0x68c250);
__builtin_memmove((R+28),(R+28),4);
}
B68c252:{NFSU2_TR(0x68c252);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c253:{NFSU2_TR(0x68c253);
__builtin_memmove((R+12),(R+16),4);
}
B68c255:{NFSU2_TR(0x68c255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c256:{NFSU2_TR(0x68c256);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c259:{NFSU2_TR(0x68c259);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c25c:{NFSU2_TR(0x68c25c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c25d:{NFSU2_TR(0x68c25d);
__builtin_memmove((R+20),(R+16),4);
}
B68c25f:{NFSU2_TR(0x68c25f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68c265:{NFSU2_TR(0x68c265);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c268:{NFSU2_TR(0x68c268);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c269:{NFSU2_TR(0x68c269);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c26c:{NFSU2_TR(0x68c26c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c26d:{NFSU2_TR(0x68c26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c270:{NFSU2_TR(0x68c270);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c272:{NFSU2_TR(0x68c272);
__builtin_memmove((R+8),(R+0),4);
}
B68c274:{NFSU2_TR(0x68c274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c275:{NFSU2_TR(0x68c275);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c278:{NFSU2_TR(0x68c278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68c27a:{NFSU2_TR(0x68c27a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c27c:{NFSU2_TR(0x68c27c);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B68c27e:{NFSU2_TR(0x68c27e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68c280:{NFSU2_TR(0x68c280);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c283:{NFSU2_TR(0x68c283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c286:{NFSU2_TR(0x68c286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c289:{NFSU2_TR(0x68c289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c28c:{NFSU2_TR(0x68c28c);
if(r1(R+518)){{goto L68c39f;}}
}
B68c292:L68c292:{c.instructions+=3;NFSU2_TR(0x68c292);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c295:{NFSU2_TR(0x68c295);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c29b:{NFSU2_TR(0x68c29b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c2a0ull));
TAIL_STATIC(0x68b19fu,68b);
}
B68c2a0:L68c2a0:{c.instructions+=4;NFSU2_TR(0x68c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c2a3:{NFSU2_TR(0x68c2a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68c2a5:{NFSU2_TR(0x68c2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68c2a8:{NFSU2_TR(0x68c2a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c39f;}}
}
B68c2ae:L68c2ae:{c.instructions+=3;NFSU2_TR(0x68c2ae);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c2b2:{NFSU2_TR(0x68c2b2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c2b6:{NFSU2_TR(0x68c2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c2b9:L68c2b9:{c.instructions+=60;NFSU2_TR(0x68c2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c2bc:{NFSU2_TR(0x68c2bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68c2c0:{NFSU2_TR(0x68c2c0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c2c3:{NFSU2_TR(0x68c2c3);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c2c6:{NFSU2_TR(0x68c2c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c2ca:{NFSU2_TR(0x68c2ca);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c2cd:{NFSU2_TR(0x68c2cd);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c2d0:{NFSU2_TR(0x68c2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c2d3:{NFSU2_TR(0x68c2d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c2d7:{NFSU2_TR(0x68c2d7);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c2db:{NFSU2_TR(0x68c2db);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c2df:{NFSU2_TR(0x68c2df);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68c2e2:{NFSU2_TR(0x68c2e2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c2e9:{NFSU2_TR(0x68c2e9);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c2ec:{NFSU2_TR(0x68c2ec);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c2f3:{NFSU2_TR(0x68c2f3);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68c2f6:{NFSU2_TR(0x68c2f6);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c2f9:{NFSU2_TR(0x68c2f9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c2fd:{NFSU2_TR(0x68c2fd);
__builtin_memmove((R+4864),(R+4608),4);
__builtin_memmove((R+4868),(R+4612),4);
__builtin_memmove((R+4872),(R+4616),4);
__builtin_memmove((R+4876),(R+4620),4);
}
B68c300:{NFSU2_TR(0x68c300);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c307:{NFSU2_TR(0x68c307);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c30a:{NFSU2_TR(0x68c30a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c311:{NFSU2_TR(0x68c311);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4812))));
}
B68c314:{NFSU2_TR(0x68c314);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+32))));
}
B68c318:{NFSU2_TR(0x68c318);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c31b:{NFSU2_TR(0x68c31b);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c322:{NFSU2_TR(0x68c322);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c329:{NFSU2_TR(0x68c329);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c32c:{NFSU2_TR(0x68c32c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c333:{NFSU2_TR(0x68c333);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c33a:{NFSU2_TR(0x68c33a);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68c33d:{NFSU2_TR(0x68c33d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c340:{NFSU2_TR(0x68c340);
__builtin_memmove((R+4800),(R+4928),4);
__builtin_memmove((R+4804),(R+4932),4);
__builtin_memmove((R+4808),(R+4936),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68c343:{NFSU2_TR(0x68c343);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68c347:{NFSU2_TR(0x68c347);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c34a:{NFSU2_TR(0x68c34a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68c34e:{NFSU2_TR(0x68c34e);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c351:{NFSU2_TR(0x68c351);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4868),4);
__builtin_memmove((R+4612),(R+4864),4);
}
B68c354:{NFSU2_TR(0x68c354);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B68c357:{NFSU2_TR(0x68c357);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68c35a:{NFSU2_TR(0x68c35a);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4932),4);
__builtin_memmove((R+4676),(R+4928),4);
}
B68c35d:{NFSU2_TR(0x68c35d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68c361:{NFSU2_TR(0x68c361);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c365:{NFSU2_TR(0x68c365);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c36a:{NFSU2_TR(0x68c36a);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68c36d:{NFSU2_TR(0x68c36d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c371:{NFSU2_TR(0x68c371);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c374:{NFSU2_TR(0x68c374);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4936),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68c377:{NFSU2_TR(0x68c377);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c37c:{NFSU2_TR(0x68c37c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c380:{NFSU2_TR(0x68c380);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4808),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c385:{NFSU2_TR(0x68c385);
__builtin_memmove((R+8),(R+4),4);
}
B68c387:{NFSU2_TR(0x68c387);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c38a:{NFSU2_TR(0x68c38a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B68c38c:{NFSU2_TR(0x68c38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c38f:{NFSU2_TR(0x68c38f);
__builtin_memmove((R+0),(R+28),4);
}
B68c391:{NFSU2_TR(0x68c391);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68c394:{NFSU2_TR(0x68c394);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B68c396:{NFSU2_TR(0x68c396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c399:{NFSU2_TR(0x68c399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c2b9u);}goto L68c2b9;}}
}
B68c39f:L68c39f:{c.instructions+=3;NFSU2_TR(0x68c39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c3a2:{NFSU2_TR(0x68c3a2);
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
B68c3a4:{NFSU2_TR(0x68c3a4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c3c2;}}
}
B68c3a6:L68c3a6:{c.instructions+=1;NFSU2_TR(0x68c3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c3a9:L68c3a9:{c.instructions+=4;NFSU2_TR(0x68c3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c3ac:{NFSU2_TR(0x68c3ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c3af:{NFSU2_TR(0x68c3af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3b0:{NFSU2_TR(0x68c3b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c3b5ull));
TAIL_STATIC(0x63c10eu,63c);
}
B68c3b5:L68c3b5:{c.instructions+=5;NFSU2_TR(0x68c3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c3b8:{NFSU2_TR(0x68c3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B68c3bb:{NFSU2_TR(0x68c3bb);
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B68c3bd:{NFSU2_TR(0x68c3bd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c3c0:{NFSU2_TR(0x68c3c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c3a9u);}goto L68c3a9;}}
}
B68c3c2:L68c3c2:{c.instructions+=8;NFSU2_TR(0x68c3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c3c5:{NFSU2_TR(0x68c3c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c3c6:{NFSU2_TR(0x68c3c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c3c7:{NFSU2_TR(0x68c3c7);
__builtin_memmove((R+16),(R+20),4);
}
B68c3c9:{NFSU2_TR(0x68c3c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c3ca:{NFSU2_TR(0x68c3ca);
__builtin_memmove((R+16),(R+12),4);
}
B68c3cc:{NFSU2_TR(0x68c3cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c3cd:{NFSU2_TR(0x68c3cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c3d0:L68c3d0:{c.instructions+=25;NFSU2_TR(0x68c3d0);
__builtin_memmove((R+28),(R+28),4);
}
B68c3d2:{NFSU2_TR(0x68c3d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3d3:{NFSU2_TR(0x68c3d3);
__builtin_memmove((R+12),(R+16),4);
}
B68c3d5:{NFSU2_TR(0x68c3d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3d6:{NFSU2_TR(0x68c3d6);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c3d9:{NFSU2_TR(0x68c3d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c3dc:{NFSU2_TR(0x68c3dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3dd:{NFSU2_TR(0x68c3dd);
__builtin_memmove((R+20),(R+16),4);
}
B68c3df:{NFSU2_TR(0x68c3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68c3e5:{NFSU2_TR(0x68c3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c3e8:{NFSU2_TR(0x68c3e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3e9:{NFSU2_TR(0x68c3e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3ea:{NFSU2_TR(0x68c3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c3ed:{NFSU2_TR(0x68c3ed);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c3ef:{NFSU2_TR(0x68c3ef);
__builtin_memmove((R+8),(R+0),4);
}
B68c3f1:{NFSU2_TR(0x68c3f1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c3f4:{NFSU2_TR(0x68c3f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c3f5:{NFSU2_TR(0x68c3f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68c3f7:{NFSU2_TR(0x68c3f7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c3f9:{NFSU2_TR(0x68c3f9);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c3fb:{NFSU2_TR(0x68c3fb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68c3fd:{NFSU2_TR(0x68c3fd);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c400:{NFSU2_TR(0x68c400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c403:{NFSU2_TR(0x68c403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c406:{NFSU2_TR(0x68c406);
if(r1(R+518)){{goto L68c4fc;}}
}
B68c40c:L68c40c:{c.instructions+=3;NFSU2_TR(0x68c40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c40f:{NFSU2_TR(0x68c40f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c415:{NFSU2_TR(0x68c415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c41aull));
TAIL_STATIC(0x68b19fu,68b);
}
B68c41a:L68c41a:{c.instructions+=4;NFSU2_TR(0x68c41a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68c41c:{NFSU2_TR(0x68c41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c41f:{NFSU2_TR(0x68c41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68c422:{NFSU2_TR(0x68c422);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c4fc;}}
}
B68c428:L68c428:{c.instructions+=4;NFSU2_TR(0x68c428);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c42c:{NFSU2_TR(0x68c42c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68c430:{NFSU2_TR(0x68c430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c433:{NFSU2_TR(0x68c433);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c436:L68c436:{c.instructions+=54;NFSU2_TR(0x68c436);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c439:{NFSU2_TR(0x68c439);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4864),(U+8),8);
}
B68c43d:{NFSU2_TR(0x68c43d);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c440:{NFSU2_TR(0x68c440);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c444:{NFSU2_TR(0x68c444);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c447:{NFSU2_TR(0x68c447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c44a:{NFSU2_TR(0x68c44a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4872),(U+8),8);
}
B68c44e:{NFSU2_TR(0x68c44e);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c452:{NFSU2_TR(0x68c452);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c456:{NFSU2_TR(0x68c456);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c459:{NFSU2_TR(0x68c459);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c460:{NFSU2_TR(0x68c460);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68c463:{NFSU2_TR(0x68c463);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c46a:{NFSU2_TR(0x68c46a);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68c46d:{NFSU2_TR(0x68c46d);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c470:{NFSU2_TR(0x68c470);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c474:{NFSU2_TR(0x68c474);
{wv<16>((R+4800),uo::rcpps<16>(rv<16>((R+4800)),rv<16>((R+4736))));}
}
B68c477:{NFSU2_TR(0x68c477);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68c47a:{NFSU2_TR(0x68c47a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B68c47d:{NFSU2_TR(0x68c47d);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B68c480:{NFSU2_TR(0x68c480);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c483:{NFSU2_TR(0x68c483);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B68c486:{NFSU2_TR(0x68c486);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68c489:{NFSU2_TR(0x68c489);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+4940))));
}
B68c48c:{NFSU2_TR(0x68c48c);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c48f:{NFSU2_TR(0x68c48f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c496:{NFSU2_TR(0x68c496);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c49d:{NFSU2_TR(0x68c49d);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c4a0:{NFSU2_TR(0x68c4a0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c4a7:{NFSU2_TR(0x68c4a7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c4ae:{NFSU2_TR(0x68c4ae);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B68c4b1:{NFSU2_TR(0x68c4b1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c4b4:{NFSU2_TR(0x68c4b4);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c4b7:{NFSU2_TR(0x68c4b7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+32))));
}
B68c4bb:{NFSU2_TR(0x68c4bb);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68c4be:{NFSU2_TR(0x68c4be);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c4c2:{NFSU2_TR(0x68c4c2);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B68c4c5:{NFSU2_TR(0x68c4c5);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4812))));
}
B68c4c8:{NFSU2_TR(0x68c4c8);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c4cb:{NFSU2_TR(0x68c4cb);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68c4ce:{NFSU2_TR(0x68c4ce);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c4d1:{NFSU2_TR(0x68c4d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c4d5:{NFSU2_TR(0x68c4d5);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c4d8:{NFSU2_TR(0x68c4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c4db:{NFSU2_TR(0x68c4db);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c4df:{NFSU2_TR(0x68c4df);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c4e3:{NFSU2_TR(0x68c4e3);
__builtin_memmove((R+8),(R+0),4);
}
B68c4e5:{NFSU2_TR(0x68c4e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c4e8:{NFSU2_TR(0x68c4e8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c4ea:{NFSU2_TR(0x68c4ea);
__builtin_memmove((R+8),(R+4),4);
}
B68c4ec:{NFSU2_TR(0x68c4ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c4ef:{NFSU2_TR(0x68c4ef);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c4f1:{NFSU2_TR(0x68c4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c4f4:{NFSU2_TR(0x68c4f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c436u);}goto L68c436;}}
}
B68c4fa:L68c4fa:{c.instructions+=1;NFSU2_TR(0x68c4fa);
{goto L68c4ff;}
}
B68c4fc:L68c4fc:{c.instructions+=1;NFSU2_TR(0x68c4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c4ff:L68c4ff:{c.instructions+=3;NFSU2_TR(0x68c4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c502:{NFSU2_TR(0x68c502);
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
B68c504:{NFSU2_TR(0x68c504);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c51e;}}
}
B68c506:L68c506:{c.instructions+=1;NFSU2_TR(0x68c506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c509:L68c509:{c.instructions+=4;NFSU2_TR(0x68c509);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c50c:{NFSU2_TR(0x68c50c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c50d:{NFSU2_TR(0x68c50d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c50e:{NFSU2_TR(0x68c50e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c513ull));
TAIL_STATIC(0x63c13au,63c);
}
B68c513:L68c513:{c.instructions+=4;NFSU2_TR(0x68c513);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c516:{NFSU2_TR(0x68c516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c519:{NFSU2_TR(0x68c519);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c51c:{NFSU2_TR(0x68c51c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c509u);}goto L68c509;}}
}
B68c51e:L68c51e:{c.instructions+=8;NFSU2_TR(0x68c51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c521:{NFSU2_TR(0x68c521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c522:{NFSU2_TR(0x68c522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c523:{NFSU2_TR(0x68c523);
__builtin_memmove((R+16),(R+20),4);
}
B68c525:{NFSU2_TR(0x68c525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c526:{NFSU2_TR(0x68c526);
__builtin_memmove((R+16),(R+12),4);
}
B68c528:{NFSU2_TR(0x68c528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c529:{NFSU2_TR(0x68c529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c52c:L68c52c:{c.instructions+=25;NFSU2_TR(0x68c52c);
__builtin_memmove((R+28),(R+28),4);
}
B68c52e:{NFSU2_TR(0x68c52e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c52f:{NFSU2_TR(0x68c52f);
__builtin_memmove((R+12),(R+16),4);
}
B68c531:{NFSU2_TR(0x68c531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c532:{NFSU2_TR(0x68c532);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c535:{NFSU2_TR(0x68c535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c538:{NFSU2_TR(0x68c538);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c539:{NFSU2_TR(0x68c539);
__builtin_memmove((R+20),(R+16),4);
}
B68c53b:{NFSU2_TR(0x68c53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68c541:{NFSU2_TR(0x68c541);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c544:{NFSU2_TR(0x68c544);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c545:{NFSU2_TR(0x68c545);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c546:{NFSU2_TR(0x68c546);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c549:{NFSU2_TR(0x68c549);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c54b:{NFSU2_TR(0x68c54b);
__builtin_memmove((R+8),(R+0),4);
}
B68c54d:{NFSU2_TR(0x68c54d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c550:{NFSU2_TR(0x68c550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c551:{NFSU2_TR(0x68c551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68c553:{NFSU2_TR(0x68c553);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c555:{NFSU2_TR(0x68c555);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c557:{NFSU2_TR(0x68c557);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68c559:{NFSU2_TR(0x68c559);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c55c:{NFSU2_TR(0x68c55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c55f:{NFSU2_TR(0x68c55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c562:{NFSU2_TR(0x68c562);
if(r1(R+518)){{goto L68c60d;}}
}
B68c568:L68c568:{c.instructions+=3;NFSU2_TR(0x68c568);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c56b:{NFSU2_TR(0x68c56b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c571:{NFSU2_TR(0x68c571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c576ull));
TAIL_STATIC(0x68b19fu,68b);
}
B68c576:L68c576:{c.instructions+=4;NFSU2_TR(0x68c576);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68c578:{NFSU2_TR(0x68c578);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c57b:{NFSU2_TR(0x68c57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68c57e:{NFSU2_TR(0x68c57e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c60d;}}
}
B68c584:L68c584:{c.instructions+=4;NFSU2_TR(0x68c584);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c588:{NFSU2_TR(0x68c588);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c58c:{NFSU2_TR(0x68c58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c58f:{NFSU2_TR(0x68c58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c592:L68c592:{c.instructions+=34;NFSU2_TR(0x68c592);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c595:{NFSU2_TR(0x68c595);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68c599:{NFSU2_TR(0x68c599);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c59c:{NFSU2_TR(0x68c59c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4616),(U+8),8);
}
B68c5a0:{NFSU2_TR(0x68c5a0);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c5a3:{NFSU2_TR(0x68c5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c5a6:{NFSU2_TR(0x68c5a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4808),(U+8),8);
}
B68c5aa:{NFSU2_TR(0x68c5aa);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c5ae:{NFSU2_TR(0x68c5ae);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68c5b1:{NFSU2_TR(0x68c5b1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c5b8:{NFSU2_TR(0x68c5b8);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c5bf:{NFSU2_TR(0x68c5bf);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c5c2:{NFSU2_TR(0x68c5c2);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c5c6:{NFSU2_TR(0x68c5c6);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c5c9:{NFSU2_TR(0x68c5c9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c5d0:{NFSU2_TR(0x68c5d0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c5d7:{NFSU2_TR(0x68c5d7);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4620))));
}
B68c5da:{NFSU2_TR(0x68c5da);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68c5dd:{NFSU2_TR(0x68c5dd);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c5e0:{NFSU2_TR(0x68c5e0);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68c5e3:{NFSU2_TR(0x68c5e3);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c5e6:{NFSU2_TR(0x68c5e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c5ea:{NFSU2_TR(0x68c5ea);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c5ed:{NFSU2_TR(0x68c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c5f0:{NFSU2_TR(0x68c5f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c5f4:{NFSU2_TR(0x68c5f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c5f8:{NFSU2_TR(0x68c5f8);
__builtin_memmove((R+8),(R+0),4);
}
B68c5fa:{NFSU2_TR(0x68c5fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c5fd:{NFSU2_TR(0x68c5fd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c5ff:{NFSU2_TR(0x68c5ff);
__builtin_memmove((R+8),(R+4),4);
}
B68c601:{NFSU2_TR(0x68c601);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c604:{NFSU2_TR(0x68c604);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c606:{NFSU2_TR(0x68c606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c609:{NFSU2_TR(0x68c609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c592u);}goto L68c592;}}
}
B68c60b:L68c60b:{c.instructions+=1;NFSU2_TR(0x68c60b);
{goto L68c610;}
}
B68c60d:L68c60d:{c.instructions+=1;NFSU2_TR(0x68c60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c610:L68c610:{c.instructions+=3;NFSU2_TR(0x68c610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c613:{NFSU2_TR(0x68c613);
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
B68c615:{NFSU2_TR(0x68c615);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c62f;}}
}
B68c617:L68c617:{c.instructions+=1;NFSU2_TR(0x68c617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c61a:L68c61a:{c.instructions+=4;NFSU2_TR(0x68c61a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c61d:{NFSU2_TR(0x68c61d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c61e:{NFSU2_TR(0x68c61e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c61f:{NFSU2_TR(0x68c61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c624ull));
TAIL_STATIC(0x63c166u,63c);
}
B68c624:L68c624:{c.instructions+=4;NFSU2_TR(0x68c624);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c627:{NFSU2_TR(0x68c627);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c62a:{NFSU2_TR(0x68c62a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c62d:{NFSU2_TR(0x68c62d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c61au);}goto L68c61a;}}
}
B68c62f:L68c62f:{c.instructions+=8;NFSU2_TR(0x68c62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c632:{NFSU2_TR(0x68c632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c633:{NFSU2_TR(0x68c633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c634:{NFSU2_TR(0x68c634);
__builtin_memmove((R+16),(R+20),4);
}
B68c636:{NFSU2_TR(0x68c636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c637:{NFSU2_TR(0x68c637);
__builtin_memmove((R+16),(R+12),4);
}
B68c639:{NFSU2_TR(0x68c639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c63a:{NFSU2_TR(0x68c63a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c63d:L68c63d:{c.instructions+=25;NFSU2_TR(0x68c63d);
__builtin_memmove((R+28),(R+28),4);
}
B68c63f:{NFSU2_TR(0x68c63f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c640:{NFSU2_TR(0x68c640);
__builtin_memmove((R+12),(R+16),4);
}
B68c642:{NFSU2_TR(0x68c642);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c643:{NFSU2_TR(0x68c643);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c646:{NFSU2_TR(0x68c646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c649:{NFSU2_TR(0x68c649);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c64a:{NFSU2_TR(0x68c64a);
__builtin_memmove((R+20),(R+16),4);
}
B68c64c:{NFSU2_TR(0x68c64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x138ull))));
}
B68c652:{NFSU2_TR(0x68c652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c655:{NFSU2_TR(0x68c655);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c656:{NFSU2_TR(0x68c656);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c657:{NFSU2_TR(0x68c657);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c65a:{NFSU2_TR(0x68c65a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c65c:{NFSU2_TR(0x68c65c);
__builtin_memmove((R+8),(R+0),4);
}
B68c65e:{NFSU2_TR(0x68c65e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c661:{NFSU2_TR(0x68c661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c662:{NFSU2_TR(0x68c662);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68c664:{NFSU2_TR(0x68c664);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c666:{NFSU2_TR(0x68c666);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c668:{NFSU2_TR(0x68c668);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68c66a:{NFSU2_TR(0x68c66a);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c66d:{NFSU2_TR(0x68c66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c670:{NFSU2_TR(0x68c670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c673:{NFSU2_TR(0x68c673);
if(r1(R+518)){{goto L68c80d;}}
}
B68c679:L68c679:{c.instructions+=3;NFSU2_TR(0x68c679);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c67c:{NFSU2_TR(0x68c67c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c682:{NFSU2_TR(0x68c682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c687ull));
TAIL_STATIC(0x68b19fu,68b);
}
B68c687:L68c687:{c.instructions+=4;NFSU2_TR(0x68c687);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68c689:{NFSU2_TR(0x68c689);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c68c:{NFSU2_TR(0x68c68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68c68f:{NFSU2_TR(0x68c68f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c80d;}}
}
B68c695:L68c695:{c.instructions+=4;NFSU2_TR(0x68c695);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c699:{NFSU2_TR(0x68c699);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68c69d:{NFSU2_TR(0x68c69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c6a0:{NFSU2_TR(0x68c6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c6a3:L68c6a3:{c.instructions+=94;NFSU2_TR(0x68c6a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4864),(U+8),8);
}
B68c6a7:{NFSU2_TR(0x68c6a7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4800),(U+0),8);
}
B68c6aa:{NFSU2_TR(0x68c6aa);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c6ad:{NFSU2_TR(0x68c6ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c6b1:{NFSU2_TR(0x68c6b1);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c6b4:{NFSU2_TR(0x68c6b4);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c6b7:{NFSU2_TR(0x68c6b7);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c6ba:{NFSU2_TR(0x68c6ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68c6be:{NFSU2_TR(0x68c6be);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c6c1:{NFSU2_TR(0x68c6c1);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4872),(U+12),8);
}
B68c6c6:{NFSU2_TR(0x68c6c6);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68c6c9:{NFSU2_TR(0x68c6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c6cc:{NFSU2_TR(0x68c6cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4808),(U+8),8);
}
B68c6d0:{NFSU2_TR(0x68c6d0);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6d4:{NFSU2_TR(0x68c6d4);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6d8:{NFSU2_TR(0x68c6d8);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4800),(U+12),8);
}
B68c6dd:{NFSU2_TR(0x68c6dd);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4808),(U+12),8);
}
B68c6e2:{NFSU2_TR(0x68c6e2);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6e6:{NFSU2_TR(0x68c6e6);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6ea:{NFSU2_TR(0x68c6ea);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c6ed:{NFSU2_TR(0x68c6ed);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c6f1:{NFSU2_TR(0x68c6f1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68c6f5:{NFSU2_TR(0x68c6f5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c6f9:{NFSU2_TR(0x68c6f9);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c6fc:{NFSU2_TR(0x68c6fc);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c703:{NFSU2_TR(0x68c703);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68c706:{NFSU2_TR(0x68c706);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68c709:{NFSU2_TR(0x68c709);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c710:{NFSU2_TR(0x68c710);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c713:{NFSU2_TR(0x68c713);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c716:{NFSU2_TR(0x68c716);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68c719:{NFSU2_TR(0x68c719);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c720:{NFSU2_TR(0x68c720);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B68c723:{NFSU2_TR(0x68c723);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B68c726:{NFSU2_TR(0x68c726);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4940))));
}
B68c729:{NFSU2_TR(0x68c729);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c72c:{NFSU2_TR(0x68c72c);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c72f:{NFSU2_TR(0x68c72f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c736:{NFSU2_TR(0x68c736);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68c739:{NFSU2_TR(0x68c739);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c740:{NFSU2_TR(0x68c740);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c743:{NFSU2_TR(0x68c743);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c746:{NFSU2_TR(0x68c746);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c74d:{NFSU2_TR(0x68c74d);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c750:{NFSU2_TR(0x68c750);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68c753:{NFSU2_TR(0x68c753);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68c756:{NFSU2_TR(0x68c756);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68c759:{NFSU2_TR(0x68c759);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68c75d:{NFSU2_TR(0x68c75d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68c761:{NFSU2_TR(0x68c761);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c765:{NFSU2_TR(0x68c765);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c768:{NFSU2_TR(0x68c768);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c76f:{NFSU2_TR(0x68c76f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c776:{NFSU2_TR(0x68c776);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c779:{NFSU2_TR(0x68c779);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68c77c:{NFSU2_TR(0x68c77c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c783:{NFSU2_TR(0x68c783);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c78a:{NFSU2_TR(0x68c78a);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c78d:{NFSU2_TR(0x68c78d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c794:{NFSU2_TR(0x68c794);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c798:{NFSU2_TR(0x68c798);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c79b:{NFSU2_TR(0x68c79b);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c79e:{NFSU2_TR(0x68c79e);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c7a1:{NFSU2_TR(0x68c7a1);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68c7a4:{NFSU2_TR(0x68c7a4);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68c7a7:{NFSU2_TR(0x68c7a7);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68c7aa:{NFSU2_TR(0x68c7aa);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68c7ad:{NFSU2_TR(0x68c7ad);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B68c7b1:{NFSU2_TR(0x68c7b1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c7b5:{NFSU2_TR(0x68c7b5);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68c7b8:{NFSU2_TR(0x68c7b8);
__builtin_memmove((R+4608),(R+4800),4);
__builtin_memmove((R+4612),(R+4804),4);
__builtin_memmove((R+4616),(R+4808),4);
__builtin_memmove((R+4620),(R+4812),4);
}
B68c7bb:{NFSU2_TR(0x68c7bb);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4620),(U+24),4);
}
B68c7bf:{NFSU2_TR(0x68c7bf);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4804),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c7c3:{NFSU2_TR(0x68c7c3);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4940))));
}
B68c7c6:{NFSU2_TR(0x68c7c6);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68c7c9:{NFSU2_TR(0x68c7c9);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c7cc:{NFSU2_TR(0x68c7cc);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4740),4);
__builtin_memmove((R+4676),(R+4736),4);
}
B68c7cf:{NFSU2_TR(0x68c7cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68c7d3:{NFSU2_TR(0x68c7d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c7d7:{NFSU2_TR(0x68c7d7);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c7dc:{NFSU2_TR(0x68c7dc);
__builtin_memmove((R+4864),(R+4872),4);
__builtin_memmove((R+4868),(R+4744),4);
__builtin_memmove((R+4872),(R+4876),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c7df:{NFSU2_TR(0x68c7df);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4800),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c7e3:{NFSU2_TR(0x68c7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c7e6:{NFSU2_TR(0x68c7e6);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4864),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c7eb:{NFSU2_TR(0x68c7eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c7ef:{NFSU2_TR(0x68c7ef);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4872),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c7f4:{NFSU2_TR(0x68c7f4);
__builtin_memmove((R+8),(R+0),4);
}
B68c7f6:{NFSU2_TR(0x68c7f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c7f9:{NFSU2_TR(0x68c7f9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c7fb:{NFSU2_TR(0x68c7fb);
__builtin_memmove((R+8),(R+4),4);
}
B68c7fd:{NFSU2_TR(0x68c7fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c800:{NFSU2_TR(0x68c800);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c802:{NFSU2_TR(0x68c802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c805:{NFSU2_TR(0x68c805);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c6a3u);}goto L68c6a3;}}
}
B68c80b:L68c80b:{c.instructions+=1;NFSU2_TR(0x68c80b);
{goto L68c810;}
}
B68c80d:L68c80d:{c.instructions+=1;NFSU2_TR(0x68c80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c810:L68c810:{c.instructions+=3;NFSU2_TR(0x68c810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c813:{NFSU2_TR(0x68c813);
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
B68c815:{NFSU2_TR(0x68c815);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c82f;}}
}
B68c817:L68c817:{c.instructions+=1;NFSU2_TR(0x68c817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c81a:L68c81a:{c.instructions+=4;NFSU2_TR(0x68c81a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c81d:{NFSU2_TR(0x68c81d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c81e:{NFSU2_TR(0x68c81e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c81f:{NFSU2_TR(0x68c81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c824ull));
{goto L68cdbc;}
}
B68c824:L68c824:{c.instructions+=4;NFSU2_TR(0x68c824);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c827:{NFSU2_TR(0x68c827);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c82a:{NFSU2_TR(0x68c82a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c82d:{NFSU2_TR(0x68c82d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c81au);}goto L68c81a;}}
}
B68c82f:L68c82f:{c.instructions+=8;NFSU2_TR(0x68c82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c832:{NFSU2_TR(0x68c832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c833:{NFSU2_TR(0x68c833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c834:{NFSU2_TR(0x68c834);
__builtin_memmove((R+16),(R+20),4);
}
B68c836:{NFSU2_TR(0x68c836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c837:{NFSU2_TR(0x68c837);
__builtin_memmove((R+16),(R+12),4);
}
B68c839:{NFSU2_TR(0x68c839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c83a:{NFSU2_TR(0x68c83a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c83d:L68c83d:{c.instructions+=25;NFSU2_TR(0x68c83d);
__builtin_memmove((R+28),(R+28),4);
}
B68c83f:{NFSU2_TR(0x68c83f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c840:{NFSU2_TR(0x68c840);
__builtin_memmove((R+12),(R+16),4);
}
B68c842:{NFSU2_TR(0x68c842);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c843:{NFSU2_TR(0x68c843);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c846:{NFSU2_TR(0x68c846);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c849:{NFSU2_TR(0x68c849);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c84a:{NFSU2_TR(0x68c84a);
__builtin_memmove((R+20),(R+16),4);
}
B68c84c:{NFSU2_TR(0x68c84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68c852:{NFSU2_TR(0x68c852);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c855:{NFSU2_TR(0x68c855);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c856:{NFSU2_TR(0x68c856);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c857:{NFSU2_TR(0x68c857);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c85a:{NFSU2_TR(0x68c85a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c85c:{NFSU2_TR(0x68c85c);
__builtin_memmove((R+8),(R+0),4);
}
B68c85e:{NFSU2_TR(0x68c85e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c861:{NFSU2_TR(0x68c861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c862:{NFSU2_TR(0x68c862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68c864:{NFSU2_TR(0x68c864);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c866:{NFSU2_TR(0x68c866);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c868:{NFSU2_TR(0x68c868);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68c86a:{NFSU2_TR(0x68c86a);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c86d:{NFSU2_TR(0x68c86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c870:{NFSU2_TR(0x68c870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c873:{NFSU2_TR(0x68c873);
if(r1(R+518)){{goto L68c9c1;}}
}
B68c879:L68c879:{c.instructions+=3;NFSU2_TR(0x68c879);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c87c:{NFSU2_TR(0x68c87c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68c882:{NFSU2_TR(0x68c882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c887ull));
TAIL_STATIC(0x68b19fu,68b);
}
B68c887:L68c887:{c.instructions+=4;NFSU2_TR(0x68c887);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68c889:{NFSU2_TR(0x68c889);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c88c:{NFSU2_TR(0x68c88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68c88f:{NFSU2_TR(0x68c88f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c9c1;}}
}
B68c895:L68c895:{c.instructions+=4;NFSU2_TR(0x68c895);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c899:{NFSU2_TR(0x68c899);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68c89d:{NFSU2_TR(0x68c89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c8a0:{NFSU2_TR(0x68c8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c8a3:L68c8a3:{c.instructions+=73;NFSU2_TR(0x68c8a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c8a6:{NFSU2_TR(0x68c8a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4608),(U+8),8);
}
B68c8aa:{NFSU2_TR(0x68c8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68c8af:{NFSU2_TR(0x68c8af);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c8b2:{NFSU2_TR(0x68c8b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c8b6:{NFSU2_TR(0x68c8b6);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68c8b9:{NFSU2_TR(0x68c8b9);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c8bc:{NFSU2_TR(0x68c8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c8bf:{NFSU2_TR(0x68c8bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c8c3:{NFSU2_TR(0x68c8c3);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c8c7:{NFSU2_TR(0x68c8c7);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c8cb:{NFSU2_TR(0x68c8cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68c8d1:{NFSU2_TR(0x68c8d1);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c8d4:{NFSU2_TR(0x68c8d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c8da:{NFSU2_TR(0x68c8da);
__builtin_memmove((R+4744),(R+4672),8);
}
B68c8dd:{NFSU2_TR(0x68c8dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c8e3:{NFSU2_TR(0x68c8e3);
__builtin_memmove((R+4872),(R+4672),8);
}
B68c8e6:{NFSU2_TR(0x68c8e6);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68c8e9:{NFSU2_TR(0x68c8e9);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c8ed:{NFSU2_TR(0x68c8ed);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c8f0:{NFSU2_TR(0x68c8f0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c8f7:{NFSU2_TR(0x68c8f7);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c8fa:{NFSU2_TR(0x68c8fa);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c8fd:{NFSU2_TR(0x68c8fd);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c904:{NFSU2_TR(0x68c904);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c907:{NFSU2_TR(0x68c907);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c90e:{NFSU2_TR(0x68c90e);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B68c911:{NFSU2_TR(0x68c911);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68c914:{NFSU2_TR(0x68c914);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68c917:{NFSU2_TR(0x68c917);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68c91a:{NFSU2_TR(0x68c91a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c921:{NFSU2_TR(0x68c921);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c925:{NFSU2_TR(0x68c925);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68c928:{NFSU2_TR(0x68c928);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c92f:{NFSU2_TR(0x68c92f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c936:{NFSU2_TR(0x68c936);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c939:{NFSU2_TR(0x68c939);
__builtin_memmove((R+4864),(R+4800),4);
__builtin_memmove((R+4868),(R+4804),4);
__builtin_memmove((R+4872),(R+4808),4);
__builtin_memmove((R+4876),(R+4812),4);
}
B68c93c:{NFSU2_TR(0x68c93c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c943:{NFSU2_TR(0x68c943);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c94a:{NFSU2_TR(0x68c94a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68c94d:{NFSU2_TR(0x68c94d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c950:{NFSU2_TR(0x68c950);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68c953:{NFSU2_TR(0x68c953);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68c956:{NFSU2_TR(0x68c956);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68c959:{NFSU2_TR(0x68c959);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68c95c:{NFSU2_TR(0x68c95c);
__builtin_memmove((R+4808),(R+4804),4);
__builtin_memmove((R+4812),(R+4868),4);
__builtin_memmove((R+4804),(R+4864),4);
}
B68c95f:{NFSU2_TR(0x68c95f);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c962:{NFSU2_TR(0x68c962);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c966:{NFSU2_TR(0x68c966);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c969:{NFSU2_TR(0x68c969);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4676),(U+20),4);
__builtin_memmove((R+4684),(U+24),4);
}
B68c96d:{NFSU2_TR(0x68c96d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(R+4616),4);
__builtin_memmove((R+4616),(R+4620),4);
__builtin_memmove((R+4612),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68c971:{NFSU2_TR(0x68c971);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c976:{NFSU2_TR(0x68c976);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c979:{NFSU2_TR(0x68c979);
__builtin_memmove((R+4800),(R+4680),8);
}
B68c97c:{NFSU2_TR(0x68c97c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68c982:{NFSU2_TR(0x68c982);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68c985:{NFSU2_TR(0x68c985);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c989:{NFSU2_TR(0x68c989);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c98c:{NFSU2_TR(0x68c98c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c990:{NFSU2_TR(0x68c990);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68c996:{NFSU2_TR(0x68c996);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c999:{NFSU2_TR(0x68c999);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c99c:{NFSU2_TR(0x68c99c);
__builtin_memmove((R+4672),(R+4616),8);
}
B68c99f:{NFSU2_TR(0x68c99f);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c9a2:{NFSU2_TR(0x68c9a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68c9a8:{NFSU2_TR(0x68c9a8);
__builtin_memmove((R+8),(R+0),4);
}
B68c9aa:{NFSU2_TR(0x68c9aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c9ad:{NFSU2_TR(0x68c9ad);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c9af:{NFSU2_TR(0x68c9af);
__builtin_memmove((R+8),(R+4),4);
}
B68c9b1:{NFSU2_TR(0x68c9b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c9b4:{NFSU2_TR(0x68c9b4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c9b6:{NFSU2_TR(0x68c9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68c9b9:{NFSU2_TR(0x68c9b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c8a3u);}goto L68c8a3;}}
}
B68c9bf:L68c9bf:{c.instructions+=1;NFSU2_TR(0x68c9bf);
{goto L68c9c4;}
}
B68c9c1:L68c9c1:{c.instructions+=1;NFSU2_TR(0x68c9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c9c4:L68c9c4:{c.instructions+=3;NFSU2_TR(0x68c9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c9c7:{NFSU2_TR(0x68c9c7);
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
B68c9c9:{NFSU2_TR(0x68c9c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68c9e3;}}
}
B68c9cb:L68c9cb:{c.instructions+=1;NFSU2_TR(0x68c9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c9ce:L68c9ce:{c.instructions+=4;NFSU2_TR(0x68c9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68c9d1:{NFSU2_TR(0x68c9d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c9d2:{NFSU2_TR(0x68c9d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c9d3:{NFSU2_TR(0x68c9d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68c9d8ull));
TAIL_STATIC(0x68d465u,68d);
}
B68c9d8:L68c9d8:{c.instructions+=4;NFSU2_TR(0x68c9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c9db:{NFSU2_TR(0x68c9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c9de:{NFSU2_TR(0x68c9de);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c9e1:{NFSU2_TR(0x68c9e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68c9ceu);}goto L68c9ce;}}
}
B68c9e3:L68c9e3:{c.instructions+=8;NFSU2_TR(0x68c9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68c9e6:{NFSU2_TR(0x68c9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c9e7:{NFSU2_TR(0x68c9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c9e8:{NFSU2_TR(0x68c9e8);
__builtin_memmove((R+16),(R+20),4);
}
B68c9ea:{NFSU2_TR(0x68c9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c9eb:{NFSU2_TR(0x68c9eb);
__builtin_memmove((R+16),(R+12),4);
}
B68c9ed:{NFSU2_TR(0x68c9ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c9ee:{NFSU2_TR(0x68c9ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68c9f1:L68c9f1:{c.instructions+=25;NFSU2_TR(0x68c9f1);
__builtin_memmove((R+28),(R+28),4);
}
B68c9f3:{NFSU2_TR(0x68c9f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c9f4:{NFSU2_TR(0x68c9f4);
__builtin_memmove((R+12),(R+16),4);
}
B68c9f6:{NFSU2_TR(0x68c9f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c9f7:{NFSU2_TR(0x68c9f7);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68c9fa:{NFSU2_TR(0x68c9fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68c9fd:{NFSU2_TR(0x68c9fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68c9fe:{NFSU2_TR(0x68c9fe);
__builtin_memmove((R+20),(R+16),4);
}
B68ca00:{NFSU2_TR(0x68ca00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68ca06:{NFSU2_TR(0x68ca06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ca09:{NFSU2_TR(0x68ca09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ca0a:{NFSU2_TR(0x68ca0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ca0b:{NFSU2_TR(0x68ca0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68ca0e:{NFSU2_TR(0x68ca0e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ca10:{NFSU2_TR(0x68ca10);
__builtin_memmove((R+8),(R+0),4);
}
B68ca12:{NFSU2_TR(0x68ca12);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68ca15:{NFSU2_TR(0x68ca15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68ca16:{NFSU2_TR(0x68ca16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68ca18:{NFSU2_TR(0x68ca18);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68ca1a:{NFSU2_TR(0x68ca1a);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68ca1c:{NFSU2_TR(0x68ca1c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68ca1e:{NFSU2_TR(0x68ca1e);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68ca21:{NFSU2_TR(0x68ca21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ca24:{NFSU2_TR(0x68ca24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ca27:{NFSU2_TR(0x68ca27);
if(r1(R+518)){{goto L68cbc5;}}
}
B68ca2d:L68ca2d:{c.instructions+=3;NFSU2_TR(0x68ca2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68ca30:{NFSU2_TR(0x68ca30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68ca36:{NFSU2_TR(0x68ca36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68ca3bull));
TAIL_STATIC(0x68b19fu,68b);
}
B68ca3b:L68ca3b:{c.instructions+=4;NFSU2_TR(0x68ca3b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68ca3d:{NFSU2_TR(0x68ca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ca40:{NFSU2_TR(0x68ca40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68ca43:{NFSU2_TR(0x68ca43);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68cbc5;}}
}
B68ca49:L68ca49:{c.instructions+=4;NFSU2_TR(0x68ca49);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68ca4d:{NFSU2_TR(0x68ca4d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68ca51:{NFSU2_TR(0x68ca51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ca54:{NFSU2_TR(0x68ca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68ca57:L68ca57:{c.instructions+=96;NFSU2_TR(0x68ca57);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68ca5a:{NFSU2_TR(0x68ca5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4608),(U+8),8);
}
B68ca5e:{NFSU2_TR(0x68ca5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68ca63:{NFSU2_TR(0x68ca63);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68ca66:{NFSU2_TR(0x68ca66);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68ca6a:{NFSU2_TR(0x68ca6a);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68ca6d:{NFSU2_TR(0x68ca6d);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68ca70:{NFSU2_TR(0x68ca70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68ca73:{NFSU2_TR(0x68ca73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68ca77:{NFSU2_TR(0x68ca77);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ca7b:{NFSU2_TR(0x68ca7b);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ca7f:{NFSU2_TR(0x68ca7f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68ca85:{NFSU2_TR(0x68ca85);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68ca88:{NFSU2_TR(0x68ca88);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68ca8e:{NFSU2_TR(0x68ca8e);
__builtin_memmove((R+4744),(R+4672),8);
}
B68ca91:{NFSU2_TR(0x68ca91);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68ca97:{NFSU2_TR(0x68ca97);
__builtin_memmove((R+4872),(R+4672),8);
}
B68ca9a:{NFSU2_TR(0x68ca9a);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68ca9d:{NFSU2_TR(0x68ca9d);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68caa1:{NFSU2_TR(0x68caa1);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68caa4:{NFSU2_TR(0x68caa4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68caab:{NFSU2_TR(0x68caab);
__builtin_memmove((R+4864),(R+4800),4);
__builtin_memmove((R+4868),(R+4804),4);
__builtin_memmove((R+4872),(R+4808),4);
__builtin_memmove((R+4876),(R+4812),4);
}
B68caae:{NFSU2_TR(0x68caae);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68cab5:{NFSU2_TR(0x68cab5);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4876))));
}
B68cab8:{NFSU2_TR(0x68cab8);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B68cabb:{NFSU2_TR(0x68cabb);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68cabe:{NFSU2_TR(0x68cabe);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68cac2:{NFSU2_TR(0x68cac2);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4736))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4740))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4744))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4748))));
}
B68cac5:{NFSU2_TR(0x68cac5);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68cac8:{NFSU2_TR(0x68cac8);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68cacc:{NFSU2_TR(0x68cacc);
{wv<16>((R+4864),uo::rcpps<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B68cacf:{NFSU2_TR(0x68cacf);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68cad2:{NFSU2_TR(0x68cad2);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B68cad5:{NFSU2_TR(0x68cad5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68cad8:{NFSU2_TR(0x68cad8);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68cadb:{NFSU2_TR(0x68cadb);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68cade:{NFSU2_TR(0x68cade);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68cae1:{NFSU2_TR(0x68cae1);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4940))));
}
B68cae4:{NFSU2_TR(0x68cae4);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68cae7:{NFSU2_TR(0x68cae7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68caee:{NFSU2_TR(0x68caee);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68caf1:{NFSU2_TR(0x68caf1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68caf8:{NFSU2_TR(0x68caf8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B68cafb:{NFSU2_TR(0x68cafb);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68cafe:{NFSU2_TR(0x68cafe);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68cb05:{NFSU2_TR(0x68cb05);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4748))));
}
B68cb08:{NFSU2_TR(0x68cb08);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68cb0b:{NFSU2_TR(0x68cb0b);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68cb12:{NFSU2_TR(0x68cb12);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68cb19:{NFSU2_TR(0x68cb19);
__builtin_memmove((R+4736),(R+4992),4);
__builtin_memmove((R+4740),(R+4996),4);
__builtin_memmove((R+4744),(R+5000),4);
__builtin_memmove((R+4748),(R+5004),4);
}
B68cb1c:{NFSU2_TR(0x68cb1c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68cb20:{NFSU2_TR(0x68cb20);
__builtin_memmove((R+4992),(R+4800),4);
__builtin_memmove((R+4996),(R+4804),4);
__builtin_memmove((R+5000),(R+4808),4);
__builtin_memmove((R+5004),(R+4812),4);
}
B68cb23:{NFSU2_TR(0x68cb23);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68cb2a:{NFSU2_TR(0x68cb2a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68cb31:{NFSU2_TR(0x68cb31);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68cb34:{NFSU2_TR(0x68cb34);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B68cb37:{NFSU2_TR(0x68cb37);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68cb3e:{NFSU2_TR(0x68cb3e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68cb42:{NFSU2_TR(0x68cb42);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68cb45:{NFSU2_TR(0x68cb45);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(U+32))));
}
B68cb49:{NFSU2_TR(0x68cb49);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68cb4c:{NFSU2_TR(0x68cb4c);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+4940))));
}
B68cb4f:{NFSU2_TR(0x68cb4f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4876))));
}
B68cb52:{NFSU2_TR(0x68cb52);
__builtin_memmove((R+4928),(R+5056),4);
__builtin_memmove((R+4932),(R+5060),4);
__builtin_memmove((R+4936),(R+5064),4);
__builtin_memmove((R+4940),(R+5068),4);
}
B68cb55:{NFSU2_TR(0x68cb55);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68cb59:{NFSU2_TR(0x68cb59);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68cb5c:{NFSU2_TR(0x68cb5c);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68cb5f:{NFSU2_TR(0x68cb5f);
__builtin_memmove((R+4808),(R+4804),4);
__builtin_memmove((R+4812),(R+4932),4);
__builtin_memmove((R+4804),(R+4928),4);
}
B68cb62:{NFSU2_TR(0x68cb62);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68cb65:{NFSU2_TR(0x68cb65);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68cb69:{NFSU2_TR(0x68cb69);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4876))));
}
B68cb6c:{NFSU2_TR(0x68cb6c);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cb6f:{NFSU2_TR(0x68cb6f);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4868),4);
__builtin_memmove((R+4676),(R+4864),4);
}
B68cb72:{NFSU2_TR(0x68cb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cb77:{NFSU2_TR(0x68cb77);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68cb7a:{NFSU2_TR(0x68cb7a);
__builtin_memmove((R+4800),(R+4680),8);
}
B68cb7d:{NFSU2_TR(0x68cb7d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68cb83:{NFSU2_TR(0x68cb83);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4936),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68cb86:{NFSU2_TR(0x68cb86);
__builtin_memmove((R+4608),(R+4616),4);
__builtin_memmove((R+4612),(R+4872),4);
__builtin_memmove((R+4616),(R+4620),4);
__builtin_memmove((R+4620),(R+4876),4);
}
B68cb89:{NFSU2_TR(0x68cb89);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68cb8d:{NFSU2_TR(0x68cb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68cb90:{NFSU2_TR(0x68cb90);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68cb94:{NFSU2_TR(0x68cb94);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68cb9a:{NFSU2_TR(0x68cb9a);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cb9d:{NFSU2_TR(0x68cb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68cba0:{NFSU2_TR(0x68cba0);
__builtin_memmove((R+4672),(R+4616),8);
}
B68cba3:{NFSU2_TR(0x68cba3);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68cba6:{NFSU2_TR(0x68cba6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68cbac:{NFSU2_TR(0x68cbac);
__builtin_memmove((R+8),(R+0),4);
}
B68cbae:{NFSU2_TR(0x68cbae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68cbb1:{NFSU2_TR(0x68cbb1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68cbb3:{NFSU2_TR(0x68cbb3);
__builtin_memmove((R+8),(R+4),4);
}
B68cbb5:{NFSU2_TR(0x68cbb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68cbb8:{NFSU2_TR(0x68cbb8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68cbba:{NFSU2_TR(0x68cbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68cbbd:{NFSU2_TR(0x68cbbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68ca57u);}goto L68ca57;}}
}
B68cbc3:L68cbc3:{c.instructions+=1;NFSU2_TR(0x68cbc3);
{goto L68cbc8;}
}
B68cbc5:L68cbc5:{c.instructions+=1;NFSU2_TR(0x68cbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68cbc8:L68cbc8:{c.instructions+=3;NFSU2_TR(0x68cbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cbcb:{NFSU2_TR(0x68cbcb);
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
B68cbcd:{NFSU2_TR(0x68cbcd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68cbe7;}}
}
B68cbcf:L68cbcf:{c.instructions+=1;NFSU2_TR(0x68cbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cbd2:L68cbd2:{c.instructions+=4;NFSU2_TR(0x68cbd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68cbd5:{NFSU2_TR(0x68cbd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cbd6:{NFSU2_TR(0x68cbd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cbd7:{NFSU2_TR(0x68cbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68cbdcull));
TAIL_STATIC(0x68d531u,68d);
}
B68cbdc:L68cbdc:{c.instructions+=4;NFSU2_TR(0x68cbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68cbdf:{NFSU2_TR(0x68cbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68cbe2:{NFSU2_TR(0x68cbe2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68cbe5:{NFSU2_TR(0x68cbe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68cbd2u);}goto L68cbd2;}}
}
B68cbe7:L68cbe7:{c.instructions+=8;NFSU2_TR(0x68cbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cbea:{NFSU2_TR(0x68cbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68cbeb:{NFSU2_TR(0x68cbeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68cbec:{NFSU2_TR(0x68cbec);
__builtin_memmove((R+16),(R+20),4);
}
B68cbee:{NFSU2_TR(0x68cbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68cbef:{NFSU2_TR(0x68cbef);
__builtin_memmove((R+16),(R+12),4);
}
B68cbf1:{NFSU2_TR(0x68cbf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68cbf2:{NFSU2_TR(0x68cbf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68cbf5:L68cbf5:{c.instructions+=13;NFSU2_TR(0x68cbf5);
__builtin_memmove((R+28),(R+28),4);
}
B68cbf7:{NFSU2_TR(0x68cbf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cbf8:{NFSU2_TR(0x68cbf8);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B68cbfc:{NFSU2_TR(0x68cbfc);
__builtin_memmove((R+4672),gp(0x80ad40),16);
}
B68cc04:{NFSU2_TR(0x68cc04);
__builtin_memmove((R+4736),gp(0x80ad50),16);
}
B68cc0c:{NFSU2_TR(0x68cc0c);
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((R+4672)),rv<16>((R+4608))));
}
B68cc10:{NFSU2_TR(0x68cc10);
__builtin_memmove((R+4800),(R+4672),16);
}
B68cc14:{NFSU2_TR(0x68cc14);
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((R+4736)),rv<16>((R+4608))));
}
B68cc18:{NFSU2_TR(0x68cc18);
wv<16>((R+4608),eval<Op::INT_AND,16,16,16>(rv<16>((R+4608)),rv<16>(gp(0x80ad30))));
}
B68cc20:{NFSU2_TR(0x68cc20);
u8 U[24];
w1(U+0,u8((r2(R+4800))==(r2(R+5056))));
w2(U+1,u16(r1(U+0)));
w2(R+4800,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4802))==(r2(R+5058))));
w2(U+4,u16(r1(U+3)));
w2(R+4802,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4804))==(r2(R+5060))));
w2(U+7,u16(r1(U+6)));
w2(R+4804,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4806))==(r2(R+5062))));
w2(U+10,u16(r1(U+9)));
w2(R+4806,u16(u32(r2(U+10))*u32(u16(0xffffull))));
w1(U+12,u8((r2(R+4808))==(r2(R+5064))));
w2(U+13,u16(r1(U+12)));
w2(R+4808,u16(u32(r2(U+13))*u32(u16(0xffffull))));
w1(U+15,u8((r2(R+4810))==(r2(R+5066))));
w2(U+16,u16(r1(U+15)));
w2(R+4810,u16(u32(r2(U+16))*u32(u16(0xffffull))));
w1(U+18,u8((r2(R+4812))==(r2(R+5068))));
w2(U+19,u16(r1(U+18)));
w2(R+4812,u16(u32(r2(U+19))*u32(u16(0xffffull))));
w1(U+21,u8((r2(R+4814))==(r2(R+5070))));
w2(U+22,u16(r1(U+21)));
w2(R+4814,u16(u32(r2(U+22))*u32(u16(0xffffull))));
}
B68cc24:{NFSU2_TR(0x68cc24);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(R+4,u32(r2(U+0)));
}
B68cc28:{NFSU2_TR(0x68cc28);
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
B68cc2a:{NFSU2_TR(0x68cc2a);
if(r1(R+518)){{goto L68cc98;}}
}
B68cc2c:L68cc2c:{c.instructions+=26;NFSU2_TR(0x68cc2c);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4800))));
wv<16>((R+4800),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>(gp(0x80ad20))));
}
B68cc34:{NFSU2_TR(0x68cc34);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4800))));
}
B68cc38:{NFSU2_TR(0x68cc38);
u8 U[33];
__builtin_memmove((U+9),gp(0x80ad60),16);
w1(U+25,u8(s16(r2(R+4672))<s16(r2(U+9))));
w2(U+0,u16(r1(U+25)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+9))));
w1(U+4,u8(!(r1(U+25))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4672))));
w2(R+4672,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+26,u8(s16(r2(R+4674))<s16(r2(U+11))));
w2(U+0,u16(r1(U+26)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+11))));
w1(U+4,u8(!(r1(U+26))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4674))));
w2(R+4674,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+27,u8(s16(r2(R+4676))<s16(r2(U+13))));
w2(U+0,u16(r1(U+27)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+13))));
w1(U+4,u8(!(r1(U+27))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4676))));
w2(R+4676,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+28,u8(s16(r2(R+4678))<s16(r2(U+15))));
w2(U+0,u16(r1(U+28)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+15))));
w1(U+4,u8(!(r1(U+28))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4678))));
w2(R+4678,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+29,u8(s16(r2(R+4680))<s16(r2(U+17))));
w2(U+0,u16(r1(U+29)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+17))));
w1(U+4,u8(!(r1(U+29))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4680))));
w2(R+4680,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+30,u8(s16(r2(R+4682))<s16(r2(U+19))));
w2(U+0,u16(r1(U+30)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+19))));
w1(U+4,u8(!(r1(U+30))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4682))));
w2(R+4682,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+31,u8(s16(r2(R+4684))<s16(r2(U+21))));
w2(U+0,u16(r1(U+31)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+21))));
w1(U+4,u8(!(r1(U+31))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4684))));
w2(R+4684,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+32,u8(s16(r2(R+4686))<s16(r2(U+23))));
w2(U+0,u16(r1(U+32)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+23))));
w1(U+4,u8(!(r1(U+32))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4686))));
w2(R+4686,u16(u32(r2(U+2))|u32(r2(U+7))));
}
B68cc40:{NFSU2_TR(0x68cc40);
__builtin_memmove((R+4864),gp(0x80ad70),16);
}
B68cc48:{NFSU2_TR(0x68cc48);
__builtin_memmove((R+4800),(R+4672),16);
}
B68cc4c:{NFSU2_TR(0x68cc4c);
__builtin_memmove((R+4686),(R+5062),2);
__builtin_memmove((R+4684),(R+4678),2);
__builtin_memmove((R+4682),(R+5060),2);
__builtin_memmove((R+4680),(R+4676),2);
__builtin_memmove((R+4678),(R+5058),2);
__builtin_memmove((R+4676),(R+4674),2);
__builtin_memmove((R+4674),(R+5056),2);
}
B68cc50:{NFSU2_TR(0x68cc50);
__builtin_memmove((R+4800),(R+4808),2);
__builtin_memmove((R+4802),(R+5064),2);
__builtin_memmove((R+4804),(R+4810),2);
__builtin_memmove((R+4806),(R+5066),2);
__builtin_memmove((R+4808),(R+4812),2);
__builtin_memmove((R+4810),(R+5068),2);
__builtin_memmove((R+4812),(R+4814),2);
__builtin_memmove((R+4814),(R+5070),2);
}
B68cc54:{NFSU2_TR(0x68cc54);
__builtin_memmove((R+4928),(R+5056),16);
}
B68cc58:{NFSU2_TR(0x68cc58);
__builtin_memmove((R+4942),(R+4614),2);
__builtin_memmove((R+4940),(R+4934),2);
__builtin_memmove((R+4938),(R+4612),2);
__builtin_memmove((R+4936),(R+4932),2);
__builtin_memmove((R+4934),(R+4610),2);
__builtin_memmove((R+4932),(R+4930),2);
__builtin_memmove((R+4930),(R+4608),2);
}
B68cc5c:{NFSU2_TR(0x68cc5c);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B68cc60:{NFSU2_TR(0x68cc60);
w4(R+4672,u32(u32(r4(R+4672))+u32(r4(R+4864))));
w4(R+4676,u32(u32(r4(R+4676))+u32(r4(R+4868))));
w4(R+4680,u32(u32(r4(R+4680))+u32(r4(R+4872))));
w4(R+4684,u32(u32(r4(R+4684))+u32(r4(R+4876))));
}
B68cc64:{NFSU2_TR(0x68cc64);
w4(R+4800,u32(u32(r4(R+4800))+u32(r4(R+4864))));
w4(R+4804,u32(u32(r4(R+4804))+u32(r4(R+4868))));
w4(R+4808,u32(u32(r4(R+4808))+u32(r4(R+4872))));
w4(R+4812,u32(u32(r4(R+4812))+u32(r4(R+4876))));
}
B68cc68:{NFSU2_TR(0x68cc68);
w4(R+4672,shl<u32>(r4(R+4672),u64(u32(0xdull))));
w4(R+4676,shl<u32>(r4(R+4676),u64(u32(0xdull))));
w4(R+4680,shl<u32>(r4(R+4680),u64(u32(0xdull))));
w4(R+4684,shl<u32>(r4(R+4684),u64(u32(0xdull))));
}
B68cc6d:{NFSU2_TR(0x68cc6d);
w4(R+4800,shl<u32>(r4(R+4800),u64(u32(0xdull))));
w4(R+4804,shl<u32>(r4(R+4804),u64(u32(0xdull))));
w4(R+4808,shl<u32>(r4(R+4808),u64(u32(0xdull))));
w4(R+4812,shl<u32>(r4(R+4812),u64(u32(0xdull))));
}
B68cc72:{NFSU2_TR(0x68cc72);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4928))));
}
B68cc76:{NFSU2_TR(0x68cc76);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>((R+5056))));
}
B68cc7a:{NFSU2_TR(0x68cc7a);
wv<16>((R+4928),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4928)),rv<16>((R+4928))));
}
B68cc7e:{NFSU2_TR(0x68cc7e);
__builtin_memmove((R+5056),(R+4736),16);
}
B68cc82:{NFSU2_TR(0x68cc82);
__builtin_memmove((R+4750),(R+4934),2);
__builtin_memmove((R+4748),(R+4742),2);
__builtin_memmove((R+4746),(R+4932),2);
__builtin_memmove((R+4744),(R+4740),2);
__builtin_memmove((R+4742),(R+4930),2);
__builtin_memmove((R+4740),(R+4738),2);
__builtin_memmove((R+4738),(R+4928),2);
}
B68cc86:{NFSU2_TR(0x68cc86);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4936),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4938),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4940),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4942),2);
}
B68cc8a:{NFSU2_TR(0x68cc8a);
w4(R+4608,b32(float(s64(s32(r4(R+4736))))));
w4(R+4612,b32(float(s64(s32(r4(R+4740))))));
w4(R+4616,b32(float(s64(s32(r4(R+4744))))));
w4(R+4620,b32(float(s64(s32(r4(R+4748))))));
}
B68cc8d:{NFSU2_TR(0x68cc8d);
w4(R+4736,b32(float(s64(s32(r4(R+5056))))));
w4(R+4740,b32(float(s64(s32(r4(R+5060))))));
w4(R+4744,b32(float(s64(s32(r4(R+5064))))));
w4(R+4748,b32(float(s64(s32(r4(R+5068))))));
}
B68cc90:{NFSU2_TR(0x68cc90);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B68cc93:{NFSU2_TR(0x68cc93);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4748))));
}
B68cc96:{NFSU2_TR(0x68cc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68cc97:{NFSU2_TR(0x68cc97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68cc98:L68cc98:{c.instructions+=20;NFSU2_TR(0x68cc98);
__builtin_memmove((R+4992),gp(0x80ad80),16);
}
B68cca0:{NFSU2_TR(0x68cca0);
__builtin_memmove((R+4928),(R+5056),16);
}
B68cca4:{NFSU2_TR(0x68cca4);
__builtin_memmove((R+4942),(R+4614),2);
__builtin_memmove((R+4940),(R+4934),2);
__builtin_memmove((R+4938),(R+4612),2);
__builtin_memmove((R+4936),(R+4932),2);
__builtin_memmove((R+4934),(R+4610),2);
__builtin_memmove((R+4932),(R+4930),2);
__builtin_memmove((R+4930),(R+4608),2);
}
B68cca8:{NFSU2_TR(0x68cca8);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B68ccac:{NFSU2_TR(0x68ccac);
__builtin_memmove((R+4800),(R+4672),16);
}
B68ccb0:{NFSU2_TR(0x68ccb0);
__builtin_memmove((R+4686),(R+5062),2);
__builtin_memmove((R+4684),(R+4678),2);
__builtin_memmove((R+4682),(R+5060),2);
__builtin_memmove((R+4680),(R+4676),2);
__builtin_memmove((R+4678),(R+5058),2);
__builtin_memmove((R+4676),(R+4674),2);
__builtin_memmove((R+4674),(R+5056),2);
}
B68ccb4:{NFSU2_TR(0x68ccb4);
__builtin_memmove((R+4800),(R+4808),2);
__builtin_memmove((R+4802),(R+5064),2);
__builtin_memmove((R+4804),(R+4810),2);
__builtin_memmove((R+4806),(R+5066),2);
__builtin_memmove((R+4808),(R+4812),2);
__builtin_memmove((R+4810),(R+5068),2);
__builtin_memmove((R+4812),(R+4814),2);
__builtin_memmove((R+4814),(R+5070),2);
}
B68ccb8:{NFSU2_TR(0x68ccb8);
w4(R+4672,u32(u32(r4(R+4672))+u32(r4(R+4992))));
w4(R+4676,u32(u32(r4(R+4676))+u32(r4(R+4996))));
w4(R+4680,u32(u32(r4(R+4680))+u32(r4(R+5000))));
w4(R+4684,u32(u32(r4(R+4684))+u32(r4(R+5004))));
}
B68ccbc:{NFSU2_TR(0x68ccbc);
w4(R+4800,u32(u32(r4(R+4800))+u32(r4(R+4992))));
w4(R+4804,u32(u32(r4(R+4804))+u32(r4(R+4996))));
w4(R+4808,u32(u32(r4(R+4808))+u32(r4(R+5000))));
w4(R+4812,u32(u32(r4(R+4812))+u32(r4(R+5004))));
}
B68ccc0:{NFSU2_TR(0x68ccc0);
__builtin_memmove((R+4608),(R+4736),16);
}
B68ccc4:{NFSU2_TR(0x68ccc4);
__builtin_memmove((R+4622),(R+5062),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+5060),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+5058),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+5056),2);
}
B68ccc8:{NFSU2_TR(0x68ccc8);
__builtin_memmove((R+4736),(R+4744),2);
__builtin_memmove((R+4738),(R+5064),2);
__builtin_memmove((R+4740),(R+4746),2);
__builtin_memmove((R+4742),(R+5066),2);
__builtin_memmove((R+4744),(R+4748),2);
__builtin_memmove((R+4746),(R+5068),2);
__builtin_memmove((R+4748),(R+4750),2);
__builtin_memmove((R+4750),(R+5070),2);
}
B68cccc:{NFSU2_TR(0x68cccc);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4672))));
}
B68ccd0:{NFSU2_TR(0x68ccd0);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4736))));
}
B68ccd4:{NFSU2_TR(0x68ccd4);
w4(R+4608,shl<u32>(r4(R+4608),u64(u32(0xdull))));
w4(R+4612,shl<u32>(r4(R+4612),u64(u32(0xdull))));
w4(R+4616,shl<u32>(r4(R+4616),u64(u32(0xdull))));
w4(R+4620,shl<u32>(r4(R+4620),u64(u32(0xdull))));
}
B68ccd9:{NFSU2_TR(0x68ccd9);
w4(R+4800,shl<u32>(r4(R+4800),u64(u32(0xdull))));
w4(R+4804,shl<u32>(r4(R+4804),u64(u32(0xdull))));
w4(R+4808,shl<u32>(r4(R+4808),u64(u32(0xdull))));
w4(R+4812,shl<u32>(r4(R+4812),u64(u32(0xdull))));
}
B68ccde:{NFSU2_TR(0x68ccde);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4928))));
}
B68cce2:{NFSU2_TR(0x68cce2);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>((R+5056))));
}
B68cce6:{NFSU2_TR(0x68cce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68cce7:{NFSU2_TR(0x68cce7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68cce8:L68cce8:{c.instructions+=11;NFSU2_TR(0x68cce8);
__builtin_memmove((R+28),(R+28),4);
}
B68ccea:{NFSU2_TR(0x68ccea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cceb:{NFSU2_TR(0x68cceb);
__builtin_memmove((R+20),(R+16),4);
}
B68cced:{NFSU2_TR(0x68cced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68ccf0:{NFSU2_TR(0x68ccf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
}
B68ccf4:{NFSU2_TR(0x68ccf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ccf5:{NFSU2_TR(0x68ccf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ccf6:{NFSU2_TR(0x68ccf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ccf7:{NFSU2_TR(0x68ccf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68ccfa:{NFSU2_TR(0x68ccfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ccfd:{NFSU2_TR(0x68ccfd);
if(r1(R+512)){{goto L68cd49;}}
}
B68ccff:L68ccff:{c.instructions+=6;NFSU2_TR(0x68ccff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68cd02:{NFSU2_TR(0x68cd02);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff8ull))));
}
B68cd05:{NFSU2_TR(0x68cd05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd08:{NFSU2_TR(0x68cd08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68cd0b:{NFSU2_TR(0x68cd0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cd0e:{NFSU2_TR(0x68cd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68cd11:L68cd11:{c.instructions+=4;NFSU2_TR(0x68cd11);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68cd14:{NFSU2_TR(0x68cd14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B68cd18:{NFSU2_TR(0x68cd18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B68cd1b:{NFSU2_TR(0x68cd1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68cd20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68cbf5u);}goto L68cbf5;}
}
B68cd20:L68cd20:{c.instructions+=7;NFSU2_TR(0x68cd20);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B68cd23:{NFSU2_TR(0x68cd23);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4616),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cd27:{NFSU2_TR(0x68cd27);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4800),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cd2b:{NFSU2_TR(0x68cd2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4808),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cd2f:{NFSU2_TR(0x68cd2f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B68cd32:{NFSU2_TR(0x68cd32);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B68cd35:{NFSU2_TR(0x68cd35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68cd11u);}goto L68cd11;}}
}
B68cd37:L68cd37:{c.instructions+=6;NFSU2_TR(0x68cd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cd3a:{NFSU2_TR(0x68cd3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B68cd3d:{NFSU2_TR(0x68cd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68cd40:{NFSU2_TR(0x68cd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd43:{NFSU2_TR(0x68cd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68cd46:{NFSU2_TR(0x68cd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd49:L68cd49:{c.instructions+=3;NFSU2_TR(0x68cd49);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68cd4b:{NFSU2_TR(0x68cd4b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B68cd4e:{NFSU2_TR(0x68cd4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68cdb2;}}
}
B68cd50:L68cd50:{c.instructions+=1;NFSU2_TR(0x68cd50);
w4(R+28,u32(0x400ull));
}
B68cd55:L68cd55:{c.instructions+=15;NFSU2_TR(0x68cd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cd58:{NFSU2_TR(0x68cd58);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B68cd5c:{NFSU2_TR(0x68cd5c);
__builtin_memmove((R+8),(R+4),4);
}
B68cd5e:{NFSU2_TR(0x68cd5e);
__builtin_memmove((R+24),(R+4),4);
}
B68cd60:{NFSU2_TR(0x68cd60);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7c00ull))));
}
B68cd66:{NFSU2_TR(0x68cd66);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffff8000ull))));
}
B68cd6c:{NFSU2_TR(0x68cd6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B68cd6f:{NFSU2_TR(0x68cd6f);
__builtin_memmove((R+0),(R+8),4);
}
B68cd71:{NFSU2_TR(0x68cd71);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B68cd73:{NFSU2_TR(0x68cd73);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68cd75:{NFSU2_TR(0x68cd75);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B68cd77:{NFSU2_TR(0x68cd77);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ffull))));
}
B68cd7d:{NFSU2_TR(0x68cd7d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B68cd7f:{NFSU2_TR(0x68cd7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68cd81:{NFSU2_TR(0x68cd81);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L68cd85;}}
}
B68cd83:L68cd83:{c.instructions+=1;NFSU2_TR(0x68cd83);
__builtin_memmove((R+8),(R+28),4);
}
B68cd85:L68cd85:{c.instructions+=8;NFSU2_TR(0x68cd85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x19800ull))));
}
B68cd8b:{NFSU2_TR(0x68cd8b);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68cd8e:{NFSU2_TR(0x68cd8e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B68cd90:{NFSU2_TR(0x68cd90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68cd92:{NFSU2_TR(0x68cd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd95:{NFSU2_TR(0x68cd95);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B68cd98:{NFSU2_TR(0x68cd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd9b:{NFSU2_TR(0x68cd9b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L68cda3;}}
}
B68cd9d:L68cd9d:{c.instructions+=1;NFSU2_TR(0x68cd9d);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B68cda3:L68cda3:{c.instructions+=6;NFSU2_TR(0x68cda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cda6:{NFSU2_TR(0x68cda6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B68cda9:{NFSU2_TR(0x68cda9);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B68cdac:{NFSU2_TR(0x68cdac);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B68cdad:{NFSU2_TR(0x68cdad);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B68cdb0:{NFSU2_TR(0x68cdb0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68cd55u);}goto L68cd55;}}
}
B68cdb2:L68cdb2:{c.instructions+=6;NFSU2_TR(0x68cdb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cdb5:{NFSU2_TR(0x68cdb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68cdb6:{NFSU2_TR(0x68cdb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68cdb7:{NFSU2_TR(0x68cdb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68cdb8:{NFSU2_TR(0x68cdb8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68cdb9:{NFSU2_TR(0x68cdb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68cdbc:L68cdbc:{c.instructions+=16;NFSU2_TR(0x68cdbc);
__builtin_memmove((R+28),(R+28),4);
}
B68cdbe:{NFSU2_TR(0x68cdbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cdbf:{NFSU2_TR(0x68cdbf);
__builtin_memmove((R+12),(R+16),4);
}
B68cdc1:{NFSU2_TR(0x68cdc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cdc2:{NFSU2_TR(0x68cdc2);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68cdc5:{NFSU2_TR(0x68cdc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68cdc8:{NFSU2_TR(0x68cdc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cdc9:{NFSU2_TR(0x68cdc9);
__builtin_memmove((R+20),(R+16),4);
}
B68cdcb:{NFSU2_TR(0x68cdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68cdce:{NFSU2_TR(0x68cdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cdd1:{NFSU2_TR(0x68cdd1);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B68cdd4:{NFSU2_TR(0x68cdd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B68cdd7:{NFSU2_TR(0x68cdd7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0xfull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B68cdd9:{NFSU2_TR(0x68cdd9);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cddc:{NFSU2_TR(0x68cddc);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cde0:{NFSU2_TR(0x68cde0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68ce14;}}
}
B68cde2:L68cde2:{c.instructions+=15;NFSU2_TR(0x68cde2);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68cde6:{NFSU2_TR(0x68cde6);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68cdea:{NFSU2_TR(0x68cdea);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68cded:{NFSU2_TR(0x68cded);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cdf0:{NFSU2_TR(0x68cdf0);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cdf4:{NFSU2_TR(0x68cdf4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68cdf7:{NFSU2_TR(0x68cdf7);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68cdfa:{NFSU2_TR(0x68cdfa);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68cdfe:{NFSU2_TR(0x68cdfe);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce01:{NFSU2_TR(0x68ce01);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce05:{NFSU2_TR(0x68ce05);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68ce08:{NFSU2_TR(0x68ce08);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce0b:{NFSU2_TR(0x68ce0b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce0f:{NFSU2_TR(0x68ce0f);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B68ce12:{NFSU2_TR(0x68ce12);
{goto L68ce64;}
}
B68ce14:L68ce14:{c.instructions+=22;NFSU2_TR(0x68ce14);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68ce18:{NFSU2_TR(0x68ce18);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68ce1c:{NFSU2_TR(0x68ce1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68ce20:{NFSU2_TR(0x68ce20);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68ce24:{NFSU2_TR(0x68ce24);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B68ce28:{NFSU2_TR(0x68ce28);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B68ce2c:{NFSU2_TR(0x68ce2c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68ce2f:{NFSU2_TR(0x68ce2f);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce32:{NFSU2_TR(0x68ce32);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce36:{NFSU2_TR(0x68ce36);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68ce39:{NFSU2_TR(0x68ce39);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68ce3c:{NFSU2_TR(0x68ce3c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68ce40:{NFSU2_TR(0x68ce40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68ce44:{NFSU2_TR(0x68ce44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68ce48:{NFSU2_TR(0x68ce48);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce4b:{NFSU2_TR(0x68ce4b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce4f:{NFSU2_TR(0x68ce4f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68ce52:{NFSU2_TR(0x68ce52);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce55:{NFSU2_TR(0x68ce55);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce59:{NFSU2_TR(0x68ce59);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68ce5d:{NFSU2_TR(0x68ce5d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68ce60:{NFSU2_TR(0x68ce60);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B68ce64:L68ce64:{c.instructions+=10;NFSU2_TR(0x68ce64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ce67:{NFSU2_TR(0x68ce67);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B68ce6a:{NFSU2_TR(0x68ce6a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68ce6d:{NFSU2_TR(0x68ce6d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68ce70:{NFSU2_TR(0x68ce70);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B68ce73:{NFSU2_TR(0x68ce73);
__builtin_memmove((R+16),(R+20),4);
}
B68ce75:{NFSU2_TR(0x68ce75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68ce76:{NFSU2_TR(0x68ce76);
__builtin_memmove((R+16),(R+12),4);
}
B68ce78:{NFSU2_TR(0x68ce78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68ce79:{NFSU2_TR(0x68ce79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68ce7c:L68ce7c:{c.instructions+=85;NFSU2_TR(0x68ce7c);
__builtin_memmove((R+28),(R+28),4);
}
B68ce7e:{NFSU2_TR(0x68ce7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68ce7f:{NFSU2_TR(0x68ce7f);
__builtin_memmove((R+20),(R+16),4);
}
B68ce81:{NFSU2_TR(0x68ce81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ce84:{NFSU2_TR(0x68ce84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68ce87:{NFSU2_TR(0x68ce87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68ce8a:{NFSU2_TR(0x68ce8a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68ce8d:{NFSU2_TR(0x68ce8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B68ce91:{NFSU2_TR(0x68ce91);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B68ce95:{NFSU2_TR(0x68ce95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B68ce99:{NFSU2_TR(0x68ce99);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68ce9d:{NFSU2_TR(0x68ce9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68cea1:{NFSU2_TR(0x68cea1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B68cea5:{NFSU2_TR(0x68cea5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B68cea9:{NFSU2_TR(0x68cea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4864),(U+0),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68cead:{NFSU2_TR(0x68cead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68ceb2:{NFSU2_TR(0x68ceb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68ceb7:{NFSU2_TR(0x68ceb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cebc:{NFSU2_TR(0x68cebc);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cec0:{NFSU2_TR(0x68cec0);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cec4:{NFSU2_TR(0x68cec4);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cec8:{NFSU2_TR(0x68cec8);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cecc:{NFSU2_TR(0x68cecc);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4620))));
}
B68cecf:{NFSU2_TR(0x68cecf);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4676))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4680))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4684))));
}
B68ced2:{NFSU2_TR(0x68ced2);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4748))));
}
B68ced5:{NFSU2_TR(0x68ced5);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4812))));
}
B68ced8:{NFSU2_TR(0x68ced8);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68cedb:{NFSU2_TR(0x68cedb);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cede:{NFSU2_TR(0x68cede);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4992))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4996))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+5000))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+5004))));
}
B68cee1:{NFSU2_TR(0x68cee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68cee6:{NFSU2_TR(0x68cee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68ceeb:{NFSU2_TR(0x68ceeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cef0:{NFSU2_TR(0x68cef0);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cef4:{NFSU2_TR(0x68cef4);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cef8:{NFSU2_TR(0x68cef8);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cefc:{NFSU2_TR(0x68cefc);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B68ceff:{NFSU2_TR(0x68ceff);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4676))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4680))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4684))));
}
B68cf02:{NFSU2_TR(0x68cf02);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4736))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4740))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4744))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4748))));
}
B68cf05:{NFSU2_TR(0x68cf05);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5004))));
}
B68cf08:{NFSU2_TR(0x68cf08);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5068))));
}
B68cf0b:{NFSU2_TR(0x68cf0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68cf10:{NFSU2_TR(0x68cf10);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf14:{NFSU2_TR(0x68cf14);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4812))));
}
B68cf17:{NFSU2_TR(0x68cf17);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5004))));
}
B68cf1a:{NFSU2_TR(0x68cf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68cf1f:{NFSU2_TR(0x68cf1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf24:{NFSU2_TR(0x68cf24);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf28:{NFSU2_TR(0x68cf28);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf2c:{NFSU2_TR(0x68cf2c);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4612))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4616))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4620))));
}
B68cf2f:{NFSU2_TR(0x68cf2f);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4672))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4676))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4680))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4684))));
}
B68cf32:{NFSU2_TR(0x68cf32);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cf35:{NFSU2_TR(0x68cf35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf3a:{NFSU2_TR(0x68cf3a);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf3e:{NFSU2_TR(0x68cf3e);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4736))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4740))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4744))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4748))));
}
B68cf41:{NFSU2_TR(0x68cf41);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cf44:{NFSU2_TR(0x68cf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf49:{NFSU2_TR(0x68cf49);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf4d:{NFSU2_TR(0x68cf4d);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4812))));
}
B68cf50:{NFSU2_TR(0x68cf50);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cf53:{NFSU2_TR(0x68cf53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf58:{NFSU2_TR(0x68cf58);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf5c:{NFSU2_TR(0x68cf5c);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+5056))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+5060))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+5064))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+5068))));
}
B68cf5f:{NFSU2_TR(0x68cf5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf64:{NFSU2_TR(0x68cf64);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf68:{NFSU2_TR(0x68cf68);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+5056))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+5060))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+5064))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+5068))));
}
B68cf6b:{NFSU2_TR(0x68cf6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf70:{NFSU2_TR(0x68cf70);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf74:{NFSU2_TR(0x68cf74);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5068))));
}
B68cf77:{NFSU2_TR(0x68cf77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf7c:{NFSU2_TR(0x68cf7c);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf80:{NFSU2_TR(0x68cf80);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5068))));
}
B68cf83:{NFSU2_TR(0x68cf83);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B68cf86:{NFSU2_TR(0x68cf86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4872),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf8a:{NFSU2_TR(0x68cf8a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68cf8d:{NFSU2_TR(0x68cf8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4928),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf91:{NFSU2_TR(0x68cf91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4936),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf95:{NFSU2_TR(0x68cf95);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B68cf98:{NFSU2_TR(0x68cf98);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf9c:{NFSU2_TR(0x68cf9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+5000),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cfa0:{NFSU2_TR(0x68cfa0);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68cfa3:{NFSU2_TR(0x68cfa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cfa7:{NFSU2_TR(0x68cfa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4616),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cfab:{NFSU2_TR(0x68cfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cfae:{NFSU2_TR(0x68cfae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68cfaf:{NFSU2_TR(0x68cfaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68cfb2:L68cfb2:{c.instructions+=18;NFSU2_TR(0x68cfb2);
__builtin_memmove((R+28),(R+28),4);
}
B68cfb4:{NFSU2_TR(0x68cfb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68cfb5:{NFSU2_TR(0x68cfb5);
__builtin_memmove((R+20),(R+16),4);
}
B68cfb7:{NFSU2_TR(0x68cfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68cfba:{NFSU2_TR(0x68cfba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68cfbe:{NFSU2_TR(0x68cfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68cfc3:{NFSU2_TR(0x68cfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68cfc8:{NFSU2_TR(0x68cfc8);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68cfcb:{NFSU2_TR(0x68cfcb);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68cfce:{NFSU2_TR(0x68cfce);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B68cfd1:{NFSU2_TR(0x68cfd1);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B68cfd5:{NFSU2_TR(0x68cfd5);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4672))));
}
B68cfd9:{NFSU2_TR(0x68cfd9);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4736))));
}
B68cfdd:{NFSU2_TR(0x68cfdd);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B68cfe1:{NFSU2_TR(0x68cfe1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B68cfe5:{NFSU2_TR(0x68cfe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68cfe8:{NFSU2_TR(0x68cfe8);
u8 U[4];
w1(U+0,u8(std::isnan(f32(r4(R+4608)))));
w1(U+1,u8(std::isnan(f32(m4(0x7bab10)))));
w1(R+514,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4608))==f32(m4(0x7bab10))));
w1(R+518,u8(u32(r1(R+514))|u32(r1(U+2))));
w1(U+3,u8(f32(r4(R+4608))<f32(m4(0x7bab10))));
w1(R+512,u8(u32(r1(R+514))|u32(r1(U+3))));
w1(R+523,u8(0x0ull));
w1(R+516,u8(0x0ull));
w1(R+519,u8(0x0ull));
}
B68cfef:{NFSU2_TR(0x68cfef);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L68cffe;}}
}
B68cff1:L68cff1:{c.instructions+=5;NFSU2_TR(0x68cff1);
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
B68cff3:{NFSU2_TR(0x68cff3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B68cff5:{NFSU2_TR(0x68cff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cff8:{NFSU2_TR(0x68cff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cffb:{NFSU2_TR(0x68cffb);
TAIL_STATIC(0x68d03fu,68d);
}
B68cffe:L68cffe:{c.instructions+=1;NFSU2_TR(0x68cffe);
{wv<16>((R+4992),uo::rsqrtss<16>(rv<16>((R+4992)),rv<16>((R+4608))));}
TAIL_STATIC(0x68d002u,68d);
}
XIT:NFSU2_TR_EXIT(0x68c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
