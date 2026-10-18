#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a1(u8* __restrict R,Cpu& c);
u32 body_6a2(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a7(u8* __restrict R,Cpu& c);
u32 page_6a7(Cpu& c){return body_6a7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a7003:goto L6a7003;
case 0x6a7005:c.instructions+=1;goto B6a7005;
case 0x6a700b:goto L6a700b;
case 0x6a700d:c.instructions+=2;goto B6a700d;
case 0x6a7010:c.instructions+=1;goto B6a7010;
case 0x6a7012:goto L6a7012;
case 0x6a7015:c.instructions+=8;goto B6a7015;
case 0x6a7018:c.instructions+=7;goto B6a7018;
case 0x6a701c:c.instructions+=6;goto B6a701c;
case 0x6a701f:c.instructions+=5;goto B6a701f;
case 0x6a7022:c.instructions+=4;goto B6a7022;
case 0x6a7026:c.instructions+=3;goto B6a7026;
case 0x6a7027:c.instructions+=2;goto B6a7027;
case 0x6a702a:c.instructions+=1;goto B6a702a;
case 0x6a702c:goto L6a702c;
case 0x6a7030:c.instructions+=4;goto B6a7030;
case 0x6a7033:c.instructions+=3;goto B6a7033;
case 0x6a7036:c.instructions+=2;goto B6a7036;
case 0x6a7039:c.instructions+=1;goto B6a7039;
case 0x6a703f:goto L6a703f;
case 0x6a7042:c.instructions+=5;goto B6a7042;
case 0x6a7045:c.instructions+=4;goto B6a7045;
case 0x6a7048:c.instructions+=3;goto B6a7048;
case 0x6a704a:c.instructions+=2;goto B6a704a;
case 0x6a704f:c.instructions+=1;goto B6a704f;
case 0x6a7055:goto L6a7055;
case 0x6a7057:c.instructions+=9;goto B6a7057;
case 0x6a705a:c.instructions+=8;goto B6a705a;
case 0x6a7060:c.instructions+=7;goto B6a7060;
case 0x6a7062:c.instructions+=6;goto B6a7062;
case 0x6a7064:c.instructions+=5;goto B6a7064;
case 0x6a7067:c.instructions+=4;goto B6a7067;
case 0x6a706a:c.instructions+=3;goto B6a706a;
case 0x6a706c:c.instructions+=2;goto B6a706c;
case 0x6a706f:c.instructions+=1;goto B6a706f;
case 0x6a7075:goto L6a7075;
case 0x6a7078:goto L6a7078;
case 0x6a707a:c.instructions+=2;goto B6a707a;
case 0x6a707d:c.instructions+=1;goto B6a707d;
case 0x6a7083:goto L6a7083;
case 0x6a7086:c.instructions+=2;goto B6a7086;
case 0x6a7089:c.instructions+=1;goto B6a7089;
case 0x6a708c:goto L6a708c;
case 0x6a708e:c.instructions+=7;goto B6a708e;
case 0x6a7091:c.instructions+=6;goto B6a7091;
case 0x6a7094:c.instructions+=5;goto B6a7094;
case 0x6a7097:c.instructions+=4;goto B6a7097;
case 0x6a709a:c.instructions+=3;goto B6a709a;
case 0x6a709d:c.instructions+=2;goto B6a709d;
case 0x6a70a1:c.instructions+=1;goto B6a70a1;
case 0x6a70a3:goto L6a70a3;
case 0x6a70a4:c.instructions+=2;goto B6a70a4;
case 0x6a70a6:c.instructions+=1;goto B6a70a6;
case 0x6a70ab:goto L6a70ab;
case 0x6a70ad:c.instructions+=1;goto B6a70ad;
case 0x6a70af:goto L6a70af;
case 0x6a70b2:goto L6a70b2;
case 0x6a70b5:c.instructions+=2;goto B6a70b5;
case 0x6a70b8:c.instructions+=1;goto B6a70b8;
case 0x6a70ba:goto L6a70ba;
case 0x6a70be:c.instructions+=1;goto B6a70be;
case 0x6a70c4:goto L6a70c4;
case 0x6a70c7:c.instructions+=2;goto B6a70c7;
case 0x6a70ca:c.instructions+=1;goto B6a70ca;
case 0x6a70cc:goto L6a70cc;
case 0x6a70ce:c.instructions+=5;goto B6a70ce;
case 0x6a70cf:c.instructions+=4;goto B6a70cf;
case 0x6a70d4:c.instructions+=3;goto B6a70d4;
case 0x6a70d9:c.instructions+=2;goto B6a70d9;
case 0x6a70db:c.instructions+=1;goto B6a70db;
case 0x6a70e0:goto L6a70e0;
case 0x6a70e2:c.instructions+=2;goto B6a70e2;
case 0x6a70e5:c.instructions+=1;goto B6a70e5;
case 0x6a70eb:goto L6a70eb;
case 0x6a70ee:c.instructions+=7;goto B6a70ee;
case 0x6a70f4:c.instructions+=6;goto B6a70f4;
case 0x6a70f5:c.instructions+=5;goto B6a70f5;
case 0x6a70f6:c.instructions+=4;goto B6a70f6;
case 0x6a70fb:c.instructions+=3;goto B6a70fb;
case 0x6a7100:c.instructions+=2;goto B6a7100;
case 0x6a7101:c.instructions+=1;goto B6a7101;
case 0x6a7106:goto L6a7106;
case 0x6a7108:c.instructions+=1;goto B6a7108;
case 0x6a710e:goto L6a710e;
case 0x6a7114:c.instructions+=6;goto B6a7114;
case 0x6a7117:c.instructions+=5;goto B6a7117;
case 0x6a711a:c.instructions+=4;goto B6a711a;
case 0x6a711b:c.instructions+=3;goto B6a711b;
case 0x6a711d:c.instructions+=2;goto B6a711d;
case 0x6a7120:c.instructions+=1;goto B6a7120;
case 0x6a7125:goto L6a7125;
case 0x6a7129:c.instructions+=2;goto B6a7129;
case 0x6a712d:c.instructions+=1;goto B6a712d;
case 0x6a7130:goto L6a7130;
case 0x6a7133:c.instructions+=15;goto B6a7133;
case 0x6a7136:c.instructions+=14;goto B6a7136;
case 0x6a7138:c.instructions+=13;goto B6a7138;
case 0x6a713b:c.instructions+=12;goto B6a713b;
case 0x6a713d:c.instructions+=11;goto B6a713d;
case 0x6a713f:c.instructions+=10;goto B6a713f;
case 0x6a7142:c.instructions+=9;goto B6a7142;
case 0x6a7145:c.instructions+=8;goto B6a7145;
case 0x6a7148:c.instructions+=7;goto B6a7148;
case 0x6a714b:c.instructions+=6;goto B6a714b;
case 0x6a714e:c.instructions+=5;goto B6a714e;
case 0x6a7151:c.instructions+=4;goto B6a7151;
case 0x6a7154:c.instructions+=3;goto B6a7154;
case 0x6a7158:c.instructions+=2;goto B6a7158;
case 0x6a715b:c.instructions+=1;goto B6a715b;
case 0x6a7161:goto L6a7161;
case 0x6a7162:c.instructions+=2;goto B6a7162;
case 0x6a7164:c.instructions+=1;goto B6a7164;
case 0x6a7169:goto L6a7169;
case 0x6a716b:c.instructions+=1;goto B6a716b;
case 0x6a7171:goto L6a7171;
case 0x6a7174:c.instructions+=3;goto B6a7174;
case 0x6a7177:c.instructions+=2;goto B6a7177;
case 0x6a717a:c.instructions+=1;goto B6a717a;
case 0x6a717c:goto L6a717c;
case 0x6a717f:c.instructions+=5;goto B6a717f;
case 0x6a7182:c.instructions+=4;goto B6a7182;
case 0x6a7184:c.instructions+=3;goto B6a7184;
case 0x6a7189:c.instructions+=2;goto B6a7189;
case 0x6a718e:c.instructions+=1;goto B6a718e;
case 0x6a7194:goto L6a7194;
case 0x6a7197:c.instructions+=2;goto B6a7197;
case 0x6a719a:c.instructions+=1;goto B6a719a;
case 0x6a719c:goto L6a719c;
case 0x6a719f:c.instructions+=2;goto B6a719f;
case 0x6a71a1:c.instructions+=1;goto B6a71a1;
case 0x6a71a6:goto L6a71a6;
case 0x6a71ac:c.instructions+=8;goto B6a71ac;
case 0x6a71ae:c.instructions+=7;goto B6a71ae;
case 0x6a71af:c.instructions+=6;goto B6a71af;
case 0x6a71b0:c.instructions+=5;goto B6a71b0;
case 0x6a71b3:c.instructions+=4;goto B6a71b3;
case 0x6a71b6:c.instructions+=3;goto B6a71b6;
case 0x6a71b9:c.instructions+=2;goto B6a71b9;
case 0x6a71bf:c.instructions+=1;goto B6a71bf;
case 0x6a71c4:goto L6a71c4;
case 0x6a71c7:c.instructions+=2;goto B6a71c7;
case 0x6a71ca:c.instructions+=1;goto B6a71ca;
case 0x6a71d0:goto L6a71d0;
case 0x6a71d3:c.instructions+=17;goto B6a71d3;
case 0x6a71d5:c.instructions+=16;goto B6a71d5;
case 0x6a71d8:c.instructions+=15;goto B6a71d8;
case 0x6a71db:c.instructions+=14;goto B6a71db;
case 0x6a71de:c.instructions+=13;goto B6a71de;
case 0x6a71df:c.instructions+=12;goto B6a71df;
case 0x6a71e0:c.instructions+=11;goto B6a71e0;
case 0x6a71e3:c.instructions+=10;goto B6a71e3;
case 0x6a71e6:c.instructions+=9;goto B6a71e6;
case 0x6a71e9:c.instructions+=8;goto B6a71e9;
case 0x6a71ec:c.instructions+=7;goto B6a71ec;
case 0x6a71ef:c.instructions+=6;goto B6a71ef;
case 0x6a71f2:c.instructions+=5;goto B6a71f2;
case 0x6a71f5:c.instructions+=4;goto B6a71f5;
case 0x6a71f8:c.instructions+=3;goto B6a71f8;
case 0x6a71fb:c.instructions+=2;goto B6a71fb;
case 0x6a71fd:c.instructions+=1;goto B6a71fd;
case 0x6a7202:goto L6a7202;
case 0x6a7205:c.instructions+=4;goto B6a7205;
case 0x6a7208:c.instructions+=3;goto B6a7208;
case 0x6a720b:c.instructions+=2;goto B6a720b;
case 0x6a720f:c.instructions+=1;goto B6a720f;
case 0x6a7215:goto L6a7215;
case 0x6a7218:c.instructions+=7;goto B6a7218;
case 0x6a721b:c.instructions+=6;goto B6a721b;
case 0x6a721e:c.instructions+=5;goto B6a721e;
case 0x6a7221:c.instructions+=4;goto B6a7221;
case 0x6a7224:c.instructions+=3;goto B6a7224;
case 0x6a7227:c.instructions+=2;goto B6a7227;
case 0x6a722a:c.instructions+=1;goto B6a722a;
case 0x6a722f:goto L6a722f;
case 0x6a7232:c.instructions+=11;goto B6a7232;
case 0x6a7236:c.instructions+=10;goto B6a7236;
case 0x6a723a:c.instructions+=9;goto B6a723a;
case 0x6a723d:c.instructions+=8;goto B6a723d;
case 0x6a7240:c.instructions+=7;goto B6a7240;
case 0x6a7243:c.instructions+=6;goto B6a7243;
case 0x6a7246:c.instructions+=5;goto B6a7246;
case 0x6a7249:c.instructions+=4;goto B6a7249;
case 0x6a724c:c.instructions+=3;goto B6a724c;
case 0x6a724f:c.instructions+=2;goto B6a724f;
case 0x6a7252:c.instructions+=1;goto B6a7252;
case 0x6a7255:goto L6a7255;
case 0x6a7258:c.instructions+=4;goto B6a7258;
case 0x6a725b:c.instructions+=3;goto B6a725b;
case 0x6a725e:c.instructions+=2;goto B6a725e;
case 0x6a7261:c.instructions+=1;goto B6a7261;
case 0x6a7267:goto L6a7267;
case 0x6a726a:c.instructions+=12;goto B6a726a;
case 0x6a726c:c.instructions+=11;goto B6a726c;
case 0x6a7271:c.instructions+=10;goto B6a7271;
case 0x6a7276:c.instructions+=9;goto B6a7276;
case 0x6a7278:c.instructions+=8;goto B6a7278;
case 0x6a727a:c.instructions+=7;goto B6a727a;
case 0x6a727c:c.instructions+=6;goto B6a727c;
case 0x6a727e:c.instructions+=5;goto B6a727e;
case 0x6a7281:c.instructions+=4;goto B6a7281;
case 0x6a7284:c.instructions+=3;goto B6a7284;
case 0x6a7286:c.instructions+=2;goto B6a7286;
case 0x6a7289:c.instructions+=1;goto B6a7289;
case 0x6a728c:goto L6a728c;
case 0x6a728f:c.instructions+=8;goto B6a728f;
case 0x6a7292:c.instructions+=7;goto B6a7292;
case 0x6a7294:c.instructions+=6;goto B6a7294;
case 0x6a7297:c.instructions+=5;goto B6a7297;
case 0x6a729a:c.instructions+=4;goto B6a729a;
case 0x6a729d:c.instructions+=3;goto B6a729d;
case 0x6a729f:c.instructions+=2;goto B6a729f;
case 0x6a72a2:c.instructions+=1;goto B6a72a2;
case 0x6a72a8:goto L6a72a8;
case 0x6a72ab:c.instructions+=3;goto B6a72ab;
case 0x6a72ae:c.instructions+=2;goto B6a72ae;
case 0x6a72b1:c.instructions+=1;goto B6a72b1;
case 0x6a72b7:goto L6a72b7;
case 0x6a72ba:c.instructions+=2;goto B6a72ba;
case 0x6a72bd:c.instructions+=1;goto B6a72bd;
case 0x6a72c3:goto L6a72c3;
case 0x6a72c6:c.instructions+=6;goto B6a72c6;
case 0x6a72c9:c.instructions+=5;goto B6a72c9;
case 0x6a72cc:c.instructions+=4;goto B6a72cc;
case 0x6a72cf:c.instructions+=3;goto B6a72cf;
case 0x6a72d2:c.instructions+=2;goto B6a72d2;
case 0x6a72d5:c.instructions+=1;goto B6a72d5;
case 0x6a72db:goto L6a72db;
case 0x6a72de:c.instructions+=6;goto B6a72de;
case 0x6a72e1:c.instructions+=5;goto B6a72e1;
case 0x6a72e4:c.instructions+=4;goto B6a72e4;
case 0x6a72e7:c.instructions+=3;goto B6a72e7;
case 0x6a72eb:c.instructions+=2;goto B6a72eb;
case 0x6a72ee:c.instructions+=1;goto B6a72ee;
case 0x6a72f4:goto L6a72f4;
case 0x6a72f5:c.instructions+=2;goto B6a72f5;
case 0x6a72f7:c.instructions+=1;goto B6a72f7;
case 0x6a72fc:goto L6a72fc;
case 0x6a72fe:c.instructions+=1;goto B6a72fe;
case 0x6a7304:goto L6a7304;
case 0x6a7308:c.instructions+=1;goto B6a7308;
case 0x6a730e:goto L6a730e;
case 0x6a7312:c.instructions+=1;goto B6a7312;
case 0x6a7314:goto L6a7314;
case 0x6a7316:c.instructions+=5;goto B6a7316;
case 0x6a7318:c.instructions+=4;goto B6a7318;
case 0x6a731d:c.instructions+=3;goto B6a731d;
case 0x6a7322:c.instructions+=2;goto B6a7322;
case 0x6a7324:c.instructions+=1;goto B6a7324;
case 0x6a7329:goto L6a7329;
case 0x6a732c:c.instructions+=2;goto B6a732c;
case 0x6a732f:c.instructions+=1;goto B6a732f;
case 0x6a7335:goto L6a7335;
case 0x6a733b:c.instructions+=4;goto B6a733b;
case 0x6a733d:c.instructions+=3;goto B6a733d;
case 0x6a733f:c.instructions+=2;goto B6a733f;
case 0x6a7344:c.instructions+=1;goto B6a7344;
case 0x6a7349:goto L6a7349;
case 0x6a734c:c.instructions+=1;goto B6a734c;
case 0x6a7352:goto L6a7352;
case 0x6a7358:c.instructions+=7;goto B6a7358;
case 0x6a735b:c.instructions+=6;goto B6a735b;
case 0x6a735e:c.instructions+=5;goto B6a735e;
case 0x6a7361:c.instructions+=4;goto B6a7361;
case 0x6a7364:c.instructions+=3;goto B6a7364;
case 0x6a7367:c.instructions+=2;goto B6a7367;
case 0x6a7369:c.instructions+=1;goto B6a7369;
case 0x6a736e:goto L6a736e;
case 0x6a7370:c.instructions+=12;goto B6a7370;
case 0x6a7373:c.instructions+=11;goto B6a7373;
case 0x6a7376:c.instructions+=10;goto B6a7376;
case 0x6a7379:c.instructions+=9;goto B6a7379;
case 0x6a737b:c.instructions+=8;goto B6a737b;
case 0x6a7381:c.instructions+=7;goto B6a7381;
case 0x6a7382:c.instructions+=6;goto B6a7382;
case 0x6a7383:c.instructions+=5;goto B6a7383;
case 0x6a7386:c.instructions+=4;goto B6a7386;
case 0x6a7388:c.instructions+=3;goto B6a7388;
case 0x6a738b:c.instructions+=2;goto B6a738b;
case 0x6a7391:c.instructions+=1;goto B6a7391;
case 0x6a7396:goto L6a7396;
case 0x6a7399:c.instructions+=4;goto B6a7399;
case 0x6a739b:c.instructions+=3;goto B6a739b;
case 0x6a739e:c.instructions+=2;goto B6a739e;
case 0x6a73a1:c.instructions+=1;goto B6a73a1;
case 0x6a73a7:goto L6a73a7;
case 0x6a73a8:c.instructions+=8;goto B6a73a8;
case 0x6a73aa:c.instructions+=7;goto B6a73aa;
case 0x6a73ab:c.instructions+=6;goto B6a73ab;
case 0x6a73ae:c.instructions+=5;goto B6a73ae;
case 0x6a73b0:c.instructions+=4;goto B6a73b0;
case 0x6a73b3:c.instructions+=3;goto B6a73b3;
case 0x6a73b5:c.instructions+=2;goto B6a73b5;
case 0x6a73b8:c.instructions+=1;goto B6a73b8;
case 0x6a73bd:goto L6a73bd;
case 0x6a73c0:c.instructions+=2;goto B6a73c0;
case 0x6a73c3:c.instructions+=1;goto B6a73c3;
case 0x6a73c9:goto L6a73c9;
case 0x6a73cc:c.instructions+=4;goto B6a73cc;
case 0x6a73cf:c.instructions+=3;goto B6a73cf;
case 0x6a73d2:c.instructions+=2;goto B6a73d2;
case 0x6a73d4:c.instructions+=1;goto B6a73d4;
case 0x6a73d9:goto L6a73d9;
case 0x6a73dc:c.instructions+=7;goto B6a73dc;
case 0x6a73de:c.instructions+=6;goto B6a73de;
case 0x6a73e2:c.instructions+=5;goto B6a73e2;
case 0x6a73e6:c.instructions+=4;goto B6a73e6;
case 0x6a73e9:c.instructions+=3;goto B6a73e9;
case 0x6a73ec:c.instructions+=2;goto B6a73ec;
case 0x6a73ef:c.instructions+=1;goto B6a73ef;
case 0x6a73f2:goto L6a73f2;
case 0x6a73f5:c.instructions+=1;goto B6a73f5;
case 0x6a73f8:goto L6a73f8;
case 0x6a73fb:c.instructions+=3;goto B6a73fb;
case 0x6a73fe:c.instructions+=2;goto B6a73fe;
case 0x6a7401:c.instructions+=1;goto B6a7401;
case 0x6a7407:goto L6a7407;
case 0x6a7409:goto L6a7409;
case 0x6a740f:c.instructions+=1;goto B6a740f;
case 0x6a7414:goto L6a7414;
case 0x6a7416:c.instructions+=1;goto B6a7416;
case 0x6a7418:goto L6a7418;
case 0x6a741a:goto L6a741a;
case 0x6a7420:c.instructions+=1;goto B6a7420;
case 0x6a7425:goto L6a7425;
case 0x6a7427:c.instructions+=1;goto B6a7427;
case 0x6a7429:goto L6a7429;
case 0x6a742b:goto L6a742b;
case 0x6a7431:c.instructions+=1;goto B6a7431;
case 0x6a7436:goto L6a7436;
case 0x6a7438:c.instructions+=1;goto B6a7438;
case 0x6a743d:goto L6a743d;
case 0x6a743f:c.instructions+=1;goto B6a743f;
case 0x6a7441:goto L6a7441;
case 0x6a7443:goto L6a7443;
case 0x6a7445:c.instructions+=1;goto B6a7445;
case 0x6a744a:goto L6a744a;
case 0x6a744c:c.instructions+=1;goto B6a744c;
case 0x6a744e:goto L6a744e;
case 0x6a7450:goto L6a7450;
case 0x6a7452:c.instructions+=1;goto B6a7452;
case 0x6a7457:goto L6a7457;
case 0x6a7459:c.instructions+=1;goto B6a7459;
case 0x6a745b:goto L6a745b;
case 0x6a745d:goto L6a745d;
case 0x6a745f:goto L6a745f;
case 0x6a7460:c.instructions+=4;goto B6a7460;
case 0x6a7461:c.instructions+=3;goto B6a7461;
case 0x6a7462:c.instructions+=2;goto B6a7462;
case 0x6a7463:c.instructions+=1;goto B6a7463;
case 0x6a7464:goto L6a7464;
case 0x6a7469:c.instructions+=1;goto B6a7469;
case 0x6a746b:goto L6a746b;
case 0x6a746d:c.instructions+=2;goto B6a746d;
case 0x6a7473:c.instructions+=1;goto B6a7473;
case 0x6a7475:goto L6a7475;
case 0x6a7477:c.instructions+=2;goto B6a7477;
case 0x6a7478:c.instructions+=1;goto B6a7478;
case 0x6a7479:goto L6a7479;
case 0x6a747c:c.instructions+=1;goto B6a747c;
case 0x6a747e:goto L6a747e;
case 0x6a747f:c.instructions+=1;goto B6a747f;
case 0x6a7480:goto L6a7480;
case 0x6a7483:c.instructions+=3;goto B6a7483;
case 0x6a7486:c.instructions+=2;goto B6a7486;
case 0x6a748a:c.instructions+=1;goto B6a748a;
case 0x6a748c:goto L6a748c;
case 0x6a748f:c.instructions+=10;goto B6a748f;
case 0x6a7495:c.instructions+=9;goto B6a7495;
case 0x6a7498:c.instructions+=8;goto B6a7498;
case 0x6a749b:c.instructions+=7;goto B6a749b;
case 0x6a749e:c.instructions+=6;goto B6a749e;
case 0x6a74a1:c.instructions+=5;goto B6a74a1;
case 0x6a74a7:c.instructions+=4;goto B6a74a7;
case 0x6a74aa:c.instructions+=3;goto B6a74aa;
case 0x6a74ad:c.instructions+=2;goto B6a74ad;
case 0x6a74b0:c.instructions+=1;goto B6a74b0;
case 0x6a74b3:goto L6a74b3;
case 0x6a74b4:c.instructions+=2;goto B6a74b4;
case 0x6a74b7:c.instructions+=1;goto B6a74b7;
case 0x6a74b9:goto L6a74b9;
case 0x6a74ba:c.instructions+=1;goto B6a74ba;
case 0x6a74bb:goto L6a74bb;
case 0x6a74c1:c.instructions+=1;goto B6a74c1;
case 0x6a74c6:goto L6a74c6;
case 0x6a74c8:c.instructions+=10;goto B6a74c8;
case 0x6a74c9:c.instructions+=9;goto B6a74c9;
case 0x6a74cb:c.instructions+=8;goto B6a74cb;
case 0x6a74ce:c.instructions+=7;goto B6a74ce;
case 0x6a74cf:c.instructions+=6;goto B6a74cf;
case 0x6a74d0:c.instructions+=5;goto B6a74d0;
case 0x6a74d1:c.instructions+=4;goto B6a74d1;
case 0x6a74d3:c.instructions+=3;goto B6a74d3;
case 0x6a74d5:c.instructions+=2;goto B6a74d5;
case 0x6a74d8:c.instructions+=1;goto B6a74d8;
case 0x6a74dd:goto L6a74dd;
case 0x6a74e2:goto L6a74e2;
case 0x6a74e6:c.instructions+=4;goto B6a74e6;
case 0x6a74ea:c.instructions+=3;goto B6a74ea;
case 0x6a74ed:c.instructions+=2;goto B6a74ed;
case 0x6a74f0:c.instructions+=1;goto B6a74f0;
case 0x6a74f6:goto L6a74f6;
case 0x6a74f8:goto L6a74f8;
case 0x6a74fa:goto L6a74fa;
case 0x6a74fd:c.instructions+=6;goto B6a74fd;
case 0x6a7500:c.instructions+=5;goto B6a7500;
case 0x6a7503:c.instructions+=4;goto B6a7503;
case 0x6a7505:c.instructions+=3;goto B6a7505;
case 0x6a7507:c.instructions+=2;goto B6a7507;
case 0x6a750d:c.instructions+=1;goto B6a750d;
case 0x6a7513:goto L6a7513;
case 0x6a7519:c.instructions+=3;goto B6a7519;
case 0x6a751c:c.instructions+=2;goto B6a751c;
case 0x6a751f:c.instructions+=1;goto B6a751f;
case 0x6a7521:goto L6a7521;
case 0x6a7523:c.instructions+=2;goto B6a7523;
case 0x6a7526:c.instructions+=1;goto B6a7526;
case 0x6a7528:goto L6a7528;
case 0x6a752b:c.instructions+=1;goto B6a752b;
case 0x6a752e:goto L6a752e;
case 0x6a7530:c.instructions+=5;goto B6a7530;
case 0x6a7533:c.instructions+=4;goto B6a7533;
case 0x6a7536:c.instructions+=3;goto B6a7536;
case 0x6a7539:c.instructions+=2;goto B6a7539;
case 0x6a753c:c.instructions+=1;goto B6a753c;
case 0x6a753e:goto L6a753e;
case 0x6a753f:c.instructions+=3;goto B6a753f;
case 0x6a7542:c.instructions+=2;goto B6a7542;
case 0x6a7545:c.instructions+=1;goto B6a7545;
case 0x6a7547:goto L6a7547;
case 0x6a754a:c.instructions+=1;goto B6a754a;
case 0x6a7550:goto L6a7550;
case 0x6a7555:goto L6a7555;
case 0x6a7557:c.instructions+=3;goto B6a7557;
case 0x6a755d:c.instructions+=2;goto B6a755d;
case 0x6a7563:c.instructions+=1;goto B6a7563;
case 0x6a7569:goto L6a7569;
case 0x6a756c:c.instructions+=3;goto B6a756c;
case 0x6a756f:c.instructions+=2;goto B6a756f;
case 0x6a7572:c.instructions+=1;goto B6a7572;
case 0x6a7578:goto L6a7578;
case 0x6a757b:c.instructions+=14;goto B6a757b;
case 0x6a757e:c.instructions+=13;goto B6a757e;
case 0x6a7581:c.instructions+=12;goto B6a7581;
case 0x6a7584:c.instructions+=11;goto B6a7584;
case 0x6a7587:c.instructions+=10;goto B6a7587;
case 0x6a758a:c.instructions+=9;goto B6a758a;
case 0x6a758d:c.instructions+=8;goto B6a758d;
case 0x6a7590:c.instructions+=7;goto B6a7590;
case 0x6a7593:c.instructions+=6;goto B6a7593;
case 0x6a7595:c.instructions+=5;goto B6a7595;
case 0x6a759b:c.instructions+=4;goto B6a759b;
case 0x6a75a1:c.instructions+=3;goto B6a75a1;
case 0x6a75a4:c.instructions+=2;goto B6a75a4;
case 0x6a75a7:c.instructions+=1;goto B6a75a7;
case 0x6a75a9:goto L6a75a9;
case 0x6a75af:c.instructions+=1;goto B6a75af;
case 0x6a75b5:goto L6a75b5;
case 0x6a75b8:c.instructions+=9;goto B6a75b8;
case 0x6a75bb:c.instructions+=8;goto B6a75bb;
case 0x6a75bd:c.instructions+=7;goto B6a75bd;
case 0x6a75c0:c.instructions+=6;goto B6a75c0;
case 0x6a75c2:c.instructions+=5;goto B6a75c2;
case 0x6a75c4:c.instructions+=4;goto B6a75c4;
case 0x6a75c9:c.instructions+=3;goto B6a75c9;
case 0x6a75ce:c.instructions+=2;goto B6a75ce;
case 0x6a75d0:c.instructions+=1;goto B6a75d0;
case 0x6a75d2:goto L6a75d2;
case 0x6a75d7:c.instructions+=2;goto B6a75d7;
case 0x6a75d9:c.instructions+=1;goto B6a75d9;
case 0x6a75db:goto L6a75db;
case 0x6a75e0:c.instructions+=2;goto B6a75e0;
case 0x6a75e2:c.instructions+=1;goto B6a75e2;
case 0x6a75e4:goto L6a75e4;
case 0x6a75e6:goto L6a75e6;
case 0x6a75e8:c.instructions+=3;goto B6a75e8;
case 0x6a75ee:c.instructions+=2;goto B6a75ee;
case 0x6a75f0:c.instructions+=1;goto B6a75f0;
case 0x6a75f2:goto L6a75f2;
case 0x6a75f5:c.instructions+=4;goto B6a75f5;
case 0x6a75fb:c.instructions+=3;goto B6a75fb;
case 0x6a75fd:c.instructions+=2;goto B6a75fd;
case 0x6a75ff:c.instructions+=1;goto B6a75ff;
case 0x6a7606:goto L6a7606;
case 0x6a7608:c.instructions+=4;goto B6a7608;
case 0x6a760b:c.instructions+=3;goto B6a760b;
case 0x6a7611:c.instructions+=2;goto B6a7611;
case 0x6a7613:c.instructions+=1;goto B6a7613;
case 0x6a7615:goto L6a7615;
case 0x6a7618:c.instructions+=4;goto B6a7618;
case 0x6a761b:c.instructions+=3;goto B6a761b;
case 0x6a761e:c.instructions+=2;goto B6a761e;
case 0x6a7622:c.instructions+=1;goto B6a7622;
case 0x6a7624:goto L6a7624;
case 0x6a7626:c.instructions+=3;goto B6a7626;
case 0x6a7627:c.instructions+=2;goto B6a7627;
case 0x6a762a:c.instructions+=1;goto B6a762a;
case 0x6a762c:goto L6a762c;
case 0x6a762f:c.instructions+=4;goto B6a762f;
case 0x6a7635:c.instructions+=3;goto B6a7635;
case 0x6a7637:c.instructions+=2;goto B6a7637;
case 0x6a7639:c.instructions+=1;goto B6a7639;
case 0x6a763c:goto L6a763c;
case 0x6a763f:c.instructions+=5;goto B6a763f;
case 0x6a7642:c.instructions+=4;goto B6a7642;
case 0x6a7643:c.instructions+=3;goto B6a7643;
case 0x6a7644:c.instructions+=2;goto B6a7644;
case 0x6a7646:c.instructions+=1;goto B6a7646;
case 0x6a764b:goto L6a764b;
case 0x6a764d:c.instructions+=1;goto B6a764d;
case 0x6a7653:goto L6a7653;
case 0x6a7656:c.instructions+=5;goto B6a7656;
case 0x6a7659:c.instructions+=4;goto B6a7659;
case 0x6a765b:c.instructions+=3;goto B6a765b;
case 0x6a765e:c.instructions+=2;goto B6a765e;
case 0x6a7660:c.instructions+=1;goto B6a7660;
case 0x6a7662:goto L6a7662;
case 0x6a7665:c.instructions+=1;goto B6a7665;
case 0x6a7667:goto L6a7667;
case 0x6a766a:c.instructions+=2;goto B6a766a;
case 0x6a766e:c.instructions+=1;goto B6a766e;
case 0x6a7670:goto L6a7670;
case 0x6a7672:c.instructions+=3;goto B6a7672;
case 0x6a7675:c.instructions+=2;goto B6a7675;
case 0x6a7678:c.instructions+=1;goto B6a7678;
case 0x6a767b:goto L6a767b;
case 0x6a767e:c.instructions+=3;goto B6a767e;
case 0x6a7681:c.instructions+=2;goto B6a7681;
case 0x6a7684:c.instructions+=1;goto B6a7684;
case 0x6a768a:goto L6a768a;
case 0x6a768d:c.instructions+=2;goto B6a768d;
case 0x6a7690:c.instructions+=1;goto B6a7690;
case 0x6a7696:goto L6a7696;
case 0x6a7698:c.instructions+=4;goto B6a7698;
case 0x6a769a:c.instructions+=3;goto B6a769a;
case 0x6a769d:c.instructions+=2;goto B6a769d;
case 0x6a76a0:c.instructions+=1;goto B6a76a0;
case 0x6a76a6:goto L6a76a6;
case 0x6a76a9:c.instructions+=6;goto B6a76a9;
case 0x6a76ac:c.instructions+=5;goto B6a76ac;
case 0x6a76af:c.instructions+=4;goto B6a76af;
case 0x6a76b2:c.instructions+=3;goto B6a76b2;
case 0x6a76b5:c.instructions+=2;goto B6a76b5;
case 0x6a76b8:c.instructions+=1;goto B6a76b8;
case 0x6a76ba:goto L6a76ba;
case 0x6a76bd:c.instructions+=8;goto B6a76bd;
case 0x6a76c0:c.instructions+=7;goto B6a76c0;
case 0x6a76c3:c.instructions+=6;goto B6a76c3;
case 0x6a76c6:c.instructions+=5;goto B6a76c6;
case 0x6a76c9:c.instructions+=4;goto B6a76c9;
case 0x6a76cc:c.instructions+=3;goto B6a76cc;
case 0x6a76cf:c.instructions+=2;goto B6a76cf;
case 0x6a76d2:c.instructions+=1;goto B6a76d2;
case 0x6a76d4:goto L6a76d4;
case 0x6a76d7:c.instructions+=7;goto B6a76d7;
case 0x6a76da:c.instructions+=6;goto B6a76da;
case 0x6a76dd:c.instructions+=5;goto B6a76dd;
case 0x6a76e0:c.instructions+=4;goto B6a76e0;
case 0x6a76e3:c.instructions+=3;goto B6a76e3;
case 0x6a76e6:c.instructions+=2;goto B6a76e6;
case 0x6a76ea:c.instructions+=1;goto B6a76ea;
case 0x6a76ec:goto L6a76ec;
case 0x6a76f0:c.instructions+=1;goto B6a76f0;
case 0x6a76f2:goto L6a76f2;
case 0x6a76f5:c.instructions+=8;goto B6a76f5;
case 0x6a76f8:c.instructions+=7;goto B6a76f8;
case 0x6a76fb:c.instructions+=6;goto B6a76fb;
case 0x6a76fe:c.instructions+=5;goto B6a76fe;
case 0x6a7701:c.instructions+=4;goto B6a7701;
case 0x6a7704:c.instructions+=3;goto B6a7704;
case 0x6a7707:c.instructions+=2;goto B6a7707;
case 0x6a770a:c.instructions+=1;goto B6a770a;
case 0x6a770d:goto L6a770d;
case 0x6a7710:c.instructions+=3;goto B6a7710;
case 0x6a7713:c.instructions+=2;goto B6a7713;
case 0x6a7716:c.instructions+=1;goto B6a7716;
case 0x6a7718:goto L6a7718;
case 0x6a771b:c.instructions+=2;goto B6a771b;
case 0x6a771d:c.instructions+=1;goto B6a771d;
case 0x6a771f:goto L6a771f;
case 0x6a7721:c.instructions+=4;goto B6a7721;
case 0x6a7723:c.instructions+=3;goto B6a7723;
case 0x6a7728:c.instructions+=2;goto B6a7728;
case 0x6a772a:c.instructions+=1;goto B6a772a;
case 0x6a772c:goto L6a772c;
case 0x6a772e:goto L6a772e;
case 0x6a7731:c.instructions+=2;goto B6a7731;
case 0x6a7734:c.instructions+=1;goto B6a7734;
case 0x6a7739:goto L6a7739;
case 0x6a773f:c.instructions+=1;goto B6a773f;
case 0x6a7745:goto L6a7745;
case 0x6a7748:c.instructions+=3;goto B6a7748;
case 0x6a774b:c.instructions+=2;goto B6a774b;
case 0x6a774e:c.instructions+=1;goto B6a774e;
case 0x6a7754:goto L6a7754;
case 0x6a7757:c.instructions+=20;goto B6a7757;
case 0x6a775a:c.instructions+=19;goto B6a775a;
case 0x6a775d:c.instructions+=18;goto B6a775d;
case 0x6a7760:c.instructions+=17;goto B6a7760;
case 0x6a7763:c.instructions+=16;goto B6a7763;
case 0x6a7766:c.instructions+=15;goto B6a7766;
case 0x6a7769:c.instructions+=14;goto B6a7769;
case 0x6a776c:c.instructions+=13;goto B6a776c;
case 0x6a776f:c.instructions+=12;goto B6a776f;
case 0x6a7772:c.instructions+=11;goto B6a7772;
case 0x6a7775:c.instructions+=10;goto B6a7775;
case 0x6a7778:c.instructions+=9;goto B6a7778;
case 0x6a777b:c.instructions+=8;goto B6a777b;
case 0x6a777e:c.instructions+=7;goto B6a777e;
case 0x6a7781:c.instructions+=6;goto B6a7781;
case 0x6a7784:c.instructions+=5;goto B6a7784;
case 0x6a7786:c.instructions+=4;goto B6a7786;
case 0x6a778c:c.instructions+=3;goto B6a778c;
case 0x6a7792:c.instructions+=2;goto B6a7792;
case 0x6a7795:c.instructions+=1;goto B6a7795;
case 0x6a7797:goto L6a7797;
case 0x6a779d:c.instructions+=1;goto B6a779d;
case 0x6a77a3:goto L6a77a3;
case 0x6a77a6:c.instructions+=13;goto B6a77a6;
case 0x6a77a9:c.instructions+=12;goto B6a77a9;
case 0x6a77ac:c.instructions+=11;goto B6a77ac;
case 0x6a77af:c.instructions+=10;goto B6a77af;
case 0x6a77b2:c.instructions+=9;goto B6a77b2;
case 0x6a77b4:c.instructions+=8;goto B6a77b4;
case 0x6a77b7:c.instructions+=7;goto B6a77b7;
case 0x6a77b9:c.instructions+=6;goto B6a77b9;
case 0x6a77bb:c.instructions+=5;goto B6a77bb;
case 0x6a77c1:c.instructions+=4;goto B6a77c1;
case 0x6a77c6:c.instructions+=3;goto B6a77c6;
case 0x6a77c8:c.instructions+=2;goto B6a77c8;
case 0x6a77cb:c.instructions+=1;goto B6a77cb;
case 0x6a77cd:goto L6a77cd;
case 0x6a77d2:c.instructions+=2;goto B6a77d2;
case 0x6a77d4:c.instructions+=1;goto B6a77d4;
case 0x6a77d6:goto L6a77d6;
case 0x6a77db:c.instructions+=2;goto B6a77db;
case 0x6a77dd:c.instructions+=1;goto B6a77dd;
case 0x6a77df:goto L6a77df;
case 0x6a77e1:goto L6a77e1;
case 0x6a77e4:c.instructions+=6;goto B6a77e4;
case 0x6a77e6:c.instructions+=5;goto B6a77e6;
case 0x6a77ec:c.instructions+=4;goto B6a77ec;
case 0x6a77ee:c.instructions+=3;goto B6a77ee;
case 0x6a77f3:c.instructions+=2;goto B6a77f3;
case 0x6a77f5:c.instructions+=1;goto B6a77f5;
case 0x6a77f7:goto L6a77f7;
case 0x6a77fc:c.instructions+=2;goto B6a77fc;
case 0x6a77fe:c.instructions+=1;goto B6a77fe;
case 0x6a7800:goto L6a7800;
case 0x6a7805:c.instructions+=2;goto B6a7805;
case 0x6a7807:c.instructions+=1;goto B6a7807;
case 0x6a7809:goto L6a7809;
case 0x6a780b:goto L6a780b;
case 0x6a780d:c.instructions+=3;goto B6a780d;
case 0x6a7813:c.instructions+=2;goto B6a7813;
case 0x6a7815:c.instructions+=1;goto B6a7815;
case 0x6a7817:goto L6a7817;
case 0x6a781a:c.instructions+=5;goto B6a781a;
case 0x6a781d:c.instructions+=4;goto B6a781d;
case 0x6a7820:c.instructions+=3;goto B6a7820;
case 0x6a7823:c.instructions+=2;goto B6a7823;
case 0x6a7827:c.instructions+=1;goto B6a7827;
case 0x6a7829:goto L6a7829;
case 0x6a782c:c.instructions+=4;goto B6a782c;
case 0x6a782e:c.instructions+=3;goto B6a782e;
case 0x6a782f:c.instructions+=2;goto B6a782f;
case 0x6a7832:c.instructions+=1;goto B6a7832;
case 0x6a7834:goto L6a7834;
case 0x6a783a:c.instructions+=3;goto B6a783a;
case 0x6a783c:c.instructions+=2;goto B6a783c;
case 0x6a783e:c.instructions+=1;goto B6a783e;
case 0x6a7841:goto L6a7841;
case 0x6a7844:goto L6a7844;
case 0x6a7846:c.instructions+=4;goto B6a7846;
case 0x6a7849:c.instructions+=3;goto B6a7849;
case 0x6a784f:c.instructions+=2;goto B6a784f;
case 0x6a7851:c.instructions+=1;goto B6a7851;
case 0x6a7853:goto L6a7853;
case 0x6a7856:c.instructions+=4;goto B6a7856;
case 0x6a7859:c.instructions+=3;goto B6a7859;
case 0x6a785c:c.instructions+=2;goto B6a785c;
case 0x6a7860:c.instructions+=1;goto B6a7860;
case 0x6a7862:goto L6a7862;
case 0x6a7864:c.instructions+=3;goto B6a7864;
case 0x6a7865:c.instructions+=2;goto B6a7865;
case 0x6a7868:c.instructions+=1;goto B6a7868;
case 0x6a786a:goto L6a786a;
case 0x6a786d:c.instructions+=4;goto B6a786d;
case 0x6a7873:c.instructions+=3;goto B6a7873;
case 0x6a7875:c.instructions+=2;goto B6a7875;
case 0x6a7877:c.instructions+=1;goto B6a7877;
case 0x6a787a:goto L6a787a;
case 0x6a787d:c.instructions+=6;goto B6a787d;
case 0x6a7880:c.instructions+=5;goto B6a7880;
case 0x6a7883:c.instructions+=4;goto B6a7883;
case 0x6a7885:c.instructions+=3;goto B6a7885;
case 0x6a7886:c.instructions+=2;goto B6a7886;
case 0x6a7887:c.instructions+=1;goto B6a7887;
case 0x6a788c:goto L6a788c;
case 0x6a788e:c.instructions+=1;goto B6a788e;
case 0x6a7894:goto L6a7894;
case 0x6a7897:c.instructions+=5;goto B6a7897;
case 0x6a789a:c.instructions+=4;goto B6a789a;
case 0x6a789c:c.instructions+=3;goto B6a789c;
case 0x6a789f:c.instructions+=2;goto B6a789f;
case 0x6a78a1:c.instructions+=1;goto B6a78a1;
case 0x6a78a3:goto L6a78a3;
case 0x6a78a6:c.instructions+=1;goto B6a78a6;
case 0x6a78a8:goto L6a78a8;
case 0x6a78ab:c.instructions+=2;goto B6a78ab;
case 0x6a78af:c.instructions+=1;goto B6a78af;
case 0x6a78b1:goto L6a78b1;
case 0x6a78b3:c.instructions+=3;goto B6a78b3;
case 0x6a78b6:c.instructions+=2;goto B6a78b6;
case 0x6a78b9:c.instructions+=1;goto B6a78b9;
case 0x6a78bc:goto L6a78bc;
case 0x6a78bf:c.instructions+=3;goto B6a78bf;
case 0x6a78c2:c.instructions+=2;goto B6a78c2;
case 0x6a78c5:c.instructions+=1;goto B6a78c5;
case 0x6a78cb:goto L6a78cb;
case 0x6a78ce:c.instructions+=2;goto B6a78ce;
case 0x6a78d1:c.instructions+=1;goto B6a78d1;
case 0x6a78d7:goto L6a78d7;
case 0x6a78db:c.instructions+=1;goto B6a78db;
case 0x6a78e1:goto L6a78e1;
case 0x6a78e3:c.instructions+=4;goto B6a78e3;
case 0x6a78e4:c.instructions+=3;goto B6a78e4;
case 0x6a78e6:c.instructions+=2;goto B6a78e6;
case 0x6a78e9:c.instructions+=1;goto B6a78e9;
case 0x6a78eb:goto L6a78eb;
case 0x6a78ee:c.instructions+=7;goto B6a78ee;
case 0x6a78f1:c.instructions+=6;goto B6a78f1;
case 0x6a78f3:c.instructions+=5;goto B6a78f3;
case 0x6a78f6:c.instructions+=4;goto B6a78f6;
case 0x6a78f9:c.instructions+=3;goto B6a78f9;
case 0x6a78fc:c.instructions+=2;goto B6a78fc;
case 0x6a78ff:c.instructions+=1;goto B6a78ff;
case 0x6a7902:goto L6a7902;
case 0x6a7904:c.instructions+=5;goto B6a7904;
case 0x6a7907:c.instructions+=4;goto B6a7907;
case 0x6a790a:c.instructions+=3;goto B6a790a;
case 0x6a790d:c.instructions+=2;goto B6a790d;
case 0x6a7910:c.instructions+=1;goto B6a7910;
case 0x6a7912:goto L6a7912;
case 0x6a7915:c.instructions+=4;goto B6a7915;
case 0x6a7918:c.instructions+=3;goto B6a7918;
case 0x6a791b:c.instructions+=2;goto B6a791b;
case 0x6a791e:c.instructions+=1;goto B6a791e;
case 0x6a7920:goto L6a7920;
case 0x6a7924:c.instructions+=2;goto B6a7924;
case 0x6a7928:c.instructions+=1;goto B6a7928;
case 0x6a792e:goto L6a792e;
case 0x6a7931:c.instructions+=11;goto B6a7931;
case 0x6a7934:c.instructions+=10;goto B6a7934;
case 0x6a7937:c.instructions+=9;goto B6a7937;
case 0x6a793a:c.instructions+=8;goto B6a793a;
case 0x6a793d:c.instructions+=7;goto B6a793d;
case 0x6a7940:c.instructions+=6;goto B6a7940;
case 0x6a7943:c.instructions+=5;goto B6a7943;
case 0x6a7946:c.instructions+=4;goto B6a7946;
case 0x6a7949:c.instructions+=3;goto B6a7949;
case 0x6a794c:c.instructions+=2;goto B6a794c;
case 0x6a7950:c.instructions+=1;goto B6a7950;
case 0x6a7952:goto L6a7952;
case 0x6a7956:c.instructions+=1;goto B6a7956;
case 0x6a7958:goto L6a7958;
case 0x6a795b:c.instructions+=8;goto B6a795b;
case 0x6a795e:c.instructions+=7;goto B6a795e;
case 0x6a7961:c.instructions+=6;goto B6a7961;
case 0x6a7964:c.instructions+=5;goto B6a7964;
case 0x6a7967:c.instructions+=4;goto B6a7967;
case 0x6a796a:c.instructions+=3;goto B6a796a;
case 0x6a796d:c.instructions+=2;goto B6a796d;
case 0x6a7970:c.instructions+=1;goto B6a7970;
case 0x6a7973:goto L6a7973;
case 0x6a7976:c.instructions+=3;goto B6a7976;
case 0x6a7979:c.instructions+=2;goto B6a7979;
case 0x6a797c:c.instructions+=1;goto B6a797c;
case 0x6a797e:goto L6a797e;
case 0x6a7983:goto L6a7983;
case 0x6a7986:c.instructions+=2;goto B6a7986;
case 0x6a7988:c.instructions+=1;goto B6a7988;
case 0x6a798a:goto L6a798a;
case 0x6a798e:c.instructions+=2;goto B6a798e;
case 0x6a7990:c.instructions+=1;goto B6a7990;
case 0x6a7992:goto L6a7992;
case 0x6a7995:c.instructions+=7;goto B6a7995;
case 0x6a7998:c.instructions+=6;goto B6a7998;
case 0x6a799b:c.instructions+=5;goto B6a799b;
case 0x6a799e:c.instructions+=4;goto B6a799e;
case 0x6a79a1:c.instructions+=3;goto B6a79a1;
case 0x6a79a4:c.instructions+=2;goto B6a79a4;
case 0x6a79a7:c.instructions+=1;goto B6a79a7;
case 0x6a79a9:goto L6a79a9;
case 0x6a79ab:c.instructions+=7;goto B6a79ab;
case 0x6a79ae:c.instructions+=6;goto B6a79ae;
case 0x6a79b1:c.instructions+=5;goto B6a79b1;
case 0x6a79b3:c.instructions+=4;goto B6a79b3;
case 0x6a79b8:c.instructions+=3;goto B6a79b8;
case 0x6a79ba:c.instructions+=2;goto B6a79ba;
case 0x6a79bc:c.instructions+=1;goto B6a79bc;
case 0x6a79be:goto L6a79be;
case 0x6a79c1:c.instructions+=2;goto B6a79c1;
case 0x6a79c3:c.instructions+=1;goto B6a79c3;
case 0x6a79ca:goto L6a79ca;
case 0x6a79cd:c.instructions+=2;goto B6a79cd;
case 0x6a79d0:c.instructions+=1;goto B6a79d0;
case 0x6a79d3:goto L6a79d3;
case 0x6a79d6:c.instructions+=3;goto B6a79d6;
case 0x6a79d9:c.instructions+=2;goto B6a79d9;
case 0x6a79dc:c.instructions+=1;goto B6a79dc;
case 0x6a79de:goto L6a79de;
case 0x6a79e1:c.instructions+=3;goto B6a79e1;
case 0x6a79e3:c.instructions+=2;goto B6a79e3;
case 0x6a79e6:c.instructions+=1;goto B6a79e6;
case 0x6a79e8:goto L6a79e8;
case 0x6a79eb:c.instructions+=3;goto B6a79eb;
case 0x6a79ee:c.instructions+=2;goto B6a79ee;
case 0x6a79f0:c.instructions+=1;goto B6a79f0;
case 0x6a79f2:goto L6a79f2;
case 0x6a79f4:c.instructions+=1;goto B6a79f4;
case 0x6a79f9:goto L6a79f9;
case 0x6a79fa:c.instructions+=2;goto B6a79fa;
case 0x6a79fd:c.instructions+=1;goto B6a79fd;
case 0x6a79ff:goto L6a79ff;
case 0x6a7a02:c.instructions+=1;goto B6a7a02;
case 0x6a7a07:goto L6a7a07;
case 0x6a7a0d:c.instructions+=1;goto B6a7a0d;
case 0x6a7a13:goto L6a7a13;
case 0x6a7a17:c.instructions+=3;goto B6a7a17;
case 0x6a7a1a:c.instructions+=2;goto B6a7a1a;
case 0x6a7a1d:c.instructions+=1;goto B6a7a1d;
case 0x6a7a23:goto L6a7a23;
case 0x6a7a26:c.instructions+=24;goto B6a7a26;
case 0x6a7a29:c.instructions+=23;goto B6a7a29;
case 0x6a7a2c:c.instructions+=22;goto B6a7a2c;
case 0x6a7a2f:c.instructions+=21;goto B6a7a2f;
case 0x6a7a32:c.instructions+=20;goto B6a7a32;
case 0x6a7a35:c.instructions+=19;goto B6a7a35;
case 0x6a7a38:c.instructions+=18;goto B6a7a38;
case 0x6a7a3b:c.instructions+=17;goto B6a7a3b;
case 0x6a7a3e:c.instructions+=16;goto B6a7a3e;
case 0x6a7a41:c.instructions+=15;goto B6a7a41;
case 0x6a7a43:c.instructions+=14;goto B6a7a43;
case 0x6a7a46:c.instructions+=13;goto B6a7a46;
case 0x6a7a49:c.instructions+=12;goto B6a7a49;
case 0x6a7a4c:c.instructions+=11;goto B6a7a4c;
case 0x6a7a4f:c.instructions+=10;goto B6a7a4f;
case 0x6a7a52:c.instructions+=9;goto B6a7a52;
case 0x6a7a55:c.instructions+=8;goto B6a7a55;
case 0x6a7a58:c.instructions+=7;goto B6a7a58;
case 0x6a7a5b:c.instructions+=6;goto B6a7a5b;
case 0x6a7a5e:c.instructions+=5;goto B6a7a5e;
case 0x6a7a60:c.instructions+=4;goto B6a7a60;
case 0x6a7a66:c.instructions+=3;goto B6a7a66;
case 0x6a7a6c:c.instructions+=2;goto B6a7a6c;
case 0x6a7a6f:c.instructions+=1;goto B6a7a6f;
case 0x6a7a75:goto L6a7a75;
case 0x6a7a78:c.instructions+=14;goto B6a7a78;
case 0x6a7a7b:c.instructions+=13;goto B6a7a7b;
case 0x6a7a7e:c.instructions+=12;goto B6a7a7e;
case 0x6a7a81:c.instructions+=11;goto B6a7a81;
case 0x6a7a84:c.instructions+=10;goto B6a7a84;
case 0x6a7a87:c.instructions+=9;goto B6a7a87;
case 0x6a7a89:c.instructions+=8;goto B6a7a89;
case 0x6a7a8c:c.instructions+=7;goto B6a7a8c;
case 0x6a7a8e:c.instructions+=6;goto B6a7a8e;
case 0x6a7a90:c.instructions+=5;goto B6a7a90;
case 0x6a7a96:c.instructions+=4;goto B6a7a96;
case 0x6a7a9b:c.instructions+=3;goto B6a7a9b;
case 0x6a7a9d:c.instructions+=2;goto B6a7a9d;
case 0x6a7aa0:c.instructions+=1;goto B6a7aa0;
case 0x6a7aa2:goto L6a7aa2;
case 0x6a7aa7:c.instructions+=2;goto B6a7aa7;
case 0x6a7aa9:c.instructions+=1;goto B6a7aa9;
case 0x6a7aab:goto L6a7aab;
case 0x6a7ab0:c.instructions+=2;goto B6a7ab0;
case 0x6a7ab2:c.instructions+=1;goto B6a7ab2;
case 0x6a7ab4:goto L6a7ab4;
case 0x6a7ab6:goto L6a7ab6;
case 0x6a7ab9:c.instructions+=6;goto B6a7ab9;
case 0x6a7abb:c.instructions+=5;goto B6a7abb;
case 0x6a7ac1:c.instructions+=4;goto B6a7ac1;
case 0x6a7ac3:c.instructions+=3;goto B6a7ac3;
case 0x6a7ac8:c.instructions+=2;goto B6a7ac8;
case 0x6a7aca:c.instructions+=1;goto B6a7aca;
case 0x6a7acc:goto L6a7acc;
case 0x6a7ad1:c.instructions+=2;goto B6a7ad1;
case 0x6a7ad3:c.instructions+=1;goto B6a7ad3;
case 0x6a7ad5:goto L6a7ad5;
case 0x6a7ada:c.instructions+=2;goto B6a7ada;
case 0x6a7adc:c.instructions+=1;goto B6a7adc;
case 0x6a7ade:goto L6a7ade;
case 0x6a7ae0:goto L6a7ae0;
case 0x6a7ae2:c.instructions+=3;goto B6a7ae2;
case 0x6a7ae8:c.instructions+=2;goto B6a7ae8;
case 0x6a7aea:c.instructions+=1;goto B6a7aea;
case 0x6a7aec:goto L6a7aec;
case 0x6a7aef:c.instructions+=5;goto B6a7aef;
case 0x6a7af2:c.instructions+=4;goto B6a7af2;
case 0x6a7af5:c.instructions+=3;goto B6a7af5;
case 0x6a7af8:c.instructions+=2;goto B6a7af8;
case 0x6a7afc:c.instructions+=1;goto B6a7afc;
case 0x6a7afe:goto L6a7afe;
case 0x6a7b01:c.instructions+=4;goto B6a7b01;
case 0x6a7b03:c.instructions+=3;goto B6a7b03;
case 0x6a7b04:c.instructions+=2;goto B6a7b04;
case 0x6a7b07:c.instructions+=1;goto B6a7b07;
case 0x6a7b09:goto L6a7b09;
case 0x6a7b0f:c.instructions+=3;goto B6a7b0f;
case 0x6a7b11:c.instructions+=2;goto B6a7b11;
case 0x6a7b13:c.instructions+=1;goto B6a7b13;
case 0x6a7b16:goto L6a7b16;
case 0x6a7b19:goto L6a7b19;
case 0x6a7b1b:c.instructions+=4;goto B6a7b1b;
case 0x6a7b1e:c.instructions+=3;goto B6a7b1e;
case 0x6a7b24:c.instructions+=2;goto B6a7b24;
case 0x6a7b26:c.instructions+=1;goto B6a7b26;
case 0x6a7b28:goto L6a7b28;
case 0x6a7b2b:c.instructions+=4;goto B6a7b2b;
case 0x6a7b2e:c.instructions+=3;goto B6a7b2e;
case 0x6a7b31:c.instructions+=2;goto B6a7b31;
case 0x6a7b35:c.instructions+=1;goto B6a7b35;
case 0x6a7b37:goto L6a7b37;
case 0x6a7b39:c.instructions+=3;goto B6a7b39;
case 0x6a7b3a:c.instructions+=2;goto B6a7b3a;
case 0x6a7b3d:c.instructions+=1;goto B6a7b3d;
case 0x6a7b3f:goto L6a7b3f;
case 0x6a7b42:c.instructions+=4;goto B6a7b42;
case 0x6a7b48:c.instructions+=3;goto B6a7b48;
case 0x6a7b4a:c.instructions+=2;goto B6a7b4a;
case 0x6a7b4c:c.instructions+=1;goto B6a7b4c;
case 0x6a7b4f:goto L6a7b4f;
case 0x6a7b52:c.instructions+=7;goto B6a7b52;
case 0x6a7b55:c.instructions+=6;goto B6a7b55;
case 0x6a7b58:c.instructions+=5;goto B6a7b58;
case 0x6a7b5a:c.instructions+=4;goto B6a7b5a;
case 0x6a7b5d:c.instructions+=3;goto B6a7b5d;
case 0x6a7b5e:c.instructions+=2;goto B6a7b5e;
case 0x6a7b5f:c.instructions+=1;goto B6a7b5f;
case 0x6a7b64:goto L6a7b64;
case 0x6a7b66:c.instructions+=1;goto B6a7b66;
case 0x6a7b6c:goto L6a7b6c;
case 0x6a7b6f:c.instructions+=5;goto B6a7b6f;
case 0x6a7b72:c.instructions+=4;goto B6a7b72;
case 0x6a7b74:c.instructions+=3;goto B6a7b74;
case 0x6a7b77:c.instructions+=2;goto B6a7b77;
case 0x6a7b79:c.instructions+=1;goto B6a7b79;
case 0x6a7b7b:goto L6a7b7b;
case 0x6a7b7e:c.instructions+=1;goto B6a7b7e;
case 0x6a7b80:goto L6a7b80;
case 0x6a7b83:c.instructions+=2;goto B6a7b83;
case 0x6a7b87:c.instructions+=1;goto B6a7b87;
case 0x6a7b89:goto L6a7b89;
case 0x6a7b8b:c.instructions+=3;goto B6a7b8b;
case 0x6a7b8e:c.instructions+=2;goto B6a7b8e;
case 0x6a7b91:c.instructions+=1;goto B6a7b91;
case 0x6a7b94:goto L6a7b94;
case 0x6a7b97:c.instructions+=4;goto B6a7b97;
case 0x6a7b98:c.instructions+=3;goto B6a7b98;
case 0x6a7b9b:c.instructions+=2;goto B6a7b9b;
case 0x6a7b9e:c.instructions+=1;goto B6a7b9e;
case 0x6a7ba4:goto L6a7ba4;
case 0x6a7ba7:c.instructions+=2;goto B6a7ba7;
case 0x6a7baa:c.instructions+=1;goto B6a7baa;
case 0x6a7bb0:goto L6a7bb0;
case 0x6a7bb4:c.instructions+=1;goto B6a7bb4;
case 0x6a7bba:goto L6a7bba;
case 0x6a7bbc:c.instructions+=4;goto B6a7bbc;
case 0x6a7bbd:c.instructions+=3;goto B6a7bbd;
case 0x6a7bbf:c.instructions+=2;goto B6a7bbf;
case 0x6a7bc2:c.instructions+=1;goto B6a7bc2;
case 0x6a7bc4:goto L6a7bc4;
case 0x6a7bc7:c.instructions+=7;goto B6a7bc7;
case 0x6a7bca:c.instructions+=6;goto B6a7bca;
case 0x6a7bcc:c.instructions+=5;goto B6a7bcc;
case 0x6a7bcf:c.instructions+=4;goto B6a7bcf;
case 0x6a7bd2:c.instructions+=3;goto B6a7bd2;
case 0x6a7bd5:c.instructions+=2;goto B6a7bd5;
case 0x6a7bd8:c.instructions+=1;goto B6a7bd8;
case 0x6a7bdb:goto L6a7bdb;
case 0x6a7bdd:c.instructions+=5;goto B6a7bdd;
case 0x6a7be0:c.instructions+=4;goto B6a7be0;
case 0x6a7be3:c.instructions+=3;goto B6a7be3;
case 0x6a7be6:c.instructions+=2;goto B6a7be6;
case 0x6a7be9:c.instructions+=1;goto B6a7be9;
case 0x6a7beb:goto L6a7beb;
case 0x6a7bee:c.instructions+=4;goto B6a7bee;
case 0x6a7bf1:c.instructions+=3;goto B6a7bf1;
case 0x6a7bf4:c.instructions+=2;goto B6a7bf4;
case 0x6a7bf7:c.instructions+=1;goto B6a7bf7;
case 0x6a7bf9:goto L6a7bf9;
case 0x6a7bfd:c.instructions+=2;goto B6a7bfd;
case 0x6a7c01:c.instructions+=1;goto B6a7c01;
case 0x6a7c07:goto L6a7c07;
case 0x6a7c0a:c.instructions+=11;goto B6a7c0a;
case 0x6a7c0d:c.instructions+=10;goto B6a7c0d;
case 0x6a7c10:c.instructions+=9;goto B6a7c10;
case 0x6a7c13:c.instructions+=8;goto B6a7c13;
case 0x6a7c16:c.instructions+=7;goto B6a7c16;
case 0x6a7c19:c.instructions+=6;goto B6a7c19;
case 0x6a7c1c:c.instructions+=5;goto B6a7c1c;
case 0x6a7c1f:c.instructions+=4;goto B6a7c1f;
case 0x6a7c22:c.instructions+=3;goto B6a7c22;
case 0x6a7c25:c.instructions+=2;goto B6a7c25;
case 0x6a7c29:c.instructions+=1;goto B6a7c29;
case 0x6a7c2b:goto L6a7c2b;
case 0x6a7c2f:c.instructions+=1;goto B6a7c2f;
case 0x6a7c31:goto L6a7c31;
case 0x6a7c34:c.instructions+=8;goto B6a7c34;
case 0x6a7c37:c.instructions+=7;goto B6a7c37;
case 0x6a7c3a:c.instructions+=6;goto B6a7c3a;
case 0x6a7c3d:c.instructions+=5;goto B6a7c3d;
case 0x6a7c40:c.instructions+=4;goto B6a7c40;
case 0x6a7c43:c.instructions+=3;goto B6a7c43;
case 0x6a7c46:c.instructions+=2;goto B6a7c46;
case 0x6a7c49:c.instructions+=1;goto B6a7c49;
case 0x6a7c4c:goto L6a7c4c;
case 0x6a7c4f:c.instructions+=3;goto B6a7c4f;
case 0x6a7c52:c.instructions+=2;goto B6a7c52;
case 0x6a7c55:c.instructions+=1;goto B6a7c55;
case 0x6a7c57:goto L6a7c57;
case 0x6a7c5c:goto L6a7c5c;
case 0x6a7c5f:c.instructions+=2;goto B6a7c5f;
case 0x6a7c61:c.instructions+=1;goto B6a7c61;
case 0x6a7c63:goto L6a7c63;
case 0x6a7c67:c.instructions+=2;goto B6a7c67;
case 0x6a7c69:c.instructions+=1;goto B6a7c69;
case 0x6a7c6b:goto L6a7c6b;
case 0x6a7c6e:c.instructions+=7;goto B6a7c6e;
case 0x6a7c71:c.instructions+=6;goto B6a7c71;
case 0x6a7c74:c.instructions+=5;goto B6a7c74;
case 0x6a7c77:c.instructions+=4;goto B6a7c77;
case 0x6a7c7a:c.instructions+=3;goto B6a7c7a;
case 0x6a7c7d:c.instructions+=2;goto B6a7c7d;
case 0x6a7c80:c.instructions+=1;goto B6a7c80;
case 0x6a7c82:goto L6a7c82;
case 0x6a7c84:c.instructions+=7;goto B6a7c84;
case 0x6a7c87:c.instructions+=6;goto B6a7c87;
case 0x6a7c8a:c.instructions+=5;goto B6a7c8a;
case 0x6a7c8c:c.instructions+=4;goto B6a7c8c;
case 0x6a7c91:c.instructions+=3;goto B6a7c91;
case 0x6a7c93:c.instructions+=2;goto B6a7c93;
case 0x6a7c95:c.instructions+=1;goto B6a7c95;
case 0x6a7c97:goto L6a7c97;
case 0x6a7c9a:c.instructions+=2;goto B6a7c9a;
case 0x6a7c9c:c.instructions+=1;goto B6a7c9c;
case 0x6a7ca3:goto L6a7ca3;
case 0x6a7ca6:c.instructions+=2;goto B6a7ca6;
case 0x6a7ca9:c.instructions+=1;goto B6a7ca9;
case 0x6a7cac:goto L6a7cac;
case 0x6a7caf:c.instructions+=3;goto B6a7caf;
case 0x6a7cb2:c.instructions+=2;goto B6a7cb2;
case 0x6a7cb5:c.instructions+=1;goto B6a7cb5;
case 0x6a7cb7:goto L6a7cb7;
case 0x6a7cba:c.instructions+=3;goto B6a7cba;
case 0x6a7cbd:c.instructions+=2;goto B6a7cbd;
case 0x6a7cbf:c.instructions+=1;goto B6a7cbf;
case 0x6a7cc1:goto L6a7cc1;
case 0x6a7cc4:c.instructions+=3;goto B6a7cc4;
case 0x6a7cc7:c.instructions+=2;goto B6a7cc7;
case 0x6a7cc9:c.instructions+=1;goto B6a7cc9;
case 0x6a7ccb:goto L6a7ccb;
case 0x6a7ccd:c.instructions+=1;goto B6a7ccd;
case 0x6a7cd2:goto L6a7cd2;
case 0x6a7cd5:goto L6a7cd5;
case 0x6a7cd6:c.instructions+=2;goto B6a7cd6;
case 0x6a7cd9:c.instructions+=1;goto B6a7cd9;
case 0x6a7cdb:goto L6a7cdb;
case 0x6a7cde:c.instructions+=1;goto B6a7cde;
case 0x6a7ce3:goto L6a7ce3;
case 0x6a7ce9:c.instructions+=1;goto B6a7ce9;
case 0x6a7ceb:goto L6a7ceb;
case 0x6a7ced:c.instructions+=5;goto B6a7ced;
case 0x6a7cee:c.instructions+=4;goto B6a7cee;
case 0x6a7cef:c.instructions+=3;goto B6a7cef;
case 0x6a7cf0:c.instructions+=2;goto B6a7cf0;
case 0x6a7cf2:c.instructions+=1;goto B6a7cf2;
case 0x6a7cf7:goto L6a7cf7;
case 0x6a7cf9:c.instructions+=1;goto B6a7cf9;
case 0x6a7cff:goto L6a7cff;
case 0x6a7d01:c.instructions+=1;goto B6a7d01;
case 0x6a7d03:goto L6a7d03;
case 0x6a7d06:goto L6a7d06;
case 0x6a7d09:c.instructions+=5;goto B6a7d09;
case 0x6a7d0b:c.instructions+=4;goto B6a7d0b;
case 0x6a7d0e:c.instructions+=3;goto B6a7d0e;
case 0x6a7d11:c.instructions+=2;goto B6a7d11;
case 0x6a7d14:c.instructions+=1;goto B6a7d14;
case 0x6a7d1a:goto L6a7d1a;
case 0x6a7d1d:c.instructions+=8;goto B6a7d1d;
case 0x6a7d1f:c.instructions+=7;goto B6a7d1f;
case 0x6a7d22:c.instructions+=6;goto B6a7d22;
case 0x6a7d25:c.instructions+=5;goto B6a7d25;
case 0x6a7d28:c.instructions+=4;goto B6a7d28;
case 0x6a7d2b:c.instructions+=3;goto B6a7d2b;
case 0x6a7d2e:c.instructions+=2;goto B6a7d2e;
case 0x6a7d32:c.instructions+=1;goto B6a7d32;
case 0x6a7d34:goto L6a7d34;
case 0x6a7d38:c.instructions+=1;goto B6a7d38;
case 0x6a7d3a:goto L6a7d3a;
case 0x6a7d3d:c.instructions+=7;goto B6a7d3d;
case 0x6a7d40:c.instructions+=6;goto B6a7d40;
case 0x6a7d43:c.instructions+=5;goto B6a7d43;
case 0x6a7d45:c.instructions+=4;goto B6a7d45;
case 0x6a7d48:c.instructions+=3;goto B6a7d48;
case 0x6a7d4b:c.instructions+=2;goto B6a7d4b;
case 0x6a7d4e:c.instructions+=1;goto B6a7d4e;
case 0x6a7d51:goto L6a7d51;
case 0x6a7d53:c.instructions+=3;goto B6a7d53;
case 0x6a7d56:c.instructions+=2;goto B6a7d56;
case 0x6a7d59:c.instructions+=1;goto B6a7d59;
case 0x6a7d5e:goto L6a7d5e;
case 0x6a7d63:c.instructions+=1;goto B6a7d63;
case 0x6a7d69:goto L6a7d69;
case 0x6a7d6c:c.instructions+=20;goto B6a7d6c;
case 0x6a7d70:c.instructions+=19;goto B6a7d70;
case 0x6a7d74:c.instructions+=18;goto B6a7d74;
case 0x6a7d76:c.instructions+=17;goto B6a7d76;
case 0x6a7d77:c.instructions+=16;goto B6a7d77;
case 0x6a7d7a:c.instructions+=15;goto B6a7d7a;
case 0x6a7d7d:c.instructions+=14;goto B6a7d7d;
case 0x6a7d80:c.instructions+=13;goto B6a7d80;
case 0x6a7d82:c.instructions+=12;goto B6a7d82;
case 0x6a7d85:c.instructions+=11;goto B6a7d85;
case 0x6a7d88:c.instructions+=10;goto B6a7d88;
case 0x6a7d8b:c.instructions+=9;goto B6a7d8b;
case 0x6a7d8e:c.instructions+=8;goto B6a7d8e;
case 0x6a7d91:c.instructions+=7;goto B6a7d91;
case 0x6a7d94:c.instructions+=6;goto B6a7d94;
case 0x6a7d97:c.instructions+=5;goto B6a7d97;
case 0x6a7d9a:c.instructions+=4;goto B6a7d9a;
case 0x6a7d9d:c.instructions+=3;goto B6a7d9d;
case 0x6a7da0:c.instructions+=2;goto B6a7da0;
case 0x6a7da4:c.instructions+=1;goto B6a7da4;
case 0x6a7daa:goto L6a7daa;
case 0x6a7dae:c.instructions+=1;goto B6a7dae;
case 0x6a7db4:goto L6a7db4;
case 0x6a7db7:c.instructions+=4;goto B6a7db7;
case 0x6a7dbd:c.instructions+=3;goto B6a7dbd;
case 0x6a7dbf:c.instructions+=2;goto B6a7dbf;
case 0x6a7dc2:c.instructions+=1;goto B6a7dc2;
case 0x6a7dc8:goto L6a7dc8;
case 0x6a7dcb:c.instructions+=5;goto B6a7dcb;
case 0x6a7dce:c.instructions+=4;goto B6a7dce;
case 0x6a7dd1:c.instructions+=3;goto B6a7dd1;
case 0x6a7dd5:c.instructions+=2;goto B6a7dd5;
case 0x6a7ddc:c.instructions+=1;goto B6a7ddc;
case 0x6a7de2:goto L6a7de2;
case 0x6a7de5:c.instructions+=2;goto B6a7de5;
case 0x6a7de9:c.instructions+=1;goto B6a7de9;
case 0x6a7deb:goto L6a7deb;
case 0x6a7dee:c.instructions+=4;goto B6a7dee;
case 0x6a7df4:c.instructions+=3;goto B6a7df4;
case 0x6a7df6:c.instructions+=2;goto B6a7df6;
case 0x6a7df9:c.instructions+=1;goto B6a7df9;
case 0x6a7dfb:goto L6a7dfb;
case 0x6a7dfe:c.instructions+=4;goto B6a7dfe;
case 0x6a7e01:c.instructions+=3;goto B6a7e01;
case 0x6a7e04:c.instructions+=2;goto B6a7e04;
case 0x6a7e08:c.instructions+=1;goto B6a7e08;
case 0x6a7e0a:goto L6a7e0a;
case 0x6a7e0d:c.instructions+=2;goto B6a7e0d;
case 0x6a7e11:c.instructions+=1;goto B6a7e11;
case 0x6a7e13:goto L6a7e13;
case 0x6a7e15:c.instructions+=6;goto B6a7e15;
case 0x6a7e18:c.instructions+=5;goto B6a7e18;
case 0x6a7e1e:c.instructions+=4;goto B6a7e1e;
case 0x6a7e20:c.instructions+=3;goto B6a7e20;
case 0x6a7e22:c.instructions+=2;goto B6a7e22;
case 0x6a7e25:c.instructions+=1;goto B6a7e25;
case 0x6a7e27:goto L6a7e27;
case 0x6a7e2e:c.instructions+=1;goto B6a7e2e;
case 0x6a7e30:goto L6a7e30;
case 0x6a7e33:c.instructions+=5;goto B6a7e33;
case 0x6a7e39:c.instructions+=4;goto B6a7e39;
case 0x6a7e3b:c.instructions+=3;goto B6a7e3b;
case 0x6a7e3d:c.instructions+=2;goto B6a7e3d;
case 0x6a7e40:c.instructions+=1;goto B6a7e40;
case 0x6a7e42:goto L6a7e42;
case 0x6a7e49:c.instructions+=1;goto B6a7e49;
case 0x6a7e4b:goto L6a7e4b;
case 0x6a7e4f:goto L6a7e4f;
case 0x6a7e53:c.instructions+=1;goto B6a7e53;
case 0x6a7e55:goto L6a7e55;
case 0x6a7e58:c.instructions+=4;goto B6a7e58;
case 0x6a7e5b:c.instructions+=3;goto B6a7e5b;
case 0x6a7e5e:c.instructions+=2;goto B6a7e5e;
case 0x6a7e62:c.instructions+=1;goto B6a7e62;
case 0x6a7e64:goto L6a7e64;
case 0x6a7e68:goto L6a7e68;
case 0x6a7e6b:c.instructions+=4;goto B6a7e6b;
case 0x6a7e6e:c.instructions+=3;goto B6a7e6e;
case 0x6a7e71:c.instructions+=2;goto B6a7e71;
case 0x6a7e75:c.instructions+=1;goto B6a7e75;
case 0x6a7e77:goto L6a7e77;
case 0x6a7e7b:goto L6a7e7b;
case 0x6a7e7f:c.instructions+=1;goto B6a7e7f;
case 0x6a7e85:goto L6a7e85;
case 0x6a7e89:c.instructions+=1;goto B6a7e89;
case 0x6a7e8f:goto L6a7e8f;
case 0x6a7e91:goto L6a7e91;
case 0x6a7e95:c.instructions+=2;goto B6a7e95;
case 0x6a7e98:c.instructions+=1;goto B6a7e98;
case 0x6a7e9a:goto L6a7e9a;
case 0x6a7e9b:c.instructions+=1;goto B6a7e9b;
case 0x6a7e9d:goto L6a7e9d;
case 0x6a7e9e:c.instructions+=1;goto B6a7e9e;
case 0x6a7ea0:goto L6a7ea0;
case 0x6a7ea1:c.instructions+=1;goto B6a7ea1;
case 0x6a7ea7:goto L6a7ea7;
case 0x6a7eaa:c.instructions+=1;goto B6a7eaa;
case 0x6a7ead:goto L6a7ead;
case 0x6a7eb0:c.instructions+=5;goto B6a7eb0;
case 0x6a7eb3:c.instructions+=4;goto B6a7eb3;
case 0x6a7eb6:c.instructions+=3;goto B6a7eb6;
case 0x6a7eb9:c.instructions+=2;goto B6a7eb9;
case 0x6a7ebc:c.instructions+=1;goto B6a7ebc;
case 0x6a7ebe:goto L6a7ebe;
case 0x6a7ec1:c.instructions+=2;goto B6a7ec1;
case 0x6a7ec3:c.instructions+=1;goto B6a7ec3;
case 0x6a7ec5:goto L6a7ec5;
case 0x6a7ec9:c.instructions+=1;goto B6a7ec9;
case 0x6a7ecb:goto L6a7ecb;
case 0x6a7ecc:c.instructions+=8;goto B6a7ecc;
case 0x6a7ece:c.instructions+=7;goto B6a7ece;
case 0x6a7ecf:c.instructions+=6;goto B6a7ecf;
case 0x6a7ed2:c.instructions+=5;goto B6a7ed2;
case 0x6a7ed4:c.instructions+=4;goto B6a7ed4;
case 0x6a7ed6:c.instructions+=3;goto B6a7ed6;
case 0x6a7ed9:c.instructions+=2;goto B6a7ed9;
case 0x6a7edb:c.instructions+=1;goto B6a7edb;
case 0x6a7ee0:goto L6a7ee0;
case 0x6a7ee3:c.instructions+=3;goto B6a7ee3;
case 0x6a7ee6:c.instructions+=2;goto B6a7ee6;
case 0x6a7ee9:c.instructions+=1;goto B6a7ee9;
case 0x6a7eec:goto L6a7eec;
case 0x6a7eef:c.instructions+=5;goto B6a7eef;
case 0x6a7ef2:c.instructions+=4;goto B6a7ef2;
case 0x6a7ef5:c.instructions+=3;goto B6a7ef5;
case 0x6a7ef8:c.instructions+=2;goto B6a7ef8;
case 0x6a7efb:c.instructions+=1;goto B6a7efb;
case 0x6a7efd:goto L6a7efd;
case 0x6a7f01:c.instructions+=1;goto B6a7f01;
case 0x6a7f03:goto L6a7f03;
case 0x6a7f04:c.instructions+=8;goto B6a7f04;
case 0x6a7f06:c.instructions+=7;goto B6a7f06;
case 0x6a7f07:c.instructions+=6;goto B6a7f07;
case 0x6a7f0a:c.instructions+=5;goto B6a7f0a;
case 0x6a7f0c:c.instructions+=4;goto B6a7f0c;
case 0x6a7f0e:c.instructions+=3;goto B6a7f0e;
case 0x6a7f11:c.instructions+=2;goto B6a7f11;
case 0x6a7f13:c.instructions+=1;goto B6a7f13;
case 0x6a7f18:goto L6a7f18;
case 0x6a7f1b:c.instructions+=3;goto B6a7f1b;
case 0x6a7f1e:c.instructions+=2;goto B6a7f1e;
case 0x6a7f21:c.instructions+=1;goto B6a7f21;
case 0x6a7f24:goto L6a7f24;
case 0x6a7f27:c.instructions+=4;goto B6a7f27;
case 0x6a7f2a:c.instructions+=3;goto B6a7f2a;
case 0x6a7f2d:c.instructions+=2;goto B6a7f2d;
case 0x6a7f30:c.instructions+=1;goto B6a7f30;
case 0x6a7f33:goto L6a7f33;
case 0x6a7f36:goto L6a7f36;
case 0x6a7f39:c.instructions+=11;goto B6a7f39;
case 0x6a7f3c:c.instructions+=10;goto B6a7f3c;
case 0x6a7f3f:c.instructions+=9;goto B6a7f3f;
case 0x6a7f42:c.instructions+=8;goto B6a7f42;
case 0x6a7f45:c.instructions+=7;goto B6a7f45;
case 0x6a7f48:c.instructions+=6;goto B6a7f48;
case 0x6a7f4b:c.instructions+=5;goto B6a7f4b;
case 0x6a7f4e:c.instructions+=4;goto B6a7f4e;
case 0x6a7f51:c.instructions+=3;goto B6a7f51;
case 0x6a7f54:c.instructions+=2;goto B6a7f54;
case 0x6a7f58:c.instructions+=1;goto B6a7f58;
case 0x6a7f5a:goto L6a7f5a;
case 0x6a7f5e:c.instructions+=1;goto B6a7f5e;
case 0x6a7f60:goto L6a7f60;
case 0x6a7f63:c.instructions+=8;goto B6a7f63;
case 0x6a7f66:c.instructions+=7;goto B6a7f66;
case 0x6a7f69:c.instructions+=6;goto B6a7f69;
case 0x6a7f6c:c.instructions+=5;goto B6a7f6c;
case 0x6a7f6f:c.instructions+=4;goto B6a7f6f;
case 0x6a7f72:c.instructions+=3;goto B6a7f72;
case 0x6a7f75:c.instructions+=2;goto B6a7f75;
case 0x6a7f78:c.instructions+=1;goto B6a7f78;
case 0x6a7f7b:goto L6a7f7b;
case 0x6a7f7e:c.instructions+=2;goto B6a7f7e;
case 0x6a7f81:c.instructions+=1;goto B6a7f81;
case 0x6a7f87:goto L6a7f87;
case 0x6a7f89:c.instructions+=2;goto B6a7f89;
case 0x6a7f8c:c.instructions+=1;goto B6a7f8c;
case 0x6a7f8f:goto L6a7f8f;
case 0x6a7f96:goto L6a7f96;
case 0x6a7f98:goto L6a7f98;
case 0x6a7f9b:c.instructions+=3;goto B6a7f9b;
case 0x6a7f9d:c.instructions+=2;goto B6a7f9d;
case 0x6a7f9f:c.instructions+=1;goto B6a7f9f;
case 0x6a7fa5:goto L6a7fa5;
case 0x6a7fa8:c.instructions+=1;goto B6a7fa8;
case 0x6a7faa:goto L6a7faa;
case 0x6a7fad:goto L6a7fad;
case 0x6a7faf:c.instructions+=6;goto B6a7faf;
case 0x6a7fb2:c.instructions+=5;goto B6a7fb2;
case 0x6a7fb5:c.instructions+=4;goto B6a7fb5;
case 0x6a7fb7:c.instructions+=3;goto B6a7fb7;
case 0x6a7fba:c.instructions+=2;goto B6a7fba;
case 0x6a7fbd:c.instructions+=1;goto B6a7fbd;
case 0x6a7fbf:goto L6a7fbf;
case 0x6a7fc2:c.instructions+=4;goto B6a7fc2;
case 0x6a7fc5:c.instructions+=3;goto B6a7fc5;
case 0x6a7fc8:c.instructions+=2;goto B6a7fc8;
case 0x6a7fcf:c.instructions+=1;goto B6a7fcf;
case 0x6a7fd1:goto L6a7fd1;
case 0x6a7fd5:c.instructions+=1;goto B6a7fd5;
case 0x6a7fd7:goto L6a7fd7;
case 0x6a7fdb:c.instructions+=1;goto B6a7fdb;
case 0x6a7fdd:goto L6a7fdd;
case 0x6a7fe0:c.instructions+=4;goto B6a7fe0;
case 0x6a7fe3:c.instructions+=3;goto B6a7fe3;
case 0x6a7fe6:c.instructions+=2;goto B6a7fe6;
case 0x6a7fe9:c.instructions+=1;goto B6a7fe9;
case 0x6a7feb:goto L6a7feb;
case 0x6a7fee:c.instructions+=2;goto B6a7fee;
case 0x6a7ff1:c.instructions+=1;goto B6a7ff1;
case 0x6a7ff3:goto L6a7ff3;
case 0x6a7ff6:c.instructions+=2;goto B6a7ff6;
case 0x6a7ff9:c.instructions+=1;goto B6a7ff9;
case 0x6a7ffb:goto L6a7ffb;
case 0x6a7ffc:c.instructions+=3;goto B6a7ffc;
case 0x6a7ffe:c.instructions+=2;goto B6a7ffe;
case 0x6a7fff:c.instructions+=1;goto B6a7fff;
default:missing_instruction(c.pc);}
B6a7003:L6a7003:{c.instructions+=2;NFSU2_TR(0x6a7003);
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
B6a7005:{NFSU2_TR(0x6a7005);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a745f;}}
}
B6a700b:L6a700b:{c.instructions+=3;NFSU2_TR(0x6a700b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a700d:{NFSU2_TR(0x6a700d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7010:{NFSU2_TR(0x6a7010);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a702c;}}
}
B6a7012:L6a7012:{c.instructions+=9;NFSU2_TR(0x6a7012);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7015:{NFSU2_TR(0x6a7015);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7018:{NFSU2_TR(0x6a7018);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a701c:{NFSU2_TR(0x6a701c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a701f:{NFSU2_TR(0x6a701f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7022:{NFSU2_TR(0x6a7022);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7026:{NFSU2_TR(0x6a7026);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a7027:{NFSU2_TR(0x6a7027);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a702a:{NFSU2_TR(0x6a702a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7012u);}goto L6a7012;}}
}
B6a702c:L6a702c:{c.instructions+=5;NFSU2_TR(0x6a702c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7030:{NFSU2_TR(0x6a7030);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7033:{NFSU2_TR(0x6a7033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7036:{NFSU2_TR(0x6a7036);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7039:{NFSU2_TR(0x6a7039);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a72b7;}}
}
B6a703f:L6a703f:{c.instructions+=6;NFSU2_TR(0x6a703f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7042:{NFSU2_TR(0x6a7042);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7045:{NFSU2_TR(0x6a7045);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a7048:{NFSU2_TR(0x6a7048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a704a:{NFSU2_TR(0x6a704a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a704f:{NFSU2_TR(0x6a704f);
if(r1(R+518)){{goto L6a72a8;}}
}
B6a7055:L6a7055:{c.instructions+=10;NFSU2_TR(0x6a7055);
__builtin_memmove((R+4),(R+0),4);
}
B6a7057:{NFSU2_TR(0x6a7057);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a705a:{NFSU2_TR(0x6a705a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a7060:{NFSU2_TR(0x6a7060);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a7062:{NFSU2_TR(0x6a7062);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a7062);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a7062);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6a7064:{NFSU2_TR(0x6a7064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7067:{NFSU2_TR(0x6a7067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a706a:{NFSU2_TR(0x6a706a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a706c:{NFSU2_TR(0x6a706c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a706f:{NFSU2_TR(0x6a706f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a72a8;}}
}
B6a7075:L6a7075:{c.instructions+=1;NFSU2_TR(0x6a7075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7078:L6a7078:{c.instructions+=3;NFSU2_TR(0x6a7078);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a707a:{NFSU2_TR(0x6a707a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a707d:{NFSU2_TR(0x6a707d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a728c;}}
}
B6a7083:L6a7083:{c.instructions+=3;NFSU2_TR(0x6a7083);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7086:{NFSU2_TR(0x6a7086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6a7089:{NFSU2_TR(0x6a7089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a708c:L6a708c:{c.instructions+=8;NFSU2_TR(0x6a708c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a708e:{NFSU2_TR(0x6a708e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7091:{NFSU2_TR(0x6a7091);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7094:{NFSU2_TR(0x6a7094);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7097:{NFSU2_TR(0x6a7097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a709a:{NFSU2_TR(0x6a709a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a709d:{NFSU2_TR(0x6a709d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a70a1:{NFSU2_TR(0x6a70a1);
if(r1(R+518)){{goto L6a70b2;}}
}
B6a70a3:L6a70a3:{c.instructions+=3;NFSU2_TR(0x6a70a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70a4:{NFSU2_TR(0x6a70a4);
__builtin_memmove((R+4),(R+24),4);
}
B6a70a6:{NFSU2_TR(0x6a70a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a70abull));
TAIL_STATIC(0x69a7adu,69a);
}
B6a70ab:L6a70ab:{c.instructions+=2;NFSU2_TR(0x6a70ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a70ad:{NFSU2_TR(0x6a70ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a70b2;}}
}
B6a70af:L6a70af:{c.instructions+=1;NFSU2_TR(0x6a70af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a70b2:L6a70b2:{c.instructions+=3;NFSU2_TR(0x6a70b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6a70b5:{NFSU2_TR(0x6a70b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a70b8:{NFSU2_TR(0x6a70b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a708cu);}goto L6a708c;}}
}
B6a70ba:L6a70ba:{c.instructions+=2;NFSU2_TR(0x6a70ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a70be:{NFSU2_TR(0x6a70be);
if(r1(R+518)){{goto L6a728c;}}
}
B6a70c4:L6a70c4:{c.instructions+=3;NFSU2_TR(0x6a70c4);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6a70c7:{NFSU2_TR(0x6a70c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a70ca:{NFSU2_TR(0x6a70ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a70eb;}}
}
B6a70cc:L6a70cc:{c.instructions+=6;NFSU2_TR(0x6a70cc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70ce:{NFSU2_TR(0x6a70ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70cf:{NFSU2_TR(0x6a70cf);
u8 U[4];
w4(U+0,u32(0x80251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70d4:{NFSU2_TR(0x6a70d4);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70d9:{NFSU2_TR(0x6a70d9);
__builtin_memmove((R+4),(R+24),4);
}
B6a70db:{NFSU2_TR(0x6a70db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a70e0ull));
TAIL_STATIC(0x699be0u,699);
}
B6a70e0:L6a70e0:{c.instructions+=3;NFSU2_TR(0x6a70e0);
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
B6a70e2:{NFSU2_TR(0x6a70e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a70e5:{NFSU2_TR(0x6a70e5);
if(r1(R+518)){{goto L6a7464;}}
}
B6a70eb:L6a70eb:{c.instructions+=8;NFSU2_TR(0x6a70eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a70ee:{NFSU2_TR(0x6a70ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a70f4:{NFSU2_TR(0x6a70f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70f5:{NFSU2_TR(0x6a70f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a70f6:{NFSU2_TR(0x6a70f6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a70fb:{NFSU2_TR(0x6a70fb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6a7100:{NFSU2_TR(0x6a7100);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7101:{NFSU2_TR(0x6a7101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7106ull));
TAIL_STATIC(0x699c99u,699);
}
B6a7106:L6a7106:{c.instructions+=2;NFSU2_TR(0x6a7106);
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
B6a7108:{NFSU2_TR(0x6a7108);
if(r1(R+518)){{goto L6a7464;}}
}
B6a710e:L6a710e:{c.instructions+=7;NFSU2_TR(0x6a710e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7114:{NFSU2_TR(0x6a7114);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7117:{NFSU2_TR(0x6a7117);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a711a:{NFSU2_TR(0x6a711a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a711b:{NFSU2_TR(0x6a711b);
__builtin_memmove((R+4),(R+0),4);
}
B6a711d:{NFSU2_TR(0x6a711d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7120:{NFSU2_TR(0x6a7120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7125ull));
TAIL_STATIC(0x698eb3u,698);
}
B6a7125:L6a7125:{c.instructions+=3;NFSU2_TR(0x6a7125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7129:{NFSU2_TR(0x6a7129);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a712d:{NFSU2_TR(0x6a712d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7130:L6a7130:{c.instructions+=16;NFSU2_TR(0x6a7130);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7133:{NFSU2_TR(0x6a7133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7136:{NFSU2_TR(0x6a7136);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6a7138:{NFSU2_TR(0x6a7138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a713b:{NFSU2_TR(0x6a713b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a713d:{NFSU2_TR(0x6a713d);
__builtin_memmove((R+4),(R+0),4);
}
B6a713f:{NFSU2_TR(0x6a713f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a7142:{NFSU2_TR(0x6a7142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7145:{NFSU2_TR(0x6a7145);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7148:{NFSU2_TR(0x6a7148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a714b:{NFSU2_TR(0x6a714b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a714e:{NFSU2_TR(0x6a714e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7151:{NFSU2_TR(0x6a7151);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7154:{NFSU2_TR(0x6a7154);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7158:{NFSU2_TR(0x6a7158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a715b:{NFSU2_TR(0x6a715b);
if(r1(R+518)){{goto L6a7255;}}
}
B6a7161:L6a7161:{c.instructions+=3;NFSU2_TR(0x6a7161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7162:{NFSU2_TR(0x6a7162);
__builtin_memmove((R+4),(R+24),4);
}
B6a7164:{NFSU2_TR(0x6a7164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7169ull));
TAIL_STATIC(0x69a7adu,69a);
}
B6a7169:L6a7169:{c.instructions+=2;NFSU2_TR(0x6a7169);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a716b:{NFSU2_TR(0x6a716b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7255;}}
}
B6a7171:L6a7171:{c.instructions+=4;NFSU2_TR(0x6a7171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7174:{NFSU2_TR(0x6a7174);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7177:{NFSU2_TR(0x6a7177);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a717a:{NFSU2_TR(0x6a717a);
if(r1(R+518)){{goto L6a7194;}}
}
B6a717c:L6a717c:{c.instructions+=6;NFSU2_TR(0x6a717c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a717f:{NFSU2_TR(0x6a717f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7182:{NFSU2_TR(0x6a7182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a7184:{NFSU2_TR(0x6a7184);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a7189:{NFSU2_TR(0x6a7189);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a718e:{NFSU2_TR(0x6a718e);
if(r1(R+518)){{goto L6a7255;}}
}
B6a7194:L6a7194:{c.instructions+=3;NFSU2_TR(0x6a7194);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7197:{NFSU2_TR(0x6a7197);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a719a:{NFSU2_TR(0x6a719a);
if(r1(R+518)){{goto L6a71a6;}}
}
B6a719c:L6a719c:{c.instructions+=3;NFSU2_TR(0x6a719c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a719f:{NFSU2_TR(0x6a719f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a71a1:{NFSU2_TR(0x6a71a1);
{goto L6a7255;}
}
B6a71a6:L6a71a6:{c.instructions+=9;NFSU2_TR(0x6a71a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a71ac:{NFSU2_TR(0x6a71ac);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a71ae:{NFSU2_TR(0x6a71ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a71af:{NFSU2_TR(0x6a71af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a71b0:{NFSU2_TR(0x6a71b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a71b3:{NFSU2_TR(0x6a71b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a71b6:{NFSU2_TR(0x6a71b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a71b9:{NFSU2_TR(0x6a71b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a71bf:{NFSU2_TR(0x6a71bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a71c4ull));
TAIL_STATIC(0x699c39u,699);
}
B6a71c4:L6a71c4:{c.instructions+=3;NFSU2_TR(0x6a71c4);
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
B6a71c7:{NFSU2_TR(0x6a71c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a71ca:{NFSU2_TR(0x6a71ca);
if(r1(R+518)){{goto L6a7464;}}
}
B6a71d0:L6a71d0:{c.instructions+=18;NFSU2_TR(0x6a71d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a71d3:{NFSU2_TR(0x6a71d3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a71d5:{NFSU2_TR(0x6a71d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a71d8:{NFSU2_TR(0x6a71d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a71db:{NFSU2_TR(0x6a71db);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a71de:{NFSU2_TR(0x6a71de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a71df:{NFSU2_TR(0x6a71df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a71e0:{NFSU2_TR(0x6a71e0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a71e3:{NFSU2_TR(0x6a71e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a71e6:{NFSU2_TR(0x6a71e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a71e9:{NFSU2_TR(0x6a71e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a71ec:{NFSU2_TR(0x6a71ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a71ef:{NFSU2_TR(0x6a71ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a71f2:{NFSU2_TR(0x6a71f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a71f5:{NFSU2_TR(0x6a71f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a71f8:{NFSU2_TR(0x6a71f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a71fb:{NFSU2_TR(0x6a71fb);
__builtin_memmove((R+4),(R+24),4);
}
B6a71fd:{NFSU2_TR(0x6a71fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7202ull));
TAIL_STATIC(0x699c39u,699);
}
B6a7202:L6a7202:{c.instructions+=5;NFSU2_TR(0x6a7202);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7205:{NFSU2_TR(0x6a7205);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a7208:{NFSU2_TR(0x6a7208);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a720b:{NFSU2_TR(0x6a720b);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+18),u32(0xffffffffull)));
w4(U+22,u32(u32(r4(U+18))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6a720f:{NFSU2_TR(0x6a720f);
if(r1(R+518)){{goto L6a7464;}}
}
B6a7215:L6a7215:{c.instructions+=8;NFSU2_TR(0x6a7215);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7218:{NFSU2_TR(0x6a7218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a721b:{NFSU2_TR(0x6a721b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a721e:{NFSU2_TR(0x6a721e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7221:{NFSU2_TR(0x6a7221);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7224:{NFSU2_TR(0x6a7224);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a7227:{NFSU2_TR(0x6a7227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a722a:{NFSU2_TR(0x6a722a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a722full));
TAIL_STATIC(0x699821u,699);
}
B6a722f:L6a722f:{c.instructions+=12;NFSU2_TR(0x6a722f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7232:{NFSU2_TR(0x6a7232);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7236:{NFSU2_TR(0x6a7236);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a723a:{NFSU2_TR(0x6a723a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a723d:{NFSU2_TR(0x6a723d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7240:{NFSU2_TR(0x6a7240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7243:{NFSU2_TR(0x6a7243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7246:{NFSU2_TR(0x6a7246);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7249:{NFSU2_TR(0x6a7249);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a724c:{NFSU2_TR(0x6a724c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a724f:{NFSU2_TR(0x6a724f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7252:{NFSU2_TR(0x6a7252);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7255:L6a7255:{c.instructions+=5;NFSU2_TR(0x6a7255);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7258:{NFSU2_TR(0x6a7258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a725b:{NFSU2_TR(0x6a725b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6a725e:{NFSU2_TR(0x6a725e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7261:{NFSU2_TR(0x6a7261);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7130u);}goto L6a7130;}}
}
B6a7267:L6a7267:{c.instructions+=13;NFSU2_TR(0x6a7267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a726a:{NFSU2_TR(0x6a726a);
__builtin_memmove((R+0),(R+4),4);
}
B6a726c:{NFSU2_TR(0x6a726c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a7271:{NFSU2_TR(0x6a7271);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6a7276:{NFSU2_TR(0x6a7276);
__builtin_memmove((R+8),(R+4),4);
}
B6a7278:{NFSU2_TR(0x6a7278);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B6a727a:{NFSU2_TR(0x6a727a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6a727c:{NFSU2_TR(0x6a727c);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B6a727e:{NFSU2_TR(0x6a727e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7281:{NFSU2_TR(0x6a7281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7284:{NFSU2_TR(0x6a7284);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a7286:{NFSU2_TR(0x6a7286);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7289:{NFSU2_TR(0x6a7289);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a728c:L6a728c:{c.instructions+=9;NFSU2_TR(0x6a728c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a728f:{NFSU2_TR(0x6a728f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7292:{NFSU2_TR(0x6a7292);
__builtin_memmove((R+0),(R+4),4);
}
B6a7294:{NFSU2_TR(0x6a7294);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a7297:{NFSU2_TR(0x6a7297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a729a:{NFSU2_TR(0x6a729a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a729d:{NFSU2_TR(0x6a729d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a729f:{NFSU2_TR(0x6a729f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a72a2:{NFSU2_TR(0x6a72a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7078u);}goto L6a7078;}}
}
B6a72a8:L6a72a8:{c.instructions+=4;NFSU2_TR(0x6a72a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a72ab:{NFSU2_TR(0x6a72ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a72ae:{NFSU2_TR(0x6a72ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a72b1:{NFSU2_TR(0x6a72b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a703fu);}goto L6a703f;}}
}
B6a72b7:L6a72b7:{c.instructions+=3;NFSU2_TR(0x6a72b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a72ba:{NFSU2_TR(0x6a72ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a72bd:{NFSU2_TR(0x6a72bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7409;}}
}
B6a72c3:L6a72c3:{c.instructions+=7;NFSU2_TR(0x6a72c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a72c6:{NFSU2_TR(0x6a72c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a72c9:{NFSU2_TR(0x6a72c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a72cc:{NFSU2_TR(0x6a72cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a72cf:{NFSU2_TR(0x6a72cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a72d2:{NFSU2_TR(0x6a72d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a72d5:{NFSU2_TR(0x6a72d5);
if(r1(R+518)){{goto L6a73f8;}}
}
B6a72db:L6a72db:{c.instructions+=7;NFSU2_TR(0x6a72db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a72de:{NFSU2_TR(0x6a72de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a72e1:{NFSU2_TR(0x6a72e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a72e4:{NFSU2_TR(0x6a72e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a72e7:{NFSU2_TR(0x6a72e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a72eb:{NFSU2_TR(0x6a72eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a72ee:{NFSU2_TR(0x6a72ee);
if(r1(R+518)){{goto L6a73f8;}}
}
B6a72f4:L6a72f4:{c.instructions+=3;NFSU2_TR(0x6a72f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a72f5:{NFSU2_TR(0x6a72f5);
__builtin_memmove((R+4),(R+24),4);
}
B6a72f7:{NFSU2_TR(0x6a72f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a72fcull));
TAIL_STATIC(0x69a7adu,69a);
}
B6a72fc:L6a72fc:{c.instructions+=2;NFSU2_TR(0x6a72fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a72fe:{NFSU2_TR(0x6a72fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a73f8;}}
}
B6a7304:L6a7304:{c.instructions+=2;NFSU2_TR(0x6a7304);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7308:{NFSU2_TR(0x6a7308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a73f2;}}
}
B6a730e:L6a730e:{c.instructions+=2;NFSU2_TR(0x6a730e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7312:{NFSU2_TR(0x6a7312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7335;}}
}
B6a7314:L6a7314:{c.instructions+=6;NFSU2_TR(0x6a7314);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7316:{NFSU2_TR(0x6a7316);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7318:{NFSU2_TR(0x6a7318);
u8 U[4];
w4(U+0,u32(0x80251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a731d:{NFSU2_TR(0x6a731d);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7322:{NFSU2_TR(0x6a7322);
__builtin_memmove((R+4),(R+24),4);
}
B6a7324:{NFSU2_TR(0x6a7324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7329ull));
TAIL_STATIC(0x699be0u,699);
}
B6a7329:L6a7329:{c.instructions+=3;NFSU2_TR(0x6a7329);
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
B6a732c:{NFSU2_TR(0x6a732c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a732f:{NFSU2_TR(0x6a732f);
if(r1(R+518)){{goto L6a7464;}}
}
B6a7335:L6a7335:{c.instructions+=5;NFSU2_TR(0x6a7335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a733b:{NFSU2_TR(0x6a733b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a733d:{NFSU2_TR(0x6a733d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a733f:{NFSU2_TR(0x6a733f);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7344:{NFSU2_TR(0x6a7344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7349ull));
TAIL_STATIC(0x699c99u,699);
}
B6a7349:L6a7349:{c.instructions+=2;NFSU2_TR(0x6a7349);
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
B6a734c:{NFSU2_TR(0x6a734c);
if(r1(R+518)){{goto L6a7464;}}
}
B6a7352:L6a7352:{c.instructions+=8;NFSU2_TR(0x6a7352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7358:{NFSU2_TR(0x6a7358);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a735b:{NFSU2_TR(0x6a735b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a735e:{NFSU2_TR(0x6a735e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7361:{NFSU2_TR(0x6a7361);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7364:{NFSU2_TR(0x6a7364);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a7367:{NFSU2_TR(0x6a7367);
__builtin_memmove((R+4),(R+28),4);
}
B6a7369:{NFSU2_TR(0x6a7369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a736eull));
TAIL_STATIC(0x698eb3u,698);
}
B6a736e:L6a736e:{c.instructions+=13;NFSU2_TR(0x6a736e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a7370:{NFSU2_TR(0x6a7370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7373:{NFSU2_TR(0x6a7373);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7376:{NFSU2_TR(0x6a7376);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7379:{NFSU2_TR(0x6a7379);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a737b:{NFSU2_TR(0x6a737b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7381:{NFSU2_TR(0x6a7381);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7382:{NFSU2_TR(0x6a7382);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7383:{NFSU2_TR(0x6a7383);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a7386:{NFSU2_TR(0x6a7386);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7388:{NFSU2_TR(0x6a7388);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a738b:{NFSU2_TR(0x6a738b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7391:{NFSU2_TR(0x6a7391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7396ull));
TAIL_STATIC(0x699c39u,699);
}
B6a7396:L6a7396:{c.instructions+=5;NFSU2_TR(0x6a7396);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7399:{NFSU2_TR(0x6a7399);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a739b:{NFSU2_TR(0x6a739b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a739e:{NFSU2_TR(0x6a739e);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xffffffffull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6a73a1:{NFSU2_TR(0x6a73a1);
if(r1(R+518)){{goto L6a7464;}}
}
B6a73a7:L6a73a7:{c.instructions+=9;NFSU2_TR(0x6a73a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a73a8:{NFSU2_TR(0x6a73a8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a73aa:{NFSU2_TR(0x6a73aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a73ab:{NFSU2_TR(0x6a73ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a73ae:{NFSU2_TR(0x6a73ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a73b0:{NFSU2_TR(0x6a73b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a73b3:{NFSU2_TR(0x6a73b3);
__builtin_memmove((R+4),(R+24),4);
}
B6a73b5:{NFSU2_TR(0x6a73b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a73b8:{NFSU2_TR(0x6a73b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a73bdull));
TAIL_STATIC(0x699c39u,699);
}
B6a73bd:L6a73bd:{c.instructions+=3;NFSU2_TR(0x6a73bd);
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
B6a73c0:{NFSU2_TR(0x6a73c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a73c3:{NFSU2_TR(0x6a73c3);
if(r1(R+518)){{goto L6a7464;}}
}
B6a73c9:L6a73c9:{c.instructions+=5;NFSU2_TR(0x6a73c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a73cc:{NFSU2_TR(0x6a73cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a73cf:{NFSU2_TR(0x6a73cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a73d2:{NFSU2_TR(0x6a73d2);
__builtin_memmove((R+4),(R+12),4);
}
B6a73d4:{NFSU2_TR(0x6a73d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a73d9ull));
TAIL_STATIC(0x699821u,699);
}
B6a73d9:L6a73d9:{c.instructions+=8;NFSU2_TR(0x6a73d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a73dc:{NFSU2_TR(0x6a73dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a73de:{NFSU2_TR(0x6a73de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a73e2:{NFSU2_TR(0x6a73e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a73e6:{NFSU2_TR(0x6a73e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a73e9:{NFSU2_TR(0x6a73e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a73ec:{NFSU2_TR(0x6a73ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a73ef:{NFSU2_TR(0x6a73ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a73f2:L6a73f2:{c.instructions+=2;NFSU2_TR(0x6a73f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a73f5:{NFSU2_TR(0x6a73f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a73f8:L6a73f8:{c.instructions+=4;NFSU2_TR(0x6a73f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a73fb:{NFSU2_TR(0x6a73fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a73fe:{NFSU2_TR(0x6a73fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7401:{NFSU2_TR(0x6a7401);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a72c3u);}goto L6a72c3;}}
}
B6a7407:L6a7407:{c.instructions+=1;NFSU2_TR(0x6a7407);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7409:L6a7409:{c.instructions+=2;NFSU2_TR(0x6a7409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a740f:{NFSU2_TR(0x6a740f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7414ull));
TAIL_STATIC(0x69f745u,69f);
}
B6a7414:L6a7414:{c.instructions+=2;NFSU2_TR(0x6a7414);
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
B6a7416:{NFSU2_TR(0x6a7416);
if(r1(R+518)){{goto L6a741a;}}
}
B6a7418:L6a7418:{c.instructions+=1;NFSU2_TR(0x6a7418);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a745f;}}
}
B6a741a:L6a741a:{c.instructions+=2;NFSU2_TR(0x6a741a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7420:{NFSU2_TR(0x6a7420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7425ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6a7425:L6a7425:{c.instructions+=2;NFSU2_TR(0x6a7425);
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
B6a7427:{NFSU2_TR(0x6a7427);
if(r1(R+518)){{goto L6a742b;}}
}
B6a7429:L6a7429:{c.instructions+=1;NFSU2_TR(0x6a7429);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a745f;}}
}
B6a742b:L6a742b:{c.instructions+=2;NFSU2_TR(0x6a742b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7431:{NFSU2_TR(0x6a7431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7436ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a7436:L6a7436:{c.instructions+=2;NFSU2_TR(0x6a7436);
__builtin_memmove((R+4),(R+24),4);
}
B6a7438:{NFSU2_TR(0x6a7438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a743dull));
TAIL_STATIC(0x69f745u,69f);
}
B6a743d:L6a743d:{c.instructions+=2;NFSU2_TR(0x6a743d);
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
B6a743f:{NFSU2_TR(0x6a743f);
if(r1(R+518)){{goto L6a7443;}}
}
B6a7441:L6a7441:{c.instructions+=1;NFSU2_TR(0x6a7441);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a745f;}}
}
B6a7443:L6a7443:{c.instructions+=2;NFSU2_TR(0x6a7443);
__builtin_memmove((R+4),(R+24),4);
}
B6a7445:{NFSU2_TR(0x6a7445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a744aull));
TAIL_STATIC(0x69a74eu,69a);
}
B6a744a:L6a744a:{c.instructions+=2;NFSU2_TR(0x6a744a);
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
B6a744c:{NFSU2_TR(0x6a744c);
if(r1(R+518)){{goto L6a7450;}}
}
B6a744e:L6a744e:{c.instructions+=1;NFSU2_TR(0x6a744e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a745f;}}
}
B6a7450:L6a7450:{c.instructions+=2;NFSU2_TR(0x6a7450);
__builtin_memmove((R+4),(R+24),4);
}
B6a7452:{NFSU2_TR(0x6a7452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7457ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6a7457:L6a7457:{c.instructions+=2;NFSU2_TR(0x6a7457);
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
B6a7459:{NFSU2_TR(0x6a7459);
if(r1(R+518)){{goto L6a745d;}}
}
B6a745b:L6a745b:{c.instructions+=1;NFSU2_TR(0x6a745b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6a745f;}}
}
B6a745d:L6a745d:{c.instructions+=1;NFSU2_TR(0x6a745d);
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
B6a745f:L6a745f:{c.instructions+=5;NFSU2_TR(0x6a745f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a7460:{NFSU2_TR(0x6a7460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a7461:{NFSU2_TR(0x6a7461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a7462:{NFSU2_TR(0x6a7462);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a7463:{NFSU2_TR(0x6a7463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a7464:L6a7464:{c.instructions+=2;NFSU2_TR(0x6a7464);
w4(R+0,u32(0x8007000eull));
}
B6a7469:{NFSU2_TR(0x6a7469);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a745fu);}goto L6a745f;}
}
B6a746b:L6a746b:{c.instructions+=3;NFSU2_TR(0x6a746b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a746d:{NFSU2_TR(0x6a746d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7473:{NFSU2_TR(0x6a7473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7479;}}
}
B6a7475:L6a7475:{c.instructions+=3;NFSU2_TR(0x6a7475);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a7477:{NFSU2_TR(0x6a7477);
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
B6a7478:{NFSU2_TR(0x6a7478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a7479:L6a7479:{c.instructions+=2;NFSU2_TR(0x6a7479);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a747c:{NFSU2_TR(0x6a747c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a74bb;}}
}
B6a747e:L6a747e:{c.instructions+=2;NFSU2_TR(0x6a747e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a747f:{NFSU2_TR(0x6a747f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7480:L6a7480:{c.instructions+=4;NFSU2_TR(0x6a7480);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7483:{NFSU2_TR(0x6a7483);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7486:{NFSU2_TR(0x6a7486);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a748a:{NFSU2_TR(0x6a748a);
if(r1(R+518)){{goto L6a74b3;}}
}
B6a748c:L6a748c:{c.instructions+=11;NFSU2_TR(0x6a748c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a748f:{NFSU2_TR(0x6a748f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a7495:{NFSU2_TR(0x6a7495);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a7498:{NFSU2_TR(0x6a7498);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a749b:{NFSU2_TR(0x6a749b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a749e:{NFSU2_TR(0x6a749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a74a1:{NFSU2_TR(0x6a74a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a74a7:{NFSU2_TR(0x6a74a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a74aa:{NFSU2_TR(0x6a74aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a74ad:{NFSU2_TR(0x6a74ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a74b0:{NFSU2_TR(0x6a74b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a74b3:L6a74b3:{c.instructions+=3;NFSU2_TR(0x6a74b3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a74b4:{NFSU2_TR(0x6a74b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a74b7:{NFSU2_TR(0x6a74b7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7480u);}goto L6a7480;}}
}
B6a74b9:L6a74b9:{c.instructions+=2;NFSU2_TR(0x6a74b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a74ba:{NFSU2_TR(0x6a74ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a74bb:L6a74bb:{c.instructions+=2;NFSU2_TR(0x6a74bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a74c1:{NFSU2_TR(0x6a74c1);
TAIL_STATIC(0x69f2c9u,69f);
}
B6a74c6:L6a74c6:{c.instructions+=11;NFSU2_TR(0x6a74c6);
__builtin_memmove((R+28),(R+28),4);
}
B6a74c8:{NFSU2_TR(0x6a74c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a74c9:{NFSU2_TR(0x6a74c9);
__builtin_memmove((R+20),(R+16),4);
}
B6a74cb:{NFSU2_TR(0x6a74cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B6a74ce:{NFSU2_TR(0x6a74ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a74cf:{NFSU2_TR(0x6a74cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a74d0:{NFSU2_TR(0x6a74d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a74d1:{NFSU2_TR(0x6a74d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a74d3:{NFSU2_TR(0x6a74d3);
__builtin_memmove((R+28),(R+4),4);
}
B6a74d5:{NFSU2_TR(0x6a74d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a74d8:{NFSU2_TR(0x6a74d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a74ddull));
TAIL_STATIC(0x69e7abu,69e);
}
B6a74dd:L6a74dd:{c.instructions+=1;NFSU2_TR(0x6a74dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a74e2ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a74e2:L6a74e2:{c.instructions+=5;NFSU2_TR(0x6a74e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a74e6:{NFSU2_TR(0x6a74e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a74ea:{NFSU2_TR(0x6a74ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a74ed:{NFSU2_TR(0x6a74ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a74f0:{NFSU2_TR(0x6a74f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a805cu,6a8);}
}
B6a74f6:L6a74f6:{c.instructions+=1;NFSU2_TR(0x6a74f6);
{goto L6a74fa;}
}
B6a74f8:L6a74f8:{c.instructions+=1;NFSU2_TR(0x6a74f8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a74fa:L6a74fa:{c.instructions+=7;NFSU2_TR(0x6a74fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a74fd:{NFSU2_TR(0x6a74fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7500:{NFSU2_TR(0x6a7500);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a7503:{NFSU2_TR(0x6a7503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a7505:{NFSU2_TR(0x6a7505);
__builtin_memmove((R+8),(R+0),4);
}
B6a7507:{NFSU2_TR(0x6a7507);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6a750d:{NFSU2_TR(0x6a750d);
if(r1(R+518)){TAIL_STATIC(0x6a8047u,6a8);}
}
B6a7513:L6a7513:{c.instructions+=4;NFSU2_TR(0x6a7513);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7519:{NFSU2_TR(0x6a7519);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a751c:{NFSU2_TR(0x6a751c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a751f:{NFSU2_TR(0x6a751f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7555;}}
}
B6a7521:L6a7521:{c.instructions+=3;NFSU2_TR(0x6a7521);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a7523:{NFSU2_TR(0x6a7523);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7526:{NFSU2_TR(0x6a7526);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7547;}}
}
B6a7528:L6a7528:{c.instructions+=2;NFSU2_TR(0x6a7528);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a752b:{NFSU2_TR(0x6a752b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a752e:L6a752e:{c.instructions+=6;NFSU2_TR(0x6a752e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a7530:{NFSU2_TR(0x6a7530);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7533:{NFSU2_TR(0x6a7533);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7536:{NFSU2_TR(0x6a7536);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7539:{NFSU2_TR(0x6a7539);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a753c:{NFSU2_TR(0x6a753c);
if(r1(R+518)){{goto L6a7547;}}
}
B6a753e:L6a753e:{c.instructions+=4;NFSU2_TR(0x6a753e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a753f:{NFSU2_TR(0x6a753f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a7542:{NFSU2_TR(0x6a7542);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a7545:{NFSU2_TR(0x6a7545);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a752eu);}goto L6a752e;}}
}
B6a7547:L6a7547:{c.instructions+=2;NFSU2_TR(0x6a7547);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a754a:{NFSU2_TR(0x6a754a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7f98;}}
}
B6a7550:L6a7550:{c.instructions+=1;NFSU2_TR(0x6a7550);
{goto L6a7f87;}
}
B6a7555:L6a7555:{c.instructions+=4;NFSU2_TR(0x6a7555);
__builtin_memmove((R+4),(R+0),4);
}
B6a7557:{NFSU2_TR(0x6a7557);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6a755d:{NFSU2_TR(0x6a755d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7563:{NFSU2_TR(0x6a7563);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7739;}}
}
B6a7569:L6a7569:{c.instructions+=4;NFSU2_TR(0x6a7569);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a756c:{NFSU2_TR(0x6a756c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a756f:{NFSU2_TR(0x6a756f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7572:{NFSU2_TR(0x6a7572);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a768a;}}
}
B6a7578:L6a7578:{c.instructions+=15;NFSU2_TR(0x6a7578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a757b:{NFSU2_TR(0x6a757b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a757e:{NFSU2_TR(0x6a757e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7581:{NFSU2_TR(0x6a7581);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a7584:{NFSU2_TR(0x6a7584);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7587:{NFSU2_TR(0x6a7587);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a758a:{NFSU2_TR(0x6a758a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a758d:{NFSU2_TR(0x6a758d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7590:{NFSU2_TR(0x6a7590);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7593:{NFSU2_TR(0x6a7593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7595:{NFSU2_TR(0x6a7595);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a759b:{NFSU2_TR(0x6a759b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a75a1:{NFSU2_TR(0x6a75a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a75a4:{NFSU2_TR(0x6a75a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a75a7:{NFSU2_TR(0x6a75a7);
if(r1(R+518)){{goto L6a75b5;}}
}
B6a75a9:L6a75a9:{c.instructions+=2;NFSU2_TR(0x6a75a9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a75af:{NFSU2_TR(0x6a75af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a763c;}}
}
B6a75b5:L6a75b5:{c.instructions+=10;NFSU2_TR(0x6a75b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a75b8:{NFSU2_TR(0x6a75b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a75bb:{NFSU2_TR(0x6a75bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a75bd:{NFSU2_TR(0x6a75bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a75c0:{NFSU2_TR(0x6a75c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a75c2:{NFSU2_TR(0x6a75c2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6a75c4:{NFSU2_TR(0x6a75c4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xe000000ull))));
}
B6a75c9:{NFSU2_TR(0x6a75c9);
w4(R+12,u32(0x2000000ull));
}
B6a75ce:{NFSU2_TR(0x6a75ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a75d0:{NFSU2_TR(0x6a75d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a75e4;}}
}
B6a75d2:L6a75d2:{c.instructions+=3;NFSU2_TR(0x6a75d2);
w4(R+12,u32(0x4000000ull));
}
B6a75d7:{NFSU2_TR(0x6a75d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a75d9:{NFSU2_TR(0x6a75d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a75e4;}}
}
B6a75db:L6a75db:{c.instructions+=3;NFSU2_TR(0x6a75db);
w4(R+12,u32(0x8000000ull));
}
B6a75e0:{NFSU2_TR(0x6a75e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a75e2:{NFSU2_TR(0x6a75e2);
if(r1(R+518)){{goto L6a75e6;}}
}
B6a75e4:L6a75e4:{c.instructions+=1;NFSU2_TR(0x6a75e4);
__builtin_memmove((R+0),(R+12),4);
}
B6a75e6:L6a75e6:{c.instructions+=4;NFSU2_TR(0x6a75e6);
__builtin_memmove((R+12),(R+4),4);
}
B6a75e8:{NFSU2_TR(0x6a75e8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a75ee:{NFSU2_TR(0x6a75ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a75f0:{NFSU2_TR(0x6a75f0);
if(r1(R+518)){{goto L6a7606;}}
}
B6a75f2:L6a75f2:{c.instructions+=5;NFSU2_TR(0x6a75f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a75f5:{NFSU2_TR(0x6a75f5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf1ffffffull))));
}
B6a75fb:{NFSU2_TR(0x6a75fb);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6a75fd:{NFSU2_TR(0x6a75fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6a75ff:{NFSU2_TR(0x6a75ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7606:L6a7606:{c.instructions+=5;NFSU2_TR(0x6a7606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7608:{NFSU2_TR(0x6a7608);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a760b:{NFSU2_TR(0x6a760b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe000000ull))));
}
B6a7611:{NFSU2_TR(0x6a7611);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7613:{NFSU2_TR(0x6a7613);
if(r1(R+518)){{goto L6a763c;}}
}
B6a7615:L6a7615:{c.instructions+=5;NFSU2_TR(0x6a7615);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7618:{NFSU2_TR(0x6a7618);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a761b:{NFSU2_TR(0x6a761b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a761e:{NFSU2_TR(0x6a761e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7622:{NFSU2_TR(0x6a7622);
if(r1(R+518)){{goto L6a763c;}}
}
B6a7624:L6a7624:{c.instructions+=4;NFSU2_TR(0x6a7624);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7626:{NFSU2_TR(0x6a7626);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7627:{NFSU2_TR(0x6a7627);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a762a:{NFSU2_TR(0x6a762a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a763c;}}
}
B6a762c:L6a762c:{c.instructions+=5;NFSU2_TR(0x6a762c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a762f:{NFSU2_TR(0x6a762f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf1ffffffull))));
}
B6a7635:{NFSU2_TR(0x6a7635);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6a7637:{NFSU2_TR(0x6a7637);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a7639:{NFSU2_TR(0x6a7639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a763c:L6a763c:{c.instructions+=6;NFSU2_TR(0x6a763c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a763f:{NFSU2_TR(0x6a763f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7642:{NFSU2_TR(0x6a7642);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7643:{NFSU2_TR(0x6a7643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7644:{NFSU2_TR(0x6a7644);
__builtin_memmove((R+4),(R+28),4);
}
B6a7646:{NFSU2_TR(0x6a7646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a764bull));
TAIL_STATIC(0x6a11c5u,6a1);
}
B6a764b:L6a764b:{c.instructions+=2;NFSU2_TR(0x6a764b);
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
B6a764d:{NFSU2_TR(0x6a764d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a806au,6a8);}
}
B6a7653:L6a7653:{c.instructions+=6;NFSU2_TR(0x6a7653);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7656:{NFSU2_TR(0x6a7656);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a7659:{NFSU2_TR(0x6a7659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a765b:{NFSU2_TR(0x6a765b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a765e:{NFSU2_TR(0x6a765e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7660:{NFSU2_TR(0x6a7660);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7667;}}
}
B6a7662:L6a7662:{c.instructions+=2;NFSU2_TR(0x6a7662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7665:{NFSU2_TR(0x6a7665);
{goto L6a767b;}
}
B6a7667:L6a7667:{c.instructions+=3;NFSU2_TR(0x6a7667);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a766a:{NFSU2_TR(0x6a766a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a766e:{NFSU2_TR(0x6a766e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a767b;}}
}
B6a7670:L6a7670:{c.instructions+=4;NFSU2_TR(0x6a7670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7672:{NFSU2_TR(0x6a7672);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7675:{NFSU2_TR(0x6a7675);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7678:{NFSU2_TR(0x6a7678);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a767b:L6a767b:{c.instructions+=4;NFSU2_TR(0x6a767b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a767e:{NFSU2_TR(0x6a767e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7681:{NFSU2_TR(0x6a7681);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7684:{NFSU2_TR(0x6a7684);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7578u);}goto L6a7578;}}
}
B6a768a:L6a768a:{c.instructions+=3;NFSU2_TR(0x6a768a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a768d:{NFSU2_TR(0x6a768d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7690:{NFSU2_TR(0x6a7690);
if(r1(R+518)){{goto L6a7f98;}}
}
B6a7696:L6a7696:{c.instructions+=5;NFSU2_TR(0x6a7696);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a7698:{NFSU2_TR(0x6a7698);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a769a:{NFSU2_TR(0x6a769a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a769d:{NFSU2_TR(0x6a769d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a76a0:{NFSU2_TR(0x6a76a0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a772c;}}
}
B6a76a6:L6a76a6:{c.instructions+=7;NFSU2_TR(0x6a76a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a76a9:{NFSU2_TR(0x6a76a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a76ac:{NFSU2_TR(0x6a76ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a76af:{NFSU2_TR(0x6a76af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a76b2:{NFSU2_TR(0x6a76b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a76b5:{NFSU2_TR(0x6a76b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a76b8:{NFSU2_TR(0x6a76b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a76d4;}}
}
B6a76ba:L6a76ba:{c.instructions+=9;NFSU2_TR(0x6a76ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a76bd:{NFSU2_TR(0x6a76bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6a76c0:{NFSU2_TR(0x6a76c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a76c3:{NFSU2_TR(0x6a76c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a76c6:{NFSU2_TR(0x6a76c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a76c9:{NFSU2_TR(0x6a76c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a76cc:{NFSU2_TR(0x6a76cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a76cf:{NFSU2_TR(0x6a76cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a76d2:{NFSU2_TR(0x6a76d2);
{goto L6a770d;}
}
B6a76d4:L6a76d4:{c.instructions+=8;NFSU2_TR(0x6a76d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a76d7:{NFSU2_TR(0x6a76d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a76da:{NFSU2_TR(0x6a76da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a76dd:{NFSU2_TR(0x6a76dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a76e0:{NFSU2_TR(0x6a76e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a76e3:{NFSU2_TR(0x6a76e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a76e6:{NFSU2_TR(0x6a76e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a76ea:{NFSU2_TR(0x6a76ea);
if(r1(R+518)){{goto L6a770d;}}
}
B6a76ec:L6a76ec:{c.instructions+=2;NFSU2_TR(0x6a76ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a76f0:{NFSU2_TR(0x6a76f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a770d;}}
}
B6a76f2:L6a76f2:{c.instructions+=9;NFSU2_TR(0x6a76f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a76f5:{NFSU2_TR(0x6a76f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a76f8:{NFSU2_TR(0x6a76f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a76fb:{NFSU2_TR(0x6a76fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a76fe:{NFSU2_TR(0x6a76fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7701:{NFSU2_TR(0x6a7701);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7704:{NFSU2_TR(0x6a7704);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7707:{NFSU2_TR(0x6a7707);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a770a:{NFSU2_TR(0x6a770a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a770d:L6a770d:{c.instructions+=4;NFSU2_TR(0x6a770d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7710:{NFSU2_TR(0x6a7710);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7713:{NFSU2_TR(0x6a7713);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7716:{NFSU2_TR(0x6a7716);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a76a6u);}goto L6a76a6;}}
}
B6a7718:L6a7718:{c.instructions+=3;NFSU2_TR(0x6a7718);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a771b:{NFSU2_TR(0x6a771b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a771d:{NFSU2_TR(0x6a771d);
if(r1(R+518)){{goto L6a772c;}}
}
B6a771f:L6a771f:{c.instructions+=5;NFSU2_TR(0x6a771f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a7721:{NFSU2_TR(0x6a7721);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B6a7723:{NFSU2_TR(0x6a7723);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6a7728:{NFSU2_TR(0x6a7728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B6a772a:{NFSU2_TR(0x6a772a);
{goto L6a772e;}
}
B6a772c:L6a772c:{c.instructions+=1;NFSU2_TR(0x6a772c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a772e:L6a772e:{c.instructions+=3;NFSU2_TR(0x6a772e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7731:{NFSU2_TR(0x6a7731);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7734:{NFSU2_TR(0x6a7734);
{goto L6a7f8f;}
}
B6a7739:L6a7739:{c.instructions+=2;NFSU2_TR(0x6a7739);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a773f:{NFSU2_TR(0x6a773f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7a07;}}
}
B6a7745:L6a7745:{c.instructions+=4;NFSU2_TR(0x6a7745);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7748:{NFSU2_TR(0x6a7748);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a774b:{NFSU2_TR(0x6a774b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a774e:{NFSU2_TR(0x6a774e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a78cb;}}
}
B6a7754:L6a7754:{c.instructions+=21;NFSU2_TR(0x6a7754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7757:{NFSU2_TR(0x6a7757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a775a:{NFSU2_TR(0x6a775a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a775d:{NFSU2_TR(0x6a775d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a7760:{NFSU2_TR(0x6a7760);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7763:{NFSU2_TR(0x6a7763);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7766:{NFSU2_TR(0x6a7766);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7769:{NFSU2_TR(0x6a7769);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a776c:{NFSU2_TR(0x6a776c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a776f:{NFSU2_TR(0x6a776f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7772:{NFSU2_TR(0x6a7772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7775:{NFSU2_TR(0x6a7775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6a7778:{NFSU2_TR(0x6a7778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a777b:{NFSU2_TR(0x6a777b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a777e:{NFSU2_TR(0x6a777e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7781:{NFSU2_TR(0x6a7781);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7784:{NFSU2_TR(0x6a7784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7786:{NFSU2_TR(0x6a7786);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a778c:{NFSU2_TR(0x6a778c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7792:{NFSU2_TR(0x6a7792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7795:{NFSU2_TR(0x6a7795);
if(r1(R+518)){{goto L6a77a3;}}
}
B6a7797:L6a7797:{c.instructions+=2;NFSU2_TR(0x6a7797);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a779d:{NFSU2_TR(0x6a779d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a787a;}}
}
B6a77a3:L6a77a3:{c.instructions+=14;NFSU2_TR(0x6a77a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a77a6:{NFSU2_TR(0x6a77a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a77a9:{NFSU2_TR(0x6a77a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a77ac:{NFSU2_TR(0x6a77ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a77af:{NFSU2_TR(0x6a77af);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a77b2:{NFSU2_TR(0x6a77b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a77b4:{NFSU2_TR(0x6a77b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a77b7:{NFSU2_TR(0x6a77b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a77b9:{NFSU2_TR(0x6a77b9);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6a77bb:{NFSU2_TR(0x6a77bb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe000000ull))));
}
B6a77c1:{NFSU2_TR(0x6a77c1);
w4(R+12,u32(0x8000000ull));
}
B6a77c6:{NFSU2_TR(0x6a77c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a77c8:{NFSU2_TR(0x6a77c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a77cb:{NFSU2_TR(0x6a77cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a77df;}}
}
B6a77cd:L6a77cd:{c.instructions+=3;NFSU2_TR(0x6a77cd);
w4(R+12,u32(0x4000000ull));
}
B6a77d2:{NFSU2_TR(0x6a77d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a77d4:{NFSU2_TR(0x6a77d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a77df;}}
}
B6a77d6:L6a77d6:{c.instructions+=3;NFSU2_TR(0x6a77d6);
w4(R+12,u32(0x2000000ull));
}
B6a77db:{NFSU2_TR(0x6a77db);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a77dd:{NFSU2_TR(0x6a77dd);
if(r1(R+518)){{goto L6a77e1;}}
}
B6a77df:L6a77df:{c.instructions+=1;NFSU2_TR(0x6a77df);
__builtin_memmove((R+4),(R+12),4);
}
B6a77e1:L6a77e1:{c.instructions+=7;NFSU2_TR(0x6a77e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a77e4:{NFSU2_TR(0x6a77e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a77e6:{NFSU2_TR(0x6a77e6);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a77ec:{NFSU2_TR(0x6a77ec);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B6a77ee:{NFSU2_TR(0x6a77ee);
w4(R+12,u32(0x2000000ull));
}
B6a77f3:{NFSU2_TR(0x6a77f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a77f5:{NFSU2_TR(0x6a77f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7809;}}
}
B6a77f7:L6a77f7:{c.instructions+=3;NFSU2_TR(0x6a77f7);
w4(R+12,u32(0x4000000ull));
}
B6a77fc:{NFSU2_TR(0x6a77fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a77fe:{NFSU2_TR(0x6a77fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7809;}}
}
B6a7800:L6a7800:{c.instructions+=3;NFSU2_TR(0x6a7800);
w4(R+12,u32(0x8000000ull));
}
B6a7805:{NFSU2_TR(0x6a7805);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7807:{NFSU2_TR(0x6a7807);
if(r1(R+518)){{goto L6a780b;}}
}
B6a7809:L6a7809:{c.instructions+=1;NFSU2_TR(0x6a7809);
__builtin_memmove((R+4),(R+12),4);
}
B6a780b:L6a780b:{c.instructions+=4;NFSU2_TR(0x6a780b);
__builtin_memmove((R+12),(R+8),4);
}
B6a780d:{NFSU2_TR(0x6a780d);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a7813:{NFSU2_TR(0x6a7813);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7815:{NFSU2_TR(0x6a7815);
if(r1(R+518)){{goto L6a7844;}}
}
B6a7817:L6a7817:{c.instructions+=6;NFSU2_TR(0x6a7817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a781a:{NFSU2_TR(0x6a781a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a781d:{NFSU2_TR(0x6a781d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7820:{NFSU2_TR(0x6a7820);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7823:{NFSU2_TR(0x6a7823);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7827:{NFSU2_TR(0x6a7827);
if(r1(R+518)){{goto L6a7841;}}
}
B6a7829:L6a7829:{c.instructions+=5;NFSU2_TR(0x6a7829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a782c:{NFSU2_TR(0x6a782c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a782e:{NFSU2_TR(0x6a782e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a782f:{NFSU2_TR(0x6a782f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7832:{NFSU2_TR(0x6a7832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7841;}}
}
B6a7834:L6a7834:{c.instructions+=4;NFSU2_TR(0x6a7834);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf1ffffffull))));
}
B6a783a:{NFSU2_TR(0x6a783a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6a783c:{NFSU2_TR(0x6a783c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a783e:{NFSU2_TR(0x6a783e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7841:L6a7841:{c.instructions+=1;NFSU2_TR(0x6a7841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7844:L6a7844:{c.instructions+=5;NFSU2_TR(0x6a7844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7846:{NFSU2_TR(0x6a7846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7849:{NFSU2_TR(0x6a7849);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xe000000ull))));
}
B6a784f:{NFSU2_TR(0x6a784f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7851:{NFSU2_TR(0x6a7851);
if(r1(R+518)){{goto L6a787a;}}
}
B6a7853:L6a7853:{c.instructions+=5;NFSU2_TR(0x6a7853);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7856:{NFSU2_TR(0x6a7856);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7859:{NFSU2_TR(0x6a7859);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a785c:{NFSU2_TR(0x6a785c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7860:{NFSU2_TR(0x6a7860);
if(r1(R+518)){{goto L6a787a;}}
}
B6a7862:L6a7862:{c.instructions+=4;NFSU2_TR(0x6a7862);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7864:{NFSU2_TR(0x6a7864);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7865:{NFSU2_TR(0x6a7865);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7868:{NFSU2_TR(0x6a7868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a787a;}}
}
B6a786a:L6a786a:{c.instructions+=5;NFSU2_TR(0x6a786a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a786d:{NFSU2_TR(0x6a786d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf1ffffffull))));
}
B6a7873:{NFSU2_TR(0x6a7873);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6a7875:{NFSU2_TR(0x6a7875);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a7877:{NFSU2_TR(0x6a7877);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a787a:L6a787a:{c.instructions+=7;NFSU2_TR(0x6a787a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a787d:{NFSU2_TR(0x6a787d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7880:{NFSU2_TR(0x6a7880);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7883:{NFSU2_TR(0x6a7883);
__builtin_memmove((R+4),(R+28),4);
}
B6a7885:{NFSU2_TR(0x6a7885);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7886:{NFSU2_TR(0x6a7886);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7887:{NFSU2_TR(0x6a7887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a788cull));
TAIL_STATIC(0x6a18f6u,6a1);
}
B6a788c:L6a788c:{c.instructions+=2;NFSU2_TR(0x6a788c);
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
B6a788e:{NFSU2_TR(0x6a788e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a806au,6a8);}
}
B6a7894:L6a7894:{c.instructions+=6;NFSU2_TR(0x6a7894);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7897:{NFSU2_TR(0x6a7897);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a789a:{NFSU2_TR(0x6a789a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a789c:{NFSU2_TR(0x6a789c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a789f:{NFSU2_TR(0x6a789f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a78a1:{NFSU2_TR(0x6a78a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a78a8;}}
}
B6a78a3:L6a78a3:{c.instructions+=2;NFSU2_TR(0x6a78a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a78a6:{NFSU2_TR(0x6a78a6);
{goto L6a78bc;}
}
B6a78a8:L6a78a8:{c.instructions+=3;NFSU2_TR(0x6a78a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a78ab:{NFSU2_TR(0x6a78ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a78af:{NFSU2_TR(0x6a78af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a78bc;}}
}
B6a78b1:L6a78b1:{c.instructions+=4;NFSU2_TR(0x6a78b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a78b3:{NFSU2_TR(0x6a78b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a78b6:{NFSU2_TR(0x6a78b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a78b9:{NFSU2_TR(0x6a78b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a78bc:L6a78bc:{c.instructions+=4;NFSU2_TR(0x6a78bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a78bf:{NFSU2_TR(0x6a78bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a78c2:{NFSU2_TR(0x6a78c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a78c5:{NFSU2_TR(0x6a78c5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7754u);}goto L6a7754;}}
}
B6a78cb:L6a78cb:{c.instructions+=3;NFSU2_TR(0x6a78cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a78ce:{NFSU2_TR(0x6a78ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a78d1:{NFSU2_TR(0x6a78d1);
if(r1(R+518)){{goto L6a7f98;}}
}
B6a78d7:L6a78d7:{c.instructions+=2;NFSU2_TR(0x6a78d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a78db:{NFSU2_TR(0x6a78db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a798a;}}
}
B6a78e1:L6a78e1:{c.instructions+=5;NFSU2_TR(0x6a78e1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a78e3:{NFSU2_TR(0x6a78e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a78e4:{NFSU2_TR(0x6a78e4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a78e6:{NFSU2_TR(0x6a78e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a78e9:{NFSU2_TR(0x6a78e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7920;}}
}
B6a78eb:L6a78eb:{c.instructions+=8;NFSU2_TR(0x6a78eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a78ee:{NFSU2_TR(0x6a78ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a78f1:{NFSU2_TR(0x6a78f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a78f3:{NFSU2_TR(0x6a78f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a78f6:{NFSU2_TR(0x6a78f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a78f9:{NFSU2_TR(0x6a78f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a78fc:{NFSU2_TR(0x6a78fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a78ff:{NFSU2_TR(0x6a78ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a7902:L6a7902:{c.instructions+=6;NFSU2_TR(0x6a7902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a7904:{NFSU2_TR(0x6a7904);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7907:{NFSU2_TR(0x6a7907);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a790a:{NFSU2_TR(0x6a790a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a790d:{NFSU2_TR(0x6a790d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7910:{NFSU2_TR(0x6a7910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7983;}}
}
B6a7912:L6a7912:{c.instructions+=5;NFSU2_TR(0x6a7912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7915:{NFSU2_TR(0x6a7915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7918:{NFSU2_TR(0x6a7918);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a791b:{NFSU2_TR(0x6a791b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a791e:{NFSU2_TR(0x6a791e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7902u);}goto L6a7902;}}
}
B6a7920:L6a7920:{c.instructions+=3;NFSU2_TR(0x6a7920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7924:{NFSU2_TR(0x6a7924);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7928:{NFSU2_TR(0x6a7928);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7f87;}}
}
B6a792e:L6a792e:{c.instructions+=12;NFSU2_TR(0x6a792e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7931:{NFSU2_TR(0x6a7931);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7934:{NFSU2_TR(0x6a7934);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7937:{NFSU2_TR(0x6a7937);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a793a:{NFSU2_TR(0x6a793a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a793d:{NFSU2_TR(0x6a793d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7940:{NFSU2_TR(0x6a7940);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7943:{NFSU2_TR(0x6a7943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7946:{NFSU2_TR(0x6a7946);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7949:{NFSU2_TR(0x6a7949);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a794c:{NFSU2_TR(0x6a794c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7950:{NFSU2_TR(0x6a7950);
if(r1(R+518)){{goto L6a7973;}}
}
B6a7952:L6a7952:{c.instructions+=2;NFSU2_TR(0x6a7952);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7956:{NFSU2_TR(0x6a7956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7973;}}
}
B6a7958:L6a7958:{c.instructions+=9;NFSU2_TR(0x6a7958);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a795b:{NFSU2_TR(0x6a795b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a795e:{NFSU2_TR(0x6a795e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7961:{NFSU2_TR(0x6a7961);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7964:{NFSU2_TR(0x6a7964);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7967:{NFSU2_TR(0x6a7967);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a796a:{NFSU2_TR(0x6a796a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a796d:{NFSU2_TR(0x6a796d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7970:{NFSU2_TR(0x6a7970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7973:L6a7973:{c.instructions+=4;NFSU2_TR(0x6a7973);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7976:{NFSU2_TR(0x6a7976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7979:{NFSU2_TR(0x6a7979);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a797c:{NFSU2_TR(0x6a797c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a792eu);}goto L6a792e;}}
}
B6a797e:L6a797e:{c.instructions+=1;NFSU2_TR(0x6a797e);
{goto L6a7f87;}
}
B6a7983:L6a7983:{c.instructions+=3;NFSU2_TR(0x6a7983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7986:{NFSU2_TR(0x6a7986);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7988:{NFSU2_TR(0x6a7988);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7920u);}goto L6a7920;}}
}
B6a798a:L6a798a:{c.instructions+=3;NFSU2_TR(0x6a798a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a798e:{NFSU2_TR(0x6a798e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7990:{NFSU2_TR(0x6a7990);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a79de;}}
}
B6a7992:L6a7992:{c.instructions+=8;NFSU2_TR(0x6a7992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7995:{NFSU2_TR(0x6a7995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7998:{NFSU2_TR(0x6a7998);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a799b:{NFSU2_TR(0x6a799b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a799e:{NFSU2_TR(0x6a799e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a79a1:{NFSU2_TR(0x6a79a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a79a4:{NFSU2_TR(0x6a79a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a79a7:{NFSU2_TR(0x6a79a7);
if(r1(R+518)){{goto L6a79d3;}}
}
B6a79a9:L6a79a9:{c.instructions+=8;NFSU2_TR(0x6a79a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a79ab:{NFSU2_TR(0x6a79ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a79ae:{NFSU2_TR(0x6a79ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a79b1:{NFSU2_TR(0x6a79b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a79b3:{NFSU2_TR(0x6a79b3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf1ffffffull))));
}
B6a79b8:{NFSU2_TR(0x6a79b8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B6a79ba:{NFSU2_TR(0x6a79ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a79bc:{NFSU2_TR(0x6a79bc);
if(r1(R+518)){{goto L6a79ca;}}
}
B6a79be:L6a79be:{c.instructions+=3;NFSU2_TR(0x6a79be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a79c1:{NFSU2_TR(0x6a79c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a79c3:{NFSU2_TR(0x6a79c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a79ca:L6a79ca:{c.instructions+=3;NFSU2_TR(0x6a79ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a79cd:{NFSU2_TR(0x6a79cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a79d0:{NFSU2_TR(0x6a79d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a79d3:L6a79d3:{c.instructions+=4;NFSU2_TR(0x6a79d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a79d6:{NFSU2_TR(0x6a79d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a79d9:{NFSU2_TR(0x6a79d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a79dc:{NFSU2_TR(0x6a79dc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7992u);}goto L6a7992;}}
}
B6a79de:L6a79de:{c.instructions+=4;NFSU2_TR(0x6a79de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a79e1:{NFSU2_TR(0x6a79e1);
__builtin_memmove((R+0),(R+12),4);
}
B6a79e3:{NFSU2_TR(0x6a79e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a79e6:{NFSU2_TR(0x6a79e6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a79ff;}}
}
B6a79e8:L6a79e8:{c.instructions+=4;NFSU2_TR(0x6a79e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a79eb:{NFSU2_TR(0x6a79eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a79ee:{NFSU2_TR(0x6a79ee);
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
B6a79f0:{NFSU2_TR(0x6a79f0);
if(r1(R+518)){{goto L6a79f9;}}
}
B6a79f2:L6a79f2:{c.instructions+=2;NFSU2_TR(0x6a79f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a79f4:{NFSU2_TR(0x6a79f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a79f9ull));
TAIL_STATIC(0x6750fbu,675);
}
B6a79f9:L6a79f9:{c.instructions+=3;NFSU2_TR(0x6a79f9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a79fa:{NFSU2_TR(0x6a79fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a79fd:{NFSU2_TR(0x6a79fd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a79e8u);}goto L6a79e8;}}
}
B6a79ff:L6a79ff:{c.instructions+=2;NFSU2_TR(0x6a79ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7a02:{NFSU2_TR(0x6a7a02);
{goto L6a7cdb;}
}
B6a7a07:L6a7a07:{c.instructions+=2;NFSU2_TR(0x6a7a07);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7a0d:{NFSU2_TR(0x6a7a0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7ce3;}}
}
B6a7a13:L6a7a13:{c.instructions+=4;NFSU2_TR(0x6a7a13);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7a17:{NFSU2_TR(0x6a7a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a1a:{NFSU2_TR(0x6a7a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a1d:{NFSU2_TR(0x6a7a1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7ba4;}}
}
B6a7a23:L6a7a23:{c.instructions+=25;NFSU2_TR(0x6a7a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7a26:{NFSU2_TR(0x6a7a26);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7a29:{NFSU2_TR(0x6a7a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7a2c:{NFSU2_TR(0x6a7a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7a2f:{NFSU2_TR(0x6a7a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a32:{NFSU2_TR(0x6a7a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7a35:{NFSU2_TR(0x6a7a35);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7a38:{NFSU2_TR(0x6a7a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7a3b:{NFSU2_TR(0x6a7a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a3e:{NFSU2_TR(0x6a7a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7a41:{NFSU2_TR(0x6a7a41);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B6a7a43:{NFSU2_TR(0x6a7a43);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7a46:{NFSU2_TR(0x6a7a46);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7a49:{NFSU2_TR(0x6a7a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7a4c:{NFSU2_TR(0x6a7a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a4f:{NFSU2_TR(0x6a7a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7a52:{NFSU2_TR(0x6a7a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a7a55:{NFSU2_TR(0x6a7a55);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7a58:{NFSU2_TR(0x6a7a58);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7a5b:{NFSU2_TR(0x6a7a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7a5e:{NFSU2_TR(0x6a7a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7a60:{NFSU2_TR(0x6a7a60);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
}
B6a7a66:{NFSU2_TR(0x6a7a66);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7a6c:{NFSU2_TR(0x6a7a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a6f:{NFSU2_TR(0x6a7a6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7b4f;}}
}
B6a7a75:L6a7a75:{c.instructions+=15;NFSU2_TR(0x6a7a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7a78:{NFSU2_TR(0x6a7a78);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7a7b:{NFSU2_TR(0x6a7a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a7e:{NFSU2_TR(0x6a7a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7a81:{NFSU2_TR(0x6a7a81);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7a84:{NFSU2_TR(0x6a7a84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7a87:{NFSU2_TR(0x6a7a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7a89:{NFSU2_TR(0x6a7a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7a8c:{NFSU2_TR(0x6a7a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7a8e:{NFSU2_TR(0x6a7a8e);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6a7a90:{NFSU2_TR(0x6a7a90);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe000000ull))));
}
B6a7a96:{NFSU2_TR(0x6a7a96);
w4(R+12,u32(0x8000000ull));
}
B6a7a9b:{NFSU2_TR(0x6a7a9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7a9d:{NFSU2_TR(0x6a7a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7aa0:{NFSU2_TR(0x6a7aa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7ab4;}}
}
B6a7aa2:L6a7aa2:{c.instructions+=3;NFSU2_TR(0x6a7aa2);
w4(R+12,u32(0x4000000ull));
}
B6a7aa7:{NFSU2_TR(0x6a7aa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7aa9:{NFSU2_TR(0x6a7aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7ab4;}}
}
B6a7aab:L6a7aab:{c.instructions+=3;NFSU2_TR(0x6a7aab);
w4(R+12,u32(0x2000000ull));
}
B6a7ab0:{NFSU2_TR(0x6a7ab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7ab2:{NFSU2_TR(0x6a7ab2);
if(r1(R+518)){{goto L6a7ab6;}}
}
B6a7ab4:L6a7ab4:{c.instructions+=1;NFSU2_TR(0x6a7ab4);
__builtin_memmove((R+4),(R+12),4);
}
B6a7ab6:L6a7ab6:{c.instructions+=7;NFSU2_TR(0x6a7ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7ab9:{NFSU2_TR(0x6a7ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a7abb:{NFSU2_TR(0x6a7abb);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a7ac1:{NFSU2_TR(0x6a7ac1);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B6a7ac3:{NFSU2_TR(0x6a7ac3);
w4(R+12,u32(0x2000000ull));
}
B6a7ac8:{NFSU2_TR(0x6a7ac8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7aca:{NFSU2_TR(0x6a7aca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7ade;}}
}
B6a7acc:L6a7acc:{c.instructions+=3;NFSU2_TR(0x6a7acc);
w4(R+12,u32(0x4000000ull));
}
B6a7ad1:{NFSU2_TR(0x6a7ad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7ad3:{NFSU2_TR(0x6a7ad3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7ade;}}
}
B6a7ad5:L6a7ad5:{c.instructions+=3;NFSU2_TR(0x6a7ad5);
w4(R+12,u32(0x8000000ull));
}
B6a7ada:{NFSU2_TR(0x6a7ada);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7adc:{NFSU2_TR(0x6a7adc);
if(r1(R+518)){{goto L6a7ae0;}}
}
B6a7ade:L6a7ade:{c.instructions+=1;NFSU2_TR(0x6a7ade);
__builtin_memmove((R+4),(R+12),4);
}
B6a7ae0:L6a7ae0:{c.instructions+=4;NFSU2_TR(0x6a7ae0);
__builtin_memmove((R+12),(R+8),4);
}
B6a7ae2:{NFSU2_TR(0x6a7ae2);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xe000000ull))));
}
B6a7ae8:{NFSU2_TR(0x6a7ae8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7aea:{NFSU2_TR(0x6a7aea);
if(r1(R+518)){{goto L6a7b19;}}
}
B6a7aec:L6a7aec:{c.instructions+=6;NFSU2_TR(0x6a7aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7aef:{NFSU2_TR(0x6a7aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7af2:{NFSU2_TR(0x6a7af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7af5:{NFSU2_TR(0x6a7af5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7af8:{NFSU2_TR(0x6a7af8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7afc:{NFSU2_TR(0x6a7afc);
if(r1(R+518)){{goto L6a7b16;}}
}
B6a7afe:L6a7afe:{c.instructions+=5;NFSU2_TR(0x6a7afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7b01:{NFSU2_TR(0x6a7b01);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7b03:{NFSU2_TR(0x6a7b03);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7b04:{NFSU2_TR(0x6a7b04);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7b07:{NFSU2_TR(0x6a7b07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7b16;}}
}
B6a7b09:L6a7b09:{c.instructions+=4;NFSU2_TR(0x6a7b09);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf1ffffffull))));
}
B6a7b0f:{NFSU2_TR(0x6a7b0f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6a7b11:{NFSU2_TR(0x6a7b11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a7b13:{NFSU2_TR(0x6a7b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7b16:L6a7b16:{c.instructions+=1;NFSU2_TR(0x6a7b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7b19:L6a7b19:{c.instructions+=5;NFSU2_TR(0x6a7b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7b1b:{NFSU2_TR(0x6a7b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7b1e:{NFSU2_TR(0x6a7b1e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xe000000ull))));
}
B6a7b24:{NFSU2_TR(0x6a7b24);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7b26:{NFSU2_TR(0x6a7b26);
if(r1(R+518)){{goto L6a7b4f;}}
}
B6a7b28:L6a7b28:{c.instructions+=5;NFSU2_TR(0x6a7b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7b2b:{NFSU2_TR(0x6a7b2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7b2e:{NFSU2_TR(0x6a7b2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7b31:{NFSU2_TR(0x6a7b31);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7b35:{NFSU2_TR(0x6a7b35);
if(r1(R+518)){{goto L6a7b4f;}}
}
B6a7b37:L6a7b37:{c.instructions+=4;NFSU2_TR(0x6a7b37);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7b39:{NFSU2_TR(0x6a7b39);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7b3a:{NFSU2_TR(0x6a7b3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7b3d:{NFSU2_TR(0x6a7b3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7b4f;}}
}
B6a7b3f:L6a7b3f:{c.instructions+=5;NFSU2_TR(0x6a7b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7b42:{NFSU2_TR(0x6a7b42);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xf1ffffffull))));
}
B6a7b48:{NFSU2_TR(0x6a7b48);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B6a7b4a:{NFSU2_TR(0x6a7b4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a7b4c:{NFSU2_TR(0x6a7b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7b4f:L6a7b4f:{c.instructions+=8;NFSU2_TR(0x6a7b4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7b52:{NFSU2_TR(0x6a7b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7b55:{NFSU2_TR(0x6a7b55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7b58:{NFSU2_TR(0x6a7b58);
__builtin_memmove((R+4),(R+28),4);
}
B6a7b5a:{NFSU2_TR(0x6a7b5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7b5d:{NFSU2_TR(0x6a7b5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7b5e:{NFSU2_TR(0x6a7b5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7b5f:{NFSU2_TR(0x6a7b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7b64ull));
TAIL_STATIC(0x6a2873u,6a2);
}
B6a7b64:L6a7b64:{c.instructions+=2;NFSU2_TR(0x6a7b64);
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
B6a7b66:{NFSU2_TR(0x6a7b66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a806au,6a8);}
}
B6a7b6c:L6a7b6c:{c.instructions+=6;NFSU2_TR(0x6a7b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7b6f:{NFSU2_TR(0x6a7b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a7b72:{NFSU2_TR(0x6a7b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7b74:{NFSU2_TR(0x6a7b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7b77:{NFSU2_TR(0x6a7b77);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7b79:{NFSU2_TR(0x6a7b79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7b80;}}
}
B6a7b7b:L6a7b7b:{c.instructions+=2;NFSU2_TR(0x6a7b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7b7e:{NFSU2_TR(0x6a7b7e);
{goto L6a7b94;}
}
B6a7b80:L6a7b80:{c.instructions+=3;NFSU2_TR(0x6a7b80);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7b83:{NFSU2_TR(0x6a7b83);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7b87:{NFSU2_TR(0x6a7b87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7b94;}}
}
B6a7b89:L6a7b89:{c.instructions+=4;NFSU2_TR(0x6a7b89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7b8b:{NFSU2_TR(0x6a7b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7b8e:{NFSU2_TR(0x6a7b8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7b91:{NFSU2_TR(0x6a7b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7b94:L6a7b94:{c.instructions+=5;NFSU2_TR(0x6a7b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7b97:{NFSU2_TR(0x6a7b97);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7b98:{NFSU2_TR(0x6a7b98);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a7b9b:{NFSU2_TR(0x6a7b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7b9e:{NFSU2_TR(0x6a7b9e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7a23u);}goto L6a7a23;}}
}
B6a7ba4:L6a7ba4:{c.instructions+=3;NFSU2_TR(0x6a7ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7ba7:{NFSU2_TR(0x6a7ba7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7baa:{NFSU2_TR(0x6a7baa);
if(r1(R+518)){{goto L6a7f98;}}
}
B6a7bb0:L6a7bb0:{c.instructions+=2;NFSU2_TR(0x6a7bb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7bb4:{NFSU2_TR(0x6a7bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7c63;}}
}
B6a7bba:L6a7bba:{c.instructions+=5;NFSU2_TR(0x6a7bba);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a7bbc:{NFSU2_TR(0x6a7bbc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a7bbd:{NFSU2_TR(0x6a7bbd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7bbf:{NFSU2_TR(0x6a7bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7bc2:{NFSU2_TR(0x6a7bc2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7bf9;}}
}
B6a7bc4:L6a7bc4:{c.instructions+=8;NFSU2_TR(0x6a7bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7bc7:{NFSU2_TR(0x6a7bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7bca:{NFSU2_TR(0x6a7bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7bcc:{NFSU2_TR(0x6a7bcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7bcf:{NFSU2_TR(0x6a7bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7bd2:{NFSU2_TR(0x6a7bd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7bd5:{NFSU2_TR(0x6a7bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7bd8:{NFSU2_TR(0x6a7bd8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a7bdb:L6a7bdb:{c.instructions+=6;NFSU2_TR(0x6a7bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a7bdd:{NFSU2_TR(0x6a7bdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7be0:{NFSU2_TR(0x6a7be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7be3:{NFSU2_TR(0x6a7be3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7be6:{NFSU2_TR(0x6a7be6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7be9:{NFSU2_TR(0x6a7be9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7c5c;}}
}
B6a7beb:L6a7beb:{c.instructions+=5;NFSU2_TR(0x6a7beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7bee:{NFSU2_TR(0x6a7bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7bf1:{NFSU2_TR(0x6a7bf1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a7bf4:{NFSU2_TR(0x6a7bf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a7bf7:{NFSU2_TR(0x6a7bf7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7bdbu);}goto L6a7bdb;}}
}
B6a7bf9:L6a7bf9:{c.instructions+=3;NFSU2_TR(0x6a7bf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7bfd:{NFSU2_TR(0x6a7bfd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7c01:{NFSU2_TR(0x6a7c01);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7f87;}}
}
B6a7c07:L6a7c07:{c.instructions+=12;NFSU2_TR(0x6a7c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c0a:{NFSU2_TR(0x6a7c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7c0d:{NFSU2_TR(0x6a7c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7c10:{NFSU2_TR(0x6a7c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7c13:{NFSU2_TR(0x6a7c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7c16:{NFSU2_TR(0x6a7c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c19:{NFSU2_TR(0x6a7c19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7c1c:{NFSU2_TR(0x6a7c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c1f:{NFSU2_TR(0x6a7c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7c22:{NFSU2_TR(0x6a7c22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7c25:{NFSU2_TR(0x6a7c25);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7c29:{NFSU2_TR(0x6a7c29);
if(r1(R+518)){{goto L6a7c4c;}}
}
B6a7c2b:L6a7c2b:{c.instructions+=2;NFSU2_TR(0x6a7c2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7c2f:{NFSU2_TR(0x6a7c2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7c4c;}}
}
B6a7c31:L6a7c31:{c.instructions+=9;NFSU2_TR(0x6a7c31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7c34:{NFSU2_TR(0x6a7c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c37:{NFSU2_TR(0x6a7c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7c3a:{NFSU2_TR(0x6a7c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7c3d:{NFSU2_TR(0x6a7c3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7c40:{NFSU2_TR(0x6a7c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c43:{NFSU2_TR(0x6a7c43);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7c46:{NFSU2_TR(0x6a7c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7c49:{NFSU2_TR(0x6a7c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7c4c:L6a7c4c:{c.instructions+=4;NFSU2_TR(0x6a7c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7c4f:{NFSU2_TR(0x6a7c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7c52:{NFSU2_TR(0x6a7c52);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7c55:{NFSU2_TR(0x6a7c55);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7c07u);}goto L6a7c07;}}
}
B6a7c57:L6a7c57:{c.instructions+=1;NFSU2_TR(0x6a7c57);
{goto L6a7f87;}
}
B6a7c5c:L6a7c5c:{c.instructions+=3;NFSU2_TR(0x6a7c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7c5f:{NFSU2_TR(0x6a7c5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7c61:{NFSU2_TR(0x6a7c61);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7bf9u);}goto L6a7bf9;}}
}
B6a7c63:L6a7c63:{c.instructions+=3;NFSU2_TR(0x6a7c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7c67:{NFSU2_TR(0x6a7c67);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7c69:{NFSU2_TR(0x6a7c69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7cb7;}}
}
B6a7c6b:L6a7c6b:{c.instructions+=8;NFSU2_TR(0x6a7c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7c6e:{NFSU2_TR(0x6a7c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7c71:{NFSU2_TR(0x6a7c71);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7c74:{NFSU2_TR(0x6a7c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7c77:{NFSU2_TR(0x6a7c77);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7c7a:{NFSU2_TR(0x6a7c7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7c7d:{NFSU2_TR(0x6a7c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7c80:{NFSU2_TR(0x6a7c80);
if(r1(R+518)){{goto L6a7cac;}}
}
B6a7c82:L6a7c82:{c.instructions+=8;NFSU2_TR(0x6a7c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a7c84:{NFSU2_TR(0x6a7c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c87:{NFSU2_TR(0x6a7c87);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7c8a:{NFSU2_TR(0x6a7c8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a7c8c:{NFSU2_TR(0x6a7c8c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf1ffffffull))));
}
B6a7c91:{NFSU2_TR(0x6a7c91);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B6a7c93:{NFSU2_TR(0x6a7c93);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7c95:{NFSU2_TR(0x6a7c95);
if(r1(R+518)){{goto L6a7ca3;}}
}
B6a7c97:L6a7c97:{c.instructions+=3;NFSU2_TR(0x6a7c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7c9a:{NFSU2_TR(0x6a7c9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6a7c9c:{NFSU2_TR(0x6a7c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7ca3:L6a7ca3:{c.instructions+=3;NFSU2_TR(0x6a7ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7ca6:{NFSU2_TR(0x6a7ca6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7ca9:{NFSU2_TR(0x6a7ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7cac:L6a7cac:{c.instructions+=4;NFSU2_TR(0x6a7cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7caf:{NFSU2_TR(0x6a7caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7cb2:{NFSU2_TR(0x6a7cb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7cb5:{NFSU2_TR(0x6a7cb5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7c6bu);}goto L6a7c6b;}}
}
B6a7cb7:L6a7cb7:{c.instructions+=4;NFSU2_TR(0x6a7cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7cba:{NFSU2_TR(0x6a7cba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7cbd:{NFSU2_TR(0x6a7cbd);
__builtin_memmove((R+12),(R+0),4);
}
B6a7cbf:{NFSU2_TR(0x6a7cbf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a7cdb;}}
}
B6a7cc1:L6a7cc1:{c.instructions+=4;NFSU2_TR(0x6a7cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7cc4:{NFSU2_TR(0x6a7cc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7cc7:{NFSU2_TR(0x6a7cc7);
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
B6a7cc9:{NFSU2_TR(0x6a7cc9);
if(r1(R+518)){{goto L6a7cd5;}}
}
B6a7ccb:L6a7ccb:{c.instructions+=2;NFSU2_TR(0x6a7ccb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7ccd:{NFSU2_TR(0x6a7ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7cd2ull));
TAIL_STATIC(0x6750fbu,675);
}
B6a7cd2:L6a7cd2:{c.instructions+=1;NFSU2_TR(0x6a7cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7cd5:L6a7cd5:{c.instructions+=3;NFSU2_TR(0x6a7cd5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7cd6:{NFSU2_TR(0x6a7cd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6a7cd9:{NFSU2_TR(0x6a7cd9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7cc1u);}goto L6a7cc1;}}
}
B6a7cdb:L6a7cdb:{c.instructions+=2;NFSU2_TR(0x6a7cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7cde:{NFSU2_TR(0x6a7cde);
{goto L6a7f98;}
}
B6a7ce3:L6a7ce3:{c.instructions+=2;NFSU2_TR(0x6a7ce3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7ce9:{NFSU2_TR(0x6a7ce9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7d5e;}}
}
B6a7ceb:L6a7ceb:{c.instructions+=6;NFSU2_TR(0x6a7ceb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7ced:{NFSU2_TR(0x6a7ced);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6a7cee:{NFSU2_TR(0x6a7cee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7cef:{NFSU2_TR(0x6a7cef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7cf0:{NFSU2_TR(0x6a7cf0);
__builtin_memmove((R+4),(R+28),4);
}
B6a7cf2:{NFSU2_TR(0x6a7cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7cf7ull));
TAIL_STATIC(0x69ac93u,69a);
}
B6a7cf7:L6a7cf7:{c.instructions+=2;NFSU2_TR(0x6a7cf7);
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
B6a7cf9:{NFSU2_TR(0x6a7cf9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6a806au,6a8);}
}
B6a7cff:L6a7cff:{c.instructions+=2;NFSU2_TR(0x6a7cff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7d01:{NFSU2_TR(0x6a7d01);
if(r1(R+518)){{goto L6a7d06;}}
}
B6a7d03:L6a7d03:{c.instructions+=1;NFSU2_TR(0x6a7d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d06:L6a7d06:{c.instructions+=6;NFSU2_TR(0x6a7d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7d09:{NFSU2_TR(0x6a7d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7d0b:{NFSU2_TR(0x6a7d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7d0e:{NFSU2_TR(0x6a7d0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7d11:{NFSU2_TR(0x6a7d11);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7d14:{NFSU2_TR(0x6a7d14);
if(r1(R+518)){{goto L6a7f98;}}
}
B6a7d1a:L6a7d1a:{c.instructions+=9;NFSU2_TR(0x6a7d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a7d1d:{NFSU2_TR(0x6a7d1d);
__builtin_memmove((R+4),(R+8),4);
}
B6a7d1f:{NFSU2_TR(0x6a7d1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7d22:{NFSU2_TR(0x6a7d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7d25:{NFSU2_TR(0x6a7d25);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7d28:{NFSU2_TR(0x6a7d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7d2b:{NFSU2_TR(0x6a7d2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7d2e:{NFSU2_TR(0x6a7d2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7d32:{NFSU2_TR(0x6a7d32);
if(r1(R+518)){{goto L6a7d51;}}
}
B6a7d34:L6a7d34:{c.instructions+=2;NFSU2_TR(0x6a7d34);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7d38:{NFSU2_TR(0x6a7d38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7d51;}}
}
B6a7d3a:L6a7d3a:{c.instructions+=8;NFSU2_TR(0x6a7d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7d3d:{NFSU2_TR(0x6a7d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d40:{NFSU2_TR(0x6a7d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7d43:{NFSU2_TR(0x6a7d43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a7d45:{NFSU2_TR(0x6a7d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7d48:{NFSU2_TR(0x6a7d48);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7d4b:{NFSU2_TR(0x6a7d4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7d4e:{NFSU2_TR(0x6a7d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d51:L6a7d51:{c.instructions+=4;NFSU2_TR(0x6a7d51);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a7d53:{NFSU2_TR(0x6a7d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d56:{NFSU2_TR(0x6a7d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d59:{NFSU2_TR(0x6a7d59);
{goto L6a7f96;}
}
B6a7d5e:L6a7d5e:{c.instructions+=2;NFSU2_TR(0x6a7d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50100004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a7d63:{NFSU2_TR(0x6a7d63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7f98;}}
}
B6a7d69:L6a7d69:{c.instructions+=21;NFSU2_TR(0x6a7d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7d6c:{NFSU2_TR(0x6a7d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d70:{NFSU2_TR(0x6a7d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d74:{NFSU2_TR(0x6a7d74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a7d76:{NFSU2_TR(0x6a7d76);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a7d77:{NFSU2_TR(0x6a7d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d7a:{NFSU2_TR(0x6a7d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d7d:{NFSU2_TR(0x6a7d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7d80:{NFSU2_TR(0x6a7d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7d82:{NFSU2_TR(0x6a7d82);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a7d85:{NFSU2_TR(0x6a7d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7d88:{NFSU2_TR(0x6a7d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7d8b:{NFSU2_TR(0x6a7d8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7d8e:{NFSU2_TR(0x6a7d8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a7d91:{NFSU2_TR(0x6a7d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d94:{NFSU2_TR(0x6a7d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7d97:{NFSU2_TR(0x6a7d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7d9a:{NFSU2_TR(0x6a7d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7d9d:{NFSU2_TR(0x6a7d9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7da0:{NFSU2_TR(0x6a7da0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7da4:{NFSU2_TR(0x6a7da4);
if(r1(R+518)){{goto L6a7e55;}}
}
B6a7daa:L6a7daa:{c.instructions+=2;NFSU2_TR(0x6a7daa);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7dae:{NFSU2_TR(0x6a7dae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e55;}}
}
B6a7db4:L6a7db4:{c.instructions+=5;NFSU2_TR(0x6a7db4);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a7db7:{NFSU2_TR(0x6a7db7);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a7dbd:{NFSU2_TR(0x6a7dbd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a7dbf:{NFSU2_TR(0x6a7dbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a7dc2:{NFSU2_TR(0x6a7dc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e4b;}}
}
B6a7dc8:L6a7dc8:{c.instructions+=6;NFSU2_TR(0x6a7dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7dcb:{NFSU2_TR(0x6a7dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7dce:{NFSU2_TR(0x6a7dce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7dd1:{NFSU2_TR(0x6a7dd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7dd5:{NFSU2_TR(0x6a7dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7ddc:{NFSU2_TR(0x6a7ddc);
if(r1(R+518)){{goto L6a7e68;}}
}
B6a7de2:L6a7de2:{c.instructions+=3;NFSU2_TR(0x6a7de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7de5:{NFSU2_TR(0x6a7de5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7de9:{NFSU2_TR(0x6a7de9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e68;}}
}
B6a7deb:L6a7deb:{c.instructions+=5;NFSU2_TR(0x6a7deb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a7dee:{NFSU2_TR(0x6a7dee);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a7df4:{NFSU2_TR(0x6a7df4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a7df6:{NFSU2_TR(0x6a7df6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a7df9:{NFSU2_TR(0x6a7df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e4f;}}
}
B6a7dfb:L6a7dfb:{c.instructions+=5;NFSU2_TR(0x6a7dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7dfe:{NFSU2_TR(0x6a7dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7e01:{NFSU2_TR(0x6a7e01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7e04:{NFSU2_TR(0x6a7e04);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7e08:{NFSU2_TR(0x6a7e08);
if(r1(R+518)){{goto L6a7e68;}}
}
B6a7e0a:L6a7e0a:{c.instructions+=3;NFSU2_TR(0x6a7e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7e0d:{NFSU2_TR(0x6a7e0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7e11:{NFSU2_TR(0x6a7e11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e68;}}
}
B6a7e13:L6a7e13:{c.instructions+=7;NFSU2_TR(0x6a7e13);
__builtin_memmove((R+8),(R+0),4);
}
B6a7e15:{NFSU2_TR(0x6a7e15);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a7e18:{NFSU2_TR(0x6a7e18);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a7e1e:{NFSU2_TR(0x6a7e1e);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a7e20:{NFSU2_TR(0x6a7e20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a7e22:{NFSU2_TR(0x6a7e22);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a7e25:{NFSU2_TR(0x6a7e25);
if(r1(R+514)){{goto L6a7e30;}}
}
B6a7e27:L6a7e27:{c.instructions+=2;NFSU2_TR(0x6a7e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7e2e:{NFSU2_TR(0x6a7e2e);
{goto L6a7e8f;}
}
B6a7e30:L6a7e30:{c.instructions+=6;NFSU2_TR(0x6a7e30);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a7e33:{NFSU2_TR(0x6a7e33);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a7e39:{NFSU2_TR(0x6a7e39);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6a7e3b:{NFSU2_TR(0x6a7e3b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a7e3d:{NFSU2_TR(0x6a7e3d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6a7e40:{NFSU2_TR(0x6a7e40);
if(r1(R+514)){{goto L6a7e68;}}
}
B6a7e42:L6a7e42:{c.instructions+=2;NFSU2_TR(0x6a7e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7e49:{NFSU2_TR(0x6a7e49);
{goto L6a7e8f;}
}
B6a7e4b:L6a7e4b:{c.instructions+=1;NFSU2_TR(0x6a7e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7e4f:L6a7e4f:{c.instructions+=2;NFSU2_TR(0x6a7e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7e53:{NFSU2_TR(0x6a7e53);
{goto L6a7e8f;}
}
B6a7e55:L6a7e55:{c.instructions+=5;NFSU2_TR(0x6a7e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7e58:{NFSU2_TR(0x6a7e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7e5b:{NFSU2_TR(0x6a7e5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7e5e:{NFSU2_TR(0x6a7e5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7e62:{NFSU2_TR(0x6a7e62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e68;}}
}
B6a7e64:L6a7e64:{c.instructions+=1;NFSU2_TR(0x6a7e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7e68:L6a7e68:{c.instructions+=5;NFSU2_TR(0x6a7e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7e6b:{NFSU2_TR(0x6a7e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7e6e:{NFSU2_TR(0x6a7e6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7e71:{NFSU2_TR(0x6a7e71);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7e75:{NFSU2_TR(0x6a7e75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7e7b;}}
}
B6a7e77:L6a7e77:{c.instructions+=1;NFSU2_TR(0x6a7e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7e7b:L6a7e7b:{c.instructions+=2;NFSU2_TR(0x6a7e7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7e7f:{NFSU2_TR(0x6a7e7f);
if(r1(R+518)){{goto L6a7f98;}}
}
B6a7e85:L6a7e85:{c.instructions+=2;NFSU2_TR(0x6a7e85);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7e89:{NFSU2_TR(0x6a7e89);
if(r1(R+518)){{goto L6a7f98;}}
}
B6a7e8f:L6a7e8f:{c.instructions+=1;NFSU2_TR(0x6a7e8f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7e91:L6a7e91:{c.instructions+=3;NFSU2_TR(0x6a7e91);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a7e95:{NFSU2_TR(0x6a7e95);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a7e98:{NFSU2_TR(0x6a7e98);
if(r1(R+518)){{goto L6a7efd;}}
}
B6a7e9a:L6a7e9a:{c.instructions+=2;NFSU2_TR(0x6a7e9a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a7e9b:{NFSU2_TR(0x6a7e9b);
if(r1(R+518)){{goto L6a7ec5;}}
}
B6a7e9d:L6a7e9d:{c.instructions+=2;NFSU2_TR(0x6a7e9d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a7e9e:{NFSU2_TR(0x6a7e9e);
if(r1(R+518)){{goto L6a7ebe;}}
}
B6a7ea0:L6a7ea0:{c.instructions+=2;NFSU2_TR(0x6a7ea0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a7ea1:{NFSU2_TR(0x6a7ea1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7f36;}}
}
B6a7ea7:L6a7ea7:{c.instructions+=2;NFSU2_TR(0x6a7ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7eaa:{NFSU2_TR(0x6a7eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7ead:L6a7ead:{c.instructions+=6;NFSU2_TR(0x6a7ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7eb0:{NFSU2_TR(0x6a7eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7eb3:{NFSU2_TR(0x6a7eb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7eb6:{NFSU2_TR(0x6a7eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7eb9:{NFSU2_TR(0x6a7eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7ebc:{NFSU2_TR(0x6a7ebc);
{goto L6a7f36;}
}
B6a7ebe:L6a7ebe:{c.instructions+=3;NFSU2_TR(0x6a7ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7ec1:{NFSU2_TR(0x6a7ec1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a7ec3:{NFSU2_TR(0x6a7ec3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7eadu);}goto L6a7ead;}
}
B6a7ec5:L6a7ec5:{c.instructions+=2;NFSU2_TR(0x6a7ec5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7ec9:{NFSU2_TR(0x6a7ec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7eec;}}
}
B6a7ecb:L6a7ecb:{c.instructions+=9;NFSU2_TR(0x6a7ecb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7ecc:{NFSU2_TR(0x6a7ecc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6a7ece:{NFSU2_TR(0x6a7ece);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7ecf:{NFSU2_TR(0x6a7ecf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a7ed2:{NFSU2_TR(0x6a7ed2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7ed4:{NFSU2_TR(0x6a7ed4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7ed6:{NFSU2_TR(0x6a7ed6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7ed9:{NFSU2_TR(0x6a7ed9);
__builtin_memmove((R+4),(R+28),4);
}
B6a7edb:{NFSU2_TR(0x6a7edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7ee0ull));
TAIL_STATIC(0x699c39u,699);
}
B6a7ee0:L6a7ee0:{c.instructions+=4;NFSU2_TR(0x6a7ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7ee3:{NFSU2_TR(0x6a7ee3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7ee6:{NFSU2_TR(0x6a7ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7ee9:{NFSU2_TR(0x6a7ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7eec:L6a7eec:{c.instructions+=6;NFSU2_TR(0x6a7eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7eef:{NFSU2_TR(0x6a7eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7ef2:{NFSU2_TR(0x6a7ef2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7ef5:{NFSU2_TR(0x6a7ef5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7ef8:{NFSU2_TR(0x6a7ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7efb:{NFSU2_TR(0x6a7efb);
{goto L6a7f33;}
}
B6a7efd:L6a7efd:{c.instructions+=2;NFSU2_TR(0x6a7efd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7f01:{NFSU2_TR(0x6a7f01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7f24;}}
}
B6a7f03:L6a7f03:{c.instructions+=9;NFSU2_TR(0x6a7f03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7f04:{NFSU2_TR(0x6a7f04);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a7f06:{NFSU2_TR(0x6a7f06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7f07:{NFSU2_TR(0x6a7f07);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a7f0a:{NFSU2_TR(0x6a7f0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7f0c:{NFSU2_TR(0x6a7f0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7f0e:{NFSU2_TR(0x6a7f0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a7f11:{NFSU2_TR(0x6a7f11);
__builtin_memmove((R+4),(R+28),4);
}
B6a7f13:{NFSU2_TR(0x6a7f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a7f18ull));
TAIL_STATIC(0x699c39u,699);
}
B6a7f18:L6a7f18:{c.instructions+=4;NFSU2_TR(0x6a7f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f1b:{NFSU2_TR(0x6a7f1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7f1e:{NFSU2_TR(0x6a7f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f21:{NFSU2_TR(0x6a7f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f24:L6a7f24:{c.instructions+=5;NFSU2_TR(0x6a7f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7f27:{NFSU2_TR(0x6a7f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f2a:{NFSU2_TR(0x6a7f2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7f2d:{NFSU2_TR(0x6a7f2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7f30:{NFSU2_TR(0x6a7f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f33:L6a7f33:{c.instructions+=1;NFSU2_TR(0x6a7f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f36:L6a7f36:{c.instructions+=12;NFSU2_TR(0x6a7f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f39:{NFSU2_TR(0x6a7f39);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7f3c:{NFSU2_TR(0x6a7f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7f3f:{NFSU2_TR(0x6a7f3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7f42:{NFSU2_TR(0x6a7f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7f45:{NFSU2_TR(0x6a7f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f48:{NFSU2_TR(0x6a7f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f4b:{NFSU2_TR(0x6a7f4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7f4e:{NFSU2_TR(0x6a7f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f51:{NFSU2_TR(0x6a7f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7f54:{NFSU2_TR(0x6a7f54);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7f58:{NFSU2_TR(0x6a7f58);
if(r1(R+518)){{goto L6a7f7b;}}
}
B6a7f5a:L6a7f5a:{c.instructions+=2;NFSU2_TR(0x6a7f5a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7f5e:{NFSU2_TR(0x6a7f5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7f7b;}}
}
B6a7f60:L6a7f60:{c.instructions+=9;NFSU2_TR(0x6a7f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f63:{NFSU2_TR(0x6a7f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f66:{NFSU2_TR(0x6a7f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f69:{NFSU2_TR(0x6a7f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f6c:{NFSU2_TR(0x6a7f6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7f6f:{NFSU2_TR(0x6a7f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7f72:{NFSU2_TR(0x6a7f72);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a7f75:{NFSU2_TR(0x6a7f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7f78:{NFSU2_TR(0x6a7f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f7b:L6a7f7b:{c.instructions+=3;NFSU2_TR(0x6a7f7b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6a7f7e:{NFSU2_TR(0x6a7f7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6a7f81:{NFSU2_TR(0x6a7f81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7e91u);}goto L6a7e91;}}
}
B6a7f87:L6a7f87:{c.instructions+=3;NFSU2_TR(0x6a7f87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a7f89:{NFSU2_TR(0x6a7f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f8c:{NFSU2_TR(0x6a7f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f8f:L6a7f8f:{c.instructions+=1;NFSU2_TR(0x6a7f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7f96:L6a7f96:{c.instructions+=1;NFSU2_TR(0x6a7f96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a7f98:L6a7f98:{c.instructions+=4;NFSU2_TR(0x6a7f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7f9b:{NFSU2_TR(0x6a7f9b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a7f9d:{NFSU2_TR(0x6a7f9d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7f9f:{NFSU2_TR(0x6a7f9f);
if(r1(R+518)){TAIL_STATIC(0x6a8047u,6a8);}
}
B6a7fa5:L6a7fa5:{c.instructions+=2;NFSU2_TR(0x6a7fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7fa8:{NFSU2_TR(0x6a7fa8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a7feb;}}
}
B6a7faa:L6a7faa:{c.instructions+=1;NFSU2_TR(0x6a7faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a7fad:L6a7fad:{c.instructions+=7;NFSU2_TR(0x6a7fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7faf:{NFSU2_TR(0x6a7faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7fb2:{NFSU2_TR(0x6a7fb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7fb5:{NFSU2_TR(0x6a7fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a7fb7:{NFSU2_TR(0x6a7fb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a7fba:{NFSU2_TR(0x6a7fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a7fbd:{NFSU2_TR(0x6a7fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7feb;}}
}
B6a7fbf:L6a7fbf:{c.instructions+=5;NFSU2_TR(0x6a7fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7fc2:{NFSU2_TR(0x6a7fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a7fc5:{NFSU2_TR(0x6a7fc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a7fc8:{NFSU2_TR(0x6a7fc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x11028ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a7fcf:{NFSU2_TR(0x6a7fcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a7feb;}}
}
B6a7fd1:L6a7fd1:{c.instructions+=2;NFSU2_TR(0x6a7fd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7fd5:{NFSU2_TR(0x6a7fd5);
if(r1(R+518)){{goto L6a7feb;}}
}
B6a7fd7:L6a7fd7:{c.instructions+=2;NFSU2_TR(0x6a7fd7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a7fdb:{NFSU2_TR(0x6a7fdb);
if(r1(R+518)){{goto L6a7feb;}}
}
B6a7fdd:L6a7fdd:{c.instructions+=5;NFSU2_TR(0x6a7fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a7fe0:{NFSU2_TR(0x6a7fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7fe3:{NFSU2_TR(0x6a7fe3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a7fe6:{NFSU2_TR(0x6a7fe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a7fe9:{NFSU2_TR(0x6a7fe9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a7fadu);}goto L6a7fad;}}
}
B6a7feb:L6a7feb:{c.instructions+=3;NFSU2_TR(0x6a7feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7fee:{NFSU2_TR(0x6a7fee);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a7ff1:{NFSU2_TR(0x6a7ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a8047u,6a8);}
}
B6a7ff3:L6a7ff3:{c.instructions+=3;NFSU2_TR(0x6a7ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a7ff6:{NFSU2_TR(0x6a7ff6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a7ff9:{NFSU2_TR(0x6a7ff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a801au,6a8);}
}
B6a7ffb:L6a7ffb:{c.instructions+=4;NFSU2_TR(0x6a7ffb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7ffc:{NFSU2_TR(0x6a7ffc);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a7ffe:{NFSU2_TR(0x6a7ffe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a7fff:{NFSU2_TR(0x6a7fff);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x6a8002u,6a8);
}
XIT:NFSU2_TR_EXIT(0x6a7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
