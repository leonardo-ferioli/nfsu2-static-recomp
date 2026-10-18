#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_49e(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4bd(u8* __restrict R,Cpu& c);
u32 body_4d5(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e7(u8* __restrict R,Cpu& c);
u32 page_4e7(Cpu& c){return body_4e7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e7001:goto L4e7001;
case 0x4e7002:c.instructions+=1;goto B4e7002;
case 0x4e7005:goto L4e7005;
case 0x4e7007:c.instructions+=1;goto B4e7007;
case 0x4e700c:goto L4e700c;
case 0x4e700f:c.instructions+=3;goto B4e700f;
case 0x4e7014:c.instructions+=2;goto B4e7014;
case 0x4e7015:c.instructions+=1;goto B4e7015;
case 0x4e701a:goto L4e701a;
case 0x4e701d:c.instructions+=6;goto B4e701d;
case 0x4e701e:c.instructions+=5;goto B4e701e;
case 0x4e701f:c.instructions+=4;goto B4e701f;
case 0x4e7020:c.instructions+=3;goto B4e7020;
case 0x4e7022:c.instructions+=2;goto B4e7022;
case 0x4e7023:c.instructions+=1;goto B4e7023;
case 0x4e7026:goto L4e7026;
case 0x4e702c:c.instructions+=1;goto B4e702c;
case 0x4e7032:goto L4e7032;
case 0x4e7038:goto L4e7038;
case 0x4e703e:c.instructions+=1;goto B4e703e;
case 0x4e7044:goto L4e7044;
case 0x4e704a:goto L4e704a;
case 0x4e7050:c.instructions+=1;goto B4e7050;
case 0x4e7056:goto L4e7056;
case 0x4e705c:c.instructions+=1;goto B4e705c;
case 0x4e705e:goto L4e705e;
case 0x4e7064:c.instructions+=1;goto B4e7064;
case 0x4e706a:goto L4e706a;
case 0x4e706d:c.instructions+=5;goto B4e706d;
case 0x4e706f:c.instructions+=4;goto B4e706f;
case 0x4e7074:c.instructions+=3;goto B4e7074;
case 0x4e7079:c.instructions+=2;goto B4e7079;
case 0x4e707a:c.instructions+=1;goto B4e707a;
case 0x4e707f:goto L4e707f;
case 0x4e7082:c.instructions+=6;goto B4e7082;
case 0x4e7083:c.instructions+=5;goto B4e7083;
case 0x4e7084:c.instructions+=4;goto B4e7084;
case 0x4e7085:c.instructions+=3;goto B4e7085;
case 0x4e7087:c.instructions+=2;goto B4e7087;
case 0x4e7088:c.instructions+=1;goto B4e7088;
case 0x4e708b:goto L4e708b;
case 0x4e7091:c.instructions+=2;goto B4e7091;
case 0x4e7093:c.instructions+=1;goto B4e7093;
case 0x4e7099:goto L4e7099;
case 0x4e709f:c.instructions+=2;goto B4e709f;
case 0x4e70a1:c.instructions+=1;goto B4e70a1;
case 0x4e70a7:goto L4e70a7;
case 0x4e70ad:c.instructions+=2;goto B4e70ad;
case 0x4e70af:c.instructions+=1;goto B4e70af;
case 0x4e70b5:goto L4e70b5;
case 0x4e70b8:c.instructions+=2;goto B4e70b8;
case 0x4e70ba:c.instructions+=1;goto B4e70ba;
case 0x4e70bc:goto L4e70bc;
case 0x4e70bd:c.instructions+=1;goto B4e70bd;
case 0x4e70c2:goto L4e70c2;
case 0x4e70c5:c.instructions+=1;goto B4e70c5;
case 0x4e70c8:goto L4e70c8;
case 0x4e70cd:c.instructions+=2;goto B4e70cd;
case 0x4e70d4:c.instructions+=1;goto B4e70d4;
case 0x4e70d9:goto L4e70d9;
case 0x4e70db:c.instructions+=1;goto B4e70db;
case 0x4e70e0:goto L4e70e0;
case 0x4e70e1:c.instructions+=5;goto B4e70e1;
case 0x4e70e2:c.instructions+=4;goto B4e70e2;
case 0x4e70e3:c.instructions+=3;goto B4e70e3;
case 0x4e70e5:c.instructions+=2;goto B4e70e5;
case 0x4e70e6:c.instructions+=1;goto B4e70e6;
case 0x4e70e9:goto L4e70e9;
case 0x4e70eb:c.instructions+=1;goto B4e70eb;
case 0x4e70f0:goto L4e70f0;
case 0x4e70f2:c.instructions+=1;goto B4e70f2;
case 0x4e70f7:goto L4e70f7;
case 0x4e70f8:c.instructions+=5;goto B4e70f8;
case 0x4e70f9:c.instructions+=4;goto B4e70f9;
case 0x4e70fa:c.instructions+=3;goto B4e70fa;
case 0x4e70fc:c.instructions+=2;goto B4e70fc;
case 0x4e70fd:c.instructions+=1;goto B4e70fd;
case 0x4e7100:goto L4e7100;
case 0x4e7106:c.instructions+=1;goto B4e7106;
case 0x4e7108:goto L4e7108;
case 0x4e710e:c.instructions+=1;goto B4e710e;
case 0x4e7110:goto L4e7110;
case 0x4e7116:c.instructions+=1;goto B4e7116;
case 0x4e711c:goto L4e711c;
case 0x4e711e:c.instructions+=2;goto B4e711e;
case 0x4e7120:c.instructions+=1;goto B4e7120;
case 0x4e7125:goto L4e7125;
case 0x4e7126:c.instructions+=5;goto B4e7126;
case 0x4e7127:c.instructions+=4;goto B4e7127;
case 0x4e7128:c.instructions+=3;goto B4e7128;
case 0x4e712a:c.instructions+=2;goto B4e712a;
case 0x4e712b:c.instructions+=1;goto B4e712b;
case 0x4e712e:goto L4e712e;
case 0x4e7130:goto L4e7130;
case 0x4e7131:c.instructions+=1;goto B4e7131;
case 0x4e7136:goto L4e7136;
case 0x4e7138:c.instructions+=1;goto B4e7138;
case 0x4e713d:goto L4e713d;
case 0x4e713f:c.instructions+=1;goto B4e713f;
case 0x4e7141:goto L4e7141;
case 0x4e7144:c.instructions+=3;goto B4e7144;
case 0x4e7149:c.instructions+=2;goto B4e7149;
case 0x4e714a:c.instructions+=1;goto B4e714a;
case 0x4e714f:goto L4e714f;
case 0x4e7152:c.instructions+=3;goto B4e7152;
case 0x4e7153:c.instructions+=2;goto B4e7153;
case 0x4e7156:c.instructions+=1;goto B4e7156;
case 0x4e7158:goto L4e7158;
case 0x4e715f:c.instructions+=7;goto B4e715f;
case 0x4e7166:c.instructions+=6;goto B4e7166;
case 0x4e7167:c.instructions+=5;goto B4e7167;
case 0x4e7168:c.instructions+=4;goto B4e7168;
case 0x4e7169:c.instructions+=3;goto B4e7169;
case 0x4e716b:c.instructions+=2;goto B4e716b;
case 0x4e716c:c.instructions+=1;goto B4e716c;
case 0x4e716f:goto L4e716f;
case 0x4e7171:c.instructions+=1;goto B4e7171;
case 0x4e7176:goto L4e7176;
case 0x4e7177:c.instructions+=5;goto B4e7177;
case 0x4e7178:c.instructions+=4;goto B4e7178;
case 0x4e7179:c.instructions+=3;goto B4e7179;
case 0x4e717b:c.instructions+=2;goto B4e717b;
case 0x4e717c:c.instructions+=1;goto B4e717c;
case 0x4e717f:goto L4e717f;
case 0x4e7182:c.instructions+=6;goto B4e7182;
case 0x4e7184:c.instructions+=5;goto B4e7184;
case 0x4e7189:c.instructions+=4;goto B4e7189;
case 0x4e718e:c.instructions+=3;goto B4e718e;
case 0x4e718f:c.instructions+=2;goto B4e718f;
case 0x4e7193:c.instructions+=1;goto B4e7193;
case 0x4e7198:goto L4e7198;
case 0x4e719b:c.instructions+=6;goto B4e719b;
case 0x4e719c:c.instructions+=5;goto B4e719c;
case 0x4e719d:c.instructions+=4;goto B4e719d;
case 0x4e719e:c.instructions+=3;goto B4e719e;
case 0x4e71a0:c.instructions+=2;goto B4e71a0;
case 0x4e71a1:c.instructions+=1;goto B4e71a1;
case 0x4e71a4:goto L4e71a4;
case 0x4e71aa:c.instructions+=1;goto B4e71aa;
case 0x4e71b0:goto L4e71b0;
case 0x4e71b6:goto L4e71b6;
case 0x4e71bc:c.instructions+=1;goto B4e71bc;
case 0x4e71c2:goto L4e71c2;
case 0x4e71c8:c.instructions+=1;goto B4e71c8;
case 0x4e71ca:goto L4e71ca;
case 0x4e71d0:c.instructions+=1;goto B4e71d0;
case 0x4e71d6:goto L4e71d6;
case 0x4e71d9:c.instructions+=1;goto B4e71d9;
case 0x4e71de:goto L4e71de;
case 0x4e71e4:c.instructions+=2;goto B4e71e4;
case 0x4e71e5:c.instructions+=1;goto B4e71e5;
case 0x4e71ea:goto L4e71ea;
case 0x4e71ed:c.instructions+=2;goto B4e71ed;
case 0x4e71ef:c.instructions+=1;goto B4e71ef;
case 0x4e71f5:goto L4e71f5;
case 0x4e71f8:c.instructions+=3;goto B4e71f8;
case 0x4e71f9:c.instructions+=2;goto B4e71f9;
case 0x4e71fe:c.instructions+=1;goto B4e71fe;
case 0x4e7203:goto L4e7203;
case 0x4e7206:c.instructions+=6;goto B4e7206;
case 0x4e7207:c.instructions+=5;goto B4e7207;
case 0x4e7208:c.instructions+=4;goto B4e7208;
case 0x4e7209:c.instructions+=3;goto B4e7209;
case 0x4e720b:c.instructions+=2;goto B4e720b;
case 0x4e720c:c.instructions+=1;goto B4e720c;
case 0x4e720f:goto L4e720f;
case 0x4e7216:c.instructions+=1;goto B4e7216;
case 0x4e721b:goto L4e721b;
case 0x4e7221:c.instructions+=6;goto B4e7221;
case 0x4e7222:c.instructions+=5;goto B4e7222;
case 0x4e7223:c.instructions+=4;goto B4e7223;
case 0x4e7225:c.instructions+=3;goto B4e7225;
case 0x4e722a:c.instructions+=2;goto B4e722a;
case 0x4e722b:c.instructions+=1;goto B4e722b;
case 0x4e7230:goto L4e7230;
case 0x4e7233:c.instructions+=5;goto B4e7233;
case 0x4e7235:c.instructions+=4;goto B4e7235;
case 0x4e723a:c.instructions+=3;goto B4e723a;
case 0x4e723f:c.instructions+=2;goto B4e723f;
case 0x4e7240:c.instructions+=1;goto B4e7240;
case 0x4e7245:goto L4e7245;
case 0x4e7248:c.instructions+=6;goto B4e7248;
case 0x4e7249:c.instructions+=5;goto B4e7249;
case 0x4e724a:c.instructions+=4;goto B4e724a;
case 0x4e724b:c.instructions+=3;goto B4e724b;
case 0x4e724d:c.instructions+=2;goto B4e724d;
case 0x4e724e:c.instructions+=1;goto B4e724e;
case 0x4e7251:goto L4e7251;
case 0x4e7254:c.instructions+=2;goto B4e7254;
case 0x4e7256:c.instructions+=1;goto B4e7256;
case 0x4e725b:goto L4e725b;
case 0x4e725e:c.instructions+=2;goto B4e725e;
case 0x4e7260:c.instructions+=1;goto B4e7260;
case 0x4e7262:goto L4e7262;
case 0x4e7265:c.instructions+=3;goto B4e7265;
case 0x4e726a:c.instructions+=2;goto B4e726a;
case 0x4e726b:c.instructions+=1;goto B4e726b;
case 0x4e7270:goto L4e7270;
case 0x4e7272:c.instructions+=2;goto B4e7272;
case 0x4e7274:c.instructions+=1;goto B4e7274;
case 0x4e7279:goto L4e7279;
case 0x4e727a:c.instructions+=5;goto B4e727a;
case 0x4e727b:c.instructions+=4;goto B4e727b;
case 0x4e727c:c.instructions+=3;goto B4e727c;
case 0x4e727e:c.instructions+=2;goto B4e727e;
case 0x4e727f:c.instructions+=1;goto B4e727f;
case 0x4e7282:goto L4e7282;
case 0x4e7287:goto L4e7287;
case 0x4e7289:c.instructions+=1;goto B4e7289;
case 0x4e728e:goto L4e728e;
case 0x4e7294:c.instructions+=1;goto B4e7294;
case 0x4e729a:goto L4e729a;
case 0x4e729f:c.instructions+=1;goto B4e729f;
case 0x4e72a4:goto L4e72a4;
case 0x4e72a6:c.instructions+=1;goto B4e72a6;
case 0x4e72ab:goto L4e72ab;
case 0x4e72ad:c.instructions+=1;goto B4e72ad;
case 0x4e72af:goto L4e72af;
case 0x4e72b0:c.instructions+=3;goto B4e72b0;
case 0x4e72b7:c.instructions+=2;goto B4e72b7;
case 0x4e72b8:c.instructions+=1;goto B4e72b8;
case 0x4e72ba:goto L4e72ba;
case 0x4e72c0:c.instructions+=2;goto B4e72c0;
case 0x4e72c2:c.instructions+=1;goto B4e72c2;
case 0x4e72c4:goto L4e72c4;
case 0x4e72c9:goto L4e72c9;
case 0x4e72cf:c.instructions+=4;goto B4e72cf;
case 0x4e72d1:c.instructions+=3;goto B4e72d1;
case 0x4e72d6:c.instructions+=2;goto B4e72d6;
case 0x4e72d7:c.instructions+=1;goto B4e72d7;
case 0x4e72dc:goto L4e72dc;
case 0x4e72df:c.instructions+=2;goto B4e72df;
case 0x4e72e4:c.instructions+=1;goto B4e72e4;
case 0x4e72e9:goto L4e72e9;
case 0x4e72eb:c.instructions+=1;goto B4e72eb;
case 0x4e72f0:goto L4e72f0;
case 0x4e72f1:c.instructions+=2;goto B4e72f1;
case 0x4e72f8:c.instructions+=1;goto B4e72f8;
case 0x4e72f9:goto L4e72f9;
case 0x4e72fe:goto L4e72fe;
case 0x4e7300:c.instructions+=3;goto B4e7300;
case 0x4e7305:c.instructions+=2;goto B4e7305;
case 0x4e730a:c.instructions+=1;goto B4e730a;
case 0x4e730d:goto L4e730d;
case 0x4e730f:goto L4e730f;
case 0x4e7311:c.instructions+=1;goto B4e7311;
case 0x4e7316:goto L4e7316;
case 0x4e731c:c.instructions+=2;goto B4e731c;
case 0x4e731e:c.instructions+=1;goto B4e731e;
case 0x4e7320:goto L4e7320;
case 0x4e7323:c.instructions+=2;goto B4e7323;
case 0x4e7324:c.instructions+=1;goto B4e7324;
case 0x4e7329:goto L4e7329;
case 0x4e732e:c.instructions+=3;goto B4e732e;
case 0x4e7333:c.instructions+=2;goto B4e7333;
case 0x4e733a:c.instructions+=1;goto B4e733a;
case 0x4e733f:goto L4e733f;
case 0x4e7345:c.instructions+=3;goto B4e7345;
case 0x4e7348:c.instructions+=2;goto B4e7348;
case 0x4e734a:c.instructions+=1;goto B4e734a;
case 0x4e7350:goto L4e7350;
case 0x4e7355:c.instructions+=2;goto B4e7355;
case 0x4e735a:c.instructions+=1;goto B4e735a;
case 0x4e735f:goto L4e735f;
case 0x4e7361:c.instructions+=2;goto B4e7361;
case 0x4e7366:c.instructions+=1;goto B4e7366;
case 0x4e736b:goto L4e736b;
case 0x4e736e:c.instructions+=6;goto B4e736e;
case 0x4e736f:c.instructions+=5;goto B4e736f;
case 0x4e7370:c.instructions+=4;goto B4e7370;
case 0x4e7371:c.instructions+=3;goto B4e7371;
case 0x4e7373:c.instructions+=2;goto B4e7373;
case 0x4e7374:c.instructions+=1;goto B4e7374;
case 0x4e7377:goto L4e7377;
case 0x4e737c:c.instructions+=1;goto B4e737c;
case 0x4e7381:goto L4e7381;
case 0x4e7384:c.instructions+=2;goto B4e7384;
case 0x4e7386:c.instructions+=1;goto B4e7386;
case 0x4e7388:goto L4e7388;
case 0x4e738a:c.instructions+=2;goto B4e738a;
case 0x4e738f:c.instructions+=1;goto B4e738f;
case 0x4e7394:goto L4e7394;
case 0x4e7397:c.instructions+=6;goto B4e7397;
case 0x4e7398:c.instructions+=5;goto B4e7398;
case 0x4e7399:c.instructions+=4;goto B4e7399;
case 0x4e739a:c.instructions+=3;goto B4e739a;
case 0x4e739c:c.instructions+=2;goto B4e739c;
case 0x4e739d:c.instructions+=1;goto B4e739d;
case 0x4e73a0:goto L4e73a0;
case 0x4e73a6:c.instructions+=1;goto B4e73a6;
case 0x4e73a8:goto L4e73a8;
case 0x4e73ae:c.instructions+=1;goto B4e73ae;
case 0x4e73b0:goto L4e73b0;
case 0x4e73b6:c.instructions+=1;goto B4e73b6;
case 0x4e73b8:goto L4e73b8;
case 0x4e73ba:c.instructions+=4;goto B4e73ba;
case 0x4e73bf:c.instructions+=3;goto B4e73bf;
case 0x4e73c4:c.instructions+=2;goto B4e73c4;
case 0x4e73c9:c.instructions+=1;goto B4e73c9;
case 0x4e73ce:goto L4e73ce;
case 0x4e73d1:c.instructions+=7;goto B4e73d1;
case 0x4e73d8:c.instructions+=6;goto B4e73d8;
case 0x4e73d9:c.instructions+=5;goto B4e73d9;
case 0x4e73da:c.instructions+=4;goto B4e73da;
case 0x4e73db:c.instructions+=3;goto B4e73db;
case 0x4e73dd:c.instructions+=2;goto B4e73dd;
case 0x4e73de:c.instructions+=1;goto B4e73de;
case 0x4e73e1:goto L4e73e1;
case 0x4e73e3:c.instructions+=2;goto B4e73e3;
case 0x4e73e8:c.instructions+=1;goto B4e73e8;
case 0x4e73ed:goto L4e73ed;
case 0x4e73ef:c.instructions+=2;goto B4e73ef;
case 0x4e73f1:c.instructions+=1;goto B4e73f1;
case 0x4e73f6:goto L4e73f6;
case 0x4e73f7:c.instructions+=5;goto B4e73f7;
case 0x4e73f8:c.instructions+=4;goto B4e73f8;
case 0x4e73f9:c.instructions+=3;goto B4e73f9;
case 0x4e73fb:c.instructions+=2;goto B4e73fb;
case 0x4e73fc:c.instructions+=1;goto B4e73fc;
case 0x4e7430:goto L4e7430;
case 0x4e7433:c.instructions+=7;goto B4e7433;
case 0x4e7434:c.instructions+=6;goto B4e7434;
case 0x4e7435:c.instructions+=5;goto B4e7435;
case 0x4e7436:c.instructions+=4;goto B4e7436;
case 0x4e7437:c.instructions+=3;goto B4e7437;
case 0x4e7439:c.instructions+=2;goto B4e7439;
case 0x4e743e:c.instructions+=1;goto B4e743e;
case 0x4e7446:goto L4e7446;
case 0x4e7448:c.instructions+=1;goto B4e7448;
case 0x4e744d:goto L4e744d;
case 0x4e744f:c.instructions+=3;goto B4e744f;
case 0x4e7452:c.instructions+=2;goto B4e7452;
case 0x4e7454:c.instructions+=1;goto B4e7454;
case 0x4e7456:goto L4e7456;
case 0x4e7459:c.instructions+=12;goto B4e7459;
case 0x4e745f:c.instructions+=11;goto B4e745f;
case 0x4e7461:c.instructions+=10;goto B4e7461;
case 0x4e7464:c.instructions+=9;goto B4e7464;
case 0x4e7467:c.instructions+=8;goto B4e7467;
case 0x4e746a:c.instructions+=7;goto B4e746a;
case 0x4e746d:c.instructions+=6;goto B4e746d;
case 0x4e7470:c.instructions+=5;goto B4e7470;
case 0x4e7473:c.instructions+=4;goto B4e7473;
case 0x4e7477:c.instructions+=3;goto B4e7477;
case 0x4e747e:c.instructions+=2;goto B4e747e;
case 0x4e7485:c.instructions+=1;goto B4e7485;
case 0x4e7487:goto L4e7487;
case 0x4e7488:c.instructions+=5;goto B4e7488;
case 0x4e748d:c.instructions+=4;goto B4e748d;
case 0x4e7491:c.instructions+=3;goto B4e7491;
case 0x4e7493:c.instructions+=2;goto B4e7493;
case 0x4e7494:c.instructions+=1;goto B4e7494;
case 0x4e7499:goto L4e7499;
case 0x4e749c:c.instructions+=3;goto B4e749c;
case 0x4e74a0:c.instructions+=2;goto B4e74a0;
case 0x4e74a1:c.instructions+=1;goto B4e74a1;
case 0x4e74a6:goto L4e74a6;
case 0x4e74a7:c.instructions+=2;goto B4e74a7;
case 0x4e74a8:c.instructions+=1;goto B4e74a8;
case 0x4e74ad:goto L4e74ad;
case 0x4e74af:c.instructions+=2;goto B4e74af;
case 0x4e74b1:c.instructions+=1;goto B4e74b1;
case 0x4e74b6:goto L4e74b6;
case 0x4e74b9:c.instructions+=2;goto B4e74b9;
case 0x4e74bb:c.instructions+=1;goto B4e74bb;
case 0x4e74bd:goto L4e74bd;
case 0x4e74c3:c.instructions+=3;goto B4e74c3;
case 0x4e74c6:c.instructions+=2;goto B4e74c6;
case 0x4e74c9:c.instructions+=1;goto B4e74c9;
case 0x4e74cb:goto L4e74cb;
case 0x4e74cd:goto L4e74cd;
case 0x4e74d0:c.instructions+=8;goto B4e74d0;
case 0x4e74d3:c.instructions+=7;goto B4e74d3;
case 0x4e74d5:c.instructions+=6;goto B4e74d5;
case 0x4e74d8:c.instructions+=5;goto B4e74d8;
case 0x4e74da:c.instructions+=4;goto B4e74da;
case 0x4e74db:c.instructions+=3;goto B4e74db;
case 0x4e74de:c.instructions+=2;goto B4e74de;
case 0x4e74e1:c.instructions+=1;goto B4e74e1;
case 0x4e74e6:goto L4e74e6;
case 0x4e74e7:c.instructions+=5;goto B4e74e7;
case 0x4e74ec:c.instructions+=4;goto B4e74ec;
case 0x4e74f0:c.instructions+=3;goto B4e74f0;
case 0x4e74f2:c.instructions+=2;goto B4e74f2;
case 0x4e74f3:c.instructions+=1;goto B4e74f3;
case 0x4e74f8:goto L4e74f8;
case 0x4e74fb:c.instructions+=3;goto B4e74fb;
case 0x4e74ff:c.instructions+=2;goto B4e74ff;
case 0x4e7500:c.instructions+=1;goto B4e7500;
case 0x4e7505:goto L4e7505;
case 0x4e7506:c.instructions+=2;goto B4e7506;
case 0x4e7507:c.instructions+=1;goto B4e7507;
case 0x4e750c:goto L4e750c;
case 0x4e750f:c.instructions+=8;goto B4e750f;
case 0x4e7513:c.instructions+=7;goto B4e7513;
case 0x4e7516:c.instructions+=6;goto B4e7516;
case 0x4e7517:c.instructions+=5;goto B4e7517;
case 0x4e7518:c.instructions+=4;goto B4e7518;
case 0x4e751f:c.instructions+=3;goto B4e751f;
case 0x4e7526:c.instructions+=2;goto B4e7526;
case 0x4e752a:c.instructions+=1;goto B4e752a;
case 0x4e7530:goto L4e7530;
case 0x4e7532:c.instructions+=1;goto B4e7532;
case 0x4e7537:goto L4e7537;
case 0x4e7538:c.instructions+=5;goto B4e7538;
case 0x4e7539:c.instructions+=4;goto B4e7539;
case 0x4e753a:c.instructions+=3;goto B4e753a;
case 0x4e753b:c.instructions+=2;goto B4e753b;
case 0x4e753e:c.instructions+=1;goto B4e753e;
case 0x4e7540:goto L4e7540;
case 0x4e7542:c.instructions+=14;goto B4e7542;
case 0x4e7547:c.instructions+=13;goto B4e7547;
case 0x4e754d:c.instructions+=12;goto B4e754d;
case 0x4e754e:c.instructions+=11;goto B4e754e;
case 0x4e7555:c.instructions+=10;goto B4e7555;
case 0x4e755b:c.instructions+=9;goto B4e755b;
case 0x4e7562:c.instructions+=8;goto B4e7562;
case 0x4e7563:c.instructions+=7;goto B4e7563;
case 0x4e7564:c.instructions+=6;goto B4e7564;
case 0x4e7565:c.instructions+=5;goto B4e7565;
case 0x4e7566:c.instructions+=4;goto B4e7566;
case 0x4e7568:c.instructions+=3;goto B4e7568;
case 0x4e7569:c.instructions+=2;goto B4e7569;
case 0x4e756d:c.instructions+=1;goto B4e756d;
case 0x4e7572:goto L4e7572;
case 0x4e7575:c.instructions+=16;goto B4e7575;
case 0x4e7577:c.instructions+=15;goto B4e7577;
case 0x4e7579:c.instructions+=14;goto B4e7579;
case 0x4e757a:c.instructions+=13;goto B4e757a;
case 0x4e757c:c.instructions+=12;goto B4e757c;
case 0x4e757e:c.instructions+=11;goto B4e757e;
case 0x4e7583:c.instructions+=10;goto B4e7583;
case 0x4e7588:c.instructions+=9;goto B4e7588;
case 0x4e7589:c.instructions+=8;goto B4e7589;
case 0x4e758c:c.instructions+=7;goto B4e758c;
case 0x4e7593:c.instructions+=6;goto B4e7593;
case 0x4e759a:c.instructions+=5;goto B4e759a;
case 0x4e759d:c.instructions+=4;goto B4e759d;
case 0x4e75a0:c.instructions+=3;goto B4e75a0;
case 0x4e75a3:c.instructions+=2;goto B4e75a3;
case 0x4e75a6:c.instructions+=1;goto B4e75a6;
case 0x4e75ab:goto L4e75ab;
case 0x4e75ae:c.instructions+=8;goto B4e75ae;
case 0x4e75af:c.instructions+=7;goto B4e75af;
case 0x4e75b0:c.instructions+=6;goto B4e75b0;
case 0x4e75b2:c.instructions+=5;goto B4e75b2;
case 0x4e75b7:c.instructions+=4;goto B4e75b7;
case 0x4e75b8:c.instructions+=3;goto B4e75b8;
case 0x4e75be:c.instructions+=2;goto B4e75be;
case 0x4e75c6:c.instructions+=1;goto B4e75c6;
case 0x4e75cb:goto L4e75cb;
case 0x4e75ce:c.instructions+=3;goto B4e75ce;
case 0x4e75d3:c.instructions+=2;goto B4e75d3;
case 0x4e75d4:c.instructions+=1;goto B4e75d4;
case 0x4e75d9:goto L4e75d9;
case 0x4e75df:c.instructions+=3;goto B4e75df;
case 0x4e75e2:c.instructions+=2;goto B4e75e2;
case 0x4e75e3:c.instructions+=1;goto B4e75e3;
case 0x4e75e8:goto L4e75e8;
case 0x4e75ee:c.instructions+=15;goto B4e75ee;
case 0x4e75f4:c.instructions+=14;goto B4e75f4;
case 0x4e75f7:c.instructions+=13;goto B4e75f7;
case 0x4e75f9:c.instructions+=12;goto B4e75f9;
case 0x4e75ff:c.instructions+=11;goto B4e75ff;
case 0x4e7602:c.instructions+=10;goto B4e7602;
case 0x4e7607:c.instructions+=9;goto B4e7607;
case 0x4e7609:c.instructions+=8;goto B4e7609;
case 0x4e760e:c.instructions+=7;goto B4e760e;
case 0x4e7614:c.instructions+=6;goto B4e7614;
case 0x4e761e:c.instructions+=5;goto B4e761e;
case 0x4e7624:c.instructions+=4;goto B4e7624;
case 0x4e762a:c.instructions+=3;goto B4e762a;
case 0x4e762f:c.instructions+=2;goto B4e762f;
case 0x4e7635:c.instructions+=1;goto B4e7635;
case 0x4e763a:goto L4e763a;
case 0x4e763c:goto L4e763c;
case 0x4e7641:goto L4e7641;
case 0x4e7644:c.instructions+=2;goto B4e7644;
case 0x4e7646:c.instructions+=1;goto B4e7646;
case 0x4e764b:goto L4e764b;
case 0x4e764e:c.instructions+=3;goto B4e764e;
case 0x4e7653:c.instructions+=2;goto B4e7653;
case 0x4e7654:c.instructions+=1;goto B4e7654;
case 0x4e7659:goto L4e7659;
case 0x4e765c:c.instructions+=2;goto B4e765c;
case 0x4e7661:c.instructions+=1;goto B4e7661;
case 0x4e7666:goto L4e7666;
case 0x4e7668:c.instructions+=1;goto B4e7668;
case 0x4e766d:goto L4e766d;
case 0x4e766f:c.instructions+=1;goto B4e766f;
case 0x4e7671:goto L4e7671;
case 0x4e7672:c.instructions+=3;goto B4e7672;
case 0x4e7676:c.instructions+=2;goto B4e7676;
case 0x4e7677:c.instructions+=1;goto B4e7677;
case 0x4e7679:goto L4e7679;
case 0x4e767e:goto L4e767e;
case 0x4e7684:c.instructions+=4;goto B4e7684;
case 0x4e7686:c.instructions+=3;goto B4e7686;
case 0x4e768b:c.instructions+=2;goto B4e768b;
case 0x4e768c:c.instructions+=1;goto B4e768c;
case 0x4e7691:goto L4e7691;
case 0x4e7694:c.instructions+=2;goto B4e7694;
case 0x4e7699:c.instructions+=1;goto B4e7699;
case 0x4e769e:goto L4e769e;
case 0x4e76a0:c.instructions+=1;goto B4e76a0;
case 0x4e76a5:goto L4e76a5;
case 0x4e76a6:c.instructions+=2;goto B4e76a6;
case 0x4e76aa:c.instructions+=1;goto B4e76aa;
case 0x4e76ab:goto L4e76ab;
case 0x4e76b0:goto L4e76b0;
case 0x4e76b2:c.instructions+=2;goto B4e76b2;
case 0x4e76b7:c.instructions+=1;goto B4e76b7;
case 0x4e76bc:goto L4e76bc;
case 0x4e76be:goto L4e76be;
case 0x4e76c4:c.instructions+=3;goto B4e76c4;
case 0x4e76c7:c.instructions+=2;goto B4e76c7;
case 0x4e76c8:c.instructions+=1;goto B4e76c8;
case 0x4e76cd:goto L4e76cd;
case 0x4e76d0:c.instructions+=2;goto B4e76d0;
case 0x4e76d2:c.instructions+=1;goto B4e76d2;
case 0x4e76d4:goto L4e76d4;
case 0x4e76d6:c.instructions+=1;goto B4e76d6;
case 0x4e76db:goto L4e76db;
case 0x4e76dd:goto L4e76dd;
case 0x4e76e2:c.instructions+=3;goto B4e76e2;
case 0x4e76e7:c.instructions+=2;goto B4e76e7;
case 0x4e76ec:c.instructions+=1;goto B4e76ec;
case 0x4e76f1:goto L4e76f1;
case 0x4e76f4:c.instructions+=6;goto B4e76f4;
case 0x4e76f5:c.instructions+=5;goto B4e76f5;
case 0x4e76fa:c.instructions+=4;goto B4e76fa;
case 0x4e76fb:c.instructions+=3;goto B4e76fb;
case 0x4e7700:c.instructions+=2;goto B4e7700;
case 0x4e7702:c.instructions+=1;goto B4e7702;
case 0x4e7707:goto L4e7707;
case 0x4e770a:c.instructions+=2;goto B4e770a;
case 0x4e770f:c.instructions+=1;goto B4e770f;
case 0x4e7714:goto L4e7714;
case 0x4e7715:c.instructions+=3;goto B4e7715;
case 0x4e771a:c.instructions+=2;goto B4e771a;
case 0x4e771b:c.instructions+=1;goto B4e771b;
case 0x4e7720:goto L4e7720;
case 0x4e7723:c.instructions+=3;goto B4e7723;
case 0x4e7725:c.instructions+=2;goto B4e7725;
case 0x4e772b:c.instructions+=1;goto B4e772b;
case 0x4e7730:goto L4e7730;
case 0x4e7733:c.instructions+=4;goto B4e7733;
case 0x4e7734:c.instructions+=3;goto B4e7734;
case 0x4e7737:c.instructions+=2;goto B4e7737;
case 0x4e773c:c.instructions+=1;goto B4e773c;
case 0x4e773e:goto L4e773e;
case 0x4e773f:c.instructions+=2;goto B4e773f;
case 0x4e7744:c.instructions+=1;goto B4e7744;
case 0x4e7749:goto L4e7749;
case 0x4e774a:c.instructions+=2;goto B4e774a;
case 0x4e774f:c.instructions+=1;goto B4e774f;
case 0x4e7754:goto L4e7754;
case 0x4e775b:c.instructions+=9;goto B4e775b;
case 0x4e775e:c.instructions+=8;goto B4e775e;
case 0x4e775f:c.instructions+=7;goto B4e775f;
case 0x4e7760:c.instructions+=6;goto B4e7760;
case 0x4e7762:c.instructions+=5;goto B4e7762;
case 0x4e7763:c.instructions+=4;goto B4e7763;
case 0x4e7764:c.instructions+=3;goto B4e7764;
case 0x4e776b:c.instructions+=2;goto B4e776b;
case 0x4e7771:c.instructions+=1;goto B4e7771;
case 0x4e7780:goto L4e7780;
case 0x4e7781:c.instructions+=2;goto B4e7781;
case 0x4e7783:c.instructions+=1;goto B4e7783;
case 0x4e7788:goto L4e7788;
case 0x4e778d:c.instructions+=1;goto B4e778d;
case 0x4e778f:goto L4e778f;
case 0x4e7790:c.instructions+=1;goto B4e7790;
case 0x4e7795:goto L4e7795;
case 0x4e7798:goto L4e7798;
case 0x4e779a:c.instructions+=2;goto B4e779a;
case 0x4e779b:c.instructions+=1;goto B4e779b;
case 0x4e77a0:goto L4e77a0;
case 0x4e77a1:c.instructions+=10;goto B4e77a1;
case 0x4e77a3:c.instructions+=9;goto B4e77a3;
case 0x4e77a6:c.instructions+=8;goto B4e77a6;
case 0x4e77ac:c.instructions+=7;goto B4e77ac;
case 0x4e77af:c.instructions+=6;goto B4e77af;
case 0x4e77b4:c.instructions+=5;goto B4e77b4;
case 0x4e77b5:c.instructions+=4;goto B4e77b5;
case 0x4e77b6:c.instructions+=3;goto B4e77b6;
case 0x4e77b7:c.instructions+=2;goto B4e77b7;
case 0x4e77b9:c.instructions+=1;goto B4e77b9;
case 0x4e77bf:goto L4e77bf;
case 0x4e77c5:goto L4e77c5;
case 0x4e77ca:c.instructions+=1;goto B4e77ca;
case 0x4e77d0:goto L4e77d0;
case 0x4e77d6:goto L4e77d6;
case 0x4e77db:c.instructions+=1;goto B4e77db;
case 0x4e77dd:goto L4e77dd;
case 0x4e77e2:c.instructions+=1;goto B4e77e2;
case 0x4e77e4:goto L4e77e4;
case 0x4e77e9:c.instructions+=1;goto B4e77e9;
case 0x4e77ef:goto L4e77ef;
case 0x4e77f1:c.instructions+=1;goto B4e77f1;
case 0x4e77f6:goto L4e77f6;
case 0x4e77f9:c.instructions+=2;goto B4e77f9;
case 0x4e77fa:c.instructions+=1;goto B4e77fa;
case 0x4e77ff:goto L4e77ff;
case 0x4e7802:c.instructions+=6;goto B4e7802;
case 0x4e7805:c.instructions+=5;goto B4e7805;
case 0x4e7807:c.instructions+=4;goto B4e7807;
case 0x4e780c:c.instructions+=3;goto B4e780c;
case 0x4e780d:c.instructions+=2;goto B4e780d;
case 0x4e780e:c.instructions+=1;goto B4e780e;
case 0x4e7813:goto L4e7813;
case 0x4e7816:c.instructions+=6;goto B4e7816;
case 0x4e7817:c.instructions+=5;goto B4e7817;
case 0x4e7818:c.instructions+=4;goto B4e7818;
case 0x4e7819:c.instructions+=3;goto B4e7819;
case 0x4e781b:c.instructions+=2;goto B4e781b;
case 0x4e781c:c.instructions+=1;goto B4e781c;
case 0x4e781f:goto L4e781f;
case 0x4e7822:c.instructions+=2;goto B4e7822;
case 0x4e7824:c.instructions+=1;goto B4e7824;
case 0x4e782a:goto L4e782a;
case 0x4e782d:c.instructions+=2;goto B4e782d;
case 0x4e7832:c.instructions+=1;goto B4e7832;
case 0x4e7838:goto L4e7838;
case 0x4e783d:c.instructions+=1;goto B4e783d;
case 0x4e783f:goto L4e783f;
case 0x4e7844:c.instructions+=1;goto B4e7844;
case 0x4e784a:goto L4e784a;
case 0x4e7850:c.instructions+=2;goto B4e7850;
case 0x4e7852:c.instructions+=1;goto B4e7852;
case 0x4e7854:goto L4e7854;
case 0x4e7859:goto L4e7859;
case 0x4e785f:c.instructions+=2;goto B4e785f;
case 0x4e7860:c.instructions+=1;goto B4e7860;
case 0x4e7865:goto L4e7865;
case 0x4e7868:c.instructions+=1;goto B4e7868;
case 0x4e786f:goto L4e786f;
case 0x4e7871:goto L4e7871;
case 0x4e7874:c.instructions+=4;goto B4e7874;
case 0x4e7879:c.instructions+=3;goto B4e7879;
case 0x4e787e:c.instructions+=2;goto B4e787e;
case 0x4e787f:c.instructions+=1;goto B4e787f;
case 0x4e7884:goto L4e7884;
case 0x4e7887:c.instructions+=6;goto B4e7887;
case 0x4e7888:c.instructions+=5;goto B4e7888;
case 0x4e7889:c.instructions+=4;goto B4e7889;
case 0x4e788a:c.instructions+=3;goto B4e788a;
case 0x4e788c:c.instructions+=2;goto B4e788c;
case 0x4e788d:c.instructions+=1;goto B4e788d;
case 0x4e7890:goto L4e7890;
case 0x4e7895:c.instructions+=2;goto B4e7895;
case 0x4e789a:c.instructions+=1;goto B4e789a;
case 0x4e789f:goto L4e789f;
case 0x4e78a2:c.instructions+=5;goto B4e78a2;
case 0x4e78a4:c.instructions+=4;goto B4e78a4;
case 0x4e78a9:c.instructions+=3;goto B4e78a9;
case 0x4e78aa:c.instructions+=2;goto B4e78aa;
case 0x4e78af:c.instructions+=1;goto B4e78af;
case 0x4e78b4:goto L4e78b4;
case 0x4e78b7:c.instructions+=6;goto B4e78b7;
case 0x4e78b8:c.instructions+=5;goto B4e78b8;
case 0x4e78b9:c.instructions+=4;goto B4e78b9;
case 0x4e78ba:c.instructions+=3;goto B4e78ba;
case 0x4e78bc:c.instructions+=2;goto B4e78bc;
case 0x4e78bd:c.instructions+=1;goto B4e78bd;
case 0x4e78c0:goto L4e78c0;
case 0x4e78c5:c.instructions+=8;goto B4e78c5;
case 0x4e78cb:c.instructions+=7;goto B4e78cb;
case 0x4e78cf:c.instructions+=6;goto B4e78cf;
case 0x4e78d3:c.instructions+=5;goto B4e78d3;
case 0x4e78d9:c.instructions+=4;goto B4e78d9;
case 0x4e78df:c.instructions+=3;goto B4e78df;
case 0x4e78e1:c.instructions+=2;goto B4e78e1;
case 0x4e78e4:c.instructions+=1;goto B4e78e4;
case 0x4e78ea:goto L4e78ea;
case 0x4e78ef:c.instructions+=3;goto B4e78ef;
case 0x4e78f4:c.instructions+=2;goto B4e78f4;
case 0x4e78f9:c.instructions+=1;goto B4e78f9;
case 0x4e78fe:goto L4e78fe;
case 0x4e7901:c.instructions+=6;goto B4e7901;
case 0x4e7902:c.instructions+=5;goto B4e7902;
case 0x4e7907:c.instructions+=4;goto B4e7907;
case 0x4e7909:c.instructions+=3;goto B4e7909;
case 0x4e790e:c.instructions+=2;goto B4e790e;
case 0x4e7910:c.instructions+=1;goto B4e7910;
case 0x4e7915:goto L4e7915;
case 0x4e7916:c.instructions+=5;goto B4e7916;
case 0x4e7917:c.instructions+=4;goto B4e7917;
case 0x4e7918:c.instructions+=3;goto B4e7918;
case 0x4e791a:c.instructions+=2;goto B4e791a;
case 0x4e791b:c.instructions+=1;goto B4e791b;
case 0x4e791e:goto L4e791e;
case 0x4e7924:c.instructions+=2;goto B4e7924;
case 0x4e792a:c.instructions+=1;goto B4e792a;
case 0x4e792c:goto L4e792c;
case 0x4e792d:c.instructions+=1;goto B4e792d;
case 0x4e7933:goto L4e7933;
case 0x4e7935:c.instructions+=1;goto B4e7935;
case 0x4e793a:goto L4e793a;
case 0x4e793b:c.instructions+=5;goto B4e793b;
case 0x4e793c:c.instructions+=4;goto B4e793c;
case 0x4e793d:c.instructions+=3;goto B4e793d;
case 0x4e793f:c.instructions+=2;goto B4e793f;
case 0x4e7940:c.instructions+=1;goto B4e7940;
case 0x4e7943:goto L4e7943;
case 0x4e7948:c.instructions+=1;goto B4e7948;
case 0x4e794a:goto L4e794a;
case 0x4e794f:c.instructions+=1;goto B4e794f;
case 0x4e7955:goto L4e7955;
case 0x4e7957:c.instructions+=1;goto B4e7957;
case 0x4e795c:goto L4e795c;
case 0x4e795d:c.instructions+=5;goto B4e795d;
case 0x4e795e:c.instructions+=4;goto B4e795e;
case 0x4e795f:c.instructions+=3;goto B4e795f;
case 0x4e7961:c.instructions+=2;goto B4e7961;
case 0x4e7962:c.instructions+=1;goto B4e7962;
case 0x4e7965:goto L4e7965;
case 0x4e796b:c.instructions+=2;goto B4e796b;
case 0x4e796d:c.instructions+=1;goto B4e796d;
case 0x4e796f:goto L4e796f;
case 0x4e7974:goto L4e7974;
case 0x4e797a:c.instructions+=2;goto B4e797a;
case 0x4e797b:c.instructions+=1;goto B4e797b;
case 0x4e7980:goto L4e7980;
case 0x4e7983:c.instructions+=1;goto B4e7983;
case 0x4e798a:goto L4e798a;
case 0x4e798d:c.instructions+=5;goto B4e798d;
case 0x4e798f:c.instructions+=4;goto B4e798f;
case 0x4e7994:c.instructions+=3;goto B4e7994;
case 0x4e7999:c.instructions+=2;goto B4e7999;
case 0x4e799a:c.instructions+=1;goto B4e799a;
case 0x4e799f:goto L4e799f;
case 0x4e79a2:c.instructions+=6;goto B4e79a2;
case 0x4e79a3:c.instructions+=5;goto B4e79a3;
case 0x4e79a4:c.instructions+=4;goto B4e79a4;
case 0x4e79a5:c.instructions+=3;goto B4e79a5;
case 0x4e79a7:c.instructions+=2;goto B4e79a7;
case 0x4e79a8:c.instructions+=1;goto B4e79a8;
case 0x4e79ab:goto L4e79ab;
case 0x4e79ae:c.instructions+=2;goto B4e79ae;
case 0x4e79b0:c.instructions+=1;goto B4e79b0;
case 0x4e79b6:goto L4e79b6;
case 0x4e79b9:c.instructions+=2;goto B4e79b9;
case 0x4e79be:c.instructions+=1;goto B4e79be;
case 0x4e79c0:goto L4e79c0;
case 0x4e79c3:c.instructions+=5;goto B4e79c3;
case 0x4e79c5:c.instructions+=4;goto B4e79c5;
case 0x4e79ca:c.instructions+=3;goto B4e79ca;
case 0x4e79cf:c.instructions+=2;goto B4e79cf;
case 0x4e79d0:c.instructions+=1;goto B4e79d0;
case 0x4e79d5:goto L4e79d5;
case 0x4e79d8:c.instructions+=5;goto B4e79d8;
case 0x4e79da:c.instructions+=4;goto B4e79da;
case 0x4e79df:c.instructions+=3;goto B4e79df;
case 0x4e79e4:c.instructions+=2;goto B4e79e4;
case 0x4e79e5:c.instructions+=1;goto B4e79e5;
case 0x4e79ea:goto L4e79ea;
case 0x4e79ed:c.instructions+=6;goto B4e79ed;
case 0x4e79ee:c.instructions+=5;goto B4e79ee;
case 0x4e79ef:c.instructions+=4;goto B4e79ef;
case 0x4e79f0:c.instructions+=3;goto B4e79f0;
case 0x4e79f2:c.instructions+=2;goto B4e79f2;
case 0x4e79f3:c.instructions+=1;goto B4e79f3;
case 0x4e79f6:goto L4e79f6;
case 0x4e79fb:c.instructions+=1;goto B4e79fb;
case 0x4e7a01:goto L4e7a01;
case 0x4e7a04:c.instructions+=5;goto B4e7a04;
case 0x4e7a06:c.instructions+=4;goto B4e7a06;
case 0x4e7a0b:c.instructions+=3;goto B4e7a0b;
case 0x4e7a10:c.instructions+=2;goto B4e7a10;
case 0x4e7a11:c.instructions+=1;goto B4e7a11;
case 0x4e7a16:goto L4e7a16;
case 0x4e7a19:c.instructions+=5;goto B4e7a19;
case 0x4e7a1b:c.instructions+=4;goto B4e7a1b;
case 0x4e7a20:c.instructions+=3;goto B4e7a20;
case 0x4e7a25:c.instructions+=2;goto B4e7a25;
case 0x4e7a26:c.instructions+=1;goto B4e7a26;
case 0x4e7a2b:goto L4e7a2b;
case 0x4e7a2e:c.instructions+=6;goto B4e7a2e;
case 0x4e7a2f:c.instructions+=5;goto B4e7a2f;
case 0x4e7a30:c.instructions+=4;goto B4e7a30;
case 0x4e7a31:c.instructions+=3;goto B4e7a31;
case 0x4e7a33:c.instructions+=2;goto B4e7a33;
case 0x4e7a34:c.instructions+=1;goto B4e7a34;
case 0x4e7a37:goto L4e7a37;
case 0x4e7a3c:c.instructions+=1;goto B4e7a3c;
case 0x4e7a42:goto L4e7a42;
case 0x4e7a48:goto L4e7a48;
case 0x4e7a4d:c.instructions+=1;goto B4e7a4d;
case 0x4e7a53:goto L4e7a53;
case 0x4e7a58:c.instructions+=1;goto B4e7a58;
case 0x4e7a5a:goto L4e7a5a;
case 0x4e7a5f:c.instructions+=1;goto B4e7a5f;
case 0x4e7a65:goto L4e7a65;
case 0x4e7a6a:goto L4e7a6a;
case 0x4e7a6c:c.instructions+=1;goto B4e7a6c;
case 0x4e7a71:goto L4e7a71;
case 0x4e7a74:c.instructions+=2;goto B4e7a74;
case 0x4e7a76:c.instructions+=1;goto B4e7a76;
case 0x4e7a78:goto L4e7a78;
case 0x4e7a7b:c.instructions+=2;goto B4e7a7b;
case 0x4e7a7c:c.instructions+=1;goto B4e7a7c;
case 0x4e7a81:goto L4e7a81;
case 0x4e7a84:c.instructions+=1;goto B4e7a84;
case 0x4e7a88:goto L4e7a88;
case 0x4e7a8d:goto L4e7a8d;
case 0x4e7a94:c.instructions+=1;goto B4e7a94;
case 0x4e7a9a:goto L4e7a9a;
case 0x4e7a9f:c.instructions+=1;goto B4e7a9f;
case 0x4e7aa4:goto L4e7aa4;
case 0x4e7aa6:c.instructions+=1;goto B4e7aa6;
case 0x4e7aab:goto L4e7aab;
case 0x4e7aad:c.instructions+=1;goto B4e7aad;
case 0x4e7ab3:goto L4e7ab3;
case 0x4e7ab4:c.instructions+=1;goto B4e7ab4;
case 0x4e7ab9:goto L4e7ab9;
case 0x4e7abc:c.instructions+=2;goto B4e7abc;
case 0x4e7abe:c.instructions+=1;goto B4e7abe;
case 0x4e7ac4:goto L4e7ac4;
case 0x4e7ac6:c.instructions+=1;goto B4e7ac6;
case 0x4e7acb:goto L4e7acb;
case 0x4e7acc:c.instructions+=5;goto B4e7acc;
case 0x4e7acd:c.instructions+=4;goto B4e7acd;
case 0x4e7ace:c.instructions+=3;goto B4e7ace;
case 0x4e7ad0:c.instructions+=2;goto B4e7ad0;
case 0x4e7ad1:c.instructions+=1;goto B4e7ad1;
case 0x4e7ad4:goto L4e7ad4;
case 0x4e7ad7:c.instructions+=2;goto B4e7ad7;
case 0x4e7ad9:c.instructions+=1;goto B4e7ad9;
case 0x4e7adf:goto L4e7adf;
case 0x4e7ae2:c.instructions+=2;goto B4e7ae2;
case 0x4e7ae7:c.instructions+=1;goto B4e7ae7;
case 0x4e7ae9:goto L4e7ae9;
case 0x4e7aec:c.instructions+=5;goto B4e7aec;
case 0x4e7aee:c.instructions+=4;goto B4e7aee;
case 0x4e7af3:c.instructions+=3;goto B4e7af3;
case 0x4e7af8:c.instructions+=2;goto B4e7af8;
case 0x4e7af9:c.instructions+=1;goto B4e7af9;
case 0x4e7afe:goto L4e7afe;
case 0x4e7b01:c.instructions+=5;goto B4e7b01;
case 0x4e7b03:c.instructions+=4;goto B4e7b03;
case 0x4e7b08:c.instructions+=3;goto B4e7b08;
case 0x4e7b0d:c.instructions+=2;goto B4e7b0d;
case 0x4e7b0e:c.instructions+=1;goto B4e7b0e;
case 0x4e7b13:goto L4e7b13;
case 0x4e7b16:c.instructions+=6;goto B4e7b16;
case 0x4e7b17:c.instructions+=5;goto B4e7b17;
case 0x4e7b18:c.instructions+=4;goto B4e7b18;
case 0x4e7b19:c.instructions+=3;goto B4e7b19;
case 0x4e7b1b:c.instructions+=2;goto B4e7b1b;
case 0x4e7b1c:c.instructions+=1;goto B4e7b1c;
case 0x4e7b1f:goto L4e7b1f;
case 0x4e7b24:c.instructions+=1;goto B4e7b24;
case 0x4e7b2a:goto L4e7b2a;
case 0x4e7b2d:c.instructions+=5;goto B4e7b2d;
case 0x4e7b2f:c.instructions+=4;goto B4e7b2f;
case 0x4e7b34:c.instructions+=3;goto B4e7b34;
case 0x4e7b39:c.instructions+=2;goto B4e7b39;
case 0x4e7b3a:c.instructions+=1;goto B4e7b3a;
case 0x4e7b3f:goto L4e7b3f;
case 0x4e7b42:c.instructions+=5;goto B4e7b42;
case 0x4e7b44:c.instructions+=4;goto B4e7b44;
case 0x4e7b49:c.instructions+=3;goto B4e7b49;
case 0x4e7b4e:c.instructions+=2;goto B4e7b4e;
case 0x4e7b4f:c.instructions+=1;goto B4e7b4f;
case 0x4e7b54:goto L4e7b54;
case 0x4e7b57:c.instructions+=6;goto B4e7b57;
case 0x4e7b58:c.instructions+=5;goto B4e7b58;
case 0x4e7b59:c.instructions+=4;goto B4e7b59;
case 0x4e7b5a:c.instructions+=3;goto B4e7b5a;
case 0x4e7b5c:c.instructions+=2;goto B4e7b5c;
case 0x4e7b5d:c.instructions+=1;goto B4e7b5d;
case 0x4e7b60:goto L4e7b60;
case 0x4e7b63:c.instructions+=1;goto B4e7b63;
case 0x4e7b68:goto L4e7b68;
case 0x4e7b6e:c.instructions+=1;goto B4e7b6e;
case 0x4e7b73:goto L4e7b73;
case 0x4e7b79:c.instructions+=3;goto B4e7b79;
case 0x4e7b7c:c.instructions+=2;goto B4e7b7c;
case 0x4e7b7f:c.instructions+=1;goto B4e7b7f;
case 0x4e7b85:goto L4e7b85;
case 0x4e7b8c:c.instructions+=1;goto B4e7b8c;
case 0x4e7b93:goto L4e7b93;
case 0x4e7b95:c.instructions+=1;goto B4e7b95;
case 0x4e7b9a:goto L4e7b9a;
case 0x4e7b9b:c.instructions+=5;goto B4e7b9b;
case 0x4e7b9c:c.instructions+=4;goto B4e7b9c;
case 0x4e7b9d:c.instructions+=3;goto B4e7b9d;
case 0x4e7b9f:c.instructions+=2;goto B4e7b9f;
case 0x4e7ba0:c.instructions+=1;goto B4e7ba0;
case 0x4e7ba3:goto L4e7ba3;
case 0x4e7ba5:c.instructions+=1;goto B4e7ba5;
case 0x4e7baa:goto L4e7baa;
case 0x4e7bab:c.instructions+=5;goto B4e7bab;
case 0x4e7bac:c.instructions+=4;goto B4e7bac;
case 0x4e7bad:c.instructions+=3;goto B4e7bad;
case 0x4e7baf:c.instructions+=2;goto B4e7baf;
case 0x4e7bb0:c.instructions+=1;goto B4e7bb0;
case 0x4e7bb3:goto L4e7bb3;
case 0x4e7bb9:c.instructions+=3;goto B4e7bb9;
case 0x4e7bbb:c.instructions+=2;goto B4e7bbb;
case 0x4e7bbd:c.instructions+=1;goto B4e7bbd;
case 0x4e7bc3:goto L4e7bc3;
case 0x4e7bc6:c.instructions+=4;goto B4e7bc6;
case 0x4e7bcb:c.instructions+=3;goto B4e7bcb;
case 0x4e7bd0:c.instructions+=2;goto B4e7bd0;
case 0x4e7bd1:c.instructions+=1;goto B4e7bd1;
case 0x4e7bd6:goto L4e7bd6;
case 0x4e7bd9:c.instructions+=6;goto B4e7bd9;
case 0x4e7bda:c.instructions+=5;goto B4e7bda;
case 0x4e7bdb:c.instructions+=4;goto B4e7bdb;
case 0x4e7bdc:c.instructions+=3;goto B4e7bdc;
case 0x4e7bde:c.instructions+=2;goto B4e7bde;
case 0x4e7bdf:c.instructions+=1;goto B4e7bdf;
case 0x4e7be2:goto L4e7be2;
case 0x4e7be7:c.instructions+=1;goto B4e7be7;
case 0x4e7bed:goto L4e7bed;
case 0x4e7bf2:c.instructions+=1;goto B4e7bf2;
case 0x4e7bf8:goto L4e7bf8;
case 0x4e7bfd:goto L4e7bfd;
case 0x4e7c04:c.instructions+=1;goto B4e7c04;
case 0x4e7c06:goto L4e7c06;
case 0x4e7c0b:c.instructions+=1;goto B4e7c0b;
case 0x4e7c10:goto L4e7c10;
case 0x4e7c12:c.instructions+=1;goto B4e7c12;
case 0x4e7c17:goto L4e7c17;
case 0x4e7c19:c.instructions+=1;goto B4e7c19;
case 0x4e7c1b:goto L4e7c1b;
case 0x4e7c1c:c.instructions+=3;goto B4e7c1c;
case 0x4e7c23:c.instructions+=2;goto B4e7c23;
case 0x4e7c24:c.instructions+=1;goto B4e7c24;
case 0x4e7c29:goto L4e7c29;
case 0x4e7c2e:c.instructions+=3;goto B4e7c2e;
case 0x4e7c30:c.instructions+=2;goto B4e7c30;
case 0x4e7c35:c.instructions+=1;goto B4e7c35;
case 0x4e7c38:goto L4e7c38;
case 0x4e7c3a:goto L4e7c3a;
case 0x4e7c3f:c.instructions+=3;goto B4e7c3f;
case 0x4e7c41:c.instructions+=2;goto B4e7c41;
case 0x4e7c42:c.instructions+=1;goto B4e7c42;
case 0x4e7c47:goto L4e7c47;
case 0x4e7c49:c.instructions+=2;goto B4e7c49;
case 0x4e7c4b:c.instructions+=1;goto B4e7c4b;
case 0x4e7c50:goto L4e7c50;
case 0x4e7c52:c.instructions+=2;goto B4e7c52;
case 0x4e7c57:c.instructions+=1;goto B4e7c57;
case 0x4e7c5c:goto L4e7c5c;
case 0x4e7c5f:c.instructions+=1;goto B4e7c5f;
case 0x4e7c69:goto L4e7c69;
case 0x4e7c6b:c.instructions+=4;goto B4e7c6b;
case 0x4e7c70:c.instructions+=3;goto B4e7c70;
case 0x4e7c75:c.instructions+=2;goto B4e7c75;
case 0x4e7c7a:c.instructions+=1;goto B4e7c7a;
case 0x4e7c7f:goto L4e7c7f;
case 0x4e7c81:c.instructions+=4;goto B4e7c81;
case 0x4e7c86:c.instructions+=3;goto B4e7c86;
case 0x4e7c8b:c.instructions+=2;goto B4e7c8b;
case 0x4e7c90:c.instructions+=1;goto B4e7c90;
case 0x4e7c95:goto L4e7c95;
case 0x4e7c98:c.instructions+=7;goto B4e7c98;
case 0x4e7c9c:c.instructions+=6;goto B4e7c9c;
case 0x4e7c9d:c.instructions+=5;goto B4e7c9d;
case 0x4e7c9e:c.instructions+=4;goto B4e7c9e;
case 0x4e7c9f:c.instructions+=3;goto B4e7c9f;
case 0x4e7ca1:c.instructions+=2;goto B4e7ca1;
case 0x4e7ca2:c.instructions+=1;goto B4e7ca2;
case 0x4e7ca5:goto L4e7ca5;
case 0x4e7caa:c.instructions+=3;goto B4e7caa;
case 0x4e7cac:c.instructions+=2;goto B4e7cac;
case 0x4e7cb1:c.instructions+=1;goto B4e7cb1;
case 0x4e7cb5:goto L4e7cb5;
case 0x4e7cb7:goto L4e7cb7;
case 0x4e7cb9:c.instructions+=3;goto B4e7cb9;
case 0x4e7cbb:c.instructions+=2;goto B4e7cbb;
case 0x4e7cbc:c.instructions+=1;goto B4e7cbc;
case 0x4e7cc1:goto L4e7cc1;
case 0x4e7cc2:c.instructions+=5;goto B4e7cc2;
case 0x4e7cc6:c.instructions+=4;goto B4e7cc6;
case 0x4e7cc7:c.instructions+=3;goto B4e7cc7;
case 0x4e7ccb:c.instructions+=2;goto B4e7ccb;
case 0x4e7ccc:c.instructions+=1;goto B4e7ccc;
case 0x4e7cd1:goto L4e7cd1;
case 0x4e7cd3:c.instructions+=4;goto B4e7cd3;
case 0x4e7cd5:c.instructions+=3;goto B4e7cd5;
case 0x4e7cda:c.instructions+=2;goto B4e7cda;
case 0x4e7cde:c.instructions+=1;goto B4e7cde;
case 0x4e7ce3:goto L4e7ce3;
case 0x4e7ce5:goto L4e7ce5;
case 0x4e7ce8:c.instructions+=3;goto B4e7ce8;
case 0x4e7ced:c.instructions+=2;goto B4e7ced;
case 0x4e7cee:c.instructions+=1;goto B4e7cee;
case 0x4e7cf3:goto L4e7cf3;
case 0x4e7cf6:c.instructions+=2;goto B4e7cf6;
case 0x4e7cfb:c.instructions+=1;goto B4e7cfb;
case 0x4e7d00:goto L4e7d00;
case 0x4e7d01:c.instructions+=5;goto B4e7d01;
case 0x4e7d05:c.instructions+=4;goto B4e7d05;
case 0x4e7d06:c.instructions+=3;goto B4e7d06;
case 0x4e7d0a:c.instructions+=2;goto B4e7d0a;
case 0x4e7d0b:c.instructions+=1;goto B4e7d0b;
case 0x4e7d10:goto L4e7d10;
case 0x4e7d15:c.instructions+=5;goto B4e7d15;
case 0x4e7d19:c.instructions+=4;goto B4e7d19;
case 0x4e7d1a:c.instructions+=3;goto B4e7d1a;
case 0x4e7d1e:c.instructions+=2;goto B4e7d1e;
case 0x4e7d1f:c.instructions+=1;goto B4e7d1f;
case 0x4e7d24:goto L4e7d24;
case 0x4e7d27:c.instructions+=2;goto B4e7d27;
case 0x4e7d29:c.instructions+=1;goto B4e7d29;
case 0x4e7d2e:goto L4e7d2e;
case 0x4e7d2f:c.instructions+=5;goto B4e7d2f;
case 0x4e7d33:c.instructions+=4;goto B4e7d33;
case 0x4e7d34:c.instructions+=3;goto B4e7d34;
case 0x4e7d38:c.instructions+=2;goto B4e7d38;
case 0x4e7d39:c.instructions+=1;goto B4e7d39;
case 0x4e7d3e:goto L4e7d3e;
case 0x4e7d41:c.instructions+=4;goto B4e7d41;
case 0x4e7d45:c.instructions+=3;goto B4e7d45;
case 0x4e7d46:c.instructions+=2;goto B4e7d46;
case 0x4e7d48:c.instructions+=1;goto B4e7d48;
case 0x4e7d4d:goto L4e7d4d;
case 0x4e7d4f:c.instructions+=1;goto B4e7d4f;
case 0x4e7d54:goto L4e7d54;
case 0x4e7d55:c.instructions+=2;goto B4e7d55;
case 0x4e7d57:c.instructions+=1;goto B4e7d57;
case 0x4e7d5c:goto L4e7d5c;
case 0x4e7d60:goto L4e7d60;
case 0x4e7d61:c.instructions+=5;goto B4e7d61;
case 0x4e7d62:c.instructions+=4;goto B4e7d62;
case 0x4e7d63:c.instructions+=3;goto B4e7d63;
case 0x4e7d65:c.instructions+=2;goto B4e7d65;
case 0x4e7d66:c.instructions+=1;goto B4e7d66;
case 0x4e7d90:goto L4e7d90;
case 0x4e7d92:c.instructions+=11;goto B4e7d92;
case 0x4e7d97:c.instructions+=10;goto B4e7d97;
case 0x4e7d9d:c.instructions+=9;goto B4e7d9d;
case 0x4e7d9e:c.instructions+=8;goto B4e7d9e;
case 0x4e7da5:c.instructions+=7;goto B4e7da5;
case 0x4e7da6:c.instructions+=6;goto B4e7da6;
case 0x4e7daa:c.instructions+=5;goto B4e7daa;
case 0x4e7dab:c.instructions+=4;goto B4e7dab;
case 0x4e7dad:c.instructions+=3;goto B4e7dad;
case 0x4e7dae:c.instructions+=2;goto B4e7dae;
case 0x4e7db2:c.instructions+=1;goto B4e7db2;
case 0x4e7db7:goto L4e7db7;
case 0x4e7db9:c.instructions+=3;goto B4e7db9;
case 0x4e7dc1:c.instructions+=2;goto B4e7dc1;
case 0x4e7dc7:c.instructions+=1;goto B4e7dc7;
case 0x4e7dcc:goto L4e7dcc;
case 0x4e7dd0:c.instructions+=5;goto B4e7dd0;
case 0x4e7dd2:c.instructions+=4;goto B4e7dd2;
case 0x4e7dd3:c.instructions+=3;goto B4e7dd3;
case 0x4e7dda:c.instructions+=2;goto B4e7dda;
case 0x4e7ddd:c.instructions+=1;goto B4e7ddd;
case 0x4e7de0:goto L4e7de0;
case 0x4e7de1:c.instructions+=2;goto B4e7de1;
case 0x4e7de3:c.instructions+=1;goto B4e7de3;
case 0x4e7de8:goto L4e7de8;
case 0x4e7ded:c.instructions+=1;goto B4e7ded;
case 0x4e7def:goto L4e7def;
case 0x4e7df0:c.instructions+=1;goto B4e7df0;
case 0x4e7df5:goto L4e7df5;
case 0x4e7df8:goto L4e7df8;
case 0x4e7dfa:c.instructions+=2;goto B4e7dfa;
case 0x4e7dfb:c.instructions+=1;goto B4e7dfb;
case 0x4e7e00:goto L4e7e00;
case 0x4e7e06:c.instructions+=1;goto B4e7e06;
case 0x4e7e10:goto L4e7e10;
case 0x4e7e12:c.instructions+=13;goto B4e7e12;
case 0x4e7e17:c.instructions+=12;goto B4e7e17;
case 0x4e7e1d:c.instructions+=11;goto B4e7e1d;
case 0x4e7e1e:c.instructions+=10;goto B4e7e1e;
case 0x4e7e25:c.instructions+=9;goto B4e7e25;
case 0x4e7e26:c.instructions+=8;goto B4e7e26;
case 0x4e7e27:c.instructions+=7;goto B4e7e27;
case 0x4e7e28:c.instructions+=6;goto B4e7e28;
case 0x4e7e29:c.instructions+=5;goto B4e7e29;
case 0x4e7e2d:c.instructions+=4;goto B4e7e2d;
case 0x4e7e2f:c.instructions+=3;goto B4e7e2f;
case 0x4e7e30:c.instructions+=2;goto B4e7e30;
case 0x4e7e34:c.instructions+=1;goto B4e7e34;
case 0x4e7e39:goto L4e7e39;
case 0x4e7e3c:c.instructions+=16;goto B4e7e3c;
case 0x4e7e3e:c.instructions+=15;goto B4e7e3e;
case 0x4e7e40:c.instructions+=14;goto B4e7e40;
case 0x4e7e41:c.instructions+=13;goto B4e7e41;
case 0x4e7e42:c.instructions+=12;goto B4e7e42;
case 0x4e7e44:c.instructions+=11;goto B4e7e44;
case 0x4e7e49:c.instructions+=10;goto B4e7e49;
case 0x4e7e4e:c.instructions+=9;goto B4e7e4e;
case 0x4e7e4f:c.instructions+=8;goto B4e7e4f;
case 0x4e7e52:c.instructions+=7;goto B4e7e52;
case 0x4e7e56:c.instructions+=6;goto B4e7e56;
case 0x4e7e5c:c.instructions+=5;goto B4e7e5c;
case 0x4e7e5f:c.instructions+=4;goto B4e7e5f;
case 0x4e7e62:c.instructions+=3;goto B4e7e62;
case 0x4e7e65:c.instructions+=2;goto B4e7e65;
case 0x4e7e68:c.instructions+=1;goto B4e7e68;
case 0x4e7e6d:goto L4e7e6d;
case 0x4e7e70:c.instructions+=8;goto B4e7e70;
case 0x4e7e71:c.instructions+=7;goto B4e7e71;
case 0x4e7e72:c.instructions+=6;goto B4e7e72;
case 0x4e7e74:c.instructions+=5;goto B4e7e74;
case 0x4e7e79:c.instructions+=4;goto B4e7e79;
case 0x4e7e7a:c.instructions+=3;goto B4e7e7a;
case 0x4e7e80:c.instructions+=2;goto B4e7e80;
case 0x4e7e85:c.instructions+=1;goto B4e7e85;
case 0x4e7e8a:goto L4e7e8a;
case 0x4e7e90:c.instructions+=5;goto B4e7e90;
case 0x4e7e96:c.instructions+=4;goto B4e7e96;
case 0x4e7e9c:c.instructions+=3;goto B4e7e9c;
case 0x4e7e9f:c.instructions+=2;goto B4e7e9f;
case 0x4e7ea0:c.instructions+=1;goto B4e7ea0;
case 0x4e7ea5:goto L4e7ea5;
case 0x4e7ea8:c.instructions+=4;goto B4e7ea8;
case 0x4e7ead:c.instructions+=3;goto B4e7ead;
case 0x4e7eb2:c.instructions+=2;goto B4e7eb2;
case 0x4e7eb3:c.instructions+=1;goto B4e7eb3;
case 0x4e7eb8:goto L4e7eb8;
case 0x4e7ebb:c.instructions+=2;goto B4e7ebb;
case 0x4e7ebc:c.instructions+=1;goto B4e7ebc;
case 0x4e7ec1:goto L4e7ec1;
case 0x4e7ec2:c.instructions+=2;goto B4e7ec2;
case 0x4e7ec7:c.instructions+=1;goto B4e7ec7;
case 0x4e7ecc:goto L4e7ecc;
case 0x4e7ecf:c.instructions+=2;goto B4e7ecf;
case 0x4e7ed1:c.instructions+=1;goto B4e7ed1;
case 0x4e7ed6:goto L4e7ed6;
case 0x4e7ed8:c.instructions+=1;goto B4e7ed8;
case 0x4e7edd:goto L4e7edd;
case 0x4e7ee0:c.instructions+=3;goto B4e7ee0;
case 0x4e7ee5:c.instructions+=2;goto B4e7ee5;
case 0x4e7ee6:c.instructions+=1;goto B4e7ee6;
case 0x4e7eeb:goto L4e7eeb;
case 0x4e7ef1:c.instructions+=4;goto B4e7ef1;
case 0x4e7ef4:c.instructions+=3;goto B4e7ef4;
case 0x4e7ef9:c.instructions+=2;goto B4e7ef9;
case 0x4e7efa:c.instructions+=1;goto B4e7efa;
case 0x4e7eff:goto L4e7eff;
case 0x4e7f03:c.instructions+=11;goto B4e7f03;
case 0x4e7f06:c.instructions+=10;goto B4e7f06;
case 0x4e7f0c:c.instructions+=9;goto B4e7f0c;
case 0x4e7f0d:c.instructions+=8;goto B4e7f0d;
case 0x4e7f17:c.instructions+=7;goto B4e7f17;
case 0x4e7f1e:c.instructions+=6;goto B4e7f1e;
case 0x4e7f20:c.instructions+=5;goto B4e7f20;
case 0x4e7f21:c.instructions+=4;goto B4e7f21;
case 0x4e7f22:c.instructions+=3;goto B4e7f22;
case 0x4e7f29:c.instructions+=2;goto B4e7f29;
case 0x4e7f2c:c.instructions+=1;goto B4e7f2c;
case 0x4e7f30:goto L4e7f30;
case 0x4e7f31:c.instructions+=2;goto B4e7f31;
case 0x4e7f33:c.instructions+=1;goto B4e7f33;
case 0x4e7f38:goto L4e7f38;
case 0x4e7f3d:c.instructions+=1;goto B4e7f3d;
case 0x4e7f3f:goto L4e7f3f;
case 0x4e7f40:c.instructions+=1;goto B4e7f40;
case 0x4e7f45:goto L4e7f45;
case 0x4e7f48:goto L4e7f48;
case 0x4e7f4a:c.instructions+=2;goto B4e7f4a;
case 0x4e7f4b:c.instructions+=1;goto B4e7f4b;
case 0x4e7f50:goto L4e7f50;
case 0x4e7f51:c.instructions+=6;goto B4e7f51;
case 0x4e7f52:c.instructions+=5;goto B4e7f52;
case 0x4e7f53:c.instructions+=4;goto B4e7f53;
case 0x4e7f55:c.instructions+=3;goto B4e7f55;
case 0x4e7f58:c.instructions+=2;goto B4e7f58;
case 0x4e7f5d:c.instructions+=1;goto B4e7f5d;
case 0x4e7f62:goto L4e7f62;
case 0x4e7f63:c.instructions+=2;goto B4e7f63;
case 0x4e7f64:c.instructions+=1;goto B4e7f64;
case 0x4e7f69:goto L4e7f69;
case 0x4e7f6c:c.instructions+=3;goto B4e7f6c;
case 0x4e7f71:c.instructions+=2;goto B4e7f71;
case 0x4e7f74:c.instructions+=1;goto B4e7f74;
case 0x4e7f79:goto L4e7f79;
case 0x4e7f7a:c.instructions+=2;goto B4e7f7a;
case 0x4e7f7b:c.instructions+=1;goto B4e7f7b;
case 0x4e7f80:goto L4e7f80;
case 0x4e7f86:c.instructions+=3;goto B4e7f86;
case 0x4e7f8b:c.instructions+=2;goto B4e7f8b;
case 0x4e7f8e:c.instructions+=1;goto B4e7f8e;
case 0x4e7f93:goto L4e7f93;
case 0x4e7f96:c.instructions+=2;goto B4e7f96;
case 0x4e7f98:c.instructions+=1;goto B4e7f98;
case 0x4e7f9a:goto L4e7f9a;
case 0x4e7f9f:c.instructions+=1;goto B4e7f9f;
case 0x4e7fa4:goto L4e7fa4;
case 0x4e7fa7:c.instructions+=2;goto B4e7fa7;
case 0x4e7fa9:c.instructions+=1;goto B4e7fa9;
case 0x4e7fab:goto L4e7fab;
case 0x4e7fb0:c.instructions+=1;goto B4e7fb0;
case 0x4e7fb5:goto L4e7fb5;
case 0x4e7fb8:c.instructions+=2;goto B4e7fb8;
case 0x4e7fba:c.instructions+=1;goto B4e7fba;
case 0x4e7fbc:goto L4e7fbc;
case 0x4e7fc1:c.instructions+=1;goto B4e7fc1;
case 0x4e7fc6:goto L4e7fc6;
case 0x4e7fc9:c.instructions+=2;goto B4e7fc9;
case 0x4e7fcb:c.instructions+=1;goto B4e7fcb;
case 0x4e7fcd:goto L4e7fcd;
case 0x4e7fd0:c.instructions+=1;goto B4e7fd0;
case 0x4e7fd2:goto L4e7fd2;
case 0x4e7fd4:goto L4e7fd4;
case 0x4e7fd5:c.instructions+=2;goto B4e7fd5;
case 0x4e7fda:c.instructions+=1;goto B4e7fda;
case 0x4e7fdf:goto L4e7fdf;
case 0x4e7fe1:c.instructions+=2;goto B4e7fe1;
case 0x4e7feb:c.instructions+=1;goto B4e7feb;
case 0x4e7fed:goto L4e7fed;
case 0x4e7fef:c.instructions+=3;goto B4e7fef;
case 0x4e7ff4:c.instructions+=2;goto B4e7ff4;
case 0x4e7ff6:c.instructions+=1;goto B4e7ff6;
case 0x4e7ffb:goto L4e7ffb;
case 0x4e7ffc:c.instructions+=3;goto B4e7ffc;
case 0x4e7ffe:c.instructions+=2;goto B4e7ffe;
case 0x4e7fff:c.instructions+=1;goto B4e7fff;
default:missing_instruction(c.pc);}
B4e7001:L4e7001:{c.instructions+=2;NFSU2_TR(0x4e7001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7002:{NFSU2_TR(0x4e7002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7005:L4e7005:{c.instructions+=2;NFSU2_TR(0x4e7005);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7007:{NFSU2_TR(0x4e7007);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e700c:L4e700c:{c.instructions+=4;NFSU2_TR(0x4e700c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e700f:{NFSU2_TR(0x4e700f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7014:{NFSU2_TR(0x4e7014);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7015:{NFSU2_TR(0x4e7015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e701aull));
TAIL_STATIC(0x537c00u,537);
}
B4e701a:L4e701a:{c.instructions+=7;NFSU2_TR(0x4e701a);
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
B4e701d:{NFSU2_TR(0x4e701d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e701e:{NFSU2_TR(0x4e701e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e701f:{NFSU2_TR(0x4e701f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7020:{NFSU2_TR(0x4e7020);
__builtin_memmove((R+16),(R+20),4);
}
B4e7022:{NFSU2_TR(0x4e7022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7023:{NFSU2_TR(0x4e7023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7026:L4e7026:{c.instructions+=2;NFSU2_TR(0x4e7026);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e702c:{NFSU2_TR(0x4e702c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e71a4;}}
}
B4e7032:L4e7032:{c.instructions+=1;NFSU2_TR(0x4e7032);
if(r1(R+518)){{goto L4e717f;}}
}
B4e7038:L4e7038:{c.instructions+=2;NFSU2_TR(0x4e7038);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e703e:{NFSU2_TR(0x4e703e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e7100;}}
}
B4e7044:L4e7044:{c.instructions+=1;NFSU2_TR(0x4e7044);
if(r1(R+518)){{goto L4e70e9;}}
}
B4e704a:L4e704a:{c.instructions+=2;NFSU2_TR(0x4e704a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e7050:{NFSU2_TR(0x4e7050);
if(r1(R+518)){{goto L4e716f;}}
}
B4e7056:L4e7056:{c.instructions+=2;NFSU2_TR(0x4e7056);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cad26e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e705c:{NFSU2_TR(0x4e705c);
if(r1(R+518)){{goto L4e708b;}}
}
B4e705e:L4e705e:{c.instructions+=2;NFSU2_TR(0x4e705e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7064:{NFSU2_TR(0x4e7064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e73f6;}}
}
B4e706a:L4e706a:{c.instructions+=6;NFSU2_TR(0x4e706a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e706d:{NFSU2_TR(0x4e706d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e706f:{NFSU2_TR(0x4e706f);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7074:{NFSU2_TR(0x4e7074);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7079:{NFSU2_TR(0x4e7079);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e707a:{NFSU2_TR(0x4e707a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e707full));
TAIL_STATIC(0x537c00u,537);
}
B4e707f:L4e707f:{c.instructions+=7;NFSU2_TR(0x4e707f);
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
B4e7082:{NFSU2_TR(0x4e7082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7083:{NFSU2_TR(0x4e7083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7084:{NFSU2_TR(0x4e7084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7085:{NFSU2_TR(0x4e7085);
__builtin_memmove((R+16),(R+20),4);
}
B4e7087:{NFSU2_TR(0x4e7087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7088:{NFSU2_TR(0x4e7088);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e708b:L4e708b:{c.instructions+=3;NFSU2_TR(0x4e708b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e7091:{NFSU2_TR(0x4e7091);
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
B4e7093:{NFSU2_TR(0x4e7093);
if(r1(R+518)){{goto L4e73f6;}}
}
B4e7099:L4e7099:{c.instructions+=3;NFSU2_TR(0x4e7099);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x111ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e709f:{NFSU2_TR(0x4e709f);
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
B4e70a1:{NFSU2_TR(0x4e70a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e73f6;}}
}
B4e70a7:L4e70a7:{c.instructions+=3;NFSU2_TR(0x4e70a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x112ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e70ad:{NFSU2_TR(0x4e70ad);
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
B4e70af:{NFSU2_TR(0x4e70af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e73f6;}}
}
B4e70b5:L4e70b5:{c.instructions+=3;NFSU2_TR(0x4e70b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e70b8:{NFSU2_TR(0x4e70b8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e70ba:{NFSU2_TR(0x4e70ba);
if(r1(R+518)){{goto L4e70c8;}}
}
B4e70bc:L4e70bc:{c.instructions+=2;NFSU2_TR(0x4e70bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e70bd:{NFSU2_TR(0x4e70bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e70c2ull));
TAIL_STATIC(0x540a60u,540);
}
B4e70c2:L4e70c2:{c.instructions+=2;NFSU2_TR(0x4e70c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e70c5:{NFSU2_TR(0x4e70c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e70c8:L4e70c8:{c.instructions+=3;NFSU2_TR(0x4e70c8);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e70cd:{NFSU2_TR(0x4e70cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e70d4:{NFSU2_TR(0x4e70d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e70d9ull));
TAIL_STATIC(0x582b60u,582);
}
B4e70d9:L4e70d9:{c.instructions+=2;NFSU2_TR(0x4e70d9);
__builtin_memmove((R+4),(R+0),4);
}
B4e70db:{NFSU2_TR(0x4e70db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e70e0ull));
TAIL_STATIC(0x5830b0u,583);
}
B4e70e0:L4e70e0:{c.instructions+=6;NFSU2_TR(0x4e70e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e70e1:{NFSU2_TR(0x4e70e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e70e2:{NFSU2_TR(0x4e70e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e70e3:{NFSU2_TR(0x4e70e3);
__builtin_memmove((R+16),(R+20),4);
}
B4e70e5:{NFSU2_TR(0x4e70e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e70e6:{NFSU2_TR(0x4e70e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e70e9:L4e70e9:{c.instructions+=2;NFSU2_TR(0x4e70e9);
__builtin_memmove((R+4),(R+12),4);
}
B4e70eb:{NFSU2_TR(0x4e70eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e70f0ull));
TAIL_STATIC(0x4d5490u,4d5);
}
B4e70f0:L4e70f0:{c.instructions+=2;NFSU2_TR(0x4e70f0);
__builtin_memmove((R+4),(R+12),4);
}
B4e70f2:{NFSU2_TR(0x4e70f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e70f7ull));
TAIL_STATIC(0x542720u,542);
}
B4e70f7:L4e70f7:{c.instructions+=6;NFSU2_TR(0x4e70f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e70f8:{NFSU2_TR(0x4e70f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e70f9:{NFSU2_TR(0x4e70f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e70fa:{NFSU2_TR(0x4e70fa);
__builtin_memmove((R+16),(R+20),4);
}
B4e70fc:{NFSU2_TR(0x4e70fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e70fd:{NFSU2_TR(0x4e70fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7100:L4e7100:{c.instructions+=2;NFSU2_TR(0x4e7100);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e7106:{NFSU2_TR(0x4e7106);
if(r1(R+518)){{goto L4e716f;}}
}
B4e7108:L4e7108:{c.instructions+=2;NFSU2_TR(0x4e7108);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4fbee42aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e710e:{NFSU2_TR(0x4e710e);
if(r1(R+518)){{goto L4e712e;}}
}
B4e7110:L4e7110:{c.instructions+=2;NFSU2_TR(0x4e7110);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x72619778ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7116:{NFSU2_TR(0x4e7116);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e73f6;}}
}
B4e711c:L4e711c:{c.instructions+=3;NFSU2_TR(0x4e711c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e711e:{NFSU2_TR(0x4e711e);
__builtin_memmove((R+4),(R+12),4);
}
B4e7120:{NFSU2_TR(0x4e7120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7125ull));
TAIL_STATIC(0x4a17b0u,4a1);
}
B4e7125:L4e7125:{c.instructions+=6;NFSU2_TR(0x4e7125);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7126:{NFSU2_TR(0x4e7126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7127:{NFSU2_TR(0x4e7127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7128:{NFSU2_TR(0x4e7128);
__builtin_memmove((R+16),(R+20),4);
}
B4e712a:{NFSU2_TR(0x4e712a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e712b:{NFSU2_TR(0x4e712b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e712e:L4e712e:{c.instructions+=1;NFSU2_TR(0x4e712e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e7130:L4e7130:{c.instructions+=2;NFSU2_TR(0x4e7130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7131:{NFSU2_TR(0x4e7131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7136ull));
TAIL_STATIC(0x58f6d0u,58f);
}
B4e7136:L4e7136:{c.instructions+=2;NFSU2_TR(0x4e7136);
__builtin_memmove((R+4),(R+0),4);
}
B4e7138:{NFSU2_TR(0x4e7138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e713dull));
TAIL_STATIC(0x5847f0u,584);
}
B4e713d:L4e713d:{c.instructions+=2;NFSU2_TR(0x4e713d);
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
B4e713f:{NFSU2_TR(0x4e713f);
if(r1(R+518)){{goto L4e7158;}}
}
B4e7141:L4e7141:{c.instructions+=4;NFSU2_TR(0x4e7141);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B4e7144:{NFSU2_TR(0x4e7144);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7149:{NFSU2_TR(0x4e7149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e714a:{NFSU2_TR(0x4e714a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e714full));
TAIL_STATIC(0x43dc30u,43d);
}
B4e714f:L4e714f:{c.instructions+=4;NFSU2_TR(0x4e714f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e7152:{NFSU2_TR(0x4e7152);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4e7153:{NFSU2_TR(0x4e7153);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4e7156:{NFSU2_TR(0x4e7156);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7130u);}goto L4e7130;}}
}
B4e7158:L4e7158:{c.instructions+=8;NFSU2_TR(0x4e7158);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e715f:{NFSU2_TR(0x4e715f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7166:{NFSU2_TR(0x4e7166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7167:{NFSU2_TR(0x4e7167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7168:{NFSU2_TR(0x4e7168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7169:{NFSU2_TR(0x4e7169);
__builtin_memmove((R+16),(R+20),4);
}
B4e716b:{NFSU2_TR(0x4e716b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e716c:{NFSU2_TR(0x4e716c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e716f:L4e716f:{c.instructions+=2;NFSU2_TR(0x4e716f);
__builtin_memmove((R+4),(R+12),4);
}
B4e7171:{NFSU2_TR(0x4e7171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7176ull));
TAIL_STATIC(0x4d5190u,4d5);
}
B4e7176:L4e7176:{c.instructions+=6;NFSU2_TR(0x4e7176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7177:{NFSU2_TR(0x4e7177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7178:{NFSU2_TR(0x4e7178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7179:{NFSU2_TR(0x4e7179);
__builtin_memmove((R+16),(R+20),4);
}
B4e717b:{NFSU2_TR(0x4e717b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e717c:{NFSU2_TR(0x4e717c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e717f:L4e717f:{c.instructions+=7;NFSU2_TR(0x4e717f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7182:{NFSU2_TR(0x4e7182);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7184:{NFSU2_TR(0x4e7184);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7189:{NFSU2_TR(0x4e7189);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e718e:{NFSU2_TR(0x4e718e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e718f:{NFSU2_TR(0x4e718f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7193:{NFSU2_TR(0x4e7193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7198ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7198:L4e7198:{c.instructions+=7;NFSU2_TR(0x4e7198);
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
B4e719b:{NFSU2_TR(0x4e719b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e719c:{NFSU2_TR(0x4e719c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e719d:{NFSU2_TR(0x4e719d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e719e:{NFSU2_TR(0x4e719e);
__builtin_memmove((R+16),(R+20),4);
}
B4e71a0:{NFSU2_TR(0x4e71a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e71a1:{NFSU2_TR(0x4e71a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e71a4:L4e71a4:{c.instructions+=2;NFSU2_TR(0x4e71a4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xc98356baull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e71aa:{NFSU2_TR(0x4e71aa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e73a0;}}
}
B4e71b0:L4e71b0:{c.instructions+=1;NFSU2_TR(0x4e71b0);
if(r1(R+518)){{goto L4e7282;}}
}
B4e71b6:L4e71b6:{c.instructions+=2;NFSU2_TR(0x4e71b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e71bc:{NFSU2_TR(0x4e71bc);
if(r1(R+518)){{goto L4e7251;}}
}
B4e71c2:L4e71c2:{c.instructions+=2;NFSU2_TR(0x4e71c2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x97c1b72full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e71c8:{NFSU2_TR(0x4e71c8);
if(r1(R+518)){{goto L4e720f;}}
}
B4e71ca:L4e71ca:{c.instructions+=2;NFSU2_TR(0x4e71ca);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9803f6e2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e71d0:{NFSU2_TR(0x4e71d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e73f6;}}
}
B4e71d6:L4e71d6:{c.instructions+=2;NFSU2_TR(0x4e71d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e71d9:{NFSU2_TR(0x4e71d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e71deull));
TAIL_STATIC(0x54eb80u,54e);
}
B4e71de:L4e71de:{c.instructions+=3;NFSU2_TR(0x4e71de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e71e4:{NFSU2_TR(0x4e71e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e71e5:{NFSU2_TR(0x4e71e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e71eaull));
TAIL_STATIC(0x52d100u,52d);
}
B4e71ea:L4e71ea:{c.instructions+=3;NFSU2_TR(0x4e71ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e71ed:{NFSU2_TR(0x4e71ed);
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
B4e71ef:{NFSU2_TR(0x4e71ef);
if(r1(R+518)){{goto L4e73f6;}}
}
B4e71f5:L4e71f5:{c.instructions+=4;NFSU2_TR(0x4e71f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e71f8:{NFSU2_TR(0x4e71f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e71f9:{NFSU2_TR(0x4e71f9);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e71fe:{NFSU2_TR(0x4e71fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7203ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4e7203:L4e7203:{c.instructions+=7;NFSU2_TR(0x4e7203);
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
B4e7206:{NFSU2_TR(0x4e7206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7207:{NFSU2_TR(0x4e7207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7208:{NFSU2_TR(0x4e7208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7209:{NFSU2_TR(0x4e7209);
__builtin_memmove((R+16),(R+20),4);
}
B4e720b:{NFSU2_TR(0x4e720b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e720c:{NFSU2_TR(0x4e720c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e720f:L4e720f:{c.instructions+=2;NFSU2_TR(0x4e720f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x112ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7216:{NFSU2_TR(0x4e7216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e721bull));
TAIL_STATIC(0x582b60u,582);
}
B4e721b:L4e721b:{c.instructions+=7;NFSU2_TR(0x4e721b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7221:{NFSU2_TR(0x4e7221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7222:{NFSU2_TR(0x4e7222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7223:{NFSU2_TR(0x4e7223);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7225:{NFSU2_TR(0x4e7225);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e722a:{NFSU2_TR(0x4e722a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e722b:{NFSU2_TR(0x4e722b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7230ull));
TAIL_STATIC(0x73fb50u,73f);
}
B4e7230:L4e7230:{c.instructions+=6;NFSU2_TR(0x4e7230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7233:{NFSU2_TR(0x4e7233);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7235:{NFSU2_TR(0x4e7235);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e723a:{NFSU2_TR(0x4e723a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e723f:{NFSU2_TR(0x4e723f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7240:{NFSU2_TR(0x4e7240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7245ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7245:L4e7245:{c.instructions+=7;NFSU2_TR(0x4e7245);
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
B4e7248:{NFSU2_TR(0x4e7248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7249:{NFSU2_TR(0x4e7249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e724a:{NFSU2_TR(0x4e724a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e724b:{NFSU2_TR(0x4e724b);
__builtin_memmove((R+16),(R+20),4);
}
B4e724d:{NFSU2_TR(0x4e724d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e724e:{NFSU2_TR(0x4e724e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7251:L4e7251:{c.instructions+=3;NFSU2_TR(0x4e7251);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x54ull))));
}
B4e7254:{NFSU2_TR(0x4e7254);
__builtin_memmove((R+4),(R+12),4);
}
B4e7256:{NFSU2_TR(0x4e7256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e725bull));
TAIL_STATIC(0x54eb40u,54e);
}
B4e725b:L4e725b:{c.instructions+=3;NFSU2_TR(0x4e725b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e725e:{NFSU2_TR(0x4e725e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e7260:{NFSU2_TR(0x4e7260);
if(r1(R+518)){{goto L4e7270;}}
}
B4e7262:L4e7262:{c.instructions+=4;NFSU2_TR(0x4e7262);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e7265:{NFSU2_TR(0x4e7265);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e726a:{NFSU2_TR(0x4e726a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e726b:{NFSU2_TR(0x4e726b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7270ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4e7270:L4e7270:{c.instructions+=3;NFSU2_TR(0x4e7270);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7272:{NFSU2_TR(0x4e7272);
__builtin_memmove((R+4),(R+12),4);
}
B4e7274:{NFSU2_TR(0x4e7274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7279ull));
TAIL_STATIC(0x538500u,538);
}
B4e7279:L4e7279:{c.instructions+=6;NFSU2_TR(0x4e7279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e727a:{NFSU2_TR(0x4e727a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e727b:{NFSU2_TR(0x4e727b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e727c:{NFSU2_TR(0x4e727c);
__builtin_memmove((R+16),(R+20),4);
}
B4e727e:{NFSU2_TR(0x4e727e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e727f:{NFSU2_TR(0x4e727f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7282:L4e7282:{c.instructions+=1;NFSU2_TR(0x4e7282);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7287ull));
TAIL_STATIC(0x582b60u,582);
}
B4e7287:L4e7287:{c.instructions+=2;NFSU2_TR(0x4e7287);
__builtin_memmove((R+4),(R+0),4);
}
B4e7289:{NFSU2_TR(0x4e7289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e728eull));
TAIL_STATIC(0x584f10u,584);
}
B4e728e:L4e728e:{c.instructions+=2;NFSU2_TR(0x4e728e);
u8 U[8];
__builtin_memmove((U+0),gp(0x83637c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e7294:{NFSU2_TR(0x4e7294);
if(r1(R+518)){{goto L4e7316;}}
}
B4e729a:L4e729a:{c.instructions+=2;NFSU2_TR(0x4e729a);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e729f:{NFSU2_TR(0x4e729f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72a4ull));
TAIL_STATIC(0x582b60u,582);
}
B4e72a4:L4e72a4:{c.instructions+=2;NFSU2_TR(0x4e72a4);
__builtin_memmove((R+4),(R+0),4);
}
B4e72a6:{NFSU2_TR(0x4e72a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72abull));
TAIL_STATIC(0x582bb0u,582);
}
B4e72ab:L4e72ab:{c.instructions+=2;NFSU2_TR(0x4e72ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e72ad:{NFSU2_TR(0x4e72ad);
if(r1(R+518)){{goto L4e72ba;}}
}
B4e72af:L4e72af:{c.instructions+=4;NFSU2_TR(0x4e72af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72b0:{NFSU2_TR(0x4e72b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e72b7:{NFSU2_TR(0x4e72b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72b8:{NFSU2_TR(0x4e72b8);
{goto L4e72f9;}
}
B4e72ba:L4e72ba:{c.instructions+=3;NFSU2_TR(0x4e72ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e72c0:{NFSU2_TR(0x4e72c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e72c2:{NFSU2_TR(0x4e72c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e730f;}}
}
B4e72c4:L4e72c4:{c.instructions+=1;NFSU2_TR(0x4e72c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72c9ull));
TAIL_STATIC(0x582b60u,582);
}
B4e72c9:L4e72c9:{c.instructions+=5;NFSU2_TR(0x4e72c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e72cf:{NFSU2_TR(0x4e72cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72d1:{NFSU2_TR(0x4e72d1);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72d6:{NFSU2_TR(0x4e72d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72d7:{NFSU2_TR(0x4e72d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72dcull));
TAIL_STATIC(0x740790u,740);
}
B4e72dc:L4e72dc:{c.instructions+=3;NFSU2_TR(0x4e72dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e72df:{NFSU2_TR(0x4e72df);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72e4:{NFSU2_TR(0x4e72e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72e9ull));
TAIL_STATIC(0x582b60u,582);
}
B4e72e9:L4e72e9:{c.instructions+=2;NFSU2_TR(0x4e72e9);
__builtin_memmove((R+4),(R+0),4);
}
B4e72eb:{NFSU2_TR(0x4e72eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72f0ull));
TAIL_STATIC(0x582bb0u,582);
}
B4e72f0:L4e72f0:{c.instructions+=3;NFSU2_TR(0x4e72f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72f1:{NFSU2_TR(0x4e72f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x490ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e72f8:{NFSU2_TR(0x4e72f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e72f9:L4e72f9:{c.instructions+=1;NFSU2_TR(0x4e72f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e72feull));
TAIL_STATIC(0x49e870u,49e);
}
B4e72fe:L4e72fe:{c.instructions+=4;NFSU2_TR(0x4e72fe);
__builtin_memmove((R+24),(R+0),4);
}
B4e7300:{NFSU2_TR(0x4e7300);
w4(R+28,u32(0x835fb8ull));
}
B4e7305:{NFSU2_TR(0x4e7305);
w4(R+4,u32(0x9full));
}
B4e730a:{NFSU2_TR(0x4e730a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e730d:L4e730d:{c.instructions+=1;NFSU2_TR(0x4e730d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4e730f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e730du);}goto L4e730d;}
}
B4e730f:L4e730f:{c.instructions+=2;NFSU2_TR(0x4e730f);
__builtin_memmove((R+4),(R+12),4);
}
B4e7311:{NFSU2_TR(0x4e7311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7316ull));
TAIL_STATIC(0x4d5490u,4d5);
}
B4e7316:L4e7316:{c.instructions+=3;NFSU2_TR(0x4e7316);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e731c:{NFSU2_TR(0x4e731c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e731e:{NFSU2_TR(0x4e731e);
if(r1(R+518)){{goto L4e7377;}}
}
B4e7320:L4e7320:{c.instructions+=3;NFSU2_TR(0x4e7320);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7323:{NFSU2_TR(0x4e7323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7324:{NFSU2_TR(0x4e7324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7329ull));
TAIL_STATIC(0x5379a0u,537);
}
B4e7329:L4e7329:{c.instructions+=4;NFSU2_TR(0x4e7329);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e732e:{NFSU2_TR(0x4e732e);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7333:{NFSU2_TR(0x4e7333);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e733a:{NFSU2_TR(0x4e733a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e733full));
TAIL_STATIC(0x537950u,537);
}
B4e733f:L4e733f:{c.instructions+=4;NFSU2_TR(0x4e733f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e7345:{NFSU2_TR(0x4e7345);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e7348:{NFSU2_TR(0x4e7348);
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
B4e734a:{NFSU2_TR(0x4e734a);
if(r1(R+518)){{goto L4e73f6;}}
}
B4e7350:L4e7350:{c.instructions+=3;NFSU2_TR(0x4e7350);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7355:{NFSU2_TR(0x4e7355);
u8 U[4];
w4(U+0,u32(0x4fbee42aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e735a:{NFSU2_TR(0x4e735a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e735full));
TAIL_STATIC(0x55dda0u,55d);
}
B4e735f:L4e735f:{c.instructions+=3;NFSU2_TR(0x4e735f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7361:{NFSU2_TR(0x4e7361);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7366:{NFSU2_TR(0x4e7366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e736bull));
TAIL_STATIC(0x537950u,537);
}
B4e736b:L4e736b:{c.instructions+=7;NFSU2_TR(0x4e736b);
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
B4e736e:{NFSU2_TR(0x4e736e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e736f:{NFSU2_TR(0x4e736f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7370:{NFSU2_TR(0x4e7370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7371:{NFSU2_TR(0x4e7371);
__builtin_memmove((R+16),(R+20),4);
}
B4e7373:{NFSU2_TR(0x4e7373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7374:{NFSU2_TR(0x4e7374);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7377:L4e7377:{c.instructions+=2;NFSU2_TR(0x4e7377);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e737c:{NFSU2_TR(0x4e737c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7381ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e7381:L4e7381:{c.instructions+=3;NFSU2_TR(0x4e7381);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7384:{NFSU2_TR(0x4e7384);
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
B4e7386:{NFSU2_TR(0x4e7386);
if(r1(R+518)){{goto L4e73f6;}}
}
B4e7388:L4e7388:{c.instructions+=3;NFSU2_TR(0x4e7388);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e738a:{NFSU2_TR(0x4e738a);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e738f:{NFSU2_TR(0x4e738f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7394ull));
TAIL_STATIC(0x51ce80u,51c);
}
B4e7394:L4e7394:{c.instructions+=7;NFSU2_TR(0x4e7394);
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
B4e7397:{NFSU2_TR(0x4e7397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7398:{NFSU2_TR(0x4e7398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7399:{NFSU2_TR(0x4e7399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e739a:{NFSU2_TR(0x4e739a);
__builtin_memmove((R+16),(R+20),4);
}
B4e739c:{NFSU2_TR(0x4e739c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e739d:{NFSU2_TR(0x4e739d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e73a0:L4e73a0:{c.instructions+=2;NFSU2_TR(0x4e73a0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xca4cb0ddull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e73a6:{NFSU2_TR(0x4e73a6);
if(r1(R+518)){{goto L4e73ed;}}
}
B4e73a8:L4e73a8:{c.instructions+=2;NFSU2_TR(0x4e73a8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e73ae:{NFSU2_TR(0x4e73ae);
if(r1(R+518)){{goto L4e73e1;}}
}
B4e73b0:L4e73b0:{c.instructions+=2;NFSU2_TR(0x4e73b0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e73b6:{NFSU2_TR(0x4e73b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e73f6;}}
}
B4e73b8:L4e73b8:{c.instructions+=5;NFSU2_TR(0x4e73b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73ba:{NFSU2_TR(0x4e73ba);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73bf:{NFSU2_TR(0x4e73bf);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73c4:{NFSU2_TR(0x4e73c4);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73c9:{NFSU2_TR(0x4e73c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e73ceull));
TAIL_STATIC(0x537c00u,537);
}
B4e73ce:L4e73ce:{c.instructions+=8;NFSU2_TR(0x4e73ce);
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
B4e73d1:{NFSU2_TR(0x4e73d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e73d8:{NFSU2_TR(0x4e73d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e73d9:{NFSU2_TR(0x4e73d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e73da:{NFSU2_TR(0x4e73da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e73db:{NFSU2_TR(0x4e73db);
__builtin_memmove((R+16),(R+20),4);
}
B4e73dd:{NFSU2_TR(0x4e73dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e73de:{NFSU2_TR(0x4e73de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e73e1:L4e73e1:{c.instructions+=3;NFSU2_TR(0x4e73e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73e3:{NFSU2_TR(0x4e73e3);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73e8:{NFSU2_TR(0x4e73e8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e700cu);}goto L4e700c;}
}
B4e73ed:L4e73ed:{c.instructions+=3;NFSU2_TR(0x4e73ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e73ef:{NFSU2_TR(0x4e73ef);
__builtin_memmove((R+4),(R+12),4);
}
B4e73f1:{NFSU2_TR(0x4e73f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e73f6ull));
TAIL_STATIC(0x4a1750u,4a1);
}
B4e73f6:L4e73f6:{c.instructions+=6;NFSU2_TR(0x4e73f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e73f7:{NFSU2_TR(0x4e73f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e73f8:{NFSU2_TR(0x4e73f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e73f9:{NFSU2_TR(0x4e73f9);
__builtin_memmove((R+16),(R+20),4);
}
B4e73fb:{NFSU2_TR(0x4e73fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e73fc:{NFSU2_TR(0x4e73fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7430:L4e7430:{c.instructions+=8;NFSU2_TR(0x4e7430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4e7433:{NFSU2_TR(0x4e7433);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7434:{NFSU2_TR(0x4e7434);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7435:{NFSU2_TR(0x4e7435);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7436:{NFSU2_TR(0x4e7436);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7437:{NFSU2_TR(0x4e7437);
__builtin_memmove((R+12),(R+4),4);
}
B4e7439:{NFSU2_TR(0x4e7439);
w4(R+20,u32(0x1ull));
}
B4e743e:{NFSU2_TR(0x4e743e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e7446:L4e7446:{c.instructions+=2;NFSU2_TR(0x4e7446);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7448:{NFSU2_TR(0x4e7448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e744dull));
TAIL_STATIC(0x575620u,575);
}
B4e744d:L4e744d:{c.instructions+=4;NFSU2_TR(0x4e744d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e744f:{NFSU2_TR(0x4e744f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7452:{NFSU2_TR(0x4e7452);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e7454:{NFSU2_TR(0x4e7454);
if(r1(R+518)){{goto L4e7487;}}
}
B4e7456:L4e7456:{c.instructions+=13;NFSU2_TR(0x4e7456);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7459:{NFSU2_TR(0x4e7459);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e745f:{NFSU2_TR(0x4e745f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e7461:{NFSU2_TR(0x4e7461);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7464:{NFSU2_TR(0x4e7464);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7467:{NFSU2_TR(0x4e7467);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e746a:{NFSU2_TR(0x4e746a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e746d:{NFSU2_TR(0x4e746d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7470:{NFSU2_TR(0x4e7470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7473:{NFSU2_TR(0x4e7473);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7477:{NFSU2_TR(0x4e7477);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e747e:{NFSU2_TR(0x4e747e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e7485:{NFSU2_TR(0x4e7485);
__builtin_memmove((R+24),(R+0),4);
}
B4e7487:L4e7487:{c.instructions+=6;NFSU2_TR(0x4e7487);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7488:{NFSU2_TR(0x4e7488);
u8 U[4];
w4(U+0,u32(0x796328ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e748d:{NFSU2_TR(0x4e748d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e7491:{NFSU2_TR(0x4e7491);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7493:{NFSU2_TR(0x4e7493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7494:{NFSU2_TR(0x4e7494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7499ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e7499:L4e7499:{c.instructions+=4;NFSU2_TR(0x4e7499);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e749c:{NFSU2_TR(0x4e749c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e74a0:{NFSU2_TR(0x4e74a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74a1:{NFSU2_TR(0x4e74a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e74a6ull));
TAIL_STATIC(0x505450u,505);
}
B4e74a6:L4e74a6:{c.instructions+=3;NFSU2_TR(0x4e74a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74a7:{NFSU2_TR(0x4e74a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74a8:{NFSU2_TR(0x4e74a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e74adull));
TAIL_STATIC(0x537a10u,537);
}
B4e74ad:L4e74ad:{c.instructions+=3;NFSU2_TR(0x4e74ad);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74af:{NFSU2_TR(0x4e74af);
__builtin_memmove((R+28),(R+0),4);
}
B4e74b1:{NFSU2_TR(0x4e74b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e74b6ull));
TAIL_STATIC(0x575620u,575);
}
B4e74b6:L4e74b6:{c.instructions+=3;NFSU2_TR(0x4e74b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4e74b9:{NFSU2_TR(0x4e74b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e74bb:{NFSU2_TR(0x4e74bb);
if(r1(R+518)){{goto L4e74cb;}}
}
B4e74bd:L4e74bd:{c.instructions+=4;NFSU2_TR(0x4e74bd);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e74c3:{NFSU2_TR(0x4e74c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e74c6:{NFSU2_TR(0x4e74c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4e74c9:{NFSU2_TR(0x4e74c9);
{goto L4e74cd;}
}
B4e74cb:L4e74cb:{c.instructions+=1;NFSU2_TR(0x4e74cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e74cd:L4e74cd:{c.instructions+=9;NFSU2_TR(0x4e74cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e74d0:{NFSU2_TR(0x4e74d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e74d3:{NFSU2_TR(0x4e74d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e74d5:{NFSU2_TR(0x4e74d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e74d8:{NFSU2_TR(0x4e74d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e74da:{NFSU2_TR(0x4e74da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74db:{NFSU2_TR(0x4e74db);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e74de:{NFSU2_TR(0x4e74de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e74e1:{NFSU2_TR(0x4e74e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e74e6ull));
TAIL_STATIC(0x52e770u,52e);
}
B4e74e6:L4e74e6:{c.instructions+=6;NFSU2_TR(0x4e74e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74e7:{NFSU2_TR(0x4e74e7);
u8 U[4];
w4(U+0,u32(0x796288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74ec:{NFSU2_TR(0x4e74ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e74f0:{NFSU2_TR(0x4e74f0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74f2:{NFSU2_TR(0x4e74f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e74f3:{NFSU2_TR(0x4e74f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e74f8ull));
TAIL_STATIC(0x50c960u,50c);
}
B4e74f8:L4e74f8:{c.instructions+=4;NFSU2_TR(0x4e74f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e74fb:{NFSU2_TR(0x4e74fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e74ff:{NFSU2_TR(0x4e74ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7500:{NFSU2_TR(0x4e7500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7505ull));
TAIL_STATIC(0x505450u,505);
}
B4e7505:L4e7505:{c.instructions+=3;NFSU2_TR(0x4e7505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7506:{NFSU2_TR(0x4e7506);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7507:{NFSU2_TR(0x4e7507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e750cull));
TAIL_STATIC(0x5379c0u,537);
}
B4e750c:L4e750c:{c.instructions+=9;NFSU2_TR(0x4e750c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e750f:{NFSU2_TR(0x4e750f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7513:{NFSU2_TR(0x4e7513);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e7516:{NFSU2_TR(0x4e7516);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4e7517:{NFSU2_TR(0x4e7517);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4e7518:{NFSU2_TR(0x4e7518);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x438c8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e751f:{NFSU2_TR(0x4e751f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x41c80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e7526:{NFSU2_TR(0x4e7526);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e752a:{NFSU2_TR(0x4e752a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7446u);}goto L4e7446;}}
}
B4e7530:L4e7530:{c.instructions+=2;NFSU2_TR(0x4e7530);
__builtin_memmove((R+4),(R+12),4);
}
B4e7532:{NFSU2_TR(0x4e7532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7537ull));
TAIL_STATIC(0x4d5490u,4d5);
}
B4e7537:L4e7537:{c.instructions+=6;NFSU2_TR(0x4e7537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7538:{NFSU2_TR(0x4e7538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7539:{NFSU2_TR(0x4e7539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e753a:{NFSU2_TR(0x4e753a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e753b:{NFSU2_TR(0x4e753b);
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
B4e753e:{NFSU2_TR(0x4e753e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7540:L4e7540:{c.instructions+=15;NFSU2_TR(0x4e7540);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7542:{NFSU2_TR(0x4e7542);
u8 U[4];
w4(U+0,u32(0x775ea9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7547:{NFSU2_TR(0x4e7547);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e754d:{NFSU2_TR(0x4e754d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e754e:{NFSU2_TR(0x4e754e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7555:{NFSU2_TR(0x4e7555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x280ull))));
}
B4e755b:{NFSU2_TR(0x4e755b);
u8 U[8];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7562:{NFSU2_TR(0x4e7562);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7563:{NFSU2_TR(0x4e7563);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7564:{NFSU2_TR(0x4e7564);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7565:{NFSU2_TR(0x4e7565);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7566:{NFSU2_TR(0x4e7566);
__builtin_memmove((R+20),(R+4),4);
}
B4e7568:{NFSU2_TR(0x4e7568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7569:{NFSU2_TR(0x4e7569);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e756d:{NFSU2_TR(0x4e756d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7572ull));
TAIL_STATIC(0x551de0u,551);
}
B4e7572:L4e7572:{c.instructions+=17;NFSU2_TR(0x4e7572);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7575:{NFSU2_TR(0x4e7575);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7577:{NFSU2_TR(0x4e7577);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e7579:{NFSU2_TR(0x4e7579);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e757a:{NFSU2_TR(0x4e757a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e757c:{NFSU2_TR(0x4e757c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e757e:{NFSU2_TR(0x4e757e);
u8 U[4];
w4(U+0,u32(0x7979d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7583:{NFSU2_TR(0x4e7583);
u8 U[4];
w4(U+0,u32(0x7976c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7588:{NFSU2_TR(0x4e7588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7589:{NFSU2_TR(0x4e7589);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e758c:{NFSU2_TR(0x4e758c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7593:{NFSU2_TR(0x4e7593);
u8 U[4];
w4(U+0,u32(0x796334ull));
s4(u32(r4(R+20)),r4(U+0));
}
B4e759a:{NFSU2_TR(0x4e759a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e759d:{NFSU2_TR(0x4e759d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e75a0:{NFSU2_TR(0x4e75a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e75a3:{NFSU2_TR(0x4e75a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e75a6:{NFSU2_TR(0x4e75a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e75abull));
TAIL_STATIC(0x542ca0u,542);
}
B4e75ab:L4e75ab:{c.instructions+=9;NFSU2_TR(0x4e75ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e75ae:{NFSU2_TR(0x4e75ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75af:{NFSU2_TR(0x4e75af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75b0:{NFSU2_TR(0x4e75b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75b2:{NFSU2_TR(0x4e75b2);
u8 U[4];
w4(U+0,u32(0x7978e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75b7:{NFSU2_TR(0x4e75b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75b8:{NFSU2_TR(0x4e75b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e75be:{NFSU2_TR(0x4e75be);
u8 U[5];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e75c6:{NFSU2_TR(0x4e75c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e75cbull));
TAIL_STATIC(0x542ac0u,542);
}
B4e75cb:L4e75cb:{c.instructions+=4;NFSU2_TR(0x4e75cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e75ce:{NFSU2_TR(0x4e75ce);
u8 U[4];
w4(U+0,u32(0x6d851451ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75d3:{NFSU2_TR(0x4e75d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75d4:{NFSU2_TR(0x4e75d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e75d9ull));
TAIL_STATIC(0x537a10u,537);
}
B4e75d9:L4e75d9:{c.instructions+=4;NFSU2_TR(0x4e75d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e75df:{NFSU2_TR(0x4e75df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e75e2:{NFSU2_TR(0x4e75e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75e3:{NFSU2_TR(0x4e75e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e75e8ull));
TAIL_STATIC(0x51bd70u,51b);
}
B4e75e8:L4e75e8:{c.instructions+=16;NFSU2_TR(0x4e75e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x116cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e75ee:{NFSU2_TR(0x4e75ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e75f4:{NFSU2_TR(0x4e75f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e75f7:{NFSU2_TR(0x4e75f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e75f9:{NFSU2_TR(0x4e75f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1170ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e75ff:{NFSU2_TR(0x4e75ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e7602:{NFSU2_TR(0x4e7602);
u8 U[4];
w4(U+0,u32(0x78fef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7607:{NFSU2_TR(0x4e7607);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e7609:{NFSU2_TR(0x4e7609);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e760e:{NFSU2_TR(0x4e760e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1174ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7614:{NFSU2_TR(0x4e7614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1178ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e761e:{NFSU2_TR(0x4e761e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x117cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7624:{NFSU2_TR(0x4e7624);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1380ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e762a:{NFSU2_TR(0x4e762a);
w4(R+4,u32(0x400ull));
}
B4e762f:{NFSU2_TR(0x4e762f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x168ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7635:{NFSU2_TR(0x4e7635);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e763a:L4e763a:{c.instructions+=1;NFSU2_TR(0x4e763a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e763c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e763au);}goto L4e763a;}
}
B4e763c:L4e763c:{c.instructions+=1;NFSU2_TR(0x4e763c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7641ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7641:L4e7641:{c.instructions+=3;NFSU2_TR(0x4e7641);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e7644:{NFSU2_TR(0x4e7644);
__builtin_memmove((R+4),(R+20),4);
}
B4e7646:{NFSU2_TR(0x4e7646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e764bull));
TAIL_STATIC(0x4d5990u,4d5);
}
B4e764b:L4e764b:{c.instructions+=4;NFSU2_TR(0x4e764b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e764e:{NFSU2_TR(0x4e764e);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7653:{NFSU2_TR(0x4e7653);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7654:{NFSU2_TR(0x4e7654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7659ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4e7659:L4e7659:{c.instructions+=3;NFSU2_TR(0x4e7659);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e765c:{NFSU2_TR(0x4e765c);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7661:{NFSU2_TR(0x4e7661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7666ull));
TAIL_STATIC(0x582b60u,582);
}
B4e7666:L4e7666:{c.instructions+=2;NFSU2_TR(0x4e7666);
__builtin_memmove((R+4),(R+0),4);
}
B4e7668:{NFSU2_TR(0x4e7668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e766dull));
TAIL_STATIC(0x582bb0u,582);
}
B4e766d:L4e766d:{c.instructions+=2;NFSU2_TR(0x4e766d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e766f:{NFSU2_TR(0x4e766f);
if(r1(R+518)){{goto L4e7679;}}
}
B4e7671:L4e7671:{c.instructions+=4;NFSU2_TR(0x4e7671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7672:{NFSU2_TR(0x4e7672);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7676:{NFSU2_TR(0x4e7676);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7677:{NFSU2_TR(0x4e7677);
{goto L4e76ab;}
}
B4e7679:L4e7679:{c.instructions+=1;NFSU2_TR(0x4e7679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e767eull));
TAIL_STATIC(0x582b60u,582);
}
B4e767e:L4e767e:{c.instructions+=5;NFSU2_TR(0x4e767e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e7684:{NFSU2_TR(0x4e7684);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7686:{NFSU2_TR(0x4e7686);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e768b:{NFSU2_TR(0x4e768b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e768c:{NFSU2_TR(0x4e768c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7691ull));
TAIL_STATIC(0x740790u,740);
}
B4e7691:L4e7691:{c.instructions+=3;NFSU2_TR(0x4e7691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e7694:{NFSU2_TR(0x4e7694);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7699:{NFSU2_TR(0x4e7699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e769eull));
TAIL_STATIC(0x582b60u,582);
}
B4e769e:L4e769e:{c.instructions+=2;NFSU2_TR(0x4e769e);
__builtin_memmove((R+4),(R+0),4);
}
B4e76a0:{NFSU2_TR(0x4e76a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e76a5ull));
TAIL_STATIC(0x582bb0u,582);
}
B4e76a5:L4e76a5:{c.instructions+=3;NFSU2_TR(0x4e76a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76a6:{NFSU2_TR(0x4e76a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e76aa:{NFSU2_TR(0x4e76aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76ab:L4e76ab:{c.instructions+=1;NFSU2_TR(0x4e76ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e76b0ull));
TAIL_STATIC(0x49e870u,49e);
}
B4e76b0:L4e76b0:{c.instructions+=3;NFSU2_TR(0x4e76b0);
__builtin_memmove((R+24),(R+0),4);
}
B4e76b2:{NFSU2_TR(0x4e76b2);
w4(R+28,u32(0x835fb8ull));
}
B4e76b7:{NFSU2_TR(0x4e76b7);
w4(R+4,u32(0x9full));
}
B4e76bc:L4e76bc:{c.instructions+=1;NFSU2_TR(0x4e76bc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4e76be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e76bcu);}goto L4e76bc;}
}
B4e76be:L4e76be:{c.instructions+=4;NFSU2_TR(0x4e76be);
__builtin_memmove((R+4),gp(0x836010),4);
}
B4e76c4:{NFSU2_TR(0x4e76c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e76c7:{NFSU2_TR(0x4e76c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76c8:{NFSU2_TR(0x4e76c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e76cdull));
TAIL_STATIC(0x73ed70u,73e);
}
B4e76cd:L4e76cd:{c.instructions+=3;NFSU2_TR(0x4e76cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e76d0:{NFSU2_TR(0x4e76d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e76d2:{NFSU2_TR(0x4e76d2);
if(r1(R+518)){{goto L4e76dd;}}
}
B4e76d4:L4e76d4:{c.instructions+=2;NFSU2_TR(0x4e76d4);
__builtin_memmove((R+4),(R+20),4);
}
B4e76d6:{NFSU2_TR(0x4e76d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e76dbull));
TAIL_STATIC(0x4d5a30u,4d5);
}
B4e76db:L4e76db:{c.instructions+=1;NFSU2_TR(0x4e76db);
{goto L4e7707;}
}
B4e76dd:L4e76dd:{c.instructions+=4;NFSU2_TR(0x4e76dd);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76e2:{NFSU2_TR(0x4e76e2);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76e7:{NFSU2_TR(0x4e76e7);
u8 U[4];
w4(U+0,u32(0x9a2e5f7bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76ec:{NFSU2_TR(0x4e76ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e76f1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e76f1:L4e76f1:{c.instructions+=7;NFSU2_TR(0x4e76f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e76f4:{NFSU2_TR(0x4e76f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76f5:{NFSU2_TR(0x4e76f5);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76fa:{NFSU2_TR(0x4e76fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e76fb:{NFSU2_TR(0x4e76fb);
u8 U[4];
w4(U+0,u32(0x6d851451ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7700:{NFSU2_TR(0x4e7700);
__builtin_memmove((R+4),(R+20),4);
}
B4e7702:{NFSU2_TR(0x4e7702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7707ull));
TAIL_STATIC(0x555f80u,555);
}
B4e7707:L4e7707:{c.instructions+=3;NFSU2_TR(0x4e7707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e770a:{NFSU2_TR(0x4e770a);
u8 U[4];
w4(U+0,u32(0x53f9fd5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e770f:{NFSU2_TR(0x4e770f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7714ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e7714:L4e7714:{c.instructions+=4;NFSU2_TR(0x4e7714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7715:{NFSU2_TR(0x4e7715);
u8 U[4];
w4(U+0,u32(0x7979c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e771a:{NFSU2_TR(0x4e771a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e771b:{NFSU2_TR(0x4e771b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7720ull));
TAIL_STATIC(0x542600u,542);
}
B4e7720:L4e7720:{c.instructions+=4;NFSU2_TR(0x4e7720);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e7723:{NFSU2_TR(0x4e7723);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e7725:{NFSU2_TR(0x4e7725);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1180ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e772b:{NFSU2_TR(0x4e772b);
{goto L4e7730;}
}
B4e7730:L4e7730:{c.instructions+=5;NFSU2_TR(0x4e7730);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B4e7733:{NFSU2_TR(0x4e7733);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e7734:{NFSU2_TR(0x4e7734);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4e7737:{NFSU2_TR(0x4e7737);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4e773c:{NFSU2_TR(0x4e773c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7730u);}goto L4e7730;}}
}
B4e773e:L4e773e:{c.instructions+=3;NFSU2_TR(0x4e773e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e773f:{NFSU2_TR(0x4e773f);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7744:{NFSU2_TR(0x4e7744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7749ull));
TAIL_STATIC(0x537950u,537);
}
B4e7749:L4e7749:{c.instructions+=3;NFSU2_TR(0x4e7749);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e774a:{NFSU2_TR(0x4e774a);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e774f:{NFSU2_TR(0x4e774f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7754ull));
TAIL_STATIC(0x537950u,537);
}
B4e7754:L4e7754:{c.instructions+=10;NFSU2_TR(0x4e7754);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e775b:{NFSU2_TR(0x4e775b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e775e:{NFSU2_TR(0x4e775e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e775f:{NFSU2_TR(0x4e775f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7760:{NFSU2_TR(0x4e7760);
__builtin_memmove((R+0),(R+20),4);
}
B4e7762:{NFSU2_TR(0x4e7762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7763:{NFSU2_TR(0x4e7763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7764:{NFSU2_TR(0x4e7764);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e776b:{NFSU2_TR(0x4e776b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7771:{NFSU2_TR(0x4e7771);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7780:L4e7780:{c.instructions+=3;NFSU2_TR(0x4e7780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7781:{NFSU2_TR(0x4e7781);
__builtin_memmove((R+24),(R+4),4);
}
B4e7783:{NFSU2_TR(0x4e7783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7788ull));
TAIL_STATIC(0x4d5920u,4d5);
}
B4e7788:L4e7788:{c.instructions+=2;NFSU2_TR(0x4e7788);
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
B4e778d:{NFSU2_TR(0x4e778d);
if(r1(R+518)){{goto L4e7798;}}
}
B4e778f:L4e778f:{c.instructions+=2;NFSU2_TR(0x4e778f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7790:{NFSU2_TR(0x4e7790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7795ull));
TAIL_STATIC(0x575630u,575);
}
B4e7795:L4e7795:{c.instructions+=1;NFSU2_TR(0x4e7795);
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
B4e7798:L4e7798:{c.instructions+=3;NFSU2_TR(0x4e7798);
__builtin_memmove((R+0),(R+24),4);
}
B4e779a:{NFSU2_TR(0x4e779a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e779b:{NFSU2_TR(0x4e779b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e77a0:L4e77a0:{c.instructions+=11;NFSU2_TR(0x4e77a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e77a1:{NFSU2_TR(0x4e77a1);
__builtin_memmove((R+20),(R+16),4);
}
B4e77a3:{NFSU2_TR(0x4e77a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4e77a6:{NFSU2_TR(0x4e77a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x384ull))));
}
B4e77ac:{NFSU2_TR(0x4e77ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e77af:{NFSU2_TR(0x4e77af);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e77b4:{NFSU2_TR(0x4e77b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e77b5:{NFSU2_TR(0x4e77b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e77b6:{NFSU2_TR(0x4e77b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e77b7:{NFSU2_TR(0x4e77b7);
__builtin_memmove((R+12),(R+4),4);
}
B4e77b9:{NFSU2_TR(0x4e77b9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e7a37;}}
}
B4e77bf:L4e77bf:{c.instructions+=1;NFSU2_TR(0x4e77bf);
if(r1(R+518)){{goto L4e79ab;}}
}
B4e77c5:L4e77c5:{c.instructions+=2;NFSU2_TR(0x4e77c5);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e77ca:{NFSU2_TR(0x4e77ca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e7943;}}
}
B4e77d0:L4e77d0:{c.instructions+=1;NFSU2_TR(0x4e77d0);
if(r1(R+518)){{goto L4e791e;}}
}
B4e77d6:L4e77d6:{c.instructions+=2;NFSU2_TR(0x4e77d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x153e234ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e77db:{NFSU2_TR(0x4e77db);
if(r1(R+518)){{goto L4e77ef;}}
}
B4e77dd:L4e77dd:{c.instructions+=2;NFSU2_TR(0x4e77dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e77e2:{NFSU2_TR(0x4e77e2);
if(r1(R+518)){{goto L4e781f;}}
}
B4e77e4:L4e77e4:{c.instructions+=2;NFSU2_TR(0x4e77e4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e77e9:{NFSU2_TR(0x4e77e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e77ef:L4e77ef:{c.instructions+=2;NFSU2_TR(0x4e77ef);
__builtin_memmove((R+4),(R+12),4);
}
B4e77f1:{NFSU2_TR(0x4e77f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e77f6ull));
TAIL_STATIC(0x4bdc30u,4bd);
}
B4e77f6:L4e77f6:{c.instructions+=3;NFSU2_TR(0x4e77f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e77f9:{NFSU2_TR(0x4e77f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e77fa:{NFSU2_TR(0x4e77fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e77ffull));
TAIL_STATIC(0x51cd60u,51c);
}
B4e77ff:L4e77ff:{c.instructions+=7;NFSU2_TR(0x4e77ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7802:{NFSU2_TR(0x4e7802);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e7805:{NFSU2_TR(0x4e7805);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7807:{NFSU2_TR(0x4e7807);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e780c:{NFSU2_TR(0x4e780c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e780d:{NFSU2_TR(0x4e780d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e780e:{NFSU2_TR(0x4e780e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7813ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7813:L4e7813:{c.instructions+=7;NFSU2_TR(0x4e7813);
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
B4e7816:{NFSU2_TR(0x4e7816);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7817:{NFSU2_TR(0x4e7817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7818:{NFSU2_TR(0x4e7818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7819:{NFSU2_TR(0x4e7819);
__builtin_memmove((R+16),(R+20),4);
}
B4e781b:{NFSU2_TR(0x4e781b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e781c:{NFSU2_TR(0x4e781c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e781f:L4e781f:{c.instructions+=3;NFSU2_TR(0x4e781f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7822:{NFSU2_TR(0x4e7822);
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
B4e7824:{NFSU2_TR(0x4e7824);
if(r1(R+518)){{goto L4e7d60;}}
}
B4e782a:L4e782a:{c.instructions+=3;NFSU2_TR(0x4e782a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e782d:{NFSU2_TR(0x4e782d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ccull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7832:{NFSU2_TR(0x4e7832);
if(r1(R+518)){{goto L4e78c0;}}
}
B4e7838:L4e7838:{c.instructions+=2;NFSU2_TR(0x4e7838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cdull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e783d:{NFSU2_TR(0x4e783d);
if(r1(R+518)){{goto L4e7890;}}
}
B4e783f:L4e783f:{c.instructions+=2;NFSU2_TR(0x4e783f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb8a7c6ceull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb8a7c6ceull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ceull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7844:{NFSU2_TR(0x4e7844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e784a:L4e784a:{c.instructions+=3;NFSU2_TR(0x4e784a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e7850:{NFSU2_TR(0x4e7850);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e7852:{NFSU2_TR(0x4e7852);
if(r1(R+518)){{goto L4e786f;}}
}
B4e7854:L4e7854:{c.instructions+=1;NFSU2_TR(0x4e7854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7859ull));
TAIL_STATIC(0x582b60u,582);
}
B4e7859:L4e7859:{c.instructions+=3;NFSU2_TR(0x4e7859);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e785f:{NFSU2_TR(0x4e785f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7860:{NFSU2_TR(0x4e7860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7865ull));
TAIL_STATIC(0x73ea00u,73e);
}
B4e7865:L4e7865:{c.instructions+=2;NFSU2_TR(0x4e7865);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7868:{NFSU2_TR(0x4e7868);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1380ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e786f:L4e786f:{c.instructions+=1;NFSU2_TR(0x4e786f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7871:L4e7871:{c.instructions+=5;NFSU2_TR(0x4e7871);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7874:{NFSU2_TR(0x4e7874);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7879:{NFSU2_TR(0x4e7879);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e787e:{NFSU2_TR(0x4e787e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e787f:{NFSU2_TR(0x4e787f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7884ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7884:L4e7884:{c.instructions+=7;NFSU2_TR(0x4e7884);
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
B4e7887:{NFSU2_TR(0x4e7887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7888:{NFSU2_TR(0x4e7888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7889:{NFSU2_TR(0x4e7889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e788a:{NFSU2_TR(0x4e788a);
__builtin_memmove((R+16),(R+20),4);
}
B4e788c:{NFSU2_TR(0x4e788c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e788d:{NFSU2_TR(0x4e788d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7890:L4e7890:{c.instructions+=3;NFSU2_TR(0x4e7890);
u8 U[4];
w4(U+0,u32(0x7962e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7895:{NFSU2_TR(0x4e7895);
u8 U[4];
w4(U+0,u32(0x8363a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e789a:{NFSU2_TR(0x4e789a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e789full));
TAIL_STATIC(0x43dbd0u,43d);
}
B4e789f:L4e789f:{c.instructions+=6;NFSU2_TR(0x4e789f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e78a2:{NFSU2_TR(0x4e78a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78a4:{NFSU2_TR(0x4e78a4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78a9:{NFSU2_TR(0x4e78a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78aa:{NFSU2_TR(0x4e78aa);
u8 U[4];
w4(U+0,u32(0x7962bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78af:{NFSU2_TR(0x4e78af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e78b4ull));
TAIL_STATIC(0x555eb0u,555);
}
B4e78b4:L4e78b4:{c.instructions+=7;NFSU2_TR(0x4e78b4);
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
B4e78b7:{NFSU2_TR(0x4e78b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e78b8:{NFSU2_TR(0x4e78b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e78b9:{NFSU2_TR(0x4e78b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e78ba:{NFSU2_TR(0x4e78ba);
__builtin_memmove((R+16),(R+20),4);
}
B4e78bc:{NFSU2_TR(0x4e78bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e78bd:{NFSU2_TR(0x4e78bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e78c0:L4e78c0:{c.instructions+=9;NFSU2_TR(0x4e78c0);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4e78c5:{NFSU2_TR(0x4e78c5);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x83a9c8))));
}
B4e78cb:{NFSU2_TR(0x4e78cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e78cf:{NFSU2_TR(0x4e78cf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4e78d3:{NFSU2_TR(0x4e78d3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4e78d9:{NFSU2_TR(0x4e78d9);
{u32 ea_=u32(u32(8361004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4e78df:{NFSU2_TR(0x4e78df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4e78e1:{NFSU2_TR(0x4e78e1);
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
B4e78e4:{NFSU2_TR(0x4e78e4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e78ea:L4e78ea:{c.instructions+=4;NFSU2_TR(0x4e78ea);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78ef:{NFSU2_TR(0x4e78ef);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78f4:{NFSU2_TR(0x4e78f4);
u8 U[4];
w4(U+0,u32(0x9a2e5f7bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e78f9:{NFSU2_TR(0x4e78f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e78feull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e78fe:L4e78fe:{c.instructions+=7;NFSU2_TR(0x4e78fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7901:{NFSU2_TR(0x4e7901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7902:{NFSU2_TR(0x4e7902);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7907:{NFSU2_TR(0x4e7907);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7909:{NFSU2_TR(0x4e7909);
u8 U[4];
w4(U+0,u32(0x6d851451ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e790e:{NFSU2_TR(0x4e790e);
__builtin_memmove((R+4),(R+12),4);
}
B4e7910:{NFSU2_TR(0x4e7910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7915ull));
TAIL_STATIC(0x555f80u,555);
}
B4e7915:L4e7915:{c.instructions+=6;NFSU2_TR(0x4e7915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7916:{NFSU2_TR(0x4e7916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7917:{NFSU2_TR(0x4e7917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7918:{NFSU2_TR(0x4e7918);
__builtin_memmove((R+16),(R+20),4);
}
B4e791a:{NFSU2_TR(0x4e791a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e791b:{NFSU2_TR(0x4e791b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e791e:L4e791e:{c.instructions+=3;NFSU2_TR(0x4e791e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7924:{NFSU2_TR(0x4e7924);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x117cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4e792a:{NFSU2_TR(0x4e792a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e7933;}}
}
B4e792c:L4e792c:{c.instructions+=2;NFSU2_TR(0x4e792c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4e792d:{NFSU2_TR(0x4e792d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7933:L4e7933:{c.instructions+=2;NFSU2_TR(0x4e7933);
__builtin_memmove((R+4),(R+12),4);
}
B4e7935:{NFSU2_TR(0x4e7935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e793aull));
TAIL_STATIC(0x4bdc30u,4bd);
}
B4e793a:L4e793a:{c.instructions+=6;NFSU2_TR(0x4e793a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e793b:{NFSU2_TR(0x4e793b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e793c:{NFSU2_TR(0x4e793c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e793d:{NFSU2_TR(0x4e793d);
__builtin_memmove((R+16),(R+20),4);
}
B4e793f:{NFSU2_TR(0x4e793f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7940:{NFSU2_TR(0x4e7940);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7943:L4e7943:{c.instructions+=2;NFSU2_TR(0x4e7943);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7948:{NFSU2_TR(0x4e7948);
if(r1(R+518)){{goto L4e7965;}}
}
B4e794a:L4e794a:{c.instructions+=2;NFSU2_TR(0x4e794a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e794f:{NFSU2_TR(0x4e794f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e7955:L4e7955:{c.instructions+=2;NFSU2_TR(0x4e7955);
__builtin_memmove((R+4),(R+12),4);
}
B4e7957:{NFSU2_TR(0x4e7957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e795cull));
TAIL_STATIC(0x4bdd90u,4bd);
}
B4e795c:L4e795c:{c.instructions+=6;NFSU2_TR(0x4e795c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e795d:{NFSU2_TR(0x4e795d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e795e:{NFSU2_TR(0x4e795e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e795f:{NFSU2_TR(0x4e795f);
__builtin_memmove((R+16),(R+20),4);
}
B4e7961:{NFSU2_TR(0x4e7961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7962:{NFSU2_TR(0x4e7962);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7965:L4e7965:{c.instructions+=3;NFSU2_TR(0x4e7965);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e796b:{NFSU2_TR(0x4e796b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e796d:{NFSU2_TR(0x4e796d);
if(r1(R+518)){{goto L4e798a;}}
}
B4e796f:L4e796f:{c.instructions+=1;NFSU2_TR(0x4e796f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7974ull));
TAIL_STATIC(0x582b60u,582);
}
B4e7974:L4e7974:{c.instructions+=3;NFSU2_TR(0x4e7974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e797a:{NFSU2_TR(0x4e797a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e797b:{NFSU2_TR(0x4e797b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7980ull));
TAIL_STATIC(0x73ea00u,73e);
}
B4e7980:L4e7980:{c.instructions+=2;NFSU2_TR(0x4e7980);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7983:{NFSU2_TR(0x4e7983);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1380ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e798a:L4e798a:{c.instructions+=6;NFSU2_TR(0x4e798a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e798d:{NFSU2_TR(0x4e798d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e798f:{NFSU2_TR(0x4e798f);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7994:{NFSU2_TR(0x4e7994);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7999:{NFSU2_TR(0x4e7999);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e799a:{NFSU2_TR(0x4e799a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e799full));
TAIL_STATIC(0x537c00u,537);
}
B4e799f:L4e799f:{c.instructions+=7;NFSU2_TR(0x4e799f);
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
B4e79a2:{NFSU2_TR(0x4e79a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e79a3:{NFSU2_TR(0x4e79a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e79a4:{NFSU2_TR(0x4e79a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e79a5:{NFSU2_TR(0x4e79a5);
__builtin_memmove((R+16),(R+20),4);
}
B4e79a7:{NFSU2_TR(0x4e79a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e79a8:{NFSU2_TR(0x4e79a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e79ab:L4e79ab:{c.instructions+=3;NFSU2_TR(0x4e79ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e79ae:{NFSU2_TR(0x4e79ae);
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
B4e79b0:{NFSU2_TR(0x4e79b0);
if(r1(R+518)){{goto L4e7d60;}}
}
B4e79b6:L4e79b6:{c.instructions+=3;NFSU2_TR(0x4e79b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e79b9:{NFSU2_TR(0x4e79b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ceull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e79be:{NFSU2_TR(0x4e79be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e79f6;}}
}
B4e79c0:L4e79c0:{c.instructions+=6;NFSU2_TR(0x4e79c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e79c3:{NFSU2_TR(0x4e79c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79c5:{NFSU2_TR(0x4e79c5);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79ca:{NFSU2_TR(0x4e79ca);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79cf:{NFSU2_TR(0x4e79cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79d0:{NFSU2_TR(0x4e79d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e79d5ull));
TAIL_STATIC(0x537c00u,537);
}
B4e79d5:L4e79d5:{c.instructions+=6;NFSU2_TR(0x4e79d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e79d8:{NFSU2_TR(0x4e79d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79da:{NFSU2_TR(0x4e79da);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79df:{NFSU2_TR(0x4e79df);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79e4:{NFSU2_TR(0x4e79e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e79e5:{NFSU2_TR(0x4e79e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e79eaull));
TAIL_STATIC(0x537c00u,537);
}
B4e79ea:L4e79ea:{c.instructions+=7;NFSU2_TR(0x4e79ea);
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
B4e79ed:{NFSU2_TR(0x4e79ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e79ee:{NFSU2_TR(0x4e79ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e79ef:{NFSU2_TR(0x4e79ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e79f0:{NFSU2_TR(0x4e79f0);
__builtin_memmove((R+16),(R+20),4);
}
B4e79f2:{NFSU2_TR(0x4e79f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e79f3:{NFSU2_TR(0x4e79f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e79f6:L4e79f6:{c.instructions+=2;NFSU2_TR(0x4e79f6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb8a7c6cdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb8a7c6cdull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cdull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e79fb:{NFSU2_TR(0x4e79fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e7a01:L4e7a01:{c.instructions+=6;NFSU2_TR(0x4e7a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7a04:{NFSU2_TR(0x4e7a04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a06:{NFSU2_TR(0x4e7a06);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a0b:{NFSU2_TR(0x4e7a0b);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a10:{NFSU2_TR(0x4e7a10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a11:{NFSU2_TR(0x4e7a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7a16ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7a16:L4e7a16:{c.instructions+=6;NFSU2_TR(0x4e7a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e7a19:{NFSU2_TR(0x4e7a19);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a1b:{NFSU2_TR(0x4e7a1b);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a20:{NFSU2_TR(0x4e7a20);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a25:{NFSU2_TR(0x4e7a25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a26:{NFSU2_TR(0x4e7a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7a2bull));
TAIL_STATIC(0x537c00u,537);
}
B4e7a2b:L4e7a2b:{c.instructions+=7;NFSU2_TR(0x4e7a2b);
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
B4e7a2e:{NFSU2_TR(0x4e7a2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7a2f:{NFSU2_TR(0x4e7a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7a30:{NFSU2_TR(0x4e7a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7a31:{NFSU2_TR(0x4e7a31);
__builtin_memmove((R+16),(R+20),4);
}
B4e7a33:{NFSU2_TR(0x4e7a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7a34:{NFSU2_TR(0x4e7a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7a37:L4e7a37:{c.instructions+=2;NFSU2_TR(0x4e7a37);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc9d30688ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7a3c:{NFSU2_TR(0x4e7a3c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e7be2;}}
}
B4e7a42:L4e7a42:{c.instructions+=1;NFSU2_TR(0x4e7a42);
if(r1(R+518)){{goto L4e7bb3;}}
}
B4e7a48:L4e7a48:{c.instructions+=2;NFSU2_TR(0x4e7a48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7a4d:{NFSU2_TR(0x4e7a4d);
if(r1(R+518)){{goto L4e7b60;}}
}
B4e7a53:L4e7a53:{c.instructions+=2;NFSU2_TR(0x4e7a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7a58:{NFSU2_TR(0x4e7a58);
if(r1(R+518)){{goto L4e7ad4;}}
}
B4e7a5a:L4e7a5a:{c.instructions+=2;NFSU2_TR(0x4e7a5a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7a5f:{NFSU2_TR(0x4e7a5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e7a65:L4e7a65:{c.instructions+=1;NFSU2_TR(0x4e7a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7a6aull));
TAIL_STATIC(0x582b60u,582);
}
B4e7a6a:L4e7a6a:{c.instructions+=2;NFSU2_TR(0x4e7a6a);
__builtin_memmove((R+4),(R+0),4);
}
B4e7a6c:{NFSU2_TR(0x4e7a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7a71ull));
TAIL_STATIC(0x584f10u,584);
}
B4e7a71:L4e7a71:{c.instructions+=3;NFSU2_TR(0x4e7a71);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e7a74:{NFSU2_TR(0x4e7a74);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e7a76:{NFSU2_TR(0x4e7a76);
if(r1(R+518)){{goto L4e7a88;}}
}
B4e7a78:L4e7a78:{c.instructions+=3;NFSU2_TR(0x4e7a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7a7b:{NFSU2_TR(0x4e7a7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a7c:{NFSU2_TR(0x4e7a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7a81ull));
TAIL_STATIC(0x5379a0u,537);
}
B4e7a81:L4e7a81:{c.instructions+=2;NFSU2_TR(0x4e7a81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7a84:{NFSU2_TR(0x4e7a84);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7a88:L4e7a88:{c.instructions+=1;NFSU2_TR(0x4e7a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7a8dull));
TAIL_STATIC(0x582b60u,582);
}
B4e7a8d:L4e7a8d:{c.instructions+=2;NFSU2_TR(0x4e7a8d);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4e7a94:{NFSU2_TR(0x4e7a94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e7a9a:L4e7a9a:{c.instructions+=2;NFSU2_TR(0x4e7a9a);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7a9f:{NFSU2_TR(0x4e7a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7aa4ull));
TAIL_STATIC(0x582b60u,582);
}
B4e7aa4:L4e7aa4:{c.instructions+=2;NFSU2_TR(0x4e7aa4);
__builtin_memmove((R+4),(R+0),4);
}
B4e7aa6:{NFSU2_TR(0x4e7aa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7aabull));
TAIL_STATIC(0x582bb0u,582);
}
B4e7aab:L4e7aab:{c.instructions+=2;NFSU2_TR(0x4e7aab);
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
B4e7aad:{NFSU2_TR(0x4e7aad);
if(r1(R+518)){{goto L4e7d60;}}
}
B4e7ab3:L4e7ab3:{c.instructions+=2;NFSU2_TR(0x4e7ab3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ab4:{NFSU2_TR(0x4e7ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7ab9ull));
TAIL_STATIC(0x73ed70u,73e);
}
B4e7ab9:L4e7ab9:{c.instructions+=3;NFSU2_TR(0x4e7ab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7abc:{NFSU2_TR(0x4e7abc);
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
B4e7abe:{NFSU2_TR(0x4e7abe);
if(r1(R+518)){{goto L4e7d60;}}
}
B4e7ac4:L4e7ac4:{c.instructions+=2;NFSU2_TR(0x4e7ac4);
__builtin_memmove((R+4),(R+12),4);
}
B4e7ac6:{NFSU2_TR(0x4e7ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7acbull));
TAIL_STATIC(0x4d5bd0u,4d5);
}
B4e7acb:L4e7acb:{c.instructions+=6;NFSU2_TR(0x4e7acb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7acc:{NFSU2_TR(0x4e7acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7acd:{NFSU2_TR(0x4e7acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7ace:{NFSU2_TR(0x4e7ace);
__builtin_memmove((R+16),(R+20),4);
}
B4e7ad0:{NFSU2_TR(0x4e7ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7ad1:{NFSU2_TR(0x4e7ad1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7ad4:L4e7ad4:{c.instructions+=3;NFSU2_TR(0x4e7ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7ad7:{NFSU2_TR(0x4e7ad7);
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
B4e7ad9:{NFSU2_TR(0x4e7ad9);
if(r1(R+518)){{goto L4e7d60;}}
}
B4e7adf:L4e7adf:{c.instructions+=3;NFSU2_TR(0x4e7adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7ae2:{NFSU2_TR(0x4e7ae2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8a7c6ccull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7ae7:{NFSU2_TR(0x4e7ae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7b1f;}}
}
B4e7ae9:L4e7ae9:{c.instructions+=6;NFSU2_TR(0x4e7ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7aec:{NFSU2_TR(0x4e7aec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7aee:{NFSU2_TR(0x4e7aee);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7af3:{NFSU2_TR(0x4e7af3);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7af8:{NFSU2_TR(0x4e7af8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7af9:{NFSU2_TR(0x4e7af9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7afeull));
TAIL_STATIC(0x537c00u,537);
}
B4e7afe:L4e7afe:{c.instructions+=6;NFSU2_TR(0x4e7afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e7b01:{NFSU2_TR(0x4e7b01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b03:{NFSU2_TR(0x4e7b03);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b08:{NFSU2_TR(0x4e7b08);
u8 U[4];
w4(U+0,u32(0xb8a7c6ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b0d:{NFSU2_TR(0x4e7b0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b0e:{NFSU2_TR(0x4e7b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7b13ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7b13:L4e7b13:{c.instructions+=7;NFSU2_TR(0x4e7b13);
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
B4e7b16:{NFSU2_TR(0x4e7b16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7b17:{NFSU2_TR(0x4e7b17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7b18:{NFSU2_TR(0x4e7b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7b19:{NFSU2_TR(0x4e7b19);
__builtin_memmove((R+16),(R+20),4);
}
B4e7b1b:{NFSU2_TR(0x4e7b1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7b1c:{NFSU2_TR(0x4e7b1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7b1f:L4e7b1f:{c.instructions+=2;NFSU2_TR(0x4e7b1f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb8a7c6cdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb8a7c6cdull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb8a7c6cdull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7b24:{NFSU2_TR(0x4e7b24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e7b2a:L4e7b2a:{c.instructions+=6;NFSU2_TR(0x4e7b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7b2d:{NFSU2_TR(0x4e7b2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b2f:{NFSU2_TR(0x4e7b2f);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b34:{NFSU2_TR(0x4e7b34);
u8 U[4];
w4(U+0,u32(0xb8a7c6ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b39:{NFSU2_TR(0x4e7b39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b3a:{NFSU2_TR(0x4e7b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7b3full));
TAIL_STATIC(0x537c00u,537);
}
B4e7b3f:L4e7b3f:{c.instructions+=6;NFSU2_TR(0x4e7b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7b42:{NFSU2_TR(0x4e7b42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b44:{NFSU2_TR(0x4e7b44);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b49:{NFSU2_TR(0x4e7b49);
u8 U[4];
w4(U+0,u32(0xb8a7c6cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b4e:{NFSU2_TR(0x4e7b4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7b4f:{NFSU2_TR(0x4e7b4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7b54ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7b54:L4e7b54:{c.instructions+=7;NFSU2_TR(0x4e7b54);
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
B4e7b57:{NFSU2_TR(0x4e7b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7b58:{NFSU2_TR(0x4e7b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7b59:{NFSU2_TR(0x4e7b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7b5a:{NFSU2_TR(0x4e7b5a);
__builtin_memmove((R+16),(R+20),4);
}
B4e7b5c:{NFSU2_TR(0x4e7b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7b5d:{NFSU2_TR(0x4e7b5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7b60:L4e7b60:{c.instructions+=2;NFSU2_TR(0x4e7b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7b63:{NFSU2_TR(0x4e7b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7b68ull));
TAIL_STATIC(0x54eb80u,54e);
}
B4e7b68:L4e7b68:{c.instructions+=2;NFSU2_TR(0x4e7b68);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7b6e:{NFSU2_TR(0x4e7b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7b73ull));
TAIL_STATIC(0x538130u,538);
}
B4e7b73:L4e7b73:{c.instructions+=4;NFSU2_TR(0x4e7b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7b79:{NFSU2_TR(0x4e7b79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B4e7b7c:{NFSU2_TR(0x4e7b7c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7b7f:{NFSU2_TR(0x4e7b7f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e7d60;}}
}
B4e7b85:L4e7b85:{c.instructions+=2;NFSU2_TR(0x4e7b85);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4e7d78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4e7b8c:{NFSU2_TR(0x4e7b8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e7d6cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e7b93:L4e7b93:{c.instructions+=2;NFSU2_TR(0x4e7b93);
__builtin_memmove((R+4),(R+12),4);
}
B4e7b95:{NFSU2_TR(0x4e7b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7b9aull));
TAIL_STATIC(0x4bdd90u,4bd);
}
B4e7b9a:L4e7b9a:{c.instructions+=6;NFSU2_TR(0x4e7b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7b9b:{NFSU2_TR(0x4e7b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7b9c:{NFSU2_TR(0x4e7b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7b9d:{NFSU2_TR(0x4e7b9d);
__builtin_memmove((R+16),(R+20),4);
}
B4e7b9f:{NFSU2_TR(0x4e7b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7ba0:{NFSU2_TR(0x4e7ba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7ba3:L4e7ba3:{c.instructions+=2;NFSU2_TR(0x4e7ba3);
__builtin_memmove((R+4),(R+12),4);
}
B4e7ba5:{NFSU2_TR(0x4e7ba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7baaull));
TAIL_STATIC(0x4bdd70u,4bd);
}
B4e7baa:L4e7baa:{c.instructions+=6;NFSU2_TR(0x4e7baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7bab:{NFSU2_TR(0x4e7bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7bac:{NFSU2_TR(0x4e7bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7bad:{NFSU2_TR(0x4e7bad);
__builtin_memmove((R+16),(R+20),4);
}
B4e7baf:{NFSU2_TR(0x4e7baf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7bb0:{NFSU2_TR(0x4e7bb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7bb3:L4e7bb3:{c.instructions+=4;NFSU2_TR(0x4e7bb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4e7bb9:{NFSU2_TR(0x4e7bb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e7bbb:{NFSU2_TR(0x4e7bbb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7bbd:{NFSU2_TR(0x4e7bbd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7871u);}goto L4e7871;}}
}
B4e7bc3:L4e7bc3:{c.instructions+=5;NFSU2_TR(0x4e7bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7bc6:{NFSU2_TR(0x4e7bc6);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7bcb:{NFSU2_TR(0x4e7bcb);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7bd0:{NFSU2_TR(0x4e7bd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7bd1:{NFSU2_TR(0x4e7bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7bd6ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7bd6:L4e7bd6:{c.instructions+=7;NFSU2_TR(0x4e7bd6);
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
B4e7bd9:{NFSU2_TR(0x4e7bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7bda:{NFSU2_TR(0x4e7bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7bdb:{NFSU2_TR(0x4e7bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7bdc:{NFSU2_TR(0x4e7bdc);
__builtin_memmove((R+16),(R+20),4);
}
B4e7bde:{NFSU2_TR(0x4e7bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7bdf:{NFSU2_TR(0x4e7bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7be2:L4e7be2:{c.instructions+=2;NFSU2_TR(0x4e7be2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xda5b8712ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7be7:{NFSU2_TR(0x4e7be7);
if(r1(R+518)){{goto L4e7ca5;}}
}
B4e7bed:L4e7bed:{c.instructions+=2;NFSU2_TR(0x4e7bed);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e7bf2:{NFSU2_TR(0x4e7bf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7d60;}}
}
B4e7bf8:L4e7bf8:{c.instructions+=1;NFSU2_TR(0x4e7bf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7bfdull));
TAIL_STATIC(0x582b60u,582);
}
B4e7bfd:L4e7bfd:{c.instructions+=2;NFSU2_TR(0x4e7bfd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e7c04:{NFSU2_TR(0x4e7c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e7c69;}}
}
B4e7c06:L4e7c06:{c.instructions+=2;NFSU2_TR(0x4e7c06);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c0b:{NFSU2_TR(0x4e7c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c10ull));
TAIL_STATIC(0x582b60u,582);
}
B4e7c10:L4e7c10:{c.instructions+=2;NFSU2_TR(0x4e7c10);
__builtin_memmove((R+4),(R+0),4);
}
B4e7c12:{NFSU2_TR(0x4e7c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c17ull));
TAIL_STATIC(0x582bb0u,582);
}
B4e7c17:L4e7c17:{c.instructions+=2;NFSU2_TR(0x4e7c17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7c19:{NFSU2_TR(0x4e7c19);
if(r1(R+518)){{goto L4e7c3a;}}
}
B4e7c1b:L4e7c1b:{c.instructions+=4;NFSU2_TR(0x4e7c1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c1c:{NFSU2_TR(0x4e7c1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e7c23:{NFSU2_TR(0x4e7c23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c24:{NFSU2_TR(0x4e7c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c29ull));
TAIL_STATIC(0x49e870u,49e);
}
B4e7c29:L4e7c29:{c.instructions+=4;NFSU2_TR(0x4e7c29);
w4(R+4,u32(0x9full));
}
B4e7c2e:{NFSU2_TR(0x4e7c2e);
__builtin_memmove((R+24),(R+0),4);
}
B4e7c30:{NFSU2_TR(0x4e7c30);
w4(R+28,u32(0x835fb8ull));
}
B4e7c35:{NFSU2_TR(0x4e7c35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e7c38:L4e7c38:{c.instructions+=1;NFSU2_TR(0x4e7c38);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4e7c3a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7c38u);}goto L4e7c38;}
}
B4e7c3a:L4e7c3a:{c.instructions+=4;NFSU2_TR(0x4e7c3a);
__builtin_memmove((R+0),gp(0x836010),4);
}
B4e7c3f:{NFSU2_TR(0x4e7c3f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c41:{NFSU2_TR(0x4e7c41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c42:{NFSU2_TR(0x4e7c42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c47ull));
TAIL_STATIC(0x73ee20u,73e);
}
B4e7c47:L4e7c47:{c.instructions+=3;NFSU2_TR(0x4e7c47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c49:{NFSU2_TR(0x4e7c49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c4b:{NFSU2_TR(0x4e7c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c50ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4e7c50:L4e7c50:{c.instructions+=3;NFSU2_TR(0x4e7c50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c52:{NFSU2_TR(0x4e7c52);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c57:{NFSU2_TR(0x4e7c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c5cull));
TAIL_STATIC(0x55dde0u,55d);
}
B4e7c5c:L4e7c5c:{c.instructions+=2;NFSU2_TR(0x4e7c5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4e7c5f:{NFSU2_TR(0x4e7c5f);
s4(0x83637c,u32(0x1ull));
}
B4e7c69:L4e7c69:{c.instructions+=5;NFSU2_TR(0x4e7c69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c6b:{NFSU2_TR(0x4e7c6b);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c70:{NFSU2_TR(0x4e7c70);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c75:{NFSU2_TR(0x4e7c75);
u8 U[4];
w4(U+0,u32(0x8384e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c7a:{NFSU2_TR(0x4e7c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c7full));
TAIL_STATIC(0x537c00u,537);
}
B4e7c7f:L4e7c7f:{c.instructions+=5;NFSU2_TR(0x4e7c7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c81:{NFSU2_TR(0x4e7c81);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c86:{NFSU2_TR(0x4e7c86);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c8b:{NFSU2_TR(0x4e7c8b);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7c90:{NFSU2_TR(0x4e7c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7c95ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7c95:L4e7c95:{c.instructions+=8;NFSU2_TR(0x4e7c95);
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
B4e7c98:{NFSU2_TR(0x4e7c98);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7c9c:{NFSU2_TR(0x4e7c9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7c9d:{NFSU2_TR(0x4e7c9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7c9e:{NFSU2_TR(0x4e7c9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7c9f:{NFSU2_TR(0x4e7c9f);
__builtin_memmove((R+16),(R+20),4);
}
B4e7ca1:{NFSU2_TR(0x4e7ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7ca2:{NFSU2_TR(0x4e7ca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7ca5:L4e7ca5:{c.instructions+=4;NFSU2_TR(0x4e7ca5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7caa:{NFSU2_TR(0x4e7caa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e7cac:{NFSU2_TR(0x4e7cac);
w4(R+4,u32(0x3full));
}
B4e7cb1:{NFSU2_TR(0x4e7cb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7cb5:L4e7cb5:{c.instructions+=1;NFSU2_TR(0x4e7cb5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e7cb7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7cb5u);}goto L4e7cb5;}
}
B4e7cb7:L4e7cb7:{c.instructions+=4;NFSU2_TR(0x4e7cb7);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e7cb9:{NFSU2_TR(0x4e7cb9);
__builtin_memmove((R+4),(R+12),4);
}
B4e7cbb:{NFSU2_TR(0x4e7cbb);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e7cbc:{NFSU2_TR(0x4e7cbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7cc1ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4e7cc1:L4e7cc1:{c.instructions+=6;NFSU2_TR(0x4e7cc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7cc2:{NFSU2_TR(0x4e7cc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7cc6:{NFSU2_TR(0x4e7cc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7cc7:{NFSU2_TR(0x4e7cc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e7ccb:{NFSU2_TR(0x4e7ccb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ccc:{NFSU2_TR(0x4e7ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7cd1ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4e7cd1:L4e7cd1:{c.instructions+=5;NFSU2_TR(0x4e7cd1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7cd3:{NFSU2_TR(0x4e7cd3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e7cd5:{NFSU2_TR(0x4e7cd5);
w4(R+4,u32(0x40ull));
}
B4e7cda:{NFSU2_TR(0x4e7cda);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7cde:{NFSU2_TR(0x4e7cde);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ce3:L4e7ce3:{c.instructions+=1;NFSU2_TR(0x4e7ce3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e7ce5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e7ce3u);}goto L4e7ce3;}
}
B4e7ce5:L4e7ce5:{c.instructions+=4;NFSU2_TR(0x4e7ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7ce8:{NFSU2_TR(0x4e7ce8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ced:{NFSU2_TR(0x4e7ced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7cee:{NFSU2_TR(0x4e7cee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7cf3ull));
TAIL_STATIC(0x537c00u,537);
}
B4e7cf3:L4e7cf3:{c.instructions+=3;NFSU2_TR(0x4e7cf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e7cf6:{NFSU2_TR(0x4e7cf6);
w4(R+4,u32(0x850080ull));
}
B4e7cfb:{NFSU2_TR(0x4e7cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d00ull));
TAIL_STATIC(0x5031f0u,503);
}
B4e7d00:L4e7d00:{c.instructions+=6;NFSU2_TR(0x4e7d00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d01:{NFSU2_TR(0x4e7d01);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7d05:{NFSU2_TR(0x4e7d05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d06:{NFSU2_TR(0x4e7d06);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e7d0a:{NFSU2_TR(0x4e7d0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d0b:{NFSU2_TR(0x4e7d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d10ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4e7d10:L4e7d10:{c.instructions+=6;NFSU2_TR(0x4e7d10);
u8 U[4];
w4(U+0,u32(0x796358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d15:{NFSU2_TR(0x4e7d15);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e7d19:{NFSU2_TR(0x4e7d19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d1a:{NFSU2_TR(0x4e7d1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7d1e:{NFSU2_TR(0x4e7d1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d1f:{NFSU2_TR(0x4e7d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d24ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4e7d24:L4e7d24:{c.instructions+=3;NFSU2_TR(0x4e7d24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4e7d27:{NFSU2_TR(0x4e7d27);
__builtin_memmove((R+4),(R+12),4);
}
B4e7d29:{NFSU2_TR(0x4e7d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d2eull));
TAIL_STATIC(0x50ced0u,50c);
}
B4e7d2e:L4e7d2e:{c.instructions+=6;NFSU2_TR(0x4e7d2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d2f:{NFSU2_TR(0x4e7d2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e7d33:{NFSU2_TR(0x4e7d33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d34:{NFSU2_TR(0x4e7d34);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e7d38:{NFSU2_TR(0x4e7d38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d39:{NFSU2_TR(0x4e7d39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d3eull));
TAIL_STATIC(0x43dda0u,43d);
}
B4e7d3e:L4e7d3e:{c.instructions+=5;NFSU2_TR(0x4e7d3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e7d41:{NFSU2_TR(0x4e7d41);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7d45:{NFSU2_TR(0x4e7d45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d46:{NFSU2_TR(0x4e7d46);
__builtin_memmove((R+4),(R+12),4);
}
B4e7d48:{NFSU2_TR(0x4e7d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d4dull));
TAIL_STATIC(0x4bdd20u,4bd);
}
B4e7d4d:L4e7d4d:{c.instructions+=2;NFSU2_TR(0x4e7d4d);
__builtin_memmove((R+4),(R+12),4);
}
B4e7d4f:{NFSU2_TR(0x4e7d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d54ull));
TAIL_STATIC(0x50ced0u,50c);
}
B4e7d54:L4e7d54:{c.instructions+=3;NFSU2_TR(0x4e7d54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d55:{NFSU2_TR(0x4e7d55);
__builtin_memmove((R+4),(R+12),4);
}
B4e7d57:{NFSU2_TR(0x4e7d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7d5cull));
TAIL_STATIC(0x4bda20u,4bd);
}
B4e7d5c:L4e7d5c:{c.instructions+=1;NFSU2_TR(0x4e7d5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7d60:L4e7d60:{c.instructions+=6;NFSU2_TR(0x4e7d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7d61:{NFSU2_TR(0x4e7d61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7d62:{NFSU2_TR(0x4e7d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7d63:{NFSU2_TR(0x4e7d63);
__builtin_memmove((R+16),(R+20),4);
}
B4e7d65:{NFSU2_TR(0x4e7d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e7d66:{NFSU2_TR(0x4e7d66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7d90:L4e7d90:{c.instructions+=12;NFSU2_TR(0x4e7d90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d92:{NFSU2_TR(0x4e7d92);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d97:{NFSU2_TR(0x4e7d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7d9d:{NFSU2_TR(0x4e7d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7d9e:{NFSU2_TR(0x4e7d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7da5:{NFSU2_TR(0x4e7da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7da6:{NFSU2_TR(0x4e7da6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7daa:{NFSU2_TR(0x4e7daa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7dab:{NFSU2_TR(0x4e7dab);
__builtin_memmove((R+24),(R+4),4);
}
B4e7dad:{NFSU2_TR(0x4e7dad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7dae:{NFSU2_TR(0x4e7dae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7db2:{NFSU2_TR(0x4e7db2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7db7ull));
TAIL_STATIC(0x552330u,552);
}
B4e7db7:L4e7db7:{c.instructions+=4;NFSU2_TR(0x4e7db7);
__builtin_memmove((R+4),(R+24),4);
}
B4e7db9:{NFSU2_TR(0x4e7db9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e7dc1:{NFSU2_TR(0x4e7dc1);
u8 U[4];
w4(U+0,u32(0x7979d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e7dc7:{NFSU2_TR(0x4e7dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7dccull));
TAIL_STATIC(0x4bde40u,4bd);
}
B4e7dcc:L4e7dcc:{c.instructions+=6;NFSU2_TR(0x4e7dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7dd0:{NFSU2_TR(0x4e7dd0);
__builtin_memmove((R+0),(R+24),4);
}
B4e7dd2:{NFSU2_TR(0x4e7dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7dd3:{NFSU2_TR(0x4e7dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7dda:{NFSU2_TR(0x4e7dda);
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
B4e7ddd:{NFSU2_TR(0x4e7ddd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7de0:L4e7de0:{c.instructions+=3;NFSU2_TR(0x4e7de0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7de1:{NFSU2_TR(0x4e7de1);
__builtin_memmove((R+24),(R+4),4);
}
B4e7de3:{NFSU2_TR(0x4e7de3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7de8ull));
{goto L4e7e00;}
}
B4e7de8:L4e7de8:{c.instructions+=2;NFSU2_TR(0x4e7de8);
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
B4e7ded:{NFSU2_TR(0x4e7ded);
if(r1(R+518)){{goto L4e7df8;}}
}
B4e7def:L4e7def:{c.instructions+=2;NFSU2_TR(0x4e7def);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7df0:{NFSU2_TR(0x4e7df0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7df5ull));
TAIL_STATIC(0x575630u,575);
}
B4e7df5:L4e7df5:{c.instructions+=1;NFSU2_TR(0x4e7df5);
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
B4e7df8:L4e7df8:{c.instructions+=3;NFSU2_TR(0x4e7df8);
__builtin_memmove((R+0),(R+24),4);
}
B4e7dfa:{NFSU2_TR(0x4e7dfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7dfb:{NFSU2_TR(0x4e7dfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7e00:L4e7e00:{c.instructions+=2;NFSU2_TR(0x4e7e00);
u8 U[4];
w4(U+0,u32(0x7979d8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4e7e06:{NFSU2_TR(0x4e7e06);
TAIL_STATIC(0x4defb0u,4de);
}
B4e7e10:L4e7e10:{c.instructions+=14;NFSU2_TR(0x4e7e10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e12:{NFSU2_TR(0x4e7e12);
u8 U[4];
w4(U+0,u32(0x7749f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e17:{NFSU2_TR(0x4e7e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7e1d:{NFSU2_TR(0x4e7e1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e1e:{NFSU2_TR(0x4e7e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7e25:{NFSU2_TR(0x4e7e25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e26:{NFSU2_TR(0x4e7e26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e27:{NFSU2_TR(0x4e7e27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e28:{NFSU2_TR(0x4e7e28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e29:{NFSU2_TR(0x4e7e29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e7e2d:{NFSU2_TR(0x4e7e2d);
__builtin_memmove((R+24),(R+4),4);
}
B4e7e2f:{NFSU2_TR(0x4e7e2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e30:{NFSU2_TR(0x4e7e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7e34:{NFSU2_TR(0x4e7e34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7e39ull));
TAIL_STATIC(0x551de0u,551);
}
B4e7e39:L4e7e39:{c.instructions+=17;NFSU2_TR(0x4e7e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7e3c:{NFSU2_TR(0x4e7e3c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e7e3e:{NFSU2_TR(0x4e7e3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e40:{NFSU2_TR(0x4e7e40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e41:{NFSU2_TR(0x4e7e41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e42:{NFSU2_TR(0x4e7e42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e44:{NFSU2_TR(0x4e7e44);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e49:{NFSU2_TR(0x4e7e49);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e4e:{NFSU2_TR(0x4e7e4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e4f:{NFSU2_TR(0x4e7e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7e52:{NFSU2_TR(0x4e7e52);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7e56:{NFSU2_TR(0x4e7e56);
u8 U[4];
w4(U+0,u32(0x79635cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e7e5c:{NFSU2_TR(0x4e7e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7e5f:{NFSU2_TR(0x4e7e5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e7e62:{NFSU2_TR(0x4e7e62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e7e65:{NFSU2_TR(0x4e7e65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e7e68:{NFSU2_TR(0x4e7e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7e6dull));
TAIL_STATIC(0x542ca0u,542);
}
B4e7e6d:L4e7e6d:{c.instructions+=9;NFSU2_TR(0x4e7e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7e70:{NFSU2_TR(0x4e7e70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e71:{NFSU2_TR(0x4e7e71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e72:{NFSU2_TR(0x4e7e72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e74:{NFSU2_TR(0x4e7e74);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e79:{NFSU2_TR(0x4e7e79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7e7a:{NFSU2_TR(0x4e7e7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e7e80:{NFSU2_TR(0x4e7e80);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7e85:{NFSU2_TR(0x4e7e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7e8aull));
TAIL_STATIC(0x542ac0u,542);
}
B4e7e8a:L4e7e8a:{c.instructions+=6;NFSU2_TR(0x4e7e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7e90:{NFSU2_TR(0x4e7e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7e96:{NFSU2_TR(0x4e7e96);
__builtin_memmove(gp(0x835bf8),(R+12),4);
}
B4e7e9c:{NFSU2_TR(0x4e7e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7e9f:{NFSU2_TR(0x4e7e9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ea0:{NFSU2_TR(0x4e7ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7ea5ull));
TAIL_STATIC(0x504820u,504);
}
B4e7ea5:L4e7ea5:{c.instructions+=5;NFSU2_TR(0x4e7ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7ea8:{NFSU2_TR(0x4e7ea8);
u8 U[4];
w4(U+0,u32(0x81ab4717ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ead:{NFSU2_TR(0x4e7ead);
u8 U[4];
w4(U+0,u32(0xb2980ba8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7eb2:{NFSU2_TR(0x4e7eb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7eb3:{NFSU2_TR(0x4e7eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7eb8ull));
TAIL_STATIC(0x537a10u,537);
}
B4e7eb8:L4e7eb8:{c.instructions+=3;NFSU2_TR(0x4e7eb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e7ebb:{NFSU2_TR(0x4e7ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ebc:{NFSU2_TR(0x4e7ebc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7ec1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e7ec1:L4e7ec1:{c.instructions+=3;NFSU2_TR(0x4e7ec1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ec2:{NFSU2_TR(0x4e7ec2);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ec7:{NFSU2_TR(0x4e7ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7eccull));
TAIL_STATIC(0x537950u,537);
}
B4e7ecc:L4e7ecc:{c.instructions+=3;NFSU2_TR(0x4e7ecc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e7ecf:{NFSU2_TR(0x4e7ecf);
__builtin_memmove((R+4),(R+24),4);
}
B4e7ed1:{NFSU2_TR(0x4e7ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7ed6ull));
TAIL_STATIC(0x4d5d70u,4d5);
}
B4e7ed6:L4e7ed6:{c.instructions+=2;NFSU2_TR(0x4e7ed6);
__builtin_memmove((R+4),(R+24),4);
}
B4e7ed8:{NFSU2_TR(0x4e7ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7eddull));
TAIL_STATIC(0x4d5e70u,4d5);
}
B4e7edd:L4e7edd:{c.instructions+=4;NFSU2_TR(0x4e7edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7ee0:{NFSU2_TR(0x4e7ee0);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ee5:{NFSU2_TR(0x4e7ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ee6:{NFSU2_TR(0x4e7ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7eebull));
TAIL_STATIC(0x537a60u,537);
}
B4e7eeb:L4e7eeb:{c.instructions+=5;NFSU2_TR(0x4e7eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7ef1:{NFSU2_TR(0x4e7ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e7ef4:{NFSU2_TR(0x4e7ef4);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ef9:{NFSU2_TR(0x4e7ef9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7efa:{NFSU2_TR(0x4e7efa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7effull));
TAIL_STATIC(0x537a60u,537);
}
B4e7eff:L4e7eff:{c.instructions+=12;NFSU2_TR(0x4e7eff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e7f03:{NFSU2_TR(0x4e7f03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e7f06:{NFSU2_TR(0x4e7f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7f0c:{NFSU2_TR(0x4e7f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7f0d:{NFSU2_TR(0x4e7f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e7f17:{NFSU2_TR(0x4e7f17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e7f1e:{NFSU2_TR(0x4e7f1e);
__builtin_memmove((R+0),(R+24),4);
}
B4e7f20:{NFSU2_TR(0x4e7f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7f21:{NFSU2_TR(0x4e7f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e7f22:{NFSU2_TR(0x4e7f22);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7f29:{NFSU2_TR(0x4e7f29);
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
B4e7f2c:{NFSU2_TR(0x4e7f2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7f30:L4e7f30:{c.instructions+=3;NFSU2_TR(0x4e7f30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f31:{NFSU2_TR(0x4e7f31);
__builtin_memmove((R+24),(R+4),4);
}
B4e7f33:{NFSU2_TR(0x4e7f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f38ull));
TAIL_STATIC(0x4d5d10u,4d5);
}
B4e7f38:L4e7f38:{c.instructions+=2;NFSU2_TR(0x4e7f38);
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
B4e7f3d:{NFSU2_TR(0x4e7f3d);
if(r1(R+518)){{goto L4e7f48;}}
}
B4e7f3f:L4e7f3f:{c.instructions+=2;NFSU2_TR(0x4e7f3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f40:{NFSU2_TR(0x4e7f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f45ull));
TAIL_STATIC(0x575630u,575);
}
B4e7f45:L4e7f45:{c.instructions+=1;NFSU2_TR(0x4e7f45);
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
B4e7f48:L4e7f48:{c.instructions+=3;NFSU2_TR(0x4e7f48);
__builtin_memmove((R+0),(R+24),4);
}
B4e7f4a:{NFSU2_TR(0x4e7f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7f4b:{NFSU2_TR(0x4e7f4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e7f50:L4e7f50:{c.instructions+=7;NFSU2_TR(0x4e7f50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f51:{NFSU2_TR(0x4e7f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f52:{NFSU2_TR(0x4e7f52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f53:{NFSU2_TR(0x4e7f53);
__builtin_memmove((R+24),(R+4),4);
}
B4e7f55:{NFSU2_TR(0x4e7f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e7f58:{NFSU2_TR(0x4e7f58);
u8 U[4];
w4(U+0,u32(0x797a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f5d:{NFSU2_TR(0x4e7f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f62ull));
TAIL_STATIC(0x505450u,505);
}
B4e7f62:L4e7f62:{c.instructions+=3;NFSU2_TR(0x4e7f62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f63:{NFSU2_TR(0x4e7f63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f64:{NFSU2_TR(0x4e7f64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f69ull));
TAIL_STATIC(0x537a60u,537);
}
B4e7f69:L4e7f69:{c.instructions+=4;NFSU2_TR(0x4e7f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e7f6c:{NFSU2_TR(0x4e7f6c);
u8 U[4];
w4(U+0,u32(0x7979f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f71:{NFSU2_TR(0x4e7f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7f74:{NFSU2_TR(0x4e7f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f79ull));
TAIL_STATIC(0x505450u,505);
}
B4e7f79:L4e7f79:{c.instructions+=3;NFSU2_TR(0x4e7f79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f7a:{NFSU2_TR(0x4e7f7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f7b:{NFSU2_TR(0x4e7f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f80ull));
TAIL_STATIC(0x537a60u,537);
}
B4e7f80:L4e7f80:{c.instructions+=4;NFSU2_TR(0x4e7f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e7f86:{NFSU2_TR(0x4e7f86);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f8b:{NFSU2_TR(0x4e7f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e7f8e:{NFSU2_TR(0x4e7f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7f93ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e7f93:L4e7f93:{c.instructions+=3;NFSU2_TR(0x4e7f93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4e7f96:{NFSU2_TR(0x4e7f96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e7f98:{NFSU2_TR(0x4e7f98);
if(r1(R+518)){{goto L4e7fab;}}
}
B4e7f9a:L4e7f9a:{c.instructions+=2;NFSU2_TR(0x4e7f9a);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7f9f:{NFSU2_TR(0x4e7f9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7fa4ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e7fa4:L4e7fa4:{c.instructions+=3;NFSU2_TR(0x4e7fa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7fa7:{NFSU2_TR(0x4e7fa7);
__builtin_memmove((R+28),(R+0),4);
}
B4e7fa9:{NFSU2_TR(0x4e7fa9);
{goto L4e7fd4;}
}
B4e7fab:L4e7fab:{c.instructions+=2;NFSU2_TR(0x4e7fab);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7fb0:{NFSU2_TR(0x4e7fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7fb5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e7fb5:L4e7fb5:{c.instructions+=3;NFSU2_TR(0x4e7fb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7fb8:{NFSU2_TR(0x4e7fb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e7fba:{NFSU2_TR(0x4e7fba);
if(r1(R+518)){{goto L4e7fd2;}}
}
B4e7fbc:L4e7fbc:{c.instructions+=2;NFSU2_TR(0x4e7fbc);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7fc1:{NFSU2_TR(0x4e7fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7fc6ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e7fc6:L4e7fc6:{c.instructions+=3;NFSU2_TR(0x4e7fc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e7fc9:{NFSU2_TR(0x4e7fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7fcb:{NFSU2_TR(0x4e7fcb);
if(r1(R+518)){{goto L4e7fd2;}}
}
B4e7fcd:L4e7fcd:{c.instructions+=2;NFSU2_TR(0x4e7fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e7fd0:{NFSU2_TR(0x4e7fd0);
{goto L4e7fd4;}
}
B4e7fd2:L4e7fd2:{c.instructions+=1;NFSU2_TR(0x4e7fd2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e7fd4:L4e7fd4:{c.instructions+=3;NFSU2_TR(0x4e7fd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7fd5:{NFSU2_TR(0x4e7fd5);
w4(R+4,u32(0x8371b0ull));
}
B4e7fda:{NFSU2_TR(0x4e7fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7fdfull));
TAIL_STATIC(0x413440u,413);
}
B4e7fdf:L4e7fdf:{c.instructions+=3;NFSU2_TR(0x4e7fdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e7fe1:{NFSU2_TR(0x4e7fe1);
s4(0x83623c,u32(0x1ull));
}
B4e7feb:{NFSU2_TR(0x4e7feb);
if(r1(R+518)){{goto L4e7ffb;}}
}
B4e7fed:L4e7fed:{c.instructions+=4;NFSU2_TR(0x4e7fed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7fef:{NFSU2_TR(0x4e7fef);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e7ff4:{NFSU2_TR(0x4e7ff4);
__builtin_memmove((R+4),(R+28),4);
}
B4e7ff6:{NFSU2_TR(0x4e7ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e7ffbull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e7ffb:L4e7ffb:{c.instructions+=4;NFSU2_TR(0x4e7ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e7ffc:{NFSU2_TR(0x4e7ffc);
__builtin_memmove((R+4),(R+24),4);
}
B4e7ffe:{NFSU2_TR(0x4e7ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e7fff:{NFSU2_TR(0x4e7fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
TAIL_STATIC(0x4e8000u,4e8);
}
XIT:NFSU2_TR_EXIT(0x4e7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
