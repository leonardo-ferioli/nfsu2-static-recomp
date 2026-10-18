#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 page_6d7(Cpu& c){return body_6d7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d7100:goto L6d7100;
case 0x6d7110:goto L6d7110;
case 0x6d7114:c.instructions+=2;goto B6d7114;
case 0x6d7115:c.instructions+=1;goto B6d7115;
case 0x6d711a:goto L6d711a;
case 0x6d711d:c.instructions+=1;goto B6d711d;
case 0x6d7120:goto L6d7120;
case 0x6d7124:c.instructions+=2;goto B6d7124;
case 0x6d7125:c.instructions+=1;goto B6d7125;
case 0x6d712a:goto L6d712a;
case 0x6d712b:c.instructions+=1;goto B6d712b;
case 0x6d7130:goto L6d7130;
case 0x6d7132:c.instructions+=3;goto B6d7132;
case 0x6d7134:c.instructions+=2;goto B6d7134;
case 0x6d7136:c.instructions+=1;goto B6d7136;
case 0x6d7138:goto L6d7138;
case 0x6d7139:c.instructions+=1;goto B6d7139;
case 0x6d7140:goto L6d7140;
case 0x6d7143:c.instructions+=6;goto B6d7143;
case 0x6d7146:c.instructions+=5;goto B6d7146;
case 0x6d7148:c.instructions+=4;goto B6d7148;
case 0x6d714a:c.instructions+=3;goto B6d714a;
case 0x6d714b:c.instructions+=2;goto B6d714b;
case 0x6d7151:c.instructions+=1;goto B6d7151;
case 0x6d7153:goto L6d7153;
case 0x6d7155:c.instructions+=2;goto B6d7155;
case 0x6d7158:c.instructions+=1;goto B6d7158;
case 0x6d715a:goto L6d715a;
case 0x6d715c:c.instructions+=4;goto B6d715c;
case 0x6d715e:c.instructions+=3;goto B6d715e;
case 0x6d7160:c.instructions+=2;goto B6d7160;
case 0x6d7162:c.instructions+=1;goto B6d7162;
case 0x6d7164:goto L6d7164;
case 0x6d7165:goto L6d7165;
case 0x6d716a:c.instructions+=1;goto B6d716a;
case 0x6d7170:goto L6d7170;
case 0x6d7171:c.instructions+=5;goto B6d7171;
case 0x6d7173:c.instructions+=4;goto B6d7173;
case 0x6d7176:c.instructions+=3;goto B6d7176;
case 0x6d7178:c.instructions+=2;goto B6d7178;
case 0x6d7179:c.instructions+=1;goto B6d7179;
case 0x6d717b:goto L6d717b;
case 0x6d717e:c.instructions+=2;goto B6d717e;
case 0x6d717f:c.instructions+=1;goto B6d717f;
case 0x6d7181:goto L6d7181;
case 0x6d7184:c.instructions+=4;goto B6d7184;
case 0x6d7188:c.instructions+=3;goto B6d7188;
case 0x6d718b:c.instructions+=2;goto B6d718b;
case 0x6d718c:c.instructions+=1;goto B6d718c;
case 0x6d718e:goto L6d718e;
case 0x6d7191:c.instructions+=2;goto B6d7191;
case 0x6d7192:c.instructions+=1;goto B6d7192;
case 0x6d7194:goto L6d7194;
case 0x6d7197:c.instructions+=5;goto B6d7197;
case 0x6d719a:c.instructions+=4;goto B6d719a;
case 0x6d719d:c.instructions+=3;goto B6d719d;
case 0x6d719e:c.instructions+=2;goto B6d719e;
case 0x6d719f:c.instructions+=1;goto B6d719f;
case 0x6d71a5:goto L6d71a5;
case 0x6d71a8:c.instructions+=1;goto B6d71a8;
case 0x6d71af:goto L6d71af;
case 0x6d71b2:c.instructions+=2;goto B6d71b2;
case 0x6d71b4:c.instructions+=1;goto B6d71b4;
case 0x6d71b6:goto L6d71b6;
case 0x6d71b7:goto L6d71b7;
case 0x6d71ba:c.instructions+=5;goto B6d71ba;
case 0x6d71bd:c.instructions+=4;goto B6d71bd;
case 0x6d71c0:c.instructions+=3;goto B6d71c0;
case 0x6d71c1:c.instructions+=2;goto B6d71c1;
case 0x6d71c2:c.instructions+=1;goto B6d71c2;
case 0x6d71c4:goto L6d71c4;
case 0x6d71c6:c.instructions+=2;goto B6d71c6;
case 0x6d71c7:c.instructions+=1;goto B6d71c7;
case 0x6d71cd:goto L6d71cd;
case 0x6d71d0:c.instructions+=3;goto B6d71d0;
case 0x6d71d2:c.instructions+=2;goto B6d71d2;
case 0x6d71d4:c.instructions+=1;goto B6d71d4;
case 0x6d71d6:goto L6d71d6;
case 0x6d71d7:goto L6d71d7;
case 0x6d71d8:c.instructions+=3;goto B6d71d8;
case 0x6d71df:c.instructions+=2;goto B6d71df;
case 0x6d71e0:c.instructions+=1;goto B6d71e0;
case 0x6d71f0:goto L6d71f0;
case 0x6d71f6:c.instructions+=9;goto B6d71f6;
case 0x6d71f7:c.instructions+=8;goto B6d71f7;
case 0x6d71f8:c.instructions+=7;goto B6d71f8;
case 0x6d71f9:c.instructions+=6;goto B6d71f9;
case 0x6d71fb:c.instructions+=5;goto B6d71fb;
case 0x6d71fd:c.instructions+=4;goto B6d71fd;
case 0x6d71fe:c.instructions+=3;goto B6d71fe;
case 0x6d7203:c.instructions+=2;goto B6d7203;
case 0x6d7207:c.instructions+=1;goto B6d7207;
case 0x6d720d:goto L6d720d;
case 0x6d7210:c.instructions+=2;goto B6d7210;
case 0x6d7212:c.instructions+=1;goto B6d7212;
case 0x6d7214:goto L6d7214;
case 0x6d7216:c.instructions+=13;goto B6d7216;
case 0x6d7218:c.instructions+=12;goto B6d7218;
case 0x6d721b:c.instructions+=11;goto B6d721b;
case 0x6d721f:c.instructions+=10;goto B6d721f;
case 0x6d7222:c.instructions+=9;goto B6d7222;
case 0x6d7225:c.instructions+=8;goto B6d7225;
case 0x6d7228:c.instructions+=7;goto B6d7228;
case 0x6d722b:c.instructions+=6;goto B6d722b;
case 0x6d7231:c.instructions+=5;goto B6d7231;
case 0x6d7237:c.instructions+=4;goto B6d7237;
case 0x6d723d:c.instructions+=3;goto B6d723d;
case 0x6d7243:c.instructions+=2;goto B6d7243;
case 0x6d7247:c.instructions+=1;goto B6d7247;
case 0x6d7249:goto L6d7249;
case 0x6d724d:c.instructions+=1;goto B6d724d;
case 0x6d724f:goto L6d724f;
case 0x6d7250:c.instructions+=7;goto B6d7250;
case 0x6d7253:c.instructions+=6;goto B6d7253;
case 0x6d7256:c.instructions+=5;goto B6d7256;
case 0x6d7259:c.instructions+=4;goto B6d7259;
case 0x6d725c:c.instructions+=3;goto B6d725c;
case 0x6d725e:c.instructions+=2;goto B6d725e;
case 0x6d7262:c.instructions+=1;goto B6d7262;
case 0x6d7264:goto L6d7264;
case 0x6d7267:c.instructions+=2;goto B6d7267;
case 0x6d7269:c.instructions+=1;goto B6d7269;
case 0x6d726b:goto L6d726b;
case 0x6d726d:c.instructions+=1;goto B6d726d;
case 0x6d726f:goto L6d726f;
case 0x6d7271:c.instructions+=1;goto B6d7271;
case 0x6d7273:goto L6d7273;
case 0x6d7277:c.instructions+=1;goto B6d7277;
case 0x6d7279:goto L6d7279;
case 0x6d727c:goto L6d727c;
case 0x6d727e:c.instructions+=1;goto B6d727e;
case 0x6d7282:goto L6d7282;
case 0x6d7286:c.instructions+=4;goto B6d7286;
case 0x6d7289:c.instructions+=3;goto B6d7289;
case 0x6d728c:c.instructions+=2;goto B6d728c;
case 0x6d7291:c.instructions+=1;goto B6d7291;
case 0x6d7293:goto L6d7293;
case 0x6d7296:goto L6d7296;
case 0x6d7299:c.instructions+=3;goto B6d7299;
case 0x6d729c:c.instructions+=2;goto B6d729c;
case 0x6d729e:c.instructions+=1;goto B6d729e;
case 0x6d72a0:goto L6d72a0;
case 0x6d72a3:c.instructions+=2;goto B6d72a3;
case 0x6d72a5:c.instructions+=1;goto B6d72a5;
case 0x6d72a7:goto L6d72a7;
case 0x6d72a9:c.instructions+=1;goto B6d72a9;
case 0x6d72ab:goto L6d72ab;
case 0x6d72ad:c.instructions+=1;goto B6d72ad;
case 0x6d72af:goto L6d72af;
case 0x6d72b1:c.instructions+=1;goto B6d72b1;
case 0x6d72b3:goto L6d72b3;
case 0x6d72b6:goto L6d72b6;
case 0x6d72b8:goto L6d72b8;
case 0x6d72bb:c.instructions+=6;goto B6d72bb;
case 0x6d72bf:c.instructions+=5;goto B6d72bf;
case 0x6d72c3:c.instructions+=4;goto B6d72c3;
case 0x6d72c4:c.instructions+=3;goto B6d72c4;
case 0x6d72c7:c.instructions+=2;goto B6d72c7;
case 0x6d72c9:c.instructions+=1;goto B6d72c9;
case 0x6d72cb:goto L6d72cb;
case 0x6d72cd:goto L6d72cd;
case 0x6d72d1:c.instructions+=8;goto B6d72d1;
case 0x6d72d5:c.instructions+=7;goto B6d72d5;
case 0x6d72d8:c.instructions+=6;goto B6d72d8;
case 0x6d72dc:c.instructions+=5;goto B6d72dc;
case 0x6d72de:c.instructions+=4;goto B6d72de;
case 0x6d72e2:c.instructions+=3;goto B6d72e2;
case 0x6d72e6:c.instructions+=2;goto B6d72e6;
case 0x6d72ea:c.instructions+=1;goto B6d72ea;
case 0x6d72f0:goto L6d72f0;
case 0x6d72f3:c.instructions+=1;goto B6d72f3;
case 0x6d72f5:goto L6d72f5;
case 0x6d72f9:c.instructions+=1;goto B6d72f9;
case 0x6d7300:goto L6d7300;
case 0x6d7303:c.instructions+=2;goto B6d7303;
case 0x6d7308:c.instructions+=1;goto B6d7308;
case 0x6d730e:goto L6d730e;
case 0x6d7314:goto L6d7314;
case 0x6d7317:c.instructions+=1;goto B6d7317;
case 0x6d731d:goto L6d731d;
case 0x6d7324:goto L6d7324;
case 0x6d7326:c.instructions+=8;goto B6d7326;
case 0x6d7329:c.instructions+=7;goto B6d7329;
case 0x6d732c:c.instructions+=6;goto B6d732c;
case 0x6d7330:c.instructions+=5;goto B6d7330;
case 0x6d7332:c.instructions+=4;goto B6d7332;
case 0x6d7336:c.instructions+=3;goto B6d7336;
case 0x6d733b:c.instructions+=2;goto B6d733b;
case 0x6d7340:c.instructions+=1;goto B6d7340;
case 0x6d7342:goto L6d7342;
case 0x6d7344:goto L6d7344;
case 0x6d734a:goto L6d734a;
case 0x6d734d:c.instructions+=8;goto B6d734d;
case 0x6d7350:c.instructions+=7;goto B6d7350;
case 0x6d7353:c.instructions+=6;goto B6d7353;
case 0x6d7354:c.instructions+=5;goto B6d7354;
case 0x6d7357:c.instructions+=4;goto B6d7357;
case 0x6d7359:c.instructions+=3;goto B6d7359;
case 0x6d735c:c.instructions+=2;goto B6d735c;
case 0x6d735f:c.instructions+=1;goto B6d735f;
case 0x6d7364:goto L6d7364;
case 0x6d7367:c.instructions+=4;goto B6d7367;
case 0x6d736b:c.instructions+=3;goto B6d736b;
case 0x6d7370:c.instructions+=2;goto B6d7370;
case 0x6d7375:c.instructions+=1;goto B6d7375;
case 0x6d7377:goto L6d7377;
case 0x6d7379:goto L6d7379;
case 0x6d737f:goto L6d737f;
case 0x6d7382:c.instructions+=5;goto B6d7382;
case 0x6d7385:c.instructions+=4;goto B6d7385;
case 0x6d7388:c.instructions+=3;goto B6d7388;
case 0x6d738a:c.instructions+=2;goto B6d738a;
case 0x6d738e:c.instructions+=1;goto B6d738e;
case 0x6d7394:goto L6d7394;
case 0x6d7396:c.instructions+=2;goto B6d7396;
case 0x6d7399:c.instructions+=1;goto B6d7399;
case 0x6d73a0:goto L6d73a0;
case 0x6d73a2:c.instructions+=3;goto B6d73a2;
case 0x6d73a3:c.instructions+=2;goto B6d73a3;
case 0x6d73a5:c.instructions+=1;goto B6d73a5;
case 0x6d73a7:goto L6d73a7;
case 0x6d73a9:c.instructions+=4;goto B6d73a9;
case 0x6d73ab:c.instructions+=3;goto B6d73ab;
case 0x6d73ae:c.instructions+=2;goto B6d73ae;
case 0x6d73b2:c.instructions+=1;goto B6d73b2;
case 0x6d73b8:goto L6d73b8;
case 0x6d73bc:c.instructions+=1;goto B6d73bc;
case 0x6d73c2:goto L6d73c2;
case 0x6d73c5:c.instructions+=3;goto B6d73c5;
case 0x6d73ca:c.instructions+=2;goto B6d73ca;
case 0x6d73cb:c.instructions+=1;goto B6d73cb;
case 0x6d73d0:goto L6d73d0;
case 0x6d73d3:c.instructions+=2;goto B6d73d3;
case 0x6d73d5:c.instructions+=1;goto B6d73d5;
case 0x6d73d7:goto L6d73d7;
case 0x6d73db:c.instructions+=3;goto B6d73db;
case 0x6d73de:c.instructions+=2;goto B6d73de;
case 0x6d73e0:c.instructions+=1;goto B6d73e0;
case 0x6d73e2:goto L6d73e2;
case 0x6d73e4:c.instructions+=4;goto B6d73e4;
case 0x6d73e7:c.instructions+=3;goto B6d73e7;
case 0x6d73e8:c.instructions+=2;goto B6d73e8;
case 0x6d73ea:c.instructions+=1;goto B6d73ea;
case 0x6d73ec:goto L6d73ec;
case 0x6d73f1:c.instructions+=1;goto B6d73f1;
case 0x6d73f4:goto L6d73f4;
case 0x6d73f6:c.instructions+=3;goto B6d73f6;
case 0x6d73f7:c.instructions+=2;goto B6d73f7;
case 0x6d73f9:c.instructions+=1;goto B6d73f9;
case 0x6d73fb:goto L6d73fb;
case 0x6d73fd:c.instructions+=3;goto B6d73fd;
case 0x6d73ff:c.instructions+=2;goto B6d73ff;
case 0x6d7401:c.instructions+=1;goto B6d7401;
case 0x6d7404:goto L6d7404;
case 0x6d7406:c.instructions+=3;goto B6d7406;
case 0x6d7407:c.instructions+=2;goto B6d7407;
case 0x6d7409:c.instructions+=1;goto B6d7409;
case 0x6d740b:goto L6d740b;
case 0x6d740d:c.instructions+=5;goto B6d740d;
case 0x6d7410:c.instructions+=4;goto B6d7410;
case 0x6d7411:c.instructions+=3;goto B6d7411;
case 0x6d7412:c.instructions+=2;goto B6d7412;
case 0x6d7413:c.instructions+=1;goto B6d7413;
case 0x6d7418:goto L6d7418;
case 0x6d741b:c.instructions+=7;goto B6d741b;
case 0x6d741f:c.instructions+=6;goto B6d741f;
case 0x6d7422:c.instructions+=5;goto B6d7422;
case 0x6d7425:c.instructions+=4;goto B6d7425;
case 0x6d7427:c.instructions+=3;goto B6d7427;
case 0x6d742b:c.instructions+=2;goto B6d742b;
case 0x6d742e:c.instructions+=1;goto B6d742e;
case 0x6d7430:goto L6d7430;
case 0x6d7432:c.instructions+=4;goto B6d7432;
case 0x6d7435:c.instructions+=3;goto B6d7435;
case 0x6d7436:c.instructions+=2;goto B6d7436;
case 0x6d7438:c.instructions+=1;goto B6d7438;
case 0x6d743a:goto L6d743a;
case 0x6d743e:goto L6d743e;
case 0x6d7442:c.instructions+=7;goto B6d7442;
case 0x6d7445:c.instructions+=6;goto B6d7445;
case 0x6d7447:c.instructions+=5;goto B6d7447;
case 0x6d7449:c.instructions+=4;goto B6d7449;
case 0x6d744b:c.instructions+=3;goto B6d744b;
case 0x6d744f:c.instructions+=2;goto B6d744f;
case 0x6d7453:c.instructions+=1;goto B6d7453;
case 0x6d7459:goto L6d7459;
case 0x6d745d:c.instructions+=1;goto B6d745d;
case 0x6d7462:goto L6d7462;
case 0x6d7465:c.instructions+=2;goto B6d7465;
case 0x6d7467:c.instructions+=1;goto B6d7467;
case 0x6d746d:goto L6d746d;
case 0x6d7472:c.instructions+=2;goto B6d7472;
case 0x6d7474:c.instructions+=1;goto B6d7474;
case 0x6d7479:goto L6d7479;
case 0x6d747c:c.instructions+=1;goto B6d747c;
case 0x6d7481:goto L6d7481;
case 0x6d7486:c.instructions+=2;goto B6d7486;
case 0x6d7488:c.instructions+=1;goto B6d7488;
case 0x6d748d:goto L6d748d;
case 0x6d7490:c.instructions+=1;goto B6d7490;
case 0x6d7495:goto L6d7495;
case 0x6d7498:c.instructions+=8;goto B6d7498;
case 0x6d749b:c.instructions+=7;goto B6d749b;
case 0x6d749f:c.instructions+=6;goto B6d749f;
case 0x6d74a2:c.instructions+=5;goto B6d74a2;
case 0x6d74a4:c.instructions+=4;goto B6d74a4;
case 0x6d74a7:c.instructions+=3;goto B6d74a7;
case 0x6d74ab:c.instructions+=2;goto B6d74ab;
case 0x6d74ad:c.instructions+=1;goto B6d74ad;
case 0x6d74af:goto L6d74af;
case 0x6d74b2:c.instructions+=2;goto B6d74b2;
case 0x6d74b4:c.instructions+=1;goto B6d74b4;
case 0x6d74b6:goto L6d74b6;
case 0x6d74bb:c.instructions+=2;goto B6d74bb;
case 0x6d74bd:c.instructions+=1;goto B6d74bd;
case 0x6d74c2:goto L6d74c2;
case 0x6d74c5:c.instructions+=1;goto B6d74c5;
case 0x6d74c7:goto L6d74c7;
case 0x6d74cc:c.instructions+=2;goto B6d74cc;
case 0x6d74ce:c.instructions+=1;goto B6d74ce;
case 0x6d74d3:goto L6d74d3;
case 0x6d74d6:c.instructions+=1;goto B6d74d6;
case 0x6d74d8:goto L6d74d8;
case 0x6d74dd:c.instructions+=2;goto B6d74dd;
case 0x6d74df:c.instructions+=1;goto B6d74df;
case 0x6d74e4:goto L6d74e4;
case 0x6d74e7:c.instructions+=1;goto B6d74e7;
case 0x6d74e9:goto L6d74e9;
case 0x6d74ee:c.instructions+=1;goto B6d74ee;
case 0x6d74f0:goto L6d74f0;
case 0x6d74f5:c.instructions+=1;goto B6d74f5;
case 0x6d74f7:goto L6d74f7;
case 0x6d74fc:c.instructions+=1;goto B6d74fc;
case 0x6d74fe:goto L6d74fe;
case 0x6d74ff:c.instructions+=4;goto B6d74ff;
case 0x6d7500:c.instructions+=3;goto B6d7500;
case 0x6d7505:c.instructions+=2;goto B6d7505;
case 0x6d7507:c.instructions+=1;goto B6d7507;
case 0x6d750c:goto L6d750c;
case 0x6d750f:goto L6d750f;
case 0x6d7513:c.instructions+=7;goto B6d7513;
case 0x6d7517:c.instructions+=6;goto B6d7517;
case 0x6d751b:c.instructions+=5;goto B6d751b;
case 0x6d751c:c.instructions+=4;goto B6d751c;
case 0x6d751f:c.instructions+=3;goto B6d751f;
case 0x6d7521:c.instructions+=2;goto B6d7521;
case 0x6d7525:c.instructions+=1;goto B6d7525;
case 0x6d752b:goto L6d752b;
case 0x6d752f:goto L6d752f;
case 0x6d7532:c.instructions+=2;goto B6d7532;
case 0x6d7534:c.instructions+=1;goto B6d7534;
case 0x6d7536:goto L6d7536;
case 0x6d753b:c.instructions+=2;goto B6d753b;
case 0x6d753d:c.instructions+=1;goto B6d753d;
case 0x6d7542:goto L6d7542;
case 0x6d7545:goto L6d7545;
case 0x6d754c:c.instructions+=4;goto B6d754c;
case 0x6d7552:c.instructions+=3;goto B6d7552;
case 0x6d7555:c.instructions+=2;goto B6d7555;
case 0x6d7558:c.instructions+=1;goto B6d7558;
case 0x6d755d:goto L6d755d;
case 0x6d755f:goto L6d755f;
case 0x6d7562:c.instructions+=4;goto B6d7562;
case 0x6d7565:c.instructions+=3;goto B6d7565;
case 0x6d756a:c.instructions+=2;goto B6d756a;
case 0x6d756b:c.instructions+=1;goto B6d756b;
case 0x6d7571:goto L6d7571;
case 0x6d7577:c.instructions+=4;goto B6d7577;
case 0x6d757a:c.instructions+=3;goto B6d757a;
case 0x6d757f:c.instructions+=2;goto B6d757f;
case 0x6d7580:c.instructions+=1;goto B6d7580;
case 0x6d7586:goto L6d7586;
case 0x6d758c:c.instructions+=5;goto B6d758c;
case 0x6d758f:c.instructions+=4;goto B6d758f;
case 0x6d7592:c.instructions+=3;goto B6d7592;
case 0x6d7594:c.instructions+=2;goto B6d7594;
case 0x6d7596:c.instructions+=1;goto B6d7596;
case 0x6d759c:goto L6d759c;
case 0x6d759e:c.instructions+=1;goto B6d759e;
case 0x6d75a0:goto L6d75a0;
case 0x6d75a4:c.instructions+=9;goto B6d75a4;
case 0x6d75a7:c.instructions+=8;goto B6d75a7;
case 0x6d75aa:c.instructions+=7;goto B6d75aa;
case 0x6d75ad:c.instructions+=6;goto B6d75ad;
case 0x6d75af:c.instructions+=5;goto B6d75af;
case 0x6d75b1:c.instructions+=4;goto B6d75b1;
case 0x6d75b5:c.instructions+=3;goto B6d75b5;
case 0x6d75b7:c.instructions+=2;goto B6d75b7;
case 0x6d75b9:c.instructions+=1;goto B6d75b9;
case 0x6d75bb:goto L6d75bb;
case 0x6d75c0:goto L6d75c0;
case 0x6d75c3:c.instructions+=6;goto B6d75c3;
case 0x6d75c6:c.instructions+=5;goto B6d75c6;
case 0x6d75c8:c.instructions+=4;goto B6d75c8;
case 0x6d75ca:c.instructions+=3;goto B6d75ca;
case 0x6d75cb:c.instructions+=2;goto B6d75cb;
case 0x6d75d1:c.instructions+=1;goto B6d75d1;
case 0x6d75d3:goto L6d75d3;
case 0x6d75d5:c.instructions+=3;goto B6d75d5;
case 0x6d75d8:c.instructions+=2;goto B6d75d8;
case 0x6d75da:c.instructions+=1;goto B6d75da;
case 0x6d75de:goto L6d75de;
case 0x6d75e0:c.instructions+=4;goto B6d75e0;
case 0x6d75e2:c.instructions+=3;goto B6d75e2;
case 0x6d75e4:c.instructions+=2;goto B6d75e4;
case 0x6d75e6:c.instructions+=1;goto B6d75e6;
case 0x6d75e8:goto L6d75e8;
case 0x6d75ee:c.instructions+=7;goto B6d75ee;
case 0x6d75f3:c.instructions+=6;goto B6d75f3;
case 0x6d75f7:c.instructions+=5;goto B6d75f7;
case 0x6d75fa:c.instructions+=4;goto B6d75fa;
case 0x6d75fe:c.instructions+=3;goto B6d75fe;
case 0x6d7601:c.instructions+=2;goto B6d7601;
case 0x6d7604:c.instructions+=1;goto B6d7604;
case 0x6d7606:goto L6d7606;
case 0x6d760a:c.instructions+=2;goto B6d760a;
case 0x6d760e:c.instructions+=1;goto B6d760e;
case 0x6d7610:goto L6d7610;
case 0x6d7616:c.instructions+=2;goto B6d7616;
case 0x6d761a:c.instructions+=1;goto B6d761a;
case 0x6d761c:goto L6d761c;
case 0x6d7622:c.instructions+=1;goto B6d7622;
case 0x6d7626:goto L6d7626;
case 0x6d7629:c.instructions+=4;goto B6d7629;
case 0x6d762a:c.instructions+=3;goto B6d762a;
case 0x6d762d:c.instructions+=2;goto B6d762d;
case 0x6d762f:c.instructions+=1;goto B6d762f;
case 0x6d7635:goto L6d7635;
case 0x6d7639:c.instructions+=1;goto B6d7639;
case 0x6d763d:goto L6d763d;
case 0x6d7642:c.instructions+=4;goto B6d7642;
case 0x6d7644:c.instructions+=3;goto B6d7644;
case 0x6d7647:c.instructions+=2;goto B6d7647;
case 0x6d7648:c.instructions+=1;goto B6d7648;
case 0x6d764a:goto L6d764a;
case 0x6d764d:goto L6d764d;
case 0x6d7654:c.instructions+=7;goto B6d7654;
case 0x6d7655:c.instructions+=6;goto B6d7655;
case 0x6d7657:c.instructions+=5;goto B6d7657;
case 0x6d765d:c.instructions+=4;goto B6d765d;
case 0x6d765e:c.instructions+=3;goto B6d765e;
case 0x6d765f:c.instructions+=2;goto B6d765f;
case 0x6d7665:c.instructions+=1;goto B6d7665;
case 0x6d76a0:goto L6d76a0;
case 0x6d76a3:c.instructions+=7;goto B6d76a3;
case 0x6d76a4:c.instructions+=6;goto B6d76a4;
case 0x6d76a5:c.instructions+=5;goto B6d76a5;
case 0x6d76a7:c.instructions+=4;goto B6d76a7;
case 0x6d76a9:c.instructions+=3;goto B6d76a9;
case 0x6d76ab:c.instructions+=2;goto B6d76ab;
case 0x6d76ad:c.instructions+=1;goto B6d76ad;
case 0x6d76af:goto L6d76af;
case 0x6d76b3:c.instructions+=11;goto B6d76b3;
case 0x6d76b5:c.instructions+=10;goto B6d76b5;
case 0x6d76b7:c.instructions+=9;goto B6d76b7;
case 0x6d76bb:c.instructions+=8;goto B6d76bb;
case 0x6d76be:c.instructions+=7;goto B6d76be;
case 0x6d76c2:c.instructions+=6;goto B6d76c2;
case 0x6d76c5:c.instructions+=5;goto B6d76c5;
case 0x6d76c6:c.instructions+=4;goto B6d76c6;
case 0x6d76c9:c.instructions+=3;goto B6d76c9;
case 0x6d76ca:c.instructions+=2;goto B6d76ca;
case 0x6d76cd:c.instructions+=1;goto B6d76cd;
case 0x6d76d0:goto L6d76d0;
case 0x6d76d4:c.instructions+=4;goto B6d76d4;
case 0x6d76d6:c.instructions+=3;goto B6d76d6;
case 0x6d76d9:c.instructions+=2;goto B6d76d9;
case 0x6d76da:c.instructions+=1;goto B6d76da;
case 0x6d76e0:goto L6d76e0;
case 0x6d76e3:c.instructions+=1;goto B6d76e3;
case 0x6d76e9:goto L6d76e9;
case 0x6d76ec:c.instructions+=8;goto B6d76ec;
case 0x6d76ef:c.instructions+=7;goto B6d76ef;
case 0x6d76f1:c.instructions+=6;goto B6d76f1;
case 0x6d76f4:c.instructions+=5;goto B6d76f4;
case 0x6d76f5:c.instructions+=4;goto B6d76f5;
case 0x6d76f8:c.instructions+=3;goto B6d76f8;
case 0x6d76fa:c.instructions+=2;goto B6d76fa;
case 0x6d76fd:c.instructions+=1;goto B6d76fd;
case 0x6d7700:goto L6d7700;
case 0x6d7702:c.instructions+=3;goto B6d7702;
case 0x6d7703:c.instructions+=2;goto B6d7703;
case 0x6d7705:c.instructions+=1;goto B6d7705;
case 0x6d7707:goto L6d7707;
case 0x6d7709:c.instructions+=3;goto B6d7709;
case 0x6d770d:c.instructions+=2;goto B6d770d;
case 0x6d7710:c.instructions+=1;goto B6d7710;
case 0x6d7712:goto L6d7712;
case 0x6d7713:c.instructions+=1;goto B6d7713;
case 0x6d7715:goto L6d7715;
case 0x6d7716:goto L6d7716;
case 0x6d7719:c.instructions+=2;goto B6d7719;
case 0x6d771c:c.instructions+=1;goto B6d771c;
case 0x6d771e:goto L6d771e;
case 0x6d7721:c.instructions+=1;goto B6d7721;
case 0x6d7723:goto L6d7723;
case 0x6d7726:c.instructions+=1;goto B6d7726;
case 0x6d7728:goto L6d7728;
case 0x6d772b:c.instructions+=2;goto B6d772b;
case 0x6d7730:c.instructions+=1;goto B6d7730;
case 0x6d7732:goto L6d7732;
case 0x6d7737:goto L6d7737;
case 0x6d773a:c.instructions+=2;goto B6d773a;
case 0x6d773e:c.instructions+=1;goto B6d773e;
case 0x6d7740:goto L6d7740;
case 0x6d7743:c.instructions+=13;goto B6d7743;
case 0x6d7747:c.instructions+=12;goto B6d7747;
case 0x6d774b:c.instructions+=11;goto B6d774b;
case 0x6d774d:c.instructions+=10;goto B6d774d;
case 0x6d774f:c.instructions+=9;goto B6d774f;
case 0x6d7750:c.instructions+=8;goto B6d7750;
case 0x6d7753:c.instructions+=7;goto B6d7753;
case 0x6d7754:c.instructions+=6;goto B6d7754;
case 0x6d7757:c.instructions+=5;goto B6d7757;
case 0x6d7758:c.instructions+=4;goto B6d7758;
case 0x6d775b:c.instructions+=3;goto B6d775b;
case 0x6d775c:c.instructions+=2;goto B6d775c;
case 0x6d775f:c.instructions+=1;goto B6d775f;
case 0x6d7762:goto L6d7762;
case 0x6d7764:c.instructions+=1;goto B6d7764;
case 0x6d7766:goto L6d7766;
case 0x6d7769:c.instructions+=3;goto B6d7769;
case 0x6d776d:c.instructions+=2;goto B6d776d;
case 0x6d776f:c.instructions+=1;goto B6d776f;
case 0x6d7771:goto L6d7771;
case 0x6d7774:c.instructions+=3;goto B6d7774;
case 0x6d7777:c.instructions+=2;goto B6d7777;
case 0x6d777b:c.instructions+=1;goto B6d777b;
case 0x6d777e:goto L6d777e;
case 0x6d7782:c.instructions+=12;goto B6d7782;
case 0x6d7786:c.instructions+=11;goto B6d7786;
case 0x6d7788:c.instructions+=10;goto B6d7788;
case 0x6d778a:c.instructions+=9;goto B6d778a;
case 0x6d778b:c.instructions+=8;goto B6d778b;
case 0x6d778e:c.instructions+=7;goto B6d778e;
case 0x6d778f:c.instructions+=6;goto B6d778f;
case 0x6d7792:c.instructions+=5;goto B6d7792;
case 0x6d7793:c.instructions+=4;goto B6d7793;
case 0x6d7796:c.instructions+=3;goto B6d7796;
case 0x6d7797:c.instructions+=2;goto B6d7797;
case 0x6d779a:c.instructions+=1;goto B6d779a;
case 0x6d779d:goto L6d779d;
case 0x6d77a1:c.instructions+=12;goto B6d77a1;
case 0x6d77a3:c.instructions+=11;goto B6d77a3;
case 0x6d77a5:c.instructions+=10;goto B6d77a5;
case 0x6d77a9:c.instructions+=9;goto B6d77a9;
case 0x6d77ac:c.instructions+=8;goto B6d77ac;
case 0x6d77b0:c.instructions+=7;goto B6d77b0;
case 0x6d77b1:c.instructions+=6;goto B6d77b1;
case 0x6d77b4:c.instructions+=5;goto B6d77b4;
case 0x6d77b5:c.instructions+=4;goto B6d77b5;
case 0x6d77b8:c.instructions+=3;goto B6d77b8;
case 0x6d77b9:c.instructions+=2;goto B6d77b9;
case 0x6d77bc:c.instructions+=1;goto B6d77bc;
case 0x6d77c0:goto L6d77c0;
case 0x6d77c4:c.instructions+=8;goto B6d77c4;
case 0x6d77c5:c.instructions+=7;goto B6d77c5;
case 0x6d77c6:c.instructions+=6;goto B6d77c6;
case 0x6d77ca:c.instructions+=5;goto B6d77ca;
case 0x6d77cd:c.instructions+=4;goto B6d77cd;
case 0x6d77ce:c.instructions+=3;goto B6d77ce;
case 0x6d77cf:c.instructions+=2;goto B6d77cf;
case 0x6d77d3:c.instructions+=1;goto B6d77d3;
case 0x6d77d8:goto L6d77d8;
case 0x6d77dc:c.instructions+=2;goto B6d77dc;
case 0x6d77df:c.instructions+=1;goto B6d77df;
case 0x6d77e5:goto L6d77e5;
case 0x6d77e8:c.instructions+=2;goto B6d77e8;
case 0x6d77ea:c.instructions+=1;goto B6d77ea;
case 0x6d77ec:goto L6d77ec;
case 0x6d77ed:c.instructions+=4;goto B6d77ed;
case 0x6d77ee:c.instructions+=3;goto B6d77ee;
case 0x6d77f3:c.instructions+=2;goto B6d77f3;
case 0x6d77f5:c.instructions+=1;goto B6d77f5;
case 0x6d77fa:goto L6d77fa;
case 0x6d77fd:goto L6d77fd;
case 0x6d7803:c.instructions+=2;goto B6d7803;
case 0x6d7807:c.instructions+=1;goto B6d7807;
case 0x6d7809:goto L6d7809;
case 0x6d780d:c.instructions+=7;goto B6d780d;
case 0x6d7811:c.instructions+=6;goto B6d7811;
case 0x6d7813:c.instructions+=5;goto B6d7813;
case 0x6d7816:c.instructions+=4;goto B6d7816;
case 0x6d7819:c.instructions+=3;goto B6d7819;
case 0x6d781b:c.instructions+=2;goto B6d781b;
case 0x6d781e:c.instructions+=1;goto B6d781e;
case 0x6d7820:goto L6d7820;
case 0x6d7822:c.instructions+=3;goto B6d7822;
case 0x6d7824:c.instructions+=2;goto B6d7824;
case 0x6d7826:c.instructions+=1;goto B6d7826;
case 0x6d7828:goto L6d7828;
case 0x6d782a:c.instructions+=1;goto B6d782a;
case 0x6d782c:goto L6d782c;
case 0x6d782f:c.instructions+=3;goto B6d782f;
case 0x6d7831:c.instructions+=2;goto B6d7831;
case 0x6d7834:c.instructions+=1;goto B6d7834;
case 0x6d7836:goto L6d7836;
case 0x6d7839:c.instructions+=3;goto B6d7839;
case 0x6d783c:c.instructions+=2;goto B6d783c;
case 0x6d783e:c.instructions+=1;goto B6d783e;
case 0x6d7840:goto L6d7840;
case 0x6d7842:c.instructions+=1;goto B6d7842;
case 0x6d7844:goto L6d7844;
case 0x6d7846:c.instructions+=1;goto B6d7846;
case 0x6d7849:goto L6d7849;
case 0x6d784b:c.instructions+=1;goto B6d784b;
case 0x6d784d:goto L6d784d;
case 0x6d7851:c.instructions+=2;goto B6d7851;
case 0x6d7853:c.instructions+=1;goto B6d7853;
case 0x6d7855:goto L6d7855;
case 0x6d7858:c.instructions+=3;goto B6d7858;
case 0x6d785c:c.instructions+=2;goto B6d785c;
case 0x6d785e:c.instructions+=1;goto B6d785e;
case 0x6d7860:goto L6d7860;
case 0x6d7866:c.instructions+=3;goto B6d7866;
case 0x6d7869:c.instructions+=2;goto B6d7869;
case 0x6d786c:c.instructions+=1;goto B6d786c;
case 0x6d7872:goto L6d7872;
case 0x6d7873:c.instructions+=5;goto B6d7873;
case 0x6d7874:c.instructions+=4;goto B6d7874;
case 0x6d7875:c.instructions+=3;goto B6d7875;
case 0x6d7877:c.instructions+=2;goto B6d7877;
case 0x6d7878:c.instructions+=1;goto B6d7878;
case 0x6d7879:goto L6d7879;
case 0x6d787c:c.instructions+=11;goto B6d787c;
case 0x6d787f:c.instructions+=10;goto B6d787f;
case 0x6d7883:c.instructions+=9;goto B6d7883;
case 0x6d7887:c.instructions+=8;goto B6d7887;
case 0x6d788a:c.instructions+=7;goto B6d788a;
case 0x6d788e:c.instructions+=6;goto B6d788e;
case 0x6d788f:c.instructions+=5;goto B6d788f;
case 0x6d7890:c.instructions+=4;goto B6d7890;
case 0x6d7891:c.instructions+=3;goto B6d7891;
case 0x6d7893:c.instructions+=2;goto B6d7893;
case 0x6d7894:c.instructions+=1;goto B6d7894;
case 0x6d78a0:goto L6d78a0;
case 0x6d78a3:c.instructions+=6;goto B6d78a3;
case 0x6d78a4:c.instructions+=5;goto B6d78a4;
case 0x6d78a5:c.instructions+=4;goto B6d78a5;
case 0x6d78a6:c.instructions+=3;goto B6d78a6;
case 0x6d78a7:c.instructions+=2;goto B6d78a7;
case 0x6d78a9:c.instructions+=1;goto B6d78a9;
case 0x6d78b0:goto L6d78b0;
case 0x6d78b2:c.instructions+=2;goto B6d78b2;
case 0x6d78b4:c.instructions+=1;goto B6d78b4;
case 0x6d78b6:goto L6d78b6;
case 0x6d78b9:goto L6d78b9;
case 0x6d78bd:c.instructions+=3;goto B6d78bd;
case 0x6d78bf:c.instructions+=2;goto B6d78bf;
case 0x6d78c1:c.instructions+=1;goto B6d78c1;
case 0x6d78c7:goto L6d78c7;
case 0x6d78c8:c.instructions+=4;goto B6d78c8;
case 0x6d78cc:c.instructions+=3;goto B6d78cc;
case 0x6d78cd:c.instructions+=2;goto B6d78cd;
case 0x6d78cf:c.instructions+=1;goto B6d78cf;
case 0x6d78d4:goto L6d78d4;
case 0x6d78d8:c.instructions+=3;goto B6d78d8;
case 0x6d78dc:c.instructions+=2;goto B6d78dc;
case 0x6d78de:c.instructions+=1;goto B6d78de;
case 0x6d78e0:goto L6d78e0;
case 0x6d78e2:c.instructions+=3;goto B6d78e2;
case 0x6d78e4:c.instructions+=2;goto B6d78e4;
case 0x6d78e6:c.instructions+=1;goto B6d78e6;
case 0x6d78e8:goto L6d78e8;
case 0x6d78ea:c.instructions+=1;goto B6d78ea;
case 0x6d78ec:goto L6d78ec;
case 0x6d78ef:c.instructions+=3;goto B6d78ef;
case 0x6d78f1:c.instructions+=2;goto B6d78f1;
case 0x6d78f4:c.instructions+=1;goto B6d78f4;
case 0x6d78f6:goto L6d78f6;
case 0x6d78f9:c.instructions+=3;goto B6d78f9;
case 0x6d78fc:c.instructions+=2;goto B6d78fc;
case 0x6d78fe:c.instructions+=1;goto B6d78fe;
case 0x6d7900:goto L6d7900;
case 0x6d7902:c.instructions+=1;goto B6d7902;
case 0x6d7904:goto L6d7904;
case 0x6d7906:c.instructions+=1;goto B6d7906;
case 0x6d7909:goto L6d7909;
case 0x6d790b:c.instructions+=1;goto B6d790b;
case 0x6d790d:goto L6d790d;
case 0x6d7911:c.instructions+=3;goto B6d7911;
case 0x6d7912:c.instructions+=2;goto B6d7912;
case 0x6d7914:c.instructions+=1;goto B6d7914;
case 0x6d7916:goto L6d7916;
case 0x6d791a:c.instructions+=18;goto B6d791a;
case 0x6d791e:c.instructions+=17;goto B6d791e;
case 0x6d7922:c.instructions+=16;goto B6d7922;
case 0x6d7924:c.instructions+=15;goto B6d7924;
case 0x6d7928:c.instructions+=14;goto B6d7928;
case 0x6d792b:c.instructions+=13;goto B6d792b;
case 0x6d792e:c.instructions+=12;goto B6d792e;
case 0x6d7932:c.instructions+=11;goto B6d7932;
case 0x6d7935:c.instructions+=10;goto B6d7935;
case 0x6d7937:c.instructions+=9;goto B6d7937;
case 0x6d7938:c.instructions+=8;goto B6d7938;
case 0x6d7939:c.instructions+=7;goto B6d7939;
case 0x6d793a:c.instructions+=6;goto B6d793a;
case 0x6d793b:c.instructions+=5;goto B6d793b;
case 0x6d793d:c.instructions+=4;goto B6d793d;
case 0x6d793f:c.instructions+=3;goto B6d793f;
case 0x6d7940:c.instructions+=2;goto B6d7940;
case 0x6d7943:c.instructions+=1;goto B6d7943;
case 0x6d7946:goto L6d7946;
case 0x6d7947:c.instructions+=6;goto B6d7947;
case 0x6d7948:c.instructions+=5;goto B6d7948;
case 0x6d7949:c.instructions+=4;goto B6d7949;
case 0x6d794b:c.instructions+=3;goto B6d794b;
case 0x6d794c:c.instructions+=2;goto B6d794c;
case 0x6d794f:c.instructions+=1;goto B6d794f;
case 0x6d7960:goto L6d7960;
case 0x6d7963:c.instructions+=8;goto B6d7963;
case 0x6d7967:c.instructions+=7;goto B6d7967;
case 0x6d796b:c.instructions+=6;goto B6d796b;
case 0x6d796c:c.instructions+=5;goto B6d796c;
case 0x6d7970:c.instructions+=4;goto B6d7970;
case 0x6d7971:c.instructions+=3;goto B6d7971;
case 0x6d7972:c.instructions+=2;goto B6d7972;
case 0x6d797a:c.instructions+=1;goto B6d797a;
case 0x6d797f:goto L6d797f;
case 0x6d7981:c.instructions+=1;goto B6d7981;
case 0x6d7983:goto L6d7983;
case 0x6d7987:c.instructions+=5;goto B6d7987;
case 0x6d798b:c.instructions+=4;goto B6d798b;
case 0x6d798d:c.instructions+=3;goto B6d798d;
case 0x6d798f:c.instructions+=2;goto B6d798f;
case 0x6d7992:c.instructions+=1;goto B6d7992;
case 0x6d7995:goto L6d7995;
case 0x6d7997:c.instructions+=2;goto B6d7997;
case 0x6d799a:c.instructions+=1;goto B6d799a;
case 0x6d79a0:goto L6d79a0;
case 0x6d79a1:c.instructions+=5;goto B6d79a1;
case 0x6d79a2:c.instructions+=4;goto B6d79a2;
case 0x6d79a4:c.instructions+=3;goto B6d79a4;
case 0x6d79a6:c.instructions+=2;goto B6d79a6;
case 0x6d79a8:c.instructions+=1;goto B6d79a8;
case 0x6d79aa:goto L6d79aa;
case 0x6d79ad:c.instructions+=2;goto B6d79ad;
case 0x6d79af:c.instructions+=1;goto B6d79af;
case 0x6d79b1:goto L6d79b1;
case 0x6d79b3:c.instructions+=2;goto B6d79b3;
case 0x6d79b5:c.instructions+=1;goto B6d79b5;
case 0x6d79b7:goto L6d79b7;
case 0x6d79b9:c.instructions+=1;goto B6d79b9;
case 0x6d79bf:goto L6d79bf;
case 0x6d79c1:c.instructions+=2;goto B6d79c1;
case 0x6d79c3:c.instructions+=1;goto B6d79c3;
case 0x6d79c5:goto L6d79c5;
case 0x6d79c8:c.instructions+=1;goto B6d79c8;
case 0x6d79cb:goto L6d79cb;
case 0x6d79d1:c.instructions+=2;goto B6d79d1;
case 0x6d79d3:c.instructions+=1;goto B6d79d3;
case 0x6d79d5:goto L6d79d5;
case 0x6d79d8:c.instructions+=4;goto B6d79d8;
case 0x6d79db:c.instructions+=3;goto B6d79db;
case 0x6d79dc:c.instructions+=2;goto B6d79dc;
case 0x6d79dd:c.instructions+=1;goto B6d79dd;
case 0x6d79e3:goto L6d79e3;
case 0x6d79e6:goto L6d79e6;
case 0x6d79ec:c.instructions+=2;goto B6d79ec;
case 0x6d79ee:c.instructions+=1;goto B6d79ee;
case 0x6d79f0:goto L6d79f0;
case 0x6d79f3:c.instructions+=3;goto B6d79f3;
case 0x6d79f4:c.instructions+=2;goto B6d79f4;
case 0x6d79f5:c.instructions+=1;goto B6d79f5;
case 0x6d79fb:goto L6d79fb;
case 0x6d79fe:goto L6d79fe;
case 0x6d7a03:c.instructions+=2;goto B6d7a03;
case 0x6d7a04:c.instructions+=1;goto B6d7a04;
case 0x6d7a0a:goto L6d7a0a;
case 0x6d7a0d:c.instructions+=1;goto B6d7a0d;
case 0x6d7a13:goto L6d7a13;
case 0x6d7a17:c.instructions+=3;goto B6d7a17;
case 0x6d7a18:c.instructions+=2;goto B6d7a18;
case 0x6d7a19:c.instructions+=1;goto B6d7a19;
case 0x6d7a20:goto L6d7a20;
case 0x6d7a23:c.instructions+=8;goto B6d7a23;
case 0x6d7a24:c.instructions+=7;goto B6d7a24;
case 0x6d7a25:c.instructions+=6;goto B6d7a25;
case 0x6d7a27:c.instructions+=5;goto B6d7a27;
case 0x6d7a29:c.instructions+=4;goto B6d7a29;
case 0x6d7a2b:c.instructions+=3;goto B6d7a2b;
case 0x6d7a2c:c.instructions+=2;goto B6d7a2c;
case 0x6d7a2d:c.instructions+=1;goto B6d7a2d;
case 0x6d7a2f:goto L6d7a2f;
case 0x6d7a31:c.instructions+=2;goto B6d7a31;
case 0x6d7a35:c.instructions+=1;goto B6d7a35;
case 0x6d7a37:goto L6d7a37;
case 0x6d7a3a:c.instructions+=2;goto B6d7a3a;
case 0x6d7a3e:c.instructions+=1;goto B6d7a3e;
case 0x6d7a40:goto L6d7a40;
case 0x6d7a42:c.instructions+=3;goto B6d7a42;
case 0x6d7a44:c.instructions+=2;goto B6d7a44;
case 0x6d7a46:c.instructions+=1;goto B6d7a46;
case 0x6d7a4c:goto L6d7a4c;
case 0x6d7a50:goto L6d7a50;
case 0x6d7a51:c.instructions+=4;goto B6d7a51;
case 0x6d7a55:c.instructions+=3;goto B6d7a55;
case 0x6d7a56:c.instructions+=2;goto B6d7a56;
case 0x6d7a58:c.instructions+=1;goto B6d7a58;
case 0x6d7a5d:goto L6d7a5d;
case 0x6d7a61:c.instructions+=2;goto B6d7a61;
case 0x6d7a63:c.instructions+=1;goto B6d7a63;
case 0x6d7a65:goto L6d7a65;
case 0x6d7a69:c.instructions+=3;goto B6d7a69;
case 0x6d7a6a:c.instructions+=2;goto B6d7a6a;
case 0x6d7a6f:c.instructions+=1;goto B6d7a6f;
case 0x6d7a74:goto L6d7a74;
case 0x6d7a76:c.instructions+=1;goto B6d7a76;
case 0x6d7a78:goto L6d7a78;
case 0x6d7a79:goto L6d7a79;
case 0x6d7a7a:c.instructions+=2;goto B6d7a7a;
case 0x6d7a7c:c.instructions+=1;goto B6d7a7c;
case 0x6d7a7e:goto L6d7a7e;
case 0x6d7a80:c.instructions+=1;goto B6d7a80;
case 0x6d7a86:goto L6d7a86;
case 0x6d7a8d:c.instructions+=3;goto B6d7a8d;
case 0x6d7a92:c.instructions+=2;goto B6d7a92;
case 0x6d7a93:c.instructions+=1;goto B6d7a93;
case 0x6d7a99:goto L6d7a99;
case 0x6d7a9c:c.instructions+=4;goto B6d7a9c;
case 0x6d7a9f:c.instructions+=3;goto B6d7a9f;
case 0x6d7aa1:c.instructions+=2;goto B6d7aa1;
case 0x6d7aa3:c.instructions+=1;goto B6d7aa3;
case 0x6d7aa7:goto L6d7aa7;
case 0x6d7aa8:c.instructions+=4;goto B6d7aa8;
case 0x6d7aac:c.instructions+=3;goto B6d7aac;
case 0x6d7aad:c.instructions+=2;goto B6d7aad;
case 0x6d7aaf:c.instructions+=1;goto B6d7aaf;
case 0x6d7ab4:goto L6d7ab4;
case 0x6d7ab8:c.instructions+=2;goto B6d7ab8;
case 0x6d7aba:c.instructions+=1;goto B6d7aba;
case 0x6d7abc:goto L6d7abc;
case 0x6d7ac0:c.instructions+=4;goto B6d7ac0;
case 0x6d7ac2:c.instructions+=3;goto B6d7ac2;
case 0x6d7ac7:c.instructions+=2;goto B6d7ac7;
case 0x6d7acc:c.instructions+=1;goto B6d7acc;
case 0x6d7ace:goto L6d7ace;
case 0x6d7ad0:goto L6d7ad0;
case 0x6d7ad2:goto L6d7ad2;
case 0x6d7ad3:c.instructions+=2;goto B6d7ad3;
case 0x6d7ad8:c.instructions+=1;goto B6d7ad8;
case 0x6d7add:goto L6d7add;
case 0x6d7adf:c.instructions+=2;goto B6d7adf;
case 0x6d7ae1:c.instructions+=1;goto B6d7ae1;
case 0x6d7ae3:goto L6d7ae3;
case 0x6d7ae7:c.instructions+=3;goto B6d7ae7;
case 0x6d7ae8:c.instructions+=2;goto B6d7ae8;
case 0x6d7aed:c.instructions+=1;goto B6d7aed;
case 0x6d7af2:goto L6d7af2;
case 0x6d7af6:c.instructions+=6;goto B6d7af6;
case 0x6d7afa:c.instructions+=5;goto B6d7afa;
case 0x6d7afb:c.instructions+=4;goto B6d7afb;
case 0x6d7afc:c.instructions+=3;goto B6d7afc;
case 0x6d7afd:c.instructions+=2;goto B6d7afd;
case 0x6d7aff:c.instructions+=1;goto B6d7aff;
case 0x6d7b01:goto L6d7b01;
case 0x6d7b04:c.instructions+=6;goto B6d7b04;
case 0x6d7b08:c.instructions+=5;goto B6d7b08;
case 0x6d7b0b:c.instructions+=4;goto B6d7b0b;
case 0x6d7b0e:c.instructions+=3;goto B6d7b0e;
case 0x6d7b11:c.instructions+=2;goto B6d7b11;
case 0x6d7b15:c.instructions+=1;goto B6d7b15;
case 0x6d7b16:goto L6d7b16;
case 0x6d7b1a:c.instructions+=5;goto B6d7b1a;
case 0x6d7b1e:c.instructions+=4;goto B6d7b1e;
case 0x6d7b1f:c.instructions+=3;goto B6d7b1f;
case 0x6d7b21:c.instructions+=2;goto B6d7b21;
case 0x6d7b25:c.instructions+=1;goto B6d7b25;
case 0x6d7b27:goto L6d7b27;
case 0x6d7b29:c.instructions+=2;goto B6d7b29;
case 0x6d7b2d:c.instructions+=1;goto B6d7b2d;
case 0x6d7b30:goto L6d7b30;
case 0x6d7b31:c.instructions+=4;goto B6d7b31;
case 0x6d7b35:c.instructions+=3;goto B6d7b35;
case 0x6d7b36:c.instructions+=2;goto B6d7b36;
case 0x6d7b38:c.instructions+=1;goto B6d7b38;
case 0x6d7b3d:goto L6d7b3d;
case 0x6d7b41:c.instructions+=2;goto B6d7b41;
case 0x6d7b43:c.instructions+=1;goto B6d7b43;
case 0x6d7b45:goto L6d7b45;
case 0x6d7b49:c.instructions+=4;goto B6d7b49;
case 0x6d7b4b:c.instructions+=3;goto B6d7b4b;
case 0x6d7b50:c.instructions+=2;goto B6d7b50;
case 0x6d7b55:c.instructions+=1;goto B6d7b55;
case 0x6d7b57:goto L6d7b57;
case 0x6d7b59:goto L6d7b59;
case 0x6d7b5b:goto L6d7b5b;
case 0x6d7b5c:c.instructions+=2;goto B6d7b5c;
case 0x6d7b61:c.instructions+=1;goto B6d7b61;
case 0x6d7b66:goto L6d7b66;
case 0x6d7b68:c.instructions+=2;goto B6d7b68;
case 0x6d7b6a:c.instructions+=1;goto B6d7b6a;
case 0x6d7b6c:goto L6d7b6c;
case 0x6d7b70:c.instructions+=3;goto B6d7b70;
case 0x6d7b71:c.instructions+=2;goto B6d7b71;
case 0x6d7b76:c.instructions+=1;goto B6d7b76;
case 0x6d7b7b:goto L6d7b7b;
case 0x6d7b7f:c.instructions+=6;goto B6d7b7f;
case 0x6d7b83:c.instructions+=5;goto B6d7b83;
case 0x6d7b84:c.instructions+=4;goto B6d7b84;
case 0x6d7b85:c.instructions+=3;goto B6d7b85;
case 0x6d7b86:c.instructions+=2;goto B6d7b86;
case 0x6d7b88:c.instructions+=1;goto B6d7b88;
case 0x6d7b8a:goto L6d7b8a;
case 0x6d7b8d:c.instructions+=6;goto B6d7b8d;
case 0x6d7b91:c.instructions+=5;goto B6d7b91;
case 0x6d7b94:c.instructions+=4;goto B6d7b94;
case 0x6d7b97:c.instructions+=3;goto B6d7b97;
case 0x6d7b9a:c.instructions+=2;goto B6d7b9a;
case 0x6d7b9e:c.instructions+=1;goto B6d7b9e;
case 0x6d7b9f:goto L6d7b9f;
case 0x6d7ba3:c.instructions+=5;goto B6d7ba3;
case 0x6d7ba7:c.instructions+=4;goto B6d7ba7;
case 0x6d7ba8:c.instructions+=3;goto B6d7ba8;
case 0x6d7baa:c.instructions+=2;goto B6d7baa;
case 0x6d7bae:c.instructions+=1;goto B6d7bae;
case 0x6d7bb0:goto L6d7bb0;
case 0x6d7bb1:c.instructions+=6;goto B6d7bb1;
case 0x6d7bb2:c.instructions+=5;goto B6d7bb2;
case 0x6d7bb5:c.instructions+=4;goto B6d7bb5;
case 0x6d7bb6:c.instructions+=3;goto B6d7bb6;
case 0x6d7bb7:c.instructions+=2;goto B6d7bb7;
case 0x6d7bba:c.instructions+=1;goto B6d7bba;
case 0x6d7bbb:goto L6d7bbb;
case 0x6d7bbe:c.instructions+=6;goto B6d7bbe;
case 0x6d7bbf:c.instructions+=5;goto B6d7bbf;
case 0x6d7bc0:c.instructions+=4;goto B6d7bc0;
case 0x6d7bc1:c.instructions+=3;goto B6d7bc1;
case 0x6d7bc2:c.instructions+=2;goto B6d7bc2;
case 0x6d7bc5:c.instructions+=1;goto B6d7bc5;
case 0x6d7bd0:goto L6d7bd0;
case 0x6d7bd6:c.instructions+=9;goto B6d7bd6;
case 0x6d7bd7:c.instructions+=8;goto B6d7bd7;
case 0x6d7bd8:c.instructions+=7;goto B6d7bd8;
case 0x6d7bda:c.instructions+=6;goto B6d7bda;
case 0x6d7bdc:c.instructions+=5;goto B6d7bdc;
case 0x6d7bde:c.instructions+=4;goto B6d7bde;
case 0x6d7be0:c.instructions+=3;goto B6d7be0;
case 0x6d7be4:c.instructions+=2;goto B6d7be4;
case 0x6d7be8:c.instructions+=1;goto B6d7be8;
case 0x6d7bee:goto L6d7bee;
case 0x6d7bf1:c.instructions+=2;goto B6d7bf1;
case 0x6d7bf3:c.instructions+=1;goto B6d7bf3;
case 0x6d7bf9:goto L6d7bf9;
case 0x6d7bfc:c.instructions+=10;goto B6d7bfc;
case 0x6d7bfd:c.instructions+=9;goto B6d7bfd;
case 0x6d7c00:c.instructions+=8;goto B6d7c00;
case 0x6d7c04:c.instructions+=7;goto B6d7c04;
case 0x6d7c08:c.instructions+=6;goto B6d7c08;
case 0x6d7c0c:c.instructions+=5;goto B6d7c0c;
case 0x6d7c10:c.instructions+=4;goto B6d7c10;
case 0x6d7c14:c.instructions+=3;goto B6d7c14;
case 0x6d7c18:c.instructions+=2;goto B6d7c18;
case 0x6d7c1c:c.instructions+=1;goto B6d7c1c;
case 0x6d7c22:goto L6d7c22;
case 0x6d7c25:c.instructions+=5;goto B6d7c25;
case 0x6d7c29:c.instructions+=4;goto B6d7c29;
case 0x6d7c2a:c.instructions+=3;goto B6d7c2a;
case 0x6d7c30:c.instructions+=2;goto B6d7c30;
case 0x6d7c34:c.instructions+=1;goto B6d7c34;
case 0x6d7c3a:goto L6d7c3a;
case 0x6d7c3c:c.instructions+=12;goto B6d7c3c;
case 0x6d7c3d:c.instructions+=11;goto B6d7c3d;
case 0x6d7c40:c.instructions+=10;goto B6d7c40;
case 0x6d7c42:c.instructions+=9;goto B6d7c42;
case 0x6d7c45:c.instructions+=8;goto B6d7c45;
case 0x6d7c49:c.instructions+=7;goto B6d7c49;
case 0x6d7c4c:c.instructions+=6;goto B6d7c4c;
case 0x6d7c4f:c.instructions+=5;goto B6d7c4f;
case 0x6d7c51:c.instructions+=4;goto B6d7c51;
case 0x6d7c55:c.instructions+=3;goto B6d7c55;
case 0x6d7c58:c.instructions+=2;goto B6d7c58;
case 0x6d7c5c:c.instructions+=1;goto B6d7c5c;
case 0x6d7c62:goto L6d7c62;
case 0x6d7c66:c.instructions+=1;goto B6d7c66;
case 0x6d7c70:goto L6d7c70;
case 0x6d7c74:c.instructions+=11;goto B6d7c74;
case 0x6d7c77:c.instructions+=10;goto B6d7c77;
case 0x6d7c7b:c.instructions+=9;goto B6d7c7b;
case 0x6d7c7e:c.instructions+=8;goto B6d7c7e;
case 0x6d7c81:c.instructions+=7;goto B6d7c81;
case 0x6d7c83:c.instructions+=6;goto B6d7c83;
case 0x6d7c85:c.instructions+=5;goto B6d7c85;
case 0x6d7c88:c.instructions+=4;goto B6d7c88;
case 0x6d7c8a:c.instructions+=3;goto B6d7c8a;
case 0x6d7c8e:c.instructions+=2;goto B6d7c8e;
case 0x6d7c91:c.instructions+=1;goto B6d7c91;
case 0x6d7c97:goto L6d7c97;
case 0x6d7c9a:c.instructions+=1;goto B6d7c9a;
case 0x6d7ca0:goto L6d7ca0;
case 0x6d7ca4:c.instructions+=2;goto B6d7ca4;
case 0x6d7ca6:c.instructions+=1;goto B6d7ca6;
case 0x6d7ca8:goto L6d7ca8;
case 0x6d7cac:c.instructions+=3;goto B6d7cac;
case 0x6d7cb0:c.instructions+=2;goto B6d7cb0;
case 0x6d7cb2:c.instructions+=1;goto B6d7cb2;
case 0x6d7cb8:goto L6d7cb8;
case 0x6d7cbe:c.instructions+=2;goto B6d7cbe;
case 0x6d7cc0:c.instructions+=1;goto B6d7cc0;
case 0x6d7cc2:goto L6d7cc2;
case 0x6d7cc4:c.instructions+=1;goto B6d7cc4;
case 0x6d7cc6:goto L6d7cc6;
case 0x6d7cc9:c.instructions+=4;goto B6d7cc9;
case 0x6d7ccb:c.instructions+=3;goto B6d7ccb;
case 0x6d7ccc:c.instructions+=2;goto B6d7ccc;
case 0x6d7ccd:c.instructions+=1;goto B6d7ccd;
case 0x6d7cd2:goto L6d7cd2;
case 0x6d7cd5:c.instructions+=2;goto B6d7cd5;
case 0x6d7cd7:c.instructions+=1;goto B6d7cd7;
case 0x6d7cd9:goto L6d7cd9;
case 0x6d7cdb:c.instructions+=2;goto B6d7cdb;
case 0x6d7cdd:c.instructions+=1;goto B6d7cdd;
case 0x6d7cdf:goto L6d7cdf;
case 0x6d7ce5:c.instructions+=2;goto B6d7ce5;
case 0x6d7ce7:c.instructions+=1;goto B6d7ce7;
case 0x6d7ce9:goto L6d7ce9;
case 0x6d7cec:c.instructions+=5;goto B6d7cec;
case 0x6d7cf0:c.instructions+=4;goto B6d7cf0;
case 0x6d7cf1:c.instructions+=3;goto B6d7cf1;
case 0x6d7cf3:c.instructions+=2;goto B6d7cf3;
case 0x6d7cf4:c.instructions+=1;goto B6d7cf4;
case 0x6d7cf6:goto L6d7cf6;
case 0x6d7cfa:c.instructions+=3;goto B6d7cfa;
case 0x6d7cfd:c.instructions+=2;goto B6d7cfd;
case 0x6d7cff:c.instructions+=1;goto B6d7cff;
case 0x6d7d01:goto L6d7d01;
case 0x6d7d05:c.instructions+=5;goto B6d7d05;
case 0x6d7d0b:c.instructions+=4;goto B6d7d0b;
case 0x6d7d0e:c.instructions+=3;goto B6d7d0e;
case 0x6d7d11:c.instructions+=2;goto B6d7d11;
case 0x6d7d15:c.instructions+=1;goto B6d7d15;
case 0x6d7d1a:goto L6d7d1a;
case 0x6d7d1e:c.instructions+=5;goto B6d7d1e;
case 0x6d7d24:c.instructions+=4;goto B6d7d24;
case 0x6d7d27:c.instructions+=3;goto B6d7d27;
case 0x6d7d2a:c.instructions+=2;goto B6d7d2a;
case 0x6d7d2e:c.instructions+=1;goto B6d7d2e;
case 0x6d7d33:goto L6d7d33;
case 0x6d7d35:c.instructions+=7;goto B6d7d35;
case 0x6d7d38:c.instructions+=6;goto B6d7d38;
case 0x6d7d3c:c.instructions+=5;goto B6d7d3c;
case 0x6d7d3e:c.instructions+=4;goto B6d7d3e;
case 0x6d7d3f:c.instructions+=3;goto B6d7d3f;
case 0x6d7d40:c.instructions+=2;goto B6d7d40;
case 0x6d7d45:c.instructions+=1;goto B6d7d45;
case 0x6d7d4a:goto L6d7d4a;
case 0x6d7d4e:c.instructions+=2;goto B6d7d4e;
case 0x6d7d50:c.instructions+=1;goto B6d7d50;
case 0x6d7d52:goto L6d7d52;
case 0x6d7d56:c.instructions+=5;goto B6d7d56;
case 0x6d7d5c:c.instructions+=4;goto B6d7d5c;
case 0x6d7d5f:c.instructions+=3;goto B6d7d5f;
case 0x6d7d62:c.instructions+=2;goto B6d7d62;
case 0x6d7d66:c.instructions+=1;goto B6d7d66;
case 0x6d7d6b:goto L6d7d6b;
case 0x6d7d6d:c.instructions+=4;goto B6d7d6d;
case 0x6d7d70:c.instructions+=3;goto B6d7d70;
case 0x6d7d73:c.instructions+=2;goto B6d7d73;
case 0x6d7d75:c.instructions+=1;goto B6d7d75;
case 0x6d7d78:goto L6d7d78;
case 0x6d7d7a:c.instructions+=3;goto B6d7d7a;
case 0x6d7d7b:c.instructions+=2;goto B6d7d7b;
case 0x6d7d7d:c.instructions+=1;goto B6d7d7d;
case 0x6d7d7f:goto L6d7d7f;
case 0x6d7d81:c.instructions+=3;goto B6d7d81;
case 0x6d7d85:c.instructions+=2;goto B6d7d85;
case 0x6d7d88:c.instructions+=1;goto B6d7d88;
case 0x6d7d8a:goto L6d7d8a;
case 0x6d7d8b:c.instructions+=1;goto B6d7d8b;
case 0x6d7d8d:goto L6d7d8d;
case 0x6d7d8e:goto L6d7d8e;
case 0x6d7d93:c.instructions+=1;goto B6d7d93;
case 0x6d7d96:goto L6d7d96;
case 0x6d7d98:c.instructions+=3;goto B6d7d98;
case 0x6d7d99:c.instructions+=2;goto B6d7d99;
case 0x6d7d9b:c.instructions+=1;goto B6d7d9b;
case 0x6d7d9d:goto L6d7d9d;
case 0x6d7d9f:c.instructions+=4;goto B6d7d9f;
case 0x6d7da0:c.instructions+=3;goto B6d7da0;
case 0x6d7da1:c.instructions+=2;goto B6d7da1;
case 0x6d7da6:c.instructions+=1;goto B6d7da6;
case 0x6d7dab:goto L6d7dab;
case 0x6d7dae:c.instructions+=2;goto B6d7dae;
case 0x6d7db0:c.instructions+=1;goto B6d7db0;
case 0x6d7db6:goto L6d7db6;
case 0x6d7dbb:c.instructions+=2;goto B6d7dbb;
case 0x6d7dbe:c.instructions+=1;goto B6d7dbe;
case 0x6d7dc0:goto L6d7dc0;
case 0x6d7dc2:c.instructions+=3;goto B6d7dc2;
case 0x6d7dc3:c.instructions+=2;goto B6d7dc3;
case 0x6d7dc5:c.instructions+=1;goto B6d7dc5;
case 0x6d7dc7:goto L6d7dc7;
case 0x6d7dc9:c.instructions+=4;goto B6d7dc9;
case 0x6d7dca:c.instructions+=3;goto B6d7dca;
case 0x6d7dcf:c.instructions+=2;goto B6d7dcf;
case 0x6d7dd3:c.instructions+=1;goto B6d7dd3;
case 0x6d7dd8:goto L6d7dd8;
case 0x6d7dda:c.instructions+=2;goto B6d7dda;
case 0x6d7ddc:c.instructions+=1;goto B6d7ddc;
case 0x6d7de2:goto L6d7de2;
case 0x6d7de3:c.instructions+=2;goto B6d7de3;
case 0x6d7de8:c.instructions+=1;goto B6d7de8;
case 0x6d7ded:goto L6d7ded;
case 0x6d7df1:c.instructions+=12;goto B6d7df1;
case 0x6d7df2:c.instructions+=11;goto B6d7df2;
case 0x6d7df6:c.instructions+=10;goto B6d7df6;
case 0x6d7df7:c.instructions+=9;goto B6d7df7;
case 0x6d7dfb:c.instructions+=8;goto B6d7dfb;
case 0x6d7dfd:c.instructions+=7;goto B6d7dfd;
case 0x6d7e01:c.instructions+=6;goto B6d7e01;
case 0x6d7e02:c.instructions+=5;goto B6d7e02;
case 0x6d7e03:c.instructions+=4;goto B6d7e03;
case 0x6d7e05:c.instructions+=3;goto B6d7e05;
case 0x6d7e06:c.instructions+=2;goto B6d7e06;
case 0x6d7e0b:c.instructions+=1;goto B6d7e0b;
case 0x6d7e0d:goto L6d7e0d;
case 0x6d7e0f:c.instructions+=4;goto B6d7e0f;
case 0x6d7e13:c.instructions+=3;goto B6d7e13;
case 0x6d7e16:c.instructions+=2;goto B6d7e16;
case 0x6d7e18:c.instructions+=1;goto B6d7e18;
case 0x6d7e1a:goto L6d7e1a;
case 0x6d7e1c:c.instructions+=1;goto B6d7e1c;
case 0x6d7e1e:goto L6d7e1e;
case 0x6d7e20:c.instructions+=2;goto B6d7e20;
case 0x6d7e22:c.instructions+=1;goto B6d7e22;
case 0x6d7e28:goto L6d7e28;
case 0x6d7e2b:c.instructions+=2;goto B6d7e2b;
case 0x6d7e2d:c.instructions+=1;goto B6d7e2d;
case 0x6d7e2f:goto L6d7e2f;
case 0x6d7e33:c.instructions+=5;goto B6d7e33;
case 0x6d7e35:c.instructions+=4;goto B6d7e35;
case 0x6d7e38:c.instructions+=3;goto B6d7e38;
case 0x6d7e3b:c.instructions+=2;goto B6d7e3b;
case 0x6d7e42:c.instructions+=1;goto B6d7e42;
case 0x6d7e44:goto L6d7e44;
case 0x6d7e46:goto L6d7e46;
case 0x6d7e4a:c.instructions+=3;goto B6d7e4a;
case 0x6d7e4d:c.instructions+=2;goto B6d7e4d;
case 0x6d7e50:c.instructions+=1;goto B6d7e50;
case 0x6d7e53:goto L6d7e53;
case 0x6d7e57:c.instructions+=6;goto B6d7e57;
case 0x6d7e5b:c.instructions+=5;goto B6d7e5b;
case 0x6d7e5f:c.instructions+=4;goto B6d7e5f;
case 0x6d7e65:c.instructions+=3;goto B6d7e65;
case 0x6d7e68:c.instructions+=2;goto B6d7e68;
case 0x6d7e6b:c.instructions+=1;goto B6d7e6b;
case 0x6d7e6f:goto L6d7e6f;
case 0x6d7e71:c.instructions+=3;goto B6d7e71;
case 0x6d7e74:c.instructions+=2;goto B6d7e74;
case 0x6d7e77:c.instructions+=1;goto B6d7e77;
case 0x6d7e7d:goto L6d7e7d;
case 0x6d7e80:c.instructions+=10;goto B6d7e80;
case 0x6d7e82:c.instructions+=9;goto B6d7e82;
case 0x6d7e84:c.instructions+=8;goto B6d7e84;
case 0x6d7e87:c.instructions+=7;goto B6d7e87;
case 0x6d7e89:c.instructions+=6;goto B6d7e89;
case 0x6d7e8c:c.instructions+=5;goto B6d7e8c;
case 0x6d7e8d:c.instructions+=4;goto B6d7e8d;
case 0x6d7e8e:c.instructions+=3;goto B6d7e8e;
case 0x6d7e93:c.instructions+=2;goto B6d7e93;
case 0x6d7e95:c.instructions+=1;goto B6d7e95;
case 0x6d7e9a:goto L6d7e9a;
case 0x6d7e9d:goto L6d7e9d;
case 0x6d7ea1:c.instructions+=7;goto B6d7ea1;
case 0x6d7ea3:c.instructions+=6;goto B6d7ea3;
case 0x6d7ea7:c.instructions+=5;goto B6d7ea7;
case 0x6d7eab:c.instructions+=4;goto B6d7eab;
case 0x6d7eae:c.instructions+=3;goto B6d7eae;
case 0x6d7eb0:c.instructions+=2;goto B6d7eb0;
case 0x6d7eb3:c.instructions+=1;goto B6d7eb3;
case 0x6d7eb9:goto L6d7eb9;
case 0x6d7ec0:goto L6d7ec0;
case 0x6d7ec4:c.instructions+=4;goto B6d7ec4;
case 0x6d7ec7:c.instructions+=3;goto B6d7ec7;
case 0x6d7ecb:c.instructions+=2;goto B6d7ecb;
case 0x6d7ecf:c.instructions+=1;goto B6d7ecf;
case 0x6d7ed1:goto L6d7ed1;
case 0x6d7ed5:c.instructions+=2;goto B6d7ed5;
case 0x6d7ed7:c.instructions+=1;goto B6d7ed7;
case 0x6d7ed9:goto L6d7ed9;
case 0x6d7ede:c.instructions+=2;goto B6d7ede;
case 0x6d7ee0:c.instructions+=1;goto B6d7ee0;
case 0x6d7ee5:goto L6d7ee5;
case 0x6d7eea:c.instructions+=2;goto B6d7eea;
case 0x6d7eec:c.instructions+=1;goto B6d7eec;
case 0x6d7ef1:goto L6d7ef1;
case 0x6d7ef4:c.instructions+=1;goto B6d7ef4;
case 0x6d7ef9:goto L6d7ef9;
case 0x6d7efe:c.instructions+=1;goto B6d7efe;
case 0x6d7f00:goto L6d7f00;
case 0x6d7f04:c.instructions+=3;goto B6d7f04;
case 0x6d7f06:c.instructions+=2;goto B6d7f06;
case 0x6d7f08:c.instructions+=1;goto B6d7f08;
case 0x6d7f0a:goto L6d7f0a;
case 0x6d7f0e:c.instructions+=3;goto B6d7f0e;
case 0x6d7f11:c.instructions+=2;goto B6d7f11;
case 0x6d7f13:c.instructions+=1;goto B6d7f13;
case 0x6d7f15:goto L6d7f15;
case 0x6d7f19:c.instructions+=1;goto B6d7f19;
case 0x6d7f1b:goto L6d7f1b;
case 0x6d7f1f:c.instructions+=3;goto B6d7f1f;
case 0x6d7f20:c.instructions+=2;goto B6d7f20;
case 0x6d7f22:c.instructions+=1;goto B6d7f22;
case 0x6d7f24:goto L6d7f24;
case 0x6d7f28:c.instructions+=11;goto B6d7f28;
case 0x6d7f2a:c.instructions+=10;goto B6d7f2a;
case 0x6d7f2d:c.instructions+=9;goto B6d7f2d;
case 0x6d7f2f:c.instructions+=8;goto B6d7f2f;
case 0x6d7f33:c.instructions+=7;goto B6d7f33;
case 0x6d7f34:c.instructions+=6;goto B6d7f34;
case 0x6d7f38:c.instructions+=5;goto B6d7f38;
case 0x6d7f39:c.instructions+=4;goto B6d7f39;
case 0x6d7f3e:c.instructions+=3;goto B6d7f3e;
case 0x6d7f40:c.instructions+=2;goto B6d7f40;
case 0x6d7f44:c.instructions+=1;goto B6d7f44;
case 0x6d7f49:goto L6d7f49;
case 0x6d7f4c:goto L6d7f4c;
case 0x6d7f50:goto L6d7f50;
case 0x6d7f54:c.instructions+=5;goto B6d7f54;
case 0x6d7f57:c.instructions+=4;goto B6d7f57;
case 0x6d7f59:c.instructions+=3;goto B6d7f59;
case 0x6d7f5d:c.instructions+=2;goto B6d7f5d;
case 0x6d7f5f:c.instructions+=1;goto B6d7f5f;
case 0x6d7f64:goto L6d7f64;
case 0x6d7f66:c.instructions+=2;goto B6d7f66;
case 0x6d7f68:c.instructions+=1;goto B6d7f68;
case 0x6d7f6d:goto L6d7f6d;
case 0x6d7f72:c.instructions+=6;goto B6d7f72;
case 0x6d7f76:c.instructions+=5;goto B6d7f76;
case 0x6d7f79:c.instructions+=4;goto B6d7f79;
case 0x6d7f7b:c.instructions+=3;goto B6d7f7b;
case 0x6d7f7d:c.instructions+=2;goto B6d7f7d;
case 0x6d7f83:c.instructions+=1;goto B6d7f83;
case 0x6d7f85:goto L6d7f85;
case 0x6d7f86:c.instructions+=4;goto B6d7f86;
case 0x6d7f87:c.instructions+=3;goto B6d7f87;
case 0x6d7f8c:c.instructions+=2;goto B6d7f8c;
case 0x6d7f8e:c.instructions+=1;goto B6d7f8e;
case 0x6d7f93:goto L6d7f93;
case 0x6d7f96:goto L6d7f96;
case 0x6d7f98:c.instructions+=7;goto B6d7f98;
case 0x6d7f9b:c.instructions+=6;goto B6d7f9b;
case 0x6d7f9d:c.instructions+=5;goto B6d7f9d;
case 0x6d7fa3:c.instructions+=4;goto B6d7fa3;
case 0x6d7fa5:c.instructions+=3;goto B6d7fa5;
case 0x6d7fa7:c.instructions+=2;goto B6d7fa7;
case 0x6d7fa9:c.instructions+=1;goto B6d7fa9;
case 0x6d7fab:goto L6d7fab;
case 0x6d7fae:c.instructions+=2;goto B6d7fae;
case 0x6d7fb1:c.instructions+=1;goto B6d7fb1;
case 0x6d7fb3:goto L6d7fb3;
case 0x6d7fb8:c.instructions+=2;goto B6d7fb8;
case 0x6d7fba:c.instructions+=1;goto B6d7fba;
case 0x6d7fbf:goto L6d7fbf;
case 0x6d7fc2:c.instructions+=1;goto B6d7fc2;
case 0x6d7fc4:goto L6d7fc4;
case 0x6d7fc9:c.instructions+=2;goto B6d7fc9;
case 0x6d7fcb:c.instructions+=1;goto B6d7fcb;
case 0x6d7fd0:goto L6d7fd0;
case 0x6d7fd3:c.instructions+=1;goto B6d7fd3;
case 0x6d7fd5:goto L6d7fd5;
case 0x6d7fda:c.instructions+=2;goto B6d7fda;
case 0x6d7fdc:c.instructions+=1;goto B6d7fdc;
case 0x6d7fe1:goto L6d7fe1;
case 0x6d7fe4:c.instructions+=1;goto B6d7fe4;
case 0x6d7fe6:goto L6d7fe6;
case 0x6d7fe7:c.instructions+=3;goto B6d7fe7;
case 0x6d7fec:c.instructions+=2;goto B6d7fec;
case 0x6d7fee:c.instructions+=1;goto B6d7fee;
case 0x6d7ff3:goto L6d7ff3;
case 0x6d7ff6:goto L6d7ff6;
case 0x6d7ffa:c.instructions+=2;goto B6d7ffa;
case 0x6d7ffe:c.instructions+=1;goto B6d7ffe;
default:missing_instruction(c.pc);}
B6d7100:L6d7100:{c.instructions+=1;NFSU2_TR(0x6d7100);
{u32 t_=u32(m4(0x783024));TAIL_DYNAMIC(t_);}
}
B6d7110:L6d7110:{c.instructions+=3;NFSU2_TR(0x6d7110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7114:{NFSU2_TR(0x6d7114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7115:{NFSU2_TR(0x6d7115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d711aull));
TAIL_STATIC(0x75c6c8u,75c);
}
B6d711a:L6d711a:{c.instructions+=2;NFSU2_TR(0x6d711a);
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
B6d711d:{NFSU2_TR(0x6d711d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7120:L6d7120:{c.instructions+=3;NFSU2_TR(0x6d7120);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7124:{NFSU2_TR(0x6d7124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7125:{NFSU2_TR(0x6d7125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d712aull));
TAIL_STATIC(0x75c6dau,75c);
}
B6d712a:L6d712a:{c.instructions+=2;NFSU2_TR(0x6d712a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d712b:{NFSU2_TR(0x6d712b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7130:L6d7130:{c.instructions+=4;NFSU2_TR(0x6d7130);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d7132:{NFSU2_TR(0x6d7132);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7134:{NFSU2_TR(0x6d7134);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7136:{NFSU2_TR(0x6d7136);
if(r1(R+518)){{goto L6d7165;}}
}
B6d7138:L6d7138:{c.instructions+=2;NFSU2_TR(0x6d7138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7139:{NFSU2_TR(0x6d7139);
__builtin_memmove((R+16),(R+16),4);
}
B6d7140:L6d7140:{c.instructions+=7;NFSU2_TR(0x6d7140);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B6d7143:{NFSU2_TR(0x6d7143);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d7146:{NFSU2_TR(0x6d7146);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d7148:{NFSU2_TR(0x6d7148);
__builtin_memmove((R+4),(R+0),4);
}
B6d714a:{NFSU2_TR(0x6d714a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d714b:{NFSU2_TR(0x6d714b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d7151:{NFSU2_TR(0x6d7151);
if(r1(R+518)){{goto L6d715a;}}
}
B6d7153:L6d7153:{c.instructions+=3;NFSU2_TR(0x6d7153);
__builtin_memmove((R+24),(R+4),4);
}
B6d7155:{NFSU2_TR(0x6d7155);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d7158:{NFSU2_TR(0x6d7158);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B6d715a:L6d715a:{c.instructions+=5;NFSU2_TR(0x6d715a);
w4(R+4,u32(~u32(r4(R+4))));
}
B6d715c:{NFSU2_TR(0x6d715c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6d715e:{NFSU2_TR(0x6d715e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d7160:{NFSU2_TR(0x6d7160);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7162:{NFSU2_TR(0x6d7162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7140u);}goto L6d7140;}}
}
B6d7164:L6d7164:{c.instructions+=1;NFSU2_TR(0x6d7164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7165:L6d7165:{c.instructions+=2;NFSU2_TR(0x6d7165);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d716a:{NFSU2_TR(0x6d716a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7170:L6d7170:{c.instructions+=6;NFSU2_TR(0x6d7170);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7171:{NFSU2_TR(0x6d7171);
__builtin_memmove((R+12),(R+4),4);
}
B6d7173:{NFSU2_TR(0x6d7173);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7176:{NFSU2_TR(0x6d7176);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7178:{NFSU2_TR(0x6d7178);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7179:{NFSU2_TR(0x6d7179);
if(r1(R+518)){{goto L6d71af;}}
}
B6d717b:L6d717b:{c.instructions+=3;NFSU2_TR(0x6d717b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d717e:{NFSU2_TR(0x6d717e);
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
B6d717f:{NFSU2_TR(0x6d717f);
if(r1(R+519)){{goto L6d7194;}}
}
B6d7181:L6d7181:{c.instructions+=5;NFSU2_TR(0x6d7181);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7184:{NFSU2_TR(0x6d7184);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6d7188:{NFSU2_TR(0x6d7188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d718b:{NFSU2_TR(0x6d718b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d718c:{NFSU2_TR(0x6d718c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d718eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6d718e:L6d718e:{c.instructions+=3;NFSU2_TR(0x6d718e);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d7191:{NFSU2_TR(0x6d7191);
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
B6d7192:{NFSU2_TR(0x6d7192);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7181u);}goto L6d7181;}}
}
B6d7194:L6d7194:{c.instructions+=6;NFSU2_TR(0x6d7194);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7197:{NFSU2_TR(0x6d7197);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d719a:{NFSU2_TR(0x6d719a);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
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
B6d719d:{NFSU2_TR(0x6d719d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d719e:{NFSU2_TR(0x6d719e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d719f:{NFSU2_TR(0x6d719f);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d71a5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d71a5:L6d71a5:{c.instructions+=2;NFSU2_TR(0x6d71a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d71a8:{NFSU2_TR(0x6d71a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d71af:L6d71af:{c.instructions+=3;NFSU2_TR(0x6d71af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d71b2:{NFSU2_TR(0x6d71b2);
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
B6d71b4:{NFSU2_TR(0x6d71b4);
if(r1(R+518)){{goto L6d71d7;}}
}
B6d71b6:L6d71b6:{c.instructions+=1;NFSU2_TR(0x6d71b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71b7:L6d71b7:{c.instructions+=6;NFSU2_TR(0x6d71b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d71ba:{NFSU2_TR(0x6d71ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d71bd:{NFSU2_TR(0x6d71bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d71c0:{NFSU2_TR(0x6d71c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71c1:{NFSU2_TR(0x6d71c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71c2:{NFSU2_TR(0x6d71c2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d71c4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6d71c4:L6d71c4:{c.instructions+=3;NFSU2_TR(0x6d71c4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71c6:{NFSU2_TR(0x6d71c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71c7:{NFSU2_TR(0x6d71c7);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d71cdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d71cd:L6d71cd:{c.instructions+=4;NFSU2_TR(0x6d71cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d71d0:{NFSU2_TR(0x6d71d0);
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
B6d71d2:{NFSU2_TR(0x6d71d2);
__builtin_memmove((R+24),(R+28),4);
}
B6d71d4:{NFSU2_TR(0x6d71d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d71b7u);}goto L6d71b7;}}
}
B6d71d6:L6d71d6:{c.instructions+=1;NFSU2_TR(0x6d71d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d71d7:L6d71d7:{c.instructions+=4;NFSU2_TR(0x6d71d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d71d8:{NFSU2_TR(0x6d71d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d71df:{NFSU2_TR(0x6d71df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d71e0:{NFSU2_TR(0x6d71e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d71f0:L6d71f0:{c.instructions+=10;NFSU2_TR(0x6d71f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B6d71f6:{NFSU2_TR(0x6d71f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71f7:{NFSU2_TR(0x6d71f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71f8:{NFSU2_TR(0x6d71f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71f9:{NFSU2_TR(0x6d71f9);
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
B6d71fb:{NFSU2_TR(0x6d71fb);
__builtin_memmove((R+12),(R+4),4);
}
B6d71fd:{NFSU2_TR(0x6d71fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d71fe:{NFSU2_TR(0x6d71fe);
u8 U[4];
w4(U+0,u32(0x430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7203:{NFSU2_TR(0x6d7203);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7207:{NFSU2_TR(0x6d7207);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d720dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d720d:L6d720d:{c.instructions+=3;NFSU2_TR(0x6d720d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7210:{NFSU2_TR(0x6d7210);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d7212:{NFSU2_TR(0x6d7212);
if(r1(R+518)){{goto L6d7249;}}
}
B6d7214:L6d7214:{c.instructions+=14;NFSU2_TR(0x6d7214);
__builtin_memmove((R+20),(R+0),4);
}
B6d7216:{NFSU2_TR(0x6d7216);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d7218:{NFSU2_TR(0x6d7218);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d721b:{NFSU2_TR(0x6d721b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d721f:{NFSU2_TR(0x6d721f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7222:{NFSU2_TR(0x6d7222);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7225:{NFSU2_TR(0x6d7225);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7228:{NFSU2_TR(0x6d7228);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d722b:{NFSU2_TR(0x6d722b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x420ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7231:{NFSU2_TR(0x6d7231);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7237:{NFSU2_TR(0x6d7237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x428ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d723d:{NFSU2_TR(0x6d723d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7243:{NFSU2_TR(0x6d7243);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7247:{NFSU2_TR(0x6d7247);
{goto L6d724f;}
}
B6d7249:L6d7249:{c.instructions+=2;NFSU2_TR(0x6d7249);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d724d:{NFSU2_TR(0x6d724d);
__builtin_memmove((R+20),(R+28),4);
}
B6d724f:L6d724f:{c.instructions+=8;NFSU2_TR(0x6d724f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7250:{NFSU2_TR(0x6d7250);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d7253:{NFSU2_TR(0x6d7253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7256:{NFSU2_TR(0x6d7256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7259:{NFSU2_TR(0x6d7259);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d725c:{NFSU2_TR(0x6d725c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6d725e:{NFSU2_TR(0x6d725e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7262:{NFSU2_TR(0x6d7262);
if(r1(R+512)){{goto L6d7279;}}
}
B6d7264:L6d7264:{c.instructions+=3;NFSU2_TR(0x6d7264);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7267:{NFSU2_TR(0x6d7267);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d7269:{NFSU2_TR(0x6d7269);
if(r1(R+518)){{goto L6d726f;}}
}
B6d726b:L6d726b:{c.instructions+=2;NFSU2_TR(0x6d726b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d726d:{NFSU2_TR(0x6d726d);
{goto L6d727c;}
}
B6d726f:L6d726f:{c.instructions+=2;NFSU2_TR(0x6d726f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d7271:{NFSU2_TR(0x6d7271);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d7279;}}
}
B6d7273:L6d7273:{c.instructions+=2;NFSU2_TR(0x6d7273);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7277:{NFSU2_TR(0x6d7277);
{goto L6d7282;}
}
B6d7279:L6d7279:{c.instructions+=1;NFSU2_TR(0x6d7279);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d727c:L6d727c:{c.instructions+=2;NFSU2_TR(0x6d727c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d727e:{NFSU2_TR(0x6d727e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7282:L6d7282:{c.instructions+=5;NFSU2_TR(0x6d7282);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7286:{NFSU2_TR(0x6d7286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7289:{NFSU2_TR(0x6d7289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d728c:{NFSU2_TR(0x6d728c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6d7291:{NFSU2_TR(0x6d7291);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d72cd;}}
}
B6d7293:L6d7293:{c.instructions+=1;NFSU2_TR(0x6d7293);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7296:L6d7296:{c.instructions+=4;NFSU2_TR(0x6d7296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7299:{NFSU2_TR(0x6d7299);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d729c:{NFSU2_TR(0x6d729c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6d729e:{NFSU2_TR(0x6d729e);
if(r1(R+512)){{goto L6d72b3;}}
}
B6d72a0:L6d72a0:{c.instructions+=3;NFSU2_TR(0x6d72a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d72a3:{NFSU2_TR(0x6d72a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d72a5:{NFSU2_TR(0x6d72a5);
if(r1(R+518)){{goto L6d72ab;}}
}
B6d72a7:L6d72a7:{c.instructions+=2;NFSU2_TR(0x6d72a7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d72a9:{NFSU2_TR(0x6d72a9);
{goto L6d72b6;}
}
B6d72ab:L6d72ab:{c.instructions+=2;NFSU2_TR(0x6d72ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d72ad:{NFSU2_TR(0x6d72ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d72b3;}}
}
B6d72af:L6d72af:{c.instructions+=2;NFSU2_TR(0x6d72af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d72b1:{NFSU2_TR(0x6d72b1);
{goto L6d72b8;}
}
B6d72b3:L6d72b3:{c.instructions+=1;NFSU2_TR(0x6d72b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d72b6:L6d72b6:{c.instructions+=1;NFSU2_TR(0x6d72b6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d72b8:L6d72b8:{c.instructions+=7;NFSU2_TR(0x6d72b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d72bb:{NFSU2_TR(0x6d72bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d72bf:{NFSU2_TR(0x6d72bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6d72c3:{NFSU2_TR(0x6d72c3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d72c4:{NFSU2_TR(0x6d72c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B6d72c7:{NFSU2_TR(0x6d72c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d72c9:{NFSU2_TR(0x6d72c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7296u);}goto L6d7296;}}
}
B6d72cb:L6d72cb:{c.instructions+=1;NFSU2_TR(0x6d72cb);
__builtin_memmove((R+24),(R+0),4);
}
B6d72cd:L6d72cd:{c.instructions+=9;NFSU2_TR(0x6d72cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6d72d1:{NFSU2_TR(0x6d72d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d72d5:{NFSU2_TR(0x6d72d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d72d8:{NFSU2_TR(0x6d72d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d72dc:{NFSU2_TR(0x6d72dc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d72de:{NFSU2_TR(0x6d72de);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6d72e2:{NFSU2_TR(0x6d72e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d72e6:{NFSU2_TR(0x6d72e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d72ea:{NFSU2_TR(0x6d72ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d752f;}}
}
B6d72f0:L6d72f0:{c.instructions+=2;NFSU2_TR(0x6d72f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d72f3:{NFSU2_TR(0x6d72f3);
{goto L6d7300;}
}
B6d72f5:L6d72f5:{c.instructions+=2;NFSU2_TR(0x6d72f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d72f9:{NFSU2_TR(0x6d72f9);
__builtin_memmove((R+16),(R+16),4);
}
B6d7300:L6d7300:{c.instructions+=3;NFSU2_TR(0x6d7300);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7303:{NFSU2_TR(0x6d7303);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x70000005ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70000005ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7308:{NFSU2_TR(0x6d7308);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d74e9;}}
}
B6d730e:L6d730e:{c.instructions+=1;NFSU2_TR(0x6d730e);
if(r1(R+518)){{goto L6d750f;}}
}
B6d7314:L6d7314:{c.instructions+=2;NFSU2_TR(0x6d7314);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d7317:{NFSU2_TR(0x6d7317);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d74fe;}}
}
B6d731d:L6d731d:{c.instructions+=1;NFSU2_TR(0x6d731d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6d7668ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d7324:L6d7324:{c.instructions+=9;NFSU2_TR(0x6d7324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d7326:{NFSU2_TR(0x6d7326);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d7329:{NFSU2_TR(0x6d7329);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d732c:{NFSU2_TR(0x6d732c);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d7330:{NFSU2_TR(0x6d7330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6d7332:{NFSU2_TR(0x6d7332);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6d7336:{NFSU2_TR(0x6d7336);
w4(R+24,u32(0x7c017cull));
}
B6d733b:{NFSU2_TR(0x6d733b);
w4(R+4,u32(0x8ull));
}
B6d7340:{NFSU2_TR(0x6d7340);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d7342:L6d7342:{c.instructions+=1;NFSU2_TR(0x6d7342);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d7344;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7342u);}goto L6d7342;}}
}
B6d7344:L6d7344:{c.instructions+=1;NFSU2_TR(0x6d7344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d750f;}}
}
B6d734a:L6d734a:{c.instructions+=9;NFSU2_TR(0x6d734a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d734d:{NFSU2_TR(0x6d734d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7350:{NFSU2_TR(0x6d7350);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7353:{NFSU2_TR(0x6d7353);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6d7354:{NFSU2_TR(0x6d7354);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B6d7357:{NFSU2_TR(0x6d7357);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6d7359:{NFSU2_TR(0x6d7359);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6d735c:{NFSU2_TR(0x6d735c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d735f:{NFSU2_TR(0x6d735f);
{goto L6d750f;}
}
B6d7364:L6d7364:{c.instructions+=5;NFSU2_TR(0x6d7364);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d7367:{NFSU2_TR(0x6d7367);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6d736b:{NFSU2_TR(0x6d736b);
w4(R+24,u32(0x7c0174ull));
}
B6d7370:{NFSU2_TR(0x6d7370);
w4(R+4,u32(0x8ull));
}
B6d7375:{NFSU2_TR(0x6d7375);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d7377:L6d7377:{c.instructions+=1;NFSU2_TR(0x6d7377);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d7379;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7377u);}goto L6d7377;}}
}
B6d7379:L6d7379:{c.instructions+=1;NFSU2_TR(0x6d7379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d750f;}}
}
B6d737f:L6d737f:{c.instructions+=6;NFSU2_TR(0x6d737f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d7382:{NFSU2_TR(0x6d7382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7385:{NFSU2_TR(0x6d7385);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7388:{NFSU2_TR(0x6d7388);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d738a:{NFSU2_TR(0x6d738a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d738e:{NFSU2_TR(0x6d738e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d750f;}}
}
B6d7394:L6d7394:{c.instructions+=3;NFSU2_TR(0x6d7394);
__builtin_memmove((R+0),(R+28),4);
}
B6d7396:{NFSU2_TR(0x6d7396);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d7399:{NFSU2_TR(0x6d7399);
__builtin_memmove((R+16),(R+16),4);
}
B6d73a0:L6d73a0:{c.instructions+=4;NFSU2_TR(0x6d73a0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d73a2:{NFSU2_TR(0x6d73a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d73a3:{NFSU2_TR(0x6d73a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d73a5:{NFSU2_TR(0x6d73a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d73a0u);}goto L6d73a0;}}
}
B6d73a7:L6d73a7:{c.instructions+=5;NFSU2_TR(0x6d73a7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d73a9:{NFSU2_TR(0x6d73a9);
__builtin_memmove((R+20),(R+0),4);
}
B6d73ab:{NFSU2_TR(0x6d73ab);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6d73ae:{NFSU2_TR(0x6d73ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d73b2:{NFSU2_TR(0x6d73b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d743e;}}
}
B6d73b8:L6d73b8:{c.instructions+=2;NFSU2_TR(0x6d73b8);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6d73bc:{NFSU2_TR(0x6d73bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d743e;}}
}
B6d73c2:L6d73c2:{c.instructions+=4;NFSU2_TR(0x6d73c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d73c5:{NFSU2_TR(0x6d73c5);
u8 U[4];
w4(U+0,u32(0x7c0170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d73ca:{NFSU2_TR(0x6d73ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d73cb:{NFSU2_TR(0x6d73cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d73d0ull));
TAIL_STATIC(0x75f140u,75f);
}
B6d73d0:L6d73d0:{c.instructions+=3;NFSU2_TR(0x6d73d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d73d3:{NFSU2_TR(0x6d73d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d73d5:{NFSU2_TR(0x6d73d5);
if(r1(R+518)){{goto L6d743e;}}
}
B6d73d7:L6d73d7:{c.instructions+=4;NFSU2_TR(0x6d73d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B6d73db:{NFSU2_TR(0x6d73db);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6d73de:{NFSU2_TR(0x6d73de);
__builtin_memmove((R+4),(R+24),4);
}
B6d73e0:{NFSU2_TR(0x6d73e0);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B6d73e2:L6d73e2:{c.instructions+=5;NFSU2_TR(0x6d73e2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d73e4:{NFSU2_TR(0x6d73e4);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6d73e7:{NFSU2_TR(0x6d73e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d73e8:{NFSU2_TR(0x6d73e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d73ea:{NFSU2_TR(0x6d73ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d73e2u);}goto L6d73e2;}}
}
B6d73ec:L6d73ec:{c.instructions+=2;NFSU2_TR(0x6d73ec);
w4(R+4,u32(0x7c0170ull));
}
B6d73f1:{NFSU2_TR(0x6d73f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d73f4:L6d73f4:{c.instructions+=4;NFSU2_TR(0x6d73f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d73f6:{NFSU2_TR(0x6d73f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d73f7:{NFSU2_TR(0x6d73f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d73f9:{NFSU2_TR(0x6d73f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d73f4u);}goto L6d73f4;}}
}
B6d73fb:L6d73fb:{c.instructions+=4;NFSU2_TR(0x6d73fb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B6d73fd:{NFSU2_TR(0x6d73fd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6d73ff:{NFSU2_TR(0x6d73ff);
__builtin_memmove((R+0),(R+4),4);
}
B6d7401:{NFSU2_TR(0x6d7401);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7404:L6d7404:{c.instructions+=4;NFSU2_TR(0x6d7404);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d7406:{NFSU2_TR(0x6d7406);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7407:{NFSU2_TR(0x6d7407);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7409:{NFSU2_TR(0x6d7409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7404u);}goto L6d7404;}}
}
B6d740b:L6d740b:{c.instructions+=6;NFSU2_TR(0x6d740b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6d740d:{NFSU2_TR(0x6d740d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7410:{NFSU2_TR(0x6d7410);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7411:{NFSU2_TR(0x6d7411);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7412:{NFSU2_TR(0x6d7412);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7413:{NFSU2_TR(0x6d7413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7418ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B6d7418:L6d7418:{c.instructions+=8;NFSU2_TR(0x6d7418);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d741b:{NFSU2_TR(0x6d741b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d741f:{NFSU2_TR(0x6d741f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d7422:{NFSU2_TR(0x6d7422);
u8 U[1];
w1(U+0,u8(0x7full));
s1(u32(r4(R+0)),r1(U+0));
}
B6d7425:{NFSU2_TR(0x6d7425);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d7427:{NFSU2_TR(0x6d7427);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6d742b:{NFSU2_TR(0x6d742b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d742e:{NFSU2_TR(0x6d742e);
__builtin_memmove((R+28),(R+28),4);
}
B6d7430:L6d7430:{c.instructions+=5;NFSU2_TR(0x6d7430);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6d7432:{NFSU2_TR(0x6d7432);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6d7435:{NFSU2_TR(0x6d7435);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d7436:{NFSU2_TR(0x6d7436);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7438:{NFSU2_TR(0x6d7438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7430u);}goto L6d7430;}}
}
B6d743a:L6d743a:{c.instructions+=1;NFSU2_TR(0x6d743a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d743e:L6d743e:{c.instructions+=8;NFSU2_TR(0x6d743e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7442:{NFSU2_TR(0x6d7442);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B6d7445:{NFSU2_TR(0x6d7445);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B6d7447:{NFSU2_TR(0x6d7447);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d7449:{NFSU2_TR(0x6d7449);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d744b:{NFSU2_TR(0x6d744b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d744f:{NFSU2_TR(0x6d744f);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6d7453:{NFSU2_TR(0x6d7453);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7394u);}goto L6d7394;}}
}
B6d7459:L6d7459:{c.instructions+=2;NFSU2_TR(0x6d7459);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d745d:{NFSU2_TR(0x6d745d);
{goto L6d750f;}
}
B6d7462:L6d7462:{c.instructions+=3;NFSU2_TR(0x6d7462);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7465:{NFSU2_TR(0x6d7465);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7467:{NFSU2_TR(0x6d7467);
if(r1(R+518)){{goto L6d750f;}}
}
B6d746d:L6d746d:{c.instructions+=3;NFSU2_TR(0x6d746d);
u8 U[4];
w4(U+0,u32(0x7c0134ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7472:{NFSU2_TR(0x6d7472);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7474:{NFSU2_TR(0x6d7474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7479ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7479:L6d7479:{c.instructions+=2;NFSU2_TR(0x6d7479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d747c:{NFSU2_TR(0x6d747c);
{goto L6d750f;}
}
B6d7481:L6d7481:{c.instructions+=3;NFSU2_TR(0x6d7481);
u8 U[4];
w4(U+0,u32(0x7c0104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7486:{NFSU2_TR(0x6d7486);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7488:{NFSU2_TR(0x6d7488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d748dull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d748d:L6d748d:{c.instructions+=2;NFSU2_TR(0x6d748d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7490:{NFSU2_TR(0x6d7490);
{goto L6d750f;}
}
B6d7495:L6d7495:{c.instructions+=9;NFSU2_TR(0x6d7495);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7498:{NFSU2_TR(0x6d7498);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d749b:{NFSU2_TR(0x6d749b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d749f:{NFSU2_TR(0x6d749f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d74a2:{NFSU2_TR(0x6d74a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d74a4:{NFSU2_TR(0x6d74a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d74a7:{NFSU2_TR(0x6d74a7);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d74ab:{NFSU2_TR(0x6d74ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6d74ad:{NFSU2_TR(0x6d74ad);
{goto L6d750f;}
}
B6d74af:L6d74af:{c.instructions+=3;NFSU2_TR(0x6d74af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d74b2:{NFSU2_TR(0x6d74b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d74b4:{NFSU2_TR(0x6d74b4);
if(r1(R+518)){{goto L6d750f;}}
}
B6d74b6:L6d74b6:{c.instructions+=3;NFSU2_TR(0x6d74b6);
u8 U[4];
w4(U+0,u32(0x7c00c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74bb:{NFSU2_TR(0x6d74bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74bd:{NFSU2_TR(0x6d74bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d74c2ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d74c2:L6d74c2:{c.instructions+=2;NFSU2_TR(0x6d74c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d74c5:{NFSU2_TR(0x6d74c5);
{goto L6d750f;}
}
B6d74c7:L6d74c7:{c.instructions+=3;NFSU2_TR(0x6d74c7);
u8 U[4];
w4(U+0,u32(0x7c0098ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74cc:{NFSU2_TR(0x6d74cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74ce:{NFSU2_TR(0x6d74ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d74d3ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d74d3:L6d74d3:{c.instructions+=2;NFSU2_TR(0x6d74d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d74d6:{NFSU2_TR(0x6d74d6);
{goto L6d750f;}
}
B6d74d8:L6d74d8:{c.instructions+=3;NFSU2_TR(0x6d74d8);
u8 U[4];
w4(U+0,u32(0x7c0064ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74dd:{NFSU2_TR(0x6d74dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74df:{NFSU2_TR(0x6d74df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d74e4ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d74e4:L6d74e4:{c.instructions+=2;NFSU2_TR(0x6d74e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d74e7:{NFSU2_TR(0x6d74e7);
{goto L6d750f;}
}
B6d74e9:L6d74e9:{c.instructions+=2;NFSU2_TR(0x6d74e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70000006ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d74ee:{NFSU2_TR(0x6d74ee);
if(r1(R+518)){{goto L6d750f;}}
}
B6d74f0:L6d74f0:{c.instructions+=2;NFSU2_TR(0x6d74f0);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7ffff41full))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ffff41full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d74f5:{NFSU2_TR(0x6d74f5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d74fe;}}
}
B6d74f7:L6d74f7:{c.instructions+=2;NFSU2_TR(0x6d74f7);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7ffff421ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ffff421ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d74fc:{NFSU2_TR(0x6d74fc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d750f;}}
}
B6d74fe:L6d74fe:{c.instructions+=5;NFSU2_TR(0x6d74fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d74ff:{NFSU2_TR(0x6d74ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7500:{NFSU2_TR(0x6d7500);
u8 U[4];
w4(U+0,u32(0x7c0020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7505:{NFSU2_TR(0x6d7505);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7507:{NFSU2_TR(0x6d7507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d750cull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d750c:L6d750c:{c.instructions+=1;NFSU2_TR(0x6d750c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d750f:L6d750f:{c.instructions+=8;NFSU2_TR(0x6d750f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7513:{NFSU2_TR(0x6d7513);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7517:{NFSU2_TR(0x6d7517);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6d751b:{NFSU2_TR(0x6d751b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d751c:{NFSU2_TR(0x6d751c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B6d751f:{NFSU2_TR(0x6d751f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d7521:{NFSU2_TR(0x6d7521);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7525:{NFSU2_TR(0x6d7525);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d72f5u);}goto L6d72f5;}}
}
B6d752b:L6d752b:{c.instructions+=1;NFSU2_TR(0x6d752b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d752f:L6d752f:{c.instructions+=3;NFSU2_TR(0x6d752f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7532:{NFSU2_TR(0x6d7532);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7534:{NFSU2_TR(0x6d7534);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7545;}}
}
B6d7536:L6d7536:{c.instructions+=3;NFSU2_TR(0x6d7536);
u8 U[4];
w4(U+0,u32(0x7bffe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d753b:{NFSU2_TR(0x6d753b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d753d:{NFSU2_TR(0x6d753d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7542ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7542:L6d7542:{c.instructions+=1;NFSU2_TR(0x6d7542);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7545:L6d7545:{c.instructions+=5;NFSU2_TR(0x6d7545);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d754c:{NFSU2_TR(0x6d754c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x42cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7552:{NFSU2_TR(0x6d7552);
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
B6d7555:{NFSU2_TR(0x6d7555);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7558:{NFSU2_TR(0x6d7558);
w4(R+4,u32(0x100ull));
}
B6d755d:L6d755d:{c.instructions+=1;NFSU2_TR(0x6d755d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6d755f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d755du);}goto L6d755d;}
}
B6d755f:L6d755f:{c.instructions+=5;NFSU2_TR(0x6d755f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7562:{NFSU2_TR(0x6d7562);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6d7565:{NFSU2_TR(0x6d7565);
u8 U[4];
w4(U+0,u32(0x7bffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d756a:{NFSU2_TR(0x6d756a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d756b:{NFSU2_TR(0x6d756b);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7571ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7571:L6d7571:{c.instructions+=5;NFSU2_TR(0x6d7571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x420ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7577:{NFSU2_TR(0x6d7577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d757a:{NFSU2_TR(0x6d757a);
u8 U[4];
w4(U+0,u32(0x7bffb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d757f:{NFSU2_TR(0x6d757f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7580:{NFSU2_TR(0x6d7580);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7586ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7586:L6d7586:{c.instructions+=6;NFSU2_TR(0x6d7586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x424ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d758c:{NFSU2_TR(0x6d758c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d758f:{NFSU2_TR(0x6d758f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d7592:{NFSU2_TR(0x6d7592);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d7594:{NFSU2_TR(0x6d7594);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7596:{NFSU2_TR(0x6d7596);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d763d;}}
}
B6d759c:L6d759c:{c.instructions+=2;NFSU2_TR(0x6d759c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6d759e:{NFSU2_TR(0x6d759e);
__builtin_memmove((R+28),(R+28),4);
}
B6d75a0:L6d75a0:{c.instructions+=10;NFSU2_TR(0x6d75a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d75a4:{NFSU2_TR(0x6d75a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d75a7:{NFSU2_TR(0x6d75a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d75aa:{NFSU2_TR(0x6d75aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d75ad:{NFSU2_TR(0x6d75ad);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6d75af:{NFSU2_TR(0x6d75af);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d75b1:{NFSU2_TR(0x6d75b1);
u8 U[12];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6d75b5:{NFSU2_TR(0x6d75b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d75b7:{NFSU2_TR(0x6d75b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d75b9:{NFSU2_TR(0x6d75b9);
if(r1(R+518)){{goto L6d75e8;}}
}
B6d75bb:L6d75bb:{c.instructions+=1;NFSU2_TR(0x6d75bb);
{goto L6d75c0;}
}
B6d75c0:L6d75c0:{c.instructions+=7;NFSU2_TR(0x6d75c0);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B6d75c3:{NFSU2_TR(0x6d75c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d75c6:{NFSU2_TR(0x6d75c6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d75c8:{NFSU2_TR(0x6d75c8);
__builtin_memmove((R+4),(R+0),4);
}
B6d75ca:{NFSU2_TR(0x6d75ca);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d75cb:{NFSU2_TR(0x6d75cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d75d1:{NFSU2_TR(0x6d75d1);
if(r1(R+518)){{goto L6d75de;}}
}
B6d75d3:L6d75d3:{c.instructions+=4;NFSU2_TR(0x6d75d3);
__builtin_memmove((R+12),(R+4),4);
}
B6d75d5:{NFSU2_TR(0x6d75d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6d75d8:{NFSU2_TR(0x6d75d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B6d75da:{NFSU2_TR(0x6d75da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d75de:L6d75de:{c.instructions+=5;NFSU2_TR(0x6d75de);
w4(R+4,u32(~u32(r4(R+4))));
}
B6d75e0:{NFSU2_TR(0x6d75e0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6d75e2:{NFSU2_TR(0x6d75e2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d75e4:{NFSU2_TR(0x6d75e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d75e6:{NFSU2_TR(0x6d75e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d75c0u);}goto L6d75c0;}}
}
B6d75e8:L6d75e8:{c.instructions+=8;NFSU2_TR(0x6d75e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d75ee:{NFSU2_TR(0x6d75ee);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6d75f3:{NFSU2_TR(0x6d75f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6d75f7:{NFSU2_TR(0x6d75f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d75fa:{NFSU2_TR(0x6d75fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d75fe:{NFSU2_TR(0x6d75fe);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6d7601:{NFSU2_TR(0x6d7601);
u8 U[2];
w1(R+512,u8(0x0ull));
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6d7604:{NFSU2_TR(0x6d7604);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d761c;}}
}
B6d7606:L6d7606:{c.instructions+=3;NFSU2_TR(0x6d7606);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d760a:{NFSU2_TR(0x6d760a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B6d760e:{NFSU2_TR(0x6d760e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d761c;}}
}
B6d7610:L6d7610:{c.instructions+=3;NFSU2_TR(0x6d7610);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7616:{NFSU2_TR(0x6d7616);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B6d761a:{NFSU2_TR(0x6d761a);
{goto L6d7626;}
}
B6d761c:L6d761c:{c.instructions+=2;NFSU2_TR(0x6d761c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7622:{NFSU2_TR(0x6d7622);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B6d7626:L6d7626:{c.instructions+=5;NFSU2_TR(0x6d7626);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7629:{NFSU2_TR(0x6d7629);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d762a:{NFSU2_TR(0x6d762a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6d762d:{NFSU2_TR(0x6d762d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d762f:{NFSU2_TR(0x6d762f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d75a0u);}goto L6d75a0;}}
}
B6d7635:L6d7635:{c.instructions+=2;NFSU2_TR(0x6d7635);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d7639:{NFSU2_TR(0x6d7639);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d763d:L6d763d:{c.instructions+=5;NFSU2_TR(0x6d763d);
__builtin_memmove((R+0),gp(0x8a7110),4);
}
B6d7642:{NFSU2_TR(0x6d7642);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7644:{NFSU2_TR(0x6d7644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6d7647:{NFSU2_TR(0x6d7647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7648:{NFSU2_TR(0x6d7648);
if(r1(R+518)){{goto L6d764d;}}
}
B6d764a:L6d764a:{c.instructions+=1;NFSU2_TR(0x6d764a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d764d:L6d764d:{c.instructions+=8;NFSU2_TR(0x6d764d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d7654:{NFSU2_TR(0x6d7654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7655:{NFSU2_TR(0x6d7655);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6d7657:{NFSU2_TR(0x6d7657);
__builtin_memmove(gp(0x8a7110),(R+20),4);
}
B6d765d:{NFSU2_TR(0x6d765d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d765e:{NFSU2_TR(0x6d765e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d765f:{NFSU2_TR(0x6d765f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d7665:{NFSU2_TR(0x6d7665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d76a0:L6d76a0:{c.instructions+=8;NFSU2_TR(0x6d76a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d76a3:{NFSU2_TR(0x6d76a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d76a4:{NFSU2_TR(0x6d76a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d76a5:{NFSU2_TR(0x6d76a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d76a7:{NFSU2_TR(0x6d76a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d76a9:{NFSU2_TR(0x6d76a9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d76ab:{NFSU2_TR(0x6d76ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d76ad:{NFSU2_TR(0x6d76ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d76d0;}}
}
B6d76af:L6d76af:{c.instructions+=12;NFSU2_TR(0x6d76af);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d76b3:{NFSU2_TR(0x6d76b3);
__builtin_memmove((R+4),(R+0),4);
}
B6d76b5:{NFSU2_TR(0x6d76b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d76b7:{NFSU2_TR(0x6d76b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d76bb:{NFSU2_TR(0x6d76bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d76be:{NFSU2_TR(0x6d76be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d76c2:{NFSU2_TR(0x6d76c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d76c5:{NFSU2_TR(0x6d76c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d76c6:{NFSU2_TR(0x6d76c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d76c9:{NFSU2_TR(0x6d76c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d76ca:{NFSU2_TR(0x6d76ca);
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
B6d76cd:{NFSU2_TR(0x6d76cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d76d0:L6d76d0:{c.instructions+=5;NFSU2_TR(0x6d76d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d76d4:{NFSU2_TR(0x6d76d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d76d6:{NFSU2_TR(0x6d76d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d76d9:{NFSU2_TR(0x6d76d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d76da:{NFSU2_TR(0x6d76da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d779d;}}
}
B6d76e0:L6d76e0:{c.instructions+=2;NFSU2_TR(0x6d76e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6d76e3:{NFSU2_TR(0x6d76e3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d779d;}}
}
B6d76e9:L6d76e9:{c.instructions+=9;NFSU2_TR(0x6d76e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d76ec:{NFSU2_TR(0x6d76ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d76ef:{NFSU2_TR(0x6d76ef);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6d76f1:{NFSU2_TR(0x6d76f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d76f4:{NFSU2_TR(0x6d76f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d76f5:{NFSU2_TR(0x6d76f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6d76f8:{NFSU2_TR(0x6d76f8);
__builtin_memmove((R+0),(R+20),4);
}
B6d76fa:{NFSU2_TR(0x6d76fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d76fd:{NFSU2_TR(0x6d76fd);
__builtin_memmove((R+4),(R+4),4);
}
B6d7700:L6d7700:{c.instructions+=4;NFSU2_TR(0x6d7700);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d7702:{NFSU2_TR(0x6d7702);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7703:{NFSU2_TR(0x6d7703);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7705:{NFSU2_TR(0x6d7705);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7700u);}goto L6d7700;}}
}
B6d7707:L6d7707:{c.instructions+=4;NFSU2_TR(0x6d7707);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6d7709:{NFSU2_TR(0x6d7709);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6d770d:{NFSU2_TR(0x6d770d);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x7full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6d7710:{NFSU2_TR(0x6d7710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7715;}}
}
B6d7712:L6d7712:{c.instructions+=2;NFSU2_TR(0x6d7712);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d7713:{NFSU2_TR(0x6d7713);
{goto L6d7716;}
}
B6d7715:L6d7715:{c.instructions+=1;NFSU2_TR(0x6d7715);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6d7716:L6d7716:{c.instructions+=3;NFSU2_TR(0x6d7716);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6d7719:{NFSU2_TR(0x6d7719);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6d771c:{NFSU2_TR(0x6d771c);
if(r1(R+518)){{goto L6d7732;}}
}
B6d771e:L6d771e:{c.instructions+=2;NFSU2_TR(0x6d771e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6d7721:{NFSU2_TR(0x6d7721);
if(r1(R+518)){{goto L6d7732;}}
}
B6d7723:L6d7723:{c.instructions+=2;NFSU2_TR(0x6d7723);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6d7726:{NFSU2_TR(0x6d7726);
if(r1(R+518)){{goto L6d7732;}}
}
B6d7728:L6d7728:{c.instructions+=3;NFSU2_TR(0x6d7728);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6d772b:{NFSU2_TR(0x6d772b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7730:{NFSU2_TR(0x6d7730);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7737;}}
}
B6d7732:L6d7732:{c.instructions+=1;NFSU2_TR(0x6d7732);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7737:L6d7737:{c.instructions+=3;NFSU2_TR(0x6d7737);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6d773a:{NFSU2_TR(0x6d773a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6d773e:{NFSU2_TR(0x6d773e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7762;}}
}
B6d7740:L6d7740:{c.instructions+=14;NFSU2_TR(0x6d7740);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d7743:{NFSU2_TR(0x6d7743);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7747:{NFSU2_TR(0x6d7747);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d774b:{NFSU2_TR(0x6d774b);
__builtin_memmove((R+4),(R+0),4);
}
B6d774d:{NFSU2_TR(0x6d774d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d774f:{NFSU2_TR(0x6d774f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d7750:{NFSU2_TR(0x6d7750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7753:{NFSU2_TR(0x6d7753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7754:{NFSU2_TR(0x6d7754);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7757:{NFSU2_TR(0x6d7757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7758:{NFSU2_TR(0x6d7758);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d775b:{NFSU2_TR(0x6d775b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d775c:{NFSU2_TR(0x6d775c);
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
B6d775f:{NFSU2_TR(0x6d775f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7762:L6d7762:{c.instructions+=2;NFSU2_TR(0x6d7762);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7764:{NFSU2_TR(0x6d7764);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d777e;}}
}
B6d7766:L6d7766:{c.instructions+=4;NFSU2_TR(0x6d7766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7769:{NFSU2_TR(0x6d7769);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6d776d:{NFSU2_TR(0x6d776d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d776f:{NFSU2_TR(0x6d776f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d777e;}}
}
B6d7771:L6d7771:{c.instructions+=4;NFSU2_TR(0x6d7771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7774:{NFSU2_TR(0x6d7774);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d7777:{NFSU2_TR(0x6d7777);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6d777b:{NFSU2_TR(0x6d777b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6d777e:L6d777e:{c.instructions+=13;NFSU2_TR(0x6d777e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7782:{NFSU2_TR(0x6d7782);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7786:{NFSU2_TR(0x6d7786);
__builtin_memmove((R+4),(R+0),4);
}
B6d7788:{NFSU2_TR(0x6d7788);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d778a:{NFSU2_TR(0x6d778a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d778b:{NFSU2_TR(0x6d778b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d778e:{NFSU2_TR(0x6d778e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d778f:{NFSU2_TR(0x6d778f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7792:{NFSU2_TR(0x6d7792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7793:{NFSU2_TR(0x6d7793);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7796:{NFSU2_TR(0x6d7796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d7797:{NFSU2_TR(0x6d7797);
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
B6d779a:{NFSU2_TR(0x6d779a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d779d:L6d779d:{c.instructions+=13;NFSU2_TR(0x6d779d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d77a1:{NFSU2_TR(0x6d77a1);
__builtin_memmove((R+4),(R+0),4);
}
B6d77a3:{NFSU2_TR(0x6d77a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d77a5:{NFSU2_TR(0x6d77a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d77a9:{NFSU2_TR(0x6d77a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d77ac:{NFSU2_TR(0x6d77ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d77b0:{NFSU2_TR(0x6d77b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d77b1:{NFSU2_TR(0x6d77b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d77b4:{NFSU2_TR(0x6d77b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d77b5:{NFSU2_TR(0x6d77b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d77b8:{NFSU2_TR(0x6d77b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d77b9:{NFSU2_TR(0x6d77b9);
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
B6d77bc:{NFSU2_TR(0x6d77bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d77c0:L6d77c0:{c.instructions+=9;NFSU2_TR(0x6d77c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d77c4:{NFSU2_TR(0x6d77c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77c5:{NFSU2_TR(0x6d77c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77c6:{NFSU2_TR(0x6d77c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d77ca:{NFSU2_TR(0x6d77ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d77cd:{NFSU2_TR(0x6d77cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77ce:{NFSU2_TR(0x6d77ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77cf:{NFSU2_TR(0x6d77cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d77d3:{NFSU2_TR(0x6d77d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d77d8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7130u);}goto L6d7130;}
}
B6d77d8:L6d77d8:{c.instructions+=3;NFSU2_TR(0x6d77d8);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6d77dc:{NFSU2_TR(0x6d77dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d77df:{NFSU2_TR(0x6d77df);
if(r1(R+518)){{goto L6d7872;}}
}
B6d77e5:L6d77e5:{c.instructions+=3;NFSU2_TR(0x6d77e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d77e8:{NFSU2_TR(0x6d77e8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d77ea:{NFSU2_TR(0x6d77ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d77fd;}}
}
B6d77ec:L6d77ec:{c.instructions+=5;NFSU2_TR(0x6d77ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77ed:{NFSU2_TR(0x6d77ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77ee:{NFSU2_TR(0x6d77ee);
u8 U[4];
w4(U+0,u32(0x7c0184ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77f3:{NFSU2_TR(0x6d77f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d77f5:{NFSU2_TR(0x6d77f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d77faull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d77fa:L6d77fa:{c.instructions+=1;NFSU2_TR(0x6d77fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d77fd:L6d77fd:{c.instructions+=3;NFSU2_TR(0x6d77fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7803:{NFSU2_TR(0x6d7803);
u8 U[11];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B6d7807:{NFSU2_TR(0x6d7807);
if(r1(R+518)){{goto L6d7860;}}
}
B6d7809:L6d7809:{c.instructions+=8;NFSU2_TR(0x6d7809);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d780d:{NFSU2_TR(0x6d780d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d7811:{NFSU2_TR(0x6d7811);
__builtin_memmove((R+8),(R+28),4);
}
B6d7813:{NFSU2_TR(0x6d7813);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6d7816:{NFSU2_TR(0x6d7816);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d7819:{NFSU2_TR(0x6d7819);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6d781b:{NFSU2_TR(0x6d781b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d781e:{NFSU2_TR(0x6d781e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d7820:L6d7820:{c.instructions+=4;NFSU2_TR(0x6d7820);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6d7822:{NFSU2_TR(0x6d7822);
__builtin_memmove((R+4),(R+12),1);
}
B6d7824:{NFSU2_TR(0x6d7824);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6d7826:{NFSU2_TR(0x6d7826);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7844;}}
}
B6d7828:L6d7828:{c.instructions+=2;NFSU2_TR(0x6d7828);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d782a:{NFSU2_TR(0x6d782a);
if(r1(R+518)){{goto L6d7840;}}
}
B6d782c:L6d782c:{c.instructions+=4;NFSU2_TR(0x6d782c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6d782f:{NFSU2_TR(0x6d782f);
__builtin_memmove((R+4),(R+12),1);
}
B6d7831:{NFSU2_TR(0x6d7831);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+12))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6d7834:{NFSU2_TR(0x6d7834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7844;}}
}
B6d7836:L6d7836:{c.instructions+=4;NFSU2_TR(0x6d7836);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6d7839:{NFSU2_TR(0x6d7839);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6d783c:{NFSU2_TR(0x6d783c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d783e:{NFSU2_TR(0x6d783e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7820u);}goto L6d7820;}}
}
B6d7840:L6d7840:{c.instructions+=2;NFSU2_TR(0x6d7840);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7842:{NFSU2_TR(0x6d7842);
{goto L6d7849;}
}
B6d7844:L6d7844:{c.instructions+=2;NFSU2_TR(0x6d7844);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d7846:{NFSU2_TR(0x6d7846);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d7849:L6d7849:{c.instructions+=2;NFSU2_TR(0x6d7849);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d784b:{NFSU2_TR(0x6d784b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7860;}}
}
B6d784d:L6d784d:{c.instructions+=3;NFSU2_TR(0x6d784d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6d7851:{NFSU2_TR(0x6d7851);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7853:{NFSU2_TR(0x6d7853);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d7860;}}
}
B6d7855:L6d7855:{c.instructions+=4;NFSU2_TR(0x6d7855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7858:{NFSU2_TR(0x6d7858);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6d785c:{NFSU2_TR(0x6d785c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d785e:{NFSU2_TR(0x6d785e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d7879;}}
}
B6d7860:L6d7860:{c.instructions+=4;NFSU2_TR(0x6d7860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7866:{NFSU2_TR(0x6d7866);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d7869:{NFSU2_TR(0x6d7869);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d786c:{NFSU2_TR(0x6d786c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d77e5u);}goto L6d77e5;}}
}
B6d7872:L6d7872:{c.instructions+=6;NFSU2_TR(0x6d7872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7873:{NFSU2_TR(0x6d7873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7874:{NFSU2_TR(0x6d7874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d7875:{NFSU2_TR(0x6d7875);
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
B6d7877:{NFSU2_TR(0x6d7877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d7878:{NFSU2_TR(0x6d7878);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7879:L6d7879:{c.instructions+=12;NFSU2_TR(0x6d7879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d787c:{NFSU2_TR(0x6d787c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d787f:{NFSU2_TR(0x6d787f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d7883:{NFSU2_TR(0x6d7883);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7887:{NFSU2_TR(0x6d7887);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d788a:{NFSU2_TR(0x6d788a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6d788e:{NFSU2_TR(0x6d788e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d788f:{NFSU2_TR(0x6d788f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7890:{NFSU2_TR(0x6d7890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d7891:{NFSU2_TR(0x6d7891);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d7893:{NFSU2_TR(0x6d7893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d7894:{NFSU2_TR(0x6d7894);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d78a0:L6d78a0:{c.instructions+=7;NFSU2_TR(0x6d78a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d78a3:{NFSU2_TR(0x6d78a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d78a4:{NFSU2_TR(0x6d78a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d78a5:{NFSU2_TR(0x6d78a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d78a6:{NFSU2_TR(0x6d78a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d78a7:{NFSU2_TR(0x6d78a7);
__builtin_memmove((R+12),(R+4),4);
}
B6d78a9:{NFSU2_TR(0x6d78a9);
__builtin_memmove((R+16),(R+16),4);
}
B6d78b0:L6d78b0:{c.instructions+=3;NFSU2_TR(0x6d78b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d78b2:{NFSU2_TR(0x6d78b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d78b4:{NFSU2_TR(0x6d78b4);
if(r1(R+518)){{goto L6d78b9;}}
}
B6d78b6:L6d78b6:{c.instructions+=1;NFSU2_TR(0x6d78b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d78b9:L6d78b9:{c.instructions+=4;NFSU2_TR(0x6d78b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d78bd:{NFSU2_TR(0x6d78bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d78bf:{NFSU2_TR(0x6d78bf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d78c1:{NFSU2_TR(0x6d78c1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d7946;}}
}
B6d78c7:L6d78c7:{c.instructions+=5;NFSU2_TR(0x6d78c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d78c8:{NFSU2_TR(0x6d78c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d78cc:{NFSU2_TR(0x6d78cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d78cd:{NFSU2_TR(0x6d78cd);
__builtin_memmove((R+4),(R+12),4);
}
B6d78cf:{NFSU2_TR(0x6d78cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d78d4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d76a0u);}goto L6d76a0;}
}
B6d78d4:L6d78d4:{c.instructions+=4;NFSU2_TR(0x6d78d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d78d8:{NFSU2_TR(0x6d78d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d78dc:{NFSU2_TR(0x6d78dc);
__builtin_memmove((R+24),(R+20),4);
}
B6d78de:{NFSU2_TR(0x6d78de);
__builtin_memmove((R+28),(R+28),4);
}
B6d78e0:L6d78e0:{c.instructions+=4;NFSU2_TR(0x6d78e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d78e2:{NFSU2_TR(0x6d78e2);
__builtin_memmove((R+4),(R+8),1);
}
B6d78e4:{NFSU2_TR(0x6d78e4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6d78e6:{NFSU2_TR(0x6d78e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7904;}}
}
B6d78e8:L6d78e8:{c.instructions+=2;NFSU2_TR(0x6d78e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d78ea:{NFSU2_TR(0x6d78ea);
if(r1(R+518)){{goto L6d7900;}}
}
B6d78ec:L6d78ec:{c.instructions+=4;NFSU2_TR(0x6d78ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6d78ef:{NFSU2_TR(0x6d78ef);
__builtin_memmove((R+4),(R+8),1);
}
B6d78f1:{NFSU2_TR(0x6d78f1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6d78f4:{NFSU2_TR(0x6d78f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7904;}}
}
B6d78f6:L6d78f6:{c.instructions+=4;NFSU2_TR(0x6d78f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6d78f9:{NFSU2_TR(0x6d78f9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6d78fc:{NFSU2_TR(0x6d78fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d78fe:{NFSU2_TR(0x6d78fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d78e0u);}goto L6d78e0;}}
}
B6d7900:L6d7900:{c.instructions+=2;NFSU2_TR(0x6d7900);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7902:{NFSU2_TR(0x6d7902);
{goto L6d7909;}
}
B6d7904:L6d7904:{c.instructions+=2;NFSU2_TR(0x6d7904);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d7906:{NFSU2_TR(0x6d7906);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d7909:L6d7909:{c.instructions+=2;NFSU2_TR(0x6d7909);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d790b:{NFSU2_TR(0x6d790b);
if(r1(R+518)){{goto L6d7916;}}
}
B6d790d:L6d790d:{c.instructions+=4;NFSU2_TR(0x6d790d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7911:{NFSU2_TR(0x6d7911);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d7912:{NFSU2_TR(0x6d7912);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d7914:{NFSU2_TR(0x6d7914);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d78b0u);}goto L6d78b0;}
}
B6d7916:L6d7916:{c.instructions+=19;NFSU2_TR(0x6d7916);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d791a:{NFSU2_TR(0x6d791a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d791e:{NFSU2_TR(0x6d791e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7922:{NFSU2_TR(0x6d7922);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d7924:{NFSU2_TR(0x6d7924);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7928:{NFSU2_TR(0x6d7928);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d792b:{NFSU2_TR(0x6d792b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d792e:{NFSU2_TR(0x6d792e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7932:{NFSU2_TR(0x6d7932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7935:{NFSU2_TR(0x6d7935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d7937:{NFSU2_TR(0x6d7937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7938:{NFSU2_TR(0x6d7938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7939:{NFSU2_TR(0x6d7939);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d793a:{NFSU2_TR(0x6d793a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d793b:{NFSU2_TR(0x6d793b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d793d:{NFSU2_TR(0x6d793d);
w1(R+0,u8(0x1ull));
}
B6d793f:{NFSU2_TR(0x6d793f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d7940:{NFSU2_TR(0x6d7940);
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
B6d7943:{NFSU2_TR(0x6d7943);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7946:L6d7946:{c.instructions+=7;NFSU2_TR(0x6d7946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7947:{NFSU2_TR(0x6d7947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7948:{NFSU2_TR(0x6d7948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d7949:{NFSU2_TR(0x6d7949);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6d794b:{NFSU2_TR(0x6d794b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d794c:{NFSU2_TR(0x6d794c);
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
B6d794f:{NFSU2_TR(0x6d794f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7960:L6d7960:{c.instructions+=9;NFSU2_TR(0x6d7960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d7963:{NFSU2_TR(0x6d7963);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7967:{NFSU2_TR(0x6d7967);
__builtin_memmove((R+0),(R+16),4);
}
B6d796b:{NFSU2_TR(0x6d796b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d796c:{NFSU2_TR(0x6d796c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7970:{NFSU2_TR(0x6d7970);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7971:{NFSU2_TR(0x6d7971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7972:{NFSU2_TR(0x6d7972);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d797a:{NFSU2_TR(0x6d797a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d797full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d78a0u);}goto L6d78a0;}
}
B6d797f:L6d797f:{c.instructions+=2;NFSU2_TR(0x6d797f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7981:{NFSU2_TR(0x6d7981);
if(r1(R+518)){{goto L6d7995;}}
}
B6d7983:L6d7983:{c.instructions+=6;NFSU2_TR(0x6d7983);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7987:{NFSU2_TR(0x6d7987);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d798b:{NFSU2_TR(0x6d798b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d798d:{NFSU2_TR(0x6d798d);
w1(R+0,u8(0x1ull));
}
B6d798f:{NFSU2_TR(0x6d798f);
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
B6d7992:{NFSU2_TR(0x6d7992);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7995:L6d7995:{c.instructions+=3;NFSU2_TR(0x6d7995);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6d7997:{NFSU2_TR(0x6d7997);
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
B6d799a:{NFSU2_TR(0x6d799a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d79a0:L6d79a0:{c.instructions+=6;NFSU2_TR(0x6d79a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d79a1:{NFSU2_TR(0x6d79a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d79a2:{NFSU2_TR(0x6d79a2);
__builtin_memmove((R+28),(R+4),4);
}
B6d79a4:{NFSU2_TR(0x6d79a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d79a6:{NFSU2_TR(0x6d79a6);
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
B6d79a8:{NFSU2_TR(0x6d79a8);
if(r1(R+518)){{goto L6d7a13;}}
}
B6d79aa:L6d79aa:{c.instructions+=3;NFSU2_TR(0x6d79aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d79ad:{NFSU2_TR(0x6d79ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d79af:{NFSU2_TR(0x6d79af);
if(r1(R+518)){{goto L6d79b7;}}
}
B6d79b1:L6d79b1:{c.instructions+=3;NFSU2_TR(0x6d79b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d79b3:{NFSU2_TR(0x6d79b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d79b5:{NFSU2_TR(0x6d79b5);
{goto L6d79bf;}
}
B6d79b7:L6d79b7:{c.instructions+=2;NFSU2_TR(0x6d79b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d79b9:{NFSU2_TR(0x6d79b9);
__builtin_memmove(gp(0x8a7110),(R+8),4);
}
B6d79bf:L6d79bf:{c.instructions+=3;NFSU2_TR(0x6d79bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d79c1:{NFSU2_TR(0x6d79c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d79c3:{NFSU2_TR(0x6d79c3);
if(r1(R+518)){{goto L6d79cb;}}
}
B6d79c5:L6d79c5:{c.instructions+=2;NFSU2_TR(0x6d79c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d79c8:{NFSU2_TR(0x6d79c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d79cb:L6d79cb:{c.instructions+=3;NFSU2_TR(0x6d79cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x420ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d79d1:{NFSU2_TR(0x6d79d1);
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
B6d79d3:{NFSU2_TR(0x6d79d3);
if(r1(R+518)){{goto L6d79e6;}}
}
B6d79d5:L6d79d5:{c.instructions+=5;NFSU2_TR(0x6d79d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d79d8:{NFSU2_TR(0x6d79d8);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6d79db:{NFSU2_TR(0x6d79db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d79dc:{NFSU2_TR(0x6d79dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d79dd:{NFSU2_TR(0x6d79dd);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d79e3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d79e3:L6d79e3:{c.instructions+=1;NFSU2_TR(0x6d79e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d79e6:L6d79e6:{c.instructions+=3;NFSU2_TR(0x6d79e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d79ec:{NFSU2_TR(0x6d79ec);
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
B6d79ee:{NFSU2_TR(0x6d79ee);
if(r1(R+518)){{goto L6d79fe;}}
}
B6d79f0:L6d79f0:{c.instructions+=4;NFSU2_TR(0x6d79f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d79f3:{NFSU2_TR(0x6d79f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d79f4:{NFSU2_TR(0x6d79f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d79f5:{NFSU2_TR(0x6d79f5);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d79fbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d79fb:L6d79fb:{c.instructions+=1;NFSU2_TR(0x6d79fb);
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
B6d79fe:L6d79fe:{c.instructions+=3;NFSU2_TR(0x6d79fe);
u8 U[4];
w4(U+0,u32(0x430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a03:{NFSU2_TR(0x6d7a03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a04:{NFSU2_TR(0x6d7a04);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7a0aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7a0a:L6d7a0a:{c.instructions+=2;NFSU2_TR(0x6d7a0a);
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
B6d7a0d:{NFSU2_TR(0x6d7a0d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B6d7a13:L6d7a13:{c.instructions+=4;NFSU2_TR(0x6d7a13);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7a17:{NFSU2_TR(0x6d7a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7a18:{NFSU2_TR(0x6d7a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7a19:{NFSU2_TR(0x6d7a19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7a20:L6d7a20:{c.instructions+=9;NFSU2_TR(0x6d7a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6d7a23:{NFSU2_TR(0x6d7a23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a24:{NFSU2_TR(0x6d7a24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a25:{NFSU2_TR(0x6d7a25);
__builtin_memmove((R+12),(R+4),4);
}
B6d7a27:{NFSU2_TR(0x6d7a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d7a29:{NFSU2_TR(0x6d7a29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7a2b:{NFSU2_TR(0x6d7a2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a2c:{NFSU2_TR(0x6d7a2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a2d:{NFSU2_TR(0x6d7a2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7a37;}}
}
B6d7a2f:L6d7a2f:{c.instructions+=3;NFSU2_TR(0x6d7a2f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6d7a31:{NFSU2_TR(0x6d7a31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7a35:{NFSU2_TR(0x6d7a35);
{goto L6d7a40;}
}
B6d7a37:L6d7a37:{c.instructions+=3;NFSU2_TR(0x6d7a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7a3a:{NFSU2_TR(0x6d7a3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7a3e:{NFSU2_TR(0x6d7a3e);
__builtin_memmove((R+20),(R+0),4);
}
B6d7a40:L6d7a40:{c.instructions+=4;NFSU2_TR(0x6d7a40);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d7a42:{NFSU2_TR(0x6d7a42);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d7a44:{NFSU2_TR(0x6d7a44);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7a46:{NFSU2_TR(0x6d7a46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d7bbb;}}
}
B6d7a4c:L6d7a4c:{c.instructions+=1;NFSU2_TR(0x6d7a4c);
__builtin_memmove((R+16),(R+16),4);
}
B6d7a50:L6d7a50:{c.instructions+=5;NFSU2_TR(0x6d7a50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a51:{NFSU2_TR(0x6d7a51);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6d7a55:{NFSU2_TR(0x6d7a55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a56:{NFSU2_TR(0x6d7a56);
__builtin_memmove((R+4),(R+12),4);
}
B6d7a58:{NFSU2_TR(0x6d7a58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7a5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d76a0u);}goto L6d76a0;}
}
B6d7a5d:L6d7a5d:{c.instructions+=3;NFSU2_TR(0x6d7a5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7a61:{NFSU2_TR(0x6d7a61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7a63:{NFSU2_TR(0x6d7a63);
if(r1(R+518)){{goto L6d7a79;}}
}
B6d7a65:L6d7a65:{c.instructions+=4;NFSU2_TR(0x6d7a65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7a69:{NFSU2_TR(0x6d7a69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a6a:{NFSU2_TR(0x6d7a6a);
w4(R+4,u32(0x8a7168ull));
}
B6d7a6f:{NFSU2_TR(0x6d7a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7a74ull));
TAIL_STATIC(0x6d8780u,6d8);
}
B6d7a74:L6d7a74:{c.instructions+=2;NFSU2_TR(0x6d7a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7a76:{NFSU2_TR(0x6d7a76);
if(r1(R+518)){{goto L6d7a79;}}
}
B6d7a78:L6d7a78:{c.instructions+=1;NFSU2_TR(0x6d7a78);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d7a79:L6d7a79:{c.instructions+=3;NFSU2_TR(0x6d7a79);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d7a7a:{NFSU2_TR(0x6d7a7a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d7a7c:{NFSU2_TR(0x6d7a7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7a50u);}goto L6d7a50;}}
}
B6d7a7e:L6d7a7e:{c.instructions+=2;NFSU2_TR(0x6d7a7e);
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
B6d7a80:{NFSU2_TR(0x6d7a80);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d7bbb;}}
}
B6d7a86:L6d7a86:{c.instructions+=4;NFSU2_TR(0x6d7a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d7a8d:{NFSU2_TR(0x6d7a8d);
u8 U[4];
w4(U+0,u32(0x7c01ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a92:{NFSU2_TR(0x6d7a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7a93:{NFSU2_TR(0x6d7a93);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7a99ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7a99:L6d7a99:{c.instructions+=5;NFSU2_TR(0x6d7a99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7a9c:{NFSU2_TR(0x6d7a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7a9f:{NFSU2_TR(0x6d7a9f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6d7aa1:{NFSU2_TR(0x6d7aa1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7aa3:{NFSU2_TR(0x6d7aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7aa7:L6d7aa7:{c.instructions+=5;NFSU2_TR(0x6d7aa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7aa8:{NFSU2_TR(0x6d7aa8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6d7aac:{NFSU2_TR(0x6d7aac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7aad:{NFSU2_TR(0x6d7aad);
__builtin_memmove((R+4),(R+12),4);
}
B6d7aaf:{NFSU2_TR(0x6d7aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7ab4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d76a0u);}goto L6d76a0;}
}
B6d7ab4:L6d7ab4:{c.instructions+=3;NFSU2_TR(0x6d7ab4);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7ab8:{NFSU2_TR(0x6d7ab8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7aba:{NFSU2_TR(0x6d7aba);
if(r1(R+518)){{goto L6d7b16;}}
}
B6d7abc:L6d7abc:{c.instructions+=5;NFSU2_TR(0x6d7abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7ac0:{NFSU2_TR(0x6d7ac0);
__builtin_memmove((R+28),(R+0),4);
}
B6d7ac2:{NFSU2_TR(0x6d7ac2);
w4(R+24,u32(0x7c01bcull));
}
B6d7ac7:{NFSU2_TR(0x6d7ac7);
w4(R+4,u32(0xdull));
}
B6d7acc:{NFSU2_TR(0x6d7acc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d7ace:L6d7ace:{c.instructions+=1;NFSU2_TR(0x6d7ace);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d7ad0;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7aceu);}goto L6d7ace;}}
}
B6d7ad0:L6d7ad0:{c.instructions+=1;NFSU2_TR(0x6d7ad0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7b16;}}
}
B6d7ad2:L6d7ad2:{c.instructions+=3;NFSU2_TR(0x6d7ad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7ad3:{NFSU2_TR(0x6d7ad3);
w4(R+4,u32(0x8a7168ull));
}
B6d7ad8:{NFSU2_TR(0x6d7ad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7addull));
TAIL_STATIC(0x6d8780u,6d8);
}
B6d7add:L6d7add:{c.instructions+=3;NFSU2_TR(0x6d7add);
__builtin_memmove((R+24),(R+0),4);
}
B6d7adf:{NFSU2_TR(0x6d7adf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7ae1:{NFSU2_TR(0x6d7ae1);
if(r1(R+518)){{goto L6d7b16;}}
}
B6d7ae3:L6d7ae3:{c.instructions+=4;NFSU2_TR(0x6d7ae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7ae7:{NFSU2_TR(0x6d7ae7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7ae8:{NFSU2_TR(0x6d7ae8);
w4(R+4,u32(0x8a7168ull));
}
B6d7aed:{NFSU2_TR(0x6d7aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7af2ull));
TAIL_STATIC(0x6d87a0u,6d8);
}
B6d7af2:L6d7af2:{c.instructions+=7;NFSU2_TR(0x6d7af2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7af6:{NFSU2_TR(0x6d7af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7afa:{NFSU2_TR(0x6d7afa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7afb:{NFSU2_TR(0x6d7afb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7afc:{NFSU2_TR(0x6d7afc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7afd:{NFSU2_TR(0x6d7afd);
__builtin_memmove((R+28),(R+0),4);
}
B6d7aff:{NFSU2_TR(0x6d7aff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7b01ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7b01:L6d7b01:{c.instructions+=7;NFSU2_TR(0x6d7b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7b04:{NFSU2_TR(0x6d7b04);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7b08:{NFSU2_TR(0x6d7b08);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d7b0b:{NFSU2_TR(0x6d7b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7b0e:{NFSU2_TR(0x6d7b0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d7b11:{NFSU2_TR(0x6d7b11);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d7b15:{NFSU2_TR(0x6d7b15);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6d7b16:L6d7b16:{c.instructions+=6;NFSU2_TR(0x6d7b16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7b1a:{NFSU2_TR(0x6d7b1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7b1e:{NFSU2_TR(0x6d7b1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7b1f:{NFSU2_TR(0x6d7b1f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d7b21:{NFSU2_TR(0x6d7b21);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7b25:{NFSU2_TR(0x6d7b25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7aa7u);}goto L6d7aa7;}}
}
B6d7b27:L6d7b27:{c.instructions+=3;NFSU2_TR(0x6d7b27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7b29:{NFSU2_TR(0x6d7b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7b2d:{NFSU2_TR(0x6d7b2d);
__builtin_memmove((R+4),(R+4),4);
}
B6d7b30:L6d7b30:{c.instructions+=5;NFSU2_TR(0x6d7b30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b31:{NFSU2_TR(0x6d7b31);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d7b35:{NFSU2_TR(0x6d7b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b36:{NFSU2_TR(0x6d7b36);
__builtin_memmove((R+4),(R+12),4);
}
B6d7b38:{NFSU2_TR(0x6d7b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7b3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d76a0u);}goto L6d76a0;}
}
B6d7b3d:L6d7b3d:{c.instructions+=3;NFSU2_TR(0x6d7b3d);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7b41:{NFSU2_TR(0x6d7b41);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7b43:{NFSU2_TR(0x6d7b43);
if(r1(R+518)){{goto L6d7b9f;}}
}
B6d7b45:L6d7b45:{c.instructions+=5;NFSU2_TR(0x6d7b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7b49:{NFSU2_TR(0x6d7b49);
__builtin_memmove((R+28),(R+0),4);
}
B6d7b4b:{NFSU2_TR(0x6d7b4b);
w4(R+24,u32(0x7c01bcull));
}
B6d7b50:{NFSU2_TR(0x6d7b50);
w4(R+4,u32(0xdull));
}
B6d7b55:{NFSU2_TR(0x6d7b55);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d7b57:L6d7b57:{c.instructions+=1;NFSU2_TR(0x6d7b57);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6d7b59;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7b57u);}goto L6d7b57;}}
}
B6d7b59:L6d7b59:{c.instructions+=1;NFSU2_TR(0x6d7b59);
if(r1(R+518)){{goto L6d7b9f;}}
}
B6d7b5b:L6d7b5b:{c.instructions+=3;NFSU2_TR(0x6d7b5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b5c:{NFSU2_TR(0x6d7b5c);
w4(R+4,u32(0x8a7168ull));
}
B6d7b61:{NFSU2_TR(0x6d7b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7b66ull));
TAIL_STATIC(0x6d8780u,6d8);
}
B6d7b66:L6d7b66:{c.instructions+=3;NFSU2_TR(0x6d7b66);
__builtin_memmove((R+24),(R+0),4);
}
B6d7b68:{NFSU2_TR(0x6d7b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7b6a:{NFSU2_TR(0x6d7b6a);
if(r1(R+518)){{goto L6d7b9f;}}
}
B6d7b6c:L6d7b6c:{c.instructions+=4;NFSU2_TR(0x6d7b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7b70:{NFSU2_TR(0x6d7b70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b71:{NFSU2_TR(0x6d7b71);
w4(R+4,u32(0x8a7168ull));
}
B6d7b76:{NFSU2_TR(0x6d7b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7b7bull));
TAIL_STATIC(0x6d87a0u,6d8);
}
B6d7b7b:L6d7b7b:{c.instructions+=7;NFSU2_TR(0x6d7b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7b7f:{NFSU2_TR(0x6d7b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7b83:{NFSU2_TR(0x6d7b83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b84:{NFSU2_TR(0x6d7b84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b85:{NFSU2_TR(0x6d7b85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7b86:{NFSU2_TR(0x6d7b86);
__builtin_memmove((R+28),(R+0),4);
}
B6d7b88:{NFSU2_TR(0x6d7b88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7b8aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7b8a:L6d7b8a:{c.instructions+=7;NFSU2_TR(0x6d7b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7b8d:{NFSU2_TR(0x6d7b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7b91:{NFSU2_TR(0x6d7b91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d7b94:{NFSU2_TR(0x6d7b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7b97:{NFSU2_TR(0x6d7b97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d7b9a:{NFSU2_TR(0x6d7b9a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d7b9e:{NFSU2_TR(0x6d7b9e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6d7b9f:L6d7b9f:{c.instructions+=6;NFSU2_TR(0x6d7b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7ba3:{NFSU2_TR(0x6d7ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7ba7:{NFSU2_TR(0x6d7ba7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7ba8:{NFSU2_TR(0x6d7ba8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d7baa:{NFSU2_TR(0x6d7baa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7bae:{NFSU2_TR(0x6d7bae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7b30u);}goto L6d7b30;}}
}
B6d7bb0:L6d7bb0:{c.instructions+=7;NFSU2_TR(0x6d7bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7bb1:{NFSU2_TR(0x6d7bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7bb2:{NFSU2_TR(0x6d7bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7bb5:{NFSU2_TR(0x6d7bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d7bb6:{NFSU2_TR(0x6d7bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d7bb7:{NFSU2_TR(0x6d7bb7);
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
B6d7bba:{NFSU2_TR(0x6d7bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7bbb:L6d7bbb:{c.instructions+=7;NFSU2_TR(0x6d7bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7bbe:{NFSU2_TR(0x6d7bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d7bbf:{NFSU2_TR(0x6d7bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d7bc0:{NFSU2_TR(0x6d7bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d7bc1:{NFSU2_TR(0x6d7bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d7bc2:{NFSU2_TR(0x6d7bc2);
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
B6d7bc5:{NFSU2_TR(0x6d7bc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d7bd0:L6d7bd0:{c.instructions+=10;NFSU2_TR(0x6d7bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xbcull))));
}
B6d7bd6:{NFSU2_TR(0x6d7bd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7bd7:{NFSU2_TR(0x6d7bd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7bd8:{NFSU2_TR(0x6d7bd8);
__builtin_memmove((R+28),(R+4),4);
}
B6d7bda:{NFSU2_TR(0x6d7bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d7bdc:{NFSU2_TR(0x6d7bdc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d7bde:{NFSU2_TR(0x6d7bde);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d7be0:{NFSU2_TR(0x6d7be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7be4:{NFSU2_TR(0x6d7be4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7be8:{NFSU2_TR(0x6d7be8);
if(r1(R+518)){TAIL_STATIC(0x6d8068u,6d8);}
}
B6d7bee:L6d7bee:{c.instructions+=3;NFSU2_TR(0x6d7bee);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7bf1:{NFSU2_TR(0x6d7bf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7bf3:{NFSU2_TR(0x6d7bf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d8068u,6d8);}
}
B6d7bf9:L6d7bf9:{c.instructions+=11;NFSU2_TR(0x6d7bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7bfc:{NFSU2_TR(0x6d7bfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7bfd:{NFSU2_TR(0x6d7bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d7c00:{NFSU2_TR(0x6d7c00);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7c04:{NFSU2_TR(0x6d7c04);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+4))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6d7c08:{NFSU2_TR(0x6d7c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c0c:{NFSU2_TR(0x6d7c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c10:{NFSU2_TR(0x6d7c10);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d7c14:{NFSU2_TR(0x6d7c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c18:{NFSU2_TR(0x6d7c18);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c1c:{NFSU2_TR(0x6d7c1c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d805cu,6d8);}
}
B6d7c22:L6d7c22:{c.instructions+=6;NFSU2_TR(0x6d7c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d7c25:{NFSU2_TR(0x6d7c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c29:{NFSU2_TR(0x6d7c29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7c2a:{NFSU2_TR(0x6d7c2a);
__builtin_memmove((R+12),(R+12),4);
}
B6d7c30:{NFSU2_TR(0x6d7c30);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d7c34:{NFSU2_TR(0x6d7c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d801cu,6d8);}
}
B6d7c3a:L6d7c3a:{c.instructions+=13;NFSU2_TR(0x6d7c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d7c3c:{NFSU2_TR(0x6d7c3c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6d7c3d:{NFSU2_TR(0x6d7c3d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B6d7c40:{NFSU2_TR(0x6d7c40);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6d7c42:{NFSU2_TR(0x6d7c42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7c45:{NFSU2_TR(0x6d7c45);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c49:{NFSU2_TR(0x6d7c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7c4c:{NFSU2_TR(0x6d7c4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6d7c4f:{NFSU2_TR(0x6d7c4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7c51:{NFSU2_TR(0x6d7c51);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c55:{NFSU2_TR(0x6d7c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7c58:{NFSU2_TR(0x6d7c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c5c:{NFSU2_TR(0x6d7c5c);
if(r1(R+518)){TAIL_STATIC(0x6d801cu,6d8);}
}
B6d7c62:L6d7c62:{c.instructions+=2;NFSU2_TR(0x6d7c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c66:{NFSU2_TR(0x6d7c66);
{goto L6d7c70;}
}
B6d7c70:L6d7c70:{c.instructions+=12;NFSU2_TR(0x6d7c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7c74:{NFSU2_TR(0x6d7c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d7c77:{NFSU2_TR(0x6d7c77);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7c7b:{NFSU2_TR(0x6d7c7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d7c7e:{NFSU2_TR(0x6d7c7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d7c81:{NFSU2_TR(0x6d7c81);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6d7c83:{NFSU2_TR(0x6d7c83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7c85:{NFSU2_TR(0x6d7c85);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7c88:{NFSU2_TR(0x6d7c88);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6d7c8a:{NFSU2_TR(0x6d7c8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7c8e:{NFSU2_TR(0x6d7c8e);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B6d7c91:{NFSU2_TR(0x6d7c91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d7e7d;}}
}
B6d7c97:L6d7c97:{c.instructions+=2;NFSU2_TR(0x6d7c97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d7c9a:{NFSU2_TR(0x6d7c9a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d7e7d;}}
}
B6d7ca0:L6d7ca0:{c.instructions+=3;NFSU2_TR(0x6d7ca0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6d7ca4:{NFSU2_TR(0x6d7ca4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7ca6:{NFSU2_TR(0x6d7ca6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d7cb8;}}
}
B6d7ca8:L6d7ca8:{c.instructions+=4;NFSU2_TR(0x6d7ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7cac:{NFSU2_TR(0x6d7cac);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6d7cb0:{NFSU2_TR(0x6d7cb0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d7cb2:{NFSU2_TR(0x6d7cb2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6d7ec0;}}
}
B6d7cb8:L6d7cb8:{c.instructions+=3;NFSU2_TR(0x6d7cb8);
__builtin_memmove((R+28),gp(0x8a7110),4);
}
B6d7cbe:{NFSU2_TR(0x6d7cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7cc0:{NFSU2_TR(0x6d7cc0);
if(r1(R+518)){{goto L6d7cdf;}}
}
B6d7cc2:L6d7cc2:{c.instructions+=2;NFSU2_TR(0x6d7cc2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d7cc4:{NFSU2_TR(0x6d7cc4);
if(r1(R+518)){{goto L6d7cd9;}}
}
B6d7cc6:L6d7cc6:{c.instructions+=5;NFSU2_TR(0x6d7cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7cc9:{NFSU2_TR(0x6d7cc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B6d7ccb:{NFSU2_TR(0x6d7ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7ccc:{NFSU2_TR(0x6d7ccc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7ccd:{NFSU2_TR(0x6d7ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7cd2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d77c0u);}goto L6d77c0;}
}
B6d7cd2:L6d7cd2:{c.instructions+=3;NFSU2_TR(0x6d7cd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7cd5:{NFSU2_TR(0x6d7cd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7cd7:{NFSU2_TR(0x6d7cd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7d1a;}}
}
B6d7cd9:L6d7cd9:{c.instructions+=3;NFSU2_TR(0x6d7cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d7cdb:{NFSU2_TR(0x6d7cdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7cdd:{NFSU2_TR(0x6d7cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7cc2u);}goto L6d7cc2;}}
}
B6d7cdf:L6d7cdf:{c.instructions+=3;NFSU2_TR(0x6d7cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7ce5:{NFSU2_TR(0x6d7ce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7ce7:{NFSU2_TR(0x6d7ce7);
if(r1(R+518)){{goto L6d7d33;}}
}
B6d7ce9:L6d7ce9:{c.instructions+=6;NFSU2_TR(0x6d7ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7cec:{NFSU2_TR(0x6d7cec);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d7cf0:{NFSU2_TR(0x6d7cf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7cf1:{NFSU2_TR(0x6d7cf1);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+0)));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d7cf3:{NFSU2_TR(0x6d7cf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7cf4:{NFSU2_TR(0x6d7cf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7cf6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7cf6:L6d7cf6:{c.instructions+=4;NFSU2_TR(0x6d7cf6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d7cfa:{NFSU2_TR(0x6d7cfa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7cfd:{NFSU2_TR(0x6d7cfd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7cff:{NFSU2_TR(0x6d7cff);
if(r1(R+518)){{goto L6d7d33;}}
}
B6d7d01:L6d7d01:{c.instructions+=6;NFSU2_TR(0x6d7d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7d05:{NFSU2_TR(0x6d7d05);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6d7d0b:{NFSU2_TR(0x6d7d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d7d0e:{NFSU2_TR(0x6d7d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7d11:{NFSU2_TR(0x6d7d11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7d15:{NFSU2_TR(0x6d7d15);
{goto L6d7e6f;}
}
B6d7d1a:L6d7d1a:{c.instructions+=6;NFSU2_TR(0x6d7d1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7d1e:{NFSU2_TR(0x6d7d1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6d7d24:{NFSU2_TR(0x6d7d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d7d27:{NFSU2_TR(0x6d7d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7d2a:{NFSU2_TR(0x6d7d2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7d2e:{NFSU2_TR(0x6d7d2e);
{goto L6d7e6f;}
}
B6d7d33:L6d7d33:{c.instructions+=8;NFSU2_TR(0x6d7d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d7d35:{NFSU2_TR(0x6d7d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d7d38:{NFSU2_TR(0x6d7d38);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d7d3c:{NFSU2_TR(0x6d7d3c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6d7d3e:{NFSU2_TR(0x6d7d3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7d3f:{NFSU2_TR(0x6d7d3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7d40:{NFSU2_TR(0x6d7d40);
w4(R+4,u32(0x8a7114ull));
}
B6d7d45:{NFSU2_TR(0x6d7d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7d4aull));
TAIL_STATIC(0x6d8550u,6d8);
}
B6d7d4a:L6d7d4a:{c.instructions+=3;NFSU2_TR(0x6d7d4a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d7d4e:{NFSU2_TR(0x6d7d4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7d50:{NFSU2_TR(0x6d7d50);
if(r1(R+518)){{goto L6d7d6b;}}
}
B6d7d52:L6d7d52:{c.instructions+=6;NFSU2_TR(0x6d7d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7d56:{NFSU2_TR(0x6d7d56);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6d7d5c:{NFSU2_TR(0x6d7d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6d7d5f:{NFSU2_TR(0x6d7d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7d62:{NFSU2_TR(0x6d7d62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7d66:{NFSU2_TR(0x6d7d66);
{goto L6d7e6f;}
}
B6d7d6b:L6d7d6b:{c.instructions+=5;NFSU2_TR(0x6d7d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d7d6d:{NFSU2_TR(0x6d7d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7d70:{NFSU2_TR(0x6d7d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6d7d73:{NFSU2_TR(0x6d7d73);
__builtin_memmove((R+0),(R+20),4);
}
B6d7d75:{NFSU2_TR(0x6d7d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d7d78:L6d7d78:{c.instructions+=4;NFSU2_TR(0x6d7d78);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d7d7a:{NFSU2_TR(0x6d7d7a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7d7b:{NFSU2_TR(0x6d7d7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7d7d:{NFSU2_TR(0x6d7d7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7d78u);}goto L6d7d78;}}
}
B6d7d7f:L6d7d7f:{c.instructions+=4;NFSU2_TR(0x6d7d7f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d7d81:{NFSU2_TR(0x6d7d81);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6d7d85:{NFSU2_TR(0x6d7d85);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x7full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6d7d88:{NFSU2_TR(0x6d7d88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7d8d;}}
}
B6d7d8a:L6d7d8a:{c.instructions+=2;NFSU2_TR(0x6d7d8a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6d7d8b:{NFSU2_TR(0x6d7d8b);
{goto L6d7d8e;}
}
B6d7d8d:L6d7d8d:{c.instructions+=1;NFSU2_TR(0x6d7d8d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6d7d8e:L6d7d8e:{c.instructions+=2;NFSU2_TR(0x6d7d8e);
w4(R+0,u32(0x7bffa4ull));
}
B6d7d93:{NFSU2_TR(0x6d7d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d7d96:L6d7d96:{c.instructions+=4;NFSU2_TR(0x6d7d96);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d7d98:{NFSU2_TR(0x6d7d98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7d99:{NFSU2_TR(0x6d7d99);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7d9b:{NFSU2_TR(0x6d7d9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7d96u);}goto L6d7d96;}}
}
B6d7d9d:L6d7d9d:{c.instructions+=5;NFSU2_TR(0x6d7d9d);
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
B6d7d9f:{NFSU2_TR(0x6d7d9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7da0:{NFSU2_TR(0x6d7da0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7da1:{NFSU2_TR(0x6d7da1);
u8 U[4];
w4(U+0,u32(0x7bffa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7da6:{NFSU2_TR(0x6d7da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7dabull));
TAIL_STATIC(0x75f1d0u,75f);
}
B6d7dab:L6d7dab:{c.instructions+=3;NFSU2_TR(0x6d7dab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d7dae:{NFSU2_TR(0x6d7dae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7db0:{NFSU2_TR(0x6d7db0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7ed1;}}
}
B6d7db6:L6d7db6:{c.instructions+=3;NFSU2_TR(0x6d7db6);
w4(R+0,u32(0x7bffa4ull));
}
B6d7dbb:{NFSU2_TR(0x6d7dbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d7dbe:{NFSU2_TR(0x6d7dbe);
__builtin_memmove((R+28),(R+28),4);
}
B6d7dc0:L6d7dc0:{c.instructions+=4;NFSU2_TR(0x6d7dc0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d7dc2:{NFSU2_TR(0x6d7dc2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7dc3:{NFSU2_TR(0x6d7dc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7dc5:{NFSU2_TR(0x6d7dc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7dc0u);}goto L6d7dc0;}}
}
B6d7dc7:L6d7dc7:{c.instructions+=5;NFSU2_TR(0x6d7dc7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d7dc9:{NFSU2_TR(0x6d7dc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7dca:{NFSU2_TR(0x6d7dca);
w4(R+4,u32(0x8a7140ull));
}
B6d7dcf:{NFSU2_TR(0x6d7dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7dd3:{NFSU2_TR(0x6d7dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7dd8ull));
TAIL_STATIC(0x6d8780u,6d8);
}
B6d7dd8:L6d7dd8:{c.instructions+=3;NFSU2_TR(0x6d7dd8);
__builtin_memmove((R+28),(R+0),4);
}
B6d7dda:{NFSU2_TR(0x6d7dda);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7ddc:{NFSU2_TR(0x6d7ddc);
if(r1(R+518)){{goto L6d7ed1;}}
}
B6d7de2:L6d7de2:{c.instructions+=3;NFSU2_TR(0x6d7de2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7de3:{NFSU2_TR(0x6d7de3);
w4(R+4,u32(0x8a7140ull));
}
B6d7de8:{NFSU2_TR(0x6d7de8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7dedull));
TAIL_STATIC(0x6d87a0u,6d8);
}
B6d7ded:L6d7ded:{c.instructions+=13;NFSU2_TR(0x6d7ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7df1:{NFSU2_TR(0x6d7df1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7df2:{NFSU2_TR(0x6d7df2);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d7df6:{NFSU2_TR(0x6d7df6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7df7:{NFSU2_TR(0x6d7df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7dfb:{NFSU2_TR(0x6d7dfb);
__builtin_memmove((R+12),(R+0),4);
}
B6d7dfd:{NFSU2_TR(0x6d7dfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d7e01:{NFSU2_TR(0x6d7e01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e02:{NFSU2_TR(0x6d7e02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e03:{NFSU2_TR(0x6d7e03);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+20)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d7e05:{NFSU2_TR(0x6d7e05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e06:{NFSU2_TR(0x6d7e06);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7e0b:{NFSU2_TR(0x6d7e0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7e0dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7e0d:L6d7e0d:{c.instructions+=5;NFSU2_TR(0x6d7e0d);
__builtin_memmove((R+28),(R+0),4);
}
B6d7e0f:{NFSU2_TR(0x6d7e0f);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7e13:{NFSU2_TR(0x6d7e13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6d7e16:{NFSU2_TR(0x6d7e16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7e18:{NFSU2_TR(0x6d7e18);
if(r1(R+518)){{goto L6d7e53;}}
}
B6d7e1a:L6d7e1a:{c.instructions+=2;NFSU2_TR(0x6d7e1a);
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
B6d7e1c:{NFSU2_TR(0x6d7e1c);
if(r1(R+518)){{goto L6d7e53;}}
}
B6d7e1e:L6d7e1e:{c.instructions+=3;NFSU2_TR(0x6d7e1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e20:{NFSU2_TR(0x6d7e20);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e22:{NFSU2_TR(0x6d7e22);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7e28ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d7e28:L6d7e28:{c.instructions+=3;NFSU2_TR(0x6d7e28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7e2b:{NFSU2_TR(0x6d7e2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7e2d:{NFSU2_TR(0x6d7e2d);
if(r1(R+518)){{goto L6d7e44;}}
}
B6d7e2f:L6d7e2f:{c.instructions+=6;NFSU2_TR(0x6d7e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7e33:{NFSU2_TR(0x6d7e33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d7e35:{NFSU2_TR(0x6d7e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7e38:{NFSU2_TR(0x6d7e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7e3b:{NFSU2_TR(0x6d7e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d7e42:{NFSU2_TR(0x6d7e42);
{goto L6d7e46;}
}
B6d7e44:L6d7e44:{c.instructions+=1;NFSU2_TR(0x6d7e44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7e46:L6d7e46:{c.instructions+=4;NFSU2_TR(0x6d7e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7e4a:{NFSU2_TR(0x6d7e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7e4d:{NFSU2_TR(0x6d7e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7e50:{NFSU2_TR(0x6d7e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7e53:L6d7e53:{c.instructions+=7;NFSU2_TR(0x6d7e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7e57:{NFSU2_TR(0x6d7e57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d7e5b:{NFSU2_TR(0x6d7e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d7e5f:{NFSU2_TR(0x6d7e5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6d7e65:{NFSU2_TR(0x6d7e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B6d7e68:{NFSU2_TR(0x6d7e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7e6b:{NFSU2_TR(0x6d7e6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7e6f:L6d7e6f:{c.instructions+=4;NFSU2_TR(0x6d7e6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7e71:{NFSU2_TR(0x6d7e71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7e74:{NFSU2_TR(0x6d7e74);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B6d7e77:{NFSU2_TR(0x6d7e77);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7c97u);}goto L6d7c97;}}
}
B6d7e7d:L6d7e7d:{c.instructions+=11;NFSU2_TR(0x6d7e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7e80:{NFSU2_TR(0x6d7e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d7e82:{NFSU2_TR(0x6d7e82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7e84:{NFSU2_TR(0x6d7e84);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7e87:{NFSU2_TR(0x6d7e87);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6d7e89:{NFSU2_TR(0x6d7e89);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B6d7e8c:{NFSU2_TR(0x6d7e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e8d:{NFSU2_TR(0x6d7e8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e8e:{NFSU2_TR(0x6d7e8e);
u8 U[4];
w4(U+0,u32(0x7c0570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e93:{NFSU2_TR(0x6d7e93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7e95:{NFSU2_TR(0x6d7e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7e9aull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7e9a:L6d7e9a:{c.instructions+=1;NFSU2_TR(0x6d7e9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d7e9d:L6d7e9d:{c.instructions+=8;NFSU2_TR(0x6d7e9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7ea1:{NFSU2_TR(0x6d7ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d7ea3:{NFSU2_TR(0x6d7ea3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6d7ea7:{NFSU2_TR(0x6d7ea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d7eab:{NFSU2_TR(0x6d7eab);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d7eae:{NFSU2_TR(0x6d7eae);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B6d7eb0:{NFSU2_TR(0x6d7eb0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d7eb3:{NFSU2_TR(0x6d7eb3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d7fe6;}}
}
B6d7eb9:L6d7eb9:{c.instructions+=1;NFSU2_TR(0x6d7eb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6d8074ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d7ec0:L6d7ec0:{c.instructions+=5;NFSU2_TR(0x6d7ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7ec4:{NFSU2_TR(0x6d7ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6d7ec7:{NFSU2_TR(0x6d7ec7);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6d7ecb:{NFSU2_TR(0x6d7ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7ecf:{NFSU2_TR(0x6d7ecf);
{goto L6d7f50;}
}
B6d7ed1:L6d7ed1:{c.instructions+=3;NFSU2_TR(0x6d7ed1);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d7ed5:{NFSU2_TR(0x6d7ed5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d7ed7:{NFSU2_TR(0x6d7ed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d7ef9;}}
}
B6d7ed9:L6d7ed9:{c.instructions+=3;NFSU2_TR(0x6d7ed9);
u8 U[4];
w4(U+0,u32(0x7c0544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7ede:{NFSU2_TR(0x6d7ede);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7ee0:{NFSU2_TR(0x6d7ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7ee5ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7ee5:L6d7ee5:{c.instructions+=3;NFSU2_TR(0x6d7ee5);
u8 U[4];
w4(U+0,u32(0x7c04e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7eea:{NFSU2_TR(0x6d7eea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7eec:{NFSU2_TR(0x6d7eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7ef1ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7ef1:L6d7ef1:{c.instructions+=2;NFSU2_TR(0x6d7ef1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d7ef4:{NFSU2_TR(0x6d7ef4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d7ef9:L6d7ef9:{c.instructions+=2;NFSU2_TR(0x6d7ef9);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x20ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6d7efe:{NFSU2_TR(0x6d7efe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d7f4c;}}
}
B6d7f00:L6d7f00:{c.instructions+=4;NFSU2_TR(0x6d7f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7f04:{NFSU2_TR(0x6d7f04);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d7f06:{NFSU2_TR(0x6d7f06);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7f08:{NFSU2_TR(0x6d7f08);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d7f24;}}
}
B6d7f0a:L6d7f0a:{c.instructions+=4;NFSU2_TR(0x6d7f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7f0e:{NFSU2_TR(0x6d7f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7f11:{NFSU2_TR(0x6d7f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d7f13:{NFSU2_TR(0x6d7f13);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6d7f15:L6d7f15:{c.instructions+=2;NFSU2_TR(0x6d7f15);
u8 U[24];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6d7f19:{NFSU2_TR(0x6d7f19);
if(r1(R+518)){{goto L6d7f4c;}}
}
B6d7f1b:L6d7f1b:{c.instructions+=4;NFSU2_TR(0x6d7f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7f1f:{NFSU2_TR(0x6d7f1f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d7f20:{NFSU2_TR(0x6d7f20);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d7f22:{NFSU2_TR(0x6d7f22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7f15u);}goto L6d7f15;}}
}
B6d7f24:L6d7f24:{c.instructions+=12;NFSU2_TR(0x6d7f24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7f28:{NFSU2_TR(0x6d7f28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d7f2a:{NFSU2_TR(0x6d7f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7f2d:{NFSU2_TR(0x6d7f2d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6d7f2f:{NFSU2_TR(0x6d7f2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7f33:{NFSU2_TR(0x6d7f33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f34:{NFSU2_TR(0x6d7f34);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6d7f38:{NFSU2_TR(0x6d7f38);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d7f39:{NFSU2_TR(0x6d7f39);
u8 U[4];
w4(U+0,u32(0x7c04d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f3e:{NFSU2_TR(0x6d7f3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f40:{NFSU2_TR(0x6d7f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7f44:{NFSU2_TR(0x6d7f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7f49ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7f49:L6d7f49:{c.instructions+=1;NFSU2_TR(0x6d7f49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d7f4c:L6d7f4c:{c.instructions+=1;NFSU2_TR(0x6d7f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d7f50:L6d7f50:{c.instructions+=6;NFSU2_TR(0x6d7f50);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7f54:{NFSU2_TR(0x6d7f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d7f57:{NFSU2_TR(0x6d7f57);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6d7f59:{NFSU2_TR(0x6d7f59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d7f5d:{NFSU2_TR(0x6d7f5d);
__builtin_memmove((R+20),(R+0),4);
}
B6d7f5f:{NFSU2_TR(0x6d7f5f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d7e9du);}goto L6d7e9d;}
}
B6d7f64:L6d7f64:{c.instructions+=3;NFSU2_TR(0x6d7f64);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6d7f66:{NFSU2_TR(0x6d7f66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d7f68:{NFSU2_TR(0x6d7f68);
{goto L6d7ff6;}
}
B6d7f6d:L6d7f6d:{c.instructions+=7;NFSU2_TR(0x6d7f6d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ffffffull))));
}
B6d7f72:{NFSU2_TR(0x6d7f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6d7f76:{NFSU2_TR(0x6d7f76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d7f79:{NFSU2_TR(0x6d7f79);
__builtin_memmove((R+8),(R+0),4);
}
B6d7f7b:{NFSU2_TR(0x6d7f7b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+28))));
}
B6d7f7d:{NFSU2_TR(0x6d7f7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xfc000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d7f83:{NFSU2_TR(0x6d7f83);
if(r1(R+518)){{goto L6d7f96;}}
}
B6d7f85:L6d7f85:{c.instructions+=5;NFSU2_TR(0x6d7f85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f86:{NFSU2_TR(0x6d7f86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f87:{NFSU2_TR(0x6d7f87);
u8 U[4];
w4(U+0,u32(0x7c0470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f8c:{NFSU2_TR(0x6d7f8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7f8e:{NFSU2_TR(0x6d7f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7f93ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7f93:L6d7f93:{c.instructions+=1;NFSU2_TR(0x6d7f93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d7f96:L6d7f96:{c.instructions+=8;NFSU2_TR(0x6d7f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d7f98:{NFSU2_TR(0x6d7f98);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6d7f9b:{NFSU2_TR(0x6d7f9b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B6d7f9d:{NFSU2_TR(0x6d7f9d);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x3ffffffull))));
}
B6d7fa3:{NFSU2_TR(0x6d7fa3);
__builtin_memmove((R+0),(R+8),4);
}
B6d7fa5:{NFSU2_TR(0x6d7fa5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B6d7fa7:{NFSU2_TR(0x6d7fa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d7fa9:{NFSU2_TR(0x6d7fa9);
{goto L6d7ff6;}
}
B6d7fab:L6d7fab:{c.instructions+=3;NFSU2_TR(0x6d7fab);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r4(U+0))));
}
B6d7fae:{NFSU2_TR(0x6d7fae);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+20))));
s2(u32(r4(R+24)),r2(U+0));
}
B6d7fb1:{NFSU2_TR(0x6d7fb1);
{goto L6d7ff6;}
}
B6d7fb3:L6d7fb3:{c.instructions+=3;NFSU2_TR(0x6d7fb3);
u8 U[4];
w4(U+0,u32(0x7c0434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fb8:{NFSU2_TR(0x6d7fb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fba:{NFSU2_TR(0x6d7fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7fbfull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7fbf:L6d7fbf:{c.instructions+=2;NFSU2_TR(0x6d7fbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7fc2:{NFSU2_TR(0x6d7fc2);
{goto L6d7ff6;}
}
B6d7fc4:L6d7fc4:{c.instructions+=3;NFSU2_TR(0x6d7fc4);
u8 U[4];
w4(U+0,u32(0x7c03fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fc9:{NFSU2_TR(0x6d7fc9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fcb:{NFSU2_TR(0x6d7fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7fd0ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7fd0:L6d7fd0:{c.instructions+=2;NFSU2_TR(0x6d7fd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7fd3:{NFSU2_TR(0x6d7fd3);
{goto L6d7ff6;}
}
B6d7fd5:L6d7fd5:{c.instructions+=3;NFSU2_TR(0x6d7fd5);
u8 U[4];
w4(U+0,u32(0x7c03c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fda:{NFSU2_TR(0x6d7fda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fdc:{NFSU2_TR(0x6d7fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7fe1ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7fe1:L6d7fe1:{c.instructions+=2;NFSU2_TR(0x6d7fe1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d7fe4:{NFSU2_TR(0x6d7fe4);
{goto L6d7ff6;}
}
B6d7fe6:L6d7fe6:{c.instructions+=4;NFSU2_TR(0x6d7fe6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fe7:{NFSU2_TR(0x6d7fe7);
u8 U[4];
w4(U+0,u32(0x7c0394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fec:{NFSU2_TR(0x6d7fec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d7fee:{NFSU2_TR(0x6d7fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d7ff3ull));
TAIL_STATIC(0x6d8710u,6d8);
}
B6d7ff3:L6d7ff3:{c.instructions+=1;NFSU2_TR(0x6d7ff3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6d7ff6:L6d7ff6:{c.instructions+=3;NFSU2_TR(0x6d7ff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d7ffa:{NFSU2_TR(0x6d7ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d7ffe:{NFSU2_TR(0x6d7ffe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
TAIL_STATIC(0x6d8001u,6d8);
}
XIT:NFSU2_TR_EXIT(0x6d7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
