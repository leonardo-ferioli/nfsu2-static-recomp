#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6c7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6c7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6c7(u8* __restrict R,Cpu& c);
u32 page_6c7(Cpu& c){return body_6c7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6c7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6c7002:goto L6c7002;
case 0x6c7003:c.instructions+=8;goto B6c7003;
case 0x6c7006:c.instructions+=7;goto B6c7006;
case 0x6c7007:c.instructions+=6;goto B6c7007;
case 0x6c700a:c.instructions+=5;goto B6c700a;
case 0x6c700b:c.instructions+=4;goto B6c700b;
case 0x6c7010:c.instructions+=3;goto B6c7010;
case 0x6c7011:c.instructions+=2;goto B6c7011;
case 0x6c7013:c.instructions+=1;goto B6c7013;
case 0x6c7018:goto L6c7018;
case 0x6c701a:c.instructions+=1;goto B6c701a;
case 0x6c701c:goto L6c701c;
case 0x6c701d:c.instructions+=13;goto B6c701d;
case 0x6c701e:c.instructions+=12;goto B6c701e;
case 0x6c7021:c.instructions+=11;goto B6c7021;
case 0x6c7022:c.instructions+=10;goto B6c7022;
case 0x6c7028:c.instructions+=9;goto B6c7028;
case 0x6c7029:c.instructions+=8;goto B6c7029;
case 0x6c702c:c.instructions+=7;goto B6c702c;
case 0x6c702d:c.instructions+=6;goto B6c702d;
case 0x6c7030:c.instructions+=5;goto B6c7030;
case 0x6c7031:c.instructions+=4;goto B6c7031;
case 0x6c7036:c.instructions+=3;goto B6c7036;
case 0x6c703c:c.instructions+=2;goto B6c703c;
case 0x6c703e:c.instructions+=1;goto B6c703e;
case 0x6c7043:goto L6c7043;
case 0x6c7045:c.instructions+=1;goto B6c7045;
case 0x6c7047:goto L6c7047;
case 0x6c7048:c.instructions+=13;goto B6c7048;
case 0x6c7049:c.instructions+=12;goto B6c7049;
case 0x6c704c:c.instructions+=11;goto B6c704c;
case 0x6c704d:c.instructions+=10;goto B6c704d;
case 0x6c7053:c.instructions+=9;goto B6c7053;
case 0x6c7054:c.instructions+=8;goto B6c7054;
case 0x6c7057:c.instructions+=7;goto B6c7057;
case 0x6c7058:c.instructions+=6;goto B6c7058;
case 0x6c705b:c.instructions+=5;goto B6c705b;
case 0x6c705c:c.instructions+=4;goto B6c705c;
case 0x6c7061:c.instructions+=3;goto B6c7061;
case 0x6c7067:c.instructions+=2;goto B6c7067;
case 0x6c7069:c.instructions+=1;goto B6c7069;
case 0x6c706e:goto L6c706e;
case 0x6c7070:c.instructions+=1;goto B6c7070;
case 0x6c7072:goto L6c7072;
case 0x6c7073:c.instructions+=13;goto B6c7073;
case 0x6c7074:c.instructions+=12;goto B6c7074;
case 0x6c7077:c.instructions+=11;goto B6c7077;
case 0x6c7078:c.instructions+=10;goto B6c7078;
case 0x6c707e:c.instructions+=9;goto B6c707e;
case 0x6c707f:c.instructions+=8;goto B6c707f;
case 0x6c7082:c.instructions+=7;goto B6c7082;
case 0x6c7083:c.instructions+=6;goto B6c7083;
case 0x6c7086:c.instructions+=5;goto B6c7086;
case 0x6c7087:c.instructions+=4;goto B6c7087;
case 0x6c708c:c.instructions+=3;goto B6c708c;
case 0x6c7092:c.instructions+=2;goto B6c7092;
case 0x6c7094:c.instructions+=1;goto B6c7094;
case 0x6c7099:goto L6c7099;
case 0x6c709b:c.instructions+=1;goto B6c709b;
case 0x6c70a1:goto L6c70a1;
case 0x6c70a7:c.instructions+=5;goto B6c70a7;
case 0x6c70aa:c.instructions+=4;goto B6c70aa;
case 0x6c70ad:c.instructions+=3;goto B6c70ad;
case 0x6c70b0:c.instructions+=2;goto B6c70b0;
case 0x6c70b3:c.instructions+=1;goto B6c70b3;
case 0x6c70b6:goto L6c70b6;
case 0x6c70b8:c.instructions+=5;goto B6c70b8;
case 0x6c70bb:c.instructions+=4;goto B6c70bb;
case 0x6c70be:c.instructions+=3;goto B6c70be;
case 0x6c70c1:c.instructions+=2;goto B6c70c1;
case 0x6c70c5:c.instructions+=1;goto B6c70c5;
case 0x6c70cb:goto L6c70cb;
case 0x6c70d1:c.instructions+=5;goto B6c70d1;
case 0x6c70d4:c.instructions+=4;goto B6c70d4;
case 0x6c70d6:c.instructions+=3;goto B6c70d6;
case 0x6c70d8:c.instructions+=2;goto B6c70d8;
case 0x6c70db:c.instructions+=1;goto B6c70db;
case 0x6c70e1:goto L6c70e1;
case 0x6c70e5:c.instructions+=1;goto B6c70e5;
case 0x6c70eb:goto L6c70eb;
case 0x6c70ee:c.instructions+=5;goto B6c70ee;
case 0x6c70f0:c.instructions+=4;goto B6c70f0;
case 0x6c70f1:c.instructions+=3;goto B6c70f1;
case 0x6c70f4:c.instructions+=2;goto B6c70f4;
case 0x6c70f7:c.instructions+=1;goto B6c70f7;
case 0x6c70f9:goto L6c70f9;
case 0x6c70ff:c.instructions+=4;goto B6c70ff;
case 0x6c7102:c.instructions+=3;goto B6c7102;
case 0x6c7106:c.instructions+=2;goto B6c7106;
case 0x6c710a:c.instructions+=1;goto B6c710a;
case 0x6c710c:goto L6c710c;
case 0x6c710f:c.instructions+=3;goto B6c710f;
case 0x6c7112:c.instructions+=2;goto B6c7112;
case 0x6c7115:c.instructions+=1;goto B6c7115;
case 0x6c7117:goto L6c7117;
case 0x6c711a:goto L6c711a;
case 0x6c711c:goto L6c711c;
case 0x6c7122:c.instructions+=15;goto B6c7122;
case 0x6c7125:c.instructions+=14;goto B6c7125;
case 0x6c712c:c.instructions+=13;goto B6c712c;
case 0x6c712f:c.instructions+=12;goto B6c712f;
case 0x6c7132:c.instructions+=11;goto B6c7132;
case 0x6c7139:c.instructions+=10;goto B6c7139;
case 0x6c713c:c.instructions+=9;goto B6c713c;
case 0x6c713f:c.instructions+=8;goto B6c713f;
case 0x6c7140:c.instructions+=7;goto B6c7140;
case 0x6c7141:c.instructions+=6;goto B6c7141;
case 0x6c7144:c.instructions+=5;goto B6c7144;
case 0x6c7147:c.instructions+=4;goto B6c7147;
case 0x6c7149:c.instructions+=3;goto B6c7149;
case 0x6c714c:c.instructions+=2;goto B6c714c;
case 0x6c714f:c.instructions+=1;goto B6c714f;
case 0x6c7154:goto L6c7154;
case 0x6c7157:c.instructions+=2;goto B6c7157;
case 0x6c715a:c.instructions+=1;goto B6c715a;
case 0x6c715c:goto L6c715c;
case 0x6c715f:c.instructions+=5;goto B6c715f;
case 0x6c7162:c.instructions+=4;goto B6c7162;
case 0x6c7163:c.instructions+=3;goto B6c7163;
case 0x6c7165:c.instructions+=2;goto B6c7165;
case 0x6c7168:c.instructions+=1;goto B6c7168;
case 0x6c716d:goto L6c716d;
case 0x6c7171:c.instructions+=2;goto B6c7171;
case 0x6c7174:c.instructions+=1;goto B6c7174;
case 0x6c7176:goto L6c7176;
case 0x6c717a:c.instructions+=1;goto B6c717a;
case 0x6c717c:goto L6c717c;
case 0x6c7183:c.instructions+=1;goto B6c7183;
case 0x6c7186:goto L6c7186;
case 0x6c718d:goto L6c718d;
case 0x6c7193:c.instructions+=6;goto B6c7193;
case 0x6c7196:c.instructions+=5;goto B6c7196;
case 0x6c7199:c.instructions+=4;goto B6c7199;
case 0x6c719d:c.instructions+=3;goto B6c719d;
case 0x6c71a0:c.instructions+=2;goto B6c71a0;
case 0x6c71a3:c.instructions+=1;goto B6c71a3;
case 0x6c71a9:goto L6c71a9;
case 0x6c71ab:goto L6c71ab;
case 0x6c71ac:c.instructions+=4;goto B6c71ac;
case 0x6c71ad:c.instructions+=3;goto B6c71ad;
case 0x6c71ae:c.instructions+=2;goto B6c71ae;
case 0x6c71af:c.instructions+=1;goto B6c71af;
case 0x6c71b0:goto L6c71b0;
case 0x6c71b2:c.instructions+=2;goto B6c71b2;
case 0x6c71b3:c.instructions+=1;goto B6c71b3;
case 0x6c71b5:goto L6c71b5;
case 0x6c71b8:c.instructions+=3;goto B6c71b8;
case 0x6c71be:c.instructions+=2;goto B6c71be;
case 0x6c71c1:c.instructions+=1;goto B6c71c1;
case 0x6c71c3:goto L6c71c3;
case 0x6c71c8:c.instructions+=1;goto B6c71c8;
case 0x6c71ca:goto L6c71ca;
case 0x6c71cc:c.instructions+=32;goto B6c71cc;
case 0x6c71cd:c.instructions+=31;goto B6c71cd;
case 0x6c71cf:c.instructions+=30;goto B6c71cf;
case 0x6c71d5:c.instructions+=29;goto B6c71d5;
case 0x6c71d6:c.instructions+=28;goto B6c71d6;
case 0x6c71d7:c.instructions+=27;goto B6c71d7;
case 0x6c71d8:c.instructions+=26;goto B6c71d8;
case 0x6c71dc:c.instructions+=25;goto B6c71dc;
case 0x6c71e0:c.instructions+=24;goto B6c71e0;
case 0x6c71e2:c.instructions+=23;goto B6c71e2;
case 0x6c71e8:c.instructions+=22;goto B6c71e8;
case 0x6c71ea:c.instructions+=21;goto B6c71ea;
case 0x6c71ec:c.instructions+=20;goto B6c71ec;
case 0x6c71ed:c.instructions+=19;goto B6c71ed;
case 0x6c71ee:c.instructions+=18;goto B6c71ee;
case 0x6c71f4:c.instructions+=17;goto B6c71f4;
case 0x6c71f5:c.instructions+=16;goto B6c71f5;
case 0x6c71f8:c.instructions+=15;goto B6c71f8;
case 0x6c71f9:c.instructions+=14;goto B6c71f9;
case 0x6c71ff:c.instructions+=13;goto B6c71ff;
case 0x6c7200:c.instructions+=12;goto B6c7200;
case 0x6c7203:c.instructions+=11;goto B6c7203;
case 0x6c7204:c.instructions+=10;goto B6c7204;
case 0x6c720a:c.instructions+=9;goto B6c720a;
case 0x6c720b:c.instructions+=8;goto B6c720b;
case 0x6c7210:c.instructions+=7;goto B6c7210;
case 0x6c7211:c.instructions+=6;goto B6c7211;
case 0x6c7213:c.instructions+=5;goto B6c7213;
case 0x6c7216:c.instructions+=4;goto B6c7216;
case 0x6c721d:c.instructions+=3;goto B6c721d;
case 0x6c7224:c.instructions+=2;goto B6c7224;
case 0x6c7227:c.instructions+=1;goto B6c7227;
case 0x6c722c:goto L6c722c;
case 0x6c722e:c.instructions+=1;goto B6c722e;
case 0x6c7230:goto L6c7230;
case 0x6c7232:c.instructions+=1;goto B6c7232;
case 0x6c7237:goto L6c7237;
case 0x6c7239:c.instructions+=1;goto B6c7239;
case 0x6c723b:goto L6c723b;
case 0x6c723d:c.instructions+=1;goto B6c723d;
case 0x6c7242:goto L6c7242;
case 0x6c7244:c.instructions+=2;goto B6c7244;
case 0x6c7247:c.instructions+=1;goto B6c7247;
case 0x6c7249:goto L6c7249;
case 0x6c724d:c.instructions+=1;goto B6c724d;
case 0x6c7250:goto L6c7250;
case 0x6c7252:c.instructions+=1;goto B6c7252;
case 0x6c7258:goto L6c7258;
case 0x6c725a:c.instructions+=7;goto B6c725a;
case 0x6c725d:c.instructions+=6;goto B6c725d;
case 0x6c725e:c.instructions+=5;goto B6c725e;
case 0x6c725f:c.instructions+=4;goto B6c725f;
case 0x6c7261:c.instructions+=3;goto B6c7261;
case 0x6c7266:c.instructions+=2;goto B6c7266;
case 0x6c726b:c.instructions+=1;goto B6c726b;
case 0x6c726d:goto L6c726d;
case 0x6c726e:c.instructions+=13;goto B6c726e;
case 0x6c726f:c.instructions+=12;goto B6c726f;
case 0x6c7272:c.instructions+=11;goto B6c7272;
case 0x6c7273:c.instructions+=10;goto B6c7273;
case 0x6c7279:c.instructions+=9;goto B6c7279;
case 0x6c727a:c.instructions+=8;goto B6c727a;
case 0x6c727d:c.instructions+=7;goto B6c727d;
case 0x6c727e:c.instructions+=6;goto B6c727e;
case 0x6c7284:c.instructions+=5;goto B6c7284;
case 0x6c7285:c.instructions+=4;goto B6c7285;
case 0x6c728a:c.instructions+=3;goto B6c728a;
case 0x6c7290:c.instructions+=2;goto B6c7290;
case 0x6c7292:c.instructions+=1;goto B6c7292;
case 0x6c7297:goto L6c7297;
case 0x6c7299:c.instructions+=1;goto B6c7299;
case 0x6c729f:goto L6c729f;
case 0x6c72a1:c.instructions+=1;goto B6c72a1;
case 0x6c72a6:goto L6c72a6;
case 0x6c72a8:c.instructions+=1;goto B6c72a8;
case 0x6c72aa:goto L6c72aa;
case 0x6c72ac:c.instructions+=1;goto B6c72ac;
case 0x6c72b1:goto L6c72b1;
case 0x6c72b3:c.instructions+=2;goto B6c72b3;
case 0x6c72b6:c.instructions+=1;goto B6c72b6;
case 0x6c72b8:goto L6c72b8;
case 0x6c72bc:c.instructions+=1;goto B6c72bc;
case 0x6c72bf:goto L6c72bf;
case 0x6c72c1:c.instructions+=1;goto B6c72c1;
case 0x6c72c7:goto L6c72c7;
case 0x6c72c9:c.instructions+=6;goto B6c72c9;
case 0x6c72cc:c.instructions+=5;goto B6c72cc;
case 0x6c72cd:c.instructions+=4;goto B6c72cd;
case 0x6c72ce:c.instructions+=3;goto B6c72ce;
case 0x6c72d0:c.instructions+=2;goto B6c72d0;
case 0x6c72d5:c.instructions+=1;goto B6c72d5;
case 0x6c72da:goto L6c72da;
case 0x6c72db:c.instructions+=2;goto B6c72db;
case 0x6c72dd:c.instructions+=1;goto B6c72dd;
case 0x6c72e2:goto L6c72e2;
case 0x6c72e4:c.instructions+=3;goto B6c72e4;
case 0x6c72e7:c.instructions+=2;goto B6c72e7;
case 0x6c72e9:c.instructions+=1;goto B6c72e9;
case 0x6c72ef:goto L6c72ef;
case 0x6c72f5:c.instructions+=1;goto B6c72f5;
case 0x6c72fa:goto L6c72fa;
case 0x6c72fc:c.instructions+=2;goto B6c72fc;
case 0x6c72ff:c.instructions+=1;goto B6c72ff;
case 0x6c7305:goto L6c7305;
case 0x6c730b:c.instructions+=7;goto B6c730b;
case 0x6c730e:c.instructions+=6;goto B6c730e;
case 0x6c7310:c.instructions+=5;goto B6c7310;
case 0x6c7313:c.instructions+=4;goto B6c7313;
case 0x6c7316:c.instructions+=3;goto B6c7316;
case 0x6c7318:c.instructions+=2;goto B6c7318;
case 0x6c731a:c.instructions+=1;goto B6c731a;
case 0x6c731d:goto L6c731d;
case 0x6c731f:goto L6c731f;
case 0x6c7321:c.instructions+=2;goto B6c7321;
case 0x6c7324:c.instructions+=1;goto B6c7324;
case 0x6c7327:goto L6c7327;
case 0x6c7329:goto L6c7329;
case 0x6c732c:c.instructions+=4;goto B6c732c;
case 0x6c732e:c.instructions+=3;goto B6c732e;
case 0x6c7330:c.instructions+=2;goto B6c7330;
case 0x6c7333:c.instructions+=1;goto B6c7333;
case 0x6c7339:goto L6c7339;
case 0x6c733b:goto L6c733b;
case 0x6c733d:c.instructions+=1;goto B6c733d;
case 0x6c7340:goto L6c7340;
case 0x6c7342:goto L6c7342;
case 0x6c7348:c.instructions+=1;goto B6c7348;
case 0x6c734d:goto L6c734d;
case 0x6c734e:c.instructions+=13;goto B6c734e;
case 0x6c734f:c.instructions+=12;goto B6c734f;
case 0x6c7352:c.instructions+=11;goto B6c7352;
case 0x6c7353:c.instructions+=10;goto B6c7353;
case 0x6c7359:c.instructions+=9;goto B6c7359;
case 0x6c735a:c.instructions+=8;goto B6c735a;
case 0x6c735d:c.instructions+=7;goto B6c735d;
case 0x6c735e:c.instructions+=6;goto B6c735e;
case 0x6c7364:c.instructions+=5;goto B6c7364;
case 0x6c7365:c.instructions+=4;goto B6c7365;
case 0x6c736a:c.instructions+=3;goto B6c736a;
case 0x6c7370:c.instructions+=2;goto B6c7370;
case 0x6c7372:c.instructions+=1;goto B6c7372;
case 0x6c7377:goto L6c7377;
case 0x6c7379:c.instructions+=1;goto B6c7379;
case 0x6c737f:goto L6c737f;
case 0x6c7382:c.instructions+=7;goto B6c7382;
case 0x6c7388:c.instructions+=6;goto B6c7388;
case 0x6c738b:c.instructions+=5;goto B6c738b;
case 0x6c738e:c.instructions+=4;goto B6c738e;
case 0x6c7393:c.instructions+=3;goto B6c7393;
case 0x6c7395:c.instructions+=2;goto B6c7395;
case 0x6c7398:c.instructions+=1;goto B6c7398;
case 0x6c739a:goto L6c739a;
case 0x6c739c:c.instructions+=2;goto B6c739c;
case 0x6c739e:c.instructions+=1;goto B6c739e;
case 0x6c73a4:goto L6c73a4;
case 0x6c73a6:c.instructions+=2;goto B6c73a6;
case 0x6c73ac:c.instructions+=1;goto B6c73ac;
case 0x6c73af:goto L6c73af;
case 0x6c73b1:goto L6c73b1;
case 0x6c73b8:c.instructions+=6;goto B6c73b8;
case 0x6c73bb:c.instructions+=5;goto B6c73bb;
case 0x6c73be:c.instructions+=4;goto B6c73be;
case 0x6c73c2:c.instructions+=3;goto B6c73c2;
case 0x6c73c3:c.instructions+=2;goto B6c73c3;
case 0x6c73c6:c.instructions+=1;goto B6c73c6;
case 0x6c73c8:goto L6c73c8;
case 0x6c73ca:goto L6c73ca;
case 0x6c73d0:c.instructions+=6;goto B6c73d0;
case 0x6c73d3:c.instructions+=5;goto B6c73d3;
case 0x6c73d6:c.instructions+=4;goto B6c73d6;
case 0x6c73d9:c.instructions+=3;goto B6c73d9;
case 0x6c73db:c.instructions+=2;goto B6c73db;
case 0x6c73de:c.instructions+=1;goto B6c73de;
case 0x6c73e0:goto L6c73e0;
case 0x6c73e2:c.instructions+=2;goto B6c73e2;
case 0x6c73e4:c.instructions+=1;goto B6c73e4;
case 0x6c73ea:goto L6c73ea;
case 0x6c73ec:c.instructions+=2;goto B6c73ec;
case 0x6c73f2:c.instructions+=1;goto B6c73f2;
case 0x6c73f5:goto L6c73f5;
case 0x6c73f7:goto L6c73f7;
case 0x6c73fe:c.instructions+=6;goto B6c73fe;
case 0x6c7401:c.instructions+=5;goto B6c7401;
case 0x6c7404:c.instructions+=4;goto B6c7404;
case 0x6c7408:c.instructions+=3;goto B6c7408;
case 0x6c7409:c.instructions+=2;goto B6c7409;
case 0x6c740c:c.instructions+=1;goto B6c740c;
case 0x6c740e:goto L6c740e;
case 0x6c7411:c.instructions+=1;goto B6c7411;
case 0x6c7416:goto L6c7416;
case 0x6c7419:c.instructions+=1;goto B6c7419;
case 0x6c741f:goto L6c741f;
case 0x6c7422:c.instructions+=4;goto B6c7422;
case 0x6c7425:c.instructions+=3;goto B6c7425;
case 0x6c742a:c.instructions+=2;goto B6c742a;
case 0x6c742f:c.instructions+=1;goto B6c742f;
case 0x6c7431:goto L6c7431;
case 0x6c7434:c.instructions+=7;goto B6c7434;
case 0x6c7437:c.instructions+=6;goto B6c7437;
case 0x6c743a:c.instructions+=5;goto B6c743a;
case 0x6c743c:c.instructions+=4;goto B6c743c;
case 0x6c743e:c.instructions+=3;goto B6c743e;
case 0x6c7440:c.instructions+=2;goto B6c7440;
case 0x6c7442:c.instructions+=1;goto B6c7442;
case 0x6c7444:goto L6c7444;
case 0x6c7449:c.instructions+=2;goto B6c7449;
case 0x6c744b:c.instructions+=1;goto B6c744b;
case 0x6c744d:goto L6c744d;
case 0x6c7451:c.instructions+=1;goto B6c7451;
case 0x6c7453:goto L6c7453;
case 0x6c7456:c.instructions+=5;goto B6c7456;
case 0x6c7459:c.instructions+=4;goto B6c7459;
case 0x6c745b:c.instructions+=3;goto B6c745b;
case 0x6c745e:c.instructions+=2;goto B6c745e;
case 0x6c7464:c.instructions+=1;goto B6c7464;
case 0x6c7466:goto L6c7466;
case 0x6c7469:c.instructions+=3;goto B6c7469;
case 0x6c746c:c.instructions+=2;goto B6c746c;
case 0x6c746f:c.instructions+=1;goto B6c746f;
case 0x6c7475:goto L6c7475;
case 0x6c7478:c.instructions+=7;goto B6c7478;
case 0x6c747b:c.instructions+=6;goto B6c747b;
case 0x6c747e:c.instructions+=5;goto B6c747e;
case 0x6c7480:c.instructions+=4;goto B6c7480;
case 0x6c7482:c.instructions+=3;goto B6c7482;
case 0x6c7484:c.instructions+=2;goto B6c7484;
case 0x6c7486:c.instructions+=1;goto B6c7486;
case 0x6c748c:goto L6c748c;
case 0x6c7491:c.instructions+=2;goto B6c7491;
case 0x6c7494:c.instructions+=1;goto B6c7494;
case 0x6c749a:goto L6c749a;
case 0x6c749e:c.instructions+=1;goto B6c749e;
case 0x6c74a4:goto L6c74a4;
case 0x6c74a7:c.instructions+=4;goto B6c74a7;
case 0x6c74aa:c.instructions+=3;goto B6c74aa;
case 0x6c74ac:c.instructions+=2;goto B6c74ac;
case 0x6c74af:c.instructions+=1;goto B6c74af;
case 0x6c74b5:goto L6c74b5;
case 0x6c74b8:goto L6c74b8;
case 0x6c74bc:c.instructions+=6;goto B6c74bc;
case 0x6c74be:c.instructions+=5;goto B6c74be;
case 0x6c74bf:c.instructions+=4;goto B6c74bf;
case 0x6c74c1:c.instructions+=3;goto B6c74c1;
case 0x6c74c4:c.instructions+=2;goto B6c74c4;
case 0x6c74c7:c.instructions+=1;goto B6c74c7;
case 0x6c74cd:goto L6c74cd;
case 0x6c74d3:c.instructions+=1;goto B6c74d3;
case 0x6c74d9:goto L6c74d9;
case 0x6c74dc:c.instructions+=9;goto B6c74dc;
case 0x6c74e3:c.instructions+=8;goto B6c74e3;
case 0x6c74e6:c.instructions+=7;goto B6c74e6;
case 0x6c74e9:c.instructions+=6;goto B6c74e9;
case 0x6c74ec:c.instructions+=5;goto B6c74ec;
case 0x6c74ef:c.instructions+=4;goto B6c74ef;
case 0x6c74f2:c.instructions+=3;goto B6c74f2;
case 0x6c74f7:c.instructions+=2;goto B6c74f7;
case 0x6c74fa:c.instructions+=1;goto B6c74fa;
case 0x6c74fc:goto L6c74fc;
case 0x6c7500:c.instructions+=1;goto B6c7500;
case 0x6c7504:goto L6c7504;
case 0x6c7506:c.instructions+=5;goto B6c7506;
case 0x6c7509:c.instructions+=4;goto B6c7509;
case 0x6c750b:c.instructions+=3;goto B6c750b;
case 0x6c750d:c.instructions+=2;goto B6c750d;
case 0x6c7510:c.instructions+=1;goto B6c7510;
case 0x6c7512:goto L6c7512;
case 0x6c7516:goto L6c7516;
case 0x6c7518:c.instructions+=5;goto B6c7518;
case 0x6c751b:c.instructions+=4;goto B6c751b;
case 0x6c751d:c.instructions+=3;goto B6c751d;
case 0x6c751f:c.instructions+=2;goto B6c751f;
case 0x6c7522:c.instructions+=1;goto B6c7522;
case 0x6c7524:goto L6c7524;
case 0x6c7528:goto L6c7528;
case 0x6c752b:c.instructions+=8;goto B6c752b;
case 0x6c7532:c.instructions+=7;goto B6c7532;
case 0x6c7535:c.instructions+=6;goto B6c7535;
case 0x6c7538:c.instructions+=5;goto B6c7538;
case 0x6c753b:c.instructions+=4;goto B6c753b;
case 0x6c753e:c.instructions+=3;goto B6c753e;
case 0x6c7540:c.instructions+=2;goto B6c7540;
case 0x6c7543:c.instructions+=1;goto B6c7543;
case 0x6c7545:goto L6c7545;
case 0x6c7548:c.instructions+=1;goto B6c7548;
case 0x6c754b:goto L6c754b;
case 0x6c754d:c.instructions+=5;goto B6c754d;
case 0x6c7550:c.instructions+=4;goto B6c7550;
case 0x6c7552:c.instructions+=3;goto B6c7552;
case 0x6c7554:c.instructions+=2;goto B6c7554;
case 0x6c7557:c.instructions+=1;goto B6c7557;
case 0x6c7559:goto L6c7559;
case 0x6c755c:goto L6c755c;
case 0x6c755e:c.instructions+=5;goto B6c755e;
case 0x6c7561:c.instructions+=4;goto B6c7561;
case 0x6c7563:c.instructions+=3;goto B6c7563;
case 0x6c7565:c.instructions+=2;goto B6c7565;
case 0x6c7568:c.instructions+=1;goto B6c7568;
case 0x6c756a:goto L6c756a;
case 0x6c756d:goto L6c756d;
case 0x6c7570:c.instructions+=2;goto B6c7570;
case 0x6c7573:c.instructions+=1;goto B6c7573;
case 0x6c7579:goto L6c7579;
case 0x6c757c:c.instructions+=3;goto B6c757c;
case 0x6c757e:c.instructions+=2;goto B6c757e;
case 0x6c7580:c.instructions+=1;goto B6c7580;
case 0x6c7582:goto L6c7582;
case 0x6c7585:c.instructions+=1;goto B6c7585;
case 0x6c758b:goto L6c758b;
case 0x6c758d:c.instructions+=1;goto B6c758d;
case 0x6c7592:goto L6c7592;
case 0x6c7594:c.instructions+=1;goto B6c7594;
case 0x6c7596:goto L6c7596;
case 0x6c7598:c.instructions+=1;goto B6c7598;
case 0x6c759d:goto L6c759d;
case 0x6c759f:c.instructions+=2;goto B6c759f;
case 0x6c75a2:c.instructions+=1;goto B6c75a2;
case 0x6c75a4:goto L6c75a4;
case 0x6c75a8:c.instructions+=1;goto B6c75a8;
case 0x6c75ab:goto L6c75ab;
case 0x6c75ad:c.instructions+=1;goto B6c75ad;
case 0x6c75af:goto L6c75af;
case 0x6c75b4:c.instructions+=1;goto B6c75b4;
case 0x6c75b9:goto L6c75b9;
case 0x6c75bb:c.instructions+=3;goto B6c75bb;
case 0x6c75c0:c.instructions+=2;goto B6c75c0;
case 0x6c75c4:c.instructions+=1;goto B6c75c4;
case 0x6c75c6:goto L6c75c6;
case 0x6c75cb:c.instructions+=1;goto B6c75cb;
case 0x6c75cd:goto L6c75cd;
case 0x6c75d2:goto L6c75d2;
case 0x6c75d4:c.instructions+=6;goto B6c75d4;
case 0x6c75d5:c.instructions+=5;goto B6c75d5;
case 0x6c75d8:c.instructions+=4;goto B6c75d8;
case 0x6c75d9:c.instructions+=3;goto B6c75d9;
case 0x6c75da:c.instructions+=2;goto B6c75da;
case 0x6c75dc:c.instructions+=1;goto B6c75dc;
case 0x6c75e1:goto L6c75e1;
case 0x6c75e3:c.instructions+=3;goto B6c75e3;
case 0x6c75e6:c.instructions+=2;goto B6c75e6;
case 0x6c75e8:c.instructions+=1;goto B6c75e8;
case 0x6c75ea:goto L6c75ea;
case 0x6c75f0:c.instructions+=1;goto B6c75f0;
case 0x6c75f5:goto L6c75f5;
case 0x6c75f7:c.instructions+=2;goto B6c75f7;
case 0x6c75fa:c.instructions+=1;goto B6c75fa;
case 0x6c75fc:goto L6c75fc;
case 0x6c75fe:goto L6c75fe;
case 0x6c7600:c.instructions+=1;goto B6c7600;
case 0x6c7605:goto L6c7605;
case 0x6c7608:c.instructions+=1;goto B6c7608;
case 0x6c760a:goto L6c760a;
case 0x6c7610:c.instructions+=7;goto B6c7610;
case 0x6c7613:c.instructions+=6;goto B6c7613;
case 0x6c7615:c.instructions+=5;goto B6c7615;
case 0x6c7618:c.instructions+=4;goto B6c7618;
case 0x6c761b:c.instructions+=3;goto B6c761b;
case 0x6c761d:c.instructions+=2;goto B6c761d;
case 0x6c761f:c.instructions+=1;goto B6c761f;
case 0x6c7622:goto L6c7622;
case 0x6c7624:goto L6c7624;
case 0x6c7626:c.instructions+=2;goto B6c7626;
case 0x6c7629:c.instructions+=1;goto B6c7629;
case 0x6c762c:goto L6c762c;
case 0x6c762e:goto L6c762e;
case 0x6c7631:c.instructions+=4;goto B6c7631;
case 0x6c7633:c.instructions+=3;goto B6c7633;
case 0x6c7635:c.instructions+=2;goto B6c7635;
case 0x6c7638:c.instructions+=1;goto B6c7638;
case 0x6c763b:goto L6c763b;
case 0x6c763d:goto L6c763d;
case 0x6c763f:c.instructions+=1;goto B6c763f;
case 0x6c7642:goto L6c7642;
case 0x6c7644:goto L6c7644;
case 0x6c7647:goto L6c7647;
case 0x6c764a:c.instructions+=4;goto B6c764a;
case 0x6c764d:c.instructions+=3;goto B6c764d;
case 0x6c764f:c.instructions+=2;goto B6c764f;
case 0x6c7652:c.instructions+=1;goto B6c7652;
case 0x6c7654:goto L6c7654;
case 0x6c7656:goto L6c7656;
case 0x6c7658:c.instructions+=1;goto B6c7658;
case 0x6c765b:goto L6c765b;
case 0x6c765d:goto L6c765d;
case 0x6c7663:c.instructions+=2;goto B6c7663;
case 0x6c7664:c.instructions+=1;goto B6c7664;
case 0x6c7669:goto L6c7669;
case 0x6c766c:c.instructions+=3;goto B6c766c;
case 0x6c766e:c.instructions+=2;goto B6c766e;
case 0x6c7670:c.instructions+=1;goto B6c7670;
case 0x6c7675:goto L6c7675;
case 0x6c7677:c.instructions+=1;goto B6c7677;
case 0x6c7679:goto L6c7679;
case 0x6c767b:c.instructions+=1;goto B6c767b;
case 0x6c767c:goto L6c767c;
case 0x6c767d:c.instructions+=4;goto B6c767d;
case 0x6c767e:c.instructions+=3;goto B6c767e;
case 0x6c767f:c.instructions+=2;goto B6c767f;
case 0x6c7680:c.instructions+=1;goto B6c7680;
case 0x6c7681:goto L6c7681;
case 0x6c7683:c.instructions+=24;goto B6c7683;
case 0x6c7684:c.instructions+=23;goto B6c7684;
case 0x6c7686:c.instructions+=22;goto B6c7686;
case 0x6c768c:c.instructions+=21;goto B6c768c;
case 0x6c768f:c.instructions+=20;goto B6c768f;
case 0x6c7690:c.instructions+=19;goto B6c7690;
case 0x6c7692:c.instructions+=18;goto B6c7692;
case 0x6c7695:c.instructions+=17;goto B6c7695;
case 0x6c7698:c.instructions+=16;goto B6c7698;
case 0x6c769b:c.instructions+=15;goto B6c769b;
case 0x6c769e:c.instructions+=14;goto B6c769e;
case 0x6c76a1:c.instructions+=13;goto B6c76a1;
case 0x6c76a4:c.instructions+=12;goto B6c76a4;
case 0x6c76aa:c.instructions+=11;goto B6c76aa;
case 0x6c76ac:c.instructions+=10;goto B6c76ac;
case 0x6c76ae:c.instructions+=9;goto B6c76ae;
case 0x6c76af:c.instructions+=8;goto B6c76af;
case 0x6c76b1:c.instructions+=7;goto B6c76b1;
case 0x6c76b7:c.instructions+=6;goto B6c76b7;
case 0x6c76bc:c.instructions+=5;goto B6c76bc;
case 0x6c76c1:c.instructions+=4;goto B6c76c1;
case 0x6c76c4:c.instructions+=3;goto B6c76c4;
case 0x6c76c7:c.instructions+=2;goto B6c76c7;
case 0x6c76ca:c.instructions+=1;goto B6c76ca;
case 0x6c76cc:goto L6c76cc;
case 0x6c76ce:c.instructions+=2;goto B6c76ce;
case 0x6c76cf:c.instructions+=1;goto B6c76cf;
case 0x6c76d4:goto L6c76d4;
case 0x6c76d6:c.instructions+=1;goto B6c76d6;
case 0x6c76db:goto L6c76db;
case 0x6c76dd:c.instructions+=1;goto B6c76dd;
case 0x6c76df:goto L6c76df;
case 0x6c76e1:c.instructions+=1;goto B6c76e1;
case 0x6c76e6:goto L6c76e6;
case 0x6c76e9:c.instructions+=1;goto B6c76e9;
case 0x6c76eb:goto L6c76eb;
case 0x6c76ee:goto L6c76ee;
case 0x6c76ef:c.instructions+=3;goto B6c76ef;
case 0x6c76f2:c.instructions+=2;goto B6c76f2;
case 0x6c76f4:c.instructions+=1;goto B6c76f4;
case 0x6c76f6:goto L6c76f6;
case 0x6c76fb:c.instructions+=1;goto B6c76fb;
case 0x6c7700:goto L6c7700;
case 0x6c7706:c.instructions+=2;goto B6c7706;
case 0x6c7708:c.instructions+=1;goto B6c7708;
case 0x6c770d:goto L6c770d;
case 0x6c770f:c.instructions+=2;goto B6c770f;
case 0x6c7711:c.instructions+=1;goto B6c7711;
case 0x6c7713:goto L6c7713;
case 0x6c7715:c.instructions+=2;goto B6c7715;
case 0x6c7717:c.instructions+=1;goto B6c7717;
case 0x6c771c:goto L6c771c;
case 0x6c771e:c.instructions+=1;goto B6c771e;
case 0x6c7723:goto L6c7723;
case 0x6c7726:c.instructions+=7;goto B6c7726;
case 0x6c7728:c.instructions+=6;goto B6c7728;
case 0x6c772a:c.instructions+=5;goto B6c772a;
case 0x6c7731:c.instructions+=4;goto B6c7731;
case 0x6c7738:c.instructions+=3;goto B6c7738;
case 0x6c773e:c.instructions+=2;goto B6c773e;
case 0x6c7741:c.instructions+=1;goto B6c7741;
case 0x6c7747:goto L6c7747;
case 0x6c774a:c.instructions+=2;goto B6c774a;
case 0x6c774d:c.instructions+=1;goto B6c774d;
case 0x6c774f:goto L6c774f;
case 0x6c7752:goto L6c7752;
case 0x6c7758:c.instructions+=23;goto B6c7758;
case 0x6c775b:c.instructions+=22;goto B6c775b;
case 0x6c775e:c.instructions+=21;goto B6c775e;
case 0x6c7761:c.instructions+=20;goto B6c7761;
case 0x6c7764:c.instructions+=19;goto B6c7764;
case 0x6c7766:c.instructions+=18;goto B6c7766;
case 0x6c776c:c.instructions+=17;goto B6c776c;
case 0x6c776f:c.instructions+=16;goto B6c776f;
case 0x6c7772:c.instructions+=15;goto B6c7772;
case 0x6c7775:c.instructions+=14;goto B6c7775;
case 0x6c7777:c.instructions+=13;goto B6c7777;
case 0x6c777d:c.instructions+=12;goto B6c777d;
case 0x6c7780:c.instructions+=11;goto B6c7780;
case 0x6c7783:c.instructions+=10;goto B6c7783;
case 0x6c7786:c.instructions+=9;goto B6c7786;
case 0x6c7789:c.instructions+=8;goto B6c7789;
case 0x6c778d:c.instructions+=7;goto B6c778d;
case 0x6c778f:c.instructions+=6;goto B6c778f;
case 0x6c7792:c.instructions+=5;goto B6c7792;
case 0x6c7793:c.instructions+=4;goto B6c7793;
case 0x6c7795:c.instructions+=3;goto B6c7795;
case 0x6c7798:c.instructions+=2;goto B6c7798;
case 0x6c779a:c.instructions+=1;goto B6c779a;
case 0x6c77a0:goto L6c77a0;
case 0x6c77a2:goto L6c77a2;
case 0x6c77a5:c.instructions+=11;goto B6c77a5;
case 0x6c77a6:c.instructions+=10;goto B6c77a6;
case 0x6c77ac:c.instructions+=9;goto B6c77ac;
case 0x6c77ad:c.instructions+=8;goto B6c77ad;
case 0x6c77b0:c.instructions+=7;goto B6c77b0;
case 0x6c77b1:c.instructions+=6;goto B6c77b1;
case 0x6c77b7:c.instructions+=5;goto B6c77b7;
case 0x6c77b8:c.instructions+=4;goto B6c77b8;
case 0x6c77bd:c.instructions+=3;goto B6c77bd;
case 0x6c77be:c.instructions+=2;goto B6c77be;
case 0x6c77c0:c.instructions+=1;goto B6c77c0;
case 0x6c77c5:goto L6c77c5;
case 0x6c77c7:c.instructions+=1;goto B6c77c7;
case 0x6c77cd:goto L6c77cd;
case 0x6c77d3:c.instructions+=2;goto B6c77d3;
case 0x6c77d9:c.instructions+=1;goto B6c77d9;
case 0x6c77df:goto L6c77df;
case 0x6c77e2:c.instructions+=14;goto B6c77e2;
case 0x6c77e4:c.instructions+=13;goto B6c77e4;
case 0x6c77e6:c.instructions+=12;goto B6c77e6;
case 0x6c77e9:c.instructions+=11;goto B6c77e9;
case 0x6c77ea:c.instructions+=10;goto B6c77ea;
case 0x6c77f0:c.instructions+=9;goto B6c77f0;
case 0x6c77f1:c.instructions+=8;goto B6c77f1;
case 0x6c77f4:c.instructions+=7;goto B6c77f4;
case 0x6c77f5:c.instructions+=6;goto B6c77f5;
case 0x6c77fb:c.instructions+=5;goto B6c77fb;
case 0x6c77fc:c.instructions+=4;goto B6c77fc;
case 0x6c7801:c.instructions+=3;goto B6c7801;
case 0x6c7802:c.instructions+=2;goto B6c7802;
case 0x6c7804:c.instructions+=1;goto B6c7804;
case 0x6c7809:goto L6c7809;
case 0x6c780f:c.instructions+=2;goto B6c780f;
case 0x6c7815:c.instructions+=1;goto B6c7815;
case 0x6c7817:goto L6c7817;
case 0x6c781d:c.instructions+=2;goto B6c781d;
case 0x6c7820:c.instructions+=1;goto B6c7820;
case 0x6c7822:goto L6c7822;
case 0x6c7825:goto L6c7825;
case 0x6c7829:c.instructions+=1;goto B6c7829;
case 0x6c782f:goto L6c782f;
case 0x6c7832:c.instructions+=6;goto B6c7832;
case 0x6c7834:c.instructions+=5;goto B6c7834;
case 0x6c7837:c.instructions+=4;goto B6c7837;
case 0x6c783a:c.instructions+=3;goto B6c783a;
case 0x6c783d:c.instructions+=2;goto B6c783d;
case 0x6c7841:c.instructions+=1;goto B6c7841;
case 0x6c7847:goto L6c7847;
case 0x6c784a:c.instructions+=6;goto B6c784a;
case 0x6c784d:c.instructions+=5;goto B6c784d;
case 0x6c7850:c.instructions+=4;goto B6c7850;
case 0x6c7853:c.instructions+=3;goto B6c7853;
case 0x6c7856:c.instructions+=2;goto B6c7856;
case 0x6c7859:c.instructions+=1;goto B6c7859;
case 0x6c785f:goto L6c785f;
case 0x6c7862:c.instructions+=4;goto B6c7862;
case 0x6c7865:c.instructions+=3;goto B6c7865;
case 0x6c786b:c.instructions+=2;goto B6c786b;
case 0x6c786e:c.instructions+=1;goto B6c786e;
case 0x6c7874:goto L6c7874;
case 0x6c7877:c.instructions+=5;goto B6c7877;
case 0x6c787a:c.instructions+=4;goto B6c787a;
case 0x6c787d:c.instructions+=3;goto B6c787d;
case 0x6c7880:c.instructions+=2;goto B6c7880;
case 0x6c7882:c.instructions+=1;goto B6c7882;
case 0x6c7884:goto L6c7884;
case 0x6c7888:c.instructions+=1;goto B6c7888;
case 0x6c788a:goto L6c788a;
case 0x6c788d:c.instructions+=6;goto B6c788d;
case 0x6c7890:c.instructions+=5;goto B6c7890;
case 0x6c7892:c.instructions+=4;goto B6c7892;
case 0x6c7894:c.instructions+=3;goto B6c7894;
case 0x6c789a:c.instructions+=2;goto B6c789a;
case 0x6c78a0:c.instructions+=1;goto B6c78a0;
case 0x6c78a2:goto L6c78a2;
case 0x6c78a6:c.instructions+=3;goto B6c78a6;
case 0x6c78a9:c.instructions+=2;goto B6c78a9;
case 0x6c78b0:c.instructions+=1;goto B6c78b0;
case 0x6c78b2:goto L6c78b2;
case 0x6c78b5:goto L6c78b5;
case 0x6c78b7:c.instructions+=1;goto B6c78b7;
case 0x6c78b9:goto L6c78b9;
case 0x6c78bc:c.instructions+=4;goto B6c78bc;
case 0x6c78bf:c.instructions+=3;goto B6c78bf;
case 0x6c78c2:c.instructions+=2;goto B6c78c2;
case 0x6c78c5:c.instructions+=1;goto B6c78c5;
case 0x6c78c7:goto L6c78c7;
case 0x6c78c9:goto L6c78c9;
case 0x6c78cc:c.instructions+=4;goto B6c78cc;
case 0x6c78cf:c.instructions+=3;goto B6c78cf;
case 0x6c78d2:c.instructions+=2;goto B6c78d2;
case 0x6c78d5:c.instructions+=1;goto B6c78d5;
case 0x6c78d8:goto L6c78d8;
case 0x6c78db:c.instructions+=2;goto B6c78db;
case 0x6c78de:c.instructions+=1;goto B6c78de;
case 0x6c78e0:goto L6c78e0;
case 0x6c78e3:c.instructions+=6;goto B6c78e3;
case 0x6c78e6:c.instructions+=5;goto B6c78e6;
case 0x6c78e9:c.instructions+=4;goto B6c78e9;
case 0x6c78ec:c.instructions+=3;goto B6c78ec;
case 0x6c78f1:c.instructions+=2;goto B6c78f1;
case 0x6c78f4:c.instructions+=1;goto B6c78f4;
case 0x6c78fa:goto L6c78fa;
case 0x6c78fd:c.instructions+=3;goto B6c78fd;
case 0x6c7900:c.instructions+=2;goto B6c7900;
case 0x6c7903:c.instructions+=1;goto B6c7903;
case 0x6c7909:goto L6c7909;
case 0x6c790f:c.instructions+=5;goto B6c790f;
case 0x6c7912:c.instructions+=4;goto B6c7912;
case 0x6c7914:c.instructions+=3;goto B6c7914;
case 0x6c7916:c.instructions+=2;goto B6c7916;
case 0x6c7919:c.instructions+=1;goto B6c7919;
case 0x6c791f:goto L6c791f;
case 0x6c7925:c.instructions+=5;goto B6c7925;
case 0x6c7928:c.instructions+=4;goto B6c7928;
case 0x6c792a:c.instructions+=3;goto B6c792a;
case 0x6c792c:c.instructions+=2;goto B6c792c;
case 0x6c792f:c.instructions+=1;goto B6c792f;
case 0x6c7935:goto L6c7935;
case 0x6c7938:c.instructions+=9;goto B6c7938;
case 0x6c793b:c.instructions+=8;goto B6c793b;
case 0x6c793e:c.instructions+=7;goto B6c793e;
case 0x6c7941:c.instructions+=6;goto B6c7941;
case 0x6c7944:c.instructions+=5;goto B6c7944;
case 0x6c7947:c.instructions+=4;goto B6c7947;
case 0x6c794a:c.instructions+=3;goto B6c794a;
case 0x6c794d:c.instructions+=2;goto B6c794d;
case 0x6c7950:c.instructions+=1;goto B6c7950;
case 0x6c7956:goto L6c7956;
case 0x6c7959:c.instructions+=4;goto B6c7959;
case 0x6c795c:c.instructions+=3;goto B6c795c;
case 0x6c7960:c.instructions+=2;goto B6c7960;
case 0x6c7963:c.instructions+=1;goto B6c7963;
case 0x6c7969:goto L6c7969;
case 0x6c796d:c.instructions+=2;goto B6c796d;
case 0x6c7971:c.instructions+=1;goto B6c7971;
case 0x6c7977:goto L6c7977;
case 0x6c797a:c.instructions+=8;goto B6c797a;
case 0x6c797d:c.instructions+=7;goto B6c797d;
case 0x6c7980:c.instructions+=6;goto B6c7980;
case 0x6c7983:c.instructions+=5;goto B6c7983;
case 0x6c7986:c.instructions+=4;goto B6c7986;
case 0x6c7989:c.instructions+=3;goto B6c7989;
case 0x6c798d:c.instructions+=2;goto B6c798d;
case 0x6c7990:c.instructions+=1;goto B6c7990;
case 0x6c7992:goto L6c7992;
case 0x6c7995:c.instructions+=3;goto B6c7995;
case 0x6c7998:c.instructions+=2;goto B6c7998;
case 0x6c799b:c.instructions+=1;goto B6c799b;
case 0x6c79a1:goto L6c79a1;
case 0x6c79a4:c.instructions+=6;goto B6c79a4;
case 0x6c79a7:c.instructions+=5;goto B6c79a7;
case 0x6c79a9:c.instructions+=4;goto B6c79a9;
case 0x6c79ab:c.instructions+=3;goto B6c79ab;
case 0x6c79b1:c.instructions+=2;goto B6c79b1;
case 0x6c79b7:c.instructions+=1;goto B6c79b7;
case 0x6c79b9:goto L6c79b9;
case 0x6c79bd:c.instructions+=3;goto B6c79bd;
case 0x6c79c0:c.instructions+=2;goto B6c79c0;
case 0x6c79c7:c.instructions+=1;goto B6c79c7;
case 0x6c79c9:goto L6c79c9;
case 0x6c79cc:goto L6c79cc;
case 0x6c79ce:c.instructions+=1;goto B6c79ce;
case 0x6c79d0:goto L6c79d0;
case 0x6c79d3:c.instructions+=4;goto B6c79d3;
case 0x6c79d6:c.instructions+=3;goto B6c79d6;
case 0x6c79d9:c.instructions+=2;goto B6c79d9;
case 0x6c79dc:c.instructions+=1;goto B6c79dc;
case 0x6c79de:goto L6c79de;
case 0x6c79e0:goto L6c79e0;
case 0x6c79e3:c.instructions+=4;goto B6c79e3;
case 0x6c79e6:c.instructions+=3;goto B6c79e6;
case 0x6c79e9:c.instructions+=2;goto B6c79e9;
case 0x6c79ec:c.instructions+=1;goto B6c79ec;
case 0x6c79ee:goto L6c79ee;
case 0x6c79f1:goto L6c79f1;
case 0x6c79f4:c.instructions+=3;goto B6c79f4;
case 0x6c79f7:c.instructions+=2;goto B6c79f7;
case 0x6c79fa:c.instructions+=1;goto B6c79fa;
case 0x6c79fc:goto L6c79fc;
case 0x6c79ff:c.instructions+=1;goto B6c79ff;
case 0x6c7a01:goto L6c7a01;
case 0x6c7a03:c.instructions+=5;goto B6c7a03;
case 0x6c7a04:c.instructions+=4;goto B6c7a04;
case 0x6c7a06:c.instructions+=3;goto B6c7a06;
case 0x6c7a0b:c.instructions+=2;goto B6c7a0b;
case 0x6c7a0d:c.instructions+=1;goto B6c7a0d;
case 0x6c7a12:goto L6c7a12;
case 0x6c7a14:c.instructions+=8;goto B6c7a14;
case 0x6c7a15:c.instructions+=7;goto B6c7a15;
case 0x6c7a16:c.instructions+=6;goto B6c7a16;
case 0x6c7a19:c.instructions+=5;goto B6c7a19;
case 0x6c7a1b:c.instructions+=4;goto B6c7a1b;
case 0x6c7a1d:c.instructions+=3;goto B6c7a1d;
case 0x6c7a1e:c.instructions+=2;goto B6c7a1e;
case 0x6c7a20:c.instructions+=1;goto B6c7a20;
case 0x6c7a25:goto L6c7a25;
case 0x6c7a27:c.instructions+=2;goto B6c7a27;
case 0x6c7a2a:c.instructions+=1;goto B6c7a2a;
case 0x6c7a2d:goto L6c7a2d;
case 0x6c7a30:c.instructions+=3;goto B6c7a30;
case 0x6c7a33:c.instructions+=2;goto B6c7a33;
case 0x6c7a36:c.instructions+=1;goto B6c7a36;
case 0x6c7a38:goto L6c7a38;
case 0x6c7a3b:c.instructions+=2;goto B6c7a3b;
case 0x6c7a3e:c.instructions+=1;goto B6c7a3e;
case 0x6c7a41:goto L6c7a41;
case 0x6c7a44:goto L6c7a44;
case 0x6c7a47:c.instructions+=3;goto B6c7a47;
case 0x6c7a4a:c.instructions+=2;goto B6c7a4a;
case 0x6c7a4d:c.instructions+=1;goto B6c7a4d;
case 0x6c7a53:goto L6c7a53;
case 0x6c7a56:c.instructions+=1;goto B6c7a56;
case 0x6c7a59:goto L6c7a59;
case 0x6c7a5a:c.instructions+=3;goto B6c7a5a;
case 0x6c7a5d:c.instructions+=2;goto B6c7a5d;
case 0x6c7a60:c.instructions+=1;goto B6c7a60;
case 0x6c7a66:goto L6c7a66;
case 0x6c7a69:c.instructions+=1;goto B6c7a69;
case 0x6c7a6f:goto L6c7a6f;
case 0x6c7a71:c.instructions+=1;goto B6c7a71;
case 0x6c7a76:goto L6c7a76;
case 0x6c7a78:c.instructions+=1;goto B6c7a78;
case 0x6c7a7a:goto L6c7a7a;
case 0x6c7a7c:c.instructions+=1;goto B6c7a7c;
case 0x6c7a81:goto L6c7a81;
case 0x6c7a83:c.instructions+=1;goto B6c7a83;
case 0x6c7a85:goto L6c7a85;
case 0x6c7a87:goto L6c7a87;
case 0x6c7a89:c.instructions+=1;goto B6c7a89;
case 0x6c7a8f:goto L6c7a8f;
case 0x6c7a91:c.instructions+=5;goto B6c7a91;
case 0x6c7a93:c.instructions+=4;goto B6c7a93;
case 0x6c7a95:c.instructions+=3;goto B6c7a95;
case 0x6c7a9a:c.instructions+=2;goto B6c7a9a;
case 0x6c7a9c:c.instructions+=1;goto B6c7a9c;
case 0x6c7aa1:goto L6c7aa1;
case 0x6c7aa3:c.instructions+=3;goto B6c7aa3;
case 0x6c7aa5:c.instructions+=2;goto B6c7aa5;
case 0x6c7aa7:c.instructions+=1;goto B6c7aa7;
case 0x6c7aad:goto L6c7aad;
case 0x6c7ab0:c.instructions+=1;goto B6c7ab0;
case 0x6c7ab5:goto L6c7ab5;
case 0x6c7ab7:c.instructions+=2;goto B6c7ab7;
case 0x6c7ab9:c.instructions+=1;goto B6c7ab9;
case 0x6c7abf:goto L6c7abf;
case 0x6c7ac2:c.instructions+=21;goto B6c7ac2;
case 0x6c7ac4:c.instructions+=20;goto B6c7ac4;
case 0x6c7ac7:c.instructions+=19;goto B6c7ac7;
case 0x6c7ac9:c.instructions+=18;goto B6c7ac9;
case 0x6c7acc:c.instructions+=17;goto B6c7acc;
case 0x6c7ace:c.instructions+=16;goto B6c7ace;
case 0x6c7ad1:c.instructions+=15;goto B6c7ad1;
case 0x6c7ad3:c.instructions+=14;goto B6c7ad3;
case 0x6c7ad6:c.instructions+=13;goto B6c7ad6;
case 0x6c7ad8:c.instructions+=12;goto B6c7ad8;
case 0x6c7adb:c.instructions+=11;goto B6c7adb;
case 0x6c7ade:c.instructions+=10;goto B6c7ade;
case 0x6c7ae0:c.instructions+=9;goto B6c7ae0;
case 0x6c7ae3:c.instructions+=8;goto B6c7ae3;
case 0x6c7ae4:c.instructions+=7;goto B6c7ae4;
case 0x6c7ae5:c.instructions+=6;goto B6c7ae5;
case 0x6c7ae8:c.instructions+=5;goto B6c7ae8;
case 0x6c7aea:c.instructions+=4;goto B6c7aea;
case 0x6c7aed:c.instructions+=3;goto B6c7aed;
case 0x6c7aef:c.instructions+=2;goto B6c7aef;
case 0x6c7af2:c.instructions+=1;goto B6c7af2;
case 0x6c7af7:goto L6c7af7;
case 0x6c7af9:c.instructions+=10;goto B6c7af9;
case 0x6c7afc:c.instructions+=9;goto B6c7afc;
case 0x6c7afd:c.instructions+=8;goto B6c7afd;
case 0x6c7afe:c.instructions+=7;goto B6c7afe;
case 0x6c7b01:c.instructions+=6;goto B6c7b01;
case 0x6c7b04:c.instructions+=5;goto B6c7b04;
case 0x6c7b06:c.instructions+=4;goto B6c7b06;
case 0x6c7b09:c.instructions+=3;goto B6c7b09;
case 0x6c7b0b:c.instructions+=2;goto B6c7b0b;
case 0x6c7b0e:c.instructions+=1;goto B6c7b0e;
case 0x6c7b13:goto L6c7b13;
case 0x6c7b16:c.instructions+=4;goto B6c7b16;
case 0x6c7b19:c.instructions+=3;goto B6c7b19;
case 0x6c7b1c:c.instructions+=2;goto B6c7b1c;
case 0x6c7b1d:c.instructions+=1;goto B6c7b1d;
case 0x6c7b22:goto L6c7b22;
case 0x6c7b24:c.instructions+=3;goto B6c7b24;
case 0x6c7b26:c.instructions+=2;goto B6c7b26;
case 0x6c7b28:c.instructions+=1;goto B6c7b28;
case 0x6c7b2d:goto L6c7b2d;
case 0x6c7b2f:c.instructions+=1;goto B6c7b2f;
case 0x6c7b31:goto L6c7b31;
case 0x6c7b34:c.instructions+=5;goto B6c7b34;
case 0x6c7b38:c.instructions+=4;goto B6c7b38;
case 0x6c7b39:c.instructions+=3;goto B6c7b39;
case 0x6c7b3c:c.instructions+=2;goto B6c7b3c;
case 0x6c7b3f:c.instructions+=1;goto B6c7b3f;
case 0x6c7b45:goto L6c7b45;
case 0x6c7b47:goto L6c7b47;
case 0x6c7b48:goto L6c7b48;
case 0x6c7b49:c.instructions+=3;goto B6c7b49;
case 0x6c7b4a:c.instructions+=2;goto B6c7b4a;
case 0x6c7b4b:c.instructions+=1;goto B6c7b4b;
case 0x6c7b4c:goto L6c7b4c;
case 0x6c7b4e:c.instructions+=1;goto B6c7b4e;
case 0x6c7b53:goto L6c7b53;
case 0x6c7b55:c.instructions+=1;goto B6c7b55;
case 0x6c7b57:goto L6c7b57;
case 0x6c7b59:c.instructions+=1;goto B6c7b59;
case 0x6c7b5b:goto L6c7b5b;
case 0x6c7b5d:c.instructions+=25;goto B6c7b5d;
case 0x6c7b5e:c.instructions+=24;goto B6c7b5e;
case 0x6c7b60:c.instructions+=23;goto B6c7b60;
case 0x6c7b66:c.instructions+=22;goto B6c7b66;
case 0x6c7b69:c.instructions+=21;goto B6c7b69;
case 0x6c7b6a:c.instructions+=20;goto B6c7b6a;
case 0x6c7b6b:c.instructions+=19;goto B6c7b6b;
case 0x6c7b6e:c.instructions+=18;goto B6c7b6e;
case 0x6c7b71:c.instructions+=17;goto B6c7b71;
case 0x6c7b74:c.instructions+=16;goto B6c7b74;
case 0x6c7b77:c.instructions+=15;goto B6c7b77;
case 0x6c7b7a:c.instructions+=14;goto B6c7b7a;
case 0x6c7b7d:c.instructions+=13;goto B6c7b7d;
case 0x6c7b7f:c.instructions+=12;goto B6c7b7f;
case 0x6c7b85:c.instructions+=11;goto B6c7b85;
case 0x6c7b87:c.instructions+=10;goto B6c7b87;
case 0x6c7b89:c.instructions+=9;goto B6c7b89;
case 0x6c7b8a:c.instructions+=8;goto B6c7b8a;
case 0x6c7b8c:c.instructions+=7;goto B6c7b8c;
case 0x6c7b92:c.instructions+=6;goto B6c7b92;
case 0x6c7b97:c.instructions+=5;goto B6c7b97;
case 0x6c7b9c:c.instructions+=4;goto B6c7b9c;
case 0x6c7b9f:c.instructions+=3;goto B6c7b9f;
case 0x6c7ba2:c.instructions+=2;goto B6c7ba2;
case 0x6c7ba5:c.instructions+=1;goto B6c7ba5;
case 0x6c7ba7:goto L6c7ba7;
case 0x6c7ba9:c.instructions+=2;goto B6c7ba9;
case 0x6c7baa:c.instructions+=1;goto B6c7baa;
case 0x6c7baf:goto L6c7baf;
case 0x6c7bb1:c.instructions+=1;goto B6c7bb1;
case 0x6c7bb6:goto L6c7bb6;
case 0x6c7bb8:c.instructions+=1;goto B6c7bb8;
case 0x6c7bba:goto L6c7bba;
case 0x6c7bbc:c.instructions+=1;goto B6c7bbc;
case 0x6c7bc1:goto L6c7bc1;
case 0x6c7bc3:goto L6c7bc3;
case 0x6c7bc5:c.instructions+=2;goto B6c7bc5;
case 0x6c7bc8:c.instructions+=1;goto B6c7bc8;
case 0x6c7bce:goto L6c7bce;
case 0x6c7bd4:c.instructions+=2;goto B6c7bd4;
case 0x6c7bd6:c.instructions+=1;goto B6c7bd6;
case 0x6c7bdb:goto L6c7bdb;
case 0x6c7bdd:c.instructions+=2;goto B6c7bdd;
case 0x6c7be0:c.instructions+=1;goto B6c7be0;
case 0x6c7be6:goto L6c7be6;
case 0x6c7bea:c.instructions+=5;goto B6c7bea;
case 0x6c7bec:c.instructions+=4;goto B6c7bec;
case 0x6c7bf3:c.instructions+=3;goto B6c7bf3;
case 0x6c7bfa:c.instructions+=2;goto B6c7bfa;
case 0x6c7c00:c.instructions+=1;goto B6c7c00;
case 0x6c7c06:goto L6c7c06;
case 0x6c7c09:c.instructions+=25;goto B6c7c09;
case 0x6c7c0c:c.instructions+=24;goto B6c7c0c;
case 0x6c7c0f:c.instructions+=23;goto B6c7c0f;
case 0x6c7c15:c.instructions+=22;goto B6c7c15;
case 0x6c7c18:c.instructions+=21;goto B6c7c18;
case 0x6c7c1b:c.instructions+=20;goto B6c7c1b;
case 0x6c7c1e:c.instructions+=19;goto B6c7c1e;
case 0x6c7c21:c.instructions+=18;goto B6c7c21;
case 0x6c7c24:c.instructions+=17;goto B6c7c24;
case 0x6c7c27:c.instructions+=16;goto B6c7c27;
case 0x6c7c29:c.instructions+=15;goto B6c7c29;
case 0x6c7c2f:c.instructions+=14;goto B6c7c2f;
case 0x6c7c32:c.instructions+=13;goto B6c7c32;
case 0x6c7c35:c.instructions+=12;goto B6c7c35;
case 0x6c7c38:c.instructions+=11;goto B6c7c38;
case 0x6c7c3a:c.instructions+=10;goto B6c7c3a;
case 0x6c7c40:c.instructions+=9;goto B6c7c40;
case 0x6c7c43:c.instructions+=8;goto B6c7c43;
case 0x6c7c46:c.instructions+=7;goto B6c7c46;
case 0x6c7c49:c.instructions+=6;goto B6c7c49;
case 0x6c7c4c:c.instructions+=5;goto B6c7c4c;
case 0x6c7c4e:c.instructions+=4;goto B6c7c4e;
case 0x6c7c51:c.instructions+=3;goto B6c7c51;
case 0x6c7c52:c.instructions+=2;goto B6c7c52;
case 0x6c7c55:c.instructions+=1;goto B6c7c55;
case 0x6c7c5b:goto L6c7c5b;
case 0x6c7c5d:goto L6c7c5d;
case 0x6c7c5f:c.instructions+=20;goto B6c7c5f;
case 0x6c7c61:c.instructions+=19;goto B6c7c61;
case 0x6c7c64:c.instructions+=18;goto B6c7c64;
case 0x6c7c67:c.instructions+=17;goto B6c7c67;
case 0x6c7c6a:c.instructions+=16;goto B6c7c6a;
case 0x6c7c6d:c.instructions+=15;goto B6c7c6d;
case 0x6c7c6e:c.instructions+=14;goto B6c7c6e;
case 0x6c7c6f:c.instructions+=13;goto B6c7c6f;
case 0x6c7c70:c.instructions+=12;goto B6c7c70;
case 0x6c7c73:c.instructions+=11;goto B6c7c73;
case 0x6c7c74:c.instructions+=10;goto B6c7c74;
case 0x6c7c7a:c.instructions+=9;goto B6c7c7a;
case 0x6c7c7b:c.instructions+=8;goto B6c7c7b;
case 0x6c7c7e:c.instructions+=7;goto B6c7c7e;
case 0x6c7c7f:c.instructions+=6;goto B6c7c7f;
case 0x6c7c85:c.instructions+=5;goto B6c7c85;
case 0x6c7c86:c.instructions+=4;goto B6c7c86;
case 0x6c7c8b:c.instructions+=3;goto B6c7c8b;
case 0x6c7c8c:c.instructions+=2;goto B6c7c8c;
case 0x6c7c8e:c.instructions+=1;goto B6c7c8e;
case 0x6c7c93:goto L6c7c93;
case 0x6c7c95:c.instructions+=2;goto B6c7c95;
case 0x6c7c98:c.instructions+=1;goto B6c7c98;
case 0x6c7c9e:goto L6c7c9e;
case 0x6c7ca2:c.instructions+=14;goto B6c7ca2;
case 0x6c7ca3:c.instructions+=13;goto B6c7ca3;
case 0x6c7ca4:c.instructions+=12;goto B6c7ca4;
case 0x6c7ca7:c.instructions+=11;goto B6c7ca7;
case 0x6c7ca8:c.instructions+=10;goto B6c7ca8;
case 0x6c7cae:c.instructions+=9;goto B6c7cae;
case 0x6c7caf:c.instructions+=8;goto B6c7caf;
case 0x6c7cb2:c.instructions+=7;goto B6c7cb2;
case 0x6c7cb3:c.instructions+=6;goto B6c7cb3;
case 0x6c7cb9:c.instructions+=5;goto B6c7cb9;
case 0x6c7cba:c.instructions+=4;goto B6c7cba;
case 0x6c7cbf:c.instructions+=3;goto B6c7cbf;
case 0x6c7cc0:c.instructions+=2;goto B6c7cc0;
case 0x6c7cc2:c.instructions+=1;goto B6c7cc2;
case 0x6c7cc7:goto L6c7cc7;
case 0x6c7cc9:c.instructions+=2;goto B6c7cc9;
case 0x6c7ccc:c.instructions+=1;goto B6c7ccc;
case 0x6c7cce:goto L6c7cce;
case 0x6c7cd1:c.instructions+=1;goto B6c7cd1;
case 0x6c7cd3:goto L6c7cd3;
case 0x6c7cd7:c.instructions+=14;goto B6c7cd7;
case 0x6c7cd8:c.instructions+=13;goto B6c7cd8;
case 0x6c7cd9:c.instructions+=12;goto B6c7cd9;
case 0x6c7cdc:c.instructions+=11;goto B6c7cdc;
case 0x6c7cdd:c.instructions+=10;goto B6c7cdd;
case 0x6c7ce3:c.instructions+=9;goto B6c7ce3;
case 0x6c7ce4:c.instructions+=8;goto B6c7ce4;
case 0x6c7ce7:c.instructions+=7;goto B6c7ce7;
case 0x6c7ce8:c.instructions+=6;goto B6c7ce8;
case 0x6c7cee:c.instructions+=5;goto B6c7cee;
case 0x6c7cef:c.instructions+=4;goto B6c7cef;
case 0x6c7cf4:c.instructions+=3;goto B6c7cf4;
case 0x6c7cf5:c.instructions+=2;goto B6c7cf5;
case 0x6c7cf7:c.instructions+=1;goto B6c7cf7;
case 0x6c7cfc:goto L6c7cfc;
case 0x6c7cfe:c.instructions+=2;goto B6c7cfe;
case 0x6c7d01:c.instructions+=1;goto B6c7d01;
case 0x6c7d03:goto L6c7d03;
case 0x6c7d06:c.instructions+=1;goto B6c7d06;
case 0x6c7d08:goto L6c7d08;
case 0x6c7d0c:c.instructions+=14;goto B6c7d0c;
case 0x6c7d0d:c.instructions+=13;goto B6c7d0d;
case 0x6c7d0e:c.instructions+=12;goto B6c7d0e;
case 0x6c7d11:c.instructions+=11;goto B6c7d11;
case 0x6c7d12:c.instructions+=10;goto B6c7d12;
case 0x6c7d18:c.instructions+=9;goto B6c7d18;
case 0x6c7d19:c.instructions+=8;goto B6c7d19;
case 0x6c7d1c:c.instructions+=7;goto B6c7d1c;
case 0x6c7d1d:c.instructions+=6;goto B6c7d1d;
case 0x6c7d23:c.instructions+=5;goto B6c7d23;
case 0x6c7d24:c.instructions+=4;goto B6c7d24;
case 0x6c7d29:c.instructions+=3;goto B6c7d29;
case 0x6c7d2a:c.instructions+=2;goto B6c7d2a;
case 0x6c7d2c:c.instructions+=1;goto B6c7d2c;
case 0x6c7d31:goto L6c7d31;
case 0x6c7d33:c.instructions+=2;goto B6c7d33;
case 0x6c7d36:c.instructions+=1;goto B6c7d36;
case 0x6c7d38:goto L6c7d38;
case 0x6c7d3b:goto L6c7d3b;
case 0x6c7d41:c.instructions+=2;goto B6c7d41;
case 0x6c7d47:c.instructions+=1;goto B6c7d47;
case 0x6c7d4d:goto L6c7d4d;
case 0x6c7d51:c.instructions+=1;goto B6c7d51;
case 0x6c7d57:goto L6c7d57;
case 0x6c7d5d:c.instructions+=7;goto B6c7d5d;
case 0x6c7d60:c.instructions+=6;goto B6c7d60;
case 0x6c7d62:c.instructions+=5;goto B6c7d62;
case 0x6c7d65:c.instructions+=4;goto B6c7d65;
case 0x6c7d68:c.instructions+=3;goto B6c7d68;
case 0x6c7d6b:c.instructions+=2;goto B6c7d6b;
case 0x6c7d6e:c.instructions+=1;goto B6c7d6e;
case 0x6c7d74:goto L6c7d74;
case 0x6c7d77:c.instructions+=6;goto B6c7d77;
case 0x6c7d7a:c.instructions+=5;goto B6c7d7a;
case 0x6c7d7d:c.instructions+=4;goto B6c7d7d;
case 0x6c7d80:c.instructions+=3;goto B6c7d80;
case 0x6c7d84:c.instructions+=2;goto B6c7d84;
case 0x6c7d8a:c.instructions+=1;goto B6c7d8a;
case 0x6c7d90:goto L6c7d90;
case 0x6c7d93:c.instructions+=7;goto B6c7d93;
case 0x6c7d95:c.instructions+=6;goto B6c7d95;
case 0x6c7d98:c.instructions+=5;goto B6c7d98;
case 0x6c7d9b:c.instructions+=4;goto B6c7d9b;
case 0x6c7d9e:c.instructions+=3;goto B6c7d9e;
case 0x6c7da0:c.instructions+=2;goto B6c7da0;
case 0x6c7da3:c.instructions+=1;goto B6c7da3;
case 0x6c7da9:goto L6c7da9;
case 0x6c7dac:c.instructions+=1;goto B6c7dac;
case 0x6c7daf:goto L6c7daf;
case 0x6c7db1:c.instructions+=5;goto B6c7db1;
case 0x6c7db4:c.instructions+=4;goto B6c7db4;
case 0x6c7db6:c.instructions+=3;goto B6c7db6;
case 0x6c7db9:c.instructions+=2;goto B6c7db9;
case 0x6c7dbc:c.instructions+=1;goto B6c7dbc;
case 0x6c7dbe:goto L6c7dbe;
case 0x6c7dc4:c.instructions+=1;goto B6c7dc4;
case 0x6c7dc6:goto L6c7dc6;
case 0x6c7dc8:c.instructions+=2;goto B6c7dc8;
case 0x6c7dcb:c.instructions+=1;goto B6c7dcb;
case 0x6c7dd1:goto L6c7dd1;
case 0x6c7dd4:c.instructions+=1;goto B6c7dd4;
case 0x6c7dd6:goto L6c7dd6;
case 0x6c7dd8:goto L6c7dd8;
case 0x6c7ddb:c.instructions+=5;goto B6c7ddb;
case 0x6c7ddc:c.instructions+=4;goto B6c7ddc;
case 0x6c7ddf:c.instructions+=3;goto B6c7ddf;
case 0x6c7de2:c.instructions+=2;goto B6c7de2;
case 0x6c7de5:c.instructions+=1;goto B6c7de5;
case 0x6c7de7:goto L6c7de7;
case 0x6c7dea:c.instructions+=2;goto B6c7dea;
case 0x6c7dec:c.instructions+=1;goto B6c7dec;
case 0x6c7df2:goto L6c7df2;
case 0x6c7df5:c.instructions+=4;goto B6c7df5;
case 0x6c7df7:c.instructions+=3;goto B6c7df7;
case 0x6c7dfa:c.instructions+=2;goto B6c7dfa;
case 0x6c7dfc:c.instructions+=1;goto B6c7dfc;
case 0x6c7dfe:goto L6c7dfe;
case 0x6c7e01:c.instructions+=9;goto B6c7e01;
case 0x6c7e02:c.instructions+=8;goto B6c7e02;
case 0x6c7e08:c.instructions+=7;goto B6c7e08;
case 0x6c7e09:c.instructions+=6;goto B6c7e09;
case 0x6c7e0c:c.instructions+=5;goto B6c7e0c;
case 0x6c7e0d:c.instructions+=4;goto B6c7e0d;
case 0x6c7e13:c.instructions+=3;goto B6c7e13;
case 0x6c7e14:c.instructions+=2;goto B6c7e14;
case 0x6c7e19:c.instructions+=1;goto B6c7e19;
case 0x6c7e1b:goto L6c7e1b;
case 0x6c7e1e:c.instructions+=1;goto B6c7e1e;
case 0x6c7e20:goto L6c7e20;
case 0x6c7e23:c.instructions+=9;goto B6c7e23;
case 0x6c7e24:c.instructions+=8;goto B6c7e24;
case 0x6c7e2a:c.instructions+=7;goto B6c7e2a;
case 0x6c7e2b:c.instructions+=6;goto B6c7e2b;
case 0x6c7e2e:c.instructions+=5;goto B6c7e2e;
case 0x6c7e2f:c.instructions+=4;goto B6c7e2f;
case 0x6c7e35:c.instructions+=3;goto B6c7e35;
case 0x6c7e36:c.instructions+=2;goto B6c7e36;
case 0x6c7e3b:c.instructions+=1;goto B6c7e3b;
case 0x6c7e3d:goto L6c7e3d;
case 0x6c7e40:c.instructions+=1;goto B6c7e40;
case 0x6c7e42:goto L6c7e42;
case 0x6c7e45:c.instructions+=9;goto B6c7e45;
case 0x6c7e46:c.instructions+=8;goto B6c7e46;
case 0x6c7e4c:c.instructions+=7;goto B6c7e4c;
case 0x6c7e4d:c.instructions+=6;goto B6c7e4d;
case 0x6c7e50:c.instructions+=5;goto B6c7e50;
case 0x6c7e51:c.instructions+=4;goto B6c7e51;
case 0x6c7e57:c.instructions+=3;goto B6c7e57;
case 0x6c7e58:c.instructions+=2;goto B6c7e58;
case 0x6c7e5d:c.instructions+=1;goto B6c7e5d;
case 0x6c7e5f:goto L6c7e5f;
case 0x6c7e62:c.instructions+=8;goto B6c7e62;
case 0x6c7e63:c.instructions+=7;goto B6c7e63;
case 0x6c7e69:c.instructions+=6;goto B6c7e69;
case 0x6c7e6a:c.instructions+=5;goto B6c7e6a;
case 0x6c7e6d:c.instructions+=4;goto B6c7e6d;
case 0x6c7e6e:c.instructions+=3;goto B6c7e6e;
case 0x6c7e74:c.instructions+=2;goto B6c7e74;
case 0x6c7e75:c.instructions+=1;goto B6c7e75;
case 0x6c7e7a:goto L6c7e7a;
case 0x6c7e7d:c.instructions+=2;goto B6c7e7d;
case 0x6c7e7f:c.instructions+=1;goto B6c7e7f;
case 0x6c7e84:goto L6c7e84;
case 0x6c7e87:c.instructions+=3;goto B6c7e87;
case 0x6c7e8d:c.instructions+=2;goto B6c7e8d;
case 0x6c7e93:c.instructions+=1;goto B6c7e93;
case 0x6c7e95:goto L6c7e95;
case 0x6c7e9b:goto L6c7e9b;
case 0x6c7e9e:c.instructions+=1;goto B6c7e9e;
case 0x6c7ea4:goto L6c7ea4;
case 0x6c7ea7:c.instructions+=2;goto B6c7ea7;
case 0x6c7ea9:c.instructions+=1;goto B6c7ea9;
case 0x6c7eaf:goto L6c7eaf;
case 0x6c7eb2:c.instructions+=6;goto B6c7eb2;
case 0x6c7eb4:c.instructions+=5;goto B6c7eb4;
case 0x6c7eb7:c.instructions+=4;goto B6c7eb7;
case 0x6c7eba:c.instructions+=3;goto B6c7eba;
case 0x6c7ebd:c.instructions+=2;goto B6c7ebd;
case 0x6c7ec0:c.instructions+=1;goto B6c7ec0;
case 0x6c7ec6:goto L6c7ec6;
case 0x6c7ec9:c.instructions+=10;goto B6c7ec9;
case 0x6c7ecc:c.instructions+=9;goto B6c7ecc;
case 0x6c7ecf:c.instructions+=8;goto B6c7ecf;
case 0x6c7ed2:c.instructions+=7;goto B6c7ed2;
case 0x6c7ed5:c.instructions+=6;goto B6c7ed5;
case 0x6c7edb:c.instructions+=5;goto B6c7edb;
case 0x6c7ede:c.instructions+=4;goto B6c7ede;
case 0x6c7ee0:c.instructions+=3;goto B6c7ee0;
case 0x6c7ee3:c.instructions+=2;goto B6c7ee3;
case 0x6c7ee6:c.instructions+=1;goto B6c7ee6;
case 0x6c7eec:goto L6c7eec;
case 0x6c7eef:c.instructions+=4;goto B6c7eef;
case 0x6c7ef2:c.instructions+=3;goto B6c7ef2;
case 0x6c7ef5:c.instructions+=2;goto B6c7ef5;
case 0x6c7ef9:c.instructions+=1;goto B6c7ef9;
case 0x6c7eff:goto L6c7eff;
case 0x6c7f02:c.instructions+=3;goto B6c7f02;
case 0x6c7f05:c.instructions+=2;goto B6c7f05;
case 0x6c7f07:c.instructions+=1;goto B6c7f07;
case 0x6c7f09:goto L6c7f09;
case 0x6c7f0f:goto L6c7f0f;
case 0x6c7f12:c.instructions+=4;goto B6c7f12;
case 0x6c7f14:c.instructions+=3;goto B6c7f14;
case 0x6c7f16:c.instructions+=2;goto B6c7f16;
case 0x6c7f19:c.instructions+=1;goto B6c7f19;
case 0x6c7f1f:goto L6c7f1f;
case 0x6c7f22:c.instructions+=12;goto B6c7f22;
case 0x6c7f25:c.instructions+=11;goto B6c7f25;
case 0x6c7f28:c.instructions+=10;goto B6c7f28;
case 0x6c7f2e:c.instructions+=9;goto B6c7f2e;
case 0x6c7f31:c.instructions+=8;goto B6c7f31;
case 0x6c7f37:c.instructions+=7;goto B6c7f37;
case 0x6c7f3a:c.instructions+=6;goto B6c7f3a;
case 0x6c7f3d:c.instructions+=5;goto B6c7f3d;
case 0x6c7f40:c.instructions+=4;goto B6c7f40;
case 0x6c7f43:c.instructions+=3;goto B6c7f43;
case 0x6c7f46:c.instructions+=2;goto B6c7f46;
case 0x6c7f49:c.instructions+=1;goto B6c7f49;
case 0x6c7f4b:goto L6c7f4b;
case 0x6c7f4d:goto L6c7f4d;
case 0x6c7f50:goto L6c7f50;
case 0x6c7f54:c.instructions+=1;goto B6c7f54;
case 0x6c7f56:goto L6c7f56;
case 0x6c7f59:c.instructions+=5;goto B6c7f59;
case 0x6c7f5c:c.instructions+=4;goto B6c7f5c;
case 0x6c7f5e:c.instructions+=3;goto B6c7f5e;
case 0x6c7f64:c.instructions+=2;goto B6c7f64;
case 0x6c7f6a:c.instructions+=1;goto B6c7f6a;
case 0x6c7f6c:goto L6c7f6c;
case 0x6c7f6e:c.instructions+=4;goto B6c7f6e;
case 0x6c7f72:c.instructions+=3;goto B6c7f72;
case 0x6c7f75:c.instructions+=2;goto B6c7f75;
case 0x6c7f7c:c.instructions+=1;goto B6c7f7c;
case 0x6c7f7e:goto L6c7f7e;
case 0x6c7f81:goto L6c7f81;
case 0x6c7f83:c.instructions+=2;goto B6c7f83;
case 0x6c7f86:c.instructions+=1;goto B6c7f86;
case 0x6c7f88:goto L6c7f88;
case 0x6c7f8b:c.instructions+=5;goto B6c7f8b;
case 0x6c7f8e:c.instructions+=4;goto B6c7f8e;
case 0x6c7f91:c.instructions+=3;goto B6c7f91;
case 0x6c7f94:c.instructions+=2;goto B6c7f94;
case 0x6c7f97:c.instructions+=1;goto B6c7f97;
case 0x6c7f99:goto L6c7f99;
case 0x6c7f9c:c.instructions+=1;goto B6c7f9c;
case 0x6c7f9e:goto L6c7f9e;
case 0x6c7fa1:c.instructions+=8;goto B6c7fa1;
case 0x6c7fa4:c.instructions+=7;goto B6c7fa4;
case 0x6c7fa7:c.instructions+=6;goto B6c7fa7;
case 0x6c7faa:c.instructions+=5;goto B6c7faa;
case 0x6c7fad:c.instructions+=4;goto B6c7fad;
case 0x6c7fb0:c.instructions+=3;goto B6c7fb0;
case 0x6c7fb3:c.instructions+=2;goto B6c7fb3;
case 0x6c7fb6:c.instructions+=1;goto B6c7fb6;
case 0x6c7fb8:goto L6c7fb8;
case 0x6c7fbb:goto L6c7fbb;
case 0x6c7fbe:c.instructions+=5;goto B6c7fbe;
case 0x6c7fc1:c.instructions+=4;goto B6c7fc1;
case 0x6c7fc4:c.instructions+=3;goto B6c7fc4;
case 0x6c7fc7:c.instructions+=2;goto B6c7fc7;
case 0x6c7fcb:c.instructions+=1;goto B6c7fcb;
case 0x6c7fcd:goto L6c7fcd;
case 0x6c7fd0:c.instructions+=3;goto B6c7fd0;
case 0x6c7fd3:c.instructions+=2;goto B6c7fd3;
case 0x6c7fd7:c.instructions+=1;goto B6c7fd7;
case 0x6c7fd9:goto L6c7fd9;
case 0x6c7fdc:c.instructions+=6;goto B6c7fdc;
case 0x6c7fe2:c.instructions+=5;goto B6c7fe2;
case 0x6c7fe5:c.instructions+=4;goto B6c7fe5;
case 0x6c7fe7:c.instructions+=3;goto B6c7fe7;
case 0x6c7fe9:c.instructions+=2;goto B6c7fe9;
case 0x6c7fec:c.instructions+=1;goto B6c7fec;
case 0x6c7fee:goto L6c7fee;
case 0x6c7ff4:c.instructions+=5;goto B6c7ff4;
case 0x6c7ff7:c.instructions+=4;goto B6c7ff7;
case 0x6c7ff9:c.instructions+=3;goto B6c7ff9;
case 0x6c7ffb:c.instructions+=2;goto B6c7ffb;
case 0x6c7ffe:c.instructions+=1;goto B6c7ffe;
default:missing_instruction(c.pc);}
B6c7002:L6c7002:{c.instructions+=9;NFSU2_TR(0x6c7002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7003:{NFSU2_TR(0x6c7003);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7006:{NFSU2_TR(0x6c7006);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7007:{NFSU2_TR(0x6c7007);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c700a:{NFSU2_TR(0x6c700a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c700b:{NFSU2_TR(0x6c700b);
u8 U[4];
w4(U+0,u32(0x7bdc40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7010:{NFSU2_TR(0x6c7010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7011:{NFSU2_TR(0x6c7011);
__builtin_memmove((R+4),(R+24),4);
}
B6c7013:{NFSU2_TR(0x6c7013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7018ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7018:L6c7018:{c.instructions+=2;NFSU2_TR(0x6c7018);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c701a:{NFSU2_TR(0x6c701a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7099;}}
}
B6c701c:L6c701c:{c.instructions+=14;NFSU2_TR(0x6c701c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c701d:{NFSU2_TR(0x6c701d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c701e:{NFSU2_TR(0x6c701e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7021:{NFSU2_TR(0x6c7021);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7022:{NFSU2_TR(0x6c7022);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7028:{NFSU2_TR(0x6c7028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7029:{NFSU2_TR(0x6c7029);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c702c:{NFSU2_TR(0x6c702c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c702d:{NFSU2_TR(0x6c702d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7030:{NFSU2_TR(0x6c7030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7031:{NFSU2_TR(0x6c7031);
u8 U[4];
w4(U+0,u32(0x7bdca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7036:{NFSU2_TR(0x6c7036);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c703c:{NFSU2_TR(0x6c703c);
__builtin_memmove((R+4),(R+24),4);
}
B6c703e:{NFSU2_TR(0x6c703e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7043ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7043:L6c7043:{c.instructions+=2;NFSU2_TR(0x6c7043);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7045:{NFSU2_TR(0x6c7045);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7099;}}
}
B6c7047:L6c7047:{c.instructions+=14;NFSU2_TR(0x6c7047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7048:{NFSU2_TR(0x6c7048);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7049:{NFSU2_TR(0x6c7049);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c704c:{NFSU2_TR(0x6c704c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c704d:{NFSU2_TR(0x6c704d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7053:{NFSU2_TR(0x6c7053);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7054:{NFSU2_TR(0x6c7054);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7057:{NFSU2_TR(0x6c7057);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7058:{NFSU2_TR(0x6c7058);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c705b:{NFSU2_TR(0x6c705b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c705c:{NFSU2_TR(0x6c705c);
u8 U[4];
w4(U+0,u32(0x7bdd00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7061:{NFSU2_TR(0x6c7061);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7067:{NFSU2_TR(0x6c7067);
__builtin_memmove((R+4),(R+24),4);
}
B6c7069:{NFSU2_TR(0x6c7069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c706eull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c706e:L6c706e:{c.instructions+=2;NFSU2_TR(0x6c706e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7070:{NFSU2_TR(0x6c7070);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7099;}}
}
B6c7072:L6c7072:{c.instructions+=14;NFSU2_TR(0x6c7072);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7073:{NFSU2_TR(0x6c7073);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7074:{NFSU2_TR(0x6c7074);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7077:{NFSU2_TR(0x6c7077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7078:{NFSU2_TR(0x6c7078);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c707e:{NFSU2_TR(0x6c707e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c707f:{NFSU2_TR(0x6c707f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7082:{NFSU2_TR(0x6c7082);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7083:{NFSU2_TR(0x6c7083);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7086:{NFSU2_TR(0x6c7086);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7087:{NFSU2_TR(0x6c7087);
u8 U[4];
w4(U+0,u32(0x7bdd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c708c:{NFSU2_TR(0x6c708c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7092:{NFSU2_TR(0x6c7092);
__builtin_memmove((R+4),(R+24),4);
}
B6c7094:{NFSU2_TR(0x6c7094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7099ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7099:L6c7099:{c.instructions+=2;NFSU2_TR(0x6c7099);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6c709b:{NFSU2_TR(0x6c709b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c71ab;}}
}
B6c70a1:L6c70a1:{c.instructions+=6;NFSU2_TR(0x6c70a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c70a7:{NFSU2_TR(0x6c70a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c70aa:{NFSU2_TR(0x6c70aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c70ad:{NFSU2_TR(0x6c70ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c70b0:{NFSU2_TR(0x6c70b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c70b3:{NFSU2_TR(0x6c70b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c70b6:L6c70b6:{c.instructions+=6;NFSU2_TR(0x6c70b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c70b8:{NFSU2_TR(0x6c70b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c70bb:{NFSU2_TR(0x6c70bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c70be:{NFSU2_TR(0x6c70be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c70c1:{NFSU2_TR(0x6c70c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c70c5:{NFSU2_TR(0x6c70c5);
if(r1(R+518)){{goto L6c71b0;}}
}
B6c70cb:L6c70cb:{c.instructions+=6;NFSU2_TR(0x6c70cb);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c70d1:{NFSU2_TR(0x6c70d1);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c70d4:{NFSU2_TR(0x6c70d4);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c70d6:{NFSU2_TR(0x6c70d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c70d8:{NFSU2_TR(0x6c70d8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c70db:{NFSU2_TR(0x6c70db);
if(r1(R+514)){{goto L6c71b0;}}
}
B6c70e1:L6c70e1:{c.instructions+=2;NFSU2_TR(0x6c70e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c70e5:{NFSU2_TR(0x6c70e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c71b0;}}
}
B6c70eb:L6c70eb:{c.instructions+=6;NFSU2_TR(0x6c70eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c70ee:{NFSU2_TR(0x6c70ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c70f0:{NFSU2_TR(0x6c70f0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c70f1:{NFSU2_TR(0x6c70f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6c70f4:{NFSU2_TR(0x6c70f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c70f7:{NFSU2_TR(0x6c70f7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c70b6u);}goto L6c70b6;}}
}
B6c70f9:L6c70f9:{c.instructions+=5;NFSU2_TR(0x6c70f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c70ff:{NFSU2_TR(0x6c70ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c7102:{NFSU2_TR(0x6c7102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7106:{NFSU2_TR(0x6c7106);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c710a:{NFSU2_TR(0x6c710a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c711a;}}
}
B6c710c:L6c710c:{c.instructions+=4;NFSU2_TR(0x6c710c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c710f:{NFSU2_TR(0x6c710f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7112:{NFSU2_TR(0x6c7112);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c7115:{NFSU2_TR(0x6c7115);
if(r1(R+518)){{goto L6c711a;}}
}
B6c7117:L6c7117:{c.instructions+=1;NFSU2_TR(0x6c7117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c711a:L6c711a:{c.instructions+=1;NFSU2_TR(0x6c711a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6c711c:L6c711c:{c.instructions+=16;NFSU2_TR(0x6c711c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7122:{NFSU2_TR(0x6c7122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7125:{NFSU2_TR(0x6c7125);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c712c:{NFSU2_TR(0x6c712c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6c712f:{NFSU2_TR(0x6c712f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7132:{NFSU2_TR(0x6c7132);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c7139:{NFSU2_TR(0x6c7139);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c713c:{NFSU2_TR(0x6c713c);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c713f:{NFSU2_TR(0x6c713f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7140:{NFSU2_TR(0x6c7140);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7141:{NFSU2_TR(0x6c7141);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c7144:{NFSU2_TR(0x6c7144);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7147:{NFSU2_TR(0x6c7147);
__builtin_memmove((R+4),(R+24),4);
}
B6c7149:{NFSU2_TR(0x6c7149);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c714c:{NFSU2_TR(0x6c714c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c714f:{NFSU2_TR(0x6c714f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7154ull));
TAIL_STATIC(0x699c39u,699);
}
B6c7154:L6c7154:{c.instructions+=3;NFSU2_TR(0x6c7154);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6c7157:{NFSU2_TR(0x6c7157);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c715a:{NFSU2_TR(0x6c715a);
if(r1(R+518)){{goto L6c71c3;}}
}
B6c715c:L6c715c:{c.instructions+=6;NFSU2_TR(0x6c715c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c715f:{NFSU2_TR(0x6c715f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7162:{NFSU2_TR(0x6c7162);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7163:{NFSU2_TR(0x6c7163);
__builtin_memmove((R+4),(R+0),4);
}
B6c7165:{NFSU2_TR(0x6c7165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7168:{NFSU2_TR(0x6c7168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c716dull));
TAIL_STATIC(0x699765u,699);
}
B6c716d:L6c716d:{c.instructions+=3;NFSU2_TR(0x6c716d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7171:{NFSU2_TR(0x6c7171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7174:{NFSU2_TR(0x6c7174);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c71b5;}}
}
B6c7176:L6c7176:{c.instructions+=2;NFSU2_TR(0x6c7176);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c717a:{NFSU2_TR(0x6c717a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7186;}}
}
B6c717c:L6c717c:{c.instructions+=2;NFSU2_TR(0x6c717c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff24ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c7183:{NFSU2_TR(0x6c7183);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7186:L6c7186:{c.instructions+=1;NFSU2_TR(0x6c7186);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))^u32(u32(0x80000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c718d:L6c718d:{c.instructions+=7;NFSU2_TR(0x6c718d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7193:{NFSU2_TR(0x6c7193);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7196:{NFSU2_TR(0x6c7196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7199:{NFSU2_TR(0x6c7199);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c719d:{NFSU2_TR(0x6c719d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6c71a0:{NFSU2_TR(0x6c71a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6c71a3:{NFSU2_TR(0x6c71a3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c711cu);}goto L6c711c;}}
}
B6c71a9:L6c71a9:{c.instructions+=1;NFSU2_TR(0x6c71a9);
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
B6c71ab:L6c71ab:{c.instructions+=5;NFSU2_TR(0x6c71ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c71ac:{NFSU2_TR(0x6c71ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c71ad:{NFSU2_TR(0x6c71ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c71ae:{NFSU2_TR(0x6c71ae);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c71af:{NFSU2_TR(0x6c71af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c71b0:L6c71b0:{c.instructions+=3;NFSU2_TR(0x6c71b0);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c71b2:{NFSU2_TR(0x6c71b2);
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
B6c71b3:{NFSU2_TR(0x6c71b3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c71abu);}goto L6c71ab;}
}
B6c71b5:L6c71b5:{c.instructions+=4;NFSU2_TR(0x6c71b5);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c71b8:{NFSU2_TR(0x6c71b8);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6c71be:{NFSU2_TR(0x6c71be);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c71c1:{NFSU2_TR(0x6c71c1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c718du);}goto L6c718d;}
}
B6c71c3:L6c71c3:{c.instructions+=2;NFSU2_TR(0x6c71c3);
w4(R+0,u32(0x8007000eull));
}
B6c71c8:{NFSU2_TR(0x6c71c8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c71abu);}goto L6c71ab;}
}
B6c71ca:L6c71ca:{c.instructions+=33;NFSU2_TR(0x6c71ca);
__builtin_memmove((R+28),(R+28),4);
}
B6c71cc:{NFSU2_TR(0x6c71cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71cd:{NFSU2_TR(0x6c71cd);
__builtin_memmove((R+20),(R+16),4);
}
B6c71cf:{NFSU2_TR(0x6c71cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x110ull))));
}
B6c71d5:{NFSU2_TR(0x6c71d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71d6:{NFSU2_TR(0x6c71d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71d7:{NFSU2_TR(0x6c71d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71d8:{NFSU2_TR(0x6c71d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c71dc:{NFSU2_TR(0x6c71dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c71e0:{NFSU2_TR(0x6c71e0);
__builtin_memmove((R+12),(R+4),4);
}
B6c71e2:{NFSU2_TR(0x6c71e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c71e8:{NFSU2_TR(0x6c71e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6c71ea:{NFSU2_TR(0x6c71ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c71ec:{NFSU2_TR(0x6c71ec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c71ed:{NFSU2_TR(0x6c71ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71ee:{NFSU2_TR(0x6c71ee);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6c71f4:{NFSU2_TR(0x6c71f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71f5:{NFSU2_TR(0x6c71f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c71f8:{NFSU2_TR(0x6c71f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c71f9:{NFSU2_TR(0x6c71f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c71ff:{NFSU2_TR(0x6c71ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7200:{NFSU2_TR(0x6c7200);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c7203:{NFSU2_TR(0x6c7203);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7204:{NFSU2_TR(0x6c7204);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c720a:{NFSU2_TR(0x6c720a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c720b:{NFSU2_TR(0x6c720b);
u8 U[4];
w4(U+0,u32(0x7be460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7210:{NFSU2_TR(0x6c7210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7211:{NFSU2_TR(0x6c7211);
__builtin_memmove((R+4),(R+12),4);
}
B6c7213:{NFSU2_TR(0x6c7213);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7216:{NFSU2_TR(0x6c7216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c721d:{NFSU2_TR(0x6c721d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7224:{NFSU2_TR(0x6c7224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7227:{NFSU2_TR(0x6c7227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c722cull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c722c:L6c722c:{c.instructions+=2;NFSU2_TR(0x6c722c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c722e:{NFSU2_TR(0x6c722e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c726d;}}
}
B6c7230:L6c7230:{c.instructions+=2;NFSU2_TR(0x6c7230);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7232:{NFSU2_TR(0x6c7232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7237ull));
TAIL_STATIC(0x699317u,699);
}
B6c7237:L6c7237:{c.instructions+=2;NFSU2_TR(0x6c7237);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7239:{NFSU2_TR(0x6c7239);
if(r1(R+518)){{goto L6c7249;}}
}
B6c723b:L6c723b:{c.instructions+=2;NFSU2_TR(0x6c723b);
__builtin_memmove((R+4),(R+0),4);
}
B6c723d:{NFSU2_TR(0x6c723d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7242ull));
TAIL_STATIC(0x698e7du,698);
}
B6c7242:L6c7242:{c.instructions+=3;NFSU2_TR(0x6c7242);
__builtin_memmove((R+28),(R+0),4);
}
B6c7244:{NFSU2_TR(0x6c7244);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7247:{NFSU2_TR(0x6c7247);
{goto L6c7250;}
}
B6c7249:L6c7249:{c.instructions+=2;NFSU2_TR(0x6c7249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c724d:{NFSU2_TR(0x6c724d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7250:L6c7250:{c.instructions+=2;NFSU2_TR(0x6c7250);
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
B6c7252:{NFSU2_TR(0x6c7252);
if(r1(R+518)){{goto L6c75af;}}
}
B6c7258:L6c7258:{c.instructions+=8;NFSU2_TR(0x6c7258);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c725a:{NFSU2_TR(0x6c725a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c725d:{NFSU2_TR(0x6c725d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c725e:{NFSU2_TR(0x6c725e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c725f:{NFSU2_TR(0x6c725f);
__builtin_memmove((R+0),(R+24),4);
}
B6c7261:{NFSU2_TR(0x6c7261);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c7266:{NFSU2_TR(0x6c7266);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x74600000ull))));
}
B6c726b:{NFSU2_TR(0x6c726b);
{goto L6c72da;}
}
B6c726d:L6c726d:{c.instructions+=14;NFSU2_TR(0x6c726d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c726e:{NFSU2_TR(0x6c726e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c726f:{NFSU2_TR(0x6c726f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7272:{NFSU2_TR(0x6c7272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7273:{NFSU2_TR(0x6c7273);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7279:{NFSU2_TR(0x6c7279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c727a:{NFSU2_TR(0x6c727a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c727d:{NFSU2_TR(0x6c727d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c727e:{NFSU2_TR(0x6c727e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7284:{NFSU2_TR(0x6c7284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7285:{NFSU2_TR(0x6c7285);
u8 U[4];
w4(U+0,u32(0x7be400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c728a:{NFSU2_TR(0x6c728a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7290:{NFSU2_TR(0x6c7290);
__builtin_memmove((R+4),(R+12),4);
}
B6c7292:{NFSU2_TR(0x6c7292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7297ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7297:L6c7297:{c.instructions+=2;NFSU2_TR(0x6c7297);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7299:{NFSU2_TR(0x6c7299);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c734d;}}
}
B6c729f:L6c729f:{c.instructions+=2;NFSU2_TR(0x6c729f);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c72a1:{NFSU2_TR(0x6c72a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c72a6ull));
TAIL_STATIC(0x699317u,699);
}
B6c72a6:L6c72a6:{c.instructions+=2;NFSU2_TR(0x6c72a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c72a8:{NFSU2_TR(0x6c72a8);
if(r1(R+518)){{goto L6c72b8;}}
}
B6c72aa:L6c72aa:{c.instructions+=2;NFSU2_TR(0x6c72aa);
__builtin_memmove((R+4),(R+0),4);
}
B6c72ac:{NFSU2_TR(0x6c72ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c72b1ull));
TAIL_STATIC(0x698e7du,698);
}
B6c72b1:L6c72b1:{c.instructions+=3;NFSU2_TR(0x6c72b1);
__builtin_memmove((R+28),(R+0),4);
}
B6c72b3:{NFSU2_TR(0x6c72b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c72b6:{NFSU2_TR(0x6c72b6);
{goto L6c72bf;}
}
B6c72b8:L6c72b8:{c.instructions+=2;NFSU2_TR(0x6c72b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c72bc:{NFSU2_TR(0x6c72bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c72bf:L6c72bf:{c.instructions+=2;NFSU2_TR(0x6c72bf);
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
B6c72c1:{NFSU2_TR(0x6c72c1);
if(r1(R+518)){{goto L6c75af;}}
}
B6c72c7:L6c72c7:{c.instructions+=7;NFSU2_TR(0x6c72c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c72c9:{NFSU2_TR(0x6c72c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6c72cc:{NFSU2_TR(0x6c72cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c72cd:{NFSU2_TR(0x6c72cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c72ce:{NFSU2_TR(0x6c72ce);
__builtin_memmove((R+0),(R+24),4);
}
B6c72d0:{NFSU2_TR(0x6c72d0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c72d5:{NFSU2_TR(0x6c72d5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x74700000ull))));
}
B6c72da:L6c72da:{c.instructions+=3;NFSU2_TR(0x6c72da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c72db:{NFSU2_TR(0x6c72db);
__builtin_memmove((R+4),(R+28),4);
}
B6c72dd:{NFSU2_TR(0x6c72dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c72e2ull));
TAIL_STATIC(0x699362u,699);
}
B6c72e2:L6c72e2:{c.instructions+=4;NFSU2_TR(0x6c72e2);
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
B6c72e4:{NFSU2_TR(0x6c72e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c72e7:{NFSU2_TR(0x6c72e7);
__builtin_memmove((R+4),(R+28),4);
}
B6c72e9:{NFSU2_TR(0x6c72e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c75fe;}}
}
B6c72ef:L6c72ef:{c.instructions+=2;NFSU2_TR(0x6c72ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c72f5:{NFSU2_TR(0x6c72f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c72faull));
TAIL_STATIC(0x698eb3u,698);
}
B6c72fa:L6c72fa:{c.instructions+=3;NFSU2_TR(0x6c72fa);
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
B6c72fc:{NFSU2_TR(0x6c72fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c72ff:{NFSU2_TR(0x6c72ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c75fc;}}
}
B6c7305:L6c7305:{c.instructions+=8;NFSU2_TR(0x6c7305);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c730b:{NFSU2_TR(0x6c730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c730e:{NFSU2_TR(0x6c730e);
__builtin_memmove((R+0),(R+24),4);
}
B6c7310:{NFSU2_TR(0x6c7310);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c7313:{NFSU2_TR(0x6c7313);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c7316:{NFSU2_TR(0x6c7316);
__builtin_memmove((R+4),(R+0),4);
}
B6c7318:{NFSU2_TR(0x6c7318);
__builtin_memmove((R+8),(R+4),4);
}
B6c731a:{NFSU2_TR(0x6c731a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c731d:L6c731d:{c.instructions+=1;NFSU2_TR(0x6c731d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c731f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c731du);}goto L6c731d;}
}
B6c731f:L6c731f:{c.instructions+=3;NFSU2_TR(0x6c731f);
__builtin_memmove((R+4),(R+8),4);
}
B6c7321:{NFSU2_TR(0x6c7321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7324:{NFSU2_TR(0x6c7324);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c7327:L6c7327:{c.instructions+=1;NFSU2_TR(0x6c7327);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c7329;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7327u);}goto L6c7327;}
}
B6c7329:L6c7329:{c.instructions+=5;NFSU2_TR(0x6c7329);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c732c:{NFSU2_TR(0x6c732c);
__builtin_memmove((R+4),(R+0),4);
}
B6c732e:{NFSU2_TR(0x6c732e);
__builtin_memmove((R+8),(R+4),4);
}
B6c7330:{NFSU2_TR(0x6c7330);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c7333:{NFSU2_TR(0x6c7333);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c7339:L6c7339:{c.instructions+=1;NFSU2_TR(0x6c7339);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c733b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7339u);}goto L6c7339;}
}
B6c733b:L6c733b:{c.instructions+=2;NFSU2_TR(0x6c733b);
__builtin_memmove((R+4),(R+8),4);
}
B6c733d:{NFSU2_TR(0x6c733d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c7340:L6c7340:{c.instructions+=1;NFSU2_TR(0x6c7340);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c7342;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7340u);}goto L6c7340;}
}
B6c7342:L6c7342:{c.instructions+=2;NFSU2_TR(0x6c7342);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c7348:{NFSU2_TR(0x6c7348);
{goto L6c7647;}
}
B6c734d:L6c734d:{c.instructions+=14;NFSU2_TR(0x6c734d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c734e:{NFSU2_TR(0x6c734e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c734f:{NFSU2_TR(0x6c734f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7352:{NFSU2_TR(0x6c7352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7353:{NFSU2_TR(0x6c7353);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7359:{NFSU2_TR(0x6c7359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c735a:{NFSU2_TR(0x6c735a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c735d:{NFSU2_TR(0x6c735d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c735e:{NFSU2_TR(0x6c735e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7364:{NFSU2_TR(0x6c7364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7365:{NFSU2_TR(0x6c7365);
u8 U[4];
w4(U+0,u32(0x7be4c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c736a:{NFSU2_TR(0x6c736a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7370:{NFSU2_TR(0x6c7370);
__builtin_memmove((R+4),(R+12),4);
}
B6c7372:{NFSU2_TR(0x6c7372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7377ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7377:L6c7377:{c.instructions+=2;NFSU2_TR(0x6c7377);
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
B6c7379:{NFSU2_TR(0x6c7379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c767c;}}
}
B6c737f:L6c737f:{c.instructions+=8;NFSU2_TR(0x6c737f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7382:{NFSU2_TR(0x6c7382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7388:{NFSU2_TR(0x6c7388);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c738b:{NFSU2_TR(0x6c738b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c738e:{NFSU2_TR(0x6c738e);
w4(R+4,u32(0x80000ull));
}
B6c7393:{NFSU2_TR(0x6c7393);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7395:{NFSU2_TR(0x6c7395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7398:{NFSU2_TR(0x6c7398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c73ca;}}
}
B6c739a:L6c739a:{c.instructions+=3;NFSU2_TR(0x6c739a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c739c:{NFSU2_TR(0x6c739c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c739e:{NFSU2_TR(0x6c739e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c74b8;}}
}
B6c73a4:L6c73a4:{c.instructions+=3;NFSU2_TR(0x6c73a4);
__builtin_memmove((R+4),(R+24),4);
}
B6c73a6:{NFSU2_TR(0x6c73a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c73ac:{NFSU2_TR(0x6c73ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c73af:L6c73af:{c.instructions+=1;NFSU2_TR(0x6c73af);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c73b1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c73afu);}goto L6c73af;}
}
B6c73b1:L6c73b1:{c.instructions+=7;NFSU2_TR(0x6c73b1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff50ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c73b8:{NFSU2_TR(0x6c73b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c73bb:{NFSU2_TR(0x6c73bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c73be:{NFSU2_TR(0x6c73be);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c73c2:{NFSU2_TR(0x6c73c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c73c3:{NFSU2_TR(0x6c73c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c73c6:{NFSU2_TR(0x6c73c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c73b1u);}goto L6c73b1;}}
}
B6c73c8:L6c73c8:{c.instructions+=1;NFSU2_TR(0x6c73c8);
{goto L6c740e;}
}
B6c73ca:L6c73ca:{c.instructions+=7;NFSU2_TR(0x6c73ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c73d0:{NFSU2_TR(0x6c73d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c73d3:{NFSU2_TR(0x6c73d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c73d6:{NFSU2_TR(0x6c73d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c73d9:{NFSU2_TR(0x6c73d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c73db:{NFSU2_TR(0x6c73db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c73de:{NFSU2_TR(0x6c73de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7416;}}
}
B6c73e0:L6c73e0:{c.instructions+=3;NFSU2_TR(0x6c73e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c73e2:{NFSU2_TR(0x6c73e2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c73e4:{NFSU2_TR(0x6c73e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c74b8;}}
}
B6c73ea:L6c73ea:{c.instructions+=3;NFSU2_TR(0x6c73ea);
__builtin_memmove((R+4),(R+24),4);
}
B6c73ec:{NFSU2_TR(0x6c73ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c73f2:{NFSU2_TR(0x6c73f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c73f5:L6c73f5:{c.instructions+=1;NFSU2_TR(0x6c73f5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c73f7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c73f5u);}goto L6c73f5;}
}
B6c73f7:L6c73f7:{c.instructions+=7;NFSU2_TR(0x6c73f7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff60ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6c73fe:{NFSU2_TR(0x6c73fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7401:{NFSU2_TR(0x6c7401);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7404:{NFSU2_TR(0x6c7404);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6c7408:{NFSU2_TR(0x6c7408);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c7409:{NFSU2_TR(0x6c7409);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c740c:{NFSU2_TR(0x6c740c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c73f7u);}goto L6c73f7;}}
}
B6c740e:L6c740e:{c.instructions+=2;NFSU2_TR(0x6c740e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c7411:{NFSU2_TR(0x6c7411);
{goto L6c74b8;}
}
B6c7416:L6c7416:{c.instructions+=2;NFSU2_TR(0x6c7416);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7419:{NFSU2_TR(0x6c7419);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7679;}}
}
B6c741f:L6c741f:{c.instructions+=5;NFSU2_TR(0x6c741f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7422:{NFSU2_TR(0x6c7422);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7425:{NFSU2_TR(0x6c7425);
w4(R+28,u32(0xfff00000ull));
}
B6c742a:{NFSU2_TR(0x6c742a);
w4(R+4,u32(0x10100000ull));
}
B6c742f:{NFSU2_TR(0x6c742f);
if(r1(R+518)){{goto L6c7466;}}
}
B6c7431:L6c7431:{c.instructions+=8;NFSU2_TR(0x6c7431);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7434:{NFSU2_TR(0x6c7434);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7437:{NFSU2_TR(0x6c7437);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c743a:{NFSU2_TR(0x6c743a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c743c:{NFSU2_TR(0x6c743c);
__builtin_memmove((R+8),(R+0),4);
}
B6c743e:{NFSU2_TR(0x6c743e);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B6c7440:{NFSU2_TR(0x6c7440);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7442:{NFSU2_TR(0x6c7442);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7466;}}
}
B6c7444:L6c7444:{c.instructions+=3;NFSU2_TR(0x6c7444);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c7449:{NFSU2_TR(0x6c7449);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c744b:{NFSU2_TR(0x6c744b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7466;}}
}
B6c744d:L6c744d:{c.instructions+=2;NFSU2_TR(0x6c744d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7451:{NFSU2_TR(0x6c7451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7466;}}
}
B6c7453:L6c7453:{c.instructions+=6;NFSU2_TR(0x6c7453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7456:{NFSU2_TR(0x6c7456);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7459:{NFSU2_TR(0x6c7459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c745b:{NFSU2_TR(0x6c745b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c745e:{NFSU2_TR(0x6c745e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7464:{NFSU2_TR(0x6c7464);
{goto L6c74b5;}
}
B6c7466:L6c7466:{c.instructions+=4;NFSU2_TR(0x6c7466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7469:{NFSU2_TR(0x6c7469);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c746c:{NFSU2_TR(0x6c746c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c746f:{NFSU2_TR(0x6c746f);
if(r1(R+518)){{goto L6c7679;}}
}
B6c7475:L6c7475:{c.instructions+=8;NFSU2_TR(0x6c7475);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7478:{NFSU2_TR(0x6c7478);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c747b:{NFSU2_TR(0x6c747b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c747e:{NFSU2_TR(0x6c747e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c7480:{NFSU2_TR(0x6c7480);
__builtin_memmove((R+8),(R+0),4);
}
B6c7482:{NFSU2_TR(0x6c7482);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B6c7484:{NFSU2_TR(0x6c7484);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7486:{NFSU2_TR(0x6c7486);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7679;}}
}
B6c748c:L6c748c:{c.instructions+=3;NFSU2_TR(0x6c748c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c7491:{NFSU2_TR(0x6c7491);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7494:{NFSU2_TR(0x6c7494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7679;}}
}
B6c749a:L6c749a:{c.instructions+=2;NFSU2_TR(0x6c749a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c749e:{NFSU2_TR(0x6c749e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7679;}}
}
B6c74a4:L6c74a4:{c.instructions+=5;NFSU2_TR(0x6c74a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c74a7:{NFSU2_TR(0x6c74a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c74aa:{NFSU2_TR(0x6c74aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c74ac:{NFSU2_TR(0x6c74ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c74af:{NFSU2_TR(0x6c74af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c74b5:L6c74b5:{c.instructions+=1;NFSU2_TR(0x6c74b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c74b8:L6c74b8:{c.instructions+=7;NFSU2_TR(0x6c74b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c74bc:{NFSU2_TR(0x6c74bc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c74be:{NFSU2_TR(0x6c74be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c74bf:{NFSU2_TR(0x6c74bf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c74c1:{NFSU2_TR(0x6c74c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c74c4:{NFSU2_TR(0x6c74c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c74c7:{NFSU2_TR(0x6c74c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c758b;}}
}
B6c74cd:L6c74cd:{c.instructions+=2;NFSU2_TR(0x6c74cd);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c74d3:{NFSU2_TR(0x6c74d3);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c74d9:L6c74d9:{c.instructions+=10;NFSU2_TR(0x6c74d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c74dc:{NFSU2_TR(0x6c74dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c74e3:{NFSU2_TR(0x6c74e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c74e6:{NFSU2_TR(0x6c74e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c74e9:{NFSU2_TR(0x6c74e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c74ec:{NFSU2_TR(0x6c74ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c74ef:{NFSU2_TR(0x6c74ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c74f2:{NFSU2_TR(0x6c74f2);
w4(R+28,u32(0x100ull));
}
B6c74f7:{NFSU2_TR(0x6c74f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c74fa:{NFSU2_TR(0x6c74fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7504;}}
}
B6c74fc:L6c74fc:{c.instructions+=2;NFSU2_TR(0x6c74fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7500:{NFSU2_TR(0x6c7500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7504:L6c7504:{c.instructions+=6;NFSU2_TR(0x6c7504);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6c7506:{NFSU2_TR(0x6c7506);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7509:{NFSU2_TR(0x6c7509);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c750b:{NFSU2_TR(0x6c750b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c750d:{NFSU2_TR(0x6c750d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7510:{NFSU2_TR(0x6c7510);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c7516;}}
}
B6c7512:L6c7512:{c.instructions+=1;NFSU2_TR(0x6c7512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7516:L6c7516:{c.instructions+=6;NFSU2_TR(0x6c7516);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6c7518:{NFSU2_TR(0x6c7518);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c751b:{NFSU2_TR(0x6c751b);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c751d:{NFSU2_TR(0x6c751d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c751f:{NFSU2_TR(0x6c751f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7522:{NFSU2_TR(0x6c7522);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c7528;}}
}
B6c7524:L6c7524:{c.instructions+=1;NFSU2_TR(0x6c7524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7528:L6c7528:{c.instructions+=9;NFSU2_TR(0x6c7528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c752b:{NFSU2_TR(0x6c752b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff40ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6c7532:{NFSU2_TR(0x6c7532);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7535:{NFSU2_TR(0x6c7535);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7538:{NFSU2_TR(0x6c7538);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c753b:{NFSU2_TR(0x6c753b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c753e:{NFSU2_TR(0x6c753e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6c7540:{NFSU2_TR(0x6c7540);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c7543:{NFSU2_TR(0x6c7543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c754b;}}
}
B6c7545:L6c7545:{c.instructions+=2;NFSU2_TR(0x6c7545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7548:{NFSU2_TR(0x6c7548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c754b:L6c754b:{c.instructions+=6;NFSU2_TR(0x6c754b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6c754d:{NFSU2_TR(0x6c754d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7550:{NFSU2_TR(0x6c7550);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c7552:{NFSU2_TR(0x6c7552);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c7554:{NFSU2_TR(0x6c7554);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7557:{NFSU2_TR(0x6c7557);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c755c;}}
}
B6c7559:L6c7559:{c.instructions+=1;NFSU2_TR(0x6c7559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c755c:L6c755c:{c.instructions+=6;NFSU2_TR(0x6c755c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6c755e:{NFSU2_TR(0x6c755e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7561:{NFSU2_TR(0x6c7561);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c7563:{NFSU2_TR(0x6c7563);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c7565:{NFSU2_TR(0x6c7565);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7568:{NFSU2_TR(0x6c7568);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6c756d;}}
}
B6c756a:L6c756a:{c.instructions+=1;NFSU2_TR(0x6c756a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c756d:L6c756d:{c.instructions+=3;NFSU2_TR(0x6c756d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7570:{NFSU2_TR(0x6c7570);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B6c7573:{NFSU2_TR(0x6c7573);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c74d9u);}goto L6c74d9;}}
}
B6c7579:L6c7579:{c.instructions+=4;NFSU2_TR(0x6c7579);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c757c:{NFSU2_TR(0x6c757c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6c757e:{NFSU2_TR(0x6c757e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6c7580:{NFSU2_TR(0x6c7580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c758b;}}
}
B6c7582:L6c7582:{c.instructions+=2;NFSU2_TR(0x6c7582);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7585:{NFSU2_TR(0x6c7585);
if(r1(R+518)){{goto L6c7679;}}
}
B6c758b:L6c758b:{c.instructions+=2;NFSU2_TR(0x6c758b);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c758d:{NFSU2_TR(0x6c758d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7592ull));
TAIL_STATIC(0x699317u,699);
}
B6c7592:L6c7592:{c.instructions+=2;NFSU2_TR(0x6c7592);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7594:{NFSU2_TR(0x6c7594);
if(r1(R+518)){{goto L6c75a4;}}
}
B6c7596:L6c7596:{c.instructions+=2;NFSU2_TR(0x6c7596);
__builtin_memmove((R+4),(R+0),4);
}
B6c7598:{NFSU2_TR(0x6c7598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c759dull));
TAIL_STATIC(0x698e7du,698);
}
B6c759d:L6c759d:{c.instructions+=3;NFSU2_TR(0x6c759d);
__builtin_memmove((R+28),(R+0),4);
}
B6c759f:{NFSU2_TR(0x6c759f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c75a2:{NFSU2_TR(0x6c75a2);
{goto L6c75ab;}
}
B6c75a4:L6c75a4:{c.instructions+=2;NFSU2_TR(0x6c75a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c75a8:{NFSU2_TR(0x6c75a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c75ab:L6c75ab:{c.instructions+=2;NFSU2_TR(0x6c75ab);
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
B6c75ad:{NFSU2_TR(0x6c75ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c75b9;}}
}
B6c75af:L6c75af:{c.instructions+=2;NFSU2_TR(0x6c75af);
w4(R+0,u32(0x8007000eull));
}
B6c75b4:{NFSU2_TR(0x6c75b4);
{goto L6c767c;}
}
B6c75b9:L6c75b9:{c.instructions+=4;NFSU2_TR(0x6c75b9);
__builtin_memmove((R+0),(R+24),4);
}
B6c75bb:{NFSU2_TR(0x6c75bb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6c75c0:{NFSU2_TR(0x6c75c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c75c4:{NFSU2_TR(0x6c75c4);
if(r1(R+518)){{goto L6c75cd;}}
}
B6c75c6:L6c75c6:{c.instructions+=2;NFSU2_TR(0x6c75c6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x74600000ull))));
}
B6c75cb:{NFSU2_TR(0x6c75cb);
{goto L6c75d2;}
}
B6c75cd:L6c75cd:{c.instructions+=1;NFSU2_TR(0x6c75cd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x74700000ull))));
}
B6c75d2:L6c75d2:{c.instructions+=7;NFSU2_TR(0x6c75d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c75d4:{NFSU2_TR(0x6c75d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c75d5:{NFSU2_TR(0x6c75d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6c75d8:{NFSU2_TR(0x6c75d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c75d9:{NFSU2_TR(0x6c75d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c75da:{NFSU2_TR(0x6c75da);
__builtin_memmove((R+4),(R+28),4);
}
B6c75dc:{NFSU2_TR(0x6c75dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c75e1ull));
TAIL_STATIC(0x699362u,699);
}
B6c75e1:L6c75e1:{c.instructions+=4;NFSU2_TR(0x6c75e1);
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
B6c75e3:{NFSU2_TR(0x6c75e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c75e6:{NFSU2_TR(0x6c75e6);
__builtin_memmove((R+4),(R+28),4);
}
B6c75e8:{NFSU2_TR(0x6c75e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c75fe;}}
}
B6c75ea:L6c75ea:{c.instructions+=2;NFSU2_TR(0x6c75ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c75f0:{NFSU2_TR(0x6c75f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c75f5ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c75f5:L6c75f5:{c.instructions+=3;NFSU2_TR(0x6c75f5);
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
B6c75f7:{NFSU2_TR(0x6c75f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c75fa:{NFSU2_TR(0x6c75fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c760a;}}
}
B6c75fc:L6c75fc:{c.instructions+=1;NFSU2_TR(0x6c75fc);
__builtin_memmove((R+4),(R+28),4);
}
B6c75fe:L6c75fe:{c.instructions+=2;NFSU2_TR(0x6c75fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7600:{NFSU2_TR(0x6c7600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7605ull));
TAIL_STATIC(0x6739efu,673);
}
B6c7605:L6c7605:{c.instructions+=2;NFSU2_TR(0x6c7605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7608:{NFSU2_TR(0x6c7608);
{goto L6c767c;}
}
B6c760a:L6c760a:{c.instructions+=8;NFSU2_TR(0x6c760a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7610:{NFSU2_TR(0x6c7610);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7613:{NFSU2_TR(0x6c7613);
__builtin_memmove((R+0),(R+24),4);
}
B6c7615:{NFSU2_TR(0x6c7615);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6c7618:{NFSU2_TR(0x6c7618);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c761b:{NFSU2_TR(0x6c761b);
__builtin_memmove((R+4),(R+0),4);
}
B6c761d:{NFSU2_TR(0x6c761d);
__builtin_memmove((R+8),(R+4),4);
}
B6c761f:{NFSU2_TR(0x6c761f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c7622:L6c7622:{c.instructions+=1;NFSU2_TR(0x6c7622);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c7624;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7622u);}goto L6c7622;}
}
B6c7624:L6c7624:{c.instructions+=3;NFSU2_TR(0x6c7624);
__builtin_memmove((R+4),(R+8),4);
}
B6c7626:{NFSU2_TR(0x6c7626);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7629:{NFSU2_TR(0x6c7629);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c762c:L6c762c:{c.instructions+=1;NFSU2_TR(0x6c762c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c762e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c762cu);}goto L6c762c;}
}
B6c762e:L6c762e:{c.instructions+=5;NFSU2_TR(0x6c762e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7631:{NFSU2_TR(0x6c7631);
__builtin_memmove((R+4),(R+0),4);
}
B6c7633:{NFSU2_TR(0x6c7633);
__builtin_memmove((R+8),(R+4),4);
}
B6c7635:{NFSU2_TR(0x6c7635);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c7638:{NFSU2_TR(0x6c7638);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c763b:L6c763b:{c.instructions+=1;NFSU2_TR(0x6c763b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c763d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c763bu);}goto L6c763b;}
}
B6c763d:L6c763d:{c.instructions+=2;NFSU2_TR(0x6c763d);
__builtin_memmove((R+4),(R+8),4);
}
B6c763f:{NFSU2_TR(0x6c763f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c7642:L6c7642:{c.instructions+=1;NFSU2_TR(0x6c7642);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c7644;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7642u);}goto L6c7642;}
}
B6c7644:L6c7644:{c.instructions+=1;NFSU2_TR(0x6c7644);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c7647:L6c7647:{c.instructions+=5;NFSU2_TR(0x6c7647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c764a:{NFSU2_TR(0x6c764a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c764d:{NFSU2_TR(0x6c764d);
__builtin_memmove((R+4),(R+0),4);
}
B6c764f:{NFSU2_TR(0x6c764f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6c7652:{NFSU2_TR(0x6c7652);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6c7654:L6c7654:{c.instructions+=1;NFSU2_TR(0x6c7654);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6c7656;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7654u);}goto L6c7654;}
}
B6c7656:L6c7656:{c.instructions+=2;NFSU2_TR(0x6c7656);
__builtin_memmove((R+4),(R+0),4);
}
B6c7658:{NFSU2_TR(0x6c7658);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6c765b:L6c765b:{c.instructions+=1;NFSU2_TR(0x6c765b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6c765d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c765bu);}goto L6c765b;}
}
B6c765d:L6c765d:{c.instructions+=3;NFSU2_TR(0x6c765d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7663:{NFSU2_TR(0x6c7663);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7664:{NFSU2_TR(0x6c7664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7669ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c7669:L6c7669:{c.instructions+=4;NFSU2_TR(0x6c7669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c766c:{NFSU2_TR(0x6c766c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c766e:{NFSU2_TR(0x6c766e);
__builtin_memmove((R+24),(R+0),4);
}
B6c7670:{NFSU2_TR(0x6c7670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7675ull));
TAIL_STATIC(0x6739efu,673);
}
B6c7675:L6c7675:{c.instructions+=2;NFSU2_TR(0x6c7675);
__builtin_memmove((R+0),(R+24),4);
}
B6c7677:{NFSU2_TR(0x6c7677);
{goto L6c767c;}
}
B6c7679:L6c7679:{c.instructions+=2;NFSU2_TR(0x6c7679);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c767b:{NFSU2_TR(0x6c767b);
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
B6c767c:L6c767c:{c.instructions+=5;NFSU2_TR(0x6c767c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c767d:{NFSU2_TR(0x6c767d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c767e:{NFSU2_TR(0x6c767e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c767f:{NFSU2_TR(0x6c767f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c7680:{NFSU2_TR(0x6c7680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c7681:L6c7681:{c.instructions+=25;NFSU2_TR(0x6c7681);
__builtin_memmove((R+28),(R+28),4);
}
B6c7683:{NFSU2_TR(0x6c7683);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7684:{NFSU2_TR(0x6c7684);
__builtin_memmove((R+20),(R+16),4);
}
B6c7686:{NFSU2_TR(0x6c7686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x218ull))));
}
B6c768c:{NFSU2_TR(0x6c768c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c768f:{NFSU2_TR(0x6c768f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7690:{NFSU2_TR(0x6c7690);
__builtin_memmove((R+24),(R+4),4);
}
B6c7692:{NFSU2_TR(0x6c7692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7695:{NFSU2_TR(0x6c7695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7698:{NFSU2_TR(0x6c7698);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c769b:{NFSU2_TR(0x6c769b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c769e:{NFSU2_TR(0x6c769e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76a1:{NFSU2_TR(0x6c76a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76a4:{NFSU2_TR(0x6c76a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c76aa:{NFSU2_TR(0x6c76aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c76ac:{NFSU2_TR(0x6c76ac);
__builtin_memmove((R+4),(R+0),4);
}
B6c76ae:{NFSU2_TR(0x6c76ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c76af:{NFSU2_TR(0x6c76af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c76b1:{NFSU2_TR(0x6c76b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6c76b7:{NFSU2_TR(0x6c76b7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c76bc:{NFSU2_TR(0x6c76bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c76c1:{NFSU2_TR(0x6c76c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76c4:{NFSU2_TR(0x6c76c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76c7:{NFSU2_TR(0x6c76c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76ca:{NFSU2_TR(0x6c76ca);
if(r1(R+518)){{goto L6c76d4;}}
}
B6c76cc:L6c76cc:{c.instructions+=3;NFSU2_TR(0x6c76cc);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c76ce:{NFSU2_TR(0x6c76ce);
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
B6c76cf:{NFSU2_TR(0x6c76cf);
{goto L6c7b48;}
}
B6c76d4:L6c76d4:{c.instructions+=2;NFSU2_TR(0x6c76d4);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c76d6:{NFSU2_TR(0x6c76d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c76dbull));
TAIL_STATIC(0x699317u,699);
}
B6c76db:L6c76db:{c.instructions+=2;NFSU2_TR(0x6c76db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c76dd:{NFSU2_TR(0x6c76dd);
if(r1(R+518)){{goto L6c76eb;}}
}
B6c76df:L6c76df:{c.instructions+=2;NFSU2_TR(0x6c76df);
__builtin_memmove((R+4),(R+0),4);
}
B6c76e1:{NFSU2_TR(0x6c76e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c76e6ull));
TAIL_STATIC(0x698e7du,698);
}
B6c76e6:L6c76e6:{c.instructions+=2;NFSU2_TR(0x6c76e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76e9:{NFSU2_TR(0x6c76e9);
{goto L6c76ee;}
}
B6c76eb:L6c76eb:{c.instructions+=1;NFSU2_TR(0x6c76eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c76ee:L6c76ee:{c.instructions+=4;NFSU2_TR(0x6c76ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c76ef:{NFSU2_TR(0x6c76ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c76f2:{NFSU2_TR(0x6c76f2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6c76f4:{NFSU2_TR(0x6c76f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7700;}}
}
B6c76f6:L6c76f6:{c.instructions+=2;NFSU2_TR(0x6c76f6);
w4(R+0,u32(0x8007000eull));
}
B6c76fb:{NFSU2_TR(0x6c76fb);
{goto L6c7b47;}
}
B6c7700:L6c7700:{c.instructions+=3;NFSU2_TR(0x6c7700);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7706:{NFSU2_TR(0x6c7706);
__builtin_memmove((R+4),(R+12),4);
}
B6c7708:{NFSU2_TR(0x6c7708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c770dull));
TAIL_STATIC(0x6995c1u,699);
}
B6c770d:L6c770d:{c.instructions+=3;NFSU2_TR(0x6c770d);
__builtin_memmove((R+28),(R+0),4);
}
B6c770f:{NFSU2_TR(0x6c770f);
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
B6c7711:{NFSU2_TR(0x6c7711);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c7723;}}
}
B6c7713:L6c7713:{c.instructions+=3;NFSU2_TR(0x6c7713);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7715:{NFSU2_TR(0x6c7715);
__builtin_memmove((R+4),(R+12),4);
}
B6c7717:{NFSU2_TR(0x6c7717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c771cull));
TAIL_STATIC(0x6739efu,673);
}
B6c771c:L6c771c:{c.instructions+=2;NFSU2_TR(0x6c771c);
__builtin_memmove((R+0),(R+28),4);
}
B6c771e:{NFSU2_TR(0x6c771e);
{goto L6c7b47;}
}
B6c7723:L6c7723:{c.instructions+=8;NFSU2_TR(0x6c7723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7726:{NFSU2_TR(0x6c7726);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c7728:{NFSU2_TR(0x6c7728);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c772a:{NFSU2_TR(0x6c772a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7731:{NFSU2_TR(0x6c7731);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7738:{NFSU2_TR(0x6c7738);
u8 U[4];
w4(U+0,u32(0x20900001ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6c773e:{NFSU2_TR(0x6c773e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7741:{NFSU2_TR(0x6c7741);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c7b45;}}
}
B6c7747:L6c7747:{c.instructions+=3;NFSU2_TR(0x6c7747);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6c774a:{NFSU2_TR(0x6c774a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c774d:{NFSU2_TR(0x6c774d);
{goto L6c7752;}
}
B6c774f:L6c774f:{c.instructions+=1;NFSU2_TR(0x6c774f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c7752:L6c7752:{c.instructions+=24;NFSU2_TR(0x6c7752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7758:{NFSU2_TR(0x6c7758);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c775b:{NFSU2_TR(0x6c775b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c775e:{NFSU2_TR(0x6c775e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c7761:{NFSU2_TR(0x6c7761);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7764:{NFSU2_TR(0x6c7764);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c7766:{NFSU2_TR(0x6c7766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c776c:{NFSU2_TR(0x6c776c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c776f:{NFSU2_TR(0x6c776f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7772:{NFSU2_TR(0x6c7772);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7775:{NFSU2_TR(0x6c7775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c7777:{NFSU2_TR(0x6c7777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c777d:{NFSU2_TR(0x6c777d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7780:{NFSU2_TR(0x6c7780);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7783:{NFSU2_TR(0x6c7783);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7786:{NFSU2_TR(0x6c7786);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7789:{NFSU2_TR(0x6c7789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c778d:{NFSU2_TR(0x6c778d);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c778f:{NFSU2_TR(0x6c778f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7792:{NFSU2_TR(0x6c7792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c7793:{NFSU2_TR(0x6c7793);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7795:{NFSU2_TR(0x6c7795);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c7798:{NFSU2_TR(0x6c7798);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c779a:{NFSU2_TR(0x6c779a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c77a0:L6c77a0:{c.instructions+=1;NFSU2_TR(0x6c77a0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c77a2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c77a0u);}goto L6c77a0;}
}
B6c77a2:L6c77a2:{c.instructions+=12;NFSU2_TR(0x6c77a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77a5:{NFSU2_TR(0x6c77a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77a6:{NFSU2_TR(0x6c77a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77ac:{NFSU2_TR(0x6c77ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77ad:{NFSU2_TR(0x6c77ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77b0:{NFSU2_TR(0x6c77b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77b1:{NFSU2_TR(0x6c77b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77b7:{NFSU2_TR(0x6c77b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77b8:{NFSU2_TR(0x6c77b8);
u8 U[4];
w4(U+0,u32(0x7bec40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77bd:{NFSU2_TR(0x6c77bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77be:{NFSU2_TR(0x6c77be);
__builtin_memmove((R+4),(R+24),4);
}
B6c77c0:{NFSU2_TR(0x6c77c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c77c5ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c77c5:L6c77c5:{c.instructions+=2;NFSU2_TR(0x6c77c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c77c7:{NFSU2_TR(0x6c77c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7b31;}}
}
B6c77cd:L6c77cd:{c.instructions+=3;NFSU2_TR(0x6c77cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c77d3:{NFSU2_TR(0x6c77d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c77d9:{NFSU2_TR(0x6c77d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7b31;}}
}
B6c77df:L6c77df:{c.instructions+=15;NFSU2_TR(0x6c77df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c77e2:{NFSU2_TR(0x6c77e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77e4:{NFSU2_TR(0x6c77e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77e6:{NFSU2_TR(0x6c77e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77e9:{NFSU2_TR(0x6c77e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77ea:{NFSU2_TR(0x6c77ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77f0:{NFSU2_TR(0x6c77f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77f1:{NFSU2_TR(0x6c77f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77f4:{NFSU2_TR(0x6c77f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77f5:{NFSU2_TR(0x6c77f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c77fb:{NFSU2_TR(0x6c77fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c77fc:{NFSU2_TR(0x6c77fc);
u8 U[4];
w4(U+0,u32(0x7bed00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7801:{NFSU2_TR(0x6c7801);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7802:{NFSU2_TR(0x6c7802);
__builtin_memmove((R+4),(R+24),4);
}
B6c7804:{NFSU2_TR(0x6c7804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7809ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7809:L6c7809:{c.instructions+=3;NFSU2_TR(0x6c7809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c780f:{NFSU2_TR(0x6c780f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7815:{NFSU2_TR(0x6c7815);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7822;}}
}
B6c7817:L6c7817:{c.instructions+=3;NFSU2_TR(0x6c7817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c781d:{NFSU2_TR(0x6c781d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7820:{NFSU2_TR(0x6c7820);
{goto L6c7825;}
}
B6c7822:L6c7822:{c.instructions+=1;NFSU2_TR(0x6c7822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7825:L6c7825:{c.instructions+=2;NFSU2_TR(0x6c7825);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7829:{NFSU2_TR(0x6c7829);
if(r1(R+518)){{goto L6c7b31;}}
}
B6c782f:L6c782f:{c.instructions+=7;NFSU2_TR(0x6c782f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7832:{NFSU2_TR(0x6c7832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c7834:{NFSU2_TR(0x6c7834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7837:{NFSU2_TR(0x6c7837);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c783a:{NFSU2_TR(0x6c783a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c783d:{NFSU2_TR(0x6c783d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7841:{NFSU2_TR(0x6c7841);
if(r1(R+518)){{goto L6c7b31;}}
}
B6c7847:L6c7847:{c.instructions+=7;NFSU2_TR(0x6c7847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c784a:{NFSU2_TR(0x6c784a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c784d:{NFSU2_TR(0x6c784d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7850:{NFSU2_TR(0x6c7850);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7853:{NFSU2_TR(0x6c7853);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7856:{NFSU2_TR(0x6c7856);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7859:{NFSU2_TR(0x6c7859);
if(r1(R+518)){{goto L6c7b31;}}
}
B6c785f:L6c785f:{c.instructions+=5;NFSU2_TR(0x6c785f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7862:{NFSU2_TR(0x6c7862);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7865:{NFSU2_TR(0x6c7865);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x11100001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c786b:{NFSU2_TR(0x6c786b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c786e:{NFSU2_TR(0x6c786e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7b31;}}
}
B6c7874:L6c7874:{c.instructions+=6;NFSU2_TR(0x6c7874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7877:{NFSU2_TR(0x6c7877);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c787a:{NFSU2_TR(0x6c787a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c787d:{NFSU2_TR(0x6c787d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7880:{NFSU2_TR(0x6c7880);
__builtin_memmove((R+8),(R+28),4);
}
B6c7882:{NFSU2_TR(0x6c7882);
{goto L6c78d8;}
}
B6c7884:L6c7884:{c.instructions+=2;NFSU2_TR(0x6c7884);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7888:{NFSU2_TR(0x6c7888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c78e0;}}
}
B6c788a:L6c788a:{c.instructions+=7;NFSU2_TR(0x6c788a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c788d:{NFSU2_TR(0x6c788d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7890:{NFSU2_TR(0x6c7890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c7892:{NFSU2_TR(0x6c7892);
__builtin_memmove((R+12),(R+28),4);
}
B6c7894:{NFSU2_TR(0x6c7894);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6c789a:{NFSU2_TR(0x6c789a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c78a0:{NFSU2_TR(0x6c78a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c78e0;}}
}
B6c78a2:L6c78a2:{c.instructions+=4;NFSU2_TR(0x6c78a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c78a6:{NFSU2_TR(0x6c78a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c78a9:{NFSU2_TR(0x6c78a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c78b0:{NFSU2_TR(0x6c78b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c78e0;}}
}
B6c78b2:L6c78b2:{c.instructions+=1;NFSU2_TR(0x6c78b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c78b5:L6c78b5:{c.instructions+=2;NFSU2_TR(0x6c78b5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c78b7:{NFSU2_TR(0x6c78b7);
if(r1(R+518)){{goto L6c78c9;}}
}
B6c78b9:L6c78b9:{c.instructions+=5;NFSU2_TR(0x6c78b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c78bc:{NFSU2_TR(0x6c78bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c78bf:{NFSU2_TR(0x6c78bf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6c78c2:{NFSU2_TR(0x6c78c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6c78c5:{NFSU2_TR(0x6c78c5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c78b5u);}goto L6c78b5;}}
}
B6c78c7:L6c78c7:{c.instructions+=1;NFSU2_TR(0x6c78c7);
{goto L6c78e0;}
}
B6c78c9:L6c78c9:{c.instructions+=5;NFSU2_TR(0x6c78c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c78cc:{NFSU2_TR(0x6c78cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c78cf:{NFSU2_TR(0x6c78cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c78d2:{NFSU2_TR(0x6c78d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c78d5:{NFSU2_TR(0x6c78d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c78d8:L6c78d8:{c.instructions+=3;NFSU2_TR(0x6c78d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c78db:{NFSU2_TR(0x6c78db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c78de:{NFSU2_TR(0x6c78de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7884u);}goto L6c7884;}}
}
B6c78e0:L6c78e0:{c.instructions+=7;NFSU2_TR(0x6c78e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c78e3:{NFSU2_TR(0x6c78e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c78e6:{NFSU2_TR(0x6c78e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c78e9:{NFSU2_TR(0x6c78e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c78ec:{NFSU2_TR(0x6c78ec);
w4(R+8,u32(0x100ull));
}
B6c78f1:{NFSU2_TR(0x6c78f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c78f4:{NFSU2_TR(0x6c78f4);
if(r1(R+518)){{goto L6c7b31;}}
}
B6c78fa:L6c78fa:{c.instructions+=4;NFSU2_TR(0x6c78fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c78fd:{NFSU2_TR(0x6c78fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7900:{NFSU2_TR(0x6c7900);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c7903:{NFSU2_TR(0x6c7903);
if(r1(R+518)){{goto L6c7b31;}}
}
B6c7909:L6c7909:{c.instructions+=6;NFSU2_TR(0x6c7909);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c790f:{NFSU2_TR(0x6c790f);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7912:{NFSU2_TR(0x6c7912);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c7914:{NFSU2_TR(0x6c7914);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c7916:{NFSU2_TR(0x6c7916);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7919:{NFSU2_TR(0x6c7919);
if(r1(R+514)){{goto L6c7b31;}}
}
B6c791f:L6c791f:{c.instructions+=6;NFSU2_TR(0x6c791f);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7925:{NFSU2_TR(0x6c7925);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7928:{NFSU2_TR(0x6c7928);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c792a:{NFSU2_TR(0x6c792a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c792c:{NFSU2_TR(0x6c792c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c792f:{NFSU2_TR(0x6c792f);
if(r1(R+514)){{goto L6c7b31;}}
}
B6c7935:L6c7935:{c.instructions+=10;NFSU2_TR(0x6c7935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7938:{NFSU2_TR(0x6c7938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c793b:{NFSU2_TR(0x6c793b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c793e:{NFSU2_TR(0x6c793e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7941:{NFSU2_TR(0x6c7941);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6c7944:{NFSU2_TR(0x6c7944);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7947:{NFSU2_TR(0x6c7947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c794a:{NFSU2_TR(0x6c794a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c794d:{NFSU2_TR(0x6c794d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7950:{NFSU2_TR(0x6c7950);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6c7b31;}}
}
B6c7956:L6c7956:{c.instructions+=5;NFSU2_TR(0x6c7956);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7959:{NFSU2_TR(0x6c7959);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c795c:{NFSU2_TR(0x6c795c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7960:{NFSU2_TR(0x6c7960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7963:{NFSU2_TR(0x6c7963);
if(r1(R+518)){{goto L6c7a59;}}
}
B6c7969:L6c7969:{c.instructions+=3;NFSU2_TR(0x6c7969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c796d:{NFSU2_TR(0x6c796d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7971:{NFSU2_TR(0x6c7971);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c7a59;}}
}
B6c7977:L6c7977:{c.instructions+=9;NFSU2_TR(0x6c7977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c797a:{NFSU2_TR(0x6c797a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c797d:{NFSU2_TR(0x6c797d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c7980:{NFSU2_TR(0x6c7980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7983:{NFSU2_TR(0x6c7983);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6c7986:{NFSU2_TR(0x6c7986);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7989:{NFSU2_TR(0x6c7989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c798d:{NFSU2_TR(0x6c798d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7990:{NFSU2_TR(0x6c7990);
if(r1(R+518)){{goto L6c79f1;}}
}
B6c7992:L6c7992:{c.instructions+=4;NFSU2_TR(0x6c7992);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7995:{NFSU2_TR(0x6c7995);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7998:{NFSU2_TR(0x6c7998);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c799b:{NFSU2_TR(0x6c799b);
if(r1(R+518)){{goto L6c7a44;}}
}
B6c79a1:L6c79a1:{c.instructions+=7;NFSU2_TR(0x6c79a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c79a4:{NFSU2_TR(0x6c79a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c79a7:{NFSU2_TR(0x6c79a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c79a9:{NFSU2_TR(0x6c79a9);
__builtin_memmove((R+12),(R+0),4);
}
B6c79ab:{NFSU2_TR(0x6c79ab);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6c79b1:{NFSU2_TR(0x6c79b1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c79b7:{NFSU2_TR(0x6c79b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c79ee;}}
}
B6c79b9:L6c79b9:{c.instructions+=4;NFSU2_TR(0x6c79b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c79bd:{NFSU2_TR(0x6c79bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c79c0:{NFSU2_TR(0x6c79c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c79c7:{NFSU2_TR(0x6c79c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c79f1;}}
}
B6c79c9:L6c79c9:{c.instructions+=1;NFSU2_TR(0x6c79c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c79cc:L6c79cc:{c.instructions+=2;NFSU2_TR(0x6c79cc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c79ce:{NFSU2_TR(0x6c79ce);
if(r1(R+518)){{goto L6c79e0;}}
}
B6c79d0:L6c79d0:{c.instructions+=5;NFSU2_TR(0x6c79d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c79d3:{NFSU2_TR(0x6c79d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c79d6:{NFSU2_TR(0x6c79d6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6c79d9:{NFSU2_TR(0x6c79d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6c79dc:{NFSU2_TR(0x6c79dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c79ccu);}goto L6c79cc;}}
}
B6c79de:L6c79de:{c.instructions+=1;NFSU2_TR(0x6c79de);
{goto L6c79f1;}
}
B6c79e0:L6c79e0:{c.instructions+=5;NFSU2_TR(0x6c79e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c79e3:{NFSU2_TR(0x6c79e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c79e6:{NFSU2_TR(0x6c79e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c79e9:{NFSU2_TR(0x6c79e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c79ec:{NFSU2_TR(0x6c79ec);
{goto L6c79f1;}
}
B6c79ee:L6c79ee:{c.instructions+=1;NFSU2_TR(0x6c79ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c79f1:L6c79f1:{c.instructions+=4;NFSU2_TR(0x6c79f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c79f4:{NFSU2_TR(0x6c79f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c79f7:{NFSU2_TR(0x6c79f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c79fa:{NFSU2_TR(0x6c79fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7a41;}}
}
B6c79fc:L6c79fc:{c.instructions+=2;NFSU2_TR(0x6c79fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c79ff:{NFSU2_TR(0x6c79ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7a2d;}}
}
B6c7a01:L6c7a01:{c.instructions+=6;NFSU2_TR(0x6c7a01);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a03:{NFSU2_TR(0x6c7a03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a04:{NFSU2_TR(0x6c7a04);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a06:{NFSU2_TR(0x6c7a06);
u8 U[4];
w4(U+0,u32(0x7bf1c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a0b:{NFSU2_TR(0x6c7a0b);
__builtin_memmove((R+4),(R+24),4);
}
B6c7a0d:{NFSU2_TR(0x6c7a0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7a12ull));
TAIL_STATIC(0x699be0u,699);
}
B6c7a12:L6c7a12:{c.instructions+=9;NFSU2_TR(0x6c7a12);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c7a14:{NFSU2_TR(0x6c7a14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a15:{NFSU2_TR(0x6c7a15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a16:{NFSU2_TR(0x6c7a16);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c7a19:{NFSU2_TR(0x6c7a19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a1b:{NFSU2_TR(0x6c7a1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a1d:{NFSU2_TR(0x6c7a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a1e:{NFSU2_TR(0x6c7a1e);
__builtin_memmove((R+4),(R+24),4);
}
B6c7a20:{NFSU2_TR(0x6c7a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7a25ull));
TAIL_STATIC(0x699c39u,699);
}
B6c7a25:L6c7a25:{c.instructions+=3;NFSU2_TR(0x6c7a25);
__builtin_memmove((R+12),(R+0),4);
}
B6c7a27:{NFSU2_TR(0x6c7a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7a2a:{NFSU2_TR(0x6c7a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7a2d:L6c7a2d:{c.instructions+=4;NFSU2_TR(0x6c7a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7a30:{NFSU2_TR(0x6c7a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7a33:{NFSU2_TR(0x6c7a33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7a36:{NFSU2_TR(0x6c7a36);
if(r1(R+518)){{goto L6c7a41;}}
}
B6c7a38:L6c7a38:{c.instructions+=3;NFSU2_TR(0x6c7a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7a3b:{NFSU2_TR(0x6c7a3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7a3e:{NFSU2_TR(0x6c7a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7a41:L6c7a41:{c.instructions+=1;NFSU2_TR(0x6c7a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7a44:L6c7a44:{c.instructions+=4;NFSU2_TR(0x6c7a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7a47:{NFSU2_TR(0x6c7a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7a4a:{NFSU2_TR(0x6c7a4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6c7a4d:{NFSU2_TR(0x6c7a4d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7977u);}goto L6c7977;}}
}
B6c7a53:L6c7a53:{c.instructions+=2;NFSU2_TR(0x6c7a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7a56:{NFSU2_TR(0x6c7a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7a59:L6c7a59:{c.instructions+=4;NFSU2_TR(0x6c7a59);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6c7a5a:{NFSU2_TR(0x6c7a5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7a5d:{NFSU2_TR(0x6c7a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7a60:{NFSU2_TR(0x6c7a60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7956u);}goto L6c7956;}}
}
B6c7a66:L6c7a66:{c.instructions+=2;NFSU2_TR(0x6c7a66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7a69:{NFSU2_TR(0x6c7a69);
if(r1(R+518)){{goto L6c7b31;}}
}
B6c7a6f:L6c7a6f:{c.instructions+=2;NFSU2_TR(0x6c7a6f);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a71:{NFSU2_TR(0x6c7a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7a76ull));
TAIL_STATIC(0x699317u,699);
}
B6c7a76:L6c7a76:{c.instructions+=2;NFSU2_TR(0x6c7a76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7a78:{NFSU2_TR(0x6c7a78);
if(r1(R+518)){{goto L6c7a85;}}
}
B6c7a7a:L6c7a7a:{c.instructions+=2;NFSU2_TR(0x6c7a7a);
__builtin_memmove((R+4),(R+0),4);
}
B6c7a7c:{NFSU2_TR(0x6c7a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7a81ull));
TAIL_STATIC(0x698e7du,698);
}
B6c7a81:L6c7a81:{c.instructions+=2;NFSU2_TR(0x6c7a81);
__builtin_memmove((R+28),(R+0),4);
}
B6c7a83:{NFSU2_TR(0x6c7a83);
{goto L6c7a87;}
}
B6c7a85:L6c7a85:{c.instructions+=1;NFSU2_TR(0x6c7a85);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c7a87:L6c7a87:{c.instructions+=2;NFSU2_TR(0x6c7a87);
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
B6c7a89:{NFSU2_TR(0x6c7a89);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c76f6u);}goto L6c76f6;}}
}
B6c7a8f:L6c7a8f:{c.instructions+=6;NFSU2_TR(0x6c7a8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a91:{NFSU2_TR(0x6c7a91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a93:{NFSU2_TR(0x6c7a93);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a95:{NFSU2_TR(0x6c7a95);
u8 U[4];
w4(U+0,u32(0x74100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7a9a:{NFSU2_TR(0x6c7a9a);
__builtin_memmove((R+4),(R+28),4);
}
B6c7a9c:{NFSU2_TR(0x6c7a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7aa1ull));
TAIL_STATIC(0x699362u,699);
}
B6c7aa1:L6c7aa1:{c.instructions+=4;NFSU2_TR(0x6c7aa1);
__builtin_memmove((R+12),(R+0),4);
}
B6c7aa3:{NFSU2_TR(0x6c7aa3);
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
B6c7aa5:{NFSU2_TR(0x6c7aa5);
__builtin_memmove((R+4),(R+28),4);
}
B6c7aa7:{NFSU2_TR(0x6c7aa7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c7b4c;}}
}
B6c7aad:L6c7aad:{c.instructions+=2;NFSU2_TR(0x6c7aad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7ab0:{NFSU2_TR(0x6c7ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7ab5ull));
TAIL_STATIC(0x698eb3u,698);
}
B6c7ab5:L6c7ab5:{c.instructions+=3;NFSU2_TR(0x6c7ab5);
__builtin_memmove((R+12),(R+0),4);
}
B6c7ab7:{NFSU2_TR(0x6c7ab7);
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
B6c7ab9:{NFSU2_TR(0x6c7ab9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c7b57;}}
}
B6c7abf:L6c7abf:{c.instructions+=22;NFSU2_TR(0x6c7abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7ac2:{NFSU2_TR(0x6c7ac2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6c7ac4:{NFSU2_TR(0x6c7ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7ac7:{NFSU2_TR(0x6c7ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c7ac9:{NFSU2_TR(0x6c7ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7acc:{NFSU2_TR(0x6c7acc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c7ace:{NFSU2_TR(0x6c7ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7ad1:{NFSU2_TR(0x6c7ad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c7ad3:{NFSU2_TR(0x6c7ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7ad6:{NFSU2_TR(0x6c7ad6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c7ad8:{NFSU2_TR(0x6c7ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7adb:{NFSU2_TR(0x6c7adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7ade:{NFSU2_TR(0x6c7ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c7ae0:{NFSU2_TR(0x6c7ae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c7ae3:{NFSU2_TR(0x6c7ae3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ae4:{NFSU2_TR(0x6c7ae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ae5:{NFSU2_TR(0x6c7ae5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c7ae8:{NFSU2_TR(0x6c7ae8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7aea:{NFSU2_TR(0x6c7aea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7aed:{NFSU2_TR(0x6c7aed);
__builtin_memmove((R+4),(R+24),4);
}
B6c7aef:{NFSU2_TR(0x6c7aef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7af2:{NFSU2_TR(0x6c7af2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7af7ull));
TAIL_STATIC(0x699c39u,699);
}
B6c7af7:L6c7af7:{c.instructions+=11;NFSU2_TR(0x6c7af7);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6c7af9:{NFSU2_TR(0x6c7af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7afc:{NFSU2_TR(0x6c7afc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7afd:{NFSU2_TR(0x6c7afd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7afe:{NFSU2_TR(0x6c7afe);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6c7b01:{NFSU2_TR(0x6c7b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b04:{NFSU2_TR(0x6c7b04);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b06:{NFSU2_TR(0x6c7b06);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7b09:{NFSU2_TR(0x6c7b09);
__builtin_memmove((R+4),(R+24),4);
}
B6c7b0b:{NFSU2_TR(0x6c7b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7b0e:{NFSU2_TR(0x6c7b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7b13ull));
TAIL_STATIC(0x699c39u,699);
}
B6c7b13:L6c7b13:{c.instructions+=5;NFSU2_TR(0x6c7b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7b16:{NFSU2_TR(0x6c7b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b19:{NFSU2_TR(0x6c7b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7b1c:{NFSU2_TR(0x6c7b1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b1d:{NFSU2_TR(0x6c7b1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7b22ull));
TAIL_STATIC(0x6995c1u,699);
}
B6c7b22:L6c7b22:{c.instructions+=4;NFSU2_TR(0x6c7b22);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b24:{NFSU2_TR(0x6c7b24);
__builtin_memmove((R+4),(R+28),4);
}
B6c7b26:{NFSU2_TR(0x6c7b26);
__builtin_memmove((R+12),(R+0),4);
}
B6c7b28:{NFSU2_TR(0x6c7b28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7b2dull));
TAIL_STATIC(0x6739efu,673);
}
B6c7b2d:L6c7b2d:{c.instructions+=2;NFSU2_TR(0x6c7b2d);
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
B6c7b2f:{NFSU2_TR(0x6c7b2f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6c7b53;}}
}
B6c7b31:L6c7b31:{c.instructions+=6;NFSU2_TR(0x6c7b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7b34:{NFSU2_TR(0x6c7b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b38:{NFSU2_TR(0x6c7b38);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6c7b39:{NFSU2_TR(0x6c7b39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6c7b3c:{NFSU2_TR(0x6c7b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b3f:{NFSU2_TR(0x6c7b3f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c774fu);}goto L6c774f;}}
}
B6c7b45:L6c7b45:{c.instructions+=1;NFSU2_TR(0x6c7b45);
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
B6c7b47:L6c7b47:{c.instructions+=1;NFSU2_TR(0x6c7b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6c7b48:L6c7b48:{c.instructions+=4;NFSU2_TR(0x6c7b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c7b49:{NFSU2_TR(0x6c7b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6c7b4a:{NFSU2_TR(0x6c7b4a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6c7b4b:{NFSU2_TR(0x6c7b4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6c7b4c:L6c7b4c:{c.instructions+=2;NFSU2_TR(0x6c7b4c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b4e:{NFSU2_TR(0x6c7b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7b53ull));
TAIL_STATIC(0x6739efu,673);
}
B6c7b53:L6c7b53:{c.instructions+=2;NFSU2_TR(0x6c7b53);
__builtin_memmove((R+0),(R+12),4);
}
B6c7b55:{NFSU2_TR(0x6c7b55);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7b47u);}goto L6c7b47;}
}
B6c7b57:L6c7b57:{c.instructions+=2;NFSU2_TR(0x6c7b57);
__builtin_memmove((R+4),(R+28),4);
}
B6c7b59:{NFSU2_TR(0x6c7b59);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7b4cu);}goto L6c7b4c;}
}
B6c7b5b:L6c7b5b:{c.instructions+=26;NFSU2_TR(0x6c7b5b);
__builtin_memmove((R+28),(R+28),4);
}
B6c7b5d:{NFSU2_TR(0x6c7b5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b5e:{NFSU2_TR(0x6c7b5e);
__builtin_memmove((R+20),(R+16),4);
}
B6c7b60:{NFSU2_TR(0x6c7b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x214ull))));
}
B6c7b66:{NFSU2_TR(0x6c7b66);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c7b69:{NFSU2_TR(0x6c7b69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b6a:{NFSU2_TR(0x6c7b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b6b:{NFSU2_TR(0x6c7b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b6e:{NFSU2_TR(0x6c7b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b71:{NFSU2_TR(0x6c7b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b74:{NFSU2_TR(0x6c7b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b77:{NFSU2_TR(0x6c7b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b7a:{NFSU2_TR(0x6c7b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b7d:{NFSU2_TR(0x6c7b7d);
__builtin_memmove((R+24),(R+4),4);
}
B6c7b7f:{NFSU2_TR(0x6c7b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7b85:{NFSU2_TR(0x6c7b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6c7b87:{NFSU2_TR(0x6c7b87);
__builtin_memmove((R+12),(R+0),4);
}
B6c7b89:{NFSU2_TR(0x6c7b89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7b8a:{NFSU2_TR(0x6c7b8a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c7b8c:{NFSU2_TR(0x6c7b8c);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6c7b92:{NFSU2_TR(0x6c7b92);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6c7b97:{NFSU2_TR(0x6c7b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7b9c:{NFSU2_TR(0x6c7b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7b9f:{NFSU2_TR(0x6c7b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7ba2:{NFSU2_TR(0x6c7ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7ba5:{NFSU2_TR(0x6c7ba5);
if(r1(R+518)){{goto L6c7baf;}}
}
B6c7ba7:L6c7ba7:{c.instructions+=3;NFSU2_TR(0x6c7ba7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c7ba9:{NFSU2_TR(0x6c7ba9);
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
B6c7baa:{NFSU2_TR(0x6c7baa);
TAIL_STATIC(0x6c8374u,6c8);
}
B6c7baf:L6c7baf:{c.instructions+=2;NFSU2_TR(0x6c7baf);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7bb1:{NFSU2_TR(0x6c7bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7bb6ull));
TAIL_STATIC(0x699317u,699);
}
B6c7bb6:L6c7bb6:{c.instructions+=2;NFSU2_TR(0x6c7bb6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7bb8:{NFSU2_TR(0x6c7bb8);
if(r1(R+518)){{goto L6c7bc3;}}
}
B6c7bba:L6c7bba:{c.instructions+=2;NFSU2_TR(0x6c7bba);
__builtin_memmove((R+4),(R+0),4);
}
B6c7bbc:{NFSU2_TR(0x6c7bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7bc1ull));
TAIL_STATIC(0x698e7du,698);
}
B6c7bc1:L6c7bc1:{c.instructions+=1;NFSU2_TR(0x6c7bc1);
__builtin_memmove((R+28),(R+0),4);
}
B6c7bc3:L6c7bc3:{c.instructions+=3;NFSU2_TR(0x6c7bc3);
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
B6c7bc5:{NFSU2_TR(0x6c7bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7bc8:{NFSU2_TR(0x6c7bc8);
if(r1(R+518)){TAIL_STATIC(0x6c8245u,6c8);}
}
B6c7bce:L6c7bce:{c.instructions+=3;NFSU2_TR(0x6c7bce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7bd4:{NFSU2_TR(0x6c7bd4);
__builtin_memmove((R+4),(R+28),4);
}
B6c7bd6:{NFSU2_TR(0x6c7bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7bdbull));
TAIL_STATIC(0x6995c1u,699);
}
B6c7bdb:L6c7bdb:{c.instructions+=3;NFSU2_TR(0x6c7bdb);
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
B6c7bdd:{NFSU2_TR(0x6c7bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7be0:{NFSU2_TR(0x6c7be0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6c8287u,6c8);}
}
B6c7be6:L6c7be6:{c.instructions+=6;NFSU2_TR(0x6c7be6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7bea:{NFSU2_TR(0x6c7bea);
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
B6c7bec:{NFSU2_TR(0x6c7bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7bf3:{NFSU2_TR(0x6c7bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7bfa:{NFSU2_TR(0x6c7bfa);
u8 U[4];
w4(U+0,u32(0x20900001ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6c7c00:{NFSU2_TR(0x6c7c00);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c8367u,6c8);}
}
B6c7c06:L6c7c06:{c.instructions+=26;NFSU2_TR(0x6c7c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7c09:{NFSU2_TR(0x6c7c09);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c7c0c:{NFSU2_TR(0x6c7c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c0f:{NFSU2_TR(0x6c7c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7c15:{NFSU2_TR(0x6c7c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7c18:{NFSU2_TR(0x6c7c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c7c1b:{NFSU2_TR(0x6c7c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7c1e:{NFSU2_TR(0x6c7c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7c21:{NFSU2_TR(0x6c7c21);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6c7c24:{NFSU2_TR(0x6c7c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7c27:{NFSU2_TR(0x6c7c27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c7c29:{NFSU2_TR(0x6c7c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7c2f:{NFSU2_TR(0x6c7c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7c32:{NFSU2_TR(0x6c7c32);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7c35:{NFSU2_TR(0x6c7c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7c38:{NFSU2_TR(0x6c7c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6c7c3a:{NFSU2_TR(0x6c7c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7c40:{NFSU2_TR(0x6c7c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7c43:{NFSU2_TR(0x6c7c43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7c46:{NFSU2_TR(0x6c7c46);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7c49:{NFSU2_TR(0x6c7c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7c4c:{NFSU2_TR(0x6c7c4c);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c4e:{NFSU2_TR(0x6c7c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c51:{NFSU2_TR(0x6c7c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6c7c52:{NFSU2_TR(0x6c7c52);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6c7c55:{NFSU2_TR(0x6c7c55);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6c7c5b:L6c7c5b:{c.instructions+=1;NFSU2_TR(0x6c7c5b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6c7c5d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7c5bu);}goto L6c7c5b;}
}
B6c7c5d:L6c7c5d:{c.instructions+=21;NFSU2_TR(0x6c7c5d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6c7c5f:{NFSU2_TR(0x6c7c5f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6c7c61:{NFSU2_TR(0x6c7c61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c64:{NFSU2_TR(0x6c7c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c67:{NFSU2_TR(0x6c7c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c6a:{NFSU2_TR(0x6c7c6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c6d:{NFSU2_TR(0x6c7c6d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6c7c6e:{NFSU2_TR(0x6c7c6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c6f:{NFSU2_TR(0x6c7c6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c70:{NFSU2_TR(0x6c7c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7c73:{NFSU2_TR(0x6c7c73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c74:{NFSU2_TR(0x6c7c74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7c7a:{NFSU2_TR(0x6c7c7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c7b:{NFSU2_TR(0x6c7c7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7c7e:{NFSU2_TR(0x6c7c7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c7f:{NFSU2_TR(0x6c7c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7c85:{NFSU2_TR(0x6c7c85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c86:{NFSU2_TR(0x6c7c86);
u8 U[4];
w4(U+0,u32(0x7be5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c8b:{NFSU2_TR(0x6c7c8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7c8c:{NFSU2_TR(0x6c7c8c);
__builtin_memmove((R+4),(R+24),4);
}
B6c7c8e:{NFSU2_TR(0x6c7c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7c93ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7c93:L6c7c93:{c.instructions+=3;NFSU2_TR(0x6c7c93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7c95:{NFSU2_TR(0x6c7c95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7c98:{NFSU2_TR(0x6c7c98);
if(r1(R+518)){{goto L6c7d3b;}}
}
B6c7c9e:L6c7c9e:{c.instructions+=15;NFSU2_TR(0x6c7c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7ca2:{NFSU2_TR(0x6c7ca2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ca3:{NFSU2_TR(0x6c7ca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ca4:{NFSU2_TR(0x6c7ca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7ca7:{NFSU2_TR(0x6c7ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ca8:{NFSU2_TR(0x6c7ca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7cae:{NFSU2_TR(0x6c7cae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7caf:{NFSU2_TR(0x6c7caf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7cb2:{NFSU2_TR(0x6c7cb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cb3:{NFSU2_TR(0x6c7cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7cb9:{NFSU2_TR(0x6c7cb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cba:{NFSU2_TR(0x6c7cba);
u8 U[4];
w4(U+0,u32(0x7be720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cbf:{NFSU2_TR(0x6c7cbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cc0:{NFSU2_TR(0x6c7cc0);
__builtin_memmove((R+4),(R+24),4);
}
B6c7cc2:{NFSU2_TR(0x6c7cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7cc7ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7cc7:L6c7cc7:{c.instructions+=3;NFSU2_TR(0x6c7cc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7cc9:{NFSU2_TR(0x6c7cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7ccc:{NFSU2_TR(0x6c7ccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7cd3;}}
}
B6c7cce:L6c7cce:{c.instructions+=2;NFSU2_TR(0x6c7cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7cd1:{NFSU2_TR(0x6c7cd1);
{goto L6c7d3b;}
}
B6c7cd3:L6c7cd3:{c.instructions+=15;NFSU2_TR(0x6c7cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7cd7:{NFSU2_TR(0x6c7cd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cd8:{NFSU2_TR(0x6c7cd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cd9:{NFSU2_TR(0x6c7cd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7cdc:{NFSU2_TR(0x6c7cdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cdd:{NFSU2_TR(0x6c7cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7ce3:{NFSU2_TR(0x6c7ce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ce4:{NFSU2_TR(0x6c7ce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7ce7:{NFSU2_TR(0x6c7ce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7ce8:{NFSU2_TR(0x6c7ce8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7cee:{NFSU2_TR(0x6c7cee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cef:{NFSU2_TR(0x6c7cef);
u8 U[4];
w4(U+0,u32(0x7be8c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cf4:{NFSU2_TR(0x6c7cf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7cf5:{NFSU2_TR(0x6c7cf5);
__builtin_memmove((R+4),(R+24),4);
}
B6c7cf7:{NFSU2_TR(0x6c7cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7cfcull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7cfc:L6c7cfc:{c.instructions+=3;NFSU2_TR(0x6c7cfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7cfe:{NFSU2_TR(0x6c7cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7d01:{NFSU2_TR(0x6c7d01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7d08;}}
}
B6c7d03:L6c7d03:{c.instructions+=2;NFSU2_TR(0x6c7d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7d06:{NFSU2_TR(0x6c7d06);
{goto L6c7d3b;}
}
B6c7d08:L6c7d08:{c.instructions+=15;NFSU2_TR(0x6c7d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7d0c:{NFSU2_TR(0x6c7d0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d0d:{NFSU2_TR(0x6c7d0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d0e:{NFSU2_TR(0x6c7d0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7d11:{NFSU2_TR(0x6c7d11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d12:{NFSU2_TR(0x6c7d12);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7d18:{NFSU2_TR(0x6c7d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d19:{NFSU2_TR(0x6c7d19);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7d1c:{NFSU2_TR(0x6c7d1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d1d:{NFSU2_TR(0x6c7d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7d23:{NFSU2_TR(0x6c7d23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d24:{NFSU2_TR(0x6c7d24);
u8 U[4];
w4(U+0,u32(0x7bea60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d29:{NFSU2_TR(0x6c7d29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7d2a:{NFSU2_TR(0x6c7d2a);
__builtin_memmove((R+4),(R+24),4);
}
B6c7d2c:{NFSU2_TR(0x6c7d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7d31ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7d31:L6c7d31:{c.instructions+=3;NFSU2_TR(0x6c7d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6c7d33:{NFSU2_TR(0x6c7d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7d36:{NFSU2_TR(0x6c7d36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7d3b;}}
}
B6c7d38:L6c7d38:{c.instructions+=1;NFSU2_TR(0x6c7d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7d3b:L6c7d3b:{c.instructions+=3;NFSU2_TR(0x6c7d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7d41:{NFSU2_TR(0x6c7d41);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7d47:{NFSU2_TR(0x6c7d47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7d4d:L6c7d4d:{c.instructions+=2;NFSU2_TR(0x6c7d4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7d51:{NFSU2_TR(0x6c7d51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7d57:L6c7d57:{c.instructions+=8;NFSU2_TR(0x6c7d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7d5d:{NFSU2_TR(0x6c7d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7d60:{NFSU2_TR(0x6c7d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c7d62:{NFSU2_TR(0x6c7d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7d65:{NFSU2_TR(0x6c7d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7d68:{NFSU2_TR(0x6c7d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7d6b:{NFSU2_TR(0x6c7d6b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7d6e:{NFSU2_TR(0x6c7d6e);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7d74:L6c7d74:{c.instructions+=7;NFSU2_TR(0x6c7d74);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7d77:{NFSU2_TR(0x6c7d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7d7a:{NFSU2_TR(0x6c7d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7d7d:{NFSU2_TR(0x6c7d7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7d80:{NFSU2_TR(0x6c7d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7d84:{NFSU2_TR(0x6c7d84);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x11100001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c7d8a:{NFSU2_TR(0x6c7d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7d90:L6c7d90:{c.instructions+=8;NFSU2_TR(0x6c7d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7d93:{NFSU2_TR(0x6c7d93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c7d95:{NFSU2_TR(0x6c7d95);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7d98:{NFSU2_TR(0x6c7d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c7d9b:{NFSU2_TR(0x6c7d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7d9e:{NFSU2_TR(0x6c7d9e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7da0:{NFSU2_TR(0x6c7da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7da3:{NFSU2_TR(0x6c7da3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7da9:L6c7da9:{c.instructions+=2;NFSU2_TR(0x6c7da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6c7dac:{NFSU2_TR(0x6c7dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7daf:L6c7daf:{c.instructions+=6;NFSU2_TR(0x6c7daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6c7db1:{NFSU2_TR(0x6c7db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7db4:{NFSU2_TR(0x6c7db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c7db6:{NFSU2_TR(0x6c7db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7db9:{NFSU2_TR(0x6c7db9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7dbc:{NFSU2_TR(0x6c7dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7dd6;}}
}
B6c7dbe:L6c7dbe:{c.instructions+=2;NFSU2_TR(0x6c7dbe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x74700001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c7dc4:{NFSU2_TR(0x6c7dc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7dd6;}}
}
B6c7dc6:L6c7dc6:{c.instructions+=3;NFSU2_TR(0x6c7dc6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c7dc8:{NFSU2_TR(0x6c7dc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7dcb:{NFSU2_TR(0x6c7dcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c8035u,6c8);}
}
B6c7dd1:L6c7dd1:{c.instructions+=2;NFSU2_TR(0x6c7dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7dd4:{NFSU2_TR(0x6c7dd4);
{goto L6c7dd8;}
}
B6c7dd6:L6c7dd6:{c.instructions+=1;NFSU2_TR(0x6c7dd6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6c7dd8:L6c7dd8:{c.instructions+=6;NFSU2_TR(0x6c7dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7ddb:{NFSU2_TR(0x6c7ddb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6c7ddc:{NFSU2_TR(0x6c7ddc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6c7ddf:{NFSU2_TR(0x6c7ddf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7de2:{NFSU2_TR(0x6c7de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7de5:{NFSU2_TR(0x6c7de5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7dafu);}goto L6c7daf;}}
}
B6c7de7:L6c7de7:{c.instructions+=3;NFSU2_TR(0x6c7de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7dea:{NFSU2_TR(0x6c7dea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7dec:{NFSU2_TR(0x6c7dec);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7df2:L6c7df2:{c.instructions+=5;NFSU2_TR(0x6c7df2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7df5:{NFSU2_TR(0x6c7df5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7df7:{NFSU2_TR(0x6c7df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7dfa:{NFSU2_TR(0x6c7dfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7dfc:{NFSU2_TR(0x6c7dfc);
if(r1(R+518)){{goto L6c7e1b;}}
}
B6c7dfe:L6c7dfe:{c.instructions+=10;NFSU2_TR(0x6c7dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e01:{NFSU2_TR(0x6c7e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e02:{NFSU2_TR(0x6c7e02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e08:{NFSU2_TR(0x6c7e08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e09:{NFSU2_TR(0x6c7e09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e0c:{NFSU2_TR(0x6c7e0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e0d:{NFSU2_TR(0x6c7e0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e13:{NFSU2_TR(0x6c7e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e14:{NFSU2_TR(0x6c7e14);
u8 U[4];
w4(U+0,u32(0x7beb80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e19:{NFSU2_TR(0x6c7e19);
{goto L6c7e7a;}
}
B6c7e1b:L6c7e1b:{c.instructions+=2;NFSU2_TR(0x6c7e1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7e1e:{NFSU2_TR(0x6c7e1e);
if(r1(R+518)){{goto L6c7e3d;}}
}
B6c7e20:L6c7e20:{c.instructions+=10;NFSU2_TR(0x6c7e20);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e23:{NFSU2_TR(0x6c7e23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e24:{NFSU2_TR(0x6c7e24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e2a:{NFSU2_TR(0x6c7e2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e2b:{NFSU2_TR(0x6c7e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e2e:{NFSU2_TR(0x6c7e2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e2f:{NFSU2_TR(0x6c7e2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e35:{NFSU2_TR(0x6c7e35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e36:{NFSU2_TR(0x6c7e36);
u8 U[4];
w4(U+0,u32(0x7be9c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e3b:{NFSU2_TR(0x6c7e3b);
{goto L6c7e7a;}
}
B6c7e3d:L6c7e3d:{c.instructions+=2;NFSU2_TR(0x6c7e3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7e40:{NFSU2_TR(0x6c7e40);
if(r1(R+518)){{goto L6c7e5f;}}
}
B6c7e42:L6c7e42:{c.instructions+=10;NFSU2_TR(0x6c7e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e45:{NFSU2_TR(0x6c7e45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e46:{NFSU2_TR(0x6c7e46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e4c:{NFSU2_TR(0x6c7e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e4d:{NFSU2_TR(0x6c7e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e50:{NFSU2_TR(0x6c7e50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e51:{NFSU2_TR(0x6c7e51);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e57:{NFSU2_TR(0x6c7e57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e58:{NFSU2_TR(0x6c7e58);
u8 U[4];
w4(U+0,u32(0x7be820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e5d:{NFSU2_TR(0x6c7e5d);
{goto L6c7e7a;}
}
B6c7e5f:L6c7e5f:{c.instructions+=9;NFSU2_TR(0x6c7e5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e62:{NFSU2_TR(0x6c7e62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e63:{NFSU2_TR(0x6c7e63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e69:{NFSU2_TR(0x6c7e69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e6a:{NFSU2_TR(0x6c7e6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e6d:{NFSU2_TR(0x6c7e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e6e:{NFSU2_TR(0x6c7e6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6c7e74:{NFSU2_TR(0x6c7e74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e75:{NFSU2_TR(0x6c7e75);
u8 U[4];
w4(U+0,u32(0x7be6a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6c7e7a:L6c7e7a:{c.instructions+=3;NFSU2_TR(0x6c7e7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6c7e7d:{NFSU2_TR(0x6c7e7d);
__builtin_memmove((R+4),(R+24),4);
}
B6c7e7f:{NFSU2_TR(0x6c7e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6c7e84ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6c7e84:L6c7e84:{c.instructions+=4;NFSU2_TR(0x6c7e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7e87:{NFSU2_TR(0x6c7e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7e8d:{NFSU2_TR(0x6c7e8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7e93:{NFSU2_TR(0x6c7e93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7e9b;}}
}
B6c7e95:L6c7e95:{c.instructions+=1;NFSU2_TR(0x6c7e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7e9b:L6c7e9b:{c.instructions+=2;NFSU2_TR(0x6c7e9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7e9e:{NFSU2_TR(0x6c7e9e);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7ea4:L6c7ea4:{c.instructions+=3;NFSU2_TR(0x6c7ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c7ea7:{NFSU2_TR(0x6c7ea7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c7ea9:{NFSU2_TR(0x6c7ea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7eaf:L6c7eaf:{c.instructions+=7;NFSU2_TR(0x6c7eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7eb2:{NFSU2_TR(0x6c7eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c7eb4:{NFSU2_TR(0x6c7eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7eb7:{NFSU2_TR(0x6c7eb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7eba:{NFSU2_TR(0x6c7eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7ebd:{NFSU2_TR(0x6c7ebd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7ec0:{NFSU2_TR(0x6c7ec0);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7ec6:L6c7ec6:{c.instructions+=11;NFSU2_TR(0x6c7ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7ec9:{NFSU2_TR(0x6c7ec9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7ecc:{NFSU2_TR(0x6c7ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7ecf:{NFSU2_TR(0x6c7ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6c7ed2:{NFSU2_TR(0x6c7ed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6c7ed5:{NFSU2_TR(0x6c7ed5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x11100001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6c7edb:{NFSU2_TR(0x6c7edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7ede:{NFSU2_TR(0x6c7ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6c7ee0:{NFSU2_TR(0x6c7ee0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7ee3:{NFSU2_TR(0x6c7ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7ee6:{NFSU2_TR(0x6c7ee6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7eec:L6c7eec:{c.instructions+=5;NFSU2_TR(0x6c7eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7eef:{NFSU2_TR(0x6c7eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7ef2:{NFSU2_TR(0x6c7ef2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7ef5:{NFSU2_TR(0x6c7ef5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c7ef9:{NFSU2_TR(0x6c7ef9);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7eff:L6c7eff:{c.instructions+=4;NFSU2_TR(0x6c7eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7f02:{NFSU2_TR(0x6c7f02);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6c7f05:{NFSU2_TR(0x6c7f05);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6c7f07:{NFSU2_TR(0x6c7f07);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6c7f0f;}}
}
B6c7f09:L6c7f09:{c.instructions+=1;NFSU2_TR(0x6c7f09);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6c7f0f:L6c7f0f:{c.instructions+=5;NFSU2_TR(0x6c7f0f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7f12:{NFSU2_TR(0x6c7f12);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c7f14:{NFSU2_TR(0x6c7f14);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c7f16:{NFSU2_TR(0x6c7f16);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7f19:{NFSU2_TR(0x6c7f19);
if(r1(R+514)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7f1f:L6c7f1f:{c.instructions+=13;NFSU2_TR(0x6c7f1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7f22:{NFSU2_TR(0x6c7f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7f25:{NFSU2_TR(0x6c7f25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6c7f28:{NFSU2_TR(0x6c7f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7f2e:{NFSU2_TR(0x6c7f2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7f31:{NFSU2_TR(0x6c7f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7f37:{NFSU2_TR(0x6c7f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f3a:{NFSU2_TR(0x6c7f3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7f3d:{NFSU2_TR(0x6c7f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7f40:{NFSU2_TR(0x6c7f40);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7f43:{NFSU2_TR(0x6c7f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f46:{NFSU2_TR(0x6c7f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f49:{NFSU2_TR(0x6c7f49);
if(r1(R+518)){{goto L6c7fbb;}}
}
B6c7f4b:L6c7f4b:{c.instructions+=1;NFSU2_TR(0x6c7f4b);
{goto L6c7f50;}
}
B6c7f4d:L6c7f4d:{c.instructions+=1;NFSU2_TR(0x6c7f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c7f50:L6c7f50:{c.instructions+=2;NFSU2_TR(0x6c7f50);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7f54:{NFSU2_TR(0x6c7f54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7fbb;}}
}
B6c7f56:L6c7f56:{c.instructions+=6;NFSU2_TR(0x6c7f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7f59:{NFSU2_TR(0x6c7f59);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7f5c:{NFSU2_TR(0x6c7f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c7f5e:{NFSU2_TR(0x6c7f5e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
}
B6c7f64:{NFSU2_TR(0x6c7f64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7f6a:{NFSU2_TR(0x6c7f6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6c7fbb;}}
}
B6c7f6c:L6c7f6c:{c.instructions+=5;NFSU2_TR(0x6c7f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6c7f6e:{NFSU2_TR(0x6c7f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f72:{NFSU2_TR(0x6c7f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f75:{NFSU2_TR(0x6c7f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7f7c:{NFSU2_TR(0x6c7f7c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6c7fbb;}}
}
B6c7f7e:L6c7f7e:{c.instructions+=1;NFSU2_TR(0x6c7f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7f81:L6c7f81:{c.instructions+=3;NFSU2_TR(0x6c7f81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6c7f83:{NFSU2_TR(0x6c7f83);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6c7f86:{NFSU2_TR(0x6c7f86);
if(r1(R+518)){{goto L6c7f9e;}}
}
B6c7f88:L6c7f88:{c.instructions+=6;NFSU2_TR(0x6c7f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f8b:{NFSU2_TR(0x6c7f8b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6c7f8e:{NFSU2_TR(0x6c7f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7f91:{NFSU2_TR(0x6c7f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7f94:{NFSU2_TR(0x6c7f94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6c7f97:{NFSU2_TR(0x6c7f97);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6c7fb8;}}
}
B6c7f99:L6c7f99:{c.instructions+=2;NFSU2_TR(0x6c7f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7f9c:{NFSU2_TR(0x6c7f9c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7f81u);}goto L6c7f81;}
}
B6c7f9e:L6c7f9e:{c.instructions+=9;NFSU2_TR(0x6c7f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7fa1:{NFSU2_TR(0x6c7fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6c7fa4:{NFSU2_TR(0x6c7fa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7fa7:{NFSU2_TR(0x6c7fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7faa:{NFSU2_TR(0x6c7faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6c7fad:{NFSU2_TR(0x6c7fad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6c7fb0:{NFSU2_TR(0x6c7fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7fb3:{NFSU2_TR(0x6c7fb3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6c7fb6:{NFSU2_TR(0x6c7fb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6c7f4du);}goto L6c7f4d;}}
}
B6c7fb8:L6c7fb8:{c.instructions+=1;NFSU2_TR(0x6c7fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6c7fbb:L6c7fbb:{c.instructions+=6;NFSU2_TR(0x6c7fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7fbe:{NFSU2_TR(0x6c7fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6c7fc1:{NFSU2_TR(0x6c7fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7fc4:{NFSU2_TR(0x6c7fc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7fc7:{NFSU2_TR(0x6c7fc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c7fcb:{NFSU2_TR(0x6c7fcb);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7fcd:L6c7fcd:{c.instructions+=4;NFSU2_TR(0x6c7fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7fd0:{NFSU2_TR(0x6c7fd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6c7fd3:{NFSU2_TR(0x6c7fd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6c7fd7:{NFSU2_TR(0x6c7fd7);
if(r1(R+518)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7fd9:L6c7fd9:{c.instructions+=7;NFSU2_TR(0x6c7fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6c7fdc:{NFSU2_TR(0x6c7fdc);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7fe2:{NFSU2_TR(0x6c7fe2);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7fe5:{NFSU2_TR(0x6c7fe5);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c7fe7:{NFSU2_TR(0x6c7fe7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c7fe9:{NFSU2_TR(0x6c7fe9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7fec:{NFSU2_TR(0x6c7fec);
if(r1(R+514)){TAIL_STATIC(0x6c801du,6c8);}
}
B6c7fee:L6c7fee:{c.instructions+=6;NFSU2_TR(0x6c7fee);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7ff4:{NFSU2_TR(0x6c7ff4);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6c7ff7:{NFSU2_TR(0x6c7ff7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6c7ff9:{NFSU2_TR(0x6c7ff9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6c7ffb:{NFSU2_TR(0x6c7ffb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6c7ffe:{NFSU2_TR(0x6c7ffe);
if(r1(R+514)){TAIL_STATIC(0x6c801du,6c8);}
TAIL_STATIC(0x6c8000u,6c8);
}
XIT:NFSU2_TR_EXIT(0x6c7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
