#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a4(u8* __restrict R,Cpu& c);
u32 body_4c0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4bf,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4bf,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4bf(u8* __restrict R,Cpu& c);
u32 page_4bf(Cpu& c){return body_4bf(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4bf(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4bf002:goto L4bf002;
case 0x4bf004:c.instructions+=2;goto B4bf004;
case 0x4bf00c:c.instructions+=1;goto B4bf00c;
case 0x4bf00e:goto L4bf00e;
case 0x4bf010:c.instructions+=4;goto B4bf010;
case 0x4bf015:c.instructions+=3;goto B4bf015;
case 0x4bf01a:c.instructions+=2;goto B4bf01a;
case 0x4bf01c:c.instructions+=1;goto B4bf01c;
case 0x4bf021:goto L4bf021;
case 0x4bf027:c.instructions+=1;goto B4bf027;
case 0x4bf029:goto L4bf029;
case 0x4bf02b:goto L4bf02b;
case 0x4bf02d:c.instructions+=4;goto B4bf02d;
case 0x4bf02e:c.instructions+=3;goto B4bf02e;
case 0x4bf030:c.instructions+=2;goto B4bf030;
case 0x4bf038:c.instructions+=1;goto B4bf038;
case 0x4bf03b:goto L4bf03b;
case 0x4bf03d:c.instructions+=1;goto B4bf03d;
case 0x4bf042:goto L4bf042;
case 0x4bf044:c.instructions+=5;goto B4bf044;
case 0x4bf047:c.instructions+=4;goto B4bf047;
case 0x4bf04b:c.instructions+=3;goto B4bf04b;
case 0x4bf04d:c.instructions+=2;goto B4bf04d;
case 0x4bf055:c.instructions+=1;goto B4bf055;
case 0x4bf057:goto L4bf057;
case 0x4bf059:c.instructions+=4;goto B4bf059;
case 0x4bf05e:c.instructions+=3;goto B4bf05e;
case 0x4bf063:c.instructions+=2;goto B4bf063;
case 0x4bf065:c.instructions+=1;goto B4bf065;
case 0x4bf06a:goto L4bf06a;
case 0x4bf070:c.instructions+=2;goto B4bf070;
case 0x4bf074:c.instructions+=1;goto B4bf074;
case 0x4bf076:goto L4bf076;
case 0x4bf078:goto L4bf078;
case 0x4bf07a:c.instructions+=4;goto B4bf07a;
case 0x4bf07b:c.instructions+=3;goto B4bf07b;
case 0x4bf07d:c.instructions+=2;goto B4bf07d;
case 0x4bf085:c.instructions+=1;goto B4bf085;
case 0x4bf088:goto L4bf088;
case 0x4bf08c:c.instructions+=5;goto B4bf08c;
case 0x4bf08d:c.instructions+=4;goto B4bf08d;
case 0x4bf08e:c.instructions+=3;goto B4bf08e;
case 0x4bf095:c.instructions+=2;goto B4bf095;
case 0x4bf098:c.instructions+=1;goto B4bf098;
case 0x4bf0a0:goto L4bf0a0;
case 0x4bf0a1:c.instructions+=13;goto B4bf0a1;
case 0x4bf0a2:c.instructions+=12;goto B4bf0a2;
case 0x4bf0a3:c.instructions+=11;goto B4bf0a3;
case 0x4bf0a5:c.instructions+=10;goto B4bf0a5;
case 0x4bf0a8:c.instructions+=9;goto B4bf0a8;
case 0x4bf0ab:c.instructions+=8;goto B4bf0ab;
case 0x4bf0ad:c.instructions+=7;goto B4bf0ad;
case 0x4bf0af:c.instructions+=6;goto B4bf0af;
case 0x4bf0b4:c.instructions+=5;goto B4bf0b4;
case 0x4bf0b9:c.instructions+=4;goto B4bf0b9;
case 0x4bf0ba:c.instructions+=3;goto B4bf0ba;
case 0x4bf0bf:c.instructions+=2;goto B4bf0bf;
case 0x4bf0c0:c.instructions+=1;goto B4bf0c0;
case 0x4bf0c5:goto L4bf0c5;
case 0x4bf0c8:c.instructions+=2;goto B4bf0c8;
case 0x4bf0c9:c.instructions+=1;goto B4bf0c9;
case 0x4bf0ce:goto L4bf0ce;
case 0x4bf0d3:c.instructions+=10;goto B4bf0d3;
case 0x4bf0d9:c.instructions+=9;goto B4bf0d9;
case 0x4bf0df:c.instructions+=8;goto B4bf0df;
case 0x4bf0e5:c.instructions+=7;goto B4bf0e5;
case 0x4bf0e7:c.instructions+=6;goto B4bf0e7;
case 0x4bf0e9:c.instructions+=5;goto B4bf0e9;
case 0x4bf0eb:c.instructions+=4;goto B4bf0eb;
case 0x4bf0ee:c.instructions+=3;goto B4bf0ee;
case 0x4bf0f0:c.instructions+=2;goto B4bf0f0;
case 0x4bf0f2:c.instructions+=1;goto B4bf0f2;
case 0x4bf0f4:goto L4bf0f4;
case 0x4bf0f7:goto L4bf0f7;
case 0x4bf0f8:c.instructions+=2;goto B4bf0f8;
case 0x4bf0fa:c.instructions+=1;goto B4bf0fa;
case 0x4bf0ff:goto L4bf0ff;
case 0x4bf102:c.instructions+=7;goto B4bf102;
case 0x4bf105:c.instructions+=6;goto B4bf105;
case 0x4bf106:c.instructions+=5;goto B4bf106;
case 0x4bf107:c.instructions+=4;goto B4bf107;
case 0x4bf109:c.instructions+=3;goto B4bf109;
case 0x4bf10a:c.instructions+=2;goto B4bf10a;
case 0x4bf10c:c.instructions+=1;goto B4bf10c;
case 0x4bf10e:goto L4bf10e;
case 0x4bf113:goto L4bf113;
case 0x4bf115:goto L4bf115;
case 0x4bf11a:goto L4bf11a;
case 0x4bf120:c.instructions+=8;goto B4bf120;
case 0x4bf125:c.instructions+=7;goto B4bf125;
case 0x4bf12b:c.instructions+=6;goto B4bf12b;
case 0x4bf12d:c.instructions+=5;goto B4bf12d;
case 0x4bf133:c.instructions+=4;goto B4bf133;
case 0x4bf135:c.instructions+=3;goto B4bf135;
case 0x4bf137:c.instructions+=2;goto B4bf137;
case 0x4bf139:c.instructions+=1;goto B4bf139;
case 0x4bf13b:goto L4bf13b;
case 0x4bf13c:c.instructions+=3;goto B4bf13c;
case 0x4bf13d:c.instructions+=2;goto B4bf13d;
case 0x4bf13e:c.instructions+=1;goto B4bf13e;
case 0x4bf140:goto L4bf140;
case 0x4bf141:c.instructions+=11;goto B4bf141;
case 0x4bf143:c.instructions+=10;goto B4bf143;
case 0x4bf146:c.instructions+=9;goto B4bf146;
case 0x4bf149:c.instructions+=8;goto B4bf149;
case 0x4bf14a:c.instructions+=7;goto B4bf14a;
case 0x4bf14b:c.instructions+=6;goto B4bf14b;
case 0x4bf14c:c.instructions+=5;goto B4bf14c;
case 0x4bf14d:c.instructions+=4;goto B4bf14d;
case 0x4bf14f:c.instructions+=3;goto B4bf14f;
case 0x4bf151:c.instructions+=2;goto B4bf151;
case 0x4bf156:c.instructions+=1;goto B4bf156;
case 0x4bf15b:goto L4bf15b;
case 0x4bf15d:c.instructions+=2;goto B4bf15d;
case 0x4bf161:c.instructions+=1;goto B4bf161;
case 0x4bf167:goto L4bf167;
case 0x4bf16c:c.instructions+=1;goto B4bf16c;
case 0x4bf170:goto L4bf170;
case 0x4bf173:c.instructions+=3;goto B4bf173;
case 0x4bf174:c.instructions+=2;goto B4bf174;
case 0x4bf179:c.instructions+=1;goto B4bf179;
case 0x4bf17e:goto L4bf17e;
case 0x4bf181:c.instructions+=2;goto B4bf181;
case 0x4bf183:c.instructions+=1;goto B4bf183;
case 0x4bf185:goto L4bf185;
case 0x4bf188:c.instructions+=5;goto B4bf188;
case 0x4bf18a:c.instructions+=4;goto B4bf18a;
case 0x4bf18f:c.instructions+=3;goto B4bf18f;
case 0x4bf190:c.instructions+=2;goto B4bf190;
case 0x4bf195:c.instructions+=1;goto B4bf195;
case 0x4bf19a:goto L4bf19a;
case 0x4bf19d:c.instructions+=3;goto B4bf19d;
case 0x4bf19e:c.instructions+=2;goto B4bf19e;
case 0x4bf19f:c.instructions+=1;goto B4bf19f;
case 0x4bf1a4:goto L4bf1a4;
case 0x4bf1a7:goto L4bf1a7;
case 0x4bf1aa:c.instructions+=5;goto B4bf1aa;
case 0x4bf1ab:c.instructions+=4;goto B4bf1ab;
case 0x4bf1b0:c.instructions+=3;goto B4bf1b0;
case 0x4bf1b1:c.instructions+=2;goto B4bf1b1;
case 0x4bf1b6:c.instructions+=1;goto B4bf1b6;
case 0x4bf1bb:goto L4bf1bb;
case 0x4bf1be:c.instructions+=3;goto B4bf1be;
case 0x4bf1bf:c.instructions+=2;goto B4bf1bf;
case 0x4bf1c0:c.instructions+=1;goto B4bf1c0;
case 0x4bf1c5:goto L4bf1c5;
case 0x4bf1c8:c.instructions+=4;goto B4bf1c8;
case 0x4bf1cb:c.instructions+=3;goto B4bf1cb;
case 0x4bf1cc:c.instructions+=2;goto B4bf1cc;
case 0x4bf1d1:c.instructions+=1;goto B4bf1d1;
case 0x4bf1d6:goto L4bf1d6;
case 0x4bf1d9:c.instructions+=5;goto B4bf1d9;
case 0x4bf1da:c.instructions+=4;goto B4bf1da;
case 0x4bf1df:c.instructions+=3;goto B4bf1df;
case 0x4bf1e0:c.instructions+=2;goto B4bf1e0;
case 0x4bf1e5:c.instructions+=1;goto B4bf1e5;
case 0x4bf1ea:goto L4bf1ea;
case 0x4bf1ed:c.instructions+=3;goto B4bf1ed;
case 0x4bf1ee:c.instructions+=2;goto B4bf1ee;
case 0x4bf1ef:c.instructions+=1;goto B4bf1ef;
case 0x4bf1f4:goto L4bf1f4;
case 0x4bf1f7:c.instructions+=4;goto B4bf1f7;
case 0x4bf1fa:c.instructions+=3;goto B4bf1fa;
case 0x4bf1fb:c.instructions+=2;goto B4bf1fb;
case 0x4bf200:c.instructions+=1;goto B4bf200;
case 0x4bf205:goto L4bf205;
case 0x4bf208:c.instructions+=2;goto B4bf208;
case 0x4bf209:c.instructions+=1;goto B4bf209;
case 0x4bf20e:goto L4bf20e;
case 0x4bf20f:c.instructions+=2;goto B4bf20f;
case 0x4bf214:c.instructions+=1;goto B4bf214;
case 0x4bf219:goto L4bf219;
case 0x4bf21a:c.instructions+=3;goto B4bf21a;
case 0x4bf21f:c.instructions+=2;goto B4bf21f;
case 0x4bf223:c.instructions+=1;goto B4bf223;
case 0x4bf228:goto L4bf228;
case 0x4bf22c:c.instructions+=5;goto B4bf22c;
case 0x4bf22f:c.instructions+=4;goto B4bf22f;
case 0x4bf230:c.instructions+=3;goto B4bf230;
case 0x4bf231:c.instructions+=2;goto B4bf231;
case 0x4bf232:c.instructions+=1;goto B4bf232;
case 0x4bf237:goto L4bf237;
case 0x4bf23a:c.instructions+=2;goto B4bf23a;
case 0x4bf23b:c.instructions+=1;goto B4bf23b;
case 0x4bf240:goto L4bf240;
case 0x4bf243:c.instructions+=4;goto B4bf243;
case 0x4bf246:c.instructions+=3;goto B4bf246;
case 0x4bf247:c.instructions+=2;goto B4bf247;
case 0x4bf24c:c.instructions+=1;goto B4bf24c;
case 0x4bf251:goto L4bf251;
case 0x4bf254:c.instructions+=6;goto B4bf254;
case 0x4bf257:c.instructions+=5;goto B4bf257;
case 0x4bf25a:c.instructions+=4;goto B4bf25a;
case 0x4bf25f:c.instructions+=3;goto B4bf25f;
case 0x4bf260:c.instructions+=2;goto B4bf260;
case 0x4bf265:c.instructions+=1;goto B4bf265;
case 0x4bf26a:goto L4bf26a;
case 0x4bf26d:c.instructions+=3;goto B4bf26d;
case 0x4bf26e:c.instructions+=2;goto B4bf26e;
case 0x4bf26f:c.instructions+=1;goto B4bf26f;
case 0x4bf274:goto L4bf274;
case 0x4bf278:c.instructions+=5;goto B4bf278;
case 0x4bf27b:c.instructions+=4;goto B4bf27b;
case 0x4bf27c:c.instructions+=3;goto B4bf27c;
case 0x4bf27f:c.instructions+=2;goto B4bf27f;
case 0x4bf281:c.instructions+=1;goto B4bf281;
case 0x4bf287:goto L4bf287;
case 0x4bf288:c.instructions+=6;goto B4bf288;
case 0x4bf289:c.instructions+=5;goto B4bf289;
case 0x4bf28a:c.instructions+=4;goto B4bf28a;
case 0x4bf28b:c.instructions+=3;goto B4bf28b;
case 0x4bf28d:c.instructions+=2;goto B4bf28d;
case 0x4bf28e:c.instructions+=1;goto B4bf28e;
case 0x4bf290:goto L4bf290;
case 0x4bf295:c.instructions+=12;goto B4bf295;
case 0x4bf29b:c.instructions+=11;goto B4bf29b;
case 0x4bf29e:c.instructions+=10;goto B4bf29e;
case 0x4bf29f:c.instructions+=9;goto B4bf29f;
case 0x4bf2a5:c.instructions+=8;goto B4bf2a5;
case 0x4bf2a6:c.instructions+=7;goto B4bf2a6;
case 0x4bf2a8:c.instructions+=6;goto B4bf2a8;
case 0x4bf2ae:c.instructions+=5;goto B4bf2ae;
case 0x4bf2b0:c.instructions+=4;goto B4bf2b0;
case 0x4bf2b2:c.instructions+=3;goto B4bf2b2;
case 0x4bf2b4:c.instructions+=2;goto B4bf2b4;
case 0x4bf2b6:c.instructions+=1;goto B4bf2b6;
case 0x4bf2bc:goto L4bf2bc;
case 0x4bf2bd:c.instructions+=2;goto B4bf2bd;
case 0x4bf2c2:c.instructions+=1;goto B4bf2c2;
case 0x4bf2c3:goto L4bf2c3;
case 0x4bf2c6:c.instructions+=3;goto B4bf2c6;
case 0x4bf2c7:c.instructions+=2;goto B4bf2c7;
case 0x4bf2ca:c.instructions+=1;goto B4bf2ca;
case 0x4bf2cf:goto L4bf2cf;
case 0x4bf2d2:c.instructions+=5;goto B4bf2d2;
case 0x4bf2d5:c.instructions+=4;goto B4bf2d5;
case 0x4bf2db:c.instructions+=3;goto B4bf2db;
case 0x4bf2dc:c.instructions+=2;goto B4bf2dc;
case 0x4bf2e0:c.instructions+=1;goto B4bf2e0;
case 0x4bf2e5:goto L4bf2e5;
case 0x4bf2e8:c.instructions+=6;goto B4bf2e8;
case 0x4bf2ea:c.instructions+=5;goto B4bf2ea;
case 0x4bf2ed:c.instructions+=4;goto B4bf2ed;
case 0x4bf2f1:c.instructions+=3;goto B4bf2f1;
case 0x4bf2f7:c.instructions+=2;goto B4bf2f7;
case 0x4bf2f8:c.instructions+=1;goto B4bf2f8;
case 0x4bf2fd:goto L4bf2fd;
case 0x4bf300:c.instructions+=2;goto B4bf300;
case 0x4bf304:c.instructions+=1;goto B4bf304;
case 0x4bf306:goto L4bf306;
case 0x4bf30c:c.instructions+=2;goto B4bf30c;
case 0x4bf30e:c.instructions+=1;goto B4bf30e;
case 0x4bf310:goto L4bf310;
case 0x4bf313:c.instructions+=4;goto B4bf313;
case 0x4bf315:c.instructions+=3;goto B4bf315;
case 0x4bf31a:c.instructions+=2;goto B4bf31a;
case 0x4bf31e:c.instructions+=1;goto B4bf31e;
case 0x4bf323:goto L4bf323;
case 0x4bf326:c.instructions+=4;goto B4bf326;
case 0x4bf327:c.instructions+=3;goto B4bf327;
case 0x4bf328:c.instructions+=2;goto B4bf328;
case 0x4bf32d:c.instructions+=1;goto B4bf32d;
case 0x4bf332:goto L4bf332;
case 0x4bf336:c.instructions+=4;goto B4bf336;
case 0x4bf339:c.instructions+=3;goto B4bf339;
case 0x4bf33a:c.instructions+=2;goto B4bf33a;
case 0x4bf33b:c.instructions+=1;goto B4bf33b;
case 0x4bf340:goto L4bf340;
case 0x4bf343:goto L4bf343;
case 0x4bf346:c.instructions+=6;goto B4bf346;
case 0x4bf347:c.instructions+=5;goto B4bf347;
case 0x4bf34c:c.instructions+=4;goto B4bf34c;
case 0x4bf34d:c.instructions+=3;goto B4bf34d;
case 0x4bf352:c.instructions+=2;goto B4bf352;
case 0x4bf356:c.instructions+=1;goto B4bf356;
case 0x4bf35b:goto L4bf35b;
case 0x4bf35e:c.instructions+=4;goto B4bf35e;
case 0x4bf35f:c.instructions+=3;goto B4bf35f;
case 0x4bf363:c.instructions+=2;goto B4bf363;
case 0x4bf364:c.instructions+=1;goto B4bf364;
case 0x4bf369:goto L4bf369;
case 0x4bf36c:c.instructions+=5;goto B4bf36c;
case 0x4bf36f:c.instructions+=4;goto B4bf36f;
case 0x4bf374:c.instructions+=3;goto B4bf374;
case 0x4bf377:c.instructions+=2;goto B4bf377;
case 0x4bf379:c.instructions+=1;goto B4bf379;
case 0x4bf37b:goto L4bf37b;
case 0x4bf381:c.instructions+=2;goto B4bf381;
case 0x4bf383:c.instructions+=1;goto B4bf383;
case 0x4bf385:goto L4bf385;
case 0x4bf388:c.instructions+=3;goto B4bf388;
case 0x4bf38b:c.instructions+=2;goto B4bf38b;
case 0x4bf38e:c.instructions+=1;goto B4bf38e;
case 0x4bf390:goto L4bf390;
case 0x4bf391:c.instructions+=2;goto B4bf391;
case 0x4bf396:c.instructions+=1;goto B4bf396;
case 0x4bf39b:goto L4bf39b;
case 0x4bf39e:c.instructions+=4;goto B4bf39e;
case 0x4bf3a3:c.instructions+=3;goto B4bf3a3;
case 0x4bf3a4:c.instructions+=2;goto B4bf3a4;
case 0x4bf3a5:c.instructions+=1;goto B4bf3a5;
case 0x4bf3aa:goto L4bf3aa;
case 0x4bf3ad:c.instructions+=2;goto B4bf3ad;
case 0x4bf3ae:c.instructions+=1;goto B4bf3ae;
case 0x4bf3b3:goto L4bf3b3;
case 0x4bf3b6:c.instructions+=1;goto B4bf3b6;
case 0x4bf3b8:goto L4bf3b8;
case 0x4bf3bd:goto L4bf3bd;
case 0x4bf3be:c.instructions+=1;goto B4bf3be;
case 0x4bf3c0:goto L4bf3c0;
case 0x4bf3c5:c.instructions+=1;goto B4bf3c5;
case 0x4bf3ca:goto L4bf3ca;
case 0x4bf3cc:c.instructions+=1;goto B4bf3cc;
case 0x4bf3ce:goto L4bf3ce;
case 0x4bf3d1:c.instructions+=3;goto B4bf3d1;
case 0x4bf3d2:c.instructions+=2;goto B4bf3d2;
case 0x4bf3d7:c.instructions+=1;goto B4bf3d7;
case 0x4bf3dc:goto L4bf3dc;
case 0x4bf3df:c.instructions+=2;goto B4bf3df;
case 0x4bf3e0:c.instructions+=1;goto B4bf3e0;
case 0x4bf3e2:goto L4bf3e2;
case 0x4bf3e6:c.instructions+=2;goto B4bf3e6;
case 0x4bf3ec:c.instructions+=1;goto B4bf3ec;
case 0x4bf3ed:goto L4bf3ed;
case 0x4bf3f0:goto L4bf3f0;
case 0x4bf3f5:c.instructions+=3;goto B4bf3f5;
case 0x4bf3f6:c.instructions+=2;goto B4bf3f6;
case 0x4bf3fb:c.instructions+=1;goto B4bf3fb;
case 0x4bf400:goto L4bf400;
case 0x4bf403:c.instructions+=3;goto B4bf403;
case 0x4bf404:c.instructions+=2;goto B4bf404;
case 0x4bf405:c.instructions+=1;goto B4bf405;
case 0x4bf40a:goto L4bf40a;
case 0x4bf40d:goto L4bf40d;
case 0x4bf410:c.instructions+=4;goto B4bf410;
case 0x4bf413:c.instructions+=3;goto B4bf413;
case 0x4bf414:c.instructions+=2;goto B4bf414;
case 0x4bf419:c.instructions+=1;goto B4bf419;
case 0x4bf41e:goto L4bf41e;
case 0x4bf41f:c.instructions+=3;goto B4bf41f;
case 0x4bf424:c.instructions+=2;goto B4bf424;
case 0x4bf426:c.instructions+=1;goto B4bf426;
case 0x4bf42b:goto L4bf42b;
case 0x4bf42e:c.instructions+=4;goto B4bf42e;
case 0x4bf42f:c.instructions+=3;goto B4bf42f;
case 0x4bf430:c.instructions+=2;goto B4bf430;
case 0x4bf431:c.instructions+=1;goto B4bf431;
case 0x4bf436:goto L4bf436;
case 0x4bf439:c.instructions+=2;goto B4bf439;
case 0x4bf43a:c.instructions+=1;goto B4bf43a;
case 0x4bf43f:goto L4bf43f;
case 0x4bf444:c.instructions+=3;goto B4bf444;
case 0x4bf447:c.instructions+=2;goto B4bf447;
case 0x4bf449:c.instructions+=1;goto B4bf449;
case 0x4bf44b:goto L4bf44b;
case 0x4bf450:c.instructions+=2;goto B4bf450;
case 0x4bf452:c.instructions+=1;goto B4bf452;
case 0x4bf454:goto L4bf454;
case 0x4bf459:c.instructions+=8;goto B4bf459;
case 0x4bf45d:c.instructions+=7;goto B4bf45d;
case 0x4bf464:c.instructions+=6;goto B4bf464;
case 0x4bf467:c.instructions+=5;goto B4bf467;
case 0x4bf468:c.instructions+=4;goto B4bf468;
case 0x4bf46d:c.instructions+=3;goto B4bf46d;
case 0x4bf46e:c.instructions+=2;goto B4bf46e;
case 0x4bf473:c.instructions+=1;goto B4bf473;
case 0x4bf478:goto L4bf478;
case 0x4bf47b:c.instructions+=3;goto B4bf47b;
case 0x4bf47c:c.instructions+=2;goto B4bf47c;
case 0x4bf47d:c.instructions+=1;goto B4bf47d;
case 0x4bf482:goto L4bf482;
case 0x4bf485:c.instructions+=1;goto B4bf485;
case 0x4bf487:goto L4bf487;
case 0x4bf48b:c.instructions+=4;goto B4bf48b;
case 0x4bf48c:c.instructions+=3;goto B4bf48c;
case 0x4bf48d:c.instructions+=2;goto B4bf48d;
case 0x4bf48f:c.instructions+=1;goto B4bf48f;
case 0x4bf494:goto L4bf494;
case 0x4bf499:c.instructions+=10;goto B4bf499;
case 0x4bf49f:c.instructions+=9;goto B4bf49f;
case 0x4bf4a5:c.instructions+=8;goto B4bf4a5;
case 0x4bf4ab:c.instructions+=7;goto B4bf4ab;
case 0x4bf4ad:c.instructions+=6;goto B4bf4ad;
case 0x4bf4af:c.instructions+=5;goto B4bf4af;
case 0x4bf4b0:c.instructions+=4;goto B4bf4b0;
case 0x4bf4b2:c.instructions+=3;goto B4bf4b2;
case 0x4bf4b5:c.instructions+=2;goto B4bf4b5;
case 0x4bf4b7:c.instructions+=1;goto B4bf4b7;
case 0x4bf4bd:goto L4bf4bd;
case 0x4bf4be:c.instructions+=1;goto B4bf4be;
case 0x4bf4bf:goto L4bf4bf;
case 0x4bf4c0:c.instructions+=3;goto B4bf4c0;
case 0x4bf4c1:c.instructions+=2;goto B4bf4c1;
case 0x4bf4c4:c.instructions+=1;goto B4bf4c4;
case 0x4bf4d0:goto L4bf4d0;
case 0x4bf4d3:c.instructions+=8;goto B4bf4d3;
case 0x4bf4d4:c.instructions+=7;goto B4bf4d4;
case 0x4bf4d5:c.instructions+=6;goto B4bf4d5;
case 0x4bf4d6:c.instructions+=5;goto B4bf4d6;
case 0x4bf4d7:c.instructions+=4;goto B4bf4d7;
case 0x4bf4d9:c.instructions+=3;goto B4bf4d9;
case 0x4bf4dc:c.instructions+=2;goto B4bf4dc;
case 0x4bf4e1:c.instructions+=1;goto B4bf4e1;
case 0x4bf4e6:goto L4bf4e6;
case 0x4bf4e9:c.instructions+=3;goto B4bf4e9;
case 0x4bf4ea:c.instructions+=2;goto B4bf4ea;
case 0x4bf4ef:c.instructions+=1;goto B4bf4ef;
case 0x4bf4f4:goto L4bf4f4;
case 0x4bf4f7:c.instructions+=3;goto B4bf4f7;
case 0x4bf4f8:c.instructions+=2;goto B4bf4f8;
case 0x4bf4f9:c.instructions+=1;goto B4bf4f9;
case 0x4bf4fe:goto L4bf4fe;
case 0x4bf503:c.instructions+=4;goto B4bf503;
case 0x4bf508:c.instructions+=3;goto B4bf508;
case 0x4bf50d:c.instructions+=2;goto B4bf50d;
case 0x4bf511:c.instructions+=1;goto B4bf511;
case 0x4bf512:goto L4bf512;
case 0x4bf514:goto L4bf514;
case 0x4bf517:c.instructions+=2;goto B4bf517;
case 0x4bf51c:c.instructions+=1;goto B4bf51c;
case 0x4bf521:goto L4bf521;
case 0x4bf522:c.instructions+=2;goto B4bf522;
case 0x4bf523:c.instructions+=1;goto B4bf523;
case 0x4bf528:goto L4bf528;
case 0x4bf529:c.instructions+=1;goto B4bf529;
case 0x4bf52e:goto L4bf52e;
case 0x4bf533:c.instructions+=8;goto B4bf533;
case 0x4bf536:c.instructions+=7;goto B4bf536;
case 0x4bf538:c.instructions+=6;goto B4bf538;
case 0x4bf53a:c.instructions+=5;goto B4bf53a;
case 0x4bf53c:c.instructions+=4;goto B4bf53c;
case 0x4bf541:c.instructions+=3;goto B4bf541;
case 0x4bf546:c.instructions+=2;goto B4bf546;
case 0x4bf547:c.instructions+=1;goto B4bf547;
case 0x4bf54c:goto L4bf54c;
case 0x4bf54f:c.instructions+=4;goto B4bf54f;
case 0x4bf550:c.instructions+=3;goto B4bf550;
case 0x4bf551:c.instructions+=2;goto B4bf551;
case 0x4bf556:c.instructions+=1;goto B4bf556;
case 0x4bf55b:goto L4bf55b;
case 0x4bf55e:c.instructions+=3;goto B4bf55e;
case 0x4bf55f:c.instructions+=2;goto B4bf55f;
case 0x4bf560:c.instructions+=1;goto B4bf560;
case 0x4bf565:goto L4bf565;
case 0x4bf568:c.instructions+=3;goto B4bf568;
case 0x4bf569:c.instructions+=2;goto B4bf569;
case 0x4bf56e:c.instructions+=1;goto B4bf56e;
case 0x4bf573:goto L4bf573;
case 0x4bf574:c.instructions+=2;goto B4bf574;
case 0x4bf575:c.instructions+=1;goto B4bf575;
case 0x4bf57a:goto L4bf57a;
case 0x4bf57b:c.instructions+=1;goto B4bf57b;
case 0x4bf580:goto L4bf580;
case 0x4bf584:c.instructions+=7;goto B4bf584;
case 0x4bf587:c.instructions+=6;goto B4bf587;
case 0x4bf589:c.instructions+=5;goto B4bf589;
case 0x4bf58d:c.instructions+=4;goto B4bf58d;
case 0x4bf58e:c.instructions+=3;goto B4bf58e;
case 0x4bf592:c.instructions+=2;goto B4bf592;
case 0x4bf596:c.instructions+=1;goto B4bf596;
case 0x4bf59b:goto L4bf59b;
case 0x4bf59e:c.instructions+=6;goto B4bf59e;
case 0x4bf5a2:c.instructions+=5;goto B4bf5a2;
case 0x4bf5a3:c.instructions+=4;goto B4bf5a3;
case 0x4bf5a8:c.instructions+=3;goto B4bf5a8;
case 0x4bf5a9:c.instructions+=2;goto B4bf5a9;
case 0x4bf5ae:c.instructions+=1;goto B4bf5ae;
case 0x4bf5b3:goto L4bf5b3;
case 0x4bf5b6:c.instructions+=3;goto B4bf5b6;
case 0x4bf5b7:c.instructions+=2;goto B4bf5b7;
case 0x4bf5b8:c.instructions+=1;goto B4bf5b8;
case 0x4bf5bd:goto L4bf5bd;
case 0x4bf5c2:c.instructions+=10;goto B4bf5c2;
case 0x4bf5c4:c.instructions+=9;goto B4bf5c4;
case 0x4bf5c6:c.instructions+=8;goto B4bf5c6;
case 0x4bf5c8:c.instructions+=7;goto B4bf5c8;
case 0x4bf5cd:c.instructions+=6;goto B4bf5cd;
case 0x4bf5d0:c.instructions+=5;goto B4bf5d0;
case 0x4bf5d5:c.instructions+=4;goto B4bf5d5;
case 0x4bf5d7:c.instructions+=3;goto B4bf5d7;
case 0x4bf5dc:c.instructions+=2;goto B4bf5dc;
case 0x4bf5de:c.instructions+=1;goto B4bf5de;
case 0x4bf5e3:goto L4bf5e3;
case 0x4bf5e4:c.instructions+=2;goto B4bf5e4;
case 0x4bf5e5:c.instructions+=1;goto B4bf5e5;
case 0x4bf5ea:goto L4bf5ea;
case 0x4bf5eb:c.instructions+=1;goto B4bf5eb;
case 0x4bf5f0:goto L4bf5f0;
case 0x4bf5f3:c.instructions+=2;goto B4bf5f3;
case 0x4bf5f4:c.instructions+=1;goto B4bf5f4;
case 0x4bf5f9:goto L4bf5f9;
case 0x4bf5fc:c.instructions+=4;goto B4bf5fc;
case 0x4bf5fd:c.instructions+=3;goto B4bf5fd;
case 0x4bf5ff:c.instructions+=2;goto B4bf5ff;
case 0x4bf604:c.instructions+=1;goto B4bf604;
case 0x4bf609:goto L4bf609;
case 0x4bf60c:c.instructions+=3;goto B4bf60c;
case 0x4bf60d:c.instructions+=2;goto B4bf60d;
case 0x4bf60e:c.instructions+=1;goto B4bf60e;
case 0x4bf613:goto L4bf613;
case 0x4bf616:c.instructions+=3;goto B4bf616;
case 0x4bf618:c.instructions+=2;goto B4bf618;
case 0x4bf61d:c.instructions+=1;goto B4bf61d;
case 0x4bf622:goto L4bf622;
case 0x4bf623:c.instructions+=2;goto B4bf623;
case 0x4bf624:c.instructions+=1;goto B4bf624;
case 0x4bf629:goto L4bf629;
case 0x4bf62a:c.instructions+=1;goto B4bf62a;
case 0x4bf62f:goto L4bf62f;
case 0x4bf633:c.instructions+=7;goto B4bf633;
case 0x4bf636:c.instructions+=6;goto B4bf636;
case 0x4bf638:c.instructions+=5;goto B4bf638;
case 0x4bf63c:c.instructions+=4;goto B4bf63c;
case 0x4bf640:c.instructions+=3;goto B4bf640;
case 0x4bf641:c.instructions+=2;goto B4bf641;
case 0x4bf645:c.instructions+=1;goto B4bf645;
case 0x4bf64a:goto L4bf64a;
case 0x4bf64d:c.instructions+=6;goto B4bf64d;
case 0x4bf651:c.instructions+=5;goto B4bf651;
case 0x4bf652:c.instructions+=4;goto B4bf652;
case 0x4bf657:c.instructions+=3;goto B4bf657;
case 0x4bf659:c.instructions+=2;goto B4bf659;
case 0x4bf65e:c.instructions+=1;goto B4bf65e;
case 0x4bf663:goto L4bf663;
case 0x4bf666:c.instructions+=3;goto B4bf666;
case 0x4bf667:c.instructions+=2;goto B4bf667;
case 0x4bf668:c.instructions+=1;goto B4bf668;
case 0x4bf66d:goto L4bf66d;
case 0x4bf672:c.instructions+=3;goto B4bf672;
case 0x4bf675:c.instructions+=2;goto B4bf675;
case 0x4bf677:c.instructions+=1;goto B4bf677;
case 0x4bf679:goto L4bf679;
case 0x4bf681:c.instructions+=2;goto B4bf681;
case 0x4bf686:c.instructions+=1;goto B4bf686;
case 0x4bf688:goto L4bf688;
case 0x4bf690:c.instructions+=1;goto B4bf690;
case 0x4bf695:goto L4bf695;
case 0x4bf698:c.instructions+=3;goto B4bf698;
case 0x4bf69a:c.instructions+=2;goto B4bf69a;
case 0x4bf69f:c.instructions+=1;goto B4bf69f;
case 0x4bf6a4:goto L4bf6a4;
case 0x4bf6a5:c.instructions+=2;goto B4bf6a5;
case 0x4bf6a6:c.instructions+=1;goto B4bf6a6;
case 0x4bf6ab:goto L4bf6ab;
case 0x4bf6ac:c.instructions+=1;goto B4bf6ac;
case 0x4bf6b1:goto L4bf6b1;
case 0x4bf6b4:c.instructions+=2;goto B4bf6b4;
case 0x4bf6b5:c.instructions+=1;goto B4bf6b5;
case 0x4bf6ba:goto L4bf6ba;
case 0x4bf6bd:c.instructions+=4;goto B4bf6bd;
case 0x4bf6be:c.instructions+=3;goto B4bf6be;
case 0x4bf6c0:c.instructions+=2;goto B4bf6c0;
case 0x4bf6c5:c.instructions+=1;goto B4bf6c5;
case 0x4bf6ca:goto L4bf6ca;
case 0x4bf6cd:c.instructions+=3;goto B4bf6cd;
case 0x4bf6ce:c.instructions+=2;goto B4bf6ce;
case 0x4bf6cf:c.instructions+=1;goto B4bf6cf;
case 0x4bf6d4:goto L4bf6d4;
case 0x4bf6d7:c.instructions+=3;goto B4bf6d7;
case 0x4bf6d9:c.instructions+=2;goto B4bf6d9;
case 0x4bf6de:c.instructions+=1;goto B4bf6de;
case 0x4bf6e3:goto L4bf6e3;
case 0x4bf6e4:c.instructions+=2;goto B4bf6e4;
case 0x4bf6e5:c.instructions+=1;goto B4bf6e5;
case 0x4bf6ea:goto L4bf6ea;
case 0x4bf6eb:c.instructions+=1;goto B4bf6eb;
case 0x4bf6f0:goto L4bf6f0;
case 0x4bf6f4:c.instructions+=4;goto B4bf6f4;
case 0x4bf6f9:c.instructions+=3;goto B4bf6f9;
case 0x4bf6fc:c.instructions+=2;goto B4bf6fc;
case 0x4bf6fe:c.instructions+=1;goto B4bf6fe;
case 0x4bf700:goto L4bf700;
case 0x4bf706:c.instructions+=1;goto B4bf706;
case 0x4bf708:goto L4bf708;
case 0x4bf70e:goto L4bf70e;
case 0x4bf712:c.instructions+=4;goto B4bf712;
case 0x4bf715:c.instructions+=3;goto B4bf715;
case 0x4bf719:c.instructions+=2;goto B4bf719;
case 0x4bf71a:c.instructions+=1;goto B4bf71a;
case 0x4bf71f:goto L4bf71f;
case 0x4bf723:c.instructions+=8;goto B4bf723;
case 0x4bf726:c.instructions+=7;goto B4bf726;
case 0x4bf727:c.instructions+=6;goto B4bf727;
case 0x4bf72a:c.instructions+=5;goto B4bf72a;
case 0x4bf72d:c.instructions+=4;goto B4bf72d;
case 0x4bf732:c.instructions+=3;goto B4bf732;
case 0x4bf734:c.instructions+=2;goto B4bf734;
case 0x4bf739:c.instructions+=1;goto B4bf739;
case 0x4bf73e:goto L4bf73e;
case 0x4bf741:c.instructions+=3;goto B4bf741;
case 0x4bf742:c.instructions+=2;goto B4bf742;
case 0x4bf743:c.instructions+=1;goto B4bf743;
case 0x4bf748:goto L4bf748;
case 0x4bf74b:c.instructions+=3;goto B4bf74b;
case 0x4bf74d:c.instructions+=2;goto B4bf74d;
case 0x4bf752:c.instructions+=1;goto B4bf752;
case 0x4bf757:goto L4bf757;
case 0x4bf758:c.instructions+=2;goto B4bf758;
case 0x4bf759:c.instructions+=1;goto B4bf759;
case 0x4bf75e:goto L4bf75e;
case 0x4bf75f:c.instructions+=1;goto B4bf75f;
case 0x4bf764:goto L4bf764;
case 0x4bf767:c.instructions+=2;goto B4bf767;
case 0x4bf76c:c.instructions+=1;goto B4bf76c;
case 0x4bf771:goto L4bf771;
case 0x4bf774:c.instructions+=4;goto B4bf774;
case 0x4bf775:c.instructions+=3;goto B4bf775;
case 0x4bf777:c.instructions+=2;goto B4bf777;
case 0x4bf77c:c.instructions+=1;goto B4bf77c;
case 0x4bf781:goto L4bf781;
case 0x4bf784:c.instructions+=3;goto B4bf784;
case 0x4bf785:c.instructions+=2;goto B4bf785;
case 0x4bf786:c.instructions+=1;goto B4bf786;
case 0x4bf78b:goto L4bf78b;
case 0x4bf78e:c.instructions+=3;goto B4bf78e;
case 0x4bf790:c.instructions+=2;goto B4bf790;
case 0x4bf795:c.instructions+=1;goto B4bf795;
case 0x4bf79a:goto L4bf79a;
case 0x4bf79b:c.instructions+=2;goto B4bf79b;
case 0x4bf79c:c.instructions+=1;goto B4bf79c;
case 0x4bf7a1:goto L4bf7a1;
case 0x4bf7a2:c.instructions+=1;goto B4bf7a2;
case 0x4bf7a7:goto L4bf7a7;
case 0x4bf7ac:c.instructions+=5;goto B4bf7ac;
case 0x4bf7b3:c.instructions+=4;goto B4bf7b3;
case 0x4bf7b6:c.instructions+=3;goto B4bf7b6;
case 0x4bf7b8:c.instructions+=2;goto B4bf7b8;
case 0x4bf7bc:c.instructions+=1;goto B4bf7bc;
case 0x4bf7be:goto L4bf7be;
case 0x4bf7c3:c.instructions+=1;goto B4bf7c3;
case 0x4bf7c5:goto L4bf7c5;
case 0x4bf7c9:c.instructions+=4;goto B4bf7c9;
case 0x4bf7ce:c.instructions+=3;goto B4bf7ce;
case 0x4bf7d4:c.instructions+=2;goto B4bf7d4;
case 0x4bf7da:c.instructions+=1;goto B4bf7da;
case 0x4bf7de:goto L4bf7de;
case 0x4bf7e1:c.instructions+=2;goto B4bf7e1;
case 0x4bf7e2:c.instructions+=1;goto B4bf7e2;
case 0x4bf7e7:goto L4bf7e7;
case 0x4bf7eb:c.instructions+=8;goto B4bf7eb;
case 0x4bf7ee:c.instructions+=7;goto B4bf7ee;
case 0x4bf7ef:c.instructions+=6;goto B4bf7ef;
case 0x4bf7f2:c.instructions+=5;goto B4bf7f2;
case 0x4bf7f5:c.instructions+=4;goto B4bf7f5;
case 0x4bf7fa:c.instructions+=3;goto B4bf7fa;
case 0x4bf7fc:c.instructions+=2;goto B4bf7fc;
case 0x4bf801:c.instructions+=1;goto B4bf801;
case 0x4bf806:goto L4bf806;
case 0x4bf809:c.instructions+=3;goto B4bf809;
case 0x4bf80a:c.instructions+=2;goto B4bf80a;
case 0x4bf80b:c.instructions+=1;goto B4bf80b;
case 0x4bf810:goto L4bf810;
case 0x4bf813:c.instructions+=3;goto B4bf813;
case 0x4bf815:c.instructions+=2;goto B4bf815;
case 0x4bf81a:c.instructions+=1;goto B4bf81a;
case 0x4bf81f:goto L4bf81f;
case 0x4bf820:c.instructions+=2;goto B4bf820;
case 0x4bf821:c.instructions+=1;goto B4bf821;
case 0x4bf826:goto L4bf826;
case 0x4bf827:c.instructions+=1;goto B4bf827;
case 0x4bf82c:goto L4bf82c;
case 0x4bf82f:c.instructions+=2;goto B4bf82f;
case 0x4bf834:c.instructions+=1;goto B4bf834;
case 0x4bf839:goto L4bf839;
case 0x4bf83c:c.instructions+=4;goto B4bf83c;
case 0x4bf83d:c.instructions+=3;goto B4bf83d;
case 0x4bf83f:c.instructions+=2;goto B4bf83f;
case 0x4bf844:c.instructions+=1;goto B4bf844;
case 0x4bf849:goto L4bf849;
case 0x4bf84c:c.instructions+=3;goto B4bf84c;
case 0x4bf84d:c.instructions+=2;goto B4bf84d;
case 0x4bf84e:c.instructions+=1;goto B4bf84e;
case 0x4bf853:goto L4bf853;
case 0x4bf856:c.instructions+=3;goto B4bf856;
case 0x4bf858:c.instructions+=2;goto B4bf858;
case 0x4bf85d:c.instructions+=1;goto B4bf85d;
case 0x4bf862:goto L4bf862;
case 0x4bf863:c.instructions+=2;goto B4bf863;
case 0x4bf864:c.instructions+=1;goto B4bf864;
case 0x4bf869:goto L4bf869;
case 0x4bf86a:c.instructions+=1;goto B4bf86a;
case 0x4bf86f:goto L4bf86f;
case 0x4bf874:c.instructions+=3;goto B4bf874;
case 0x4bf877:c.instructions+=2;goto B4bf877;
case 0x4bf879:c.instructions+=1;goto B4bf879;
case 0x4bf87b:goto L4bf87b;
case 0x4bf87f:c.instructions+=3;goto B4bf87f;
case 0x4bf884:c.instructions+=2;goto B4bf884;
case 0x4bf88a:c.instructions+=1;goto B4bf88a;
case 0x4bf88c:goto L4bf88c;
case 0x4bf890:c.instructions+=2;goto B4bf890;
case 0x4bf895:c.instructions+=1;goto B4bf895;
case 0x4bf89b:goto L4bf89b;
case 0x4bf89e:c.instructions+=3;goto B4bf89e;
case 0x4bf8a2:c.instructions+=2;goto B4bf8a2;
case 0x4bf8a3:c.instructions+=1;goto B4bf8a3;
case 0x4bf8a8:goto L4bf8a8;
case 0x4bf8ac:c.instructions+=8;goto B4bf8ac;
case 0x4bf8af:c.instructions+=7;goto B4bf8af;
case 0x4bf8b0:c.instructions+=6;goto B4bf8b0;
case 0x4bf8b3:c.instructions+=5;goto B4bf8b3;
case 0x4bf8b6:c.instructions+=4;goto B4bf8b6;
case 0x4bf8bb:c.instructions+=3;goto B4bf8bb;
case 0x4bf8bd:c.instructions+=2;goto B4bf8bd;
case 0x4bf8c2:c.instructions+=1;goto B4bf8c2;
case 0x4bf8c7:goto L4bf8c7;
case 0x4bf8ca:c.instructions+=3;goto B4bf8ca;
case 0x4bf8cb:c.instructions+=2;goto B4bf8cb;
case 0x4bf8cc:c.instructions+=1;goto B4bf8cc;
case 0x4bf8d1:goto L4bf8d1;
case 0x4bf8d4:c.instructions+=6;goto B4bf8d4;
case 0x4bf8d5:c.instructions+=5;goto B4bf8d5;
case 0x4bf8d6:c.instructions+=4;goto B4bf8d6;
case 0x4bf8d7:c.instructions+=3;goto B4bf8d7;
case 0x4bf8d8:c.instructions+=2;goto B4bf8d8;
case 0x4bf8db:c.instructions+=1;goto B4bf8db;
case 0x4bf8e0:goto L4bf8e0;
case 0x4bf8e2:c.instructions+=12;goto B4bf8e2;
case 0x4bf8e7:c.instructions+=11;goto B4bf8e7;
case 0x4bf8ed:c.instructions+=10;goto B4bf8ed;
case 0x4bf8ee:c.instructions+=9;goto B4bf8ee;
case 0x4bf8f5:c.instructions+=8;goto B4bf8f5;
case 0x4bf8f6:c.instructions+=7;goto B4bf8f6;
case 0x4bf8f7:c.instructions+=6;goto B4bf8f7;
case 0x4bf8f8:c.instructions+=5;goto B4bf8f8;
case 0x4bf8fc:c.instructions+=4;goto B4bf8fc;
case 0x4bf8fe:c.instructions+=3;goto B4bf8fe;
case 0x4bf8ff:c.instructions+=2;goto B4bf8ff;
case 0x4bf903:c.instructions+=1;goto B4bf903;
case 0x4bf908:goto L4bf908;
case 0x4bf90b:c.instructions+=4;goto B4bf90b;
case 0x4bf90c:c.instructions+=3;goto B4bf90c;
case 0x4bf914:c.instructions+=2;goto B4bf914;
case 0x4bf91a:c.instructions+=1;goto B4bf91a;
case 0x4bf91f:goto L4bf91f;
case 0x4bf922:c.instructions+=3;goto B4bf922;
case 0x4bf925:c.instructions+=2;goto B4bf925;
case 0x4bf927:c.instructions+=1;goto B4bf927;
case 0x4bf92c:goto L4bf92c;
case 0x4bf92e:c.instructions+=1;goto B4bf92e;
case 0x4bf933:goto L4bf933;
case 0x4bf937:c.instructions+=6;goto B4bf937;
case 0x4bf938:c.instructions+=5;goto B4bf938;
case 0x4bf93a:c.instructions+=4;goto B4bf93a;
case 0x4bf93b:c.instructions+=3;goto B4bf93b;
case 0x4bf942:c.instructions+=2;goto B4bf942;
case 0x4bf945:c.instructions+=1;goto B4bf945;
case 0x4bf950:goto L4bf950;
case 0x4bf951:c.instructions+=2;goto B4bf951;
case 0x4bf953:c.instructions+=1;goto B4bf953;
case 0x4bf958:goto L4bf958;
case 0x4bf95d:c.instructions+=1;goto B4bf95d;
case 0x4bf95f:goto L4bf95f;
case 0x4bf960:c.instructions+=1;goto B4bf960;
case 0x4bf965:goto L4bf965;
case 0x4bf968:goto L4bf968;
case 0x4bf96a:c.instructions+=2;goto B4bf96a;
case 0x4bf96b:c.instructions+=1;goto B4bf96b;
case 0x4bf970:goto L4bf970;
case 0x4bf976:c.instructions+=1;goto B4bf976;
case 0x4bf980:goto L4bf980;
case 0x4bf985:c.instructions+=1;goto B4bf985;
case 0x4bf990:goto L4bf990;
case 0x4bf993:c.instructions+=7;goto B4bf993;
case 0x4bf994:c.instructions+=6;goto B4bf994;
case 0x4bf996:c.instructions+=5;goto B4bf996;
case 0x4bf998:c.instructions+=4;goto B4bf998;
case 0x4bf99c:c.instructions+=3;goto B4bf99c;
case 0x4bf99d:c.instructions+=2;goto B4bf99d;
case 0x4bf9a0:c.instructions+=1;goto B4bf9a0;
case 0x4bf9a5:goto L4bf9a5;
case 0x4bf9a8:c.instructions+=7;goto B4bf9a8;
case 0x4bf9ab:c.instructions+=6;goto B4bf9ab;
case 0x4bf9af:c.instructions+=5;goto B4bf9af;
case 0x4bf9b0:c.instructions+=4;goto B4bf9b0;
case 0x4bf9b1:c.instructions+=3;goto B4bf9b1;
case 0x4bf9b6:c.instructions+=2;goto B4bf9b6;
case 0x4bf9b7:c.instructions+=1;goto B4bf9b7;
case 0x4bf9bc:goto L4bf9bc;
case 0x4bf9bf:c.instructions+=5;goto B4bf9bf;
case 0x4bf9c2:c.instructions+=4;goto B4bf9c2;
case 0x4bf9c3:c.instructions+=3;goto B4bf9c3;
case 0x4bf9c8:c.instructions+=2;goto B4bf9c8;
case 0x4bf9c9:c.instructions+=1;goto B4bf9c9;
case 0x4bf9ce:goto L4bf9ce;
case 0x4bf9d1:c.instructions+=3;goto B4bf9d1;
case 0x4bf9d2:c.instructions+=2;goto B4bf9d2;
case 0x4bf9d5:c.instructions+=1;goto B4bf9d5;
case 0x4bf9e0:goto L4bf9e0;
case 0x4bf9e3:c.instructions+=9;goto B4bf9e3;
case 0x4bf9e4:c.instructions+=8;goto B4bf9e4;
case 0x4bf9e6:c.instructions+=7;goto B4bf9e6;
case 0x4bf9e9:c.instructions+=6;goto B4bf9e9;
case 0x4bf9ec:c.instructions+=5;goto B4bf9ec;
case 0x4bf9ef:c.instructions+=4;goto B4bf9ef;
case 0x4bf9f4:c.instructions+=3;goto B4bf9f4;
case 0x4bf9f5:c.instructions+=2;goto B4bf9f5;
case 0x4bf9f9:c.instructions+=1;goto B4bf9f9;
case 0x4bf9fe:goto L4bf9fe;
case 0x4bfa01:c.instructions+=5;goto B4bfa01;
case 0x4bfa03:c.instructions+=4;goto B4bfa03;
case 0x4bfa07:c.instructions+=3;goto B4bfa07;
case 0x4bfa08:c.instructions+=2;goto B4bfa08;
case 0x4bfa0c:c.instructions+=1;goto B4bfa0c;
case 0x4bfa11:goto L4bfa11;
case 0x4bfa14:c.instructions+=5;goto B4bfa14;
case 0x4bfa18:c.instructions+=4;goto B4bfa18;
case 0x4bfa19:c.instructions+=3;goto B4bfa19;
case 0x4bfa1e:c.instructions+=2;goto B4bfa1e;
case 0x4bfa1f:c.instructions+=1;goto B4bfa1f;
case 0x4bfa24:goto L4bfa24;
case 0x4bfa27:c.instructions+=3;goto B4bfa27;
case 0x4bfa28:c.instructions+=2;goto B4bfa28;
case 0x4bfa2b:c.instructions+=1;goto B4bfa2b;
case 0x4bfa30:goto L4bfa30;
case 0x4bfa31:c.instructions+=8;goto B4bfa31;
case 0x4bfa32:c.instructions+=7;goto B4bfa32;
case 0x4bfa34:c.instructions+=6;goto B4bfa34;
case 0x4bfa37:c.instructions+=5;goto B4bfa37;
case 0x4bfa3d:c.instructions+=4;goto B4bfa3d;
case 0x4bfa42:c.instructions+=3;goto B4bfa42;
case 0x4bfa44:c.instructions+=2;goto B4bfa44;
case 0x4bfa45:c.instructions+=1;goto B4bfa45;
case 0x4bfa47:goto L4bfa47;
case 0x4bfa4d:c.instructions+=2;goto B4bfa4d;
case 0x4bfa52:c.instructions+=1;goto B4bfa52;
case 0x4bfa54:goto L4bfa54;
case 0x4bfa5a:c.instructions+=1;goto B4bfa5a;
case 0x4bfa5f:goto L4bfa5f;
case 0x4bfa62:c.instructions+=4;goto B4bfa62;
case 0x4bfa67:c.instructions+=3;goto B4bfa67;
case 0x4bfa6b:c.instructions+=2;goto B4bfa6b;
case 0x4bfa6c:c.instructions+=1;goto B4bfa6c;
case 0x4bfa71:goto L4bfa71;
case 0x4bfa74:c.instructions+=2;goto B4bfa74;
case 0x4bfa75:c.instructions+=1;goto B4bfa75;
case 0x4bfa7a:goto L4bfa7a;
case 0x4bfa7e:c.instructions+=7;goto B4bfa7e;
case 0x4bfa81:c.instructions+=6;goto B4bfa81;
case 0x4bfa82:c.instructions+=5;goto B4bfa82;
case 0x4bfa85:c.instructions+=4;goto B4bfa85;
case 0x4bfa88:c.instructions+=3;goto B4bfa88;
case 0x4bfa8d:c.instructions+=2;goto B4bfa8d;
case 0x4bfa8e:c.instructions+=1;goto B4bfa8e;
case 0x4bfa93:goto L4bfa93;
case 0x4bfa96:c.instructions+=4;goto B4bfa96;
case 0x4bfa97:c.instructions+=3;goto B4bfa97;
case 0x4bfa98:c.instructions+=2;goto B4bfa98;
case 0x4bfa99:c.instructions+=1;goto B4bfa99;
case 0x4bfaa0:goto L4bfaa0;
case 0x4bfaa1:c.instructions+=8;goto B4bfaa1;
case 0x4bfaa2:c.instructions+=7;goto B4bfaa2;
case 0x4bfaa4:c.instructions+=6;goto B4bfaa4;
case 0x4bfaa7:c.instructions+=5;goto B4bfaa7;
case 0x4bfaad:c.instructions+=4;goto B4bfaad;
case 0x4bfab2:c.instructions+=3;goto B4bfab2;
case 0x4bfab4:c.instructions+=2;goto B4bfab4;
case 0x4bfab5:c.instructions+=1;goto B4bfab5;
case 0x4bfab7:goto L4bfab7;
case 0x4bfabd:c.instructions+=2;goto B4bfabd;
case 0x4bfac2:c.instructions+=1;goto B4bfac2;
case 0x4bfac4:goto L4bfac4;
case 0x4bfaca:c.instructions+=1;goto B4bfaca;
case 0x4bfacf:goto L4bfacf;
case 0x4bfad2:c.instructions+=4;goto B4bfad2;
case 0x4bfad7:c.instructions+=3;goto B4bfad7;
case 0x4bfadb:c.instructions+=2;goto B4bfadb;
case 0x4bfadc:c.instructions+=1;goto B4bfadc;
case 0x4bfae1:goto L4bfae1;
case 0x4bfae4:c.instructions+=2;goto B4bfae4;
case 0x4bfae5:c.instructions+=1;goto B4bfae5;
case 0x4bfaea:goto L4bfaea;
case 0x4bfaee:c.instructions+=7;goto B4bfaee;
case 0x4bfaf1:c.instructions+=6;goto B4bfaf1;
case 0x4bfaf2:c.instructions+=5;goto B4bfaf2;
case 0x4bfaf5:c.instructions+=4;goto B4bfaf5;
case 0x4bfaf8:c.instructions+=3;goto B4bfaf8;
case 0x4bfafd:c.instructions+=2;goto B4bfafd;
case 0x4bfafe:c.instructions+=1;goto B4bfafe;
case 0x4bfb03:goto L4bfb03;
case 0x4bfb06:c.instructions+=4;goto B4bfb06;
case 0x4bfb07:c.instructions+=3;goto B4bfb07;
case 0x4bfb08:c.instructions+=2;goto B4bfb08;
case 0x4bfb09:c.instructions+=1;goto B4bfb09;
case 0x4bfb10:goto L4bfb10;
case 0x4bfb11:c.instructions+=10;goto B4bfb11;
case 0x4bfb12:c.instructions+=9;goto B4bfb12;
case 0x4bfb14:c.instructions+=8;goto B4bfb14;
case 0x4bfb17:c.instructions+=7;goto B4bfb17;
case 0x4bfb1d:c.instructions+=6;goto B4bfb1d;
case 0x4bfb1e:c.instructions+=5;goto B4bfb1e;
case 0x4bfb24:c.instructions+=4;goto B4bfb24;
case 0x4bfb27:c.instructions+=3;goto B4bfb27;
case 0x4bfb2c:c.instructions+=2;goto B4bfb2c;
case 0x4bfb2d:c.instructions+=1;goto B4bfb2d;
case 0x4bfb32:goto L4bfb32;
case 0x4bfb35:c.instructions+=5;goto B4bfb35;
case 0x4bfb36:c.instructions+=4;goto B4bfb36;
case 0x4bfb37:c.instructions+=3;goto B4bfb37;
case 0x4bfb3c:c.instructions+=2;goto B4bfb3c;
case 0x4bfb3d:c.instructions+=1;goto B4bfb3d;
case 0x4bfb42:goto L4bfb42;
case 0x4bfb45:c.instructions+=4;goto B4bfb45;
case 0x4bfb46:c.instructions+=3;goto B4bfb46;
case 0x4bfb47:c.instructions+=2;goto B4bfb47;
case 0x4bfb48:c.instructions+=1;goto B4bfb48;
case 0x4bfb50:goto L4bfb50;
case 0x4bfb54:c.instructions+=13;goto B4bfb54;
case 0x4bfb58:c.instructions+=12;goto B4bfb58;
case 0x4bfb59:c.instructions+=11;goto B4bfb59;
case 0x4bfb5a:c.instructions+=10;goto B4bfb5a;
case 0x4bfb5e:c.instructions+=9;goto B4bfb5e;
case 0x4bfb60:c.instructions+=8;goto B4bfb60;
case 0x4bfb64:c.instructions+=7;goto B4bfb64;
case 0x4bfb65:c.instructions+=6;goto B4bfb65;
case 0x4bfb69:c.instructions+=5;goto B4bfb69;
case 0x4bfb6a:c.instructions+=4;goto B4bfb6a;
case 0x4bfb6b:c.instructions+=3;goto B4bfb6b;
case 0x4bfb6c:c.instructions+=2;goto B4bfb6c;
case 0x4bfb6e:c.instructions+=1;goto B4bfb6e;
case 0x4bfb73:goto L4bfb73;
case 0x4bfb77:c.instructions+=5;goto B4bfb77;
case 0x4bfb7d:c.instructions+=4;goto B4bfb7d;
case 0x4bfb80:c.instructions+=3;goto B4bfb80;
case 0x4bfb82:c.instructions+=2;goto B4bfb82;
case 0x4bfb83:c.instructions+=1;goto B4bfb83;
case 0x4bfb90:goto L4bfb90;
case 0x4bfb93:c.instructions+=9;goto B4bfb93;
case 0x4bfb94:c.instructions+=8;goto B4bfb94;
case 0x4bfb96:c.instructions+=7;goto B4bfb96;
case 0x4bfb99:c.instructions+=6;goto B4bfb99;
case 0x4bfb9c:c.instructions+=5;goto B4bfb9c;
case 0x4bfb9f:c.instructions+=4;goto B4bfb9f;
case 0x4bfba4:c.instructions+=3;goto B4bfba4;
case 0x4bfba5:c.instructions+=2;goto B4bfba5;
case 0x4bfba9:c.instructions+=1;goto B4bfba9;
case 0x4bfbae:goto L4bfbae;
case 0x4bfbb1:c.instructions+=5;goto B4bfbb1;
case 0x4bfbb3:c.instructions+=4;goto B4bfbb3;
case 0x4bfbb7:c.instructions+=3;goto B4bfbb7;
case 0x4bfbb8:c.instructions+=2;goto B4bfbb8;
case 0x4bfbbc:c.instructions+=1;goto B4bfbbc;
case 0x4bfbc1:goto L4bfbc1;
case 0x4bfbc4:c.instructions+=5;goto B4bfbc4;
case 0x4bfbc8:c.instructions+=4;goto B4bfbc8;
case 0x4bfbc9:c.instructions+=3;goto B4bfbc9;
case 0x4bfbce:c.instructions+=2;goto B4bfbce;
case 0x4bfbcf:c.instructions+=1;goto B4bfbcf;
case 0x4bfbd4:goto L4bfbd4;
case 0x4bfbd7:c.instructions+=3;goto B4bfbd7;
case 0x4bfbd8:c.instructions+=2;goto B4bfbd8;
case 0x4bfbdb:c.instructions+=1;goto B4bfbdb;
case 0x4bfbe0:goto L4bfbe0;
case 0x4bfbe4:c.instructions+=13;goto B4bfbe4;
case 0x4bfbe8:c.instructions+=12;goto B4bfbe8;
case 0x4bfbe9:c.instructions+=11;goto B4bfbe9;
case 0x4bfbea:c.instructions+=10;goto B4bfbea;
case 0x4bfbee:c.instructions+=9;goto B4bfbee;
case 0x4bfbf0:c.instructions+=8;goto B4bfbf0;
case 0x4bfbf4:c.instructions+=7;goto B4bfbf4;
case 0x4bfbf5:c.instructions+=6;goto B4bfbf5;
case 0x4bfbf9:c.instructions+=5;goto B4bfbf9;
case 0x4bfbfa:c.instructions+=4;goto B4bfbfa;
case 0x4bfbfb:c.instructions+=3;goto B4bfbfb;
case 0x4bfbfc:c.instructions+=2;goto B4bfbfc;
case 0x4bfbfe:c.instructions+=1;goto B4bfbfe;
case 0x4bfc03:goto L4bfc03;
case 0x4bfc07:c.instructions+=5;goto B4bfc07;
case 0x4bfc0d:c.instructions+=4;goto B4bfc0d;
case 0x4bfc10:c.instructions+=3;goto B4bfc10;
case 0x4bfc12:c.instructions+=2;goto B4bfc12;
case 0x4bfc13:c.instructions+=1;goto B4bfc13;
case 0x4bfc20:goto L4bfc20;
case 0x4bfc21:c.instructions+=10;goto B4bfc21;
case 0x4bfc27:c.instructions+=9;goto B4bfc27;
case 0x4bfc28:c.instructions+=8;goto B4bfc28;
case 0x4bfc29:c.instructions+=7;goto B4bfc29;
case 0x4bfc2b:c.instructions+=6;goto B4bfc2b;
case 0x4bfc2e:c.instructions+=5;goto B4bfc2e;
case 0x4bfc31:c.instructions+=4;goto B4bfc31;
case 0x4bfc37:c.instructions+=3;goto B4bfc37;
case 0x4bfc3c:c.instructions+=2;goto B4bfc3c;
case 0x4bfc3d:c.instructions+=1;goto B4bfc3d;
case 0x4bfc42:goto L4bfc42;
case 0x4bfc45:c.instructions+=5;goto B4bfc45;
case 0x4bfc46:c.instructions+=4;goto B4bfc46;
case 0x4bfc47:c.instructions+=3;goto B4bfc47;
case 0x4bfc4c:c.instructions+=2;goto B4bfc4c;
case 0x4bfc4d:c.instructions+=1;goto B4bfc4d;
case 0x4bfc52:goto L4bfc52;
case 0x4bfc55:c.instructions+=4;goto B4bfc55;
case 0x4bfc56:c.instructions+=3;goto B4bfc56;
case 0x4bfc57:c.instructions+=2;goto B4bfc57;
case 0x4bfc58:c.instructions+=1;goto B4bfc58;
case 0x4bfc60:goto L4bfc60;
case 0x4bfc61:c.instructions+=8;goto B4bfc61;
case 0x4bfc62:c.instructions+=7;goto B4bfc62;
case 0x4bfc64:c.instructions+=6;goto B4bfc64;
case 0x4bfc67:c.instructions+=5;goto B4bfc67;
case 0x4bfc6a:c.instructions+=4;goto B4bfc6a;
case 0x4bfc70:c.instructions+=3;goto B4bfc70;
case 0x4bfc75:c.instructions+=2;goto B4bfc75;
case 0x4bfc76:c.instructions+=1;goto B4bfc76;
case 0x4bfc7b:goto L4bfc7b;
case 0x4bfc7e:c.instructions+=4;goto B4bfc7e;
case 0x4bfc7f:c.instructions+=3;goto B4bfc7f;
case 0x4bfc84:c.instructions+=2;goto B4bfc84;
case 0x4bfc85:c.instructions+=1;goto B4bfc85;
case 0x4bfc8a:goto L4bfc8a;
case 0x4bfc8d:c.instructions+=3;goto B4bfc8d;
case 0x4bfc8e:c.instructions+=2;goto B4bfc8e;
case 0x4bfc8f:c.instructions+=1;goto B4bfc8f;
case 0x4bfc90:goto L4bfc90;
case 0x4bfc93:c.instructions+=9;goto B4bfc93;
case 0x4bfc94:c.instructions+=8;goto B4bfc94;
case 0x4bfc96:c.instructions+=7;goto B4bfc96;
case 0x4bfc99:c.instructions+=6;goto B4bfc99;
case 0x4bfc9c:c.instructions+=5;goto B4bfc9c;
case 0x4bfca2:c.instructions+=4;goto B4bfca2;
case 0x4bfca7:c.instructions+=3;goto B4bfca7;
case 0x4bfca8:c.instructions+=2;goto B4bfca8;
case 0x4bfcac:c.instructions+=1;goto B4bfcac;
case 0x4bfcb1:goto L4bfcb1;
case 0x4bfcb5:c.instructions+=4;goto B4bfcb5;
case 0x4bfcbb:c.instructions+=3;goto B4bfcbb;
case 0x4bfcbe:c.instructions+=2;goto B4bfcbe;
case 0x4bfcc4:c.instructions+=1;goto B4bfcc4;
case 0x4bfcc9:goto L4bfcc9;
case 0x4bfccd:c.instructions+=5;goto B4bfccd;
case 0x4bfccf:c.instructions+=4;goto B4bfccf;
case 0x4bfcd3:c.instructions+=3;goto B4bfcd3;
case 0x4bfcd4:c.instructions+=2;goto B4bfcd4;
case 0x4bfcd8:c.instructions+=1;goto B4bfcd8;
case 0x4bfcdd:goto L4bfcdd;
case 0x4bfce0:c.instructions+=5;goto B4bfce0;
case 0x4bfce4:c.instructions+=4;goto B4bfce4;
case 0x4bfce5:c.instructions+=3;goto B4bfce5;
case 0x4bfcea:c.instructions+=2;goto B4bfcea;
case 0x4bfceb:c.instructions+=1;goto B4bfceb;
case 0x4bfcf0:goto L4bfcf0;
case 0x4bfcf3:c.instructions+=3;goto B4bfcf3;
case 0x4bfcf4:c.instructions+=2;goto B4bfcf4;
case 0x4bfcf7:c.instructions+=1;goto B4bfcf7;
case 0x4bfd00:goto L4bfd00;
case 0x4bfd01:c.instructions+=5;goto B4bfd01;
case 0x4bfd03:c.instructions+=4;goto B4bfd03;
case 0x4bfd06:c.instructions+=3;goto B4bfd06;
case 0x4bfd0c:c.instructions+=2;goto B4bfd0c;
case 0x4bfd0d:c.instructions+=1;goto B4bfd0d;
case 0x4bfd12:goto L4bfd12;
case 0x4bfd15:c.instructions+=4;goto B4bfd15;
case 0x4bfd1a:c.instructions+=3;goto B4bfd1a;
case 0x4bfd1b:c.instructions+=2;goto B4bfd1b;
case 0x4bfd1d:c.instructions+=1;goto B4bfd1d;
case 0x4bfd22:goto L4bfd22;
case 0x4bfd25:c.instructions+=4;goto B4bfd25;
case 0x4bfd26:c.instructions+=3;goto B4bfd26;
case 0x4bfd2b:c.instructions+=2;goto B4bfd2b;
case 0x4bfd2c:c.instructions+=1;goto B4bfd2c;
case 0x4bfd31:goto L4bfd31;
case 0x4bfd34:c.instructions+=3;goto B4bfd34;
case 0x4bfd35:c.instructions+=2;goto B4bfd35;
case 0x4bfd36:c.instructions+=1;goto B4bfd36;
case 0x4bfd40:goto L4bfd40;
case 0x4bfd42:c.instructions+=10;goto B4bfd42;
case 0x4bfd47:c.instructions+=9;goto B4bfd47;
case 0x4bfd4d:c.instructions+=8;goto B4bfd4d;
case 0x4bfd4e:c.instructions+=7;goto B4bfd4e;
case 0x4bfd55:c.instructions+=6;goto B4bfd55;
case 0x4bfd5b:c.instructions+=5;goto B4bfd5b;
case 0x4bfd5c:c.instructions+=4;goto B4bfd5c;
case 0x4bfd5d:c.instructions+=3;goto B4bfd5d;
case 0x4bfd5f:c.instructions+=2;goto B4bfd5f;
case 0x4bfd61:c.instructions+=1;goto B4bfd61;
case 0x4bfd66:goto L4bfd66;
case 0x4bfd68:c.instructions+=5;goto B4bfd68;
case 0x4bfd6b:c.instructions+=4;goto B4bfd6b;
case 0x4bfd6f:c.instructions+=3;goto B4bfd6f;
case 0x4bfd71:c.instructions+=2;goto B4bfd71;
case 0x4bfd7c:c.instructions+=1;goto B4bfd7c;
case 0x4bfd7e:goto L4bfd7e;
case 0x4bfd80:c.instructions+=10;goto B4bfd80;
case 0x4bfd86:c.instructions+=9;goto B4bfd86;
case 0x4bfd87:c.instructions+=8;goto B4bfd87;
case 0x4bfd8d:c.instructions+=7;goto B4bfd8d;
case 0x4bfd8e:c.instructions+=6;goto B4bfd8e;
case 0x4bfd94:c.instructions+=5;goto B4bfd94;
case 0x4bfd95:c.instructions+=4;goto B4bfd95;
case 0x4bfd9b:c.instructions+=3;goto B4bfd9b;
case 0x4bfd9c:c.instructions+=2;goto B4bfd9c;
case 0x4bfd9e:c.instructions+=1;goto B4bfd9e;
case 0x4bfda3:goto L4bfda3;
case 0x4bfdaa:c.instructions+=7;goto B4bfdaa;
case 0x4bfdb1:c.instructions+=6;goto B4bfdb1;
case 0x4bfdb8:c.instructions+=5;goto B4bfdb8;
case 0x4bfdbe:c.instructions+=4;goto B4bfdbe;
case 0x4bfdc1:c.instructions+=3;goto B4bfdc1;
case 0x4bfdc4:c.instructions+=2;goto B4bfdc4;
case 0x4bfdc7:c.instructions+=1;goto B4bfdc7;
case 0x4bfdc9:goto L4bfdc9;
case 0x4bfdcb:goto L4bfdcb;
case 0x4bfdcc:c.instructions+=6;goto B4bfdcc;
case 0x4bfdd1:c.instructions+=5;goto B4bfdd1;
case 0x4bfdd5:c.instructions+=4;goto B4bfdd5;
case 0x4bfdda:c.instructions+=3;goto B4bfdda;
case 0x4bfddb:c.instructions+=2;goto B4bfddb;
case 0x4bfde6:c.instructions+=1;goto B4bfde6;
case 0x4bfdeb:goto L4bfdeb;
case 0x4bfdf1:c.instructions+=7;goto B4bfdf1;
case 0x4bfdf2:c.instructions+=6;goto B4bfdf2;
case 0x4bfdf6:c.instructions+=5;goto B4bfdf6;
case 0x4bfdf7:c.instructions+=4;goto B4bfdf7;
case 0x4bfdfb:c.instructions+=3;goto B4bfdfb;
case 0x4bfdfd:c.instructions+=2;goto B4bfdfd;
case 0x4bfdfe:c.instructions+=1;goto B4bfdfe;
case 0x4bfe03:goto L4bfe03;
case 0x4bfe06:c.instructions+=3;goto B4bfe06;
case 0x4bfe0a:c.instructions+=2;goto B4bfe0a;
case 0x4bfe0b:c.instructions+=1;goto B4bfe0b;
case 0x4bfe10:goto L4bfe10;
case 0x4bfe11:c.instructions+=2;goto B4bfe11;
case 0x4bfe12:c.instructions+=1;goto B4bfe12;
case 0x4bfe17:goto L4bfe17;
case 0x4bfe1c:c.instructions+=5;goto B4bfe1c;
case 0x4bfe1f:c.instructions+=4;goto B4bfe1f;
case 0x4bfe23:c.instructions+=3;goto B4bfe23;
case 0x4bfe28:c.instructions+=2;goto B4bfe28;
case 0x4bfe29:c.instructions+=1;goto B4bfe29;
case 0x4bfe2e:goto L4bfe2e;
case 0x4bfe34:c.instructions+=7;goto B4bfe34;
case 0x4bfe35:c.instructions+=6;goto B4bfe35;
case 0x4bfe39:c.instructions+=5;goto B4bfe39;
case 0x4bfe3a:c.instructions+=4;goto B4bfe3a;
case 0x4bfe41:c.instructions+=3;goto B4bfe41;
case 0x4bfe43:c.instructions+=2;goto B4bfe43;
case 0x4bfe44:c.instructions+=1;goto B4bfe44;
case 0x4bfe49:goto L4bfe49;
case 0x4bfe4c:c.instructions+=4;goto B4bfe4c;
case 0x4bfe53:c.instructions+=3;goto B4bfe53;
case 0x4bfe56:c.instructions+=2;goto B4bfe56;
case 0x4bfe57:c.instructions+=1;goto B4bfe57;
case 0x4bfe5c:goto L4bfe5c;
case 0x4bfe5d:c.instructions+=2;goto B4bfe5d;
case 0x4bfe5e:c.instructions+=1;goto B4bfe5e;
case 0x4bfe63:goto L4bfe63;
case 0x4bfe66:c.instructions+=20;goto B4bfe66;
case 0x4bfe6c:c.instructions+=19;goto B4bfe6c;
case 0x4bfe6f:c.instructions+=18;goto B4bfe6f;
case 0x4bfe71:c.instructions+=17;goto B4bfe71;
case 0x4bfe77:c.instructions+=16;goto B4bfe77;
case 0x4bfe7d:c.instructions+=15;goto B4bfe7d;
case 0x4bfe80:c.instructions+=14;goto B4bfe80;
case 0x4bfe82:c.instructions+=13;goto B4bfe82;
case 0x4bfe88:c.instructions+=12;goto B4bfe88;
case 0x4bfe8e:c.instructions+=11;goto B4bfe8e;
case 0x4bfe91:c.instructions+=10;goto B4bfe91;
case 0x4bfe92:c.instructions+=9;goto B4bfe92;
case 0x4bfe98:c.instructions+=8;goto B4bfe98;
case 0x4bfe9e:c.instructions+=7;goto B4bfe9e;
case 0x4bfea4:c.instructions+=6;goto B4bfea4;
case 0x4bfeaa:c.instructions+=5;goto B4bfeaa;
case 0x4bfeb0:c.instructions+=4;goto B4bfeb0;
case 0x4bfeb6:c.instructions+=3;goto B4bfeb6;
case 0x4bfeb9:c.instructions+=2;goto B4bfeb9;
case 0x4bfebb:c.instructions+=1;goto B4bfebb;
case 0x4bfebd:goto L4bfebd;
case 0x4bfebf:c.instructions+=2;goto B4bfebf;
case 0x4bfec1:c.instructions+=1;goto B4bfec1;
case 0x4bfec4:goto L4bfec4;
case 0x4bfec6:c.instructions+=2;goto B4bfec6;
case 0x4bfec8:c.instructions+=1;goto B4bfec8;
case 0x4bfecb:goto L4bfecb;
case 0x4bfecd:c.instructions+=2;goto B4bfecd;
case 0x4bfecf:c.instructions+=1;goto B4bfecf;
case 0x4bfed2:goto L4bfed2;
case 0x4bfed4:c.instructions+=2;goto B4bfed4;
case 0x4bfed6:c.instructions+=1;goto B4bfed6;
case 0x4bfed9:goto L4bfed9;
case 0x4bfedf:c.instructions+=8;goto B4bfedf;
case 0x4bfee6:c.instructions+=7;goto B4bfee6;
case 0x4bfee7:c.instructions+=6;goto B4bfee7;
case 0x4bfeed:c.instructions+=5;goto B4bfeed;
case 0x4bfeee:c.instructions+=4;goto B4bfeee;
case 0x4bfeef:c.instructions+=3;goto B4bfeef;
case 0x4bfef6:c.instructions+=2;goto B4bfef6;
case 0x4bfefc:c.instructions+=1;goto B4bfefc;
case 0x4bff00:goto L4bff00;
case 0x4bff01:c.instructions+=7;goto B4bff01;
case 0x4bff02:c.instructions+=6;goto B4bff02;
case 0x4bff04:c.instructions+=5;goto B4bff04;
case 0x4bff0a:c.instructions+=4;goto B4bff0a;
case 0x4bff0c:c.instructions+=3;goto B4bff0c;
case 0x4bff0d:c.instructions+=2;goto B4bff0d;
case 0x4bff13:c.instructions+=1;goto B4bff13;
case 0x4bff15:goto L4bff15;
case 0x4bff18:c.instructions+=1;goto B4bff18;
case 0x4bff1a:goto L4bff1a;
case 0x4bff1c:c.instructions+=1;goto B4bff1c;
case 0x4bff20:goto L4bff20;
case 0x4bff22:c.instructions+=1;goto B4bff22;
case 0x4bff24:goto L4bff24;
case 0x4bff27:c.instructions+=1;goto B4bff27;
case 0x4bff29:goto L4bff29;
case 0x4bff2b:goto L4bff2b;
case 0x4bff2d:c.instructions+=1;goto B4bff2d;
case 0x4bff2f:goto L4bff2f;
case 0x4bff31:c.instructions+=2;goto B4bff31;
case 0x4bff33:c.instructions+=1;goto B4bff33;
case 0x4bff36:goto L4bff36;
case 0x4bff38:c.instructions+=2;goto B4bff38;
case 0x4bff3a:c.instructions+=1;goto B4bff3a;
case 0x4bff3d:goto L4bff3d;
case 0x4bff40:c.instructions+=2;goto B4bff40;
case 0x4bff42:c.instructions+=1;goto B4bff42;
case 0x4bff44:goto L4bff44;
case 0x4bff47:c.instructions+=1;goto B4bff47;
case 0x4bff49:goto L4bff49;
case 0x4bff4b:c.instructions+=1;goto B4bff4b;
case 0x4bff4d:goto L4bff4d;
case 0x4bff50:goto L4bff50;
case 0x4bff52:c.instructions+=7;goto B4bff52;
case 0x4bff54:c.instructions+=6;goto B4bff54;
case 0x4bff57:c.instructions+=5;goto B4bff57;
case 0x4bff59:c.instructions+=4;goto B4bff59;
case 0x4bff5c:c.instructions+=3;goto B4bff5c;
case 0x4bff5f:c.instructions+=2;goto B4bff5f;
case 0x4bff61:c.instructions+=1;goto B4bff61;
case 0x4bff63:goto L4bff63;
case 0x4bff65:c.instructions+=2;goto B4bff65;
case 0x4bff67:c.instructions+=1;goto B4bff67;
case 0x4bff69:goto L4bff69;
case 0x4bff6b:c.instructions+=1;goto B4bff6b;
case 0x4bff6d:goto L4bff6d;
case 0x4bff6e:c.instructions+=4;goto B4bff6e;
case 0x4bff6f:c.instructions+=3;goto B4bff6f;
case 0x4bff79:c.instructions+=2;goto B4bff79;
case 0x4bff7a:c.instructions+=1;goto B4bff7a;
case 0x4bff80:goto L4bff80;
case 0x4bff83:c.instructions+=2;goto B4bff83;
case 0x4bff86:c.instructions+=1;goto B4bff86;
case 0x4bff88:goto L4bff88;
case 0x4bff8b:c.instructions+=7;goto B4bff8b;
case 0x4bff8d:c.instructions+=6;goto B4bff8d;
case 0x4bff90:c.instructions+=5;goto B4bff90;
case 0x4bff93:c.instructions+=4;goto B4bff93;
case 0x4bff95:c.instructions+=3;goto B4bff95;
case 0x4bff96:c.instructions+=2;goto B4bff96;
case 0x4bff97:c.instructions+=1;goto B4bff97;
case 0x4bff9c:goto L4bff9c;
case 0x4bff9f:c.instructions+=1;goto B4bff9f;
case 0x4bffa0:goto L4bffa0;
case 0x4bffa5:c.instructions+=2;goto B4bffa5;
case 0x4bffa8:c.instructions+=1;goto B4bffa8;
case 0x4bffaa:goto L4bffaa;
case 0x4bffaf:c.instructions+=1;goto B4bffaf;
case 0x4bffb1:goto L4bffb1;
case 0x4bffb4:c.instructions+=1;goto B4bffb4;
case 0x4bffb6:goto L4bffb6;
case 0x4bffbd:c.instructions+=1;goto B4bffbd;
case 0x4bffbf:goto L4bffbf;
case 0x4bffc4:c.instructions+=1;goto B4bffc4;
case 0x4bffc9:goto L4bffc9;
case 0x4bffcb:c.instructions+=1;goto B4bffcb;
case 0x4bffcd:goto L4bffcd;
case 0x4bffcf:c.instructions+=1;goto B4bffcf;
case 0x4bffd4:goto L4bffd4;
case 0x4bffd7:goto L4bffd7;
case 0x4bffdd:c.instructions+=3;goto B4bffdd;
case 0x4bffdf:c.instructions+=2;goto B4bffdf;
case 0x4bffe1:c.instructions+=1;goto B4bffe1;
case 0x4bffe6:goto L4bffe6;
case 0x4bffe7:goto L4bffe7;
case 0x4bffec:c.instructions+=1;goto B4bffec;
case 0x4bfff1:goto L4bfff1;
case 0x4bfff3:c.instructions+=1;goto B4bfff3;
case 0x4bfff5:goto L4bfff5;
case 0x4bfffa:c.instructions+=2;goto B4bfffa;
case 0x4bfffc:c.instructions+=1;goto B4bfffc;
default:missing_instruction(c.pc);}
B4bf002:L4bf002:{c.instructions+=3;NFSU2_TR(0x4bf002);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bf004:{NFSU2_TR(0x4bf004);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf00c:{NFSU2_TR(0x4bf00c);
if(r1(R+518)){{goto L4bf029;}}
}
B4bf00e:L4bf00e:{c.instructions+=5;NFSU2_TR(0x4bf00e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf010:{NFSU2_TR(0x4bf010);
u8 U[4];
w4(U+0,u32(0x7840428aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf015:{NFSU2_TR(0x4bf015);
u8 U[4];
w4(U+0,u32(0x84d1d864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf01a:{NFSU2_TR(0x4bf01a);
__builtin_memmove((R+4),(R+28),4);
}
B4bf01c:{NFSU2_TR(0x4bf01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf021ull));
TAIL_STATIC(0x51f670u,51f);
}
B4bf021:L4bf021:{c.instructions+=2;NFSU2_TR(0x4bf021);
u8 U[4];
w4(U+0,u32(0x795034ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bf027:{NFSU2_TR(0x4bf027);
{goto L4bf02b;}
}
B4bf029:L4bf029:{c.instructions+=1;NFSU2_TR(0x4bf029);
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
B4bf02b:L4bf02b:{c.instructions+=5;NFSU2_TR(0x4bf02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bf02d:{NFSU2_TR(0x4bf02d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf02e:{NFSU2_TR(0x4bf02e);
__builtin_memmove((R+4),(R+24),4);
}
B4bf030:{NFSU2_TR(0x4bf030);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf038:{NFSU2_TR(0x4bf038);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf03bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bf03b:L4bf03b:{c.instructions+=2;NFSU2_TR(0x4bf03b);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf03d:{NFSU2_TR(0x4bf03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf042ull));
TAIL_STATIC(0x575620u,575);
}
B4bf042:L4bf042:{c.instructions+=6;NFSU2_TR(0x4bf042);
__builtin_memmove((R+28),(R+0),4);
}
B4bf044:{NFSU2_TR(0x4bf044);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf047:{NFSU2_TR(0x4bf047);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf04b:{NFSU2_TR(0x4bf04b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bf04d:{NFSU2_TR(0x4bf04d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf055:{NFSU2_TR(0x4bf055);
if(r1(R+518)){{goto L4bf076;}}
}
B4bf057:L4bf057:{c.instructions+=5;NFSU2_TR(0x4bf057);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf059:{NFSU2_TR(0x4bf059);
u8 U[4];
w4(U+0,u32(0xc7e1420cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf05e:{NFSU2_TR(0x4bf05e);
u8 U[4];
w4(U+0,u32(0x4c9e34e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf063:{NFSU2_TR(0x4bf063);
__builtin_memmove((R+4),(R+28),4);
}
B4bf065:{NFSU2_TR(0x4bf065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf06aull));
TAIL_STATIC(0x51f670u,51f);
}
B4bf06a:L4bf06a:{c.instructions+=3;NFSU2_TR(0x4bf06a);
u8 U[4];
w4(U+0,u32(0x79502cull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bf070:{NFSU2_TR(0x4bf070);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4bf074:{NFSU2_TR(0x4bf074);
{goto L4bf078;}
}
B4bf076:L4bf076:{c.instructions+=1;NFSU2_TR(0x4bf076);
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
B4bf078:L4bf078:{c.instructions+=5;NFSU2_TR(0x4bf078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bf07a:{NFSU2_TR(0x4bf07a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf07b:{NFSU2_TR(0x4bf07b);
__builtin_memmove((R+4),(R+24),4);
}
B4bf07d:{NFSU2_TR(0x4bf07d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf085:{NFSU2_TR(0x4bf085);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf088ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bf088:L4bf088:{c.instructions+=6;NFSU2_TR(0x4bf088);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf08c:{NFSU2_TR(0x4bf08c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf08d:{NFSU2_TR(0x4bf08d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf08e:{NFSU2_TR(0x4bf08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf095:{NFSU2_TR(0x4bf095);
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
B4bf098:{NFSU2_TR(0x4bf098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf0a0:L4bf0a0:{c.instructions+=14;NFSU2_TR(0x4bf0a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0a1:{NFSU2_TR(0x4bf0a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0a2:{NFSU2_TR(0x4bf0a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0a3:{NFSU2_TR(0x4bf0a3);
__builtin_memmove((R+28),(R+4),4);
}
B4bf0a5:{NFSU2_TR(0x4bf0a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bf0a8:{NFSU2_TR(0x4bf0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf0ab:{NFSU2_TR(0x4bf0ab);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4bf0ad:{NFSU2_TR(0x4bf0ad);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4bf0af:{NFSU2_TR(0x4bf0af);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x197f062bull))));
}
B4bf0b4:{NFSU2_TR(0x4bf0b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc97a2d22ull))));
}
B4bf0b9:{NFSU2_TR(0x4bf0b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0ba:{NFSU2_TR(0x4bf0ba);
u8 U[4];
w4(U+0,u32(0xa4ec03beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0bf:{NFSU2_TR(0x4bf0bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0c0:{NFSU2_TR(0x4bf0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf0c5ull));
TAIL_STATIC(0x537a10u,537);
}
B4bf0c5:L4bf0c5:{c.instructions+=3;NFSU2_TR(0x4bf0c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf0c8:{NFSU2_TR(0x4bf0c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0c9:{NFSU2_TR(0x4bf0c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf0ceull));
TAIL_STATIC(0x50c900u,50c);
}
B4bf0ce:L4bf0ce:{c.instructions+=11;NFSU2_TR(0x4bf0ce);
__builtin_memmove((R+0),gp(0x89e7cc),4);
}
B4bf0d3:{NFSU2_TR(0x4bf0d3);
__builtin_memmove((R+4),gp(0x89e7c8),4);
}
B4bf0d9:{NFSU2_TR(0x4bf0d9);
__builtin_memmove((R+12),gp(0x89e7c4),4);
}
B4bf0df:{NFSU2_TR(0x4bf0df);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B4bf0e5:{NFSU2_TR(0x4bf0e5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4bf0e7:{NFSU2_TR(0x4bf0e7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B4bf0e9:{NFSU2_TR(0x4bf0e9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4bf0eb:{NFSU2_TR(0x4bf0eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf0ee:{NFSU2_TR(0x4bf0ee);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4bf0f0:{NFSU2_TR(0x4bf0f0);
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
B4bf0f2:{NFSU2_TR(0x4bf0f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bf13b;}}
}
B4bf0f4:L4bf0f4:{c.instructions+=1;NFSU2_TR(0x4bf0f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bf0f7:L4bf0f7:{c.instructions+=3;NFSU2_TR(0x4bf0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf0f8:{NFSU2_TR(0x4bf0f8);
__builtin_memmove((R+4),(R+12),4);
}
B4bf0fa:{NFSU2_TR(0x4bf0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf0ffull));
TAIL_STATIC(0x43be60u,43b);
}
B4bf0ff:L4bf0ff:{c.instructions+=8;NFSU2_TR(0x4bf0ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bf102:{NFSU2_TR(0x4bf102);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf105:{NFSU2_TR(0x4bf105);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bf106:{NFSU2_TR(0x4bf106);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf107:{NFSU2_TR(0x4bf107);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bf109:{NFSU2_TR(0x4bf109);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf10a:{NFSU2_TR(0x4bf10a);
__builtin_memmove((R+4),(R+28),4);
}
B4bf10c:{NFSU2_TR(0x4bf10c);
if(r1(R+518)){{goto L4bf115;}}
}
B4bf10e:L4bf10e:{c.instructions+=1;NFSU2_TR(0x4bf10e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf113ull));
TAIL_STATIC(0x4a4110u,4a4);
}
B4bf113:L4bf113:{c.instructions+=1;NFSU2_TR(0x4bf113);
{goto L4bf11a;}
}
B4bf115:L4bf115:{c.instructions+=1;NFSU2_TR(0x4bf115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf11aull));
TAIL_STATIC(0x4a4020u,4a4);
}
B4bf11a:L4bf11a:{c.instructions+=9;NFSU2_TR(0x4bf11a);
__builtin_memmove((R+8),gp(0x89e7cc),4);
}
B4bf120:{NFSU2_TR(0x4bf120);
__builtin_memmove((R+0),gp(0x89e7c8),4);
}
B4bf125:{NFSU2_TR(0x4bf125);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B4bf12b:{NFSU2_TR(0x4bf12b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4bf12d:{NFSU2_TR(0x4bf12d);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B4bf133:{NFSU2_TR(0x4bf133);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4bf135:{NFSU2_TR(0x4bf135);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4bf137:{NFSU2_TR(0x4bf137);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4bf139:{NFSU2_TR(0x4bf139);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bf0f7u);}goto L4bf0f7;}}
}
B4bf13b:L4bf13b:{c.instructions+=4;NFSU2_TR(0x4bf13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf13c:{NFSU2_TR(0x4bf13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf13d:{NFSU2_TR(0x4bf13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bf13e:{NFSU2_TR(0x4bf13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf140:L4bf140:{c.instructions+=12;NFSU2_TR(0x4bf140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf141:{NFSU2_TR(0x4bf141);
__builtin_memmove((R+20),(R+16),4);
}
B4bf143:{NFSU2_TR(0x4bf143);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4bf146:{NFSU2_TR(0x4bf146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bf149:{NFSU2_TR(0x4bf149);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf14a:{NFSU2_TR(0x4bf14a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf14b:{NFSU2_TR(0x4bf14b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf14c:{NFSU2_TR(0x4bf14c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf14d:{NFSU2_TR(0x4bf14d);
__builtin_memmove((R+28),(R+4),4);
}
B4bf14f:{NFSU2_TR(0x4bf14f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf151:{NFSU2_TR(0x4bf151);
w4(R+4,u32(0x864630ull));
}
B4bf156:{NFSU2_TR(0x4bf156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf15bull));
TAIL_STATIC(0x43be80u,43b);
}
B4bf15b:L4bf15b:{c.instructions+=3;NFSU2_TR(0x4bf15b);
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
B4bf15d:{NFSU2_TR(0x4bf15d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf161:{NFSU2_TR(0x4bf161);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bf287;}}
}
B4bf167:L4bf167:{c.instructions+=2;NFSU2_TR(0x4bf167);
w4(R+24,u32(0x1ull));
}
B4bf16c:{NFSU2_TR(0x4bf16c);
__builtin_memmove((R+16),(R+16),4);
}
B4bf170:L4bf170:{c.instructions+=4;NFSU2_TR(0x4bf170);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bf173:{NFSU2_TR(0x4bf173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf174:{NFSU2_TR(0x4bf174);
w4(R+4,u32(0x864630ull));
}
B4bf179:{NFSU2_TR(0x4bf179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf17eull));
TAIL_STATIC(0x43be60u,43b);
}
B4bf17e:L4bf17e:{c.instructions+=3;NFSU2_TR(0x4bf17e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bf181:{NFSU2_TR(0x4bf181);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bf183:{NFSU2_TR(0x4bf183);
if(r1(R+518)){{goto L4bf1a7;}}
}
B4bf185:L4bf185:{c.instructions+=6;NFSU2_TR(0x4bf185);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf188:{NFSU2_TR(0x4bf188);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf18a:{NFSU2_TR(0x4bf18a);
u8 U[4];
w4(U+0,u32(0x249db7b7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf18f:{NFSU2_TR(0x4bf18f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf190:{NFSU2_TR(0x4bf190);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf195:{NFSU2_TR(0x4bf195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf19aull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf19a:L4bf19a:{c.instructions+=4;NFSU2_TR(0x4bf19a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf19d:{NFSU2_TR(0x4bf19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf19e:{NFSU2_TR(0x4bf19e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf19f:{NFSU2_TR(0x4bf19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf1a4ull));
TAIL_STATIC(0x537c60u,537);
}
B4bf1a4:L4bf1a4:{c.instructions+=1;NFSU2_TR(0x4bf1a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf1a7:L4bf1a7:{c.instructions+=6;NFSU2_TR(0x4bf1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf1aa:{NFSU2_TR(0x4bf1aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1ab:{NFSU2_TR(0x4bf1ab);
u8 U[4];
w4(U+0,u32(0x7909f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1b0:{NFSU2_TR(0x4bf1b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1b1:{NFSU2_TR(0x4bf1b1);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1b6:{NFSU2_TR(0x4bf1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf1bbull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf1bb:L4bf1bb:{c.instructions+=4;NFSU2_TR(0x4bf1bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf1be:{NFSU2_TR(0x4bf1be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1bf:{NFSU2_TR(0x4bf1bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1c0:{NFSU2_TR(0x4bf1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf1c5ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf1c5:L4bf1c5:{c.instructions+=5;NFSU2_TR(0x4bf1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf1c8:{NFSU2_TR(0x4bf1c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf1cb:{NFSU2_TR(0x4bf1cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1cc:{NFSU2_TR(0x4bf1cc);
w4(R+4,u32(0x864630ull));
}
B4bf1d1:{NFSU2_TR(0x4bf1d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf1d6ull));
TAIL_STATIC(0x43be60u,43b);
}
B4bf1d6:L4bf1d6:{c.instructions+=6;NFSU2_TR(0x4bf1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf1d9:{NFSU2_TR(0x4bf1d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1da:{NFSU2_TR(0x4bf1da);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1df:{NFSU2_TR(0x4bf1df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1e0:{NFSU2_TR(0x4bf1e0);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1e5:{NFSU2_TR(0x4bf1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf1eaull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf1ea:L4bf1ea:{c.instructions+=4;NFSU2_TR(0x4bf1ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf1ed:{NFSU2_TR(0x4bf1ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1ee:{NFSU2_TR(0x4bf1ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1ef:{NFSU2_TR(0x4bf1ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf1f4ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf1f4:L4bf1f4:{c.instructions+=5;NFSU2_TR(0x4bf1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf1f7:{NFSU2_TR(0x4bf1f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf1fa:{NFSU2_TR(0x4bf1fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf1fb:{NFSU2_TR(0x4bf1fb);
w4(R+4,u32(0x864630ull));
}
B4bf200:{NFSU2_TR(0x4bf200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf205ull));
TAIL_STATIC(0x43be60u,43b);
}
B4bf205:L4bf205:{c.instructions+=3;NFSU2_TR(0x4bf205);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf208:{NFSU2_TR(0x4bf208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf209:{NFSU2_TR(0x4bf209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf20eull));
TAIL_STATIC(0x610110u,610);
}
B4bf20e:L4bf20e:{c.instructions+=3;NFSU2_TR(0x4bf20e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf20f:{NFSU2_TR(0x4bf20f);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf214:{NFSU2_TR(0x4bf214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf219ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf219:L4bf219:{c.instructions+=4;NFSU2_TR(0x4bf219);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf21a:{NFSU2_TR(0x4bf21a);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf21f:{NFSU2_TR(0x4bf21f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf223:{NFSU2_TR(0x4bf223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf228ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf228:L4bf228:{c.instructions+=6;NFSU2_TR(0x4bf228);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf22c:{NFSU2_TR(0x4bf22c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4bf22f:{NFSU2_TR(0x4bf22f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf230:{NFSU2_TR(0x4bf230);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf231:{NFSU2_TR(0x4bf231);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf232:{NFSU2_TR(0x4bf232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf237ull));
TAIL_STATIC(0x537a10u,537);
}
B4bf237:L4bf237:{c.instructions+=3;NFSU2_TR(0x4bf237);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf23a:{NFSU2_TR(0x4bf23a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf23b:{NFSU2_TR(0x4bf23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf240ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bf240:L4bf240:{c.instructions+=5;NFSU2_TR(0x4bf240);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf243:{NFSU2_TR(0x4bf243);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf246:{NFSU2_TR(0x4bf246);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf247:{NFSU2_TR(0x4bf247);
w4(R+4,u32(0x864630ull));
}
B4bf24c:{NFSU2_TR(0x4bf24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf251ull));
TAIL_STATIC(0x43be60u,43b);
}
B4bf251:L4bf251:{c.instructions+=7;NFSU2_TR(0x4bf251);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf254:{NFSU2_TR(0x4bf254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bf257:{NFSU2_TR(0x4bf257);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4bf25a:{NFSU2_TR(0x4bf25a);
u8 U[4];
w4(U+0,u32(0x7950acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf25f:{NFSU2_TR(0x4bf25f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf260:{NFSU2_TR(0x4bf260);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf265:{NFSU2_TR(0x4bf265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf26aull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf26a:L4bf26a:{c.instructions+=4;NFSU2_TR(0x4bf26a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf26d:{NFSU2_TR(0x4bf26d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf26e:{NFSU2_TR(0x4bf26e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf26f:{NFSU2_TR(0x4bf26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf274ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf274:L4bf274:{c.instructions+=6;NFSU2_TR(0x4bf274);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf278:{NFSU2_TR(0x4bf278);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4bf27b:{NFSU2_TR(0x4bf27b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bf27c:{NFSU2_TR(0x4bf27c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bf27f:{NFSU2_TR(0x4bf27f);
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
B4bf281:{NFSU2_TR(0x4bf281);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bf170u);}goto L4bf170;}}
}
B4bf287:L4bf287:{c.instructions+=7;NFSU2_TR(0x4bf287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf288:{NFSU2_TR(0x4bf288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf289:{NFSU2_TR(0x4bf289);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bf28a:{NFSU2_TR(0x4bf28a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bf28b:{NFSU2_TR(0x4bf28b);
__builtin_memmove((R+16),(R+20),4);
}
B4bf28d:{NFSU2_TR(0x4bf28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bf28e:{NFSU2_TR(0x4bf28e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf290:L4bf290:{c.instructions+=13;NFSU2_TR(0x4bf290);
__builtin_memmove((R+0),gp(0x89e7cc),4);
}
B4bf295:{NFSU2_TR(0x4bf295);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B4bf29b:{NFSU2_TR(0x4bf29b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4bf29e:{NFSU2_TR(0x4bf29e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf29f:{NFSU2_TR(0x4bf29f);
__builtin_memmove((R+24),gp(0x89e7c4),4);
}
B4bf2a5:{NFSU2_TR(0x4bf2a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf2a6:{NFSU2_TR(0x4bf2a6);
__builtin_memmove((R+28),(R+4),4);
}
B4bf2a8:{NFSU2_TR(0x4bf2a8);
__builtin_memmove((R+4),gp(0x89e7c8),4);
}
B4bf2ae:{NFSU2_TR(0x4bf2ae);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4bf2b0:{NFSU2_TR(0x4bf2b0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B4bf2b2:{NFSU2_TR(0x4bf2b2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4bf2b4:{NFSU2_TR(0x4bf2b4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bf2b6:{NFSU2_TR(0x4bf2b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4bf4bf;}}
}
B4bf2bc:L4bf2bc:{c.instructions+=3;NFSU2_TR(0x4bf2bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf2bd:{NFSU2_TR(0x4bf2bd);
w4(R+24,u32(0x1ull));
}
B4bf2c2:{NFSU2_TR(0x4bf2c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf2c3:L4bf2c3:{c.instructions+=4;NFSU2_TR(0x4bf2c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bf2c6:{NFSU2_TR(0x4bf2c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf2c7:{NFSU2_TR(0x4bf2c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bf2ca:{NFSU2_TR(0x4bf2ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf2cfull));
TAIL_STATIC(0x43be60u,43b);
}
B4bf2cf:L4bf2cf:{c.instructions+=6;NFSU2_TR(0x4bf2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf2d2:{NFSU2_TR(0x4bf2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf2d5:{NFSU2_TR(0x4bf2d5);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4bf2db:{NFSU2_TR(0x4bf2db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf2dc:{NFSU2_TR(0x4bf2dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf2e0:{NFSU2_TR(0x4bf2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf2e5ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4bf2e5:L4bf2e5:{c.instructions+=7;NFSU2_TR(0x4bf2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf2e8:{NFSU2_TR(0x4bf2e8);
__builtin_memmove((R+12),(R+0),4);
}
B4bf2ea:{NFSU2_TR(0x4bf2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf2ed:{NFSU2_TR(0x4bf2ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf2f1:{NFSU2_TR(0x4bf2f1);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4bf2f7:{NFSU2_TR(0x4bf2f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf2f8:{NFSU2_TR(0x4bf2f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf2fdull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4bf2fd:L4bf2fd:{c.instructions+=3;NFSU2_TR(0x4bf2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf300:{NFSU2_TR(0x4bf300);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bf304:{NFSU2_TR(0x4bf304);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf343;}}
}
B4bf306:L4bf306:{c.instructions+=3;NFSU2_TR(0x4bf306);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bf30c:{NFSU2_TR(0x4bf30c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bf30e:{NFSU2_TR(0x4bf30e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf343;}}
}
B4bf310:L4bf310:{c.instructions+=5;NFSU2_TR(0x4bf310);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf313:{NFSU2_TR(0x4bf313);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf315:{NFSU2_TR(0x4bf315);
u8 U[4];
w4(U+0,u32(0x7905f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf31a:{NFSU2_TR(0x4bf31a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf31e:{NFSU2_TR(0x4bf31e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf323ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf323:L4bf323:{c.instructions+=5;NFSU2_TR(0x4bf323);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf326:{NFSU2_TR(0x4bf326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf327:{NFSU2_TR(0x4bf327);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf328:{NFSU2_TR(0x4bf328);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf32d:{NFSU2_TR(0x4bf32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf332ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf332:L4bf332:{c.instructions+=5;NFSU2_TR(0x4bf332);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf336:{NFSU2_TR(0x4bf336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf339:{NFSU2_TR(0x4bf339);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf33a:{NFSU2_TR(0x4bf33a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf33b:{NFSU2_TR(0x4bf33b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf340ull));
TAIL_STATIC(0x537c60u,537);
}
B4bf340:L4bf340:{c.instructions+=1;NFSU2_TR(0x4bf340);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf343:L4bf343:{c.instructions+=7;NFSU2_TR(0x4bf343);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf346:{NFSU2_TR(0x4bf346);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf347:{NFSU2_TR(0x4bf347);
u8 U[4];
w4(U+0,u32(0x7909f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf34c:{NFSU2_TR(0x4bf34c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf34d:{NFSU2_TR(0x4bf34d);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf352:{NFSU2_TR(0x4bf352);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf356:{NFSU2_TR(0x4bf356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf35bull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf35b:L4bf35b:{c.instructions+=5;NFSU2_TR(0x4bf35b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf35e:{NFSU2_TR(0x4bf35e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf35f:{NFSU2_TR(0x4bf35f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf363:{NFSU2_TR(0x4bf363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf364:{NFSU2_TR(0x4bf364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf369ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf369:L4bf369:{c.instructions+=6;NFSU2_TR(0x4bf369);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf36c:{NFSU2_TR(0x4bf36c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf36f:{NFSU2_TR(0x4bf36f);
w4(R+8,u32(0x1ull));
}
B4bf374:{NFSU2_TR(0x4bf374);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf377:{NFSU2_TR(0x4bf377);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bf379:{NFSU2_TR(0x4bf379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf3c0;}}
}
B4bf37b:L4bf37b:{c.instructions+=3;NFSU2_TR(0x4bf37b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4bf381:{NFSU2_TR(0x4bf381);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bf383:{NFSU2_TR(0x4bf383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf3c0;}}
}
B4bf385:L4bf385:{c.instructions+=4;NFSU2_TR(0x4bf385);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf388:{NFSU2_TR(0x4bf388);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bf38b:{NFSU2_TR(0x4bf38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf38e:{NFSU2_TR(0x4bf38e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf3b8;}}
}
B4bf390:L4bf390:{c.instructions+=3;NFSU2_TR(0x4bf390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf391:{NFSU2_TR(0x4bf391);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf396:{NFSU2_TR(0x4bf396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf39bull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf39b:L4bf39b:{c.instructions+=5;NFSU2_TR(0x4bf39b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf39e:{NFSU2_TR(0x4bf39e);
u8 U[4];
w4(U+0,u32(0xd87133bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3a3:{NFSU2_TR(0x4bf3a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3a4:{NFSU2_TR(0x4bf3a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3a5:{NFSU2_TR(0x4bf3a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf3aaull));
TAIL_STATIC(0x537a10u,537);
}
B4bf3aa:L4bf3aa:{c.instructions+=3;NFSU2_TR(0x4bf3aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf3ad:{NFSU2_TR(0x4bf3ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3ae:{NFSU2_TR(0x4bf3ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf3b3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bf3b3:L4bf3b3:{c.instructions+=2;NFSU2_TR(0x4bf3b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf3b6:{NFSU2_TR(0x4bf3b6);
{goto L4bf40d;}
}
B4bf3b8:L4bf3b8:{c.instructions+=1;NFSU2_TR(0x4bf3b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf3bdull));
TAIL_STATIC(0x5f41b0u,5f4);
}
B4bf3bd:L4bf3bd:{c.instructions+=2;NFSU2_TR(0x4bf3bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3be:{NFSU2_TR(0x4bf3be);
{goto L4bf3f0;}
}
B4bf3c0:L4bf3c0:{c.instructions+=2;NFSU2_TR(0x4bf3c0);
w4(R+4,u32(0x89cf48ull));
}
B4bf3c5:{NFSU2_TR(0x4bf3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf3caull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4bf3ca:L4bf3ca:{c.instructions+=2;NFSU2_TR(0x4bf3ca);
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
B4bf3cc:{NFSU2_TR(0x4bf3cc);
if(r1(R+518)){{goto L4bf3e2;}}
}
B4bf3ce:L4bf3ce:{c.instructions+=4;NFSU2_TR(0x4bf3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf3d1:{NFSU2_TR(0x4bf3d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3d2:{NFSU2_TR(0x4bf3d2);
w4(R+4,u32(0x89cf48ull));
}
B4bf3d7:{NFSU2_TR(0x4bf3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf3dcull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4bf3dc:L4bf3dc:{c.instructions+=3;NFSU2_TR(0x4bf3dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
}
B4bf3df:{NFSU2_TR(0x4bf3df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3e0:{NFSU2_TR(0x4bf3e0);
{goto L4bf3ed;}
}
B4bf3e2:L4bf3e2:{c.instructions+=3;NFSU2_TR(0x4bf3e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf3e6:{NFSU2_TR(0x4bf3e6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x90cull))));
}
B4bf3ec:{NFSU2_TR(0x4bf3ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3ed:L4bf3ed:{c.instructions+=1;NFSU2_TR(0x4bf3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf3f0:L4bf3f0:{c.instructions+=4;NFSU2_TR(0x4bf3f0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3f5:{NFSU2_TR(0x4bf3f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3f6:{NFSU2_TR(0x4bf3f6);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf3fb:{NFSU2_TR(0x4bf3fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf400ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf400:L4bf400:{c.instructions+=4;NFSU2_TR(0x4bf400);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf403:{NFSU2_TR(0x4bf403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf404:{NFSU2_TR(0x4bf404);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf405:{NFSU2_TR(0x4bf405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf40aull));
TAIL_STATIC(0x537b80u,537);
}
B4bf40a:L4bf40a:{c.instructions+=1;NFSU2_TR(0x4bf40a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf40d:L4bf40d:{c.instructions+=5;NFSU2_TR(0x4bf40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bf410:{NFSU2_TR(0x4bf410);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf413:{NFSU2_TR(0x4bf413);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf414:{NFSU2_TR(0x4bf414);
u8 U[4];
w4(U+0,u32(0x790400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf419:{NFSU2_TR(0x4bf419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf41eull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf41e:L4bf41e:{c.instructions+=4;NFSU2_TR(0x4bf41e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf41f:{NFSU2_TR(0x4bf41f);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf424:{NFSU2_TR(0x4bf424);
__builtin_memmove((R+12),(R+0),4);
}
B4bf426:{NFSU2_TR(0x4bf426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf42bull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf42b:L4bf42b:{c.instructions+=5;NFSU2_TR(0x4bf42b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf42e:{NFSU2_TR(0x4bf42e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf42f:{NFSU2_TR(0x4bf42f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf430:{NFSU2_TR(0x4bf430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf431:{NFSU2_TR(0x4bf431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf436ull));
TAIL_STATIC(0x537a10u,537);
}
B4bf436:L4bf436:{c.instructions+=3;NFSU2_TR(0x4bf436);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf439:{NFSU2_TR(0x4bf439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf43a:{NFSU2_TR(0x4bf43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf43full));
TAIL_STATIC(0x50c900u,50c);
}
B4bf43f:L4bf43f:{c.instructions+=4;NFSU2_TR(0x4bf43f);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4bf444:{NFSU2_TR(0x4bf444);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf447:{NFSU2_TR(0x4bf447);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bf449:{NFSU2_TR(0x4bf449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf454;}}
}
B4bf44b:L4bf44b:{c.instructions+=3;NFSU2_TR(0x4bf44b);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4bf450:{NFSU2_TR(0x4bf450);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bf452:{NFSU2_TR(0x4bf452);
if(r1(R+518)){{goto L4bf487;}}
}
B4bf454:L4bf454:{c.instructions+=9;NFSU2_TR(0x4bf454);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B4bf459:{NFSU2_TR(0x4bf459);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf45d:{NFSU2_TR(0x4bf45d);
u8 U[16];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4bf464:{NFSU2_TR(0x4bf464);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bf467:{NFSU2_TR(0x4bf467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf468:{NFSU2_TR(0x4bf468);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf46d:{NFSU2_TR(0x4bf46d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf46e:{NFSU2_TR(0x4bf46e);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf473:{NFSU2_TR(0x4bf473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf478ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf478:L4bf478:{c.instructions+=4;NFSU2_TR(0x4bf478);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf47b:{NFSU2_TR(0x4bf47b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf47c:{NFSU2_TR(0x4bf47c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf47d:{NFSU2_TR(0x4bf47d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf482ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf482:L4bf482:{c.instructions+=2;NFSU2_TR(0x4bf482);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf485:{NFSU2_TR(0x4bf485);
{goto L4bf494;}
}
B4bf487:L4bf487:{c.instructions+=5;NFSU2_TR(0x4bf487);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf48b:{NFSU2_TR(0x4bf48b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf48c:{NFSU2_TR(0x4bf48c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf48d:{NFSU2_TR(0x4bf48d);
__builtin_memmove((R+4),(R+28),4);
}
B4bf48f:{NFSU2_TR(0x4bf48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf494ull));
TAIL_STATIC(0x4a4020u,4a4);
}
B4bf494:L4bf494:{c.instructions+=11;NFSU2_TR(0x4bf494);
__builtin_memmove((R+0),gp(0x89e7cc),4);
}
B4bf499:{NFSU2_TR(0x4bf499);
__builtin_memmove((R+4),gp(0x89e7c8),4);
}
B4bf49f:{NFSU2_TR(0x4bf49f);
__builtin_memmove((R+12),gp(0x89e7c4),4);
}
B4bf4a5:{NFSU2_TR(0x4bf4a5);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B4bf4ab:{NFSU2_TR(0x4bf4ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4bf4ad:{NFSU2_TR(0x4bf4ad);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B4bf4af:{NFSU2_TR(0x4bf4af);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4bf4b0:{NFSU2_TR(0x4bf4b0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4bf4b2:{NFSU2_TR(0x4bf4b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bf4b5:{NFSU2_TR(0x4bf4b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4bf4b7:{NFSU2_TR(0x4bf4b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bf2c3u);}goto L4bf2c3;}}
}
B4bf4bd:L4bf4bd:{c.instructions+=2;NFSU2_TR(0x4bf4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bf4be:{NFSU2_TR(0x4bf4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bf4bf:L4bf4bf:{c.instructions+=4;NFSU2_TR(0x4bf4bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf4c0:{NFSU2_TR(0x4bf4c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf4c1:{NFSU2_TR(0x4bf4c1);
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
B4bf4c4:{NFSU2_TR(0x4bf4c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf4d0:L4bf4d0:{c.instructions+=9;NFSU2_TR(0x4bf4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B4bf4d3:{NFSU2_TR(0x4bf4d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4d4:{NFSU2_TR(0x4bf4d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4d5:{NFSU2_TR(0x4bf4d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4d6:{NFSU2_TR(0x4bf4d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4d7:{NFSU2_TR(0x4bf4d7);
__builtin_memmove((R+20),(R+4),4);
}
B4bf4d9:{NFSU2_TR(0x4bf4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf4dc:{NFSU2_TR(0x4bf4dc);
u8 U[4];
w4(U+0,u32(0x6950ec05ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4e1:{NFSU2_TR(0x4bf4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf4e6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf4e6:L4bf4e6:{c.instructions+=4;NFSU2_TR(0x4bf4e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf4e9:{NFSU2_TR(0x4bf4e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4ea:{NFSU2_TR(0x4bf4ea);
u8 U[4];
w4(U+0,u32(0x7950ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4ef:{NFSU2_TR(0x4bf4ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf4f4ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf4f4:L4bf4f4:{c.instructions+=4;NFSU2_TR(0x4bf4f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf4f7:{NFSU2_TR(0x4bf4f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4f8:{NFSU2_TR(0x4bf4f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf4f9:{NFSU2_TR(0x4bf4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf4feull));
TAIL_STATIC(0x537b80u,537);
}
B4bf4fe:L4bf4fe:{c.instructions+=5;NFSU2_TR(0x4bf4fe);
w4(R+12,u32(0x1ull));
}
B4bf503:{NFSU2_TR(0x4bf503);
w4(R+4,u32(0xdull));
}
B4bf508:{NFSU2_TR(0x4bf508);
w4(R+24,u32(0x850478ull));
}
B4bf50d:{NFSU2_TR(0x4bf50d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf511:{NFSU2_TR(0x4bf511);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf512:L4bf512:{c.instructions+=1;NFSU2_TR(0x4bf512);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4bf514;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bf512u);}goto L4bf512;}
}
B4bf514:L4bf514:{c.instructions+=3;NFSU2_TR(0x4bf514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf517:{NFSU2_TR(0x4bf517);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf51c:{NFSU2_TR(0x4bf51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf521ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf521:L4bf521:{c.instructions+=3;NFSU2_TR(0x4bf521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf522:{NFSU2_TR(0x4bf522);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf523:{NFSU2_TR(0x4bf523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf528ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf528:L4bf528:{c.instructions+=2;NFSU2_TR(0x4bf528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf529:{NFSU2_TR(0x4bf529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf52eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf52e:L4bf52e:{c.instructions+=9;NFSU2_TR(0x4bf52e);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bf533:{NFSU2_TR(0x4bf533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf536:{NFSU2_TR(0x4bf536);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4bf538:{NFSU2_TR(0x4bf538);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4bf53a:{NFSU2_TR(0x4bf53a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4bf53c:{NFSU2_TR(0x4bf53c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe3abf617ull))));
}
B4bf541:{NFSU2_TR(0x4bf541);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x365dc8e2ull))));
}
B4bf546:{NFSU2_TR(0x4bf546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf547:{NFSU2_TR(0x4bf547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf54cull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf54c:L4bf54c:{c.instructions+=5;NFSU2_TR(0x4bf54c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4bf54f:{NFSU2_TR(0x4bf54f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf550:{NFSU2_TR(0x4bf550);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf551:{NFSU2_TR(0x4bf551);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf556:{NFSU2_TR(0x4bf556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf55bull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf55b:L4bf55b:{c.instructions+=4;NFSU2_TR(0x4bf55b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf55e:{NFSU2_TR(0x4bf55e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf55f:{NFSU2_TR(0x4bf55f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf560:{NFSU2_TR(0x4bf560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf565ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf565:L4bf565:{c.instructions+=4;NFSU2_TR(0x4bf565);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf568:{NFSU2_TR(0x4bf568);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf569:{NFSU2_TR(0x4bf569);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf56e:{NFSU2_TR(0x4bf56e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf573ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf573:L4bf573:{c.instructions+=3;NFSU2_TR(0x4bf573);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf574:{NFSU2_TR(0x4bf574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf575:{NFSU2_TR(0x4bf575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf57aull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf57a:L4bf57a:{c.instructions+=2;NFSU2_TR(0x4bf57a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf57b:{NFSU2_TR(0x4bf57b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf580ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf580:L4bf580:{c.instructions+=8;NFSU2_TR(0x4bf580);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf584:{NFSU2_TR(0x4bf584);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bf587:{NFSU2_TR(0x4bf587);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf589:{NFSU2_TR(0x4bf589);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bf58d:{NFSU2_TR(0x4bf58d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf58e:{NFSU2_TR(0x4bf58e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bf592:{NFSU2_TR(0x4bf592);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf596:{NFSU2_TR(0x4bf596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf59bull));
TAIL_STATIC(0x577240u,577);
}
B4bf59b:L4bf59b:{c.instructions+=7;NFSU2_TR(0x4bf59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf59e:{NFSU2_TR(0x4bf59e);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bf5a2:{NFSU2_TR(0x4bf5a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5a3:{NFSU2_TR(0x4bf5a3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5a8:{NFSU2_TR(0x4bf5a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5a9:{NFSU2_TR(0x4bf5a9);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5ae:{NFSU2_TR(0x4bf5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf5b3ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf5b3:L4bf5b3:{c.instructions+=4;NFSU2_TR(0x4bf5b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf5b6:{NFSU2_TR(0x4bf5b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5b7:{NFSU2_TR(0x4bf5b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5b8:{NFSU2_TR(0x4bf5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf5bdull));
TAIL_STATIC(0x537b80u,537);
}
B4bf5bd:L4bf5bd:{c.instructions+=11;NFSU2_TR(0x4bf5bd);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bf5c2:{NFSU2_TR(0x4bf5c2);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4bf5c4:{NFSU2_TR(0x4bf5c4);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4bf5c6:{NFSU2_TR(0x4bf5c6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4bf5c8:{NFSU2_TR(0x4bf5c8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2d8e3349ull))));
}
B4bf5cd:{NFSU2_TR(0x4bf5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bf5d0:{NFSU2_TR(0x4bf5d0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1c6f2a82ull))));
}
B4bf5d5:{NFSU2_TR(0x4bf5d5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5d7:{NFSU2_TR(0x4bf5d7);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5dc:{NFSU2_TR(0x4bf5dc);
__builtin_memmove((R+24),(R+0),4);
}
B4bf5de:{NFSU2_TR(0x4bf5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf5e3ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf5e3:L4bf5e3:{c.instructions+=3;NFSU2_TR(0x4bf5e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5e4:{NFSU2_TR(0x4bf5e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5e5:{NFSU2_TR(0x4bf5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf5eaull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf5ea:L4bf5ea:{c.instructions+=2;NFSU2_TR(0x4bf5ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5eb:{NFSU2_TR(0x4bf5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf5f0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf5f0:L4bf5f0:{c.instructions+=3;NFSU2_TR(0x4bf5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bf5f3:{NFSU2_TR(0x4bf5f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5f4:{NFSU2_TR(0x4bf5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf5f9ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf5f9:L4bf5f9:{c.instructions+=5;NFSU2_TR(0x4bf5f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4bf5fc:{NFSU2_TR(0x4bf5fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5fd:{NFSU2_TR(0x4bf5fd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf5ff:{NFSU2_TR(0x4bf5ff);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf604:{NFSU2_TR(0x4bf604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf609ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf609:L4bf609:{c.instructions+=4;NFSU2_TR(0x4bf609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf60c:{NFSU2_TR(0x4bf60c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf60d:{NFSU2_TR(0x4bf60d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf60e:{NFSU2_TR(0x4bf60e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf613ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf613:L4bf613:{c.instructions+=4;NFSU2_TR(0x4bf613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf616:{NFSU2_TR(0x4bf616);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf618:{NFSU2_TR(0x4bf618);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf61d:{NFSU2_TR(0x4bf61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf622ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf622:L4bf622:{c.instructions+=3;NFSU2_TR(0x4bf622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf623:{NFSU2_TR(0x4bf623);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf624:{NFSU2_TR(0x4bf624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf629ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf629:L4bf629:{c.instructions+=2;NFSU2_TR(0x4bf629);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf62a:{NFSU2_TR(0x4bf62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf62full));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf62f:L4bf62f:{c.instructions+=8;NFSU2_TR(0x4bf62f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf633:{NFSU2_TR(0x4bf633);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bf636:{NFSU2_TR(0x4bf636);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf638:{NFSU2_TR(0x4bf638);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bf63c:{NFSU2_TR(0x4bf63c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf640:{NFSU2_TR(0x4bf640);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf641:{NFSU2_TR(0x4bf641);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bf645:{NFSU2_TR(0x4bf645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf64aull));
TAIL_STATIC(0x577240u,577);
}
B4bf64a:L4bf64a:{c.instructions+=7;NFSU2_TR(0x4bf64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf64d:{NFSU2_TR(0x4bf64d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bf651:{NFSU2_TR(0x4bf651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf652:{NFSU2_TR(0x4bf652);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf657:{NFSU2_TR(0x4bf657);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf659:{NFSU2_TR(0x4bf659);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf65e:{NFSU2_TR(0x4bf65e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf663ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf663:L4bf663:{c.instructions+=4;NFSU2_TR(0x4bf663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf666:{NFSU2_TR(0x4bf666);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf667:{NFSU2_TR(0x4bf667);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf668:{NFSU2_TR(0x4bf668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf66dull));
TAIL_STATIC(0x537b80u,537);
}
B4bf66d:L4bf66d:{c.instructions+=4;NFSU2_TR(0x4bf66d);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bf672:{NFSU2_TR(0x4bf672);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4bf675:{NFSU2_TR(0x4bf675);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bf677:{NFSU2_TR(0x4bf677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf688;}}
}
B4bf679:L4bf679:{c.instructions+=3;NFSU2_TR(0x4bf679);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xe74b7e13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf681:{NFSU2_TR(0x4bf681);
w4(R+28,u32(0xaa461724ull));
}
B4bf686:{NFSU2_TR(0x4bf686);
{goto L4bf695;}
}
B4bf688:L4bf688:{c.instructions+=2;NFSU2_TR(0x4bf688);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xe74b86f8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf690:{NFSU2_TR(0x4bf690);
w4(R+28,u32(0xbcf1255full));
}
B4bf695:L4bf695:{c.instructions+=4;NFSU2_TR(0x4bf695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf698:{NFSU2_TR(0x4bf698);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf69a:{NFSU2_TR(0x4bf69a);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf69f:{NFSU2_TR(0x4bf69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6a4ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf6a4:L4bf6a4:{c.instructions+=3;NFSU2_TR(0x4bf6a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6a5:{NFSU2_TR(0x4bf6a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6a6:{NFSU2_TR(0x4bf6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6abull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf6ab:L4bf6ab:{c.instructions+=2;NFSU2_TR(0x4bf6ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6ac:{NFSU2_TR(0x4bf6ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6b1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf6b1:L4bf6b1:{c.instructions+=3;NFSU2_TR(0x4bf6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf6b4:{NFSU2_TR(0x4bf6b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6b5:{NFSU2_TR(0x4bf6b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6baull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf6ba:L4bf6ba:{c.instructions+=5;NFSU2_TR(0x4bf6ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bf6bd:{NFSU2_TR(0x4bf6bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6be:{NFSU2_TR(0x4bf6be);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6c0:{NFSU2_TR(0x4bf6c0);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6c5:{NFSU2_TR(0x4bf6c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6caull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf6ca:L4bf6ca:{c.instructions+=4;NFSU2_TR(0x4bf6ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf6cd:{NFSU2_TR(0x4bf6cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6ce:{NFSU2_TR(0x4bf6ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6cf:{NFSU2_TR(0x4bf6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6d4ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf6d4:L4bf6d4:{c.instructions+=4;NFSU2_TR(0x4bf6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf6d7:{NFSU2_TR(0x4bf6d7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6d9:{NFSU2_TR(0x4bf6d9);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6de:{NFSU2_TR(0x4bf6de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6e3ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf6e3:L4bf6e3:{c.instructions+=3;NFSU2_TR(0x4bf6e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6e4:{NFSU2_TR(0x4bf6e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6e5:{NFSU2_TR(0x4bf6e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6eaull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf6ea:L4bf6ea:{c.instructions+=2;NFSU2_TR(0x4bf6ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf6eb:{NFSU2_TR(0x4bf6eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf6f0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf6f0:L4bf6f0:{c.instructions+=5;NFSU2_TR(0x4bf6f0);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf6f4:{NFSU2_TR(0x4bf6f4);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bf6f9:{NFSU2_TR(0x4bf6f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bf6fc:{NFSU2_TR(0x4bf6fc);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bf6fe:{NFSU2_TR(0x4bf6fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf708;}}
}
B4bf700:L4bf700:{c.instructions+=2;NFSU2_TR(0x4bf700);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bf706:{NFSU2_TR(0x4bf706);
{goto L4bf70e;}
}
B4bf708:L4bf708:{c.instructions+=1;NFSU2_TR(0x4bf708);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bf70e:L4bf70e:{c.instructions+=5;NFSU2_TR(0x4bf70e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf712:{NFSU2_TR(0x4bf712);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf715:{NFSU2_TR(0x4bf715);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bf719:{NFSU2_TR(0x4bf719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf71a:{NFSU2_TR(0x4bf71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf71full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf71f:L4bf71f:{c.instructions+=9;NFSU2_TR(0x4bf71f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf723:{NFSU2_TR(0x4bf723);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf726:{NFSU2_TR(0x4bf726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf727:{NFSU2_TR(0x4bf727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bf72a:{NFSU2_TR(0x4bf72a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4bf72d:{NFSU2_TR(0x4bf72d);
u8 U[4];
w4(U+0,u32(0x7950c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf732:{NFSU2_TR(0x4bf732);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf734:{NFSU2_TR(0x4bf734);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf739:{NFSU2_TR(0x4bf739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf73eull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf73e:L4bf73e:{c.instructions+=4;NFSU2_TR(0x4bf73e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf741:{NFSU2_TR(0x4bf741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf742:{NFSU2_TR(0x4bf742);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf743:{NFSU2_TR(0x4bf743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf748ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf748:L4bf748:{c.instructions+=4;NFSU2_TR(0x4bf748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf74b:{NFSU2_TR(0x4bf74b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf74d:{NFSU2_TR(0x4bf74d);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf752:{NFSU2_TR(0x4bf752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf757ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf757:L4bf757:{c.instructions+=3;NFSU2_TR(0x4bf757);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf758:{NFSU2_TR(0x4bf758);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf759:{NFSU2_TR(0x4bf759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf75eull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf75e:L4bf75e:{c.instructions+=2;NFSU2_TR(0x4bf75e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf75f:{NFSU2_TR(0x4bf75f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf764ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf764:L4bf764:{c.instructions+=3;NFSU2_TR(0x4bf764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf767:{NFSU2_TR(0x4bf767);
u8 U[4];
w4(U+0,u32(0xc431600cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf76c:{NFSU2_TR(0x4bf76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf771ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf771:L4bf771:{c.instructions+=5;NFSU2_TR(0x4bf771);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4bf774:{NFSU2_TR(0x4bf774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf775:{NFSU2_TR(0x4bf775);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf777:{NFSU2_TR(0x4bf777);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf77c:{NFSU2_TR(0x4bf77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf781ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf781:L4bf781:{c.instructions+=4;NFSU2_TR(0x4bf781);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf784:{NFSU2_TR(0x4bf784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf785:{NFSU2_TR(0x4bf785);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf786:{NFSU2_TR(0x4bf786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf78bull));
TAIL_STATIC(0x537b80u,537);
}
B4bf78b:L4bf78b:{c.instructions+=4;NFSU2_TR(0x4bf78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf78e:{NFSU2_TR(0x4bf78e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf790:{NFSU2_TR(0x4bf790);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf795:{NFSU2_TR(0x4bf795);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf79aull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf79a:L4bf79a:{c.instructions+=3;NFSU2_TR(0x4bf79a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf79b:{NFSU2_TR(0x4bf79b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf79c:{NFSU2_TR(0x4bf79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf7a1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf7a1:L4bf7a1:{c.instructions+=2;NFSU2_TR(0x4bf7a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf7a2:{NFSU2_TR(0x4bf7a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf7a7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf7a7:L4bf7a7:{c.instructions+=6;NFSU2_TR(0x4bf7a7);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bf7ac:{NFSU2_TR(0x4bf7ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf7b3:{NFSU2_TR(0x4bf7b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bf7b6:{NFSU2_TR(0x4bf7b6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bf7b8:{NFSU2_TR(0x4bf7b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf7bc:{NFSU2_TR(0x4bf7bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf7c5;}}
}
B4bf7be:L4bf7be:{c.instructions+=2;NFSU2_TR(0x4bf7be);
w4(R+0,u32(0xf0aeb103ull));
}
B4bf7c3:{NFSU2_TR(0x4bf7c3);
{goto L4bf7de;}
}
B4bf7c5:L4bf7c5:{c.instructions+=5;NFSU2_TR(0x4bf7c5);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf7c9:{NFSU2_TR(0x4bf7c9);
w4(R+0,u32(0xd0b86077ull));
}
B4bf7ce:{NFSU2_TR(0x4bf7ce);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bf7d4:{NFSU2_TR(0x4bf7d4);
{u32 ea_=u32(u32(7950520u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B4bf7da:{NFSU2_TR(0x4bf7da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bf7de:L4bf7de:{c.instructions+=3;NFSU2_TR(0x4bf7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf7e1:{NFSU2_TR(0x4bf7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf7e2:{NFSU2_TR(0x4bf7e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf7e7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf7e7:L4bf7e7:{c.instructions+=9;NFSU2_TR(0x4bf7e7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf7eb:{NFSU2_TR(0x4bf7eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf7ee:{NFSU2_TR(0x4bf7ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf7ef:{NFSU2_TR(0x4bf7ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bf7f2:{NFSU2_TR(0x4bf7f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4bf7f5:{NFSU2_TR(0x4bf7f5);
u8 U[4];
w4(U+0,u32(0x7950c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf7fa:{NFSU2_TR(0x4bf7fa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf7fc:{NFSU2_TR(0x4bf7fc);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf801:{NFSU2_TR(0x4bf801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf806ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf806:L4bf806:{c.instructions+=4;NFSU2_TR(0x4bf806);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf809:{NFSU2_TR(0x4bf809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf80a:{NFSU2_TR(0x4bf80a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf80b:{NFSU2_TR(0x4bf80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf810ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf810:L4bf810:{c.instructions+=4;NFSU2_TR(0x4bf810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf813:{NFSU2_TR(0x4bf813);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf815:{NFSU2_TR(0x4bf815);
u8 U[4];
w4(U+0,u32(0x79051cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf81a:{NFSU2_TR(0x4bf81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf81full));
TAIL_STATIC(0x50b990u,50b);
}
B4bf81f:L4bf81f:{c.instructions+=3;NFSU2_TR(0x4bf81f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf820:{NFSU2_TR(0x4bf820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf821:{NFSU2_TR(0x4bf821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf826ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf826:L4bf826:{c.instructions+=2;NFSU2_TR(0x4bf826);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf827:{NFSU2_TR(0x4bf827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf82cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf82c:L4bf82c:{c.instructions+=3;NFSU2_TR(0x4bf82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf82f:{NFSU2_TR(0x4bf82f);
u8 U[4];
w4(U+0,u32(0x5d304669ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf834:{NFSU2_TR(0x4bf834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf839ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf839:L4bf839:{c.instructions+=5;NFSU2_TR(0x4bf839);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4bf83c:{NFSU2_TR(0x4bf83c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf83d:{NFSU2_TR(0x4bf83d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf83f:{NFSU2_TR(0x4bf83f);
u8 U[4];
w4(U+0,u32(0x79050cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf844:{NFSU2_TR(0x4bf844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf849ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf849:L4bf849:{c.instructions+=4;NFSU2_TR(0x4bf849);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf84c:{NFSU2_TR(0x4bf84c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf84d:{NFSU2_TR(0x4bf84d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf84e:{NFSU2_TR(0x4bf84e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf853ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf853:L4bf853:{c.instructions+=4;NFSU2_TR(0x4bf853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bf856:{NFSU2_TR(0x4bf856);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf858:{NFSU2_TR(0x4bf858);
u8 U[4];
w4(U+0,u32(0x790500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf85d:{NFSU2_TR(0x4bf85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf862ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf862:L4bf862:{c.instructions+=3;NFSU2_TR(0x4bf862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf863:{NFSU2_TR(0x4bf863);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf864:{NFSU2_TR(0x4bf864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf869ull));
TAIL_STATIC(0x5379c0u,537);
}
B4bf869:L4bf869:{c.instructions+=2;NFSU2_TR(0x4bf869);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf86a:{NFSU2_TR(0x4bf86a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf86full));
TAIL_STATIC(0x50ca00u,50c);
}
B4bf86f:L4bf86f:{c.instructions+=4;NFSU2_TR(0x4bf86f);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bf874:{NFSU2_TR(0x4bf874);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4bf877:{NFSU2_TR(0x4bf877);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4bf879:{NFSU2_TR(0x4bf879);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bf88c;}}
}
B4bf87b:L4bf87b:{c.instructions+=4;NFSU2_TR(0x4bf87b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf87f:{NFSU2_TR(0x4bf87f);
w4(R+0,u32(0xe74b7e13ull));
}
B4bf884:{NFSU2_TR(0x4bf884);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bf88a:{NFSU2_TR(0x4bf88a);
{goto L4bf89b;}
}
B4bf88c:L4bf88c:{c.instructions+=3;NFSU2_TR(0x4bf88c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf890:{NFSU2_TR(0x4bf890);
w4(R+0,u32(0xe74b86f8ull));
}
B4bf895:{NFSU2_TR(0x4bf895);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bf89b:L4bf89b:{c.instructions+=4;NFSU2_TR(0x4bf89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4bf89e:{NFSU2_TR(0x4bf89e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bf8a2:{NFSU2_TR(0x4bf8a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8a3:{NFSU2_TR(0x4bf8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf8a8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bf8a8:L4bf8a8:{c.instructions+=9;NFSU2_TR(0x4bf8a8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bf8ac:{NFSU2_TR(0x4bf8ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bf8af:{NFSU2_TR(0x4bf8af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8b0:{NFSU2_TR(0x4bf8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bf8b3:{NFSU2_TR(0x4bf8b3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4bf8b6:{NFSU2_TR(0x4bf8b6);
u8 U[4];
w4(U+0,u32(0x7950c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8bb:{NFSU2_TR(0x4bf8bb);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8bd:{NFSU2_TR(0x4bf8bd);
u8 U[4];
w4(U+0,u32(0x7904ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8c2:{NFSU2_TR(0x4bf8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf8c7ull));
TAIL_STATIC(0x50b990u,50b);
}
B4bf8c7:L4bf8c7:{c.instructions+=4;NFSU2_TR(0x4bf8c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bf8ca:{NFSU2_TR(0x4bf8ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8cb:{NFSU2_TR(0x4bf8cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8cc:{NFSU2_TR(0x4bf8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf8d1ull));
TAIL_STATIC(0x537b80u,537);
}
B4bf8d1:L4bf8d1:{c.instructions+=7;NFSU2_TR(0x4bf8d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4bf8d4:{NFSU2_TR(0x4bf8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf8d5:{NFSU2_TR(0x4bf8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf8d6:{NFSU2_TR(0x4bf8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4bf8d7:{NFSU2_TR(0x4bf8d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bf8d8:{NFSU2_TR(0x4bf8d8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bf8db:{NFSU2_TR(0x4bf8db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf8e0:L4bf8e0:{c.instructions+=13;NFSU2_TR(0x4bf8e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8e2:{NFSU2_TR(0x4bf8e2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8e7:{NFSU2_TR(0x4bf8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf8ed:{NFSU2_TR(0x4bf8ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8ee:{NFSU2_TR(0x4bf8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf8f5:{NFSU2_TR(0x4bf8f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8f6:{NFSU2_TR(0x4bf8f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8f7:{NFSU2_TR(0x4bf8f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8f8:{NFSU2_TR(0x4bf8f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bf8fc:{NFSU2_TR(0x4bf8fc);
__builtin_memmove((R+24),(R+4),4);
}
B4bf8fe:{NFSU2_TR(0x4bf8fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf8ff:{NFSU2_TR(0x4bf8ff);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf903:{NFSU2_TR(0x4bf903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf908ull));
TAIL_STATIC(0x551de0u,551);
}
B4bf908:L4bf908:{c.instructions+=5;NFSU2_TR(0x4bf908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf90b:{NFSU2_TR(0x4bf90b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf90c:{NFSU2_TR(0x4bf90c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bf914:{NFSU2_TR(0x4bf914);
u8 U[4];
w4(U+0,u32(0x7950d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4bf91a:{NFSU2_TR(0x4bf91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf91full));
TAIL_STATIC(0x4a3d50u,4a3);
}
B4bf91f:L4bf91f:{c.instructions+=4;NFSU2_TR(0x4bf91f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf922:{NFSU2_TR(0x4bf922);
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
B4bf925:{NFSU2_TR(0x4bf925);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf927:{NFSU2_TR(0x4bf927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf92cull));
TAIL_STATIC(0x504820u,504);
}
B4bf92c:L4bf92c:{c.instructions+=2;NFSU2_TR(0x4bf92c);
__builtin_memmove((R+4),(R+24),4);
}
B4bf92e:{NFSU2_TR(0x4bf92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf933ull));
TAIL_STATIC(0x4a4240u,4a4);
}
B4bf933:L4bf933:{c.instructions+=7;NFSU2_TR(0x4bf933);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf937:{NFSU2_TR(0x4bf937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bf938:{NFSU2_TR(0x4bf938);
__builtin_memmove((R+0),(R+24),4);
}
B4bf93a:{NFSU2_TR(0x4bf93a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf93b:{NFSU2_TR(0x4bf93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf942:{NFSU2_TR(0x4bf942);
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
B4bf945:{NFSU2_TR(0x4bf945);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf950:L4bf950:{c.instructions+=3;NFSU2_TR(0x4bf950);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf951:{NFSU2_TR(0x4bf951);
__builtin_memmove((R+24),(R+4),4);
}
B4bf953:{NFSU2_TR(0x4bf953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf958ull));
{goto L4bf970;}
}
B4bf958:L4bf958:{c.instructions+=2;NFSU2_TR(0x4bf958);
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
B4bf95d:{NFSU2_TR(0x4bf95d);
if(r1(R+518)){{goto L4bf968;}}
}
B4bf95f:L4bf95f:{c.instructions+=2;NFSU2_TR(0x4bf95f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf960:{NFSU2_TR(0x4bf960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf965ull));
TAIL_STATIC(0x575630u,575);
}
B4bf965:L4bf965:{c.instructions+=1;NFSU2_TR(0x4bf965);
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
B4bf968:L4bf968:{c.instructions+=3;NFSU2_TR(0x4bf968);
__builtin_memmove((R+0),(R+24),4);
}
B4bf96a:{NFSU2_TR(0x4bf96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf96b:{NFSU2_TR(0x4bf96b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf970:L4bf970:{c.instructions+=2;NFSU2_TR(0x4bf970);
u8 U[4];
w4(U+0,u32(0x7950d8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4bf976:{NFSU2_TR(0x4bf976);
TAIL_STATIC(0x510d40u,510);
}
B4bf980:L4bf980:{c.instructions+=2;NFSU2_TR(0x4bf980);
w4(R+0,u32(0x5ull));
}
B4bf985:{NFSU2_TR(0x4bf985);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf990:L4bf990:{c.instructions+=8;NFSU2_TR(0x4bf990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4bf993:{NFSU2_TR(0x4bf993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf994:{NFSU2_TR(0x4bf994);
__builtin_memmove((R+24),(R+4),4);
}
B4bf996:{NFSU2_TR(0x4bf996);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf998:{NFSU2_TR(0x4bf998);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bf99c:{NFSU2_TR(0x4bf99c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf99d:{NFSU2_TR(0x4bf99d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bf9a0:{NFSU2_TR(0x4bf9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf9a5ull));
TAIL_STATIC(0x577240u,577);
}
B4bf9a5:L4bf9a5:{c.instructions+=8;NFSU2_TR(0x4bf9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf9a8:{NFSU2_TR(0x4bf9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf9ab:{NFSU2_TR(0x4bf9ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bf9af:{NFSU2_TR(0x4bf9af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9b0:{NFSU2_TR(0x4bf9b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9b1:{NFSU2_TR(0x4bf9b1);
u8 U[4];
w4(U+0,u32(0x795128ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9b6:{NFSU2_TR(0x4bf9b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9b7:{NFSU2_TR(0x4bf9b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf9bcull));
TAIL_STATIC(0x537be0u,537);
}
B4bf9bc:L4bf9bc:{c.instructions+=6;NFSU2_TR(0x4bf9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf9bf:{NFSU2_TR(0x4bf9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf9c2:{NFSU2_TR(0x4bf9c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9c3:{NFSU2_TR(0x4bf9c3);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9c8:{NFSU2_TR(0x4bf9c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9c9:{NFSU2_TR(0x4bf9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf9ceull));
TAIL_STATIC(0x537be0u,537);
}
B4bf9ce:L4bf9ce:{c.instructions+=4;NFSU2_TR(0x4bf9ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4bf9d1:{NFSU2_TR(0x4bf9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bf9d2:{NFSU2_TR(0x4bf9d2);
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
B4bf9d5:{NFSU2_TR(0x4bf9d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bf9e0:L4bf9e0:{c.instructions+=10;NFSU2_TR(0x4bf9e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4bf9e3:{NFSU2_TR(0x4bf9e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9e4:{NFSU2_TR(0x4bf9e4);
__builtin_memmove((R+24),(R+4),4);
}
B4bf9e6:{NFSU2_TR(0x4bf9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bf9e9:{NFSU2_TR(0x4bf9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bf9ec:{NFSU2_TR(0x4bf9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bf9ef:{NFSU2_TR(0x4bf9ef);
u8 U[4];
w4(U+0,u32(0xf9d7f4c2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9f4:{NFSU2_TR(0x4bf9f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bf9f5:{NFSU2_TR(0x4bf9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bf9f9:{NFSU2_TR(0x4bf9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bf9feull));
TAIL_STATIC(0x50c900u,50c);
}
B4bf9fe:L4bf9fe:{c.instructions+=6;NFSU2_TR(0x4bf9fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bfa01:{NFSU2_TR(0x4bfa01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa03:{NFSU2_TR(0x4bfa03);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfa07:{NFSU2_TR(0x4bfa07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa08:{NFSU2_TR(0x4bfa08);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfa0c:{NFSU2_TR(0x4bfa0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfa11ull));
TAIL_STATIC(0x577240u,577);
}
B4bfa11:L4bfa11:{c.instructions+=6;NFSU2_TR(0x4bfa11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfa14:{NFSU2_TR(0x4bfa14);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfa18:{NFSU2_TR(0x4bfa18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa19:{NFSU2_TR(0x4bfa19);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa1e:{NFSU2_TR(0x4bfa1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa1f:{NFSU2_TR(0x4bfa1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfa24ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfa24:L4bfa24:{c.instructions+=4;NFSU2_TR(0x4bfa24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bfa27:{NFSU2_TR(0x4bfa27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfa28:{NFSU2_TR(0x4bfa28);
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
B4bfa2b:{NFSU2_TR(0x4bfa2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfa30:L4bfa30:{c.instructions+=9;NFSU2_TR(0x4bfa30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa31:{NFSU2_TR(0x4bfa31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa32:{NFSU2_TR(0x4bfa32);
__builtin_memmove((R+24),(R+4),4);
}
B4bfa34:{NFSU2_TR(0x4bfa34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfa37:{NFSU2_TR(0x4bfa37);
{u32 ea_=u32(r4(R+0)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfa3d:{NFSU2_TR(0x4bfa3d);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bfa42:{NFSU2_TR(0x4bfa42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bfa44:{NFSU2_TR(0x4bfa44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa45:{NFSU2_TR(0x4bfa45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bfa54;}}
}
B4bfa47:L4bfa47:{c.instructions+=3;NFSU2_TR(0x4bfa47);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bfa4d:{NFSU2_TR(0x4bfa4d);
w4(R+28,u32(0xe74b7e13ull));
}
B4bfa52:{NFSU2_TR(0x4bfa52);
{goto L4bfa5f;}
}
B4bfa54:L4bfa54:{c.instructions+=2;NFSU2_TR(0x4bfa54);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bfa5a:{NFSU2_TR(0x4bfa5a);
w4(R+28,u32(0xe74b86f8ull));
}
B4bfa5f:L4bfa5f:{c.instructions+=5;NFSU2_TR(0x4bfa5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfa62:{NFSU2_TR(0x4bfa62);
u8 U[4];
w4(U+0,u32(0x5d304669ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa67:{NFSU2_TR(0x4bfa67);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bfa6b:{NFSU2_TR(0x4bfa6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa6c:{NFSU2_TR(0x4bfa6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfa71ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfa71:L4bfa71:{c.instructions+=3;NFSU2_TR(0x4bfa71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bfa74:{NFSU2_TR(0x4bfa74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa75:{NFSU2_TR(0x4bfa75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfa7aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bfa7a:L4bfa7a:{c.instructions+=8;NFSU2_TR(0x4bfa7a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfa7e:{NFSU2_TR(0x4bfa7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bfa81:{NFSU2_TR(0x4bfa81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa82:{NFSU2_TR(0x4bfa82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bfa85:{NFSU2_TR(0x4bfa85);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4bfa88:{NFSU2_TR(0x4bfa88);
u8 U[4];
w4(U+0,u32(0x7951f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa8d:{NFSU2_TR(0x4bfa8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfa8e:{NFSU2_TR(0x4bfa8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfa93ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfa93:L4bfa93:{c.instructions+=5;NFSU2_TR(0x4bfa93);
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
B4bfa96:{NFSU2_TR(0x4bfa96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfa97:{NFSU2_TR(0x4bfa97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfa98:{NFSU2_TR(0x4bfa98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfa99:{NFSU2_TR(0x4bfa99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfaa0:L4bfaa0:{c.instructions+=9;NFSU2_TR(0x4bfaa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfaa1:{NFSU2_TR(0x4bfaa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfaa2:{NFSU2_TR(0x4bfaa2);
__builtin_memmove((R+24),(R+4),4);
}
B4bfaa4:{NFSU2_TR(0x4bfaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfaa7:{NFSU2_TR(0x4bfaa7);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfaad:{NFSU2_TR(0x4bfaad);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4bfab2:{NFSU2_TR(0x4bfab2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bfab4:{NFSU2_TR(0x4bfab4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfab5:{NFSU2_TR(0x4bfab5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bfac4;}}
}
B4bfab7:L4bfab7:{c.instructions+=3;NFSU2_TR(0x4bfab7);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bfabd:{NFSU2_TR(0x4bfabd);
w4(R+28,u32(0xe74b7e13ull));
}
B4bfac2:{NFSU2_TR(0x4bfac2);
{goto L4bfacf;}
}
B4bfac4:L4bfac4:{c.instructions+=2;NFSU2_TR(0x4bfac4);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bfaca:{NFSU2_TR(0x4bfaca);
w4(R+28,u32(0xe74b86f8ull));
}
B4bfacf:L4bfacf:{c.instructions+=5;NFSU2_TR(0x4bfacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfad2:{NFSU2_TR(0x4bfad2);
u8 U[4];
w4(U+0,u32(0x5f38e63eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfad7:{NFSU2_TR(0x4bfad7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bfadb:{NFSU2_TR(0x4bfadb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfadc:{NFSU2_TR(0x4bfadc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfae1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfae1:L4bfae1:{c.instructions+=3;NFSU2_TR(0x4bfae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bfae4:{NFSU2_TR(0x4bfae4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfae5:{NFSU2_TR(0x4bfae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfaeaull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4bfaea:L4bfaea:{c.instructions+=8;NFSU2_TR(0x4bfaea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfaee:{NFSU2_TR(0x4bfaee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bfaf1:{NFSU2_TR(0x4bfaf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfaf2:{NFSU2_TR(0x4bfaf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4bfaf5:{NFSU2_TR(0x4bfaf5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4bfaf8:{NFSU2_TR(0x4bfaf8);
u8 U[4];
w4(U+0,u32(0x7951f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfafd:{NFSU2_TR(0x4bfafd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfafe:{NFSU2_TR(0x4bfafe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfb03ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfb03:L4bfb03:{c.instructions+=5;NFSU2_TR(0x4bfb03);
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
B4bfb06:{NFSU2_TR(0x4bfb06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfb07:{NFSU2_TR(0x4bfb07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfb08:{NFSU2_TR(0x4bfb08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfb09:{NFSU2_TR(0x4bfb09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfb10:L4bfb10:{c.instructions+=11;NFSU2_TR(0x4bfb10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb11:{NFSU2_TR(0x4bfb11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb12:{NFSU2_TR(0x4bfb12);
__builtin_memmove((R+24),(R+4),4);
}
B4bfb14:{NFSU2_TR(0x4bfb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfb17:{NFSU2_TR(0x4bfb17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bfb1d:{NFSU2_TR(0x4bfb1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb1e:{NFSU2_TR(0x4bfb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bfb24:{NFSU2_TR(0x4bfb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfb27:{NFSU2_TR(0x4bfb27);
u8 U[4];
w4(U+0,u32(0x680ac597ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb2c:{NFSU2_TR(0x4bfb2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb2d:{NFSU2_TR(0x4bfb2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfb32ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfb32:L4bfb32:{c.instructions+=6;NFSU2_TR(0x4bfb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfb35:{NFSU2_TR(0x4bfb35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb36:{NFSU2_TR(0x4bfb36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb37:{NFSU2_TR(0x4bfb37);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb3c:{NFSU2_TR(0x4bfb3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb3d:{NFSU2_TR(0x4bfb3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfb42ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfb42:L4bfb42:{c.instructions+=5;NFSU2_TR(0x4bfb42);
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
B4bfb45:{NFSU2_TR(0x4bfb45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfb46:{NFSU2_TR(0x4bfb46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfb47:{NFSU2_TR(0x4bfb47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bfb48:{NFSU2_TR(0x4bfb48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfb50:L4bfb50:{c.instructions+=14;NFSU2_TR(0x4bfb50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfb54:{NFSU2_TR(0x4bfb54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfb58:{NFSU2_TR(0x4bfb58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb59:{NFSU2_TR(0x4bfb59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb5a:{NFSU2_TR(0x4bfb5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfb5e:{NFSU2_TR(0x4bfb5e);
__builtin_memmove((R+24),(R+4),4);
}
B4bfb60:{NFSU2_TR(0x4bfb60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfb64:{NFSU2_TR(0x4bfb64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb65:{NFSU2_TR(0x4bfb65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfb69:{NFSU2_TR(0x4bfb69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb6a:{NFSU2_TR(0x4bfb6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb6b:{NFSU2_TR(0x4bfb6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb6c:{NFSU2_TR(0x4bfb6c);
__builtin_memmove((R+4),(R+24),4);
}
B4bfb6e:{NFSU2_TR(0x4bfb6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfb73ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4bfb73:L4bfb73:{c.instructions+=6;NFSU2_TR(0x4bfb73);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfb77:{NFSU2_TR(0x4bfb77);
u8 U[4];
w4(U+0,u32(0x795280ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4bfb7d:{NFSU2_TR(0x4bfb7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfb80:{NFSU2_TR(0x4bfb80);
__builtin_memmove((R+0),(R+24),4);
}
B4bfb82:{NFSU2_TR(0x4bfb82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfb83:{NFSU2_TR(0x4bfb83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfb90:L4bfb90:{c.instructions+=10;NFSU2_TR(0x4bfb90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4bfb93:{NFSU2_TR(0x4bfb93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfb94:{NFSU2_TR(0x4bfb94);
__builtin_memmove((R+24),(R+4),4);
}
B4bfb96:{NFSU2_TR(0x4bfb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfb99:{NFSU2_TR(0x4bfb99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfb9c:{NFSU2_TR(0x4bfb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfb9f:{NFSU2_TR(0x4bfb9f);
u8 U[4];
w4(U+0,u32(0xaf6943cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfba4:{NFSU2_TR(0x4bfba4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfba5:{NFSU2_TR(0x4bfba5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfba9:{NFSU2_TR(0x4bfba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfbaeull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfbae:L4bfbae:{c.instructions+=6;NFSU2_TR(0x4bfbae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bfbb1:{NFSU2_TR(0x4bfbb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbb3:{NFSU2_TR(0x4bfbb3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfbb7:{NFSU2_TR(0x4bfbb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbb8:{NFSU2_TR(0x4bfbb8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfbbc:{NFSU2_TR(0x4bfbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfbc1ull));
TAIL_STATIC(0x577240u,577);
}
B4bfbc1:L4bfbc1:{c.instructions+=6;NFSU2_TR(0x4bfbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfbc4:{NFSU2_TR(0x4bfbc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfbc8:{NFSU2_TR(0x4bfbc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbc9:{NFSU2_TR(0x4bfbc9);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbce:{NFSU2_TR(0x4bfbce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbcf:{NFSU2_TR(0x4bfbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfbd4ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfbd4:L4bfbd4:{c.instructions+=4;NFSU2_TR(0x4bfbd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bfbd7:{NFSU2_TR(0x4bfbd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfbd8:{NFSU2_TR(0x4bfbd8);
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
B4bfbdb:{NFSU2_TR(0x4bfbdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfbe0:L4bfbe0:{c.instructions+=14;NFSU2_TR(0x4bfbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfbe4:{NFSU2_TR(0x4bfbe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfbe8:{NFSU2_TR(0x4bfbe8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbe9:{NFSU2_TR(0x4bfbe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbea:{NFSU2_TR(0x4bfbea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfbee:{NFSU2_TR(0x4bfbee);
__builtin_memmove((R+24),(R+4),4);
}
B4bfbf0:{NFSU2_TR(0x4bfbf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfbf4:{NFSU2_TR(0x4bfbf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbf5:{NFSU2_TR(0x4bfbf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfbf9:{NFSU2_TR(0x4bfbf9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbfa:{NFSU2_TR(0x4bfbfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbfb:{NFSU2_TR(0x4bfbfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfbfc:{NFSU2_TR(0x4bfbfc);
__builtin_memmove((R+4),(R+24),4);
}
B4bfbfe:{NFSU2_TR(0x4bfbfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfc03ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4bfc03:L4bfc03:{c.instructions+=6;NFSU2_TR(0x4bfc03);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfc07:{NFSU2_TR(0x4bfc07);
u8 U[4];
w4(U+0,u32(0x7952c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4bfc0d:{NFSU2_TR(0x4bfc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfc10:{NFSU2_TR(0x4bfc10);
__builtin_memmove((R+0),(R+24),4);
}
B4bfc12:{NFSU2_TR(0x4bfc12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfc13:{NFSU2_TR(0x4bfc13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfc20:L4bfc20:{c.instructions+=11;NFSU2_TR(0x4bfc20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc21:{NFSU2_TR(0x4bfc21);
__builtin_memmove((R+12),gp(0x89e7bc),4);
}
B4bfc27:{NFSU2_TR(0x4bfc27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc28:{NFSU2_TR(0x4bfc28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc29:{NFSU2_TR(0x4bfc29);
__builtin_memmove((R+24),(R+4),4);
}
B4bfc2b:{NFSU2_TR(0x4bfc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfc2e:{NFSU2_TR(0x4bfc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfc31:{NFSU2_TR(0x4bfc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bfc37:{NFSU2_TR(0x4bfc37);
u8 U[4];
w4(U+0,u32(0xadbfd917ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc3c:{NFSU2_TR(0x4bfc3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc3d:{NFSU2_TR(0x4bfc3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfc42ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfc42:L4bfc42:{c.instructions+=6;NFSU2_TR(0x4bfc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfc45:{NFSU2_TR(0x4bfc45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc46:{NFSU2_TR(0x4bfc46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc47:{NFSU2_TR(0x4bfc47);
u8 U[4];
w4(U+0,u32(0x795300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc4c:{NFSU2_TR(0x4bfc4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc4d:{NFSU2_TR(0x4bfc4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfc52ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfc52:L4bfc52:{c.instructions+=5;NFSU2_TR(0x4bfc52);
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
B4bfc55:{NFSU2_TR(0x4bfc55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfc56:{NFSU2_TR(0x4bfc56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfc57:{NFSU2_TR(0x4bfc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bfc58:{NFSU2_TR(0x4bfc58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfc60:L4bfc60:{c.instructions+=9;NFSU2_TR(0x4bfc60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc61:{NFSU2_TR(0x4bfc61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc62:{NFSU2_TR(0x4bfc62);
__builtin_memmove((R+24),(R+4),4);
}
B4bfc64:{NFSU2_TR(0x4bfc64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfc67:{NFSU2_TR(0x4bfc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfc6a:{NFSU2_TR(0x4bfc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4bfc70:{NFSU2_TR(0x4bfc70);
u8 U[4];
w4(U+0,u32(0xd7d8ca79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc75:{NFSU2_TR(0x4bfc75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc76:{NFSU2_TR(0x4bfc76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfc7bull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfc7b:L4bfc7b:{c.instructions+=5;NFSU2_TR(0x4bfc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfc7e:{NFSU2_TR(0x4bfc7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc7f:{NFSU2_TR(0x4bfc7f);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc84:{NFSU2_TR(0x4bfc84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc85:{NFSU2_TR(0x4bfc85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfc8aull));
TAIL_STATIC(0x537be0u,537);
}
B4bfc8a:L4bfc8a:{c.instructions+=4;NFSU2_TR(0x4bfc8a);
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
B4bfc8d:{NFSU2_TR(0x4bfc8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfc8e:{NFSU2_TR(0x4bfc8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfc8f:{NFSU2_TR(0x4bfc8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfc90:L4bfc90:{c.instructions+=10;NFSU2_TR(0x4bfc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4bfc93:{NFSU2_TR(0x4bfc93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfc94:{NFSU2_TR(0x4bfc94);
__builtin_memmove((R+24),(R+4),4);
}
B4bfc96:{NFSU2_TR(0x4bfc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfc99:{NFSU2_TR(0x4bfc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfc9c:{NFSU2_TR(0x4bfc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfca2:{NFSU2_TR(0x4bfca2);
u8 U[4];
w4(U+0,u32(0x5c17ec47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfca7:{NFSU2_TR(0x4bfca7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfca8:{NFSU2_TR(0x4bfca8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfcac:{NFSU2_TR(0x4bfcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfcb1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfcb1:L4bfcb1:{c.instructions+=5;NFSU2_TR(0x4bfcb1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfcb5:{NFSU2_TR(0x4bfcb5);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4bfcbb:{NFSU2_TR(0x4bfcbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4bfcbe:{NFSU2_TR(0x4bfcbe);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bfcc4:{NFSU2_TR(0x4bfcc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfcc9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4bfcc9:L4bfcc9:{c.instructions+=6;NFSU2_TR(0x4bfcc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfccd:{NFSU2_TR(0x4bfccd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfccf:{NFSU2_TR(0x4bfccf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfcd3:{NFSU2_TR(0x4bfcd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfcd4:{NFSU2_TR(0x4bfcd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfcd8:{NFSU2_TR(0x4bfcd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfcddull));
TAIL_STATIC(0x577240u,577);
}
B4bfcdd:L4bfcdd:{c.instructions+=6;NFSU2_TR(0x4bfcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfce0:{NFSU2_TR(0x4bfce0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfce4:{NFSU2_TR(0x4bfce4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfce5:{NFSU2_TR(0x4bfce5);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfcea:{NFSU2_TR(0x4bfcea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfceb:{NFSU2_TR(0x4bfceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfcf0ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfcf0:L4bfcf0:{c.instructions+=4;NFSU2_TR(0x4bfcf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bfcf3:{NFSU2_TR(0x4bfcf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfcf4:{NFSU2_TR(0x4bfcf4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bfcf7:{NFSU2_TR(0x4bfcf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfd00:L4bfd00:{c.instructions+=6;NFSU2_TR(0x4bfd00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd01:{NFSU2_TR(0x4bfd01);
__builtin_memmove((R+24),(R+4),4);
}
B4bfd03:{NFSU2_TR(0x4bfd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfd06:{NFSU2_TR(0x4bfd06);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfd0c:{NFSU2_TR(0x4bfd0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd0d:{NFSU2_TR(0x4bfd0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfd12ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4bfd12:L4bfd12:{c.instructions+=5;NFSU2_TR(0x4bfd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfd15:{NFSU2_TR(0x4bfd15);
u8 U[4];
w4(U+0,u32(0xe8aebfafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd1a:{NFSU2_TR(0x4bfd1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd1b:{NFSU2_TR(0x4bfd1b);
__builtin_memmove((R+28),(R+0),4);
}
B4bfd1d:{NFSU2_TR(0x4bfd1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfd22ull));
TAIL_STATIC(0x50c900u,50c);
}
B4bfd22:L4bfd22:{c.instructions+=5;NFSU2_TR(0x4bfd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfd25:{NFSU2_TR(0x4bfd25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd26:{NFSU2_TR(0x4bfd26);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd2b:{NFSU2_TR(0x4bfd2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd2c:{NFSU2_TR(0x4bfd2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfd31ull));
TAIL_STATIC(0x537be0u,537);
}
B4bfd31:L4bfd31:{c.instructions+=4;NFSU2_TR(0x4bfd31);
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
B4bfd34:{NFSU2_TR(0x4bfd34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfd35:{NFSU2_TR(0x4bfd35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfd36:{NFSU2_TR(0x4bfd36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bfd40:L4bfd40:{c.instructions+=11;NFSU2_TR(0x4bfd40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd42:{NFSU2_TR(0x4bfd42);
u8 U[4];
w4(U+0,u32(0x773a1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd47:{NFSU2_TR(0x4bfd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfd4d:{NFSU2_TR(0x4bfd4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd4e:{NFSU2_TR(0x4bfd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfd55:{NFSU2_TR(0x4bfd55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B4bfd5b:{NFSU2_TR(0x4bfd5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd5c:{NFSU2_TR(0x4bfd5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd5d:{NFSU2_TR(0x4bfd5d);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd5f:{NFSU2_TR(0x4bfd5f);
__builtin_memmove((R+24),(R+4),4);
}
B4bfd61:{NFSU2_TR(0x4bfd61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfd66ull));
TAIL_STATIC(0x575620u,575);
}
B4bfd66:L4bfd66:{c.instructions+=6;NFSU2_TR(0x4bfd66);
__builtin_memmove((R+28),(R+0),4);
}
B4bfd68:{NFSU2_TR(0x4bfd68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bfd6b:{NFSU2_TR(0x4bfd6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfd6f:{NFSU2_TR(0x4bfd6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bfd71:{NFSU2_TR(0x4bfd71);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bfd7c:{NFSU2_TR(0x4bfd7c);
if(r1(R+518)){{goto L4bfdc9;}}
}
B4bfd7e:L4bfd7e:{c.instructions+=11;NFSU2_TR(0x4bfd7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd80:{NFSU2_TR(0x4bfd80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfd86:{NFSU2_TR(0x4bfd86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd87:{NFSU2_TR(0x4bfd87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfd8d:{NFSU2_TR(0x4bfd8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd8e:{NFSU2_TR(0x4bfd8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4bfd94:{NFSU2_TR(0x4bfd94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd95:{NFSU2_TR(0x4bfd95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfd9b:{NFSU2_TR(0x4bfd9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfd9c:{NFSU2_TR(0x4bfd9c);
__builtin_memmove((R+4),(R+28),4);
}
B4bfd9e:{NFSU2_TR(0x4bfd9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfda3ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B4bfda3:L4bfda3:{c.instructions+=8;NFSU2_TR(0x4bfda3);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfdaa:{NFSU2_TR(0x4bfdaa);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfdb1:{NFSU2_TR(0x4bfdb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfdb8:{NFSU2_TR(0x4bfdb8);
u8 U[4];
w4(U+0,u32(0x7950e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4bfdbe:{NFSU2_TR(0x4bfdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfdc1:{NFSU2_TR(0x4bfdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfdc4:{NFSU2_TR(0x4bfdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfdc7:{NFSU2_TR(0x4bfdc7);
{goto L4bfdcb;}
}
B4bfdc9:L4bfdc9:{c.instructions+=1;NFSU2_TR(0x4bfdc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4bfdcb:L4bfdcb:{c.instructions+=7;NFSU2_TR(0x4bfdcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdcc:{NFSU2_TR(0x4bfdcc);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdd1:{NFSU2_TR(0x4bfdd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfdd5:{NFSU2_TR(0x4bfdd5);
u8 U[4];
w4(U+0,u32(0x7953d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdda:{NFSU2_TR(0x4bfdda);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfddb:{NFSU2_TR(0x4bfddb);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bfde6:{NFSU2_TR(0x4bfde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfdebull));
TAIL_STATIC(0x43dda0u,43d);
}
B4bfdeb:L4bfdeb:{c.instructions+=8;NFSU2_TR(0x4bfdeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfdf1:{NFSU2_TR(0x4bfdf1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdf2:{NFSU2_TR(0x4bfdf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfdf6:{NFSU2_TR(0x4bfdf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdf7:{NFSU2_TR(0x4bfdf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfdfb:{NFSU2_TR(0x4bfdfb);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdfd:{NFSU2_TR(0x4bfdfd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfdfe:{NFSU2_TR(0x4bfdfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe03ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bfe03:L4bfe03:{c.instructions+=4;NFSU2_TR(0x4bfe03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bfe06:{NFSU2_TR(0x4bfe06);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bfe0a:{NFSU2_TR(0x4bfe0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe0b:{NFSU2_TR(0x4bfe0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe10ull));
TAIL_STATIC(0x505450u,505);
}
B4bfe10:L4bfe10:{c.instructions+=3;NFSU2_TR(0x4bfe10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe11:{NFSU2_TR(0x4bfe11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe12:{NFSU2_TR(0x4bfe12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe17ull));
TAIL_STATIC(0x537a10u,537);
}
B4bfe17:L4bfe17:{c.instructions+=6;NFSU2_TR(0x4bfe17);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe1c:{NFSU2_TR(0x4bfe1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfe1f:{NFSU2_TR(0x4bfe1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfe23:{NFSU2_TR(0x4bfe23);
u8 U[4];
w4(U+0,u32(0x7953c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe28:{NFSU2_TR(0x4bfe28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe29:{NFSU2_TR(0x4bfe29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe2eull));
TAIL_STATIC(0x43dda0u,43d);
}
B4bfe2e:L4bfe2e:{c.instructions+=8;NFSU2_TR(0x4bfe2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfe34:{NFSU2_TR(0x4bfe34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe35:{NFSU2_TR(0x4bfe35);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4bfe39:{NFSU2_TR(0x4bfe39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe3a:{NFSU2_TR(0x4bfe3a);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfe41:{NFSU2_TR(0x4bfe41);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe43:{NFSU2_TR(0x4bfe43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe44:{NFSU2_TR(0x4bfe44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe49ull));
TAIL_STATIC(0x50c960u,50c);
}
B4bfe49:L4bfe49:{c.instructions+=5;NFSU2_TR(0x4bfe49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4bfe4c:{NFSU2_TR(0x4bfe4c);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfe53:{NFSU2_TR(0x4bfe53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4bfe56:{NFSU2_TR(0x4bfe56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe57:{NFSU2_TR(0x4bfe57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe5cull));
TAIL_STATIC(0x505450u,505);
}
B4bfe5c:L4bfe5c:{c.instructions+=3;NFSU2_TR(0x4bfe5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe5d:{NFSU2_TR(0x4bfe5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfe5e:{NFSU2_TR(0x4bfe5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfe63ull));
TAIL_STATIC(0x537a10u,537);
}
B4bfe63:L4bfe63:{c.instructions+=21;NFSU2_TR(0x4bfe63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfe66:{NFSU2_TR(0x4bfe66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bfe6c:{NFSU2_TR(0x4bfe6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bfe6f:{NFSU2_TR(0x4bfe6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4bfe71:{NFSU2_TR(0x4bfe71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfe77:{NFSU2_TR(0x4bfe77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bfe7d:{NFSU2_TR(0x4bfe7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfe80:{NFSU2_TR(0x4bfe80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4bfe82:{NFSU2_TR(0x4bfe82);
{u32 ea_=u32(r4(R+24)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfe88:{NFSU2_TR(0x4bfe88);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bfe8e:{NFSU2_TR(0x4bfe8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4bfe91:{NFSU2_TR(0x4bfe91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bfe92:{NFSU2_TR(0x4bfe92);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bfe98:{NFSU2_TR(0x4bfe98);
{u32 ea_=u32(r4(R+24)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bfe9e:{NFSU2_TR(0x4bfe9e);
{u32 ea_=u32(r4(R+24)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4bfea4:{NFSU2_TR(0x4bfea4);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bfeaa:{NFSU2_TR(0x4bfeaa);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4bfeb0:{NFSU2_TR(0x4bfeb0);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4bfeb6:{NFSU2_TR(0x4bfeb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4bfeb9:{NFSU2_TR(0x4bfeb9);
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
B4bfebb:{NFSU2_TR(0x4bfebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bfec4;}}
}
B4bfebd:L4bfebd:{c.instructions+=3;NFSU2_TR(0x4bfebd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bfebf:{NFSU2_TR(0x4bfebf);
__builtin_memmove((R+4),(R+28),4);
}
B4bfec1:{NFSU2_TR(0x4bfec1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfec4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bfec4:L4bfec4:{c.instructions+=3;NFSU2_TR(0x4bfec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bfec6:{NFSU2_TR(0x4bfec6);
__builtin_memmove((R+4),(R+28),4);
}
B4bfec8:{NFSU2_TR(0x4bfec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfecbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bfecb:L4bfecb:{c.instructions+=3;NFSU2_TR(0x4bfecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bfecd:{NFSU2_TR(0x4bfecd);
__builtin_memmove((R+4),(R+28),4);
}
B4bfecf:{NFSU2_TR(0x4bfecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfed2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bfed2:L4bfed2:{c.instructions+=3;NFSU2_TR(0x4bfed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bfed4:{NFSU2_TR(0x4bfed4);
__builtin_memmove((R+4),(R+28),4);
}
B4bfed6:{NFSU2_TR(0x4bfed6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfed9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bfed9:L4bfed9:{c.instructions+=9;NFSU2_TR(0x4bfed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bfedf:{NFSU2_TR(0x4bfedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4bfee6:{NFSU2_TR(0x4bfee6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4bfee7:{NFSU2_TR(0x4bfee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfeed:{NFSU2_TR(0x4bfeed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bfeee:{NFSU2_TR(0x4bfeee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bfeef:{NFSU2_TR(0x4bfeef);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bfef6:{NFSU2_TR(0x4bfef6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x90ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bfefc:{NFSU2_TR(0x4bfefc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bff00:L4bff00:{c.instructions+=8;NFSU2_TR(0x4bff00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff01:{NFSU2_TR(0x4bff01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff02:{NFSU2_TR(0x4bff02);
__builtin_memmove((R+12),(R+4),4);
}
B4bff04:{NFSU2_TR(0x4bff04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bff0a:{NFSU2_TR(0x4bff0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bff0c:{NFSU2_TR(0x4bff0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff0d:{NFSU2_TR(0x4bff0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x178ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bff13:{NFSU2_TR(0x4bff13);
if(r1(R+518)){{goto L4bff1a;}}
}
B4bff15:L4bff15:{c.instructions+=2;NFSU2_TR(0x4bff15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bff18:{NFSU2_TR(0x4bff18);
{goto L4bff20;}
}
B4bff1a:L4bff1a:{c.instructions+=2;NFSU2_TR(0x4bff1a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4bff1c:{NFSU2_TR(0x4bff1c);
__builtin_memmove((R+16),(R+16),4);
}
B4bff20:L4bff20:{c.instructions+=2;NFSU2_TR(0x4bff20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bff22:{NFSU2_TR(0x4bff22);
if(r1(R+518)){{goto L4bff29;}}
}
B4bff24:L4bff24:{c.instructions+=2;NFSU2_TR(0x4bff24);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4bff27:{NFSU2_TR(0x4bff27);
{goto L4bff2b;}
}
B4bff29:L4bff29:{c.instructions+=1;NFSU2_TR(0x4bff29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4bff2b:L4bff2b:{c.instructions+=2;NFSU2_TR(0x4bff2b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4bff2d:{NFSU2_TR(0x4bff2d);
if(r1(R+518)){{goto L4bff49;}}
}
B4bff2f:L4bff2f:{c.instructions+=3;NFSU2_TR(0x4bff2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bff31:{NFSU2_TR(0x4bff31);
__builtin_memmove((R+4),(R+24),4);
}
B4bff33:{NFSU2_TR(0x4bff33);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bff36ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bff36:L4bff36:{c.instructions+=3;NFSU2_TR(0x4bff36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4bff38:{NFSU2_TR(0x4bff38);
__builtin_memmove((R+4),(R+24),4);
}
B4bff3a:{NFSU2_TR(0x4bff3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bff3dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4bff3d:L4bff3d:{c.instructions+=3;NFSU2_TR(0x4bff3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4bff40:{NFSU2_TR(0x4bff40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bff42:{NFSU2_TR(0x4bff42);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bff1au);}goto L4bff1a;}}
}
B4bff44:L4bff44:{c.instructions+=2;NFSU2_TR(0x4bff44);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4bff47:{NFSU2_TR(0x4bff47);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bff20u);}goto L4bff20;}
}
B4bff49:L4bff49:{c.instructions+=2;NFSU2_TR(0x4bff49);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4bff4b:{NFSU2_TR(0x4bff4b);
if(r1(R+518)){{goto L4bff6d;}}
}
B4bff4d:L4bff4d:{c.instructions+=1;NFSU2_TR(0x4bff4d);
__builtin_memmove((R+4),(R+4),4);
}
B4bff50:L4bff50:{c.instructions+=8;NFSU2_TR(0x4bff50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bff52:{NFSU2_TR(0x4bff52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4bff54:{NFSU2_TR(0x4bff54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bff57:{NFSU2_TR(0x4bff57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4bff59:{NFSU2_TR(0x4bff59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bff5c:{NFSU2_TR(0x4bff5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4bff5f:{NFSU2_TR(0x4bff5f);
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
B4bff61:{NFSU2_TR(0x4bff61);
if(r1(R+518)){{goto L4bff69;}}
}
B4bff63:L4bff63:{c.instructions+=3;NFSU2_TR(0x4bff63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bff65:{NFSU2_TR(0x4bff65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff67:{NFSU2_TR(0x4bff67);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bff69ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4bff69:L4bff69:{c.instructions+=2;NFSU2_TR(0x4bff69);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4bff6b:{NFSU2_TR(0x4bff6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bff50u);}goto L4bff50;}}
}
B4bff6d:L4bff6d:{c.instructions+=5;NFSU2_TR(0x4bff6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4bff6e:{NFSU2_TR(0x4bff6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4bff6f:{NFSU2_TR(0x4bff6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x180ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4bff79:{NFSU2_TR(0x4bff79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4bff7a:{NFSU2_TR(0x4bff7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bff80:L4bff80:{c.instructions+=3;NFSU2_TR(0x4bff80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bff83:{NFSU2_TR(0x4bff83);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4bff86:{NFSU2_TR(0x4bff86);
if(r1(R+518)){{goto L4bffa0;}}
}
B4bff88:L4bff88:{c.instructions+=8;NFSU2_TR(0x4bff88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4bff8b:{NFSU2_TR(0x4bff8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4bff8d:{NFSU2_TR(0x4bff8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4bff90:{NFSU2_TR(0x4bff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4bff93:{NFSU2_TR(0x4bff93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff95:{NFSU2_TR(0x4bff95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff96:{NFSU2_TR(0x4bff96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bff97:{NFSU2_TR(0x4bff97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bff9cull));
TAIL_STATIC(0x537980u,537);
}
B4bff9c:L4bff9c:{c.instructions+=2;NFSU2_TR(0x4bff9c);
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
B4bff9f:{NFSU2_TR(0x4bff9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bffa0:L4bffa0:{c.instructions+=3;NFSU2_TR(0x4bffa0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4bffa5:{NFSU2_TR(0x4bffa5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4bffa8:{NFSU2_TR(0x4bffa8);
if(r1(R+518)){{goto L4bffe7;}}
}
B4bffaa:L4bffaa:{c.instructions+=2;NFSU2_TR(0x4bffaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4bffaf:{NFSU2_TR(0x4bffaf);
if(r1(R+518)){{goto L4bffe7;}}
}
B4bffb1:L4bffb1:{c.instructions+=2;NFSU2_TR(0x4bffb1);
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
B4bffb4:{NFSU2_TR(0x4bffb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4c0019u,4c0);}
}
B4bffb6:L4bffb6:{c.instructions+=2;NFSU2_TR(0x4bffb6);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4bffbd:{NFSU2_TR(0x4bffbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4c0019u,4c0);}
}
B4bffbf:L4bffbf:{c.instructions+=2;NFSU2_TR(0x4bffbf);
w4(R+4,u32(0x83aab4ull));
}
B4bffc4:{NFSU2_TR(0x4bffc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bffc9ull));
TAIL_STATIC(0x5027b0u,502);
}
B4bffc9:L4bffc9:{c.instructions+=2;NFSU2_TR(0x4bffc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bffcb:{NFSU2_TR(0x4bffcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4bfff5;}}
}
B4bffcd:L4bffcd:{c.instructions+=2;NFSU2_TR(0x4bffcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bffcf:{NFSU2_TR(0x4bffcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bffd4ull));
TAIL_STATIC(0x526830u,526);
}
B4bffd4:L4bffd4:{c.instructions+=1;NFSU2_TR(0x4bffd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4bffd7:L4bffd7:{c.instructions+=4;NFSU2_TR(0x4bffd7);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4bffdd:{NFSU2_TR(0x4bffdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bffdf:{NFSU2_TR(0x4bffdf);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bffe1:{NFSU2_TR(0x4bffe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bffe6ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B4bffe6:L4bffe6:{c.instructions+=1;NFSU2_TR(0x4bffe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4bffe7:L4bffe7:{c.instructions+=2;NFSU2_TR(0x4bffe7);
w4(R+4,u32(0x89cf48ull));
}
B4bffec:{NFSU2_TR(0x4bffec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4bfff1ull));
TAIL_STATIC(0x5fe4c0u,5fe);
}
B4bfff1:L4bfff1:{c.instructions+=2;NFSU2_TR(0x4bfff1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4bfff3:{NFSU2_TR(0x4bfff3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4bffd7u);}goto L4bffd7;}}
}
B4bfff5:L4bfff5:{c.instructions+=3;NFSU2_TR(0x4bfff5);
w4(R+4,u32(0x83a9d0ull));
}
B4bfffa:{NFSU2_TR(0x4bfffa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4bfffc:{NFSU2_TR(0x4bfffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c0001ull));
TAIL_STATIC(0x502ff0u,502);
}
XIT:NFSU2_TR_EXIT(0x4bf,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
