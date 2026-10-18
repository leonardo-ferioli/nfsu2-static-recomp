#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5a7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5a7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 page_5a7(Cpu& c){return body_5a7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5a7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5a7001:goto L5a7001;
case 0x5a7007:c.instructions+=55;goto B5a7007;
case 0x5a7009:c.instructions+=54;goto B5a7009;
case 0x5a700b:c.instructions+=53;goto B5a700b;
case 0x5a700f:c.instructions+=52;goto B5a700f;
case 0x5a7011:c.instructions+=51;goto B5a7011;
case 0x5a7017:c.instructions+=50;goto B5a7017;
case 0x5a7019:c.instructions+=49;goto B5a7019;
case 0x5a701f:c.instructions+=48;goto B5a701f;
case 0x5a7022:c.instructions+=47;goto B5a7022;
case 0x5a7024:c.instructions+=46;goto B5a7024;
case 0x5a7028:c.instructions+=45;goto B5a7028;
case 0x5a702a:c.instructions+=44;goto B5a702a;
case 0x5a7030:c.instructions+=43;goto B5a7030;
case 0x5a7037:c.instructions+=42;goto B5a7037;
case 0x5a7039:c.instructions+=41;goto B5a7039;
case 0x5a7040:c.instructions+=40;goto B5a7040;
case 0x5a7043:c.instructions+=39;goto B5a7043;
case 0x5a7045:c.instructions+=38;goto B5a7045;
case 0x5a7049:c.instructions+=37;goto B5a7049;
case 0x5a704b:c.instructions+=36;goto B5a704b;
case 0x5a7052:c.instructions+=35;goto B5a7052;
case 0x5a7054:c.instructions+=34;goto B5a7054;
case 0x5a705b:c.instructions+=33;goto B5a705b;
case 0x5a705e:c.instructions+=32;goto B5a705e;
case 0x5a7060:c.instructions+=31;goto B5a7060;
case 0x5a7064:c.instructions+=30;goto B5a7064;
case 0x5a7066:c.instructions+=29;goto B5a7066;
case 0x5a706d:c.instructions+=28;goto B5a706d;
case 0x5a706f:c.instructions+=27;goto B5a706f;
case 0x5a7076:c.instructions+=26;goto B5a7076;
case 0x5a7079:c.instructions+=25;goto B5a7079;
case 0x5a707b:c.instructions+=24;goto B5a707b;
case 0x5a707f:c.instructions+=23;goto B5a707f;
case 0x5a7081:c.instructions+=22;goto B5a7081;
case 0x5a7088:c.instructions+=21;goto B5a7088;
case 0x5a708a:c.instructions+=20;goto B5a708a;
case 0x5a7091:c.instructions+=19;goto B5a7091;
case 0x5a7094:c.instructions+=18;goto B5a7094;
case 0x5a7096:c.instructions+=17;goto B5a7096;
case 0x5a709a:c.instructions+=16;goto B5a709a;
case 0x5a709c:c.instructions+=15;goto B5a709c;
case 0x5a70a3:c.instructions+=14;goto B5a70a3;
case 0x5a70a6:c.instructions+=13;goto B5a70a6;
case 0x5a70a9:c.instructions+=12;goto B5a70a9;
case 0x5a70ab:c.instructions+=11;goto B5a70ab;
case 0x5a70ad:c.instructions+=10;goto B5a70ad;
case 0x5a70af:c.instructions+=9;goto B5a70af;
case 0x5a70b0:c.instructions+=8;goto B5a70b0;
case 0x5a70b3:c.instructions+=7;goto B5a70b3;
case 0x5a70b6:c.instructions+=6;goto B5a70b6;
case 0x5a70b8:c.instructions+=5;goto B5a70b8;
case 0x5a70bc:c.instructions+=4;goto B5a70bc;
case 0x5a70be:c.instructions+=3;goto B5a70be;
case 0x5a70c0:c.instructions+=2;goto B5a70c0;
case 0x5a70c2:c.instructions+=1;goto B5a70c2;
case 0x5a70c8:goto L5a70c8;
case 0x5a70cc:c.instructions+=31;goto B5a70cc;
case 0x5a70cf:c.instructions+=30;goto B5a70cf;
case 0x5a70d2:c.instructions+=29;goto B5a70d2;
case 0x5a70d5:c.instructions+=28;goto B5a70d5;
case 0x5a70d9:c.instructions+=27;goto B5a70d9;
case 0x5a70dc:c.instructions+=26;goto B5a70dc;
case 0x5a70df:c.instructions+=25;goto B5a70df;
case 0x5a70e2:c.instructions+=24;goto B5a70e2;
case 0x5a70e6:c.instructions+=23;goto B5a70e6;
case 0x5a70e9:c.instructions+=22;goto B5a70e9;
case 0x5a70ec:c.instructions+=21;goto B5a70ec;
case 0x5a70ef:c.instructions+=20;goto B5a70ef;
case 0x5a70f3:c.instructions+=19;goto B5a70f3;
case 0x5a70f6:c.instructions+=18;goto B5a70f6;
case 0x5a70fc:c.instructions+=17;goto B5a70fc;
case 0x5a7102:c.instructions+=16;goto B5a7102;
case 0x5a7105:c.instructions+=15;goto B5a7105;
case 0x5a7106:c.instructions+=14;goto B5a7106;
case 0x5a710a:c.instructions+=13;goto B5a710a;
case 0x5a710b:c.instructions+=12;goto B5a710b;
case 0x5a710e:c.instructions+=11;goto B5a710e;
case 0x5a7111:c.instructions+=10;goto B5a7111;
case 0x5a7117:c.instructions+=9;goto B5a7117;
case 0x5a711d:c.instructions+=8;goto B5a711d;
case 0x5a711f:c.instructions+=7;goto B5a711f;
case 0x5a7123:c.instructions+=6;goto B5a7123;
case 0x5a7125:c.instructions+=5;goto B5a7125;
case 0x5a712b:c.instructions+=4;goto B5a712b;
case 0x5a712d:c.instructions+=3;goto B5a712d;
case 0x5a712e:c.instructions+=2;goto B5a712e;
case 0x5a7131:c.instructions+=1;goto B5a7131;
case 0x5a7140:goto L5a7140;
case 0x5a7141:c.instructions+=7;goto B5a7141;
case 0x5a7145:c.instructions+=6;goto B5a7145;
case 0x5a7146:c.instructions+=5;goto B5a7146;
case 0x5a7148:c.instructions+=4;goto B5a7148;
case 0x5a714a:c.instructions+=3;goto B5a714a;
case 0x5a714e:c.instructions+=2;goto B5a714e;
case 0x5a7150:c.instructions+=1;goto B5a7150;
case 0x5a7155:goto L5a7155;
case 0x5a715b:c.instructions+=4;goto B5a715b;
case 0x5a715d:c.instructions+=3;goto B5a715d;
case 0x5a715f:c.instructions+=2;goto B5a715f;
case 0x5a7162:c.instructions+=1;goto B5a7162;
case 0x5a7164:goto L5a7164;
case 0x5a7168:c.instructions+=21;goto B5a7168;
case 0x5a716e:c.instructions+=20;goto B5a716e;
case 0x5a7174:c.instructions+=19;goto B5a7174;
case 0x5a7176:c.instructions+=18;goto B5a7176;
case 0x5a7178:c.instructions+=17;goto B5a7178;
case 0x5a717a:c.instructions+=16;goto B5a717a;
case 0x5a7180:c.instructions+=15;goto B5a7180;
case 0x5a7182:c.instructions+=14;goto B5a7182;
case 0x5a7188:c.instructions+=13;goto B5a7188;
case 0x5a718e:c.instructions+=12;goto B5a718e;
case 0x5a7190:c.instructions+=11;goto B5a7190;
case 0x5a7192:c.instructions+=10;goto B5a7192;
case 0x5a7194:c.instructions+=9;goto B5a7194;
case 0x5a719a:c.instructions+=8;goto B5a719a;
case 0x5a719c:c.instructions+=7;goto B5a719c;
case 0x5a71a2:c.instructions+=6;goto B5a71a2;
case 0x5a71a8:c.instructions+=5;goto B5a71a8;
case 0x5a71aa:c.instructions+=4;goto B5a71aa;
case 0x5a71ac:c.instructions+=3;goto B5a71ac;
case 0x5a71ae:c.instructions+=2;goto B5a71ae;
case 0x5a71b4:c.instructions+=1;goto B5a71b4;
case 0x5a71b6:goto L5a71b6;
case 0x5a71b8:c.instructions+=2;goto B5a71b8;
case 0x5a71b9:c.instructions+=1;goto B5a71b9;
case 0x5a71c0:goto L5a71c0;
case 0x5a71c1:c.instructions+=10;goto B5a71c1;
case 0x5a71c5:c.instructions+=9;goto B5a71c5;
case 0x5a71c6:c.instructions+=8;goto B5a71c6;
case 0x5a71c7:c.instructions+=7;goto B5a71c7;
case 0x5a71cb:c.instructions+=6;goto B5a71cb;
case 0x5a71cc:c.instructions+=5;goto B5a71cc;
case 0x5a71ce:c.instructions+=4;goto B5a71ce;
case 0x5a71d0:c.instructions+=3;goto B5a71d0;
case 0x5a71d2:c.instructions+=2;goto B5a71d2;
case 0x5a71d4:c.instructions+=1;goto B5a71d4;
case 0x5a71d9:goto L5a71d9;
case 0x5a71dc:c.instructions+=3;goto B5a71dc;
case 0x5a71de:c.instructions+=2;goto B5a71de;
case 0x5a71e2:c.instructions+=1;goto B5a71e2;
case 0x5a71e4:goto L5a71e4;
case 0x5a71e7:c.instructions+=2;goto B5a71e7;
case 0x5a71e9:c.instructions+=1;goto B5a71e9;
case 0x5a71eb:goto L5a71eb;
case 0x5a71f1:c.instructions+=2;goto B5a71f1;
case 0x5a71f3:c.instructions+=1;goto B5a71f3;
case 0x5a71f5:goto L5a71f5;
case 0x5a71ff:goto L5a71ff;
case 0x5a7205:c.instructions+=4;goto B5a7205;
case 0x5a7207:c.instructions+=3;goto B5a7207;
case 0x5a7209:c.instructions+=2;goto B5a7209;
case 0x5a720c:c.instructions+=1;goto B5a720c;
case 0x5a7212:goto L5a7212;
case 0x5a7215:c.instructions+=2;goto B5a7215;
case 0x5a721b:c.instructions+=1;goto B5a721b;
case 0x5a7220:goto L5a7220;
case 0x5a7223:c.instructions+=1;goto B5a7223;
case 0x5a7225:goto L5a7225;
case 0x5a7228:c.instructions+=1;goto B5a7228;
case 0x5a722a:goto L5a722a;
case 0x5a722d:c.instructions+=10;goto B5a722d;
case 0x5a7234:c.instructions+=9;goto B5a7234;
case 0x5a723b:c.instructions+=8;goto B5a723b;
case 0x5a7241:c.instructions+=7;goto B5a7241;
case 0x5a7247:c.instructions+=6;goto B5a7247;
case 0x5a724a:c.instructions+=5;goto B5a724a;
case 0x5a7250:c.instructions+=4;goto B5a7250;
case 0x5a7256:c.instructions+=3;goto B5a7256;
case 0x5a7259:c.instructions+=2;goto B5a7259;
case 0x5a725f:c.instructions+=1;goto B5a725f;
case 0x5a7265:goto L5a7265;
case 0x5a726b:c.instructions+=47;goto B5a726b;
case 0x5a726d:c.instructions+=46;goto B5a726d;
case 0x5a7273:c.instructions+=45;goto B5a7273;
case 0x5a7279:c.instructions+=44;goto B5a7279;
case 0x5a727f:c.instructions+=43;goto B5a727f;
case 0x5a7281:c.instructions+=42;goto B5a7281;
case 0x5a7287:c.instructions+=41;goto B5a7287;
case 0x5a728d:c.instructions+=40;goto B5a728d;
case 0x5a7293:c.instructions+=39;goto B5a7293;
case 0x5a7295:c.instructions+=38;goto B5a7295;
case 0x5a729b:c.instructions+=37;goto B5a729b;
case 0x5a72a1:c.instructions+=36;goto B5a72a1;
case 0x5a72a7:c.instructions+=35;goto B5a72a7;
case 0x5a72a9:c.instructions+=34;goto B5a72a9;
case 0x5a72af:c.instructions+=33;goto B5a72af;
case 0x5a72b5:c.instructions+=32;goto B5a72b5;
case 0x5a72bb:c.instructions+=31;goto B5a72bb;
case 0x5a72bd:c.instructions+=30;goto B5a72bd;
case 0x5a72c3:c.instructions+=29;goto B5a72c3;
case 0x5a72c9:c.instructions+=28;goto B5a72c9;
case 0x5a72cf:c.instructions+=27;goto B5a72cf;
case 0x5a72d1:c.instructions+=26;goto B5a72d1;
case 0x5a72d7:c.instructions+=25;goto B5a72d7;
case 0x5a72dd:c.instructions+=24;goto B5a72dd;
case 0x5a72e3:c.instructions+=23;goto B5a72e3;
case 0x5a72e5:c.instructions+=22;goto B5a72e5;
case 0x5a72eb:c.instructions+=21;goto B5a72eb;
case 0x5a72f1:c.instructions+=20;goto B5a72f1;
case 0x5a72f7:c.instructions+=19;goto B5a72f7;
case 0x5a72f9:c.instructions+=18;goto B5a72f9;
case 0x5a72ff:c.instructions+=17;goto B5a72ff;
case 0x5a7305:c.instructions+=16;goto B5a7305;
case 0x5a730b:c.instructions+=15;goto B5a730b;
case 0x5a730d:c.instructions+=14;goto B5a730d;
case 0x5a7313:c.instructions+=13;goto B5a7313;
case 0x5a7319:c.instructions+=12;goto B5a7319;
case 0x5a731f:c.instructions+=11;goto B5a731f;
case 0x5a7321:c.instructions+=10;goto B5a7321;
case 0x5a7327:c.instructions+=9;goto B5a7327;
case 0x5a732d:c.instructions+=8;goto B5a732d;
case 0x5a7333:c.instructions+=7;goto B5a7333;
case 0x5a7335:c.instructions+=6;goto B5a7335;
case 0x5a733b:c.instructions+=5;goto B5a733b;
case 0x5a7341:c.instructions+=4;goto B5a7341;
case 0x5a7347:c.instructions+=3;goto B5a7347;
case 0x5a7349:c.instructions+=2;goto B5a7349;
case 0x5a734f:c.instructions+=1;goto B5a734f;
case 0x5a7355:goto L5a7355;
case 0x5a7356:c.instructions+=4;goto B5a7356;
case 0x5a7358:c.instructions+=3;goto B5a7358;
case 0x5a7359:c.instructions+=2;goto B5a7359;
case 0x5a735a:c.instructions+=1;goto B5a735a;
case 0x5a7360:goto L5a7360;
case 0x5a7361:c.instructions+=7;goto B5a7361;
case 0x5a7365:c.instructions+=6;goto B5a7365;
case 0x5a7366:c.instructions+=5;goto B5a7366;
case 0x5a7368:c.instructions+=4;goto B5a7368;
case 0x5a736a:c.instructions+=3;goto B5a736a;
case 0x5a736e:c.instructions+=2;goto B5a736e;
case 0x5a7370:c.instructions+=1;goto B5a7370;
case 0x5a7375:goto L5a7375;
case 0x5a737b:c.instructions+=4;goto B5a737b;
case 0x5a737d:c.instructions+=3;goto B5a737d;
case 0x5a737f:c.instructions+=2;goto B5a737f;
case 0x5a7382:c.instructions+=1;goto B5a7382;
case 0x5a7388:goto L5a7388;
case 0x5a738c:c.instructions+=70;goto B5a738c;
case 0x5a7392:c.instructions+=69;goto B5a7392;
case 0x5a7398:c.instructions+=68;goto B5a7398;
case 0x5a739a:c.instructions+=67;goto B5a739a;
case 0x5a739c:c.instructions+=66;goto B5a739c;
case 0x5a739e:c.instructions+=65;goto B5a739e;
case 0x5a73a4:c.instructions+=64;goto B5a73a4;
case 0x5a73a6:c.instructions+=63;goto B5a73a6;
case 0x5a73ac:c.instructions+=62;goto B5a73ac;
case 0x5a73b2:c.instructions+=61;goto B5a73b2;
case 0x5a73b4:c.instructions+=60;goto B5a73b4;
case 0x5a73b6:c.instructions+=59;goto B5a73b6;
case 0x5a73b8:c.instructions+=58;goto B5a73b8;
case 0x5a73be:c.instructions+=57;goto B5a73be;
case 0x5a73c0:c.instructions+=56;goto B5a73c0;
case 0x5a73c6:c.instructions+=55;goto B5a73c6;
case 0x5a73cc:c.instructions+=54;goto B5a73cc;
case 0x5a73ce:c.instructions+=53;goto B5a73ce;
case 0x5a73d0:c.instructions+=52;goto B5a73d0;
case 0x5a73d2:c.instructions+=51;goto B5a73d2;
case 0x5a73d8:c.instructions+=50;goto B5a73d8;
case 0x5a73da:c.instructions+=49;goto B5a73da;
case 0x5a73e0:c.instructions+=48;goto B5a73e0;
case 0x5a73e6:c.instructions+=47;goto B5a73e6;
case 0x5a73e8:c.instructions+=46;goto B5a73e8;
case 0x5a73ea:c.instructions+=45;goto B5a73ea;
case 0x5a73ec:c.instructions+=44;goto B5a73ec;
case 0x5a73f2:c.instructions+=43;goto B5a73f2;
case 0x5a73f4:c.instructions+=42;goto B5a73f4;
case 0x5a73fa:c.instructions+=41;goto B5a73fa;
case 0x5a7400:c.instructions+=40;goto B5a7400;
case 0x5a7402:c.instructions+=39;goto B5a7402;
case 0x5a7404:c.instructions+=38;goto B5a7404;
case 0x5a7406:c.instructions+=37;goto B5a7406;
case 0x5a740c:c.instructions+=36;goto B5a740c;
case 0x5a740e:c.instructions+=35;goto B5a740e;
case 0x5a7414:c.instructions+=34;goto B5a7414;
case 0x5a741a:c.instructions+=33;goto B5a741a;
case 0x5a741c:c.instructions+=32;goto B5a741c;
case 0x5a741e:c.instructions+=31;goto B5a741e;
case 0x5a7420:c.instructions+=30;goto B5a7420;
case 0x5a7426:c.instructions+=29;goto B5a7426;
case 0x5a7428:c.instructions+=28;goto B5a7428;
case 0x5a742e:c.instructions+=27;goto B5a742e;
case 0x5a7434:c.instructions+=26;goto B5a7434;
case 0x5a7436:c.instructions+=25;goto B5a7436;
case 0x5a7438:c.instructions+=24;goto B5a7438;
case 0x5a743a:c.instructions+=23;goto B5a743a;
case 0x5a7440:c.instructions+=22;goto B5a7440;
case 0x5a7442:c.instructions+=21;goto B5a7442;
case 0x5a7448:c.instructions+=20;goto B5a7448;
case 0x5a744e:c.instructions+=19;goto B5a744e;
case 0x5a7450:c.instructions+=18;goto B5a7450;
case 0x5a7452:c.instructions+=17;goto B5a7452;
case 0x5a7454:c.instructions+=16;goto B5a7454;
case 0x5a745a:c.instructions+=15;goto B5a745a;
case 0x5a745c:c.instructions+=14;goto B5a745c;
case 0x5a7462:c.instructions+=13;goto B5a7462;
case 0x5a7468:c.instructions+=12;goto B5a7468;
case 0x5a746a:c.instructions+=11;goto B5a746a;
case 0x5a746c:c.instructions+=10;goto B5a746c;
case 0x5a746e:c.instructions+=9;goto B5a746e;
case 0x5a7474:c.instructions+=8;goto B5a7474;
case 0x5a7476:c.instructions+=7;goto B5a7476;
case 0x5a747c:c.instructions+=6;goto B5a747c;
case 0x5a7482:c.instructions+=5;goto B5a7482;
case 0x5a7484:c.instructions+=4;goto B5a7484;
case 0x5a7486:c.instructions+=3;goto B5a7486;
case 0x5a7488:c.instructions+=2;goto B5a7488;
case 0x5a748e:c.instructions+=1;goto B5a748e;
case 0x5a7490:goto L5a7490;
case 0x5a7492:c.instructions+=2;goto B5a7492;
case 0x5a7493:c.instructions+=1;goto B5a7493;
case 0x5a74a0:goto L5a74a0;
case 0x5a74a3:c.instructions+=8;goto B5a74a3;
case 0x5a74a4:c.instructions+=7;goto B5a74a4;
case 0x5a74a8:c.instructions+=6;goto B5a74a8;
case 0x5a74a9:c.instructions+=5;goto B5a74a9;
case 0x5a74ab:c.instructions+=4;goto B5a74ab;
case 0x5a74ad:c.instructions+=3;goto B5a74ad;
case 0x5a74b1:c.instructions+=2;goto B5a74b1;
case 0x5a74b3:c.instructions+=1;goto B5a74b3;
case 0x5a74b8:goto L5a74b8;
case 0x5a74be:c.instructions+=4;goto B5a74be;
case 0x5a74c0:c.instructions+=3;goto B5a74c0;
case 0x5a74c2:c.instructions+=2;goto B5a74c2;
case 0x5a74c5:c.instructions+=1;goto B5a74c5;
case 0x5a74c7:goto L5a74c7;
case 0x5a74cd:c.instructions+=15;goto B5a74cd;
case 0x5a74d1:c.instructions+=14;goto B5a74d1;
case 0x5a74d7:c.instructions+=13;goto B5a74d7;
case 0x5a74db:c.instructions+=12;goto B5a74db;
case 0x5a74e1:c.instructions+=11;goto B5a74e1;
case 0x5a74e7:c.instructions+=10;goto B5a74e7;
case 0x5a74ed:c.instructions+=9;goto B5a74ed;
case 0x5a74f3:c.instructions+=8;goto B5a74f3;
case 0x5a74f7:c.instructions+=7;goto B5a74f7;
case 0x5a74fd:c.instructions+=6;goto B5a74fd;
case 0x5a7503:c.instructions+=5;goto B5a7503;
case 0x5a7509:c.instructions+=4;goto B5a7509;
case 0x5a750f:c.instructions+=3;goto B5a750f;
case 0x5a7511:c.instructions+=2;goto B5a7511;
case 0x5a7517:c.instructions+=1;goto B5a7517;
case 0x5a751d:goto L5a751d;
case 0x5a751f:c.instructions+=3;goto B5a751f;
case 0x5a7520:c.instructions+=2;goto B5a7520;
case 0x5a7523:c.instructions+=1;goto B5a7523;
case 0x5a7530:goto L5a7530;
case 0x5a7534:c.instructions+=56;goto B5a7534;
case 0x5a7535:c.instructions+=55;goto B5a7535;
case 0x5a7539:c.instructions+=54;goto B5a7539;
case 0x5a753c:c.instructions+=53;goto B5a753c;
case 0x5a753d:c.instructions+=52;goto B5a753d;
case 0x5a7543:c.instructions+=51;goto B5a7543;
case 0x5a7547:c.instructions+=50;goto B5a7547;
case 0x5a754a:c.instructions+=49;goto B5a754a;
case 0x5a754b:c.instructions+=48;goto B5a754b;
case 0x5a754e:c.instructions+=47;goto B5a754e;
case 0x5a7550:c.instructions+=46;goto B5a7550;
case 0x5a7552:c.instructions+=45;goto B5a7552;
case 0x5a7554:c.instructions+=44;goto B5a7554;
case 0x5a7556:c.instructions+=43;goto B5a7556;
case 0x5a755c:c.instructions+=42;goto B5a755c;
case 0x5a7562:c.instructions+=41;goto B5a7562;
case 0x5a7564:c.instructions+=40;goto B5a7564;
case 0x5a7567:c.instructions+=39;goto B5a7567;
case 0x5a756a:c.instructions+=38;goto B5a756a;
case 0x5a756c:c.instructions+=37;goto B5a756c;
case 0x5a756e:c.instructions+=36;goto B5a756e;
case 0x5a7570:c.instructions+=35;goto B5a7570;
case 0x5a7576:c.instructions+=34;goto B5a7576;
case 0x5a757c:c.instructions+=33;goto B5a757c;
case 0x5a757e:c.instructions+=32;goto B5a757e;
case 0x5a7580:c.instructions+=31;goto B5a7580;
case 0x5a7582:c.instructions+=30;goto B5a7582;
case 0x5a7588:c.instructions+=29;goto B5a7588;
case 0x5a758b:c.instructions+=28;goto B5a758b;
case 0x5a758e:c.instructions+=27;goto B5a758e;
case 0x5a7590:c.instructions+=26;goto B5a7590;
case 0x5a7592:c.instructions+=25;goto B5a7592;
case 0x5a7594:c.instructions+=24;goto B5a7594;
case 0x5a759a:c.instructions+=23;goto B5a759a;
case 0x5a75a0:c.instructions+=22;goto B5a75a0;
case 0x5a75a2:c.instructions+=21;goto B5a75a2;
case 0x5a75a5:c.instructions+=20;goto B5a75a5;
case 0x5a75a8:c.instructions+=19;goto B5a75a8;
case 0x5a75aa:c.instructions+=18;goto B5a75aa;
case 0x5a75ac:c.instructions+=17;goto B5a75ac;
case 0x5a75ae:c.instructions+=16;goto B5a75ae;
case 0x5a75b4:c.instructions+=15;goto B5a75b4;
case 0x5a75ba:c.instructions+=14;goto B5a75ba;
case 0x5a75bc:c.instructions+=13;goto B5a75bc;
case 0x5a75be:c.instructions+=12;goto B5a75be;
case 0x5a75c1:c.instructions+=11;goto B5a75c1;
case 0x5a75c4:c.instructions+=10;goto B5a75c4;
case 0x5a75c6:c.instructions+=9;goto B5a75c6;
case 0x5a75c9:c.instructions+=8;goto B5a75c9;
case 0x5a75cf:c.instructions+=7;goto B5a75cf;
case 0x5a75d1:c.instructions+=6;goto B5a75d1;
case 0x5a75d3:c.instructions+=5;goto B5a75d3;
case 0x5a75d6:c.instructions+=4;goto B5a75d6;
case 0x5a75d9:c.instructions+=3;goto B5a75d9;
case 0x5a75db:c.instructions+=2;goto B5a75db;
case 0x5a75de:c.instructions+=1;goto B5a75de;
case 0x5a75e4:goto L5a75e4;
case 0x5a75e6:c.instructions+=26;goto B5a75e6;
case 0x5a75e7:c.instructions+=25;goto B5a75e7;
case 0x5a75e9:c.instructions+=24;goto B5a75e9;
case 0x5a75eb:c.instructions+=23;goto B5a75eb;
case 0x5a75ed:c.instructions+=22;goto B5a75ed;
case 0x5a75f1:c.instructions+=21;goto B5a75f1;
case 0x5a75f4:c.instructions+=20;goto B5a75f4;
case 0x5a75f8:c.instructions+=19;goto B5a75f8;
case 0x5a75fa:c.instructions+=18;goto B5a75fa;
case 0x5a7601:c.instructions+=17;goto B5a7601;
case 0x5a7608:c.instructions+=16;goto B5a7608;
case 0x5a760b:c.instructions+=15;goto B5a760b;
case 0x5a760e:c.instructions+=14;goto B5a760e;
case 0x5a7610:c.instructions+=13;goto B5a7610;
case 0x5a7612:c.instructions+=12;goto B5a7612;
case 0x5a7615:c.instructions+=11;goto B5a7615;
case 0x5a7618:c.instructions+=10;goto B5a7618;
case 0x5a761a:c.instructions+=9;goto B5a761a;
case 0x5a761d:c.instructions+=8;goto B5a761d;
case 0x5a7621:c.instructions+=7;goto B5a7621;
case 0x5a7623:c.instructions+=6;goto B5a7623;
case 0x5a7625:c.instructions+=5;goto B5a7625;
case 0x5a7627:c.instructions+=4;goto B5a7627;
case 0x5a762a:c.instructions+=3;goto B5a762a;
case 0x5a762d:c.instructions+=2;goto B5a762d;
case 0x5a762f:c.instructions+=1;goto B5a762f;
case 0x5a7631:goto L5a7631;
case 0x5a7633:c.instructions+=26;goto B5a7633;
case 0x5a7635:c.instructions+=25;goto B5a7635;
case 0x5a7638:c.instructions+=24;goto B5a7638;
case 0x5a763a:c.instructions+=23;goto B5a763a;
case 0x5a763d:c.instructions+=22;goto B5a763d;
case 0x5a7643:c.instructions+=21;goto B5a7643;
case 0x5a7645:c.instructions+=20;goto B5a7645;
case 0x5a764b:c.instructions+=19;goto B5a764b;
case 0x5a764d:c.instructions+=18;goto B5a764d;
case 0x5a7653:c.instructions+=17;goto B5a7653;
case 0x5a7655:c.instructions+=16;goto B5a7655;
case 0x5a7658:c.instructions+=15;goto B5a7658;
case 0x5a765b:c.instructions+=14;goto B5a765b;
case 0x5a765d:c.instructions+=13;goto B5a765d;
case 0x5a7660:c.instructions+=12;goto B5a7660;
case 0x5a7666:c.instructions+=11;goto B5a7666;
case 0x5a7668:c.instructions+=10;goto B5a7668;
case 0x5a766a:c.instructions+=9;goto B5a766a;
case 0x5a7670:c.instructions+=8;goto B5a7670;
case 0x5a7676:c.instructions+=7;goto B5a7676;
case 0x5a7678:c.instructions+=6;goto B5a7678;
case 0x5a767b:c.instructions+=5;goto B5a767b;
case 0x5a7681:c.instructions+=4;goto B5a7681;
case 0x5a7683:c.instructions+=3;goto B5a7683;
case 0x5a7685:c.instructions+=2;goto B5a7685;
case 0x5a7688:c.instructions+=1;goto B5a7688;
case 0x5a768a:goto L5a768a;
case 0x5a768c:c.instructions+=1;goto B5a768c;
case 0x5a7692:goto L5a7692;
case 0x5a7698:c.instructions+=7;goto B5a7698;
case 0x5a769b:c.instructions+=6;goto B5a769b;
case 0x5a769f:c.instructions+=5;goto B5a769f;
case 0x5a76a3:c.instructions+=4;goto B5a76a3;
case 0x5a76a9:c.instructions+=3;goto B5a76a9;
case 0x5a76ab:c.instructions+=2;goto B5a76ab;
case 0x5a76ae:c.instructions+=1;goto B5a76ae;
case 0x5a76b4:goto L5a76b4;
case 0x5a76b8:c.instructions+=5;goto B5a76b8;
case 0x5a76be:c.instructions+=4;goto B5a76be;
case 0x5a76c2:c.instructions+=3;goto B5a76c2;
case 0x5a76c4:c.instructions+=2;goto B5a76c4;
case 0x5a76c7:c.instructions+=1;goto B5a76c7;
case 0x5a76c9:goto L5a76c9;
case 0x5a76cb:c.instructions+=1;goto B5a76cb;
case 0x5a76d1:goto L5a76d1;
case 0x5a76d7:c.instructions+=3;goto B5a76d7;
case 0x5a76dd:c.instructions+=2;goto B5a76dd;
case 0x5a76de:c.instructions+=1;goto B5a76de;
case 0x5a76e3:goto L5a76e3;
case 0x5a76e9:c.instructions+=27;goto B5a76e9;
case 0x5a76eb:c.instructions+=26;goto B5a76eb;
case 0x5a76ee:c.instructions+=25;goto B5a76ee;
case 0x5a76f0:c.instructions+=24;goto B5a76f0;
case 0x5a76f6:c.instructions+=23;goto B5a76f6;
case 0x5a76f8:c.instructions+=22;goto B5a76f8;
case 0x5a76fa:c.instructions+=21;goto B5a76fa;
case 0x5a7700:c.instructions+=20;goto B5a7700;
case 0x5a7702:c.instructions+=19;goto B5a7702;
case 0x5a7704:c.instructions+=18;goto B5a7704;
case 0x5a7706:c.instructions+=17;goto B5a7706;
case 0x5a7708:c.instructions+=16;goto B5a7708;
case 0x5a770e:c.instructions+=15;goto B5a770e;
case 0x5a7714:c.instructions+=14;goto B5a7714;
case 0x5a7716:c.instructions+=13;goto B5a7716;
case 0x5a7717:c.instructions+=12;goto B5a7717;
case 0x5a7719:c.instructions+=11;goto B5a7719;
case 0x5a771f:c.instructions+=10;goto B5a771f;
case 0x5a7725:c.instructions+=9;goto B5a7725;
case 0x5a772b:c.instructions+=8;goto B5a772b;
case 0x5a772d:c.instructions+=7;goto B5a772d;
case 0x5a7733:c.instructions+=6;goto B5a7733;
case 0x5a7739:c.instructions+=5;goto B5a7739;
case 0x5a773f:c.instructions+=4;goto B5a773f;
case 0x5a7740:c.instructions+=3;goto B5a7740;
case 0x5a7742:c.instructions+=2;goto B5a7742;
case 0x5a7743:c.instructions+=1;goto B5a7743;
case 0x5a7744:goto L5a7744;
case 0x5a774a:c.instructions+=1;goto B5a774a;
case 0x5a7750:goto L5a7750;
case 0x5a7751:c.instructions+=6;goto B5a7751;
case 0x5a7755:c.instructions+=5;goto B5a7755;
case 0x5a775b:c.instructions+=4;goto B5a775b;
case 0x5a7761:c.instructions+=3;goto B5a7761;
case 0x5a7763:c.instructions+=2;goto B5a7763;
case 0x5a7766:c.instructions+=1;goto B5a7766;
case 0x5a7768:goto L5a7768;
case 0x5a776d:c.instructions+=1;goto B5a776d;
case 0x5a776f:goto L5a776f;
case 0x5a7771:goto L5a7771;
case 0x5a7777:c.instructions+=7;goto B5a7777;
case 0x5a7779:c.instructions+=6;goto B5a7779;
case 0x5a777f:c.instructions+=5;goto B5a777f;
case 0x5a7781:c.instructions+=4;goto B5a7781;
case 0x5a7784:c.instructions+=3;goto B5a7784;
case 0x5a7786:c.instructions+=2;goto B5a7786;
case 0x5a7789:c.instructions+=1;goto B5a7789;
case 0x5a778b:goto L5a778b;
case 0x5a7790:goto L5a7790;
case 0x5a7794:c.instructions+=6;goto B5a7794;
case 0x5a779a:c.instructions+=5;goto B5a779a;
case 0x5a77a0:c.instructions+=4;goto B5a77a0;
case 0x5a77a1:c.instructions+=3;goto B5a77a1;
case 0x5a77a2:c.instructions+=2;goto B5a77a2;
case 0x5a77a3:c.instructions+=1;goto B5a77a3;
case 0x5a77a8:goto L5a77a8;
case 0x5a77ab:c.instructions+=3;goto B5a77ab;
case 0x5a77b5:c.instructions+=2;goto B5a77b5;
case 0x5a77b6:c.instructions+=1;goto B5a77b6;
case 0x5a77c0:goto L5a77c0;
case 0x5a77c1:c.instructions+=6;goto B5a77c1;
case 0x5a77c5:c.instructions+=5;goto B5a77c5;
case 0x5a77cb:c.instructions+=4;goto B5a77cb;
case 0x5a77d1:c.instructions+=3;goto B5a77d1;
case 0x5a77d3:c.instructions+=2;goto B5a77d3;
case 0x5a77d6:c.instructions+=1;goto B5a77d6;
case 0x5a77d8:goto L5a77d8;
case 0x5a77dd:c.instructions+=1;goto B5a77dd;
case 0x5a77df:goto L5a77df;
case 0x5a77e1:goto L5a77e1;
case 0x5a77e7:c.instructions+=7;goto B5a77e7;
case 0x5a77e9:c.instructions+=6;goto B5a77e9;
case 0x5a77ef:c.instructions+=5;goto B5a77ef;
case 0x5a77f1:c.instructions+=4;goto B5a77f1;
case 0x5a77f4:c.instructions+=3;goto B5a77f4;
case 0x5a77f6:c.instructions+=2;goto B5a77f6;
case 0x5a77f9:c.instructions+=1;goto B5a77f9;
case 0x5a77fb:goto L5a77fb;
case 0x5a7800:goto L5a7800;
case 0x5a7804:c.instructions+=6;goto B5a7804;
case 0x5a780a:c.instructions+=5;goto B5a780a;
case 0x5a7810:c.instructions+=4;goto B5a7810;
case 0x5a7811:c.instructions+=3;goto B5a7811;
case 0x5a7812:c.instructions+=2;goto B5a7812;
case 0x5a7813:c.instructions+=1;goto B5a7813;
case 0x5a7818:goto L5a7818;
case 0x5a781b:c.instructions+=3;goto B5a781b;
case 0x5a7825:c.instructions+=2;goto B5a7825;
case 0x5a7826:c.instructions+=1;goto B5a7826;
case 0x5a7830:goto L5a7830;
case 0x5a7834:c.instructions+=5;goto B5a7834;
case 0x5a783a:c.instructions+=4;goto B5a783a;
case 0x5a7840:c.instructions+=3;goto B5a7840;
case 0x5a7842:c.instructions+=2;goto B5a7842;
case 0x5a7845:c.instructions+=1;goto B5a7845;
case 0x5a7847:goto L5a7847;
case 0x5a784c:c.instructions+=1;goto B5a784c;
case 0x5a784e:goto L5a784e;
case 0x5a7850:goto L5a7850;
case 0x5a7856:c.instructions+=7;goto B5a7856;
case 0x5a7858:c.instructions+=6;goto B5a7858;
case 0x5a785e:c.instructions+=5;goto B5a785e;
case 0x5a7860:c.instructions+=4;goto B5a7860;
case 0x5a7863:c.instructions+=3;goto B5a7863;
case 0x5a7865:c.instructions+=2;goto B5a7865;
case 0x5a7868:c.instructions+=1;goto B5a7868;
case 0x5a786a:goto L5a786a;
case 0x5a786f:goto L5a786f;
case 0x5a7873:c.instructions+=6;goto B5a7873;
case 0x5a7879:c.instructions+=5;goto B5a7879;
case 0x5a787f:c.instructions+=4;goto B5a787f;
case 0x5a7880:c.instructions+=3;goto B5a7880;
case 0x5a7881:c.instructions+=2;goto B5a7881;
case 0x5a7882:c.instructions+=1;goto B5a7882;
case 0x5a7887:goto L5a7887;
case 0x5a788a:c.instructions+=1;goto B5a788a;
case 0x5a7890:goto L5a7890;
case 0x5a7891:c.instructions+=17;goto B5a7891;
case 0x5a7895:c.instructions+=16;goto B5a7895;
case 0x5a7896:c.instructions+=15;goto B5a7896;
case 0x5a7898:c.instructions+=14;goto B5a7898;
case 0x5a789a:c.instructions+=13;goto B5a789a;
case 0x5a789b:c.instructions+=12;goto B5a789b;
case 0x5a78a1:c.instructions+=11;goto B5a78a1;
case 0x5a78a3:c.instructions+=10;goto B5a78a3;
case 0x5a78a5:c.instructions+=9;goto B5a78a5;
case 0x5a78a7:c.instructions+=8;goto B5a78a7;
case 0x5a78ab:c.instructions+=7;goto B5a78ab;
case 0x5a78ae:c.instructions+=6;goto B5a78ae;
case 0x5a78b1:c.instructions+=5;goto B5a78b1;
case 0x5a78b4:c.instructions+=4;goto B5a78b4;
case 0x5a78b7:c.instructions+=3;goto B5a78b7;
case 0x5a78ba:c.instructions+=2;goto B5a78ba;
case 0x5a78bd:c.instructions+=1;goto B5a78bd;
case 0x5a78c2:goto L5a78c2;
case 0x5a78c5:c.instructions+=7;goto B5a78c5;
case 0x5a78cb:c.instructions+=6;goto B5a78cb;
case 0x5a78cc:c.instructions+=5;goto B5a78cc;
case 0x5a78d2:c.instructions+=4;goto B5a78d2;
case 0x5a78d8:c.instructions+=3;goto B5a78d8;
case 0x5a78d9:c.instructions+=2;goto B5a78d9;
case 0x5a78da:c.instructions+=1;goto B5a78da;
case 0x5a78e0:goto L5a78e0;
case 0x5a78e4:c.instructions+=17;goto B5a78e4;
case 0x5a78e9:c.instructions+=16;goto B5a78e9;
case 0x5a78ef:c.instructions+=15;goto B5a78ef;
case 0x5a78f3:c.instructions+=14;goto B5a78f3;
case 0x5a78f7:c.instructions+=13;goto B5a78f7;
case 0x5a78fa:c.instructions+=12;goto B5a78fa;
case 0x5a7900:c.instructions+=11;goto B5a7900;
case 0x5a7903:c.instructions+=10;goto B5a7903;
case 0x5a7906:c.instructions+=9;goto B5a7906;
case 0x5a790c:c.instructions+=8;goto B5a790c;
case 0x5a790f:c.instructions+=7;goto B5a790f;
case 0x5a7915:c.instructions+=6;goto B5a7915;
case 0x5a7918:c.instructions+=5;goto B5a7918;
case 0x5a791b:c.instructions+=4;goto B5a791b;
case 0x5a7922:c.instructions+=3;goto B5a7922;
case 0x5a7928:c.instructions+=2;goto B5a7928;
case 0x5a792b:c.instructions+=1;goto B5a792b;
case 0x5a7930:goto L5a7930;
case 0x5a7932:c.instructions+=18;goto B5a7932;
case 0x5a7937:c.instructions+=17;goto B5a7937;
case 0x5a7939:c.instructions+=16;goto B5a7939;
case 0x5a793b:c.instructions+=15;goto B5a793b;
case 0x5a793e:c.instructions+=14;goto B5a793e;
case 0x5a7941:c.instructions+=13;goto B5a7941;
case 0x5a7944:c.instructions+=12;goto B5a7944;
case 0x5a7947:c.instructions+=11;goto B5a7947;
case 0x5a794b:c.instructions+=10;goto B5a794b;
case 0x5a794e:c.instructions+=9;goto B5a794e;
case 0x5a7951:c.instructions+=8;goto B5a7951;
case 0x5a7953:c.instructions+=7;goto B5a7953;
case 0x5a7956:c.instructions+=6;goto B5a7956;
case 0x5a7959:c.instructions+=5;goto B5a7959;
case 0x5a795c:c.instructions+=4;goto B5a795c;
case 0x5a795e:c.instructions+=3;goto B5a795e;
case 0x5a7961:c.instructions+=2;goto B5a7961;
case 0x5a7964:c.instructions+=1;goto B5a7964;
case 0x5a7970:goto L5a7970;
case 0x5a7972:c.instructions+=24;goto B5a7972;
case 0x5a7973:c.instructions+=23;goto B5a7973;
case 0x5a7976:c.instructions+=22;goto B5a7976;
case 0x5a7978:c.instructions+=21;goto B5a7978;
case 0x5a797d:c.instructions+=20;goto B5a797d;
case 0x5a797f:c.instructions+=19;goto B5a797f;
case 0x5a7982:c.instructions+=18;goto B5a7982;
case 0x5a7985:c.instructions+=17;goto B5a7985;
case 0x5a7988:c.instructions+=16;goto B5a7988;
case 0x5a798b:c.instructions+=15;goto B5a798b;
case 0x5a798f:c.instructions+=14;goto B5a798f;
case 0x5a7992:c.instructions+=13;goto B5a7992;
case 0x5a7995:c.instructions+=12;goto B5a7995;
case 0x5a7998:c.instructions+=11;goto B5a7998;
case 0x5a7999:c.instructions+=10;goto B5a7999;
case 0x5a799b:c.instructions+=9;goto B5a799b;
case 0x5a799e:c.instructions+=8;goto B5a799e;
case 0x5a79a1:c.instructions+=7;goto B5a79a1;
case 0x5a79a3:c.instructions+=6;goto B5a79a3;
case 0x5a79a6:c.instructions+=5;goto B5a79a6;
case 0x5a79a9:c.instructions+=4;goto B5a79a9;
case 0x5a79ab:c.instructions+=3;goto B5a79ab;
case 0x5a79ae:c.instructions+=2;goto B5a79ae;
case 0x5a79b0:c.instructions+=1;goto B5a79b0;
case 0x5a79b5:goto L5a79b5;
case 0x5a79b7:goto L5a79b7;
case 0x5a79ba:c.instructions+=1;goto B5a79ba;
case 0x5a79bf:goto L5a79bf;
case 0x5a79c1:goto L5a79c1;
case 0x5a79c7:c.instructions+=1;goto B5a79c7;
case 0x5a79cc:goto L5a79cc;
case 0x5a79ce:goto L5a79ce;
case 0x5a79cf:c.instructions+=9;goto B5a79cf;
case 0x5a79d2:c.instructions+=8;goto B5a79d2;
case 0x5a79d5:c.instructions+=7;goto B5a79d5;
case 0x5a79d8:c.instructions+=6;goto B5a79d8;
case 0x5a79de:c.instructions+=5;goto B5a79de;
case 0x5a79e5:c.instructions+=4;goto B5a79e5;
case 0x5a79eb:c.instructions+=3;goto B5a79eb;
case 0x5a79ed:c.instructions+=2;goto B5a79ed;
case 0x5a79ee:c.instructions+=1;goto B5a79ee;
case 0x5a79f0:goto L5a79f0;
case 0x5a79f3:c.instructions+=8;goto B5a79f3;
case 0x5a79f4:c.instructions+=7;goto B5a79f4;
case 0x5a79f8:c.instructions+=6;goto B5a79f8;
case 0x5a79f9:c.instructions+=5;goto B5a79f9;
case 0x5a79fa:c.instructions+=4;goto B5a79fa;
case 0x5a79fc:c.instructions+=3;goto B5a79fc;
case 0x5a79ff:c.instructions+=2;goto B5a79ff;
case 0x5a7a07:c.instructions+=1;goto B5a7a07;
case 0x5a7a09:goto L5a7a09;
case 0x5a7a10:c.instructions+=1;goto B5a7a10;
case 0x5a7a17:goto L5a7a17;
case 0x5a7a1b:c.instructions+=2;goto B5a7a1b;
case 0x5a7a23:c.instructions+=1;goto B5a7a23;
case 0x5a7a25:goto L5a7a25;
case 0x5a7a2d:c.instructions+=2;goto B5a7a2d;
case 0x5a7a35:c.instructions+=1;goto B5a7a35;
case 0x5a7a37:goto L5a7a37;
case 0x5a7a3f:c.instructions+=2;goto B5a7a3f;
case 0x5a7a47:c.instructions+=1;goto B5a7a47;
case 0x5a7a49:goto L5a7a49;
case 0x5a7a51:c.instructions+=2;goto B5a7a51;
case 0x5a7a59:c.instructions+=1;goto B5a7a59;
case 0x5a7a5b:goto L5a7a5b;
case 0x5a7a5f:goto L5a7a5f;
case 0x5a7a61:c.instructions+=2;goto B5a7a61;
case 0x5a7a64:c.instructions+=1;goto B5a7a64;
case 0x5a7a66:goto L5a7a66;
case 0x5a7a69:c.instructions+=1;goto B5a7a69;
case 0x5a7a6b:goto L5a7a6b;
case 0x5a7a6e:c.instructions+=2;goto B5a7a6e;
case 0x5a7a76:c.instructions+=1;goto B5a7a76;
case 0x5a7a78:goto L5a7a78;
case 0x5a7a80:goto L5a7a80;
case 0x5a7a84:c.instructions+=1;goto B5a7a84;
case 0x5a7a90:goto L5a7a90;
case 0x5a7a94:c.instructions+=2;goto B5a7a94;
case 0x5a7a97:c.instructions+=1;goto B5a7a97;
case 0x5a7a9d:goto L5a7a9d;
case 0x5a7a9f:c.instructions+=2;goto B5a7a9f;
case 0x5a7aa2:c.instructions+=1;goto B5a7aa2;
case 0x5a7aa4:goto L5a7aa4;
case 0x5a7aa7:c.instructions+=1;goto B5a7aa7;
case 0x5a7aa9:goto L5a7aa9;
case 0x5a7aac:c.instructions+=1;goto B5a7aac;
case 0x5a7aae:goto L5a7aae;
case 0x5a7ab1:c.instructions+=2;goto B5a7ab1;
case 0x5a7ab7:c.instructions+=1;goto B5a7ab7;
case 0x5a7ab9:goto L5a7ab9;
case 0x5a7abb:c.instructions+=2;goto B5a7abb;
case 0x5a7abf:c.instructions+=1;goto B5a7abf;
case 0x5a7ac1:goto L5a7ac1;
case 0x5a7ac3:goto L5a7ac3;
case 0x5a7ac5:c.instructions+=2;goto B5a7ac5;
case 0x5a7acc:c.instructions+=1;goto B5a7acc;
case 0x5a7ace:goto L5a7ace;
case 0x5a7ad1:c.instructions+=1;goto B5a7ad1;
case 0x5a7ad3:goto L5a7ad3;
case 0x5a7ad5:c.instructions+=1;goto B5a7ad5;
case 0x5a7adc:goto L5a7adc;
case 0x5a7ae0:c.instructions+=4;goto B5a7ae0;
case 0x5a7ae2:c.instructions+=3;goto B5a7ae2;
case 0x5a7ae4:c.instructions+=2;goto B5a7ae4;
case 0x5a7ae7:c.instructions+=1;goto B5a7ae7;
case 0x5a7ae9:goto L5a7ae9;
case 0x5a7aed:c.instructions+=1;goto B5a7aed;
case 0x5a7aef:goto L5a7aef;
case 0x5a7af2:c.instructions+=2;goto B5a7af2;
case 0x5a7af8:c.instructions+=1;goto B5a7af8;
case 0x5a7afa:goto L5a7afa;
case 0x5a7afc:c.instructions+=2;goto B5a7afc;
case 0x5a7b00:c.instructions+=1;goto B5a7b00;
case 0x5a7b02:goto L5a7b02;
case 0x5a7b04:goto L5a7b04;
case 0x5a7b06:c.instructions+=2;goto B5a7b06;
case 0x5a7b0d:c.instructions+=1;goto B5a7b0d;
case 0x5a7b0f:goto L5a7b0f;
case 0x5a7b12:c.instructions+=1;goto B5a7b12;
case 0x5a7b14:goto L5a7b14;
case 0x5a7b16:c.instructions+=1;goto B5a7b16;
case 0x5a7b1d:goto L5a7b1d;
case 0x5a7b21:c.instructions+=4;goto B5a7b21;
case 0x5a7b23:c.instructions+=3;goto B5a7b23;
case 0x5a7b25:c.instructions+=2;goto B5a7b25;
case 0x5a7b28:c.instructions+=1;goto B5a7b28;
case 0x5a7b2a:goto L5a7b2a;
case 0x5a7b2e:c.instructions+=1;goto B5a7b2e;
case 0x5a7b30:goto L5a7b30;
case 0x5a7b32:goto L5a7b32;
case 0x5a7b33:c.instructions+=2;goto B5a7b33;
case 0x5a7b36:c.instructions+=1;goto B5a7b36;
case 0x5a7b3c:goto L5a7b3c;
case 0x5a7b40:c.instructions+=5;goto B5a7b40;
case 0x5a7b41:c.instructions+=4;goto B5a7b41;
case 0x5a7b42:c.instructions+=3;goto B5a7b42;
case 0x5a7b43:c.instructions+=2;goto B5a7b43;
case 0x5a7b46:c.instructions+=1;goto B5a7b46;
case 0x5a7b80:goto L5a7b80;
case 0x5a7b83:c.instructions+=18;goto B5a7b83;
case 0x5a7b84:c.instructions+=17;goto B5a7b84;
case 0x5a7b85:c.instructions+=16;goto B5a7b85;
case 0x5a7b87:c.instructions+=15;goto B5a7b87;
case 0x5a7b89:c.instructions+=14;goto B5a7b89;
case 0x5a7b8f:c.instructions+=13;goto B5a7b8f;
case 0x5a7b95:c.instructions+=12;goto B5a7b95;
case 0x5a7b9c:c.instructions+=11;goto B5a7b9c;
case 0x5a7ba3:c.instructions+=10;goto B5a7ba3;
case 0x5a7ba9:c.instructions+=9;goto B5a7ba9;
case 0x5a7bad:c.instructions+=8;goto B5a7bad;
case 0x5a7bae:c.instructions+=7;goto B5a7bae;
case 0x5a7bb2:c.instructions+=6;goto B5a7bb2;
case 0x5a7bb6:c.instructions+=5;goto B5a7bb6;
case 0x5a7bb7:c.instructions+=4;goto B5a7bb7;
case 0x5a7bb9:c.instructions+=3;goto B5a7bb9;
case 0x5a7bbb:c.instructions+=2;goto B5a7bbb;
case 0x5a7bbf:c.instructions+=1;goto B5a7bbf;
case 0x5a7bc4:goto L5a7bc4;
case 0x5a7bca:c.instructions+=10;goto B5a7bca;
case 0x5a7bd0:c.instructions+=9;goto B5a7bd0;
case 0x5a7bd4:c.instructions+=8;goto B5a7bd4;
case 0x5a7bd8:c.instructions+=7;goto B5a7bd8;
case 0x5a7bd9:c.instructions+=6;goto B5a7bd9;
case 0x5a7bdd:c.instructions+=5;goto B5a7bdd;
case 0x5a7bde:c.instructions+=4;goto B5a7bde;
case 0x5a7be2:c.instructions+=3;goto B5a7be2;
case 0x5a7be4:c.instructions+=2;goto B5a7be4;
case 0x5a7be6:c.instructions+=1;goto B5a7be6;
case 0x5a7beb:goto L5a7beb;
case 0x5a7bf1:c.instructions+=10;goto B5a7bf1;
case 0x5a7bf7:c.instructions+=9;goto B5a7bf7;
case 0x5a7bfb:c.instructions+=8;goto B5a7bfb;
case 0x5a7bff:c.instructions+=7;goto B5a7bff;
case 0x5a7c00:c.instructions+=6;goto B5a7c00;
case 0x5a7c04:c.instructions+=5;goto B5a7c04;
case 0x5a7c05:c.instructions+=4;goto B5a7c05;
case 0x5a7c07:c.instructions+=3;goto B5a7c07;
case 0x5a7c09:c.instructions+=2;goto B5a7c09;
case 0x5a7c0d:c.instructions+=1;goto B5a7c0d;
case 0x5a7c12:goto L5a7c12;
case 0x5a7c18:c.instructions+=10;goto B5a7c18;
case 0x5a7c1e:c.instructions+=9;goto B5a7c1e;
case 0x5a7c22:c.instructions+=8;goto B5a7c22;
case 0x5a7c23:c.instructions+=7;goto B5a7c23;
case 0x5a7c27:c.instructions+=6;goto B5a7c27;
case 0x5a7c2b:c.instructions+=5;goto B5a7c2b;
case 0x5a7c2c:c.instructions+=4;goto B5a7c2c;
case 0x5a7c2e:c.instructions+=3;goto B5a7c2e;
case 0x5a7c30:c.instructions+=2;goto B5a7c30;
case 0x5a7c34:c.instructions+=1;goto B5a7c34;
case 0x5a7c39:goto L5a7c39;
case 0x5a7c3d:c.instructions+=8;goto B5a7c3d;
case 0x5a7c41:c.instructions+=7;goto B5a7c41;
case 0x5a7c43:c.instructions+=6;goto B5a7c43;
case 0x5a7c46:c.instructions+=5;goto B5a7c46;
case 0x5a7c49:c.instructions+=4;goto B5a7c49;
case 0x5a7c4b:c.instructions+=3;goto B5a7c4b;
case 0x5a7c4c:c.instructions+=2;goto B5a7c4c;
case 0x5a7c4d:c.instructions+=1;goto B5a7c4d;
case 0x5a7c4f:goto L5a7c4f;
case 0x5a7c53:c.instructions+=11;goto B5a7c53;
case 0x5a7c57:c.instructions+=10;goto B5a7c57;
case 0x5a7c5b:c.instructions+=9;goto B5a7c5b;
case 0x5a7c5f:c.instructions+=8;goto B5a7c5f;
case 0x5a7c65:c.instructions+=7;goto B5a7c65;
case 0x5a7c67:c.instructions+=6;goto B5a7c67;
case 0x5a7c6b:c.instructions+=5;goto B5a7c6b;
case 0x5a7c6f:c.instructions+=4;goto B5a7c6f;
case 0x5a7c75:c.instructions+=3;goto B5a7c75;
case 0x5a7c77:c.instructions+=2;goto B5a7c77;
case 0x5a7c7a:c.instructions+=1;goto B5a7c7a;
case 0x5a7c7d:goto L5a7c7d;
case 0x5a7c81:c.instructions+=10;goto B5a7c81;
case 0x5a7c84:c.instructions+=9;goto B5a7c84;
case 0x5a7c88:c.instructions+=8;goto B5a7c88;
case 0x5a7c8b:c.instructions+=7;goto B5a7c8b;
case 0x5a7c8f:c.instructions+=6;goto B5a7c8f;
case 0x5a7c91:c.instructions+=5;goto B5a7c91;
case 0x5a7c95:c.instructions+=4;goto B5a7c95;
case 0x5a7c99:c.instructions+=3;goto B5a7c99;
case 0x5a7c9b:c.instructions+=2;goto B5a7c9b;
case 0x5a7c9e:c.instructions+=1;goto B5a7c9e;
case 0x5a7cb0:goto L5a7cb0;
case 0x5a7cb3:c.instructions+=11;goto B5a7cb3;
case 0x5a7cb4:c.instructions+=10;goto B5a7cb4;
case 0x5a7cb6:c.instructions+=9;goto B5a7cb6;
case 0x5a7cb8:c.instructions+=8;goto B5a7cb8;
case 0x5a7cbe:c.instructions+=7;goto B5a7cbe;
case 0x5a7cc4:c.instructions+=6;goto B5a7cc4;
case 0x5a7cc5:c.instructions+=5;goto B5a7cc5;
case 0x5a7ccc:c.instructions+=4;goto B5a7ccc;
case 0x5a7ccd:c.instructions+=3;goto B5a7ccd;
case 0x5a7cd3:c.instructions+=2;goto B5a7cd3;
case 0x5a7cd5:c.instructions+=1;goto B5a7cd5;
case 0x5a7ce0:goto L5a7ce0;
case 0x5a7ce6:c.instructions+=10;goto B5a7ce6;
case 0x5a7cea:c.instructions+=9;goto B5a7cea;
case 0x5a7cee:c.instructions+=8;goto B5a7cee;
case 0x5a7cef:c.instructions+=7;goto B5a7cef;
case 0x5a7cf1:c.instructions+=6;goto B5a7cf1;
case 0x5a7cf3:c.instructions+=5;goto B5a7cf3;
case 0x5a7cf4:c.instructions+=4;goto B5a7cf4;
case 0x5a7cf6:c.instructions+=3;goto B5a7cf6;
case 0x5a7cf8:c.instructions+=2;goto B5a7cf8;
case 0x5a7cfa:c.instructions+=1;goto B5a7cfa;
case 0x5a7cff:goto L5a7cff;
case 0x5a7d05:c.instructions+=10;goto B5a7d05;
case 0x5a7d08:c.instructions+=9;goto B5a7d08;
case 0x5a7d0c:c.instructions+=8;goto B5a7d0c;
case 0x5a7d0e:c.instructions+=7;goto B5a7d0e;
case 0x5a7d12:c.instructions+=6;goto B5a7d12;
case 0x5a7d13:c.instructions+=5;goto B5a7d13;
case 0x5a7d14:c.instructions+=4;goto B5a7d14;
case 0x5a7d16:c.instructions+=3;goto B5a7d16;
case 0x5a7d18:c.instructions+=2;goto B5a7d18;
case 0x5a7d1a:c.instructions+=1;goto B5a7d1a;
case 0x5a7d1f:goto L5a7d1f;
case 0x5a7d22:c.instructions+=3;goto B5a7d22;
case 0x5a7d25:c.instructions+=2;goto B5a7d25;
case 0x5a7d28:c.instructions+=1;goto B5a7d28;
case 0x5a7d2a:goto L5a7d2a;
case 0x5a7d2e:c.instructions+=9;goto B5a7d2e;
case 0x5a7d32:c.instructions+=8;goto B5a7d32;
case 0x5a7d34:c.instructions+=7;goto B5a7d34;
case 0x5a7d37:c.instructions+=6;goto B5a7d37;
case 0x5a7d38:c.instructions+=5;goto B5a7d38;
case 0x5a7d3b:c.instructions+=4;goto B5a7d3b;
case 0x5a7d3d:c.instructions+=3;goto B5a7d3d;
case 0x5a7d3e:c.instructions+=2;goto B5a7d3e;
case 0x5a7d3f:c.instructions+=1;goto B5a7d3f;
case 0x5a7d41:goto L5a7d41;
case 0x5a7d45:c.instructions+=11;goto B5a7d45;
case 0x5a7d49:c.instructions+=10;goto B5a7d49;
case 0x5a7d4d:c.instructions+=9;goto B5a7d4d;
case 0x5a7d51:c.instructions+=8;goto B5a7d51;
case 0x5a7d57:c.instructions+=7;goto B5a7d57;
case 0x5a7d59:c.instructions+=6;goto B5a7d59;
case 0x5a7d5d:c.instructions+=5;goto B5a7d5d;
case 0x5a7d61:c.instructions+=4;goto B5a7d61;
case 0x5a7d67:c.instructions+=3;goto B5a7d67;
case 0x5a7d69:c.instructions+=2;goto B5a7d69;
case 0x5a7d6c:c.instructions+=1;goto B5a7d6c;
case 0x5a7d6f:goto L5a7d6f;
case 0x5a7d73:c.instructions+=10;goto B5a7d73;
case 0x5a7d76:c.instructions+=9;goto B5a7d76;
case 0x5a7d7a:c.instructions+=8;goto B5a7d7a;
case 0x5a7d7d:c.instructions+=7;goto B5a7d7d;
case 0x5a7d81:c.instructions+=6;goto B5a7d81;
case 0x5a7d83:c.instructions+=5;goto B5a7d83;
case 0x5a7d87:c.instructions+=4;goto B5a7d87;
case 0x5a7d8b:c.instructions+=3;goto B5a7d8b;
case 0x5a7d8d:c.instructions+=2;goto B5a7d8d;
case 0x5a7d90:c.instructions+=1;goto B5a7d90;
case 0x5a7da0:goto L5a7da0;
case 0x5a7da1:c.instructions+=7;goto B5a7da1;
case 0x5a7da2:c.instructions+=6;goto B5a7da2;
case 0x5a7da4:c.instructions+=5;goto B5a7da4;
case 0x5a7daa:c.instructions+=4;goto B5a7daa;
case 0x5a7dac:c.instructions+=3;goto B5a7dac;
case 0x5a7dad:c.instructions+=2;goto B5a7dad;
case 0x5a7db5:c.instructions+=1;goto B5a7db5;
case 0x5a7db7:goto L5a7db7;
case 0x5a7db9:c.instructions+=8;goto B5a7db9;
case 0x5a7dbc:c.instructions+=7;goto B5a7dbc;
case 0x5a7dc2:c.instructions+=6;goto B5a7dc2;
case 0x5a7dc5:c.instructions+=5;goto B5a7dc5;
case 0x5a7dc6:c.instructions+=4;goto B5a7dc6;
case 0x5a7dcb:c.instructions+=3;goto B5a7dcb;
case 0x5a7dcc:c.instructions+=2;goto B5a7dcc;
case 0x5a7dd3:c.instructions+=1;goto B5a7dd3;
case 0x5a7dd8:goto L5a7dd8;
case 0x5a7dde:c.instructions+=8;goto B5a7dde;
case 0x5a7ddf:c.instructions+=7;goto B5a7ddf;
case 0x5a7de0:c.instructions+=6;goto B5a7de0;
case 0x5a7de4:c.instructions+=5;goto B5a7de4;
case 0x5a7de5:c.instructions+=4;goto B5a7de5;
case 0x5a7de8:c.instructions+=3;goto B5a7de8;
case 0x5a7deb:c.instructions+=2;goto B5a7deb;
case 0x5a7df1:c.instructions+=1;goto B5a7df1;
case 0x5a7df7:goto L5a7df7;
case 0x5a7dfe:c.instructions+=1;goto B5a7dfe;
case 0x5a7e05:goto L5a7e05;
case 0x5a7e08:c.instructions+=2;goto B5a7e08;
case 0x5a7e0a:c.instructions+=1;goto B5a7e0a;
case 0x5a7e10:goto L5a7e10;
case 0x5a7e11:c.instructions+=4;goto B5a7e11;
case 0x5a7e12:c.instructions+=3;goto B5a7e12;
case 0x5a7e13:c.instructions+=2;goto B5a7e13;
case 0x5a7e15:c.instructions+=1;goto B5a7e15;
case 0x5a7e1a:goto L5a7e1a;
case 0x5a7e1e:c.instructions+=5;goto B5a7e1e;
case 0x5a7e20:c.instructions+=4;goto B5a7e20;
case 0x5a7e21:c.instructions+=3;goto B5a7e21;
case 0x5a7e24:c.instructions+=2;goto B5a7e24;
case 0x5a7e28:c.instructions+=1;goto B5a7e28;
case 0x5a7e2a:goto L5a7e2a;
case 0x5a7e2e:c.instructions+=3;goto B5a7e2e;
case 0x5a7e34:c.instructions+=2;goto B5a7e34;
case 0x5a7e38:c.instructions+=1;goto B5a7e38;
case 0x5a7e3d:goto L5a7e3d;
case 0x5a7e41:c.instructions+=6;goto B5a7e41;
case 0x5a7e44:c.instructions+=5;goto B5a7e44;
case 0x5a7e45:c.instructions+=4;goto B5a7e45;
case 0x5a7e46:c.instructions+=3;goto B5a7e46;
case 0x5a7e47:c.instructions+=2;goto B5a7e47;
case 0x5a7e49:c.instructions+=1;goto B5a7e49;
case 0x5a7e4e:goto L5a7e4e;
case 0x5a7e50:c.instructions+=3;goto B5a7e50;
case 0x5a7e57:c.instructions+=2;goto B5a7e57;
case 0x5a7e5b:c.instructions+=1;goto B5a7e5b;
case 0x5a7e5d:goto L5a7e5d;
case 0x5a7e60:c.instructions+=5;goto B5a7e60;
case 0x5a7e62:c.instructions+=4;goto B5a7e62;
case 0x5a7e63:c.instructions+=3;goto B5a7e63;
case 0x5a7e64:c.instructions+=2;goto B5a7e64;
case 0x5a7e66:c.instructions+=1;goto B5a7e66;
case 0x5a7e6b:goto L5a7e6b;
case 0x5a7e6d:c.instructions+=2;goto B5a7e6d;
case 0x5a7e71:c.instructions+=1;goto B5a7e71;
case 0x5a7e73:goto L5a7e73;
case 0x5a7e76:c.instructions+=5;goto B5a7e76;
case 0x5a7e78:c.instructions+=4;goto B5a7e78;
case 0x5a7e79:c.instructions+=3;goto B5a7e79;
case 0x5a7e7a:c.instructions+=2;goto B5a7e7a;
case 0x5a7e7c:c.instructions+=1;goto B5a7e7c;
case 0x5a7e81:goto L5a7e81;
case 0x5a7e83:c.instructions+=9;goto B5a7e83;
case 0x5a7e85:c.instructions+=8;goto B5a7e85;
case 0x5a7e8b:c.instructions+=7;goto B5a7e8b;
case 0x5a7e91:c.instructions+=6;goto B5a7e91;
case 0x5a7e93:c.instructions+=5;goto B5a7e93;
case 0x5a7e9a:c.instructions+=4;goto B5a7e9a;
case 0x5a7e9b:c.instructions+=3;goto B5a7e9b;
case 0x5a7e9c:c.instructions+=2;goto B5a7e9c;
case 0x5a7e9e:c.instructions+=1;goto B5a7e9e;
case 0x5a7ea3:goto L5a7ea3;
case 0x5a7ea5:c.instructions+=3;goto B5a7ea5;
case 0x5a7ea7:c.instructions+=2;goto B5a7ea7;
case 0x5a7eab:c.instructions+=1;goto B5a7eab;
case 0x5a7ead:goto L5a7ead;
case 0x5a7eb1:c.instructions+=6;goto B5a7eb1;
case 0x5a7eb4:c.instructions+=5;goto B5a7eb4;
case 0x5a7eb5:c.instructions+=4;goto B5a7eb5;
case 0x5a7eb6:c.instructions+=3;goto B5a7eb6;
case 0x5a7eb7:c.instructions+=2;goto B5a7eb7;
case 0x5a7eb9:c.instructions+=1;goto B5a7eb9;
case 0x5a7ebe:goto L5a7ebe;
case 0x5a7ec0:c.instructions+=1;goto B5a7ec0;
case 0x5a7ec4:goto L5a7ec4;
case 0x5a7eca:c.instructions+=6;goto B5a7eca;
case 0x5a7ecb:c.instructions+=5;goto B5a7ecb;
case 0x5a7ecd:c.instructions+=4;goto B5a7ecd;
case 0x5a7ece:c.instructions+=3;goto B5a7ece;
case 0x5a7ed4:c.instructions+=2;goto B5a7ed4;
case 0x5a7ed5:c.instructions+=1;goto B5a7ed5;
case 0x5a7ed7:goto L5a7ed7;
case 0x5a7ed9:c.instructions+=7;goto B5a7ed9;
case 0x5a7edc:c.instructions+=6;goto B5a7edc;
case 0x5a7ee2:c.instructions+=5;goto B5a7ee2;
case 0x5a7ee8:c.instructions+=4;goto B5a7ee8;
case 0x5a7ee9:c.instructions+=3;goto B5a7ee9;
case 0x5a7eea:c.instructions+=2;goto B5a7eea;
case 0x5a7ef1:c.instructions+=1;goto B5a7ef1;
case 0x5a7ef6:goto L5a7ef6;
case 0x5a7efa:c.instructions+=4;goto B5a7efa;
case 0x5a7efb:c.instructions+=3;goto B5a7efb;
case 0x5a7efc:c.instructions+=2;goto B5a7efc;
case 0x5a7efd:c.instructions+=1;goto B5a7efd;
case 0x5a7f30:goto L5a7f30;
case 0x5a7f32:c.instructions+=20;goto B5a7f32;
case 0x5a7f37:c.instructions+=19;goto B5a7f37;
case 0x5a7f3d:c.instructions+=18;goto B5a7f3d;
case 0x5a7f3e:c.instructions+=17;goto B5a7f3e;
case 0x5a7f45:c.instructions+=16;goto B5a7f45;
case 0x5a7f46:c.instructions+=15;goto B5a7f46;
case 0x5a7f47:c.instructions+=14;goto B5a7f47;
case 0x5a7f49:c.instructions+=13;goto B5a7f49;
case 0x5a7f4a:c.instructions+=12;goto B5a7f4a;
case 0x5a7f4e:c.instructions+=11;goto B5a7f4e;
case 0x5a7f52:c.instructions+=10;goto B5a7f52;
case 0x5a7f54:c.instructions+=9;goto B5a7f54;
case 0x5a7f57:c.instructions+=8;goto B5a7f57;
case 0x5a7f58:c.instructions+=7;goto B5a7f58;
case 0x5a7f5c:c.instructions+=6;goto B5a7f5c;
case 0x5a7f62:c.instructions+=5;goto B5a7f62;
case 0x5a7f65:c.instructions+=4;goto B5a7f65;
case 0x5a7f68:c.instructions+=3;goto B5a7f68;
case 0x5a7f6b:c.instructions+=2;goto B5a7f6b;
case 0x5a7f6e:c.instructions+=1;goto B5a7f6e;
case 0x5a7f73:goto L5a7f73;
case 0x5a7f76:c.instructions+=25;goto B5a7f76;
case 0x5a7f79:c.instructions+=24;goto B5a7f79;
case 0x5a7f7c:c.instructions+=23;goto B5a7f7c;
case 0x5a7f82:c.instructions+=22;goto B5a7f82;
case 0x5a7f88:c.instructions+=21;goto B5a7f88;
case 0x5a7f8e:c.instructions+=20;goto B5a7f8e;
case 0x5a7f94:c.instructions+=19;goto B5a7f94;
case 0x5a7f9a:c.instructions+=18;goto B5a7f9a;
case 0x5a7fa0:c.instructions+=17;goto B5a7fa0;
case 0x5a7fa6:c.instructions+=16;goto B5a7fa6;
case 0x5a7fac:c.instructions+=15;goto B5a7fac;
case 0x5a7fb2:c.instructions+=14;goto B5a7fb2;
case 0x5a7fb8:c.instructions+=13;goto B5a7fb8;
case 0x5a7fbe:c.instructions+=12;goto B5a7fbe;
case 0x5a7fc4:c.instructions+=11;goto B5a7fc4;
case 0x5a7fca:c.instructions+=10;goto B5a7fca;
case 0x5a7fd0:c.instructions+=9;goto B5a7fd0;
case 0x5a7fd6:c.instructions+=8;goto B5a7fd6;
case 0x5a7fdc:c.instructions+=7;goto B5a7fdc;
case 0x5a7fe2:c.instructions+=6;goto B5a7fe2;
case 0x5a7fe8:c.instructions+=5;goto B5a7fe8;
case 0x5a7fee:c.instructions+=4;goto B5a7fee;
case 0x5a7ff4:c.instructions+=3;goto B5a7ff4;
case 0x5a7ffa:c.instructions+=2;goto B5a7ffa;
case 0x5a7ffc:c.instructions+=1;goto B5a7ffc;
default:missing_instruction(c.pc);}
B5a7001:L5a7001:{c.instructions+=56;NFSU2_TR(0x5a7001);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7007:{NFSU2_TR(0x5a7007);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7009:{NFSU2_TR(0x5a7009);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a700b:{NFSU2_TR(0x5a700b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a700f:{NFSU2_TR(0x5a700f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7011:{NFSU2_TR(0x5a7011);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7017:{NFSU2_TR(0x5a7017);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7019:{NFSU2_TR(0x5a7019);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a701f:{NFSU2_TR(0x5a701f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7022:{NFSU2_TR(0x5a7022);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7024:{NFSU2_TR(0x5a7024);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7028:{NFSU2_TR(0x5a7028);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a702a:{NFSU2_TR(0x5a702a);
{u32 ea_=u32(r4(R+4)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7030:{NFSU2_TR(0x5a7030);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5a7037:{NFSU2_TR(0x5a7037);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7039:{NFSU2_TR(0x5a7039);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7040:{NFSU2_TR(0x5a7040);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7043:{NFSU2_TR(0x5a7043);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7045:{NFSU2_TR(0x5a7045);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7049:{NFSU2_TR(0x5a7049);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a704b:{NFSU2_TR(0x5a704b);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7052:{NFSU2_TR(0x5a7052);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7054:{NFSU2_TR(0x5a7054);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a705b:{NFSU2_TR(0x5a705b);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a705e:{NFSU2_TR(0x5a705e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7060:{NFSU2_TR(0x5a7060);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7064:{NFSU2_TR(0x5a7064);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7066:{NFSU2_TR(0x5a7066);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a706d:{NFSU2_TR(0x5a706d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a706f:{NFSU2_TR(0x5a706f);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7076:{NFSU2_TR(0x5a7076);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7079:{NFSU2_TR(0x5a7079);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a707b:{NFSU2_TR(0x5a707b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a707f:{NFSU2_TR(0x5a707f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7081:{NFSU2_TR(0x5a7081);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7088:{NFSU2_TR(0x5a7088);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a708a:{NFSU2_TR(0x5a708a);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7091:{NFSU2_TR(0x5a7091);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7094:{NFSU2_TR(0x5a7094);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7096:{NFSU2_TR(0x5a7096);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a709a:{NFSU2_TR(0x5a709a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a709c:{NFSU2_TR(0x5a709c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a70a3:{NFSU2_TR(0x5a70a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a70a6:{NFSU2_TR(0x5a70a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5a70a9:{NFSU2_TR(0x5a70a9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a70ab:{NFSU2_TR(0x5a70ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5a70ad:{NFSU2_TR(0x5a70ad);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a70af:{NFSU2_TR(0x5a70af);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5a70b0:{NFSU2_TR(0x5a70b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a70b3:{NFSU2_TR(0x5a70b3);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a70b6:{NFSU2_TR(0x5a70b6);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a70b8:{NFSU2_TR(0x5a70b8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a70bc:{NFSU2_TR(0x5a70bc);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a70be:{NFSU2_TR(0x5a70be);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a70c0:{NFSU2_TR(0x5a70c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a70c2:{NFSU2_TR(0x5a70c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5a6fd7u,5a6);}
}
B5a70c8:L5a70c8:{c.instructions+=32;NFSU2_TR(0x5a70c8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a70cc:{NFSU2_TR(0x5a70cc);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a70cf:{NFSU2_TR(0x5a70cf);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a70d2:{NFSU2_TR(0x5a70d2);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a70d5:{NFSU2_TR(0x5a70d5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a70d9:{NFSU2_TR(0x5a70d9);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a70dc:{NFSU2_TR(0x5a70dc);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a70df:{NFSU2_TR(0x5a70df);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a70e2:{NFSU2_TR(0x5a70e2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a70e6:{NFSU2_TR(0x5a70e6);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a70e9:{NFSU2_TR(0x5a70e9);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a70ec:{NFSU2_TR(0x5a70ec);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a70ef:{NFSU2_TR(0x5a70ef);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a70f3:{NFSU2_TR(0x5a70f3);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a70f6:{NFSU2_TR(0x5a70f6);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a70fc:{NFSU2_TR(0x5a70fc);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7102:{NFSU2_TR(0x5a7102);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7105:{NFSU2_TR(0x5a7105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7106:{NFSU2_TR(0x5a7106);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a710a:{NFSU2_TR(0x5a710a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a710b:{NFSU2_TR(0x5a710b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a710e:{NFSU2_TR(0x5a710e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7111:{NFSU2_TR(0x5a7111);
{u32 ea_=u32(r4(R+0)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7117:{NFSU2_TR(0x5a7117);
{u32 ea_=u32(r4(R+12)+u32(1468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a711d:{NFSU2_TR(0x5a711d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a711f:{NFSU2_TR(0x5a711f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7123:{NFSU2_TR(0x5a7123);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7125:{NFSU2_TR(0x5a7125);
{u32 ea_=u32(r4(R+0)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a712b:{NFSU2_TR(0x5a712b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a712d:{NFSU2_TR(0x5a712d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a712e:{NFSU2_TR(0x5a712e);
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
B5a7131:{NFSU2_TR(0x5a7131);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7140:L5a7140:{c.instructions+=8;NFSU2_TR(0x5a7140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7141:{NFSU2_TR(0x5a7141);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a7145:{NFSU2_TR(0x5a7145);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7146:{NFSU2_TR(0x5a7146);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7148:{NFSU2_TR(0x5a7148);
__builtin_memmove((R+24),(R+4),4);
}
B5a714a:{NFSU2_TR(0x5a714a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a714e:{NFSU2_TR(0x5a714e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7150:{NFSU2_TR(0x5a7150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7155ull));
TAIL_STATIC(0x5a6580u,5a6);
}
B5a7155:L5a7155:{c.instructions+=5;NFSU2_TR(0x5a7155);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a715b:{NFSU2_TR(0x5a715b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a715d:{NFSU2_TR(0x5a715d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a715f:{NFSU2_TR(0x5a715f);
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
B5a7162:{NFSU2_TR(0x5a7162);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a71b6;}}
}
B5a7164:L5a7164:{c.instructions+=22;NFSU2_TR(0x5a7164);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7168:{NFSU2_TR(0x5a7168);
{u32 ea_=u32(r4(R+0)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a716e:{NFSU2_TR(0x5a716e);
{u32 ea_=u32(r4(R+24)+u32(1464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7174:{NFSU2_TR(0x5a7174);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7176:{NFSU2_TR(0x5a7176);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7178:{NFSU2_TR(0x5a7178);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a717a:{NFSU2_TR(0x5a717a);
{u32 ea_=u32(r4(R+0)+u32(636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7180:{NFSU2_TR(0x5a7180);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7182:{NFSU2_TR(0x5a7182);
{u32 ea_=u32(r4(R+0)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7188:{NFSU2_TR(0x5a7188);
{u32 ea_=u32(r4(R+24)+u32(1460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a718e:{NFSU2_TR(0x5a718e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7190:{NFSU2_TR(0x5a7190);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7192:{NFSU2_TR(0x5a7192);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7194:{NFSU2_TR(0x5a7194);
{u32 ea_=u32(r4(R+0)+u32(632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a719a:{NFSU2_TR(0x5a719a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a719c:{NFSU2_TR(0x5a719c);
{u32 ea_=u32(r4(R+0)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a71a2:{NFSU2_TR(0x5a71a2);
{u32 ea_=u32(r4(R+24)+u32(1456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a71a8:{NFSU2_TR(0x5a71a8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a71aa:{NFSU2_TR(0x5a71aa);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a71ac:{NFSU2_TR(0x5a71ac);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a71ae:{NFSU2_TR(0x5a71ae);
{u32 ea_=u32(r4(R+0)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a71b4:{NFSU2_TR(0x5a71b4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a71b6:L5a71b6:{c.instructions+=3;NFSU2_TR(0x5a71b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a71b8:{NFSU2_TR(0x5a71b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a71b9:{NFSU2_TR(0x5a71b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a71c0:L5a71c0:{c.instructions+=11;NFSU2_TR(0x5a71c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a71c1:{NFSU2_TR(0x5a71c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a71c5:{NFSU2_TR(0x5a71c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a71c6:{NFSU2_TR(0x5a71c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a71c7:{NFSU2_TR(0x5a71c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a71cb:{NFSU2_TR(0x5a71cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a71cc:{NFSU2_TR(0x5a71cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a71ce:{NFSU2_TR(0x5a71ce);
__builtin_memmove((R+28),(R+4),4);
}
B5a71d0:{NFSU2_TR(0x5a71d0);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a71d2:{NFSU2_TR(0x5a71d2);
__builtin_memmove((R+4),(R+12),4);
}
B5a71d4:{NFSU2_TR(0x5a71d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a71d9ull));
TAIL_STATIC(0x5a6580u,5a6);
}
B5a71d9:L5a71d9:{c.instructions+=4;NFSU2_TR(0x5a71d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a71dc:{NFSU2_TR(0x5a71dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a71de:{NFSU2_TR(0x5a71de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a71e2:{NFSU2_TR(0x5a71e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a71f5;}}
}
B5a71e4:L5a71e4:{c.instructions+=3;NFSU2_TR(0x5a71e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a71e7:{NFSU2_TR(0x5a71e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a71e9:{NFSU2_TR(0x5a71e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a71f5;}}
}
B5a71eb:L5a71eb:{c.instructions+=3;NFSU2_TR(0x5a71eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x83ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5a71f1:{NFSU2_TR(0x5a71f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a71f3:{NFSU2_TR(0x5a71f3);
if(r1(R+518)){{goto L5a71ff;}}
}
B5a71f5:L5a71f5:{c.instructions+=1;NFSU2_TR(0x5a71f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a71ff:L5a71ff:{c.instructions+=5;NFSU2_TR(0x5a71ff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7205:{NFSU2_TR(0x5a7205);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a7207:{NFSU2_TR(0x5a7207);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7209:{NFSU2_TR(0x5a7209);
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
B5a720c:{NFSU2_TR(0x5a720c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a7355;}}
}
B5a7212:L5a7212:{c.instructions+=3;NFSU2_TR(0x5a7212);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7215:{NFSU2_TR(0x5a7215);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a721b:{NFSU2_TR(0x5a721b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7220ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5a7220:L5a7220:{c.instructions+=2;NFSU2_TR(0x5a7220);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5a7223:{NFSU2_TR(0x5a7223);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5a7265;}}
}
B5a7225:L5a7225:{c.instructions+=2;NFSU2_TR(0x5a7225);
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
B5a7228:{NFSU2_TR(0x5a7228);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5a7265;}}
}
B5a722a:L5a722a:{c.instructions+=11;NFSU2_TR(0x5a722a);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5a722d:{NFSU2_TR(0x5a722d);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7234:{NFSU2_TR(0x5a7234);
u8 U[12];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a723b:{NFSU2_TR(0x5a723b);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7241:{NFSU2_TR(0x5a7241);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7247:{NFSU2_TR(0x5a7247);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a724a:{NFSU2_TR(0x5a724a);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7250:{NFSU2_TR(0x5a7250);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7256:{NFSU2_TR(0x5a7256);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7259:{NFSU2_TR(0x5a7259);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a725f:{NFSU2_TR(0x5a725f);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7265:L5a7265:{c.instructions+=48;NFSU2_TR(0x5a7265);
{u32 ea_=u32(r4(R+28)+u32(1248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a726b:{NFSU2_TR(0x5a726b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a726d:{NFSU2_TR(0x5a726d);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7273:{NFSU2_TR(0x5a7273);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7279:{NFSU2_TR(0x5a7279);
{u32 ea_=u32(r4(R+28)+u32(1252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a727f:{NFSU2_TR(0x5a727f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a7281:{NFSU2_TR(0x5a7281);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7287:{NFSU2_TR(0x5a7287);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a728d:{NFSU2_TR(0x5a728d);
{u32 ea_=u32(r4(R+28)+u32(1256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7293:{NFSU2_TR(0x5a7293);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a7295:{NFSU2_TR(0x5a7295);
{u32 ea_=u32(r4(R+24)+u32(520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a729b:{NFSU2_TR(0x5a729b);
{u32 ea_=u32(r4(R+24)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a72a1:{NFSU2_TR(0x5a72a1);
{u32 ea_=u32(r4(R+28)+u32(1260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a72a7:{NFSU2_TR(0x5a72a7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a72a9:{NFSU2_TR(0x5a72a9);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a72af:{NFSU2_TR(0x5a72af);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a72b5:{NFSU2_TR(0x5a72b5);
{u32 ea_=u32(r4(R+28)+u32(1264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a72bb:{NFSU2_TR(0x5a72bb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a72bd:{NFSU2_TR(0x5a72bd);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a72c3:{NFSU2_TR(0x5a72c3);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a72c9:{NFSU2_TR(0x5a72c9);
{u32 ea_=u32(r4(R+28)+u32(1268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a72cf:{NFSU2_TR(0x5a72cf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a72d1:{NFSU2_TR(0x5a72d1);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a72d7:{NFSU2_TR(0x5a72d7);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a72dd:{NFSU2_TR(0x5a72dd);
{u32 ea_=u32(r4(R+28)+u32(1272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a72e3:{NFSU2_TR(0x5a72e3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a72e5:{NFSU2_TR(0x5a72e5);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a72eb:{NFSU2_TR(0x5a72eb);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a72f1:{NFSU2_TR(0x5a72f1);
{u32 ea_=u32(r4(R+28)+u32(1276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a72f7:{NFSU2_TR(0x5a72f7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a72f9:{NFSU2_TR(0x5a72f9);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a72ff:{NFSU2_TR(0x5a72ff);
{u32 ea_=u32(r4(R+24)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7305:{NFSU2_TR(0x5a7305);
{u32 ea_=u32(r4(R+28)+u32(1280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a730b:{NFSU2_TR(0x5a730b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a730d:{NFSU2_TR(0x5a730d);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7313:{NFSU2_TR(0x5a7313);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7319:{NFSU2_TR(0x5a7319);
{u32 ea_=u32(r4(R+28)+u32(1284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a731f:{NFSU2_TR(0x5a731f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a7321:{NFSU2_TR(0x5a7321);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7327:{NFSU2_TR(0x5a7327);
{u32 ea_=u32(r4(R+24)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a732d:{NFSU2_TR(0x5a732d);
{u32 ea_=u32(r4(R+28)+u32(1288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7333:{NFSU2_TR(0x5a7333);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a7335:{NFSU2_TR(0x5a7335);
{u32 ea_=u32(r4(R+24)+u32(588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a733b:{NFSU2_TR(0x5a733b);
{u32 ea_=u32(r4(R+24)+u32(588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7341:{NFSU2_TR(0x5a7341);
{u32 ea_=u32(r4(R+28)+u32(1292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7347:{NFSU2_TR(0x5a7347);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a7349:{NFSU2_TR(0x5a7349);
{u32 ea_=u32(r4(R+24)+u32(592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a734f:{NFSU2_TR(0x5a734f);
{u32 ea_=u32(r4(R+24)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7355:L5a7355:{c.instructions+=5;NFSU2_TR(0x5a7355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7356:{NFSU2_TR(0x5a7356);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7358:{NFSU2_TR(0x5a7358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7359:{NFSU2_TR(0x5a7359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a735a:{NFSU2_TR(0x5a735a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7360:L5a7360:{c.instructions+=8;NFSU2_TR(0x5a7360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7361:{NFSU2_TR(0x5a7361);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a7365:{NFSU2_TR(0x5a7365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7366:{NFSU2_TR(0x5a7366);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7368:{NFSU2_TR(0x5a7368);
__builtin_memmove((R+24),(R+4),4);
}
B5a736a:{NFSU2_TR(0x5a736a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a736e:{NFSU2_TR(0x5a736e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7370:{NFSU2_TR(0x5a7370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7375ull));
TAIL_STATIC(0x5a6580u,5a6);
}
B5a7375:L5a7375:{c.instructions+=5;NFSU2_TR(0x5a7375);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a737b:{NFSU2_TR(0x5a737b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a737d:{NFSU2_TR(0x5a737d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a737f:{NFSU2_TR(0x5a737f);
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
B5a7382:{NFSU2_TR(0x5a7382);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a7490;}}
}
B5a7388:L5a7388:{c.instructions+=71;NFSU2_TR(0x5a7388);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a738c:{NFSU2_TR(0x5a738c);
{u32 ea_=u32(r4(R+0)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7392:{NFSU2_TR(0x5a7392);
{u32 ea_=u32(r4(R+24)+u32(1352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7398:{NFSU2_TR(0x5a7398);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a739a:{NFSU2_TR(0x5a739a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a739c:{NFSU2_TR(0x5a739c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a739e:{NFSU2_TR(0x5a739e);
{u32 ea_=u32(r4(R+0)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a73a4:{NFSU2_TR(0x5a73a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a73a6:{NFSU2_TR(0x5a73a6);
{u32 ea_=u32(r4(R+0)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73ac:{NFSU2_TR(0x5a73ac);
{u32 ea_=u32(r4(R+24)+u32(1348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73b2:{NFSU2_TR(0x5a73b2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a73b4:{NFSU2_TR(0x5a73b4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a73b6:{NFSU2_TR(0x5a73b6);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a73b8:{NFSU2_TR(0x5a73b8);
{u32 ea_=u32(r4(R+0)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a73be:{NFSU2_TR(0x5a73be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a73c0:{NFSU2_TR(0x5a73c0);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73c6:{NFSU2_TR(0x5a73c6);
{u32 ea_=u32(r4(R+24)+u32(1344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73cc:{NFSU2_TR(0x5a73cc);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a73ce:{NFSU2_TR(0x5a73ce);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a73d0:{NFSU2_TR(0x5a73d0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a73d2:{NFSU2_TR(0x5a73d2);
{u32 ea_=u32(r4(R+0)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a73d8:{NFSU2_TR(0x5a73d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a73da:{NFSU2_TR(0x5a73da);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73e0:{NFSU2_TR(0x5a73e0);
{u32 ea_=u32(r4(R+24)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73e6:{NFSU2_TR(0x5a73e6);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a73e8:{NFSU2_TR(0x5a73e8);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a73ea:{NFSU2_TR(0x5a73ea);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a73ec:{NFSU2_TR(0x5a73ec);
{u32 ea_=u32(r4(R+0)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a73f2:{NFSU2_TR(0x5a73f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a73f4:{NFSU2_TR(0x5a73f4);
{u32 ea_=u32(r4(R+0)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a73fa:{NFSU2_TR(0x5a73fa);
{u32 ea_=u32(r4(R+24)+u32(1356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7400:{NFSU2_TR(0x5a7400);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7402:{NFSU2_TR(0x5a7402);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7404:{NFSU2_TR(0x5a7404);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7406:{NFSU2_TR(0x5a7406);
{u32 ea_=u32(r4(R+0)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a740c:{NFSU2_TR(0x5a740c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a740e:{NFSU2_TR(0x5a740e);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7414:{NFSU2_TR(0x5a7414);
{u32 ea_=u32(r4(R+24)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a741a:{NFSU2_TR(0x5a741a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a741c:{NFSU2_TR(0x5a741c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a741e:{NFSU2_TR(0x5a741e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7420:{NFSU2_TR(0x5a7420);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7426:{NFSU2_TR(0x5a7426);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7428:{NFSU2_TR(0x5a7428);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a742e:{NFSU2_TR(0x5a742e);
{u32 ea_=u32(r4(R+24)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7434:{NFSU2_TR(0x5a7434);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7436:{NFSU2_TR(0x5a7436);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7438:{NFSU2_TR(0x5a7438);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a743a:{NFSU2_TR(0x5a743a);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7440:{NFSU2_TR(0x5a7440);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7442:{NFSU2_TR(0x5a7442);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7448:{NFSU2_TR(0x5a7448);
{u32 ea_=u32(r4(R+24)+u32(1376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a744e:{NFSU2_TR(0x5a744e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7450:{NFSU2_TR(0x5a7450);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7452:{NFSU2_TR(0x5a7452);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7454:{NFSU2_TR(0x5a7454);
{u32 ea_=u32(r4(R+0)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a745a:{NFSU2_TR(0x5a745a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a745c:{NFSU2_TR(0x5a745c);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7462:{NFSU2_TR(0x5a7462);
{u32 ea_=u32(r4(R+24)+u32(1392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7468:{NFSU2_TR(0x5a7468);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a746a:{NFSU2_TR(0x5a746a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a746c:{NFSU2_TR(0x5a746c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a746e:{NFSU2_TR(0x5a746e);
{u32 ea_=u32(r4(R+0)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7474:{NFSU2_TR(0x5a7474);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7476:{NFSU2_TR(0x5a7476);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a747c:{NFSU2_TR(0x5a747c);
{u32 ea_=u32(r4(R+24)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7482:{NFSU2_TR(0x5a7482);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7484:{NFSU2_TR(0x5a7484);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7486:{NFSU2_TR(0x5a7486);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7488:{NFSU2_TR(0x5a7488);
{u32 ea_=u32(r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a748e:{NFSU2_TR(0x5a748e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7490:L5a7490:{c.instructions+=3;NFSU2_TR(0x5a7490);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7492:{NFSU2_TR(0x5a7492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7493:{NFSU2_TR(0x5a7493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a74a0:L5a74a0:{c.instructions+=9;NFSU2_TR(0x5a74a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a74a3:{NFSU2_TR(0x5a74a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a74a4:{NFSU2_TR(0x5a74a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a74a8:{NFSU2_TR(0x5a74a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a74a9:{NFSU2_TR(0x5a74a9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a74ab:{NFSU2_TR(0x5a74ab);
__builtin_memmove((R+24),(R+4),4);
}
B5a74ad:{NFSU2_TR(0x5a74ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a74b1:{NFSU2_TR(0x5a74b1);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a74b3:{NFSU2_TR(0x5a74b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a74b8ull));
TAIL_STATIC(0x5a6580u,5a6);
}
B5a74b8:L5a74b8:{c.instructions+=5;NFSU2_TR(0x5a74b8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a74be:{NFSU2_TR(0x5a74be);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a74c0:{NFSU2_TR(0x5a74c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a74c2:{NFSU2_TR(0x5a74c2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a74c5:{NFSU2_TR(0x5a74c5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a751d;}}
}
B5a74c7:L5a74c7:{c.instructions+=16;NFSU2_TR(0x5a74c7);
{u32 ea_=u32(r4(R+24)+u32(1424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a74cd:{NFSU2_TR(0x5a74cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a74d1:{NFSU2_TR(0x5a74d1);
{u32 ea_=u32(r4(R+24)+u32(1440u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a74d7:{NFSU2_TR(0x5a74d7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a74db:{NFSU2_TR(0x5a74db);
{u32 ea_=u32(r4(R+0)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a74e1:{NFSU2_TR(0x5a74e1);
{u32 ea_=u32(r4(R+0)+u32(612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a74e7:{NFSU2_TR(0x5a74e7);
{u32 ea_=u32(r4(R+24)+u32(1428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a74ed:{NFSU2_TR(0x5a74ed);
{u32 ea_=u32(r4(R+24)+u32(1444u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a74f3:{NFSU2_TR(0x5a74f3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a74f7:{NFSU2_TR(0x5a74f7);
{u32 ea_=u32(r4(R+0)+u32(616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a74fd:{NFSU2_TR(0x5a74fd);
{u32 ea_=u32(r4(R+0)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7503:{NFSU2_TR(0x5a7503);
{u32 ea_=u32(r4(R+24)+u32(1432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7509:{NFSU2_TR(0x5a7509);
{u32 ea_=u32(r4(R+24)+u32(1448u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a750f:{NFSU2_TR(0x5a750f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a7511:{NFSU2_TR(0x5a7511);
{u32 ea_=u32(r4(R+0)+u32(620u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7517:{NFSU2_TR(0x5a7517);
{u32 ea_=u32(r4(R+0)+u32(620u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a751d:L5a751d:{c.instructions+=4;NFSU2_TR(0x5a751d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a751f:{NFSU2_TR(0x5a751f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7520:{NFSU2_TR(0x5a7520);
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
B5a7523:{NFSU2_TR(0x5a7523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7530:L5a7530:{c.instructions+=57;NFSU2_TR(0x5a7530);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7534:{NFSU2_TR(0x5a7534);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7535:{NFSU2_TR(0x5a7535);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a7539:{NFSU2_TR(0x5a7539);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a753c:{NFSU2_TR(0x5a753c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a753d:{NFSU2_TR(0x5a753d);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7543:{NFSU2_TR(0x5a7543);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a7547:{NFSU2_TR(0x5a7547);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a754a:{NFSU2_TR(0x5a754a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a754b:{NFSU2_TR(0x5a754b);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a754e:{NFSU2_TR(0x5a754e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a7550:{NFSU2_TR(0x5a7550);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7552:{NFSU2_TR(0x5a7552);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7554:{NFSU2_TR(0x5a7554);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7556:{NFSU2_TR(0x5a7556);
{u32 ea_=u32(r4(R+24)+u32(612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a755c:{NFSU2_TR(0x5a755c);
{u32 ea_=u32(r4(R+24)+u32(612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7562:{NFSU2_TR(0x5a7562);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7564:{NFSU2_TR(0x5a7564);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7567:{NFSU2_TR(0x5a7567);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a756a:{NFSU2_TR(0x5a756a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a756c:{NFSU2_TR(0x5a756c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a756e:{NFSU2_TR(0x5a756e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7570:{NFSU2_TR(0x5a7570);
{u32 ea_=u32(r4(R+24)+u32(616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7576:{NFSU2_TR(0x5a7576);
{u32 ea_=u32(r4(R+24)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a757c:{NFSU2_TR(0x5a757c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a757e:{NFSU2_TR(0x5a757e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7580:{NFSU2_TR(0x5a7580);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7582:{NFSU2_TR(0x5a7582);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7588:{NFSU2_TR(0x5a7588);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a758b:{NFSU2_TR(0x5a758b);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a758e:{NFSU2_TR(0x5a758e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7590:{NFSU2_TR(0x5a7590);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7592:{NFSU2_TR(0x5a7592);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7594:{NFSU2_TR(0x5a7594);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a759a:{NFSU2_TR(0x5a759a);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a75a0:{NFSU2_TR(0x5a75a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a75a2:{NFSU2_TR(0x5a75a2);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75a5:{NFSU2_TR(0x5a75a5);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75a8:{NFSU2_TR(0x5a75a8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a75aa:{NFSU2_TR(0x5a75aa);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a75ac:{NFSU2_TR(0x5a75ac);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a75ae:{NFSU2_TR(0x5a75ae);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a75b4:{NFSU2_TR(0x5a75b4);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a75ba:{NFSU2_TR(0x5a75ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a75bc:{NFSU2_TR(0x5a75bc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a75be:{NFSU2_TR(0x5a75be);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75c1:{NFSU2_TR(0x5a75c1);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75c4:{NFSU2_TR(0x5a75c4);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a75c6:{NFSU2_TR(0x5a75c6);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75c9:{NFSU2_TR(0x5a75c9);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a75cf:{NFSU2_TR(0x5a75cf);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a75d1:{NFSU2_TR(0x5a75d1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a75d3:{NFSU2_TR(0x5a75d3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a75d6:{NFSU2_TR(0x5a75d6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a75d9:{NFSU2_TR(0x5a75d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a75db:{NFSU2_TR(0x5a75db);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75de:{NFSU2_TR(0x5a75de);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a75e4:L5a75e4:{c.instructions+=27;NFSU2_TR(0x5a75e4);
__builtin_memmove((R+0),(R+28),4);
}
B5a75e6:{NFSU2_TR(0x5a75e6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5a75e7:{NFSU2_TR(0x5a75e7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5a75e9:{NFSU2_TR(0x5a75e9);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5a75eb:{NFSU2_TR(0x5a75eb);
__builtin_memmove((R+8),(R+0),4);
}
B5a75ed:{NFSU2_TR(0x5a75ed);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75f1:{NFSU2_TR(0x5a75f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5a75f4:{NFSU2_TR(0x5a75f4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a75f8:{NFSU2_TR(0x5a75f8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a75fa:{NFSU2_TR(0x5a75fa);
u8 U[12];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a7601:{NFSU2_TR(0x5a7601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x24ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a7608:{NFSU2_TR(0x5a7608);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5a760b:{NFSU2_TR(0x5a760b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a760e:{NFSU2_TR(0x5a760e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7610:{NFSU2_TR(0x5a7610);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7612:{NFSU2_TR(0x5a7612);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7615:{NFSU2_TR(0x5a7615);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7618:{NFSU2_TR(0x5a7618);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a761a:{NFSU2_TR(0x5a761a);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a761d:{NFSU2_TR(0x5a761d);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7621:{NFSU2_TR(0x5a7621);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a7623:{NFSU2_TR(0x5a7623);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a7625:{NFSU2_TR(0x5a7625);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a7627:{NFSU2_TR(0x5a7627);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a762a:{NFSU2_TR(0x5a762a);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a762d:{NFSU2_TR(0x5a762d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a762f:{NFSU2_TR(0x5a762f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a75e4u);}goto L5a75e4;}}
}
B5a7631:L5a7631:{c.instructions+=27;NFSU2_TR(0x5a7631);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7633:{NFSU2_TR(0x5a7633);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7635:{NFSU2_TR(0x5a7635);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7638:{NFSU2_TR(0x5a7638);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a763a:{NFSU2_TR(0x5a763a);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a763d:{NFSU2_TR(0x5a763d);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7643:{NFSU2_TR(0x5a7643);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a7645:{NFSU2_TR(0x5a7645);
{u32 ea_=u32(r4(R+24)+u32(636u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a764b:{NFSU2_TR(0x5a764b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a764d:{NFSU2_TR(0x5a764d);
{u32 ea_=u32(r4(R+24)+u32(636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7653:{NFSU2_TR(0x5a7653);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7655:{NFSU2_TR(0x5a7655);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7658:{NFSU2_TR(0x5a7658);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a765b:{NFSU2_TR(0x5a765b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a765d:{NFSU2_TR(0x5a765d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7660:{NFSU2_TR(0x5a7660);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7666:{NFSU2_TR(0x5a7666);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a7668:{NFSU2_TR(0x5a7668);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a766a:{NFSU2_TR(0x5a766a);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7670:{NFSU2_TR(0x5a7670);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7676:{NFSU2_TR(0x5a7676);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7678:{NFSU2_TR(0x5a7678);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a767b:{NFSU2_TR(0x5a767b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7681:{NFSU2_TR(0x5a7681);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a7683:{NFSU2_TR(0x5a7683);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7685:{NFSU2_TR(0x5a7685);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a7688:{NFSU2_TR(0x5a7688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7692;}}
}
B5a768a:L5a768a:{c.instructions+=2;NFSU2_TR(0x5a768a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a768c:{NFSU2_TR(0x5a768c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7692:L5a7692:{c.instructions+=8;NFSU2_TR(0x5a7692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7698:{NFSU2_TR(0x5a7698);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a769b:{NFSU2_TR(0x5a769b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a769f:{NFSU2_TR(0x5a769f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a76a3:{NFSU2_TR(0x5a76a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a76a9:{NFSU2_TR(0x5a76a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a76ab:{NFSU2_TR(0x5a76ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a76ae:{NFSU2_TR(0x5a76ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7744;}}
}
B5a76b4:L5a76b4:{c.instructions+=6;NFSU2_TR(0x5a76b4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a76b8:{NFSU2_TR(0x5a76b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a76be:{NFSU2_TR(0x5a76be);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a76c2:{NFSU2_TR(0x5a76c2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a76c4:{NFSU2_TR(0x5a76c4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a76c7:{NFSU2_TR(0x5a76c7);
if(r1(R+514)){{goto L5a76d1;}}
}
B5a76c9:L5a76c9:{c.instructions+=2;NFSU2_TR(0x5a76c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a76cb:{NFSU2_TR(0x5a76cb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a76d1:L5a76d1:{c.instructions+=4;NFSU2_TR(0x5a76d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a76d7:{NFSU2_TR(0x5a76d7);
{u32 ea_=u32(r4(R+24)+u32(636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a76dd:{NFSU2_TR(0x5a76dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a76de:{NFSU2_TR(0x5a76de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a76e3ull));
TAIL_STATIC(0x43c780u,43c);
}
B5a76e3:L5a76e3:{c.instructions+=28;NFSU2_TR(0x5a76e3);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a76e9:{NFSU2_TR(0x5a76e9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a76eb:{NFSU2_TR(0x5a76eb);
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
B5a76ee:{NFSU2_TR(0x5a76ee);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a76f0:{NFSU2_TR(0x5a76f0);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a76f6:{NFSU2_TR(0x5a76f6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a76f8:{NFSU2_TR(0x5a76f8);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a76fa:{NFSU2_TR(0x5a76fa);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7700:{NFSU2_TR(0x5a7700);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a7702:{NFSU2_TR(0x5a7702);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a7704:{NFSU2_TR(0x5a7704);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a7706:{NFSU2_TR(0x5a7706);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a7708:{NFSU2_TR(0x5a7708);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a770e:{NFSU2_TR(0x5a770e);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7714:{NFSU2_TR(0x5a7714);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7716:{NFSU2_TR(0x5a7716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7717:{NFSU2_TR(0x5a7717);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a7719:{NFSU2_TR(0x5a7719);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a771f:{NFSU2_TR(0x5a771f);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7725:{NFSU2_TR(0x5a7725);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a772b:{NFSU2_TR(0x5a772b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a772d:{NFSU2_TR(0x5a772d);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7733:{NFSU2_TR(0x5a7733);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7739:{NFSU2_TR(0x5a7739);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a773f:{NFSU2_TR(0x5a773f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7740:{NFSU2_TR(0x5a7740);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7742:{NFSU2_TR(0x5a7742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a7743:{NFSU2_TR(0x5a7743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7744:L5a7744:{c.instructions+=2;NFSU2_TR(0x5a7744);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a774a:{NFSU2_TR(0x5a774a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a76d1u);}goto L5a76d1;}
}
B5a7750:L5a7750:{c.instructions+=7;NFSU2_TR(0x5a7750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7751:{NFSU2_TR(0x5a7751);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a7755:{NFSU2_TR(0x5a7755);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a775b:{NFSU2_TR(0x5a775b);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a7761:{NFSU2_TR(0x5a7761);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7763:{NFSU2_TR(0x5a7763);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a7766:{NFSU2_TR(0x5a7766);
if(r1(R+514)){{goto L5a776f;}}
}
B5a7768:L5a7768:{c.instructions+=2;NFSU2_TR(0x5a7768);
w4(R+0,u32(0x1ull));
}
B5a776d:{NFSU2_TR(0x5a776d);
{goto L5a7771;}
}
B5a776f:L5a776f:{c.instructions+=1;NFSU2_TR(0x5a776f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a7771:L5a7771:{c.instructions+=8;NFSU2_TR(0x5a7771);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7777:{NFSU2_TR(0x5a7777);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a7779:{NFSU2_TR(0x5a7779);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a777f:{NFSU2_TR(0x5a777f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a7781:{NFSU2_TR(0x5a7781);
__builtin_memmove((R+4),(R+518),1);
}
B5a7784:{NFSU2_TR(0x5a7784);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7786:{NFSU2_TR(0x5a7786);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a7789:{NFSU2_TR(0x5a7789);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7790;}}
}
B5a778b:L5a778b:{c.instructions+=1;NFSU2_TR(0x5a778b);
w4(R+4,u32(0x2ull));
}
B5a7790:L5a7790:{c.instructions+=7;NFSU2_TR(0x5a7790);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7794:{NFSU2_TR(0x5a7794);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x144ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a779a:{NFSU2_TR(0x5a779a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7fc2e4ull))));
}
B5a77a0:{NFSU2_TR(0x5a77a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a77a1:{NFSU2_TR(0x5a77a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a77a2:{NFSU2_TR(0x5a77a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a77a3:{NFSU2_TR(0x5a77a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a77a8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a7530u);}goto L5a7530;}
}
B5a77a8:L5a77a8:{c.instructions+=4;NFSU2_TR(0x5a77a8);
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
B5a77ab:{NFSU2_TR(0x5a77ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a77b5:{NFSU2_TR(0x5a77b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a77b6:{NFSU2_TR(0x5a77b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a77c0:L5a77c0:{c.instructions+=7;NFSU2_TR(0x5a77c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a77c1:{NFSU2_TR(0x5a77c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a77c5:{NFSU2_TR(0x5a77c5);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a77cb:{NFSU2_TR(0x5a77cb);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a77d1:{NFSU2_TR(0x5a77d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a77d3:{NFSU2_TR(0x5a77d3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a77d6:{NFSU2_TR(0x5a77d6);
if(r1(R+514)){{goto L5a77df;}}
}
B5a77d8:L5a77d8:{c.instructions+=2;NFSU2_TR(0x5a77d8);
w4(R+0,u32(0x1ull));
}
B5a77dd:{NFSU2_TR(0x5a77dd);
{goto L5a77e1;}
}
B5a77df:L5a77df:{c.instructions+=1;NFSU2_TR(0x5a77df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a77e1:L5a77e1:{c.instructions+=8;NFSU2_TR(0x5a77e1);
{u32 ea_=u32(r4(R+24)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a77e7:{NFSU2_TR(0x5a77e7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a77e9:{NFSU2_TR(0x5a77e9);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a77ef:{NFSU2_TR(0x5a77ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a77f1:{NFSU2_TR(0x5a77f1);
__builtin_memmove((R+4),(R+518),1);
}
B5a77f4:{NFSU2_TR(0x5a77f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a77f6:{NFSU2_TR(0x5a77f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a77f9:{NFSU2_TR(0x5a77f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7800;}}
}
B5a77fb:L5a77fb:{c.instructions+=1;NFSU2_TR(0x5a77fb);
w4(R+4,u32(0x2ull));
}
B5a7800:L5a7800:{c.instructions+=7;NFSU2_TR(0x5a7800);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7804:{NFSU2_TR(0x5a7804);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x144ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a780a:{NFSU2_TR(0x5a780a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7fc33cull))));
}
B5a7810:{NFSU2_TR(0x5a7810);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7811:{NFSU2_TR(0x5a7811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7812:{NFSU2_TR(0x5a7812);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7813:{NFSU2_TR(0x5a7813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7818ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a7530u);}goto L5a7530;}
}
B5a7818:L5a7818:{c.instructions+=4;NFSU2_TR(0x5a7818);
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
B5a781b:{NFSU2_TR(0x5a781b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7825:{NFSU2_TR(0x5a7825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7826:{NFSU2_TR(0x5a7826);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7830:L5a7830:{c.instructions+=6;NFSU2_TR(0x5a7830);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7834:{NFSU2_TR(0x5a7834);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a783a:{NFSU2_TR(0x5a783a);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a7840:{NFSU2_TR(0x5a7840);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7842:{NFSU2_TR(0x5a7842);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a7845:{NFSU2_TR(0x5a7845);
if(r1(R+514)){{goto L5a784e;}}
}
B5a7847:L5a7847:{c.instructions+=2;NFSU2_TR(0x5a7847);
w4(R+0,u32(0x1ull));
}
B5a784c:{NFSU2_TR(0x5a784c);
{goto L5a7850;}
}
B5a784e:L5a784e:{c.instructions+=1;NFSU2_TR(0x5a784e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a7850:L5a7850:{c.instructions+=8;NFSU2_TR(0x5a7850);
{u32 ea_=u32(r4(R+8)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7856:{NFSU2_TR(0x5a7856);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5a7858:{NFSU2_TR(0x5a7858);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a785e:{NFSU2_TR(0x5a785e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a7860:{NFSU2_TR(0x5a7860);
__builtin_memmove((R+4),(R+518),1);
}
B5a7863:{NFSU2_TR(0x5a7863);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7865:{NFSU2_TR(0x5a7865);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a7868:{NFSU2_TR(0x5a7868);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a786f;}}
}
B5a786a:L5a786a:{c.instructions+=1;NFSU2_TR(0x5a786a);
w4(R+4,u32(0x2ull));
}
B5a786f:L5a786f:{c.instructions+=7;NFSU2_TR(0x5a786f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7873:{NFSU2_TR(0x5a7873);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x144ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5a7879:{NFSU2_TR(0x5a7879);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7fc394ull))));
}
B5a787f:{NFSU2_TR(0x5a787f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7880:{NFSU2_TR(0x5a7880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7881:{NFSU2_TR(0x5a7881);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7882:{NFSU2_TR(0x5a7882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7887ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a7530u);}goto L5a7530;}
}
B5a7887:L5a7887:{c.instructions+=2;NFSU2_TR(0x5a7887);
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
B5a788a:{NFSU2_TR(0x5a788a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7890:L5a7890:{c.instructions+=18;NFSU2_TR(0x5a7890);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7891:{NFSU2_TR(0x5a7891);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a7895:{NFSU2_TR(0x5a7895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7896:{NFSU2_TR(0x5a7896);
__builtin_memmove((R+24),(R+4),4);
}
B5a7898:{NFSU2_TR(0x5a7898);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a789a:{NFSU2_TR(0x5a789a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a789b:{NFSU2_TR(0x5a789b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a78a1:{NFSU2_TR(0x5a78a1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a78a3:{NFSU2_TR(0x5a78a3);
__builtin_memmove((R+4),(R+28),4);
}
B5a78a5:{NFSU2_TR(0x5a78a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5a78a7:{NFSU2_TR(0x5a78a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a78ab:{NFSU2_TR(0x5a78ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78ae:{NFSU2_TR(0x5a78ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78b1:{NFSU2_TR(0x5a78b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78b4:{NFSU2_TR(0x5a78b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78b7:{NFSU2_TR(0x5a78b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78ba:{NFSU2_TR(0x5a78ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78bd:{NFSU2_TR(0x5a78bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a78c2ull));
TAIL_STATIC(0x5a6450u,5a6);
}
B5a78c2:L5a78c2:{c.instructions+=8;NFSU2_TR(0x5a78c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a78c5:{NFSU2_TR(0x5a78c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78cb:{NFSU2_TR(0x5a78cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a78cc:{NFSU2_TR(0x5a78cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78d2:{NFSU2_TR(0x5a78d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x380ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78d8:{NFSU2_TR(0x5a78d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a78d9:{NFSU2_TR(0x5a78d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a78da:{NFSU2_TR(0x5a78da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a78e0:L5a78e0:{c.instructions+=18;NFSU2_TR(0x5a78e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a78e4:{NFSU2_TR(0x5a78e4);
__builtin_memmove((R+0),gp(0x86b338),4);
}
B5a78e9:{NFSU2_TR(0x5a78e9);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x10cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5a78ef:{NFSU2_TR(0x5a78ef);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a78f3:{NFSU2_TR(0x5a78f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a78f7:{NFSU2_TR(0x5a78f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a78fa:{NFSU2_TR(0x5a78fa);
u8 U[4];
w4(U+0,u32(0x40ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5a7900:{NFSU2_TR(0x5a7900);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7903:{NFSU2_TR(0x5a7903);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a7906:{NFSU2_TR(0x5a7906);
{u32 ea_=u32(u32(7884980u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a790c:{NFSU2_TR(0x5a790c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a790f:{NFSU2_TR(0x5a790f);
__builtin_memmove((R+8),gp(0x86b338),4);
}
B5a7915:{NFSU2_TR(0x5a7915);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7918:{NFSU2_TR(0x5a7918);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a791b:{NFSU2_TR(0x5a791b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7922:{NFSU2_TR(0x5a7922);
{u32 ea_=u32(u32(7884980u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a7928:{NFSU2_TR(0x5a7928);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a792b:{NFSU2_TR(0x5a792b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7930:L5a7930:{c.instructions+=19;NFSU2_TR(0x5a7930);
__builtin_memmove((R+0),(R+4),4);
}
B5a7932:{NFSU2_TR(0x5a7932);
w4(R+4,u32(0x64646464ull));
}
B5a7937:{NFSU2_TR(0x5a7937);
__builtin_memmove((R+8),(R+0),4);
}
B5a7939:{NFSU2_TR(0x5a7939);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a793b:{NFSU2_TR(0x5a793b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a793e:{NFSU2_TR(0x5a793e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7941:{NFSU2_TR(0x5a7941);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7944:{NFSU2_TR(0x5a7944);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7947:{NFSU2_TR(0x5a7947);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a794b:{NFSU2_TR(0x5a794b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a794e:{NFSU2_TR(0x5a794e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a7951:{NFSU2_TR(0x5a7951);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a7953:{NFSU2_TR(0x5a7953);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7956:{NFSU2_TR(0x5a7956);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a7959:{NFSU2_TR(0x5a7959);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a795c:{NFSU2_TR(0x5a795c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5a795e:{NFSU2_TR(0x5a795e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7961:{NFSU2_TR(0x5a7961);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a7964:{NFSU2_TR(0x5a7964);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7970:L5a7970:{c.instructions+=25;NFSU2_TR(0x5a7970);
__builtin_memmove((R+8),(R+4),4);
}
B5a7972:{NFSU2_TR(0x5a7972);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7973:{NFSU2_TR(0x5a7973);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a7976:{NFSU2_TR(0x5a7976);
__builtin_memmove((R+24),(R+0),4);
}
B5a7978:{NFSU2_TR(0x5a7978);
w4(R+4,u32(0x64646464ull));
}
B5a797d:{NFSU2_TR(0x5a797d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5a797f:{NFSU2_TR(0x5a797f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7982:{NFSU2_TR(0x5a7982);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7985:{NFSU2_TR(0x5a7985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7988:{NFSU2_TR(0x5a7988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a798b:{NFSU2_TR(0x5a798b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a798f:{NFSU2_TR(0x5a798f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a7992:{NFSU2_TR(0x5a7992);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7995:{NFSU2_TR(0x5a7995);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5a7998:{NFSU2_TR(0x5a7998);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7999:{NFSU2_TR(0x5a7999);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5a799b:{NFSU2_TR(0x5a799b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a799e:{NFSU2_TR(0x5a799e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a79a1:{NFSU2_TR(0x5a79a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a79a3:{NFSU2_TR(0x5a79a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a79a6:{NFSU2_TR(0x5a79a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a79a9:{NFSU2_TR(0x5a79a9);
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
B5a79ab:{NFSU2_TR(0x5a79ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a79ae:{NFSU2_TR(0x5a79ae);
__builtin_memmove((R+28),(R+24),4);
}
B5a79b0:{NFSU2_TR(0x5a79b0);
w4(R+4,u32(0x17ull));
}
B5a79b5:L5a79b5:{c.instructions+=1;NFSU2_TR(0x5a79b5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a79b7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a79b5u);}goto L5a79b5;}
}
B5a79b7:L5a79b7:{c.instructions+=2;NFSU2_TR(0x5a79b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a79ba:{NFSU2_TR(0x5a79ba);
w4(R+4,u32(0x9ull));
}
B5a79bf:L5a79bf:{c.instructions+=1;NFSU2_TR(0x5a79bf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a79c1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a79bfu);}goto L5a79bf;}
}
B5a79c1:L5a79c1:{c.instructions+=2;NFSU2_TR(0x5a79c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a79c7:{NFSU2_TR(0x5a79c7);
w4(R+4,u32(0x9ull));
}
B5a79cc:L5a79cc:{c.instructions+=1;NFSU2_TR(0x5a79cc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5a79ce;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a79ccu);}goto L5a79cc;}
}
B5a79ce:L5a79ce:{c.instructions+=10;NFSU2_TR(0x5a79ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a79cf:{NFSU2_TR(0x5a79cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a79d2:{NFSU2_TR(0x5a79d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a79d5:{NFSU2_TR(0x5a79d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a79d8:{NFSU2_TR(0x5a79d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a79de:{NFSU2_TR(0x5a79de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a79e5:{NFSU2_TR(0x5a79e5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+8)),r4(U+0));
}
B5a79eb:{NFSU2_TR(0x5a79eb);
__builtin_memmove((R+0),(R+8),4);
}
B5a79ed:{NFSU2_TR(0x5a79ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a79ee:{NFSU2_TR(0x5a79ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a79f0:L5a79f0:{c.instructions+=9;NFSU2_TR(0x5a79f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5a79f3:{NFSU2_TR(0x5a79f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a79f4:{NFSU2_TR(0x5a79f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a79f8:{NFSU2_TR(0x5a79f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a79f9:{NFSU2_TR(0x5a79f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a79fa:{NFSU2_TR(0x5a79fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a79fc:{NFSU2_TR(0x5a79fc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a79ff:{NFSU2_TR(0x5a79ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a07:{NFSU2_TR(0x5a7a07);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5a7a5b;}}
}
B5a7a09:L5a7a09:{c.instructions+=2;NFSU2_TR(0x5a7a09);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5a7b60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5a7a10:{NFSU2_TR(0x5a7a10);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5a7b4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a7a17:L5a7a17:{c.instructions+=3;NFSU2_TR(0x5a7a17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a1b:{NFSU2_TR(0x5a7a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a23:{NFSU2_TR(0x5a7a23);
{goto L5a7a5f;}
}
B5a7a25:L5a7a25:{c.instructions+=3;NFSU2_TR(0x5a7a25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a2d:{NFSU2_TR(0x5a7a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a35:{NFSU2_TR(0x5a7a35);
{goto L5a7a5f;}
}
B5a7a37:L5a7a37:{c.instructions+=3;NFSU2_TR(0x5a7a37);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a3f:{NFSU2_TR(0x5a7a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a47:{NFSU2_TR(0x5a7a47);
{goto L5a7a5f;}
}
B5a7a49:L5a7a49:{c.instructions+=3;NFSU2_TR(0x5a7a49);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a51:{NFSU2_TR(0x5a7a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a59:{NFSU2_TR(0x5a7a59);
{goto L5a7a5f;}
}
B5a7a5b:L5a7a5b:{c.instructions+=1;NFSU2_TR(0x5a7a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a5f:L5a7a5f:{c.instructions+=3;NFSU2_TR(0x5a7a5f);
__builtin_memmove((R+0),(R+12),4);
}
B5a7a61:{NFSU2_TR(0x5a7a61);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a7a64:{NFSU2_TR(0x5a7a64);
if(r1(R+518)){{goto L5a7a78;}}
}
B5a7a66:L5a7a66:{c.instructions+=2;NFSU2_TR(0x5a7a66);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a7a69:{NFSU2_TR(0x5a7a69);
if(r1(R+518)){{goto L5a7a78;}}
}
B5a7a6b:L5a7a6b:{c.instructions+=3;NFSU2_TR(0x5a7a6b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5a7a6e:{NFSU2_TR(0x5a7a6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xcb189680ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a76:{NFSU2_TR(0x5a7a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7a80;}}
}
B5a7a78:L5a7a78:{c.instructions+=1;NFSU2_TR(0x5a7a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4b189680ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7a80:L5a7a80:{c.instructions+=2;NFSU2_TR(0x5a7a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a7a84:{NFSU2_TR(0x5a7a84);
{goto L5a7a90;}
}
B5a7a90:L5a7a90:{c.instructions+=3;NFSU2_TR(0x5a7a90);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5a7a94:{NFSU2_TR(0x5a7a94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7a97:{NFSU2_TR(0x5a7a97);
if(r1(R+518)){{goto L5a7b32;}}
}
B5a7a9d:L5a7a9d:{c.instructions+=3;NFSU2_TR(0x5a7a9d);
__builtin_memmove((R+8),(R+12),4);
}
B5a7a9f:{NFSU2_TR(0x5a7a9f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5a7aa2:{NFSU2_TR(0x5a7aa2);
if(r1(R+518)){{goto L5a7aef;}}
}
B5a7aa4:L5a7aa4:{c.instructions+=2;NFSU2_TR(0x5a7aa4);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5a7aa7:{NFSU2_TR(0x5a7aa7);
if(r1(R+518)){{goto L5a7aef;}}
}
B5a7aa9:L5a7aa9:{c.instructions+=2;NFSU2_TR(0x5a7aa9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5a7aac:{NFSU2_TR(0x5a7aac);
if(r1(R+518)){{goto L5a7aef;}}
}
B5a7aae:L5a7aae:{c.instructions+=3;NFSU2_TR(0x5a7aae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7ab1:{NFSU2_TR(0x5a7ab1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7ab7:{NFSU2_TR(0x5a7ab7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a7ac1;}}
}
B5a7ab9:L5a7ab9:{c.instructions+=3;NFSU2_TR(0x5a7ab9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7abb:{NFSU2_TR(0x5a7abb);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7abf:{NFSU2_TR(0x5a7abf);
{goto L5a7adc;}
}
B5a7ac1:L5a7ac1:{c.instructions+=1;NFSU2_TR(0x5a7ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7ace;}}
}
B5a7ac3:L5a7ac3:{c.instructions+=3;NFSU2_TR(0x5a7ac3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7ac5:{NFSU2_TR(0x5a7ac5);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7acc:{NFSU2_TR(0x5a7acc);
{goto L5a7adc;}
}
B5a7ace:L5a7ace:{c.instructions+=2;NFSU2_TR(0x5a7ace);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7ad1:{NFSU2_TR(0x5a7ad1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7adc;}}
}
B5a7ad3:L5a7ad3:{c.instructions+=2;NFSU2_TR(0x5a7ad3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7ad5:{NFSU2_TR(0x5a7ad5);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7adc:L5a7adc:{c.instructions+=5;NFSU2_TR(0x5a7adc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7ae0:{NFSU2_TR(0x5a7ae0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a7ae2:{NFSU2_TR(0x5a7ae2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7ae4:{NFSU2_TR(0x5a7ae4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a7ae7:{NFSU2_TR(0x5a7ae7);
if(r1(R+518)){{goto L5a7b30;}}
}
B5a7ae9:L5a7ae9:{c.instructions+=2;NFSU2_TR(0x5a7ae9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7aed:{NFSU2_TR(0x5a7aed);
{goto L5a7b32;}
}
B5a7aef:L5a7aef:{c.instructions+=3;NFSU2_TR(0x5a7aef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7af2:{NFSU2_TR(0x5a7af2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7af8:{NFSU2_TR(0x5a7af8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5a7b02;}}
}
B5a7afa:L5a7afa:{c.instructions+=3;NFSU2_TR(0x5a7afa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7afc:{NFSU2_TR(0x5a7afc);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7b00:{NFSU2_TR(0x5a7b00);
{goto L5a7b1d;}
}
B5a7b02:L5a7b02:{c.instructions+=1;NFSU2_TR(0x5a7b02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7b0f;}}
}
B5a7b04:L5a7b04:{c.instructions+=3;NFSU2_TR(0x5a7b04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7b06:{NFSU2_TR(0x5a7b06);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7b0d:{NFSU2_TR(0x5a7b0d);
{goto L5a7b1d;}
}
B5a7b0f:L5a7b0f:{c.instructions+=2;NFSU2_TR(0x5a7b0f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7b12:{NFSU2_TR(0x5a7b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7b1d;}}
}
B5a7b14:L5a7b14:{c.instructions+=2;NFSU2_TR(0x5a7b14);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7b16:{NFSU2_TR(0x5a7b16);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7b1d:L5a7b1d:{c.instructions+=5;NFSU2_TR(0x5a7b1d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7b21:{NFSU2_TR(0x5a7b21);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a7b23:{NFSU2_TR(0x5a7b23);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5a7b25:{NFSU2_TR(0x5a7b25);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5a7b28:{NFSU2_TR(0x5a7b28);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5a7b30;}}
}
B5a7b2a:L5a7b2a:{c.instructions+=2;NFSU2_TR(0x5a7b2a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7b2e:{NFSU2_TR(0x5a7b2e);
{goto L5a7b32;}
}
B5a7b30:L5a7b30:{c.instructions+=1;NFSU2_TR(0x5a7b30);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a7b32:L5a7b32:{c.instructions+=3;NFSU2_TR(0x5a7b32);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5a7b33:{NFSU2_TR(0x5a7b33);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a7b36:{NFSU2_TR(0x5a7b36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a7a90u);}goto L5a7a90;}}
}
B5a7b3c:L5a7b3c:{c.instructions+=6;NFSU2_TR(0x5a7b3c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7b40:{NFSU2_TR(0x5a7b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7b41:{NFSU2_TR(0x5a7b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7b42:{NFSU2_TR(0x5a7b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a7b43:{NFSU2_TR(0x5a7b43);
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
B5a7b46:{NFSU2_TR(0x5a7b46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7b80:L5a7b80:{c.instructions+=19;NFSU2_TR(0x5a7b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5a7b83:{NFSU2_TR(0x5a7b83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7b84:{NFSU2_TR(0x5a7b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7b85:{NFSU2_TR(0x5a7b85);
__builtin_memmove((R+28),(R+4),4);
}
B5a7b87:{NFSU2_TR(0x5a7b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a7b89:{NFSU2_TR(0x5a7b89);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5a7b8f:{NFSU2_TR(0x5a7b8f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5a7b95:{NFSU2_TR(0x5a7b95);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5a7b9c:{NFSU2_TR(0x5a7b9c);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5a7ba3:{NFSU2_TR(0x5a7ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7ba9:{NFSU2_TR(0x5a7ba9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a7bad:{NFSU2_TR(0x5a7bad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7bae:{NFSU2_TR(0x5a7bae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7bb2:{NFSU2_TR(0x5a7bb2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a7bb6:{NFSU2_TR(0x5a7bb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7bb7:{NFSU2_TR(0x5a7bb7);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7bb9:{NFSU2_TR(0x5a7bb9);
__builtin_memmove((R+4),(R+28),4);
}
B5a7bbb:{NFSU2_TR(0x5a7bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7bbf:{NFSU2_TR(0x5a7bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7bc4ull));
TAIL_STATIC(0x59b160u,59b);
}
B5a7bc4:L5a7bc4:{c.instructions+=11;NFSU2_TR(0x5a7bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7bca:{NFSU2_TR(0x5a7bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7bd0:{NFSU2_TR(0x5a7bd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a7bd4:{NFSU2_TR(0x5a7bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7bd8:{NFSU2_TR(0x5a7bd8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7bd9:{NFSU2_TR(0x5a7bd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a7bdd:{NFSU2_TR(0x5a7bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7bde:{NFSU2_TR(0x5a7bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7be2:{NFSU2_TR(0x5a7be2);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7be4:{NFSU2_TR(0x5a7be4);
__builtin_memmove((R+4),(R+28),4);
}
B5a7be6:{NFSU2_TR(0x5a7be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7bebull));
TAIL_STATIC(0x59b160u,59b);
}
B5a7beb:L5a7beb:{c.instructions+=11;NFSU2_TR(0x5a7beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7bf1:{NFSU2_TR(0x5a7bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7bf7:{NFSU2_TR(0x5a7bf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7bfb:{NFSU2_TR(0x5a7bfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5a7bff:{NFSU2_TR(0x5a7bff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7c00:{NFSU2_TR(0x5a7c00);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a7c04:{NFSU2_TR(0x5a7c04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7c05:{NFSU2_TR(0x5a7c05);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7c07:{NFSU2_TR(0x5a7c07);
__builtin_memmove((R+4),(R+28),4);
}
B5a7c09:{NFSU2_TR(0x5a7c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7c0d:{NFSU2_TR(0x5a7c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7c12ull));
TAIL_STATIC(0x59b160u,59b);
}
B5a7c12:L5a7c12:{c.instructions+=11;NFSU2_TR(0x5a7c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7c18:{NFSU2_TR(0x5a7c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x570ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7c1e:{NFSU2_TR(0x5a7c1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5a7c22:{NFSU2_TR(0x5a7c22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7c23:{NFSU2_TR(0x5a7c23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7c27:{NFSU2_TR(0x5a7c27);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a7c2b:{NFSU2_TR(0x5a7c2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7c2c:{NFSU2_TR(0x5a7c2c);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7c2e:{NFSU2_TR(0x5a7c2e);
__builtin_memmove((R+4),(R+28),4);
}
B5a7c30:{NFSU2_TR(0x5a7c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7c34:{NFSU2_TR(0x5a7c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7c39ull));
TAIL_STATIC(0x59b160u,59b);
}
B5a7c39:L5a7c39:{c.instructions+=9;NFSU2_TR(0x5a7c39);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7c3d:{NFSU2_TR(0x5a7c3d);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a7c41:{NFSU2_TR(0x5a7c41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a7c43:{NFSU2_TR(0x5a7c43);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7c46:{NFSU2_TR(0x5a7c46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5a7c49:{NFSU2_TR(0x5a7c49);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a7c4b:{NFSU2_TR(0x5a7c4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7c4c:{NFSU2_TR(0x5a7c4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7c4d:{NFSU2_TR(0x5a7c4d);
if(r1(R+518)){{goto L5a7c7d;}}
}
B5a7c4f:L5a7c4f:{c.instructions+=12;NFSU2_TR(0x5a7c4f);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7c53:{NFSU2_TR(0x5a7c53);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7c57:{NFSU2_TR(0x5a7c57);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7c5b:{NFSU2_TR(0x5a7c5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7c5f:{NFSU2_TR(0x5a7c5f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7c65:{NFSU2_TR(0x5a7c65);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7c67:{NFSU2_TR(0x5a7c67);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7c6b:{NFSU2_TR(0x5a7c6b);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7c6f:{NFSU2_TR(0x5a7c6f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7c75:{NFSU2_TR(0x5a7c75);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7c77:{NFSU2_TR(0x5a7c77);
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
B5a7c7a:{NFSU2_TR(0x5a7c7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7c7d:L5a7c7d:{c.instructions+=11;NFSU2_TR(0x5a7c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7c81:{NFSU2_TR(0x5a7c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a7c84:{NFSU2_TR(0x5a7c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7c88:{NFSU2_TR(0x5a7c88);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a7c8b:{NFSU2_TR(0x5a7c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5a7c8f:{NFSU2_TR(0x5a7c8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a7c91:{NFSU2_TR(0x5a7c91);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5a7c95:{NFSU2_TR(0x5a7c95);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7c99:{NFSU2_TR(0x5a7c99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a7c9b:{NFSU2_TR(0x5a7c9b);
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
B5a7c9e:{NFSU2_TR(0x5a7c9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7cb0:L5a7cb0:{c.instructions+=12;NFSU2_TR(0x5a7cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5a7cb3:{NFSU2_TR(0x5a7cb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7cb4:{NFSU2_TR(0x5a7cb4);
__builtin_memmove((R+12),(R+4),4);
}
B5a7cb6:{NFSU2_TR(0x5a7cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a7cb8:{NFSU2_TR(0x5a7cb8);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5a7cbe:{NFSU2_TR(0x5a7cbe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5a7cc4:{NFSU2_TR(0x5a7cc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7cc5:{NFSU2_TR(0x5a7cc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a7ccc:{NFSU2_TR(0x5a7ccc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7ccd:{NFSU2_TR(0x5a7ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5c8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7cd3:{NFSU2_TR(0x5a7cd3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5a7cd5:{NFSU2_TR(0x5a7cd5);
{goto L5a7ce0;}
}
B5a7ce0:L5a7ce0:{c.instructions+=11;NFSU2_TR(0x5a7ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffbb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7ce6:{NFSU2_TR(0x5a7ce6);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a7cea:{NFSU2_TR(0x5a7cea);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a7cee:{NFSU2_TR(0x5a7cee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7cef:{NFSU2_TR(0x5a7cef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a7cf1:{NFSU2_TR(0x5a7cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a7cf3:{NFSU2_TR(0x5a7cf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7cf4:{NFSU2_TR(0x5a7cf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a7cf6:{NFSU2_TR(0x5a7cf6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7cf8:{NFSU2_TR(0x5a7cf8);
__builtin_memmove((R+4),(R+12),4);
}
B5a7cfa:{NFSU2_TR(0x5a7cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7cffull));
TAIL_STATIC(0x59b160u,59b);
}
B5a7cff:L5a7cff:{c.instructions+=11;NFSU2_TR(0x5a7cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7d05:{NFSU2_TR(0x5a7d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7d08:{NFSU2_TR(0x5a7d08);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5a7d0c:{NFSU2_TR(0x5a7d0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a7d0e:{NFSU2_TR(0x5a7d0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a7d12:{NFSU2_TR(0x5a7d12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7d13:{NFSU2_TR(0x5a7d13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7d14:{NFSU2_TR(0x5a7d14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a7d16:{NFSU2_TR(0x5a7d16);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7d18:{NFSU2_TR(0x5a7d18);
__builtin_memmove((R+4),(R+12),4);
}
B5a7d1a:{NFSU2_TR(0x5a7d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7d1full));
TAIL_STATIC(0x59b160u,59b);
}
B5a7d1f:L5a7d1f:{c.instructions+=4;NFSU2_TR(0x5a7d1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5a7d22:{NFSU2_TR(0x5a7d22);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a7d25:{NFSU2_TR(0x5a7d25);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a7d28:{NFSU2_TR(0x5a7d28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a7ce0u);}goto L5a7ce0;}}
}
B5a7d2a:L5a7d2a:{c.instructions+=10;NFSU2_TR(0x5a7d2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7d2e:{NFSU2_TR(0x5a7d2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5a7d32:{NFSU2_TR(0x5a7d32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5a7d34:{NFSU2_TR(0x5a7d34);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5a7d37:{NFSU2_TR(0x5a7d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7d38:{NFSU2_TR(0x5a7d38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5a7d3b:{NFSU2_TR(0x5a7d3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5a7d3d:{NFSU2_TR(0x5a7d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7d3e:{NFSU2_TR(0x5a7d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a7d3f:{NFSU2_TR(0x5a7d3f);
if(r1(R+518)){{goto L5a7d6f;}}
}
B5a7d41:L5a7d41:{c.instructions+=12;NFSU2_TR(0x5a7d41);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7d45:{NFSU2_TR(0x5a7d45);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7d49:{NFSU2_TR(0x5a7d49);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7d4d:{NFSU2_TR(0x5a7d4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7d51:{NFSU2_TR(0x5a7d51);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7d57:{NFSU2_TR(0x5a7d57);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7d59:{NFSU2_TR(0x5a7d59);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7d5d:{NFSU2_TR(0x5a7d5d);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7d61:{NFSU2_TR(0x5a7d61);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7d67:{NFSU2_TR(0x5a7d67);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7d69:{NFSU2_TR(0x5a7d69);
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
B5a7d6c:{NFSU2_TR(0x5a7d6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7d6f:L5a7d6f:{c.instructions+=11;NFSU2_TR(0x5a7d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7d73:{NFSU2_TR(0x5a7d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5a7d76:{NFSU2_TR(0x5a7d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7d7a:{NFSU2_TR(0x5a7d7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5a7d7d:{NFSU2_TR(0x5a7d7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5a7d81:{NFSU2_TR(0x5a7d81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5a7d83:{NFSU2_TR(0x5a7d83);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5a7d87:{NFSU2_TR(0x5a7d87);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7d8b:{NFSU2_TR(0x5a7d8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5a7d8d:{NFSU2_TR(0x5a7d8d);
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
B5a7d90:{NFSU2_TR(0x5a7d90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7da0:L5a7da0:{c.instructions+=8;NFSU2_TR(0x5a7da0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7da1:{NFSU2_TR(0x5a7da1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7da2:{NFSU2_TR(0x5a7da2);
__builtin_memmove((R+24),(R+4),4);
}
B5a7da4:{NFSU2_TR(0x5a7da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7daa:{NFSU2_TR(0x5a7daa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5a7dac:{NFSU2_TR(0x5a7dac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7dad:{NFSU2_TR(0x5a7dad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a7db5:{NFSU2_TR(0x5a7db5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7dd8;}}
}
B5a7db7:L5a7db7:{c.instructions+=9;NFSU2_TR(0x5a7db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a7db9:{NFSU2_TR(0x5a7db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7dbc:{NFSU2_TR(0x5a7dbc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5a7dc2:{NFSU2_TR(0x5a7dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5a7dc5:{NFSU2_TR(0x5a7dc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7dc6:{NFSU2_TR(0x5a7dc6);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B5a7dcb:{NFSU2_TR(0x5a7dcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7dcc:{NFSU2_TR(0x5a7dcc);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a7dd3:{NFSU2_TR(0x5a7dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7dd8ull));
TAIL_STATIC(0x599d90u,599);
}
B5a7dd8:L5a7dd8:{c.instructions+=9;NFSU2_TR(0x5a7dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7dde:{NFSU2_TR(0x5a7dde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7ddf:{NFSU2_TR(0x5a7ddf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7de0:{NFSU2_TR(0x5a7de0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5a7de4:{NFSU2_TR(0x5a7de4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5a7de5:{NFSU2_TR(0x5a7de5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5a7de8:{NFSU2_TR(0x5a7de8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5a7deb:{NFSU2_TR(0x5a7deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7df1:{NFSU2_TR(0x5a7df1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5a7ead;}}
}
B5a7df7:L5a7df7:{c.instructions+=2;NFSU2_TR(0x5a7df7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a7f14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5a7dfe:{NFSU2_TR(0x5a7dfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5a7f00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5a7e05:L5a7e05:{c.instructions+=3;NFSU2_TR(0x5a7e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a7e08:{NFSU2_TR(0x5a7e08);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a7e0a:{NFSU2_TR(0x5a7e0a);
__builtin_memmove((R+12),(R+12),4);
}
B5a7e10:L5a7e10:{c.instructions+=5;NFSU2_TR(0x5a7e10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e11:{NFSU2_TR(0x5a7e11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e12:{NFSU2_TR(0x5a7e12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e13:{NFSU2_TR(0x5a7e13);
__builtin_memmove((R+4),(R+24),4);
}
B5a7e15:{NFSU2_TR(0x5a7e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7e1aull));
TAIL_STATIC(0x59b200u,59b);
}
B5a7e1a:L5a7e1a:{c.instructions+=6;NFSU2_TR(0x5a7e1a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7e1e:{NFSU2_TR(0x5a7e1e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a7e20:{NFSU2_TR(0x5a7e20);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5a7e21:{NFSU2_TR(0x5a7e21);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a7e24:{NFSU2_TR(0x5a7e24);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7e28:{NFSU2_TR(0x5a7e28);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5a7e10u);}goto L5a7e10;}}
}
B5a7e2a:L5a7e2a:{c.instructions+=4;NFSU2_TR(0x5a7e2a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7e2e:{NFSU2_TR(0x5a7e2e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a7e34:{NFSU2_TR(0x5a7e34);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7e38:{NFSU2_TR(0x5a7e38);
{goto L5a7ec4;}
}
B5a7e3d:L5a7e3d:{c.instructions+=7;NFSU2_TR(0x5a7e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a7e41:{NFSU2_TR(0x5a7e41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a7e44:{NFSU2_TR(0x5a7e44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e45:{NFSU2_TR(0x5a7e45);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e46:{NFSU2_TR(0x5a7e46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e47:{NFSU2_TR(0x5a7e47);
__builtin_memmove((R+4),(R+24),4);
}
B5a7e49:{NFSU2_TR(0x5a7e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7e4eull));
TAIL_STATIC(0x59b200u,59b);
}
B5a7e4e:L5a7e4e:{c.instructions+=4;NFSU2_TR(0x5a7e4e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7e50:{NFSU2_TR(0x5a7e50);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+28)+u32(548u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a7e57:{NFSU2_TR(0x5a7e57);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7e5b:{NFSU2_TR(0x5a7e5b);
{goto L5a7ec4;}
}
B5a7e5d:L5a7e5d:{c.instructions+=6;NFSU2_TR(0x5a7e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a7e60:{NFSU2_TR(0x5a7e60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e62:{NFSU2_TR(0x5a7e62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e63:{NFSU2_TR(0x5a7e63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e64:{NFSU2_TR(0x5a7e64);
__builtin_memmove((R+4),(R+24),4);
}
B5a7e66:{NFSU2_TR(0x5a7e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7e6bull));
TAIL_STATIC(0x59b200u,59b);
}
B5a7e6b:L5a7e6b:{c.instructions+=3;NFSU2_TR(0x5a7e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a7e6d:{NFSU2_TR(0x5a7e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7e71:{NFSU2_TR(0x5a7e71);
{goto L5a7ec4;}
}
B5a7e73:L5a7e73:{c.instructions+=6;NFSU2_TR(0x5a7e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a7e76:{NFSU2_TR(0x5a7e76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e78:{NFSU2_TR(0x5a7e78);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e79:{NFSU2_TR(0x5a7e79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e7a:{NFSU2_TR(0x5a7e7a);
__builtin_memmove((R+4),(R+24),4);
}
B5a7e7c:{NFSU2_TR(0x5a7e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7e81ull));
TAIL_STATIC(0x59b200u,59b);
}
B5a7e81:L5a7e81:{c.instructions+=10;NFSU2_TR(0x5a7e81);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7e83:{NFSU2_TR(0x5a7e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a7e85:{NFSU2_TR(0x5a7e85);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5a7e8b:{NFSU2_TR(0x5a7e8b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5a7e91:{NFSU2_TR(0x5a7e91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e93:{NFSU2_TR(0x5a7e93);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a7e9a:{NFSU2_TR(0x5a7e9a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e9b:{NFSU2_TR(0x5a7e9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7e9c:{NFSU2_TR(0x5a7e9c);
__builtin_memmove((R+4),(R+24),4);
}
B5a7e9e:{NFSU2_TR(0x5a7e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7ea3ull));
TAIL_STATIC(0x59b200u,59b);
}
B5a7ea3:L5a7ea3:{c.instructions+=4;NFSU2_TR(0x5a7ea3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a7ea5:{NFSU2_TR(0x5a7ea5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a7ea7:{NFSU2_TR(0x5a7ea7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a7eab:{NFSU2_TR(0x5a7eab);
{goto L5a7ec4;}
}
B5a7ead:L5a7ead:{c.instructions+=7;NFSU2_TR(0x5a7ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7eb1:{NFSU2_TR(0x5a7eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a7eb4:{NFSU2_TR(0x5a7eb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7eb5:{NFSU2_TR(0x5a7eb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7eb6:{NFSU2_TR(0x5a7eb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7eb7:{NFSU2_TR(0x5a7eb7);
__builtin_memmove((R+4),(R+24),4);
}
B5a7eb9:{NFSU2_TR(0x5a7eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7ebeull));
TAIL_STATIC(0x59b200u,59b);
}
B5a7ebe:L5a7ebe:{c.instructions+=2;NFSU2_TR(0x5a7ebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5a7ec0:{NFSU2_TR(0x5a7ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7ec4:L5a7ec4:{c.instructions+=7;NFSU2_TR(0x5a7ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7eca:{NFSU2_TR(0x5a7eca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5a7ecb:{NFSU2_TR(0x5a7ecb);
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
B5a7ecd:{NFSU2_TR(0x5a7ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a7ece:{NFSU2_TR(0x5a7ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7ed4:{NFSU2_TR(0x5a7ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a7ed5:{NFSU2_TR(0x5a7ed5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5a7ef6;}}
}
B5a7ed7:L5a7ed7:{c.instructions+=8;NFSU2_TR(0x5a7ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5a7ed9:{NFSU2_TR(0x5a7ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a7edc:{NFSU2_TR(0x5a7edc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5a7ee2:{NFSU2_TR(0x5a7ee2);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B5a7ee8:{NFSU2_TR(0x5a7ee8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7ee9:{NFSU2_TR(0x5a7ee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7eea:{NFSU2_TR(0x5a7eea);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5a7ef1:{NFSU2_TR(0x5a7ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7ef6ull));
TAIL_STATIC(0x5997e0u,599);
}
B5a7ef6:L5a7ef6:{c.instructions+=5;NFSU2_TR(0x5a7ef6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7efa:{NFSU2_TR(0x5a7efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a7efb:{NFSU2_TR(0x5a7efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a7efc:{NFSU2_TR(0x5a7efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a7efd:{NFSU2_TR(0x5a7efd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5a7f30:L5a7f30:{c.instructions+=21;NFSU2_TR(0x5a7f30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f32:{NFSU2_TR(0x5a7f32);
u8 U[4];
w4(U+0,u32(0x778e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f37:{NFSU2_TR(0x5a7f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7f3d:{NFSU2_TR(0x5a7f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f3e:{NFSU2_TR(0x5a7f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f45:{NFSU2_TR(0x5a7f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f46:{NFSU2_TR(0x5a7f46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f47:{NFSU2_TR(0x5a7f47);
__builtin_memmove((R+24),(R+4),4);
}
B5a7f49:{NFSU2_TR(0x5a7f49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f4a:{NFSU2_TR(0x5a7f4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f4e:{NFSU2_TR(0x5a7f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5a7f52:{NFSU2_TR(0x5a7f52);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a7f54:{NFSU2_TR(0x5a7f54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5a7f57:{NFSU2_TR(0x5a7f57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5a7f58:{NFSU2_TR(0x5a7f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f5c:{NFSU2_TR(0x5a7f5c);
u8 U[4];
w4(U+0,u32(0x7a20c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5a7f62:{NFSU2_TR(0x5a7f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f65:{NFSU2_TR(0x5a7f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f68:{NFSU2_TR(0x5a7f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f6b:{NFSU2_TR(0x5a7f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f6e:{NFSU2_TR(0x5a7f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5a7f73ull));
TAIL_STATIC(0x43c780u,43c);
}
B5a7f73:L5a7f73:{c.instructions+=26;NFSU2_TR(0x5a7f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f76:{NFSU2_TR(0x5a7f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f79:{NFSU2_TR(0x5a7f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f7c:{NFSU2_TR(0x5a7f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f82:{NFSU2_TR(0x5a7f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f88:{NFSU2_TR(0x5a7f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f8e:{NFSU2_TR(0x5a7f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f94:{NFSU2_TR(0x5a7f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7f9a:{NFSU2_TR(0x5a7f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fa0:{NFSU2_TR(0x5a7fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fa6:{NFSU2_TR(0x5a7fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fac:{NFSU2_TR(0x5a7fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fb2:{NFSU2_TR(0x5a7fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fb8:{NFSU2_TR(0x5a7fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fbe:{NFSU2_TR(0x5a7fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fc4:{NFSU2_TR(0x5a7fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fca:{NFSU2_TR(0x5a7fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fd0:{NFSU2_TR(0x5a7fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fd6:{NFSU2_TR(0x5a7fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fdc:{NFSU2_TR(0x5a7fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fe2:{NFSU2_TR(0x5a7fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fe8:{NFSU2_TR(0x5a7fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a7fee:{NFSU2_TR(0x5a7fee);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7ff4:{NFSU2_TR(0x5a7ff4);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a7ffa:{NFSU2_TR(0x5a7ffa);
__builtin_memmove((R+8),(R+28),4);
}
B5a7ffc:{NFSU2_TR(0x5a7ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5a8002u,5a8);
}
XIT:NFSU2_TR_EXIT(0x5a7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
