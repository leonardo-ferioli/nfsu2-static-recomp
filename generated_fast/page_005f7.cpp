#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_56f(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5f7,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5f7,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 page_5f7(Cpu& c){return body_5f7(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5f7(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5f7002:goto L5f7002;
case 0x5f7004:goto L5f7004;
case 0x5f7006:c.instructions+=1;goto B5f7006;
case 0x5f700a:goto L5f700a;
case 0x5f700f:c.instructions+=9;goto B5f700f;
case 0x5f7012:c.instructions+=8;goto B5f7012;
case 0x5f7014:c.instructions+=7;goto B5f7014;
case 0x5f7018:c.instructions+=6;goto B5f7018;
case 0x5f701c:c.instructions+=5;goto B5f701c;
case 0x5f7022:c.instructions+=4;goto B5f7022;
case 0x5f7024:c.instructions+=3;goto B5f7024;
case 0x5f7028:c.instructions+=2;goto B5f7028;
case 0x5f702a:c.instructions+=1;goto B5f702a;
case 0x5f702c:goto L5f702c;
case 0x5f7030:c.instructions+=6;goto B5f7030;
case 0x5f7031:c.instructions+=5;goto B5f7031;
case 0x5f7036:c.instructions+=4;goto B5f7036;
case 0x5f703a:c.instructions+=3;goto B5f703a;
case 0x5f703b:c.instructions+=2;goto B5f703b;
case 0x5f703d:c.instructions+=1;goto B5f703d;
case 0x5f7042:goto L5f7042;
case 0x5f7044:goto L5f7044;
case 0x5f7048:c.instructions+=6;goto B5f7048;
case 0x5f7049:c.instructions+=5;goto B5f7049;
case 0x5f704e:c.instructions+=4;goto B5f704e;
case 0x5f7052:c.instructions+=3;goto B5f7052;
case 0x5f7053:c.instructions+=2;goto B5f7053;
case 0x5f7055:c.instructions+=1;goto B5f7055;
case 0x5f705a:goto L5f705a;
case 0x5f705e:c.instructions+=3;goto B5f705e;
case 0x5f705f:c.instructions+=2;goto B5f705f;
case 0x5f7063:c.instructions+=1;goto B5f7063;
case 0x5f7068:goto L5f7068;
case 0x5f706c:c.instructions+=7;goto B5f706c;
case 0x5f7072:c.instructions+=6;goto B5f7072;
case 0x5f7076:c.instructions+=5;goto B5f7076;
case 0x5f7077:c.instructions+=4;goto B5f7077;
case 0x5f707d:c.instructions+=3;goto B5f707d;
case 0x5f7080:c.instructions+=2;goto B5f7080;
case 0x5f7084:c.instructions+=1;goto B5f7084;
case 0x5f7089:goto L5f7089;
case 0x5f708d:c.instructions+=3;goto B5f708d;
case 0x5f7091:c.instructions+=2;goto B5f7091;
case 0x5f7093:c.instructions+=1;goto B5f7093;
case 0x5f7095:goto L5f7095;
case 0x5f7099:c.instructions+=1;goto B5f7099;
case 0x5f709b:goto L5f709b;
case 0x5f709d:goto L5f709d;
case 0x5f70a1:c.instructions+=3;goto B5f70a1;
case 0x5f70a2:c.instructions+=2;goto B5f70a2;
case 0x5f70a6:c.instructions+=1;goto B5f70a6;
case 0x5f70ab:goto L5f70ab;
case 0x5f70af:c.instructions+=7;goto B5f70af;
case 0x5f70b5:c.instructions+=6;goto B5f70b5;
case 0x5f70b9:c.instructions+=5;goto B5f70b9;
case 0x5f70ba:c.instructions+=4;goto B5f70ba;
case 0x5f70c0:c.instructions+=3;goto B5f70c0;
case 0x5f70c3:c.instructions+=2;goto B5f70c3;
case 0x5f70c7:c.instructions+=1;goto B5f70c7;
case 0x5f70cc:goto L5f70cc;
case 0x5f70d0:c.instructions+=3;goto B5f70d0;
case 0x5f70d4:c.instructions+=2;goto B5f70d4;
case 0x5f70d6:c.instructions+=1;goto B5f70d6;
case 0x5f70d8:goto L5f70d8;
case 0x5f70dc:c.instructions+=1;goto B5f70dc;
case 0x5f70de:goto L5f70de;
case 0x5f70e0:goto L5f70e0;
case 0x5f70e4:c.instructions+=6;goto B5f70e4;
case 0x5f70e8:c.instructions+=5;goto B5f70e8;
case 0x5f70ee:c.instructions+=4;goto B5f70ee;
case 0x5f70f2:c.instructions+=3;goto B5f70f2;
case 0x5f70f4:c.instructions+=2;goto B5f70f4;
case 0x5f70f7:c.instructions+=1;goto B5f70f7;
case 0x5f70f9:goto L5f70f9;
case 0x5f70ff:c.instructions+=2;goto B5f70ff;
case 0x5f7103:c.instructions+=1;goto B5f7103;
case 0x5f7105:goto L5f7105;
case 0x5f7109:c.instructions+=4;goto B5f7109;
case 0x5f710f:c.instructions+=3;goto B5f710f;
case 0x5f7111:c.instructions+=2;goto B5f7111;
case 0x5f7114:c.instructions+=1;goto B5f7114;
case 0x5f7116:goto L5f7116;
case 0x5f711a:c.instructions+=2;goto B5f711a;
case 0x5f7120:c.instructions+=1;goto B5f7120;
case 0x5f7124:goto L5f7124;
case 0x5f7128:c.instructions+=18;goto B5f7128;
case 0x5f712c:c.instructions+=17;goto B5f712c;
case 0x5f7130:c.instructions+=16;goto B5f7130;
case 0x5f7134:c.instructions+=15;goto B5f7134;
case 0x5f7138:c.instructions+=14;goto B5f7138;
case 0x5f7139:c.instructions+=13;goto B5f7139;
case 0x5f713d:c.instructions+=12;goto B5f713d;
case 0x5f713e:c.instructions+=11;goto B5f713e;
case 0x5f7140:c.instructions+=10;goto B5f7140;
case 0x5f7145:c.instructions+=9;goto B5f7145;
case 0x5f7147:c.instructions+=8;goto B5f7147;
case 0x5f7149:c.instructions+=7;goto B5f7149;
case 0x5f714b:c.instructions+=6;goto B5f714b;
case 0x5f714d:c.instructions+=5;goto B5f714d;
case 0x5f714f:c.instructions+=4;goto B5f714f;
case 0x5f7151:c.instructions+=3;goto B5f7151;
case 0x5f7153:c.instructions+=2;goto B5f7153;
case 0x5f7157:c.instructions+=1;goto B5f7157;
case 0x5f715c:goto L5f715c;
case 0x5f7160:c.instructions+=12;goto B5f7160;
case 0x5f7165:c.instructions+=11;goto B5f7165;
case 0x5f7168:c.instructions+=10;goto B5f7168;
case 0x5f716c:c.instructions+=9;goto B5f716c;
case 0x5f7170:c.instructions+=8;goto B5f7170;
case 0x5f7176:c.instructions+=7;goto B5f7176;
case 0x5f717a:c.instructions+=6;goto B5f717a;
case 0x5f7180:c.instructions+=5;goto B5f7180;
case 0x5f7184:c.instructions+=4;goto B5f7184;
case 0x5f718a:c.instructions+=3;goto B5f718a;
case 0x5f718c:c.instructions+=2;goto B5f718c;
case 0x5f718f:c.instructions+=1;goto B5f718f;
case 0x5f7191:goto L5f7191;
case 0x5f7193:c.instructions+=5;goto B5f7193;
case 0x5f7197:c.instructions+=4;goto B5f7197;
case 0x5f719b:c.instructions+=3;goto B5f719b;
case 0x5f719f:c.instructions+=2;goto B5f719f;
case 0x5f71a3:c.instructions+=1;goto B5f71a3;
case 0x5f71a5:goto L5f71a5;
case 0x5f71a7:c.instructions+=4;goto B5f71a7;
case 0x5f71ab:c.instructions+=3;goto B5f71ab;
case 0x5f71ad:c.instructions+=2;goto B5f71ad;
case 0x5f71b1:c.instructions+=1;goto B5f71b1;
case 0x5f71b3:goto L5f71b3;
case 0x5f71b9:c.instructions+=3;goto B5f71b9;
case 0x5f71bb:c.instructions+=2;goto B5f71bb;
case 0x5f71be:c.instructions+=1;goto B5f71be;
case 0x5f71c0:goto L5f71c0;
case 0x5f71c6:c.instructions+=3;goto B5f71c6;
case 0x5f71c8:c.instructions+=2;goto B5f71c8;
case 0x5f71cb:c.instructions+=1;goto B5f71cb;
case 0x5f71cd:goto L5f71cd;
case 0x5f71cf:goto L5f71cf;
case 0x5f71d1:goto L5f71d1;
case 0x5f71d3:c.instructions+=1;goto B5f71d3;
case 0x5f71d9:goto L5f71d9;
case 0x5f71dd:c.instructions+=5;goto B5f71dd;
case 0x5f71e1:c.instructions+=4;goto B5f71e1;
case 0x5f71e7:c.instructions+=3;goto B5f71e7;
case 0x5f71e9:c.instructions+=2;goto B5f71e9;
case 0x5f71ec:c.instructions+=1;goto B5f71ec;
case 0x5f71ee:goto L5f71ee;
case 0x5f71f0:c.instructions+=1;goto B5f71f0;
case 0x5f71f6:goto L5f71f6;
case 0x5f71f8:c.instructions+=1;goto B5f71f8;
case 0x5f71fd:goto L5f71fd;
case 0x5f7201:c.instructions+=4;goto B5f7201;
case 0x5f7205:c.instructions+=3;goto B5f7205;
case 0x5f7207:c.instructions+=2;goto B5f7207;
case 0x5f720d:c.instructions+=1;goto B5f720d;
case 0x5f7212:goto L5f7212;
case 0x5f7218:c.instructions+=5;goto B5f7218;
case 0x5f721c:c.instructions+=4;goto B5f721c;
case 0x5f7220:c.instructions+=3;goto B5f7220;
case 0x5f7222:c.instructions+=2;goto B5f7222;
case 0x5f7225:c.instructions+=1;goto B5f7225;
case 0x5f7227:goto L5f7227;
case 0x5f7229:c.instructions+=4;goto B5f7229;
case 0x5f722f:c.instructions+=3;goto B5f722f;
case 0x5f7231:c.instructions+=2;goto B5f7231;
case 0x5f7234:c.instructions+=1;goto B5f7234;
case 0x5f7236:goto L5f7236;
case 0x5f723a:c.instructions+=8;goto B5f723a;
case 0x5f723c:c.instructions+=7;goto B5f723c;
case 0x5f723e:c.instructions+=6;goto B5f723e;
case 0x5f7241:c.instructions+=5;goto B5f7241;
case 0x5f7244:c.instructions+=4;goto B5f7244;
case 0x5f724b:c.instructions+=3;goto B5f724b;
case 0x5f7252:c.instructions+=2;goto B5f7252;
case 0x5f7254:c.instructions+=1;goto B5f7254;
case 0x5f7256:goto L5f7256;
case 0x5f7258:goto L5f7258;
case 0x5f725d:c.instructions+=10;goto B5f725d;
case 0x5f7263:c.instructions+=9;goto B5f7263;
case 0x5f7265:c.instructions+=8;goto B5f7265;
case 0x5f7267:c.instructions+=7;goto B5f7267;
case 0x5f7268:c.instructions+=6;goto B5f7268;
case 0x5f7269:c.instructions+=5;goto B5f7269;
case 0x5f726b:c.instructions+=4;goto B5f726b;
case 0x5f726f:c.instructions+=3;goto B5f726f;
case 0x5f7270:c.instructions+=2;goto B5f7270;
case 0x5f7272:c.instructions+=1;goto B5f7272;
case 0x5f7277:goto L5f7277;
case 0x5f7279:c.instructions+=2;goto B5f7279;
case 0x5f727b:c.instructions+=1;goto B5f727b;
case 0x5f7281:goto L5f7281;
case 0x5f7283:c.instructions+=20;goto B5f7283;
case 0x5f7285:c.instructions+=19;goto B5f7285;
case 0x5f7288:c.instructions+=18;goto B5f7288;
case 0x5f728b:c.instructions+=17;goto B5f728b;
case 0x5f728d:c.instructions+=16;goto B5f728d;
case 0x5f728f:c.instructions+=15;goto B5f728f;
case 0x5f7291:c.instructions+=14;goto B5f7291;
case 0x5f7293:c.instructions+=13;goto B5f7293;
case 0x5f7295:c.instructions+=12;goto B5f7295;
case 0x5f7297:c.instructions+=11;goto B5f7297;
case 0x5f7299:c.instructions+=10;goto B5f7299;
case 0x5f729b:c.instructions+=9;goto B5f729b;
case 0x5f729f:c.instructions+=8;goto B5f729f;
case 0x5f72a3:c.instructions+=7;goto B5f72a3;
case 0x5f72a9:c.instructions+=6;goto B5f72a9;
case 0x5f72af:c.instructions+=5;goto B5f72af;
case 0x5f72b1:c.instructions+=4;goto B5f72b1;
case 0x5f72b3:c.instructions+=3;goto B5f72b3;
case 0x5f72b5:c.instructions+=2;goto B5f72b5;
case 0x5f72b8:c.instructions+=1;goto B5f72b8;
case 0x5f72be:goto L5f72be;
case 0x5f72c3:c.instructions+=11;goto B5f72c3;
case 0x5f72ca:c.instructions+=10;goto B5f72ca;
case 0x5f72d1:c.instructions+=9;goto B5f72d1;
case 0x5f72d5:c.instructions+=8;goto B5f72d5;
case 0x5f72db:c.instructions+=7;goto B5f72db;
case 0x5f72e0:c.instructions+=6;goto B5f72e0;
case 0x5f72e6:c.instructions+=5;goto B5f72e6;
case 0x5f72ea:c.instructions+=4;goto B5f72ea;
case 0x5f72ee:c.instructions+=3;goto B5f72ee;
case 0x5f72ef:c.instructions+=2;goto B5f72ef;
case 0x5f72f0:c.instructions+=1;goto B5f72f0;
case 0x5f72f5:goto L5f72f5;
case 0x5f72fb:c.instructions+=3;goto B5f72fb;
case 0x5f72fd:c.instructions+=2;goto B5f72fd;
case 0x5f7300:c.instructions+=1;goto B5f7300;
case 0x5f7302:goto L5f7302;
case 0x5f7308:c.instructions+=3;goto B5f7308;
case 0x5f730a:c.instructions+=2;goto B5f730a;
case 0x5f730d:c.instructions+=1;goto B5f730d;
case 0x5f730f:goto L5f730f;
case 0x5f7313:c.instructions+=2;goto B5f7313;
case 0x5f731e:c.instructions+=1;goto B5f731e;
case 0x5f7323:goto L5f7323;
case 0x5f7327:c.instructions+=5;goto B5f7327;
case 0x5f732d:c.instructions+=4;goto B5f732d;
case 0x5f7335:c.instructions+=3;goto B5f7335;
case 0x5f733b:c.instructions+=2;goto B5f733b;
case 0x5f733d:c.instructions+=1;goto B5f733d;
case 0x5f7340:goto L5f7340;
case 0x5f7342:c.instructions+=6;goto B5f7342;
case 0x5f7346:c.instructions+=5;goto B5f7346;
case 0x5f734c:c.instructions+=4;goto B5f734c;
case 0x5f734f:c.instructions+=3;goto B5f734f;
case 0x5f7351:c.instructions+=2;goto B5f7351;
case 0x5f7354:c.instructions+=1;goto B5f7354;
case 0x5f7356:goto L5f7356;
case 0x5f7358:c.instructions+=1;goto B5f7358;
case 0x5f735a:goto L5f735a;
case 0x5f735c:goto L5f735c;
case 0x5f7360:c.instructions+=5;goto B5f7360;
case 0x5f7362:c.instructions+=4;goto B5f7362;
case 0x5f7363:c.instructions+=3;goto B5f7363;
case 0x5f7369:c.instructions+=2;goto B5f7369;
case 0x5f736d:c.instructions+=1;goto B5f736d;
case 0x5f736f:goto L5f736f;
case 0x5f7371:c.instructions+=1;goto B5f7371;
case 0x5f7376:goto L5f7376;
case 0x5f7378:goto L5f7378;
case 0x5f737f:c.instructions+=2;goto B5f737f;
case 0x5f7381:c.instructions+=1;goto B5f7381;
case 0x5f7383:goto L5f7383;
case 0x5f7388:goto L5f7388;
case 0x5f738e:c.instructions+=8;goto B5f738e;
case 0x5f738f:c.instructions+=7;goto B5f738f;
case 0x5f7391:c.instructions+=6;goto B5f7391;
case 0x5f7394:c.instructions+=5;goto B5f7394;
case 0x5f739a:c.instructions+=4;goto B5f739a;
case 0x5f739e:c.instructions+=3;goto B5f739e;
case 0x5f73a2:c.instructions+=2;goto B5f73a2;
case 0x5f73a5:c.instructions+=1;goto B5f73a5;
case 0x5f73a7:goto L5f73a7;
case 0x5f73ab:c.instructions+=12;goto B5f73ab;
case 0x5f73ad:c.instructions+=11;goto B5f73ad;
case 0x5f73b4:c.instructions+=10;goto B5f73b4;
case 0x5f73b6:c.instructions+=9;goto B5f73b6;
case 0x5f73b7:c.instructions+=8;goto B5f73b7;
case 0x5f73b9:c.instructions+=7;goto B5f73b9;
case 0x5f73c0:c.instructions+=6;goto B5f73c0;
case 0x5f73c1:c.instructions+=5;goto B5f73c1;
case 0x5f73c2:c.instructions+=4;goto B5f73c2;
case 0x5f73c3:c.instructions+=3;goto B5f73c3;
case 0x5f73c5:c.instructions+=2;goto B5f73c5;
case 0x5f73c6:c.instructions+=1;goto B5f73c6;
case 0x5f73d0:goto L5f73d0;
case 0x5f73d2:c.instructions+=19;goto B5f73d2;
case 0x5f73d4:c.instructions+=18;goto B5f73d4;
case 0x5f73d7:c.instructions+=17;goto B5f73d7;
case 0x5f73da:c.instructions+=16;goto B5f73da;
case 0x5f73dd:c.instructions+=15;goto B5f73dd;
case 0x5f73e2:c.instructions+=14;goto B5f73e2;
case 0x5f73e5:c.instructions+=13;goto B5f73e5;
case 0x5f73e7:c.instructions+=12;goto B5f73e7;
case 0x5f73ea:c.instructions+=11;goto B5f73ea;
case 0x5f73ed:c.instructions+=10;goto B5f73ed;
case 0x5f73f0:c.instructions+=9;goto B5f73f0;
case 0x5f73f3:c.instructions+=8;goto B5f73f3;
case 0x5f73f6:c.instructions+=7;goto B5f73f6;
case 0x5f73f9:c.instructions+=6;goto B5f73f9;
case 0x5f73fc:c.instructions+=5;goto B5f73fc;
case 0x5f7403:c.instructions+=4;goto B5f7403;
case 0x5f7406:c.instructions+=3;goto B5f7406;
case 0x5f7409:c.instructions+=2;goto B5f7409;
case 0x5f740c:c.instructions+=1;goto B5f740c;
case 0x5f7410:goto L5f7410;
case 0x5f7411:c.instructions+=12;goto B5f7411;
case 0x5f7413:c.instructions+=11;goto B5f7413;
case 0x5f7416:c.instructions+=10;goto B5f7416;
case 0x5f7419:c.instructions+=9;goto B5f7419;
case 0x5f741c:c.instructions+=8;goto B5f741c;
case 0x5f741d:c.instructions+=7;goto B5f741d;
case 0x5f741e:c.instructions+=6;goto B5f741e;
case 0x5f7420:c.instructions+=5;goto B5f7420;
case 0x5f7427:c.instructions+=4;goto B5f7427;
case 0x5f7428:c.instructions+=3;goto B5f7428;
case 0x5f742a:c.instructions+=2;goto B5f742a;
case 0x5f742f:c.instructions+=1;goto B5f742f;
case 0x5f7435:goto L5f7435;
case 0x5f7438:c.instructions+=2;goto B5f7438;
case 0x5f743b:c.instructions+=1;goto B5f743b;
case 0x5f743d:goto L5f743d;
case 0x5f7443:c.instructions+=6;goto B5f7443;
case 0x5f7445:c.instructions+=5;goto B5f7445;
case 0x5f7449:c.instructions+=4;goto B5f7449;
case 0x5f744b:c.instructions+=3;goto B5f744b;
case 0x5f744d:c.instructions+=2;goto B5f744d;
case 0x5f7450:c.instructions+=1;goto B5f7450;
case 0x5f7456:goto L5f7456;
case 0x5f7458:c.instructions+=2;goto B5f7458;
case 0x5f745c:c.instructions+=1;goto B5f745c;
case 0x5f7461:goto L5f7461;
case 0x5f7467:c.instructions+=6;goto B5f7467;
case 0x5f746a:c.instructions+=5;goto B5f746a;
case 0x5f7470:c.instructions+=4;goto B5f7470;
case 0x5f7472:c.instructions+=3;goto B5f7472;
case 0x5f7474:c.instructions+=2;goto B5f7474;
case 0x5f7477:c.instructions+=1;goto B5f7477;
case 0x5f7479:goto L5f7479;
case 0x5f747b:c.instructions+=2;goto B5f747b;
case 0x5f7483:c.instructions+=1;goto B5f7483;
case 0x5f7485:goto L5f7485;
case 0x5f7489:goto L5f7489;
case 0x5f748b:c.instructions+=1;goto B5f748b;
case 0x5f748e:goto L5f748e;
case 0x5f7492:c.instructions+=8;goto B5f7492;
case 0x5f7496:c.instructions+=7;goto B5f7496;
case 0x5f749c:c.instructions+=6;goto B5f749c;
case 0x5f749e:c.instructions+=5;goto B5f749e;
case 0x5f74a2:c.instructions+=4;goto B5f74a2;
case 0x5f74a4:c.instructions+=3;goto B5f74a4;
case 0x5f74a6:c.instructions+=2;goto B5f74a6;
case 0x5f74a9:c.instructions+=1;goto B5f74a9;
case 0x5f74ab:goto L5f74ab;
case 0x5f74af:c.instructions+=1;goto B5f74af;
case 0x5f74b1:goto L5f74b1;
case 0x5f74b3:goto L5f74b3;
case 0x5f74b6:c.instructions+=2;goto B5f74b6;
case 0x5f74b9:c.instructions+=1;goto B5f74b9;
case 0x5f74be:goto L5f74be;
case 0x5f74c2:c.instructions+=4;goto B5f74c2;
case 0x5f74c4:c.instructions+=3;goto B5f74c4;
case 0x5f74c6:c.instructions+=2;goto B5f74c6;
case 0x5f74c9:c.instructions+=1;goto B5f74c9;
case 0x5f74cb:goto L5f74cb;
case 0x5f74cf:c.instructions+=1;goto B5f74cf;
case 0x5f74d1:goto L5f74d1;
case 0x5f74d3:goto L5f74d3;
case 0x5f74d5:c.instructions+=4;goto B5f74d5;
case 0x5f74d9:c.instructions+=3;goto B5f74d9;
case 0x5f74db:c.instructions+=2;goto B5f74db;
case 0x5f74de:c.instructions+=1;goto B5f74de;
case 0x5f74e0:goto L5f74e0;
case 0x5f74e2:c.instructions+=1;goto B5f74e2;
case 0x5f74e6:goto L5f74e6;
case 0x5f74ec:c.instructions+=3;goto B5f74ec;
case 0x5f74ee:c.instructions+=2;goto B5f74ee;
case 0x5f74f1:c.instructions+=1;goto B5f74f1;
case 0x5f74f3:goto L5f74f3;
case 0x5f74f9:c.instructions+=3;goto B5f74f9;
case 0x5f74fb:c.instructions+=2;goto B5f74fb;
case 0x5f74fe:c.instructions+=1;goto B5f74fe;
case 0x5f7500:goto L5f7500;
case 0x5f7502:c.instructions+=1;goto B5f7502;
case 0x5f7504:goto L5f7504;
case 0x5f7506:c.instructions+=3;goto B5f7506;
case 0x5f7508:c.instructions+=2;goto B5f7508;
case 0x5f750b:c.instructions+=1;goto B5f750b;
case 0x5f750d:goto L5f750d;
case 0x5f750f:c.instructions+=1;goto B5f750f;
case 0x5f7511:goto L5f7511;
case 0x5f7513:goto L5f7513;
case 0x5f7518:c.instructions+=2;goto B5f7518;
case 0x5f751a:c.instructions+=1;goto B5f751a;
case 0x5f751c:goto L5f751c;
case 0x5f7521:c.instructions+=2;goto B5f7521;
case 0x5f7523:c.instructions+=1;goto B5f7523;
case 0x5f7529:goto L5f7529;
case 0x5f752e:c.instructions+=12;goto B5f752e;
case 0x5f7535:c.instructions+=11;goto B5f7535;
case 0x5f753b:c.instructions+=10;goto B5f753b;
case 0x5f753c:c.instructions+=9;goto B5f753c;
case 0x5f7543:c.instructions+=8;goto B5f7543;
case 0x5f7545:c.instructions+=7;goto B5f7545;
case 0x5f754b:c.instructions+=6;goto B5f754b;
case 0x5f7550:c.instructions+=5;goto B5f7550;
case 0x5f7554:c.instructions+=4;goto B5f7554;
case 0x5f755a:c.instructions+=3;goto B5f755a;
case 0x5f755d:c.instructions+=2;goto B5f755d;
case 0x5f755e:c.instructions+=1;goto B5f755e;
case 0x5f7563:goto L5f7563;
case 0x5f7565:c.instructions+=4;goto B5f7565;
case 0x5f756b:c.instructions+=3;goto B5f756b;
case 0x5f756d:c.instructions+=2;goto B5f756d;
case 0x5f7570:c.instructions+=1;goto B5f7570;
case 0x5f7572:goto L5f7572;
case 0x5f7575:c.instructions+=4;goto B5f7575;
case 0x5f757b:c.instructions+=3;goto B5f757b;
case 0x5f757d:c.instructions+=2;goto B5f757d;
case 0x5f7580:c.instructions+=1;goto B5f7580;
case 0x5f7582:goto L5f7582;
case 0x5f7588:c.instructions+=1;goto B5f7588;
case 0x5f758d:goto L5f758d;
case 0x5f7593:c.instructions+=2;goto B5f7593;
case 0x5f7599:c.instructions+=1;goto B5f7599;
case 0x5f759e:goto L5f759e;
case 0x5f75a1:c.instructions+=2;goto B5f75a1;
case 0x5f75a7:c.instructions+=1;goto B5f75a7;
case 0x5f75aa:goto L5f75aa;
case 0x5f75b0:c.instructions+=7;goto B5f75b0;
case 0x5f75b3:c.instructions+=6;goto B5f75b3;
case 0x5f75b9:c.instructions+=5;goto B5f75b9;
case 0x5f75bd:c.instructions+=4;goto B5f75bd;
case 0x5f75c3:c.instructions+=3;goto B5f75c3;
case 0x5f75c5:c.instructions+=2;goto B5f75c5;
case 0x5f75c8:c.instructions+=1;goto B5f75c8;
case 0x5f75ce:goto L5f75ce;
case 0x5f75d4:c.instructions+=5;goto B5f75d4;
case 0x5f75d8:c.instructions+=4;goto B5f75d8;
case 0x5f75db:c.instructions+=3;goto B5f75db;
case 0x5f75de:c.instructions+=2;goto B5f75de;
case 0x5f75e0:c.instructions+=1;goto B5f75e0;
case 0x5f75e2:goto L5f75e2;
case 0x5f75e7:c.instructions+=1;goto B5f75e7;
case 0x5f75e9:goto L5f75e9;
case 0x5f75ef:c.instructions+=5;goto B5f75ef;
case 0x5f75f5:c.instructions+=4;goto B5f75f5;
case 0x5f75fb:c.instructions+=3;goto B5f75fb;
case 0x5f75fd:c.instructions+=2;goto B5f75fd;
case 0x5f7600:c.instructions+=1;goto B5f7600;
case 0x5f7602:goto L5f7602;
case 0x5f7606:c.instructions+=3;goto B5f7606;
case 0x5f760c:c.instructions+=2;goto B5f760c;
case 0x5f7612:c.instructions+=1;goto B5f7612;
case 0x5f7617:goto L5f7617;
case 0x5f761a:goto L5f761a;
case 0x5f761d:c.instructions+=2;goto B5f761d;
case 0x5f761f:c.instructions+=1;goto B5f761f;
case 0x5f7621:goto L5f7621;
case 0x5f7626:c.instructions+=1;goto B5f7626;
case 0x5f7628:goto L5f7628;
case 0x5f762e:c.instructions+=5;goto B5f762e;
case 0x5f7634:c.instructions+=4;goto B5f7634;
case 0x5f763a:c.instructions+=3;goto B5f763a;
case 0x5f763c:c.instructions+=2;goto B5f763c;
case 0x5f763f:c.instructions+=1;goto B5f763f;
case 0x5f7641:goto L5f7641;
case 0x5f7645:c.instructions+=3;goto B5f7645;
case 0x5f764b:c.instructions+=2;goto B5f764b;
case 0x5f7651:c.instructions+=1;goto B5f7651;
case 0x5f7656:goto L5f7656;
case 0x5f7659:goto L5f7659;
case 0x5f765f:c.instructions+=3;goto B5f765f;
case 0x5f7662:c.instructions+=2;goto B5f7662;
case 0x5f7664:c.instructions+=1;goto B5f7664;
case 0x5f7666:goto L5f7666;
case 0x5f7668:c.instructions+=1;goto B5f7668;
case 0x5f766a:goto L5f766a;
case 0x5f766d:c.instructions+=2;goto B5f766d;
case 0x5f7670:c.instructions+=1;goto B5f7670;
case 0x5f7672:goto L5f7672;
case 0x5f7675:c.instructions+=6;goto B5f7675;
case 0x5f7678:c.instructions+=5;goto B5f7678;
case 0x5f767b:c.instructions+=4;goto B5f767b;
case 0x5f7681:c.instructions+=3;goto B5f7681;
case 0x5f7683:c.instructions+=2;goto B5f7683;
case 0x5f7686:c.instructions+=1;goto B5f7686;
case 0x5f7688:goto L5f7688;
case 0x5f768b:goto L5f768b;
case 0x5f7691:c.instructions+=2;goto B5f7691;
case 0x5f7693:c.instructions+=1;goto B5f7693;
case 0x5f7695:goto L5f7695;
case 0x5f7698:goto L5f7698;
case 0x5f769f:c.instructions+=1;goto B5f769f;
case 0x5f76a1:goto L5f76a1;
case 0x5f76a4:c.instructions+=3;goto B5f76a4;
case 0x5f76a7:c.instructions+=2;goto B5f76a7;
case 0x5f76a9:c.instructions+=1;goto B5f76a9;
case 0x5f76ab:goto L5f76ab;
case 0x5f76b1:c.instructions+=16;goto B5f76b1;
case 0x5f76b2:c.instructions+=15;goto B5f76b2;
case 0x5f76b8:c.instructions+=14;goto B5f76b8;
case 0x5f76bb:c.instructions+=13;goto B5f76bb;
case 0x5f76c1:c.instructions+=12;goto B5f76c1;
case 0x5f76c7:c.instructions+=11;goto B5f76c7;
case 0x5f76c9:c.instructions+=10;goto B5f76c9;
case 0x5f76cf:c.instructions+=9;goto B5f76cf;
case 0x5f76d1:c.instructions+=8;goto B5f76d1;
case 0x5f76d3:c.instructions+=7;goto B5f76d3;
case 0x5f76d9:c.instructions+=6;goto B5f76d9;
case 0x5f76db:c.instructions+=5;goto B5f76db;
case 0x5f76e1:c.instructions+=4;goto B5f76e1;
case 0x5f76e3:c.instructions+=3;goto B5f76e3;
case 0x5f76e9:c.instructions+=2;goto B5f76e9;
case 0x5f76ec:c.instructions+=1;goto B5f76ec;
case 0x5f76f1:goto L5f76f1;
case 0x5f76f4:c.instructions+=6;goto B5f76f4;
case 0x5f76f7:c.instructions+=5;goto B5f76f7;
case 0x5f76fa:c.instructions+=4;goto B5f76fa;
case 0x5f76fd:c.instructions+=3;goto B5f76fd;
case 0x5f76ff:c.instructions+=2;goto B5f76ff;
case 0x5f7702:c.instructions+=1;goto B5f7702;
case 0x5f7704:goto L5f7704;
case 0x5f7707:c.instructions+=1;goto B5f7707;
case 0x5f7709:goto L5f7709;
case 0x5f770b:goto L5f770b;
case 0x5f770e:c.instructions+=4;goto B5f770e;
case 0x5f7714:c.instructions+=3;goto B5f7714;
case 0x5f7716:c.instructions+=2;goto B5f7716;
case 0x5f7719:c.instructions+=1;goto B5f7719;
case 0x5f771b:goto L5f771b;
case 0x5f7722:c.instructions+=1;goto B5f7722;
case 0x5f7728:goto L5f7728;
case 0x5f772d:c.instructions+=2;goto B5f772d;
case 0x5f7730:c.instructions+=1;goto B5f7730;
case 0x5f7736:goto L5f7736;
case 0x5f773d:c.instructions+=1;goto B5f773d;
case 0x5f7743:goto L5f7743;
case 0x5f7745:c.instructions+=5;goto B5f7745;
case 0x5f774b:c.instructions+=4;goto B5f774b;
case 0x5f7753:c.instructions+=3;goto B5f7753;
case 0x5f7757:c.instructions+=2;goto B5f7757;
case 0x5f775b:c.instructions+=1;goto B5f775b;
case 0x5f7760:goto L5f7760;
case 0x5f7761:c.instructions+=2;goto B5f7761;
case 0x5f7764:c.instructions+=1;goto B5f7764;
case 0x5f7769:goto L5f7769;
case 0x5f776b:c.instructions+=1;goto B5f776b;
case 0x5f776d:goto L5f776d;
case 0x5f7771:c.instructions+=6;goto B5f7771;
case 0x5f7775:c.instructions+=5;goto B5f7775;
case 0x5f7779:c.instructions+=4;goto B5f7779;
case 0x5f777b:c.instructions+=3;goto B5f777b;
case 0x5f777c:c.instructions+=2;goto B5f777c;
case 0x5f7780:c.instructions+=1;goto B5f7780;
case 0x5f7784:goto L5f7784;
case 0x5f7788:c.instructions+=5;goto B5f7788;
case 0x5f7789:c.instructions+=4;goto B5f7789;
case 0x5f778c:c.instructions+=3;goto B5f778c;
case 0x5f778f:c.instructions+=2;goto B5f778f;
case 0x5f7793:c.instructions+=1;goto B5f7793;
case 0x5f7795:goto L5f7795;
case 0x5f7799:c.instructions+=4;goto B5f7799;
case 0x5f779c:c.instructions+=3;goto B5f779c;
case 0x5f77a1:c.instructions+=2;goto B5f77a1;
case 0x5f77a5:c.instructions+=1;goto B5f77a5;
case 0x5f77a7:goto L5f77a7;
case 0x5f77ac:c.instructions+=6;goto B5f77ac;
case 0x5f77af:c.instructions+=5;goto B5f77af;
case 0x5f77b5:c.instructions+=4;goto B5f77b5;
case 0x5f77bb:c.instructions+=3;goto B5f77bb;
case 0x5f77bd:c.instructions+=2;goto B5f77bd;
case 0x5f77c0:c.instructions+=1;goto B5f77c0;
case 0x5f77c2:goto L5f77c2;
case 0x5f77c8:c.instructions+=3;goto B5f77c8;
case 0x5f77ca:c.instructions+=2;goto B5f77ca;
case 0x5f77cd:c.instructions+=1;goto B5f77cd;
case 0x5f77cf:goto L5f77cf;
case 0x5f77d6:c.instructions+=6;goto B5f77d6;
case 0x5f77d7:c.instructions+=5;goto B5f77d7;
case 0x5f77d8:c.instructions+=4;goto B5f77d8;
case 0x5f77d9:c.instructions+=3;goto B5f77d9;
case 0x5f77db:c.instructions+=2;goto B5f77db;
case 0x5f77dc:c.instructions+=1;goto B5f77dc;
case 0x5f77df:goto L5f77df;
case 0x5f77e2:c.instructions+=4;goto B5f77e2;
case 0x5f77e8:c.instructions+=3;goto B5f77e8;
case 0x5f77ea:c.instructions+=2;goto B5f77ea;
case 0x5f77ed:c.instructions+=1;goto B5f77ed;
case 0x5f77ef:goto L5f77ef;
case 0x5f77f5:c.instructions+=3;goto B5f77f5;
case 0x5f77f7:c.instructions+=2;goto B5f77f7;
case 0x5f77fa:c.instructions+=1;goto B5f77fa;
case 0x5f77fc:goto L5f77fc;
case 0x5f7802:c.instructions+=6;goto B5f7802;
case 0x5f7805:c.instructions+=5;goto B5f7805;
case 0x5f7809:c.instructions+=4;goto B5f7809;
case 0x5f780c:c.instructions+=3;goto B5f780c;
case 0x5f7812:c.instructions+=2;goto B5f7812;
case 0x5f7814:c.instructions+=1;goto B5f7814;
case 0x5f7816:goto L5f7816;
case 0x5f781a:c.instructions+=4;goto B5f781a;
case 0x5f781c:c.instructions+=3;goto B5f781c;
case 0x5f781d:c.instructions+=2;goto B5f781d;
case 0x5f781f:c.instructions+=1;goto B5f781f;
case 0x5f7824:goto L5f7824;
case 0x5f7825:c.instructions+=5;goto B5f7825;
case 0x5f7826:c.instructions+=4;goto B5f7826;
case 0x5f7827:c.instructions+=3;goto B5f7827;
case 0x5f7829:c.instructions+=2;goto B5f7829;
case 0x5f782a:c.instructions+=1;goto B5f782a;
case 0x5f782d:goto L5f782d;
case 0x5f782f:goto L5f782f;
case 0x5f7830:c.instructions+=5;goto B5f7830;
case 0x5f7831:c.instructions+=4;goto B5f7831;
case 0x5f7832:c.instructions+=3;goto B5f7832;
case 0x5f7834:c.instructions+=2;goto B5f7834;
case 0x5f7835:c.instructions+=1;goto B5f7835;
case 0x5f7840:goto L5f7840;
case 0x5f7842:c.instructions+=33;goto B5f7842;
case 0x5f7844:c.instructions+=32;goto B5f7844;
case 0x5f7845:c.instructions+=31;goto B5f7845;
case 0x5f7847:c.instructions+=30;goto B5f7847;
case 0x5f784a:c.instructions+=29;goto B5f784a;
case 0x5f784d:c.instructions+=28;goto B5f784d;
case 0x5f7850:c.instructions+=27;goto B5f7850;
case 0x5f7853:c.instructions+=26;goto B5f7853;
case 0x5f7856:c.instructions+=25;goto B5f7856;
case 0x5f7859:c.instructions+=24;goto B5f7859;
case 0x5f785b:c.instructions+=23;goto B5f785b;
case 0x5f785e:c.instructions+=22;goto B5f785e;
case 0x5f7861:c.instructions+=21;goto B5f7861;
case 0x5f7864:c.instructions+=20;goto B5f7864;
case 0x5f7867:c.instructions+=19;goto B5f7867;
case 0x5f786a:c.instructions+=18;goto B5f786a;
case 0x5f786d:c.instructions+=17;goto B5f786d;
case 0x5f7870:c.instructions+=16;goto B5f7870;
case 0x5f7873:c.instructions+=15;goto B5f7873;
case 0x5f7876:c.instructions+=14;goto B5f7876;
case 0x5f7879:c.instructions+=13;goto B5f7879;
case 0x5f787c:c.instructions+=12;goto B5f787c;
case 0x5f787f:c.instructions+=11;goto B5f787f;
case 0x5f7882:c.instructions+=10;goto B5f7882;
case 0x5f7885:c.instructions+=9;goto B5f7885;
case 0x5f7888:c.instructions+=8;goto B5f7888;
case 0x5f788e:c.instructions+=7;goto B5f788e;
case 0x5f7894:c.instructions+=6;goto B5f7894;
case 0x5f789a:c.instructions+=5;goto B5f789a;
case 0x5f78a0:c.instructions+=4;goto B5f78a0;
case 0x5f78a6:c.instructions+=3;goto B5f78a6;
case 0x5f78a7:c.instructions+=2;goto B5f78a7;
case 0x5f78ad:c.instructions+=1;goto B5f78ad;
case 0x5f78b2:goto L5f78b2;
case 0x5f78b4:goto L5f78b4;
case 0x5f78ba:c.instructions+=1;goto B5f78ba;
case 0x5f78bf:goto L5f78bf;
case 0x5f78c1:goto L5f78c1;
case 0x5f78c7:c.instructions+=25;goto B5f78c7;
case 0x5f78cd:c.instructions+=24;goto B5f78cd;
case 0x5f78d3:c.instructions+=23;goto B5f78d3;
case 0x5f78d9:c.instructions+=22;goto B5f78d9;
case 0x5f78df:c.instructions+=21;goto B5f78df;
case 0x5f78e5:c.instructions+=20;goto B5f78e5;
case 0x5f78eb:c.instructions+=19;goto B5f78eb;
case 0x5f78f0:c.instructions+=18;goto B5f78f0;
case 0x5f78f6:c.instructions+=17;goto B5f78f6;
case 0x5f78fc:c.instructions+=16;goto B5f78fc;
case 0x5f7902:c.instructions+=15;goto B5f7902;
case 0x5f7908:c.instructions+=14;goto B5f7908;
case 0x5f790e:c.instructions+=13;goto B5f790e;
case 0x5f7914:c.instructions+=12;goto B5f7914;
case 0x5f791a:c.instructions+=11;goto B5f791a;
case 0x5f7920:c.instructions+=10;goto B5f7920;
case 0x5f7926:c.instructions+=9;goto B5f7926;
case 0x5f7930:c.instructions+=8;goto B5f7930;
case 0x5f7931:c.instructions+=7;goto B5f7931;
case 0x5f7937:c.instructions+=6;goto B5f7937;
case 0x5f793d:c.instructions+=5;goto B5f793d;
case 0x5f7943:c.instructions+=4;goto B5f7943;
case 0x5f7949:c.instructions+=3;goto B5f7949;
case 0x5f794b:c.instructions+=2;goto B5f794b;
case 0x5f794c:c.instructions+=1;goto B5f794c;
case 0x5f7950:goto L5f7950;
case 0x5f7951:c.instructions+=7;goto B5f7951;
case 0x5f7952:c.instructions+=6;goto B5f7952;
case 0x5f7954:c.instructions+=5;goto B5f7954;
case 0x5f7955:c.instructions+=4;goto B5f7955;
case 0x5f795b:c.instructions+=3;goto B5f795b;
case 0x5f795d:c.instructions+=2;goto B5f795d;
case 0x5f795f:c.instructions+=1;goto B5f795f;
case 0x5f7961:goto L5f7961;
case 0x5f7963:c.instructions+=1;goto B5f7963;
case 0x5f7968:goto L5f7968;
case 0x5f7969:c.instructions+=1;goto B5f7969;
case 0x5f796e:goto L5f796e;
case 0x5f7971:goto L5f7971;
case 0x5f7977:c.instructions+=3;goto B5f7977;
case 0x5f7979:c.instructions+=2;goto B5f7979;
case 0x5f797f:c.instructions+=1;goto B5f797f;
case 0x5f7981:goto L5f7981;
case 0x5f7983:c.instructions+=1;goto B5f7983;
case 0x5f7988:goto L5f7988;
case 0x5f7989:c.instructions+=1;goto B5f7989;
case 0x5f798e:goto L5f798e;
case 0x5f7991:goto L5f7991;
case 0x5f7997:c.instructions+=3;goto B5f7997;
case 0x5f7999:c.instructions+=2;goto B5f7999;
case 0x5f799f:c.instructions+=1;goto B5f799f;
case 0x5f79a1:goto L5f79a1;
case 0x5f79a3:c.instructions+=1;goto B5f79a3;
case 0x5f79a8:goto L5f79a8;
case 0x5f79a9:c.instructions+=1;goto B5f79a9;
case 0x5f79ae:goto L5f79ae;
case 0x5f79b1:goto L5f79b1;
case 0x5f79b7:c.instructions+=3;goto B5f79b7;
case 0x5f79b9:c.instructions+=2;goto B5f79b9;
case 0x5f79bf:c.instructions+=1;goto B5f79bf;
case 0x5f79c1:goto L5f79c1;
case 0x5f79c3:c.instructions+=1;goto B5f79c3;
case 0x5f79c8:goto L5f79c8;
case 0x5f79c9:c.instructions+=1;goto B5f79c9;
case 0x5f79ce:goto L5f79ce;
case 0x5f79d1:goto L5f79d1;
case 0x5f79d7:c.instructions+=3;goto B5f79d7;
case 0x5f79dd:c.instructions+=2;goto B5f79dd;
case 0x5f79df:c.instructions+=1;goto B5f79df;
case 0x5f79e1:goto L5f79e1;
case 0x5f79e3:c.instructions+=2;goto B5f79e3;
case 0x5f79e5:c.instructions+=1;goto B5f79e5;
case 0x5f79e7:goto L5f79e7;
case 0x5f79e8:c.instructions+=4;goto B5f79e8;
case 0x5f79ee:c.instructions+=3;goto B5f79ee;
case 0x5f79ef:c.instructions+=2;goto B5f79ef;
case 0x5f79f0:c.instructions+=1;goto B5f79f0;
case 0x5f7a00:goto L5f7a00;
case 0x5f7a02:c.instructions+=12;goto B5f7a02;
case 0x5f7a07:c.instructions+=11;goto B5f7a07;
case 0x5f7a0d:c.instructions+=10;goto B5f7a0d;
case 0x5f7a0e:c.instructions+=9;goto B5f7a0e;
case 0x5f7a15:c.instructions+=8;goto B5f7a15;
case 0x5f7a16:c.instructions+=7;goto B5f7a16;
case 0x5f7a17:c.instructions+=6;goto B5f7a17;
case 0x5f7a18:c.instructions+=5;goto B5f7a18;
case 0x5f7a1a:c.instructions+=4;goto B5f7a1a;
case 0x5f7a1c:c.instructions+=3;goto B5f7a1c;
case 0x5f7a1f:c.instructions+=2;goto B5f7a1f;
case 0x5f7a23:c.instructions+=1;goto B5f7a23;
case 0x5f7a25:goto L5f7a25;
case 0x5f7a2b:c.instructions+=2;goto B5f7a2b;
case 0x5f7a2d:c.instructions+=1;goto B5f7a2d;
case 0x5f7a2f:goto L5f7a2f;
case 0x5f7a34:c.instructions+=2;goto B5f7a34;
case 0x5f7a36:c.instructions+=1;goto B5f7a36;
case 0x5f7a38:goto L5f7a38;
case 0x5f7a3b:c.instructions+=2;goto B5f7a3b;
case 0x5f7a3f:c.instructions+=1;goto B5f7a3f;
case 0x5f7a41:goto L5f7a41;
case 0x5f7a43:c.instructions+=1;goto B5f7a43;
case 0x5f7a48:goto L5f7a48;
case 0x5f7a4e:c.instructions+=3;goto B5f7a4e;
case 0x5f7a50:c.instructions+=2;goto B5f7a50;
case 0x5f7a52:c.instructions+=1;goto B5f7a52;
case 0x5f7a58:goto L5f7a58;
case 0x5f7a5e:c.instructions+=2;goto B5f7a5e;
case 0x5f7a60:c.instructions+=1;goto B5f7a60;
case 0x5f7a62:goto L5f7a62;
case 0x5f7a67:c.instructions+=1;goto B5f7a67;
case 0x5f7a6c:goto L5f7a6c;
case 0x5f7a6f:c.instructions+=4;goto B5f7a6f;
case 0x5f7a73:c.instructions+=3;goto B5f7a73;
case 0x5f7a75:c.instructions+=2;goto B5f7a75;
case 0x5f7a7d:c.instructions+=1;goto B5f7a7d;
case 0x5f7a7f:goto L5f7a7f;
case 0x5f7a81:c.instructions+=1;goto B5f7a81;
case 0x5f7a86:goto L5f7a86;
case 0x5f7a88:goto L5f7a88;
case 0x5f7a8a:goto L5f7a8a;
case 0x5f7a92:c.instructions+=1;goto B5f7a92;
case 0x5f7a98:goto L5f7a98;
case 0x5f7a9e:c.instructions+=2;goto B5f7a9e;
case 0x5f7aa0:c.instructions+=1;goto B5f7aa0;
case 0x5f7aa2:goto L5f7aa2;
case 0x5f7aa4:c.instructions+=1;goto B5f7aa4;
case 0x5f7aa9:goto L5f7aa9;
case 0x5f7aac:c.instructions+=4;goto B5f7aac;
case 0x5f7ab0:c.instructions+=3;goto B5f7ab0;
case 0x5f7ab2:c.instructions+=2;goto B5f7ab2;
case 0x5f7aba:c.instructions+=1;goto B5f7aba;
case 0x5f7abc:goto L5f7abc;
case 0x5f7abd:c.instructions+=2;goto B5f7abd;
case 0x5f7abf:c.instructions+=1;goto B5f7abf;
case 0x5f7ac4:goto L5f7ac4;
case 0x5f7ac6:goto L5f7ac6;
case 0x5f7ac8:goto L5f7ac8;
case 0x5f7ad0:c.instructions+=1;goto B5f7ad0;
case 0x5f7ad6:goto L5f7ad6;
case 0x5f7adb:c.instructions+=2;goto B5f7adb;
case 0x5f7add:c.instructions+=1;goto B5f7add;
case 0x5f7adf:goto L5f7adf;
case 0x5f7ae4:c.instructions+=2;goto B5f7ae4;
case 0x5f7ae6:c.instructions+=1;goto B5f7ae6;
case 0x5f7ae8:goto L5f7ae8;
case 0x5f7aea:c.instructions+=1;goto B5f7aea;
case 0x5f7aef:goto L5f7aef;
case 0x5f7af2:c.instructions+=4;goto B5f7af2;
case 0x5f7af6:c.instructions+=3;goto B5f7af6;
case 0x5f7af8:c.instructions+=2;goto B5f7af8;
case 0x5f7b00:c.instructions+=1;goto B5f7b00;
case 0x5f7b02:goto L5f7b02;
case 0x5f7b04:c.instructions+=1;goto B5f7b04;
case 0x5f7b09:goto L5f7b09;
case 0x5f7b11:c.instructions+=2;goto B5f7b11;
case 0x5f7b13:c.instructions+=1;goto B5f7b13;
case 0x5f7b15:goto L5f7b15;
case 0x5f7b17:c.instructions+=3;goto B5f7b17;
case 0x5f7b1f:c.instructions+=2;goto B5f7b1f;
case 0x5f7b21:c.instructions+=1;goto B5f7b21;
case 0x5f7b23:goto L5f7b23;
case 0x5f7b25:goto L5f7b25;
case 0x5f7b26:c.instructions+=2;goto B5f7b26;
case 0x5f7b2c:c.instructions+=1;goto B5f7b2c;
case 0x5f7b31:goto L5f7b31;
case 0x5f7b3b:c.instructions+=1;goto B5f7b3b;
case 0x5f7b3d:goto L5f7b3d;
case 0x5f7b3f:c.instructions+=1;goto B5f7b3f;
case 0x5f7b44:goto L5f7b44;
case 0x5f7b47:goto L5f7b47;
case 0x5f7b4c:c.instructions+=3;goto B5f7b4c;
case 0x5f7b52:c.instructions+=2;goto B5f7b52;
case 0x5f7b53:c.instructions+=1;goto B5f7b53;
case 0x5f7b58:goto L5f7b58;
case 0x5f7b5d:c.instructions+=2;goto B5f7b5d;
case 0x5f7b5f:c.instructions+=1;goto B5f7b5f;
case 0x5f7b61:goto L5f7b61;
case 0x5f7b65:c.instructions+=2;goto B5f7b65;
case 0x5f7b67:c.instructions+=1;goto B5f7b67;
case 0x5f7b69:goto L5f7b69;
case 0x5f7b6f:c.instructions+=1;goto B5f7b6f;
case 0x5f7b74:goto L5f7b74;
case 0x5f7b76:c.instructions+=2;goto B5f7b76;
case 0x5f7b7c:c.instructions+=1;goto B5f7b7c;
case 0x5f7b7e:goto L5f7b7e;
case 0x5f7b84:c.instructions+=4;goto B5f7b84;
case 0x5f7b86:c.instructions+=3;goto B5f7b86;
case 0x5f7b88:c.instructions+=2;goto B5f7b88;
case 0x5f7b8b:c.instructions+=1;goto B5f7b8b;
case 0x5f7b8d:goto L5f7b8d;
case 0x5f7b8f:c.instructions+=4;goto B5f7b8f;
case 0x5f7b92:c.instructions+=3;goto B5f7b92;
case 0x5f7b98:c.instructions+=2;goto B5f7b98;
case 0x5f7b9a:c.instructions+=1;goto B5f7b9a;
case 0x5f7b9c:goto L5f7b9c;
case 0x5f7ba0:c.instructions+=1;goto B5f7ba0;
case 0x5f7ba2:goto L5f7ba2;
case 0x5f7ba6:c.instructions+=3;goto B5f7ba6;
case 0x5f7bad:c.instructions+=2;goto B5f7bad;
case 0x5f7baf:c.instructions+=1;goto B5f7baf;
case 0x5f7bb1:goto L5f7bb1;
case 0x5f7bb3:c.instructions+=2;goto B5f7bb3;
case 0x5f7bb5:c.instructions+=1;goto B5f7bb5;
case 0x5f7bb8:goto L5f7bb8;
case 0x5f7bbb:c.instructions+=3;goto B5f7bbb;
case 0x5f7bbd:c.instructions+=2;goto B5f7bbd;
case 0x5f7bc1:c.instructions+=1;goto B5f7bc1;
case 0x5f7bc3:goto L5f7bc3;
case 0x5f7bc9:c.instructions+=4;goto B5f7bc9;
case 0x5f7bcf:c.instructions+=3;goto B5f7bcf;
case 0x5f7bd0:c.instructions+=2;goto B5f7bd0;
case 0x5f7bd2:c.instructions+=1;goto B5f7bd2;
case 0x5f7bd4:goto L5f7bd4;
case 0x5f7bd6:goto L5f7bd6;
case 0x5f7bd9:c.instructions+=1;goto B5f7bd9;
case 0x5f7bdb:goto L5f7bdb;
case 0x5f7bdd:c.instructions+=5;goto B5f7bdd;
case 0x5f7be3:c.instructions+=4;goto B5f7be3;
case 0x5f7bea:c.instructions+=3;goto B5f7bea;
case 0x5f7bec:c.instructions+=2;goto B5f7bec;
case 0x5f7bef:c.instructions+=1;goto B5f7bef;
case 0x5f7bf1:goto L5f7bf1;
case 0x5f7bf8:c.instructions+=1;goto B5f7bf8;
case 0x5f7bfa:goto L5f7bfa;
case 0x5f7bfc:goto L5f7bfc;
case 0x5f7bff:c.instructions+=2;goto B5f7bff;
case 0x5f7c01:c.instructions+=1;goto B5f7c01;
case 0x5f7c03:goto L5f7c03;
case 0x5f7c09:c.instructions+=6;goto B5f7c09;
case 0x5f7c0a:c.instructions+=5;goto B5f7c0a;
case 0x5f7c0b:c.instructions+=4;goto B5f7c0b;
case 0x5f7c0f:c.instructions+=3;goto B5f7c0f;
case 0x5f7c16:c.instructions+=2;goto B5f7c16;
case 0x5f7c19:c.instructions+=1;goto B5f7c19;
case 0x5f7c1a:goto L5f7c1a;
case 0x5f7c1e:c.instructions+=6;goto B5f7c1e;
case 0x5f7c20:c.instructions+=5;goto B5f7c20;
case 0x5f7c21:c.instructions+=4;goto B5f7c21;
case 0x5f7c22:c.instructions+=3;goto B5f7c22;
case 0x5f7c29:c.instructions+=2;goto B5f7c29;
case 0x5f7c2c:c.instructions+=1;goto B5f7c2c;
case 0x5f7c30:goto L5f7c30;
case 0x5f7c33:c.instructions+=9;goto B5f7c33;
case 0x5f7c34:c.instructions+=8;goto B5f7c34;
case 0x5f7c35:c.instructions+=7;goto B5f7c35;
case 0x5f7c37:c.instructions+=6;goto B5f7c37;
case 0x5f7c39:c.instructions+=5;goto B5f7c39;
case 0x5f7c3b:c.instructions+=4;goto B5f7c3b;
case 0x5f7c3e:c.instructions+=3;goto B5f7c3e;
case 0x5f7c41:c.instructions+=2;goto B5f7c41;
case 0x5f7c44:c.instructions+=1;goto B5f7c44;
case 0x5f7c46:goto L5f7c46;
case 0x5f7c4c:c.instructions+=1;goto B5f7c4c;
case 0x5f7c4e:goto L5f7c4e;
case 0x5f7c51:c.instructions+=2;goto B5f7c51;
case 0x5f7c57:c.instructions+=1;goto B5f7c57;
case 0x5f7c5d:goto L5f7c5d;
case 0x5f7c63:c.instructions+=7;goto B5f7c63;
case 0x5f7c69:c.instructions+=6;goto B5f7c69;
case 0x5f7c6f:c.instructions+=5;goto B5f7c6f;
case 0x5f7c70:c.instructions+=4;goto B5f7c70;
case 0x5f7c72:c.instructions+=3;goto B5f7c72;
case 0x5f7c79:c.instructions+=2;goto B5f7c79;
case 0x5f7c7d:c.instructions+=1;goto B5f7c7d;
case 0x5f7c83:goto L5f7c83;
case 0x5f7c88:c.instructions+=5;goto B5f7c88;
case 0x5f7c8a:c.instructions+=4;goto B5f7c8a;
case 0x5f7c8b:c.instructions+=3;goto B5f7c8b;
case 0x5f7c8e:c.instructions+=2;goto B5f7c8e;
case 0x5f7c92:c.instructions+=1;goto B5f7c92;
case 0x5f7c94:goto L5f7c94;
case 0x5f7c98:c.instructions+=1;goto B5f7c98;
case 0x5f7ca0:goto L5f7ca0;
case 0x5f7ca2:c.instructions+=11;goto B5f7ca2;
case 0x5f7ca5:c.instructions+=10;goto B5f7ca5;
case 0x5f7ca9:c.instructions+=9;goto B5f7ca9;
case 0x5f7cad:c.instructions+=8;goto B5f7cad;
case 0x5f7cb1:c.instructions+=7;goto B5f7cb1;
case 0x5f7cb2:c.instructions+=6;goto B5f7cb2;
case 0x5f7cb3:c.instructions+=5;goto B5f7cb3;
case 0x5f7cb7:c.instructions+=4;goto B5f7cb7;
case 0x5f7cb8:c.instructions+=3;goto B5f7cb8;
case 0x5f7cba:c.instructions+=2;goto B5f7cba;
case 0x5f7cbe:c.instructions+=1;goto B5f7cbe;
case 0x5f7cc3:goto L5f7cc3;
case 0x5f7cc5:c.instructions+=1;goto B5f7cc5;
case 0x5f7ccb:goto L5f7ccb;
case 0x5f7ccf:c.instructions+=1;goto B5f7ccf;
case 0x5f7cd5:goto L5f7cd5;
case 0x5f7cdb:c.instructions+=3;goto B5f7cdb;
case 0x5f7ce2:c.instructions+=2;goto B5f7ce2;
case 0x5f7ce4:c.instructions+=1;goto B5f7ce4;
case 0x5f7ce6:goto L5f7ce6;
case 0x5f7ce9:c.instructions+=6;goto B5f7ce9;
case 0x5f7cec:c.instructions+=5;goto B5f7cec;
case 0x5f7cee:c.instructions+=4;goto B5f7cee;
case 0x5f7cf0:c.instructions+=3;goto B5f7cf0;
case 0x5f7cf2:c.instructions+=2;goto B5f7cf2;
case 0x5f7cf5:c.instructions+=1;goto B5f7cf5;
case 0x5f7cf7:goto L5f7cf7;
case 0x5f7cfa:c.instructions+=1;goto B5f7cfa;
case 0x5f7cfe:goto L5f7cfe;
case 0x5f7d03:c.instructions+=5;goto B5f7d03;
case 0x5f7d07:c.instructions+=4;goto B5f7d07;
case 0x5f7d09:c.instructions+=3;goto B5f7d09;
case 0x5f7d0d:c.instructions+=2;goto B5f7d0d;
case 0x5f7d11:c.instructions+=1;goto B5f7d11;
case 0x5f7d17:goto L5f7d17;
case 0x5f7d1b:c.instructions+=8;goto B5f7d1b;
case 0x5f7d1f:c.instructions+=7;goto B5f7d1f;
case 0x5f7d23:c.instructions+=6;goto B5f7d23;
case 0x5f7d29:c.instructions+=5;goto B5f7d29;
case 0x5f7d2b:c.instructions+=4;goto B5f7d2b;
case 0x5f7d30:c.instructions+=3;goto B5f7d30;
case 0x5f7d34:c.instructions+=2;goto B5f7d34;
case 0x5f7d38:c.instructions+=1;goto B5f7d38;
case 0x5f7d3d:goto L5f7d3d;
case 0x5f7d42:c.instructions+=2;goto B5f7d42;
case 0x5f7d44:c.instructions+=1;goto B5f7d44;
case 0x5f7d4a:goto L5f7d4a;
case 0x5f7d4d:c.instructions+=2;goto B5f7d4d;
case 0x5f7d4f:c.instructions+=1;goto B5f7d4f;
case 0x5f7d51:goto L5f7d51;
case 0x5f7d56:c.instructions+=1;goto B5f7d56;
case 0x5f7d58:goto L5f7d58;
case 0x5f7d5a:c.instructions+=9;goto B5f7d5a;
case 0x5f7d5e:c.instructions+=8;goto B5f7d5e;
case 0x5f7d61:c.instructions+=7;goto B5f7d61;
case 0x5f7d64:c.instructions+=6;goto B5f7d64;
case 0x5f7d66:c.instructions+=5;goto B5f7d66;
case 0x5f7d69:c.instructions+=4;goto B5f7d69;
case 0x5f7d6c:c.instructions+=3;goto B5f7d6c;
case 0x5f7d6e:c.instructions+=2;goto B5f7d6e;
case 0x5f7d71:c.instructions+=1;goto B5f7d71;
case 0x5f7d73:goto L5f7d73;
case 0x5f7d76:goto L5f7d76;
case 0x5f7d7c:c.instructions+=3;goto B5f7d7c;
case 0x5f7d83:c.instructions+=2;goto B5f7d83;
case 0x5f7d85:c.instructions+=1;goto B5f7d85;
case 0x5f7d87:goto L5f7d87;
case 0x5f7d8a:c.instructions+=2;goto B5f7d8a;
case 0x5f7d8c:c.instructions+=1;goto B5f7d8c;
case 0x5f7d8e:goto L5f7d8e;
case 0x5f7d90:c.instructions+=1;goto B5f7d90;
case 0x5f7d92:goto L5f7d92;
case 0x5f7d94:c.instructions+=8;goto B5f7d94;
case 0x5f7d97:c.instructions+=7;goto B5f7d97;
case 0x5f7d9e:c.instructions+=6;goto B5f7d9e;
case 0x5f7da2:c.instructions+=5;goto B5f7da2;
case 0x5f7da9:c.instructions+=4;goto B5f7da9;
case 0x5f7db0:c.instructions+=3;goto B5f7db0;
case 0x5f7db3:c.instructions+=2;goto B5f7db3;
case 0x5f7db5:c.instructions+=1;goto B5f7db5;
case 0x5f7db7:goto L5f7db7;
case 0x5f7dba:c.instructions+=2;goto B5f7dba;
case 0x5f7dc1:c.instructions+=1;goto B5f7dc1;
case 0x5f7dc8:goto L5f7dc8;
case 0x5f7dcc:c.instructions+=2;goto B5f7dcc;
case 0x5f7dcf:c.instructions+=1;goto B5f7dcf;
case 0x5f7dd1:goto L5f7dd1;
case 0x5f7dd8:c.instructions+=1;goto B5f7dd8;
case 0x5f7dda:goto L5f7dda;
case 0x5f7ddf:c.instructions+=3;goto B5f7ddf;
case 0x5f7de6:c.instructions+=2;goto B5f7de6;
case 0x5f7de8:c.instructions+=1;goto B5f7de8;
case 0x5f7dea:goto L5f7dea;
case 0x5f7ded:c.instructions+=3;goto B5f7ded;
case 0x5f7def:c.instructions+=2;goto B5f7def;
case 0x5f7df3:c.instructions+=1;goto B5f7df3;
case 0x5f7df5:goto L5f7df5;
case 0x5f7dfa:c.instructions+=1;goto B5f7dfa;
case 0x5f7dfc:goto L5f7dfc;
case 0x5f7dfe:c.instructions+=2;goto B5f7dfe;
case 0x5f7e00:c.instructions+=1;goto B5f7e00;
case 0x5f7e02:goto L5f7e02;
case 0x5f7e05:c.instructions+=1;goto B5f7e05;
case 0x5f7e07:goto L5f7e07;
case 0x5f7e0c:c.instructions+=3;goto B5f7e0c;
case 0x5f7e13:c.instructions+=2;goto B5f7e13;
case 0x5f7e15:c.instructions+=1;goto B5f7e15;
case 0x5f7e17:goto L5f7e17;
case 0x5f7e1a:c.instructions+=9;goto B5f7e1a;
case 0x5f7e1c:c.instructions+=8;goto B5f7e1c;
case 0x5f7e1e:c.instructions+=7;goto B5f7e1e;
case 0x5f7e21:c.instructions+=6;goto B5f7e21;
case 0x5f7e24:c.instructions+=5;goto B5f7e24;
case 0x5f7e27:c.instructions+=4;goto B5f7e27;
case 0x5f7e2a:c.instructions+=3;goto B5f7e2a;
case 0x5f7e2b:c.instructions+=2;goto B5f7e2b;
case 0x5f7e2d:c.instructions+=1;goto B5f7e2d;
case 0x5f7e2f:goto L5f7e2f;
case 0x5f7e31:c.instructions+=1;goto B5f7e31;
case 0x5f7e34:goto L5f7e34;
case 0x5f7e3a:c.instructions+=5;goto B5f7e3a;
case 0x5f7e41:c.instructions+=4;goto B5f7e41;
case 0x5f7e42:c.instructions+=3;goto B5f7e42;
case 0x5f7e45:c.instructions+=2;goto B5f7e45;
case 0x5f7e47:c.instructions+=1;goto B5f7e47;
case 0x5f7e4d:goto L5f7e4d;
case 0x5f7e4e:goto L5f7e4e;
case 0x5f7e52:c.instructions+=4;goto B5f7e52;
case 0x5f7e55:c.instructions+=3;goto B5f7e55;
case 0x5f7e56:c.instructions+=2;goto B5f7e56;
case 0x5f7e5a:c.instructions+=1;goto B5f7e5a;
case 0x5f7e5f:goto L5f7e5f;
case 0x5f7e63:c.instructions+=11;goto B5f7e63;
case 0x5f7e67:c.instructions+=10;goto B5f7e67;
case 0x5f7e68:c.instructions+=9;goto B5f7e68;
case 0x5f7e6c:c.instructions+=8;goto B5f7e6c;
case 0x5f7e6e:c.instructions+=7;goto B5f7e6e;
case 0x5f7e71:c.instructions+=6;goto B5f7e71;
case 0x5f7e74:c.instructions+=5;goto B5f7e74;
case 0x5f7e7a:c.instructions+=4;goto B5f7e7a;
case 0x5f7e80:c.instructions+=3;goto B5f7e80;
case 0x5f7e82:c.instructions+=2;goto B5f7e82;
case 0x5f7e85:c.instructions+=1;goto B5f7e85;
case 0x5f7e87:goto L5f7e87;
case 0x5f7e8b:c.instructions+=8;goto B5f7e8b;
case 0x5f7e91:c.instructions+=7;goto B5f7e91;
case 0x5f7e97:c.instructions+=6;goto B5f7e97;
case 0x5f7e9d:c.instructions+=5;goto B5f7e9d;
case 0x5f7ea0:c.instructions+=4;goto B5f7ea0;
case 0x5f7ea6:c.instructions+=3;goto B5f7ea6;
case 0x5f7ea8:c.instructions+=2;goto B5f7ea8;
case 0x5f7eaa:c.instructions+=1;goto B5f7eaa;
case 0x5f7ead:goto L5f7ead;
case 0x5f7eb1:c.instructions+=2;goto B5f7eb1;
case 0x5f7eb3:c.instructions+=1;goto B5f7eb3;
case 0x5f7eb6:goto L5f7eb6;
case 0x5f7eb7:c.instructions+=3;goto B5f7eb7;
case 0x5f7eb8:c.instructions+=2;goto B5f7eb8;
case 0x5f7ebb:c.instructions+=1;goto B5f7ebb;
case 0x5f7ec0:goto L5f7ec0;
case 0x5f7ec3:c.instructions+=19;goto B5f7ec3;
case 0x5f7ec7:c.instructions+=18;goto B5f7ec7;
case 0x5f7ecc:c.instructions+=17;goto B5f7ecc;
case 0x5f7ecd:c.instructions+=16;goto B5f7ecd;
case 0x5f7ece:c.instructions+=15;goto B5f7ece;
case 0x5f7ed2:c.instructions+=14;goto B5f7ed2;
case 0x5f7ed6:c.instructions+=13;goto B5f7ed6;
case 0x5f7edc:c.instructions+=12;goto B5f7edc;
case 0x5f7edd:c.instructions+=11;goto B5f7edd;
case 0x5f7ee1:c.instructions+=10;goto B5f7ee1;
case 0x5f7ee3:c.instructions+=9;goto B5f7ee3;
case 0x5f7ee6:c.instructions+=8;goto B5f7ee6;
case 0x5f7eea:c.instructions+=7;goto B5f7eea;
case 0x5f7eeb:c.instructions+=6;goto B5f7eeb;
case 0x5f7eef:c.instructions+=5;goto B5f7eef;
case 0x5f7ef2:c.instructions+=4;goto B5f7ef2;
case 0x5f7ef8:c.instructions+=3;goto B5f7ef8;
case 0x5f7efa:c.instructions+=2;goto B5f7efa;
case 0x5f7efd:c.instructions+=1;goto B5f7efd;
case 0x5f7eff:goto L5f7eff;
case 0x5f7f01:c.instructions+=1;goto B5f7f01;
case 0x5f7f07:goto L5f7f07;
case 0x5f7f0d:c.instructions+=11;goto B5f7f0d;
case 0x5f7f12:c.instructions+=10;goto B5f7f12;
case 0x5f7f14:c.instructions+=9;goto B5f7f14;
case 0x5f7f17:c.instructions+=8;goto B5f7f17;
case 0x5f7f1c:c.instructions+=7;goto B5f7f1c;
case 0x5f7f1e:c.instructions+=6;goto B5f7f1e;
case 0x5f7f22:c.instructions+=5;goto B5f7f22;
case 0x5f7f24:c.instructions+=4;goto B5f7f24;
case 0x5f7f28:c.instructions+=3;goto B5f7f28;
case 0x5f7f2c:c.instructions+=2;goto B5f7f2c;
case 0x5f7f32:c.instructions+=1;goto B5f7f32;
case 0x5f7f38:goto L5f7f38;
case 0x5f7f3e:c.instructions+=2;goto B5f7f3e;
case 0x5f7f40:c.instructions+=1;goto B5f7f40;
case 0x5f7f46:goto L5f7f46;
case 0x5f7f48:c.instructions+=1;goto B5f7f48;
case 0x5f7f4a:goto L5f7f4a;
case 0x5f7f4e:c.instructions+=1;goto B5f7f4e;
case 0x5f7f50:goto L5f7f50;
case 0x5f7f56:c.instructions+=2;goto B5f7f56;
case 0x5f7f58:c.instructions+=1;goto B5f7f58;
case 0x5f7f5a:goto L5f7f5a;
case 0x5f7f5e:c.instructions+=7;goto B5f7f5e;
case 0x5f7f60:c.instructions+=6;goto B5f7f60;
case 0x5f7f63:c.instructions+=5;goto B5f7f63;
case 0x5f7f64:c.instructions+=4;goto B5f7f64;
case 0x5f7f65:c.instructions+=3;goto B5f7f65;
case 0x5f7f6b:c.instructions+=2;goto B5f7f6b;
case 0x5f7f6e:c.instructions+=1;goto B5f7f6e;
case 0x5f7f73:goto L5f7f73;
case 0x5f7f77:c.instructions+=9;goto B5f7f77;
case 0x5f7f7b:c.instructions+=8;goto B5f7f7b;
case 0x5f7f7f:c.instructions+=7;goto B5f7f7f;
case 0x5f7f80:c.instructions+=6;goto B5f7f80;
case 0x5f7f84:c.instructions+=5;goto B5f7f84;
case 0x5f7f85:c.instructions+=4;goto B5f7f85;
case 0x5f7f8b:c.instructions+=3;goto B5f7f8b;
case 0x5f7f91:c.instructions+=2;goto B5f7f91;
case 0x5f7f94:c.instructions+=1;goto B5f7f94;
case 0x5f7f99:goto L5f7f99;
case 0x5f7f9d:c.instructions+=5;goto B5f7f9d;
case 0x5f7fa3:c.instructions+=4;goto B5f7fa3;
case 0x5f7fa7:c.instructions+=3;goto B5f7fa7;
case 0x5f7fad:c.instructions+=2;goto B5f7fad;
case 0x5f7fb3:c.instructions+=1;goto B5f7fb3;
case 0x5f7fb8:goto L5f7fb8;
case 0x5f7fbe:c.instructions+=4;goto B5f7fbe;
case 0x5f7fc0:c.instructions+=3;goto B5f7fc0;
case 0x5f7fc3:c.instructions+=2;goto B5f7fc3;
case 0x5f7fc5:c.instructions+=1;goto B5f7fc5;
case 0x5f7fc7:goto L5f7fc7;
case 0x5f7fcd:c.instructions+=3;goto B5f7fcd;
case 0x5f7fd3:c.instructions+=2;goto B5f7fd3;
case 0x5f7fd9:c.instructions+=1;goto B5f7fd9;
case 0x5f7fde:goto L5f7fde;
case 0x5f7fe0:goto L5f7fe0;
case 0x5f7fe5:c.instructions+=2;goto B5f7fe5;
case 0x5f7fe7:c.instructions+=1;goto B5f7fe7;
case 0x5f7fec:goto L5f7fec;
case 0x5f7fef:c.instructions+=3;goto B5f7fef;
case 0x5f7ff1:c.instructions+=2;goto B5f7ff1;
case 0x5f7ff7:c.instructions+=1;goto B5f7ff7;
case 0x5f7ff9:goto L5f7ff9;
case 0x5f7ffd:c.instructions+=2;goto B5f7ffd;
case 0x5f7fff:c.instructions+=1;goto B5f7fff;
default:missing_instruction(c.pc);}
B5f7002:L5f7002:{c.instructions+=1;NFSU2_TR(0x5f7002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f700a;}}
}
B5f7004:L5f7004:{c.instructions+=2;NFSU2_TR(0x5f7004);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7006:{NFSU2_TR(0x5f7006);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f700a:L5f700a:{c.instructions+=10;NFSU2_TR(0x5f700a);
u8 U[13];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B5f700f:{NFSU2_TR(0x5f700f);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5f7012:{NFSU2_TR(0x5f7012);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7014:{NFSU2_TR(0x5f7014);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7018:{NFSU2_TR(0x5f7018);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f701c:{NFSU2_TR(0x5f701c);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7022:{NFSU2_TR(0x5f7022);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f7024:{NFSU2_TR(0x5f7024);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7028:{NFSU2_TR(0x5f7028);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f702a:{NFSU2_TR(0x5f702a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7044;}}
}
B5f702c:L5f702c:{c.instructions+=7;NFSU2_TR(0x5f702c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7030:{NFSU2_TR(0x5f7030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7031:{NFSU2_TR(0x5f7031);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7036:{NFSU2_TR(0x5f7036);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f703a:{NFSU2_TR(0x5f703a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f703b:{NFSU2_TR(0x5f703b);
__builtin_memmove((R+4),(R+24),4);
}
B5f703d:{NFSU2_TR(0x5f703d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7042ull));
TAIL_STATIC(0x5dd2f0u,5dd);
}
B5f7042:L5f7042:{c.instructions+=1;NFSU2_TR(0x5f7042);
{goto L5f705a;}
}
B5f7044:L5f7044:{c.instructions+=7;NFSU2_TR(0x5f7044);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7048:{NFSU2_TR(0x5f7048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7049:{NFSU2_TR(0x5f7049);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f704e:{NFSU2_TR(0x5f704e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7052:{NFSU2_TR(0x5f7052);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7053:{NFSU2_TR(0x5f7053);
__builtin_memmove((R+4),(R+24),4);
}
B5f7055:{NFSU2_TR(0x5f7055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f705aull));
TAIL_STATIC(0x5dd430u,5dd);
}
B5f705a:L5f705a:{c.instructions+=4;NFSU2_TR(0x5f705a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f705e:{NFSU2_TR(0x5f705e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f705f:{NFSU2_TR(0x5f705f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7063:{NFSU2_TR(0x5f7063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7068ull));
TAIL_STATIC(0x5da330u,5da);
}
B5f7068:L5f7068:{c.instructions+=8;NFSU2_TR(0x5f7068);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f706c:{NFSU2_TR(0x5f706c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7072:{NFSU2_TR(0x5f7072);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7076:{NFSU2_TR(0x5f7076);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7077:{NFSU2_TR(0x5f7077);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f707d:{NFSU2_TR(0x5f707d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7080:{NFSU2_TR(0x5f7080);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7084:{NFSU2_TR(0x5f7084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7089ull));
TAIL_STATIC(0x5ee9b0u,5ee);
}
B5f7089:L5f7089:{c.instructions+=4;NFSU2_TR(0x5f7089);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f708d:{NFSU2_TR(0x5f708d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7091:{NFSU2_TR(0x5f7091);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7093:{NFSU2_TR(0x5f7093);
if(r1(R+518)){{goto L5f709b;}}
}
B5f7095:L5f7095:{c.instructions+=2;NFSU2_TR(0x5f7095);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(r2(U+4)));
}
B5f7099:{NFSU2_TR(0x5f7099);
{goto L5f709d;}
}
B5f709b:L5f709b:{c.instructions+=1;NFSU2_TR(0x5f709b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5f709d:L5f709d:{c.instructions+=4;NFSU2_TR(0x5f709d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f70a1:{NFSU2_TR(0x5f70a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f70a2:{NFSU2_TR(0x5f70a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f70a6:{NFSU2_TR(0x5f70a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f70abull));
TAIL_STATIC(0x5da330u,5da);
}
B5f70ab:L5f70ab:{c.instructions+=8;NFSU2_TR(0x5f70ab);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f70af:{NFSU2_TR(0x5f70af);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f70b5:{NFSU2_TR(0x5f70b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f70b9:{NFSU2_TR(0x5f70b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f70ba:{NFSU2_TR(0x5f70ba);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f70c0:{NFSU2_TR(0x5f70c0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f70c3:{NFSU2_TR(0x5f70c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f70c7:{NFSU2_TR(0x5f70c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f70ccull));
TAIL_STATIC(0x5ee9b0u,5ee);
}
B5f70cc:L5f70cc:{c.instructions+=4;NFSU2_TR(0x5f70cc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f70d0:{NFSU2_TR(0x5f70d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f70d4:{NFSU2_TR(0x5f70d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f70d6:{NFSU2_TR(0x5f70d6);
if(r1(R+518)){{goto L5f70de;}}
}
B5f70d8:L5f70d8:{c.instructions+=2;NFSU2_TR(0x5f70d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B5f70dc:{NFSU2_TR(0x5f70dc);
{goto L5f70e0;}
}
B5f70de:L5f70de:{c.instructions+=1;NFSU2_TR(0x5f70de);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f70e0:L5f70e0:{c.instructions+=7;NFSU2_TR(0x5f70e0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f70e4:{NFSU2_TR(0x5f70e4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f70e8:{NFSU2_TR(0x5f70e8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f70ee:{NFSU2_TR(0x5f70ee);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f70f2:{NFSU2_TR(0x5f70f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f70f4:{NFSU2_TR(0x5f70f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f70f7:{NFSU2_TR(0x5f70f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7105;}}
}
B5f70f9:L5f70f9:{c.instructions+=3;NFSU2_TR(0x5f70f9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f70ff:{NFSU2_TR(0x5f70ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7103:{NFSU2_TR(0x5f7103);
{goto L5f7124;}
}
B5f7105:L5f7105:{c.instructions+=5;NFSU2_TR(0x5f7105);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7109:{NFSU2_TR(0x5f7109);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f710f:{NFSU2_TR(0x5f710f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7111:{NFSU2_TR(0x5f7111);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7114:{NFSU2_TR(0x5f7114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7124;}}
}
B5f7116:L5f7116:{c.instructions+=3;NFSU2_TR(0x5f7116);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f711a:{NFSU2_TR(0x5f711a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f7120:{NFSU2_TR(0x5f7120);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7124:L5f7124:{c.instructions+=19;NFSU2_TR(0x5f7124);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7128:{NFSU2_TR(0x5f7128);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f712c:{NFSU2_TR(0x5f712c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7130:{NFSU2_TR(0x5f7130);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7134:{NFSU2_TR(0x5f7134);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7138:{NFSU2_TR(0x5f7138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7139:{NFSU2_TR(0x5f7139);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f713d:{NFSU2_TR(0x5f713d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f713e:{NFSU2_TR(0x5f713e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5f7140:{NFSU2_TR(0x5f7140);
w4(R+4,u32(0x88f298ull));
}
B5f7145:{NFSU2_TR(0x5f7145);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B5f7147:{NFSU2_TR(0x5f7147);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f7149:{NFSU2_TR(0x5f7149);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f714b:{NFSU2_TR(0x5f714b);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5f714d:{NFSU2_TR(0x5f714d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f714f:{NFSU2_TR(0x5f714f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f7151:{NFSU2_TR(0x5f7151);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5f7153:{NFSU2_TR(0x5f7153);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7157:{NFSU2_TR(0x5f7157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f715cull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f715c:L5f715c:{c.instructions+=13;NFSU2_TR(0x5f715c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7160:{NFSU2_TR(0x5f7160);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5f7165:{NFSU2_TR(0x5f7165);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5f7168:{NFSU2_TR(0x5f7168);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f716c:{NFSU2_TR(0x5f716c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7170:{NFSU2_TR(0x5f7170);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7176:{NFSU2_TR(0x5f7176);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f717a:{NFSU2_TR(0x5f717a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7180:{NFSU2_TR(0x5f7180);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7184:{NFSU2_TR(0x5f7184);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f718a:{NFSU2_TR(0x5f718a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f718c:{NFSU2_TR(0x5f718c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f718f:{NFSU2_TR(0x5f718f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f71a5;}}
}
B5f7191:L5f7191:{c.instructions+=6;NFSU2_TR(0x5f7191);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7193:{NFSU2_TR(0x5f7193);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7197:{NFSU2_TR(0x5f7197);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f719b:{NFSU2_TR(0x5f719b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f719f:{NFSU2_TR(0x5f719f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f71a3:{NFSU2_TR(0x5f71a3);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B5f71a5:L5f71a5:{c.instructions+=5;NFSU2_TR(0x5f71a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f71a7:{NFSU2_TR(0x5f71a7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f71ab:{NFSU2_TR(0x5f71ab);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f71ad:{NFSU2_TR(0x5f71ad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f71b1:{NFSU2_TR(0x5f71b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f71cf;}}
}
B5f71b3:L5f71b3:{c.instructions+=4;NFSU2_TR(0x5f71b3);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f71b9:{NFSU2_TR(0x5f71b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f71bb:{NFSU2_TR(0x5f71bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f71be:{NFSU2_TR(0x5f71be);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f71cf;}}
}
B5f71c0:L5f71c0:{c.instructions+=4;NFSU2_TR(0x5f71c0);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f71c6:{NFSU2_TR(0x5f71c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f71c8:{NFSU2_TR(0x5f71c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f71cb:{NFSU2_TR(0x5f71cb);
if(r1(R+518)){{goto L5f71d1;}}
}
B5f71cd:L5f71cd:{c.instructions+=1;NFSU2_TR(0x5f71cd);
{goto L5f71d9;}
}
B5f71cf:L5f71cf:{c.instructions+=1;NFSU2_TR(0x5f71cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f71d1:L5f71d1:{c.instructions+=2;NFSU2_TR(0x5f71d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f71d3:{NFSU2_TR(0x5f71d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f71d9:L5f71d9:{c.instructions+=6;NFSU2_TR(0x5f71d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f71dd:{NFSU2_TR(0x5f71dd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f71e1:{NFSU2_TR(0x5f71e1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f71e7:{NFSU2_TR(0x5f71e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f71e9:{NFSU2_TR(0x5f71e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f71ec:{NFSU2_TR(0x5f71ec);
if(r1(R+514)){{goto L5f71f6;}}
}
B5f71ee:L5f71ee:{c.instructions+=2;NFSU2_TR(0x5f71ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f71f0:{NFSU2_TR(0x5f71f0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f71f6:L5f71f6:{c.instructions+=2;NFSU2_TR(0x5f71f6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f71f8:{NFSU2_TR(0x5f71f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f71fdull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f71fd:L5f71fd:{c.instructions+=5;NFSU2_TR(0x5f71fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7201:{NFSU2_TR(0x5f7201);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7205:{NFSU2_TR(0x5f7205);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5f7207:{NFSU2_TR(0x5f7207);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f720d:{NFSU2_TR(0x5f720d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7212ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f7212:L5f7212:{c.instructions+=6;NFSU2_TR(0x5f7212);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f7218:{NFSU2_TR(0x5f7218);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f721c:{NFSU2_TR(0x5f721c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5f7220:{NFSU2_TR(0x5f7220);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7222:{NFSU2_TR(0x5f7222);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7225:{NFSU2_TR(0x5f7225);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7256;}}
}
B5f7227:L5f7227:{c.instructions+=5;NFSU2_TR(0x5f7227);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7229:{NFSU2_TR(0x5f7229);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f722f:{NFSU2_TR(0x5f722f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7231:{NFSU2_TR(0x5f7231);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f7234:{NFSU2_TR(0x5f7234);
if(r1(R+514)){{goto L5f7256;}}
}
B5f7236:L5f7236:{c.instructions+=9;NFSU2_TR(0x5f7236);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f723a:{NFSU2_TR(0x5f723a);
__builtin_memmove((R+0),(R+4),4);
}
B5f723c:{NFSU2_TR(0x5f723c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5f723e:{NFSU2_TR(0x5f723e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B5f7241:{NFSU2_TR(0x5f7241);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5f7244:{NFSU2_TR(0x5f7244);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+16)+u32(1160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f724b:{NFSU2_TR(0x5f724b);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f7252:{NFSU2_TR(0x5f7252);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7254:{NFSU2_TR(0x5f7254);
{goto L5f7258;}
}
B5f7256:L5f7256:{c.instructions+=1;NFSU2_TR(0x5f7256);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7258:L5f7258:{c.instructions+=11;NFSU2_TR(0x5f7258);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5f725d:{NFSU2_TR(0x5f725d);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5f7263:{NFSU2_TR(0x5f7263);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7265:{NFSU2_TR(0x5f7265);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7267:{NFSU2_TR(0x5f7267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7268:{NFSU2_TR(0x5f7268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7269:{NFSU2_TR(0x5f7269);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f726b:{NFSU2_TR(0x5f726b);
u8 U[4];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f726f:{NFSU2_TR(0x5f726f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7270:{NFSU2_TR(0x5f7270);
__builtin_memmove((R+4),(R+24),4);
}
B5f7272:{NFSU2_TR(0x5f7272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7277ull));
TAIL_STATIC(0x5dd550u,5dd);
}
B5f7277:L5f7277:{c.instructions+=3;NFSU2_TR(0x5f7277);
__builtin_memmove((R+28),(R+0),4);
}
B5f7279:{NFSU2_TR(0x5f7279);
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
B5f727b:{NFSU2_TR(0x5f727b);
if(r1(R+518)){{goto L5f730f;}}
}
B5f7281:L5f7281:{c.instructions+=21;NFSU2_TR(0x5f7281);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7283:{NFSU2_TR(0x5f7283);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7285:{NFSU2_TR(0x5f7285);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7288:{NFSU2_TR(0x5f7288);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f728b:{NFSU2_TR(0x5f728b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f728d:{NFSU2_TR(0x5f728d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5f728f:{NFSU2_TR(0x5f728f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5f7291:{NFSU2_TR(0x5f7291);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5f7293:{NFSU2_TR(0x5f7293);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f7295:{NFSU2_TR(0x5f7295);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5f7297:{NFSU2_TR(0x5f7297);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5f7299:{NFSU2_TR(0x5f7299);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f729b:{NFSU2_TR(0x5f729b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f729f:{NFSU2_TR(0x5f729f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f72a3:{NFSU2_TR(0x5f72a3);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f72a9:{NFSU2_TR(0x5f72a9);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f72af:{NFSU2_TR(0x5f72af);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f72b1:{NFSU2_TR(0x5f72b1);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5f72b3:{NFSU2_TR(0x5f72b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f72b5:{NFSU2_TR(0x5f72b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f72b8:{NFSU2_TR(0x5f72b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f735c;}}
}
B5f72be:L5f72be:{c.instructions+=12;NFSU2_TR(0x5f72be);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f72c3:{NFSU2_TR(0x5f72c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f72ca:{NFSU2_TR(0x5f72ca);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f72d1:{NFSU2_TR(0x5f72d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f72d5:{NFSU2_TR(0x5f72d5);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f72db:{NFSU2_TR(0x5f72db);
w4(R+4,u32(0x88f298ull));
}
B5f72e0:{NFSU2_TR(0x5f72e0);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f72e6:{NFSU2_TR(0x5f72e6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f72ea:{NFSU2_TR(0x5f72ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f72ee:{NFSU2_TR(0x5f72ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f72ef:{NFSU2_TR(0x5f72ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f72f0:{NFSU2_TR(0x5f72f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f72f5ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f72f5:L5f72f5:{c.instructions+=4;NFSU2_TR(0x5f72f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f72fb:{NFSU2_TR(0x5f72fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f72fd:{NFSU2_TR(0x5f72fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7300:{NFSU2_TR(0x5f7300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f735a;}}
}
B5f7302:L5f7302:{c.instructions+=4;NFSU2_TR(0x5f7302);
{u32 ea_=u32(u32(7908012u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f7308:{NFSU2_TR(0x5f7308);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f730a:{NFSU2_TR(0x5f730a);
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
B5f730d:{NFSU2_TR(0x5f730d);
if(r1(R+514)){{goto L5f735c;}}
}
B5f730f:L5f730f:{c.instructions+=3;NFSU2_TR(0x5f730f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7313:{NFSU2_TR(0x5f7313);
u8 U[8];
w4(U+0,u32(u32(u32(0x894ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f731e:{NFSU2_TR(0x5f731e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7323ull));
TAIL_STATIC(0x4022c0u,402);
}
B5f7323:L5f7323:{c.instructions+=6;NFSU2_TR(0x5f7323);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5f7327:{NFSU2_TR(0x5f7327);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f732d:{NFSU2_TR(0x5f732d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7335:{NFSU2_TR(0x5f7335);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f733b:{NFSU2_TR(0x5f733b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5f733d:{NFSU2_TR(0x5f733d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f7340:L5f7340:{c.instructions+=7;NFSU2_TR(0x5f7340);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7342:{NFSU2_TR(0x5f7342);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7346:{NFSU2_TR(0x5f7346);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f734c:{NFSU2_TR(0x5f734c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f734f:{NFSU2_TR(0x5f734f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7351:{NFSU2_TR(0x5f7351);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f7354:{NFSU2_TR(0x5f7354);
if(r1(R+514)){{goto L5f7376;}}
}
B5f7356:L5f7356:{c.instructions+=2;NFSU2_TR(0x5f7356);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7358:{NFSU2_TR(0x5f7358);
{goto L5f7378;}
}
B5f735a:L5f735a:{c.instructions+=1;NFSU2_TR(0x5f735a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f735c:L5f735c:{c.instructions+=6;NFSU2_TR(0x5f735c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7360:{NFSU2_TR(0x5f7360);
__builtin_memmove((R+4),(R+0),4);
}
B5f7362:{NFSU2_TR(0x5f7362);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f7363:{NFSU2_TR(0x5f7363);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x2710ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2710ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2710ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f7369:{NFSU2_TR(0x5f7369);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f736d:{NFSU2_TR(0x5f736d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f730fu);}goto L5f730f;}}
}
B5f736f:L5f736f:{c.instructions+=2;NFSU2_TR(0x5f736f);
__builtin_memmove((R+24),(R+28),4);
}
B5f7371:{NFSU2_TR(0x5f7371);
TAIL_STATIC(0x5f6f02u,5f6);
}
B5f7376:L5f7376:{c.instructions+=1;NFSU2_TR(0x5f7376);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7378:L5f7378:{c.instructions+=3;NFSU2_TR(0x5f7378);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f737f:{NFSU2_TR(0x5f737f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7381:{NFSU2_TR(0x5f7381);
if(r1(R+518)){{goto L5f7388;}}
}
B5f7383:L5f7383:{c.instructions+=1;NFSU2_TR(0x5f7383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7388ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B5f7388:L5f7388:{c.instructions+=9;NFSU2_TR(0x5f7388);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f738e:{NFSU2_TR(0x5f738e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5f738f:{NFSU2_TR(0x5f738f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f7391:{NFSU2_TR(0x5f7391);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5f7394:{NFSU2_TR(0x5f7394);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x100ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f739a:{NFSU2_TR(0x5f739a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f739e:{NFSU2_TR(0x5f739e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f73a2:{NFSU2_TR(0x5f73a2);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f73a5:{NFSU2_TR(0x5f73a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f7340u);}goto L5f7340;}}
}
B5f73a7:L5f73a7:{c.instructions+=13;NFSU2_TR(0x5f73a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f73ab:{NFSU2_TR(0x5f73ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f73ad:{NFSU2_TR(0x5f73ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x88cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f73b4:{NFSU2_TR(0x5f73b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B5f73b6:{NFSU2_TR(0x5f73b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f73b7:{NFSU2_TR(0x5f73b7);
__builtin_memmove((R+0),(R+12),4);
}
B5f73b9:{NFSU2_TR(0x5f73b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73c0:{NFSU2_TR(0x5f73c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f73c1:{NFSU2_TR(0x5f73c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f73c2:{NFSU2_TR(0x5f73c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f73c3:{NFSU2_TR(0x5f73c3);
__builtin_memmove((R+16),(R+20),4);
}
B5f73c5:{NFSU2_TR(0x5f73c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f73c6:{NFSU2_TR(0x5f73c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f73d0:L5f73d0:{c.instructions+=20;NFSU2_TR(0x5f73d0);
__builtin_memmove((R+0),(R+4),4);
}
B5f73d2:{NFSU2_TR(0x5f73d2);
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
B5f73d4:{NFSU2_TR(0x5f73d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73d7:{NFSU2_TR(0x5f73d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73da:{NFSU2_TR(0x5f73da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73dd:{NFSU2_TR(0x5f73dd);
w4(R+8,u32(0xbf800000ull));
}
B5f73e2:{NFSU2_TR(0x5f73e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73e5:{NFSU2_TR(0x5f73e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5f73e7:{NFSU2_TR(0x5f73e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73ea:{NFSU2_TR(0x5f73ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73ed:{NFSU2_TR(0x5f73ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73f0:{NFSU2_TR(0x5f73f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73f3:{NFSU2_TR(0x5f73f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73f6:{NFSU2_TR(0x5f73f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73f9:{NFSU2_TR(0x5f73f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f73fc:{NFSU2_TR(0x5f73fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7403:{NFSU2_TR(0x5f7403);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7406:{NFSU2_TR(0x5f7406);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7409:{NFSU2_TR(0x5f7409);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f740c:{NFSU2_TR(0x5f740c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7410:L5f7410:{c.instructions+=13;NFSU2_TR(0x5f7410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7411:{NFSU2_TR(0x5f7411);
__builtin_memmove((R+20),(R+16),4);
}
B5f7413:{NFSU2_TR(0x5f7413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5f7416:{NFSU2_TR(0x5f7416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5f7419:{NFSU2_TR(0x5f7419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f741c:{NFSU2_TR(0x5f741c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f741d:{NFSU2_TR(0x5f741d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f741e:{NFSU2_TR(0x5f741e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5f7420:{NFSU2_TR(0x5f7420);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7427:{NFSU2_TR(0x5f7427);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7428:{NFSU2_TR(0x5f7428);
__builtin_memmove((R+28),(R+4),4);
}
B5f742a:{NFSU2_TR(0x5f742a);
w4(R+12,u32(0x1ull));
}
B5f742f:{NFSU2_TR(0x5f742f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7513;}}
}
B5f7435:L5f7435:{c.instructions+=3;NFSU2_TR(0x5f7435);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7438:{NFSU2_TR(0x5f7438);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f743b:{NFSU2_TR(0x5f743b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7461;}}
}
B5f743d:L5f743d:{c.instructions+=7;NFSU2_TR(0x5f743d);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7443:{NFSU2_TR(0x5f7443);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7445:{NFSU2_TR(0x5f7445);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f7449:{NFSU2_TR(0x5f7449);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f744b:{NFSU2_TR(0x5f744b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f744d:{NFSU2_TR(0x5f744d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7450:{NFSU2_TR(0x5f7450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7504;}}
}
B5f7456:L5f7456:{c.instructions+=3;NFSU2_TR(0x5f7456);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7458:{NFSU2_TR(0x5f7458);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f745c:{NFSU2_TR(0x5f745c);
{goto L5f7504;}
}
B5f7461:L5f7461:{c.instructions+=7;NFSU2_TR(0x5f7461);
{u32 ea_=u32(r4(R+24)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7467:{NFSU2_TR(0x5f7467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f746a:{NFSU2_TR(0x5f746a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7470:{NFSU2_TR(0x5f7470);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f7472:{NFSU2_TR(0x5f7472);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7474:{NFSU2_TR(0x5f7474);
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
B5f7477:{NFSU2_TR(0x5f7477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7485;}}
}
B5f7479:L5f7479:{c.instructions+=3;NFSU2_TR(0x5f7479);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f747b:{NFSU2_TR(0x5f747b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7483:{NFSU2_TR(0x5f7483);
{goto L5f7489;}
}
B5f7485:L5f7485:{c.instructions+=1;NFSU2_TR(0x5f7485);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7489:L5f7489:{c.instructions+=2;NFSU2_TR(0x5f7489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5f748b:{NFSU2_TR(0x5f748b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f748eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5f748e:L5f748e:{c.instructions+=9;NFSU2_TR(0x5f748e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f7492:{NFSU2_TR(0x5f7492);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7496:{NFSU2_TR(0x5f7496);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f749c:{NFSU2_TR(0x5f749c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f749e:{NFSU2_TR(0x5f749e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f74a2:{NFSU2_TR(0x5f74a2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f74a4:{NFSU2_TR(0x5f74a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f74a6:{NFSU2_TR(0x5f74a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f74a9:{NFSU2_TR(0x5f74a9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f74b1;}}
}
B5f74ab:L5f74ab:{c.instructions+=2;NFSU2_TR(0x5f74ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f74af:{NFSU2_TR(0x5f74af);
{goto L5f74b3;}
}
B5f74b1:L5f74b1:{c.instructions+=1;NFSU2_TR(0x5f74b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f74b3:L5f74b3:{c.instructions+=3;NFSU2_TR(0x5f74b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f74b6:{NFSU2_TR(0x5f74b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f74b9:{NFSU2_TR(0x5f74b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f74beull));
TAIL_STATIC(0x5b5930u,5b5);
}
B5f74be:L5f74be:{c.instructions+=5;NFSU2_TR(0x5f74be);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f74c2:{NFSU2_TR(0x5f74c2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5f74c4:{NFSU2_TR(0x5f74c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f74c6:{NFSU2_TR(0x5f74c6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f74c9:{NFSU2_TR(0x5f74c9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f74d1;}}
}
B5f74cb:L5f74cb:{c.instructions+=2;NFSU2_TR(0x5f74cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f74cf:{NFSU2_TR(0x5f74cf);
{goto L5f74d3;}
}
B5f74d1:L5f74d1:{c.instructions+=1;NFSU2_TR(0x5f74d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f74d3:L5f74d3:{c.instructions+=5;NFSU2_TR(0x5f74d3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f74d5:{NFSU2_TR(0x5f74d5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f74d9:{NFSU2_TR(0x5f74d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f74db:{NFSU2_TR(0x5f74db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f74de:{NFSU2_TR(0x5f74de);
if(r1(R+518)){{goto L5f74e6;}}
}
B5f74e0:L5f74e0:{c.instructions+=2;NFSU2_TR(0x5f74e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f74e2:{NFSU2_TR(0x5f74e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f74e6:L5f74e6:{c.instructions+=4;NFSU2_TR(0x5f74e6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f74ec:{NFSU2_TR(0x5f74ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f74ee:{NFSU2_TR(0x5f74ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f74f1:{NFSU2_TR(0x5f74f1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f7500;}}
}
B5f74f3:L5f74f3:{c.instructions+=4;NFSU2_TR(0x5f74f3);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f74f9:{NFSU2_TR(0x5f74f9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f74fb:{NFSU2_TR(0x5f74fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f74fe:{NFSU2_TR(0x5f74fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7504;}}
}
B5f7500:L5f7500:{c.instructions+=2;NFSU2_TR(0x5f7500);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7502:{NFSU2_TR(0x5f7502);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7504:L5f7504:{c.instructions+=4;NFSU2_TR(0x5f7504);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f7506:{NFSU2_TR(0x5f7506);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7508:{NFSU2_TR(0x5f7508);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f750b:{NFSU2_TR(0x5f750b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f7511;}}
}
B5f750d:L5f750d:{c.instructions+=2;NFSU2_TR(0x5f750d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f750f:{NFSU2_TR(0x5f750f);
{goto L5f7513;}
}
B5f7511:L5f7511:{c.instructions+=1;NFSU2_TR(0x5f7511);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7513:L5f7513:{c.instructions+=3;NFSU2_TR(0x5f7513);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5f7518:{NFSU2_TR(0x5f7518);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f751a:{NFSU2_TR(0x5f751a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7529;}}
}
B5f751c:L5f751c:{c.instructions+=3;NFSU2_TR(0x5f751c);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5f7521:{NFSU2_TR(0x5f7521);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7523:{NFSU2_TR(0x5f7523);
if(r1(R+518)){{goto L5f75aa;}}
}
B5f7529:L5f7529:{c.instructions+=13;NFSU2_TR(0x5f7529);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f752e:{NFSU2_TR(0x5f752e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f7535:{NFSU2_TR(0x5f7535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f753b:{NFSU2_TR(0x5f753b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f753c:{NFSU2_TR(0x5f753c);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7543:{NFSU2_TR(0x5f7543);
__builtin_memmove((R+0),(R+8),4);
}
B5f7545:{NFSU2_TR(0x5f7545);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f754b:{NFSU2_TR(0x5f754b);
w4(R+4,u32(0x88f298ull));
}
B5f7550:{NFSU2_TR(0x5f7550);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7554:{NFSU2_TR(0x5f7554);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f755a:{NFSU2_TR(0x5f755a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f755d:{NFSU2_TR(0x5f755d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f755e:{NFSU2_TR(0x5f755e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7563ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B5f7563:L5f7563:{c.instructions+=5;NFSU2_TR(0x5f7563);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f7565:{NFSU2_TR(0x5f7565);
{u32 ea_=u32(u32(7906636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f756b:{NFSU2_TR(0x5f756b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f756d:{NFSU2_TR(0x5f756d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7570:{NFSU2_TR(0x5f7570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f75aa;}}
}
B5f7572:L5f7572:{c.instructions+=5;NFSU2_TR(0x5f7572);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7575:{NFSU2_TR(0x5f7575);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f757b:{NFSU2_TR(0x5f757b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f757d:{NFSU2_TR(0x5f757d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f7580:{NFSU2_TR(0x5f7580);
if(r1(R+514)){{goto L5f75aa;}}
}
B5f7582:L5f7582:{c.instructions+=2;NFSU2_TR(0x5f7582);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f7588:{NFSU2_TR(0x5f7588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f758dull));
TAIL_STATIC(0x402000u,402);
}
B5f758d:L5f758d:{c.instructions+=3;NFSU2_TR(0x5f758d);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7593:{NFSU2_TR(0x5f7593);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f7599:{NFSU2_TR(0x5f7599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f759eull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f759e:L5f759e:{c.instructions+=3;NFSU2_TR(0x5f759e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f75a1:{NFSU2_TR(0x5f75a1);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f75a7:{NFSU2_TR(0x5f75a7);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f75aa:L5f75aa:{c.instructions+=8;NFSU2_TR(0x5f75aa);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f75b0:{NFSU2_TR(0x5f75b0);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f75b3:{NFSU2_TR(0x5f75b3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f75b9:{NFSU2_TR(0x5f75b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f75bd:{NFSU2_TR(0x5f75bd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f75c3:{NFSU2_TR(0x5f75c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f75c5:{NFSU2_TR(0x5f75c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f75c8:{NFSU2_TR(0x5f75c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7659;}}
}
B5f75ce:L5f75ce:{c.instructions+=6;NFSU2_TR(0x5f75ce);
{u32 ea_=u32(r4(R+24)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f75d4:{NFSU2_TR(0x5f75d4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f75d8:{NFSU2_TR(0x5f75d8);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f75db:{NFSU2_TR(0x5f75db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f75de:{NFSU2_TR(0x5f75de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f75e0:{NFSU2_TR(0x5f75e0);
if(r1(R+518)){{goto L5f75e9;}}
}
B5f75e2:L5f75e2:{c.instructions+=2;NFSU2_TR(0x5f75e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f75e7:{NFSU2_TR(0x5f75e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f761a;}}
}
B5f75e9:L5f75e9:{c.instructions+=6;NFSU2_TR(0x5f75e9);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f75ef:{NFSU2_TR(0x5f75ef);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f75f5:{NFSU2_TR(0x5f75f5);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f75fb:{NFSU2_TR(0x5f75fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f75fd:{NFSU2_TR(0x5f75fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7600:{NFSU2_TR(0x5f7600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f761a;}}
}
B5f7602:L5f7602:{c.instructions+=4;NFSU2_TR(0x5f7602);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7606:{NFSU2_TR(0x5f7606);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f760c:{NFSU2_TR(0x5f760c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f7612:{NFSU2_TR(0x5f7612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7617ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f7617:L5f7617:{c.instructions+=1;NFSU2_TR(0x5f7617);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f761a:L5f761a:{c.instructions+=3;NFSU2_TR(0x5f761a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f761d:{NFSU2_TR(0x5f761d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f761f:{NFSU2_TR(0x5f761f);
if(r1(R+518)){{goto L5f7628;}}
}
B5f7621:L5f7621:{c.instructions+=2;NFSU2_TR(0x5f7621);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7626:{NFSU2_TR(0x5f7626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7659;}}
}
B5f7628:L5f7628:{c.instructions+=6;NFSU2_TR(0x5f7628);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f762e:{NFSU2_TR(0x5f762e);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7634:{NFSU2_TR(0x5f7634);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f763a:{NFSU2_TR(0x5f763a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f763c:{NFSU2_TR(0x5f763c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f763f:{NFSU2_TR(0x5f763f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7659;}}
}
B5f7641:L5f7641:{c.instructions+=4;NFSU2_TR(0x5f7641);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7645:{NFSU2_TR(0x5f7645);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f764b:{NFSU2_TR(0x5f764b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f7651:{NFSU2_TR(0x5f7651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7656ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f7656:L5f7656:{c.instructions+=1;NFSU2_TR(0x5f7656);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7659:L5f7659:{c.instructions+=4;NFSU2_TR(0x5f7659);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f765f:{NFSU2_TR(0x5f765f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7662:{NFSU2_TR(0x5f7662);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f7664:{NFSU2_TR(0x5f7664);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f768b;}}
}
B5f7666:L5f7666:{c.instructions+=2;NFSU2_TR(0x5f7666);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7668:{NFSU2_TR(0x5f7668);
if(r1(R+518)){{goto L5f768b;}}
}
B5f766a:L5f766a:{c.instructions+=3;NFSU2_TR(0x5f766a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f766d:{NFSU2_TR(0x5f766d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7670:{NFSU2_TR(0x5f7670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f768b;}}
}
B5f7672:L5f7672:{c.instructions+=7;NFSU2_TR(0x5f7672);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7675:{NFSU2_TR(0x5f7675);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7678:{NFSU2_TR(0x5f7678);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f767b:{NFSU2_TR(0x5f767b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f7681:{NFSU2_TR(0x5f7681);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7683:{NFSU2_TR(0x5f7683);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7686:{NFSU2_TR(0x5f7686);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f768b;}}
}
B5f7688:L5f7688:{c.instructions+=1;NFSU2_TR(0x5f7688);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5f768b:L5f768b:{c.instructions+=3;NFSU2_TR(0x5f768b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7691:{NFSU2_TR(0x5f7691);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7693:{NFSU2_TR(0x5f7693);
if(r1(R+518)){{goto L5f7698;}}
}
B5f7695:L5f7695:{c.instructions+=1;NFSU2_TR(0x5f7695);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7698:L5f7698:{c.instructions+=2;NFSU2_TR(0x5f7698);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f769f:{NFSU2_TR(0x5f769f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f770b;}}
}
B5f76a1:L5f76a1:{c.instructions+=4;NFSU2_TR(0x5f76a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f76a4:{NFSU2_TR(0x5f76a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f76a7:{NFSU2_TR(0x5f76a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f76a9:{NFSU2_TR(0x5f76a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f770b;}}
}
B5f76ab:L5f76ab:{c.instructions+=17;NFSU2_TR(0x5f76ab);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f76b1:{NFSU2_TR(0x5f76b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f76b2:{NFSU2_TR(0x5f76b2);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f76b8:{NFSU2_TR(0x5f76b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f76bb:{NFSU2_TR(0x5f76bb);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f76c1:{NFSU2_TR(0x5f76c1);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f76c7:{NFSU2_TR(0x5f76c7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f76c9:{NFSU2_TR(0x5f76c9);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f76cf:{NFSU2_TR(0x5f76cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f76d1:{NFSU2_TR(0x5f76d1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5f76d3:{NFSU2_TR(0x5f76d3);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f76d9:{NFSU2_TR(0x5f76d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f76db:{NFSU2_TR(0x5f76db);
{u32 ea_=u32(u32(8003204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f76e1:{NFSU2_TR(0x5f76e1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5f76e3:{NFSU2_TR(0x5f76e3);
{u32 ea_=u32(u32(8017560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f76e9:{NFSU2_TR(0x5f76e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f76ec:{NFSU2_TR(0x5f76ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f76f1ull));
TAIL_STATIC(0x576970u,576);
}
B5f76f1:L5f76f1:{c.instructions+=7;NFSU2_TR(0x5f76f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f76f4:{NFSU2_TR(0x5f76f4);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f76f7:{NFSU2_TR(0x5f76f7);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f76fa:{NFSU2_TR(0x5f76fa);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f76fd:{NFSU2_TR(0x5f76fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f76ff:{NFSU2_TR(0x5f76ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7702:{NFSU2_TR(0x5f7702);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7709;}}
}
B5f7704:L5f7704:{c.instructions+=2;NFSU2_TR(0x5f7704);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7707:{NFSU2_TR(0x5f7707);
{goto L5f770b;}
}
B5f7709:L5f7709:{c.instructions+=1;NFSU2_TR(0x5f7709);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f770b:L5f770b:{c.instructions+=5;NFSU2_TR(0x5f770b);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f770e:{NFSU2_TR(0x5f770e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f7714:{NFSU2_TR(0x5f7714);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7716:{NFSU2_TR(0x5f7716);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f7719:{NFSU2_TR(0x5f7719);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5f7728;}}
}
B5f771b:L5f771b:{c.instructions+=2;NFSU2_TR(0x5f771b);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbf800000ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbf800000ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbf800000ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5f7722:{NFSU2_TR(0x5f7722);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f782f;}}
}
B5f7728:L5f7728:{c.instructions+=3;NFSU2_TR(0x5f7728);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f772d:{NFSU2_TR(0x5f772d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5f7730:{NFSU2_TR(0x5f7730);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f782f;}}
}
B5f7736:L5f7736:{c.instructions+=2;NFSU2_TR(0x5f7736);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f773d:{NFSU2_TR(0x5f773d);
if(r1(R+518)){{goto L5f782f;}}
}
B5f7743:L5f7743:{c.instructions+=6;NFSU2_TR(0x5f7743);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f7745:{NFSU2_TR(0x5f7745);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f774b:{NFSU2_TR(0x5f774b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7753:{NFSU2_TR(0x5f7753);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7757:{NFSU2_TR(0x5f7757);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f775b:{NFSU2_TR(0x5f775b);
{goto L5f7760;}
}
B5f7760:L5f7760:{c.instructions+=3;NFSU2_TR(0x5f7760);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7761:{NFSU2_TR(0x5f7761);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7764:{NFSU2_TR(0x5f7764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7769ull));
TAIL_STATIC(0x592870u,592);
}
B5f7769:L5f7769:{c.instructions+=2;NFSU2_TR(0x5f7769);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f776b:{NFSU2_TR(0x5f776b);
if(r1(R+518)){{goto L5f7784;}}
}
B5f776d:L5f776d:{c.instructions+=7;NFSU2_TR(0x5f776d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7771:{NFSU2_TR(0x5f7771);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7775:{NFSU2_TR(0x5f7775);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7779:{NFSU2_TR(0x5f7779);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f777b:{NFSU2_TR(0x5f777b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5f777c:{NFSU2_TR(0x5f777c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7780:{NFSU2_TR(0x5f7780);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7784:L5f7784:{c.instructions+=6;NFSU2_TR(0x5f7784);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7788:{NFSU2_TR(0x5f7788);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5f7789:{NFSU2_TR(0x5f7789);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5f778c:{NFSU2_TR(0x5f778c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f778f:{NFSU2_TR(0x5f778f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7793:{NFSU2_TR(0x5f7793);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f7760u);}goto L5f7760;}}
}
B5f7795:L5f7795:{c.instructions+=5;NFSU2_TR(0x5f7795);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7799:{NFSU2_TR(0x5f7799);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f779c:{NFSU2_TR(0x5f779c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbf800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f77a1:{NFSU2_TR(0x5f77a1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5f77a5:{NFSU2_TR(0x5f77a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f77df;}}
}
B5f77a7:L5f77a7:{c.instructions+=7;NFSU2_TR(0x5f77a7);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f77ac:{NFSU2_TR(0x5f77ac);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f77af:{NFSU2_TR(0x5f77af);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f77b5:{NFSU2_TR(0x5f77b5);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f77bb:{NFSU2_TR(0x5f77bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f77bd:{NFSU2_TR(0x5f77bd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f77c0:{NFSU2_TR(0x5f77c0);
if(r1(R+514)){{goto L5f77df;}}
}
B5f77c2:L5f77c2:{c.instructions+=4;NFSU2_TR(0x5f77c2);
{u32 ea_=u32(u32(8017556u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f77c8:{NFSU2_TR(0x5f77c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f77ca:{NFSU2_TR(0x5f77ca);
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
B5f77cd:{NFSU2_TR(0x5f77cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f782f;}}
}
B5f77cf:L5f77cf:{c.instructions+=7;NFSU2_TR(0x5f77cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f77d6:{NFSU2_TR(0x5f77d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f77d7:{NFSU2_TR(0x5f77d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f77d8:{NFSU2_TR(0x5f77d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f77d9:{NFSU2_TR(0x5f77d9);
__builtin_memmove((R+16),(R+20),4);
}
B5f77db:{NFSU2_TR(0x5f77db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f77dc:{NFSU2_TR(0x5f77dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f77df:L5f77df:{c.instructions+=5;NFSU2_TR(0x5f77df);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f77e2:{NFSU2_TR(0x5f77e2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f77e8:{NFSU2_TR(0x5f77e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f77ea:{NFSU2_TR(0x5f77ea);
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
B5f77ed:{NFSU2_TR(0x5f77ed);
if(r1(R+514)){{goto L5f782d;}}
}
B5f77ef:L5f77ef:{c.instructions+=4;NFSU2_TR(0x5f77ef);
{u32 ea_=u32(u32(8017556u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f77f5:{NFSU2_TR(0x5f77f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f77f7:{NFSU2_TR(0x5f77f7);
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
B5f77fa:{NFSU2_TR(0x5f77fa);
if(r1(R+514)){{goto L5f782f;}}
}
B5f77fc:L5f77fc:{c.instructions+=7;NFSU2_TR(0x5f77fc);
{u32 ea_=u32(r4(R+24)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7802:{NFSU2_TR(0x5f7802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7805:{NFSU2_TR(0x5f7805);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f7809:{NFSU2_TR(0x5f7809);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f780c:{NFSU2_TR(0x5f780c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7812:{NFSU2_TR(0x5f7812);
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
B5f7814:{NFSU2_TR(0x5f7814);
if(r1(R+518)){{goto L5f782f;}}
}
B5f7816:L5f7816:{c.instructions+=5;NFSU2_TR(0x5f7816);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f781a:{NFSU2_TR(0x5f781a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f781c:{NFSU2_TR(0x5f781c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f781d:{NFSU2_TR(0x5f781d);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f781f:{NFSU2_TR(0x5f781f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7824ull));
TAIL_STATIC(0x56ed10u,56e);
}
B5f7824:L5f7824:{c.instructions+=6;NFSU2_TR(0x5f7824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7825:{NFSU2_TR(0x5f7825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f7826:{NFSU2_TR(0x5f7826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f7827:{NFSU2_TR(0x5f7827);
__builtin_memmove((R+16),(R+20),4);
}
B5f7829:{NFSU2_TR(0x5f7829);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f782a:{NFSU2_TR(0x5f782a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f782d:L5f782d:{c.instructions+=1;NFSU2_TR(0x5f782d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f782f:L5f782f:{c.instructions+=6;NFSU2_TR(0x5f782f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7830:{NFSU2_TR(0x5f7830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f7831:{NFSU2_TR(0x5f7831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f7832:{NFSU2_TR(0x5f7832);
__builtin_memmove((R+16),(R+20),4);
}
B5f7834:{NFSU2_TR(0x5f7834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f7835:{NFSU2_TR(0x5f7835);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7840:L5f7840:{c.instructions+=34;NFSU2_TR(0x5f7840);
__builtin_memmove((R+8),(R+4),4);
}
B5f7842:{NFSU2_TR(0x5f7842);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f7844:{NFSU2_TR(0x5f7844);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7845:{NFSU2_TR(0x5f7845);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5f7847:{NFSU2_TR(0x5f7847);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f784a:{NFSU2_TR(0x5f784a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f784d:{NFSU2_TR(0x5f784d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7850:{NFSU2_TR(0x5f7850);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7853:{NFSU2_TR(0x5f7853);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7856:{NFSU2_TR(0x5f7856);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7859:{NFSU2_TR(0x5f7859);
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
B5f785b:{NFSU2_TR(0x5f785b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f785e:{NFSU2_TR(0x5f785e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7861:{NFSU2_TR(0x5f7861);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7864:{NFSU2_TR(0x5f7864);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7867:{NFSU2_TR(0x5f7867);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f786a:{NFSU2_TR(0x5f786a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f786d:{NFSU2_TR(0x5f786d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7870:{NFSU2_TR(0x5f7870);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7873:{NFSU2_TR(0x5f7873);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7876:{NFSU2_TR(0x5f7876);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7879:{NFSU2_TR(0x5f7879);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f787c:{NFSU2_TR(0x5f787c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f787f:{NFSU2_TR(0x5f787f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7882:{NFSU2_TR(0x5f7882);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7885:{NFSU2_TR(0x5f7885);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7888:{NFSU2_TR(0x5f7888);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f788e:{NFSU2_TR(0x5f788e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7894:{NFSU2_TR(0x5f7894);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f789a:{NFSU2_TR(0x5f789a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78a0:{NFSU2_TR(0x5f78a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78a6:{NFSU2_TR(0x5f78a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f78a7:{NFSU2_TR(0x5f78a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f78ad:{NFSU2_TR(0x5f78ad);
w4(R+4,u32(0x15ull));
}
B5f78b2:L5f78b2:{c.instructions+=1;NFSU2_TR(0x5f78b2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f78b4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f78b2u);}goto L5f78b2;}
}
B5f78b4:L5f78b4:{c.instructions+=2;NFSU2_TR(0x5f78b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f78ba:{NFSU2_TR(0x5f78ba);
w4(R+4,u32(0x15ull));
}
B5f78bf:L5f78bf:{c.instructions+=1;NFSU2_TR(0x5f78bf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5f78c1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f78bfu);}goto L5f78bf;}
}
B5f78c1:L5f78c1:{c.instructions+=26;NFSU2_TR(0x5f78c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78c7:{NFSU2_TR(0x5f78c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78cd:{NFSU2_TR(0x5f78cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78d3:{NFSU2_TR(0x5f78d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78d9:{NFSU2_TR(0x5f78d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78df:{NFSU2_TR(0x5f78df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78e5:{NFSU2_TR(0x5f78e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78eb:{NFSU2_TR(0x5f78eb);
w4(R+0,u32(0xbf800000ull));
}
B5f78f0:{NFSU2_TR(0x5f78f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78f6:{NFSU2_TR(0x5f78f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f78fc:{NFSU2_TR(0x5f78fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7902:{NFSU2_TR(0x5f7902);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7908:{NFSU2_TR(0x5f7908);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f790e:{NFSU2_TR(0x5f790e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7914:{NFSU2_TR(0x5f7914);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f791a:{NFSU2_TR(0x5f791a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7920:{NFSU2_TR(0x5f7920);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7926:{NFSU2_TR(0x5f7926);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7930:{NFSU2_TR(0x5f7930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7931:{NFSU2_TR(0x5f7931);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7937:{NFSU2_TR(0x5f7937);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f793d:{NFSU2_TR(0x5f793d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7943:{NFSU2_TR(0x5f7943);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7949:{NFSU2_TR(0x5f7949);
__builtin_memmove((R+0),(R+8),4);
}
B5f794b:{NFSU2_TR(0x5f794b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f794c:{NFSU2_TR(0x5f794c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7950:L5f7950:{c.instructions+=8;NFSU2_TR(0x5f7950);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7951:{NFSU2_TR(0x5f7951);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7952:{NFSU2_TR(0x5f7952);
__builtin_memmove((R+24),(R+4),4);
}
B5f7954:{NFSU2_TR(0x5f7954);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7955:{NFSU2_TR(0x5f7955);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f795b:{NFSU2_TR(0x5f795b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f795d:{NFSU2_TR(0x5f795d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f795f:{NFSU2_TR(0x5f795f);
if(r1(R+518)){{goto L5f7971;}}
}
B5f7961:L5f7961:{c.instructions+=2;NFSU2_TR(0x5f7961);
__builtin_memmove((R+4),(R+28),4);
}
B5f7963:{NFSU2_TR(0x5f7963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7968ull));
TAIL_STATIC(0x56fce0u,56f);
}
B5f7968:L5f7968:{c.instructions+=2;NFSU2_TR(0x5f7968);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7969:{NFSU2_TR(0x5f7969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f796eull));
TAIL_STATIC(0x575630u,575);
}
B5f796e:L5f796e:{c.instructions+=1;NFSU2_TR(0x5f796e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f7971:L5f7971:{c.instructions+=4;NFSU2_TR(0x5f7971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f7977:{NFSU2_TR(0x5f7977);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5f7979:{NFSU2_TR(0x5f7979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f797f:{NFSU2_TR(0x5f797f);
if(r1(R+518)){{goto L5f7991;}}
}
B5f7981:L5f7981:{c.instructions+=2;NFSU2_TR(0x5f7981);
__builtin_memmove((R+4),(R+28),4);
}
B5f7983:{NFSU2_TR(0x5f7983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7988ull));
TAIL_STATIC(0x4022c0u,402);
}
B5f7988:L5f7988:{c.instructions+=2;NFSU2_TR(0x5f7988);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7989:{NFSU2_TR(0x5f7989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f798eull));
TAIL_STATIC(0x575630u,575);
}
B5f798e:L5f798e:{c.instructions+=1;NFSU2_TR(0x5f798e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f7991:L5f7991:{c.instructions+=4;NFSU2_TR(0x5f7991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f7997:{NFSU2_TR(0x5f7997);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7999:{NFSU2_TR(0x5f7999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f799f:{NFSU2_TR(0x5f799f);
if(r1(R+518)){{goto L5f79b1;}}
}
B5f79a1:L5f79a1:{c.instructions+=2;NFSU2_TR(0x5f79a1);
__builtin_memmove((R+4),(R+28),4);
}
B5f79a3:{NFSU2_TR(0x5f79a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f79a8ull));
TAIL_STATIC(0x56d7a0u,56d);
}
B5f79a8:L5f79a8:{c.instructions+=2;NFSU2_TR(0x5f79a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f79a9:{NFSU2_TR(0x5f79a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f79aeull));
TAIL_STATIC(0x575630u,575);
}
B5f79ae:L5f79ae:{c.instructions+=1;NFSU2_TR(0x5f79ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f79b1:L5f79b1:{c.instructions+=4;NFSU2_TR(0x5f79b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f79b7:{NFSU2_TR(0x5f79b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f79b9:{NFSU2_TR(0x5f79b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f79bf:{NFSU2_TR(0x5f79bf);
if(r1(R+518)){{goto L5f79d1;}}
}
B5f79c1:L5f79c1:{c.instructions+=2;NFSU2_TR(0x5f79c1);
__builtin_memmove((R+4),(R+28),4);
}
B5f79c3:{NFSU2_TR(0x5f79c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f79c8ull));
TAIL_STATIC(0x56d140u,56d);
}
B5f79c8:L5f79c8:{c.instructions+=2;NFSU2_TR(0x5f79c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f79c9:{NFSU2_TR(0x5f79c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f79ceull));
TAIL_STATIC(0x575630u,575);
}
B5f79ce:L5f79ce:{c.instructions+=1;NFSU2_TR(0x5f79ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f79d1:L5f79d1:{c.instructions+=4;NFSU2_TR(0x5f79d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f79d7:{NFSU2_TR(0x5f79d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f79dd:{NFSU2_TR(0x5f79dd);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5f79df:{NFSU2_TR(0x5f79df);
if(r1(R+518)){{goto L5f79e7;}}
}
B5f79e1:L5f79e1:{c.instructions+=3;NFSU2_TR(0x5f79e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f79e3:{NFSU2_TR(0x5f79e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f79e5:{NFSU2_TR(0x5f79e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f79e7ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5f79e7:L5f79e7:{c.instructions+=5;NFSU2_TR(0x5f79e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f79e8:{NFSU2_TR(0x5f79e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f79ee:{NFSU2_TR(0x5f79ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f79ef:{NFSU2_TR(0x5f79ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f79f0:{NFSU2_TR(0x5f79f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7a00:L5f7a00:{c.instructions+=13;NFSU2_TR(0x5f7a00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a02:{NFSU2_TR(0x5f7a02);
u8 U[4];
w4(U+0,u32(0x779c0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a07:{NFSU2_TR(0x5f7a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7a0d:{NFSU2_TR(0x5f7a0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a0e:{NFSU2_TR(0x5f7a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7a15:{NFSU2_TR(0x5f7a15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a16:{NFSU2_TR(0x5f7a16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a17:{NFSU2_TR(0x5f7a17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a18:{NFSU2_TR(0x5f7a18);
__builtin_memmove((R+24),(R+4),4);
}
B5f7a1a:{NFSU2_TR(0x5f7a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f7a1c:{NFSU2_TR(0x5f7a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7a1f:{NFSU2_TR(0x5f7a1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7a23:{NFSU2_TR(0x5f7a23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7a2f;}}
}
B5f7a25:L5f7a25:{c.instructions+=3;NFSU2_TR(0x5f7a25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f7a2b:{NFSU2_TR(0x5f7a2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7a2d:{NFSU2_TR(0x5f7a2d);
if(r1(R+518)){{goto L5f7a48;}}
}
B5f7a2f:L5f7a2f:{c.instructions+=3;NFSU2_TR(0x5f7a2f);
__builtin_memmove((R+0),gp(0x802228),4);
}
B5f7a34:{NFSU2_TR(0x5f7a34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7a36:{NFSU2_TR(0x5f7a36);
if(r1(R+518)){{goto L5f7a41;}}
}
B5f7a38:L5f7a38:{c.instructions+=3;NFSU2_TR(0x5f7a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7a3b:{NFSU2_TR(0x5f7a3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7a3f:{NFSU2_TR(0x5f7a3f);
if(r1(R+518)){{goto L5f7a48;}}
}
B5f7a41:L5f7a41:{c.instructions+=2;NFSU2_TR(0x5f7a41);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5f7a43:{NFSU2_TR(0x5f7a43);
{goto L5f7b74;}
}
B5f7a48:L5f7a48:{c.instructions+=4;NFSU2_TR(0x5f7a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7a4e:{NFSU2_TR(0x5f7a4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7a50:{NFSU2_TR(0x5f7a50);
w1(R+12,u8(0x1ull));
}
B5f7a52:{NFSU2_TR(0x5f7a52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7b47;}}
}
B5f7a58:L5f7a58:{c.instructions+=3;NFSU2_TR(0x5f7a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7a5e:{NFSU2_TR(0x5f7a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7a60:{NFSU2_TR(0x5f7a60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7a98;}}
}
B5f7a62:L5f7a62:{c.instructions+=2;NFSU2_TR(0x5f7a62);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7a67:{NFSU2_TR(0x5f7a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7a6cull));
TAIL_STATIC(0x575620u,575);
}
B5f7a6c:L5f7a6c:{c.instructions+=5;NFSU2_TR(0x5f7a6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f7a6f:{NFSU2_TR(0x5f7a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7a73:{NFSU2_TR(0x5f7a73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7a75:{NFSU2_TR(0x5f7a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7a7d:{NFSU2_TR(0x5f7a7d);
if(r1(R+518)){{goto L5f7a88;}}
}
B5f7a7f:L5f7a7f:{c.instructions+=2;NFSU2_TR(0x5f7a7f);
__builtin_memmove((R+4),(R+0),4);
}
B5f7a81:{NFSU2_TR(0x5f7a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7a86ull));
TAIL_STATIC(0x56ebe0u,56e);
}
B5f7a86:L5f7a86:{c.instructions+=1;NFSU2_TR(0x5f7a86);
{goto L5f7a8a;}
}
B5f7a88:L5f7a88:{c.instructions+=1;NFSU2_TR(0x5f7a88);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f7a8a:L5f7a8a:{c.instructions+=2;NFSU2_TR(0x5f7a8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7a92:{NFSU2_TR(0x5f7a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7a98:L5f7a98:{c.instructions+=3;NFSU2_TR(0x5f7a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7a9e:{NFSU2_TR(0x5f7a9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7aa0:{NFSU2_TR(0x5f7aa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7ad6;}}
}
B5f7aa2:L5f7aa2:{c.instructions+=2;NFSU2_TR(0x5f7aa2);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7aa4:{NFSU2_TR(0x5f7aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7aa9ull));
TAIL_STATIC(0x575620u,575);
}
B5f7aa9:L5f7aa9:{c.instructions+=5;NFSU2_TR(0x5f7aa9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f7aac:{NFSU2_TR(0x5f7aac);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7ab0:{NFSU2_TR(0x5f7ab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7ab2:{NFSU2_TR(0x5f7ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7aba:{NFSU2_TR(0x5f7aba);
if(r1(R+518)){{goto L5f7ac6;}}
}
B5f7abc:L5f7abc:{c.instructions+=3;NFSU2_TR(0x5f7abc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7abd:{NFSU2_TR(0x5f7abd);
__builtin_memmove((R+4),(R+0),4);
}
B5f7abf:{NFSU2_TR(0x5f7abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7ac4ull));
TAIL_STATIC(0x56cdf0u,56c);
}
B5f7ac4:L5f7ac4:{c.instructions+=1;NFSU2_TR(0x5f7ac4);
{goto L5f7ac8;}
}
B5f7ac6:L5f7ac6:{c.instructions+=1;NFSU2_TR(0x5f7ac6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f7ac8:L5f7ac8:{c.instructions+=2;NFSU2_TR(0x5f7ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7ad0:{NFSU2_TR(0x5f7ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7ad6:L5f7ad6:{c.instructions+=3;NFSU2_TR(0x5f7ad6);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B5f7adb:{NFSU2_TR(0x5f7adb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7add:{NFSU2_TR(0x5f7add);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7ae8;}}
}
B5f7adf:L5f7adf:{c.instructions+=3;NFSU2_TR(0x5f7adf);
__builtin_memmove((R+0),gp(0x890104),4);
}
B5f7ae4:{NFSU2_TR(0x5f7ae4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7ae6:{NFSU2_TR(0x5f7ae6);
if(r1(R+518)){{goto L5f7b23;}}
}
B5f7ae8:L5f7ae8:{c.instructions+=2;NFSU2_TR(0x5f7ae8);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7aea:{NFSU2_TR(0x5f7aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7aefull));
TAIL_STATIC(0x575620u,575);
}
B5f7aef:L5f7aef:{c.instructions+=5;NFSU2_TR(0x5f7aef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f7af2:{NFSU2_TR(0x5f7af2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7af6:{NFSU2_TR(0x5f7af6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7af8:{NFSU2_TR(0x5f7af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7b00:{NFSU2_TR(0x5f7b00);
if(r1(R+518)){{goto L5f7b15;}}
}
B5f7b02:L5f7b02:{c.instructions+=2;NFSU2_TR(0x5f7b02);
__builtin_memmove((R+4),(R+0),4);
}
B5f7b04:{NFSU2_TR(0x5f7b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7b09ull));
TAIL_STATIC(0x56c8f0u,56c);
}
B5f7b09:L5f7b09:{c.instructions+=3;NFSU2_TR(0x5f7b09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7b11:{NFSU2_TR(0x5f7b11);
__builtin_memmove((R+4),(R+0),4);
}
B5f7b13:{NFSU2_TR(0x5f7b13);
{goto L5f7b25;}
}
B5f7b15:L5f7b15:{c.instructions+=4;NFSU2_TR(0x5f7b15);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5f7b17:{NFSU2_TR(0x5f7b17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5f7b1f:{NFSU2_TR(0x5f7b1f);
__builtin_memmove((R+4),(R+0),4);
}
B5f7b21:{NFSU2_TR(0x5f7b21);
{goto L5f7b25;}
}
B5f7b23:L5f7b23:{c.instructions+=1;NFSU2_TR(0x5f7b23);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5f7b25:L5f7b25:{c.instructions+=3;NFSU2_TR(0x5f7b25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7b26:{NFSU2_TR(0x5f7b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7b2c:{NFSU2_TR(0x5f7b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7b31ull));
TAIL_STATIC(0x56d7d0u,56d);
}
B5f7b31:L5f7b31:{c.instructions+=2;NFSU2_TR(0x5f7b31);
u8 U[8];
__builtin_memmove((U+0),gp(0x864630),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x864630ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7b3b:{NFSU2_TR(0x5f7b3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7b47;}}
}
B5f7b3d:L5f7b3d:{c.instructions+=2;NFSU2_TR(0x5f7b3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7b3f:{NFSU2_TR(0x5f7b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7b44ull));
TAIL_STATIC(0x56d850u,56d);
}
B5f7b44:L5f7b44:{c.instructions+=1;NFSU2_TR(0x5f7b44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5f7b47:L5f7b47:{c.instructions+=4;NFSU2_TR(0x5f7b47);
__builtin_memmove((R+0),gp(0x865154),4);
}
B5f7b4c:{NFSU2_TR(0x5f7b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7b52:{NFSU2_TR(0x5f7b52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7b53:{NFSU2_TR(0x5f7b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7b58ull));
TAIL_STATIC(0x56ed40u,56e);
}
B5f7b58:L5f7b58:{c.instructions+=3;NFSU2_TR(0x5f7b58);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B5f7b5d:{NFSU2_TR(0x5f7b5d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7b5f:{NFSU2_TR(0x5f7b5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7b74;}}
}
B5f7b61:L5f7b61:{c.instructions+=3;NFSU2_TR(0x5f7b61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f7b65:{NFSU2_TR(0x5f7b65);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7b67:{NFSU2_TR(0x5f7b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7b74;}}
}
B5f7b69:L5f7b69:{c.instructions+=2;NFSU2_TR(0x5f7b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7b6f:{NFSU2_TR(0x5f7b6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7b74ull));
TAIL_STATIC(0x56d710u,56d);
}
B5f7b74:L5f7b74:{c.instructions+=3;NFSU2_TR(0x5f7b74);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7b76:{NFSU2_TR(0x5f7b76);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7b7c:{NFSU2_TR(0x5f7b7c);
if(r1(R+518)){{goto L5f7b8d;}}
}
B5f7b7e:L5f7b7e:{c.instructions+=5;NFSU2_TR(0x5f7b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7b84:{NFSU2_TR(0x5f7b84);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7b86:{NFSU2_TR(0x5f7b86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f7b88:{NFSU2_TR(0x5f7b88);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7b8b:{NFSU2_TR(0x5f7b8b);
{goto L5f7bb8;}
}
B5f7b8d:L5f7b8d:{c.instructions+=5;NFSU2_TR(0x5f7b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f7b8f:{NFSU2_TR(0x5f7b8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7b92:{NFSU2_TR(0x5f7b92);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f7b98:{NFSU2_TR(0x5f7b98);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7b9a:{NFSU2_TR(0x5f7b9a);
if(r1(R+518)){{goto L5f7bb8;}}
}
B5f7b9c:L5f7b9c:{c.instructions+=2;NFSU2_TR(0x5f7b9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7ba0:{NFSU2_TR(0x5f7ba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7bb8;}}
}
B5f7ba2:L5f7ba2:{c.instructions+=4;NFSU2_TR(0x5f7ba2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5f7ba6:{NFSU2_TR(0x5f7ba6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5f7bad:{NFSU2_TR(0x5f7bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7baf:{NFSU2_TR(0x5f7baf);
if(r1(R+518)){{goto L5f7bb8;}}
}
B5f7bb1:L5f7bb1:{c.instructions+=3;NFSU2_TR(0x5f7bb1);
__builtin_memmove((R+0),(R+4),4);
}
B5f7bb3:{NFSU2_TR(0x5f7bb3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7bb5:{NFSU2_TR(0x5f7bb5);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7bb8:L5f7bb8:{c.instructions+=4;NFSU2_TR(0x5f7bb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7bbb:{NFSU2_TR(0x5f7bbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7bbd:{NFSU2_TR(0x5f7bbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f7bc1:{NFSU2_TR(0x5f7bc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7bd6;}}
}
B5f7bc3:L5f7bc3:{c.instructions+=5;NFSU2_TR(0x5f7bc3);
__builtin_memmove((R+8),gp(0x890118),4);
}
B5f7bc9:{NFSU2_TR(0x5f7bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7bcf:{NFSU2_TR(0x5f7bcf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5f7bd0:{NFSU2_TR(0x5f7bd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f7bd2:{NFSU2_TR(0x5f7bd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f7bd6;}}
}
B5f7bd4:L5f7bd4:{c.instructions+=1;NFSU2_TR(0x5f7bd4);
__builtin_memmove((R+4),(R+0),4);
}
B5f7bd6:L5f7bd6:{c.instructions+=2;NFSU2_TR(0x5f7bd6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f7bd9:{NFSU2_TR(0x5f7bd9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f7bfc;}}
}
B5f7bdb:L5f7bdb:{c.instructions+=6;NFSU2_TR(0x5f7bdb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5f7bdd:{NFSU2_TR(0x5f7bdd);
{u32 ea_=u32(r4(R+24)+u32(400u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7be3:{NFSU2_TR(0x5f7be3);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f7bea:{NFSU2_TR(0x5f7bea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7bec:{NFSU2_TR(0x5f7bec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7bef:{NFSU2_TR(0x5f7bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7bfa;}}
}
B5f7bf1:L5f7bf1:{c.instructions+=2;NFSU2_TR(0x5f7bf1);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7bf8:{NFSU2_TR(0x5f7bf8);
{goto L5f7bfc;}
}
B5f7bfa:L5f7bfa:{c.instructions+=1;NFSU2_TR(0x5f7bfa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7bfc:L5f7bfc:{c.instructions+=3;NFSU2_TR(0x5f7bfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7bff:{NFSU2_TR(0x5f7bff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7c01:{NFSU2_TR(0x5f7c01);
if(r1(R+518)){{goto L5f7c1a;}}
}
B5f7c03:L5f7c03:{c.instructions+=7;NFSU2_TR(0x5f7c03);
{u32 ea_=u32(r4(R+24)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7c09:{NFSU2_TR(0x5f7c09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f7c0a:{NFSU2_TR(0x5f7c0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f7c0b:{NFSU2_TR(0x5f7c0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7c0f:{NFSU2_TR(0x5f7c0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7c16:{NFSU2_TR(0x5f7c16);
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
B5f7c19:{NFSU2_TR(0x5f7c19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7c1a:L5f7c1a:{c.instructions+=7;NFSU2_TR(0x5f7c1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7c1e:{NFSU2_TR(0x5f7c1e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7c20:{NFSU2_TR(0x5f7c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f7c21:{NFSU2_TR(0x5f7c21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f7c22:{NFSU2_TR(0x5f7c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7c29:{NFSU2_TR(0x5f7c29);
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
B5f7c2c:{NFSU2_TR(0x5f7c2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7c30:L5f7c30:{c.instructions+=10;NFSU2_TR(0x5f7c30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5f7c33:{NFSU2_TR(0x5f7c33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7c34:{NFSU2_TR(0x5f7c34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7c35:{NFSU2_TR(0x5f7c35);
__builtin_memmove((R+24),(R+4),4);
}
B5f7c37:{NFSU2_TR(0x5f7c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f7c39:{NFSU2_TR(0x5f7c39);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5f7c3b:{NFSU2_TR(0x5f7c3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7c3e:{NFSU2_TR(0x5f7c3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7c41:{NFSU2_TR(0x5f7c41);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7c44:{NFSU2_TR(0x5f7c44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7c5d;}}
}
B5f7c46:L5f7c46:{c.instructions+=2;NFSU2_TR(0x5f7c46);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a3a4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7c4c:{NFSU2_TR(0x5f7c4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7c5d;}}
}
B5f7c4e:L5f7c4e:{c.instructions+=3;NFSU2_TR(0x5f7c4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7c51:{NFSU2_TR(0x5f7c51);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5f7c57:{NFSU2_TR(0x5f7c57);
if(r1(R+518)){{goto L5f7eb6;}}
}
B5f7c5d:L5f7c5d:{c.instructions+=8;NFSU2_TR(0x5f7c5d);
{u32 ea_=u32(r4(R+0)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7c63:{NFSU2_TR(0x5f7c63);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f7c69:{NFSU2_TR(0x5f7c69);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7c6f:{NFSU2_TR(0x5f7c6f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7c70:{NFSU2_TR(0x5f7c70);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5f7c72:{NFSU2_TR(0x5f7c72);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+12)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f7c79:{NFSU2_TR(0x5f7c79);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7c7d:{NFSU2_TR(0x5f7c7d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7e4e;}}
}
B5f7c83:L5f7c83:{c.instructions+=6;NFSU2_TR(0x5f7c83);
w4(R+0,u32(0xbb4ull));
}
B5f7c88:{NFSU2_TR(0x5f7c88);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5f7c8a:{NFSU2_TR(0x5f7c8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7c8b:{NFSU2_TR(0x5f7c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7c8e:{NFSU2_TR(0x5f7c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7c92:{NFSU2_TR(0x5f7c92);
{goto L5f7ca0;}
}
B5f7c94:L5f7c94:{c.instructions+=2;NFSU2_TR(0x5f7c94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7c98:{NFSU2_TR(0x5f7c98);
{goto L5f7ca0;}
}
B5f7ca0:L5f7ca0:{c.instructions+=12;NFSU2_TR(0x5f7ca0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5f7ca2:{NFSU2_TR(0x5f7ca2);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7ca5:{NFSU2_TR(0x5f7ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7ca9:{NFSU2_TR(0x5f7ca9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7cad:{NFSU2_TR(0x5f7cad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7cb1:{NFSU2_TR(0x5f7cb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7cb2:{NFSU2_TR(0x5f7cb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7cb3:{NFSU2_TR(0x5f7cb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7cb7:{NFSU2_TR(0x5f7cb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7cb8:{NFSU2_TR(0x5f7cb8);
__builtin_memmove((R+4),(R+24),4);
}
B5f7cba:{NFSU2_TR(0x5f7cba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7cbe:{NFSU2_TR(0x5f7cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7cc3ull));
TAIL_STATIC(0x5ee150u,5ee);
}
B5f7cc3:L5f7cc3:{c.instructions+=2;NFSU2_TR(0x5f7cc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7cc5:{NFSU2_TR(0x5f7cc5);
if(r1(R+518)){{goto L5f7e34;}}
}
B5f7ccb:L5f7ccb:{c.instructions+=2;NFSU2_TR(0x5f7ccb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5f7ccf:{NFSU2_TR(0x5f7ccf);
if(r1(R+518)){{goto L5f7e07;}}
}
B5f7cd5:L5f7cd5:{c.instructions+=4;NFSU2_TR(0x5f7cd5);
__builtin_memmove((R+8),gp(0x890118),4);
}
B5f7cdb:{NFSU2_TR(0x5f7cdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f7ce2:{NFSU2_TR(0x5f7ce2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7ce4:{NFSU2_TR(0x5f7ce4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7cfe;}}
}
B5f7ce6:L5f7ce6:{c.instructions+=7;NFSU2_TR(0x5f7ce6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5f7ce9:{NFSU2_TR(0x5f7ce9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f7cec:{NFSU2_TR(0x5f7cec);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B5f7cee:{NFSU2_TR(0x5f7cee);
__builtin_memmove((R+0),(R+8),1);
}
B5f7cf0:{NFSU2_TR(0x5f7cf0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f7cf2:{NFSU2_TR(0x5f7cf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7cf5:{NFSU2_TR(0x5f7cf5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7cfe;}}
}
B5f7cf7:L5f7cf7:{c.instructions+=2;NFSU2_TR(0x5f7cf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7cfa:{NFSU2_TR(0x5f7cfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f7cfe:L5f7cfe:{c.instructions+=6;NFSU2_TR(0x5f7cfe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+0,u16(s16(s8(r1(U+4)))));
}
B5f7d03:{NFSU2_TR(0x5f7d03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5f7d07:{NFSU2_TR(0x5f7d07);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5f7d09:{NFSU2_TR(0x5f7d09);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(R+0),r2(U+6)));
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f7d0d:{NFSU2_TR(0x5f7d0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f7d11:{NFSU2_TR(0x5f7d11);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7e34;}}
}
B5f7d17:L5f7d17:{c.instructions+=9;NFSU2_TR(0x5f7d17);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5f7d1b:{NFSU2_TR(0x5f7d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7d1f:{NFSU2_TR(0x5f7d1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5f7d23:{NFSU2_TR(0x5f7d23);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5f7d29:{NFSU2_TR(0x5f7d29);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5f7d2b:{NFSU2_TR(0x5f7d2b);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7d30:{NFSU2_TR(0x5f7d30);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7d34:{NFSU2_TR(0x5f7d34);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7d38:{NFSU2_TR(0x5f7d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7d3dull));
TAIL_STATIC(0x577400u,577);
}
B5f7d3d:L5f7d3d:{c.instructions+=3;NFSU2_TR(0x5f7d3d);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B5f7d42:{NFSU2_TR(0x5f7d42);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5f7d44:{NFSU2_TR(0x5f7d44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7dd1;}}
}
B5f7d4a:L5f7d4a:{c.instructions+=3;NFSU2_TR(0x5f7d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7d4d:{NFSU2_TR(0x5f7d4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7d4f:{NFSU2_TR(0x5f7d4f);
if(r1(R+518)){{goto L5f7dc8;}}
}
B5f7d51:L5f7d51:{c.instructions+=2;NFSU2_TR(0x5f7d51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7d56:{NFSU2_TR(0x5f7d56);
if(r1(R+518)){{goto L5f7dc8;}}
}
B5f7d58:L5f7d58:{c.instructions+=10;NFSU2_TR(0x5f7d58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f7d5a:{NFSU2_TR(0x5f7d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7d5e:{NFSU2_TR(0x5f7d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7d61:{NFSU2_TR(0x5f7d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B5f7d64:{NFSU2_TR(0x5f7d64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5f7d66:{NFSU2_TR(0x5f7d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7d69:{NFSU2_TR(0x5f7d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7d6c:{NFSU2_TR(0x5f7d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5f7d6e:{NFSU2_TR(0x5f7d6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5f7d71:{NFSU2_TR(0x5f7d71);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f7d76;}}
}
B5f7d73:L5f7d73:{c.instructions+=1;NFSU2_TR(0x5f7d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7d76:L5f7d76:{c.instructions+=4;NFSU2_TR(0x5f7d76);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f7d7c:{NFSU2_TR(0x5f7d7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5f7d83:{NFSU2_TR(0x5f7d83);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7d85:{NFSU2_TR(0x5f7d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7dc8;}}
}
B5f7d87:L5f7d87:{c.instructions+=3;NFSU2_TR(0x5f7d87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7d8a:{NFSU2_TR(0x5f7d8a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B5f7d8c:{NFSU2_TR(0x5f7d8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f7dc8;}}
}
B5f7d8e:L5f7d8e:{c.instructions+=2;NFSU2_TR(0x5f7d8e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x15ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x15ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5f7d90:{NFSU2_TR(0x5f7d90);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f7dc8;}}
}
B5f7d92:L5f7d92:{c.instructions+=9;NFSU2_TR(0x5f7d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5f7d94:{NFSU2_TR(0x5f7d94);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5f7d97:{NFSU2_TR(0x5f7d97);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f7d9e:{NFSU2_TR(0x5f7d9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f7da2:{NFSU2_TR(0x5f7da2);
u8 U[16];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5f7da9:{NFSU2_TR(0x5f7da9);
u8 U[16];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5f7db0:{NFSU2_TR(0x5f7db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7db3:{NFSU2_TR(0x5f7db3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+0)));
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5f7db5:{NFSU2_TR(0x5f7db5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5f7dc8;}}
}
B5f7db7:L5f7db7:{c.instructions+=3;NFSU2_TR(0x5f7db7);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5f7dba:{NFSU2_TR(0x5f7dba);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5f7dc1:{NFSU2_TR(0x5f7dc1);
u8 U[16];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(r4(R+4))));
s4(u32(r4(U+8)),r4(U+12));
}
B5f7dc8:L5f7dc8:{c.instructions+=3;NFSU2_TR(0x5f7dc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7dcc:{NFSU2_TR(0x5f7dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7dcf:{NFSU2_TR(0x5f7dcf);
{goto L5f7e34;}
}
B5f7dd1:L5f7dd1:{c.instructions+=2;NFSU2_TR(0x5f7dd1);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7dd8:{NFSU2_TR(0x5f7dd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7e34;}}
}
B5f7dda:L5f7dda:{c.instructions+=4;NFSU2_TR(0x5f7dda);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f7ddf:{NFSU2_TR(0x5f7ddf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f7de6:{NFSU2_TR(0x5f7de6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7de8:{NFSU2_TR(0x5f7de8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7e34;}}
}
B5f7dea:L5f7dea:{c.instructions+=4;NFSU2_TR(0x5f7dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7ded:{NFSU2_TR(0x5f7ded);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7def:{NFSU2_TR(0x5f7def);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7df3:{NFSU2_TR(0x5f7df3);
if(r1(R+518)){{goto L5f7e02;}}
}
B5f7df5:L5f7df5:{c.instructions+=2;NFSU2_TR(0x5f7df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7dfa:{NFSU2_TR(0x5f7dfa);
if(r1(R+518)){{goto L5f7e02;}}
}
B5f7dfc:L5f7dfc:{c.instructions+=3;NFSU2_TR(0x5f7dfc);
__builtin_memmove((R+8),(R+4),4);
}
B5f7dfe:{NFSU2_TR(0x5f7dfe);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5f7e00:{NFSU2_TR(0x5f7e00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5f7e02:L5f7e02:{c.instructions+=2;NFSU2_TR(0x5f7e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7e05:{NFSU2_TR(0x5f7e05);
{goto L5f7e34;}
}
B5f7e07:L5f7e07:{c.instructions+=4;NFSU2_TR(0x5f7e07);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f7e0c:{NFSU2_TR(0x5f7e0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbf7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5f7e13:{NFSU2_TR(0x5f7e13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7e15:{NFSU2_TR(0x5f7e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7e34;}}
}
B5f7e17:L5f7e17:{c.instructions+=10;NFSU2_TR(0x5f7e17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7e1a:{NFSU2_TR(0x5f7e1a);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B5f7e1c:{NFSU2_TR(0x5f7e1c);
__builtin_memmove((R+4),(R+0),1);
}
B5f7e1e:{NFSU2_TR(0x5f7e1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7e21:{NFSU2_TR(0x5f7e21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7e24:{NFSU2_TR(0x5f7e24);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B5f7e27:{NFSU2_TR(0x5f7e27);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B5f7e2a:{NFSU2_TR(0x5f7e2a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5f7e2b:{NFSU2_TR(0x5f7e2b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f7e2d:{NFSU2_TR(0x5f7e2d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5f7e34;}}
}
B5f7e2f:L5f7e2f:{c.instructions+=2;NFSU2_TR(0x5f7e2f);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B5f7e31:{NFSU2_TR(0x5f7e31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7e34:L5f7e34:{c.instructions+=6;NFSU2_TR(0x5f7e34);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f7e3a:{NFSU2_TR(0x5f7e3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5f7e41:{NFSU2_TR(0x5f7e41);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5f7e42:{NFSU2_TR(0x5f7e42);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5f7e45:{NFSU2_TR(0x5f7e45);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f7e47:{NFSU2_TR(0x5f7e47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5f7c94u);}goto L5f7c94;}}
}
B5f7e4d:L5f7e4d:{c.instructions+=1;NFSU2_TR(0x5f7e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7e4e:L5f7e4e:{c.instructions+=5;NFSU2_TR(0x5f7e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5f7e52:{NFSU2_TR(0x5f7e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7e55:{NFSU2_TR(0x5f7e55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7e56:{NFSU2_TR(0x5f7e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7e5a:{NFSU2_TR(0x5f7e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7e5full));
TAIL_STATIC(0x5ee9b0u,5ee);
}
B5f7e5f:L5f7e5f:{c.instructions+=12;NFSU2_TR(0x5f7e5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f7e63:{NFSU2_TR(0x5f7e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7e67:{NFSU2_TR(0x5f7e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5f7e68:{NFSU2_TR(0x5f7e68);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7e6c:{NFSU2_TR(0x5f7e6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f7e6e:{NFSU2_TR(0x5f7e6e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f7e71:{NFSU2_TR(0x5f7e71);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f7e74:{NFSU2_TR(0x5f7e74);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7e7a:{NFSU2_TR(0x5f7e7a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5f7e80:{NFSU2_TR(0x5f7e80);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7e82:{NFSU2_TR(0x5f7e82);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7e85:{NFSU2_TR(0x5f7e85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7ead;}}
}
B5f7e87:L5f7e87:{c.instructions+=9;NFSU2_TR(0x5f7e87);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7e8b:{NFSU2_TR(0x5f7e8b);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f7e91:{NFSU2_TR(0x5f7e91);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7e97:{NFSU2_TR(0x5f7e97);
{u32 ea_=u32(u32(8017548u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7e9d:{NFSU2_TR(0x5f7e9d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7ea0:{NFSU2_TR(0x5f7ea0);
{u32 ea_=u32(u32(8017548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7ea6:{NFSU2_TR(0x5f7ea6);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5f7ea8:{NFSU2_TR(0x5f7ea8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5f7eaa:{NFSU2_TR(0x5f7eaa);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7ead:L5f7ead:{c.instructions+=3;NFSU2_TR(0x5f7ead);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7eb1:{NFSU2_TR(0x5f7eb1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7eb3:{NFSU2_TR(0x5f7eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7eb6:L5f7eb6:{c.instructions+=4;NFSU2_TR(0x5f7eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5f7eb7:{NFSU2_TR(0x5f7eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5f7eb8:{NFSU2_TR(0x5f7eb8);
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
B5f7ebb:{NFSU2_TR(0x5f7ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5f7ec0:L5f7ec0:{c.instructions+=20;NFSU2_TR(0x5f7ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5f7ec3:{NFSU2_TR(0x5f7ec3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7ec7:{NFSU2_TR(0x5f7ec7);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5f7ecc:{NFSU2_TR(0x5f7ecc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7ecd:{NFSU2_TR(0x5f7ecd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7ece:{NFSU2_TR(0x5f7ece);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7ed2:{NFSU2_TR(0x5f7ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5f7ed6:{NFSU2_TR(0x5f7ed6);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7edc:{NFSU2_TR(0x5f7edc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7edd:{NFSU2_TR(0x5f7edd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5f7ee1:{NFSU2_TR(0x5f7ee1);
__builtin_memmove((R+24),(R+4),4);
}
B5f7ee3:{NFSU2_TR(0x5f7ee3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B5f7ee6:{NFSU2_TR(0x5f7ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7eea:{NFSU2_TR(0x5f7eea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7eeb:{NFSU2_TR(0x5f7eeb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5f7eef:{NFSU2_TR(0x5f7eef);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7ef2:{NFSU2_TR(0x5f7ef2);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5f7ef8:{NFSU2_TR(0x5f7ef8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5f7efa:{NFSU2_TR(0x5f7efa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5f7efd:{NFSU2_TR(0x5f7efd);
if(r1(R+514)){{goto L5f7f07;}}
}
B5f7eff:L5f7eff:{c.instructions+=2;NFSU2_TR(0x5f7eff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7f01:{NFSU2_TR(0x5f7f01);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7f07:L5f7f07:{c.instructions+=12;NFSU2_TR(0x5f7f07);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7f0d:{NFSU2_TR(0x5f7f0d);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5f7f12:{NFSU2_TR(0x5f7f12);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5f7f14:{NFSU2_TR(0x5f7f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7f17:{NFSU2_TR(0x5f7f17);
w4(R+12,u32(0x1ull));
}
B5f7f1c:{NFSU2_TR(0x5f7f1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5f7f1e:{NFSU2_TR(0x5f7f1e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7f22:{NFSU2_TR(0x5f7f22);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7f24:{NFSU2_TR(0x5f7f24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7f28:{NFSU2_TR(0x5f7f28);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7f2c:{NFSU2_TR(0x5f7f2c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7f32:{NFSU2_TR(0x5f7f32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5f7fc7;}}
}
B5f7f38:L5f7f38:{c.instructions+=3;NFSU2_TR(0x5f7f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5f7f3e:{NFSU2_TR(0x5f7f3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7f40:{NFSU2_TR(0x5f7f40);
if(r1(R+518)){{goto L5f7fc7;}}
}
B5f7f46:L5f7f46:{c.instructions+=2;NFSU2_TR(0x5f7f46);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5f7f48:{NFSU2_TR(0x5f7f48);
if(r1(R+518)){{goto L5f7fc7;}}
}
B5f7f4a:L5f7f4a:{c.instructions+=2;NFSU2_TR(0x5f7f4a);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5f7f4e:{NFSU2_TR(0x5f7f4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7fc7;}}
}
B5f7f50:L5f7f50:{c.instructions+=3;NFSU2_TR(0x5f7f50);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5f7f56:{NFSU2_TR(0x5f7f56);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7f58:{NFSU2_TR(0x5f7f58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5f7fc7;}}
}
B5f7f5a:L5f7f5a:{c.instructions+=8;NFSU2_TR(0x5f7f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5f7f5e:{NFSU2_TR(0x5f7f5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5f7f60:{NFSU2_TR(0x5f7f60);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7f63:{NFSU2_TR(0x5f7f63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7f64:{NFSU2_TR(0x5f7f64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7f65:{NFSU2_TR(0x5f7f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7f6b:{NFSU2_TR(0x5f7f6b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7f6e:{NFSU2_TR(0x5f7f6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7f73ull));
TAIL_STATIC(0x5edd90u,5ed);
}
B5f7f73:L5f7f73:{c.instructions+=10;NFSU2_TR(0x5f7f73);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5f7f77:{NFSU2_TR(0x5f7f77);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5f7f7b:{NFSU2_TR(0x5f7f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5f7f7f:{NFSU2_TR(0x5f7f7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7f80:{NFSU2_TR(0x5f7f80);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5f7f84:{NFSU2_TR(0x5f7f84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7f85:{NFSU2_TR(0x5f7f85);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5f7f8b:{NFSU2_TR(0x5f7f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5f7f91:{NFSU2_TR(0x5f7f91);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5f7f94:{NFSU2_TR(0x5f7f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7f99ull));
TAIL_STATIC(0x5edd90u,5ed);
}
B5f7f99:L5f7f99:{c.instructions+=6;NFSU2_TR(0x5f7f99);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5f7f9d:{NFSU2_TR(0x5f7f9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7fa3:{NFSU2_TR(0x5f7fa3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5f7fa7:{NFSU2_TR(0x5f7fa7);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7fad:{NFSU2_TR(0x5f7fad);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f7fb3:{NFSU2_TR(0x5f7fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7fb8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f7fb8:L5f7fb8:{c.instructions+=5;NFSU2_TR(0x5f7fb8);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5f7fbe:{NFSU2_TR(0x5f7fbe);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5f7fc0:{NFSU2_TR(0x5f7fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B5f7fc3:{NFSU2_TR(0x5f7fc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5f7fc5:{NFSU2_TR(0x5f7fc5);
{goto L5f7fe0;}
}
B5f7fc7:L5f7fc7:{c.instructions+=4;NFSU2_TR(0x5f7fc7);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5f7fcd:{NFSU2_TR(0x5f7fcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5f7fd3:{NFSU2_TR(0x5f7fd3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5f7fd9:{NFSU2_TR(0x5f7fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7fdeull));
TAIL_STATIC(0x75bed4u,75b);
}
B5f7fde:L5f7fde:{c.instructions+=1;NFSU2_TR(0x5f7fde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5f7fe0:L5f7fe0:{c.instructions+=3;NFSU2_TR(0x5f7fe0);
u8 U[4];
w4(U+0,u32(0x3c23d70aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5f7fe5:{NFSU2_TR(0x5f7fe5);
__builtin_memmove((R+4),(R+28),4);
}
B5f7fe7:{NFSU2_TR(0x5f7fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5f7fecull));
TAIL_STATIC(0x577400u,577);
}
B5f7fec:L5f7fec:{c.instructions+=4;NFSU2_TR(0x5f7fec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5f7fef:{NFSU2_TR(0x5f7fef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5f7ff1:{NFSU2_TR(0x5f7ff1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5f7ff7:{NFSU2_TR(0x5f7ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5f8066u,5f8);}
}
B5f7ff9:L5f7ff9:{c.instructions+=3;NFSU2_TR(0x5f7ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5f7ffd:{NFSU2_TR(0x5f7ffd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5f7fff:{NFSU2_TR(0x5f7fff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5f8066u,5f8);}
TAIL_STATIC(0x5f8001u,5f8);
}
XIT:NFSU2_TR_EXIT(0x5f7,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
